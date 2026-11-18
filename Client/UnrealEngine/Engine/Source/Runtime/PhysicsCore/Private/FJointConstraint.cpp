// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// SetJointTransforms @ 1441b79a0

void __thiscall
Chaos::FJointConstraint::SetJointTransforms
          (FJointConstraint *this,TVector<Chaos::TRigidTransform<double,3>,2> *param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)&param_1->V[0].field_0x8;
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  *(undefined8 *)(this->JointSettings).Property.ConnectorTransforms.V = *(undefined8 *)param_1->V;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[0].field_0x18;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x10 =
       *(undefined8 *)&param_1->V[0].field_0x10;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[0].field_0x28;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x20 =
       *(undefined8 *)&param_1->V[0].field_0x20;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[0].field_0x38;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x30 =
       *(undefined8 *)&param_1->V[0].field_0x30;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[0].field_0x48;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x40 =
       *(undefined8 *)&param_1->V[0].field_0x40;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[0].field_0x58;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x50 =
       *(undefined8 *)&param_1->V[0].field_0x50;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x58 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[1].field_0x8;
  *(undefined8 *)((this->JointSettings).Property.ConnectorTransforms.V + 1) =
       *(undefined8 *)(param_1->V + 1);
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[1].field_0x18;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x10 =
       *(undefined8 *)&param_1->V[1].field_0x10;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[1].field_0x28;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x20 =
       *(undefined8 *)&param_1->V[1].field_0x20;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[1].field_0x38;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x30 =
       *(undefined8 *)&param_1->V[1].field_0x30;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[1].field_0x48;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x40 =
       *(undefined8 *)&param_1->V[1].field_0x40;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&param_1->V[1].field_0x58;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x50 =
       *(undefined8 *)&param_1->V[1].field_0x50;
  *(undefined8 *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x58 = uVar2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

