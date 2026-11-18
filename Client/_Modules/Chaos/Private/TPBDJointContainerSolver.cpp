// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 46

// TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> @ 143b84510

TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::
TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,
          FPBDJointConstraints *param_1,int param_2)

{
  *(int *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)&___7__TPBDJointContainerSolver_VFPBDJointCachedSolver_Chaos___Private_Chaos__6B_;
  (this->ConstraintSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSolvers).ArrayNum = 0;
  (this->ConstraintSolvers).ArrayMax = 0;
  (this->ContainerIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContainerIndices).ArrayNum = 0;
  (this->ContainerIndices).ArrayMax = 0;
  this->ConstraintContainer = param_1;
  return this;
}

// TPBDJointContainerSolver<Chaos::FPBDJointSolver> @ 143b84540

TPBDJointContainerSolver<Chaos::FPBDJointSolver> * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::
TPBDJointContainerSolver<Chaos::FPBDJointSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,FPBDJointConstraints *param_1,
          int param_2)

{
  *(int *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)&___7__TPBDJointContainerSolver_VFPBDJointSolver_Chaos___Private_Chaos__6B_;
  (this->ConstraintSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSolvers).ArrayNum = 0;
  (this->ConstraintSolvers).ArrayMax = 0;
  (this->ContainerIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContainerIndices).ArrayNum = 0;
  (this->ContainerIndices).ArrayMax = 0;
  this->ConstraintContainer = param_1;
  return this;
}

// ~TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> @ 143b845c0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::
~TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TPBDJointContainerSolver_VFPBDJointCachedSolver_Chaos___Private_Chaos__6B_;
  pFVar1 = (this->ContainerIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  return;
}

// ~TPBDJointContainerSolver<Chaos::FPBDJointSolver> @ 143b84610

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::
~TPBDJointContainerSolver<Chaos::FPBDJointSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TPBDJointContainerSolver_VFPBDJointSolver_Chaos___Private_Chaos__6B_;
  pFVar1 = (this->ContainerIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  return;
}

// AddBodies @ 143b84840

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::AddBodies
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,
          FSolverBodyContainer *param_1)

{
  FGenericParticleHandle FVar1;
  FGenericParticleHandle FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar11 = (this->ContainerIndices).ArrayNum;
  uVar10 = 0;
  if (0 < iVar11) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar11) {
        uVar6 = ~uVar10 >> 0x1f;
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
      iVar11 = *(int *)((this->ContainerIndices).AllocatorInstance.Data + lVar12);
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,iVar11);
      FVar1.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[1];
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,iVar11);
      FVar2.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[0];
      pFVar8 = FSolverBodyContainer::FindOrAdd(param_1,FVar1);
      pFVar9 = FSolverBodyContainer::FindOrAdd(param_1,FVar2);
      uVar6 = 0;
      if ((int)uVar10 < (this->ConstraintSolvers).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pFVar3 = (this->ConstraintSolvers).AllocatorInstance.Data;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 4;
      *(FSolverBody **)(pFVar3 + lVar13) = pFVar8;
      *(undefined8 *)(pFVar3 + lVar13 + 8) = uStack_40;
      *(undefined8 *)(pFVar3 + lVar13 + 0x10) = local_38;
      *(FSolverBody **)(pFVar3 + lVar13 + 0x18) = pFVar9;
      *(undefined8 *)(pFVar3 + lVar13 + 0x18 + 8) = uStack_40;
      *(undefined8 *)(pFVar3 + lVar13 + 0x28) = local_38;
      lVar13 = lVar13 + 0xfd0;
      iVar11 = (this->ContainerIndices).ArrayNum;
    } while ((int)uVar10 < iVar11);
  }
  return;
}

// AddBodies @ 143b849e0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::AddBodies
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,FSolverBodyContainer *param_1)

{
  FGenericParticleHandle FVar1;
  FGenericParticleHandle FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar11 = (this->ContainerIndices).ArrayNum;
  uVar10 = 0;
  if (0 < iVar11) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar11) {
        uVar6 = ~uVar10 >> 0x1f;
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
      iVar11 = *(int *)((this->ContainerIndices).AllocatorInstance.Data + lVar12);
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,iVar11);
      FVar1.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[1];
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,iVar11);
      FVar2.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[0];
      pFVar8 = FSolverBodyContainer::FindOrAdd(param_1,FVar1);
      pFVar9 = FSolverBodyContainer::FindOrAdd(param_1,FVar2);
      uVar6 = 0;
      if ((int)uVar10 < (this->ConstraintSolvers).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pFVar3 = (this->ConstraintSolvers).AllocatorInstance.Data;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 4;
      *(FSolverBody **)(pFVar3 + lVar13) = pFVar8;
      *(undefined8 *)(pFVar3 + lVar13 + 8) = uStack_40;
      *(undefined8 *)(pFVar3 + lVar13 + 0x10) = local_38;
      *(FSolverBody **)(pFVar3 + lVar13 + 0x18) = pFVar9;
      *(undefined8 *)(pFVar3 + lVar13 + 0x18 + 8) = uStack_40;
      *(undefined8 *)(pFVar3 + lVar13 + 0x28) = local_38;
      lVar13 = lVar13 + 0x4b0;
      iVar11 = (this->ContainerIndices).ArrayNum;
    } while ((int)uVar10 < iVar11);
  }
  return;
}

