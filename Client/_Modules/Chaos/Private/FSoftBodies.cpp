// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FSoftBodies @ 143dfc4e0

FSoftBodies * __thiscall Chaos::Softs::FEvolution::FSoftBodies::FSoftBodies(FSoftBodies *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->Status).field_0x8 = 0;
  *(undefined8 *)&(this->Status).field_0x10 = 0;
  *(undefined8 *)&(this->GroupId).field_0x8 = 0;
  *(undefined8 *)&(this->GroupId).field_0x10 = 0;
  *(undefined8 *)&(this->ParticleRanges).field_0x8 = 0;
  *(undefined8 *)&(this->ParticleRanges).field_0x10 = 0;
  *(undefined8 *)&(this->GlobalDampings).field_0x8 = 0;
  *(undefined ***)&this->GroupId = &___7__TArrayCollectionArray_I_Chaos__6B_;
  this->_padding_ = (longlong)&___7FSoftBodies_FEvolution_Softs_Chaos__6B_;
  *(undefined ***)&this->ParticleRanges =
       &___7__TArrayCollectionArray_VFSolverParticlesRange_Softs_Chaos___Chaos__6B_;
  *(undefined ***)&this->Status =
       &___7__TArrayCollectionArray_W4EStatus_FSoftBodies_FEvolution_Softs_Chaos___Chaos__6B_;
  *(undefined ***)&this->GlobalDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->PerIterationCollisionPBDConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MAEBV__TArray_VFSolverCollisionParticlesRange_Softs_Chaos__V__TSizedDefaultAllocator__0CA______Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->LocalDamping =
       &___7__TArrayCollectionArray_VFPerParticleDampVelocity_Softs_Chaos___Chaos__6B_;
  *(undefined ***)&this->UpdateLinearSystemRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MAEAVFEvolutionLinearSystem_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->UsePerParticleDamping = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->GlobalDampings).field_0x10 = 0;
  *(undefined ***)&this->LinearSystems =
       &___7__TArrayCollectionArray_VFEvolutionLinearSystem_Softs_Chaos___Chaos__6B_;
  *(undefined ***)&this->PreSubstepParallelInits =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->PostInitialGuessParallelInits =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->PreSubstepConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->PostSubstepConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined8 *)&(this->LocalDamping).field_0x8 = 0;
  *(undefined8 *)&(this->LocalDamping).field_0x10 = 0;
  *(undefined8 *)&(this->UsePerParticleDamping).field_0x8 = 0;
  *(undefined8 *)&(this->UsePerParticleDamping).field_0x10 = 0;
  *(undefined8 *)&(this->LinearSystems).field_0x8 = 0;
  *(undefined8 *)&(this->LinearSystems).field_0x10 = 0;
  *(undefined8 *)&(this->PreSubstepParallelInits).field_0x8 = 0;
  *(undefined8 *)&(this->PreSubstepParallelInits).field_0x10 = 0;
  *(undefined8 *)&(this->PBDExternalForceRules).field_0x8 = 0;
  *(undefined8 *)&(this->PBDExternalForceRules).field_0x10 = 0;
  *(undefined ***)&this->PBDExternalForceRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__M_Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined8 *)&(this->PostInitialGuessParallelInits).field_0x8 = 0;
  *(undefined8 *)&(this->PostInitialGuessParallelInits).field_0x10 = 0;
  *(undefined8 *)&(this->PreSubstepConstraintRules).field_0x8 = 0;
  *(undefined8 *)&(this->PreSubstepConstraintRules).field_0x10 = 0;
  *(undefined8 *)&(this->PerIterationPBDConstraintRules).field_0x8 = 0;
  *(undefined8 *)&(this->PerIterationPBDConstraintRules).field_0x10 = 0;
  *(undefined ***)&this->PerIterationPBDConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__M_Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined8 *)&(this->PerIterationCollisionPBDConstraintRules).field_0x8 = 0;
  *(undefined8 *)&(this->PerIterationCollisionPBDConstraintRules).field_0x10 = 0;
  *(undefined8 *)&(this->PerIterationPostCollisionsPBDConstraintRules).field_0x8 = 0;
  *(undefined8 *)&(this->PerIterationPostCollisionsPBDConstraintRules).field_0x10 = 0;
  *(undefined ***)&this->PerIterationPostCollisionsPBDConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__M_Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined8 *)&(this->UpdateLinearSystemRules).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateLinearSystemRules).field_0x10 = 0;
  *(undefined8 *)&(this->UpdateLinearSystemCollisionsRules).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateLinearSystemCollisionsRules).field_0x10 = 0;
  *(undefined ***)&this->UpdateLinearSystemCollisionsRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MAEBV__TArray_VFSolverCollisionParticlesRange_Softs_Chaos__V__TSizedDefaultAllocator__0CA_____AEAVFEvolutionLinearSystem_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined8 *)&(this->PostSubstepConstraintRules).field_0x8 = 0;
  *(undefined8 *)&(this->PostSubstepConstraintRules).field_0x10 = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->Status);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->GroupId);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->ParticleRanges);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->GlobalDampings);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->LocalDamping);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->UsePerParticleDamping);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->LinearSystems);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->PreSubstepParallelInits);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->PBDExternalForceRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->PostInitialGuessParallelInits);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->PreSubstepConstraintRules)
  ;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->PerIterationPBDConstraintRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->PerIterationCollisionPBDConstraintRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->PerIterationPostCollisionsPBDConstraintRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->UpdateLinearSystemRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->UpdateLinearSystemCollisionsRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->PostSubstepConstraintRules
            );
  return this;
}

