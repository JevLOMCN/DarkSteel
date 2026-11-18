// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// AddMassContribution @ 14389a770

void __thiscall
Chaos::FClusterUnionStressSolver::FNode::AddMassContribution
          (FNode *this,double param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  this->SumOfMassRatios = param_1 + this->SumOfMassRatios;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)&this->WeightedCenterOfMass;
  *(double *)&(this->WeightedCenterOfMass).field_0x10 =
       param_1 * *(double *)&param_2->field_0x10 +
       *(double *)&(this->WeightedCenterOfMass).field_0x10;
  *(double *)&(this->WeightedCenterOfMass).field_0x8 =
       param_1 * dVar1 + *(double *)&(this->WeightedCenterOfMass).field_0x8;
  *(double *)&this->WeightedCenterOfMass = param_1 * dVar2 + dVar3;
  return;
}

// IsRootNode @ 1438c39b0

bool __thiscall Chaos::FClusterUnionStressSolver::FNode::IsRootNode(FNode *this)

{
  EObjectStateType EVar1;
  TVector<double,3> *pTVar2;
  
  EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                    ((TPBDRigidParticleHandleImp<double,3,1> *)this->Particle);
  if (EVar1 == Kinematic) {
    pTVar2 = TParticles<double,3>::GetX
                       (*(TParticles<double,3> **)this->Particle,*(int *)&this->Particle->field_0x8)
    ;
    if (*(double *)&pTVar2->field_0x10 <= __real_4069000000000000 &&
        __real_4069000000000000 != *(double *)&pTVar2->field_0x10) {
      return true;
    }
  }
  return false;
}