// AddConstraint @ 143b84b80

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::AddConstraint
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,int param_1)

{
  int *piVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EObjectStateType EVar6;
  int iVar7;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (((this->ConstraintSolvers).ArrayNum < (this->ContainerIndices).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerIndices.Num() <= ConstraintSolvers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                         ,0xae,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,local_res10[0]);
  pTVar10 = pTVar8->V[1];
  pTVar8 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,local_res10[0]);
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar2 = pTVar8->V[0];
  pTVar9 = this_01;
  if (*(char *)((longlong)&pTVar10->_padding_ + 4) != '\0') {
    pTVar9 = pTVar10;
  }
  if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = this_01;
    if (1 < *(byte *)((longlong)&pTVar9->_padding_ + 4)) {
      this_00 = pTVar9;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar6 == Dynamic) goto LAB_143b84caa;
  }
  pTVar9 = this_01;
  if (*(char *)((longlong)&pTVar10->_padding_ + 4) != '\0') {
    pTVar9 = pTVar10;
  }
  if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar10 = this_01;
    if (1 < *(byte *)((longlong)&pTVar9->_padding_ + 4)) {
      pTVar10 = pTVar9;
    }
    if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
    }
    if (EVar6 == Sleeping) goto LAB_143b84caa;
  }
  pTVar10 = this_01;
  if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    pTVar10 = pTVar2;
  }
  if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar9 = this_01;
    if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
      pTVar9 = pTVar10;
    }
    if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar9);
    }
    if (EVar6 == Dynamic) goto LAB_143b84caa;
  }
  pTVar10 = this_01;
  if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    pTVar10 = pTVar2;
  }
  if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
    this_01 = pTVar10;
  }
  if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar6 = Kinematic;
  }
  else {
    EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
  }
  if (EVar6 != Sleeping) {
    return;
  }
LAB_143b84caa:
  pFVar3 = (this->ContainerIndices).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar3 + (longlong)(this->ContainerIndices).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->ContainerIndices).ArrayNum;
  piVar1 = &(this->ContainerIndices).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ContainerIndices).AllocatorInstance,piVar1);
  }
  (this->ContainerIndices).ArrayNum = iVar7 + 1;
  *(int *)((this->ContainerIndices).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res10[0];
  return;
}

// AddConstraint @ 143b84d60

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::AddConstraint
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,int param_1)

{
  int *piVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EObjectStateType EVar6;
  int iVar7;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (((this->ConstraintSolvers).ArrayNum < (this->ContainerIndices).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerIndices.Num() <= ConstraintSolvers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                         ,0xae,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,local_res10[0]);
  pTVar10 = pTVar8->V[1];
  pTVar8 = FPBDJointConstraints::GetConstrainedParticles(this->ConstraintContainer,local_res10[0]);
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar2 = pTVar8->V[0];
  pTVar9 = this_01;
  if (*(char *)((longlong)&pTVar10->_padding_ + 4) != '\0') {
    pTVar9 = pTVar10;
  }
  if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = this_01;
    if (1 < *(byte *)((longlong)&pTVar9->_padding_ + 4)) {
      this_00 = pTVar9;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar6 == Dynamic) goto LAB_143b84e8a;
  }
  pTVar9 = this_01;
  if (*(char *)((longlong)&pTVar10->_padding_ + 4) != '\0') {
    pTVar9 = pTVar10;
  }
  if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar10 = this_01;
    if (1 < *(byte *)((longlong)&pTVar9->_padding_ + 4)) {
      pTVar10 = pTVar9;
    }
    if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
    }
    if (EVar6 == Sleeping) goto LAB_143b84e8a;
  }
  pTVar10 = this_01;
  if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    pTVar10 = pTVar2;
  }
  if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar9 = this_01;
    if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
      pTVar9 = pTVar10;
    }
    if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar9);
    }
    if (EVar6 == Dynamic) goto LAB_143b84e8a;
  }
  pTVar10 = this_01;
  if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    pTVar10 = pTVar2;
  }
  if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
    this_01 = pTVar10;
  }
  if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar6 = Kinematic;
  }
  else {
    EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
  }
  if (EVar6 != Sleeping) {
    return;
  }
