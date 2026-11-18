// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FSimulationParameters @ 1440fd0d0

FSimulationParameters * __thiscall
FSimulationParameters::FSimulationParameters
          (FSimulationParameters *this,FSimulationParameters *param_1)

{
  FSharedSimulationParameters *pFVar1;
  int *piVar2;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSharedSimulationSizeSpecificData *pFVar7;
  FFieldSystemCommand *pFVar8;
  FScriptContainerElement *_Src;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  
  ::FString::FString(&this->Name,&param_1->Name);
  this->RestCollection = param_1->RestCollection;
  (this->RestCollectionShared).Object = (param_1->RestCollectionShared).Object;
  pTVar6 = (param_1->RestCollectionShared).SharedReferenceCount.ReferenceController;
  (this->RestCollectionShared).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = &this->Shared;
  (pFVar1->SizeSpecificData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Shared).SizeSpecificData.ArrayMax;
  iVar5 = (param_1->Shared).SizeSpecificData.ArrayNum;
  pFVar7 = (FSharedSimulationSizeSpecificData *)
           (param_1->Shared).SizeSpecificData.AllocatorInstance.Data;
  (this->Shared).SizeSpecificData.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,(ForAnyElementType *)pFVar1,iVar5,piVar2);
    ConstructItems<FSharedSimulationSizeSpecificData,FSharedSimulationSizeSpecificData,int>
              ((pFVar1->SizeSpecificData).AllocatorInstance.Data,pFVar7,iVar5);
  }
  pTVar3 = &this->InitializationCommands;
  (this->Shared).MinimumMassClamp = (param_1->Shared).MinimumMassClamp;
  (this->Shared).MaximumMassClamp = (param_1->Shared).MaximumMassClamp;
  (this->Shared).MinimumBoundingExtentClamp = (param_1->Shared).MinimumBoundingExtentClamp;
  (this->Shared).MaximumBoundingExtentClamp = (param_1->Shared).MaximumBoundingExtentClamp;
  (this->Shared).MinimumInertiaTensorDiagonalClamp =
       (param_1->Shared).MinimumInertiaTensorDiagonalClamp;
  (this->Shared).MaximumInertiaTensorDiagonalClamp =
       (param_1->Shared).MaximumInertiaTensorDiagonalClamp;
  (this->Shared).MaximumCollisionParticleCount = (param_1->Shared).MaximumCollisionParticleCount;
  (this->Shared).Mass = (param_1->Shared).Mass;
  bVar21 = ((this->Shared).bMassAsDensity ^ (param_1->Shared).bMassAsDensity) & 1U ^
           (this->Shared).field_0x30;
  (this->Shared).field_0x30 = bVar21;
  (this->Shared).field_0x30 = (bVar21 ^ (param_1->Shared).field_0x30) & 2 ^ bVar21;
  piVar2 = &(this->InitializationCommands).ArrayMax;
  dVar17 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar17;
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Rotation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar10,0);
  auVar12._0_8_ = (double)fVar9;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Rotation.ZW.m128d_f64 = auVar12;
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Translation.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar10,0);
  auVar14._0_8_ = (double)fVar9;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Translation.ZW.m128d_f64 = auVar14;
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Scale3D.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar10,0);
  auVar16._0_8_ = (double)fVar9;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Scale3D.ZW.m128d_f64 = auVar16;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->InitializationCommands).ArrayNum;
  pFVar8 = (FFieldSystemCommand *)(param_1->InitializationCommands).AllocatorInstance.Data;
  (this->InitializationCommands).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int>
              ((pTVar3->AllocatorInstance).Data,pFVar8,iVar5);
  }
  pTVar4 = &this->DamageThreshold;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DamageThreshold).ArrayMax;
  iVar5 = (param_1->DamageThreshold).ArrayNum;
  _Src = (param_1->DamageThreshold).AllocatorInstance.Data;
  (this->DamageThreshold).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar5 << 2);
  }
  this->InitialRootIndex = param_1->InitialRootIndex;
  this->ClusterGroupIndex = param_1->ClusterGroupIndex;
  this->MaxClusterLevel = param_1->MaxClusterLevel;
  this->MaxSimulatedLevel = param_1->MaxSimulatedLevel;
  this->ObjectType = param_1->ObjectType;
  this->InitialVelocityType = param_1->InitialVelocityType;
  this->DamageModel = param_1->DamageModel;
  this->DamageEvaluationModel = param_1->DamageEvaluationModel;
  this->ClusterConnectionMethod = param_1->ClusterConnectionMethod;
  this->ConnectionGraphBoundsFilteringMargin = param_1->ConnectionGraphBoundsFilteringMargin;
  this->CollisionGroup = param_1->CollisionGroup;
  this->CollisionSampleFraction = param_1->CollisionSampleFraction;
  *(undefined8 *)&(this->InitialLinearVelocity).field0_0x0 =
       *(undefined8 *)&(param_1->InitialLinearVelocity).field0_0x0;
  (this->InitialLinearVelocity).field0_0x0._s_0.Z =
       (param_1->InitialLinearVelocity).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->InitialAngularVelocity).field0_0x0 =
       *(undefined8 *)&(param_1->InitialAngularVelocity).field0_0x0;
  (this->InitialAngularVelocity).field0_0x0._s_0.Z =
       (param_1->InitialAngularVelocity).field0_0x0._s_0.Z;
  (this->PhysicalMaterialHandle).InnerHandle = (param_1->PhysicalMaterialHandle).InnerHandle;
  this->MaterialOverrideMassScaleMultiplier = param_1->MaterialOverrideMassScaleMultiplier;
  bVar21 = (this->Simulating ^ param_1->Simulating) & 1U ^ this->field_0x180;
  this->field_0x180 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x180) & 2 ^ bVar21;
  this->field_0x180 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x180) & 4 ^ bVar21;
  this->field_0x180 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x180) & 8 ^ bVar21;
  this->field_0x180 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x180) & 0x10 ^ bVar21;
  this->field_0x180 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x180) & 0x20 ^ bVar21;
  this->field_0x180 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x180) & 0x40 ^ bVar21;
  this->field_0x180 = bVar21;
  this->field_0x180 = (bVar21 ^ param_1->field_0x180) & 0x7f ^ param_1->field_0x180;
  bVar21 = (this->bGenerateCollisionData ^ param_1->bGenerateCollisionData) & 1U ^ this->field_0x181
  ;
  this->field_0x181 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x181) & 2 ^ bVar21;
  this->field_0x181 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x181) & 4 ^ bVar21;
  this->field_0x181 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x181) & 8 ^ bVar21;
  this->field_0x181 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x181) & 0x10 ^ bVar21;
  this->field_0x181 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x181) & 0x20 ^ bVar21;
  this->field_0x181 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x181) & 0x40 ^ bVar21;
  this->field_0x181 = bVar21;
  this->field_0x181 = (bVar21 ^ param_1->field_0x181) & 0x7f ^ param_1->field_0x181;
  bVar21 = (this->EnableGravity ^ param_1->EnableGravity) & 1U ^ this->field_0x182;
  this->field_0x182 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x182) & 2 ^ bVar21;
  this->field_0x182 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x182) & 4 ^ bVar21;
  this->field_0x182 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x182) & 8 ^ bVar21;
  this->field_0x182 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x182) & 0x10 ^ bVar21;
  this->field_0x182 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x182) & 0x20 ^ bVar21;
  this->field_0x182 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x182) & 0x40 ^ bVar21;
  this->field_0x182 = bVar21;
  this->field_0x182 = (bVar21 ^ param_1->field_0x182) & 0x7f ^ param_1->field_0x182;
  bVar21 = (this->bUseSimplicialsWhenAvailable ^ param_1->bUseSimplicialsWhenAvailable) & 1U ^
           this->field_0x183;
  this->field_0x183 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0x183) & 2 ^ bVar21;
  this->field_0x183 = bVar21;
  this->field_0x183 = (bVar21 ^ param_1->field_0x183) & 4 ^ bVar21;
  this->PositionSolverIterations = param_1->PositionSolverIterations;
  this->VelocitySolverIterations = param_1->VelocitySolverIterations;
  this->ProjectionSolverIterations = param_1->ProjectionSolverIterations;
  this->BreakDamagePropagationFactor = param_1->BreakDamagePropagationFactor;
  this->ShockDamagePropagationFactor = param_1->ShockDamagePropagationFactor;
  this->LinearDamping = param_1->LinearDamping;
  this->AngularDamping = param_1->AngularDamping;
  this->InitialOverlapDepenetrationVelocity = param_1->InitialOverlapDepenetrationVelocity;
  this->SleepThresholdMultiplier = param_1->SleepThresholdMultiplier;
  this->GravityGroupIndex = param_1->GravityGroupIndex;
  this->OneWayInteractionLevel = param_1->OneWayInteractionLevel;
  uVar18 = (param_1->SimulationFilterData).Word1;
  uVar19 = (param_1->SimulationFilterData).Word2;
  uVar20 = (param_1->SimulationFilterData).Word3;
  (this->SimulationFilterData).Word0 = (param_1->SimulationFilterData).Word0;
  (this->SimulationFilterData).Word1 = uVar18;
  (this->SimulationFilterData).Word2 = uVar19;
  (this->SimulationFilterData).Word3 = uVar20;
  uVar18 = (param_1->QueryFilterData).Word1;
  uVar19 = (param_1->QueryFilterData).Word2;
  uVar20 = (param_1->QueryFilterData).Word3;
  (this->QueryFilterData).Word0 = (param_1->QueryFilterData).Word0;
  (this->QueryFilterData).Word1 = uVar18;
  (this->QueryFilterData).Word2 = uVar19;
  (this->QueryFilterData).Word3 = uVar20;
  this->UserData = param_1->UserData;
  this->RecordedTrack = param_1->RecordedTrack;
  this->CacheBeginTime = param_1->CacheBeginTime;
  this->ReverseCacheBeginTime = param_1->ReverseCacheBeginTime;
  this->CacheType = param_1->CacheType;
  this->field_0x1e1 = ((this->bClearCache ^ param_1->bClearCache) & 1U ^ this->field_0x1e1) & 0xfd;
  return this;
}

// ~FSimulationParameters @ 1440fe2e0

void __thiscall FSimulationParameters::~FSimulationParameters(FSimulationParameters *this)

{
  FRecordedTransformTrack *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if ((this->bOwnsTrack) && (pFVar1 = this->RecordedTrack, pFVar1 != (FRecordedTransformTrack *)0x0)
     ) {
    DestructItems<FRecordedFrame,int>
              ((FRecordedFrame *)(pFVar1->Records).AllocatorInstance.Data,(pFVar1->Records).ArrayNum
              );
    pFVar2 = (pFVar1->Records).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
  }
  pFVar2 = (this->DamageThreshold).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->InitializationCommands).AllocatorInstance.Data,
             (this->InitializationCommands).ArrayNum);
  pFVar2 = (this->InitializationCommands).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSharedSimulationSizeSpecificData,int>
            ((FSharedSimulationSizeSpecificData *)
             (this->Shared).SizeSpecificData.AllocatorInstance.Data,
             (this->Shared).SizeSpecificData.ArrayNum);
  pFVar2 = (this->Shared).SizeSpecificData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RestCollectionShared).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

