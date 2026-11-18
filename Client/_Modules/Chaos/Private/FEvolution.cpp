// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// FEvolution @ 143dfb4a0

FEvolution * __thiscall
Chaos::Softs::FEvolution::FEvolution(FEvolution *this,FCollectionPropertyConstFacade *param_1)

{
  longlong *plVar1;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar2;
  TArrayCollectionArray<Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus> *pTVar3;
  TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArrayCollectionArray<Chaos::Softs::FPAndInvM> *pTVar5;
  FSolverCollisionParticles *this_00;
  FCollisionBodyRanges *this_01;
  FGroups *this_02;
  
  this->Time = 0.0;
  this->bEnableForceBasedSolver = false;
  this->NumUsedIterations = 0;
  this->bDisableTimeDependentNumIterations = false;
  plVar1 = &(this->Particles)._padding_;
  *(undefined8 *)&this->LinearSystemParameters = 0;
  *(undefined8 *)&(this->LinearSystemParameters).field_0x8 = 0;
  *(undefined4 *)&(this->LinearSystemParameters).field_0x4 = 0x32;
  *(undefined4 *)&(this->LinearSystemParameters).field_0x8 = 0x38d1b717;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  *(undefined4 *)&(this->Particles)._padding_ = 0;
  *(undefined1 *)&(this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles,(TArrayCollectionArrayBase *)plVar1);
  plVar1 = &(this->Particles)._padding_;
  *(undefined4 *)((longlong)&(this->Particles)._padding_ + 4) = 0;
  (this->Particles)._padding_ = (longlong)&___7__TDynamicParticles_M_02_Chaos__6B_;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = 0;
  (this->Particles)._padding_ = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles,(TArrayCollectionArrayBase *)plVar1);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles,
             (TArrayCollectionArrayBase *)&(this->Particles)._padding_);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles,
             (TArrayCollectionArrayBase *)&(this->Particles)._padding_);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles,
             (TArrayCollectionArrayBase *)&(this->Particles)._padding_);
  pTVar5 = &(this->Particles).MPAndInvM;
  (this->Particles)._padding_ = (longlong)&___7FSolverParticles_Softs_Chaos__6B_;
  *(undefined8 *)&(this->Particles).MPAndInvM.field_0x8 = 0;
  *(undefined ***)pTVar5 = &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->Particles).MPAndInvM.field_0x10 = 0;
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles,(TArrayCollectionArrayBase *)pTVar5);
  this_00 = &this->CollisionParticles;
  *(undefined ***)&this->ParticleDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  plVar1 = &(this->CollisionParticles)._padding_;
  (this->CollisionParticles)._padding_ = 0;
  *(undefined8 *)&(this->ParticleDampings).field_0x8 = 0;
  *(undefined8 *)&(this->ParticleDampings).field_0x10 = 0;
  (this->CollisionParticles)._padding_ = 0;
  this_00->_padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  (this->CollisionParticles)._padding_ = 0;
  (this->CollisionParticles)._padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->CollisionParticles)._padding_ = 0;
  *(undefined1 *)&(this->CollisionParticles)._padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)plVar1);
  *(undefined4 *)((longlong)&(this->CollisionParticles)._padding_ + 4) = 0;
  plVar1 = &(this->CollisionParticles)._padding_;
  this_00->_padding_ = (longlong)&___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  (this->CollisionParticles)._padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  (this->CollisionParticles)._padding_ = 0;
  (this->CollisionParticles)._padding_ = 0;
  (this->CollisionParticles)._padding_ = 0;
  (this->CollisionParticles)._padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)plVar1);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,
             (TArrayCollectionArrayBase *)&(this->CollisionParticles)._padding_);
  pTVar2 = &(this->CollisionParticles).MV;
  this_00->_padding_ = (longlong)&___7FSolverCollisionParticles_Softs_Chaos__6B_;
  *(undefined8 *)&(this->CollisionParticles).MV.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionParticles).MV.field_0x10 = 0;
  *(undefined ***)pTVar2 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->CollisionParticles).MW.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionParticles).MW.field_0x10 = 0;
  *(undefined ***)&(this->CollisionParticles).MW =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar2);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)&(this->CollisionParticles).MW
            );
  FSoftBodies::FSoftBodies(&this->SoftBodies);
  *(undefined8 *)&this->SoftBodyFreeList = 0;
  this_01 = &this->CollisionRanges;
  *(undefined8 *)&(this->SoftBodyFreeList).field_0x8 = 0;
  pTVar3 = &(this->CollisionRanges).Status;
  *(undefined8 *)&(this->SoftBodyFreeList).field_0x20 = 0;
  *(undefined4 *)&(this->SoftBodyFreeList).field_0x28 = 0;
  *(undefined4 *)&(this->SoftBodyFreeList).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftBodyFreeList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoftBodyFreeList).field_0x34 = 0;
  *(undefined8 *)&(this->SoftBodyFreeList).field_0x40 = 0;
  *(undefined4 *)&(this->SoftBodyFreeList).field_0x48 = 0;
  this_01->_padding_ = (longlong)&___7FCollisionBodyRanges_FEvolution_Softs_Chaos__6B_;
  *(undefined ***)pTVar3 =
       &
       ___7__TArrayCollectionArray_W4EStatus_FCollisionBodyRanges_FEvolution_Softs_Chaos___Chaos__6B_
  ;
  *(undefined ***)&(this->CollisionRanges).GroupId = &___7__TArrayCollectionArray_I_Chaos__6B_;
  *(undefined ***)&(this->CollisionRanges).ParticleRanges =
       &___7__TArrayCollectionArray_VFSolverCollisionParticlesRange_Softs_Chaos___Chaos__6B_;
  (this->CollisionRanges)._padding_ = 0;
  (this->CollisionRanges)._padding_ = 0;
  *(undefined4 *)&(this->CollisionRanges)._padding_ = 0;
  *(undefined8 *)&(this->CollisionRanges).Status.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionRanges).Status.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionRanges).GroupId.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionRanges).GroupId.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionRanges).ParticleRanges.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionRanges).ParticleRanges.field_0x10 = 0;
  TArrayCollection::AddArray((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)pTVar3);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_01,
             (TArrayCollectionArrayBase *)&(this->CollisionRanges).GroupId);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_01,
             (TArrayCollectionArrayBase *)&(this->CollisionRanges).ParticleRanges);
  *(undefined8 *)&this->CollisionRangeFreeList = 0;
  *(undefined8 *)&(this->CollisionRangeFreeList).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionRangeFreeList).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionRangeFreeList).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionRangeFreeList).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionRangeFreeList).field_0x34 = 0;
  *(undefined4 *)&(this->CollisionRangeFreeList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CollisionRangeFreeList).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionRangeFreeList).field_0x48 = 0;
  this_02 = &this->Groups;
  (this->Groups)._padding_ = 0;
  (this->Groups)._padding_ = 0;
  pTVar4 = &(this->Groups).SoftBodies;
  *(undefined4 *)&(this->Groups)._padding_ = 0;
  *(undefined8 *)&(this->Groups).SoftBodies.field_0x8 = 0;
  this_02->_padding_ = (longlong)&___7FGroups_FEvolution_Softs_Chaos__6B_;
  *(undefined ***)pTVar4 =
       &___7__TArrayCollectionArray_V__TArray_HV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  *(undefined ***)&(this->Groups).ActiveSoftBodies =
       &
       ___7__TArrayCollectionArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  *(undefined ***)&(this->Groups).ActiveCollisionParticleRanges =
       &
       ___7__TArrayCollectionArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  *(undefined8 *)&(this->Groups).SoftBodies.field_0x10 = 0;
  *(undefined8 *)&(this->Groups).ActiveSoftBodies.field_0x8 = 0;
  *(undefined8 *)&(this->Groups).ActiveSoftBodies.field_0x10 = 0;
  *(undefined8 *)&(this->Groups).ActiveCollisionParticleRanges.field_0x8 = 0;
  *(undefined8 *)&(this->Groups).ActiveCollisionParticleRanges.field_0x10 = 0;
  *(undefined8 *)&(this->Groups).SolverContexts.field_0x8 = 0;
  *(undefined8 *)&(this->Groups).SolverContexts.field_0x10 = 0;
  *(undefined ***)&(this->Groups).SolverContexts =
       &___7__TArrayCollectionArray_UFEvolutionGroupContext_Softs_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_02,(TArrayCollectionArrayBase *)pTVar4);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_02,
             (TArrayCollectionArrayBase *)&(this->Groups).ActiveSoftBodies);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_02,
             (TArrayCollectionArrayBase *)&(this->Groups).ActiveCollisionParticleRanges);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_02,(TArrayCollectionArrayBase *)&(this->Groups).SolverContexts
            );
  *(undefined8 *)&this->KinematicUpdate = 0;
  *(undefined8 *)&(this->KinematicUpdate).field_0x28 = 0;
  *(undefined8 *)&this->CollisionKinematicUpdate = 0;
  *(undefined8 *)&(this->CollisionKinematicUpdate).field_0x28 = 0;
  SetSolverProperties(this,param_1);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles,
             (TArrayCollectionArrayBase *)&this->ParticleDampings);
  return this;
}

// operator() @ 143e00cd0

void __thiscall
`Chaos::Softs::FEvolution::AdvanceOneTimeStep'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  FEvolution *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  this_00 = *(FEvolution **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal
            (this_00,*(float *)((longlong)this + 0x10),*(int *)((longlong)this + 0x14),
             *(uint *)(*plVar1 + (longlong)param_1 * 4));
  return;
}

// operator() @ 143e02ed0

void __thiscall
`Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l33::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  FPerParticleDampVelocity *this_00;
  code *pcVar3;
  bool bVar4;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
  *pTVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  if (param_1 != *(int *)((longlong)*(void **)((longlong)this + 8) + 8)) {
    pTVar5 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_const_,int>
             ::operator[](*(void **)((longlong)this + 8),param_1);
    lVar2 = *(longlong *)this;
    local_res10[0] = *(undefined1 *)((longlong)this + 0x20);
    local_res8[0] = *(undefined4 *)((longlong)this + 0x18);
    uVar1 = *(uint *)((longlong)this + 0x1c);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x200)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x1f8);
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar5);
    pcVar3 = *(code **)pTVar5;
    plVar7 = (longlong *)&pTVar5->field_0x10;
    if (*(longlong **)&pTVar5->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&pTVar5->field_0x28;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar6,lVar2 + (longlong)(int)uVar1 * 0x20,local_res8,local_res10);
    return;
  }
  lVar2 = *(longlong *)this;
  this_00 = *(FPerParticleDampVelocity **)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x1c);
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x200)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Chaos::Softs::FPerParticleDampVelocity::UpdatePositionBasedState
            (this_00,(FSolverParticlesRange *)
                     ((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar2 + 0x1f8)));
  return;
}

// operator() @ 143e05c80