LAB_143b84e8a:
  pFVar3 = (this->ContainerIndices).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar3 + (longlong)(this->ContainerIndices).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->ContainerIndices).ArrayNum;
  piVar1 = &(this->ContainerIndices).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ContainerIndices).AllocatorInstance,piVar1);
  }
  (this->ContainerIndices).ArrayNum = iVar7 + 1;
  *(int *)((this->ContainerIndices).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res10[0];
  return;
}

// AddConstraints @ 143b84f40

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::AddConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  FPBDIslandConstraint **ppFVar1;
  FConstraintHandle *pFVar2;
  FPBDConstraintContainer *pFVar3;
  FConstraintHandleTypeID *this_00;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  FPBDIslandConstraint **ppFVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar2 = (*ppFVar8)->Constraint;
    cVar5 = (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
    if (cVar5 == '\0') {
      pFVar3 = pFVar2->ConstraintContainer;
      if (pFVar3 == (FPBDConstraintContainer *)0x0) {
LAB_143b84ffc:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("As<T>() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                           ,0xbd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        piVar7 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
                        );
        if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                       ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              ::FName::FName(&local_res10,L"FConstraintHandle");
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.TypeName = local_res10;
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
              _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            ::FName::FName(&local_res18,L"FIndexedConstraintHandle");
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
            ::__l2::STypeID.TypeName = local_res18;
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
            ::__l2::STypeID.BaseType =
                 &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                  ::__l2::STypeID;
            _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          ::FName::FName(&local_res20,L"FJointConstraintHandle");
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
          ::__l2::STypeID.TypeName = local_res20;
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
          ::__l2::STypeID.BaseType =
               &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                ::__l2::STypeID;
          _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        if ((`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
             ::__l2::STypeID.TypeName != (pFVar3->ConstraintHandleType).TypeName) &&
           ((this_00 = (pFVar3->ConstraintHandleType).BaseType,
            this_00 == (FConstraintHandleTypeID *)0x0 ||
            (bVar6 = FConstraintHandleTypeID::IsA
                               (this_00,&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                         ::__l2::STypeID), !bVar6)))) goto LAB_143b84ffc;
      }
      AddConstraint(this,(int)pFVar2[1]._padding_);
    }
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// AddConstraints @ 143b85160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::AddConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FPBDJointConstraints::NumConstraints(this->ConstraintContainer);
  TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,uVar2,Default);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  iVar4 = 0;
  (this->ContainerIndices).ArrayNum = 0;
  if ((this->ContainerIndices).ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&(this->ContainerIndices).AllocatorInstance,0,
               &(this->ContainerIndices).ArrayMax);
  }
  iVar3 = FPBDJointConstraints::NumConstraints(this->ConstraintContainer);
  if (0 < iVar3) {
    do {
      bVar1 = FPBDJointConstraints::IsConstraintEnabled(this->ConstraintContainer,iVar4);
      if (bVar1) {
        AddConstraint(this,iVar4);
      }
      iVar4 = iVar4 + 1;
      iVar3 = FPBDJointConstraints::NumConstraints(this->ConstraintContainer);
    } while (iVar4 < iVar3);
  }
  return;
}

// AddConstraints @ 143b85220

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::AddConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  FPBDIslandConstraint **ppFVar1;
  FConstraintHandle *pFVar2;
  FPBDConstraintContainer *pFVar3;
  FConstraintHandleTypeID *this_00;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  FPBDIslandConstraint **ppFVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar2 = (*ppFVar8)->Constraint;
    cVar5 = (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
    if (cVar5 == '\0') {
      pFVar3 = pFVar2->ConstraintContainer;
      if (pFVar3 == (FPBDConstraintContainer *)0x0) {
LAB_143b852dc:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("As<T>() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                           ,0xbd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        piVar7 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
                        );
        if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                       ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              ::FName::FName(&local_res10,L"FConstraintHandle");
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.TypeName = local_res10;
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
              _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            ::FName::FName(&local_res18,L"FIndexedConstraintHandle");
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
            ::__l2::STypeID.TypeName = local_res18;
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
            ::__l2::STypeID.BaseType =
                 &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                  ::__l2::STypeID;
            _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          ::FName::FName(&local_res20,L"FJointConstraintHandle");
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
          ::__l2::STypeID.TypeName = local_res20;
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
          ::__l2::STypeID.BaseType =
               &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                ::__l2::STypeID;
          _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        if ((`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
             ::__l2::STypeID.TypeName != (pFVar3->ConstraintHandleType).TypeName) &&
           ((this_00 = (pFVar3->ConstraintHandleType).BaseType,
            this_00 == (FConstraintHandleTypeID *)0x0 ||
            (bVar6 = FConstraintHandleTypeID::IsA
                               (this_00,&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                         ::__l2::STypeID), !bVar6)))) goto LAB_143b852dc;
      }
      AddConstraint(this,(int)pFVar2[1]._padding_);
    }
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// AddConstraints @ 143b85440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::AddConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FPBDJointConstraints::NumConstraints(this->ConstraintContainer);
  TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,uVar2,Default);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  iVar4 = 0;
  (this->ContainerIndices).ArrayNum = 0;
  if ((this->ContainerIndices).ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&(this->ContainerIndices).AllocatorInstance,0,
               &(this->ContainerIndices).ArrayMax);
  }
  iVar3 = FPBDJointConstraints::NumConstraints(this->ConstraintContainer);
  if (0 < iVar3) {
    do {
      bVar1 = FPBDJointConstraints::IsConstraintEnabled(this->ConstraintContainer,iVar4);
      if (bVar1) {
        AddConstraint(this,iVar4);
      }
      iVar4 = iVar4 + 1;
      iVar3 = FPBDJointConstraints::NumConstraints(this->ConstraintContainer);
    } while (iVar4 < iVar3);
  }
  return;
}

