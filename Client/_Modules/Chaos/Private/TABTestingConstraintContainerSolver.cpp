// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd> @ 143c42d50

TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
* __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *this,TUniquePtr<Chaos::FPBDCollisionContainerSolver,TDefaultDelete<Chaos::FPBDCollisionContainerSolver>_>
                 *param_1,
          TUniquePtr<Chaos::Private::FPBDCollisionContainerSolverSimd,TDefaultDelete<Chaos::Private::FPBDCollisionContainerSolverSimd>_>
          *param_2,int param_3,
          function<void___cdecl(Chaos::Private::TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>::ESolverPhase,Chaos::FPBDCollisionContainerSolver_const_&,Chaos::Private::FPBDCollisionContainerSolverSimd_const_&,Chaos::FSolverBodyContainer_const_&,Chaos::FSolverBodyContainer_const_&)>
          *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *(int *)&this->_padding_ = param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TABTestingConstraintContainerSolver_VFPBDCollisionContainerSolver_Chaos__VFPBDCollisionContainerSolverSimd_Private_2__Private_Chaos__6B_
  ;
  (this->SolverA).Ptr = param_1->Ptr;
  param_1->Ptr = (FPBDCollisionContainerSolver *)0x0;
  (this->SolverB).Ptr = param_2->Ptr;
  param_2->Ptr = (FPBDCollisionContainerSolverSimd *)0x0;
  this->SolverBodyContainerA = (FSolverBodyContainer *)0x0;
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *)
             &this->SolverBodyContainerB,0);
  (this->SolverBodyContainerB).Particles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverBodyContainerB).Particles.ArrayNum = 0;
  (this->SolverBodyContainerB).Particles.ArrayMax = 0;
  *(undefined8 *)&(this->SolverBodyContainerB).ParticleToIndexMap = 0;
  *(undefined8 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x20 = 0;
  *(undefined4 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x34 = 0;
  *(undefined8 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->SolverBodyContainerB).ParticleToIndexMap.field_0x48 = 0;
  (this->SolverBodyContainerB).bLocked = true;
  *(undefined8 *)&(this->ABTestFunctor).field_0x38 = 0;
  puVar1 = *(undefined8 **)&param_4->field_0x38;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&this->ABTestFunctor);
    *(undefined8 *)&(this->ABTestFunctor).field_0x38 = uVar2;
  }
  return this;
}

// AddBodies @ 143c55310

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::AddBodies(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
            *this,FSolverBodyContainer *param_1)

{
  this->SolverBodyContainerA = param_1;
  FPBDCollisionContainerSolver::AddBodies((this->SolverA).Ptr,param_1);
  return;
}

// AddConstraints @ 143c56150

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::AddConstraints(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
                 *this,TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  FPBDCollisionContainerSolver::AddConstraints((this->SolverA).Ptr,param_1);
  FPBDCollisionContainerSolverSimd::AddConstraints((this->SolverB).Ptr,param_1);
  return;
}

// AddConstraints @ 143c56190

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::AddConstraints(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
                 *this)

{
  FPBDCollisionContainerSolver::AddConstraints((this->SolverA).Ptr);
  FPBDCollisionContainerSolverSimd::AddConstraints((this->SolverB).Ptr);
  return;
}

// ApplyPositionConstraints @ 143c5b5b0

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::ApplyPositionConstraints
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *this,double param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  FPBDCollisionContainerSolver::ApplyPositionConstraints
            ((this->SolverA).Ptr,param_1,param_2,param_3);
  FPBDCollisionContainerSolverSimd::ApplyPositionConstraints
            ((this->SolverB).Ptr,param_1,param_2,param_3);
  plVar1 = *(longlong **)&(this->ABTestFunctor).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = 1;
    (**(code **)(*plVar1 + 0x10))
              (plVar1,local_res8,(this->SolverA).Ptr,(this->SolverB).Ptr,this->SolverBodyContainerA,
               &this->SolverBodyContainerB);
  }
  return;
}

// ApplyProjectionConstraints @ 143c5b650

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::ApplyProjectionConstraints
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *this,double param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  FPBDCollisionContainerSolver::ApplyProjectionConstraints
            ((this->SolverA).Ptr,param_1,param_2,param_3);
  FPBDCollisionContainerSolverSimd::ApplyProjectionConstraints
            ((this->SolverB).Ptr,param_1,param_2,param_3);
  plVar1 = *(longlong **)&(this->ABTestFunctor).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = 5;
    (**(code **)(*plVar1 + 0x10))
              (plVar1,local_res8,(this->SolverA).Ptr,(this->SolverB).Ptr,this->SolverBodyContainerA,
               &this->SolverBodyContainerB);
  }
  return;
}

// ApplyVelocityConstraints @ 143c5ba70

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::ApplyVelocityConstraints
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *this,double param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  FPBDCollisionContainerSolver::ApplyVelocityConstraints
            ((this->SolverA).Ptr,param_1,param_2,param_3);
  FPBDCollisionContainerSolverSimd::ApplyVelocityConstraints
            ((this->SolverB).Ptr,param_1,param_2,param_3);
  plVar1 = *(longlong **)&(this->ABTestFunctor).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = 3;
    (**(code **)(*plVar1 + 0x10))
              (plVar1,local_res8,(this->SolverA).Ptr,(this->SolverB).Ptr,this->SolverBodyContainerA,
               &this->SolverBodyContainerB);
  }
  return;
}