void __thiscall
`Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l63::<lambda_2>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
  *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined4 local_res18 [4];
  
  pTVar6 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_const_,int>
           ::operator[](*(void **)((longlong)this + 8),param_1);
  lVar2 = *(longlong *)this;
  local_res8[0] = *(undefined1 *)((longlong)this + 0x18);
  local_res18[0] = *(undefined4 *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x200)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x1f8);
  UE::Core::Private::Function::CheckCallable(*(void **)pTVar6);
  pcVar3 = *(code **)pTVar6;
  plVar8 = (longlong *)&pTVar6->field_0x10;
  if (*(longlong **)&pTVar6->field_0x28 != (longlong *)0x0) {
    plVar8 = *(longlong **)&pTVar6->field_0x28;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar3)(uVar7,lVar2 + (longlong)(int)uVar1 * 0x20,local_res18,local_res8);
  return;
}

// ActivateCollisionParticleRange @ 143e08920

void __thiscall
Chaos::Softs::FEvolution::ActivateCollisionParticleRange(FEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint uVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->CollisionRanges).Status.field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
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
  if (*(char *)((longlong)param_1 + *(longlong *)&(this->CollisionRanges).Status.field_0x8) ==
      '\x03') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CollisionRanges.Status[CollisionRangeId] != FCollisionBodyRanges::EStatus::Free"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                       ,0x16d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < *(int *)&(this->CollisionRanges).Status.field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  *(char *)((longlong)param_1 + *(longlong *)&(this->CollisionRanges).Status.field_0x8) =
       !param_2 + '\x01';
  iVar1 = *(int *)&(this->CollisionRanges).GroupId.field_0x10;
  if (param_2) {
    uVar4 = 0;
    if (param_1 < iVar1) {
      uVar4 = (uint)~param_1 >> 0x1f;
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
    uVar4 = *(uint *)(*(longlong *)&(this->CollisionRanges).GroupId.field_0x8 +
                     (longlong)param_1 * 4);
    uVar5 = 0;
    if ((int)uVar4 < *(int *)&(this->Groups).ActiveCollisionParticleRanges.field_0x10) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               ((longlong)(int)uVar4 * 0x50 +
               *(longlong *)&(this->Groups).ActiveCollisionParticleRanges.field_0x8),local_res8,
               (bool *)local_res10);
    return;
  }
  uVar4 = 0;
  if (param_1 < iVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  uVar4 = *(uint *)(*(longlong *)&(this->CollisionRanges).GroupId.field_0x8 + (longlong)param_1 * 4)
  ;
  uVar5 = 0;
  if ((int)uVar4 < *(int *)&(this->Groups).ActiveCollisionParticleRanges.field_0x10) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            ((longlong)(int)uVar4 * 0x50 +
            *(longlong *)&(this->Groups).ActiveCollisionParticleRanges.field_0x8);
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    local_res18[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (this_00,param_1,local_res18);
  }
  return;
}

// ActivateSoftBody @ 143e08be0

void __thiscall
Chaos::Softs::FEvolution::ActivateSoftBody(FEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint uVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->SoftBodies).Status.field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
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
  if (*(char *)((longlong)param_1 + *(longlong *)&(this->SoftBodies).Status.field_0x8) == '\x03') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoftBodies.Status[SoftBodyId] != FSoftBodies::EStatus::Free",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                       ,0x134,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < *(int *)&(this->SoftBodies).Status.field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  *(char *)((longlong)param_1 + *(longlong *)&(this->SoftBodies).Status.field_0x8) =
       !param_2 + '\x01';
  iVar1 = *(int *)&(this->SoftBodies).GroupId.field_0x10;
  if (param_2) {
    uVar4 = 0;
    if (param_1 < iVar1) {
      uVar4 = (uint)~param_1 >> 0x1f;
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
    uVar4 = *(uint *)(*(longlong *)&(this->SoftBodies).GroupId.field_0x8 + (longlong)param_1 * 4);
    uVar5 = 0;
    if ((int)uVar4 < *(int *)&(this->Groups).ActiveSoftBodies.field_0x10) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               ((longlong)(int)uVar4 * 0x50 +
               *(longlong *)&(this->Groups).ActiveSoftBodies.field_0x8),local_res8,
               (bool *)local_res10);
    return;
  }
  uVar4 = 0;
  if (param_1 < iVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  uVar4 = *(uint *)(*(longlong *)&(this->SoftBodies).GroupId.field_0x8 + (longlong)param_1 * 4);
  uVar5 = 0;
  if ((int)uVar4 < *(int *)&(this->Groups).ActiveSoftBodies.field_0x10) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            ((longlong)(int)uVar4 * 0x50 + *(longlong *)&(this->Groups).ActiveSoftBodies.field_0x8);
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    local_res18[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (this_00,param_1,local_res18);
  }
  return;
}

// AddCollisionParticleRange @ 143e08f30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Chaos::Softs::FEvolution::AddCollisionParticleRange
          (FEvolution *this,uint param_1,int param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  uVar10 = (uint)(this->Groups)._padding_;
  if (uVar10 <= param_1) {
    if (param_1 + 1 < uVar10) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7574069290559603137>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                         ,0x1c1,"DesiredSize >= Size()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    else {
      TArrayCollection::ResizeHelper((TArrayCollection *)&this->Groups,param_1 + 1);
    }
  }
  uVar10 = 0;
  if (*(int *)&(this->CollisionRangeFreeList).field_0x8 !=
      *(int *)&(this->CollisionRangeFreeList).field_0x34) {
    puVar9 = *(undefined1 **)&(this->CollisionRangeFreeList).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CollisionRangeFreeList).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->CollisionRangeFreeList).field_0x48 - 1U & param_2) *
                              4);
    if (iVar4 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)&this->CollisionRangeFreeList);
        if (*piVar7 == param_2) {
          this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + 2);
          if (piVar7 == (int *)0x0) {
            this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if ((this_00 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
             (this_00->ArrayNum != 0)) {
            uVar5 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(this_00,Default);
            uVar6 = uVar10;
            if ((int)uVar5 < *(int *)&(this->CollisionRanges).Status.field_0x10) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if (uVar6 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                iVar4 = (*pcVar2)();
                return iVar4;
              }
            }
            if (*(char *)((longlong)(int)uVar5 +
                         *(longlong *)&(this->CollisionRanges).Status.field_0x8) != '\x03') {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("CollisionRanges.Status[CollisionRangeId] == FCollisionBodyRanges::EStatus::Free"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                                 ,0x14c,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                iVar4 = (*pcVar2)();
                return iVar4;
              }
            }
            goto LAB_143e090a0;
          }
          break;
        }
        iVar4 = piVar7[6];
      } while (iVar4 != -1);
    }
  }
  uVar5 = (uint)(this->CollisionRanges)._padding_;
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->CollisionRanges,uVar5 + 1);
  iVar4 = (int)(this->CollisionParticles)._padding_;
  if (param_2 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)&this->CollisionParticles,iVar4 + param_2);
  }
  piVar7 = (int *)((longlong)&(this->CollisionParticles)._padding_ + 4);
  *piVar7 = *piVar7 + 1;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&(this->CollisionRanges).ParticleRanges.field_0x10) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  lVar1 = *(longlong *)&(this->CollisionRanges).ParticleRanges.field_0x8;
  lVar8 = (longlong)(int)uVar5 * 0x20;
  *(FSolverCollisionParticles **)(lVar8 + 8 + lVar1) = &this->CollisionParticles;
  *(int *)(lVar8 + 0x10 + lVar1) = iVar4;
  *(int *)(lVar8 + 0x14 + lVar1) = param_2;
  *(uint *)(lVar8 + 0x18 + lVar1) = uVar5;
LAB_143e090a0:
  uVar6 = uVar10;
  if ((int)uVar5 < *(int *)&(this->CollisionRanges).Status.field_0x10) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *(undefined1 *)((longlong)(int)uVar5 + *(longlong *)&(this->CollisionRanges).Status.field_0x8) = 2
  ;
  if ((int)uVar5 < *(int *)&(this->CollisionRanges).GroupId.field_0x10) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *(uint *)(*(longlong *)&(this->CollisionRanges).GroupId.field_0x8 + (longlong)(int)uVar5 * 4) =
       param_1;
  ActivateCollisionParticleRange(this,uVar5,param_3);
  return uVar5;
}

// AddSoftBody @ 143e0aea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Chaos::Softs::FEvolution::AddSoftBody(FEvolution *this,uint param_1,int param_2,bool param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  ForAnyElementType *pFVar14;
  longlong lVar15;
  uint uVar16;
  ushort uStack_76;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar16 = (uint)(this->Groups)._padding_;
  if (uVar16 <= param_1) {
    if (param_1 + 1 < uVar16) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7574069290559603137>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                         ,0x1c1,"DesiredSize >= Size()");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    else {
      TArrayCollection::ResizeHelper((TArrayCollection *)&this->Groups,param_1 + 1);
    }
  }
  uVar16 = 0;
  if (*(int *)&(this->SoftBodyFreeList).field_0x8 != *(int *)&(this->SoftBodyFreeList).field_0x34) {
    puVar12 = *(undefined1 **)&(this->SoftBodyFreeList).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SoftBodyFreeList).field_0x38;
    }
    iVar6 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->SoftBodyFreeList).field_0x48 - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)&this->SoftBodyFreeList);
        if (*piVar9 == param_2) {
          this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar9 + 2);
          if (piVar9 == (int *)0x0) {
            this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if ((this_00 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
             (this_00->ArrayNum != 0)) {
            uVar7 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(this_00,Default);
            uVar8 = uVar16;
            if ((int)uVar7 < *(int *)&(this->SoftBodies).Status.field_0x10) {
              uVar8 = ~uVar7 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            if ((*(char *)((longlong)(int)uVar7 + *(longlong *)&(this->SoftBodies).Status.field_0x8)
                 != '\x03') &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("SoftBodies.Status[SoftBodyId] == FSoftBodies::EStatus::Free",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                                   ,0xe7,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            goto LAB_143e0b019;
          }
          break;
        }
        iVar6 = piVar9[6];
      } while (iVar6 != -1);
    }
  }
  uVar7 = (uint)(this->SoftBodies)._padding_;
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->SoftBodies,uVar7 + 1);
  iVar6 = (int)(this->Particles)._padding_;
  if (param_2 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)&this->Particles,iVar6 + param_2);
  }
  piVar9 = (int *)((longlong)&(this->Particles)._padding_ + 4);
  *piVar9 = *piVar9 + 1;
  uVar8 = uVar16;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  lVar15 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
  lVar10 = (longlong)(int)uVar7 * 0x20;
  *(int *)(lVar10 + 0x10 + lVar15) = iVar6;
  *(FSolverParticles **)(lVar10 + 8 + lVar15) = &this->Particles;
  *(int *)(lVar10 + 0x14 + lVar15) = param_2;
  *(uint *)(lVar10 + 0x18 + lVar15) = uVar7;
LAB_143e0b019:
  uVar8 = uVar16;
  if ((int)param_1 < *(int *)&(this->Groups).SoftBodies.field_0x10) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            ((longlong)(int)param_1 * 0x10 + *(longlong *)&(this->Groups).SoftBodies.field_0x8);
  iVar6 = *(int *)&pFVar14[1].Data;
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (iVar6 == *piVar9) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar14,piVar9);
  }
  *(int *)&pFVar14[1].Data = iVar6 + 1;
  uVar13 = ~uVar7 >> 0x1f;
  *(uint *)(pFVar14->Data + (longlong)iVar6 * 4) = uVar7;
  uVar8 = uVar16;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).Status.field_0x10) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  lVar15 = (longlong)(int)uVar7;
  *(undefined1 *)(lVar15 + *(longlong *)&(this->SoftBodies).Status.field_0x8) = 2;
  uVar8 = uVar16;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).GroupId.field_0x10) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  *(uint *)(*(longlong *)&(this->SoftBodies).GroupId.field_0x8 + lVar15 * 4) = param_1;
  uVar8 = uVar16;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).GlobalDampings.field_0x10) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  uVar4 = _UNK_15060db28;
  uVar3 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined4 *)(*(longlong *)&(this->SoftBodies).GlobalDampings.field_0x8 + lVar15 * 4) =
       0x3c23d70a;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).LocalDamping.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  lVar10 = *(longlong *)&(this->SoftBodies).LocalDamping.field_0x8;
  lVar11 = lVar15 * 0x40;
  *(longlong *)(lVar11 + lVar10) = (ulonglong)uStack_76 << 0x10;
  ((longlong *)(lVar11 + lVar10))[1] = (ulonglong)uStack_6c << 0x20;
  puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar10);
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar10);
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).UsePerParticleDamping.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  *(undefined1 *)(lVar15 + *(longlong *)&(this->SoftBodies).UsePerParticleDamping.field_0x8) = 0;
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).PreSubstepParallelInits.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (*(longlong *)&(this->SoftBodies).PreSubstepParallelInits.field_0x8 + lVar15 * 0x10);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (*piVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).PBDExternalForceRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (*(longlong *)&(this->SoftBodies).PBDExternalForceRules.field_0x8 + lVar15 * 0x10);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)pFVar14->Data
               ,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (*piVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)pFVar14->Data
               ,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).PostInitialGuessParallelInits.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 +
            *(longlong *)&(this->SoftBodies).PostInitialGuessParallelInits.field_0x8);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).PreSubstepConstraintRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 + *(longlong *)&(this->SoftBodies).PreSubstepConstraintRules.field_0x8);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).PerIterationPBDConstraintRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 +
            *(longlong *)&(this->SoftBodies).PerIterationPBDConstraintRules.field_0x8);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)pFVar14->Data
               ,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)pFVar14->Data
               ,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).PerIterationCollisionPBDConstraintRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 +
            *(longlong *)&(this->SoftBodies).PerIterationCollisionPBDConstraintRules.field_0x8);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 <
      *(int *)&(this->SoftBodies).PerIterationPostCollisionsPBDConstraintRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 +
            *(longlong *)&(this->SoftBodies).PerIterationPostCollisionsPBDConstraintRules.field_0x8)
  ;
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)pFVar14->Data
               ,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)pFVar14->Data
               ,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).UpdateLinearSystemRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 + *(longlong *)&(this->SoftBodies).UpdateLinearSystemRules.field_0x8);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).UpdateLinearSystemCollisionsRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 +
            *(longlong *)&(this->SoftBodies).UpdateLinearSystemCollisionsRules.field_0x8);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  uVar16 = 0;
  if ((int)uVar7 < *(int *)&(this->SoftBodies).PostSubstepConstraintRules.field_0x10) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pFVar14 = (ForAnyElementType *)
            (lVar15 * 0x10 + *(longlong *)&(this->SoftBodies).PostSubstepConstraintRules.field_0x8);
  piVar9 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (*(int *)((longlong)&pFVar14[1].Data + 4) < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    iVar6 = *piVar9;
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,pFVar14,0,piVar9);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ((TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
                *)pFVar14->Data,*(int *)&pFVar14[1].Data);
    *(undefined4 *)&pFVar14[1].Data = 0;
  }
  ActivateSoftBody(this,uVar7,param_3);
  return uVar7;
}

// AdvanceOneTimeStep @ 143e0c810

void __thiscall
Chaos::Softs::FEvolution::AdvanceOneTimeStep(FEvolution *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_68;
  code *local_58;
  FEvolution **local_50;
  FEvolution *local_48;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_40;
  float local_38;
  int local_34;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId405,"FSoftsEvolution_AdvanceOneTimeStep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
               ,0x195);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
  }
  this->Time = param_1 + this->Time;
  if ((this->bDisableTimeDependentNumIterations == false) && (this->NumIterations != 0)) {
    fVar4 = (float)this->NumIterations;
    iVar1 = (int)ROUND((fVar4 + fVar4) * param_2 * param_1 * this->SolverFrequency + __real_3f000000
                      ) >> 1;
    iVar2 = this->MaxNumIterations;
    if (iVar1 < this->MaxNumIterations) {
      iVar2 = iVar1;
    }
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = iVar2;
    }
  }
  else {
    iVar1 = this->NumIterations;
  }
  this->NumUsedIterations = iVar1;
  GetActiveGroupsArray(this,&local_68);
  local_40 = &local_68;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FEvolution::AdvanceOneTimeStep'::__l2::<lambda_1>,void,int>
             ::Call;
  local_48 = this;
  local_38 = param_1;
  local_34 = iVar1;
  PhysicsParallelFor(local_68.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_58,false);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AdvanceOneTimeStepInternal @ 143e0c960

void __thiscall
Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal
          (FEvolution *this,float param_1,int param_2,uint param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EChaosSoftsLocalDampingSpace EVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  FPerParticleDampVelocity *pFVar12;
  undefined4 uVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar21;
  byte bVar22;
  longlong *plVar23;
  FPAndInvM *pFVar24;
  float *pfVar25;
  TVector<float,3> *pTVar26;
  TVector<float,3> *pTVar27;
  float *pfVar28;
  char cVar29;
  int iVar30;
  uint uVar31;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *pTVar32;
  undefined8 *puVar33;
  FLinearSystemParameters *pFVar34;
  int iVar35;
  int iVar36;
  TBitArray<FDefaultBitArrayAllocator> *pTVar37;
  undefined8 *puVar38;
  longlong lVar39;
  longlong *plVar40;
  FPerParticleDampVelocity *pFVar41;
  uint uVar42;
  ForAnyElementType FVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  TBitArray<FDefaultBitArrayAllocator> *pTVar46;
  bool bVar47;
  float fVar48;
  FLinearSystemParameters *pFVar49;
  undefined1 local_3a0;
  undefined1 local_39f [7];
  byte local_398;
  byte local_390 [8];
  undefined8 *local_388;
  longlong local_380;
  FPerParticleDampVelocity *local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  int local_358;
  uint uStack_354;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_350;
  uint local_348;
  uint uStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  float local_338 [2];
  float local_330 [2];
  float local_328 [2];
  float local_320 [2];
  float local_318 [2];
  int *local_310;
  float local_308;
  float local_300;
  float local_2f8;
  float local_2f0;
  float local_2e8;
  float local_2e0 [2];
  float local_2d8 [2];
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> local_2d0;
  longlong *local_2c0;
  undefined8 uStack_2b8;
  TBitArray<FDefaultBitArrayAllocator> *local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  int iStack_298;
  undefined4 uStack_294;
  FPerParticleDampVelocity *local_290;
  int local_288;
  int local_284;
  undefined8 *local_280;
  longlong *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  undefined8 local_248;
  int local_240;
  code *local_238;
  FEvolution **local_230;
  undefined8 local_228;
  int local_220;
  FEvolution *local_218;
  undefined8 *local_210;
  float local_208;
  uint local_204;
  byte local_200;
  code *local_1f8;
  FEvolution **local_1f0;
  FEvolution *local_1e8;
  undefined8 *local_1e0;
  FPerParticleDampVelocity *local_1d8;
  float local_1d0;
  uint local_1cc;
  byte local_1c8;
  TArrayView<Chaos::TVector<float,3>,int> local_1c0;
  TArrayView<Chaos::TVector<float,3>,int> local_1b0;
  TArrayView<Chaos::TVector<float,3>,int> local_1a0;
  TArrayView<Chaos::TVector<float,3>,int> local_190;
  TArrayView<Chaos::TVector<float,3>,int> local_180;
  TArrayView<Chaos::TVector<float,3>,int> local_170;
  TArrayView<Chaos::TVector<float,3>,int> local_160;
  TArrayView<Chaos::TVector<float,3>,int> local_150;
  TArrayView<Chaos::TVector<float,3>,int> local_140;
  TArrayView<Chaos::TVector<float,3>,int> local_130;
  longlong *local_120;
  undefined8 uStack_118;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_d0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c0 [2];
  undefined4 local_94;
  
  lVar39 = (longlong)(int)param_3;
  bVar47 = -1 < CpuChannel->Enabled;
  if (bVar47) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId427,"FSoftsEvolution_AdvanceOneTimeStepInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
               ,0x1ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId427);
  }
  uVar18 = 0;
  if ((int)param_3 < *(int *)&(this->Groups).SolverContexts.field_0x10) {
    uVar18 = ~param_3 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_368 = *(longlong *)&(this->Groups).SolverContexts.field_0x8;
  local_360 = lVar39 * 3;
  local_310 = (int *)(local_368 + 0xc + lVar39 * 0x18);
  *(undefined1 *)(local_368 + lVar39 * 0x18) = 0;
  *local_310 = -1;
  *(undefined8 *)(local_368 + 4 + lVar39 * 0x18) = 0;
  *(undefined4 *)(local_368 + 0x10 + lVar39 * 0x18) = 0;
  *(undefined4 *)(local_368 + 0x14 + lVar39 * 0x18) = 0xffffffff;
  GetActiveCollisionParticles(this,&local_2d0,param_3);
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId435,
               "FSoftsEvolution_AdvanceOneTimeStepInternal_CollisionKinematicUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
               ,0x1b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId435);
  }
  if ((*(longlong *)&this->CollisionKinematicUpdate == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CollisionKinematicUpdate",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                          ,0x1b4,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar36 = local_2d0.ArrayNum;
  pFVar45 = local_2d0.AllocatorInstance.Data + (longlong)iVar36 * 0x20;
  FVar43.Data = local_2d0.AllocatorInstance.Data;
  while( true ) {
    if (local_2d0.ArrayNum != iVar36) {
      local_3a0 = 0;
      `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_3a0);
    }
    if (FVar43.Data == pFVar45) break;
    local_308 = this->Time;
    local_300 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CollisionKinematicUpdate);
    plVar40 = *(longlong **)&(this->CollisionKinematicUpdate).field_0x28;
    pcVar11 = *(code **)&this->CollisionKinematicUpdate;
    plVar23 = (longlong *)&(this->CollisionKinematicUpdate).field_0x10;
    if (plVar40 != (longlong *)0x0) {
      plVar23 = plVar40;
    }
    uVar20 = (**(code **)(*plVar23 + 8))();
    (*pcVar11)(uVar20,FVar43.Data);
    FVar43.Data = FVar43.Data + 0x20;
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar18 = 0;
  if ((int)param_3 < *(int *)&(this->Groups).ActiveSoftBodies.field_0x10) {
    uVar18 = ~param_3 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar35 = 0;
  plVar40 = (longlong *)(lVar39 * 0x50 + *(longlong *)&(this->Groups).ActiveSoftBodies.field_0x8);
  local_2a0._0_4_ = 0;
  iVar36 = (int)plVar40[5];
  pTVar46 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar40 + 2);
  uStack_2a8._4_4_ = 0;
  uVar18 = 1;
  if (iVar36 != 0) {
    pTVar37 = (TBitArray<FDefaultBitArrayAllocator> *)plVar40[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar40[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar37 = pTVar46;
    }
    uVar18 = *(uint *)(pTVar37->AllocatorInstance).InlineData;
    while (uVar18 == 0) {
      lVar39 = (longlong)iVar35;
      local_2a0._0_4_ = (int)local_2a0 + 0x20;
      iVar35 = iVar35 + 1;
      uStack_2a8._4_4_ = iVar36;
      uVar18 = 1;
      if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar35) goto LAB_143e0cc8d;
      uVar18 = *(uint *)((pTVar37->AllocatorInstance).InlineData + lVar39 * 4 + 4);
    }
    uVar18 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar18 * 2 + 1;
    lVar39 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    local_288 = (int)lVar39;
    uStack_2a8._4_4_ = local_288 + -1 + (int)local_2a0;
    if (iVar36 < uStack_2a8._4_4_) {
      uStack_2a8._4_4_ = iVar36;
    }
  }