// ApplyLinearProjectionConstraints @ 143b8d0e0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::
ApplyLinearProjectionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1,int param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FPBDJointConstraints *pFVar9;
  FSolverBody *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  FPBDJointSolverSettings *pFVar14;
  FPBDJointSettings *pFVar15;
  uint uVar16;
  FPBDJointCachedSolver *pFVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pFVar14 = FPBDJointConstraints::GetSettings(this->ConstraintContainer);
  if ((param_2 == 0) && (uVar16 = 0, 0 < (this->ConstraintSolvers).ArrayNum)) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (this->ConstraintSolvers).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar17 = (FPBDJointCachedSolver *)((this->ConstraintSolvers).AllocatorInstance.Data + lVar18)
      ;
      if ((pFVar17->bIsBroken == false) && ((0.0 < pFVar17->InvMs[0] || (0.0 < pFVar17->InvMs[1]))))
      {
        pFVar9 = this->ConstraintContainer;
        uVar13 = 0;
        if ((int)uVar16 < (this->ContainerIndices).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar15 = FPBDJointConstraints::GetConstraintSettings
                            (pFVar9,*(int *)((this->ContainerIndices).AllocatorInstance.Data +
                                            lVar19));
        if (pFVar15->bProjectionEnabled != false) {
          FPBDJointCachedSolver::InitProjection(pFVar17,param_1,pFVar14,pFVar15);
        }
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0xfd0;
      lVar19 = lVar19 + 4;
    } while ((int)uVar16 < (this->ConstraintSolvers).ArrayNum);
  }
  uVar16 = 0;
  if (0 < (this->ConstraintSolvers).ArrayNum) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (this->ConstraintSolvers).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar17 = (FPBDJointCachedSolver *)((this->ConstraintSolvers).AllocatorInstance.Data + lVar19)
      ;
      if ((pFVar17->bIsBroken == false) && ((0.0 < pFVar17->InvMs[0] || (0.0 < pFVar17->InvMs[1]))))
      {
        pFVar9 = this->ConstraintContainer;
        uVar13 = 0;
        if ((int)uVar16 < (this->ContainerIndices).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar15 = FPBDJointConstraints::GetConstraintSettings
                            (pFVar9,*(int *)((this->ContainerIndices).AllocatorInstance.Data +
                                            lVar18));
        if (pFVar15->bProjectionEnabled != false) {
          if (param_2 == 0) {
            FPBDJointCachedSolver::ApplyPositionTeleport(pFVar17,param_1,pFVar14,pFVar15);
          }
          if ((pFVar15->bProjectionEnabled != false) && (0.0 < pFVar17->InvMs[1])) {
            pFVar17->SolverStiffness = 1.0;
            if (pFVar14->bSolvePositionLast == false) {
              FPBDJointCachedSolver::ApplyPositionProjection(pFVar17,param_1,pFVar14,pFVar15);
              FPBDJointCachedSolver::ApplyRotationProjection(pFVar17,param_1,pFVar14,pFVar15);
            }
            else {
              FPBDJointCachedSolver::ApplyRotationProjection(pFVar17,param_1,pFVar14,pFVar15);
              FPBDJointCachedSolver::ApplyPositionProjection(pFVar17,param_1,pFVar14,pFVar15);
            }
            if ((param_2 == param_3 + -1) && (0.0 < Chaos_Joint_VelProjectionAlpha)) {
              pFVar10 = pFVar17->SolverBodies[1].Body;
              fVar20 = Chaos_Joint_VelProjectionAlpha / (float)param_1;
              fVar1 = *(float *)&(pFVar10->State).DP;
              fVar2 = *(float *)&(pFVar10->State).DP.field_0x4;
              fVar3 = *(float *)&(pFVar10->State).DP.field_0x8;
              fVar4 = *(float *)&(pFVar10->State).DQ;
              fVar5 = *(float *)&(pFVar10->State).DQ.field_0x4;
              fVar6 = *(float *)&(pFVar10->State).DQ.field_0x8;
              if ((pFVar10 == (FSolverBody *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SolverBodies[BodyIndex].IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                                      ,0xf2,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar10 = pFVar17->SolverBodies[1].Body;
              fVar7 = *(float *)&(pFVar10->State).V.field_0x4;
              fVar8 = *(float *)&(pFVar10->State).V.field_0x8;
              *(float *)&(pFVar10->State).V = fVar20 * fVar1 + *(float *)&(pFVar10->State).V;
              *(float *)&(pFVar10->State).V.field_0x4 = fVar20 * fVar2 + fVar7;
              *(float *)&(pFVar10->State).V.field_0x8 = fVar20 * fVar3 + fVar8;
              fVar1 = *(float *)&(pFVar10->State).W.field_0x4;
              fVar2 = *(float *)&(pFVar10->State).W.field_0x8;
              *(float *)&(pFVar10->State).W = fVar20 * fVar4 + *(float *)&(pFVar10->State).W;
              *(float *)&(pFVar10->State).W.field_0x4 = fVar20 * fVar5 + fVar1;
              *(float *)&(pFVar10->State).W.field_0x8 = fVar20 * fVar6 + fVar2;
            }
          }
        }
      }
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0xfd0;
      lVar18 = lVar18 + 4;
    } while ((int)uVar16 < (this->ConstraintSolvers).ArrayNum);
  }
  return;
}

// ApplyLinearProjectionConstraints @ 143b8d5a0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::ApplyLinearProjectionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1,int param_2,
          int param_3)

