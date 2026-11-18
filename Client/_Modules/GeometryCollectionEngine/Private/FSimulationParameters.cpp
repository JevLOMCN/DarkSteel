// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// FSimulationParameters @ 14635c900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSimulationParameters * __thiscall
FSimulationParameters::FSimulationParameters(FSimulationParameters *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  byte bVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  
  ::FString::FString(&this->Name,"");
  piVar1 = &(this->Shared).SizeSpecificData.ArrayMax;
  (this->Shared).MinimumMassClamp = 0.1;
  this->RestCollection = (FGeometryCollection *)0x0;
  (this->RestCollectionShared).Object = (FGeometryCollection *)0x0;
  puVar2 = &(this->Shared).field_0x30;
  (this->Shared).bMassAsDensity = true;
  (this->Shared).bUseImportedCollisionImplicits = false;
  (this->RestCollectionShared).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Shared).SizeSpecificData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shared).SizeSpecificData.ArrayNum = 0;
  *piVar1 = 0;
  (this->Shared).MaximumMassClamp = 100000.0;
  (this->Shared).MinimumBoundingExtentClamp = 0.1;
  (this->Shared).MaximumBoundingExtentClamp = 1e+06;
  (this->Shared).MinimumInertiaTensorDiagonalClamp = 1e-08;
  (this->Shared).MaximumInertiaTensorDiagonalClamp = 1e+20;
  (this->Shared).MaximumCollisionParticleCount = 0x3c;
  (this->Shared).Mass = 1.0;
  iVar15 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,(ForAnyElementType *)&this->Shared,piVar1);
  (this->Shared).SizeSpecificData.ArrayNum = iVar15 + 1;
  DefaultConstructItems<FSharedSimulationSizeSpecificData,int>
            ((this->Shared).SizeSpecificData.AllocatorInstance.Data + (longlong)iVar15 * 0x18,1);
  pTVar3 = &this->DamageThreshold;
  *&(this->WorldTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->WorldTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->WorldTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->WorldTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->WorldTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->WorldTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar8,0);
  auVar10._0_8_ = (double)fVar7;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar8,0);
  auVar12._0_8_ = (double)fVar7;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar8,0);
  auVar14._0_8_ = (double)fVar7;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(this->PrevWorldTransform).Scale3D.ZW.m128d_f64 = auVar14;
  (this->InitializationCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializationCommands).ArrayNum = 0;
  (this->InitializationCommands).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DamageThreshold).ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&pTVar3->AllocatorInstance,3,&(this->DamageThreshold).ArrayMax);
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  *(undefined8 *)pFVar6 = 0x4743500048f42400;
  *(undefined4 *)(pFVar6 + 8) = 0x459c4000;
  (this->PhysicalMaterialHandle).InnerHandle =
       (THandle<Chaos::FChaosPhysicsMaterial,24,8>)
       ((uint)(this->PhysicalMaterialHandle).InnerHandle & 0xff000000);
  this->bUseSimplicialsWhenAvailable = false;
  this->bOptimizeForRuntimeMemory = false;
  this->bUseDamagePropagation = false;
  this->bClearCache = false;
  this->bOwnsTrack = false;
  this->InitialRootIndex = -1;
  this->ClusterGroupIndex = 0;
  this->MaxClusterLevel = 100;
  this->MaxSimulatedLevel = 100;
  this->ObjectType = Chaos_NONE;
  this->InitialVelocityType = Chaos_Initial_Velocity_None;
  this->DamageModel = Chaos_Damage_Model_UserDefined_Damage_Threshold;
  this->DamageEvaluationModel = StrainFromDamageThreshold;
  this->ClusterConnectionMethod = PointImplicit;
  this->ConnectionGraphBoundsFilteringMargin = 0.0;
  this->CollisionGroup = 0;
  *(undefined8 *)&this->CollisionSampleFraction = 0x3f800000;
  *(undefined8 *)((longlong)&(this->InitialLinearVelocity).field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->InitialAngularVelocity).field0_0x0 = 0;
  (this->InitialAngularVelocity).field0_0x0._s_0.Z = 0.0;
  (this->PhysicalMaterialHandle).InnerHandle.field_0x3 = 0;
  this->MaterialOverrideMassScaleMultiplier = 1.0;
  puVar4 = &this->field_0x180;
  this->Simulating = false;
  this->bGenerateGlobalCrumblingChildrenData = false;
  this->bGenerateGlobalCrumblingData = false;
  this->bGenerateGlobalCollisionData = false;
  this->bGenerateGlobalBreakingData = false;
  this->bGenerateCrumblingChildrenData = false;
  this->bGenerateCrumblingData = false;
  this->bGenerateTrailingData = false;
  this->bGenerateCollisionData = false;
  this->bGenerateBreakingData = false;
  this->bForceUpdateActiveTransforms = false;
  this->StartAwake = true;
  this->bUsePerClusterOnlyDamageThreshold = false;
  this->bUseMaterialDamageModifiers = false;
  this->bUseSizeSpecificDamageThresholds = false;
  this->EnableClustering = true;
  puVar4 = &this->field_0x182;
  this->EnableGravity = true;
  this->bOptimizeConvexes = true;
  this->bUseStaticMeshCollisionForTraces = false;
  this->bEnableStrainOnCollision = true;
  this->AllowPartialIslandSleep = true;
  this->UseMACD = false;
  this->UseCCD = false;
  this->UseInertiaConditioning = true;
  this->PositionSolverIterations = '\b';
  this->VelocitySolverIterations = '\x01';
  this->ProjectionSolverIterations = '\x01';
  this->BreakDamagePropagationFactor = 1.0;
  this->ShockDamagePropagationFactor = 0.0;
  this->LinearDamping = 0.01;
  this->AngularDamping = 0.0;
  this->InitialOverlapDepenetrationVelocity = -1.0;
  this->SleepThresholdMultiplier = 1.0;
  this->GravityGroupIndex = 0;
  this->OneWayInteractionLevel = -1;
  (this->SimulationFilterData).Word2 = 0;
  (this->SimulationFilterData).Word3 = 0;
  (this->SimulationFilterData).Word0 = 0;
  (this->SimulationFilterData).Word1 = 0;
  (this->QueryFilterData).Word2 = 0;
  (this->QueryFilterData).Word3 = 0;
  (this->QueryFilterData).Word0 = 0;
  (this->QueryFilterData).Word1 = 0;
  this->UserData = (void *)0x0;
  this->RecordedTrack = (FRecordedTransformTrack *)0x0;
  this->CacheBeginTime = 0.0;
  this->ReverseCacheBeginTime = 0.0;
  this->CacheType = None;
  return this;
}