LAB_143e0cc8d:
  uVar19 = *(uint *)(plVar40 + 5);
  bVar22 = (byte)uVar19 & 0x1f;
  iStack_298 = (int)plVar40[1] - *(int *)((longlong)plVar40 + 0x34);
  uVar31 = uVar19 & 0xffffffe0;
  uStack_354 = 1 << bVar22;
  uVar42 = -1 << bVar22;
  iVar30 = (int)uVar19 >> 5;
  uStack_2b8 = CONCAT44(uVar18,iVar35);
  uStack_2a8._0_4_ = 0xffffffff;
  local_2a0._4_4_ = local_94;
  TStack_270._padding_ = uStack_2b8;
  uStack_250 = CONCAT44(uStack_294,iStack_298);
  TStack_270.UnvisitedBitMask = 0xffffffff;
  TStack_270.CurrentBitIndex = uStack_2a8._4_4_;
  TStack_270.BaseBitIndex = (int)local_2a0;
  TStack_270._28_4_ = local_94;
  local_358 = iVar30;
  pTStack_350 = pTVar46;
  local_348 = uVar42;
  uStack_344 = uVar19;
  uStack_340 = uVar31;
  local_278 = plVar40;
  TStack_270.Array = pTVar46;
  if ((((int)uVar19 < 0) || (iVar36 < (int)uVar19)) &&
     (local_2c0 = plVar40, local_2b0 = pTVar46,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  fVar14 = __real_3f800000;
  uVar18 = *(uint *)(plVar40 + 5);
  if (uVar19 != uVar18) {
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar40[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar46 = (TBitArray<FDefaultBitArrayAllocator> *)plVar40[4];
    }
    uVar42 = uVar42 & *(uint *)((pTVar46->AllocatorInstance).InlineData + (longlong)iVar30 * 4);
    while (uVar42 == 0) {
      uStack_340 = uVar31 + 0x20;
      local_358 = iVar30 + 1;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < local_358)
      goto LAB_143e0cdcb;
      uVar42 = *(uint *)((pTVar46->AllocatorInstance).InlineData + (longlong)iVar30 * 4 + 4);
      local_348 = 0xffffffff;
      uVar31 = uStack_340;
      iVar30 = local_358;
    }
    uStack_354 = -uVar42 & uVar42;
    uVar2 = (ulonglong)uStack_354 * 2 + 1;
    lVar39 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    local_284 = (int)lVar39;
    uStack_344 = local_284 + -1 + uVar31;
    if ((int)uVar18 < (int)uStack_344) {
LAB_143e0cdcb:
      uStack_344 = uVar18;
    }
  }
  uStack_2b8 = CONCAT44(uStack_354,local_358);
  uStack_2a8 = CONCAT44(uStack_344,local_348);
  local_2a0 = CONCAT44(uStack_33c,uStack_340);
  iStack_298 = (int)plVar40[1] - *(int *)((longlong)plVar40 + 0x34);
  local_2b0 = pTStack_350;
  uStack_f8 = CONCAT44(uStack_294,iStack_298);
  local_110 = pTStack_350;
  local_2c0 = plVar40;
  local_120 = plVar40;
  uStack_118 = uStack_2b8;
  uStack_108 = uStack_2a8;
  local_100 = local_2a0;
  do {
    plVar40 = local_278;
    if ((int)local_278[1] - *(int *)((longlong)local_278 + 0x34) != (int)uStack_250) {
      local_39f[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_39f);
    }
    if (((TStack_270.CurrentBitIndex == uStack_108._4_4_) && (TStack_270.Array == local_110)) &&
       (plVar40 == local_120)) {
      if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.AllocatorInstance.Data);
      }
      if (bVar47) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar18 = *(uint *)(*plVar40 + (longlong)TStack_270.CurrentBitIndex * 0xc);
    lVar39 = (longlong)(int)uVar18;
    uVar42 = ~uVar18 >> 0x1f;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)&(this->SoftBodies).Status.field_0x10) {
      uVar19 = uVar42;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_370 = lVar39;
    if ((*(char *)(lVar39 + *(longlong *)&(this->SoftBodies).Status.field_0x8) != '\x01') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("SoftBodies.Status[SoftBodyId] == FSoftBodies::EStatus::Active",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                            ,0x1be,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar36 = param_2;
    if (((this->bEnableForceBasedSolver == false) || (this->NumNewtonIterations < 1)) ||
       (*(int *)&(this->LinearSystemParameters).field_0x4 < 1)) {
LAB_143e0cf9c:
      cVar29 = '\0';
      if (param_2 < 1) {
        iVar36 = 1;
      }
    }
    else {
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->SoftBodies).UpdateLinearSystemRules.field_0x10) {
        uVar19 = uVar42;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (*(int *)(*(longlong *)&(this->SoftBodies).UpdateLinearSystemRules.field_0x8 + 8 +
                  lVar39 * 0x10) == 0) goto LAB_143e0cf9c;
      cVar29 = '\x01';
    }
    local_388 = (undefined8 *)CONCAT44(local_388._4_4_,iVar36);
    bVar22 = 0 < iVar36 | cVar29 * '\x02';
    if ((bVar22 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverMode != ESolverMode::None",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                            ,0x1c8,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (cVar29 == '\0') {
      iVar35 = 0;
    }
    else {
      iVar35 = this->NumNewtonIterations;
    }
    *(undefined4 *)(local_368 + 0xc + local_360 * 8) = 0xffffffff;
    *(int *)(local_368 + 0x10 + local_360 * 8) = iVar35;
    *(byte *)(local_368 + local_360 * 8) = bVar22;
    *(float *)(local_368 + 4 + local_360 * 8) = param_1;
    *(int *)(local_368 + 8 + local_360 * 8) = iVar36;
    *(undefined4 *)(local_368 + 0x14 + local_360 * 8) = 0xffffffff;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)&(this->SoftBodies).LocalDamping.field_0x10) {
      uVar19 = uVar42;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar41 = (FPerParticleDampVelocity *)
              (*(longlong *)&(this->SoftBodies).LocalDamping.field_0x8 + lVar39 * 0x40);
    EVar8 = pFVar41->LocalDampingSpace;
    if ((0.0 < pFVar41->LinearCoefficient) || (bVar15 = false, 0.0 < pFVar41->AngularCoefficient)) {
      bVar15 = true;
    }
    bVar16 = -1 < CpuChannel->Enabled;
    local_378 = pFVar41;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId465,
                 "FSoftsEvolution_AdvanceOneTimeStepInternal_PreSubstepParallelInits",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                 ,0x1d1);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId465);
    }
    uVar19 = 0;
    if ((int)uVar18 < *(int *)&(this->SoftBodies).PreSubstepParallelInits.field_0x10) {
      uVar19 = uVar42;
    }
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar44 = *(longlong *)&(this->SoftBodies).PreSubstepParallelInits.field_0x8;
    local_380 = lVar39 * 0x10;
    local_228 = *(undefined8 *)(local_380 + lVar44);
    iVar35 = *(int *)(local_380 + 8 + lVar44);
    if ((iVar35 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_1e0 = &local_228;
    local_1f0 = &local_1e8;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l33::<lambda_1>,void,int>
                ::Call;
    local_220 = iVar35;
    local_1e8 = this;
    local_1d8 = pFVar41;
    local_1d0 = param_1;
    local_1cc = uVar18;
    local_1c8 = bVar22;
    PhysicsParallelFor((uint)(EVar8 == CenterOfMass) + iVar35,
                       (TFunctionRef<void___cdecl(int)> *)&local_1f8,false);
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((*(longlong *)&this->KinematicUpdate == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("KinematicUpdate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                            ,0x1e7,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId488,
                 "FSoftsEvolution_AdvanceOneTimeStepInternal_KinematicUpdates",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                 ,0x1e8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId488);
    }
    fVar48 = this->Time;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
      uVar19 = uVar42;
    }
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar44 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
    lVar39 = lVar39 * 0x20;
    local_2f8 = fVar48;
    local_2f0 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->KinematicUpdate);
    plVar40 = *(longlong **)&(this->KinematicUpdate).field_0x28;
    pcVar11 = *(code **)&this->KinematicUpdate;
    if (plVar40 == (longlong *)0x0) {
      plVar40 = (longlong *)&(this->KinematicUpdate).field_0x10;
    }
    uVar20 = (**(code **)(*plVar40 + 8))();
    (*pcVar11)(uVar20,lVar39 + lVar44);
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (0 < iVar36) {
      bVar16 = -1 < CpuChannel->Enabled;
      if (bVar16) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId497,
                   "FSoftsEvolution_AdvanceOneTimeStepInternal_InitialGuess",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                   ,0x1f1);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId497);
      }
      if (this->bDoQuasistatics == false) {
        uVar19 = 0;
        if ((int)uVar18 < *(int *)&(this->SoftBodies).PBDExternalForceRules.field_0x10) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar44 = *(longlong *)&(this->SoftBodies).PBDExternalForceRules.field_0x8;
        puVar33 = *(undefined8 **)(lVar44 + local_380);
        iVar36 = *(int *)(lVar44 + 8 + local_380);
        if ((iVar36 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar38 = puVar33 + (longlong)iVar36 * 6;
        for (; puVar33 != puVar38; puVar33 = puVar33 + 6) {
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar44 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
          local_2e8 = param_1;
          UE::Core::Private::Function::CheckCallable((void *)*puVar33);
          plVar40 = (longlong *)puVar33[5];
          pcVar11 = (code *)*puVar33;
          if (plVar40 == (longlong *)0x0) {
            plVar40 = puVar33 + 2;
          }
          uVar20 = (**(code **)(*plVar40 + 8))();
          (*pcVar11)(uVar20,lVar39 + lVar44);
          pFVar41 = local_378;
        }
        uVar19 = 0;
        if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        Softs::Private::EulerStepVelocity
                  ((FSolverParticlesRange *)
                   (*(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8 + lVar39),param_1);
        if (bVar15) {
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          Softs::Private::DampLocalVelocity
                    ((FSolverParticlesRange *)
                     (*(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8 + lVar39),pFVar41);
        }
        uVar19 = 0;
        if ((int)uVar18 < *(int *)&(this->SoftBodies).UsePerParticleDamping.field_0x10) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        fVar48 = this->SolverFrequency;
        if (*(char *)((longlong)(int)uVar18 +
                     *(longlong *)&(this->SoftBodies).UsePerParticleDamping.field_0x8) == '\0') {
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).GlobalDampings.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          fVar4 = *(float *)(*(longlong *)&(this->SoftBodies).GlobalDampings.field_0x8 +
                            (longlong)(int)uVar18 * 4);
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          Softs::Private::EulerStepPositionWithGlobalDamping
                    ((FSolverParticlesRange *)
                     (*(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8 + lVar39),fVar4,
                     fVar48,param_1);
        }
        else {
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          Softs::Private::EulerStepPositionWithGlobalDampingArray
                    ((FSolverParticlesRange *)
                     (*(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8 + lVar39),
                     &this->ParticleDampings,fVar48,param_1);
        }
      }
      else {
        uVar19 = 0;
        if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar32 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                  (*(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8 + lVar39);
        if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  (pTVar32,&local_1c0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pTVar32->Particles->_padding_);
        pTVar21 = FSolverParticlesRange::GetPAndInvM((FSolverParticlesRange *)pTVar32,&local_f0);
        iVar36 = 0;
        pFVar24 = pTVar21->DataPtr;
        pTVar27 = local_1c0.DataPtr;
        if (0 < pTVar32->RangeSize) {
          do {
            if (pFVar24->InvM != 0.0) {
              *(undefined8 *)&pFVar24->P = *(undefined8 *)pTVar27;
              *(undefined4 *)&(pFVar24->P).field_0x8 = *(undefined4 *)&pTVar27->field_0x8;
            }
            iVar36 = iVar36 + 1;
            pFVar24 = pFVar24 + 1;
            pTVar27 = pTVar27 + 1;
          } while (iVar36 < pTVar32->RangeSize);
        }
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId533,
                 "FSoftsEvolution_AdvanceOneTimeStepInternal_PostInitialGuessParallelInits",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                 ,0x215);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId533);
    }
    uVar19 = 0;
    if ((int)uVar18 < *(int *)&(this->SoftBodies).PostInitialGuessParallelInits.field_0x10) {
      uVar19 = uVar42;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar9 = local_380;
    lVar44 = *(longlong *)&(this->SoftBodies).PostInitialGuessParallelInits.field_0x8;
    local_248 = *(undefined8 *)(lVar44 + local_380);
    iVar36 = *(int *)(lVar44 + 8 + local_380);
    if ((iVar36 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_210 = &local_248;
    local_230 = &local_218;
    local_238 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l63::<lambda_2>,void,int>
                ::Call;
    local_240 = iVar36;
    local_218 = this;
    local_208 = param_1;
    local_204 = uVar18;
    local_200 = bVar22;
    PhysicsParallelFor(iVar36,(TFunctionRef<void___cdecl(int)> *)&local_238,false);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId543,
                 "FSoftsEvolution_AdvanceOneTimeStepInternal_PreSubstepConstraintRules",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                 ,0x21f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId543);
    }
    uVar19 = 0;
    if ((int)uVar18 < *(int *)&(this->SoftBodies).PreSubstepConstraintRules.field_0x10) {
      uVar19 = uVar42;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar44 = *(longlong *)&(this->SoftBodies).PreSubstepConstraintRules.field_0x8;
    puVar33 = *(undefined8 **)(lVar9 + lVar44);
    iVar36 = *(int *)(lVar9 + 8 + lVar44);
    if ((iVar36 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar38 = puVar33 + (longlong)iVar36 * 6;
    for (; puVar33 != puVar38; puVar33 = puVar33 + 6) {
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
        uVar19 = uVar42;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar44 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
      local_398 = bVar22;
      local_2e0[0] = param_1;
      UE::Core::Private::Function::CheckCallable((void *)*puVar33);
      plVar40 = (longlong *)puVar33[5];
      pcVar11 = (code *)*puVar33;
      if (plVar40 == (longlong *)0x0) {
        plVar40 = puVar33 + 2;
      }
      uVar20 = (**(code **)(*plVar40 + 8))();
      (*pcVar11)(uVar20,lVar39 + lVar44,local_2e0);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    iVar36 = (int)local_388;
    if ((int)local_388 < 1) {
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
        uVar19 = uVar42;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar32 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                (lVar39 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8);
      if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                (pTVar32,&local_150,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &pTVar32->Particles->_padding_);
      pTVar27 = local_150.DataPtr;
      if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                (pTVar32,&local_140,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &pTVar32->Particles->_padding_);
      iVar36 = 0;
      if (0 < pTVar32->RangeSize) {
        pTVar26 = local_140.DataPtr;
        do {
          iVar36 = iVar36 + 1;
          *(undefined8 *)pTVar26 =
               *(undefined8 *)
                (((longlong)pTVar27 - (longlong)local_140.DataPtr) + (longlong)pTVar26);
          *(undefined4 *)&pTVar26->field_0x8 =
               *(undefined4 *)
                (((longlong)pTVar27 - (longlong)local_140.DataPtr) + 8 + (longlong)pTVar26);
          pTVar26 = pTVar26 + 1;
        } while (iVar36 < pTVar32->RangeSize);
      }
    }
    else {
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId554,
                   "FSoftsEvolution_AdvanceOneTimeStepInternal_IterationLoop",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                   ,0x22a);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId554);
      }
      *local_310 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar18 < *(int *)&(this->SoftBodies).PerIterationPBDConstraintRules.field_0x10) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar44 = *(longlong *)&(this->SoftBodies).PerIterationPBDConstraintRules.field_0x8;
        iVar35 = *(int *)(lVar44 + 8 + local_380);
        puVar33 = *(undefined8 **)(lVar44 + local_380);
        if ((iVar35 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar38 = puVar33 + (longlong)iVar35 * 6;
        if (puVar33 != puVar38) {
          do {
            uVar19 = 0;
            if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
              uVar19 = uVar42;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar44 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
            local_2d8[0] = param_1;
            UE::Core::Private::Function::CheckCallable((void *)*puVar33);
            plVar40 = (longlong *)puVar33[5];
            pcVar11 = (code *)*puVar33;
            if (plVar40 == (longlong *)0x0) {
              plVar40 = puVar33 + 2;
            }
            uVar20 = (**(code **)(*plVar40 + 8))();
            (*pcVar11)(uVar20,lVar39 + lVar44,local_2d8);
            puVar33 = puVar33 + 6;
          } while (puVar33 != puVar38);
          iVar36 = (int)local_388;
        }
        uVar19 = 0;
        if ((int)uVar18 <
            *(int *)&(this->SoftBodies).PerIterationCollisionPBDConstraintRules.field_0x10) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar44 = *(longlong *)&(this->SoftBodies).PerIterationCollisionPBDConstraintRules.field_0x8;
        iVar35 = *(int *)(lVar44 + 8 + local_380);
        puVar33 = *(undefined8 **)(lVar44 + local_380);
        if ((iVar35 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar38 = puVar33 + (longlong)iVar35 * 6;
        if (puVar33 != puVar38) {
          do {
            uVar19 = 0;
            if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
              uVar19 = uVar42;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar44 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
            local_338[0] = param_1;
            UE::Core::Private::Function::CheckCallable((void *)*puVar33);
            plVar40 = (longlong *)puVar33[5];
            pcVar11 = (code *)*puVar33;
            if (plVar40 == (longlong *)0x0) {
              plVar40 = puVar33 + 2;
            }
            uVar20 = (**(code **)(*plVar40 + 8))();
            (*pcVar11)(uVar20,lVar39 + lVar44,local_338);
            puVar33 = puVar33 + 6;
          } while (puVar33 != puVar38);
          iVar36 = (int)local_388;
        }
        uVar19 = 0;
        if ((int)uVar18 <
            *(int *)&(this->SoftBodies).PerIterationPostCollisionsPBDConstraintRules.field_0x10) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar44 = *(longlong *)
                  &(this->SoftBodies).PerIterationPostCollisionsPBDConstraintRules.field_0x8;
        iVar35 = *(int *)(lVar44 + 8 + local_380);
        puVar33 = *(undefined8 **)(lVar44 + local_380);
        if ((iVar35 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar38 = puVar33 + (longlong)iVar35 * 6;
        if (puVar33 != puVar38) {
          do {
            uVar19 = 0;
            if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
              uVar19 = uVar42;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar44 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
            local_330[0] = param_1;
            UE::Core::Private::Function::CheckCallable((void *)*puVar33);
            plVar40 = (longlong *)puVar33[5];
            pcVar11 = (code *)*puVar33;
            if (plVar40 == (longlong *)0x0) {
              plVar40 = puVar33 + 2;
            }
            uVar20 = (**(code **)(*plVar40 + 8))();
            (*pcVar11)(uVar20,lVar39 + lVar44,local_330);
            puVar33 = puVar33 + 6;
          } while (puVar33 != puVar38);
          iVar36 = (int)local_388;
        }
        *local_310 = *local_310 + 1;
      } while (*local_310 < iVar36);
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId579,
                   "FSoftsEvolution_AdvanceOneTimeStepInternal_PostStepUpdate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                   ,0x243);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId579);
      }
      iVar36 = *(int *)&(this->SoftBodies).ParticleRanges.field_0x10;
      if (cVar29 == '\0') {
        uVar19 = 0;
        if ((int)uVar18 < iVar36) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar32 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                  (lVar39 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8);
        pTVar21 = FSolverParticlesRange::GetPAndInvM((FSolverParticlesRange *)pTVar32,&local_d0);
        pFVar24 = pTVar21->DataPtr;
        if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  (pTVar32,&local_180,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pTVar32->Particles->_padding_);
        pTVar27 = local_180.DataPtr;
        if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  (pTVar32,&local_170,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pTVar32->Particles->_padding_);
        pTVar26 = local_170.DataPtr;
        if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  (pTVar32,&local_160,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pTVar32->Particles->_padding_);
        iVar36 = 0;
        if (0 < pTVar32->RangeSize) {
          pfVar25 = (float *)&pTVar27->field_0x4;
          lVar44 = (longlong)pTVar26 - (longlong)pTVar27;
          fVar48 = fVar14 / param_1;
          pTVar27 = local_160.DataPtr;
          do {
            iVar36 = iVar36 + 1;
            *(undefined8 *)pTVar27 = *(undefined8 *)(lVar44 + -4 + (longlong)pfVar25);
            *(undefined4 *)&pTVar27->field_0x8 = *(undefined4 *)(lVar44 + 4 + (longlong)pfVar25);
            pTVar27 = pTVar27 + 1;
            fVar4 = *(float *)&(pFVar24->P).field_0x4;
            fVar5 = *(float *)&(pFVar24->P).field_0x8;
            fVar6 = *pfVar25;
            fVar7 = pfVar25[1];
            *(float *)(lVar44 + -4 + (longlong)pfVar25) =
                 (*(float *)&pFVar24->P - pfVar25[-1]) * fVar48;
            *(float *)((longlong)pfVar25 + lVar44) = (fVar4 - fVar6) * fVar48;
            *(float *)((longlong)pfVar25 + lVar44 + 4) = (fVar5 - fVar7) * fVar48;
            uVar13 = *(undefined4 *)&(pFVar24->P).field_0x4;
            pfVar25[-1] = (float)*(undefined4 *)&(pFVar24->P).field_0x0;
            pfVar25[0] = (float)uVar13;
            pTVar26 = &pFVar24->P;
            pFVar24 = pFVar24 + 1;
            pfVar25[1] = *(float *)&pTVar26->field_0x8;
            pfVar25 = pfVar25 + 3;
          } while (iVar36 < pTVar32->RangeSize);
        }
      }
      else {
        uVar19 = 0;
        if ((int)uVar18 < iVar36) {
          uVar19 = uVar42;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar32 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                  (*(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8 + lVar39);
        pTVar21 = FSolverParticlesRange::GetPAndInvM((FSolverParticlesRange *)pTVar32,&local_e0);
        pFVar24 = pTVar21->DataPtr;
        if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  (pTVar32,&local_1b0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pTVar32->Particles->_padding_);
        pTVar27 = local_1b0.DataPtr;
        if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  (pTVar32,&local_1a0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pTVar32->Particles->_padding_);
        pTVar26 = local_1a0.DataPtr;
        if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  (pTVar32,&local_190,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pTVar32->Particles->_padding_);
        iVar36 = 0;
        if (0 < pTVar32->RangeSize) {
          pfVar25 = (float *)&pTVar27->field_0x4;
          pfVar28 = (float *)&(pFVar24->P).field_0x4;
          fVar48 = fVar14 / param_1;
          lVar44 = (longlong)pTVar26 - (longlong)pTVar27;
          pTVar27 = local_190.DataPtr;
          do {
            iVar36 = iVar36 + 1;
            *(undefined8 *)pTVar27 = *(undefined8 *)((longlong)pfVar25 + lVar44 + -4);
            *(undefined4 *)&pTVar27->field_0x8 = *(undefined4 *)((longlong)pfVar25 + lVar44 + 4);
            pTVar27 = pTVar27 + 1;
            pfVar1 = pfVar28 + -1;
            fVar4 = *pfVar28;
            fVar5 = pfVar28[1];
            pfVar28 = pfVar28 + 4;
            fVar6 = *pfVar25;
            fVar7 = pfVar25[1];
            *(float *)((longlong)pfVar25 + lVar44 + -4) = (*pfVar1 - pfVar25[-1]) * fVar48;
            *(float *)((longlong)pfVar25 + lVar44) = (fVar4 - fVar6) * fVar48;
            *(float *)((longlong)pfVar25 + lVar44 + 4) = (fVar5 - fVar7) * fVar48;
            pfVar25 = pfVar25 + 3;
          } while (iVar36 < pTVar32->RangeSize);
        }
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (cVar29 != '\0') {
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->SoftBodies).UpdateLinearSystemRules.field_0x10) {
        uVar19 = uVar42;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar9 = local_380;
      lVar44 = *(longlong *)&(this->SoftBodies).UpdateLinearSystemRules.field_0x8;
      iVar36 = *(int *)(local_380 + 8 + lVar44);
      puVar33 = *(undefined8 **)(local_380 + lVar44);
      local_280 = puVar33;
      if (iVar36 < 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar15) {
code_r0x000143e0e50b:
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      else if ((iVar36 == 0) &&
              (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LinearSystemRules.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                                   ,600,L""), bVar15)) goto code_r0x000143e0e50b;
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->SoftBodies).UpdateLinearSystemCollisionsRules.field_0x10) {
        uVar19 = uVar42;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar44 = *(longlong *)&(this->SoftBodies).UpdateLinearSystemCollisionsRules.field_0x8;
      iVar35 = *(int *)(lVar9 + 8 + lVar44);
      pFVar41 = *(FPerParticleDampVelocity **)(lVar9 + lVar44);
      local_290 = pFVar41;
      if ((iVar35 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((this->NumNewtonIterations < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumNewtonIterations > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                              ,0x25a,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(undefined4 *)(local_368 + 0x14 + local_360 * 8) = 0;
      if (0 < this->NumNewtonIterations) {
        lVar44 = local_370 * 0x48;
        local_388 = puVar33 + (longlong)iVar36 * 6;
        local_378 = (FPerParticleDampVelocity *)
                    (&pFVar41->LocalDampingSpace + (longlong)iVar35 * 0x30);
        do {
          pFVar49 = &this->LinearSystemParameters;
          bVar15 = -1 < CpuChannel->Enabled;
          if (bVar15) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId605,
                       "FSoftsEvolution_AdvanceOneTimeStepInternal_NewtonIteration",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                       ,0x25d);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId605);
          }
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).LinearSystems.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar9 = *(longlong *)&(this->SoftBodies).LinearSystems.field_0x8;
          iVar36 = *(int *)(local_368 + 0x14 + local_360 * 8);
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FEvolutionLinearSystem::Init
                    ((FEvolutionLinearSystem *)(lVar9 + lVar44),
                     (FSolverParticlesRange *)
                     (lVar39 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8),param_1,
                     iVar36 == 0,(FEvolutionLinearSystemSolverParameters *)pFVar49);
          puVar38 = local_388;
          pFVar41 = local_378;
          for (puVar33 = local_280; local_378 = pFVar41, pFVar12 = local_290, puVar33 != puVar38;
              puVar33 = puVar33 + 6) {
            pFVar34 = (FLinearSystemParameters *)(longlong)(int)uVar18;
            uVar19 = 0;
            if ((int)uVar18 < *(int *)&(this->SoftBodies).LinearSystems.field_0x10) {
              uVar19 = uVar42;
            }
            if ((uVar19 == 0) &&
               (pFVar49 = pFVar34,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar9 = *(longlong *)&(this->SoftBodies).LinearSystems.field_0x8;
            uVar19 = 0;
            if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
              uVar19 = uVar42;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar49 = pFVar34, bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar10 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
            local_328[0] = param_1;
            UE::Core::Private::Function::CheckCallable((void *)*puVar33);
            plVar40 = (longlong *)puVar33[5];
            pcVar11 = (code *)*puVar33;
            if (plVar40 == (longlong *)0x0) {
              plVar40 = puVar33 + 2;
            }
            uVar20 = (**(code **)(*plVar40 + 8))();
            (*pcVar11)(uVar20,lVar39 + lVar10,local_328,lVar9 + lVar44,pFVar49);
            pFVar41 = local_378;
          }
          for (; pFVar12 != pFVar41;
              pFVar12 = (FPerParticleDampVelocity *)&pFVar12->LocalDampingCoefficientIndex) {
            uVar19 = 0;
            if ((int)uVar18 < *(int *)&(this->SoftBodies).LinearSystems.field_0x10) {
              uVar19 = uVar42;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar9 = *(longlong *)&(this->SoftBodies).LinearSystems.field_0x8;
            uVar19 = 0;
            if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
              uVar19 = uVar42;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar10 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
            local_320[0] = param_1;
            UE::Core::Private::Function::CheckCallable(*(void **)pFVar12);
            plVar40 = *(longlong **)&(pFVar12->Omega).field_0x4;
            pcVar11 = *(code **)pFVar12;
            if (plVar40 == (longlong *)0x0) {
              plVar40 = (longlong *)&(pFVar12->Xcm).field_0x4;
            }
            uVar20 = (**(code **)(*plVar40 + 8))();
            (*pcVar11)(uVar20,lVar39 + lVar10,local_320,&local_2d0,lVar9 + lVar44);
          }
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).LinearSystems.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar9 = *(longlong *)&(this->SoftBodies).LinearSystems.field_0x8;
          uVar19 = 0;
          if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
            uVar19 = uVar42;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          bVar16 = FEvolutionLinearSystem::Solve
                             ((FEvolutionLinearSystem *)(lVar9 + lVar44),
                              (FSolverParticlesRange *)
                              (lVar39 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8),
                              param_1);
          if (!bVar16) {
            if (bVar15) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            break;
          }
          if (bVar15) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          piVar3 = (int *)(local_368 + 0x14 + local_360 * 8);
          *piVar3 = *piVar3 + 1;
        } while (*(int *)(local_368 + 0x14 + local_360 * 8) < this->NumNewtonIterations);
      }
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
        uVar19 = uVar42;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar32 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                (lVar39 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8);
      pTVar21 = FSolverParticlesRange::GetPAndInvM((FSolverParticlesRange *)pTVar32,local_c0);
      pFVar24 = pTVar21->DataPtr;
      if ((pTVar32->Particles == (FSolverParticles *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                (pTVar32,&local_130,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &pTVar32->Particles->_padding_);
      iVar36 = 0;
      pTVar27 = local_130.DataPtr;
      if (0 < pTVar32->RangeSize) {
        do {
          *(undefined8 *)pTVar27 = *(undefined8 *)&pFVar24->P;
          iVar36 = iVar36 + 1;
          *(undefined4 *)&pTVar27->field_0x8 = *(undefined4 *)&(pFVar24->P).field_0x8;
          pTVar27 = pTVar27 + 1;
          pFVar24 = pFVar24 + 1;
        } while (iVar36 < pTVar32->RangeSize);
      }
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId629,
                 "FSoftsEvolution_AdvanceOneTimeStepInternal_PostSubstep",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                 ,0x275);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId629);
    }
    uVar19 = 0;
    if ((int)uVar18 < *(int *)&(this->SoftBodies).PostSubstepConstraintRules.field_0x10) {
      uVar19 = uVar42;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar44 = *(longlong *)&(this->SoftBodies).PostSubstepConstraintRules.field_0x8;
    puVar33 = *(undefined8 **)(lVar44 + local_380);
    iVar36 = *(int *)(lVar44 + 8 + local_380);
    if ((iVar36 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar38 = puVar33 + (longlong)iVar36 * 6;
    for (; puVar33 != puVar38; puVar33 = puVar33 + 6) {
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
        uVar19 = uVar42;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar44 = *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8;
      local_390[0] = bVar22;
      local_318[0] = param_1;
      UE::Core::Private::Function::CheckCallable((void *)*puVar33);
      plVar40 = (longlong *)puVar33[5];
      pcVar11 = (code *)*puVar33;
      if (plVar40 == (longlong *)0x0) {
        plVar40 = puVar33 + 2;
      }
      uVar20 = (**(code **)(*plVar40 + 8))();
      (*pcVar11)(uVar20,lVar39 + lVar44,local_318,local_390);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
  } while( true );
}

// GetActiveCollisionParticles @ 143e23760

TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FEvolution::GetActiveCollisionParticles
          (FEvolution *this,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,uint param_1)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  int local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar16 = 0;
  if ((int)param_1 < *(int *)&(this->Groups).ActiveCollisionParticleRanges.field_0x10) {
    uVar16 = ~param_1 >> 0x1f;
  }
  local_res18 = param_1;
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
             (*pcVar4)();
    return pTVar8;
  }
  lVar9 = *(longlong *)&(this->Groups).ActiveCollisionParticleRanges.field_0x8;
  lVar15 = (longlong)(int)param_1 * 0x50;
  uVar16 = *(int *)(lVar15 + 8 + lVar9) - *(int *)(lVar15 + 0x34 + lVar9);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  uVar16 = 0;
  if ((int)param_1 < *(int *)&(this->Groups).ActiveCollisionParticleRanges.field_0x10) {
    uVar16 = ~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
             (*pcVar4)();
    return pTVar8;
  }
  iVar17 = 0;
  plVar13 = (longlong *)
            (*(longlong *)&(this->Groups).ActiveCollisionParticleRanges.field_0x8 + lVar15);
  iVar7 = (int)plVar13[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
  iVar19 = 0;
  uVar16 = 1;
  iVar6 = 0;
  if (iVar7 != 0) {
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar2;
    }
    uVar14 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar6 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143e23901;
      uVar14 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar16 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar16 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar6 = local_res10 + -1 + iVar19;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
LAB_143e23901:
  uVar14 = *(uint *)(plVar13 + 5);
  uVar11 = uVar14 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar16,iVar17);
  TStack_90.CurrentBitIndex = iVar6;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar14 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar19;
  uStack_70 = CONCAT44(uStack_9c,(int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34));
  TStack_90.Array = pTVar2;
  if ((((int)uVar14 < 0) || (iVar7 < (int)uVar14)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
             (*pcVar4)();
    return pTVar8;
  }
  uVar16 = *(uint *)(plVar13 + 5);
  if (uVar14 != uVar16) {
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar17;
      uVar11 = uVar11 + 0x20;
      iVar17 = iVar17 + 1;
      uVar14 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143e23a00;
      uVar14 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar14 = local_res20 + -1 + uVar11;
    if ((int)uVar16 < (int)uVar14) {
      uVar14 = uVar16;
    }
  }
LAB_143e23a00:
  while( true ) {
    if ((int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34) != (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar14) && (TStack_90.Array == pTVar2)) {
      return __return_storage_ptr__;
    }
    uVar16 = *(uint *)(*plVar13 + (longlong)TStack_90.CurrentBitIndex * 0xc);
    lVar9 = (longlong)(int)uVar16;
    uVar12 = ~uVar16 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar16 < *(int *)&(this->CollisionRanges).Status.field_0x10) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    if ((*(char *)(lVar9 + *(longlong *)&(this->CollisionRanges).Status.field_0x8) != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CollisionRanges.Status[RangeId] == FCollisionBodyRanges::EStatus::Active"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                           ,0x181,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    uVar11 = 0;
    if ((int)uVar16 < *(int *)&(this->CollisionRanges).GroupId.field_0x10) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    if ((*(uint *)(*(longlong *)&(this->CollisionRanges).GroupId.field_0x8 + lVar9 * 4) !=
         local_res18) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CollisionRanges.GroupId[RangeId] == GroupId",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                           ,0x182,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    uVar11 = 0;
    if ((int)uVar16 < *(int *)&(this->CollisionRanges).ParticleRanges.field_0x10) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    lVar9 = lVar9 * 0x20 + *(longlong *)&(this->CollisionRanges).ParticleRanges.field_0x8;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
    *(undefined ***)pFVar10 =
         &___7__TParticlesRange_VFSolverCollisionParticles_Softs_Chaos__X_Softs_Chaos__6B_;
    *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)(lVar9 + 8);
    *(undefined4 *)(pFVar10 + 0x10) = *(undefined4 *)(lVar9 + 0x10);
    *(undefined4 *)(pFVar10 + 0x14) = *(undefined4 *)(lVar9 + 0x14);
    *(undefined4 *)(pFVar10 + 0x18) = *(undefined4 *)(lVar9 + 0x18);
    *(undefined ***)pFVar10 = &___7FSolverCollisionParticlesRange_Softs_Chaos__6B_;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  pcVar4 = (code *)swi(3);
  pTVar8 = (TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *)
           (*pcVar4)();
  return pTVar8;
}

// GetActiveGroupsArray @ 143e23c20

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FEvolution::GetActiveGroupsArray
          (FEvolution *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  uint local_18 [4];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (uint)(this->Groups)._padding_;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_18[0] = 0;
  if ((int)(this->Groups)._padding_ != 0) {
    do {
      if (*(int *)&(this->Groups).ActiveSoftBodies.field_0x10 != 0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 4)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar7;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             local_18[0];
      }
      local_18[0] = local_18[0] + 1;
    } while (local_18[0] < (uint)(this->Groups)._padding_);
  }
  return __return_storage_ptr__;
}

// GetSoftBodyParticleNum @ 143e2c9f0

int __thiscall Chaos::Softs::FEvolution::GetSoftBodyParticleNum(FEvolution *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
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
  return *(int *)((longlong)param_1 * 0x20 + 0x14 +
                 *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8);
}

// NumActiveParticles @ 143e37170

int __thiscall Chaos::Softs::FEvolution::NumActiveParticles(FEvolution *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_e0;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  FScriptContainerElement *local_c0;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar7 = 0;
  GetActiveGroupsArray(this,&local_e0);
  local_res20 = local_e0.ArrayNum;
  uVar9 = (ulonglong)(int)local_res20;
  local_c0 = local_e0.AllocatorInstance.Data + uVar9 * 4;
  FVar12.Data = local_e0.AllocatorInstance.Data;
  do {
    pFVar5 = local_c0;
    if (local_e0.ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar12.Data == pFVar5) {
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      return iVar7;
    }
    uVar15 = *(uint *)FVar12.Data;
    uVar13 = 0;
    if ((int)uVar15 < *(int *)&(this->Groups).ActiveSoftBodies.field_0x10) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    iStack_b0 = 0;
    plVar14 = (longlong *)
              ((longlong)(int)uVar15 * 0x50 +
              *(longlong *)&(this->Groups).ActiveSoftBodies.field_0x8);
    local_98 = 0;
    iVar2 = (int)plVar14[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
    uStack_ac = 1;
    iStack_9c = 0;
    if (iVar2 != 0) {
      pTVar16 = pTVar1;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
      }
      uVar15 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      while (uVar15 == 0) {
        lVar10 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_143e372ad;
        uVar15 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uStack_ac = -uVar15 & uVar15;
      uVar9 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_d0 = (int)lVar10;
      iStack_9c = local_98 + -1 + local_d0;
      if (iVar2 < iStack_9c) {
        iStack_9c = iVar2;
      }
    }
LAB_143e372ad:
    uVar15 = *(uint *)(plVar14 + 5);
    uStack_94 = local_3c;
    iStack_90 = (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34);
    uVar13 = uVar15 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
    uStack_a0 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar15 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_c8 = plVar14;
    local_b8 = plVar14;
    local_a8 = pTVar1;
    local_88 = plVar14;
    TStack_80.Array = pTVar1;
    if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    plVar4 = local_c8;
    uVar8 = *(uint *)(plVar14 + 5);
    if (uVar15 != uVar8) {
      pTVar16 = pTVar1;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar15 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_143e373b1;
        uVar15 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uVar9 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_cc = (int)lVar10;
      uVar15 = local_cc + -1 + uVar13;
      if ((int)uVar8 < (int)uVar15) {
        uVar15 = uVar8;
      }
    }
LAB_143e373b1:
    while( true ) {
      plVar14 = local_88;
      if ((int)local_88[1] - *(int *)((longlong)local_88 + 0x34) != (int)uStack_60) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_80.CurrentBitIndex == uVar15) && (TStack_80.Array == pTVar1)) &&
         (plVar14 == plVar4)) break;
      uVar13 = *(uint *)(*plVar14 + (longlong)TStack_80.CurrentBitIndex * 0xc);
      uVar8 = 0;
      if ((int)uVar13 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      iVar7 = iVar7 + *(int *)((longlong)(int)uVar13 * 0x20 + 0x14 +
                              *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    FVar12.Data = FVar12.Data + 4;
    uVar9 = (ulonglong)local_res20;
  } while( true );
}

// RemoveCollisionParticleRange @ 143e3f240

void __thiscall Chaos::Softs::FEvolution::RemoveCollisionParticleRange(FEvolution *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  
  uVar7 = 0;
  if (param_1 < *(int *)&(this->CollisionRanges).Status.field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if (uVar7 == 0) {
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
  if (*(char *)((longlong)param_1 + *(longlong *)&(this->CollisionRanges).Status.field_0x8) !=
      '\x01') {
    lVar10 = (longlong)(int)local_res10[0];
    uVar7 = 0;
    if ((int)local_res10[0] < *(int *)&(this->CollisionRanges).Status.field_0x10) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if (uVar7 == 0) {
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
    if (*(char *)(lVar10 + *(longlong *)&(this->CollisionRanges).Status.field_0x8) != '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CollisionRanges.Status[CollisionRangeId] == FCollisionBodyRanges::EStatus::Active || CollisionRanges.Status[CollisionRangeId] == FCollisionBodyRanges::EStatus::Inactive"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                         ,0x15d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  lVar10 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)&(this->CollisionRanges).GroupId.field_0x10) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if (uVar7 == 0) {
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
  uVar7 = *(uint *)(*(longlong *)&(this->CollisionRanges).GroupId.field_0x8 + lVar10 * 4);
  uVar4 = 0;
  if ((int)uVar7 < *(int *)&(this->Groups).ActiveCollisionParticleRanges.field_0x10) {
    uVar4 = ~uVar7 >> 0x1f;
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
  this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            ((longlong)(int)uVar7 * 0x50 +
            *(longlong *)&(this->Groups).ActiveCollisionParticleRanges.field_0x8);
  local_res8[0] = local_res10[0];
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (this_00,local_res10[0],(int *)local_res8);
  }
  lVar10 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)&(this->CollisionRanges).Status.field_0x10) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if (uVar7 == 0) {
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
  *(undefined1 *)(lVar10 + *(longlong *)&(this->CollisionRanges).Status.field_0x8) = 3;
  lVar10 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)&(this->CollisionRanges).ParticleRanges.field_0x10) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if (uVar7 == 0) {
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
  local_res18[0] =
       *(uint *)(lVar10 * 0x20 + 0x14 +
                *(longlong *)&(this->CollisionRanges).ParticleRanges.field_0x8);
  if (*(int *)&(this->CollisionRangeFreeList).field_0x8 !=
      *(int *)&(this->CollisionRangeFreeList).field_0x34) {
    puVar9 = *(undefined1 **)&(this->CollisionRangeFreeList).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CollisionRangeFreeList).field_0x38;
    }
    uVar7 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->CollisionRangeFreeList).field_0x48 - 1U &
                               local_res18[0]) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&this->CollisionRangeFreeList);
        if (*puVar8 == local_res18[0]) {
          if (puVar8 != (uint *)0x0) {
            pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar8 + 2);
            goto LAB_143e3f521;
          }
          break;
        }
        uVar7 = puVar8[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  pTVar6 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<int_const_&>
                     ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->CollisionRangeFreeList,local_res18[0],(int *)local_res18);
LAB_143e3f521:
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)pTVar6->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = pTVar6->ArrayNum;
  if (iVar5 == pTVar6->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar5 + 1;
  *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// RemoveSoftBody @ 143e44490

void __thiscall Chaos::Softs::FEvolution::RemoveSoftBody(FEvolution *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  
  uVar7 = 0;
  if (param_1 < *(int *)&(this->SoftBodies).Status.field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if (uVar7 == 0) {
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
  if (*(char *)((longlong)param_1 + *(longlong *)&(this->SoftBodies).Status.field_0x8) != '\x01') {
    lVar10 = (longlong)(int)local_res10[0];
    uVar7 = 0;
    if ((int)local_res10[0] < *(int *)&(this->SoftBodies).Status.field_0x10) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if (uVar7 == 0) {
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
    if (*(char *)(lVar10 + *(longlong *)&(this->SoftBodies).Status.field_0x8) != '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoftBodies.Status[SoftBodyId] == FSoftBodies::EStatus::Active || SoftBodies.Status[SoftBodyId] == FSoftBodies::EStatus::Inactive"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                         ,0x107,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  lVar10 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)&(this->SoftBodies).GroupId.field_0x10) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if (uVar7 == 0) {
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
  uVar7 = *(uint *)(*(longlong *)&(this->SoftBodies).GroupId.field_0x8 + lVar10 * 4);
  uVar4 = 0;
  if ((int)uVar7 < *(int *)&(this->Groups).ActiveSoftBodies.field_0x10) {
    uVar4 = ~uVar7 >> 0x1f;
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
  this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            ((longlong)(int)uVar7 * 0x50 + *(longlong *)&(this->Groups).ActiveSoftBodies.field_0x8);
  local_res8[0] = local_res10[0];
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (this_00,local_res10[0],(int *)local_res8);
  }
  lVar10 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)&(this->SoftBodies).Status.field_0x10) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if (uVar7 == 0) {
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
  *(undefined1 *)(lVar10 + *(longlong *)&(this->SoftBodies).Status.field_0x8) = 3;
  lVar10 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if (uVar7 == 0) {
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
  local_res18[0] =
       *(uint *)(lVar10 * 0x20 + 0x14 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8);
  if (*(int *)&(this->SoftBodyFreeList).field_0x8 != *(int *)&(this->SoftBodyFreeList).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SoftBodyFreeList).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SoftBodyFreeList).field_0x38;
    }
    uVar7 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->SoftBodyFreeList).field_0x48 - 1U & local_res18[0])
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&this->SoftBodyFreeList);
        if (*puVar8 == local_res18[0]) {
          if (puVar8 != (uint *)0x0) {
            pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar8 + 2);
            goto LAB_143e44771;
          }
          break;
        }
        uVar7 = puVar8[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  pTVar6 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<int_const_&>
                     ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->SoftBodyFreeList,local_res18[0],(int *)local_res18);
LAB_143e44771:
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)pTVar6->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = pTVar6->ArrayNum;
  if (iVar5 == pTVar6->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar5 + 1;
  *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// Reset @ 143e46270

void __thiscall Chaos::Softs::FEvolution::Reset(FEvolution *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  *(undefined4 *)&(this->CollisionParticles)._padding_ = 0;
  plVar5 = (longlong *)(this->CollisionParticles)._padding_;
  iVar2 = (int)(this->CollisionParticles)._padding_;
  plVar4 = plVar5 + iVar2;
  while( true ) {
    if ((int)(this->CollisionParticles)._padding_ != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar4) break;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 8))();
    }
    plVar5 = plVar5 + 1;
  }
  piVar1 = (int *)((longlong)&(this->CollisionParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)&(this->Particles)._padding_ = 0;
  plVar5 = (longlong *)(this->Particles)._padding_;
  iVar2 = (int)(this->Particles)._padding_;
  plVar4 = plVar5 + iVar2;
  while( true ) {
    if ((int)(this->Particles)._padding_ != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar4) break;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 8))();
    }
    plVar5 = plVar5 + 1;
  }
  piVar1 = (int *)((longlong)&(this->Particles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)&(this->SoftBodies)._padding_ = 0;
  plVar5 = (longlong *)(this->SoftBodies)._padding_;
  iVar2 = (int)(this->SoftBodies)._padding_;
  plVar4 = plVar5 + iVar2;
  while( true ) {
    if ((int)(this->SoftBodies)._padding_ != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar4) break;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 8))();
    }
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)&(this->CollisionRanges)._padding_ = 0;
  plVar5 = (longlong *)(this->CollisionRanges)._padding_;
  iVar2 = (int)(this->CollisionRanges)._padding_;
  plVar4 = plVar5 + iVar2;
  while( true ) {
    if ((int)(this->CollisionRanges)._padding_ != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar4) break;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 8))();
    }
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)&(this->Groups)._padding_ = 0;
  plVar5 = (longlong *)(this->Groups)._padding_;
  iVar2 = (int)(this->Groups)._padding_;
  plVar4 = plVar5 + iVar2;
  while( true ) {
    if ((int)(this->Groups)._padding_ != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar4) break;
    plVar3 = (longlong *)*plVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,0);
    }
    plVar5 = plVar5 + 1;
  }
  if (*(longlong *)&this->KinematicUpdate != 0) {
    plVar4 = *(longlong **)&(this->KinematicUpdate).field_0x28;
    plVar5 = (longlong *)&(this->KinematicUpdate).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
    *(undefined8 *)&this->KinematicUpdate = 0;
  }
  if (*(longlong *)&this->CollisionKinematicUpdate != 0) {
    plVar4 = *(longlong **)&(this->CollisionKinematicUpdate).field_0x28;
    plVar5 = (longlong *)&(this->CollisionKinematicUpdate).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
    *(undefined8 *)&this->CollisionKinematicUpdate = 0;
  }
  return;
}

// SetSoftBodyProperties @ 143e4e5a0

void __thiscall
Chaos::Softs::FEvolution::SetSoftBodyProperties
          (FEvolution *this,int param_1,FCollectionPropertyConstFacade *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,TVector<float,3> *param_6)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  FString *pFVar9;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar10;
  float *pfVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_118;
  ulonglong uStack_110;
  TArrayView<float,int> local_100;
  FCollectionPropertyConstFacade *local_f0 [2];
  TArrayView<float_const_,int> local_e0;
  float local_d0;
  float local_cc;
  FString local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  FString local_98 [6];
  
  uVar12 = 0;
  lVar16 = (longlong)param_1;
  uVar13 = 0;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar5 = uVar13;
  if (param_1 < *(int *)&(this->SoftBodies).LocalDamping.field_0x10) {
    uVar5 = uVar14;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FPerParticleDampVelocity::SetProperties
            ((FPerParticleDampVelocity *)
             (lVar16 * 0x40 + *(longlong *)&(this->SoftBodies).LocalDamping.field_0x8),param_2,
             param_4,param_5,param_6);
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,DampingCoefficientName);
  if ((piVar8 == (int *)0x0) || (iVar1 = *piVar8, iVar1 == -1)) {
    fVar18 = 0.01;
    fVar17 = 0.01;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar1,&param_2->HighValueArray);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar1,&param_2->LowValueArray);
  }
  pFVar9 = ::FName::ToString(&DampingCoefficientName,&local_a8);
  pFVar9 = ::FString::FString(local_98,pFVar9);
  local_f0[0] = param_2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_2,&local_c8,&DampingCoefficientName,(<lambda_1> *)local_f0,pFVar9,(int *)0x0);
  pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_3,&local_c8);
  if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_118 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    uVar5 = uVar13;
  }
  else {
    local_118 = *(undefined8 *)&pTVar10->field_0x10;
    uStack_110 = *(ulonglong *)&pTVar10->field_0x18;
    uVar5 = *(uint *)&pTVar10->field_0x18;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  uVar6 = GetSoftBodyParticleNum(this,param_1);
  uVar7 = uVar13;
  if (param_1 < *(int *)&(this->SoftBodies).UsePerParticleDamping.field_0x10) {
    uVar7 = uVar14;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(bool *)(lVar16 + *(longlong *)&(this->SoftBodies).UsePerParticleDamping.field_0x8) =
       uVar5 == uVar6;
  if (param_1 < *(int *)&(this->SoftBodies).UsePerParticleDamping.field_0x10) {
    uVar13 = uVar14;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar13 = 0;
  if (*(char *)(lVar16 + *(longlong *)&(this->SoftBodies).UsePerParticleDamping.field_0x8) == '\0')
  {
    if (param_1 < *(int *)&(this->SoftBodies).GlobalDampings.field_0x10) {
      uVar13 = uVar14;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)(*(longlong *)&(this->SoftBodies).GlobalDampings.field_0x8 + lVar16 * 4) = fVar18;
  }
  else {
    uVar7 = uVar13;
    if (param_1 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
      uVar7 = uVar14;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<float>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
               (lVar16 * 0x20 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8),
               &local_100,
               (TArray<float,TSizedDefaultAllocator<32>_> *)&(this->ParticleDampings).field_0x8);
    if ((local_100.ArrayNum != uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerParticleDamping.Num() == WeightMap.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolution.cpp"
                           ,0x125,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar3 = __real_38d1b717;
    if (uVar5 == local_100.ArrayNum) {
    }
    else {
      local_b8 = 0;
      uStack_b0 = 0;
      local_b8._0_4_ = 0;
      local_b8._4_4_ = 0;
      uStack_110._0_4_ = 0;
      local_118._0_4_ = (undefined4)local_b8;
      local_118._4_4_ = local_b8._4_4_;
      uStack_110._4_4_ = uStack_ac;
    }
    fVar17 = fVar17 - fVar18;
    uVar15 = uVar12;
    local_e0.DataPtr._0_4_ = (undefined4)local_118;
    local_e0.DataPtr._4_4_ = local_118._4_4_;
    local_e0.ArrayNum = (int)uStack_110;
    local_e0._12_4_ = uStack_110._4_4_;
    local_d0 = fVar18;
    local_cc = fVar17;
    if (0 < local_100.ArrayNum) {
      do {
        uVar5 = (uint)uVar12;
        fVar19 = fVar18;
        if ((0 < local_e0.ArrayNum) && (fVar3 < (float)((uint)fVar17 & uVar14))) {
          pfVar11 = TArrayView<float_const_,int>::operator[](&local_e0,uVar5);
          fVar19 = fVar17 * *pfVar11 + fVar18;
        }
        uVar7 = uVar13;
        if ((int)uVar5 < local_100.ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = (ulonglong)(uVar5 + 1);
        *(float *)(uVar15 + (longlong)local_100.DataPtr) = fVar19;
        uVar15 = uVar15 + 4;
      } while ((int)(uVar5 + 1) < local_100.ArrayNum);
    }
  }
  return;
}

// SetSolverProperties @ 143e4ea70

void __thiscall
Chaos::Softs::FEvolution::SetSolverProperties
          (FEvolution *this,FCollectionPropertyConstFacade *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar6;
  float fVar7;
  
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,EnableForceBasedSolverName);
  if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,*piVar5,&param_1->LowValueArray);
  }
  pTVar6 = &param_1->LowValueArray;
  this->bEnableForceBasedSolver = bVar1;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,MaxNumIterationsName);
  if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
    iVar2 = 10;
  }
  else {
    iVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  iVar4 = 1;
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  this->MaxNumIterations = iVar3;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,NumIterationsName);
  if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
    iVar2 = 1;
  }
  else {
    iVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  this->NumIterations = iVar2;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,DoQuasistaticsName);
  if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  this->bDoQuasistatics = bVar1;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,SolverFrequencyName);
  fVar7 = __real_42700000;
  if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
    fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  this->SolverFrequency = fVar7;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,NumNewtonIterationsName);
  if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
    iVar4 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  this->NumNewtonIterations = iVar4;
  (this->LinearSystemParameters).field_0x1 = 0 < this->NumIterations;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,FLinearSystemParameters::DoQuasistaticsName);
  if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  *(bool *)&this->LinearSystemParameters = bVar1;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,FLinearSystemParameters::MaxNumCGIterationsName);
  if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
    iVar2 = 0x32;
  }
  else {
    iVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  *(int *)&(this->LinearSystemParameters).field_0x4 = iVar2;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,FLinearSystemParameters::CGResidualToleranceName);
  fVar7 = __real_38d1b717;
  if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
    fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
  }
  *(float *)&(this->LinearSystemParameters).field_0x8 = fVar7;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,FLinearSystemParameters::CheckCGResidualName);
  if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,*piVar5,pTVar6);
    (this->LinearSystemParameters).field_0xc = bVar1;
    return;
  }
  (this->LinearSystemParameters).field_0xc = 0;
  return;
}