{
  return;
}

// ApplyNonLinearProjectionConstraints @ 143b8f490

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::
ApplyNonLinearProjectionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1,int param_2,
          int param_3)

{
  return;
}

// ApplyNonLinearProjectionConstraints @ 143b8f4a0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::
ApplyNonLinearProjectionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1,int param_2,
          int param_3)

{
  FPBDJointConstraints *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointSolverSettings *pFVar4;
  FPBDJointSettings *pFVar5;
  FPBDJointSolver *this_01;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  pFVar4 = FPBDJointConstraints::GetSettings(this->ConstraintContainer);
  uVar6 = 0;
  if (0 < (this->ConstraintSolvers).ArrayNum) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->ConstraintSolvers).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = (FPBDJointSolver *)((this->ConstraintSolvers).AllocatorInstance.Data + lVar7);
      if ((this_01->bIsBroken == false) && ((0.0 < this_01->InvMs[0] || (0.0 < this_01->InvMs[1]))))
      {
        this_00 = this->ConstraintContainer;
        uVar3 = 0;
        if ((int)uVar6 < (this->ContainerIndices).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar5 = FPBDJointConstraints::GetConstraintSettings
                           (this_00,*(int *)((this->ContainerIndices).AllocatorInstance.Data + lVar8
                                            ));
        if (pFVar5->bProjectionEnabled != false) {
          FPBDJointSolver::UpdateDerivedState(this_01);
          if (param_2 == 0) {
            FSolverBody::UpdateRotationDependentState(this_01->SolverBodies[1].Body);
            this_01->InvMScales[0] = 0.0;
            this_01->InvMScales[1] = 1.0;
            FPBDJointSolver::UpdateMass0(this_01);
            FPBDJointSolver::UpdateMass1(this_01);
          }
          FPBDJointSolver::ApplyProjections(this_01,param_1,pFVar4,pFVar5,param_2 == param_3 + -1);
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x4b0;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < (this->ConstraintSolvers).ArrayNum);
  }
  return;
}

// ApplyPositionConstraints @ 143b92dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::ApplyPositionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1,int param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintSolvers).ArrayNum < (this->ContainerIndices).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintSolvers.Num() >= ContainerIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                       ,0x11e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,(this->ContainerIndices).ArrayNum,Default);
  ApplyPositionConstraintsImpl<Chaos::FPBDJointCachedSolver>
            (this,&this->ConstraintSolvers,param_1,param_2,param_3);
  return;
}