// ~FSoftBodies @ 143dfe400

void __thiscall Chaos::Softs::FEvolution::FSoftBodies::~FSoftBodies(FSoftBodies *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->PostSubstepConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
               **)&(this->PostSubstepConstraintRules).field_0x8,
             *(int *)&(this->PostSubstepConstraintRules).field_0x10);
  pvVar1 = *(void **)&(this->PostSubstepConstraintRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->UpdateLinearSystemCollisionsRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MAEBV__TArray_VFSolverCollisionParticlesRange_Softs_Chaos__V__TSizedDefaultAllocator__0CA_____AEAVFEvolutionLinearSystem_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
               **)&(this->UpdateLinearSystemCollisionsRules).field_0x8,
             *(int *)&(this->UpdateLinearSystemCollisionsRules).field_0x10);
  pvVar1 = *(void **)&(this->UpdateLinearSystemCollisionsRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->UpdateLinearSystemRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MAEAVFEvolutionLinearSystem_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
               **)&(this->UpdateLinearSystemRules).field_0x8,
             *(int *)&(this->UpdateLinearSystemRules).field_0x10);
  pvVar1 = *(void **)&(this->UpdateLinearSystemRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PerIterationPostCollisionsPBDConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__M_Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
               **)&(this->PerIterationPostCollisionsPBDConstraintRules).field_0x8,
             *(int *)&(this->PerIterationPostCollisionsPBDConstraintRules).field_0x10);
  pvVar1 = *(void **)&(this->PerIterationPostCollisionsPBDConstraintRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PerIterationCollisionPBDConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MAEBV__TArray_VFSolverCollisionParticlesRange_Softs_Chaos__V__TSizedDefaultAllocator__0CA______Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>
               **)&(this->PerIterationCollisionPBDConstraintRules).field_0x8,
             *(int *)&(this->PerIterationCollisionPBDConstraintRules).field_0x10);
  pvVar1 = *(void **)&(this->PerIterationCollisionPBDConstraintRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PerIterationPBDConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__M_Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
               **)&(this->PerIterationPBDConstraintRules).field_0x8,
             *(int *)&(this->PerIterationPBDConstraintRules).field_0x10);
  pvVar1 = *(void **)&(this->PerIterationPBDConstraintRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PreSubstepConstraintRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
               **)&(this->PreSubstepConstraintRules).field_0x8,
             *(int *)&(this->PreSubstepConstraintRules).field_0x10);
  pvVar1 = *(void **)&(this->PreSubstepConstraintRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PostInitialGuessParallelInits =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
               **)&(this->PostInitialGuessParallelInits).field_0x8,
             *(int *)&(this->PostInitialGuessParallelInits).field_0x10);
  pvVar1 = *(void **)&(this->PostInitialGuessParallelInits).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PBDExternalForceRules =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__M_Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
               **)&(this->PBDExternalForceRules).field_0x8,
             *(int *)&(this->PBDExternalForceRules).field_0x10);
  pvVar1 = *(void **)&(this->PBDExternalForceRules).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PreSubstepParallelInits =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
               **)&(this->PreSubstepParallelInits).field_0x8,
             *(int *)&(this->PreSubstepParallelInits).field_0x10);
  pvVar1 = *(void **)&(this->PreSubstepParallelInits).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->LinearSystems =
       &___7__TArrayCollectionArray_VFEvolutionLinearSystem_Softs_Chaos___Chaos__6B_;
  DestructItems<Chaos::Softs::FEvolutionLinearSystem,int>
            (*(FEvolutionLinearSystem **)&(this->LinearSystems).field_0x8,
             *(int *)&(this->LinearSystems).field_0x10);
  pvVar1 = *(void **)&(this->LinearSystems).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->UsePerParticleDamping = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->UsePerParticleDamping).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->LocalDamping =
       &___7__TArrayCollectionArray_VFPerParticleDampVelocity_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->LocalDamping).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GlobalDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->GlobalDampings).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->ParticleRanges =
       &___7__TArrayCollectionArray_VFSolverParticlesRange_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->ParticleRanges).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GroupId = &___7__TArrayCollectionArray_I_Chaos__6B_;
  pvVar1 = *(void **)&(this->GroupId).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Status =
       &___7__TArrayCollectionArray_W4EStatus_FSoftBodies_FEvolution_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->Status).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

