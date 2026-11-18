// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// UpdatePositionBasedState @ 1438dbb70

void __thiscall
Chaos::FPBDConstraintContainer::UpdatePositionBasedState
          (FPBDConstraintContainer *this,double param_1)

{
  return;
}

// FPBDConstraintContainer @ 143c43da0

FPBDConstraintContainer * __thiscall
Chaos::FPBDConstraintContainer::FPBDConstraintContainer
          (FPBDConstraintContainer *this,FConstraintHandleTypeID *param_1)

{
  FName FVar1;
  FConstraintHandleTypeID *pFVar2;
  
  FVar1 = param_1->TypeName;
  pFVar2 = param_1->BaseType;
  this->ContainerId = -1;
  this->_padding_ = (longlong)&___7FPBDConstraintContainer_Chaos__6B_;
  (this->ConstraintHandleType).TypeName = FVar1;
  (this->ConstraintHandleType).BaseType = pFVar2;
  return this;
}

// ~FPBDConstraintContainer @ 143c45600

void __thiscall
Chaos::FPBDConstraintContainer::~FPBDConstraintContainer(FPBDConstraintContainer *this)

{
  this->_padding_ = (longlong)&___7FPBDConstraintContainer_Chaos__6B_;
  return;
}

// DisconnectConstraints @ 143c64f30

void __thiscall
Chaos::FPBDConstraintContainer::DisconnectConstraints
          (FPBDConstraintContainer *this,
          TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  return;
}

// OnDisableParticle @ 143c6bb60

void __thiscall
Chaos::FPBDConstraintContainer::OnDisableParticle
          (FPBDConstraintContainer *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pTVar6 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  pFVar7 = (pTVar6->AllocatorInstance).Data;
  iVar2 = pTVar6->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar6->ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FConstraintHandle_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar1) break;
    plVar3 = *(longlong **)pFVar7;
    if (plVar3[1] == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(plVar3[1] + 0x18);
    }
    if (iVar5 == this->ContainerId) {
      cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (cVar4 != '\0') {
        (**(code **)(*plVar3 + 0x18))(plVar3,0);
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// OnEnableParticle @ 143c6bc10

void __thiscall
Chaos::FPBDConstraintContainer::OnEnableParticle
          (FPBDConstraintContainer *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pTVar6 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  pFVar7 = (pTVar6->AllocatorInstance).Data;
  iVar2 = pTVar6->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar6->ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FConstraintHandle_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar1) break;
    plVar3 = *(longlong **)pFVar7;
    if (plVar3[1] == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(plVar3[1] + 0x18);
    }
    if (iVar5 == this->ContainerId) {
      cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (cVar4 == '\0') {
        (**(code **)(*plVar3 + 0x18))(plVar3,1);
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

