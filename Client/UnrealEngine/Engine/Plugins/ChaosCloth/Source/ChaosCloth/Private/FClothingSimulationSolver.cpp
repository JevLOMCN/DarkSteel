// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 131

// FClothingSimulationSolver @ 14db8fcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FClothingSimulationSolver * __thiscall
Chaos::FClothingSimulationSolver::FClothingSimulationSolver
          (FClothingSimulationSolver *this,FClothingSimulationConfig *param_1,bool param_2)

{
  atomic<int> *paVar1;
  TSharedPtr<FManagedArrayCollection,1> *pTVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEvolution *pFVar6;
  code *pcVar7;
  FFunctionStorage *pFVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TSharedRef<FManagedArrayCollection,1> *pTVar15;
  FClothingSimulationConfig *this_00;
  FEvolution *pFVar16;
  FCollectionPropertyConstFacade *pFVar17;
  FEvolution *pFVar18;
  FPBDEvolution *pFVar19;
  FClothingSimulationSolver *pFVar20;
  FFunctionStorage *pFVar21;
  undefined ***pppuVar22;
  uint uVar23;
  FClothingSimulationConfig *pFVar24;
  undefined1 auStackY_3f8 [32];
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> local_390;
  FManagedArrayCollection *local_380;
  FSharedReferencer<1> local_378 [2];
  undefined1 local_368 [112];
  TArrayCollectionArrayBase local_2f8;
  void *local_2f0;
  undefined8 local_2e8;
  TArrayCollectionArrayBase local_2e0;
  void *local_2d8;
  undefined8 local_2d0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_2c8;
  undefined1 local_2b8 [160];
  TArrayCollectionArrayBase local_218;
  void *local_210;
  undefined8 local_208;
  undefined4 local_1f8;
  TSharedPtr<FManagedArrayCollection_const_,1> local_1f0;
  code *local_1d8;
  undefined **local_1c8;
  FClothingSimulationSolver *local_1c0;
  undefined ***local_1b0;
  code *local_1a8;
  undefined **local_198;
  FClothingSimulationSolver *local_190;
  undefined ***local_180;
  code *local_178;
  undefined **local_168;
  FClothingSimulationSolver *local_160;
  undefined ***local_150;
  code *local_148;
  undefined **local_138;
  FClothingSimulationSolver *local_130;
  undefined ***local_120;
  TSharedRef<FManagedArrayCollection,1> local_118;
  longlong local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  FFunctionStorage local_e8;
  code *local_c8;
  undefined8 uStack_c0;
  FFunctionStorage local_b8;
  code *local_98;
  undefined8 uStack_90;
  FFunctionStorage local_88;
  code *local_68;
  undefined8 uStack_60;
  FFunctionStorage local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  *(undefined8 *)&this->field_0x20 = 2;
  *(undefined8 *)&this->field_0x40 = 2;
  pTVar2 = &this->PropertyCollection;
  *(undefined8 *)&this->field_0x60 = 2;
  *(undefined8 *)&this->field_0x80 = 2;
  *(undefined ***)this = &___7FClothingSimulationSolver_Chaos__6B_;
  bVar11 = false;
  bVar13 = false;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  (this->Evolution).Ptr = (FEvolution *)0x0;
  (this->PBDEvolution).Ptr = (FPBDEvolution *)0x0;
  (this->Cloths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cloths).ArrayNum = 0;
  (this->Cloths).ArrayMax = 0;
  this->SolverLOD = 0;
  this->Config = (FClothingSimulationConfig *)0x0;
  *(undefined8 *)&(this->PreSimulationTransforms).field_0x8 = 0;
  *(undefined8 *)&(this->PreSimulationTransforms).field_0x10 = 0;
  *(undefined ***)&this->PreSimulationTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->FictitiousAngularVelocities).field_0x8 = 0;
  *(undefined8 *)&(this->FictitiousAngularVelocities).field_0x10 = 0;
  *(undefined ***)&this->FictitiousAngularVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->ReferenceSpaceLocations =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->AppliedReferenceSpaceVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->AppliedReferenceSpaceAngularVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->Normals = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->OldAnimationPositions =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->AnimationPositions =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->InterpolatedAnimationPositions =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->OldAnimationNormals =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->AnimationNormals =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->InterpolatedAnimationNormals =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->AnimationVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->CollisionBoneIndices = &___7__TArrayCollectionArray_H_Chaos__6B_;
  local_1f8 = 0;
  pTVar2->Object = (FManagedArrayCollection *)0x0;
  (this->PropertyCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->ReferenceSpaceLocations).field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceSpaceLocations).field_0x10 = 0;
  *(undefined8 *)&(this->AppliedReferenceSpaceVelocities).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedReferenceSpaceVelocities).field_0x10 = 0;
  *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocities).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocities).field_0x10 = 0;
  *(undefined8 *)&(this->Normals).field_0x8 = 0;
  *(undefined8 *)&(this->Normals).field_0x10 = 0;
  *(undefined8 *)&(this->OldAnimationPositions).field_0x8 = 0;
  *(undefined8 *)&(this->OldAnimationPositions).field_0x10 = 0;
  *(undefined8 *)&(this->AnimationPositions).field_0x8 = 0;
  *(undefined8 *)&(this->AnimationPositions).field_0x10 = 0;
  *(undefined8 *)&(this->InterpolatedAnimationPositions).field_0x8 = 0;
  *(undefined8 *)&(this->InterpolatedAnimationPositions).field_0x10 = 0;
  *(undefined8 *)&(this->OldAnimationNormals).field_0x8 = 0;
  *(undefined8 *)&(this->OldAnimationNormals).field_0x10 = 0;
  *(undefined8 *)&(this->AnimationNormals).field_0x8 = 0;
  *(undefined8 *)&(this->AnimationNormals).field_0x10 = 0;
  *(undefined8 *)&(this->InterpolatedAnimationNormals).field_0x8 = 0;
  *(undefined8 *)&(this->InterpolatedAnimationNormals).field_0x10 = 0;
  *(undefined8 *)&(this->AnimationVelocities).field_0x8 = 0;
  *(undefined8 *)&(this->AnimationVelocities).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionBoneIndices).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionBoneIndices).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionBaseTransforms).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionBaseTransforms).field_0x10 = 0;
  *(undefined ***)&this->CollisionBaseTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->OldCollisionTransforms).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionTransforms).field_0x10 = 0;
  *(undefined8 *)&(this->LastSubframeCollisionTransformsCCD).field_0x10 = 0;
  *(undefined8 *)&(this->Collided).field_0x10 = 0;
  *(undefined8 *)&(this->ComplexColliders).field_0x8 = 0;
  *(undefined ***)&this->Collided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->OldCollisionTransforms).field_0x8 = 0;
  *(undefined ***)&this->OldCollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->CollisionTransforms).field_0x8 = 0;
  *(undefined ***)&this->CollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->LastSubframeCollisionTransformsCCD).field_0x8 = 0;
  *(undefined ***)&this->LastSubframeCollisionTransformsCCD =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->Collided).field_0x8 = 0;
  *(undefined8 *)&this->ComplexColliders = 0;
  *(undefined8 *)&(this->ComplexColliders).field_0x20 = 0;
  *(undefined4 *)&(this->ComplexColliders).field_0x28 = 0;
  *(undefined4 *)&(this->ComplexColliders).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComplexColliders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComplexColliders).field_0x34 = 0;
  *(undefined8 *)&(this->ComplexColliders).field_0x40 = 0;
  *(undefined4 *)&(this->ComplexColliders).field_0x48 = 0;
  *(undefined8 *)&(this->ClothsConstraints).field_0x8 = 0;
  *(undefined8 *)&this->ClothsConstraints = 0;
  *(undefined8 *)&(this->ClothsConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->ClothsConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->ClothsConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothsConstraints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClothsConstraints).field_0x34 = 0;
  *(undefined8 *)&(this->ClothsConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->ClothsConstraints).field_0x48 = 0;
  this->OldLocalSpaceScale = 1.0;
  this->LocalSpaceScale = 1.0;
  *(undefined8 *)&this->OldLocalSpaceLocation = 0;
  *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x8 = 0;
  *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x10 = 0;
  *(undefined8 *)&this->LocalSpaceLocation = 0;
  *(undefined8 *)&(this->LocalSpaceLocation).field_0x8 = 0;
  *(undefined8 *)&(this->LocalSpaceLocation).field_0x10 = 0;
  dVar12 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)&this->LocalSpaceRotation = UE::Math::TQuat<double>::Identity.X;
  *(double *)&(this->LocalSpaceRotation).field_0x8 = dVar12;
  dVar12 = UE::Math::TQuat<double>::Identity.W;
  *(double *)&(this->LocalSpaceRotation).field_0x10 = UE::Math::TQuat<double>::Identity.Z;
  *(double *)&(this->LocalSpaceRotation).field_0x18 = dVar12;
  (this->CollisionContacts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionContacts).ArrayNum = 0;
  (this->CollisionContacts).ArrayMax = 0;
  (this->CollisionNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionNormals).ArrayNum = 0;
  (this->CollisionNormals).ArrayMax = 0;
  (this->CollisionPhis).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionPhis).ArrayNum = 0;
  (this->CollisionPhis).ArrayMax = 0;
  this->VelocityScale = 1.0;
  this->Time = 0.0;
  this->DeltaTime = 0.033333335;
  this->CollisionParticlesOffset = 0;
  this->CollisionParticlesSize = 0;
  *(undefined8 *)&this->Gravity = ClothingSimulationSolverDefault::Gravity._0_8_;
  *(undefined4 *)&(this->Gravity).field_0x8 = ClothingSimulationSolverDefault::Gravity._8_4_;
  *(undefined8 *)&this->WindVelocity = ClothingSimulationSolverDefault::WindVelocity._0_8_;
  *(undefined4 *)&(this->WindVelocity).field_0x8 =
       ClothingSimulationSolverDefault::WindVelocity._8_4_;
  (this->PerSolverField).ExecutionDatas.SamplePositions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.SamplePositions.ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.SamplePositions.ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.SampleIndices.ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.SampleIndices.ArrayMax = 0;
  this->LegacyWindAdaption = 0.0;
  this->bIsClothGravityOverrideEnabled = false;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[3].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.VectorResults[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.VectorResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IndexResults[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].ArrayMax = 0;
  (this->PerSolverField).TransientCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSolverField).TransientCommands.ArrayNum = 0;
  (this->PerSolverField).TransientCommands.ArrayMax = 0;
  (this->PerSolverField).PersistentCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSolverField).PersistentCommands.ArrayNum = 0;
  (this->PerSolverField).PersistentCommands.ArrayMax = 0;
  this->bEnableSolver = true;
  if (pTVar2->Object != (FManagedArrayCollection *)0x0) {
    pFVar24 = this->Config;
    if (pFVar24 != (FClothingSimulationConfig *)0x0) {
      DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
                ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                  *)(pFVar24->Properties).AllocatorInstance.Data,(pFVar24->Properties).ArrayNum);
      pFVar4 = (pFVar24->Properties).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
                ((TSharedPtr<FManagedArrayCollection,1> *)
                 (pFVar24->PropertyCollections).AllocatorInstance.Data,
                 (pFVar24->PropertyCollections).ArrayNum);
      pFVar4 = (pFVar24->PropertyCollections).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar24,0x28);
    }
    if (pTVar2 != (TSharedPtr<FManagedArrayCollection,1> *)local_108) {
      pTVar2->Object = (FManagedArrayCollection *)0x0;
      pTVar5 = (this->PropertyCollection).SharedReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        (this->PropertyCollection).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar5->SharedReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)pTVar5->_padding_)();
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (param_1 == (FClothingSimulationConfig *)0x0) {
    pTVar15 = MakeShared<FManagedArrayCollection,1>(&local_118);
    local_378[0].ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
    local_380 = pTVar15->Object;
    if (local_378[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_378[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_378[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar24 = (FClothingSimulationConfig *)0x0;
    if (pTVar2 != (TSharedPtr<FManagedArrayCollection,1> *)&local_380) {
      pTVar2->Object = local_380;
      local_380 = (FManagedArrayCollection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PropertyCollection).SharedReferenceCount,local_378);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_378[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    this_00 = ::operator_new(0x28);
    if (this_00 != (FClothingSimulationConfig *)0x0) {
      local_1f0.Object = pTVar2->Object;
      local_1f0.SharedReferenceCount.ReferenceController =
           (this->PropertyCollection).SharedReferenceCount.ReferenceController;
      if (local_1f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_390.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_390.AllocatorInstance,1,&local_390.ArrayMax);
      ConstructItems<TSharedPtr<FManagedArrayCollection_const_,1>,TSharedPtr<FManagedArrayCollection_const_,1>,int>
                (local_390.AllocatorInstance.Data,&local_1f0,1);
      this_00->bIsLegacySingleLOD = false;
      (this_00->PropertyCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->PropertyCollections).ArrayNum = 0;
      (this_00->PropertyCollections).ArrayMax = 0;
      (this_00->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Properties).ArrayNum = 0;
      (this_00->Properties).ArrayMax = 0;
      FClothingSimulationConfig::Initialize(this_00,&local_390);
      bVar11 = true;
      bVar13 = true;
      pFVar24 = this_00;
    }
    this->Config = pFVar24;
    if ((bVar13) &&
       (DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>
                  ((TSharedPtr<FManagedArrayCollection_const_,1> *)local_390.AllocatorInstance.Data,
                   local_390.ArrayNum),
       (TSharedPtr<FManagedArrayCollection_const_,1> *)local_390.AllocatorInstance.Data !=
       (TSharedPtr<FManagedArrayCollection_const_,1> *)0x0)) {
      FMemory::Free(local_390.AllocatorInstance.Data);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f0.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    this->Config = param_1;
  }
  pFVar18 = (FEvolution *)0x0;
  if (param_2) {
    local_2b8._8_8_ = (FScriptContainerElement *)0x0;
    local_2b8._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
    local_2b8._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    local_2b8._16_8_ = 0;
    local_2b8._24_4_ = 0;
    local_2b8._40_8_ = 0;
    local_2b8._48_8_ = 0;
    local_2b8[0x38] = 0;
    TArrayCollection::AddArray
              ((TArrayCollection *)local_2b8,(TArrayCollectionArrayBase *)(local_2b8 + 0x20));
    local_2b8._60_4_ = 0;
    local_2b8._0_8_ = &___7__TDynamicParticles_M_02_Chaos__6B_;
    local_2b8._72_8_ = 0;
    local_2b8._112_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
    local_2b8._136_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
    local_2b8._80_8_ = 0;
    local_2b8._64_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    local_2b8._96_8_ = 0;
    local_2b8._104_8_ = 0;
    local_2b8._88_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    local_2b8._120_8_ = 0;
    local_2b8._128_8_ = 0;
    local_2b8._144_8_ = 0;
    local_2b8._152_8_ = 0;
    TArrayCollection::AddArray
              ((TArrayCollection *)local_2b8,(TArrayCollectionArrayBase *)(local_2b8 + 0x40));
    TArrayCollection::AddArray
              ((TArrayCollection *)local_2b8,(TArrayCollectionArrayBase *)(local_2b8 + 0x58));
    TArrayCollection::AddArray
              ((TArrayCollection *)local_2b8,(TArrayCollectionArrayBase *)(local_2b8 + 0x70));
    TArrayCollection::AddArray
              ((TArrayCollection *)local_2b8,(TArrayCollectionArrayBase *)(local_2b8 + 0x88));
    local_210 = (void *)0x0;
    local_2b8._0_8_ = &___7FSolverParticles_Softs_Chaos__6B_;
    local_208 = 0;
    local_218 = (TArrayCollectionArrayBase)
                &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
    TArrayCollection::AddArray((TArrayCollection *)local_2b8,&local_218);
    local_368._8_8_ = (FScriptContainerElement *)0x0;
    local_368._16_8_ = 0;
    local_368._24_4_ = 0;
    local_368._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
    local_368._40_8_ = (void *)0x0;
    local_368._48_8_ = 0;
    local_368._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    local_368[0x38] = 0;
    TArrayCollection::AddArray
              ((TArrayCollection *)local_368,(TArrayCollectionArrayBase *)(local_368 + 0x20));
    local_368._60_4_ = 0;
    local_368._0_8_ = &___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
    local_368._72_8_ = (void *)0x0;
    local_368._64_8_ = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
    local_368._80_8_ = 0;
    local_368._88_8_ =
         &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
    local_368._96_8_ = (TRefCountPtr<Chaos::FImplicitObject> *)0x0;
    local_368._104_8_ = 0;
    TArrayCollection::AddArray
              ((TArrayCollection *)local_368,(TArrayCollectionArrayBase *)(local_368 + 0x40));
    TArrayCollection::AddArray
              ((TArrayCollection *)local_368,(TArrayCollectionArrayBase *)(local_368 + 0x58));
    local_2f0 = (void *)0x0;
    local_368._0_8_ = &___7FSolverCollisionParticles_Softs_Chaos__6B_;
    local_2e8 = 0;
    local_2f8 = (TArrayCollectionArrayBase)
                &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    local_2d8 = (void *)0x0;
    local_2d0 = 0;
    local_2e0 = (TArrayCollectionArrayBase)
                &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    TArrayCollection::AddArray((TArrayCollection *)local_368,&local_2f8);
    TArrayCollection::AddArray((TArrayCollection *)local_368,&local_2e0);
    pFVar19 = ::operator_new(0x450);
    pFVar16 = pFVar18;
    if (pFVar19 != (FPBDEvolution *)0x0) {
      local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.ArrayNum = 0;
      local_2c8.ArrayMax = 0;
      pFVar16 = (FEvolution *)
                Softs::FPBDEvolution::FPBDEvolution
                          (pFVar19,(FSolverParticles *)local_2b8,
                           (FSolverCollisionParticles *)local_368,&local_2c8,1,__real_3f99999a,
                           __real_40000000,__real_3e4ccccd,__real_3c23d70a,0.0,false,false);
    }
    pFVar6 = (FEvolution *)(this->PBDEvolution).Ptr;
    if ((pFVar6 != pFVar16) &&
       ((this->PBDEvolution).Ptr = (FPBDEvolution *)pFVar16, pFVar6 != (FEvolution *)0x0)) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
    if ((pFVar19 != (FPBDEvolution *)0x0) &&
       (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_2c8.AllocatorInstance.Data);
    }
    TArrayCollection::AddArray
              ((TArrayCollection *)(this->PBDEvolution).Ptr,
               (TArrayCollectionArrayBase *)&this->PreSimulationTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)(this->PBDEvolution).Ptr,
               (TArrayCollectionArrayBase *)&this->FictitiousAngularVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)(this->PBDEvolution).Ptr,
               (TArrayCollectionArrayBase *)&this->ReferenceSpaceLocations);
    TArrayCollection::AddArray
              ((TArrayCollection *)(this->PBDEvolution).Ptr,
               (TArrayCollectionArrayBase *)&this->AppliedReferenceSpaceVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)(this->PBDEvolution).Ptr,
               (TArrayCollectionArrayBase *)&this->AppliedReferenceSpaceAngularVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->Normals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->OldAnimationPositions);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->AnimationPositions);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->InterpolatedAnimationPositions);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->OldAnimationNormals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->AnimationNormals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->InterpolatedAnimationNormals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MParticles,
               (TArrayCollectionArrayBase *)&this->AnimationVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MCollisionParticles,
               (TArrayCollectionArrayBase *)&this->CollisionBoneIndices);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MCollisionParticles,
               (TArrayCollectionArrayBase *)&this->CollisionBaseTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MCollisionParticles,
               (TArrayCollectionArrayBase *)&this->OldCollisionTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MCollisionParticles,
               (TArrayCollectionArrayBase *)&this->CollisionTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MCollisionParticles,
               (TArrayCollectionArrayBase *)&this->Collided);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->PBDEvolution).Ptr)->MCollisionParticles,
               (TArrayCollectionArrayBase *)&this->LastSubframeCollisionTransformsCCD);
    pFVar19 = (this->PBDEvolution).Ptr;
    local_168 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::`7'::<lambda_3>,0,0>
                 ::_vftable_;
    local_150 = (undefined ***)0x0;
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float,float,int>
                ::Call;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float,float,int>
               ::Call;
    local_88.HeapAllocation = (void *)0x0;
    local_160 = this;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_3>,0,0>
    ::CloneToEmptyStorage(&local_168,&local_88);
    lVar9 = *(longlong *)&pFVar19->MKinematicUpdate;
    uVar10 = *(undefined8 *)&(pFVar19->MKinematicUpdate).field_0x8;
    pFVar8 = *(FFunctionStorage **)&(pFVar19->MKinematicUpdate).field_0x28;
    *(code **)&pFVar19->MKinematicUpdate = local_98;
    *(undefined8 *)&(pFVar19->MKinematicUpdate).field_0x8 = uStack_90;
    (pFVar19->MKinematicUpdate).field_0x10 = local_88.InlineAllocation[0];
    (pFVar19->MKinematicUpdate).field_0x11 = local_88.InlineAllocation[1];
    (pFVar19->MKinematicUpdate).field_0x12 = local_88.InlineAllocation[2];
    (pFVar19->MKinematicUpdate).field_0x13 = local_88.InlineAllocation[3];
    (pFVar19->MKinematicUpdate).field_0x14 = local_88.InlineAllocation[4];
    (pFVar19->MKinematicUpdate).field_0x15 = local_88.InlineAllocation[5];
    (pFVar19->MKinematicUpdate).field_0x16 = local_88.InlineAllocation[6];
    (pFVar19->MKinematicUpdate).field_0x17 = local_88.InlineAllocation[7];
    (pFVar19->MKinematicUpdate).field_0x18 = local_88.InlineAllocation[8];
    (pFVar19->MKinematicUpdate).field_0x19 = local_88.InlineAllocation[9];
    (pFVar19->MKinematicUpdate).field_0x1a = local_88.InlineAllocation[10];
    (pFVar19->MKinematicUpdate).field_0x1b = local_88.InlineAllocation[0xb];
    (pFVar19->MKinematicUpdate).field_0x1c = local_88.InlineAllocation[0xc];
    (pFVar19->MKinematicUpdate).field_0x1d = local_88.InlineAllocation[0xd];
    (pFVar19->MKinematicUpdate).field_0x1e = local_88.InlineAllocation[0xe];
    (pFVar19->MKinematicUpdate).field_0x1f = local_88.InlineAllocation[0xf];
    (pFVar19->MKinematicUpdate).field_0x20 = local_88.InlineAllocation[0x10];
    (pFVar19->MKinematicUpdate).field_0x21 = local_88.InlineAllocation[0x11];
    (pFVar19->MKinematicUpdate).field_0x22 = local_88.InlineAllocation[0x12];
    (pFVar19->MKinematicUpdate).field_0x23 = local_88.InlineAllocation[0x13];
    (pFVar19->MKinematicUpdate).field_0x24 = local_88.InlineAllocation[0x14];
    (pFVar19->MKinematicUpdate).field_0x25 = local_88.InlineAllocation[0x15];
    (pFVar19->MKinematicUpdate).field_0x26 = local_88.InlineAllocation[0x16];
    (pFVar19->MKinematicUpdate).field_0x27 = local_88.InlineAllocation[0x17];
    *(undefined4 *)&(pFVar19->MKinematicUpdate).field_0x28 = local_88.HeapAllocation._0_4_;
    *(undefined4 *)&(pFVar19->MKinematicUpdate).field_0x2c = local_88.HeapAllocation._4_4_;
    local_98 = (code *)lVar9;
    uStack_90 = uVar10;
    local_88.InlineAllocation[0] = (pFVar19->MKinematicUpdate).field_0x10;
    local_88.InlineAllocation[1] = (pFVar19->MKinematicUpdate).field_0x11;
    local_88.InlineAllocation[2] = (pFVar19->MKinematicUpdate).field_0x12;
    local_88.InlineAllocation[3] = (pFVar19->MKinematicUpdate).field_0x13;
    local_88.InlineAllocation[4] = (pFVar19->MKinematicUpdate).field_0x14;
    local_88.InlineAllocation[5] = (pFVar19->MKinematicUpdate).field_0x15;
    local_88.InlineAllocation[6] = (pFVar19->MKinematicUpdate).field_0x16;
    local_88.InlineAllocation[7] = (pFVar19->MKinematicUpdate).field_0x17;
    local_88.InlineAllocation[8] = (pFVar19->MKinematicUpdate).field_0x18;
    local_88.InlineAllocation[9] = (pFVar19->MKinematicUpdate).field_0x19;
    local_88.InlineAllocation[10] = (pFVar19->MKinematicUpdate).field_0x1a;
    local_88.InlineAllocation[0xb] = (pFVar19->MKinematicUpdate).field_0x1b;
    local_88.InlineAllocation[0xc] = (pFVar19->MKinematicUpdate).field_0x1c;
    local_88.InlineAllocation[0xd] = (pFVar19->MKinematicUpdate).field_0x1d;
    local_88.InlineAllocation[0xe] = (pFVar19->MKinematicUpdate).field_0x1e;
    local_88.InlineAllocation[0xf] = (pFVar19->MKinematicUpdate).field_0x1f;
    local_88.InlineAllocation[0x10] = (pFVar19->MKinematicUpdate).field_0x20;
    local_88.InlineAllocation[0x11] = (pFVar19->MKinematicUpdate).field_0x21;
    local_88.InlineAllocation[0x12] = (pFVar19->MKinematicUpdate).field_0x22;
    local_88.InlineAllocation[0x13] = (pFVar19->MKinematicUpdate).field_0x23;
    local_88.InlineAllocation[0x14] = (pFVar19->MKinematicUpdate).field_0x24;
    local_88.InlineAllocation[0x15] = (pFVar19->MKinematicUpdate).field_0x25;
    local_88.InlineAllocation[0x16] = (pFVar19->MKinematicUpdate).field_0x26;
    local_88.InlineAllocation[0x17] = (pFVar19->MKinematicUpdate).field_0x27;
    local_88.HeapAllocation = pFVar8;
    if (lVar9 != 0) {
      pFVar21 = &local_88;
      if (pFVar8 != (FFunctionStorage *)0x0) {
        pFVar21 = pFVar8;
      }
      (**(code **)(*(longlong *)pFVar21->InlineAllocation + 0x10))();
    }
    if (local_178 != (code *)0x0) {
      pppuVar22 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar22 = local_150;
      }
      (*(code *)(*pppuVar22)[2])();
    }
    pFVar19 = (this->PBDEvolution).Ptr;
    local_138 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::`7'::<lambda_4>,0,0>
                 ::_vftable_;
    local_120 = (undefined ***)0x0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_4>,void,Chaos::Softs::FSolverCollisionParticles_&,float,float,int>
                ::Call;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_4>,void,Chaos::Softs::FSolverCollisionParticles_&,float,float,int>
               ::Call;
    local_58.HeapAllocation = (void *)0x0;
    local_130 = this;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_4>,0,0>
    ::CloneToEmptyStorage(&local_138,&local_58);
    lVar9 = *(longlong *)&pFVar19->MCollisionKinematicUpdate;
    uVar10 = *(undefined8 *)&(pFVar19->MCollisionKinematicUpdate).field_0x8;
    pFVar8 = *(FFunctionStorage **)&(pFVar19->MCollisionKinematicUpdate).field_0x28;
    *(code **)&pFVar19->MCollisionKinematicUpdate = local_68;
    *(undefined8 *)&(pFVar19->MCollisionKinematicUpdate).field_0x8 = uStack_60;
    (pFVar19->MCollisionKinematicUpdate).field_0x10 = local_58.InlineAllocation[0];
    (pFVar19->MCollisionKinematicUpdate).field_0x11 = local_58.InlineAllocation[1];
    (pFVar19->MCollisionKinematicUpdate).field_0x12 = local_58.InlineAllocation[2];
    (pFVar19->MCollisionKinematicUpdate).field_0x13 = local_58.InlineAllocation[3];
    (pFVar19->MCollisionKinematicUpdate).field_0x14 = local_58.InlineAllocation[4];
    (pFVar19->MCollisionKinematicUpdate).field_0x15 = local_58.InlineAllocation[5];
    (pFVar19->MCollisionKinematicUpdate).field_0x16 = local_58.InlineAllocation[6];
    (pFVar19->MCollisionKinematicUpdate).field_0x17 = local_58.InlineAllocation[7];
    (pFVar19->MCollisionKinematicUpdate).field_0x18 = local_58.InlineAllocation[8];
    (pFVar19->MCollisionKinematicUpdate).field_0x19 = local_58.InlineAllocation[9];
    (pFVar19->MCollisionKinematicUpdate).field_0x1a = local_58.InlineAllocation[10];
    (pFVar19->MCollisionKinematicUpdate).field_0x1b = local_58.InlineAllocation[0xb];
    (pFVar19->MCollisionKinematicUpdate).field_0x1c = local_58.InlineAllocation[0xc];
    (pFVar19->MCollisionKinematicUpdate).field_0x1d = local_58.InlineAllocation[0xd];
    (pFVar19->MCollisionKinematicUpdate).field_0x1e = local_58.InlineAllocation[0xe];
    (pFVar19->MCollisionKinematicUpdate).field_0x1f = local_58.InlineAllocation[0xf];
    (pFVar19->MCollisionKinematicUpdate).field_0x20 = local_58.InlineAllocation[0x10];
    (pFVar19->MCollisionKinematicUpdate).field_0x21 = local_58.InlineAllocation[0x11];
    (pFVar19->MCollisionKinematicUpdate).field_0x22 = local_58.InlineAllocation[0x12];
    (pFVar19->MCollisionKinematicUpdate).field_0x23 = local_58.InlineAllocation[0x13];
    (pFVar19->MCollisionKinematicUpdate).field_0x24 = local_58.InlineAllocation[0x14];
    (pFVar19->MCollisionKinematicUpdate).field_0x25 = local_58.InlineAllocation[0x15];
    (pFVar19->MCollisionKinematicUpdate).field_0x26 = local_58.InlineAllocation[0x16];
    (pFVar19->MCollisionKinematicUpdate).field_0x27 = local_58.InlineAllocation[0x17];
    *(undefined4 *)&(pFVar19->MCollisionKinematicUpdate).field_0x28 = local_58.HeapAllocation._0_4_;
    *(undefined4 *)&(pFVar19->MCollisionKinematicUpdate).field_0x2c = local_58.HeapAllocation._4_4_;
    local_68 = (code *)lVar9;
    uStack_60 = uVar10;
    local_58.InlineAllocation[0] = (pFVar19->MCollisionKinematicUpdate).field_0x10;
    local_58.InlineAllocation[1] = (pFVar19->MCollisionKinematicUpdate).field_0x11;
    local_58.InlineAllocation[2] = (pFVar19->MCollisionKinematicUpdate).field_0x12;
    local_58.InlineAllocation[3] = (pFVar19->MCollisionKinematicUpdate).field_0x13;
    local_58.InlineAllocation[4] = (pFVar19->MCollisionKinematicUpdate).field_0x14;
    local_58.InlineAllocation[5] = (pFVar19->MCollisionKinematicUpdate).field_0x15;
    local_58.InlineAllocation[6] = (pFVar19->MCollisionKinematicUpdate).field_0x16;
    local_58.InlineAllocation[7] = (pFVar19->MCollisionKinematicUpdate).field_0x17;
    local_58.InlineAllocation[8] = (pFVar19->MCollisionKinematicUpdate).field_0x18;
    local_58.InlineAllocation[9] = (pFVar19->MCollisionKinematicUpdate).field_0x19;
    local_58.InlineAllocation[10] = (pFVar19->MCollisionKinematicUpdate).field_0x1a;
    local_58.InlineAllocation[0xb] = (pFVar19->MCollisionKinematicUpdate).field_0x1b;
    local_58.InlineAllocation[0xc] = (pFVar19->MCollisionKinematicUpdate).field_0x1c;
    local_58.InlineAllocation[0xd] = (pFVar19->MCollisionKinematicUpdate).field_0x1d;
    local_58.InlineAllocation[0xe] = (pFVar19->MCollisionKinematicUpdate).field_0x1e;
    local_58.InlineAllocation[0xf] = (pFVar19->MCollisionKinematicUpdate).field_0x1f;
    local_58.InlineAllocation[0x10] = (pFVar19->MCollisionKinematicUpdate).field_0x20;
    local_58.InlineAllocation[0x11] = (pFVar19->MCollisionKinematicUpdate).field_0x21;
    local_58.InlineAllocation[0x12] = (pFVar19->MCollisionKinematicUpdate).field_0x22;
    local_58.InlineAllocation[0x13] = (pFVar19->MCollisionKinematicUpdate).field_0x23;
    local_58.InlineAllocation[0x14] = (pFVar19->MCollisionKinematicUpdate).field_0x24;
    local_58.InlineAllocation[0x15] = (pFVar19->MCollisionKinematicUpdate).field_0x25;
    local_58.InlineAllocation[0x16] = (pFVar19->MCollisionKinematicUpdate).field_0x26;
    local_58.InlineAllocation[0x17] = (pFVar19->MCollisionKinematicUpdate).field_0x27;
    local_58.HeapAllocation = pFVar8;
    if (lVar9 != 0) {
      pFVar21 = &local_58;
      if (pFVar8 != (FFunctionStorage *)0x0) {
        pFVar21 = pFVar8;
      }
      (**(code **)(*(longlong *)pFVar21->InlineAllocation + 0x10))();
    }
    if (local_148 != (code *)0x0) {
      pppuVar22 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar22 = local_120;
      }
      (*(code *)(*pppuVar22)[2])();
    }
    local_368._0_8_ = &___7FSolverCollisionParticles_Softs_Chaos__6B_;
    local_2e0 = (TArrayCollectionArrayBase)
                &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    if (local_2d8 != (void *)0x0) {
      FMemory::Free(local_2d8);
    }
    local_2f8 = (TArrayCollectionArrayBase)
                &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    if (local_2f0 != (void *)0x0) {
      FMemory::Free(local_2f0);
    }
    local_368._0_8_ = &___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
    local_368._88_8_ =
         &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_368._96_8_,local_368._104_4_);
    if ((TRefCountPtr<Chaos::FImplicitObject> *)local_368._96_8_ !=
        (TRefCountPtr<Chaos::FImplicitObject> *)0x0) {
      FMemory::Free((void *)local_368._96_8_);
    }
    local_368._64_8_ = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
    if ((void *)local_368._72_8_ != (void *)0x0) {
      FMemory::Free((void *)local_368._72_8_);
    }
    local_368._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
    local_368._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    if ((void *)local_368._40_8_ != (void *)0x0) {
      FMemory::Free((void *)local_368._40_8_);
    }
    local_368._0_8_ = &___7TArrayCollection_Chaos__6B_;
    pFVar16 = pFVar18;
    if (0 < (int)local_368._16_4_) {
      do {
        uVar23 = (uint)pFVar18;
        uVar14 = 0;
        if ((int)uVar23 < (int)local_368._16_4_) {
          uVar14 = ~uVar23 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar20 = (FClothingSimulationSolver *)(*pcVar7)();
          return pFVar20;
        }
        pFVar18 = (FEvolution *)(ulonglong)(uVar23 + 1);
        *(undefined8 *)(local_368._8_8_ + (longlong)&pFVar16->Time) = 0;
        pFVar16 = (FEvolution *)&pFVar16->MaxNumIterations;
      } while ((int)(uVar23 + 1) < (int)local_368._16_4_);
    }
    if ((FScriptContainerElement *)local_368._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_368._8_8_);
    }
    local_218 = (TArrayCollectionArrayBase)
                &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
    if (local_210 != (void *)0x0) {
      FMemory::Free(local_210);
    }
    TDynamicParticles<float,3>::~TDynamicParticles<float,3>((TDynamicParticles<float,3> *)local_2b8)
    ;
  }
  else {
    pFVar16 = ::operator_new(0x540);
    if (pFVar16 != (FEvolution *)0x0) {
      pFVar17 = (FCollectionPropertyConstFacade *)
                FClothingSimulationConfig::GetProperties(this->Config,this->SolverLOD);
      pFVar18 = Softs::FEvolution::FEvolution(pFVar16,pFVar17);
    }
    pFVar16 = (this->Evolution).Ptr;
    if ((pFVar16 != pFVar18) && ((this->Evolution).Ptr = pFVar18, pFVar16 != (FEvolution *)0x0)) {
      Softs::FEvolution::_scalar_deleting_destructor_(pFVar16,1);
    }
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Groups,
               (TArrayCollectionArrayBase *)&this->PreSimulationTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Groups,
               (TArrayCollectionArrayBase *)&this->FictitiousAngularVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Groups,
               (TArrayCollectionArrayBase *)&this->ReferenceSpaceLocations);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Groups,
               (TArrayCollectionArrayBase *)&this->AppliedReferenceSpaceVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Groups,
               (TArrayCollectionArrayBase *)&this->AppliedReferenceSpaceAngularVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->Normals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->OldAnimationPositions);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->AnimationPositions);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->InterpolatedAnimationPositions);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->OldAnimationNormals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->AnimationNormals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->InterpolatedAnimationNormals);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->Particles,
               (TArrayCollectionArrayBase *)&this->AnimationVelocities);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->CollisionParticles,
               (TArrayCollectionArrayBase *)&this->CollisionBoneIndices);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->CollisionParticles,
               (TArrayCollectionArrayBase *)&this->CollisionBaseTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->CollisionParticles,
               (TArrayCollectionArrayBase *)&this->OldCollisionTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->CollisionParticles,
               (TArrayCollectionArrayBase *)&this->CollisionTransforms);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->CollisionParticles,
               (TArrayCollectionArrayBase *)&this->Collided);
    TArrayCollection::AddArray
              ((TArrayCollection *)&((this->Evolution).Ptr)->CollisionParticles,
               (TArrayCollectionArrayBase *)&this->LastSubframeCollisionTransformsCCD);
    local_1b0 = (undefined ***)0x0;
    local_1c8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::`5'::<lambda_1>,0,0>
                 ::_vftable_;
    pFVar18 = (this->Evolution).Ptr;
    local_1d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float,float>
                ::Call;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float,float>
               ::Call;
    local_e8.HeapAllocation = (void *)0x0;
    local_1c0 = this;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_1>,0,0>
    ::CloneToEmptyStorage(&local_1c8,&local_e8);
    lVar9 = *(longlong *)&pFVar18->KinematicUpdate;
    uVar10 = *(undefined8 *)&(pFVar18->KinematicUpdate).field_0x8;
    pFVar8 = *(FFunctionStorage **)&(pFVar18->KinematicUpdate).field_0x28;
    *(code **)&pFVar18->KinematicUpdate = local_f8;
    *(undefined8 *)&(pFVar18->KinematicUpdate).field_0x8 = uStack_f0;
    (pFVar18->KinematicUpdate).field_0x10 = local_e8.InlineAllocation[0];
    (pFVar18->KinematicUpdate).field_0x11 = local_e8.InlineAllocation[1];
    (pFVar18->KinematicUpdate).field_0x12 = local_e8.InlineAllocation[2];
    (pFVar18->KinematicUpdate).field_0x13 = local_e8.InlineAllocation[3];
    (pFVar18->KinematicUpdate).field_0x14 = local_e8.InlineAllocation[4];
    (pFVar18->KinematicUpdate).field_0x15 = local_e8.InlineAllocation[5];
    (pFVar18->KinematicUpdate).field_0x16 = local_e8.InlineAllocation[6];
    (pFVar18->KinematicUpdate).field_0x17 = local_e8.InlineAllocation[7];
    (pFVar18->KinematicUpdate).field_0x18 = local_e8.InlineAllocation[8];
    (pFVar18->KinematicUpdate).field_0x19 = local_e8.InlineAllocation[9];
    (pFVar18->KinematicUpdate).field_0x1a = local_e8.InlineAllocation[10];
    (pFVar18->KinematicUpdate).field_0x1b = local_e8.InlineAllocation[0xb];
    (pFVar18->KinematicUpdate).field_0x1c = local_e8.InlineAllocation[0xc];
    (pFVar18->KinematicUpdate).field_0x1d = local_e8.InlineAllocation[0xd];
    (pFVar18->KinematicUpdate).field_0x1e = local_e8.InlineAllocation[0xe];
    (pFVar18->KinematicUpdate).field_0x1f = local_e8.InlineAllocation[0xf];
    (pFVar18->KinematicUpdate).field_0x20 = local_e8.InlineAllocation[0x10];
    (pFVar18->KinematicUpdate).field_0x21 = local_e8.InlineAllocation[0x11];
    (pFVar18->KinematicUpdate).field_0x22 = local_e8.InlineAllocation[0x12];
    (pFVar18->KinematicUpdate).field_0x23 = local_e8.InlineAllocation[0x13];
    (pFVar18->KinematicUpdate).field_0x24 = local_e8.InlineAllocation[0x14];
    (pFVar18->KinematicUpdate).field_0x25 = local_e8.InlineAllocation[0x15];
    (pFVar18->KinematicUpdate).field_0x26 = local_e8.InlineAllocation[0x16];
    (pFVar18->KinematicUpdate).field_0x27 = local_e8.InlineAllocation[0x17];
    *(undefined4 *)&(pFVar18->KinematicUpdate).field_0x28 = local_e8.HeapAllocation._0_4_;
    *(undefined4 *)&(pFVar18->KinematicUpdate).field_0x2c = local_e8.HeapAllocation._4_4_;
    local_f8 = (code *)lVar9;
    uStack_f0 = uVar10;
    local_e8.InlineAllocation[0] = (pFVar18->KinematicUpdate).field_0x10;
    local_e8.InlineAllocation[1] = (pFVar18->KinematicUpdate).field_0x11;
    local_e8.InlineAllocation[2] = (pFVar18->KinematicUpdate).field_0x12;
    local_e8.InlineAllocation[3] = (pFVar18->KinematicUpdate).field_0x13;
    local_e8.InlineAllocation[4] = (pFVar18->KinematicUpdate).field_0x14;
    local_e8.InlineAllocation[5] = (pFVar18->KinematicUpdate).field_0x15;
    local_e8.InlineAllocation[6] = (pFVar18->KinematicUpdate).field_0x16;
    local_e8.InlineAllocation[7] = (pFVar18->KinematicUpdate).field_0x17;
    local_e8.InlineAllocation[8] = (pFVar18->KinematicUpdate).field_0x18;
    local_e8.InlineAllocation[9] = (pFVar18->KinematicUpdate).field_0x19;
    local_e8.InlineAllocation[10] = (pFVar18->KinematicUpdate).field_0x1a;
    local_e8.InlineAllocation[0xb] = (pFVar18->KinematicUpdate).field_0x1b;
    local_e8.InlineAllocation[0xc] = (pFVar18->KinematicUpdate).field_0x1c;
    local_e8.InlineAllocation[0xd] = (pFVar18->KinematicUpdate).field_0x1d;
    local_e8.InlineAllocation[0xe] = (pFVar18->KinematicUpdate).field_0x1e;
    local_e8.InlineAllocation[0xf] = (pFVar18->KinematicUpdate).field_0x1f;
    local_e8.InlineAllocation[0x10] = (pFVar18->KinematicUpdate).field_0x20;
    local_e8.InlineAllocation[0x11] = (pFVar18->KinematicUpdate).field_0x21;
    local_e8.InlineAllocation[0x12] = (pFVar18->KinematicUpdate).field_0x22;
    local_e8.InlineAllocation[0x13] = (pFVar18->KinematicUpdate).field_0x23;
    local_e8.InlineAllocation[0x14] = (pFVar18->KinematicUpdate).field_0x24;
    local_e8.InlineAllocation[0x15] = (pFVar18->KinematicUpdate).field_0x25;
    local_e8.InlineAllocation[0x16] = (pFVar18->KinematicUpdate).field_0x26;
    local_e8.InlineAllocation[0x17] = (pFVar18->KinematicUpdate).field_0x27;
    local_e8.HeapAllocation = pFVar8;
    if (lVar9 != 0) {
      pFVar21 = &local_e8;
      if (pFVar8 != (FFunctionStorage *)0x0) {
        pFVar21 = pFVar8;
      }
      (**(code **)(*(longlong *)pFVar21->InlineAllocation + 0x10))();
    }
    if (local_1d8 != (code *)0x0) {
      pppuVar22 = &local_1c8;
      if (local_1b0 != (undefined ***)0x0) {
        pppuVar22 = local_1b0;
      }
      (*(code *)(*pppuVar22)[2])();
    }
    pFVar18 = (this->Evolution).Ptr;
    local_198 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::`5'::<lambda_2>,0,0>
                 ::_vftable_;
    local_180 = (undefined ***)0x0;
    local_1a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticlesRange_&,float,float>
                ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticlesRange_&,float,float>
               ::Call;
    local_b8.HeapAllocation = (void *)0x0;
    local_190 = this;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_2>,0,0>
    ::CloneToEmptyStorage(&local_198,&local_b8);
    lVar9 = *(longlong *)&pFVar18->CollisionKinematicUpdate;
    uVar10 = *(undefined8 *)&(pFVar18->CollisionKinematicUpdate).field_0x8;
    pFVar8 = *(FFunctionStorage **)&(pFVar18->CollisionKinematicUpdate).field_0x28;
    *(code **)&pFVar18->CollisionKinematicUpdate = local_c8;
    *(undefined8 *)&(pFVar18->CollisionKinematicUpdate).field_0x8 = uStack_c0;
    (pFVar18->CollisionKinematicUpdate).field_0x10 = local_b8.InlineAllocation[0];
    (pFVar18->CollisionKinematicUpdate).field_0x11 = local_b8.InlineAllocation[1];
    (pFVar18->CollisionKinematicUpdate).field_0x12 = local_b8.InlineAllocation[2];
    (pFVar18->CollisionKinematicUpdate).field_0x13 = local_b8.InlineAllocation[3];
    (pFVar18->CollisionKinematicUpdate).field_0x14 = local_b8.InlineAllocation[4];
    (pFVar18->CollisionKinematicUpdate).field_0x15 = local_b8.InlineAllocation[5];
    (pFVar18->CollisionKinematicUpdate).field_0x16 = local_b8.InlineAllocation[6];
    (pFVar18->CollisionKinematicUpdate).field_0x17 = local_b8.InlineAllocation[7];
    (pFVar18->CollisionKinematicUpdate).field_0x18 = local_b8.InlineAllocation[8];
    (pFVar18->CollisionKinematicUpdate).field_0x19 = local_b8.InlineAllocation[9];
    (pFVar18->CollisionKinematicUpdate).field_0x1a = local_b8.InlineAllocation[10];
    (pFVar18->CollisionKinematicUpdate).field_0x1b = local_b8.InlineAllocation[0xb];
    (pFVar18->CollisionKinematicUpdate).field_0x1c = local_b8.InlineAllocation[0xc];
    (pFVar18->CollisionKinematicUpdate).field_0x1d = local_b8.InlineAllocation[0xd];
    (pFVar18->CollisionKinematicUpdate).field_0x1e = local_b8.InlineAllocation[0xe];
    (pFVar18->CollisionKinematicUpdate).field_0x1f = local_b8.InlineAllocation[0xf];
    (pFVar18->CollisionKinematicUpdate).field_0x20 = local_b8.InlineAllocation[0x10];
    (pFVar18->CollisionKinematicUpdate).field_0x21 = local_b8.InlineAllocation[0x11];
    (pFVar18->CollisionKinematicUpdate).field_0x22 = local_b8.InlineAllocation[0x12];
    (pFVar18->CollisionKinematicUpdate).field_0x23 = local_b8.InlineAllocation[0x13];
    (pFVar18->CollisionKinematicUpdate).field_0x24 = local_b8.InlineAllocation[0x14];
    (pFVar18->CollisionKinematicUpdate).field_0x25 = local_b8.InlineAllocation[0x15];
    (pFVar18->CollisionKinematicUpdate).field_0x26 = local_b8.InlineAllocation[0x16];
    (pFVar18->CollisionKinematicUpdate).field_0x27 = local_b8.InlineAllocation[0x17];
    *(undefined4 *)&(pFVar18->CollisionKinematicUpdate).field_0x28 = local_b8.HeapAllocation._0_4_;
    *(undefined4 *)&(pFVar18->CollisionKinematicUpdate).field_0x2c = local_b8.HeapAllocation._4_4_;
    local_c8 = (code *)lVar9;
    uStack_c0 = uVar10;
    local_b8.InlineAllocation[0] = (pFVar18->CollisionKinematicUpdate).field_0x10;
    local_b8.InlineAllocation[1] = (pFVar18->CollisionKinematicUpdate).field_0x11;
    local_b8.InlineAllocation[2] = (pFVar18->CollisionKinematicUpdate).field_0x12;
    local_b8.InlineAllocation[3] = (pFVar18->CollisionKinematicUpdate).field_0x13;
    local_b8.InlineAllocation[4] = (pFVar18->CollisionKinematicUpdate).field_0x14;
    local_b8.InlineAllocation[5] = (pFVar18->CollisionKinematicUpdate).field_0x15;
    local_b8.InlineAllocation[6] = (pFVar18->CollisionKinematicUpdate).field_0x16;
    local_b8.InlineAllocation[7] = (pFVar18->CollisionKinematicUpdate).field_0x17;
    local_b8.InlineAllocation[8] = (pFVar18->CollisionKinematicUpdate).field_0x18;
    local_b8.InlineAllocation[9] = (pFVar18->CollisionKinematicUpdate).field_0x19;
    local_b8.InlineAllocation[10] = (pFVar18->CollisionKinematicUpdate).field_0x1a;
    local_b8.InlineAllocation[0xb] = (pFVar18->CollisionKinematicUpdate).field_0x1b;
    local_b8.InlineAllocation[0xc] = (pFVar18->CollisionKinematicUpdate).field_0x1c;
    local_b8.InlineAllocation[0xd] = (pFVar18->CollisionKinematicUpdate).field_0x1d;
    local_b8.InlineAllocation[0xe] = (pFVar18->CollisionKinematicUpdate).field_0x1e;
    local_b8.InlineAllocation[0xf] = (pFVar18->CollisionKinematicUpdate).field_0x1f;
    local_b8.InlineAllocation[0x10] = (pFVar18->CollisionKinematicUpdate).field_0x20;
    local_b8.InlineAllocation[0x11] = (pFVar18->CollisionKinematicUpdate).field_0x21;
    local_b8.InlineAllocation[0x12] = (pFVar18->CollisionKinematicUpdate).field_0x22;
    local_b8.InlineAllocation[0x13] = (pFVar18->CollisionKinematicUpdate).field_0x23;
    local_b8.InlineAllocation[0x14] = (pFVar18->CollisionKinematicUpdate).field_0x24;
    local_b8.InlineAllocation[0x15] = (pFVar18->CollisionKinematicUpdate).field_0x25;
    local_b8.InlineAllocation[0x16] = (pFVar18->CollisionKinematicUpdate).field_0x26;
    local_b8.InlineAllocation[0x17] = (pFVar18->CollisionKinematicUpdate).field_0x27;
    local_b8.HeapAllocation = pFVar8;
    if (lVar9 != 0) {
      pFVar21 = &local_b8;
      if (pFVar8 != (FFunctionStorage *)0x0) {
        pFVar21 = pFVar8;
      }
      (**(code **)(*(longlong *)pFVar21->InlineAllocation + 0x10))();
    }
    if (local_1a8 != (code *)0x0) {
      pppuVar22 = &local_198;
      if (local_180 != (undefined ***)0x0) {
        pppuVar22 = local_180;
      }
      (*(code *)(*pppuVar22)[2])();
    }
  }
  return this;
}

// ~FClothingSimulationSolver @ 14db9f770

void __thiscall
Chaos::FClothingSimulationSolver::~FClothingSimulationSolver(FClothingSimulationSolver *this)

{
  FManagedArrayCollection *pFVar1;
  FClothingSimulationConfig *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FPBDEvolution *pFVar5;
  FEvolution *this_00;
  
  pFVar1 = (this->PropertyCollection).Object;
  *(undefined ***)this = &___7FClothingSimulationSolver_Chaos__6B_;
  if ((pFVar1 != (FManagedArrayCollection *)0x0) &&
     (pFVar2 = this->Config, pFVar2 != (FClothingSimulationConfig *)0x0)) {
    DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
              ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                *)(pFVar2->Properties).AllocatorInstance.Data,(pFVar2->Properties).ArrayNum);
    pFVar3 = (pFVar2->Properties).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
              ((TSharedPtr<FManagedArrayCollection,1> *)
               (pFVar2->PropertyCollections).AllocatorInstance.Data,
               (pFVar2->PropertyCollections).ArrayNum);
    pFVar3 = (pFVar2->PropertyCollections).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x28);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->PerSolverField).PersistentCommands.AllocatorInstance.Data
             ,(this->PerSolverField).PersistentCommands.ArrayNum);
  pFVar3 = (this->PerSolverField).PersistentCommands.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->PerSolverField).TransientCommands.AllocatorInstance.Data,
             (this->PerSolverField).TransientCommands.ArrayNum);
  pFVar3 = (this->PerSolverField).TransientCommands.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FFieldExecutionDatas::~FFieldExecutionDatas(&(this->PerSolverField).ExecutionDatas);
  pFVar3 = (this->CollisionPhis).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CollisionNormals).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CollisionContacts).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->ClothsConstraints).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClothsConstraints).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothsConstraints);
  *(undefined4 *)&(this->ComplexColliders).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ComplexColliders).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComplexColliders);
  *(undefined ***)&this->Collided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar4 = *(void **)&(this->Collided).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->LastSubframeCollisionTransformsCCD =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->LastSubframeCollisionTransformsCCD).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->CollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->CollisionTransforms).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->OldCollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->OldCollisionTransforms).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->CollisionBaseTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->CollisionBaseTransforms).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->CollisionBoneIndices = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar4 = *(void **)&(this->CollisionBoneIndices).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->AnimationVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->AnimationVelocities).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->InterpolatedAnimationNormals =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->InterpolatedAnimationNormals).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->AnimationNormals =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->AnimationNormals).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->OldAnimationNormals =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->OldAnimationNormals).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->InterpolatedAnimationPositions =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->InterpolatedAnimationPositions).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->AnimationPositions =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->AnimationPositions).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->OldAnimationPositions =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->OldAnimationPositions).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->Normals = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->Normals).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->AppliedReferenceSpaceAngularVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->AppliedReferenceSpaceAngularVelocities).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->AppliedReferenceSpaceVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->AppliedReferenceSpaceVelocities).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->ReferenceSpaceLocations =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->ReferenceSpaceLocations).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->FictitiousAngularVelocities =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->FictitiousAngularVelocities).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined ***)&this->PreSimulationTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar4 = *(void **)&(this->PreSimulationTransforms).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PropertyCollection).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Cloths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar5 = (this->PBDEvolution).Ptr;
  if (pFVar5 != (FPBDEvolution *)0x0) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  this_00 = (this->Evolution).Ptr;
  if (this_00 != (FEvolution *)0x0) {
    Softs::FEvolution::_scalar_deleting_destructor_(this_00,1);
  }
  FPhysicsSolverEvents::~FPhysicsSolverEvents((FPhysicsSolverEvents *)this);
  return;
}

// operator() @ 14dba5d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FClothingSimulationSolver::UpdateFromCache'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  FClothingSimulationCloth *this_00;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  longlong lVar24;
  
  lVar24 = *(longlong *)this;
  uVar21 = 0;
  if (param_1 < *(int *)(lVar24 + 0xa0)) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  this_00 = *(FClothingSimulationCloth **)(*(longlong *)(lVar24 + 0x98) + (longlong)param_1 * 8);
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar24 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar24 = lVar1 + 0x68;
    }
    uVar21 = *(uint *)(lVar24 + (ulonglong)(*(int *)(lVar1 + 0x78) - 1U & this_00->GroupId) * 4);
    if (uVar21 != 0xffffffff) {
      do {
        puVar23 = (uint *)((longlong)(int)uVar21 * 0x80 + *(longlong *)(lVar1 + 0x30));
        if (*puVar23 == this_00->GroupId) {
          puVar22 = puVar23 + 4;
          if (puVar23 == (uint *)0x0) {
            puVar22 = (uint *)0x0;
          }
          if (puVar22 != (uint *)0x0) {
            uVar21 = puVar22[1];
            uVar3 = puVar22[2];
            uVar4 = puVar22[3];
            uVar9 = puVar22[8];
            uVar10 = puVar22[9];
            uVar11 = puVar22[10];
            uVar12 = puVar22[0xb];
            uVar5 = puVar22[4];
            uVar6 = puVar22[5];
            uVar7 = puVar22[6];
            uVar8 = puVar22[7];
            uVar13 = puVar22[0xc];
            uVar14 = puVar22[0xd];
            uVar15 = puVar22[0xe];
            uVar16 = puVar22[0xf];
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x0 = puVar22[0];
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x4 = uVar21;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x8 = uVar3;
            uVar17 = __real_3ff0000000000000;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0xc = uVar4;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x10 = uVar5;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x14 = uVar6;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x18 = uVar7;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x1c = uVar8;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x20 = uVar9;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x24 = uVar10;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x28 = uVar11;
            uVar19 = _UNK_150689688;
            uVar18 = ___xmm_3ff00000000000003ff0000000000000;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x2c = uVar12;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x30 = uVar13;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x34 = uVar14;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x38 = uVar15;
            *(uint *)&(this_00->ReferenceSpaceTransform).field_0x3c = uVar16;
            *(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x40 = uVar18;
            *(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x48 = uVar19;
            *(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x50 = uVar17;
            *(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x58 = 0;
          }
          break;
        }
        uVar21 = puVar23[0x1c];
      } while (uVar21 != 0xffffffff);
    }
  }
  Chaos::FClothingSimulationCloth::PostUpdate(this_00,*(FClothingSimulationSolver **)this);
  return;
}

// operator() @ 14dba6600

void __thiscall
`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_1>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,float param_3)

{
  TVector<float,3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TVector<float,3> *pTVar6;
  int iVar7;
  FPAndInvM *pFVar8;
  longlong lVar9;
  longlong lVar10;
  TArrayView<Chaos::TVector<float,3>,int> local_48;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_38;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_28;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  pTVar4 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM(param_1,&local_38);
  pFVar8 = pTVar4->DataPtr;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
  GetArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_48,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x48));
  pTVar5 = Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
           GetConstArrayView<Chaos::TVector<float,3>_>
                     ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_28,
                      (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                      (*(longlong *)this + 400));
  pTVar1 = pTVar5->DataPtr;
  pTVar5 = Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
           GetConstArrayView<Chaos::TVector<float,3>_>
                     ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_18,
                      (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                      (*(longlong *)this + 0x1f0));
  iVar7 = 0;
  pTVar6 = pTVar5->DataPtr;
  if (0 < *(int *)&param_1->field_0x14) {
    lVar9 = (longlong)pTVar1 - (longlong)pTVar6;
    lVar10 = (longlong)local_48.DataPtr - (longlong)pTVar6;
    do {
      if (pFVar8->InvM == 0.0) {
        *(undefined8 *)&pFVar8->P = *(undefined8 *)(lVar9 + (longlong)pTVar6);
        *(undefined4 *)&(pFVar8->P).field_0x8 = *(undefined4 *)(lVar9 + 8 + (longlong)pTVar6);
        *(undefined8 *)(lVar10 + (longlong)pTVar6) = *(undefined8 *)pTVar6;
        *(undefined4 *)(lVar10 + 8 + (longlong)pTVar6) = *(undefined4 *)&pTVar6->field_0x8;
      }
      iVar7 = iVar7 + 1;
      pFVar8 = pFVar8 + 1;
      pTVar6 = pTVar6 + 1;
    } while (iVar7 < *(int *)&param_1->field_0x14);
  }
  return;
}

// operator() @ 14dba6710

void __thiscall
`Chaos::FClothingSimulationSolver::AddExternalForces'::__l5::<lambda_1>::operator()
          (void *this,FSolverParticles *param_1,double param_2,int param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  float *pfVar15;
  TVector<float,3> *pTVar16;
  uint uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  dVar19 = __real_3ff0000000000000;
  lVar5 = *(longlong *)this;
  uVar23 = SUB84(__real_3ff0000000000000,0);
  uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  iVar4 = *(int *)(lVar5 + 0x458);
  dVar10 = 0.0;
  dVar11 = 0.0;
  lVar18 = (longlong)param_3;
  dVar12 = 0.0;
  uVar17 = (uint)~param_3 >> 0x1f;
  if (iVar4 != 0) {
    uVar14 = 0;
    if (param_3 < iVar4) {
      uVar14 = uVar17;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(lVar5 + 0x450);
    pfVar15 = Chaos::TDynamicParticles<float,3>::M((TDynamicParticles<float,3> *)param_1,param_3);
    dVar19 = dVar19 / param_2;
    dVar11 = (double)*pfVar15;
    dVar10 = dVar11 * *(double *)(lVar5 + lVar18 * 0x18) * dVar19;
    dVar12 = dVar11 * *(double *)(lVar5 + 8 + lVar18 * 0x18) * dVar19;
    dVar11 = dVar11 * *(double *)(lVar5 + 0x10 + lVar18 * 0x18) * dVar19;
  }
  lVar5 = *(longlong *)this;
  iVar4 = *(int *)(lVar5 + 0x448);
  if (iVar4 != 0) {
    uVar14 = 0;
    if (param_3 < iVar4) {
      uVar14 = uVar17;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(lVar5 + 0x440);
    dVar10 = dVar10 + *(double *)(lVar5 + lVar18 * 0x18);
    dVar12 = dVar12 + *(double *)(lVar5 + 8 + lVar18 * 0x18);
    dVar11 = dVar11 + *(double *)(lVar5 + 0x10 + lVar18 * 0x18);
  }
  if (*(char *)((longlong)this + 8) != '\0') {
    pTVar16 = Chaos::TParticles<float,3>::X((TParticles<float,3> *)param_1,param_3);
    dVar7 = (double)(*(float *)pTVar16 - (float)*(double *)((longlong)this + 0x40));
    dVar21 = (double)(*(float *)&pTVar16->field_0x4 - (float)*(double *)((longlong)this + 0x48));
    dVar20 = (double)(*(float *)&pTVar16->field_0x8 - (float)*(double *)((longlong)this + 0x50));
    pfVar15 = Chaos::TDynamicParticles<float,3>::M((TDynamicParticles<float,3> *)param_1,param_3);
    dVar19 = *(double *)((longlong)this + 0x38);
    dVar2 = *(double *)((longlong)this + 0x30);
    dVar3 = *(double *)((longlong)this + 0x28);
    dVar9 = (double)*pfVar15;
    dVar8 = dVar2 * dVar20 - dVar19 * dVar21;
    uVar23 = SUB84(__real_3ff0000000000000,0);
    uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar22 = dVar19 * dVar7 - dVar3 * dVar20;
    dVar20 = dVar3 * dVar21 - dVar2 * dVar7;
    dVar10 = dVar10 - (dVar20 * dVar2 - dVar22 * dVar19) * dVar9;
    dVar12 = dVar12 - (dVar8 * dVar19 - dVar20 * dVar3) * dVar9;
    dVar11 = dVar11 - (dVar22 * dVar3 - dVar8 * dVar2) * dVar9;
  }
  if (*(char *)((longlong)this + 9) != '\0') {
    pTVar16 = Chaos::TDynamicParticles<float,3>::V((TDynamicParticles<float,3> *)param_1,param_3);
    dVar19 = *(double *)((longlong)this + 0x20) - (double)*(float *)&pTVar16->field_0x8;
    dVar2 = *(double *)((longlong)this + 0x18) - (double)*(float *)&pTVar16->field_0x4;
    dVar3 = *(double *)((longlong)this + 0x10) - (double)*(float *)pTVar16;
    dVar20 = dVar3 * dVar3 + dVar2 * dVar2 + dVar19 * dVar19;
    if (__real_3e45798ee0000000 < dVar20) {
      lVar5 = *(longlong *)this;
      uVar14 = 0;
      if (param_3 < *(int *)(lVar5 + 0x150)) {
        uVar14 = uVar17;
      }
      dVar20 = (double)CONCAT44(uVar24,uVar23) / SQRT(dVar20);
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0x148);
      dVar20 = (double)*(float *)(lVar5 + 4 + lVar18 * 0xc) * dVar20 * dVar2 +
               (double)*(float *)(lVar5 + lVar18 * 0xc) * dVar3 * dVar20 +
               (double)*(float *)(lVar5 + 8 + lVar18 * 0xc) * dVar20 * dVar19;
      dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
               (double)*(float *)(*(longlong *)this + 0x3f8);
      if (__real_3ff0000000000000 <= dVar20) {
        dVar20 = __real_3ff0000000000000;
      }
      pfVar15 = Chaos::TDynamicParticles<float,3>::M((TDynamicParticles<float,3> *)param_1,param_3);
      dVar21 = (double)*pfVar15;
      dVar10 = dVar10 + dVar20 * dVar3 * dVar21;
      dVar12 = dVar12 + dVar20 * dVar2 * dVar21;
      dVar11 = dVar11 + dVar20 * dVar19 * dVar21;
    }
  }
  pfVar15 = Chaos::TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,param_3);
  fVar1 = *pfVar15;
  pTVar16 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)param_1,param_3);
  *(float *)pTVar16 = (float)dVar10 * fVar1 + *(float *)pTVar16;
  *(float *)&pTVar16->field_0x4 = (float)dVar12 * fVar1 + *(float *)&pTVar16->field_0x4;
  *(float *)&pTVar16->field_0x8 = (float)dVar11 * fVar1 + *(float *)&pTVar16->field_0x8;
  return;
}

// operator() @ 14dba6c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FClothingSimulationSolver::PreSubstep'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSubstepKinematicInterpolation> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  byte bVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  FNameEntryId FVar24;
  int iVar25;
  FName FVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  undefined1 *puVar31;
  longlong *plVar32;
  uint *puVar33;
  int iVar34;
  longlong *plVar35;
  undefined1 *puVar36;
  longlong lVar37;
  undefined1 local_res20 [8];
  undefined1 local_2a8 [8];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2a0;
  undefined8 uStack_298;
  TBitArray<FDefaultBitArrayAllocator> *local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  int iStack_278;
  undefined4 uStack_274;
  FColor_u_0 local_270;
  int local_26c;
  uint local_268;
  int local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  uint local_250;
  uint uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  FName local_240;
  uint local_238;
  uint uStack_234;
  undefined8 local_230;
  FName local_228;
  int local_218;
  int local_214;
  int local_210;
  longlong local_208;
  longlong local_200;
  LARGE_INTEGER local_1f8;
  FStatMessage local_1f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  longlong local_180;
  int local_178;
  longlong local_170;
  int local_168;
  longlong local_160;
  int local_158;
  longlong local_150;
  int local_148;
  longlong local_140;
  int local_138;
  longlong local_130;
  int local_128;
  code *local_120;
  longlong **local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  FName local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  undefined8 uStack_c8;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_84;
  undefined4 local_64;
  
  plVar35 = *(longlong **)((longlong)this + 8);
  uVar15 = 0;
  if (param_1 < (int)plVar35[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar12 = false;
  local_268 = *(uint *)(*plVar35 + (longlong)param_1 * 4);
  local_d0 = Chaos::Softs::FEvolution::GetGroupActiveSoftBodies
                       (*(FEvolution **)(*(longlong *)this + 0x88),local_268);
  iVar25 = *(int *)&(local_d0->Elements).field_0x28;
  iVar29 = 0;
  local_230 = 1;
  local_280._0_4_ = 0;
  puVar36 = &(local_d0->Elements).field_0x10;
  uVar15 = 1;
  uStack_288._4_4_ = 0;
  if (iVar25 != 0) {
    puVar33 = *(uint **)&(local_d0->Elements).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar36;
    }
    uVar15 = *puVar33;
    while (uVar15 == 0) {
      lVar20 = (longlong)iVar29;
      local_280._0_4_ = (uint)local_280 + 0x20;
      iVar29 = iVar29 + 1;
      uVar15 = 1;
      uStack_288._4_4_ = iVar25;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29) goto LAB_14dba6d2d;
      uVar15 = puVar33[lVar20 + 1];
    }
    uVar15 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar15 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_218 = (int)lVar20;
    uStack_288._4_4_ = local_218 + -1 + (uint)local_280;
    if (iVar25 < (int)uStack_288._4_4_) {
      uStack_288._4_4_ = iVar25;
    }
  }
LAB_14dba6d2d:
  uVar30 = *(uint *)&(local_d0->Elements).field_0x28;
  bVar19 = (byte)uVar30 & 0x1f;
  iStack_278 = *(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34;
  uVar28 = uVar30 & 0xffffffe0;
  iVar34 = (int)uVar30 >> 5;
  uVar27 = -1 << bVar19;
  uStack_25c = 1 << bVar19;
  uStack_298 = CONCAT44(uVar15,iVar29);
  uStack_288._0_4_ = 0xffffffff;
  local_280._4_4_ = local_84;
  TStack_1d8._padding_ = uStack_298;
  uStack_1b8 = CONCAT44(uStack_274,iStack_278);
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  TStack_1d8.CurrentBitIndex = uStack_288._4_4_;
  TStack_1d8.BaseBitIndex = (uint)local_280;
  TStack_1d8._28_4_ = local_84;
  local_260 = iVar34;
  pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)puVar36;
  local_250 = uVar27;
  uStack_24c = uVar30;
  uStack_248 = uVar28;
  local_1e0 = local_d0;
  TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar36;
  if ((((int)uVar30 < 0) || (iVar25 < (int)uVar30)) &&
     (local_2a0 = local_d0, local_290 = (TBitArray<FDefaultBitArrayAllocator> *)puVar36,
     bVar13 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = *(uint *)&(local_d0->Elements).field_0x28;
  if (uVar30 != uVar15) {
    puVar5 = *(undefined1 **)&(local_d0->Elements).field_0x20;
    if (puVar5 != (undefined1 *)0x0) {
      puVar36 = puVar5;
    }
    uVar27 = uVar27 & *(uint *)(puVar36 + (longlong)iVar34 * 4);
    while (uVar27 == 0) {
      uStack_248 = uVar28 + 0x20;
      local_260 = iVar34 + 1;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < local_260)
      goto LAB_14dba6e65;
      uVar27 = *(uint *)(puVar36 + (longlong)iVar34 * 4 + 4);
      local_250 = 0xffffffff;
      uVar28 = uStack_248;
      iVar34 = local_260;
    }
    uStack_25c = -uVar27 & uVar27;
    uVar2 = (ulonglong)uStack_25c * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_214 = (int)lVar20;
    uStack_24c = local_214 + -1 + uVar28;
    if ((int)uVar15 < (int)uStack_24c) {
LAB_14dba6e65:
      uStack_24c = uVar15;
    }
  }
  uStack_298 = CONCAT44(uStack_25c,local_260);
  uStack_288 = CONCAT44(uStack_24c,local_250);
  local_280 = CONCAT44(uStack_244,uStack_248);
  iStack_278 = *(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34;
  local_290 = pTStack_258;
  uStack_a8 = CONCAT44(uStack_274,iStack_278);
  local_c0 = pTStack_258;
  local_2a0 = local_d0;
  uStack_c8 = uStack_298;
  uStack_b8 = uStack_288;
  local_b0 = local_280;
  while( true ) {
    pTVar18 = local_1e0;
    if (*(int *)&(local_1e0->Elements).field_0x8 - *(int *)&(local_1e0->Elements).field_0x34 !=
        (int)uStack_1b8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_1d8.CurrentBitIndex == uStack_b8._4_4_) && (TStack_1d8.Array == local_c0)) &&
       (pTVar18 == local_d0)) break;
    uVar15 = *(uint *)(*(longlong *)&pTVar18->Elements + (longlong)TStack_1d8.CurrentBitIndex * 0xc)
    ;
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1906,
                 "FClothingSimulationSolver_ParticlePreSubstepKinematicInterpolation",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                 ,0x772);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1906);
    }
    FVar17 = StatPtr_STAT_ChaosClothParticlePreSubstepKinematicInterpolation;
    if (StatPtr_STAT_ChaosClothParticlePreSubstepKinematicInterpolation ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSubstepKinematicInterpolation>)0x0) {
      pFVar16 = ::FName::FName(&local_d8,"STAT_ChaosClothParticlePreSubstepKinematicInterpolation");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSubstepKinematicInterpolation>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_ChaosClothParticlePreSubstepKinematicInterpolation,*pFVar16
                           ,L"Chaos Cloth Solver Particle Pre Substep Kinematic Interpolation",
                           "STATGROUP_ChaosCloth","STATCAT_Advanced",L"ChaosCloth",true,true,
                           ST_int64,true,false,MCR_Invalid);
    }
    lVar20 = 0;
    FVar26 = *(FName *)FVar17;
    bVar9 = false;
    bVar8 = false;
    local_228.ComparisonIndex.Value = 0;
    local_228.Number = 0;
    bVar14 = false;
    bVar11 = false;
    FVar24 = FVar26.ComparisonIndex.Value;
    uVar30 = FVar26.Number;
    if ((FVar24.Value == 0) && (uVar30 == 0)) {
LAB_14dba708f:
      bVar9 = bVar14;
      bVar8 = bVar11;
      bVar11 = false;
      FVar26 = local_228;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_270.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_270._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar9 = false;
        bVar8 = true;
        bVar14 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_240.ComparisonIndex.Value = FVar24.Value;
          local_240.Number = uVar30;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_240,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                     ,0x773);
          bVar9 = true;
          bVar8 = true;
          bVar14 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14dba708f;
      local_238 = FVar24.Value;
      uStack_234 = uVar30;
      local_228 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar11 = true;
    }
    lVar23 = *(longlong *)(*(longlong *)this + 0x88);
    uVar30 = 0;
    if ((int)uVar15 < *(int *)(lVar23 + 0x200)) {
      uVar30 = ~uVar15 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar6 = *(longlong *)this;
    lVar37 = (longlong)(int)uVar15 * 0x20 + *(longlong *)(lVar23 + 0x1f8);
    lVar23 = lVar20;
    if (*(int *)(lVar6 + 0x2e8) != *(int *)(lVar6 + 0x314)) {
      lVar22 = lVar6 + 0x318;
      if (*(longlong *)(lVar6 + 800) != 0) {
        lVar22 = *(longlong *)(lVar6 + 800);
      }
      iVar25 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar6 + 0x328) - 1U & uVar15) * 4);
      if (iVar25 != -1) {
        do {
          lVar23 = *(longlong *)(lVar6 + 0x2e0) + (longlong)iVar25 * 0x18;
          if (*(uint *)(*(longlong *)(lVar6 + 0x2e0) + (longlong)iVar25 * 0x18) == uVar15) {
            if (lVar23 != 0) goto LAB_14dba7191;
            break;
          }
          iVar25 = *(int *)(lVar23 + 0x10);
          lVar23 = lVar20;
        } while (iVar25 != -1);
      }
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_14dba7191:
    lVar20 = *(longlong *)(lVar23 + 8);
    *(bool *)(lVar20 + 0x244) = *(char *)((longlong)this + 0x14) == '\0';
    lVar20 = *(longlong *)(lVar20 + 0x1b0);
    if (lVar20 != 0) {
      if ((*(char *)(lVar20 + 0x6c) == '\0') ||
         ((*(char *)(lVar20 + 0x6d) != '\0' && (*(char *)((longlong)this + 0x14) == '\0')))) {
        bVar19 = 0;
      }
      else {
        bVar19 = 1;
      }
      bVar12 = (bool)(bVar12 | bVar19);
    }
    lVar20 = *(longlong *)this;
    if (bChaos_PreSubstepInterpolation_ISPC_Enabled == false) {
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x198) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_180 = *(longlong *)(lVar20 + 400) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      local_178 = *(int *)(lVar37 + 0x14);
      if ((local_178 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x1e0) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_170 = *(longlong *)(lVar20 + 0x1d8) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      local_168 = *(int *)(lVar37 + 0x14);
      if ((local_168 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x180) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_160 = *(longlong *)(lVar20 + 0x178) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      local_158 = *(int *)(lVar37 + 0x14);
      if ((local_158 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x168) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_150 = *(longlong *)(lVar20 + 0x160) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      local_148 = *(int *)(lVar37 + 0x14);
      if ((local_148 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x1c8) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_140 = *(longlong *)(lVar20 + 0x1c0) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      local_138 = *(int *)(lVar37 + 0x14);
      if ((local_138 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x1b0) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_130 = *(longlong *)(lVar20 + 0x1a8) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      local_128 = *(int *)(lVar37 + 0x14);
      if ((local_128 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_110 = &local_180;
      local_e0 = *(undefined4 *)((longlong)this + 0x10);
      local_108 = &local_170;
      local_100 = &local_160;
      local_f8 = &local_150;
      local_f0 = &local_140;
      local_e8 = &local_130;
      local_118 = &local_110;
      local_120 = UE::Core::Private::Function::
                  TFunctionRefCaller<``Chaos::FClothingSimulationSolver::PreSubstep'::__l5::<lambda_1>::operator()'::__l14::<lambda_1>,void,int>
                  ::Call;
      Chaos::PhysicsParallelFor
                (*(int *)(lVar37 + 0x14),(TFunctionRef<void___cdecl(int)> *)&local_120,
                 *(int *)(lVar37 + 0x14) < Chaos::ClothSolverMinParallelBatchSize);
    }
    else {
      local_26c = *(int *)(lVar37 + 0x14);
      uVar3 = *(undefined4 *)((longlong)this + 0x10);
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x1b0) < *(int *)(lVar37 + 0x10) + local_26c)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_208 = *(longlong *)(lVar20 + 0x1a8) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      if ((*(int *)(lVar37 + 0x14) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x1c8) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_200 = *(longlong *)(lVar20 + 0x1c0) + (longlong)*(int *)(lVar37 + 0x10) * 0xc;
      if ((*(int *)(lVar37 + 0x14) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar20 + 0x168) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar25 = *(int *)(lVar37 + 0x10);
      lVar20 = *(longlong *)(lVar20 + 0x160);
      if ((*(int *)(lVar37 + 0x14) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar23 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar23 + 0x180) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar29 = *(int *)(lVar37 + 0x10);
      lVar23 = *(longlong *)(lVar23 + 0x178);
      if ((*(int *)(lVar37 + 0x14) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar6 + 0x1e0) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar34 = *(int *)(lVar37 + 0x10);
      lVar6 = *(longlong *)(lVar6 + 0x1d8);
      if ((*(int *)(lVar37 + 0x14) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar22 = *(longlong *)this;
      if (((*(int *)(lVar37 + 0x10) < 0) ||
          (*(int *)(lVar22 + 0x198) < *(int *)(lVar37 + 0x10) + *(int *)(lVar37 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar4 = *(int *)(lVar37 + 0x10);
      lVar22 = *(longlong *)(lVar22 + 400);
      if ((*(int *)(lVar37 + 0x14) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      PreSubstepInterpolation
                (lVar22 + (longlong)iVar4 * 0xc,lVar6 + (longlong)iVar34 * 0xc,
                 lVar23 + (longlong)iVar29 * 0xc,lVar20 + (longlong)iVar25 * 0xc,local_200,local_208
                 ,uVar3,0,local_26c);
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar11) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_1f0.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
        local_1f0.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1f8);
        local_1f0.StatData.Pad[4] = '\0';
        local_1f0.StatData.Pad[5] = '\0';
        local_1f0.StatData.Pad[6] = '\0';
        local_1f0.StatData.Pad[7] = '\0';
        local_1f0.StatData.Pad[0] = local_1f8.s.LowPart._0_1_;
        local_1f0.StatData.Pad[1] = local_1f8.s.LowPart._1_1_;
        local_1f0.StatData.Pad[2] = local_1f8.s.LowPart._2_1_;
        local_1f0.StatData.Pad[3] = local_1f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_1f0);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
  pTVar18 = Chaos::Softs::FEvolution::GetGroupActiveCollisionParticleRanges
                      (*(FEvolution **)(*(longlong *)this + 0x88),local_268);
  uVar15 = *(uint *)&(pTVar18->Elements).field_0x28;
  plVar35 = (longlong *)0x0;
  uVar30 = 0;
  local_290 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar18->Elements).field_0x10;
  uStack_288._4_4_ = uVar30;
  local_280._0_4_ = uVar30;
  if (uVar15 == 0) {
LAB_14dba7aaf:
    uVar27 = (uint)local_230;
  }
  else {
    puVar33 = *(uint **)&(pTVar18->Elements).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)local_290;
    }
    uVar27 = *puVar33;
    plVar21 = plVar35;
    plVar32 = plVar35;
    while (uVar27 == 0) {
      iVar25 = (int)plVar21;
      local_280._0_4_ = (int)plVar32 + 0x20;
      plVar32 = (longlong *)(ulonglong)(uint)local_280;
      uVar30 = iVar25 + 1;
      plVar21 = (longlong *)(ulonglong)uVar30;
      uStack_288._4_4_ = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar30)
      goto LAB_14dba7aaf;
      uVar27 = puVar33[(longlong)iVar25 + 1];
    }
    uVar27 = -uVar27 & uVar27;
    uVar2 = (ulonglong)uVar27 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_210 = (int)lVar20;
    uStack_288._4_4_ = local_210 + -1 + (uint)local_280;
    if ((int)uVar15 < (int)uStack_288._4_4_) {
      uStack_288._4_4_ = uVar15;
    }
  }
  uVar15 = *(uint *)&(pTVar18->Elements).field_0x28;
  puVar36 = &(pTVar18->Elements).field_0x10;
  iStack_278 = *(int *)&(pTVar18->Elements).field_0x8 - *(int *)&(pTVar18->Elements).field_0x34;
  uVar28 = uVar15 & 0xffffffe0;
  uStack_288._0_4_ = 0xffffffff;
  uStack_298 = CONCAT44(uVar27,uVar30);
  local_280._4_4_ = local_64;
  TStack_1a8._padding_ = uStack_298;
  iVar25 = (int)uVar15 >> 5;
  uStack_188 = CONCAT44(uStack_274,iStack_278);
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  TStack_1a8.CurrentBitIndex = uStack_288._4_4_;
  TStack_1a8.BaseBitIndex = (uint)local_280;
  TStack_1a8._28_4_ = local_64;
  local_2a0 = pTVar18;
  local_1b0 = pTVar18;
  TStack_1a8.Array = local_290;
  if (((int)uVar15 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar30 = *(uint *)&(pTVar18->Elements).field_0x28;
  if (uVar15 != uVar30) {
    puVar5 = *(undefined1 **)&(pTVar18->Elements).field_0x20;
    puVar31 = puVar36;
    if (puVar5 != (undefined1 *)0x0) {
      puVar31 = puVar5;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar25 * 4);
    while (uVar15 == 0) {
      lVar20 = (longlong)iVar25;
      uVar28 = uVar28 + 0x20;
      iVar25 = iVar25 + 1;
      uVar15 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14dba7be0;
      uVar15 = *(uint *)(puVar31 + lVar20 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar15 = (uVar28 - 1) + (int)lVar20;
    if ((int)uVar30 < (int)uVar15) {
      uVar15 = uVar30;
    }
  }
LAB_14dba7be0:
  do {
    pTVar10 = local_1b0;
    if (*(int *)&(local_1b0->Elements).field_0x8 - *(int *)&(local_1b0->Elements).field_0x34 !=
        (int)uStack_188) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2a8);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar15) &&
        (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar36)) &&
       (pTVar10 == pTVar18)) {
      return;
    }
    lVar20 = *(longlong *)this;
    uVar30 = *(uint *)(*(longlong *)&pTVar10->Elements + (longlong)TStack_1a8.CurrentBitIndex * 0xc)
    ;
    if (*(int *)(lVar20 + 0x298) != *(int *)(lVar20 + 0x2c4)) {
      lVar23 = lVar20 + 0x2c8;
      if (*(longlong *)(lVar20 + 0x2d0) != 0) {
        lVar23 = *(longlong *)(lVar20 + 0x2d0);
      }
      iVar25 = *(int *)(lVar23 + (ulonglong)(*(int *)(lVar20 + 0x2d8) - 1U & uVar30) * 4);
      if (iVar25 != -1) {
        do {
          lVar23 = *(longlong *)(lVar20 + 0x290) + (longlong)iVar25 * 0x18;
          if (*(uint *)(*(longlong *)(lVar20 + 0x290) + (longlong)iVar25 * 0x18) == uVar30) {
            plVar21 = (longlong *)(lVar23 + 8);
            if (lVar23 == 0) {
              plVar21 = plVar35;
            }
            if ((plVar21 != (longlong *)0x0) && (*plVar21 != 0)) {
              *(bool *)(*plVar21 + 0x120) = !bVar12;
            }
            break;
          }
          iVar25 = *(int *)(lVar23 + 0x10);
        } while (iVar25 != -1);
      }
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  } while( true );
}

// operator() @ 14dba8200

void __thiscall
`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l8::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  FPBDExtremeDeformationConstraints *this_00;
  FClothingSimulationSolver *this_01;
  FEvolution *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TVector<float,3> *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_78;
  TArrayView<Chaos::TVector<float,3>,int> local_68 [2];
  undefined4 local_3c;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar10 = Chaos::Softs::FEvolution::GetGroupActiveSoftBodies
                      (*(FEvolution **)(*(longlong *)this + 0x88),
                       *(uint *)(*plVar3 + (longlong)param_1 * 4));
  iVar9 = *(int *)&(pTVar10->Elements).field_0x28;
  iVar16 = 0;
  iVar18 = 0;
  uVar7 = 1;
  puVar1 = &(pTVar10->Elements).field_0x10;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&(pTVar10->Elements).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14dba82fe;
      uVar15 = puVar19[lVar12 + 1];
    }
    uVar7 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = iVar18 + -1 + (int)lVar12;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14dba82fe:
  uVar15 = *(uint *)&(pTVar10->Elements).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar7,iVar16);
  TStack_b0.CurrentBitIndex = iVar8;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = iVar18;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&(pTVar10->Elements).field_0x8 -
                       *(int *)&(pTVar10->Elements).field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(pTVar10->Elements).field_0x28;
  if (uVar15 != uVar7) {
    puVar17 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14dba8400;
      uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar15 = local_res18 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_14dba8400:
  do {
    if (*(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34 !=
        (int)uStack_90) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_b0.CurrentBitIndex == uVar15) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar12 = *(longlong *)this;
    uVar7 = *(uint *)(*(longlong *)&pTVar10->Elements + (longlong)TStack_b0.CurrentBitIndex * 0xc);
    if (*(int *)(lVar12 + 0x2e8) != *(int *)(lVar12 + 0x314)) {
      lVar13 = lVar12 + 0x318;
      if (*(longlong *)(lVar12 + 800) != 0) {
        lVar13 = *(longlong *)(lVar12 + 800);
      }
      iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar12 + 0x328) - 1U & uVar7) * 4);
      if (iVar9 != -1) {
        do {
          lVar13 = *(longlong *)(lVar12 + 0x2e0) + (longlong)iVar9 * 0x18;
          if (*(uint *)(*(longlong *)(lVar12 + 0x2e0) + (longlong)iVar9 * 0x18) == uVar7) {
            if (lVar13 == 0) goto LAB_14dba849e;
            goto LAB_14dba84c4;
          }
          iVar9 = *(int *)(lVar13 + 0x10);
        } while (iVar9 != -1);
      }
    }
    lVar13 = 0;
LAB_14dba849e:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14dba84c4:
    this_00 = *(FPBDExtremeDeformationConstraints **)(*(longlong *)(lVar13 + 8) + 0x160);
    if (this_00 != (FPBDExtremeDeformationConstraints *)0x0) {
      pTVar11 = Chaos::FClothingSimulationSolver::GetParticleXsView
                          (*(FClothingSimulationSolver **)this,local_68,uVar7);
      local_88 = pTVar11->DataPtr;
      iStack_80 = pTVar11->ArrayNum;
      local_78._12_4_ = uStack_7c;
      local_78.ArrayNum = iStack_80;
      local_78.DataPtr = local_88;
      bVar6 = Chaos::Softs::FPBDExtremeDeformationConstraints::IsExtremelyDeformed
                        (this_00,&local_78);
      if (bVar6) {
        this_01 = *(FClothingSimulationSolver **)this;
        pFVar4 = (this_01->Evolution).Ptr;
        uVar14 = 0;
        if ((int)uVar7 < *(int *)&(pFVar4->SoftBodies).ParticleRanges.field_0x10) {
          uVar14 = ~uVar7 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        Chaos::FClothingSimulationSolver::ResetStartPose
                  (this_01,uVar7,
                   *(int *)((longlong)(int)uVar7 * 0x20 + 0x14 +
                           *(longlong *)&(pFVar4->SoftBodies).ParticleRanges.field_0x8));
      }
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// operator() @ 14dba8b60

void __thiscall
`Chaos::FClothingSimulationSolver::UpdateSolverField'::__l20::<lambda_1>::operator()
          (void *this,FSolverParticles *param_1,int param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  
  pTVar13 = Chaos::TParticles<float,3>::X((TParticles<float,3> *)param_1,param_2);
  lVar6 = *(longlong *)this;
  plVar7 = *(longlong **)((longlong)this + 8);
  uVar2 = *(undefined8 *)&pTVar13->field_0x4;
  fVar1 = *(float *)pTVar13;
  dVar3 = *(double *)(lVar6 + 0x338);
  uVar5 = 0;
  if (param_2 < (int)plVar7[1]) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  dVar11 = *(double *)(lVar6 + 0x360);
  dVar4 = *(double *)(lVar6 + 0x358);
  dVar10 = (double)(float)((ulonglong)uVar2 >> 0x20) * dVar3 + *(double *)(lVar6 + 0x368);
  if (uVar5 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar6 = *plVar7;
  *(double *)(lVar6 + (longlong)param_2 * 0x18) = (double)fVar1 * dVar3 + dVar4;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = (double)(float)uVar2 * dVar3 + dVar11;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(lVar6 + 8 + (longlong)param_2 * 0x18) = auVar9;
  plVar7 = *(longlong **)((longlong)this + 0x10);
  uVar5 = **(uint **)((longlong)this + 0x18);
  uVar14 = 0;
  if ((int)uVar5 < (int)plVar7[1]) {
    uVar14 = ~uVar5 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(ulonglong *)(*plVar7 + (longlong)(int)uVar5 * 8) = CONCAT44(uVar5,param_2);
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// operator() @ 14dba8cd0

void __thiscall
`Chaos::FClothingSimulationSolver::Update'::__l27::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  FClothingSimulationCloth *this_00;
  FPBDEvolution *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVelocityAndPressureField *pFVar5;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0xa0)) {
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
  this_00 = *(FClothingSimulationCloth **)(*(longlong *)(lVar1 + 0x98) + (longlong)param_1 * 8);
  this_01 = *(FPBDEvolution **)(*(longlong *)this + 0x90);
  uVar4 = this_00->GroupId;
  if (this_01 != (FPBDEvolution *)0x0) {
    Chaos::Softs::FPBDEvolution::SetGravity
              (this_01,(TVector<float,3> *)(*(longlong *)this + 0x3e0),uVar4);
    pFVar5 = Chaos::Softs::FPBDEvolution::GetVelocityAndPressureField
                       (*(FPBDEvolution **)(*(longlong *)this + 0x90),uVar4);
    lVar1 = *(longlong *)this;
    *(undefined8 *)&pFVar5->Velocity = *(undefined8 *)(lVar1 + 0x3ec);
    *(undefined4 *)&(pFVar5->Velocity).field_0x8 = *(undefined4 *)(lVar1 + 0x3f4);
  }
  Chaos::FClothingSimulationCloth::Update(this_00,*(FClothingSimulationSolver **)this);
  return;
}

// operator() @ 14dbaa050

void __thiscall
`Chaos::FClothingSimulationSolver::CalculateBounds'::__l50::<lambda_1>::operator()
          (void *this,FSolverParticles *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  float local_1c;
  float fStack_18;
  
  puVar1 = *(undefined8 **)this;
  local_48 = *puVar1;
  local_40 = *(float *)(puVar1 + 1);
  local_38 = *(undefined8 *)((longlong)puVar1 + 0xc);
  local_30 = *(float *)((longlong)puVar1 + 0x14);
  CalculateBounds(&local_48,&local_38,param_1->_padding_,param_2,param_3);
  pfVar2 = *(float **)this;
  fVar3 = (float)local_48;
  if (*pfVar2 <= (float)local_48) {
    fVar3 = *pfVar2;
  }
  fVar4 = pfVar2[1];
  if (local_48._4_4_ <= pfVar2[1]) {
    fVar4 = local_48._4_4_;
  }
  fVar5 = pfVar2[2];
  if (local_40 <= pfVar2[2]) {
    fVar5 = local_40;
  }
  *pfVar2 = fVar3;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar5;
  local_1c = (float)local_38;
  fVar3 = pfVar2[3];
  if (pfVar2[3] <= local_1c) {
    fVar3 = local_1c;
  }
  fStack_18 = (float)((ulonglong)local_38 >> 0x20);
  fVar4 = pfVar2[4];
  if (pfVar2[4] <= fStack_18) {
    fVar4 = fStack_18;
  }
  fVar5 = pfVar2[5];
  if (pfVar2[5] <= local_30) {
    fVar5 = local_30;
  }
  pfVar2[3] = fVar3;
  pfVar2[4] = fVar4;
  pfVar2[5] = fVar5;
  return;
}

// operator() @ 14dbaa7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l12::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  undefined1 *puVar2;
  longlong lVar3;
  FClothComplexColliders *this_00;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar18;
  TVector<float,3> *pTVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *this_01;
  float *pfVar25;
  uint uVar26;
  uint uVar27;
  longlong *plVar28;
  int *piVar29;
  uint uVar30;
  undefined1 *puVar31;
  uint *puVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined1 auStackY_3e8 [32];
  undefined1 local_388;
  undefined1 local_387 [3];
  uint local_384;
  uint local_380;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_378;
  TBitArray<FDefaultBitArrayAllocator> *local_370;
  int *local_368;
  TTransform<float> *local_360;
  longlong *local_358;
  TBitArray<FDefaultBitArrayAllocator> *local_350;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_348;
  int iStack_340;
  uint uStack_33c;
  undefined1 *local_338;
  undefined4 uStack_330;
  int iStack_32c;
  int local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_308;
  float local_300;
  float fStack_2fc;
  float local_2f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 uStack_2c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  code *local_290;
  longlong *local_288;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> local_280;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> local_270;
  longlong local_260;
  int local_258;
  longlong local_250;
  int local_248;
  longlong local_240;
  int local_238;
  longlong local_230;
  TTransform<float> *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong local_208;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *local_200;
  undefined4 local_1f8;
  TArrayView<Chaos::TVector<float,3>,int> local_1f0;
  TArrayView<Chaos::TVector<float,3>,int> local_1e0;
  TArrayView<Chaos::TVector<float,3>,int> local_1d0;
  TArrayView<Chaos::TVector<float,3>,int> local_1c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_1b0;
  TArrayView<float,int> local_1a0;
  TArrayView<Chaos::TVector<float,3>,int> local_190;
  TArrayView<Chaos::TVector<float,3>,int> local_180;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_170;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_160;
  TArrayView<Chaos::TVector<float,3>,int> local_150;
  TArrayView<Chaos::TVector<float,3>,int> local_140;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_130;
  TArrayView<float,int> local_120 [2];
  undefined4 local_f4;
  undefined4 local_d4;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  plVar28 = *(longlong **)((longlong)this + 8);
  uVar30 = 0;
  if (param_1 < (int)plVar28[1]) {
    uVar30 = (uint)~param_1 >> 0x1f;
  }
  local_358 = this;
  if ((uVar30 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar30 = *(uint *)(*plVar28 + (longlong)param_1 * 4);
  local_380 = uVar30;
  pTVar17 = Chaos::Softs::FEvolution::GetGroupActiveSoftBodies
                      (*(FEvolution **)(*(longlong *)this + 0x88),uVar30);
  lVar20 = *(longlong *)this;
  uVar26 = 0;
  if ((int)uVar30 < *(int *)(lVar20 + 0xd8)) {
    uVar26 = ~uVar30 >> 0x1f;
  }
  local_378 = pTVar17;
  if ((uVar26 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar24 = *(int *)&(pTVar17->Elements).field_0x28;
  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar17->Elements).field_0x10;
  local_360 = (TTransform<float> *)((longlong)(int)uVar30 * 0x30 + *(longlong *)(lVar20 + 0xd0));
  iStack_340 = 0;
  local_350 = (TBitArray<FDefaultBitArrayAllocator> *)0x1;
  local_328 = 0;
  iStack_32c = 0;
  uStack_33c = 1;
  if (iVar24 != 0) {
    puVar32 = *(uint **)&(pTVar17->Elements).field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)pTVar33;
    }
    uStack_33c = *puVar32;
    while (uStack_33c == 0) {
      lVar20 = (longlong)iStack_340;
      local_328 = local_328 + 0x20;
      iStack_340 = iStack_340 + 1;
      iStack_32c = iVar24;
      uStack_33c = 1;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_340) goto LAB_14dbaa94d;
      uStack_33c = puVar32[lVar20 + 1];
    }
    uStack_33c = -uStack_33c & uStack_33c;
    uVar34 = (ulonglong)uStack_33c * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_318 = (int)lVar20;
    iStack_32c = local_318 + -1 + local_328;
    if (iVar24 < iStack_32c) {
      iStack_32c = iVar24;
    }
  }
LAB_14dbaa94d:
  uVar30 = *(uint *)&(pTVar17->Elements).field_0x28;
  uStack_324 = local_f4;
  uVar26 = uVar30 & 0xffffffe0;
  iStack_320 = *(int *)&(pTVar17->Elements).field_0x8 - *(int *)&(pTVar17->Elements).field_0x34;
  uStack_330 = 0xffffffff;
  TStack_2e8._padding_ = CONCAT44(uStack_33c,iStack_340);
  TStack_2e8.CurrentBitIndex = iStack_32c;
  TStack_2e8.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar30 >> 5;
  TStack_2e8._28_4_ = local_f4;
  TStack_2e8.BaseBitIndex = local_328;
  uStack_2c8 = CONCAT44(uStack_31c,iStack_320);
  local_384 = uVar30;
  local_370 = pTVar33;
  local_348 = pTVar17;
  local_338 = (undefined1 *)pTVar33;
  local_2f0 = pTVar17;
  TStack_2e8.Array = pTVar33;
  if ((((int)uVar30 < 0) || (iVar24 < (int)uVar30)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar1 = __real_7f7fffff;
  uVar27 = *(uint *)&(pTVar17->Elements).field_0x28;
  if (uVar30 != uVar27) {
    puVar2 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
    puVar31 = (undefined1 *)pTVar33;
    if (puVar2 != (undefined1 *)0x0) {
      puVar31 = puVar2;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar23 * 4);
    while (uVar30 == 0) {
      lVar20 = (longlong)iVar23;
      uVar26 = uVar26 + 0x20;
      iVar23 = iVar23 + 1;
      uVar30 = uVar27;
      local_384 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_14dbaaa70;
      uVar30 = *(uint *)(puVar31 + lVar20 * 4 + 4);
    }
    uVar34 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_30c = (int)lVar20;
    uVar30 = local_30c + -1 + uVar26;
    local_384 = uVar30;
    if ((int)uVar27 < (int)uVar30) {
      uVar30 = uVar27;
      local_384 = uVar27;
    }
  }
LAB_14dbaaa70:
  while( true ) {
    pTVar11 = local_2f0;
    if (*(int *)&(local_2f0->Elements).field_0x8 - *(int *)&(local_2f0->Elements).field_0x34 !=
        (int)uStack_2c8) {
      local_388 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_388);
    }
    plVar28 = local_358;
    if (((TStack_2e8.CurrentBitIndex == uVar30) && (TStack_2e8.Array == pTVar33)) &&
       (pTVar11 == pTVar17)) break;
    uVar30 = *(uint *)(*(longlong *)&pTVar11->Elements + (longlong)TStack_2e8.CurrentBitIndex * 0xc)
    ;
    lVar20 = *(longlong *)(*local_358 + 0x88);
    uVar26 = 0;
    if ((int)uVar30 < *(int *)(lVar20 + 0x200)) {
      uVar26 = ~uVar30 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
              ((longlong)(int)uVar30 * 0x20 + *(longlong *)(lVar20 + 0x1f8));
    piVar29 = &this_01->RangeSize;
    if (bChaos_PreSimulationTransforms_ISPC_Enabled == false) {
      lVar20 = *plVar28;
      if (((this_01->Offset < 0) || (*(int *)(lVar20 + 0x168) < this_01->Offset + *piVar29)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_260 = *(longlong *)(lVar20 + 0x160) + (longlong)this_01->Offset * 0xc;
      local_258 = *piVar29;
      if ((local_258 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar20 = *plVar28;
      if (((this_01->Offset < 0) || (*(int *)(lVar20 + 0x1f8) < this_01->Offset + *piVar29)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_250 = *(longlong *)(lVar20 + 0x1f0) + (longlong)this_01->Offset * 0xc;
      local_248 = this_01->RangeSize;
      if ((local_248 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar20 = *plVar28;
      if (((this_01->Offset < 0) ||
          (*(int *)(lVar20 + 0x180) < this_01->Offset + this_01->RangeSize)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_240 = *(longlong *)(lVar20 + 0x178) + (longlong)this_01->Offset * 0xc;
      local_238 = this_01->RangeSize;
      if ((local_238 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_230 = *plVar28;
      local_1f8 = (undefined4)plVar28[3];
      local_228 = local_360;
      local_220 = &local_260;
      local_218 = &local_250;
      local_210 = &local_240;
      local_208 = plVar28[2];
      local_288 = &local_230;
      local_290 = UE::Core::Private::Function::
                  TFunctionRefCaller<``Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l12::<lambda_1>::operator()'::__l16::<lambda_1>,void,int>
                  ::Call;
      local_200 = this_01;
      Chaos::PhysicsParallelFor
                (this_01->RangeSize,(TFunctionRef<void___cdecl(int)> *)&local_290,
                 this_01->RangeSize < Chaos::ClothSolverMinParallelBatchSize);
    }
    else {
      local_368 = (int *)plVar28[2];
      if (*(float *)(plVar28 + 3) == fVar1) {
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_1b0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*plVar28 + 0x178)
                  );
        Chaos::Softs::FSolverParticlesRange::GetInvM((FSolverParticlesRange *)this_01,&local_1a0);
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_190,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*plVar28 + 0x1f0)
                  );
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_180,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*plVar28 + 0x160)
                  );
        if ((this_01->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_1e0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &this_01->Particles->_padding_);
        if ((this_01->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_1d0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &this_01->Particles->_padding_);
        pTVar18 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM
                            ((FSolverParticlesRange *)this_01,&local_170);
        ApplyPreSimulationTransform(pTVar18->DataPtr,local_1d0.DataPtr);
        pTVar17 = local_378;
        pTVar33 = local_370;
      }
      else {
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_160,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*plVar28 + 0x178)
                  );
        Chaos::Softs::FSolverParticlesRange::GetInvM((FSolverParticlesRange *)this_01,local_120);
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_150,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*plVar28 + 0x1f0)
                  );
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_140,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*plVar28 + 0x160)
                  );
        if ((this_01->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_1c0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &this_01->Particles->_padding_);
        if ((this_01->Particles == (FSolverParticles *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
        GetArrayView<Chaos::TVector<float,3>_>
                  (this_01,&local_1f0,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &this_01->Particles->_padding_);
        pTVar18 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM
                            ((FSolverParticlesRange *)this_01,&local_130);
        ApplyPreSimulationTransformAndClampVelocity(pTVar18->DataPtr,local_1f0.DataPtr);
        pTVar17 = local_378;
        pTVar33 = local_370;
      }
    }
    TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
    uVar30 = local_384;
  }
  pTVar17 = Chaos::Softs::FEvolution::GetGroupActiveCollisionParticleRanges
                      (*(FEvolution **)(*local_358 + 0x88),local_380);
  iVar24 = *(int *)&(pTVar17->Elements).field_0x28;
  iStack_340 = 0;
  local_328 = 0;
  local_338 = &(pTVar17->Elements).field_0x10;
  iStack_32c = 0;
  if (iVar24 == 0) {
LAB_14dbab0d0:
    uStack_33c = (uint)local_350;
  }
  else {
    puVar32 = *(uint **)&(pTVar17->Elements).field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)local_338;
    }
    uStack_33c = *puVar32;
    while (uStack_33c == 0) {
      lVar20 = (longlong)iStack_340;
      local_328 = local_328 + 0x20;
      iStack_340 = iStack_340 + 1;
      iStack_32c = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_340) goto LAB_14dbab0d0;
      uStack_33c = puVar32[lVar20 + 1];
    }
    uStack_33c = -uStack_33c & uStack_33c;
    uVar34 = (ulonglong)uStack_33c * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_314 = (int)lVar20;
    iStack_32c = local_328 + -1 + local_314;
    if (iVar24 < iStack_32c) {
      iStack_32c = iVar24;
    }
  }
  uVar30 = *(uint *)&(pTVar17->Elements).field_0x28;
  uStack_324 = local_d4;
  iStack_320 = *(int *)&(pTVar17->Elements).field_0x8 - *(int *)&(pTVar17->Elements).field_0x34;
  uVar26 = uVar30 & 0xffffffe0;
  uStack_330 = 0xffffffff;
  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar17->Elements).field_0x10;
  TStack_2b8.CurrentBitIndex = iStack_32c;
  TStack_2b8.UnvisitedBitMask = 0xffffffff;
  TStack_2b8._padding_ = CONCAT44(uStack_33c,iStack_340);
  iVar24 = (int)uVar30 >> 5;
  TStack_2b8._28_4_ = local_d4;
  TStack_2b8.BaseBitIndex = local_328;
  uStack_298 = CONCAT44(uStack_31c,iStack_320);
  local_384 = uVar30;
  local_350 = pTVar33;
  local_348 = pTVar17;
  local_308 = pTVar17;
  local_2c0 = pTVar17;
  TStack_2b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_338;
  if (((int)uVar30 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = __xmm_80000000800000008000000080000000;
  uVar27 = *(uint *)&(pTVar17->Elements).field_0x28;
  if (uVar30 != uVar27) {
    puVar2 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
    puVar31 = (undefined1 *)pTVar33;
    if (puVar2 != (undefined1 *)0x0) {
      puVar31 = puVar2;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar24 * 4);
    while (uVar30 == 0) {
      lVar20 = (longlong)iVar24;
      uVar26 = uVar26 + 0x20;
      iVar24 = iVar24 + 1;
      uVar30 = uVar27;
      local_384 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_14dbab201;
      uVar30 = *(uint *)(puVar31 + lVar20 * 4 + 4);
    }
    uVar34 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_310 = (int)lVar20;
    uVar30 = (uVar26 - 1) + local_310;
    local_384 = uVar30;
    if ((int)uVar27 < (int)uVar30) {
      uVar30 = uVar27;
      local_384 = uVar27;
    }
  }
LAB_14dbab201:
  do {
    pTVar17 = local_2c0;
    if (*(int *)&(local_2c0->Elements).field_0x8 - *(int *)&(local_2c0->Elements).field_0x34 !=
        (int)uStack_298) {
      local_387[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_387);
    }
    if (((TStack_2b8.CurrentBitIndex == uVar30) && (TStack_2b8.Array == pTVar33)) &&
       (pTVar17 == local_308)) {
      return;
    }
    local_380 = *(uint *)(*(longlong *)&pTVar17->Elements +
                         (longlong)TStack_2b8.CurrentBitIndex * 0xc);
    uVar34 = (ulonglong)(int)local_380;
    lVar20 = *(longlong *)(*plVar28 + 0x88);
    uVar30 = 0;
    if ((int)local_380 < *(int *)(lVar20 + 0x408)) {
      uVar30 = ~local_380 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar20 = *(longlong *)(lVar20 + 0x400);
    lVar3 = *plVar28;
    lVar35 = uVar34 * 0x20;
    iVar24 = *(int *)(lVar35 + 0x10 + lVar20);
    piVar29 = (int *)(lVar35 + 0x14 + lVar20);
    local_368 = piVar29;
    if (((iVar24 < 0) || (*(int *)(lVar3 + 0x240) < iVar24 + *piVar29)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar24 = *piVar29;
    local_378 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                ((longlong)*(int *)(lVar35 + 0x10 + lVar20) * 0x30 + *(longlong *)(lVar3 + 0x238));
    if ((iVar24 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar30 = 0;
    local_370 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    if (0 < *piVar29) {
      pfVar25 = (float *)&(local_378->Elements).field_0x10;
      do {
        uVar26 = (uint)((int)uVar30 < iVar24) & ~uVar30 >> 0x1f;
        if ((uVar26 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c8 = GlobalVectorConstants::Float0001;
        local_b8 = GlobalVectorConstants::FloatZero;
        local_a8 = GlobalVectorConstants::Float1110;
        UE::Math::TTransform<float>::Multiply
                  ((TTransform<float> *)&local_c8,
                   (TTransform<float> *)
                   &(&local_378->Hash)[(longlong)(int)uVar30 * 3 + -4].SecondaryData,local_360);
        uVar6 = local_c8.m128_u64[0];
        uVar7 = local_c8.m128_u64[1];
        uVar12 = local_b8.m128_u64[0];
        uVar13 = local_b8.m128_u64[1];
        uVar14 = local_a8.m128_u64[0];
        uVar15 = local_a8.m128_u64[1];
        if ((uVar26 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(pfVar25 + -4) = uVar6;
        *(undefined8 *)(pfVar25 + -2) = uVar7;
        *(undefined8 *)pfVar25 = uVar12;
        *(undefined8 *)(pfVar25 + 2) = uVar13;
        *(undefined8 *)(pfVar25 + 4) = uVar14;
        *(undefined8 *)(pfVar25 + 6) = uVar15;
        if ((uVar26 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar32 = (uint *)local_358[2];
        uVar26 = puVar32[1];
        uVar27 = puVar32[2];
        uVar5 = 0;
        if ((int)uVar30 < iVar24) {
          uVar5 = ~uVar30 >> 0x1f;
        }
        *pfVar25 = (float)(*puVar32 ^ uVar10) + *pfVar25;
        pfVar25[1] = (float)(uVar26 ^ uVar10) + pfVar25[1];
        pfVar25[2] = (float)(uVar27 ^ uVar10) + pfVar25[2];
        pfVar25[3] = pfVar25[3] + 0.0;
        if ((uVar5 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_300 = *pfVar25;
        fStack_2fc = pfVar25[1];
        fVar8 = pfVar25[0];
        fVar9 = pfVar25[1];
        fVar1 = pfVar25[2];
        local_2f8 = fVar1;
        if ((*(longlong *)(lVar35 + 8 + lVar20) == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar19 = Chaos::TParticles<float,3>::X
                            (*(TParticles<float,3> **)(lVar35 + 8 + lVar20),
                             *(int *)(lVar35 + 0x10 + lVar20) + uVar30);
        *(float *)&pTVar19->field_0x0 = fVar8;
        *(float *)&pTVar19->field_0x4 = fVar9;
        *(float *)&pTVar19->field_0x8 = fVar1;
        if ((uVar5 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = *(undefined8 *)(pfVar25 + -4);
        uVar7 = *(undefined8 *)(pfVar25 + -2);
        if ((*(longlong *)(lVar35 + 8 + lVar20) == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(lVar35 + 8 + lVar20);
        uVar27 = *(int *)(lVar35 + 0x10 + lVar20) + uVar30;
        uVar26 = 0;
        if ((int)uVar27 < *(int *)(lVar3 + 0x50)) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar30 = uVar30 + 1;
        local_370 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((local_370->AllocatorInstance).InlineData + 1);
        pfVar25 = pfVar25 + 0xc;
        puVar21 = (undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar27 * 0x10);
        *puVar21 = uVar6;
        puVar21[1] = uVar7;
      } while ((int)uVar30 < *local_368);
      uVar34 = (ulonglong)local_380;
    }
    plVar28 = local_358;
    lVar3 = *local_358;
    if (*(int *)(lVar3 + 0x298) != *(int *)(lVar3 + 0x2c4)) {
      lVar22 = lVar3 + 0x2c8;
      if (*(longlong *)(lVar3 + 0x2d0) != 0) {
        lVar22 = *(longlong *)(lVar3 + 0x2d0);
      }
      iVar24 = *(int *)(lVar22 + ((ulonglong)(*(int *)(lVar3 + 0x2d8) - 1) & uVar34 & 0xffffffff) *
                                 4);
      if (iVar24 != -1) {
        do {
          lVar22 = *(longlong *)(lVar3 + 0x290) + (longlong)iVar24 * 0x18;
          if (*(int *)(*(longlong *)(lVar3 + 0x290) + (longlong)iVar24 * 0x18) == (int)uVar34) {
            puVar21 = (undefined8 *)(lVar22 + 8);
            if (lVar22 == 0) {
              puVar21 = (undefined8 *)0x0;
            }
            if ((puVar21 != (undefined8 *)0x0) &&
               (this_00 = (FClothComplexColliders *)*puVar21,
               this_00 != (FClothComplexColliders *)0x0)) {
              iVar24 = *(int *)(lVar35 + 0x10 + lVar20);
              fVar1 = *(float *)(lVar3 + 0x39c);
              if (((iVar24 < 0) ||
                  (*(int *)(lVar3 + 600) < iVar24 + *(int *)(lVar35 + 0x14 + lVar20))) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x4b,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_280.ArrayNum = *(int *)(lVar35 + 0x14 + lVar20);
              local_280.DataPtr =
                   (TRigidTransform<float,3> *)
                   ((longlong)*(int *)(lVar35 + 0x10 + lVar20) * 0x30 + *(longlong *)(lVar3 + 0x250)
                   );
              if ((local_280.ArrayNum < 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar24 = *(int *)(lVar35 + 0x10 + lVar20);
              lVar3 = *plVar28;
              if (((iVar24 < 0) ||
                  (*(int *)(lVar3 + 0x240) < iVar24 + *(int *)(lVar35 + 0x14 + lVar20))) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x4b,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_270.ArrayNum = *(int *)(lVar35 + 0x14 + lVar20);
              local_270.DataPtr =
                   (TRigidTransform<float,3> *)
                   ((longlong)*(int *)(lVar35 + 0x10 + lVar20) * 0x30 + *(longlong *)(lVar3 + 0x238)
                   );
              if ((local_270.ArrayNum < 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              Chaos::FClothComplexColliders::ApplyPreSimulationTransforms
                        (this_00,(TRigidTransform<float,3> *)local_360,
                         (TVector<float,3> *)plVar28[2],&local_270,&local_280,fVar1);
            }
            break;
          }
          iVar24 = *(int *)(lVar22 + 0x10);
        } while (iVar24 != -1);
      }
    }
    TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
    pTVar33 = local_350;
    uVar30 = local_384;
  } while( true );
}

// operator() @ 14dbad090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_2>::operator()
          (void *this,FSolverCollisionParticlesRange *param_1,float param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  TRigidTransform<float,3> *pTVar4;
  TRigidTransform<float,3> *pTVar5;
  TRigidTransform<float,3> *pTVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  __m128 _Var14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *pTVar22;
  TArrayView<Chaos::TRigidTransform<float,3>,int> *pTVar23;
  TArrayView<Chaos::TRotation<float,3>,int> *pTVar24;
  longlong lVar25;
  TQuat<float> *pTVar26;
  FClothComplexColliders *this_00;
  TRotation<float,3> *pTVar27;
  float *pfVar28;
  undefined8 *puVar29;
  int iVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  TArrayView<Chaos::TVector<float,3>,int> local_190;
  TArrayView<Chaos::TVector<float,3>,int> local_180;
  TArrayView<Chaos::TVector<float,3>,int> local_170;
  TQuat<float> local_158;
  TQuat<float> local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> local_128;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> local_118;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_108;
  TArrayView<Chaos::TRotation<float,3>,int> local_f8;
  TQuat<float> local_e8 [11];
  
  lVar25 = *(longlong *)this;
  fVar48 = (param_3 - *(float *)(lVar25 + 0x398)) / *(float *)(lVar25 + 0x39c);
  pTVar22 = Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
            GetConstArrayView<Chaos::TRigidTransform<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)param_1,
                       &local_128,
                       (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
                       (lVar25 + 0x250));
  pTVar4 = pTVar22->DataPtr;
  pTVar22 = Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
            GetConstArrayView<Chaos::TRigidTransform<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)param_1,
                       &local_118,
                       (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
                       (*(longlong *)this + 0x238));
  pTVar5 = pTVar22->DataPtr;
  pTVar23 = Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
            GetArrayView<Chaos::TRigidTransform<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)param_1,
                       &local_108,
                       (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
                       (*(longlong *)this + 0x268));
  pTVar6 = pTVar23->DataPtr;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
  GetArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)param_1,&local_190,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
  GetArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)param_1,&local_180,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x78));
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
  GetArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)param_1,&local_170,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x90));
  pTVar24 = Chaos::Softs::FSolverCollisionParticlesRange::GetR(param_1,&local_f8);
  fVar20 = _UNK_1506895dc;
  fVar19 = _UNK_1506895d8;
  fVar18 = _UNK_1506895d4;
  fVar17 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  uVar16 = _UNK_150689548;
  uVar15 = ___xmm_000000003f8000003f8000003f800000;
  fVar13 = __real_bf800000;
  fVar12 = __real_3f800000;
  iVar30 = 0;
  pTVar27 = pTVar24->DataPtr;
  if (0 < *(int *)&param_1->field_0x14) {
    pfVar31 = (float *)&(local_190.DataPtr)->field_0x4;
    pfVar28 = (float *)&(local_170.DataPtr)->field_0x8;
    lVar25 = (longlong)local_180.DataPtr - (longlong)local_190.DataPtr;
    puVar29 = (undefined8 *)&pTVar6->field_0x20;
    fVar47 = __real_3f800000 / param_2;
    fVar49 = __real_3f800000 - fVar48;
    do {
      auVar10 = *(undefined1 (*) [12])(pfVar31 + -1);
      uVar11 = *(undefined8 *)&pTVar27->field_0x8;
      puVar29[-4] = *(undefined8 *)pTVar27;
      puVar29[-3] = uVar11;
      auVar36._12_4_ = 0;
      auVar36._0_12_ = auVar10;
      *(undefined1 (*) [16])(puVar29 + -2) = auVar36;
      *puVar29 = uVar15;
      puVar29[1] = uVar16;
      pfVar1 = (float *)((longlong)pTVar4 + (-0x10 - (longlong)pTVar6) + (longlong)puVar29);
      pfVar2 = (float *)((longlong)pTVar5 + (-0x10 - (longlong)pTVar6) + (longlong)puVar29);
      fVar43 = *pfVar2 * fVar49 + *pfVar1 * fVar48;
      fVar44 = pfVar1[2] * fVar48 + pfVar2[2] * fVar49;
      fVar42 = pfVar2[1] * fVar49 + pfVar1[1] * fVar48;
      fVar35 = pfVar31[1];
      fVar38 = *pfVar31;
      *(float *)(lVar25 + -4 + (longlong)pfVar31) = (fVar43 - pfVar31[-1]) * fVar47;
      *(float *)(lVar25 + (longlong)pfVar31) = (fVar42 - fVar38) * fVar47;
      *(float *)(lVar25 + 4 + (longlong)pfVar31) = (fVar44 - fVar35) * fVar47;
      *(ulonglong *)(pfVar31 + -1) = CONCAT44(fVar42,fVar43);
      pfVar31[1] = fVar44;
      puVar3 = (undefined8 *)((longlong)pTVar4 + (-0x20 - (longlong)pTVar6) + (longlong)puVar29);
      local_158._0_8_ = *puVar3;
      local_158._8_8_ = puVar3[1];
      puVar3 = (undefined8 *)((longlong)pTVar5 + (-0x20 - (longlong)pTVar6) + (longlong)puVar29);
      local_148._0_8_ = *puVar3;
      local_148._8_8_ = puVar3[1];
      pTVar26 = UE::Math::TQuat<float>::Slerp_NotNormalized(local_e8,&local_148,&local_158,fVar48);
      _Var14 = GlobalVectorConstants::FloatOne;
      fVar35 = pTVar26->X;
      fVar38 = pTVar26->Y;
      fVar42 = pTVar26->Z;
      fVar43 = pTVar26->W;
      fVar44 = fVar38 * fVar38 + fVar35 * fVar35;
      fVar39 = fVar35 * fVar35 + fVar38 * fVar38;
      fVar40 = fVar43 * fVar43 + fVar42 * fVar42;
      fVar41 = fVar42 * fVar42 + fVar43 * fVar43;
      auVar46._0_4_ = fVar40 + fVar44;
      auVar46._4_4_ = fVar41 + fVar39;
      auVar46._8_4_ = fVar44 + fVar40;
      auVar46._12_4_ = fVar39 + fVar41;
      auVar36 = sqrtps(auVar46,auVar46);
      auVar36 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar36);
      fVar44 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0] * *(float *)pTVar27;
      fVar39 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1] * *(float *)&pTVar27->field_0x4;
      fVar40 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2] * *(float *)&pTVar27->field_0x8;
      fVar41 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3] * *(float *)&pTVar27->field_0xc;
      local_138 = (float)((uint)(auVar36._0_4_ * fVar35) & -(uint)(fVar17 <= auVar46._0_4_) |
                         ~-(uint)(fVar17 <= auVar46._0_4_) &
                         GlobalVectorConstants::Float0001.m128_u32[0]);
      fStack_134 = (float)((uint)(auVar36._4_4_ * fVar38) & -(uint)(fVar18 <= auVar46._4_4_) |
                          ~-(uint)(fVar18 <= auVar46._4_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[1]);
      fStack_130 = (float)((uint)(auVar36._8_4_ * fVar42) & -(uint)(fVar19 <= auVar46._8_4_) |
                          ~-(uint)(fVar19 <= auVar46._8_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[2]);
      fStack_12c = (float)((uint)(auVar36._12_4_ * fVar43) & -(uint)(fVar20 <= auVar46._12_4_) |
                          ~-(uint)(fVar20 <= auVar46._12_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[3]);
      auVar45._0_4_ =
           local_138 * fVar41 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
           fStack_12c * fVar44 +
           fStack_134 * fVar40 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fStack_130 * fVar39 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      auVar45._4_4_ =
           local_138 * fVar40 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
           fStack_12c * fVar39 +
           fStack_134 * fVar41 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
           fStack_130 * fVar44 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      auVar45._8_4_ =
           local_138 * fVar39 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
           fStack_12c * fVar40 +
           fStack_134 * fVar44 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
           fStack_130 * fVar41 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      auVar45._12_4_ =
           local_138 * fVar44 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
           fStack_12c * fVar41 +
           fStack_134 * fVar39 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
           fStack_130 * fVar40 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      fVar35 = fVar13;
      if ((fVar13 <= auVar45._12_4_) && (fVar35 = auVar45._12_4_, fVar12 <= auVar45._12_4_)) {
        fVar35 = fVar12;
      }
      fVar35 = acosf(fVar35);
      fVar35 = fVar35 + fVar35;
      iVar30 = iVar30 + 1;
      puVar29 = puVar29 + 6;
      pfVar31 = pfVar31 + 3;
      auVar46 = insertps(auVar45,auVar45,8);
      fVar39 = auVar46._0_4_;
      fVar40 = auVar46._4_4_;
      fVar41 = auVar46._8_4_;
      fVar38 = auVar46._12_4_ * auVar46._12_4_;
      fVar42 = fVar40 * fVar40 + fVar39 * fVar39;
      fVar43 = fVar39 * fVar39 + fVar40 * fVar40;
      fVar44 = fVar38 + fVar41 * fVar41;
      fVar38 = fVar41 * fVar41 + fVar38;
      auVar37._0_4_ = fVar44 + fVar42;
      auVar37._4_4_ = fVar38 + fVar43;
      auVar37._8_4_ = fVar42 + fVar44;
      auVar37._12_4_ = fVar43 + fVar38;
      uVar32 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar37._0_4_);
      uVar33 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar37._4_4_);
      uVar34 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar37._8_4_);
      auVar46 = sqrtps(auVar37,auVar37);
      auVar46 = divps((undefined1  [16])_Var14,auVar46);
      uVar8 = GlobalVectorConstants::Float1000.m128_u32[1];
      uVar9 = GlobalVectorConstants::Float1000.m128_u32[2];
      pfVar28[-2] = fVar35 * (float)((uint)(auVar46._0_4_ * fVar39) & uVar32 |
                                    ~uVar32 & GlobalVectorConstants::Float1000.m128_u32[0]) * fVar47
      ;
      pfVar28[-1] = fVar35 * (float)((uint)(auVar46._4_4_ * fVar40) & uVar33 | ~uVar33 & uVar8) *
                    fVar47;
      *pfVar28 = (float)((uint)(auVar46._8_4_ * fVar41) & uVar34 | ~uVar34 & uVar9) * fVar35 *
                 fVar47;
      pfVar28 = pfVar28 + 3;
      *(ulonglong *)pTVar27 = CONCAT44(fStack_134,local_138);
      *(ulonglong *)&pTVar27->field_0x8 = CONCAT44(fStack_12c,fStack_130);
      pTVar27 = pTVar27 + 1;
    } while (iVar30 < *(int *)&param_1->field_0x14);
  }
  this_00 = Chaos::FClothingSimulationSolver::GetComplexColliders
                      (*(FClothingSimulationSolver **)this,*(int *)&param_1->field_0x18);
  if (this_00 != (FClothComplexColliders *)0x0) {
    Chaos::FClothComplexColliders::KinematicUpdate(this_00,param_1,param_2,fVar48);
  }
  return;
}

// operator() @ 14dbad680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FClothingSimulationSolver::PreSubstep'::__l8::<lambda_2>::operator()
          (void *this,FSolverParticles *param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSubstepKinematicInterpolation> FVar7;
  FClothConstraints *pFVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res18 [4];
  FStatMessage local_68;
  FName local_58;
  code *local_48;
  FStatMessage *local_40;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1976,
               "FClothingSimulationSolver_ParticlePreSubstepKinematicInterpolation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x7b8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1976);
  }
  FVar7 = StatPtr_STAT_ChaosClothParticlePreSubstepKinematicInterpolation;
  if (StatPtr_STAT_ChaosClothParticlePreSubstepKinematicInterpolation ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSubstepKinematicInterpolation>)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_68,
                            "STAT_ChaosClothParticlePreSubstepKinematicInterpolation");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSubstepKinematicInterpolation>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ChaosClothParticlePreSubstepKinematicInterpolation,*pFVar6,
                       L"Chaos Cloth Solver Particle Pre Substep Kinematic Interpolation",
                       "STATGROUP_ChaosCloth","STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,
                       true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                   ,0x7b9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14dbad822;
    }
  }
  bVar4 = false;
  FVar11 = local_58;
LAB_14dbad822:
  pFVar8 = Chaos::FClothingSimulationSolver::GetClothConstraints
                     (*(FClothingSimulationSolver **)this,param_2);
  pFVar8->bSkipSelfCollisionInit = *(char *)((longlong)this + 0xc) == '\0';
  if (bChaos_PreSubstepInterpolation_ISPC_Enabled == false) {
    local_68.StatData.Pad = *(uchar (*) [8])this;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::FClothingSimulationSolver::PreSubstep'::__l8::<lambda_2>::operator()'::__l7::<lambda_1>,void,int>
               ::Call;
    local_68.NameAndInfo.Index.Value = param_2;
    local_68.NameAndInfo.Number = *(uint *)((longlong)this + 8);
    Chaos::PhysicsParallelFor
              (param_3 - param_2,(TFunctionRef<void___cdecl(int)> *)&local_48,
               param_3 - param_2 < Chaos::ClothSolverMinParallelBatchSize);
  }
  else {
    lVar2 = *(longlong *)this;
    PreSubstepInterpolation
              (*(undefined8 *)(lVar2 + 400),*(undefined8 *)(lVar2 + 0x1d8),
               *(undefined8 *)(lVar2 + 0x178),*(undefined8 *)(lVar2 + 0x160),
               *(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1a8),
               *(uint *)((longlong)this + 8),param_2,param_3);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dbadb20

void __thiscall
`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l10::<lambda_2>::operator()
          (void *this,FSolverParticles *param_1,int param_2,int param_3)

{
  FPBDExtremeDeformationConstraints *this_00;
  FClothingSimulationSolver *this_01;
  bool bVar1;
  int iVar2;
  FClothConstraints *pFVar3;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar4;
  longlong lVar5;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_28;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  pFVar3 = Chaos::FClothingSimulationSolver::GetClothConstraints
                     (*(FClothingSimulationSolver **)this,param_2);
  this_00 = (pFVar3->ExtremeDeformationConstraints).Object;
  if (this_00 != (FPBDExtremeDeformationConstraints *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)this + 0x88);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(*(longlong *)this + 0x90) + 0x40;
    }
    else {
      lVar5 = lVar5 + 0x50;
    }
    pTVar4 = TArrayView<Chaos::TVector<float,3>_const_,int>::
             TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(lVar5 + 8));
    local_28.DataPtr = pTVar4->DataPtr;
    local_28.ArrayNum = pTVar4->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    bVar1 = Chaos::Softs::FPBDExtremeDeformationConstraints::IsExtremelyDeformed(this_00,&local_28);
    if (bVar1) {
      this_01 = *(FClothingSimulationSolver **)this;
      iVar2 = Chaos::Softs::FPBDEvolution::GetParticleRangeSize((this_01->PBDEvolution).Ptr,param_2)
      ;
      Chaos::FClothingSimulationSolver::ResetStartPose(this_01,param_2,iVar2);
    }
  }
  return;
}

// operator() @ 14dbade80

void __thiscall
`Chaos::FClothingSimulationSolver::Update'::__l84::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0xa0)) {
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
  Chaos::FClothingSimulationCloth::PostUpdate
            (*(FClothingSimulationCloth **)(*(longlong *)(lVar1 + 0x98) + (longlong)param_1 * 8),
             *(FClothingSimulationSolver **)this);
  return;
}

// operator() @ 14dbadf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l14::<lambda_2>::operator()
          (void *this,FSolverParticles *param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSimulationTransforms> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  bool bVar11;
  FColor_u_0 local_res18 [2];
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FName local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  FSolverParticles *local_38;
  int local_30;
  undefined4 local_2c;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1778,
               "FClothingSimulationSolver_ParticlePreSimulationTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x6f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1778);
  }
  FVar7 = StatPtr_STAT_ChaosClothParticlePreSimulationTransforms;
  if (StatPtr_STAT_ChaosClothParticlePreSimulationTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSimulationTransforms>)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_70,"STAT_ChaosClothParticlePreSimulationTransforms");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothParticlePreSimulationTransforms>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ChaosClothParticlePreSimulationTransforms,*pFVar6,
                       L"Chaos Cloth Solver Particle Pre Simulation Transforms",
                       "STATGROUP_ChaosCloth","STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,
                       true,false,MCR_Invalid);
  }
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar10 = *(FName *)FVar7;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.s.LowPart = FVar9.Value;
        local_78.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_78.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                   ,0x6f3);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar9.Value;
      local_78.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      goto LAB_14dbae0b4;
    }
  }
  bVar4 = false;
  FVar10 = local_60;
LAB_14dbae0b4:
  if (bChaos_PreSimulationTransforms_ISPC_Enabled == false) {
    local_50 = *(undefined8 *)this;
    local_2c = *(undefined4 *)((longlong)this + 0x18);
    local_48 = *(undefined8 *)((longlong)this + 8);
    local_40 = *(undefined8 *)((longlong)this + 0x10);
    local_70.NameAndInfo = (FStatNameAndInfo)&local_50;
    local_70.StatData.Pad =
         (uchar  [8])
         UE::Core::Private::Function::
         TFunctionRefCaller<``Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l14::<lambda_2>::operator()'::__l12::<lambda_1>,void,int>
         ::Call;
    local_38 = param_1;
    local_30 = param_2;
    Chaos::PhysicsParallelFor
              (param_3 - param_2,(TFunctionRef<void___cdecl(int)> *)&local_70,
               param_3 - param_2 < Chaos::ClothSolverMinParallelBatchSize);
  }
  else {
    lVar2 = *(longlong *)this;
    if (*(float *)((longlong)this + 0x18) == __real_7f7fffff) {
      ApplyPreSimulationTransforms
                (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                 param_1->_padding_,*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x1f0),
                 param_1->_padding_,*(undefined8 *)(lVar2 + 0x178),
                 **(undefined8 **)((longlong)this + 8),*(undefined8 *)(lVar2 + 0xd0),
                 *(undefined8 *)((longlong)this + 0x10),*(undefined4 *)(lVar2 + 0x39c),param_2,
                 param_3);
    }
    else {
      ApplyPreSimulationTransformsAndClampVelocity
                (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                 param_1->_padding_,*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x1f0),
                 param_1->_padding_,*(undefined8 *)(lVar2 + 0x178),
                 **(undefined8 **)((longlong)this + 8),*(undefined8 *)(lVar2 + 0xd0),
                 *(undefined8 *)((longlong)this + 0x10),*(undefined4 *)(lVar2 + 0x39c),param_2,
                 param_3,*(float *)((longlong)this + 0x18));
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar10 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_78);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dbae9e0

void __thiscall
`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_3>::operator()
          (void *this,FSolverParticles *param_1,float param_2,float param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<float,3> *pTVar8;
  
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if (param_4 < *(int *)(lVar4 + 0x198)) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar1 = (longlong)param_4 * 0xc;
  lVar4 = *(longlong *)(lVar4 + 400);
  uVar2 = *(undefined8 *)(lVar4 + lVar1);
  uVar3 = *(undefined4 *)(lVar4 + 8 + lVar1);
  pTVar8 = Chaos::Softs::FSolverParticles::P(param_1,param_4);
  *(undefined8 *)pTVar8 = uVar2;
  *(undefined4 *)&pTVar8->field_0x8 = uVar3;
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if (param_4 < *(int *)(lVar4 + 0x1f8)) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x1f0);
  uVar2 = *(undefined8 *)(lVar4 + lVar1);
  uVar3 = *(undefined4 *)(lVar4 + 8 + lVar1);
  pTVar8 = Chaos::TDynamicParticles<float,3>::V((TDynamicParticles<float,3> *)param_1,param_4);
  *(undefined8 *)pTVar8 = uVar2;
  *(undefined4 *)&pTVar8->field_0x8 = uVar3;
  return;
}

// operator() @ 14dbaedf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l15::<lambda_3>::operator()
          (void *this,FSolverCollisionParticles *param_1,int param_2)

{
  undefined8 *puVar1;
  ulong64 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FSolverCollisionParticles *pFVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  TVector<float,3> *pTVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FSolverCollisionParticles *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  __m128 local_a8;
  __m128 local_98;
  __m128 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_f8;
  plVar7 = *(longlong **)((longlong)this + 8);
  lVar8 = *(longlong *)this;
  lVar28 = (longlong)param_2;
  iVar6 = (int)plVar7[1];
  uVar27 = (uint)~param_2 >> 0x1f;
  uVar24 = 0;
  if (param_2 < iVar6) {
    uVar24 = uVar27;
  }
  local_c8 = param_1;
  if (uVar24 == 0) {
    local_d8 = lVar28;
    local_d0 = (longlong)iVar6;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  iVar6 = *(int *)(lVar8 + 0xd8);
  uVar24 = *(uint *)(*plVar7 + lVar28 * 4);
  uVar25 = 0;
  if ((int)uVar24 < iVar6) {
    uVar25 = ~uVar24 >> 0x1f;
  }
  if (uVar25 == 0) {
    local_d8 = (longlong)(int)uVar24;
    local_d0 = (longlong)iVar6;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  lVar9 = *(longlong *)this;
  lVar8 = *(longlong *)(lVar8 + 0xd0);
  iVar6 = *(int *)(lVar9 + 0x240);
  uVar25 = 0;
  if (param_2 < iVar6) {
    uVar25 = uVar27;
  }
  if (uVar25 == 0) {
    local_d8 = lVar28;
    local_d0 = (longlong)iVar6;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  local_a8 = GlobalVectorConstants::Float0001;
  lVar29 = lVar28 * 0x30;
  local_88 = GlobalVectorConstants::Float1110;
  local_98 = GlobalVectorConstants::FloatZero;
  UE::Math::TTransform<float>::Multiply
            ((TTransform<float> *)&local_a8,
             (TTransform<float> *)(*(longlong *)(lVar9 + 0x238) + lVar29),
             (TTransform<float> *)((longlong)(int)uVar24 * 0x30 + lVar8));
  lVar8 = *(longlong *)this;
  uVar16 = local_a8.m128_u64[0];
  uVar17 = local_a8.m128_u64[1];
  uVar19 = local_98.m128_u64[0];
  uVar20 = local_98.m128_u64[1];
  uVar21 = local_88.m128_u64[0];
  uVar22 = local_88.m128_u64[1];
  iVar6 = *(int *)(lVar8 + 0x240);
  uVar24 = 0;
  if (param_2 < iVar6) {
    uVar24 = uVar27;
  }
  if (uVar24 == 0) {
    local_d8 = lVar28;
    local_d0 = (longlong)iVar6;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x238);
  *(ulong64 *)(lVar29 + lVar8) = uVar16;
  ((ulong64 *)(lVar29 + lVar8))[1] = uVar17;
  puVar2 = (ulong64 *)(lVar29 + 0x10 + lVar8);
  *puVar2 = uVar19;
  puVar2[1] = uVar20;
  puVar2 = (ulong64 *)(lVar29 + 0x20 + lVar8);
  *puVar2 = uVar21;
  puVar2[1] = uVar22;
  lVar8 = *(longlong *)this;
  iVar6 = *(int *)(lVar8 + 0x240);
  uVar24 = 0;
  if (param_2 < iVar6) {
    uVar24 = uVar27;
  }
  if (uVar24 == 0) {
    local_d8 = lVar28;
    local_d0 = (longlong)iVar6;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  puVar10 = *(uint **)((longlong)this + 0x10);
  lVar8 = *(longlong *)(lVar8 + 0x238);
  fVar31 = (float)(puVar10[1] ^ __xmm_80000000800000008000000080000000);
  fVar30 = (float)(puVar10[2] ^ __xmm_80000000800000008000000080000000);
  pfVar3 = (float *)(lVar29 + 0x10 + lVar8);
  fVar12 = pfVar3[1];
  fVar13 = pfVar3[2];
  fVar14 = pfVar3[3];
  pfVar4 = (float *)(lVar29 + 0x10 + lVar8);
  *pfVar4 = (float)(*puVar10 ^ __xmm_80000000800000008000000080000000) + *pfVar3;
  pfVar4[1] = fVar31 + fVar12;
  pfVar4[2] = fVar30 + fVar13;
  pfVar4[3] = fVar14 + 0.0;
  lVar8 = *(longlong *)this;
  iVar6 = *(int *)(lVar8 + 0x240);
  uVar24 = 0;
  if (param_2 < iVar6) {
    uVar24 = uVar27;
  }
  if (uVar24 == 0) {
    local_d8 = lVar28;
    local_d0 = (longlong)iVar6;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar18 = local_c8;
  puVar5 = (undefined4 *)(lVar29 + 0x10 + *(longlong *)(lVar8 + 0x238));
  local_c0 = *puVar5;
  uStack_bc = puVar5[1];
  uVar15 = puVar5[2];
  local_b8 = uVar15;
  pTVar26 = Chaos::TParticles<float,3>::X((TParticles<float,3> *)local_c8,param_2);
  *(ulonglong *)pTVar26 = CONCAT44(uStack_bc,local_c0);
  *(undefined4 *)&pTVar26->field_0x8 = uVar15;
  lVar8 = *(longlong *)this;
  iVar6 = *(int *)(lVar8 + 0x240);
  local_d0 = (longlong)iVar6;
  uVar24 = 0;
  if (param_2 < iVar6) {
    uVar24 = uVar27;
  }
  if (uVar24 == 0) {
    local_d8 = lVar28;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  puVar1 = (undefined8 *)(lVar29 + *(longlong *)(lVar8 + 0x238));
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  iVar6 = (int)pFVar18->_padding_;
  local_d0 = (longlong)iVar6;
  uVar24 = 0;
  if (param_2 < iVar6) {
    uVar24 = uVar27;
  }
  if (uVar24 == 0) {
    local_d8 = lVar28;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  puVar1 = (undefined8 *)(pFVar18->_padding_ + lVar28 * 0x10);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  return;
}

// operator() @ 14dbaf2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_4>::operator()
          (void *this,FSolverCollisionParticles *param_1,float param_2,float param_3,int param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __m128 _Var11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  TVector<float,3> *pTVar16;
  TQuat<float> *pTVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  TQuat<float> local_108;
  TQuat<float> local_f8;
  TQuat<float> local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  lVar20 = (longlong)param_4;
  uVar19 = (uint)~param_4 >> 0x1f;
  uVar15 = 0;
  if (param_4 < (int)param_1->_padding_) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar18 = lVar20 * 0x10;
  puVar1 = (undefined8 *)(lVar18 + param_1->_padding_);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  pTVar16 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)param_1,param_4);
  uVar13 = _UNK_150689548;
  uVar12 = ___xmm_000000003f8000003f8000003f800000;
  lVar3 = *(longlong *)this;
  auVar26._12_4_ = 0;
  auVar26._0_12_ = (undefined1  [12])*pTVar16;
  uVar15 = 0;
  if (param_4 < *(int *)(lVar3 + 0x270)) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x268);
  puVar1 = (undefined8 *)(lVar3 + lVar20 * 0x30);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  *(undefined1 (*) [16])(lVar3 + 0x10 + lVar20 * 0x30) = auVar26;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar20 * 0x30);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  lVar3 = *(longlong *)this;
  uVar15 = 0;
  if (param_4 < *(int *)(lVar3 + 600)) {
    uVar15 = uVar19;
  }
  fVar33 = (param_3 - *(float *)(lVar3 + 0x398)) / *(float *)(lVar3 + 0x39c);
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)this;
  pfVar2 = (float *)(*(longlong *)(lVar3 + 0x250) + 0x10 + lVar20 * 0x30);
  fVar34 = *pfVar2;
  fVar35 = pfVar2[1];
  fVar36 = pfVar2[2];
  uVar15 = 0;
  if (param_4 < *(int *)(lVar4 + 0x240)) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar24 = __real_3f800000;
  fVar37 = __real_3f800000 - fVar33;
  pfVar2 = (float *)(*(longlong *)(lVar4 + 0x238) + 0x10 + lVar20 * 0x30);
  fVar38 = *pfVar2 * fVar37 + fVar34 * fVar33;
  fVar39 = pfVar2[1] * fVar37 + fVar35 * fVar33;
  fVar37 = fVar37 * pfVar2[2] + fVar36 * fVar33;
  pTVar16 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)param_1,param_4);
  fVar40 = fVar24 / param_2;
  fVar34 = *(float *)pTVar16;
  fVar35 = *(float *)&pTVar16->field_0x4;
  fVar36 = *(float *)&pTVar16->field_0x8;
  uVar15 = 0;
  if (param_4 < *(int *)&(param_1->MV).field_0x10) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&(param_1->MV).field_0x8;
  *(float *)(lVar3 + lVar20 * 0xc) = (fVar38 - fVar34) * fVar40;
  *(float *)(lVar3 + 4 + lVar20 * 0xc) = (fVar39 - fVar35) * fVar40;
  *(float *)(lVar3 + 8 + lVar20 * 0xc) = (fVar37 - fVar36) * fVar40;
  pTVar16 = Chaos::TParticles<float,3>::X((TParticles<float,3> *)param_1,param_4);
  *(ulonglong *)pTVar16 = CONCAT44(fVar39,fVar38);
  *(float *)&pTVar16->field_0x8 = fVar37;
  lVar3 = *(longlong *)this;
  uVar15 = 0;
  if (param_4 < *(int *)(lVar3 + 600)) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)this;
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x250) + lVar20 * 0x30);
  local_108._0_8_ = *puVar1;
  local_108._8_8_ = puVar1[1];
  uVar15 = 0;
  if (param_4 < *(int *)(lVar4 + 0x240)) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x238) + lVar20 * 0x30);
  local_f8._0_8_ = *puVar1;
  local_f8._8_8_ = puVar1[1];
  pTVar17 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_e8,&local_f8,&local_108,fVar33);
  fVar33 = pTVar17->X;
  fVar34 = pTVar17->Y;
  fVar35 = pTVar17->Z;
  fVar36 = pTVar17->W;
  uVar15 = 0;
  if (param_4 < (int)param_1->_padding_) {
    uVar15 = uVar19;
  }
  fVar37 = fVar34 * fVar34 + fVar33 * fVar33;
  fVar38 = fVar33 * fVar33 + fVar34 * fVar34;
  fVar39 = fVar36 * fVar36 + fVar35 * fVar35;
  fVar28 = fVar35 * fVar35 + fVar36 * fVar36;
  auVar25._0_4_ = fVar39 + fVar37;
  auVar25._4_4_ = fVar28 + fVar38;
  auVar25._8_4_ = fVar37 + fVar39;
  auVar25._12_4_ = fVar38 + fVar28;
  auVar26 = sqrtps(auVar25,auVar25);
  auVar26 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar26);
  fVar33 = (float)((uint)(auVar26._0_4_ * fVar33) &
                   -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar25._0_4_) |
                  ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar25._0_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[0]);
  fVar34 = (float)((uint)(auVar26._4_4_ * fVar34) & -(uint)(_UNK_1506895d4 <= auVar25._4_4_) |
                  ~-(uint)(_UNK_1506895d4 <= auVar25._4_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[1]);
  fVar35 = (float)((uint)(auVar26._8_4_ * fVar35) & -(uint)(_UNK_1506895d8 <= auVar25._8_4_) |
                  ~-(uint)(_UNK_1506895d8 <= auVar25._8_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[2]);
  fVar36 = (float)((uint)(auVar26._12_4_ * fVar36) & -(uint)(_UNK_1506895dc <= auVar25._12_4_) |
                  ~-(uint)(_UNK_1506895dc <= auVar25._12_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[3]);
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  _Var11 = GlobalVectorConstants::FloatOne;
  pfVar2 = (float *)(param_1->_padding_ + lVar18);
  local_d8 = *pfVar2;
  fStack_d4 = pfVar2[1];
  fStack_d0 = pfVar2[2];
  fStack_cc = pfVar2[3];
  fVar37 = local_d8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar38 = fStack_d4 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar39 = fStack_d0 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar28 = fStack_cc * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  auVar30._0_4_ =
       fVar33 * fVar28 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar36 * fVar37 +
       fVar34 * fVar39 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar35 * fVar38 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  auVar30._4_4_ =
       fVar33 * fVar39 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar36 * fVar38 +
       fVar34 * fVar28 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
       fVar35 * fVar37 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  auVar30._8_4_ =
       fVar33 * fVar38 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar36 * fVar39 +
       fVar34 * fVar37 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
       fVar35 * fVar28 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  auVar30._12_4_ =
       fVar33 * fVar37 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar36 * fVar28 +
       fVar34 * fVar38 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
       fVar35 * fVar39 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  fVar37 = __real_bf800000;
  if ((__real_bf800000 <= auVar30._12_4_) && (fVar37 = auVar30._12_4_, fVar24 <= auVar30._12_4_)) {
    fVar37 = fVar24;
  }
  fVar24 = acosf(fVar37);
  fVar24 = fVar24 + fVar24;
  uVar15 = 0;
  if (param_4 < *(int *)&(param_1->MW).field_0x10) {
    uVar15 = uVar19;
  }
  auVar26 = insertps(auVar30,auVar30,8);
  fVar29 = auVar26._0_4_;
  fVar31 = auVar26._4_4_;
  fVar32 = auVar26._8_4_;
  fVar37 = auVar26._12_4_ * auVar26._12_4_;
  fVar38 = fVar31 * fVar31 + fVar29 * fVar29;
  fVar39 = fVar29 * fVar29 + fVar31 * fVar31;
  fVar28 = fVar37 + fVar32 * fVar32;
  fVar37 = fVar32 * fVar32 + fVar37;
  auVar27._0_4_ = fVar28 + fVar38;
  auVar27._4_4_ = fVar37 + fVar39;
  auVar27._8_4_ = fVar38 + fVar28;
  auVar27._12_4_ = fVar39 + fVar37;
  uVar21 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar27._0_4_);
  uVar22 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar27._4_4_);
  uVar23 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar27._8_4_);
  auVar26 = sqrtps(auVar27,auVar27);
  auVar26 = divps((undefined1  [16])_Var11,auVar26);
  uVar6 = GlobalVectorConstants::Float1000.m128_u32[0];
  uVar7 = GlobalVectorConstants::Float1000.m128_u32[1];
  uVar8 = GlobalVectorConstants::Float1000.m128_u32[2];
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&(param_1->MW).field_0x8;
  *(float *)(lVar3 + lVar20 * 0xc) =
       (float)((uint)(auVar26._0_4_ * fVar29) & uVar21 | ~uVar21 & uVar6) * fVar24 * fVar40;
  *(float *)(lVar3 + 4 + lVar20 * 0xc) =
       (float)((uint)(auVar26._4_4_ * fVar31) & uVar22 | ~uVar22 & uVar7) * fVar24 * fVar40;
  *(float *)(lVar3 + 8 + lVar20 * 0xc) =
       (float)((uint)(auVar26._8_4_ * fVar32) & uVar23 | ~uVar23 & uVar8) * fVar24 * fVar40;
  uVar15 = 0;
  if (param_4 < (int)param_1->_padding_) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar2 = (float *)(param_1->_padding_ + lVar18);
  *pfVar2 = fVar33;
  pfVar2[1] = fVar34;
  pfVar2[2] = fVar35;
  pfVar2[3] = fVar36;
  return;
}

// AddCloth @ 14dbb8aa0

void __thiscall
Chaos::FClothingSimulationSolver::AddCloth
          (FClothingSimulationSolver *this,FClothingSimulationCloth *param_1)

{
  int *piVar1;
  TArray<Chaos::FClothingSimulationCloth_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FPBDEvolution *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  
  if ((param_1 == (FClothingSimulationCloth *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                         ,0x196,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = &this->Cloths;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->Cloths).ArrayNum;
  pFVar8 = pFVar3;
  do {
    if (pFVar8 == pFVar3 + (longlong)iVar7 * 8) {
LAB_14dbb8b20:
      piVar1 = &(this->Cloths).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
        (this->Cloths).ArrayNum = iVar7;
      }
      iVar7 = (this->Cloths).ArrayNum;
      (this->Cloths).ArrayNum = iVar7 + 1;
      iVar9 = 0;
      *(FClothingSimulationCloth **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           param_1;
      pFVar4 = (this->PBDEvolution).Ptr;
      iVar7 = this->CollisionParticlesOffset;
      if (pFVar4 != (FPBDEvolution *)0x0) {
        Softs::FPBDEvolution::ResetCollisionParticles(pFVar4,iVar7);
        this->CollisionParticlesOffset = iVar7;
        this->CollisionParticlesSize = 0;
      }
      FClothingSimulationCloth::Add(param_1,this);
      FClothingSimulationCloth::PreUpdate(param_1,this);
      FClothingSimulationCloth::Update(param_1,this);
      pFVar4 = (this->PBDEvolution).Ptr;
      if (pFVar4 != (FPBDEvolution *)0x0) {
        iVar9 = (int)(pFVar4->MCollisionParticles)._padding_;
      }
      this->CollisionParticlesOffset = iVar9;
      return;
    }
    if (*(FClothingSimulationCloth **)pFVar8 == param_1) {
      if ((int)((longlong)pFVar8 - (longlong)pFVar3 >> 3) != -1) {
        return;
      }
      goto LAB_14dbb8b20;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// AddCollisionParticles @ 14dbb8d30

int __thiscall
Chaos::FClothingSimulationSolver::AddCollisionParticles
          (FClothingSimulationSolver *this,int param_1,uint param_2,int param_3)

{
  TUniquePtr<Chaos::Softs::FEvolution,TDefaultDelete<Chaos::Softs::FEvolution>_> *pTVar1;
  uint *puVar2;
  longlong lVar3;
  FEvolution *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  FPBDEvolution *this_00;
  code *pcVar8;
  TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FSolverCollisionParticlesRange *pFVar14;
  FClothComplexColliders *this_01;
  FClothComplexColliders *pFVar15;
  TRotation<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  longlong lVar23;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  int local_68 [2];
  int local_60 [2];
  TPairInitializer<int_&,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_&&>
  local_58;
  int *local_48;
  TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>
  **local_40;
  
  pTVar1 = &this->Evolution;
  lVar23 = (longlong)(int)param_2;
  local_68[0] = -1;
  pFVar4 = pTVar1->Ptr;
  local_res10 = param_1;
  local_res18 = param_2;
  if (pFVar4 == (FEvolution *)0x0) {
    iVar12 = this->CollisionParticlesOffset + this->CollisionParticlesSize;
    if (param_3 == iVar12) {
      this_00 = (this->PBDEvolution).Ptr;
      this->CollisionParticlesSize = this->CollisionParticlesSize + param_1;
      if ((iVar12 + param_1 <= (int)(this_00->MCollisionParticles)._padding_) &&
         (iVar12 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_00,param_3),
         param_1 == iVar12)) {
        return param_3;
      }
      Softs::FPBDEvolution::ResetCollisionParticles((this->PBDEvolution).Ptr,param_3);
    }
    if (param_1 != 0) {
      local_68[0] = Softs::FPBDEvolution::AddCollisionParticleRange
                              ((this->PBDEvolution).Ptr,param_1,param_2,false);
    }
  }
  else {
    if ((-1 < param_3) && (param_3 < *(int *)&(pFVar4->CollisionRanges).ParticleRanges.field_0x10))
    {
      pFVar14 = Softs::FEvolution::GetCollisionParticleRange(pFVar4,param_3);
      if (*(int *)&pFVar14->field_0x14 == param_1) {
        return param_3;
      }
      Softs::FEvolution::RemoveCollisionParticleRange(pTVar1->Ptr,param_3);
      local_60[0] = param_3;
      if (*(int *)&(this->ComplexColliders).field_0x8 !=
          *(int *)&(this->ComplexColliders).field_0x34) {
        TSet<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,0>,FDefaultSetAllocator>
                           *)&this->ComplexColliders,param_3,local_60);
      }
      pFVar4 = pTVar1->Ptr;
      uVar11 = 0;
      if ((int)param_2 < *(int *)&(pFVar4->Groups).SoftBodies.field_0x10) {
        uVar11 = ~param_2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      lVar5 = *(longlong *)&(pFVar4->Groups).SoftBodies.field_0x8;
      puVar22 = *(uint **)(lVar5 + lVar23 * 0x10);
      iVar12 = *(int *)(lVar5 + 8 + lVar23 * 0x10);
      puVar2 = puVar22 + iVar12;
      while( true ) {
        if (*(int *)(lVar5 + 8 + lVar23 * 0x10) != iVar12) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar22 == puVar2) break;
        if (*(int *)&(this->ClothsConstraints).field_0x8 ==
            *(int *)&(this->ClothsConstraints).field_0x34) {
LAB_14dbb8ec8:
          puVar22 = puVar22 + 1;
        }
        else {
          puVar6 = *(undefined1 **)&(this->ClothsConstraints).field_0x40;
          puVar21 = &(this->ClothsConstraints).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar21 = puVar6;
          }
          iVar13 = *(int *)(puVar21 +
                           (ulonglong)
                           (*(int *)&(this->ClothsConstraints).field_0x48 - 1U & *puVar22) * 4);
          if (iVar13 == -1) goto LAB_14dbb8ec8;
          do {
            lVar3 = *(longlong *)&this->ClothsConstraints + (longlong)iVar13 * 0x18;
            if (*(uint *)(*(longlong *)&this->ClothsConstraints + (longlong)iVar13 * 0x18) ==
                *puVar22) {
              puVar19 = (undefined8 *)(lVar3 + 8);
              if (lVar3 == 0) {
                puVar19 = (undefined8 *)0x0;
              }
              if (puVar19 != (undefined8 *)0x0) {
                FClothConstraints::OnCollisionRangeRemoved((FClothConstraints *)*puVar19,param_3);
              }
              goto LAB_14dbb8ec8;
            }
            iVar13 = *(int *)(lVar3 + 0x10);
          } while (iVar13 != -1);
          puVar22 = puVar22 + 1;
        }
      }
    }
    param_1 = local_res10;
    pFVar15 = (FClothComplexColliders *)0x0;
    if (local_res10 != 0) {
      local_68[0] = Softs::FEvolution::AddCollisionParticleRange
                              ((this->Evolution).Ptr,local_res18,local_res10,false);
      pFVar4 = (this->Evolution).Ptr;
      this_01 = ::operator_new(0x128);
      if (this_01 != (FClothComplexColliders *)0x0) {
        pFVar15 = FClothComplexColliders::FClothComplexColliders(this_01,pFVar4,local_68[0]);
      }
      local_48 = local_68;
      local_40 = &local_58.Value;
      local_58.Value =
           (TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>
            *)pFVar15;
      TSet<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_&,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_&&>_>
                ((TSet<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,0>,FDefaultSetAllocator>
                  *)&this->ComplexColliders,&local_58,(bool *)&local_48);
      pTVar9 = local_58.Value;
      if ((FClothComplexColliders *)local_58.Value != (FClothComplexColliders *)0x0) {
        DestructItems<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int>
                  ((FSkinnedTriangleMeshData *)
                   (((TArray<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,TSizedDefaultAllocator<32>_>
                      *)((longlong)local_58.Value + 0x110))->AllocatorInstance).Data,
                   ((TArray<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,TSizedDefaultAllocator<32>_>
                     *)((longlong)local_58.Value + 0x110))->ArrayNum);
        pFVar7 = (((TArray<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,TSizedDefaultAllocator<32>_>
                    *)((longlong)pTVar9 + 0x110))->AllocatorInstance).Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        DestructItems<Chaos::FClothComplexColliders::FMLLevelSetData,int>
                  ((FMLLevelSetData *)
                   (((TArray<Chaos::FClothComplexColliders::FMLLevelSetData,TSizedDefaultAllocator<32>_>
                      *)((longlong)pTVar9 + 0x100))->AllocatorInstance).Data,
                   ((TArray<Chaos::FClothComplexColliders::FMLLevelSetData,TSizedDefaultAllocator<32>_>
                     *)((longlong)pTVar9 + 0x100))->ArrayNum);
        pFVar7 = (((TArray<Chaos::FClothComplexColliders::FMLLevelSetData,TSizedDefaultAllocator<32>_>
                    *)((longlong)pTVar9 + 0x100))->AllocatorInstance).Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        DestructItems<Chaos::FClothComplexColliders::FSkinnedLevelSetData,int>
                  ((FSkinnedLevelSetData *)
                   (((TArray<Chaos::FClothComplexColliders::FSkinnedLevelSetData,TSizedDefaultAllocator<32>_>
                      *)((longlong)pTVar9 + 0xf0))->AllocatorInstance).Data,
                   ((TArray<Chaos::FClothComplexColliders::FSkinnedLevelSetData,TSizedDefaultAllocator<32>_>
                     *)((longlong)pTVar9 + 0xf0))->ArrayNum);
        pFVar7 = (((TArray<Chaos::FClothComplexColliders::FSkinnedLevelSetData,TSizedDefaultAllocator<32>_>
                    *)((longlong)pTVar9 + 0xf0))->AllocatorInstance).Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        FClothComplexColliders::FCollisionSubBones::~FCollisionSubBones
                  ((FCollisionSubBones *)((longlong)pTVar9 + 0x10));
        ::operator_delete(pTVar9,0x128);
      }
    }
  }
  if (local_68[0] != -1) {
    pTVar16 = GetCollisionParticleRs(this,local_68[0]);
    pTVar17 = GetCollisionParticleXs(this,local_68[0]);
    lVar23 = (longlong)param_1;
    if (0 < param_1) {
      puVar18 = (undefined4 *)&pTVar17->field_0x8;
      puVar20 = (undefined4 *)&pTVar16->field_0x8;
      do {
        *(undefined8 *)(puVar18 + -2) = 0;
        *puVar18 = 0;
        puVar18 = puVar18 + 3;
        *(undefined8 *)(puVar20 + -2) = 0;
        *puVar20 = 0;
        puVar20[1] = 0x3f800000;
        lVar23 = lVar23 + -1;
        puVar20 = puVar20 + 4;
      } while (lVar23 != 0);
    }
    EnableCollisionParticles(this,local_68[0],false);
  }
  return local_68[0];
}

// AddExternalForces @ 14dbb9120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClothingSimulationSolver::AddExternalForces
          (FClothingSimulationSolver *this,uint param_1,bool param_2)

{
  int iVar1;
  longlong lVar2;
  FPBDEvolution *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  FClothingSimulationSolver *local_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined6 uStack_14e;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  code *local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar21 = (longlong)(int)param_1;
  if ((this->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
    iVar1 = *(int *)&(this->FictitiousAngularVelocities).field_0x10;
    uVar20 = ~param_1 >> 0x1f;
    uVar22 = 0;
    if ((int)param_1 < iVar1) {
      uVar22 = uVar20;
    }
    if (uVar22 == 0) {
      local_168 = lVar21;
      local_160 = (longlong)iVar1;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = *(longlong *)&(this->FictitiousAngularVelocities).field_0x8;
    iVar1 = *(int *)&(this->ReferenceSpaceLocations).field_0x10;
    uVar22 = 0;
    if ((int)param_1 < iVar1) {
      uVar22 = uVar20;
    }
    dVar11 = (double)*(float *)(lVar2 + lVar21 * 0xc);
    uVar24 = SUB84(dVar11,0);
    uVar25 = (uint)((ulonglong)dVar11 >> 0x20);
    dVar10 = (double)*(float *)(lVar2 + 4 + lVar21 * 0xc);
    dVar11 = (double)*(float *)(lVar2 + 8 + lVar21 * 0xc);
    if (uVar22 == 0) {
      local_168 = lVar21;
      local_160 = (longlong)iVar1;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = *(longlong *)&(this->ReferenceSpaceLocations).field_0x8;
    dVar12 = (double)*(float *)(lVar2 + lVar21 * 0xc);
    dVar13 = (double)*(float *)(lVar2 + 4 + lVar21 * 0xc);
    uVar26 = SUB84(dVar13,0);
    uVar27 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar13 = (double)*(float *)(lVar2 + 8 + lVar21 * 0xc);
    if (((__real_3f1a36e2e0000000 <=
          (double)CONCAT44(uVar25 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
          (double)CONCAT44(uVar25 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
          __real_3f1a36e2e0000000) ||
        (uVar22 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar23 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
        (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000)) ||
       (uVar22 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar23 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
       (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000)) {
      uStack_150 = 1;
    }
    else {
      uStack_150 = 0;
    }
    dVar8 = (double)(*(float *)&this->WindVelocity * __real_41c80000);
    local_f8 = (code *)0x0;
    dVar9 = (double)(*(float *)&(this->WindVelocity).field_0x8 * __real_41c80000);
    dVar7 = (double)(*(float *)&(this->WindVelocity).field_0x4 * __real_41c80000);
    local_158 = this;
    uStack_14f = param_2;
    uStack_d0 = FMemory::Malloc(0x60,8);
    *uStack_d0 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Chaos::FClothingSimulationSolver::AddExternalForces'::`5'::<lambda_1>,0,1>
                  ::_vftable_;
    uStack_d0[1] = (longlong)local_158;
    uStack_d0[2] = CONCAT62(uStack_14e,CONCAT11(uStack_14f,uStack_150));
    uStack_d0[3] = (longlong)dVar8;
    uStack_d0[4] = (longlong)dVar7;
    auVar5._8_4_ = uVar24;
    auVar5._0_8_ = dVar9;
    auVar5._12_4_ = uVar25;
    *(undefined1 (*) [16])(uStack_d0 + 5) = auVar5;
    local_138._8_4_ = uVar24;
    local_138._0_8_ = dVar9;
    local_138._12_4_ = uVar25;
    uStack_d0[7] = (longlong)dVar10;
    uStack_d0[8] = (longlong)dVar11;
    auVar6._8_4_ = uVar26;
    auVar6._0_8_ = dVar12;
    auVar6._12_4_ = uVar27;
    *(undefined1 (*) [16])(uStack_d0 + 9) = auVar6;
    uStack_d0[0xb] = (longlong)dVar13;
    pFVar3 = (this->PBDEvolution).Ptr;
    if (uStack_d0 + 1 != (undefined8 *)0x0) {
      local_f8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClothingSimulationSolver::AddExternalForces'::__l5::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float,int>
                 ::Call;
    }
    iVar1 = *(int *)&(pFVar3->MGroupForceRules).field_0x10;
    local_118._8_4_ = uVar26;
    local_118._0_8_ = dVar12;
    local_118._12_4_ = uVar27;
    uVar22 = 0;
    if ((int)param_1 < iVar1) {
      uVar22 = uVar20;
    }
    local_148 = dVar8;
    dStack_140 = dVar7;
    local_128 = dVar10;
    dStack_120 = dVar11;
    local_108 = dVar13;
    if (uVar22 == 0) {
      local_168 = lVar21;
      local_160 = (longlong)iVar1;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar19 = (longlong *)(lVar21 * 0x30 + *(longlong *)&(pFVar3->MGroupForceRules).field_0x8);
    lVar2 = *plVar19;
    lVar15 = plVar19[1];
    lVar16 = plVar19[2];
    lVar17 = plVar19[3];
    lVar21 = plVar19[4];
    plVar14 = (longlong *)plVar19[5];
    *plVar19 = (longlong)local_f8;
    plVar19[1] = lStack_f0;
    plVar19[2] = CONCAT44(uStack_e4,local_e8);
    plVar19[3] = CONCAT44(uStack_dc,uStack_e0);
    *(undefined4 *)(plVar19 + 4) = (undefined4)local_d8;
    *(undefined4 *)((longlong)plVar19 + 0x24) = local_d8._4_4_;
    *(undefined4 *)(plVar19 + 5) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)plVar19 + 0x2c) = uStack_d0._4_4_;
    local_e8 = (int)lVar16;
    uStack_e4 = *(undefined4 *)((longlong)plVar19 + 0x14);
    uStack_e0 = (int)lVar17;
    uStack_dc = *(undefined4 *)((longlong)plVar19 + 0x1c);
    local_d8 = lVar21;
    uStack_d0 = plVar14;
    if (lVar2 != 0) {
      plVar19 = (longlong *)&local_e8;
      if (plVar14 != (longlong *)0x0) {
        plVar19 = plVar14;
      }
      local_f8 = (code *)lVar2;
      lStack_f0 = lVar15;
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  return;
}

// AddParticles @ 14dbb95e0

int __thiscall
Chaos::FClothingSimulationSolver::AddParticles
          (FClothingSimulationSolver *this,int param_1,uint param_2)

{
  TMap<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>_>
  *this_00;
  longlong lVar1;
  FEvolution *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FClothConstraints *pFVar6;
  FClothConstraints *pFVar7;
  TDefaultDelete<Chaos::FClothConstraints> *this_01;
  undefined1 *puVar8;
  uint local_res10 [2];
  int local_res20;
  undefined1 local_58 [8];
  FClothConstraints *local_50;
  FClothConstraints *local_48;
  uint *local_40;
  FClothConstraints **local_38;
  uint *local_30;
  FClothConstraints **local_28;
  
  if (param_1 == 0) {
    return -1;
  }
  pFVar2 = (this->Evolution).Ptr;
  if (pFVar2 == (FEvolution *)0x0) {
    local_res10[0] =
         Softs::FPBDEvolution::AddParticleRange((this->PBDEvolution).Ptr,param_1,param_2,false);
  }
  else {
    local_res10[0] = Softs::FEvolution::AddSoftBody(pFVar2,param_2,param_1,false);
  }
  this_00 = &this->ClothsConstraints;
  pFVar7 = (FClothConstraints *)0x0;
  if (*(int *)&(this->ClothsConstraints).field_0x8 != *(int *)&(this->ClothsConstraints).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->ClothsConstraints).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ClothsConstraints).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ClothsConstraints).field_0x48 - 1U & local_res10[0])
                              * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) == local_res10[0])
        {
          pFVar6 = (FClothConstraints *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar6 = pFVar7;
          }
          if ((pFVar6 != (FClothConstraints *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ClothsConstraints.Find(ParticleRangeId)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                                 ,0x245,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  if ((this->Evolution).Ptr == (FEvolution *)0x0) {
    if (((this->PBDEvolution).Ptr == (FPBDEvolution *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PBDEvolution",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                           ,0x25a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    pFVar6 = ::operator_new(0x2a8);
    if (pFVar6 != (FClothConstraints *)0x0) {
      pFVar7 = FClothConstraints::FClothConstraints(pFVar6);
    }
    local_30 = local_res10;
    local_28 = &local_48;
    local_48 = pFVar7;
    TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<int_const_&,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_&&>_>
              ((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<int_const_&,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_&&>
                *)local_58,(bool *)&local_30);
    lVar1 = *(longlong *)
             (*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)local_58._0_4_ * 0x18);
    *(FPBDEvolution **)(lVar1 + 0x208) = (this->PBDEvolution).Ptr;
    *(undefined1 **)(lVar1 + 0x210) = &(this->InterpolatedAnimationPositions).field_0x8;
    *(undefined1 **)(lVar1 + 0x218) = &(this->InterpolatedAnimationNormals).field_0x8;
    *(uint *)(lVar1 + 0x228) = local_res10[0];
    *(uint *)(lVar1 + 0x22c) = local_res10[0];
    this_01 = (TDefaultDelete<Chaos::FClothConstraints> *)&local_48;
    *(undefined1 **)(lVar1 + 0x220) = &(this->AnimationVelocities).field_0x8;
    *(undefined8 *)(lVar1 + 0x200) = 0;
    *(int *)(lVar1 + 0x230) = param_1;
    pFVar7 = local_48;
  }
  else {
    pFVar6 = ::operator_new(0x2a8);
    if (pFVar6 != (FClothConstraints *)0x0) {
      pFVar7 = FClothConstraints::FClothConstraints(pFVar6);
    }
    local_40 = local_res10;
    local_38 = &local_50;
    local_50 = pFVar7;
    TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<int_const_&,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_&&>_>
              ((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<int_const_&,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_&&>
                *)&local_res20,(bool *)&local_40);
    lVar1 = *(longlong *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)local_res20 * 0x18);
    pFVar2 = (this->Evolution).Ptr;
    *(FPerSolverFieldSystem **)(lVar1 + 0x248) = &this->PerSolverField;
    *(undefined1 **)(lVar1 + 0x210) = &(this->InterpolatedAnimationPositions).field_0x8;
    *(undefined1 **)(lVar1 + 0x218) = &(this->InterpolatedAnimationNormals).field_0x8;
    *(undefined1 **)(lVar1 + 0x220) = &(this->AnimationVelocities).field_0x8;
    *(undefined1 **)(lVar1 + 0x250) = &(this->Normals).field_0x8;
    *(undefined1 **)(lVar1 + 600) = &(this->LastSubframeCollisionTransformsCCD).field_0x8;
    *(undefined1 **)(lVar1 + 0x260) = &(this->Collided).field_0x8;
    *(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **)(lVar1 + 0x268) =
         &this->CollisionContacts;
    *(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **)(lVar1 + 0x270) =
         &this->CollisionNormals;
    *(TArray<float,TSizedDefaultAllocator<32>_> **)(lVar1 + 0x278) = &this->CollisionPhis;
    *(undefined8 *)(lVar1 + 0x208) = 0;
    *(FEvolution **)(lVar1 + 0x200) = pFVar2;
    *(undefined4 *)(lVar1 + 0x228) = 0;
    *(uint *)(lVar1 + 0x22c) = local_res10[0];
    iVar5 = Softs::FEvolution::GetSoftBodyParticleNum(pFVar2,local_res10[0]);
    *(int *)(lVar1 + 0x230) = iVar5;
    this_01 = (TDefaultDelete<Chaos::FClothConstraints> *)&local_50;
    pFVar7 = local_50;
  }
  TDefaultDelete<Chaos::FClothConstraints>::operator()(this_01,pFVar7);
  EnableParticles(this,local_res10[0],false);
  return local_res10[0];
}

// ApplyPreSimulationTransforms @ 14dbbe320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms(FClothingSimulationSolver *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FEvolution *this_00;
  FPBDEvolution *pFVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothCollisionPreSimulationTransforms> FVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar17;
  FName FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  double dVar23;
  float fVar24;
  undefined1 local_148;
  undefined1 local_147 [7];
  undefined1 local_140 [8];
  float local_138;
  FColor_u_0 local_130 [2];
  uint local_128 [2];
  FName local_120;
  FName local_118;
  LARGE_INTEGER local_108;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_100;
  FStatMessage local_f0;
  code *local_e0;
  FClothingSimulationSolver **local_d8;
  code *local_d0;
  FClothingSimulationSolver **local_c8;
  FClothingSimulationSolver *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  FClothingSimulationSolver *local_a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_a0;
  undefined1 *local_98;
  float local_90;
  FClothingSimulationSolver *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  float local_70;
  FName local_68 [5];
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1659,
               "FClothingSimulationSolver_ApplyPreSimulationTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x67b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1659);
  }
  dVar23 = this->OldLocalSpaceScale - this->LocalSpaceScale;
  if ((__real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsNearlyEqual(OldLocalSpaceScale, LocalSpaceScale)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                          ,0x67c,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar23 = __real_3ff0000000000000 / this->LocalSpaceScale;
  local_140._0_4_ =
       (undefined4)
       ((*(double *)&this->LocalSpaceLocation - *(double *)&this->OldLocalSpaceLocation) * dVar23);
  local_140._4_4_ =
       (undefined4)
       ((*(double *)&(this->LocalSpaceLocation).field_0x8 -
        *(double *)&(this->OldLocalSpaceLocation).field_0x8) * dVar23);
  local_138 = (float)((*(double *)&(this->LocalSpaceLocation).field_0x10 -
                      *(double *)&(this->OldLocalSpaceLocation).field_0x10) * dVar23);
  fVar24 = __real_7f7fffff;
  if (0.0 < ClothSolverMaxVelocity) {
    fVar24 = ClothSolverMaxVelocity * ClothSolverMaxVelocity;
  }
  this_00 = (this->Evolution).Ptr;
  if (this_00 != (FEvolution *)0x0) {
    Softs::FEvolution::GetActiveGroupsArray(this_00,&local_100);
    local_a0 = &local_100;
    local_98 = local_140;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l12::<lambda_1>,void,int>
               ::Call;
    local_d8 = &local_a8;
    local_a8 = this;
    local_90 = fVar24;
    PhysicsParallelFor(local_100.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_e0,
                       bClothSolverParallelClothPreUpdate == false);
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    goto LAB_14dbbe86c;
  }
  pFVar5 = (this->PBDEvolution).Ptr;
  local_80 = &(pFVar5->MParticleGroupIds).field_0x8;
  local_78 = local_140;
  local_c8 = &local_88;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l14::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int,int>
             ::Call;
  local_88 = this;
  local_70 = fVar24;
  TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
            (&pFVar5->MParticlesActiveView,
             (TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)&local_d0,
             bClothSolverParallelClothPreUpdate == false);
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1861,
               "FClothingSimulationSolver_CollisionPreSimulationTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x745);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1861);
  }
  FVar16 = StatPtr_STAT_ChaosClothCollisionPreSimulationTransforms;
  if (StatPtr_STAT_ChaosClothCollisionPreSimulationTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothCollisionPreSimulationTransforms>)0x0) {
    pFVar15 = ::FName::FName(local_68,"STAT_ChaosClothCollisionPreSimulationTransforms");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothCollisionPreSimulationTransforms>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosClothCollisionPreSimulationTransforms,*pFVar15,
                        L"Chaos Cloth Solver Collision Pre Simulation Transforms",
                        "STATGROUP_ChaosCloth","STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,
                        true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_14dbbe6da:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    FVar18 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_120.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                   ,0x746);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dbbe6da;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar11 = true;
  }
  pFVar5 = (this->PBDEvolution).Ptr;
  pFVar19 = (pFVar5->MCollisionParticlesActiveView).Ranges.AllocatorInstance.Data;
  local_b8 = &(pFVar5->MCollisionParticleGroupIds).field_0x8;
  iVar3 = (pFVar5->MCollisionParticlesActiveView).Ranges.ArrayNum;
  local_b0 = local_140;
  pFVar2 = pFVar19 + (longlong)iVar3 * 4;
  uVar21 = 0;
  local_c0 = this;
  while( true ) {
    if ((pFVar5->MCollisionParticlesActiveView).Ranges.ArrayNum != iVar3) {
      local_148 = 0;
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_148);
    }
    if (pFVar19 == pFVar2) break;
    uVar14 = *(uint *)pFVar19;
    uVar20 = uVar14 >> 1;
    if ((((uVar14 & 1) != 0) && (uVar14 >> 1 != 0)) && (uVar21 < uVar20)) {
      do {
        local_128[0] = uVar21;
        UE::Core::Private::Function::
        TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l15::<lambda_3>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
        ::Call(&local_c0,(pFVar5->MCollisionParticlesActiveView).Items,(int *)local_128);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)uVar20);
    }
    pFVar19 = pFVar19 + 4;
    uVar21 = uVar20;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_f0.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_108);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_108.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_108.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_108.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_108.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_f0);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14dbbe86c:
  pFVar19 = (this->Cloths).AllocatorInstance.Data;
  iVar3 = (this->Cloths).ArrayNum;
  pFVar2 = pFVar19 + (longlong)iVar3 * 8;
  do {
    if ((this->Cloths).ArrayNum != iVar3) {
      local_147[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_147);
    }
    if (pFVar19 == pFVar2) {
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    lVar6 = *(longlong *)pFVar19;
    if (lVar6 != 0) {
      iVar4 = *(int *)(lVar6 + 0x20);
      if ((-1 < iVar4) && (iVar4 < *(int *)&(this->PreSimulationTransforms).field_0x10)) {
        fVar24 = this->DeltaTime;
        if ((iVar4 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)&(this->PreSimulationTransforms).field_0x8;
        pTVar17 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                          *)(lVar6 + 0x100),this);
        if ((pTVar17 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar21 = *(uint *)&pTVar17->field_0x8;
        if (uVar21 != 0xffffffff) {
          uVar14 = 0;
          if ((int)uVar21 < *(int *)(lVar6 + 0xf8)) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FClothingSimulationCloth::FLODData::ApplyPreSimulationTransformsToAccessoryMeshes
                    (*(FLODData **)(*(longlong *)(lVar6 + 0xf0) + (longlong)(int)uVar21 * 8),this,
                     (TVector<float,3> *)local_140,
                     (TRigidTransform<float,3> *)((longlong)iVar4 * 0x30 + lVar7),fVar24);
        }
      }
    }
    pFVar19 = pFVar19 + 8;
  } while( true );
}

// CalculateBounds @ 14dbbf630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
Chaos::FClothingSimulationSolver::CalculateBounds
          (FClothingSimulationSolver *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FEvolution *pFVar6;
  FPBDEvolution *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  TStatId TVar14;
  TBoxSphereBounds<double,double> *pTVar15;
  byte bVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  TVector<float,3> *pTVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *this_00;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *pTVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  longlong *plVar28;
  uint uVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 local_res20 [8];
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_380;
  undefined1 local_37f;
  undefined1 local_37e [6];
  FName local_378;
  byte local_370;
  float local_368;
  undefined1 local_364 [4];
  float local_360;
  uint local_35c;
  FScriptContainerElement *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_328;
  FScriptContainerElement *local_318;
  undefined8 local_310;
  float local_308;
  undefined8 local_300;
  float local_2f8;
  longlong *local_2f0;
  undefined8 uStack_2e8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e0;
  uint uStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  int local_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b8;
  undefined4 local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_290;
  int local_270;
  int local_26c;
  int local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  longlong *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  longlong *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  FSourceLocation local_1e8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_198;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_188;
  code *local_178;
  undefined8 **local_170;
  code *local_168;
  undefined8 **local_160;
  float *local_158;
  float *local_150;
  code *local_148;
  float **local_140;
  float *local_138;
  float *local_130;
  code *local_128;
  float **local_120;
  undefined8 local_118;
  float local_110;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_100;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_f0 [2];
  undefined4 local_c4;
  
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2337,"FClothingSimulationSolver_CalculateBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x921);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2337);
  }
  TVar14 = FThreadSafeStaticStatInner<FStat_STAT_ChaosClothSolverCalculateBounds,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosClothSolverCalculateBounds,1> *)
                      &StatPtr_STAT_ChaosClothSolverCalculateBounds);
  local_1e8.Impl._Line = 0x922;
  local_1e8.Impl._Function =
       "struct UE::Math::TBoxSphereBounds<double,double> __cdecl Chaos::FClothingSimulationSolver::CalculateBounds(void) const"
  ;
  local_1e8.Impl._Column = 2;
  local_1e8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_378,*(TStatIdData **)&(TVar14.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1e8);
  uVar9 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  fVar34 = __real_ff7fffff;
  pFVar6 = (this->Evolution).Ptr;
  if (pFVar6 == (FEvolution *)0x0) {
    pFVar7 = (this->PBDEvolution).Ptr;
    this_00 = &pFVar7->MParticlesActiveView;
    pFVar24 = (pFVar7->MParticlesActiveView).Ranges.AllocatorInstance.Data;
    iVar5 = (pFVar7->MParticlesActiveView).Ranges.ArrayNum;
    pFVar1 = pFVar24 + (longlong)iVar5 * 4;
    while( true ) {
      if ((pFVar7->MParticlesActiveView).Ranges.ArrayNum != iVar5) {
        `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_364);
      }
      if (pFVar24 == pFVar1) {
        dVar3 = *(double *)&(this->LocalSpaceLocation).field_0x8;
        dVar2 = *(double *)&(this->LocalSpaceLocation).field_0x10;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *(double *)&this->LocalSpaceLocation;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
        __return_storage_ptr__->SphereRadius = 0.0;
        goto LAB_14dbc072e;
      }
      if (((*(uint *)pFVar24 & 1) != 0) && ((*(uint *)pFVar24 & 0xfffffffe) != 0)) break;
      pFVar24 = pFVar24 + 4;
    }
    local_350 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
    uStack_348 = _UNK_150a9e6b8;
    local_340 = -3.4028235e+38;
    local_33c = -3.4028235e+38;
    if (bChaos_CalculateBounds_ISPC_Enabled == false) {
      local_160 = &local_258;
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l52::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int>
                  ::Call;
      local_258 = &local_350;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::SequentialFor
                (this_00,(TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *)
                         &local_168);
    }
    else {
      local_170 = &local_260;
      local_178 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l50::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int,int>
                  ::Call;
      local_260 = &local_350;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
                (this_00,(TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)
                         &local_178);
    }
    fVar34 = __real_3f000000;
    local_360 = 0.0;
    local_2a0 = (uStack_348._4_4_ - (float)local_350) * __real_3f000000 + (float)local_350;
    local_298 = (local_33c - (float)uStack_348) * __real_3f000000 + (float)uStack_348;
    local_29c = (local_340 - local_350._4_4_) * __real_3f000000 + local_350._4_4_;
    if (bChaos_CalculateBounds_ISPC_Enabled == false) {
      local_130 = &local_2a0;
      local_120 = &local_138;
      local_128 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l57::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,int>
                  ::Call;
      local_138 = &local_360;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::SequentialFor
                (this_00,(TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *)
                         &local_128);
    }
    else {
      local_150 = &local_2a0;
      local_140 = &local_158;
      local_148 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l55::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,int,int>
                  ::Call;
      local_158 = &local_360;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
                (this_00,(TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)
                         &local_148);
    }
    dVar2 = this->LocalSpaceScale;
    fVar36 = (uStack_348._4_4_ - (float)local_350) * fVar34;
    fVar32 = (local_340 - local_350._4_4_) * fVar34;
    local_1b0 = (double)fVar36 * dVar2;
    fVar34 = (local_33c - (float)uStack_348) * fVar34;
    dStack_1a8 = (double)fVar32 * dVar2;
    local_1a0 = (double)fVar34 * dVar2;
    fVar35 = (float)dVar2;
    dVar3 = *(double *)&(this->LocalSpaceLocation).field_0x8;
    dVar4 = *(double *)&(this->LocalSpaceLocation).field_0x10;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         (double)((fVar36 + (float)local_350) * fVar35) + *(double *)&this->LocalSpaceLocation;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
         (double)((fVar32 + local_350._4_4_) * fVar35) + dVar3;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         (double)((fVar34 + (float)uStack_348) * fVar35) + dVar4;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = local_1b0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dStack_1a8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = local_1a0;
    __return_storage_ptr__->SphereRadius = (double)SQRT(local_360) * dVar2;
LAB_14dbc072e:
    if ((local_370 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_370 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_370 & 4) != 0) {
      FThreadStats::AddMessage(local_378,CycleScopeEnd);
    }
    local_370 = 0;
    if (bVar30) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    fStack_390 = (float)_UNK_150a9e6b8;
    fStack_38c = (float)((ulonglong)_UNK_150a9e6b8 >> 0x20);
    Softs::FEvolution::GetActiveGroupsArray(pFVar6,&local_328);
    uVar17 = (ulonglong)local_328.ArrayNum;
    fStack_394 = (float)((ulonglong)uVar9 >> 0x20);
    local_398 = (float)uVar9;
    local_318 = local_328.AllocatorInstance.Data + uVar17 * 4;
    local_35c = local_328.ArrayNum;
    FVar21.Data = local_328.AllocatorInstance.Data;
    fVar32 = fVar34;
    fVar36 = fStack_38c;
    fVar35 = fVar34;
    fVar31 = fVar34;
    while( true ) {
      pFVar1 = local_318;
      local_358 = FVar21.Data;
      if (local_328.ArrayNum != (uint)uVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (FVar21.Data == pFVar1) break;
      uVar13 = *(uint *)FVar21.Data;
      pFVar6 = (this->Evolution).Ptr;
      uVar22 = 0;
      if ((int)uVar13 < *(int *)&(pFVar6->Groups).ActiveSoftBodies.field_0x10) {
        uVar22 = ~uVar13 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
        return pTVar15;
      }
      uStack_2bc = 1;
      local_2c0 = 0;
      plVar28 = (longlong *)
                ((longlong)(int)uVar13 * 0x50 +
                *(longlong *)&(pFVar6->Groups).ActiveSoftBodies.field_0x8);
      iVar5 = (int)plVar28[5];
      pTStack_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar28 + 2);
      iStack_2ac = 0;
      iStack_2a8 = 0;
      if (iVar5 != 0) {
        pTVar27 = pTStack_2e0;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar28[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)plVar28[4];
        }
        uVar13 = *(uint *)(pTVar27->AllocatorInstance).InlineData;
        local_2c0 = 0;
        iStack_2a8 = 0;
        while (uVar13 == 0) {
          iStack_2a8 = iStack_2a8 + 0x20;
          lVar19 = (longlong)local_2c0;
          local_2c0 = local_2c0 + 1;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2c0) goto LAB_14dbbf93b;
          uVar13 = *(uint *)((pTVar27->AllocatorInstance).InlineData + lVar19 * 4 + 4);
        }
        uStack_2bc = -uVar13 & uVar13;
        uVar17 = (ulonglong)uStack_2bc * 2 + 1;
        lVar19 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_270 = (int)lVar19;
        iStack_2ac = iStack_2a8 + -1 + local_270;
        if (iVar5 < iStack_2ac) {
LAB_14dbbf93b:
          iStack_2ac = iVar5;
        }
      }
      local_2b0 = 0xffffffff;
      uVar13 = *(uint *)(plVar28 + 5);
      uStack_2e8 = CONCAT44(uStack_2bc,local_2c0);
      bVar16 = (byte)uVar13 & 0x1f;
      local_2c8 = (int)plVar28[1] - *(int *)((longlong)plVar28 + 0x34);
      iStack_2d4 = iStack_2ac;
      uStack_2d8 = 0xffffffff;
      uStack_2cc = uStack_2a4;
      iStack_2d0 = iStack_2a8;
      local_290._padding_._0_4_ = (int)uVar13 >> 5;
      local_290._padding_._4_4_ = 1 << bVar16;
      local_290.UnvisitedBitMask = -1 << bVar16;
      local_290.BaseBitIndex = uVar13 & 0xffffffe0;
      uStack_228 = CONCAT44(uStack_2c4,local_2c8);
      local_2f0 = plVar28;
      pTStack_2b8 = pTStack_2e0;
      local_290.Array = pTStack_2e0;
      local_290.CurrentBitIndex = uVar13;
      local_250 = plVar28;
      TStack_248._padding_ = uStack_2e8;
      TStack_248.Array = pTStack_2e0;
      TStack_248._16_8_ = _uStack_2d8;
      TStack_248._24_8_ = _iStack_2d0;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
        return pTVar15;
      }
      if (uVar13 != *(uint *)(plVar28 + 5)) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_290);
      }
      iVar5 = local_290.CurrentBitIndex;
      pTVar27 = local_290.Array;
      uStack_2e8 = CONCAT44(local_290._padding_._4_4_,(int)local_290._padding_);
      iStack_2d4 = local_290.CurrentBitIndex;
      uStack_2d8 = local_290.UnvisitedBitMask;
      uStack_2cc = local_290._28_4_;
      iStack_2d0 = local_290.BaseBitIndex;
      pTStack_2e0 = local_290.Array;
      while( true ) {
        plVar10 = local_250;
        if ((int)local_250[1] - *(int *)((longlong)local_250 + 0x34) != (int)uStack_228) {
          local_380 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_380);
        }
        if (((TStack_248.CurrentBitIndex == iVar5) && (TStack_248.Array == pTVar27)) &&
           (plVar10 == plVar28)) break;
        pFVar6 = (this->Evolution).Ptr;
        uVar13 = *(uint *)(*plVar10 + (longlong)TStack_248.CurrentBitIndex * 0xc);
        uVar22 = 0;
        if ((int)uVar13 < *(int *)&(pFVar6->SoftBodies).ParticleRanges.field_0x10) {
          uVar22 = ~uVar13 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
          return pTVar15;
        }
        pTVar23 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                  ((longlong)(int)uVar13 * 0x20 +
                  *(longlong *)&(pFVar6->SoftBodies).ParticleRanges.field_0x8);
        if (bChaos_CalculateBounds_ISPC_Enabled == false) {
          if ((pTVar23->Particles == (FSolverParticles *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
            return pTVar15;
          }
          Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetConstArrayView<Chaos::TVector<float,3>_>
                    (pTVar23,&local_198,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pTVar23->Particles->_padding_);
          if (local_198.DataPtr != local_198.DataPtr + local_198.ArrayNum) {
            pfVar18 = (float *)&(local_198.DataPtr)->field_0x4;
            fStack_38c = fVar36;
            fVar33 = fStack_394;
            fVar31 = fVar35;
            do {
              fVar36 = pfVar18[-1];
              fVar35 = pfVar18[1];
              fVar34 = *pfVar18;
              fVar11 = fVar36;
              if (local_398 <= fVar36) {
                fVar11 = local_398;
              }
              local_398 = fVar11;
              fStack_394 = fVar34;
              if (fVar33 <= fVar34) {
                fStack_394 = fVar33;
              }
              if (fVar36 <= fStack_38c) {
                fVar36 = fStack_38c;
              }
              fStack_38c = fVar36;
              if (fVar34 <= fVar32) {
                fVar34 = fVar32;
              }
              pTVar20 = (TVector<float,3> *)(pfVar18 + 2);
              fVar32 = fVar35;
              if (fStack_390 <= fVar35) {
                fVar32 = fStack_390;
              }
              fStack_390 = fVar32;
              if (fVar35 <= fVar31) {
                fVar35 = fVar31;
              }
              pfVar18 = pfVar18 + 3;
              fVar32 = fVar34;
              fVar36 = fStack_38c;
              fVar33 = fStack_394;
              fVar31 = fVar35;
            } while (pTVar20 != local_198.DataPtr + local_198.ArrayNum);
          }
        }
        else {
          local_310 = CONCAT44(fStack_394,local_398);
          iVar25 = pTVar23->RangeSize;
          local_300 = CONCAT44(fVar34,fStack_38c);
          local_308 = fStack_390;
          local_2f8 = fVar31;
          if ((pTVar23->Particles == (FSolverParticles *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
            return pTVar15;
          }
          Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetConstArrayView<Chaos::TVector<float,3>_>
                    (pTVar23,&local_100,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pTVar23->Particles->_padding_);
          ::CalculateBounds(&local_310,&local_300,local_100.DataPtr,0,iVar25);
          fVar34 = (float)local_310;
          if (local_398 <= (float)local_310) {
            fVar34 = local_398;
          }
          local_398 = fVar34;
          fVar31 = local_310._4_4_;
          if (fStack_394 <= local_310._4_4_) {
            fVar31 = fStack_394;
          }
          local_110 = local_2f8;
          if (local_2f8 <= fVar35) {
            local_110 = fVar35;
          }
          fVar34 = local_308;
          if (fStack_390 <= local_308) {
            fVar34 = fStack_390;
          }
          fStack_390 = fVar34;
          fVar34 = local_300._4_4_;
          if (local_300._4_4_ <= fVar32) {
            fVar34 = fVar32;
          }
          fStack_38c = (float)local_300;
          if ((float)local_300 <= fVar36) {
            fStack_38c = fVar36;
          }
          local_118 = CONCAT44(fVar34,fStack_38c);
          fVar32 = fVar34;
          fVar36 = fStack_38c;
          fStack_394 = fVar31;
          fVar35 = local_110;
          fVar31 = local_110;
        }
        TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
      }
      uVar17 = (ulonglong)local_35c;
      FVar21.Data = local_358 + 4;
    }
    if (local_398 == __real_7f7fffff) {
      dVar3 = *(double *)&(this->LocalSpaceLocation).field_0x8;
      dVar2 = *(double *)&(this->LocalSpaceLocation).field_0x10;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *(double *)&this->LocalSpaceLocation;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
      __return_storage_ptr__->SphereRadius = 0.0;
    }
    else {
      uVar17 = (ulonglong)local_328.ArrayNum;
      local_368 = 0.0;
      local_35c = local_328.ArrayNum;
      fVar36 = (fVar36 - local_398) * __real_3f000000;
      local_318 = local_328.AllocatorInstance.Data + uVar17 * 4;
      fVar34 = (fVar35 - fStack_390) * __real_3f000000;
      fVar35 = (fVar32 - fStack_394) * __real_3f000000;
      local_398 = fVar36 + local_398;
      fStack_390 = fStack_390 + fVar34;
      fStack_394 = fStack_394 + fVar35;
      FVar21.Data = local_328.AllocatorInstance.Data;
      local_338 = local_398;
      local_334 = fStack_394;
      local_330 = fStack_390;
      while( true ) {
        pFVar1 = local_318;
        local_358 = FVar21.Data;
        if (local_328.ArrayNum != (uint)uVar17) {
          local_37f = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_37f);
        }
        if (FVar21.Data == pFVar1) break;
        uVar13 = *(uint *)FVar21.Data;
        pFVar6 = (this->Evolution).Ptr;
        uVar22 = 0;
        if ((int)uVar13 < *(int *)&(pFVar6->Groups).ActiveSoftBodies.field_0x10) {
          uVar22 = ~uVar13 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
          return pTVar15;
        }
        iVar25 = 0;
        plVar28 = (longlong *)
                  ((longlong)(int)uVar13 * 0x50 +
                  *(longlong *)&(pFVar6->Groups).ActiveSoftBodies.field_0x8);
        iStack_2d0 = 0;
        iVar5 = (int)plVar28[5];
        pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar28 + 2);
        uVar13 = 1;
        iStack_2d4 = 0;
        if (iVar5 != 0) {
          pTVar26 = pTVar27;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar28[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)plVar28[4];
          }
          uVar22 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
          while (uVar22 == 0) {
            lVar19 = (longlong)iVar25;
            iStack_2d0 = iStack_2d0 + 0x20;
            iVar25 = iVar25 + 1;
            iStack_2d4 = iVar5;
            if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14dbbffbe;
            uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar19 * 4 + 4);
          }
          uVar13 = -uVar22 & uVar22;
          uVar17 = (ulonglong)uVar13 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_26c = (int)lVar19;
          iStack_2d4 = local_26c + -1 + iStack_2d0;
          if (iVar5 < iStack_2d4) {
            iStack_2d4 = iVar5;
          }
        }
LAB_14dbbffbe:
        uVar22 = *(uint *)(plVar28 + 5);
        uVar29 = uVar22 & 0xffffffe0;
        local_2c8 = (int)plVar28[1] - *(int *)((longlong)plVar28 + 0x34);
        uStack_2e8 = CONCAT44(uVar13,iVar25);
        uStack_2d8 = 0xffffffff;
        uStack_2cc = local_c4;
        TStack_218._padding_ = uStack_2e8;
        iVar25 = (int)uVar22 >> 5;
        uStack_1f8 = CONCAT44(uStack_2c4,local_2c8);
        TStack_218.UnvisitedBitMask = 0xffffffff;
        TStack_218.CurrentBitIndex = iStack_2d4;
        TStack_218.BaseBitIndex = iStack_2d0;
        TStack_218._28_4_ = local_c4;
        local_2f0 = plVar28;
        pTStack_2e0 = pTVar27;
        local_220 = plVar28;
        TStack_218.Array = pTVar27;
        if ((((int)uVar22 < 0) || (iVar5 < (int)uVar22)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
          return pTVar15;
        }
        uVar13 = *(uint *)(plVar28 + 5);
        if (uVar22 != uVar13) {
          pTVar26 = pTVar27;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar28[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)plVar28[4];
          }
          uVar22 = -1 << ((byte)uVar22 & 0x1f) &
                   *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar25 * 4);
          while (uVar22 == 0) {
            lVar19 = (longlong)iVar25;
            uVar29 = uVar29 + 0x20;
            iVar25 = iVar25 + 1;
            uVar22 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
            goto LAB_14dbc00e0;
            uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar19 * 4 + 4);
          }
          uVar17 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_268 = (int)lVar19;
          uVar22 = local_268 + -1 + uVar29;
          if ((int)uVar13 < (int)uVar22) {
            uVar22 = uVar13;
          }
        }
LAB_14dbc00e0:
        while( true ) {
          plVar10 = local_220;
          if ((int)local_220[1] - *(int *)((longlong)local_220 + 0x34) != (int)uStack_1f8) {
            local_37e[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_37e);
          }
          if (((TStack_218.CurrentBitIndex == uVar22) && (TStack_218.Array == pTVar27)) &&
             (plVar10 == plVar28)) break;
          pFVar6 = (this->Evolution).Ptr;
          uVar13 = *(uint *)(*plVar10 + (longlong)TStack_218.CurrentBitIndex * 0xc);
          uVar29 = 0;
          if ((int)uVar13 < *(int *)&(pFVar6->SoftBodies).ParticleRanges.field_0x10) {
            uVar29 = ~uVar13 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
            return pTVar15;
          }
          pTVar23 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                    ((longlong)(int)uVar13 * 0x20 +
                    *(longlong *)&(pFVar6->SoftBodies).ParticleRanges.field_0x8);
          if (bChaos_CalculateBounds_ISPC_Enabled == false) {
            if ((pTVar23->Particles == (FSolverParticles *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
              return pTVar15;
            }
            Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetConstArrayView<Chaos::TVector<float,3>_>
                      (pTVar23,&local_188,
                       (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &pTVar23->Particles->_padding_);
            fVar32 = local_368;
            pTVar20 = local_188.DataPtr;
            while (local_368 = fVar32, pTVar20 != local_188.DataPtr + local_188.ArrayNum) {
              fVar32 = *(float *)pTVar20;
              fVar31 = *(float *)&pTVar20->field_0x4 - local_334;
              fVar33 = *(float *)&pTVar20->field_0x8 - local_330;
              pTVar20 = pTVar20 + 1;
              fVar32 = (fVar32 - local_338) * (fVar32 - local_338) + fVar31 * fVar31 +
                       fVar33 * fVar33;
              if (fVar32 <= local_368) {
                fVar32 = local_368;
              }
            }
          }
          else {
            iVar5 = pTVar23->RangeSize;
            if ((pTVar23->Particles == (FSolverParticles *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar8)();
              return pTVar15;
            }
            Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetConstArrayView<Chaos::TVector<float,3>_>
                      (pTVar23,local_f0,
                       (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &pTVar23->Particles->_padding_);
            CalculateSquaredRadius(&local_368,&local_338,local_f0[0].DataPtr,0,iVar5);
          }
          TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
        }
        uVar17 = (ulonglong)local_35c;
        FVar21.Data = local_358 + 4;
      }
      dVar2 = this->LocalSpaceScale;
      local_1c8 = (double)fVar36 * dVar2;
      dStack_1c0 = (double)fVar35 * dVar2;
      local_1b8 = (double)fVar34 * dVar2;
      fVar34 = (float)dVar2;
      dVar3 = *(double *)&(this->LocalSpaceLocation).field_0x8;
      dVar4 = *(double *)&(this->LocalSpaceLocation).field_0x10;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
           (double)(fVar34 * local_398) + *(double *)&this->LocalSpaceLocation;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)(fStack_394 * fVar34) + dVar3;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)(fStack_390 * fVar34) + dVar4;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = local_1c8;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dStack_1c0;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = local_1b8;
      __return_storage_ptr__->SphereRadius = (double)SQRT(local_368) * dVar2;
    }
    if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.AllocatorInstance.Data);
    }
    if ((local_370 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_370 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_370 & 4) != 0) {
      FThreadStats::AddMessage(local_378,CycleScopeEnd);
    }
    local_370 = 0;
    if (bVar30) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return __return_storage_ptr__;
}

// EnableCollisionParticles @ 14dbef5f0

void __thiscall
Chaos::FClothingSimulationSolver::EnableCollisionParticles
          (FClothingSimulationSolver *this,int param_1,bool param_2)

{
  FEvolution *this_00;
  FPBDEvolution *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  this_00 = (this->Evolution).Ptr;
  uVar6 = (uint)param_2;
  if (bClothSolverDisableCollision) {
    uVar6 = 0;
  }
  if (this_00 == (FEvolution *)0x0) {
    if ((this->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                         ,0x36f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->PBDEvolution).Ptr;
    uVar5 = TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::GetRangeIndex
                      (&pFVar1->MCollisionParticlesActiveView,param_1);
    uVar7 = 0;
    if ((int)uVar5 < (pFVar1->MCollisionParticlesActiveView).Ranges.ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
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
    pFVar2 = (pFVar1->MCollisionParticlesActiveView).Ranges.AllocatorInstance.Data;
    *(uint *)(pFVar2 + (longlong)(int)uVar5 * 4) =
         *(uint *)(pFVar2 + (longlong)(int)uVar5 * 4) & 0xfffffffe | uVar6;
  }
  else {
    Softs::FEvolution::ActivateCollisionParticleRange(this_00,param_1,SUB41(uVar6,0));
  }
  return;
}

// EnableParticles @ 14dbef930

void __thiscall
Chaos::FClothingSimulationSolver::EnableParticles
          (FClothingSimulationSolver *this,int param_1,bool param_2)

{
  FEvolution *this_00;
  FPBDEvolution *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FClothConstraints *this_01;
  uint uVar6;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 != (FEvolution *)0x0) {
    Softs::FEvolution::ActivateSoftBody(this_00,param_1,param_2);
    return;
  }
  pFVar1 = (this->PBDEvolution).Ptr;
  uVar5 = TPBDActiveView<Chaos::Softs::FSolverParticles>::GetRangeIndex
                    (&pFVar1->MParticlesActiveView,param_1);
  uVar6 = 0;
  if ((int)uVar5 < (pFVar1->MParticlesActiveView).Ranges.ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  pFVar2 = (pFVar1->MParticlesActiveView).Ranges.AllocatorInstance.Data;
  *(uint *)(pFVar2 + (longlong)(int)uVar5 * 4) =
       *(uint *)(pFVar2 + (longlong)(int)uVar5 * 4) & 0xfffffffe | (uint)param_2;
  this_01 = GetClothConstraints(this,param_1);
  FClothConstraints::Enable(this_01,param_2);
  return;
}

// ExtremeDeformationReset @ 14dbf2c60

void __thiscall
Chaos::FClothingSimulationSolver::ExtremeDeformationReset(FClothingSimulationSolver *this)

{
  FEvolution *this_00;
  FClothingSimulationSolver *local_res10 [3];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38;
  FClothingSimulationSolver *local_28;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  FClothingSimulationSolver **local_10;
  
  if (bClothSolverEnableResetIfExtremeEdgeDeformation) {
    this_00 = (this->Evolution).Ptr;
    if (this_00 == (FEvolution *)0x0) {
      local_10 = local_res10;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l10::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int,int>
                 ::Call;
      local_res10[0] = this;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
                (&((this->PBDEvolution).Ptr)->MParticlesActiveView,
                 (TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)&local_18,
                 !bClothSolverParallelClothPostUpdate);
    }
    else {
      Softs::FEvolution::GetActiveGroupsArray(this_00,&local_38);
      local_20 = &local_38;
      local_10 = &local_28;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l8::<lambda_1>,void,int>
                 ::Call;
      local_28 = this;
      PhysicsParallelFor(local_38.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_18,false);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// GetAnimationNormalsView @ 14dbf7870

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetAnimationNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationNormals).field_0x8);
  return __return_storage_ptr__;
}

// GetAnimationNormalsView @ 14dbf78b0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetAnimationNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationNormals).field_0x8);
  return __return_storage_ptr__;
}

// GetAnimationPositionsView @ 14dbf7a60

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetAnimationPositionsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationPositions).field_0x8);
  return __return_storage_ptr__;
}

// GetAnimationPositionsView @ 14dbf7aa0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetAnimationPositionsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationPositions).field_0x8);
  return __return_storage_ptr__;
}

// GetAnimationVelocitiesView @ 14dbf7c50

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetAnimationVelocitiesView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationVelocities).field_0x8);
  return __return_storage_ptr__;
}

// GetAnimationVelocitiesView @ 14dbf7c90

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetAnimationVelocitiesView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationVelocities).field_0x8);
  return __return_storage_ptr__;
}

// GetClothConstraints @ 14dbf8930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FClothConstraints * __thiscall
Chaos::FClothingSimulationSolver::GetClothConstraints(FClothingSimulationSolver *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FClothConstraints *pFVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->ClothsConstraints).field_0x8 != *(int *)&(this->ClothsConstraints).field_0x34)
  {
    puVar6 = *(undefined1 **)&(this->ClothsConstraints).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ClothsConstraints).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ClothsConstraints).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ClothsConstraints + (longlong)iVar4 * 0x18;
        if (*(int *)(*(longlong *)&this->ClothsConstraints + (longlong)iVar4 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return *(FClothConstraints **)(lVar1 + 8);
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return _DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FClothConstraints *)(*pcVar2)();
  return pFVar5;
}

// GetClothConstraints @ 14dbf89e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FClothConstraints * __thiscall
Chaos::FClothingSimulationSolver::GetClothConstraints(FClothingSimulationSolver *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FClothConstraints *pFVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->ClothsConstraints).field_0x8 != *(int *)&(this->ClothsConstraints).field_0x34)
  {
    puVar6 = *(undefined1 **)&(this->ClothsConstraints).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ClothsConstraints).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ClothsConstraints).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ClothsConstraints + (longlong)iVar4 * 0x18;
        if (*(int *)(*(longlong *)&this->ClothsConstraints + (longlong)iVar4 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return *(FClothConstraints **)(lVar1 + 8);
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar3) {
    return _DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FClothConstraints *)(*pcVar2)();
  return pFVar5;
}

// GetCloths @ 14dbf8c30

TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCloths
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> *pTVar4;
  
  iVar1 = (this->Cloths).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FClothingSimulationCloth **)(this->Cloths).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetCollisionBaseTransformsView @ 14dbf8ca0

TArrayView<Chaos::TRigidTransform<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionBaseTransformsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->CollisionBaseTransforms).field_0x8);
  return __return_storage_ptr__;
}

// GetCollisionBaseTransformsView @ 14dbf8ce0

TArrayView<Chaos::TRigidTransform<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionBaseTransformsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *__return_storage_ptr__,int param_1
          )

{
  Chaos::Private::GetCollisionParticleConstArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->CollisionBaseTransforms).field_0x8);
  return __return_storage_ptr__;
}

// GetCollisionBoneIndicesView @ 14dbf8d20

TArrayView<int,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionBoneIndicesView
          (FClothingSimulationSolver *this,TArrayView<int,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  FSolverCollisionParticlesRange *pFVar5;
  TArrayView<int,int> *pTVar6;
  longlong *plVar7;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 local_1c;
  undefined4 local_c;
  
  if (param_1 == -1) {
    local_38 = 0;
    uStack_30 = 0;
    plVar7 = &local_38;
  }
  else {
    this_00 = (this->Evolution).Ptr;
    if (this_00 == (FEvolution *)0x0) {
      iVar4 = Softs::FPBDEvolution::GetCollisionParticleRangeSize((this->PBDEvolution).Ptr,param_1);
      local_48 = *(longlong *)&(this->CollisionBoneIndices).field_0x8 + (longlong)param_1 * 4;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<int,int> *)(*pcVar1)();
        return pTVar6;
      }
    }
    else {
      pFVar5 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
      if (((*(int *)&pFVar5->field_0x10 < 0) ||
          (*(int *)&(this->CollisionBoneIndices).field_0x10 <
           *(int *)&pFVar5->field_0x10 + *(int *)&pFVar5->field_0x14)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x52,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<int,int> *)(*pcVar1)();
        return pTVar6;
      }
      iVar4 = *(int *)&pFVar5->field_0x14;
      local_48 = *(longlong *)&(this->CollisionBoneIndices).field_0x8 +
                 (longlong)*(int *)&pFVar5->field_0x10 * 4;
      local_c = local_1c;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), local_c = local_1c, bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<int,int> *)(*pcVar1)();
        return pTVar6;
      }
    }
    uStack_40 = CONCAT44(local_c,iVar4);
    plVar7 = &local_48;
  }
  lVar2 = plVar7[1];
  __return_storage_ptr__->DataPtr = (int *)*plVar7;
  *(longlong *)&__return_storage_ptr__->ArrayNum = lVar2;
  return __return_storage_ptr__;
}

// GetCollisionBoneIndicesView @ 14dbf8e90

TArrayView<int_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionBoneIndicesView
          (FClothingSimulationSolver *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          int param_1)

{
  FEvolution *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  FSolverCollisionParticlesRange *pFVar5;
  TArrayView<int_const_,int> *pTVar6;
  longlong *plVar7;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 local_1c;
  undefined4 local_c;
  
  if (param_1 == -1) {
    local_38 = 0;
    uStack_30 = 0;
    plVar7 = &local_38;
  }
  else {
    this_00 = (this->Evolution).Ptr;
    if (this_00 == (FEvolution *)0x0) {
      iVar4 = Softs::FPBDEvolution::GetCollisionParticleRangeSize((this->PBDEvolution).Ptr,param_1);
      local_48 = *(longlong *)&(this->CollisionBoneIndices).field_0x8 + (longlong)param_1 * 4;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar1)();
        return pTVar6;
      }
    }
    else {
      pFVar5 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
      if (((*(int *)&pFVar5->field_0x10 < 0) ||
          (*(int *)&(this->CollisionBoneIndices).field_0x10 <
           *(int *)&pFVar5->field_0x10 + *(int *)&pFVar5->field_0x14)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x4b,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar1)();
        return pTVar6;
      }
      iVar4 = *(int *)&pFVar5->field_0x14;
      local_48 = *(longlong *)&(this->CollisionBoneIndices).field_0x8 +
                 (longlong)*(int *)&pFVar5->field_0x10 * 4;
      local_c = local_1c;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), local_c = local_1c, bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar1)();
        return pTVar6;
      }
    }
    uStack_40 = CONCAT44(local_c,iVar4);
    plVar7 = &local_48;
  }
  lVar2 = plVar7[1];
  __return_storage_ptr__->DataPtr = (int *)*plVar7;
  *(longlong *)&__return_storage_ptr__->ArrayNum = lVar2;
  return __return_storage_ptr__;
}

// GetCollisionContacts @ 14dbf9000

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionContacts(FClothingSimulationSolver *this)

{
  if ((this->Evolution).Ptr != (FEvolution *)0x0) {
    return &this->CollisionContacts;
  }
  return &((this->PBDEvolution).Ptr)->MCollisionContacts;
}

// GetCollisionGeometryView @ 14dbf9440

TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionGeometryView
          (FClothingSimulationSolver *this,
          TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *__return_storage_ptr__,
          int param_1)

{
  FEvolution *this_00;
  longlong lVar1;
  FPBDEvolution *this_01;
  code *pcVar2;
  bool bVar3;
  FSolverCollisionParticlesRange *pFVar4;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *pTVar5;
  longlong *plVar6;
  longlong local_28;
  int local_20;
  longlong local_18;
  int iStack_10;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28 = 0;
      local_20 = 0;
    }
    else {
      local_20 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
      local_28 = (this_01->MCollisionParticles)._padding_ + (longlong)param_1 * 8;
      if (local_20 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
          return pTVar5;
        }
      }
    }
    plVar6 = &local_28;
  }
  else {
    pFVar4 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
    if (*(longlong *)&pFVar4->field_0x8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    lVar1 = *(longlong *)&pFVar4->field_0x8;
    if ((*(int *)&pFVar4->field_0x10 < 0) ||
       (*(int *)(lVar1 + 0x68) < *(int *)&pFVar4->field_0x10 + *(int *)&pFVar4->field_0x14)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    local_18 = *(longlong *)(lVar1 + 0x60) + (longlong)*(int *)&pFVar4->field_0x10 * 8;
    iStack_10 = *(int *)&pFVar4->field_0x14;
    if (*(int *)&pFVar4->field_0x14 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    plVar6 = &local_18;
  }
  lVar1 = plVar6[1];
  __return_storage_ptr__->DataPtr = (TRefCountPtr<Chaos::FImplicitObject> *)*plVar6;
  *(longlong *)&__return_storage_ptr__->ArrayNum = lVar1;
  return __return_storage_ptr__;
}

// GetCollisionNormals @ 14dbf95b0

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionNormals(FClothingSimulationSolver *this)

{
  if ((this->Evolution).Ptr != (FEvolution *)0x0) {
    return &this->CollisionNormals;
  }
  return &((this->PBDEvolution).Ptr)->MCollisionNormals;
}

// GetCollisionParticleRs @ 14dbf96f0

TRotation<float,3> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionParticleRs
          (FClothingSimulationSolver *this,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSolverCollisionParticlesRange *this_02;
  TArrayView<Chaos::TRotation<float,3>,int> *pTVar5;
  TRotation<float,3> *pTVar6;
  TArrayView<Chaos::TRotation<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 != (FEvolution *)0x0) {
    this_02 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
    pTVar5 = Softs::FSolverCollisionParticlesRange::GetR(this_02,&local_18);
    return pTVar5->DataPtr;
  }
  this_01 = (this->PBDEvolution).Ptr;
  if (param_1 == -1) {
    return (TRotation<float,3> *)0x0;
  }
  iVar4 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
  lVar1 = (this_01->MCollisionParticles)._padding_;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TRotation<float,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return (TRotation<float,3> *)((longlong)param_1 * 0x10 + lVar1);
}

// GetCollisionParticleRsView @ 14dbf97c0

TArrayView<Chaos::TRotation<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionParticleRsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRotation<float,3>,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  FSolverCollisionParticlesRange *this_02;
  TArrayView<Chaos::TRotation<float,3>,int> *pTVar5;
  TArrayView<Chaos::TRotation<float,3>,int> local_28;
  TArrayView<Chaos::TRotation<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28.DataPtr = (TRotation<float,3> *)0x0;
      local_28.ArrayNum = 0;
    }
    else {
      local_28.ArrayNum = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
      local_28.DataPtr =
           (TRotation<float,3> *)
           ((longlong)param_1 * 0x10 + (this_01->MCollisionParticles)._padding_);
      if (local_28.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<Chaos::TRotation<float,3>,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    pTVar5 = &local_28;
  }
  else {
    this_02 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
    pTVar5 = Softs::FSolverCollisionParticlesRange::GetR(this_02,&local_18);
  }
  iVar2 = pTVar5->ArrayNum;
  uVar3 = *(undefined4 *)&pTVar5->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

// GetCollisionParticleRsView @ 14dbf9890

TArrayView<Chaos::TRotation<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionParticleRsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRotation<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  TRotation<float,3> *pTVar2;
  bool bVar3;
  FSolverCollisionParticlesRange *this_02;
  TArrayView<Chaos::TRotation<float,3>,int> *pTVar4;
  TArrayView<Chaos::TRotation<float,3>_const_,int> *pTVar5;
  TRotation<float,3> **ppTVar6;
  TRotation<float,3> *local_38;
  int local_30;
  TRotation<float,3> *local_28;
  int iStack_20;
  TArrayView<Chaos::TRotation<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_38 = (TRotation<float,3> *)0x0;
      local_30 = 0;
    }
    else {
      local_30 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
      local_38 = (TRotation<float,3> *)
                 ((longlong)param_1 * 0x10 + (this_01->MCollisionParticles)._padding_);
      if (local_30 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<Chaos::TRotation<float,3>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    ppTVar6 = &local_38;
  }
  else {
    this_02 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
    pTVar4 = Softs::FSolverCollisionParticlesRange::GetR(this_02,&local_18);
    iStack_20 = pTVar4->ArrayNum;
    ppTVar6 = &local_28;
    local_28 = pTVar4->DataPtr;
  }
  pTVar2 = ppTVar6[1];
  __return_storage_ptr__->DataPtr = *ppTVar6;
  *(TRotation<float,3> **)&__return_storage_ptr__->ArrayNum = pTVar2;
  return __return_storage_ptr__;
}

// GetCollisionParticleXs @ 14dbf9970

TVector<float,3> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionParticleXs
          (FClothingSimulationSolver *this,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this_02;
  TVector<float,3> *pTVar5;
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      return (TVector<float,3> *)0x0;
    }
    iVar4 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
    lVar1 = (this_01->MCollisionParticles)._padding_;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<float,3> *)(*pcVar2)();
        return pTVar5;
      }
    }
    return (TVector<float,3> *)(lVar1 + (longlong)param_1 * 0xc);
  }
  this_02 = (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)
            Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
  if (this_02->Particles == (FSolverCollisionParticles *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
  GetArrayView<Chaos::TVector<float,3>_>
            (this_02,&local_18,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &this_02->Particles->_padding_);
  return local_18.DataPtr;
}

// GetCollisionParticleXsView @ 14dbf9a60

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionParticleXsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this_02;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar5;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28.DataPtr = (TVector<float,3> *)0x0;
      local_28.ArrayNum = 0;
    }
    else {
      local_28.ArrayNum = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
      local_28.DataPtr =
           (TVector<float,3> *)((this_01->MCollisionParticles)._padding_ + (longlong)param_1 * 0xc);
      if (local_28.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    pTVar5 = &local_28;
  }
  else {
    this_02 = (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)
              Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
    if (this_02->Particles == (FSolverCollisionParticles *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
    Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
    GetArrayView<Chaos::TVector<float,3>_>
              (this_02,&local_18,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &this_02->Particles->_padding_);
    pTVar5 = &local_18;
  }
  iVar2 = pTVar5->ArrayNum;
  uVar3 = *(undefined4 *)&pTVar5->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

// GetCollisionParticleXsView @ 14dbf9b60

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionParticleXsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  TVector<float,3> *pTVar2;
  bool bVar3;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this_02;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar4;
  TVector<float,3> **ppTVar5;
  TVector<float,3> *local_38;
  int local_30;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TVector<float,3> *local_18;
  int iStack_10;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_38 = (TVector<float,3> *)0x0;
      local_30 = 0;
    }
    else {
      local_30 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
      local_38 = (TVector<float,3> *)
                 ((this_01->MCollisionParticles)._padding_ + (longlong)param_1 * 0xc);
      if (local_30 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
          return pTVar4;
        }
      }
    }
    ppTVar5 = &local_38;
  }
  else {
    this_02 = (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)
              Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
    if (this_02->Particles == (FSolverCollisionParticles *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
    GetArrayView<Chaos::TVector<float,3>_>
              (this_02,&local_28,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &this_02->Particles->_padding_);
    local_18 = local_28.DataPtr;
    iStack_10 = local_28.ArrayNum;
    ppTVar5 = &local_18;
  }
  pTVar2 = ppTVar5[1];
  __return_storage_ptr__->DataPtr = *ppTVar5;
  *(TVector<float,3> **)&__return_storage_ptr__->ArrayNum = pTVar2;
  return __return_storage_ptr__;
}

// GetCollisionPhis @ 14dbf9c80

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionPhis(FClothingSimulationSolver *this)

{
  if ((this->Evolution).Ptr != (FEvolution *)0x0) {
    return &this->CollisionPhis;
  }
  return &((this->PBDEvolution).Ptr)->MCollisionPhis;
}

// GetCollisionStatusView @ 14dbfa370

TArrayView<bool_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionStatusView
          (FClothingSimulationSolver *this,TArrayView<bool_const_,int> *__return_storage_ptr__,
          int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FSolverCollisionParticlesRange *pFVar4;
  TArrayView<bool_const_,int> *pTVar5;
  longlong *plVar6;
  longlong local_28;
  int local_20;
  longlong local_18;
  int iStack_10;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28 = 0;
      local_20 = 0;
    }
    else {
      local_20 = Softs::FPBDEvolution::GetCollisionParticleRangeSize(this_01,param_1);
      local_28 = (longlong)param_1 + *(longlong *)&(this_01->MCollided).field_0x8;
      if ((local_20 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<bool_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
    plVar6 = &local_28;
  }
  else {
    pFVar4 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
    if (((*(int *)&pFVar4->field_0x10 < 0) ||
        (*(int *)&(this->Collided).field_0x10 <
         *(int *)&pFVar4->field_0x14 + *(int *)&pFVar4->field_0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x4b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<bool_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
    local_18 = (longlong)*(int *)&pFVar4->field_0x10 + *(longlong *)&(this->Collided).field_0x8;
    iStack_10 = *(int *)&pFVar4->field_0x14;
    if ((iStack_10 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<bool_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
    plVar6 = &local_18;
  }
  lVar2 = plVar6[1];
  __return_storage_ptr__->DataPtr = (bool *)*plVar6;
  *(longlong *)&__return_storage_ptr__->ArrayNum = lVar2;
  return __return_storage_ptr__;
}

// GetCollisionTransformsView @ 14dbfa4c0

TArrayView<Chaos::TRigidTransform<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionTransformsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->CollisionTransforms).field_0x8);
  return __return_storage_ptr__;
}

// GetCollisionTransformsView @ 14dbfa500

TArrayView<Chaos::TRigidTransform<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetCollisionTransformsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *__return_storage_ptr__,int param_1
          )

{
  Chaos::Private::GetCollisionParticleConstArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->CollisionTransforms).field_0x8);
  return __return_storage_ptr__;
}

// GetComplexColliders @ 14dbfa870

FClothComplexColliders * __thiscall
Chaos::FClothingSimulationSolver::GetComplexColliders(FClothingSimulationSolver *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ComplexColliders).field_0x8 != *(int *)&(this->ComplexColliders).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ComplexColliders).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ComplexColliders).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ComplexColliders).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ComplexColliders + (longlong)iVar2 * 0x18;
        if (*(int *)(*(longlong *)&this->ComplexColliders + (longlong)iVar2 * 0x18) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (FClothComplexColliders *)0x0;
          }
          return (FClothComplexColliders *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FClothComplexColliders *)0x0;
}

// GetGlobalParticleOffset @ 14dbfbf80

int __thiscall
Chaos::FClothingSimulationSolver::GetGlobalParticleOffset
          (FClothingSimulationSolver *this,int param_1)

{
  FEvolution *this_00;
  FSolverParticlesRange *pFVar1;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 != (FEvolution *)0x0) {
    pFVar1 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    return *(int *)&pFVar1->field_0x10;
  }
  return param_1;
}

// GetInterpolatedAnimationNormalsView @ 14dbfc4e0

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetInterpolatedAnimationNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->InterpolatedAnimationNormals).field_0x8);
  return __return_storage_ptr__;
}

// GetInterpolatedAnimationNormalsView @ 14dbfc520

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetInterpolatedAnimationNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->InterpolatedAnimationNormals).field_0x8);
  return __return_storage_ptr__;
}

// GetInterpolatedAnimationPositionsView @ 14dbfc560

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetInterpolatedAnimationPositionsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->InterpolatedAnimationPositions).field_0x8);
  return __return_storage_ptr__;
}

// GetInterpolatedAnimationPositionsView @ 14dbfc5a0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetInterpolatedAnimationPositionsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->InterpolatedAnimationPositions).field_0x8);
  return __return_storage_ptr__;
}

// GetLastSubframeCollisionTransformsCCDView @ 14dbfc7a0

TArrayView<Chaos::TRigidTransform<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetLastSubframeCollisionTransformsCCDView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->LastSubframeCollisionTransformsCCD).field_0x8);
  return __return_storage_ptr__;
}

// GetLastSubframeCollisionTransformsCCDView @ 14dbfc7e0

TArrayView<Chaos::TRigidTransform<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetLastSubframeCollisionTransformsCCDView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *__return_storage_ptr__,int param_1
          )

{
  Chaos::Private::GetCollisionParticleConstArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->LastSubframeCollisionTransformsCCD).field_0x8);
  return __return_storage_ptr__;
}

// GetLinearSolverError @ 14dbfc820

float __thiscall
Chaos::FClothingSimulationSolver::GetLinearSolverError(FClothingSimulationSolver *this,int param_1)

{
  FEvolution *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 == (FEvolution *)0x0) {
    return 0.0;
  }
  uVar4 = 0;
  if (param_1 < *(int *)&(pFVar1->SoftBodies).LinearSystems.field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  return *(float *)(*(longlong *)&(pFVar1->SoftBodies).LinearSystems.field_0x8 + 0x40 +
                   (longlong)param_1 * 0x48);
}

// GetMaxNumIterations @ 14dbfc910

int __thiscall
Chaos::FClothingSimulationSolver::GetMaxNumIterations(FClothingSimulationSolver *this)

{
  int iVar1;
  FCollectionPropertyConstFacade *this_00;
  int *piVar2;
  
  if (this->Config == (FClothingSimulationConfig *)0x0) {
    return 10;
  }
  this_00 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(this->Config,this->SolverLOD);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,MaxNumIterationsName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    iVar1 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (this_00,*piVar2,&this_00->LowValueArray);
    return iVar1;
  }
  return 10;
}

// GetNormalsView @ 14dbfcbe0

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->Normals).field_0x8);
  return __return_storage_ptr__;
}

// GetNormalsView @ 14dbfcc20

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->Normals).field_0x8);
  return __return_storage_ptr__;
}

// GetNumActiveParticles @ 14dbfcc60

int __thiscall
Chaos::FClothingSimulationSolver::GetNumActiveParticles(FClothingSimulationSolver *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  FEvolution *this_00;
  code *pcVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  uint uStackX_20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_e0;
  int iStack_d0;
  int iStack_cc;
  longlong *plStack_c8;
  FScriptContainerElement *pFStack_c0;
  longlong *plStack_b8;
  int iStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *plStack_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 uStack_3c;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    iVar8 = TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveSize
                      (&((this->PBDEvolution).Ptr)->MParticlesActiveView);
    return iVar8;
  }
  iVar8 = 0;
  Softs::FEvolution::GetActiveGroupsArray(this_00,&TStack_e0);
  uStackX_20 = TStack_e0.ArrayNum;
  uVar9 = (ulonglong)(int)uStackX_20;
  pFStack_c0 = TStack_e0.AllocatorInstance.Data + uVar9 * 4;
  FVar12.Data = TStack_e0.AllocatorInstance.Data;
  do {
    pFVar5 = pFStack_c0;
    if (TStack_e0.ArrayNum != (int)uVar9) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (FVar12.Data == pFVar5) {
      if (TStack_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_e0.AllocatorInstance.Data);
      }
      return iVar8;
    }
    uVar15 = *(uint *)FVar12.Data;
    uVar13 = 0;
    if ((int)uVar15 < *(int *)&(this_00->Groups).ActiveSoftBodies.field_0x10) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
    iStack_b0 = 0;
    plVar14 = (longlong *)
              ((longlong)(int)uVar15 * 0x50 +
              *(longlong *)&(this_00->Groups).ActiveSoftBodies.field_0x8);
    iStack_98 = 0;
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
        iStack_98 = iStack_98 + 0x20;
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
      iStack_d0 = (int)lVar10;
      iStack_9c = iStack_98 + -1 + iStack_d0;
      if (iVar2 < iStack_9c) {
        iStack_9c = iVar2;
      }
    }
LAB_143e372ad:
    uVar15 = *(uint *)(plVar14 + 5);
    uStack_94 = uStack_3c;
    iStack_90 = (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34);
    uVar13 = uVar15 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
    uStack_a0 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar15 >> 5;
    TStack_80._28_4_ = uStack_3c;
    TStack_80.BaseBitIndex = iStack_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    plStack_c8 = plVar14;
    plStack_b8 = plVar14;
    pTStack_a8 = pTVar1;
    plStack_88 = plVar14;
    TStack_80.Array = pTVar1;
    if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
    plVar4 = plStack_c8;
    uVar7 = *(uint *)(plVar14 + 5);
    if (uVar15 != uVar7) {
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
        uVar15 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_143e373b1;
        uVar15 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uVar9 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_cc = (int)lVar10;
      uVar15 = iStack_cc + -1 + uVar13;
      if ((int)uVar7 < (int)uVar15) {
        uVar15 = uVar7;
      }
    }
LAB_143e373b1:
    while( true ) {
      plVar14 = plStack_88;
      if ((int)plStack_88[1] - *(int *)((longlong)plStack_88 + 0x34) != (int)uStack_60) {
        auStackX_18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
      }
      if (((TStack_80.CurrentBitIndex == uVar15) && (TStack_80.Array == pTVar1)) &&
         (plVar14 == plVar4)) break;
      uVar13 = *(uint *)(*plVar14 + (longlong)TStack_80.CurrentBitIndex * 0xc);
      uVar7 = 0;
      if ((int)uVar13 < *(int *)&(this_00->SoftBodies).ParticleRanges.field_0x10) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
      iVar8 = iVar8 + *(int *)((longlong)(int)uVar13 * 0x20 + 0x14 +
                              *(longlong *)&(this_00->SoftBodies).ParticleRanges.field_0x8);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    FVar12.Data = FVar12.Data + 4;
    uVar9 = (ulonglong)uStackX_20;
  } while( true );
}

// GetNumIterations @ 14dbfcdb0

int __thiscall Chaos::FClothingSimulationSolver::GetNumIterations(FClothingSimulationSolver *this)

{
  int iVar1;
  FCollectionPropertyConstFacade *this_00;
  int *piVar2;
  
  if (this->Config == (FClothingSimulationConfig *)0x0) {
    return 1;
  }
  this_00 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(this->Config,this->SolverLOD);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,NumIterationsName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    iVar1 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (this_00,*piVar2,&this_00->LowValueArray);
    return iVar1;
  }
  return 1;
}

// GetNumLinearSolverIterations @ 14dbfce60

int __thiscall
Chaos::FClothingSimulationSolver::GetNumLinearSolverIterations
          (FClothingSimulationSolver *this,int param_1)

{
  FEvolution *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 == (FEvolution *)0x0) {
    return 0;
  }
  uVar5 = 0;
  if (param_1 < *(int *)&(pFVar1->SoftBodies).LinearSystems.field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  return *(int *)(*(longlong *)&(pFVar1->SoftBodies).LinearSystems.field_0x8 + 0x3c +
                 (longlong)param_1 * 0x48);
}

// GetNumParticles @ 14dbfd060

uint __thiscall Chaos::FClothingSimulationSolver::GetNumParticles(FClothingSimulationSolver *this)

{
  FEvolution *pFVar1;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 != (FEvolution *)0x0) {
    return (uint)(pFVar1->Particles)._padding_;
  }
  return (uint)(((this->PBDEvolution).Ptr)->MParticles)._padding_;
}

// GetNumSubsteps @ 14dbfd190

int __thiscall Chaos::FClothingSimulationSolver::GetNumSubsteps(FClothingSimulationSolver *this)

{
  int iVar1;
  FCollectionPropertyConstFacade *this_00;
  int *piVar2;
  
  if (this->Config == (FClothingSimulationConfig *)0x0) {
    return 1;
  }
  this_00 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(this->Config,this->SolverLOD);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,NumSubstepsName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    iVar1 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (this_00,*piVar2,&this_00->LowValueArray);
    return iVar1;
  }
  return 1;
}

// GetNumUsedIterations @ 14dbfd210

int __thiscall
Chaos::FClothingSimulationSolver::GetNumUsedIterations(FClothingSimulationSolver *this)

{
  FEvolution *pFVar1;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 != (FEvolution *)0x0) {
    return pFVar1->NumUsedIterations;
  }
  return ((this->PBDEvolution).Ptr)->MNumIterations;
}

// GetOldAnimationNormalsView @ 14dbfd580

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetOldAnimationNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldAnimationNormals).field_0x8);
  return __return_storage_ptr__;
}

// GetOldAnimationNormalsView @ 14dbfd5c0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetOldAnimationNormalsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldAnimationNormals).field_0x8);
  return __return_storage_ptr__;
}

// GetOldAnimationPositionsView @ 14dbfd770

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetOldAnimationPositionsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldAnimationPositions).field_0x8);
  return __return_storage_ptr__;
}

// GetOldAnimationPositionsView @ 14dbfd7b0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetOldAnimationPositionsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldAnimationPositions).field_0x8);
  return __return_storage_ptr__;
}

// GetOldCollisionTransformsView @ 14dbfd8f0

TArrayView<Chaos::TRigidTransform<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetOldCollisionTransformsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>,int> *__return_storage_ptr__,int param_1)

{
  Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldCollisionTransforms).field_0x8);
  return __return_storage_ptr__;
}

// GetOldCollisionTransformsView @ 14dbfd930

TArrayView<Chaos::TRigidTransform<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetOldCollisionTransformsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *__return_storage_ptr__,int param_1
          )

{
  Chaos::Private::GetCollisionParticleConstArrayView<Chaos::TRigidTransform<float,3>_>
            (__return_storage_ptr__,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldCollisionTransforms).field_0x8);
  return __return_storage_ptr__;
}

// GetParticleInvMasses @ 14dbfdb20

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleInvMasses(FClothingSimulationSolver *this)

{
  FEvolution *pFVar1;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 != (FEvolution *)0x0) {
    return (TArray<float,TSizedDefaultAllocator<32>_> *)&(pFVar1->Particles)._padding_;
  }
  return (TArray<float,TSizedDefaultAllocator<32>_> *)
         &(((this->PBDEvolution).Ptr)->MParticles)._padding_;
}

// GetParticleInvMassesView @ 14dbfdb50

TArrayView<float,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleInvMassesView
          (FClothingSimulationSolver *this,TArrayView<float,int> *__return_storage_ptr__,int param_1
          )

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  FSolverParticlesRange *this_02;
  TArrayView<float,int> *pTVar5;
  TArrayView<float,int> local_28;
  TArrayView<float,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28.DataPtr = (float *)0x0;
      local_28.ArrayNum = 0;
    }
    else {
      local_28.ArrayNum = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_28.DataPtr = (float *)((this_01->MParticles)._padding_ + (longlong)param_1 * 4);
      if (local_28.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<float,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    pTVar5 = &local_28;
  }
  else {
    this_02 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    pTVar5 = Softs::FSolverParticlesRange::GetInvM(this_02,&local_18);
  }
  iVar2 = pTVar5->ArrayNum;
  uVar3 = *(undefined4 *)&pTVar5->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

// GetParticleInvMassesView @ 14dbfdc10

TArrayView<float_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleInvMassesView
          (FClothingSimulationSolver *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  FSolverParticlesRange *this_02;
  TArrayView<float,int> *pTVar4;
  TArrayView<float_const_,int> *pTVar5;
  float **ppfVar6;
  float *local_38;
  int local_30;
  float *local_28;
  int iStack_20;
  TArrayView<float,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_38 = (float *)0x0;
      local_30 = 0;
    }
    else {
      local_30 = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_38 = (float *)((this_01->MParticles)._padding_ + (longlong)param_1 * 4);
      if (local_30 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<float_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    ppfVar6 = &local_38;
  }
  else {
    this_02 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    pTVar4 = Softs::FSolverParticlesRange::GetInvM(this_02,&local_18);
    iStack_20 = pTVar4->ArrayNum;
    ppfVar6 = &local_28;
    local_28 = pTVar4->DataPtr;
  }
  pfVar2 = ppfVar6[1];
  __return_storage_ptr__->DataPtr = *ppfVar6;
  *(float **)&__return_storage_ptr__->ArrayNum = pfVar2;
  return __return_storage_ptr__;
}

// GetParticlePandInvMs @ 14dbfde60

FPAndInvM * __thiscall
Chaos::FClothingSimulationSolver::GetParticlePandInvMs(FClothingSimulationSolver *this,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSolverParticlesRange *this_02;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar5;
  FPAndInvM *pFVar6;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 != (FEvolution *)0x0) {
    this_02 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    pTVar5 = Softs::FSolverParticlesRange::GetPAndInvM(this_02,&local_18);
    return pTVar5->DataPtr;
  }
  this_01 = (this->PBDEvolution).Ptr;
  if (param_1 == -1) {
    return (FPAndInvM *)0x0;
  }
  iVar4 = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
  lVar1 = *(longlong *)&(this_01->MParticles).MPAndInvM.field_0x8;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPAndInvM *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FPAndInvM *)((longlong)param_1 * 0x10 + lVar1);
}

// GetParticlePandInvMs @ 14dbfdf30

TArray<Chaos::Softs::FPAndInvM,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSolver::GetParticlePandInvMs(FClothingSimulationSolver *this)

{
  FEvolution *pFVar1;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 != (FEvolution *)0x0) {
    return (TArray<Chaos::Softs::FPAndInvM,TSizedDefaultAllocator<32>_> *)
           &(pFVar1->Particles).MPAndInvM.field_0x8;
  }
  return (TArray<Chaos::Softs::FPAndInvM,TSizedDefaultAllocator<32>_> *)
         &(((this->PBDEvolution).Ptr)->MParticles).MPAndInvM.field_0x8;
}

// GetParticlePandInvMsView @ 14dbfdf60

TArrayView<Chaos::Softs::FPAndInvM,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticlePandInvMsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::Softs::FPAndInvM,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  FSolverParticlesRange *this_02;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar5;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_28;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28.DataPtr = (FPAndInvM *)0x0;
      local_28.ArrayNum = 0;
    }
    else {
      local_28.ArrayNum = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_28.DataPtr =
           (FPAndInvM *)
           ((longlong)param_1 * 0x10 + *(longlong *)&(this_01->MParticles).MPAndInvM.field_0x8);
      if (local_28.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<Chaos::Softs::FPAndInvM,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    pTVar5 = &local_28;
  }
  else {
    this_02 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    pTVar5 = Softs::FSolverParticlesRange::GetPAndInvM(this_02,&local_18);
  }
  iVar2 = pTVar5->ArrayNum;
  uVar3 = *(undefined4 *)&pTVar5->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

// GetParticlePandInvMsView @ 14dbfe030

TArrayView<Chaos::Softs::FPAndInvM_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticlePandInvMsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::Softs::FPAndInvM_const_,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  FPAndInvM *pFVar2;
  bool bVar3;
  FSolverParticlesRange *this_02;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar4;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> *pTVar5;
  FPAndInvM **ppFVar6;
  FPAndInvM *local_38;
  int local_30;
  FPAndInvM *local_28;
  int iStack_20;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_38 = (FPAndInvM *)0x0;
      local_30 = 0;
    }
    else {
      local_30 = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_38 = (FPAndInvM *)
                 ((longlong)param_1 * 0x10 + *(longlong *)&(this_01->MParticles).MPAndInvM.field_0x8
                 );
      if (local_30 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<Chaos::Softs::FPAndInvM_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    ppFVar6 = &local_38;
  }
  else {
    this_02 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    pTVar4 = Softs::FSolverParticlesRange::GetPAndInvM(this_02,&local_18);
    iStack_20 = pTVar4->ArrayNum;
    ppFVar6 = &local_28;
    local_28 = pTVar4->DataPtr;
  }
  pFVar2 = ppFVar6[1];
  __return_storage_ptr__->DataPtr = *ppFVar6;
  *(FPAndInvM **)&__return_storage_ptr__->ArrayNum = pFVar2;
  return __return_storage_ptr__;
}

// GetParticleVs @ 14dbfe5d0

TVector<float,3> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleVs(FClothingSimulationSolver *this,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *this_02;
  TVector<float,3> *pTVar5;
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      return (TVector<float,3> *)0x0;
    }
    iVar4 = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
    lVar1 = (this_01->MParticles)._padding_;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<float,3> *)(*pcVar2)();
        return pTVar5;
      }
    }
    return (TVector<float,3> *)(lVar1 + (longlong)param_1 * 0xc);
  }
  this_02 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
            Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
  if (this_02->Particles == (FSolverParticles *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
  GetArrayView<Chaos::TVector<float,3>_>
            (this_02,&local_18,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &this_02->Particles->_padding_);
  return local_18.DataPtr;
}

// GetParticleVs @ 14dbfe6c0

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleVs(FClothingSimulationSolver *this)

{
  FEvolution *pFVar1;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 != (FEvolution *)0x0) {
    return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
           &(pFVar1->Particles)._padding_;
  }
  return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
         &(((this->PBDEvolution).Ptr)->MParticles)._padding_;
}

// GetParticleVsView @ 14dbfe6f0

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleVsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *this_02;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar5;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28.DataPtr = (TVector<float,3> *)0x0;
      local_28.ArrayNum = 0;
    }
    else {
      local_28.ArrayNum = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_28.DataPtr =
           (TVector<float,3> *)((this_01->MParticles)._padding_ + (longlong)param_1 * 0xc);
      if (local_28.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    pTVar5 = &local_28;
  }
  else {
    this_02 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
              Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    if (this_02->Particles == (FSolverParticles *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
    Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetArrayView<Chaos::TVector<float,3>_>
              (this_02,&local_18,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &this_02->Particles->_padding_);
    pTVar5 = &local_18;
  }
  iVar2 = pTVar5->ArrayNum;
  uVar3 = *(undefined4 *)&pTVar5->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

// GetParticleVsView @ 14dbfe7f0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleVsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  TVector<float,3> *pTVar2;
  bool bVar3;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *this_02;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar4;
  TVector<float,3> **ppTVar5;
  TVector<float,3> *local_38;
  int local_30;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TVector<float,3> *local_18;
  int iStack_10;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_38 = (TVector<float,3> *)0x0;
      local_30 = 0;
    }
    else {
      local_30 = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_38 = (TVector<float,3> *)((this_01->MParticles)._padding_ + (longlong)param_1 * 0xc);
      if (local_30 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
          return pTVar4;
        }
      }
    }
    ppTVar5 = &local_38;
  }
  else {
    this_02 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
              Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    if (this_02->Particles == (FSolverParticles *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetArrayView<Chaos::TVector<float,3>_>
              (this_02,&local_28,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &this_02->Particles->_padding_);
    local_18 = local_28.DataPtr;
    iStack_10 = local_28.ArrayNum;
    ppTVar5 = &local_18;
  }
  pTVar2 = ppTVar5[1];
  __return_storage_ptr__->DataPtr = *ppTVar5;
  *(TVector<float,3> **)&__return_storage_ptr__->ArrayNum = pTVar2;
  return __return_storage_ptr__;
}

// GetParticleXs @ 14dbfe900

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleXs(FClothingSimulationSolver *this)

{
  FEvolution *pFVar1;
  
  pFVar1 = (this->Evolution).Ptr;
  if (pFVar1 != (FEvolution *)0x0) {
    return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
           &(pFVar1->Particles)._padding_;
  }
  return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
         &(((this->PBDEvolution).Ptr)->MParticles)._padding_;
}

// GetParticleXsView @ 14dbfe930

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleXsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *this_02;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar5;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_28.DataPtr = (TVector<float,3> *)0x0;
      local_28.ArrayNum = 0;
    }
    else {
      local_28.ArrayNum = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_28.DataPtr =
           (TVector<float,3> *)((this_01->MParticles)._padding_ + (longlong)param_1 * 0xc);
      if (local_28.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    pTVar5 = &local_28;
  }
  else {
    this_02 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
              Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    if (this_02->Particles == (FSolverParticles *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
    Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetArrayView<Chaos::TVector<float,3>_>
              (this_02,&local_18,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &this_02->Particles->_padding_);
    pTVar5 = &local_18;
  }
  iVar2 = pTVar5->ArrayNum;
  uVar3 = *(undefined4 *)&pTVar5->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

// GetParticleXsView @ 14dbfea30

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationSolver::GetParticleXsView
          (FClothingSimulationSolver *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,int param_1)

{
  FEvolution *this_00;
  FPBDEvolution *this_01;
  code *pcVar1;
  TVector<float,3> *pTVar2;
  bool bVar3;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *this_02;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar4;
  TVector<float,3> **ppTVar5;
  TVector<float,3> *local_38;
  int local_30;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TVector<float,3> *local_18;
  int iStack_10;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    this_01 = (this->PBDEvolution).Ptr;
    if (param_1 == -1) {
      local_38 = (TVector<float,3> *)0x0;
      local_30 = 0;
    }
    else {
      local_30 = Softs::FPBDEvolution::GetParticleRangeSize(this_01,param_1);
      local_38 = (TVector<float,3> *)((this_01->MParticles)._padding_ + (longlong)param_1 * 0xc);
      if (local_30 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
          return pTVar4;
        }
      }
    }
    ppTVar5 = &local_38;
  }
  else {
    this_02 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
              Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    if (this_02->Particles == (FSolverParticles *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetArrayView<Chaos::TVector<float,3>_>
              (this_02,&local_28,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &this_02->Particles->_padding_);
    local_18 = local_28.DataPtr;
    iStack_10 = local_28.ArrayNum;
    ppTVar5 = &local_18;
  }
  pTVar2 = ppTVar5[1];
  __return_storage_ptr__->DataPtr = *ppTVar5;
  *(TVector<float,3> **)&__return_storage_ptr__->ArrayNum = pTVar2;
  return __return_storage_ptr__;
}

// GetWindVelocityAndPressureField @ 14dc01cb0

FVelocityAndPressureField * __thiscall
Chaos::FClothingSimulationSolver::GetWindVelocityAndPressureField
          (FClothingSimulationSolver *this,uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FEvolution *this_00;
  code *pcVar4;
  bool bVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  FClothConstraints *pFVar7;
  FVelocityAndPressureField *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    pFVar8 = Softs::FPBDEvolution::GetVelocityAndPressureField((this->PBDEvolution).Ptr,param_1);
    return pFVar8;
  }
  pTVar6 = Softs::FEvolution::GetGroupActiveSoftBodies(this_00,param_1);
  iVar2 = *(int *)&(pTVar6->Elements).field_0x28;
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = iVar10;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(pTVar6->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)&(pTVar6->Elements).field_0x10;
    }
    uVar3 = *puVar13;
    while (uVar3 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar11 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dc01d56;
      uVar3 = puVar13[lVar9 + 1];
    }
    uVar1 = (ulonglong)(~(uVar3 - 1) & uVar3) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar11 = iVar12 + -1 + (int)lVar9;
    if (iVar2 < iVar11) {
      iVar11 = iVar2;
    }
  }
LAB_14dc01d56:
  if (*(int *)&(pTVar6->Elements).field_0x28 <= iVar11) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                       ,0x631,L"No active velocity field found for this groupId %i");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FVelocityAndPressureField *)(*pcVar4)();
      return pFVar8;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Softs::FVelocityAndPressureField::FVelocityAndPressureField(&DummyField);
      atexit(`Chaos::FClothingSimulationSolver::GetWindVelocityAndPressureField'::__l5::
             _dynamic_atexit_destructor_for__DummyField__);
      _Init_thread_footer(&::_TSS0);
    }
    return &DummyField;
  }
  pFVar7 = GetClothConstraints(this,*(int *)(*(longlong *)&pTVar6->Elements + (longlong)iVar11 * 0xc
                                            ));
  if (((pFVar7->VelocityAndPressureField).Object == (FVelocityAndPressureField *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VelocityField",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                         ,0x62e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FVelocityAndPressureField *)(*pcVar4)();
    return pFVar8;
  }
  return (pFVar7->VelocityAndPressureField).Object;
}

// ParticleMassClampAndKinematicStateUpdate @ 14dc076f0

void __thiscall
Chaos::FClothingSimulationSolver::ParticleMassClampAndKinematicStateUpdate
          (FClothingSimulationSolver *this,FSolverParticlesRange *param_1,float param_2,
          TFunctionRef<bool___cdecl(int)> *param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  int local_res10 [2];
  
  fVar2 = __real_3f800000;
  iVar6 = 0;
  if (0 < *(int *)&param_1->field_0x14) {
    do {
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pfVar5 = TDynamicParticles<float,3>::M
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar6);
      fVar7 = *pfVar5;
      if (*pfVar5 <= param_2) {
        fVar7 = param_2;
      }
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pfVar5 = TDynamicParticles<float,3>::M
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar6);
      *pfVar5 = fVar7;
      local_res10[0] = iVar6;
      cVar4 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_res10);
      if (cVar4 == '\0') {
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pfVar5 = TDynamicParticles<float,3>::M
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar6);
        fVar7 = fVar2 / *pfVar5;
      }
      else {
        fVar7 = 0.0;
      }
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pfVar5 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar6);
      iVar6 = iVar6 + 1;
      *pfVar5 = fVar7;
    } while (iVar6 < *(int *)&param_1->field_0x14);
  }
  return;
}

// ParticleMassClampAndKinematicStateUpdate @ 14dc07890

void __thiscall
Chaos::FClothingSimulationSolver::ParticleMassClampAndKinematicStateUpdate
          (FClothingSimulationSolver *this,int param_1,int param_2,float param_3,
          TFunctionRef<bool___cdecl(int)> *param_4)

{
  FPBDEvolution *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  int local_res10 [2];
  
  if (((this->PBDEvolution).Ptr == (FPBDEvolution *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                         ,0x58c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = __real_3f800000;
  pFVar1 = (this->PBDEvolution).Ptr;
  if (param_1 < param_1 + param_2) {
    lVar8 = (longlong)param_1 * 4;
    uVar7 = param_1;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < (int)(pFVar1->MParticles)._padding_) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar10 = *(float *)((pFVar1->MParticles)._padding_ + lVar8);
      if (fVar10 <= param_3) {
        fVar10 = param_3;
      }
      uVar6 = 0;
      if ((int)uVar7 < (int)(pFVar1->MParticles)._padding_) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((pFVar1->MParticles)._padding_ + lVar8) = fVar10;
      local_res10[0] = uVar7 - param_1;
      cVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_res10);
      if (cVar5 == '\0') {
        uVar6 = 0;
        if ((int)uVar7 < (int)(pFVar1->MParticles)._padding_) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar10 = fVar3 / *(float *)((pFVar1->MParticles)._padding_ + lVar8);
      }
      else {
        fVar10 = 0.0;
      }
      uVar6 = 0;
      if ((int)uVar7 < (int)(pFVar1->MParticles)._padding_) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(float *)((pFVar1->MParticles)._padding_ + lVar8) = fVar10;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < param_1 + param_2);
  }
  return;
}

// ParticleMassUpdateDensity @ 14dc07b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationSolver::ParticleMassUpdateDensity
          (FClothingSimulationSolver *this,FSolverParticlesRange *param_1,FTriangleMesh *param_2,
          TVector<float,2> *param_3,TArrayView<float_const_,int> *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  longlong *plVar6;
  bool bVar7;
  float *pfVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  float fVar15;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  int local_160;
  TArrayView<float_const_,int> local_158;
  float local_148;
  float local_144;
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  int local_120;
  uint uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  int local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_160 = *(int *)&param_1->field_0x14;
  if (param_4->ArrayNum == local_160) {
    local_158.ArrayNum = param_4->ArrayNum;
    uStack_cc = *(undefined4 *)&param_4->field_0xc;
    local_158.DataPtr._0_4_ = *(undefined4 *)&param_4->DataPtr;
    local_158.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
  }
  else {
    local_d8 = 0;
    uStack_d0 = 0;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_158.ArrayNum = 0;
    local_158.DataPtr._0_4_ = (undefined4)local_d8;
    local_158.DataPtr._4_4_ = local_d8._4_4_;
  }
  local_148 = *(float *)param_3;
  local_144 = *(float *)&param_3->field_0x4 - local_148;
  local_158._12_4_ = uStack_cc;
  FTriangleMesh::GetVertices
            (param_2,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8);
  uVar12 = local_a0;
  iStack_138 = 0;
  local_120 = 0;
  uStack_134 = 1;
  uStack_124 = 0;
  if (local_a0 != 0) {
    puVar13 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar13 = local_a8;
    }
    uVar14 = *puVar13;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_124 = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_138)
      goto LAB_14dc07c31;
      uVar14 = puVar13[lVar10 + 1];
    }
    uStack_134 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_134 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_110 = (int)lVar10;
    uStack_124 = local_110 + -1 + local_120;
    if ((int)local_a0 < (int)uStack_124) {
      uStack_124 = local_a0;
    }
  }
LAB_14dc07c31:
  local_140 = (longlong *)local_c8;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
  uVar14 = local_a0 & 0xffffffe0;
  iStack_118 = local_c8._8_4_ - local_94;
  uStack_128 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_124;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_134,iStack_138);
  iVar11 = (int)local_a0 >> 5;
  TStack_100._28_4_ = uStack_124;
  TStack_100.BaseBitIndex = local_120;
  uStack_e0 = CONCAT44(uStack_114,iStack_118);
  bVar9 = (byte)local_a0;
  uStack_11c = uStack_124;
  local_108 = local_140;
  TStack_100.Array = local_130;
  if (((int)local_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_38d1b717;
  if (uVar12 != local_a0) {
    puVar13 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar13 = local_a8;
    }
    uVar12 = -1 << (bVar9 & 0x1f) & puVar13[iVar11];
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14dc07d42;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_10c = (int)lVar10;
    uVar12 = local_10c + -1 + uVar14;
    if ((int)local_a0 < (int)uVar12) {
      uVar12 = local_a0;
    }
  }
LAB_14dc07d42:
  while( true ) {
    plVar6 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_168[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    fVar5 = local_144;
    if (((TStack_100.CurrentBitIndex == uVar12) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
       (plVar6 == (longlong *)local_c8)) {
      if (5 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
      local_80 = 0;
      if (local_88 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
      return;
    }
    iVar11 = *(int *)(*plVar6 + (longlong)TStack_100.CurrentBitIndex * 0xc);
    fVar15 = local_148;
    if ((0 < local_158.ArrayNum) && (fVar3 < (float)((uint)local_144 & uVar4))) {
      pfVar8 = TArrayView<float_const_,int>::operator[](&local_158,iVar11);
      fVar15 = fVar5 * *pfVar8 + local_148;
    }
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar7)) break;
    pfVar8 = TDynamicParticles<float,3>::M
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar11);
    *pfVar8 = fVar15 * *pfVar8;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TDynamicParticles<float,3>::M
              (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
               *(int *)&param_1->field_0x10 + iVar11);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ParticleMassUpdateDensity @ 14dc07f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationSolver::ParticleMassUpdateDensity
          (FClothingSimulationSolver *this,FTriangleMesh *param_1,int param_2,int param_3,
          TVector<float,2> *param_4,TArrayView<float_const_,int> *param_5)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  FPBDEvolution *pFVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  float fVar19;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198 [8];
  int local_190;
  TArrayView<float_const_,int> local_188;
  float local_178;
  float local_174;
  int local_170;
  int local_16c;
  longlong *local_168;
  uint uStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  uint local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_dc;
  undefined1 local_d8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  uint local_b0;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  ulonglong local_88;
  
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (((this->PBDEvolution).Ptr == (FPBDEvolution *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                         ,0x57b,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = 0;
  if (param_5->ArrayNum == param_3) {
    local_188.ArrayNum = param_5->ArrayNum;
    uStack_fc = *(undefined4 *)&param_5->field_0xc;
    local_188.DataPtr._0_4_ = *(undefined4 *)&param_5->DataPtr;
    local_188.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_5->DataPtr + 4);
  }
  else {
    local_108 = 0;
    uStack_100 = 0;
    local_108._0_4_ = 0;
    local_108._4_4_ = 0;
    local_188.ArrayNum = 0;
    local_188.DataPtr._0_4_ = (undefined4)local_108;
    local_188.DataPtr._4_4_ = local_108._4_4_;
  }
  local_178 = *(float *)param_4;
  local_174 = *(float *)&param_4->field_0x4 - local_178;
  local_190 = param_3;
  local_188._12_4_ = uStack_fc;
  FTriangleMesh::GetVertices
            (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8);
  uVar16 = local_b0;
  pFVar3 = (this->PBDEvolution).Ptr;
  local_148 = 0;
  uStack_15c = 1;
  uStack_14c = local_148;
  if (local_b0 != 0) {
    pTVar18 = pTVar1;
    if (local_b8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = local_b8;
    }
    uVar15 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    local_148 = 0;
    uVar17 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)(int)uVar17;
      local_148 = local_148 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_14c = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14dc080a1;
      uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uStack_15c = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_170 = (int)lVar13;
    uStack_14c = (local_148 - 1) + local_170;
    if ((int)local_b0 < (int)uStack_14c) {
      uStack_14c = local_b0;
    }
  }
LAB_14dc080a1:
  local_168 = (longlong *)local_d8;
  uStack_144 = local_dc;
  uVar15 = local_b0 & 0xffffffe0;
  iStack_140 = local_d8._8_4_ - local_a4;
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130._padding_ = CONCAT44(uStack_15c,uVar17);
  iVar14 = (int)local_b0 >> 5;
  TStack_130._28_4_ = local_dc;
  TStack_130.BaseBitIndex = local_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar12 = (byte)local_b0;
  uStack_160 = uVar17;
  local_158 = pTVar1;
  local_138 = local_168;
  TStack_130.Array = pTVar1;
  if (((int)local_b0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_38d1b717;
  if (uVar16 != local_b0) {
    pTVar18 = pTVar1;
    if (local_b8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = local_b8;
    }
    uVar16 = -1 << (bVar12 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14dc081d0;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_16c = (int)lVar13;
    uVar16 = local_16c + -1 + uVar15;
    if ((int)local_b0 < (int)uVar16) {
      uVar16 = local_b0;
    }
  }
LAB_14dc081d0:
  while( true ) {
    plVar8 = local_138;
    if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
      local_198[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    fVar7 = local_174;
    if (((TStack_130.CurrentBitIndex == uVar16) && (TStack_130.Array == pTVar1)) &&
       (plVar8 == (longlong *)local_d8)) {
      if (5 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return;
    }
    uVar15 = *(uint *)(*plVar8 + (longlong)TStack_130.CurrentBitIndex * 0xc);
    lVar13 = (longlong)(int)uVar15;
    fVar19 = local_178;
    if ((0 < local_188.ArrayNum) && (fVar6 < (float)((uint)local_174 & uVar17))) {
      pfVar11 = TArrayView<float_const_,int>::operator[](&local_188,uVar15 - param_2);
      fVar19 = fVar7 * *pfVar11 + local_178;
    }
    iVar14 = (int)(pFVar3->MParticles)._padding_;
    uVar10 = 0;
    if ((int)uVar15 < iVar14) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_1a8 = lVar13, local_1a0 = (longlong)iVar14,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = (pFVar3->MParticles)._padding_;
    *(float *)(lVar4 + lVar13 * 4) = fVar19 * *(float *)(lVar4 + lVar13 * 4);
    iVar14 = (int)(pFVar3->MParticles)._padding_;
    uVar10 = 0;
    if ((int)uVar15 < iVar14) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_1a8 = lVar13, local_1a0 = (longlong)iVar14,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// PreSubstep @ 14dc09b50

void __thiscall
Chaos::FClothingSimulationSolver::PreSubstep
          (FClothingSimulationSolver *this,float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FEvolution *this_00;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_98;
  FClothingSimulationSolver *local_88;
  float local_80;
  undefined1 local_7c;
  code *local_78;
  FClothingSimulationSolver **local_70;
  code *local_68;
  FClothingSimulationSolver **local_60;
  FClothingSimulationSolver *local_58;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_50;
  float local_48;
  undefined1 local_44;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1892,"FClothingSimulationSolver_PreSubstep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x764);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1892);
  }
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    local_60 = &local_88;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothingSimulationSolver::PreSubstep'::__l8::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int,int>
               ::Call;
    local_88 = this;
    local_80 = param_1;
    local_7c = param_2;
    TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
              (&((this->PBDEvolution).Ptr)->MParticlesActiveView,
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)&local_68,
               bClothSolverParallelClothPreUpdate == false);
  }
  else {
    Softs::FEvolution::GetActiveGroupsArray(this_00,&local_98);
    local_50 = &local_98;
    local_70 = &local_58;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothingSimulationSolver::PreSubstep'::__l5::<lambda_1>,void,int>
               ::Call;
    local_58 = this;
    local_48 = param_1;
    local_44 = param_2;
    PhysicsParallelFor(local_98.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_78,
                       bClothSolverParallelClothPreUpdate == false);
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1963,"ChaosPBDClearCollidedArray",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                 ,0x7ab);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1963);
    }
    memset(*(void **)&(this->Collided).field_0x8,0,(longlong)*(int *)&(this->Collided).field_0x10);
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    (this->CollisionContacts).ArrayNum = 0;
    if ((this->CollisionContacts).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->CollisionContacts).AllocatorInstance,0,
                 &(this->CollisionContacts).ArrayMax);
    }
    (this->CollisionNormals).ArrayNum = 0;
    if ((this->CollisionNormals).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->CollisionNormals).AllocatorInstance,0,
                 &(this->CollisionNormals).ArrayMax);
    }
    (this->CollisionPhis).ArrayNum = 0;
    if ((this->CollisionPhis).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CollisionPhis).AllocatorInstance,0,&(this->CollisionPhis).ArrayMax);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  pFVar8 = (this->Cloths).AllocatorInstance.Data;
  iVar2 = (this->Cloths).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    lVar4 = *(longlong *)pFVar8;
    if ((lVar4 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Cloth",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                            ,0x7de,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                     *)(lVar4 + 0x100),this);
    if ((pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar10)) break;
    uVar3 = *(uint *)&pTVar7->field_0x8;
    if (uVar3 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0xf8)) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FClothingSimulationCloth::FLODData::PreSubstepAccessoryMeshes
                (*(FLODData **)(*(longlong *)(lVar4 + 0xf0) + (longlong)(int)uVar3 * 8),this,param_1
                );
    }
    pFVar8 = pFVar8 + 8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// RefreshCloth @ 14dc0b430

void __thiscall
Chaos::FClothingSimulationSolver::RefreshCloth
          (FClothingSimulationSolver *this,FClothingSimulationCloth *param_1)

{
  TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FEvolution *this_00;
  FClothingSimulationCloth *this_01;
  FPBDEvolution *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackX_8 [8];
  
  pFVar3 = (this->Cloths).AllocatorInstance.Data;
  pFVar5 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)(this->Cloths).ArrayNum * 8) {
    while (*(FClothingSimulationCloth **)pFVar5 != param_1) {
      pFVar5 = pFVar5 + 8;
      if (pFVar5 == pFVar3 + (longlong)(this->Cloths).ArrayNum * 8) {
        return;
      }
    }
    if ((int)((longlong)pFVar5 - (longlong)pFVar3 >> 3) != -1) {
      pFVar5 = (this->Cloths).AllocatorInstance.Data;
      iVar2 = (this->Cloths).ArrayNum;
      pFVar3 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Cloths).ArrayNum != iVar2) {
          `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (pFVar5 == pFVar3) break;
        FClothingSimulationCloth::Remove(*(FClothingSimulationCloth **)pFVar5,this);
        pFVar5 = pFVar5 + 8;
      }
      this_00 = (this->Evolution).Ptr;
      if (this_00 == (FEvolution *)0x0) {
        pTVar1 = &this->PBDEvolution;
        if (pTVar1->Ptr != (FPBDEvolution *)0x0) {
          Softs::FPBDEvolution::ResetParticles(pTVar1->Ptr);
          Softs::FPBDEvolution::ResetConstraintRules(pTVar1->Ptr);
          TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                   *)&this->ClothsConstraints);
        }
        if (pTVar1->Ptr != (FPBDEvolution *)0x0) {
          Softs::FPBDEvolution::ResetCollisionParticles(pTVar1->Ptr,0);
          this->CollisionParticlesOffset = 0;
          this->CollisionParticlesSize = 0;
        }
      }
      else {
        Softs::FEvolution::Reset(this_00);
        TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                 *)&this->ClothsConstraints);
      }
      pFVar5 = (this->Cloths).AllocatorInstance.Data;
      iVar2 = (this->Cloths).ArrayNum;
      pFVar3 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Cloths).ArrayNum != iVar2) {
          `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (pFVar5 == pFVar3) break;
        this_01 = *(FClothingSimulationCloth **)pFVar5;
        FClothingSimulationCloth::Add(this_01,this);
        FClothingSimulationCloth::PreUpdate(this_01,this);
        FClothingSimulationCloth::Update(this_01,this);
        pFVar5 = pFVar5 + 8;
      }
      pFVar4 = (this->PBDEvolution).Ptr;
      if (pFVar4 == (FPBDEvolution *)0x0) {
        this->CollisionParticlesOffset = 0;
      }
      else {
        this->CollisionParticlesOffset = (int)(pFVar4->MCollisionParticles)._padding_;
      }
      return;
    }
  }
  return;
}

// RefreshCloths @ 14dc0b8c0

void __thiscall Chaos::FClothingSimulationSolver::RefreshCloths(FClothingSimulationSolver *this)

{
  TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FEvolution *this_00;
  FClothingSimulationCloth *this_01;
  FPBDEvolution *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Cloths).AllocatorInstance.Data;
  iVar3 = (this->Cloths).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    FClothingSimulationCloth::Remove(*(FClothingSimulationCloth **)pFVar5,this);
    pFVar5 = pFVar5 + 8;
  }
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    pTVar1 = &this->PBDEvolution;
    if (pTVar1->Ptr != (FPBDEvolution *)0x0) {
      Softs::FPBDEvolution::ResetParticles(pTVar1->Ptr);
      Softs::FPBDEvolution::ResetConstraintRules(pTVar1->Ptr);
      TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
               *)&this->ClothsConstraints);
    }
    if (pTVar1->Ptr != (FPBDEvolution *)0x0) {
      Softs::FPBDEvolution::ResetCollisionParticles(pTVar1->Ptr,0);
      this->CollisionParticlesOffset = 0;
      this->CollisionParticlesSize = 0;
    }
  }
  else {
    Softs::FEvolution::Reset(this_00);
    TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
             *)&this->ClothsConstraints);
  }
  pFVar5 = (this->Cloths).AllocatorInstance.Data;
  iVar3 = (this->Cloths).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    this_01 = *(FClothingSimulationCloth **)pFVar5;
    FClothingSimulationCloth::Add(this_01,this);
    FClothingSimulationCloth::PreUpdate(this_01,this);
    FClothingSimulationCloth::Update(this_01,this);
    pFVar5 = pFVar5 + 8;
  }
  pFVar4 = (this->PBDEvolution).Ptr;
  if (pFVar4 == (FPBDEvolution *)0x0) {
    this->CollisionParticlesOffset = 0;
  }
  else {
    this->CollisionParticlesOffset = (int)(pFVar4->MCollisionParticles)._padding_;
  }
  return;
}

// RemoveCloth @ 14dc0dc60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationSolver::RemoveCloth
          (FClothingSimulationSolver *this,FClothingSimulationCloth *param_1)

{
  TArray<Chaos::FClothingSimulationCloth_*,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FClothingSimulationCloth *this_01;
  FPBDEvolution *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FClothingSimulationCloth *local_res10;
  
  this_00 = &this->Cloths;
  pFVar2 = (this_00->AllocatorInstance).Data;
  pFVar4 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)(this->Cloths).ArrayNum * 8) {
    while (*(FClothingSimulationCloth **)pFVar4 != param_1) {
      pFVar4 = pFVar4 + 8;
      if (pFVar4 == pFVar2 + (longlong)(this->Cloths).ArrayNum * 8) {
        return;
      }
    }
    if ((int)((longlong)pFVar4 - (longlong)pFVar2 >> 3) != -1) {
      local_res10 = param_1;
      FClothingSimulationCloth::Remove(param_1,this);
      TArray<Chaos::FClothingSimulationCloth_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (this_00,&local_res10,Default);
      Reset(this);
      pFVar4 = (this_00->AllocatorInstance).Data;
      iVar1 = (this->Cloths).ArrayNum;
      pFVar2 = pFVar4 + (longlong)iVar1 * 8;
      while( true ) {
        if ((this->Cloths).ArrayNum != iVar1) {
          `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar2) break;
        this_01 = *(FClothingSimulationCloth **)pFVar4;
        FClothingSimulationCloth::Add(this_01,this);
        FClothingSimulationCloth::PreUpdate(this_01,this);
        FClothingSimulationCloth::Update(this_01,this);
        pFVar4 = pFVar4 + 8;
      }
      pFVar3 = (this->PBDEvolution).Ptr;
      if (pFVar3 != (FPBDEvolution *)0x0) {
        this->CollisionParticlesOffset = (int)(pFVar3->MCollisionParticles)._padding_;
        return;
      }
      this->CollisionParticlesOffset = 0;
    }
  }
  return;
}

// RemoveCloths @ 14dc0dd80

void __thiscall Chaos::FClothingSimulationSolver::RemoveCloths(FClothingSimulationSolver *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FEvolution *this_00;
  FPBDEvolution *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Cloths).AllocatorInstance.Data;
  iVar2 = (this->Cloths).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FClothingSimulationCloth::Remove(*(FClothingSimulationCloth **)pFVar4,this);
    pFVar4 = pFVar4 + 8;
  }
  (this->Cloths).ArrayNum = 0;
  if ((this->Cloths).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Cloths).AllocatorInstance,0,&(this->Cloths).ArrayMax);
  }
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    pFVar3 = (this->PBDEvolution).Ptr;
    if (pFVar3 != (FPBDEvolution *)0x0) {
      Softs::FPBDEvolution::ResetParticles(pFVar3);
      Softs::FPBDEvolution::ResetConstraintRules((this->PBDEvolution).Ptr);
      TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
               *)&this->ClothsConstraints);
    }
    pFVar3 = (this->PBDEvolution).Ptr;
    if (pFVar3 != (FPBDEvolution *)0x0) {
      Softs::FPBDEvolution::ResetCollisionParticles(pFVar3,0);
      this->CollisionParticlesOffset = 0;
      this->CollisionParticlesSize = 0;
    }
  }
  else {
    Softs::FEvolution::Reset(this_00);
    TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
             *)&this->ClothsConstraints);
  }
  return;
}

// Reset @ 14dc0e9e0

void __thiscall Chaos::FClothingSimulationSolver::Reset(FClothingSimulationSolver *this)

{
  FEvolution *this_00;
  FPBDEvolution *pFVar1;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 != (FEvolution *)0x0) {
    Softs::FEvolution::Reset(this_00);
    TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
             *)&this->ClothsConstraints);
    return;
  }
  pFVar1 = (this->PBDEvolution).Ptr;
  if (pFVar1 != (FPBDEvolution *)0x0) {
    Softs::FPBDEvolution::ResetParticles(pFVar1);
    Softs::FPBDEvolution::ResetConstraintRules((this->PBDEvolution).Ptr);
    TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
             *)&this->ClothsConstraints);
  }
  pFVar1 = (this->PBDEvolution).Ptr;
  if (pFVar1 != (FPBDEvolution *)0x0) {
    Softs::FPBDEvolution::ResetCollisionParticles(pFVar1,0);
    this->CollisionParticlesOffset = 0;
    this->CollisionParticlesSize = 0;
  }
  return;
}

// ResetCollisionParticles @ 14dc0f140

void __thiscall
Chaos::FClothingSimulationSolver::ResetCollisionParticles
          (FClothingSimulationSolver *this,int param_1)

{
  FPBDEvolution *this_00;
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    Softs::FPBDEvolution::ResetCollisionParticles(this_00,param_1);
    this->CollisionParticlesOffset = param_1;
    this->CollisionParticlesSize = 0;
  }
  return;
}

// ResetCollisionStartPose @ 14dc0f190

void __thiscall
Chaos::FClothingSimulationSolver::ResetCollisionStartPose
          (FClothingSimulationSolver *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  TRotation<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_48;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_38;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_28;
  
  lVar9 = (longlong)param_2;
  Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
            (&local_48,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->CollisionTransforms).field_0x8);
  Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
            (&local_38,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldCollisionTransforms).field_0x8);
  pTVar5 = GetCollisionParticleRs(this,param_1);
  pTVar6 = GetCollisionParticleXs(this,param_1);
  Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
            (&local_28,&this->Evolution,&this->PBDEvolution,param_1,
             (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->LastSubframeCollisionTransformsCCD).field_0x8);
  if (0 < param_2) {
    puVar4 = (undefined8 *)CONCAT44(local_48.DataPtr._4_4_,local_48.DataPtr._0_4_);
    lVar8 = (longlong)local_28.DataPtr - (longlong)puVar4;
    puVar7 = puVar4;
    do {
      uVar3 = puVar7[1];
      puVar1 = (undefined8 *)((longlong)puVar7 + ((longlong)local_38.DataPtr - (longlong)puVar4));
      *puVar1 = *puVar7;
      puVar1[1] = uVar3;
      uVar3 = puVar7[3];
      puVar1[2] = puVar7[2];
      puVar1[3] = uVar3;
      uVar3 = puVar7[5];
      puVar1[4] = puVar7[4];
      puVar1[5] = uVar3;
      puVar1 = (undefined8 *)
               ((longlong)puVar1 + (longlong)puVar4 + (0x10 - (longlong)local_38.DataPtr));
      uVar2 = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)pTVar6 = *puVar1;
      *(undefined4 *)&pTVar6->field_0x8 = uVar2;
      uVar3 = puVar7[1];
      *(undefined8 *)pTVar5 = *puVar7;
      *(undefined8 *)&pTVar5->field_0x8 = uVar3;
      uVar3 = puVar7[1];
      *(undefined8 *)((longlong)puVar7 + lVar8) = *puVar7;
      ((undefined8 *)((longlong)puVar7 + lVar8))[1] = uVar3;
      uVar3 = puVar7[3];
      puVar1 = (undefined8 *)((longlong)puVar7 + lVar8 + 0x10);
      *puVar1 = puVar7[2];
      puVar1[1] = uVar3;
      uVar3 = puVar7[5];
      puVar1 = (undefined8 *)((longlong)puVar7 + lVar8 + 0x20);
      *puVar1 = puVar7[4];
      puVar1[1] = uVar3;
      lVar9 = lVar9 + -1;
      puVar7 = puVar7 + 6;
      pTVar5 = pTVar5 + 1;
      pTVar6 = pTVar6 + 1;
    } while (lVar9 != 0);
  }
  return;
}

// ResetParticles @ 14dc0f310

void __thiscall Chaos::FClothingSimulationSolver::ResetParticles(FClothingSimulationSolver *this)

{
  FPBDEvolution *this_00;
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    Softs::FPBDEvolution::ResetParticles(this_00);
    Softs::FPBDEvolution::ResetConstraintRules((this->PBDEvolution).Ptr);
    TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
             *)&this->ClothsConstraints);
    return;
  }
  return;
}

// ResetStartPose @ 14dc10020

void __thiscall
Chaos::FClothingSimulationSolver::ResetStartPose
          (FClothingSimulationSolver *this,int param_1,int param_2)

{
  TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_> *pTVar1;
  TUniquePtr<Chaos::Softs::FEvolution,TDefaultDelete<Chaos::Softs::FEvolution>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  longlong lVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  TVector<float,3> *pTVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  FPAndInvM *local_res20;
  TArrayView<Chaos::TVector<float,3>,int> local_c0;
  TArrayView<Chaos::TVector<float,3>,int> local_b0;
  TArrayView<Chaos::TVector<float,3>,int> local_a0;
  TArrayView<Chaos::TVector<float,3>,int> local_90;
  TArrayView<Chaos::TVector<float,3>,int> local_80;
  TArrayView<Chaos::TVector<float,3>,int> local_70;
  TArrayView<Chaos::TVector<float,3>,int> local_60;
  TArrayView<Chaos::TVector<float,3>,int> local_50;
  
  local_res20 = GetParticlePandInvMs(this,param_1);
  pTVar7 = GetParticleXsView(this,&local_60,param_1);
  pTVar9 = pTVar7->DataPtr;
  pTVar8 = GetParticleVs(this,param_1);
  pTVar1 = &this->PBDEvolution;
  pTVar2 = &this->Evolution;
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (&local_70,pTVar2,pTVar1,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationPositions).field_0x8);
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (&local_a0,pTVar2,pTVar1,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationNormals).field_0x8);
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (&local_90,pTVar2,pTVar1,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldAnimationPositions).field_0x8);
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (&local_80,pTVar2,pTVar1,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->InterpolatedAnimationPositions).field_0x8);
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (&local_50,pTVar2,pTVar1,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->AnimationVelocities).field_0x8);
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (&local_c0,pTVar2,pTVar1,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->OldAnimationNormals).field_0x8);
  Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
            (&local_b0,pTVar2,pTVar1,param_1,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->InterpolatedAnimationNormals).field_0x8);
  uVar13 = 0;
  if (0 < param_2) {
    lVar10 = (longlong)pTVar9 - (longlong)pTVar8;
    pTVar9 = local_c0.DataPtr;
    pTVar11 = pTVar8;
    pTVar12 = local_a0.DataPtr;
    pTVar14 = local_70.DataPtr;
    pTVar15 = local_b0.DataPtr;
    pTVar16 = local_90.DataPtr;
    pTVar17 = local_80.DataPtr;
    do {
      *(undefined8 *)pTVar17 = *(undefined8 *)pTVar14;
      *(undefined4 *)&pTVar17->field_0x8 = *(undefined4 *)&pTVar14->field_0x8;
      *(undefined8 *)pTVar16 = *(undefined8 *)pTVar14;
      *(undefined4 *)&pTVar16->field_0x8 = *(undefined4 *)&pTVar14->field_0x8;
      *(undefined8 *)(lVar10 + (longlong)pTVar11) = *(undefined8 *)pTVar14;
      *(undefined4 *)(lVar10 + 8 + (longlong)pTVar11) = *(undefined4 *)&pTVar14->field_0x8;
      *(undefined8 *)&local_res20->P = *(undefined8 *)pTVar14;
      *(undefined4 *)&(local_res20->P).field_0x8 = *(undefined4 *)&pTVar14->field_0x8;
      *(undefined8 *)pTVar15 = *(undefined8 *)pTVar12;
      *(undefined4 *)&pTVar15->field_0x8 = *(undefined4 *)&pTVar12->field_0x8;
      *(undefined8 *)pTVar9 = *(undefined8 *)pTVar12;
      *(undefined4 *)&pTVar9->field_0x8 = *(undefined4 *)&pTVar12->field_0x8;
      uVar6 = 0;
      if ((int)uVar13 < *(int *)&(this->AnimationVelocities).field_0x10) {
        uVar6 = ~uVar13 >> 0x1f;
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
      uVar13 = uVar13 + 1;
      local_res20 = local_res20 + 1;
      pTVar14 = pTVar14 + 1;
      lVar3 = *(longlong *)&(this->AnimationVelocities).field_0x8;
      pTVar17 = pTVar17 + 1;
      pTVar16 = pTVar16 + 1;
      pTVar12 = pTVar12 + 1;
      pTVar15 = pTVar15 + 1;
      *(undefined8 *)((longlong)pTVar11 + (lVar3 - (longlong)pTVar8)) = 0;
      *(undefined4 *)((longlong)pTVar11 + lVar3 + (8 - (longlong)pTVar8)) = 0;
      *(undefined8 *)pTVar11 = *(undefined8 *)((longlong)pTVar11 + (lVar3 - (longlong)pTVar8));
      pTVar9 = pTVar9 + 1;
      *(undefined4 *)&pTVar11->field_0x8 =
           *(undefined4 *)((longlong)pTVar11 + lVar3 + (8 - (longlong)pTVar8));
      pTVar11 = pTVar11 + 1;
    } while ((int)uVar13 < param_2);
  }
  return;
}

// SetCloths @ 14dc11420

void __thiscall
Chaos::FClothingSimulationSolver::SetCloths
          (FClothingSimulationSolver *this,
          TArray<Chaos::FClothingSimulationCloth_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<Chaos::FClothingSimulationCloth_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FClothingSimulationCloth *this_00;
  FPBDEvolution *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  RemoveCloths(this);
  pTVar1 = &this->Cloths;
  if (pTVar1 != param_1) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Cloths).ArrayNum = param_1->ArrayNum;
    (this->Cloths).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  iVar2 = (this->Cloths).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    this_00 = *(FClothingSimulationCloth **)pFVar7;
    if (this_00 == (FClothingSimulationCloth *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                         ,0x183,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FClothingSimulationCloth::Add(this_00,this);
    FClothingSimulationCloth::PreUpdate(this_00,this);
    FClothingSimulationCloth::Update(this_00,this);
    pFVar7 = pFVar7 + 8;
  }
  pFVar4 = (this->PBDEvolution).Ptr;
  if (pFVar4 != (FPBDEvolution *)0x0) {
    this->CollisionParticlesOffset = (int)(pFVar4->MCollisionParticles)._padding_;
  }
  return;
}

// SetCollisionGeometry @ 14dc118f0

void __thiscall
Chaos::FClothingSimulationSolver::SetCollisionGeometry
          (FClothingSimulationSolver *this,int param_1,int param_2,
          TRefCountPtr<Chaos::FImplicitObject> *param_3)

{
  FEvolution *this_00;
  code *pcVar1;
  bool bVar2;
  FSolverCollisionParticlesRange *pFVar3;
  FSolverCollisionParticles *pFVar4;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    pFVar4 = &((this->PBDEvolution).Ptr)->MCollisionParticles;
                    /* WARNING: Could not recover jumptable at 0x00014dc1198b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,param_1 + param_2,param_3);
    return;
  }
  pFVar3 = Softs::FEvolution::GetCollisionParticleRange(this_00,param_1);
  if (*(longlong *)&pFVar3->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014dc11967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&pFVar3->field_0x8 + 0x10))
            (*(longlong **)&pFVar3->field_0x8,*(int *)&pFVar3->field_0x10 + param_2,param_3);
  return;
}

// SetConfig @ 14dc11bb0

void __thiscall
Chaos::FClothingSimulationSolver::SetConfig
          (FClothingSimulationSolver *this,FClothingSimulationConfig *param_1)

{
  FScriptContainerElement *pFVar1;
  TSharedRef<FManagedArrayCollection,1> *pTVar2;
  FClothingSimulationConfig *this_00;
  FClothingSimulationConfig *pFVar3;
  FClothingSimulationConfig *pFVar4;
  TSharedPtr<FManagedArrayCollection,1> *pTVar5;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> local_68;
  FManagedArrayCollection *local_58;
  FSharedReferencer<1> local_50;
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  TSharedRef<FManagedArrayCollection,1> local_38;
  
  pFVar3 = (FClothingSimulationConfig *)0x0;
  pTVar5 = &this->PropertyCollection;
  if (pTVar5->Object != (FManagedArrayCollection *)0x0) {
    pFVar4 = this->Config;
    if (pFVar4 != (FClothingSimulationConfig *)0x0) {
      DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
                ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                  *)(pFVar4->Properties).AllocatorInstance.Data,(pFVar4->Properties).ArrayNum);
      pFVar1 = (pFVar4->Properties).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
                ((TSharedPtr<FManagedArrayCollection,1> *)
                 (pFVar4->PropertyCollections).AllocatorInstance.Data,
                 (pFVar4->PropertyCollections).ArrayNum);
      pFVar1 = (pFVar4->PropertyCollections).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(pFVar4,0x28);
    }
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TSharedPtr<FManagedArrayCollection,1> *)&local_48) {
      pTVar5->Object = (FManagedArrayCollection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PropertyCollection).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  if (param_1 == (FClothingSimulationConfig *)0x0) {
    pTVar2 = MakeShared<FManagedArrayCollection,1>(&local_38);
    local_50.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
    local_58 = pTVar2->Object;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = &this->PropertyCollection;
    if (pTVar5 != (TSharedPtr<FManagedArrayCollection,1> *)&local_58) {
      pTVar5->Object = local_58;
      local_58 = (FManagedArrayCollection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PropertyCollection).SharedReferenceCount,&local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    this_00 = ::operator_new(0x28);
    pFVar4 = pFVar3;
    if (this_00 != (FClothingSimulationConfig *)0x0) {
      local_38.SharedReferenceCount.ReferenceController =
           (this->PropertyCollection).SharedReferenceCount.ReferenceController;
      local_38.Object = pTVar5->Object;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
      ConstructItems<TSharedPtr<FManagedArrayCollection_const_,1>,TSharedPtr<FManagedArrayCollection_const_,1>,int>
                (local_68.AllocatorInstance.Data,
                 (TSharedPtr<FManagedArrayCollection_const_,1> *)&local_38,1);
      this_00->bIsLegacySingleLOD = false;
      (this_00->PropertyCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->PropertyCollections).ArrayNum = 0;
      (this_00->PropertyCollections).ArrayMax = 0;
      (this_00->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Properties).ArrayNum = 0;
      (this_00->Properties).ArrayMax = 0;
      FClothingSimulationConfig::Initialize(this_00,&local_68);
      pFVar3 = (FClothingSimulationConfig *)&DAT_00000007;
      pFVar4 = this_00;
    }
    this->Config = pFVar4;
    if (((ulonglong)pFVar3 & 4) != 0) {
      pFVar3 = (FClothingSimulationConfig *)(ulonglong)((uint)pFVar3 & 0xfffffffb);
      DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>
                ((TSharedPtr<FManagedArrayCollection_const_,1> *)local_68.AllocatorInstance.Data,
                 local_68.ArrayNum);
      if ((TSharedPtr<FManagedArrayCollection_const_,1> *)local_68.AllocatorInstance.Data !=
          (TSharedPtr<FManagedArrayCollection_const_,1> *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    if (((ulonglong)pFVar3 & 2) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    this->Config = param_1;
  }
  return;
}

// SetGravity @ 14dc11ff0

void __thiscall
Chaos::FClothingSimulationSolver::SetGravity
          (FClothingSimulationSolver *this,uint param_1,TVector<float,3> *param_2)

{
  FPBDEvolution *this_00;
  TVector<float,3> local_18 [2];
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    local_18[0]._0_8_ = *(undefined8 *)param_2;
    local_18[0]._8_4_ = *(undefined4 *)&param_2->field_0x8;
    Softs::FPBDEvolution::SetGravity(this_00,local_18,param_1);
  }
  return;
}

// SetLocalSpaceLocation @ 14dc12290

void __thiscall
Chaos::FClothingSimulationSolver::SetLocalSpaceLocation
          (FClothingSimulationSolver *this,TVector<double,3> *param_1,bool param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->LocalSpaceLocation = *(undefined8 *)param_1;
  *(undefined8 *)&(this->LocalSpaceLocation).field_0x8 = uVar1;
  *(undefined8 *)&(this->LocalSpaceLocation).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  if (param_2) {
    uVar1 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&this->OldLocalSpaceLocation = *(undefined8 *)param_1;
    *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x8 = uVar1;
    *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  }
  return;
}

// SetLocalSpaceScale @ 14dc122d0

void __thiscall
Chaos::FClothingSimulationSolver::SetLocalSpaceScale
          (FClothingSimulationSolver *this,double param_1,bool param_2)

{
  this->LocalSpaceScale = param_1;
  if (param_2) {
    this->OldLocalSpaceScale = param_1;
  }
  return;
}

// SetParticleMassFromDensity @ 14dc13d20

void __thiscall
Chaos::FClothingSimulationSolver::SetParticleMassFromDensity
          (FClothingSimulationSolver *this,int param_1,TVector2<float> *param_2,
          TArrayView<float_const_,int> *param_3,float param_4,FTriangleMesh *param_5,
          TFunctionRef<bool___cdecl(int)> *param_6)

{
  FEvolution *this_00;
  int iVar1;
  FSolverParticlesRange *pFVar2;
  float local_res8;
  float fStackX_c;
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    iVar1 = Softs::FPBDEvolution::GetParticleRangeSize((this->PBDEvolution).Ptr,param_1);
    SetParticleMassPerArea(this,param_1,iVar1,param_5);
    fStackX_c = (param_2->field0_0x0)._s_0.Y * __real_38d1b717;
    local_res8 = (param_2->field0_0x0)._s_0.X * __real_38d1b717;
    ParticleMassUpdateDensity(this,param_5,param_1,iVar1,(TVector<float,2> *)&local_res8,param_3);
    ParticleMassClampAndKinematicStateUpdate(this,param_1,iVar1,param_4,param_6);
  }
  else {
    pFVar2 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    SetParticleMassPerArea(this,pFVar2,param_5);
    fStackX_c = (param_2->field0_0x0)._s_0.Y * __real_38d1b717;
    local_res8 = (param_2->field0_0x0)._s_0.X * __real_38d1b717;
    ParticleMassUpdateDensity(this,pFVar2,param_5,(TVector<float,2> *)&local_res8,param_3);
    ParticleMassClampAndKinematicStateUpdate(this,pFVar2,param_4,param_6);
  }
  return;
}

// SetParticleMassFromTotalMass @ 14dc13e80

void __thiscall
Chaos::FClothingSimulationSolver::SetParticleMassFromTotalMass
          (FClothingSimulationSolver *this,int param_1,float param_2,float param_3,
          FTriangleMesh *param_4,TFunctionRef<bool___cdecl(int)> *param_5)

{
  FEvolution *this_00;
  int iVar1;
  FSolverParticlesRange *pFVar2;
  float fVar3;
  float local_res8;
  float local_resc;
  TArrayView<float_const_,int> local_38 [3];
  
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    iVar1 = Softs::FPBDEvolution::GetParticleRangeSize((this->PBDEvolution).Ptr,param_1);
    fVar3 = SetParticleMassPerArea(this,param_1,iVar1,param_4);
    local_res8 = __real_3f800000;
    if (0.0 < fVar3) {
      local_res8 = param_2 / fVar3;
    }
    local_38[0].DataPtr = (float *)0x0;
    local_38[0].ArrayNum = 0;
    local_resc = local_res8;
    ParticleMassUpdateDensity(this,param_4,param_1,iVar1,(TVector<float,2> *)&local_res8,local_38);
    ParticleMassClampAndKinematicStateUpdate(this,param_1,iVar1,param_3,param_5);
  }
  else {
    pFVar2 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    fVar3 = SetParticleMassPerArea(this,pFVar2,param_4);
    local_res8 = __real_3f800000;
    if (0.0 < fVar3) {
      local_res8 = param_2 / fVar3;
    }
    local_38[0].DataPtr = (float *)0x0;
    local_38[0].ArrayNum = 0;
    local_resc = local_res8;
    ParticleMassUpdateDensity(this,pFVar2,param_4,(TVector<float,2> *)&local_res8,local_38);
    ParticleMassClampAndKinematicStateUpdate(this,pFVar2,param_3,param_5);
  }
  return;
}

// SetParticleMassPerArea @ 14dc14000

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Chaos::FClothingSimulationSolver::SetParticleMassPerArea
          (FClothingSimulationSolver *this,FSolverParticlesRange *param_1,FTriangleMesh *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  uint uVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  ulonglong uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_res10 [8];
  FTriangleMesh *local_res18;
  int local_res20;
  
  iVar12 = 0;
  local_res18 = param_2;
  if (0 < *(int *)&param_1->field_0x14) {
    do {
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          fVar15 = (float)(*pcVar5)();
          return fVar15;
        }
      }
      pfVar8 = TDynamicParticles<float,3>::M
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar12);
      iVar12 = iVar12 + 1;
      *pfVar8 = 0.0;
    } while (iVar12 < *(int *)&param_1->field_0x14);
  }
  fVar6 = __real_3eaaaaab;
  fVar15 = __real_3f000000;
  uVar4 = (param_2->MElements).ArrayNum;
  uVar11 = (ulonglong)(int)uVar4;
  fVar22 = 0.0;
  pFVar13 = (param_2->MElements).AllocatorInstance.Data;
  pFVar2 = pFVar13 + uVar11 * 0xc;
  while( true ) {
    if ((param_2->MElements).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar13 == pFVar2) break;
    iVar12 = *(int *)(pFVar13 + 8);
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    puVar14 = &param_1->field_0x8;
    puVar1 = &param_1->field_0x10;
    pTVar9 = TParticles<float,3>::X
                       (*(TParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar12);
    local_res20 = *(int *)pFVar13;
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    pTVar10 = TParticles<float,3>::X
                        (*(TParticles<float,3> **)&param_1->field_0x8,local_res20 + *(int *)puVar1);
    fVar18 = *(float *)pTVar9;
    fVar20 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
    fVar21 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
    fVar3 = *(float *)pTVar10;
    local_res20 = *(int *)(pFVar13 + 4);
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    pTVar9 = TParticles<float,3>::X(*(TParticles<float,3> **)puVar14,local_res20 + *(int *)puVar1);
    local_res20 = *(int *)pFVar13;
    if (*(longlong *)puVar14 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    pTVar10 = TParticles<float,3>::X(*(TParticles<float,3> **)puVar14,local_res20 + *(int *)puVar1);
    fVar19 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
    fVar16 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
    local_res20 = *(int *)pFVar13;
    fVar17 = fVar16 * fVar20 - fVar19 * fVar21;
    fVar20 = fVar19 * (fVar18 - fVar3) - (*(float *)pTVar9 - *(float *)pTVar10) * fVar20;
    fVar18 = (*(float *)pTVar9 - *(float *)pTVar10) * fVar21 - fVar16 * (fVar18 - fVar3);
    fVar18 = SQRT(fVar20 * fVar20 + fVar17 * fVar17 + fVar18 * fVar18) * fVar15;
    fVar22 = fVar22 + fVar18;
    fVar18 = fVar18 * fVar6;
    if (*(longlong *)puVar14 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    pfVar8 = TDynamicParticles<float,3>::M
                       (*(TDynamicParticles<float,3> **)puVar14,local_res20 + *(int *)puVar1);
    *pfVar8 = fVar18 + *pfVar8;
    iVar12 = *(int *)(pFVar13 + 4);
    if (*(longlong *)puVar14 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    pfVar8 = TDynamicParticles<float,3>::M
                       (*(TDynamicParticles<float,3> **)puVar14,*(int *)puVar1 + iVar12);
    *pfVar8 = fVar18 + *pfVar8;
    iVar12 = *(int *)(pFVar13 + 8);
    if (*(longlong *)puVar14 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    pfVar8 = TDynamicParticles<float,3>::M
                       (*(TDynamicParticles<float,3> **)puVar14,*(int *)puVar1 + iVar12);
    pFVar13 = pFVar13 + 0xc;
    uVar11 = (ulonglong)uVar4;
    *pfVar8 = fVar18 + *pfVar8;
    param_2 = local_res18;
  }
  if (5 < (byte)LogChaosCloth._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
  }
  return fVar22;
}

// SetParticleMassPerArea @ 14dc144e0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Chaos::FClothingSimulationSolver::SetParticleMassPerArea
          (FClothingSimulationSolver *this,int param_1,int param_2,FTriangleMesh *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  FPBDEvolution *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FSolverParticles *this_00;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_res10 [8];
  
  uVar12 = (ulonglong)param_1;
  if ((this->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PBDEvolution",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                       ,0x55d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      fVar15 = (float)(*pcVar5)();
      return fVar15;
    }
  }
  pFVar4 = (this->PBDEvolution).Ptr;
  this_00 = &pFVar4->MParticles;
  if (param_1 < param_1 + param_2) {
    lVar14 = uVar12 * 4;
    do {
      uVar11 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar11 < (int)(pFVar4->MParticles)._padding_) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          fVar15 = (float)(*pcVar5)();
          return fVar15;
        }
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(undefined4 *)(lVar14 + (pFVar4->MParticles)._padding_) = 0;
      lVar14 = lVar14 + 4;
    } while ((int)(uVar11 + 1) < param_1 + param_2);
  }
  fVar6 = __real_3eaaaaab;
  fVar15 = __real_3f000000;
  iVar3 = (param_3->MElements).ArrayNum;
  fVar22 = 0.0;
  pFVar13 = (param_3->MElements).AllocatorInstance.Data;
  pFVar1 = pFVar13 + (longlong)iVar3 * 0xc;
  while( true ) {
    if ((param_3->MElements).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar13 == pFVar1) break;
    pTVar9 = TParticles<float,3>::X((TParticles<float,3> *)this_00,*(uint *)(pFVar13 + 8));
    pTVar10 = TParticles<float,3>::X((TParticles<float,3> *)this_00,*(uint *)pFVar13);
    fVar18 = *(float *)pTVar9;
    fVar20 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
    fVar21 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
    fVar2 = *(float *)pTVar10;
    pTVar9 = TParticles<float,3>::X((TParticles<float,3> *)this_00,*(uint *)(pFVar13 + 4));
    pTVar10 = TParticles<float,3>::X((TParticles<float,3> *)this_00,*(uint *)pFVar13);
    fVar19 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
    fVar16 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
    uVar8 = *(uint *)pFVar13;
    uVar11 = 0;
    if ((int)uVar8 < (int)(pFVar4->MParticles)._padding_) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    fVar17 = fVar16 * fVar20 - fVar19 * fVar21;
    fVar19 = fVar19 * (fVar18 - fVar2) - (*(float *)pTVar9 - *(float *)pTVar10) * fVar20;
    fVar18 = (*(float *)pTVar9 - *(float *)pTVar10) * fVar21 - fVar16 * (fVar18 - fVar2);
    fVar18 = SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18) * fVar15;
    fVar22 = fVar22 + fVar18;
    fVar18 = fVar18 * fVar6;
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    lVar14 = (pFVar4->MParticles)._padding_;
    *(float *)(lVar14 + (longlong)(int)uVar8 * 4) =
         fVar18 + *(float *)(lVar14 + (longlong)(int)uVar8 * 4);
    uVar8 = *(uint *)(pFVar13 + 4);
    uVar11 = 0;
    if ((int)uVar8 < (int)(pFVar4->MParticles)._padding_) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    lVar14 = (pFVar4->MParticles)._padding_;
    *(float *)(lVar14 + (longlong)(int)uVar8 * 4) =
         fVar18 + *(float *)(lVar14 + (longlong)(int)uVar8 * 4);
    uVar8 = *(uint *)(pFVar13 + 8);
    uVar11 = 0;
    if ((int)uVar8 < (int)(pFVar4->MParticles)._padding_) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        fVar15 = (float)(*pcVar5)();
        return fVar15;
      }
    }
    lVar14 = (pFVar4->MParticles)._padding_;
    pFVar13 = pFVar13 + 0xc;
    *(float *)(lVar14 + (longlong)(int)uVar8 * 4) =
         fVar18 + *(float *)(lVar14 + (longlong)(int)uVar8 * 4);
  }
  if (5 < (byte)LogChaosCloth._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
  }
  return fVar22;
}

// SetParticleMassUniform @ 14dc148d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClothingSimulationSolver::SetParticleMassUniform
          (FClothingSimulationSolver *this,int param_1,TVector2<float> *param_2,
          TArrayView<float_const_,int> *param_3,float param_4,FTriangleMesh *param_5,
          TFunctionRef<bool___cdecl(int)> *param_6)

{
  int iVar1;
  FEvolution *this_00;
  FPBDEvolution *pFVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FSolverParticlesRange *pFVar9;
  float *pfVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStackY_1f8 [32];
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  TArrayView<float_const_,int> local_1a0;
  float local_190;
  float local_18c;
  int local_188;
  TArrayView<float_const_,int> local_180;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_148;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  ulonglong local_a8;
  
  __return_storage_ptr__ = &local_f8;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = (this->Evolution).Ptr;
  if (this_00 == (FEvolution *)0x0) {
    iVar7 = Softs::FPBDEvolution::GetParticleRangeSize((this->PBDEvolution).Ptr,param_1);
    lVar15 = (longlong)iVar7;
    if (param_3->ArrayNum == iVar7) {
      local_180.ArrayNum = param_3->ArrayNum;
      uStack_14c = *(undefined4 *)&param_3->field_0xc;
      local_180.DataPtr._0_4_ = *(undefined4 *)&param_3->DataPtr;
      local_180.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    }
    else {
      local_158 = 0;
      uStack_150 = 0;
      local_158._0_4_ = 0;
      local_158._4_4_ = 0;
      local_180.ArrayNum = 0;
      local_180.DataPtr._0_4_ = (undefined4)local_158;
      local_180.DataPtr._4_4_ = local_158._4_4_;
    }
    local_1c0 = (param_2->field0_0x0)._s_0.X;
    fStack_1bc = (param_2->field0_0x0)._s_0.Y;
    fStack_1bc = fStack_1bc - local_1c0;
    local_170 = local_1c0;
    local_188 = iVar7;
    local_180._12_4_ = uStack_14c;
    local_16c = fStack_1bc;
    FTriangleMesh::GetVertices(param_5,__return_storage_ptr__);
    uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar4 = __real_38d1b717;
    pFVar2 = (this->PBDEvolution).Ptr;
    if (0 < iVar7) {
      lVar14 = (longlong)param_1 * 4;
      uVar12 = param_1;
      do {
        if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_f8.Hash;
          if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_f8.Hash.SecondaryData;
          }
          for (iVar1 = *(int *)((longlong)FVar11 + (ulonglong)(local_f8.HashSize - 1U & uVar12) * 4)
              ; iVar1 != -1; iVar1 = *(int *)(local_f8.Elements._0_8_ + 4 + (longlong)iVar1 * 0xc))
          {
            if (*(uint *)(local_f8.Elements._0_8_ + (longlong)iVar1 * 0xc) == uVar12) {
              fVar16 = local_1c0;
              if ((0 < local_180.ArrayNum) && (fVar4 < (float)((uint)fStack_1bc & uVar5))) {
                pfVar10 = TArrayView<float_const_,int>::operator[](&local_180,uVar12 - param_1);
                fVar16 = fStack_1bc * *pfVar10 + local_1c0;
              }
              goto LAB_14dc14bdc;
            }
          }
        }
        fVar16 = 0.0;
LAB_14dc14bdc:
        uVar8 = 0;
        if ((int)uVar12 < (int)(pFVar2->MParticles)._padding_) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = uVar12 + 1;
        *(float *)(lVar14 + (pFVar2->MParticles)._padding_) = fVar16;
        lVar14 = lVar14 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    ParticleMassClampAndKinematicStateUpdate(this,param_1,iVar7,param_4,param_6);
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
  }
  else {
    pFVar9 = Softs::FEvolution::GetSoftBodyParticles(this_00,param_1);
    uVar13 = 0;
    if (param_3->ArrayNum == *(int *)&pFVar9->field_0x14) {
      local_1a0.ArrayNum = param_3->ArrayNum;
      uStack_15c = *(undefined4 *)&param_3->field_0xc;
      local_1a0.DataPtr._0_4_ = *(undefined4 *)&param_3->DataPtr;
      local_1a0.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    }
    else {
      local_168 = 0;
      uStack_160 = 0;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0;
      local_1a0.ArrayNum = 0;
      local_1a0.DataPtr._0_4_ = (undefined4)local_168;
      local_1a0.DataPtr._4_4_ = local_168._4_4_;
    }
    local_1c8 = (param_2->field0_0x0)._s_0.X;
    fStack_1c4 = (param_2->field0_0x0)._s_0.Y;
    fStack_1c4 = fStack_1c4 - local_1c8;
    local_190 = local_1c8;
    local_1a0._12_4_ = uStack_15c;
    local_18c = fStack_1c4;
    FTriangleMesh::GetVertices(param_5,&local_148);
    uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar4 = __real_38d1b717;
    if (0 < *(int *)&pFVar9->field_0x14) {
      do {
        iVar7 = (int)uVar13;
        if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_148.Hash;
          if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_148.Hash.SecondaryData;
          }
          for (iVar1 = *(int *)((longlong)FVar11 + (local_148.HashSize - 1 & uVar13) * 4);
              iVar1 != -1; iVar1 = *(int *)(local_148.Elements._0_8_ + 4 + (longlong)iVar1 * 0xc)) {
            if (*(int *)(local_148.Elements._0_8_ + (longlong)iVar1 * 0xc) == iVar7) {
              fVar16 = local_1c8;
              if ((0 < local_1a0.ArrayNum) && (fVar4 < (float)((uint)fStack_1c4 & uVar5))) {
                pfVar10 = TArrayView<float_const_,int>::operator[](&local_1a0,iVar7);
                fVar16 = fStack_1c4 * *pfVar10 + local_1c8;
              }
              goto LAB_14dc14a2c;
            }
          }
        }
        fVar16 = 0.0;
LAB_14dc14a2c:
        if ((*(longlong *)&pFVar9->field_0x8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pfVar10 = TDynamicParticles<float,3>::M
                            (*(TDynamicParticles<float,3> **)&pFVar9->field_0x8,
                             *(int *)&pFVar9->field_0x10 + iVar7);
        uVar13 = (ulonglong)(iVar7 + 1U);
        *pfVar10 = fVar16;
      } while ((int)(iVar7 + 1U) < *(int *)&pFVar9->field_0x14);
    }
    ParticleMassClampAndKinematicStateUpdate(this,pFVar9,param_4,param_6);
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    __return_storage_ptr__ = &local_148;
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&__return_storage_ptr__->Elements);
  return;
}

// SetProperties @ 14dc14f30

void __thiscall
Chaos::FClothingSimulationSolver::SetProperties
          (FClothingSimulationSolver *this,int param_1,FCollectionPropertyConstFacade *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3)

{
  float fVar1;
  undefined4 uVar2;
  FEvolution *pFVar3;
  longlong lVar4;
  longlong lVar5;
  FExternalForces *pFVar6;
  code *pcVar7;
  TConsoleVariableData<float> *pTVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FClothConstraints *pFVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  
  pFVar3 = (this->Evolution).Ptr;
  if (pFVar3 != (FEvolution *)0x0) {
    lVar16 = 0;
    uVar14 = 0;
    if (param_1 < *(int *)&(pFVar3->SoftBodies).GroupId.field_0x10) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar14 = *(uint *)(*(longlong *)&(pFVar3->SoftBodies).GroupId.field_0x8 + (longlong)param_1 * 4)
    ;
    pFVar3 = (this->Evolution).Ptr;
    uVar15 = ~uVar14 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar14 < *(int *)&(this->AppliedReferenceSpaceAngularVelocities).field_0x10) {
      uVar11 = uVar15;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar4 = *(longlong *)&(this->AppliedReferenceSpaceAngularVelocities).field_0x8;
    lVar17 = (longlong)(int)uVar14 * 0xc;
    uVar12 = 0;
    uVar11 = uVar12;
    if ((int)uVar14 < *(int *)&(this->AppliedReferenceSpaceVelocities).field_0x10) {
      uVar11 = uVar15;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar5 = *(longlong *)&(this->AppliedReferenceSpaceVelocities).field_0x8;
    uVar11 = uVar12;
    if ((int)uVar14 < *(int *)&(this->ReferenceSpaceLocations).field_0x10) {
      uVar11 = uVar15;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    Softs::FEvolution::SetSoftBodyProperties
              (pFVar3,param_1,param_2,param_3,
               (TVector<float,3> *)
               (*(longlong *)&(this->ReferenceSpaceLocations).field_0x8 + lVar17),
               (TVector<float,3> *)(lVar5 + lVar17),(TVector<float,3> *)(lVar4 + lVar17));
    pFVar13 = GetClothConstraints(this,param_1);
    fVar1 = this->LegacyWindAdaption;
    uVar11 = uVar12;
    if ((int)uVar14 < *(int *)&(this->ReferenceSpaceLocations).field_0x10) {
      uVar11 = uVar15;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar4 = *(longlong *)&(this->ReferenceSpaceLocations).field_0x8;
    if ((int)uVar14 < *(int *)&(this->FictitiousAngularVelocities).field_0x10) {
      uVar12 = uVar15;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar8 = ClothingSimulationClothConsoleVariables::CVarGravityMultiplier.Ref;
    pFVar6 = (pFVar13->ExternalForces).Object;
    bVar9 = this->bIsClothGravityOverrideEnabled;
    lVar5 = *(longlong *)&(this->FictitiousAngularVelocities).field_0x8;
    if (pFVar6 != (FExternalForces *)0x0) {
      bVar10 = IsInParallelGameThread();
      if (!bVar10) {
        bVar10 = IsInGameThread();
        if (!bVar10) {
          lVar16 = 4;
        }
      }
      pFVar6->WorldGravityMultiplier = *(float *)((longlong)pTVar8->ShadowedValue + lVar16);
      if ((pFVar13->ExternalForces).Object == (FExternalForces *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = (pFVar13->ExternalForces).Object;
      *(undefined8 *)&pFVar6->SolverGravity = *(undefined8 *)&this->Gravity;
      *(undefined4 *)&(pFVar6->SolverGravity).field_0x8 = *(undefined4 *)&(this->Gravity).field_0x8;
      pFVar6->bPerSoftBodyGravityOverrideEnabled = bVar9;
      if ((pFVar13->ExternalForces).Object == (FExternalForces *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = (pFVar13->ExternalForces).Object;
      *(undefined8 *)&pFVar6->FictitiousAngularVelocityNoScale = *(undefined8 *)(lVar17 + lVar5);
      *(undefined4 *)&(pFVar6->FictitiousAngularVelocityNoScale).field_0x8 =
           *(undefined4 *)(lVar17 + 8 + lVar5);
      *(undefined8 *)((longlong)&pFVar6->_padding_ + 4) = *(undefined8 *)(lVar17 + lVar4);
      *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = *(undefined4 *)(lVar17 + 8 + lVar4);
      if ((pFVar13->ExternalForces).Object == (FExternalForces *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = (pFVar13->ExternalForces).Object;
      *(undefined8 *)((longlong)&pFVar6->_padding_ + 4) = *(undefined8 *)&this->WindVelocity;
      uVar2 = *(undefined4 *)&(this->WindVelocity).field_0x8;
      *(float *)&pFVar6->_padding_ = fVar1;
      *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = uVar2;
    }
    *(undefined8 *)&pFVar13->SolverWindVelocity = *(undefined8 *)&this->WindVelocity;
    *(undefined4 *)&(pFVar13->SolverWindVelocity).field_0x8 =
         *(undefined4 *)&(this->WindVelocity).field_0x8;
  }
  return;
}

// SetProperties @ 14dc15360

void __thiscall
Chaos::FClothingSimulationSolver::SetProperties
          (FClothingSimulationSolver *this,uint param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  FPBDEvolution *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  pFVar1 = (this->PBDEvolution).Ptr;
  lVar5 = (longlong)(int)param_1;
  if (pFVar1 != (FPBDEvolution *)0x0) {
    if (*(uint *)&pFVar1->field_0x18 <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupId < TArrayCollection::Size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                         ,0xa1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = ~param_1 >> 0x1f;
    uVar4 = 0;
    if ((int)param_1 < *(int *)&(pFVar1->MGroupDampings).field_0x10) {
      uVar4 = uVar6;
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
    *(float *)(*(longlong *)&(pFVar1->MGroupDampings).field_0x8 + lVar5 * 4) = param_2;
    pFVar1 = (this->PBDEvolution).Ptr;
    if (*(uint *)&pFVar1->field_0x18 <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupId < TArrayCollection::Size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                         ,0xa4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = 0;
    if ((int)param_1 < *(int *)&(pFVar1->MGroupLocalDampings).field_0x10) {
      uVar4 = uVar6;
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
    *(float *)(*(longlong *)&(pFVar1->MGroupLocalDampings).field_0x8 + lVar5 * 4) = param_3;
    pFVar1 = (this->PBDEvolution).Ptr;
    if (*(uint *)&pFVar1->field_0x18 <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupId < TArrayCollection::Size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                         ,0x9b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = 0;
    if ((int)param_1 < *(int *)&(pFVar1->MGroupCollisionThicknesses).field_0x10) {
      uVar4 = uVar6;
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
    *(float *)(*(longlong *)&(pFVar1->MGroupCollisionThicknesses).field_0x8 + lVar5 * 4) = param_4;
    pFVar1 = (this->PBDEvolution).Ptr;
    if (*(uint *)&pFVar1->field_0x18 <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupId < TArrayCollection::Size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                         ,0x9e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = 0;
    if ((int)param_1 < *(int *)&(pFVar1->MGroupCoefficientOfFrictions).field_0x10) {
      uVar4 = uVar6;
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
    *(float *)(*(longlong *)&(pFVar1->MGroupCoefficientOfFrictions).field_0x8 + lVar5 * 4) = param_5
    ;
  }
  return;
}

// SetReferenceVelocityScale @ 14dc17860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothingSimulationSolver::SetReferenceVelocityScale
          (FClothingSimulationSolver *this,uint param_1,TRigidTransform<double,3> *param_2,
          TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,TVector<double,3> *param_5,
          EChaosSoftsSimulationSpace param_6,TVector<float,3> *param_7,TVector<float,3> *param_8,
          TVector<float,3> *param_9,float param_10,float param_11,float param_12,float param_13,
          float param_14,bool param_15)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  ulonglong uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  undefined4 extraout_EAX;
  int iVar11;
  TVector<double> *pTVar12;
  char *pcVar13;
  TQuat<double> *pTVar14;
  TRotation<double,3> *this_00;
  TVector<float,3> *pTVar15;
  TVector<double>_u_0 *pTVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double extraout_XMM0_Qa;
  double dVar39;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar40;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar70;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar78;
  uint uVar79;
  float fVar80;
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uVar87;
  uint uVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  float fVar104;
  double dVar105;
  undefined8 uVar106;
  double dVar107;
  undefined4 uVar108;
  undefined1 auStack_7f8 [32];
  longlong local_7d8;
  longlong local_7d0;
  uint local_7c8;
  double local_7c0;
  double local_7b8;
  double local_7a8 [2];
  TRigidTransform<double,3> *local_798;
  double local_790;
  double dStack_788;
  double local_780;
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  double local_758 [2];
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  double local_728;
  double local_718;
  double dStack_710;
  undefined1 local_708 [16];
  double local_6f8;
  undefined1 local_6e8 [16];
  TVector<double>_u_0 local_6d8;
  double local_6c0;
  double dStack_6b8;
  double local_6b0;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  double local_698 [2];
  double local_688;
  double local_680 [2];
  double local_670;
  double dStack_668;
  double local_660;
  undefined1 local_658 [16];
  double local_648;
  double local_630;
  double local_628;
  double local_620;
  undefined1 local_618 [16];
  double local_608;
  TVector<double>_u_0 local_5f8;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 local_5b8;
  TVector<double>_u_0 local_598;
  TVector<double>_u_0 local_578;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_518;
  undefined1 local_4f8 [16];
  double local_4e8;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  TQuat<double> local_498;
  double local_478;
  double dStack_470;
  double local_468;
  undefined1 local_460 [16];
  double local_450;
  double local_448;
  double dStack_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408 [2];
  double local_3f8 [2];
  double local_3e8 [2];
  double local_3d8 [2];
  double local_3c8 [2];
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  TVector<double> local_398;
  TVector<double> local_380;
  TVector<double> local_368;
  TVector<double> local_350;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_7f8;
  local_338.Rotation.XY.m128d_f64[0] = *(double *)param_2;
  local_338.Rotation.XY.m128d_f64[1] = *(double *)&param_2->field_0x8;
  local_338.Rotation.ZW.m128d_f64[0] = *(double *)&param_2->field_0x10;
  local_338.Rotation.ZW.m128d_f64[1] = *(double *)&param_2->field_0x18;
  uVar106 = *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x10;
  local_338.Scale3D.XY.m128d_f64[0] = *(double *)&param_2->field_0x40;
  local_338.Scale3D.XY.m128d_f64[1] = *(double *)&param_2->field_0x48;
  uVar78 = (uint)__xmm_80000000000000008000000000000000;
  uVar87 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_468 = (double)CONCAT44((uint)((ulonglong)uVar106 >> 0x20) ^ uVar87,(uint)uVar106 ^ uVar78);
  local_478 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->OldLocalSpaceLocation >> 0x20
                                     ) ^ uVar87,
                               (uint)*(undefined8 *)&this->OldLocalSpaceLocation ^ uVar78);
  local_338.Scale3D.ZW.m128d_f64[0]._0_4_ = (uint)*(undefined8 *)&param_2->field_0x50;
  local_338.Scale3D.ZW.m128d_f64[0]._4_4_ =
       (uint)((ulonglong)*(undefined8 *)&param_2->field_0x50 >> 0x20);
  local_338.Scale3D.ZW.m128d_f64[1]._0_4_ = (uint)*(undefined8 *)&param_2->field_0x58;
  local_338.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (uint)((ulonglong)*(undefined8 *)&param_2->field_0x58 >> 0x20);
  uVar106 = *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x8;
  dStack_470 = (double)CONCAT44((uint)((ulonglong)uVar106 >> 0x20) ^ uVar87,(uint)uVar106 ^ uVar78);
  local_338.Translation.XY.m128d_f64[0] = *(double *)&param_2->field_0x20 + local_478;
  local_338.Translation.XY.m128d_f64[1] = *(double *)&param_2->field_0x28 + dStack_470;
  local_338.Translation.ZW.m128d_f64[0] = *(double *)&param_2->field_0x30 + local_468;
  local_338.Translation.ZW.m128d_f64[1] = *(double *)&param_2->field_0x38 + 0.0;
  pcVar13 = (char *)this;
  local_7c8 = param_1;
  local_798 = param_3;
  if (this->OldLocalSpaceScale <= __real_3e45798ee0000000) {
    pcVar13 = "OldLocalSpaceScale > (1.e-8f)";
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("OldLocalSpaceScale > (1.e-8f)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                        ,0x46b,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar42 = __real_3ff0000000000000;
  uVar40 = SUB84(pcVar13,0);
  local_430 = __real_3ff0000000000000 / this->OldLocalSpaceScale;
  local_338.Translation.XY.m128d_f64[0] = local_338.Translation.XY.m128d_f64[0] * local_430;
  local_338.Translation.XY.m128d_f64[1] = local_338.Translation.XY.m128d_f64[1] * local_430;
  local_338.Translation.ZW.m128d_f64[0] = local_338.Translation.ZW.m128d_f64[0] * local_430;
  local_338.Translation.ZW.m128d_f64[1] = local_338.Translation.ZW.m128d_f64[1] * 0.0;
  local_698[0] = *(double *)&param_5->field_0x0;
  local_698[1] = *(double *)&param_5->field_0x8;
  local_4e8 = *(double *)&param_5->field_0x10;
  dVar81 = __real_3ff0000000000000;
  if (bClothSolverUseVelocityScale != false) {
    dVar81 = this->VelocityScale;
  }
  auVar62 = *(undefined1 (*) [16])&local_798->field_0x10;
  dVar25 = auVar62._0_8_;
  dVar53 = *(double *)local_798;
  dVar27 = *(double *)&local_798->field_0x8;
  dVar75 = *(double *)param_2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar41 = *(double *)&param_2->field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar102 = SUB84(dVar41,0);
  uVar103 = (undefined4)((ulonglong)dVar41 >> 0x20);
  dVar105 = *(double *)&param_2->field_0x10 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar107 = *(double *)&param_2->field_0x18 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_648 = *(double *)&local_798->field_0x30 - *(double *)&param_2->field_0x30;
  uVar106 = *(double *)&local_798->field_0x20 - *(double *)&param_2->field_0x20;
  uVar70 = *(double *)&local_798->field_0x28 - *(double *)&param_2->field_0x28;
  uVar100 = (undefined4)uVar70;
  uVar101 = (undefined4)((ulonglong)uVar70 >> 0x20);
  uVar108 = (undefined4)((ulonglong)dVar107 >> 0x20);
  auVar93._8_4_ = SUB84(dVar107,0);
  auVar93._0_8_ = dVar105;
  auVar93._12_4_ = uVar108;
  local_758[0] = auVar93._8_8_;
  dVar26 = auVar62._8_8_;
  auVar61._8_8_ = dVar25;
  auVar61._0_8_ = dVar26;
  auVar92._8_4_ = auVar62._0_4_;
  auVar92._0_8_ = dVar26;
  auVar92._12_4_ = auVar62._4_4_;
  auVar43._8_4_ = uVar102;
  auVar43._0_8_ = dVar41;
  auVar43._12_4_ = uVar103;
  auVar62._8_4_ = SUB84(dVar105,0);
  auVar62._0_8_ = dVar105;
  uVar71 = (undefined4)((ulonglong)dVar105 >> 0x20);
  auVar62._12_4_ = uVar71;
  local_3b8._8_4_ = uVar102;
  local_3b8._0_8_ = dVar75;
  local_3b8._12_4_ = uVar103;
  auVar44._8_4_ = uVar102;
  auVar44._0_8_ = dVar41;
  auVar44._12_4_ = uVar103;
  dVar91 = dVar26 * dVar75 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_758[0] * dVar53 +
           dVar41 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar105 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_7a8[1] = auVar92._8_8_ * dVar75 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar107 * dVar27
                 + auVar43._8_8_ * dVar26 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar62._8_8_ * dVar53 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar52 = auVar44._8_8_ * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  local_4b8._8_4_ = uVar102;
  local_4b8._0_8_ = dVar75;
  local_4b8._12_4_ = uVar103;
  auVar60._8_4_ = SUB84(dVar105,0);
  auVar60._0_8_ = dVar105;
  auVar60._12_4_ = uVar71;
  dVar39 = auVar60._8_8_ * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_6e8._8_4_ = uVar100;
  local_6e8._0_8_ = uVar106;
  local_6e8._12_4_ = uVar101;
  dVar27 = dVar75 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           local_758[0] * dVar25 +
           dVar41 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar105 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_748._8_8_ =
       dVar75 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
       dVar107 * dVar26 + dVar52 + dVar39;
  auVar4._4_8_ = dVar39;
  auVar4._0_4_ = (int)((ulonglong)dVar91 >> 0x20);
  auVar68._0_8_ = auVar4._0_8_ << 0x20;
  auVar68._8_4_ = SUB84(local_7a8[1],0);
  auVar68._12_4_ = (int)((ulonglong)local_7a8[1] >> 0x20);
  auVar5._4_8_ = dVar52;
  auVar5._0_4_ = (int)((ulonglong)dVar27 >> 0x20);
  auVar45._0_8_ = auVar5._0_8_ << 0x20;
  auVar45._8_4_ = (int)local_748._8_8_;
  auVar45._12_4_ = (int)((ulonglong)local_748._8_8_ >> 0x20);
  local_748._0_8_ = auVar45._8_8_;
  local_7a8[0] = (double)auVar68._8_8_;
  local_7c0 = __real_bff0000000000000;
  local_658._8_4_ = uVar100;
  local_658._0_8_ = uVar106;
  local_658._12_4_ = uVar101;
  dVar53 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= (double)local_748._0_8_) &&
     (dVar53 = (double)local_748._0_8_, __real_3ff0000000000000 <= (double)local_748._0_8_)) {
    dVar53 = __real_3ff0000000000000;
  }
  local_768 = dVar105;
  dStack_760 = dVar105;
  local_4a8 = dVar105;
  dStack_4a0 = dVar107;
  dStack_428 = local_430;
  local_420 = local_430;
  local_3a8 = dVar105;
  dStack_3a0 = dVar107;
  local_758[1] = dVar107;
  local_6f8 = acos(dVar53);
  local_6f8 = local_6f8 + local_6f8;
  auVar28._8_4_ = local_7a8[0]._0_4_;
  auVar28._0_8_ = dVar91;
  auVar28._12_4_ = local_7a8[0]._4_4_;
  dVar53 = dVar27 * dVar27 + dVar91 * dVar91;
  dVar39 = auVar28._8_8_ * local_7a8[0] + 0.0;
  auVar29._8_4_ = SUB84(dVar39,0);
  auVar29._0_8_ = dVar53;
  auVar29._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  auVar30._0_8_ = auVar29._8_8_ + dVar53;
  auVar30._8_8_ = dVar53 + dVar39;
  auVar62 = sqrtpd(auVar61,auVar30);
  uVar17 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar30._0_8_);
  uVar21 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar30._8_8_);
  auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar62);
  uVar18 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar30._0_8_);
  local_618._0_8_ = uVar17 & (ulonglong)(auVar93._0_8_ * dVar91);
  uVar8 = uVar21 & (ulonglong)(auVar93._8_8_ * local_7a8[0]);
  local_618._8_4_ = (undefined4)uVar8;
  local_618._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar54._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar54._4_4_ =
       ~(uint)(uVar17 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar54._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar54._12_4_ =
       ~(uint)(uVar21 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  local_618 = local_618 | auVar54;
  auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar62);
  local_608 = (double)(CONCAT44(~(uint)(uVar18 >> 0x20) &
                                (uint)((ulonglong)
                                       (double)GlobalVectorConstants::Float1000.m128_f32[2] >> 0x20)
                                ,~(uint)uVar18 &
                                 SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                      uVar18 & (ulonglong)(auVar62._0_8_ * dVar27));
  if (__real_400921fb60000000 < local_6f8) {
    local_6f8 = local_6f8 - __real_401921fb60000000;
  }
  dVar53 = local_618._8_8_ * local_6f8;
  dVar27 = local_618._0_8_ * local_6f8;
  local_6f8 = local_608 * local_6f8;
  local_680[1] = local_618._8_8_;
  local_680[0] = dVar53;
  local_688 = dVar27;
  if (param_6 == WorldSpace) {
    local_758[1]._0_4_ = uVar102;
    local_758[0] = dVar75;
    local_758[1]._4_4_ = uVar103;
    local_748._8_4_ = SUB84(dVar107,0);
    local_748._0_8_ = dVar105;
    local_748._12_4_ = uVar108;
    local_708._0_8_ = dVar41;
    local_5d8._s_0.Z = local_648;
    local_768 = dVar107;
  }
  else if (param_6 == ComponentSpace) {
    this_00 = &this->LocalSpaceRotation;
    dVar25 = *(double *)&(this->LocalSpaceRotation).field_0x10;
    dVar26 = *(double *)&(this->LocalSpaceRotation).field_0x18;
    dVar91 = *(double *)&this_00->field_0x0;
    dVar105 = *(double *)&(this->LocalSpaceRotation).field_0x8;
    auVar82._8_4_ = SUB84(dVar75,0);
    auVar82._0_8_ = dVar75;
    auVar82._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
    local_5b8._8_4_ = uVar100;
    local_5b8._0_8_ = uVar106;
    local_5b8._12_4_ = uVar101;
    auVar46._8_4_ = uVar102;
    auVar46._0_8_ = dVar41;
    auVar46._12_4_ = uVar103;
    dVar39 = local_758[0] * dVar25;
    dVar52 = local_758[1] * dVar26;
    local_758[1] = auVar82._8_8_ * dVar25 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   local_758[1] * dVar105 +
                   auVar46._8_8_ * dVar26 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   dStack_760 * dVar91 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_758[0] = dVar75 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + local_758[0] * dVar91 +
                   dVar41 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + local_768 * dVar105 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_708._8_4_ = SUB84(local_758[1],0);
    local_708._0_8_ = local_758[1];
    local_708._12_4_ = (int)((ulonglong)local_758[1] >> 0x20);
    local_5b8._s_0.Z = local_648;
    dVar39 = dVar75 * dVar105 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar39 + dVar41 * dVar91 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             local_768 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dStack_760 = dVar75 * dVar91 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar52 + dVar41 * dVar105 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dStack_760 * dVar25 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar40 = (undefined4)((ulonglong)dStack_760 >> 0x20);
    auVar6._4_8_ = local_758[1];
    auVar6._0_4_ = (int)((ulonglong)dVar39 >> 0x20);
    auVar83._0_8_ = auVar6._0_8_ << 0x20;
    auVar83._8_4_ = SUB84(dStack_760,0);
    auVar83._12_4_ = uVar40;
    local_748._8_4_ = SUB84(dStack_760,0);
    local_748._0_8_ = dVar39;
    local_748._12_4_ = uVar40;
    local_768 = auVar83._8_8_;
    pTVar12 = UE::Math::TQuat<double>::UnrotateVector
                        ((TQuat<double> *)this_00,&local_398,(TVector<double> *)&local_5b8._s_0);
    uVar40 = SUB84(this_00,0);
    uVar106 = (pTVar12->field0_0x0)._s_0.X;
    uVar70 = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
    local_6e8 = *(undefined1 (*) [16])&pTVar12->field0_0x0;
    local_5d8._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  }
  else {
    local_758[1] = 0.0;
    local_758[0] = UE::Math::TQuat<double>::Identity.X;
    pTVar14 = (TQuat<double> *)local_4b8;
    local_748._8_8_ = 0;
    local_748._0_8_ = UE::Math::TQuat<double>::Identity.Z;
    local_708._8_8_ = 0;
    local_708._0_8_ = UE::Math::TQuat<double>::Identity.Y;
    local_5f8._s_0.Z = local_648;
    local_768 = UE::Math::TQuat<double>::Identity.W;
    dStack_760 = 0.0;
    local_5f8._8_4_ = uVar100;
    local_5f8._0_8_ = uVar106;
    local_5f8._12_4_ = uVar101;
    UE::Math::TQuat<double>::RotateVector
              (pTVar14,(TVector<double> *)&local_5d8._s_0,(TVector<double> *)&local_5f8._s_0);
    uVar40 = SUB84(pTVar14,0);
    local_6e8._8_8_ = local_5d8._s_0.Y;
    local_6e8._0_8_ = local_5d8._s_0.X;
    uVar106 = local_5d8._s_0.X;
    uVar70 = local_5d8._s_0.Y;
  }
  fVar80 = __real_7f7fffff;
  dVar75 = (double)param_14;
  dVar39 = (double)*(float *)&param_7->field_0x8;
  dVar41 = dVar75;
  if (dVar42 <= dVar75) {
    dVar41 = dVar42;
  }
  local_718 = dVar39 * dVar81;
  local_738._8_4_ = (int)uVar70;
  local_738._0_8_ = uVar106;
  local_738._12_4_ = (int)((ulonglong)uVar70 >> 0x20);
  if (dVar41 < local_718) {
    local_718 = dVar75;
    if (dVar39 <= dVar75) {
      local_718 = dVar39;
    }
    dVar39 = dVar81;
    if (dVar42 <= dVar81) {
      dVar39 = dVar42;
    }
    if (local_718 <= 0.0) {
      local_718 = 0.0;
    }
    if (dVar39 <= 0.0) {
      dVar39 = 0.0;
    }
    local_718 = local_718 * dVar39;
  }
  dVar52 = (double)*(float *)&param_7->field_0x4;
  dVar39 = dVar52 * dVar81;
  if (dVar41 < dVar39) {
    dVar39 = dVar75;
    if (dVar52 <= dVar75) {
      dVar39 = dVar52;
    }
    dVar52 = dVar81;
    if (dVar42 <= dVar81) {
      dVar52 = dVar42;
    }
    if (dVar39 <= 0.0) {
      dVar39 = 0.0;
    }
    if (dVar52 <= 0.0) {
      dVar52 = 0.0;
    }
    dVar39 = dVar39 * dVar52;
  }
  dVar25 = (double)*(float *)param_7;
  dVar52 = dVar25 * dVar81;
  if (dVar41 < dVar52) {
    dVar52 = dVar75;
    if (dVar25 <= dVar75) {
      dVar52 = dVar25;
    }
    dVar25 = dVar81;
    if (dVar42 <= dVar81) {
      dVar25 = dVar42;
    }
    if (dVar52 <= 0.0) {
      dVar52 = 0.0;
    }
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    dVar52 = dVar52 * dVar25;
  }
  local_7a8[1] = (double)uVar70;
  local_7a8[0] = (double)uVar70;
  dVar39 = dVar39 * (double)uVar70;
  dVar26 = (double)param_10;
  local_718 = local_5d8._s_0.Z * local_718;
  dVar52 = (double)uVar106 * dVar52;
  dVar25 = dVar26 * dVar81;
  if (dVar41 < dVar25) {
    if (dVar42 <= dVar81) {
      dVar81 = dVar42;
    }
    if (dVar26 <= dVar75) {
      dVar75 = dVar26;
    }
    if (dVar81 <= 0.0) {
      dVar81 = 0.0;
    }
    if (dVar75 <= 0.0) {
      dVar75 = 0.0;
    }
    dVar25 = dVar75 * dVar81;
  }
  local_778 = dVar25 * dVar53;
  dVar81 = dVar25 * local_6f8;
  fVar104 = 0.0;
  dVar25 = dVar25 * dVar27;
  local_728 = local_5d8._s_0.Z;
  if (0.0 < this->DeltaTime) {
    dVar41 = dVar42 / (double)this->DeltaTime;
    dVar81 = dVar81 * dVar41;
    dVar52 = dVar41 * dVar52;
    dVar39 = dVar41 * dVar39;
    dVar75 = dVar41 * local_718;
    local_7b8 = dVar25 * dVar41;
    local_778 = local_778 * dVar41;
    local_790 = dVar52;
    dStack_788 = dVar39;
    local_780 = dVar75;
    local_630 = dVar81;
    if (((__real_7f7fffff != *(float *)param_9) ||
        (__real_7f7fffff != *(float *)&param_9->field_0x4)) ||
       (__real_7f7fffff != *(float *)&param_9->field_0x8)) {
      if (param_6 == WorldSpace) {
        uVar106 = *(undefined8 *)param_4;
        local_578._s_0.Y = (double)*(undefined8 *)&param_4->field_0x8;
        local_578._s_0.Z = (double)*(undefined8 *)&param_4->field_0x10;
      }
      else if (param_6 == ComponentSpace) {
        local_558._s_0.X = *(double *)param_4;
        local_558._s_0.Y = *(double *)&param_4->field_0x8;
        local_558._s_0.Z = *(double *)&param_4->field_0x10;
        pTVar12 = UE::Math::TQuat<double>::UnrotateVector
                            ((TQuat<double> *)&this->LocalSpaceRotation,&local_350,
                             (TVector<double> *)&local_558._s_0);
        uVar106 = (pTVar12->field0_0x0)._s_0.X;
        local_578._s_0.Y = (pTVar12->field0_0x0)._s_0.Y;
        local_578._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
      }
      else {
        local_598._s_0.X = *(double *)param_4;
        local_598._s_0.Y = *(double *)&param_4->field_0x8;
        local_598._s_0.Z = *(double *)&param_4->field_0x10;
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)local_4b8,(TVector<double> *)&local_578._s_0,
                   (TVector<double> *)&local_598._s_0);
        uVar106 = local_578._s_0.X;
      }
      local_6d8._s_0.X = dVar52 - (double)uVar106;
      local_6d8._s_0.Y = dVar39 - local_578._s_0.Y;
      local_6d8._s_0.Z = dVar75 - local_578._s_0.Z;
      local_718 = local_578._s_0.Y;
      dStack_710 = local_578._s_0.Y;
      local_6c0 = (double)uVar106;
      dStack_6b8 = local_578._s_0.Y;
      local_6b0 = local_578._s_0.Z;
      fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,0);
      if ((fVar23 != fVar80) &&
         (fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,0), 0.0 <= fVar23))
      {
        dVar41 = UE::Math::TVector<double>::Component((TVector<double> *)&local_6d8._s_0,0);
        uVar78 = SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar87 = (uint)((ulonglong)dVar41 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,0);
        if ((double)(fVar23 * this->DeltaTime) * this->LocalSpaceScale <
            (double)CONCAT44(uVar87,uVar78)) {
          fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,0);
          dVar27 = UE::Math::TVector<double>::Component((TVector<double> *)&local_6d8._s_0,0);
          dVar41 = dVar42;
          if ((dVar27 <= 0.0) && (dVar41 = __real_bff0000000000000, 0.0 <= dVar27)) {
            dVar41 = 0.0;
          }
          dVar52 = (double)(fVar23 * this->DeltaTime) * this->LocalSpaceScale * dVar41 +
                   (double)uVar106;
          local_790 = dVar52;
        }
      }
      fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,1);
      uVar78 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar87 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((fVar23 != fVar80) &&
         (fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,1),
         uVar78 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar87 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, 0.0 <= fVar23)) {
        dVar41 = UE::Math::TVector<double>::Component((TVector<double> *)&local_6d8._s_0,1);
        uVar87 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar78 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar79 = SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar88 = (uint)((ulonglong)dVar41 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,1);
        if ((double)(fVar23 * this->DeltaTime) * this->LocalSpaceScale <
            (double)CONCAT44(uVar88,uVar79)) {
          fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,1);
          dVar27 = UE::Math::TVector<double>::Component((TVector<double> *)&local_6d8._s_0,1);
          dVar41 = dVar42;
          if ((dVar27 <= 0.0) && (dVar41 = __real_bff0000000000000, 0.0 <= dVar27)) {
            dVar41 = 0.0;
          }
          dVar39 = (double)(fVar23 * this->DeltaTime) * this->LocalSpaceScale * dVar41 + local_718;
          dStack_788 = dVar39;
        }
      }
      pTVar15 = param_9;
      fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,2);
      uVar40 = SUB84(pTVar15,0);
      if (fVar23 != fVar80) {
        pTVar15 = param_9;
        fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,2);
        uVar40 = SUB84(pTVar15,0);
        if (0.0 <= fVar23) {
          dVar41 = UE::Math::TVector<double>::Component((TVector<double> *)&local_6d8._s_0,2);
          pTVar15 = param_9;
          fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,2);
          uVar40 = SUB84(pTVar15,0);
          if ((double)(fVar23 * this->DeltaTime) * this->LocalSpaceScale <
              (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar87,SUB84(dVar41,0) & uVar78))
          {
            fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_9,2);
            pTVar16 = &local_6d8;
            dVar41 = UE::Math::TVector<double>::Component((TVector<double> *)&pTVar16->_s_0,2);
            uVar40 = SUB84(pTVar16,0);
            dVar75 = dVar42;
            if ((dVar41 <= 0.0) && (dVar75 = __real_bff0000000000000, 0.0 <= dVar41)) {
              dVar75 = 0.0;
            }
            dVar75 = (double)(fVar23 * this->DeltaTime) * this->LocalSpaceScale * dVar75 + local_6b0
            ;
            local_780 = dVar75;
          }
        }
      }
    }
    if (((fVar80 != *(float *)param_8) || (fVar80 != *(float *)&param_8->field_0x4)) ||
       (fVar80 != *(float *)&param_8->field_0x8)) {
      fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,0);
      uVar78 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar87 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((fVar23 != fVar80) &&
          (fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,0),
          uVar78 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar87 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, 0.0 <= fVar23)) &&
         (fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,0),
         uVar87 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         uVar78 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         (double)fVar23 * this->LocalSpaceScale <
         (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar52,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        dVar41 = dVar42;
        if ((dVar52 <= 0.0) && (dVar41 = __real_bff0000000000000, 0.0 <= dVar52)) {
          dVar41 = 0.0;
        }
        fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,0);
        dVar52 = (double)fVar23 * dVar41 * this->LocalSpaceScale;
        local_790 = dVar52;
      }
      fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,1);
      if (((fVar23 != fVar80) &&
          (fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,1), 0.0 <= fVar23)
          ) && (fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,1),
               (double)fVar23 * this->LocalSpaceScale <
               (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar87,SUB84(dVar39,0) & uVar78)
               )) {
        dVar41 = dVar42;
        if ((dVar39 <= 0.0) && (dVar41 = __real_bff0000000000000, 0.0 <= dVar39)) {
          dVar41 = 0.0;
        }
        fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,1);
        dVar39 = (double)fVar23 * dVar41 * this->LocalSpaceScale;
        dStack_788 = dVar39;
      }
      pTVar15 = param_8;
      fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,2);
      uVar40 = SUB84(pTVar15,0);
      if (fVar23 != fVar80) {
        pTVar15 = param_8;
        fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,2);
        uVar40 = SUB84(pTVar15,0);
        if (0.0 <= fVar23) {
          pTVar15 = param_8;
          fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,2);
          uVar40 = SUB84(pTVar15,0);
          if ((double)fVar23 * this->LocalSpaceScale <
              (double)CONCAT44((uint)((ulonglong)dVar75 >> 0x20) & uVar87,SUB84(dVar75,0) & uVar78))
          {
            if (dVar75 <= 0.0) {
              if (0.0 <= dVar75) {
                local_7c0 = 0.0;
              }
            }
            else {
              local_7c0 = dVar42;
            }
            fVar23 = UE::Math::TVector<float>::Component((TVector<float> *)param_8,2);
            uVar40 = SUB84(param_8,0);
            dVar75 = (double)fVar23 * local_7c0 * this->LocalSpaceScale;
            local_780 = dVar75;
          }
        }
      }
    }
    if (bClothSolverBrokenAccelerationClampingToZero == false) {
      local_790 = dVar52;
      dStack_788 = dVar39;
      if (param_6 == WorldSpace) {
        *(double *)param_4 = dVar52;
        *(double *)&param_4->field_0x8 = dVar39;
        dVar41 = local_780;
      }
      else {
        if (param_6 == ComponentSpace) {
          pTVar14 = (TQuat<double> *)&this->LocalSpaceRotation;
          pTVar16 = &local_518;
          pTVar12 = &local_368;
          local_518._s_0.Z = local_780;
          local_518._s_0.X = dVar52;
          local_518._s_0.Y = dVar39;
        }
        else {
          local_498.Z = *(double *)&param_2->field_0x10;
          local_498.W = *(double *)&param_2->field_0x18;
          pTVar16 = &local_538;
          local_498.X = *(double *)param_2;
          local_498.Y = *(double *)&param_2->field_0x8;
          pTVar12 = &local_380;
          pTVar14 = &local_498;
          local_538._s_0.Z = local_780;
          local_538._s_0.X = dVar52;
          local_538._s_0.Y = dVar39;
        }
        pTVar12 = UE::Math::TQuat<double>::RotateVector
                            (pTVar14,pTVar12,(TVector<double> *)&pTVar16->_s_0);
        uVar40 = SUB84(pTVar14,0);
        dVar27 = (pTVar12->field0_0x0)._s_0.Y;
        dVar41 = (pTVar12->field0_0x0)._s_0.Z;
        *(double *)param_4 = (pTVar12->field0_0x0)._s_0.X;
        *(double *)&param_4->field_0x8 = dVar27;
      }
      *(double *)&param_4->field_0x10 = dVar41;
    }
    dVar41 = (double)this->DeltaTime;
    local_718 = dVar41 * dVar75;
    dVar52 = dVar41 * dVar52;
    dVar39 = dVar41 * dVar39;
    dVar25 = local_7b8;
    if ((param_12 != fVar80) && (0.0 <= param_12)) {
      fVar23 = this->DeltaTime * param_12;
      dVar75 = local_7b8 - local_698[0];
      dVar53 = local_778 - local_698[1];
      dStack_770 = local_698[1];
      dVar27 = dVar81 - local_4e8;
      dVar41 = dVar75 * dVar75 + dVar53 * dVar53 + dVar27 * dVar27;
      if ((double)(fVar23 * fVar23) < dVar41) {
        local_628 = dVar42 / SQRT(dVar41);
        dVar41 = (double)fVar23 * local_628;
        dVar81 = dVar41 * dVar27 + local_4e8;
        dVar25 = dVar41 * dVar75 + local_698[0];
        local_778 = dVar41 * dVar53 + local_698[1];
        local_630 = dVar81;
      }
    }
    if (((param_11 != fVar80) && (0.0 <= param_11)) &&
       (dVar75 = local_778 * local_778 + dVar25 * dVar25 + dVar81 * dVar81,
       (double)(param_11 * param_11) < dVar75)) {
      local_620 = dVar42 / SQRT(dVar75);
      dVar75 = (double)param_11 * local_620;
      dVar81 = dVar81 * dVar75;
      dVar25 = dVar25 * dVar75;
      local_778 = local_778 * dVar75;
      local_630 = dVar81;
    }
    *(double *)param_5 = dVar25;
    *(double *)&param_5->field_0x8 = local_778;
    *(double *)&param_5->field_0x10 = local_630;
    dVar75 = (double)this->DeltaTime;
    local_778 = dVar75 * local_778;
    dVar25 = dVar75 * dVar25;
    dVar81 = dVar75 * dVar81;
    param_1 = local_7c8;
    uVar106 = local_6e8._0_8_;
    dVar53 = local_680[0];
    local_7c0 = dVar52;
  }
  if (this->LocalSpaceScale <= __real_3e45798ee0000000) {
    uVar40 = 0x52c9a9b0;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LocalSpaceScale > (1.e-8f)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                        ,0x50d,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar41 = dVar42 / this->LocalSpaceScale;
  dStack_668 = dVar53 - local_778;
  local_718 = (local_728 - local_718) * dVar41;
  local_7a8[0] = (local_7a8[0] - dVar39) * dVar41;
  dVar75 = ((double)uVar106 - dVar52) * dVar41;
  dVar52 = local_718 * (double)local_708._0_8_ - local_7a8[0] * (double)local_748._0_8_;
  dVar52 = dVar52 + dVar52;
  dVar27 = dVar75 * (double)local_748._0_8_ - local_718 * local_758[0];
  dVar27 = dVar27 + dVar27;
  dVar53 = local_7a8[0] * local_758[0] - dVar75 * (double)local_708._0_8_;
  dVar53 = dVar53 + dVar53;
  auVar63._0_8_ = dVar52 * (double)local_708._0_8_;
  auVar63._8_8_ = 0;
  local_7c0 = (dVar53 * (double)local_708._0_8_ - dVar27 * (double)local_748._0_8_) +
              dVar52 * local_768 + dVar75;
  dVar39 = dVar53 * local_768 + local_718;
  local_670 = local_688 - dVar25;
  dVar75 = dVar27 * local_758[0];
  local_660 = local_6f8 - dVar81;
  dVar81 = (dVar52 * (double)local_748._0_8_ - dVar53 * local_758[0]) +
           dVar27 * local_768 + local_7a8[0];
  auVar55._0_8_ = local_670 * local_670 + dStack_668 * dStack_668 + local_660 * local_660;
  auVar55._8_8_ = 0;
  auVar62 = sqrtpd(auVar63,auVar55);
  if (auVar62._0_8_ <= __real_3f1a36e2e0000000) {
    local_4c8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    dVar53 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_8_;
    auVar84 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_16_;
    dVar27 = dVar53;
    uVar106 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  }
  else {
    dVar52 = dVar42 / auVar62._0_8_;
    auVar84._0_8_ = dVar52 * local_670;
    auVar84._8_8_ = 0;
    dVar53 = dVar52 * dStack_668;
    dVar27 = 0.0;
    uVar106 = dVar52 * local_660;
  }
  uVar70 = auVar62._8_8_;
  local_7b8 = dVar81;
  __libm_sse2_sincos_();
  auVar9._8_8_ = local_338.Scale3D.XY.m128d_f64[1];
  auVar9._0_8_ = local_338.Scale3D.XY.m128d_f64[0];
  uVar78 = (uint)((ulonglong)local_338.Scale3D.XY.m128d_f64[1] >> 0x20);
  auVar56._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        local_338.Scale3D.ZW.m128d_f64[0]._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        local_338.Scale3D.ZW.m128d_f64[0]._0_4_);
  auVar56._8_4_ = _UNK_15061cc88 & local_338.Scale3D.ZW.m128d_f64[1]._0_4_;
  auVar56._12_4_ = _UNK_15061cc8c & local_338.Scale3D.ZW.m128d_f64[1]._4_4_;
  local_218.Rotation.XY.m128d_f64[0] = auVar84._0_8_ * extraout_XMM0_Qa;
  local_218.Rotation.XY.m128d_f64[1] = dVar53 * extraout_XMM0_Qa;
  local_218.Rotation.ZW.m128d_f64[0] = (double)uVar106 * extraout_XMM0_Qa;
  auVar47._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar56._8_8_);
  auVar47._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar56._0_8_);
  uVar87 = movmskpd(uVar40,auVar47);
  uVar79 = (uint)((ulonglong)local_338.Scale3D.XY.m128d_f64[0] >> 0x20);
  auVar57._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar79,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        SUB84(local_338.Scale3D.XY.m128d_f64[0],0));
  auVar57._8_4_ = _UNK_15061cc88 & SUB84(local_338.Scale3D.XY.m128d_f64[1],0);
  auVar57._12_4_ = _UNK_15061cc8c & uVar78;
  local_6e8._8_8_ = dVar27;
  local_6e8._0_8_ = local_218.Rotation.XY.m128d_f64[1];
  auVar31._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar57._8_8_);
  auVar31._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar57._0_8_);
  iVar11 = movmskpd(extraout_EAX,auVar31);
  local_748._8_8_ = auVar84._8_8_;
  local_748._0_8_ = local_218.Rotation.XY.m128d_f64[0];
  if ((uVar87 & 0x3fffffff) == 0 && iVar11 == 0) {
    local_7a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_7a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_1b8.Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    local_1b8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    local_1b8.Translation.ZW = UE::Math::TTransform<double>::Identity.Translation.ZW;
    local_1b8.Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    local_1b8.Translation.XY = UE::Math::TTransform<double>::Identity.Translation.XY;
  }
  else {
    auVar65._4_4_ = local_338.Scale3D.ZW.m128d_f64[0]._4_4_;
    auVar65._0_4_ = local_338.Scale3D.ZW.m128d_f64[0]._0_4_;
    auVar7._4_8_ = uVar70;
    auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar64._0_8_ = auVar7._0_8_ << 0x20;
    auVar64._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar64._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar65._8_8_ = auVar64._8_8_;
    lVar19 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                local_338.Scale3D.ZW.m128d_f64[0]._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                local_338.Scale3D.ZW.m128d_f64[0]._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar76._0_8_ =
         (double)CONCAT44(uVar79 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_338.Scale3D.XY.m128d_f64[0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar76._8_4_ = SUB84(local_338.Scale3D.XY.m128d_f64[1],0) & _UNK_15061cc88;
    auVar76._12_4_ = uVar78 & _UNK_15061cc8c;
    lVar20 = -(ulonglong)(auVar76._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar22 = -(ulonglong)(auVar76._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar9);
    local_698[0] = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar62._4_4_,
                                    ~(uint)lVar20 & auVar62._0_4_);
    local_698[1]._0_4_ = ~(uint)lVar22 & auVar62._8_4_;
    local_698[1]._4_4_ = ~(uint)((ulonglong)lVar22 >> 0x20) & auVar62._12_4_;
    auVar85._8_4_ = local_698[1]._0_4_;
    auVar85._0_8_ = local_698[0];
    auVar85._12_4_ = local_698[1]._4_4_;
    dVar25 = local_698[0] * local_338.Translation.XY.m128d_f64[0];
    dVar26 = auVar85._8_8_ * local_338.Translation.XY.m128d_f64[1];
    auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar65);
    auVar94._8_4_ = SUB84(dVar26,0);
    auVar94._0_8_ = dVar25;
    uVar71 = (undefined4)((ulonglong)dVar26 >> 0x20);
    auVar94._12_4_ = uVar71;
    local_758[0] = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar62._4_4_,
                                    ~(uint)lVar19 & auVar62._0_4_);
    local_680[0] = local_338.Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_680[1] = local_338.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_418 = local_338.Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dStack_410 = local_338.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar89._8_4_ = SUB84(local_680[1],0);
    auVar89._0_8_ = local_680[0];
    auVar89._12_4_ = (int)((ulonglong)local_680[1] >> 0x20);
    dVar81 = local_758[0] * local_338.Translation.ZW.m128d_f64[0];
    dVar27 = local_338.Translation.ZW.m128d_f64[1] * 0.0;
    auVar72._8_4_ = SUB84(dStack_410,0);
    auVar72._0_8_ = local_418;
    uVar40 = (undefined4)((ulonglong)dStack_410 >> 0x20);
    auVar72._12_4_ = uVar40;
    local_7a8[1] = dStack_410;
    local_7a8[0] = local_418;
    local_758[1] = 0.0;
    dVar52 = auVar72._8_8_;
    auVar48._8_4_ = SUB84(dVar26,0);
    auVar48._0_8_ = dVar25;
    auVar48._12_4_ = uVar71;
    auVar3._8_4_ = SUB84(dVar27,0);
    auVar3._0_8_ = dVar81;
    auVar3._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    auVar62 = blendpd(auVar48,auVar3,2);
    auVar77._8_4_ = SUB84(dStack_410,0);
    auVar77._0_8_ = local_418;
    auVar77._12_4_ = uVar40;
    auVar32._8_4_ = SUB84(local_680[0],0);
    auVar32._0_8_ = dVar52;
    auVar32._12_4_ = (int)((ulonglong)local_680[0] >> 0x20);
    auVar93 = blendpd(auVar77,(undefined1  [16])local_680,2);
    auVar95._0_8_ = auVar94._8_8_ * local_418 - dVar52 * dVar25;
    auVar95._8_8_ = dVar81 * dStack_410 - auVar32._8_8_ * dVar26;
    auVar66._8_4_ = SUB84(auVar95._8_8_,0);
    auVar66._0_8_ = auVar95._0_8_;
    auVar66._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
    auVar49._0_8_ = auVar62._0_8_ * local_680[0] - auVar93._0_8_ * dVar81;
    auVar49._8_8_ = auVar62._8_8_ * local_680[1] - auVar93._8_8_ * dVar27;
    dVar27 = auVar66._8_8_ + auVar66._8_8_;
    dVar53 = auVar49._0_8_ + auVar49._0_8_;
    auVar62 = blendpd(auVar95,auVar49,2);
    uVar40 = SUB84(dVar53,0);
    auVar58._8_4_ = uVar40;
    auVar58._0_8_ = dVar27;
    uVar71 = (undefined4)((ulonglong)dVar53 >> 0x20);
    auVar58._12_4_ = uVar71;
    auVar33._8_4_ = uVar40;
    auVar33._0_8_ = dVar27;
    auVar33._12_4_ = uVar71;
    auVar96._0_8_ = auVar62._0_8_ + auVar62._0_8_;
    auVar96._8_8_ = auVar62._8_8_ + auVar62._8_8_;
    auVar50._8_4_ = uVar40;
    auVar50._0_8_ = dVar27;
    auVar50._12_4_ = uVar71;
    auVar59._0_8_ = auVar58._8_8_ * local_418 - dVar27 * dVar52;
    auVar59._8_8_ = auVar96._0_8_ * dStack_410 - auVar33._8_8_ * local_680[0];
    auVar62 = blendpd(auVar50,auVar96,2);
    auVar34._8_4_ = SUB84(auVar96._8_8_,0);
    auVar34._0_8_ = auVar96._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
    auVar51._0_8_ = auVar62._0_8_ * local_680[0] - auVar96._0_8_ * auVar93._0_8_;
    auVar51._8_8_ = auVar62._8_8_ * local_680[1] - auVar34._8_8_ * auVar93._8_8_;
    auVar35._8_4_ = SUB84(auVar59._8_8_,0);
    auVar35._0_8_ = auVar59._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    local_3f8[0] = 0.0 - (dVar27 * auVar89._8_8_ + dVar25 + auVar35._8_8_);
    local_3f8[1] = 0.0 - (dVar53 * local_680[1] + dVar26 + auVar51._0_8_);
    auVar62 = blendpd(auVar59,auVar51,2);
    local_3e8[1] = 0.0;
    local_3e8[0] = 0.0 - (auVar96._0_8_ * auVar89._8_8_ + dVar81 + auVar62._0_8_);
    local_3c8[0] = local_758[0];
    local_3c8[1] = 0.0;
    local_1b8.Scale3D.XY.m128d_f64 = local_698;
    local_1b8.Scale3D.ZW.m128d_f64 = local_758;
    local_1b8.Translation.ZW.m128d_f64 = local_3e8;
    local_1b8.Rotation.ZW.m128d_f64 = local_680;
    local_1b8.Translation.XY.m128d_f64 = local_3f8;
    dVar81 = local_7b8;
    local_408 = local_680;
    local_3d8 = local_698;
  }
  local_1b8.Rotation.XY.m128d_f64[0] = local_7a8[0];
  local_1b8.Rotation.XY.m128d_f64[1] = local_7a8[1];
  local_218.Translation.XY.m128d_f64[0] = local_7c0;
  local_218.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_218.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_218.Translation.ZW.m128d_f64[1] = 0.0;
  local_218.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_218.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_218.Translation.XY.m128d_f64[1] = dVar81;
  local_218.Translation.ZW.m128d_f64[0] = (dVar75 - auVar63._0_8_) + dVar39;
  UE::Math::TTransform<double>::Multiply(&local_2d8,&local_1b8,&local_218);
  local_158.Rotation.XY.m128d_f64[0] = local_2d8.Rotation.XY.m128d_f64[0];
  local_158.Rotation.XY.m128d_f64[1] = local_2d8.Rotation.XY.m128d_f64[1];
  local_158.Translation.XY.m128d_f64[0] = local_2d8.Translation.XY.m128d_f64[0];
  local_158.Translation.XY.m128d_f64[1] = local_2d8.Translation.XY.m128d_f64[1];
  local_158.Scale3D.XY.m128d_f64[0] = local_2d8.Scale3D.XY.m128d_f64[0];
  local_158.Scale3D.XY.m128d_f64[1] = local_2d8.Scale3D.XY.m128d_f64[1];
  local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_278.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_158.Rotation.ZW.m128d_f64[0] = local_2d8.Rotation.ZW.m128d_f64[0];
  local_158.Rotation.ZW.m128d_f64[1] = local_2d8.Rotation.ZW.m128d_f64[1];
  local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_278.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_158.Translation.ZW.m128d_f64[0] = local_2d8.Translation.ZW.m128d_f64[0];
  local_158.Translation.ZW.m128d_f64[1] = local_2d8.Translation.ZW.m128d_f64[1];
  local_158.Scale3D.ZW.m128d_f64[0] = local_2d8.Scale3D.ZW.m128d_f64[0];
  local_158.Scale3D.ZW.m128d_f64[1] = local_2d8.Scale3D.ZW.m128d_f64[1];
  local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_278.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_278.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_278.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_278,&local_158,&local_338);
  uVar70 = _UNK_150689548;
  uVar106 = ___xmm_000000003f8000003f8000003f800000;
  iVar11 = *(int *)&(this->PreSimulationTransforms).field_0x10;
  local_7d0 = (longlong)iVar11;
  local_6a8 = (float)local_278.Rotation.XY.m128d_f64[0];
  uVar87 = ~param_1 >> 0x1f;
  uVar78 = 0;
  if ((int)param_1 < iVar11) {
    uVar78 = uVar87;
  }
  fStack_6a4 = (float)local_278.Rotation.XY.m128d_f64[1];
  fStack_6a0 = (float)local_278.Rotation.ZW.m128d_f64[0];
  auVar86._0_4_ = (float)local_278.Translation.XY.m128d_f64[0];
  fStack_69c = (float)local_278.Rotation.ZW.m128d_f64[1];
  local_4c8 = local_278.Translation.ZW.m128d_f64[0];
  local_4d8 = local_278.Translation.XY.m128d_f64[0];
  dStack_4d0 = local_278.Translation.XY.m128d_f64[1];
  auVar86._4_4_ = (float)local_278.Translation.XY.m128d_f64[1];
  auVar86._8_4_ = (float)local_278.Translation.ZW.m128d_f64[0];
  auVar86._12_4_ = 0;
  if (uVar78 == 0) {
    local_7d8 = (longlong)(int)param_1;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar19 = *(longlong *)&(this->PreSimulationTransforms).field_0x8;
  lVar20 = (longlong)(int)param_1;
  puVar1 = (undefined8 *)(lVar19 + lVar20 * 0x30);
  *puVar1 = CONCAT44(fStack_6a4,local_6a8);
  puVar1[1] = CONCAT44(fStack_69c,fStack_6a0);
  *(undefined1 (*) [16])(lVar19 + 0x10 + lVar20 * 0x30) = auVar86;
  puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar20 * 0x30);
  *puVar1 = uVar106;
  puVar1[1] = uVar70;
  dVar81 = 0.0;
  if (((!param_15) && (dVar81 = dVar42, (this->PBDEvolution).Ptr != (FPBDEvolution *)0x0)) &&
     (dVar81 = (double)param_13, __real_4000000000000000 <= (double)param_13)) {
    dVar81 = __real_4000000000000000;
  }
  auVar62 = *(undefined1 (*) [16])&local_798->field_0x10;
  dVar53 = auVar62._0_8_;
  auVar90._0_8_ = local_660 * *(double *)&local_798->field_0x50;
  auVar90._8_8_ = *(double *)&local_798->field_0x58 * 0.0;
  dVar27 = *(double *)&local_798->field_0x18;
  dVar39 = *(double *)&local_798->field_0x40 * local_670;
  dVar52 = *(double *)&local_798->field_0x48 * dStack_668;
  local_4f8 = *(undefined1 (*) [16])local_798;
  auVar60 = blendpd(local_4f8,auVar62,2);
  auVar97._8_4_ = SUB84(dVar52,0);
  auVar97._0_8_ = dVar39;
  uVar40 = (undefined4)((ulonglong)dVar52 >> 0x20);
  auVar97._12_4_ = uVar40;
  auVar98._0_8_ = auVar97._8_8_ * local_4f8._0_8_ - local_4f8._8_8_ * dVar39;
  auVar98._8_8_ = auVar90._0_8_ * local_4f8._8_8_ - dVar53 * dVar52;
  auVar36._8_4_ = SUB84(dVar52,0);
  auVar36._0_8_ = dVar39;
  auVar36._12_4_ = uVar40;
  auVar93 = blendpd(auVar36,auVar90,2);
  auVar37._0_8_ = auVar93._0_8_ * dVar53 - auVar60._0_8_ * auVar90._0_8_;
  auVar37._8_8_ = auVar93._8_8_ * auVar62._8_8_ - auVar60._8_8_ * auVar90._8_8_;
  auVar93 = *(undefined1 (*) [16])local_798;
  auVar60 = blendpd(auVar98,auVar37,2);
  dVar42 = auVar98._8_8_ + auVar98._8_8_;
  dVar75 = auVar37._0_8_ + auVar37._0_8_;
  uVar40 = (undefined4)((ulonglong)dVar75 >> 0x20);
  auVar99._0_8_ = auVar60._0_8_ + auVar60._0_8_;
  auVar99._8_8_ = auVar60._8_8_ + auVar60._8_8_;
  auVar73._8_4_ = SUB84(dVar75,0);
  auVar73._0_8_ = dVar42;
  auVar73._12_4_ = uVar40;
  auVar67._8_4_ = SUB84(dVar75,0);
  auVar67._0_8_ = dVar42;
  auVar67._12_4_ = uVar40;
  auVar68 = blendpd(auVar67,auVar99,2);
  auVar60 = blendpd(auVar93,auVar62,2);
  auVar74._0_8_ = auVar73._8_8_ * auVar93._0_8_ - auVar93._8_8_ * dVar42;
  auVar74._8_8_ = auVar99._0_8_ * auVar93._8_8_ - dVar53 * dVar75;
  auVar69._0_8_ = auVar68._0_8_ * dVar53 - auVar60._0_8_ * auVar99._0_8_;
  auVar69._8_8_ = auVar68._8_8_ * auVar62._8_8_ - auVar60._8_8_ * auVar99._8_8_;
  auVar38._8_4_ = SUB84(auVar74._8_8_,0);
  auVar38._0_8_ = auVar74._0_8_;
  auVar38._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
  fVar80 = 0.0;
  dVar42 = dVar42 * dVar27 + dVar39 + auVar38._8_8_;
  dVar75 = dVar75 * dVar27 + dVar52 + auVar69._0_8_;
  auVar62 = blendpd(auVar74,auVar69,2);
  fVar23 = 0.0;
  local_450 = auVar99._0_8_ * dVar27 + auVar90._0_8_ + auVar62._0_8_;
  local_460._8_4_ = SUB84(dVar75,0);
  local_460._0_8_ = dVar42;
  local_460._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
  if (this->DeltaTime <= 0.0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = __real_3f800000 / this->DeltaTime;
    fVar80 = (float)(local_450 * dVar81) * fVar24;
    fVar23 = (float)(dVar75 * dVar81) * fVar24;
    fVar24 = (float)(dVar42 * dVar81) * fVar24;
  }
  iVar11 = *(int *)&(this->FictitiousAngularVelocities).field_0x10;
  local_7d0 = (longlong)iVar11;
  uVar78 = 0;
  if ((int)param_1 < iVar11) {
    uVar78 = uVar87;
  }
  if ((uVar78 == 0) &&
     (local_7d8 = lVar20,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = *(longlong *)&(this->FictitiousAngularVelocities).field_0x8;
  *(float *)(lVar19 + lVar20 * 0xc) = fVar24;
  *(float *)(lVar19 + 4 + lVar20 * 0xc) = fVar23;
  *(float *)(lVar19 + 8 + lVar20 * 0xc) = fVar80;
  iVar11 = *(int *)&(this->ReferenceSpaceLocations).field_0x10;
  local_7d0 = (longlong)iVar11;
  local_448 = *(double *)&local_798->field_0x20;
  dStack_440 = *(double *)&local_798->field_0x28;
  local_438 = *(double *)&local_798->field_0x30;
  dVar81 = local_448 - *(double *)&this->LocalSpaceLocation;
  uVar79 = 0;
  uVar78 = uVar79;
  if ((int)local_7c8 < iVar11) {
    uVar78 = uVar87;
  }
  dVar42 = dStack_440 - *(double *)&(this->LocalSpaceLocation).field_0x8;
  dVar75 = local_438 - *(double *)&(this->LocalSpaceLocation).field_0x10;
  if ((uVar78 == 0) &&
     (local_7d8 = lVar20,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = *(longlong *)&(this->ReferenceSpaceLocations).field_0x8;
  *(float *)(lVar19 + lVar20 * 0xc) = (float)(dVar81 * dVar41);
  *(float *)(lVar19 + 4 + lVar20 * 0xc) = (float)(dVar42 * dVar41);
  *(float *)(lVar19 + 8 + lVar20 * 0xc) = (float)(dVar75 * dVar41);
  if (this->DeltaTime <= 0.0) {
    fVar80 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
  }
  else {
    fVar80 = (float)(dVar41 * *(double *)&param_4->field_0x10);
    fVar23 = (float)(dVar41 * *(double *)&param_4->field_0x8);
    fVar24 = (float)(dVar41 * *(double *)param_4);
  }
  iVar11 = *(int *)&(this->AppliedReferenceSpaceVelocities).field_0x10;
  local_7d0 = (longlong)iVar11;
  uVar78 = uVar79;
  if ((int)local_7c8 < iVar11) {
    uVar78 = uVar87;
  }
  if ((uVar78 == 0) &&
     (local_7d8 = lVar20,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = *(longlong *)&(this->AppliedReferenceSpaceVelocities).field_0x8;
  *(float *)(lVar19 + lVar20 * 0xc) = fVar24;
  *(float *)(lVar19 + 4 + lVar20 * 0xc) = fVar23;
  *(float *)(lVar19 + 8 + lVar20 * 0xc) = fVar80;
  if (this->DeltaTime <= 0.0) {
    fVar80 = 0.0;
    fVar23 = 0.0;
  }
  else {
    fVar104 = (float)*(double *)&param_5->field_0x10;
    fVar80 = (float)*(double *)&param_5->field_0x8;
    fVar23 = (float)*(double *)param_5;
  }
  iVar11 = *(int *)&(this->AppliedReferenceSpaceAngularVelocities).field_0x10;
  local_7d0 = (longlong)iVar11;
  if ((int)local_7c8 < iVar11) {
    uVar79 = uVar87;
  }
  if ((uVar79 == 0) &&
     (local_7d8 = lVar20,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = *(longlong *)&(this->AppliedReferenceSpaceAngularVelocities).field_0x8;
  *(float *)(lVar19 + lVar20 * 0xc) = fVar23;
  *(float *)(lVar19 + 4 + lVar20 * 0xc) = fVar80;
  *(float *)(lVar19 + 8 + lVar20 * 0xc) = fVar104;
  return;
}

// SetUseCCD @ 14dc193c0

void __thiscall
Chaos::FClothingSimulationSolver::SetUseCCD
          (FClothingSimulationSolver *this,uint param_1,bool param_2)

{
  FPBDEvolution *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pFVar1 = (this->PBDEvolution).Ptr;
  if (pFVar1 != (FPBDEvolution *)0x0) {
    if (*(uint *)&pFVar1->field_0x18 <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupId < TArrayCollection::Size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                         ,0xa7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = 0;
    if ((int)param_1 < *(int *)&(pFVar1->MGroupUseCCDs).field_0x10) {
      uVar4 = ~param_1 >> 0x1f;
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
    *(bool *)((longlong)(int)param_1 + *(longlong *)&(pFVar1->MGroupUseCCDs).field_0x8) = param_2;
  }
  return;
}

// SetWindAndPressureGeometry @ 14dc19ca0

void __thiscall
Chaos::FClothingSimulationSolver::SetWindAndPressureGeometry
          (FClothingSimulationSolver *this,uint param_1,FTriangleMesh *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float_const_,int> *param_4,
          TArrayView<float_const_,int> *param_5,TArrayView<float_const_,int> *param_6,
          TArrayView<float_const_,int> *param_7)

{
  FPBDEvolution *this_00;
  FVelocityAndPressureField *this_01;
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    this_01 = Softs::FPBDEvolution::GetVelocityAndPressureField(this_00,param_1);
    Softs::FVelocityAndPressureField::SetGeometry
              (this_01,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// SetWindAndPressureGeometry @ 14dc19d10

void __thiscall
Chaos::FClothingSimulationSolver::SetWindAndPressureGeometry
          (FClothingSimulationSolver *this,uint param_1,FTriangleMesh *param_2,
          FCollectionPropertyConstFacade *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4)

{
  FPBDEvolution *this_00;
  FVelocityAndPressureField *this_01;
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    this_01 = Softs::FPBDEvolution::GetVelocityAndPressureField(this_00,param_1);
    Softs::FVelocityAndPressureField::SetGeometry(this_01,param_2,param_3,param_4,__real_42c80000);
  }
  return;
}

// SetWindAndPressureProperties @ 14dc19d70

void __thiscall
Chaos::FClothingSimulationSolver::SetWindAndPressureProperties
          (FClothingSimulationSolver *this,uint param_1,TVector<float,2> *param_2,
          TVector<float,2> *param_3,TVector<float,2> *param_4,TVector<float,2> *param_5,
          float param_6,TVector<float,2> *param_7)

{
  FPBDEvolution *this_00;
  FVelocityAndPressureField *this_01;
  float local_res8;
  float local_resc;
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    this_01 = Softs::FPBDEvolution::GetVelocityAndPressureField(this_00,param_1);
    local_res8 = *(float *)param_7 * __real_3c23d70a;
    local_resc = *(float *)&param_7->field_0x4 * __real_3c23d70a;
    Softs::FVelocityAndPressureField::SetProperties
              (this_01,param_2,param_3,param_4,param_5,param_6 * __real_358637bd,
               (TVector<float,2> *)&local_res8,__real_3f800000);
  }
  return;
}

// SetWindAndPressureProperties @ 14dc19e30

void __thiscall
Chaos::FClothingSimulationSolver::SetWindAndPressureProperties
          (FClothingSimulationSolver *this,uint param_1,FCollectionPropertyConstFacade *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,bool param_4)

{
  FPBDEvolution *this_00;
  FVelocityAndPressureField *this_01;
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    this_01 = Softs::FPBDEvolution::GetVelocityAndPressureField(this_00,param_1);
    Softs::FVelocityAndPressureField::SetProperties(this_01,param_2,param_3,__real_42c80000,param_4)
    ;
  }
  return;
}

// SetWindVelocity @ 14dc19e90

void __thiscall
Chaos::FClothingSimulationSolver::SetWindVelocity
          (FClothingSimulationSolver *this,TVector<float,3> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_42c80000;
  fVar1 = *(float *)&param_1->field_0x8;
  fVar3 = *(float *)&param_1->field_0x4 * __real_42c80000;
  *(float *)&this->WindVelocity = *(float *)param_1 * __real_42c80000;
  *(float *)&(this->WindVelocity).field_0x4 = fVar3;
  *(float *)&(this->WindVelocity).field_0x8 = fVar1 * fVar2;
  this->LegacyWindAdaption = param_2;
  return;
}

// SetWindVelocity @ 14dc19ee0

void __thiscall
Chaos::FClothingSimulationSolver::SetWindVelocity
          (FClothingSimulationSolver *this,uint param_1,TVector<float,3> *param_2)

{
  FPBDEvolution *this_00;
  FVelocityAndPressureField *pFVar1;
  
  this_00 = (this->PBDEvolution).Ptr;
  if (this_00 != (FPBDEvolution *)0x0) {
    pFVar1 = Softs::FPBDEvolution::GetVelocityAndPressureField(this_00,param_1);
    *(undefined8 *)&pFVar1->Velocity = *(undefined8 *)param_2;
    *(undefined4 *)&(pFVar1->Velocity).field_0x8 = *(undefined4 *)&param_2->field_0x8;
  }
  return;
}

// Update @ 14dc20910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationSolver::Update(FClothingSimulationSolver *this,float param_1)

{
  undefined1 *puVar1;
  TMap<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TStatId TVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdatePreSolverStep> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdateSolverFields> FVar22;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdateSolverStep> FVar23;
  FCollectionPropertyConstFacade *this_00;
  int *piVar24;
  FEvolution *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdatePostSolverStep> FVar26;
  FThreadSafeStaticStat<FStat_STAT_ClothComputeNormals> FVar27;
  uint uVar28;
  ulonglong uVar29;
  FColor_u_0 FVar30;
  FNameEntryId FVar31;
  FName FVar32;
  FName FVar33;
  int iVar34;
  longlong lVar35;
  undefined8 *puVar36;
  FScriptContainerElement *pFVar37;
  undefined1 uVar38;
  int iVar39;
  longlong lVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_358;
  uint uStack_354;
  FColor_u_0 local_350;
  FColor_u_0 local_34c;
  FColor_u_0 local_348 [2];
  FName local_340;
  byte local_338;
  FName local_330;
  byte local_328;
  FName local_320;
  byte local_318;
  FColor_u_0 local_310;
  uint local_30c;
  FColor_u_0 local_308;
  uint local_304;
  FColor_u_0 local_300;
  uint local_2fc;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2d8;
  FName local_2c8;
  FName local_2b8;
  FName local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  FClothingSimulationSolver *local_278;
  LARGE_INTEGER local_270;
  LARGE_INTEGER local_268;
  FClothingSimulationSolver *local_260;
  FClothingSimulationSolver *local_258;
  LARGE_INTEGER local_250;
  FStatMessage local_248;
  FStatMessage local_238;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_228;
  FStatMessage local_218;
  TMap<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,0>_>
  *local_208;
  char *pcStack_200;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [12];
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  FSourceLocation local_1a8;
  FSourceLocation local_188;
  code *local_168;
  FClothingSimulationSolver **local_160;
  code *local_158;
  FClothingSimulationSolver **local_150;
  code *local_148;
  FClothingSimulationSolver **local_140;
  code *local_138;
  FClothingSimulationSolver **local_130;
  FClothingSimulationSolver *local_128;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_120;
  undefined1 local_118 [24];
  longlong lStack_100;
  longlong lStack_f8;
  int local_f0;
  undefined4 uStack_ec;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  TRangedForIterator local_a8 [2];
  
  bVar41 = -1 < CpuChannel->Enabled;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2080,"FClothingSimulationSolver_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x820);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2080);
  }
  TVar16 = FThreadSafeStaticStatInner<FStat_STAT_ChaosClothSolverUpdate,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosClothSolverUpdate,1> *)
                      &StatPtr_STAT_ChaosClothSolverUpdate);
  local_188.Impl._Line = 0x821;
  local_188.Impl._Column = 2;
  local_188.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
  ;
  local_188.Impl._Function = "void __cdecl Chaos::FClothingSimulationSolver::Update(float)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_330,*(TStatIdData **)&(TVar16.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_188);
  if (((ClothSolverDebugHitchLength != 0) && (ClothSolverDebugHitchInterval != 0)) &&
     (HitchCounter = HitchCounter + -1, HitchCounter < 0)) {
    if (2 < (byte)LogChaosCloth._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    }
    FWindowsPlatformProcess::Sleep((float)ClothSolverDebugHitchLength * __real_3a83126f);
    HitchCounter = ClothSolverDebugHitchInterval;
  }
  this->DeltaTime = param_1;
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2102,"FClothingSimulationSolver_UpdateCloths",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x836);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2102);
  }
  TVar16 = FThreadSafeStaticStatInner<FStat_STAT_ChaosClothSolverUpdateCloths,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosClothSolverUpdateCloths,1> *)
                      &StatPtr_STAT_ChaosClothSolverUpdateCloths);
  local_1a8.Impl._Line = 0x837;
  local_1a8.Impl._Column = 3;
  local_1a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
  ;
  local_1a8.Impl._Function = "void __cdecl Chaos::FClothingSimulationSolver::Update(float)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_340,*(TStatIdData **)&(TVar16.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1a8);
  uVar7 = *(undefined8 *)&(this->CollisionTransforms).field_0x8;
  puVar1 = &(this->ComplexColliders).field_0x10;
  uVar8 = *(undefined8 *)&this->OldCollisionTransforms;
  uVar9 = *(undefined8 *)&(this->OldCollisionTransforms).field_0x8;
  pTVar2 = &this->ComplexColliders;
  local_298._padding_._0_4_ = 0;
  uVar4 = *(undefined8 *)&(this->OldCollisionTransforms).field_0x10;
  *(undefined8 *)&this->OldCollisionTransforms = *(undefined8 *)&this->CollisionTransforms;
  *(undefined8 *)&(this->OldCollisionTransforms).field_0x8 = uVar7;
  local_298._padding_._4_4_ = 1;
  *(undefined8 *)&(this->OldCollisionTransforms).field_0x10 =
       *(undefined8 *)&(this->CollisionTransforms).field_0x10;
  *(undefined8 *)&this->CollisionTransforms = uVar8;
  *(undefined8 *)&(this->CollisionTransforms).field_0x8 = uVar9;
  *(undefined8 *)&(this->CollisionTransforms).field_0x10 = uVar4;
  uVar7 = *(undefined8 *)&(this->AnimationPositions).field_0x8;
  local_298.UnvisitedBitMask = 0xffffffff;
  uVar8 = *(undefined8 *)&this->OldAnimationPositions;
  uVar9 = *(undefined8 *)&(this->OldAnimationPositions).field_0x8;
  local_298.CurrentBitIndex = 0;
  local_298.BaseBitIndex = 0;
  uVar4 = *(undefined8 *)&(this->OldAnimationPositions).field_0x10;
  *(undefined8 *)&this->OldAnimationPositions = *(undefined8 *)&this->AnimationPositions;
  *(undefined8 *)&(this->OldAnimationPositions).field_0x8 = uVar7;
  *(undefined8 *)&(this->OldAnimationPositions).field_0x10 =
       *(undefined8 *)&(this->AnimationPositions).field_0x10;
  *(undefined8 *)&this->AnimationPositions = uVar8;
  *(undefined8 *)&(this->AnimationPositions).field_0x8 = uVar9;
  *(undefined8 *)&(this->AnimationPositions).field_0x10 = uVar4;
  uVar7 = *(undefined8 *)&(this->AnimationNormals).field_0x8;
  uVar8 = *(undefined8 *)&this->OldAnimationNormals;
  uVar9 = *(undefined8 *)&(this->OldAnimationNormals).field_0x8;
  uVar4 = *(undefined8 *)&(this->OldAnimationNormals).field_0x10;
  *(undefined8 *)&this->OldAnimationNormals = *(undefined8 *)&this->AnimationNormals;
  *(undefined8 *)&(this->OldAnimationNormals).field_0x8 = uVar7;
  *(undefined8 *)&(this->OldAnimationNormals).field_0x10 =
       *(undefined8 *)&(this->AnimationNormals).field_0x10;
  *(undefined8 *)&this->AnimationNormals = uVar8;
  *(undefined8 *)&(this->AnimationNormals).field_0x8 = uVar9;
  *(undefined8 *)&(this->AnimationNormals).field_0x10 = uVar4;
  local_298.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->ComplexColliders).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_298);
  }
  unique0x100012ae =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(local_298._padding_._4_4_,(undefined4)local_298._padding_);
  uStack_1c0 = CONCAT44(local_298.CurrentBitIndex,local_298.UnvisitedBitMask);
  local_1b8 = CONCAT44(local_298._28_4_,local_298.BaseBitIndex);
  local_f0 = *(int *)&(this->ComplexColliders).field_0x8 -
             *(int *)&(this->ComplexColliders).field_0x34;
  local_118._16_8_ = local_298.Array;
  uStack_1b0._4_4_ = uStack_ec;
  uStack_1b0._0_4_ = local_f0;
  local_1c8 = local_298.Array;
  local_1d8._0_8_ = pTVar2;
  local_118._0_8_ = pTVar2;
  local_118._8_8_ = unique0x100012ae;
  lStack_100 = uStack_1c0;
  lStack_f8 = local_1b8;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_118,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->ComplexColliders).field_0x28);
  pcStack_200 = (char *)pTVar17->_padding_;
  pTStack_1f8 = pTVar17->Array;
  lStack_1f0._0_4_ = pTVar17->UnvisitedBitMask;
  lStack_1f0._4_4_ = pTVar17->CurrentBitIndex;
  lStack_1e8 = *(longlong *)&pTVar17->BaseBitIndex;
  local_1e0 = *(int *)&(this->ComplexColliders).field_0x8 -
              *(int *)&(this->ComplexColliders).field_0x34;
  local_a8[0]._44_4_ = uStack_1dc;
  local_a8[0].InitialNum = local_1e0;
  local_208 = pTVar2;
  local_a8[0]._padding_ = (longlong)pTVar2;
  local_a8[0]._padding_ = (longlong)pcStack_200;
  local_a8[0]._padding_ = (longlong)pTStack_1f8;
  local_a8[0]._padding_ = lStack_1f0;
  local_a8[0]._padding_ = lStack_1e8;
  bVar12 = TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_1d8,local_a8);
  if (bVar12) {
    do {
      lVar5 = *(longlong *)(*(longlong *)local_1d8._0_8_ + 8 + (longlong)uStack_1c0._4_4_ * 0x18);
      if (lVar5 != 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x60);
        uVar8 = *(undefined8 *)(lVar5 + 0x68);
        uVar4 = *(undefined8 *)(lVar5 + 0x70);
        *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(lVar5 + 0x78);
        *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar5 + 0x80);
        *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar5 + 0x88);
        *(undefined8 *)(lVar5 + 0x78) = uVar7;
        *(undefined8 *)(lVar5 + 0x80) = uVar8;
        *(undefined8 *)(lVar5 + 0x88) = uVar4;
        local_res10 = *(uint *)(lVar5 + 0x118);
        uVar29 = (ulonglong)(int)local_res10;
        lVar35 = *(longlong *)(lVar5 + 0x110);
        puVar36 = (undefined8 *)(lVar35 + 0x40);
        lVar40 = uVar29 * 0x88 + lVar35;
        while( true ) {
          if (*(int *)(lVar5 + 0x118) != (int)uVar29) {
            local_res8 = local_res8 & 0xffffff00;
            `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
            uVar29 = (ulonglong)local_res10;
          }
          if (lVar35 == lVar40) break;
          lVar35 = lVar35 + 0x88;
          uVar7 = *puVar36;
          uVar8 = puVar36[1];
          uVar4 = puVar36[2];
          *puVar36 = puVar36[3];
          puVar36[1] = puVar36[4];
          puVar36[2] = puVar36[5];
          puVar36[3] = uVar7;
          puVar36[4] = uVar8;
          puVar36[5] = uVar4;
          puVar36 = puVar36 + 0x11;
        }
      }
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0 & ~uStack_1cc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1d8 + 8));
      bVar12 = TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_1d8,local_a8);
    } while (bVar12);
  }
  this->CollisionParticlesSize = 0;
  pFVar37 = (this->Cloths).AllocatorInstance.Data;
  iVar13 = (this->Cloths).ArrayNum;
  pFVar3 = pFVar37 + (longlong)iVar13 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothingSimulationCloth_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar37 == pFVar3) break;
    FClothingSimulationCloth::PreUpdate(*(FClothingSimulationCloth **)pFVar37,this);
    pFVar37 = pFVar37 + 8;
  }
  local_160 = &local_278;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FClothingSimulationSolver::Update'::__l27::<lambda_1>,void,int>
              ::Call;
  local_278 = this;
  PhysicsParallelFor((this->Cloths).ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_168,
                     bClothSolverParallelClothUpdate == false);
  if ((local_338 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_338 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_338 & 4) != 0) {
    FThreadStats::AddMessage(local_340,CycleScopeEnd);
  }
  local_338 = 0;
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2144,"FClothingSimulationSolver_UpdatePreSolverStep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x860);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2144);
  }
  FVar19 = StatPtr_STAT_ChaosClothSolverUpdatePreSolverStep;
  if (StatPtr_STAT_ChaosClothSolverUpdatePreSolverStep ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdatePreSolverStep>)0x0) {
    pFVar18 = ::FName::FName(&local_d8,"STAT_ChaosClothSolverUpdatePreSolverStep");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdatePreSolverStep>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosClothSolverUpdatePreSolverStep,*pFVar18,
                        L"Chaos Cloth Solver Update Pre Solver Step","STATGROUP_ChaosCloth",
                        "STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar19;
  bVar10 = false;
  bVar12 = false;
  local_2c8.ComparisonIndex.Value = 0;
  local_2c8.Number = 0;
  FVar30.Bits = (uint)FVar33.ComparisonIndex.Value;
  uVar28 = FVar33.Number;
  if ((FVar30.Bits == 0) && (uVar28 == 0)) {
LAB_14dc21026:
    bVar43 = false;
    FVar33 = local_2c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_310.Bits = FVar30.Bits;
        local_30c = uVar28;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_310._s_0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                   ,0x861);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc21026;
    local_358.Bits = FVar30.Bits;
    uStack_354 = uVar28;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar10 = false;
    bVar43 = true;
  }
  ApplyPreSimulationTransforms(this);
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)&this->field_0x8
             ,(double)this->DeltaTime);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar43) && (FVar33 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_248.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_248.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_270);
      local_248.StatData.Pad[4] = '\0';
      local_248.StatData.Pad[5] = '\0';
      local_248.StatData.Pad[6] = '\0';
      local_248.StatData.Pad[7] = '\0';
      local_248.StatData.Pad[0] = local_270.s.LowPart._0_1_;
      local_248.StatData.Pad[1] = local_270.s.LowPart._1_1_;
      local_248.StatData.Pad[2] = local_270.s.LowPart._2_1_;
      local_248.StatData.Pad[3] = local_270.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_248);
      piVar24 = &pFVar20->ScopeCount;
      *piVar24 = *piVar24 + -1;
      if (*piVar24 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0.0 < this->DeltaTime) {
    bVar42 = -1 < CpuChannel->Enabled;
    if (bVar42) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2157,"FClothingSimulationSolver_UpdateSolverFields",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                 ,0x86d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2157);
    }
    FVar22 = StatPtr_STAT_ChaosClothSolverUpdateSolverFields;
    if (StatPtr_STAT_ChaosClothSolverUpdateSolverFields ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdateSolverFields>)0x0) {
      pFVar18 = ::FName::FName(&local_c0,"STAT_ChaosClothSolverUpdateSolverFields");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdateSolverFields>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ChaosClothSolverUpdateSolverFields,*pFVar18,
                          L"Chaos Cloth Solver Update Solver Fields","STATGROUP_ChaosCloth",
                          "STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
    FVar33 = *(FName *)FVar22;
    bVar10 = false;
    bVar12 = false;
    local_2b8.ComparisonIndex.Value = 0;
    local_2b8.Number = 0;
    FVar30.Bits = (uint)FVar33.ComparisonIndex.Value;
    uVar28 = FVar33.Number;
    if ((FVar30.Bits == 0) && (uVar28 == 0)) {
      UpdateSolverField(this);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_350.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_350._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
        bVar10 = false;
        bVar12 = true;
        if (-1 < CpuChannel->Enabled) {
          local_308.Bits = FVar30.Bits;
          local_304 = uVar28;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_308._s_0,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                     ,0x86e);
          bVar10 = true;
          bVar12 = true;
        }
      }
      bVar43 = FThreadStats::bPrimaryEnable != false;
      FVar32 = local_2b8;
      if (bVar43) {
        local_358.Bits = FVar30.Bits;
        uStack_354 = uVar28;
        FThreadStats::AddMessage(FVar33,CycleScopeStart);
        bVar10 = false;
        FVar32 = FVar33;
      }
      UpdateSolverField(this);
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar43) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
          local_238.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
          local_238.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_268);
          local_238.StatData.Pad[4] = '\0';
          local_238.StatData.Pad[5] = '\0';
          local_238.StatData.Pad[6] = '\0';
          local_238.StatData.Pad[7] = '\0';
          local_238.StatData.Pad[0] = local_268.s.LowPart._0_1_;
          local_238.StatData.Pad[1] = local_268.s.LowPart._1_1_;
          local_238.StatData.Pad[2] = local_268.s.LowPart._2_1_;
          local_238.StatData.Pad[3] = local_268.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar20,&local_238);
          piVar24 = &pFVar20->ScopeCount;
          *piVar24 = *piVar24 + -1;
          if (*piVar24 == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
    }
    if (bVar42) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (this->bEnableSolver != false) {
      bVar42 = -1 < CpuChannel->Enabled;
      if (bVar42) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2166,"FClothingSimulationSolver_UpdateSolverStep",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                   ,0x876);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2166);
      }
      FVar23 = StatPtr_STAT_ChaosClothSolverUpdateSolverStep;
      if (StatPtr_STAT_ChaosClothSolverUpdateSolverStep ==
          (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdateSolverStep>)0x0) {
        pFVar18 = ::FName::FName(&local_d0,"STAT_ChaosClothSolverUpdateSolverStep");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdateSolverStep>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ChaosClothSolverUpdateSolverStep,*pFVar18,
                            L"Chaos Cloth Solver Update Solver Step","STATGROUP_ChaosCloth",
                            "STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
      FVar33 = *(FName *)FVar23;
      uVar38 = 0;
      local_2d8.ComparisonIndex.Value = 0;
      local_2d8.Number = 0;
      local_res10 = local_res10 & 0xffffff00;
      FVar30.Bits = (uint)FVar33.ComparisonIndex.Value;
      uVar28 = FVar33.Number;
      if ((FVar30.Bits != 0) || (FVar32 = local_2d8, uVar28 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_34c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_34c._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          uVar38 = 1;
          local_res10 = CONCAT31(local_res10._1_3_,1);
          if (-1 < CpuChannel->Enabled) {
            local_300.Bits = FVar30.Bits;
            local_2fc = uVar28;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_300._s_0,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                       ,0x877);
            uVar38 = 3;
            local_res10 = CONCAT31(local_res10._1_3_,3);
          }
        }
        FVar32 = local_2d8;
        if (FThreadStats::bPrimaryEnable != false) {
          local_358.Bits = FVar30.Bits;
          uStack_354 = uVar28;
          FThreadStats::AddMessage(FVar33,CycleScopeStart);
          local_res10 = CONCAT31(local_res10._1_3_,uVar38) | 4;
          FVar32 = FVar33;
        }
      }
      TVar16.StatIdPtr = (TStatIdData *)StatPtr_STAT_ClothInternalSolve;
      if (StatPtr_STAT_ClothInternalSolve ==
          (FThreadSafeStaticStat<FStat_STAT_ClothInternalSolve>)0x0) {
        pFVar18 = ::FName::FName(&local_c8,"STAT_ClothInternalSolve");
        TVar16.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothInternalSolve,*pFVar18,
                        L"Internal Solve","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
      }
      pTStack_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)0x152c9d1c0;
      local_208 = (TMap<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,0>_>
                   *)0x400000878;
      pcStack_200 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_320,TVar16,CycleStat|ClearEveryFrame,false,
                 (FSourceLocation *)&local_208);
      if ((this->Config == (FClothingSimulationConfig *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Config",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                              ,0x87a,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (FCollectionPropertyConstFacade *)
                FClothingSimulationConfig::GetProperties(this->Config,this->SolverLOD);
      piVar24 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&this_00->KeyNameIndices,NumSubstepsName);
      if ((piVar24 == (int *)0x0) || (*piVar24 == -1)) {
        iVar13 = 1;
      }
      else {
        iVar13 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                           (this_00,*piVar24,&this_00->LowValueArray);
      }
      iVar15 = 1;
      if (1 < iVar13) {
        iVar15 = iVar13;
      }
      piVar24 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&this_00->KeyNameIndices,DynamicSubstepDeltaTimeName);
      fVar11 = __real_3f000000;
      if (((piVar24 != (int *)0x0) && (*piVar24 != -1)) &&
         (fVar44 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                             (this_00,*piVar24,&this_00->LowValueArray), 0.0 < fVar44)) {
        fVar45 = this->DeltaTime * __real_447a0000;
        iVar14 = (int)ROUND((fVar45 + fVar45) / fVar44 + fVar11) >> 1;
        iVar13 = iVar15;
        if (iVar14 < iVar15) {
          iVar13 = iVar14;
        }
        iVar15 = 1;
        if (1 < iVar13) {
          iVar15 = iVar13;
        }
      }
      this->NumUsedSubsteps = iVar15;
      piVar24 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&this_00->KeyNameIndices,EnableNumSelfCollisionSubstepsName);
      if ((piVar24 == (int *)0x0) || (*piVar24 == -1)) {
        iVar13 = this->NumUsedSubsteps;
      }
      else {
        bVar12 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                           (this_00,*piVar24,&this_00->LowValueArray);
        iVar13 = this->NumUsedSubsteps;
        if (bVar12) {
          piVar24 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)&this_00->KeyNameIndices,NumSelfCollisionSubstepsName);
          iVar15 = 1;
          if ((piVar24 != (int *)0x0) && (*piVar24 != -1)) {
            iVar15 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                               (this_00,*piVar24,&this_00->LowValueArray);
          }
          iVar14 = iVar13;
          if (iVar15 < iVar13) {
            iVar14 = iVar15;
          }
          iVar13 = 1;
          if (1 < iVar14) {
            iVar13 = iVar14;
          }
        }
      }
      iVar15 = this->NumUsedSubsteps;
      pFVar25 = (this->Evolution).Ptr;
      if (pFVar25 == (FEvolution *)0x0) {
        piVar24 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&this_00->KeyNameIndices,MaxNumIterationsName);
        if ((piVar24 == (int *)0x0) || (*piVar24 == -1)) {
          iVar14 = 10;
        }
        else {
          iVar14 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                             (this_00,*piVar24,&this_00->LowValueArray);
        }
        iVar39 = 1;
        if (1 < iVar14) {
          iVar39 = iVar14;
        }
        piVar24 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&this_00->KeyNameIndices,NumIterationsName);
        if ((piVar24 == (int *)0x0) || (*piVar24 == -1)) {
          iVar14 = 1;
        }
        else {
          iVar14 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                             (this_00,*piVar24,&this_00->LowValueArray);
        }
        iVar34 = iVar39;
        if (iVar14 < iVar39) {
          iVar34 = iVar14;
        }
        iVar14 = 1;
        if (1 < iVar34) {
          iVar14 = iVar34;
        }
        if (bClothSolverDisableTimeDependentNumIterations == false) {
          iVar14 = (int)ROUND((float)iVar14 * this->DeltaTime * __real_42f00000 + fVar11) >> 1;
        }
        if (iVar14 < iVar39) {
          iVar39 = iVar14;
        }
        iVar14 = 1;
        if (1 < iVar39) {
          iVar14 = iVar39;
        }
        ((this->PBDEvolution).Ptr)->MNumIterations = iVar14;
      }
      else {
        Softs::FEvolution::SetSolverProperties(pFVar25,this_00);
        ((this->Evolution).Ptr)->bDisableTimeDependentNumIterations =
             bClothSolverDisableTimeDependentNumIterations;
      }
      fVar11 = __real_3f800000;
      iVar14 = this->NumUsedSubsteps;
      iVar39 = 0;
      fVar44 = this->DeltaTime / (float)iVar14;
      if (0 < iVar14) {
        do {
          iVar34 = iVar39 + 1;
          fVar45 = (float)iVar34 / (float)iVar14;
          if (fVar11 <= (float)iVar34 / (float)iVar14) {
            fVar45 = fVar11;
          }
          if (fVar45 <= 0.0) {
            fVar45 = 0.0;
          }
          PreSubstep(this,fVar45,iVar39 % ((iVar15 + -1) / iVar13 + 1) == 0);
          pFVar25 = (this->Evolution).Ptr;
          if (pFVar25 == (FEvolution *)0x0) {
            Softs::FPBDEvolution::AdvanceOneTimeStep((this->PBDEvolution).Ptr,fVar44);
          }
          else {
            Softs::FEvolution::AdvanceOneTimeStep(pFVar25,fVar44,(float)this->NumUsedSubsteps);
          }
          iVar14 = this->NumUsedSubsteps;
          iVar39 = iVar34;
        } while (iVar34 < iVar14);
      }
      pFVar25 = (this->Evolution).Ptr;
      if (pFVar25 == (FEvolution *)0x0) {
        pFVar25 = (FEvolution *)&((this->PBDEvolution).Ptr)->MTime;
      }
      this->Time = pFVar25->Time;
      if (6 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
      if ((local_318 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_318 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_318 & 4) != 0) {
        FThreadStats::AddMessage(local_320,CycleScopeEnd);
      }
      uVar28 = local_res10;
      local_318 = 0;
      if ((local_res10 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((uVar28 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((uVar28 & 4) != 0) {
        FThreadStats::AddMessage(FVar32,CycleScopeEnd);
      }
      if (bVar42) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2236,"FClothingSimulationSolver_UpdatePostSolverStep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
               ,0x8bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2236);
  }
  FVar26 = StatPtr_STAT_ChaosClothSolverUpdatePostSolverStep;
  if (StatPtr_STAT_ChaosClothSolverUpdatePostSolverStep ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdatePostSolverStep>)0x0) {
    pFVar18 = ::FName::FName(&local_b0,"STAT_ChaosClothSolverUpdatePostSolverStep");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverUpdatePostSolverStep>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosClothSolverUpdatePostSolverStep,*pFVar18,
                        L"Chaos Cloth Solver Update Post Solver Step","STATGROUP_ChaosCloth",
                        "STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar26;
  uVar38 = 0;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  local_res10 = local_res10 & 0xffffff00;
  FVar31 = FVar33.ComparisonIndex.Value;
  uVar28 = FVar33.Number;
  if ((FVar31.Value != 0) || (FVar32 = local_2a8, uVar28 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_348[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_348[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      uVar38 = 1;
      local_res10 = CONCAT31(local_res10._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_2f8.ComparisonIndex.Value = FVar31.Value;
        local_2f8.Number = uVar28;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2f8,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                   ,0x8bd);
        uVar38 = 3;
        local_res10 = CONCAT31(local_res10._1_3_,3);
      }
    }
    FVar32 = local_2a8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar31.Value;
      uStackX_c = uVar28;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      local_res10 = CONCAT31(local_res10._1_3_,uVar38) | 4;
      FVar32 = FVar33;
    }
  }
  FVar27 = StatPtr_STAT_ClothComputeNormals;
  if (StatPtr_STAT_ClothComputeNormals == (FThreadSafeStaticStat<FStat_STAT_ClothComputeNormals>)0x0
     ) {
    pFVar18 = ::FName::FName(&local_b8,"STAT_ClothComputeNormals");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ClothComputeNormals>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothComputeNormals,*pFVar18,
                        L"Compute Clothing Normals","STATGROUP_Physics","STATCAT_Advanced",
                        L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar27;
  bVar12 = false;
  bVar10 = false;
  local_2e8.ComparisonIndex.Value = 0;
  local_2e8.Number = 0;
  FVar31 = FVar33.ComparisonIndex.Value;
  uVar28 = FVar33.Number;
  if ((FVar31.Value != 0) || (uVar28 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_358.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_358._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar12 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2f0.ComparisonIndex.Value = FVar31.Value;
        local_2f0.Number = uVar28;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2f0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                   ,0x8be);
        bVar12 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar31.Value;
      uStackX_c = uVar28;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar43 = true;
      goto LAB_14dc21ca1;
    }
  }
  bVar43 = false;
  FVar33 = local_2e8;
LAB_14dc21ca1:
  if (bClothSolverEnableResetIfExtremeEdgeDeformation != false) {
    pFVar25 = (this->Evolution).Ptr;
    if (pFVar25 == (FEvolution *)0x0) {
      local_140 = &local_260;
      local_148 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l10::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int,int>
                  ::Call;
      local_260 = this;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
                (&((this->PBDEvolution).Ptr)->MParticlesActiveView,
                 (TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)&local_148,
                 bClothSolverParallelClothPostUpdate == false);
    }
    else {
      Softs::FEvolution::GetActiveGroupsArray(pFVar25,&local_228);
      local_120 = &local_228;
      local_150 = &local_128;
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l8::<lambda_1>,void,int>
                  ::Call;
      local_128 = this;
      PhysicsParallelFor(local_228.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_158,false);
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
    }
  }
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)
             &this->field_0x48,(double)this->DeltaTime);
  local_130 = &local_258;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FClothingSimulationSolver::Update'::__l84::<lambda_2>,void,int>
              ::Call;
  local_258 = this;
  PhysicsParallelFor((this->Cloths).ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_138,
                     bClothSolverParallelClothPostUpdate == false);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar43) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_218.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_218.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_250);
      local_218.StatData.Pad[4] = '\0';
      local_218.StatData.Pad[5] = '\0';
      local_218.StatData.Pad[6] = '\0';
      local_218.StatData.Pad[7] = '\0';
      local_218.StatData.Pad[0] = local_250.s.LowPart._0_1_;
      local_218.StatData.Pad[1] = local_250.s.LowPart._1_1_;
      local_218.StatData.Pad[2] = local_250.s.LowPart._2_1_;
      local_218.StatData.Pad[3] = local_250.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_218);
      piVar24 = &pFVar20->ScopeCount;
      *piVar24 = *piVar24 + -1;
      if (*piVar24 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  uVar28 = local_res10;
  if ((local_res10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar28 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar28 & 4) != 0) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar7 = *(undefined8 *)&(this->LocalSpaceLocation).field_0x8;
  uVar4 = *(undefined8 *)&(this->LocalSpaceLocation).field_0x10;
  *(undefined8 *)&this->OldLocalSpaceLocation = *(undefined8 *)&this->LocalSpaceLocation;
  *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x8 = uVar7;
  *(undefined8 *)&(this->OldLocalSpaceLocation).field_0x10 = uVar4;
  if ((local_328 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_328 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_328 & 4) != 0) {
    FThreadStats::AddMessage(local_330,CycleScopeEnd);
  }
  local_328 = 0;
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateFromCache @ 14dc22fe0

void __thiscall
Chaos::FClothingSimulationSolver::UpdateFromCache
          (FClothingSimulationSolver *this,FClothingSimulationCacheData *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FEvolution *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  TParticles<float,3> *this_00;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  int local_res10;
  FClothingSimulationSolver *local_98;
  FClothingSimulationCacheData *local_90;
  code *local_88;
  FClothingSimulationSolver **local_80;
  
  pFVar5 = (this->Evolution).Ptr;
  if (pFVar5 == (FEvolution *)0x0) {
    this_00 = (TParticles<float,3> *)&((this->PBDEvolution).Ptr)->MParticles;
    local_res10 = (int)(((this->PBDEvolution).Ptr)->MParticles)._padding_;
  }
  else {
    local_res10 = (int)(pFVar5->Particles)._padding_;
    this_00 = (TParticles<float,3> *)&pFVar5->Particles;
  }
  iVar4 = (param_1->CachedVelocities).ArrayNum;
  uVar16 = 0;
  lVar12 = (longlong)(param_1->CacheIndices).ArrayNum;
  if (0 < lVar12) {
    lVar17 = 0;
    lVar18 = 0;
    do {
      uVar14 = ~uVar16 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar16 < (param_1->CacheIndices).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar10 = *(uint *)((param_1->CacheIndices).AllocatorInstance.Data + lVar17 * 4);
      if ((int)uVar10 < local_res10) {
        uVar11 = 0;
        if ((int)uVar16 < (param_1->CachedPositions).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (param_1->CachedPositions).AllocatorInstance.Data;
        dVar1 = *(double *)(pFVar6 + lVar18);
        dVar2 = *(double *)(pFVar6 + lVar18 + 8);
        dVar3 = *(double *)(pFVar6 + lVar18 + 0x10);
        pTVar13 = TParticles<float,3>::X(this_00,uVar10);
        *(float *)pTVar13 = (float)dVar1;
        *(float *)&pTVar13->field_0x4 = (float)dVar2;
        *(float *)&pTVar13->field_0x8 = (float)dVar3;
        if (iVar4 < 1) {
          fVar20 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar19 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          uVar11 = 0;
          if ((int)uVar16 < (param_1->CachedVelocities).ArrayNum) {
            uVar11 = uVar14;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = (param_1->CachedVelocities).AllocatorInstance.Data;
          fVar20 = (float)*(double *)(pFVar6 + lVar18);
          fVar19 = (float)*(double *)(pFVar6 + lVar18 + 8);
          uVar15 = (float)*(double *)(pFVar6 + lVar18 + 0x10);
        }
        uVar14 = 0;
        if ((int)uVar10 < (int)this_00[1]._padding_) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = this_00[1]._padding_;
        *(ulonglong *)(lVar7 + (longlong)(int)uVar10 * 0xc) = CONCAT44(fVar19,fVar20);
        *(undefined4 *)(lVar7 + 8 + (longlong)(int)uVar10 * 0xc) = uVar15;
      }
      else {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5929205345720207617>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationSolver.cpp"
                           ,0x901,"ParticleIndex < NumParticles");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0x18;
    } while (lVar17 < lVar12);
  }
  local_80 = &local_98;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClothingSimulationSolver::UpdateFromCache'::__l2::<lambda_1>,void,int>
             ::Call;
  local_98 = this;
  local_90 = param_1;
  PhysicsParallelFor((this->Cloths).ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_88,
                     bClothSolverParallelClothPostUpdate == false);
  return;
}

// UpdateSolverField @ 14dc23df0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FClothingSimulationSolver::UpdateSolverField(FClothingSimulationSolver *this)

{
  undefined1 *puVar1;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *this_00;
  FPerSolverFieldSystem *this_01;
  float fVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FEvolution *pFVar6;
  uint *puVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  FPBDEvolution *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  TVector<float,3> *pTVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 uVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 *puVar28;
  uint *puVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 local_15c;
  longlong local_158;
  FScriptContainerElement *local_150;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_148;
  int local_138;
  int local_134;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_130;
  FScriptContainerElement *local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  code *local_c0;
  FClothingSimulationSolver **local_b8;
  FClothingSimulationSolver *local_b0;
  FPerSolverFieldSystem *local_a8;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *local_a0;
  undefined4 *local_98;
  undefined4 local_74;
  
  pFVar6 = (this->Evolution).Ptr;
  if (((pFVar6 == (FEvolution *)0x0) && ((this->PBDEvolution).Ptr == (FPBDEvolution *)0x0)) ||
     (((this->PerSolverField).TransientCommands.ArrayNum == 0 &&
      ((this->PerSolverField).PersistentCommands.ArrayNum == 0)))) {
    iVar17 = (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayMax;
    (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayNum = 0;
    if (iVar17 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->PerSolverField).ExecutionDatas.FieldOutputs[1].AllocatorInstance,0
                 ,&(this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayMax);
    }
    iVar17 = (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayMax;
    (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayNum = 0;
    if (iVar17 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->PerSolverField).ExecutionDatas.FieldOutputs[0].AllocatorInstance,0
                 ,&(this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayMax);
      return;
    }
  }
  else {
    this_00 = &(this->PerSolverField).ExecutionDatas.SampleIndices;
    this_01 = &this->PerSolverField;
    if (pFVar6 == (FEvolution *)0x0) {
      pFVar10 = (this->PBDEvolution).Ptr;
      lVar32 = (pFVar10->MParticles)._padding_;
      iVar17 = TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveSize
                         (&pFVar10->MParticlesActiveView);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)this_01,
                 (int)lVar32,No);
      TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar17,No);
      local_98 = &local_15c;
      local_b8 = &local_b0;
      local_15c = 0;
      local_c0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClothingSimulationSolver::UpdateSolverField'::__l20::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int>
                 ::Call;
      local_b0 = this;
      local_a8 = this_01;
      local_a0 = this_00;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::SequentialFor
                (&((this->PBDEvolution).Ptr)->MParticlesActiveView,
                 (TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *)&local_c0);
    }
    else {
      lVar32 = (pFVar6->Particles)._padding_;
      iVar17 = Softs::FEvolution::NumActiveParticles(pFVar6);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)this_01,
                 (int)lVar32,No);
      TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar17,No);
      uVar30 = 0;
      Softs::FEvolution::GetActiveGroupsArray((this->Evolution).Ptr,&local_148);
      uVar15 = local_148._8_8_;
      lVar32 = 0;
      uVar21 = (ulonglong)local_148.ArrayNum;
      local_158 = 0;
      local_128 = local_148.AllocatorInstance.Data + uVar21 * 4;
      FVar24.Data = local_148.AllocatorInstance.Data;
      while( true ) {
        pFVar9 = local_128;
        local_150 = FVar24.Data;
        if (local_148.ArrayNum != (int)uVar21) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar24.Data == pFVar9) break;
        pTVar18 = Softs::FEvolution::GetGroupActiveSoftBodies
                            ((this->Evolution).Ptr,*(uint *)FVar24.Data);
        iVar17 = *(int *)&(pTVar18->Elements).field_0x28;
        iStack_118 = 0;
        local_100 = 0;
        puVar1 = &(pTVar18->Elements).field_0x10;
        uStack_114 = 1;
        iStack_104 = 0;
        if (iVar17 != 0) {
          puVar7 = *(uint **)&(pTVar18->Elements).field_0x20;
          puVar29 = (uint *)puVar1;
          if (puVar7 != (uint *)0x0) {
            puVar29 = puVar7;
          }
          uVar27 = *puVar29;
          while (uVar27 == 0) {
            lVar20 = (longlong)iStack_118;
            local_100 = local_100 + 0x20;
            iStack_118 = iStack_118 + 1;
            iStack_104 = iVar17;
            if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118)
            goto LAB_14dc24033;
            uVar27 = puVar29[lVar20 + 1];
          }
          uStack_114 = -uVar27 & uVar27;
          uVar21 = (ulonglong)uStack_114 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_138 = (int)lVar20;
          iStack_104 = local_138 + -1 + local_100;
          if (iVar17 < iStack_104) {
            iStack_104 = iVar17;
          }
        }
LAB_14dc24033:
        uVar27 = *(uint *)&(pTVar18->Elements).field_0x28;
        uStack_fc = local_74;
        iStack_f8 = *(int *)&(pTVar18->Elements).field_0x8 - *(int *)&(pTVar18->Elements).field_0x34
        ;
        uVar25 = uVar27 & 0xffffffe0;
        TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
        uStack_108 = 0xffffffff;
        TStack_e8.CurrentBitIndex = iStack_104;
        TStack_e8.UnvisitedBitMask = 0xffffffff;
        iVar22 = (int)uVar27 >> 5;
        TStack_e8._28_4_ = local_74;
        TStack_e8.BaseBitIndex = local_100;
        uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
        local_res20 = uVar27;
        local_130 = pTVar18;
        local_120 = pTVar18;
        local_110 = puVar1;
        local_f0 = pTVar18;
        TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar27 < 0) || (iVar17 < (int)uVar27)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar5 = *(uint *)&(pTVar18->Elements).field_0x28;
        if (uVar27 != uVar5) {
          puVar8 = *(undefined1 **)&(pTVar18->Elements).field_0x20;
          puVar28 = puVar1;
          if (puVar8 != (undefined1 *)0x0) {
            puVar28 = puVar8;
          }
          uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar22 * 4);
          while (uVar27 == 0) {
            lVar20 = (longlong)iVar22;
            uVar25 = uVar25 + 0x20;
            iVar22 = iVar22 + 1;
            uVar27 = uVar5;
            local_res20 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
            goto LAB_14dc24160;
            uVar27 = *(uint *)(puVar28 + lVar20 * 4 + 4);
          }
          uVar21 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_134 = (int)lVar20;
          uVar27 = local_134 + -1 + uVar25;
          local_res20 = uVar27;
          if ((int)uVar5 < (int)uVar27) {
            uVar27 = uVar5;
            local_res20 = uVar5;
          }
        }
LAB_14dc24160:
        while( true ) {
          pTVar18 = local_f0;
          if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
              (int)uStack_c8) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_e8.CurrentBitIndex == uVar27) &&
              (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar18 == local_130)) break;
          pFVar6 = (this->Evolution).Ptr;
          uVar27 = *(uint *)(*(longlong *)&pTVar18->Elements +
                            (longlong)TStack_e8.CurrentBitIndex * 0xc);
          uVar25 = 0;
          if ((int)uVar27 < *(int *)&(pFVar6->SoftBodies).ParticleRanges.field_0x10) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
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
          lVar20 = *(longlong *)&(pFVar6->SoftBodies).ParticleRanges.field_0x8;
          lVar26 = (longlong)(int)uVar27 * 0x20;
          iVar17 = 0;
          if (0 < *(int *)(lVar26 + 0x14 + lVar20)) {
            lVar31 = lVar32 * 8;
            do {
              uVar27 = *(int *)(lVar26 + 0x10 + lVar20) + iVar17;
              if ((*(longlong *)(lVar26 + 8 + lVar20) == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar19 = TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(lVar26 + 8 + lVar20),
                                   *(int *)(lVar26 + 0x10 + lVar20) + iVar17);
              fVar2 = *(float *)pTVar19;
              dVar3 = this->LocalSpaceScale;
              uVar23 = *(undefined8 *)&pTVar19->field_0x4;
              dVar14 = *(double *)&(this->LocalSpaceLocation).field_0x8;
              dVar13 = (double)(float)((ulonglong)uVar23 >> 0x20) * dVar3 +
                       *(double *)&(this->LocalSpaceLocation).field_0x10;
              dVar4 = *(double *)&this->LocalSpaceLocation;
              uVar25 = 0;
              if ((int)uVar27 < (this->PerSolverField).ExecutionDatas.SamplePositions.ArrayNum) {
                uVar25 = ~uVar27 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar9 = (this->PerSolverField).ExecutionDatas.SamplePositions.AllocatorInstance.Data;
              *(double *)(pFVar9 + (longlong)(int)uVar27 * 0x18) = (double)fVar2 * dVar3 + dVar4;
              auVar12._8_4_ = SUB84(dVar13,0);
              auVar12._0_8_ = (double)(float)uVar23 * dVar3 + dVar14;
              auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              *(undefined1 (*) [16])(pFVar9 + (longlong)(int)uVar27 * 0x18 + 8) = auVar12;
              uVar23 = CONCAT44(uVar30,uVar27);
              uVar27 = 0;
              if ((int)uVar30 < (this->PerSolverField).ExecutionDatas.SampleIndices.ArrayNum) {
                uVar27 = ~uVar30 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar30 = uVar30 + 1;
              iVar17 = iVar17 + 1;
              lVar32 = local_158 + 1;
              *(undefined8 *)
               ((this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance.Data + lVar31)
                   = uVar23;
              lVar31 = lVar31 + 8;
              local_158 = lVar32;
            } while (iVar17 < *(int *)(lVar26 + 0x14 + lVar20));
          }
          TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
          uVar27 = local_res20;
        }
        FVar24.Data = local_150 + 4;
        uVar21 = uVar15 & 0xffffffff;
      }
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
    }
    FPerSolverFieldSystem::ComputeFieldLinearImpulse(&this->PerSolverField,(double)this->Time);
  }
  return;
}