// ApplyPositionConstraints @ 143b92e70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::ApplyPositionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1,int param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintSolvers).ArrayNum < (this->ContainerIndices).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintSolvers.Num() >= ContainerIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                       ,0x11e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,(this->ContainerIndices).ArrayNum,Default);
  ApplyPositionConstraintsImpl<Chaos::FPBDJointSolver>
            (this,&this->ConstraintSolvers,param_1,param_2,param_3);
  return;
}

// ApplyProjectionConstraints @ 143b97340

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::ApplyProjectionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1,int param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FPBDJointConstraints *pFVar9;
  FSolverBody *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  FPBDJointSolverSettings *pFVar14;
  FPBDJointSettings *pFVar15;
  uint uVar16;
  FPBDJointCachedSolver *pFVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pFVar14 = FPBDJointConstraints::GetSettings(this->ConstraintContainer);
  if ((param_2 == 0) && (uVar16 = 0, 0 < (this->ConstraintSolvers).ArrayNum)) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (this->ConstraintSolvers).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar17 = (FPBDJointCachedSolver *)((this->ConstraintSolvers).AllocatorInstance.Data + lVar18)
      ;
      if ((pFVar17->bIsBroken == false) && ((0.0 < pFVar17->InvMs[0] || (0.0 < pFVar17->InvMs[1]))))
      {
        pFVar9 = this->ConstraintContainer;
        uVar13 = 0;
        if ((int)uVar16 < (this->ContainerIndices).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar15 = FPBDJointConstraints::GetConstraintSettings
                            (pFVar9,*(int *)((this->ContainerIndices).AllocatorInstance.Data +
                                            lVar19));
        if (pFVar15->bProjectionEnabled != false) {
          FPBDJointCachedSolver::InitProjection(pFVar17,param_1,pFVar14,pFVar15);
        }
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0xfd0;
      lVar19 = lVar19 + 4;
    } while ((int)uVar16 < (this->ConstraintSolvers).ArrayNum);
  }
  uVar16 = 0;
  if (0 < (this->ConstraintSolvers).ArrayNum) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (this->ConstraintSolvers).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar17 = (FPBDJointCachedSolver *)((this->ConstraintSolvers).AllocatorInstance.Data + lVar19)
      ;
      if ((pFVar17->bIsBroken == false) && ((0.0 < pFVar17->InvMs[0] || (0.0 < pFVar17->InvMs[1]))))
      {
        pFVar9 = this->ConstraintContainer;
        uVar13 = 0;
        if ((int)uVar16 < (this->ContainerIndices).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar15 = FPBDJointConstraints::GetConstraintSettings
                            (pFVar9,*(int *)((this->ContainerIndices).AllocatorInstance.Data +
                                            lVar18));
        if (pFVar15->bProjectionEnabled != false) {
          if (param_2 == 0) {
            FPBDJointCachedSolver::ApplyPositionTeleport(pFVar17,param_1,pFVar14,pFVar15);
          }
          if ((pFVar15->bProjectionEnabled != false) && (0.0 < pFVar17->InvMs[1])) {
            pFVar17->SolverStiffness = 1.0;
            if (pFVar14->bSolvePositionLast == false) {
              FPBDJointCachedSolver::ApplyPositionProjection(pFVar17,param_1,pFVar14,pFVar15);
              FPBDJointCachedSolver::ApplyRotationProjection(pFVar17,param_1,pFVar14,pFVar15);
            }
            else {
              FPBDJointCachedSolver::ApplyRotationProjection(pFVar17,param_1,pFVar14,pFVar15);
              FPBDJointCachedSolver::ApplyPositionProjection(pFVar17,param_1,pFVar14,pFVar15);
            }
            if ((param_2 == param_3 + -1) && (0.0 < Chaos_Joint_VelProjectionAlpha)) {
              pFVar10 = pFVar17->SolverBodies[1].Body;
              fVar20 = Chaos_Joint_VelProjectionAlpha / (float)param_1;
              fVar1 = *(float *)&(pFVar10->State).DP;
              fVar2 = *(float *)&(pFVar10->State).DP.field_0x4;
              fVar3 = *(float *)&(pFVar10->State).DP.field_0x8;
              fVar4 = *(float *)&(pFVar10->State).DQ;
              fVar5 = *(float *)&(pFVar10->State).DQ.field_0x4;
              fVar6 = *(float *)&(pFVar10->State).DQ.field_0x8;
              if ((pFVar10 == (FSolverBody *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SolverBodies[BodyIndex].IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                                      ,0xf2,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar10 = pFVar17->SolverBodies[1].Body;
              fVar7 = *(float *)&(pFVar10->State).V.field_0x4;
              fVar8 = *(float *)&(pFVar10->State).V.field_0x8;
              *(float *)&(pFVar10->State).V = fVar20 * fVar1 + *(float *)&(pFVar10->State).V;
              *(float *)&(pFVar10->State).V.field_0x4 = fVar20 * fVar2 + fVar7;
              *(float *)&(pFVar10->State).V.field_0x8 = fVar20 * fVar3 + fVar8;
              fVar1 = *(float *)&(pFVar10->State).W.field_0x4;
              fVar2 = *(float *)&(pFVar10->State).W.field_0x8;
              *(float *)&(pFVar10->State).W = fVar20 * fVar4 + *(float *)&(pFVar10->State).W;
              *(float *)&(pFVar10->State).W.field_0x4 = fVar20 * fVar5 + fVar1;
              *(float *)&(pFVar10->State).W.field_0x8 = fVar20 * fVar6 + fVar2;
            }
          }
        }
      }
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0xfd0;
      lVar18 = lVar18 + 4;
    } while ((int)uVar16 < (this->ConstraintSolvers).ArrayNum);
  }
  return;
}

// ApplyProjectionConstraints @ 143b97350

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::ApplyProjectionConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1,int param_2,
          int param_3)

