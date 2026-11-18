// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// SetAngularSLerpPositionDriveEnabled @ 1482a9b90

void __thiscall
Chaos::FJointConstraint::SetAngularSLerpPositionDriveEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSLerpPositionDriveEnabled = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetAngularSLerpVelocityDriveEnabled @ 1482a9bd0

void __thiscall
Chaos::FJointConstraint::SetAngularSLerpVelocityDriveEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSLerpVelocityDriveEnabled = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetAngularSwingPositionDriveEnabled @ 1482a9d70

void __thiscall
Chaos::FJointConstraint::SetAngularSwingPositionDriveEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSwingPositionDriveEnabled = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetAngularSwingVelocityDriveEnabled @ 1482a9db0

void __thiscall
Chaos::FJointConstraint::SetAngularSwingVelocityDriveEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSwingVelocityDriveEnabled = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetAngularTwistPositionDriveEnabled @ 1482a9df0

void __thiscall
Chaos::FJointConstraint::SetAngularTwistPositionDriveEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularTwistPositionDriveEnabled = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetAngularTwistVelocityDriveEnabled @ 1482a9e30

void __thiscall
Chaos::FJointConstraint::SetAngularTwistVelocityDriveEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularTwistVelocityDriveEnabled = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetLinearPositionDriveXEnabled @ 1482ac360

void __thiscall
Chaos::FJointConstraint::SetLinearPositionDriveXEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.X = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetLinearPositionDriveYEnabled @ 1482ac3a0

void __thiscall
Chaos::FJointConstraint::SetLinearPositionDriveYEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.Y = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetLinearPositionDriveZEnabled @ 1482ac3e0

void __thiscall
Chaos::FJointConstraint::SetLinearPositionDriveZEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.Z = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetLinearVelocityDriveXEnabled @ 1482ac7c0

void __thiscall
Chaos::FJointConstraint::SetLinearVelocityDriveXEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.X = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetLinearVelocityDriveYEnabled @ 1482ac800

void __thiscall
Chaos::FJointConstraint::SetLinearVelocityDriveYEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.Y = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetLinearVelocityDriveZEnabled @ 1482ac840

void __thiscall
Chaos::FJointConstraint::SetLinearVelocityDriveZEnabled(FJointConstraint *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.Z = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