// GatherInput @ 143c67850

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::GatherInput(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
              *this,double param_1)

{
  FPBDCollisionContainerSolver::GatherInput((this->SolverA).Ptr,param_1);
  return;
}

// GatherInput @ 143c67860

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::GatherInput(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
              *this,double param_1,int param_2,int param_3)

{
  FPBDCollisionContainerSolver::GatherInput((this->SolverA).Ptr,param_1,param_2,param_3);
  return;
}

// GetNumConstraints @ 143c69550

int __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::GetNumConstraints(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
                    *this)

{
  return (((this->SolverA).Ptr)->CollisionConstraints).ArrayNum;
}

// PreApplyPositionConstraints @ 143c6be70

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::PreApplyPositionConstraints
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *this,double param_1)

{
  FSolverBodyContainer *pFVar1;
  FPBDCollisionContainerSolver *pFVar2;
  FPBDCollisionContainerSolverSimd *pFVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  
  pFVar1 = &this->SolverBodyContainerB;
  FSolverBodyContainer::CopyTo(this->SolverBodyContainerA,pFVar1);
  FPBDCollisionContainerSolverSimd::AddBodies((this->SolverB).Ptr,pFVar1);
  FPBDCollisionContainerSolverSimd::GatherInput((this->SolverB).Ptr,param_1);
  pFVar2 = (this->SolverA).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,SUB84(param_1,0));
  pFVar3 = (this->SolverB).Ptr;
  (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,SUB84(param_1,0));
  plVar4 = *(longlong **)&(this->ABTestFunctor).field_0x38;
  if (plVar4 != (longlong *)0x0) {
    local_res8[0] = 0;
    (**(code **)(*plVar4 + 0x10))
              (plVar4,local_res8,(this->SolverA).Ptr,(this->SolverB).Ptr,this->SolverBodyContainerA,
               pFVar1);
  }
  return;
}

// PreApplyProjectionConstraints @ 143c6bf20

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::PreApplyProjectionConstraints
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *this,double param_1)

{
  FPBDCollisionContainerSolver *pFVar1;
  FPBDCollisionContainerSolverSimd *pFVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  
  FSolverBodyContainer::ApplyCorrections(&this->SolverBodyContainerB);
  pFVar1 = (this->SolverA).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,SUB84(param_1,0));
  pFVar2 = (this->SolverB).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,SUB84(param_1,0));
  plVar3 = *(longlong **)&(this->ABTestFunctor).field_0x38;
  if (plVar3 != (longlong *)0x0) {
    local_res8[0] = 4;
    (**(code **)(*plVar3 + 0x10))
              (plVar3,local_res8,(this->SolverA).Ptr,(this->SolverB).Ptr,this->SolverBodyContainerA,
               &this->SolverBodyContainerB);
  }
  return;
}

// PreApplyVelocityConstraints @ 143c6bfb0

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::PreApplyVelocityConstraints
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *this,double param_1)

{
  FPBDCollisionContainerSolver *pFVar1;
  FPBDCollisionContainerSolverSimd *pFVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  
  FSolverBodyContainer::SetImplicitVelocities(&this->SolverBodyContainerB,param_1);
  pFVar1 = (this->SolverA).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1,SUB84(param_1,0));
  pFVar2 = (this->SolverB).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,SUB84(param_1,0));
  plVar3 = *(longlong **)&(this->ABTestFunctor).field_0x38;
  if (plVar3 != (longlong *)0x0) {
    local_res8[0] = 4;
    (**(code **)(*plVar3 + 0x10))
              (plVar3,local_res8,(this->SolverA).Ptr,(this->SolverB).Ptr,this->SolverBodyContainerA,
               &this->SolverBodyContainerB);
  }
  return;
}

// Reset @ 143c70ce0

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::Reset(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
        *this,int param_1)

{
  FPBDCollisionContainerSolver::Reset((this->SolverA).Ptr,param_1);
  FPBDCollisionContainerSolverSimd::Reset((this->SolverB).Ptr,param_1);
  this->SolverBodyContainerA = (FSolverBodyContainer *)0x0;
  return;
}

// ScatterOutput @ 143c727f0

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::ScatterOutput(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
                *this,double param_1)

{
  FPBDCollisionContainerSolver::ScatterOutput((this->SolverA).Ptr,param_1);
  this->SolverBodyContainerA = (FSolverBodyContainer *)0x0;
  return;
}

// ScatterOutput @ 143c72820

void __thiscall
Chaos::Private::
TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
::ScatterOutput(TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
                *this,double param_1,int param_2,int param_3)

{
  FPBDCollisionContainerSolver::ScatterOutput((this->SolverA).Ptr,param_1,param_2,param_3);
  this->SolverBodyContainerA = (FSolverBodyContainer *)0x0;
  return;
}