{
  FPBDJointConstraints *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointSolverSettings *pFVar4;
  FPBDJointSettings *pFVar5;
  FPBDJointSolver *this_01;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  pFVar4 = FPBDJointConstraints::GetSettings(this->ConstraintContainer);
  uVar6 = 0;
  if (0 < (this->ConstraintSolvers).ArrayNum) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->ConstraintSolvers).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = (FPBDJointSolver *)((this->ConstraintSolvers).AllocatorInstance.Data + lVar7);
      if ((this_01->bIsBroken == false) && ((0.0 < this_01->InvMs[0] || (0.0 < this_01->InvMs[1]))))
      {
        this_00 = this->ConstraintContainer;
        uVar3 = 0;
        if ((int)uVar6 < (this->ContainerIndices).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar5 = FPBDJointConstraints::GetConstraintSettings
                           (this_00,*(int *)((this->ContainerIndices).AllocatorInstance.Data + lVar8
                                            ));
        if (pFVar5->bProjectionEnabled != false) {
          FPBDJointSolver::UpdateDerivedState(this_01);
          if (param_2 == 0) {
            FSolverBody::UpdateRotationDependentState(this_01->SolverBodies[1].Body);
            this_01->InvMScales[0] = 0.0;
            this_01->InvMScales[1] = 1.0;
            FPBDJointSolver::UpdateMass0(this_01);
            FPBDJointSolver::UpdateMass1(this_01);
          }
          FPBDJointSolver::ApplyProjections(this_01,param_1,pFVar4,pFVar5,param_2 == param_3 + -1);
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x4b0;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < (this->ConstraintSolvers).ArrayNum);
  }
  return;
}

// ApplyVelocityConstraints @ 143b9eb80

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::ApplyVelocityConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1,int param_2,
          int param_3)

{
  ApplyVelocityConstraintsImpl<Chaos::FPBDJointCachedSolver>
            (this,&this->ConstraintSolvers,param_1,param_2,param_3);
  return;
}

// ApplyVelocityConstraints @ 143b9ebb0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::ApplyVelocityConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1,int param_2,
          int param_3)

{
  ApplyVelocityConstraintsImpl<Chaos::FPBDJointSolver>
            (this,&this->ConstraintSolvers,param_1,param_2,param_3);
  return;
}

// GatherInput @ 143ba1ad0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::GatherInput
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1)

{
  GatherInputImpl<Chaos::FPBDJointCachedSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,0,
             (this->ContainerIndices).ArrayNum,true);
  return;
}

// GatherInput @ 143ba1b10

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::GatherInput
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1,int param_2,
          int param_3)

{
  GatherInputImpl<Chaos::FPBDJointCachedSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,param_2,param_3,true);
  return;
}

// GatherInput @ 143ba1b40

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::GatherInput
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1)

{
  GatherInputImpl<Chaos::FPBDJointSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,0,
             (this->ContainerIndices).ArrayNum,true);
  return;
}

// GatherInput @ 143ba1b80

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::GatherInput
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1,int param_2,
          int param_3)

{
  GatherInputImpl<Chaos::FPBDJointSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,param_2,param_3,true);
  return;
}

// GetConstraintSettings @ 143ba2010

FPBDJointSettings * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::GetConstraintSettings
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,int param_1)

{
  FPBDJointConstraints *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointSettings *pFVar4;
  
  this_00 = this->ConstraintContainer;
  uVar3 = 0;
  if (param_1 < (this->ContainerIndices).ArrayNum) {
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
  pFVar4 = FPBDJointConstraints::GetConstraintSettings
                     (this_00,*(int *)((this->ContainerIndices).AllocatorInstance.Data +
                                      (longlong)param_1 * 4));
  return pFVar4;
}

// GetConstraintSettings @ 143ba20a0

FPBDJointSettings * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::GetConstraintSettings
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,int param_1)

{
  FPBDJointConstraints *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointSettings *pFVar4;
  
  this_00 = this->ConstraintContainer;
  uVar3 = 0;
  if (param_1 < (this->ContainerIndices).ArrayNum) {
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
  pFVar4 = FPBDJointConstraints::GetConstraintSettings
                     (this_00,*(int *)((this->ContainerIndices).AllocatorInstance.Data +
                                      (longlong)param_1 * 4));
  return pFVar4;
}

// GetContainer @ 143ba2130

FPBDJointConstraints * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::GetContainer
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this)

{
  return this->ConstraintContainer;
}

// GetContainer @ 143ba2140

FPBDJointConstraints * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::GetContainer
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this)

{
  return this->ConstraintContainer;
}

// GetContainerConstraintIndex @ 143ba2150

int __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::GetContainerConstraintIndex
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ContainerIndices).ArrayNum) {
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
  return *(int *)((this->ContainerIndices).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetContainerConstraintIndex @ 143ba21d0

int __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::GetContainerConstraintIndex
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ContainerIndices).ArrayNum) {
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
  return *(int *)((this->ContainerIndices).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetNumConstraints @ 143ba2ce0

int __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::GetNumConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this)

{
  return (this->ContainerIndices).ArrayNum;
}

// GetNumConstraints @ 143ba2cf0

int __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::GetNumConstraints
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this)

{
  return (this->ContainerIndices).ArrayNum;
}

// GetSettings @ 143ba2d10

FPBDJointSolverSettings * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::GetSettings
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this)

{
  FPBDJointSolverSettings *pFVar1;
  
  pFVar1 = FPBDJointConstraints::GetSettings(this->ConstraintContainer);
  return pFVar1;
}

// GetSettings @ 143ba2d20

FPBDJointSolverSettings * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::GetSettings
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this)

{
  FPBDJointSolverSettings *pFVar1;
  
  pFVar1 = FPBDJointConstraints::GetSettings(this->ConstraintContainer);
  return pFVar1;
}

// Reset @ 143babca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::Reset
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,int param_1)

{
  TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,param_1,Default);
  if (-1 < param_1) {
    (this->ContainerIndices).ArrayNum = 0;
    if ((this->ContainerIndices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->ContainerIndices).AllocatorInstance,0,
                 &(this->ContainerIndices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 143babd10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::Reset
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,int param_1)

{
  TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,param_1,Default);
  if (-1 < param_1) {
    (this->ContainerIndices).ArrayNum = 0;
    if ((this->ContainerIndices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->ContainerIndices).AllocatorInstance,0,
                 &(this->ContainerIndices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ResizeSolverArrays @ 143babd80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::ResizeSolverArrays
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintSolvers).ArrayNum < (this->ContainerIndices).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintSolvers.Num() >= ContainerIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                       ,0x11e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,(this->ContainerIndices).ArrayNum,Default);
  return;
}

// ResizeSolverArrays @ 143babde0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::ResizeSolverArrays
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintSolvers).ArrayNum < (this->ContainerIndices).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintSolvers.Num() >= ContainerIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                       ,0x11e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintSolvers,(this->ContainerIndices).ArrayNum,Default);
  return;
}

// ScatterOutput @ 143babe40

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::ScatterOutput
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1)

{
  ScatterOutputImpl<Chaos::FPBDJointCachedSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,0,
             (this->ContainerIndices).ArrayNum,true);
  return;
}

// ScatterOutput @ 143babe80

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::ScatterOutput
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,double param_1,int param_2,
          int param_3)

{
  ScatterOutputImpl<Chaos::FPBDJointCachedSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,param_2,param_3,true);
  return;
}

// ScatterOutput @ 143babeb0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::ScatterOutput
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1)

{
  ScatterOutputImpl<Chaos::FPBDJointSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,0,
             (this->ContainerIndices).ArrayNum,true);
  return;
}

// ScatterOutput @ 143babef0

void __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::ScatterOutput
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,double param_1,int param_2,
          int param_3)

{
  ScatterOutputImpl<Chaos::FPBDJointSolver>
            (this,&this->ConstraintSolvers,&this->ContainerIndices,param_1,param_2,param_3,true);
  return;
}

// UseLinearSolver @ 143bb2930

bool __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::UseLinearSolver
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this)

{
  return true;
}

// UseLinearSolver @ 143bb2940

bool __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::UseLinearSolver
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this)

{
  return false;
}

