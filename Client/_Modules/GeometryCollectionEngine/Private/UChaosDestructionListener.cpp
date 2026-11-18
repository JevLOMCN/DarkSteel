// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 54

// StaticClass @ 146344340

UClass * __cdecl UChaosDestructionListener::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosDestructionListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"ChaosDestructionListener",
               &Z_Registration_Info_UClass_UChaosDestructionListener.InnerSingleton,
               StaticRegisterNativesUChaosDestructionListener,0x520,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosDestructionListener>,
               InternalVTableHelperCtorCaller<UChaosDestructionListener>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosDestructionListener.InnerSingleton;
}

// UChaosDestructionListener @ 14635cd20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosDestructionListener * __thiscall
UChaosDestructionListener::UChaosDestructionListener
          (UChaosDestructionListener *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CollisionEventRequestSettings).MaxNumberResults = 0;
  (this->CollisionEventRequestSettings).MinMass = 0.0;
  (this->CollisionEventRequestSettings).MinSpeed = 0.0;
  (this->CollisionEventRequestSettings).MinImpulse = 0.0;
  (this->CollisionEventRequestSettings).MaxDistance = 0.0;
  (this->BreakingEventRequestSettings).MaxNumberOfResults = 0;
  (this->BreakingEventRequestSettings).MinRadius = 0.0;
  (this->BreakingEventRequestSettings).MinSpeed = 0.0;
  (this->BreakingEventRequestSettings).MinMass = 0.0;
  (this->BreakingEventRequestSettings).MaxDistance = 0.0;
  (this->TrailingEventRequestSettings).MaxNumberOfResults = 0;
  (this->TrailingEventRequestSettings).MinMass = 0.0;
  (this->TrailingEventRequestSettings).MinSpeed = 0.0;
  (this->TrailingEventRequestSettings).MinAngularSpeed = 0.0;
  (this->TrailingEventRequestSettings).MaxDistance = 0.0;
  (this->RemovalEventRequestSettings).MaxNumberOfResults = 0;
  (this->RemovalEventRequestSettings).MinMass = 0.0;
  (this->RemovalEventRequestSettings).MaxDistance = 0.0;
  *(undefined8 *)&(this->ChaosSolverActors).Elements = 0;
  *(undefined8 *)&(this->ChaosSolverActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChaosSolverActors).Elements.field_0x20 = 0;
  (this->CollisionEventRequestSettings).SortMethod = SortByHighestMass;
  (this->BreakingEventRequestSettings).SortMethod = SortByHighestMass;
  (this->TrailingEventRequestSettings).SortMethod = SortByHighestMass;
  (this->RemovalEventRequestSettings).SortMethod = SortByHighestMass;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x34 = 0;
  (this->ChaosSolverActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChaosSolverActors).HashSize = 0;
  *(undefined8 *)&(this->GeometryCollectionActors).Elements = 0;
  *(undefined8 *)&(this->GeometryCollectionActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeometryCollectionActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x34 = 0;
  (this->GeometryCollectionActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeometryCollectionActors).HashSize = 0;
  *(undefined8 *)&this->OnCollisionEvents = 0;
  *(undefined8 *)&(this->OnCollisionEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnCollisionEvents).field_0x10 = 0;
  *(undefined8 *)&this->OnBreakingEvents = 0;
  *(undefined8 *)&(this->OnBreakingEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnBreakingEvents).field_0x10 = 0;
  *(undefined8 *)&this->OnTrailingEvents = 0;
  *(undefined8 *)&(this->OnTrailingEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnTrailingEvents).field_0x10 = 0;
  *(undefined8 *)&this->OnRemovalEvents = 0;
  *(undefined8 *)&(this->OnRemovalEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovalEvents).field_0x10 = 0;
  (this->TaskState).Counter = 0;
  (this->RawCollisionDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawCollisionDataArray).ArrayNum = 0;
  (this->RawCollisionDataArray).ArrayMax = 0;
  (this->RawBreakingDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawBreakingDataArray).ArrayNum = 0;
  (this->RawBreakingDataArray).ArrayMax = 0;
  (this->RawTrailingDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawTrailingDataArray).ArrayNum = 0;
  (this->RawTrailingDataArray).ArrayMax = 0;
  (this->RawRemovalDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawRemovalDataArray).ArrayNum = 0;
  (this->RawRemovalDataArray).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ChaosComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ChaosComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ChaosComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ChaosComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ChaosComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ChaosComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ChaosComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ChaosComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ChaosComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ChaosComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ChaosComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ChaosComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bChanged = (FThreadSafeBool)0x0;
  *(undefined8 *)&(this->Solvers).Elements = 0;
  *(undefined8 *)&(this->Solvers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Solvers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Solvers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Solvers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Solvers).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Solvers).Elements.field_0x30 = 0xffffffff;
  (this->Solvers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Solvers).HashSize = 0;
  (this->GeometryCollectionPhysicsProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryCollectionPhysicsProxies).ArrayNum = 0;
  (this->GeometryCollectionPhysicsProxies).ArrayMax = 0;
  (this->ChaosCollisionFilter).Object = (FChaosCollisionEventFilter *)0x0;
  (this->ChaosCollisionFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChaosBreakingFilter).Object = (FChaosBreakingEventFilter *)0x0;
  (this->ChaosBreakingFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChaosTrailingFilter).Object = (FChaosTrailingEventFilter *)0x0;
  (this->ChaosTrailingFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChaosRemovalFilter).Object = (FChaosRemovalEventFilter *)0x0;
  (this->ChaosRemovalFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UChaosDestructionListener @ 14635cfd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosDestructionListener * __thiscall
UChaosDestructionListener::UChaosDestructionListener
          (UChaosDestructionListener *this,FObjectInitializer *param_1)

{
  FChaosCollisionEventRequestSettings *pFVar1;
  FChaosBreakingEventRequestSettings *pFVar2;
  FChaosTrailingEventRequestSettings *pFVar3;
  FChaosRemovalEventRequestSettings *pFVar4;
  FChaosCollisionEventFilter *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FChaosTrailingEventFilter *pFVar7;
  FChaosRemovalEventFilter *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TReferenceControllerBase<1> *pTVar12;
  FChaosBreakingEventFilter *pFVar13;
  TSharedPtr<FChaosCollisionEventFilter,1> *pTVar14;
  TSharedPtr<FChaosBreakingEventFilter,1> *pTVar15;
  TSharedPtr<FChaosTrailingEventFilter,1> *pTVar16;
  FChaosBreakingEventFilter *pFVar17;
  TSharedPtr<FChaosRemovalEventFilter,1> *pTVar18;
  TRawPtrProxy<FChaosBreakingEventFilter> local_res8;
  TSharedPtr<FChaosBreakingEventFilter,1> local_28;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pFVar17 = (FChaosBreakingEventFilter *)0x0;
  pFVar1 = &this->CollisionEventRequestSettings;
  pFVar2 = &this->BreakingEventRequestSettings;
  pFVar3 = &this->TrailingEventRequestSettings;
  pFVar4 = &this->RemovalEventRequestSettings;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1->MaxNumberResults = 0;
  pFVar1->MinMass = 0.0;
  (this->CollisionEventRequestSettings).MinSpeed = 0.0;
  (this->CollisionEventRequestSettings).MinImpulse = 0.0;
  (this->CollisionEventRequestSettings).MaxDistance = 0.0;
  (this->CollisionEventRequestSettings).SortMethod = SortByHighestMass;
  pFVar2->MaxNumberOfResults = 0;
  pFVar2->MinRadius = 0.0;
  (this->BreakingEventRequestSettings).MinSpeed = 0.0;
  (this->BreakingEventRequestSettings).MinMass = 0.0;
  (this->BreakingEventRequestSettings).MaxDistance = 0.0;
  (this->BreakingEventRequestSettings).SortMethod = SortByHighestMass;
  pFVar3->MaxNumberOfResults = 0;
  pFVar3->MinMass = 0.0;
  (this->TrailingEventRequestSettings).MinSpeed = 0.0;
  (this->TrailingEventRequestSettings).MinAngularSpeed = 0.0;
  (this->TrailingEventRequestSettings).MaxDistance = 0.0;
  (this->TrailingEventRequestSettings).SortMethod = SortByHighestMass;
  pFVar4->MaxNumberOfResults = 0;
  pFVar4->MinMass = 0.0;
  (this->RemovalEventRequestSettings).MaxDistance = 0.0;
  (this->RemovalEventRequestSettings).SortMethod = SortByHighestMass;
  *(undefined8 *)&(this->ChaosSolverActors).Elements = 0;
  *(undefined8 *)&(this->ChaosSolverActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChaosSolverActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChaosSolverActors).Elements.field_0x34 = 0;
  (this->ChaosSolverActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChaosSolverActors).HashSize = 0;
  *(undefined8 *)&(this->GeometryCollectionActors).Elements = 0;
  *(undefined8 *)&(this->GeometryCollectionActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeometryCollectionActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometryCollectionActors).Elements.field_0x34 = 0;
  (this->GeometryCollectionActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeometryCollectionActors).HashSize = 0;
  *(undefined8 *)&this->OnCollisionEvents = 0;
  *(undefined8 *)&(this->OnCollisionEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnCollisionEvents).field_0x10 = 0;
  *(undefined8 *)&this->OnBreakingEvents = 0;
  *(undefined8 *)&(this->OnBreakingEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnBreakingEvents).field_0x10 = 0;
  *(undefined8 *)&this->OnTrailingEvents = 0;
  *(undefined8 *)&(this->OnTrailingEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnTrailingEvents).field_0x10 = 0;
  *(undefined8 *)&this->OnRemovalEvents = 0;
  *(undefined8 *)&(this->OnRemovalEvents).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovalEvents).field_0x10 = 0;
  (this->TaskState).Counter = 0;
  (this->RawCollisionDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawCollisionDataArray).ArrayNum = 0;
  (this->RawCollisionDataArray).ArrayMax = 0;
  (this->RawBreakingDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawBreakingDataArray).ArrayNum = 0;
  (this->RawBreakingDataArray).ArrayMax = 0;
  (this->RawTrailingDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawTrailingDataArray).ArrayNum = 0;
  (this->RawTrailingDataArray).ArrayMax = 0;
  (this->RawRemovalDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawRemovalDataArray).ArrayNum = 0;
  (this->RawRemovalDataArray).ArrayMax = 0;
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ChaosComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ChaosComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar9;
  (this->ChaosComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar10;
  (this->ChaosComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar11;
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ChaosComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ChaosComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar9;
  (this->ChaosComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar10;
  (this->ChaosComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar11;
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ChaosComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ChaosComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar9;
  (this->ChaosComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  (this->ChaosComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  this->bChanged = (FThreadSafeBool)0x0;
  *(undefined8 *)&(this->Solvers).Elements = 0;
  *(undefined8 *)&(this->Solvers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Solvers).Elements.field_0x20 = 0;
  this->LastCollisionDataTimeStamp = -1.0;
  this->LastBreakingDataTimeStamp = -1.0;
  this->LastTrailingDataTimeStamp = -1.0;
  this->LastRemovalDataTimeStamp = -1.0;
  *(undefined4 *)&(this->Solvers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Solvers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Solvers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Solvers).Elements.field_0x34 = 0;
  (this->Solvers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Solvers).HashSize = 0;
  this->field_0x1a9 = this->field_0x1a9 | 0x20;
  this->field_0x9a = this->field_0x9a | 9;
  this->field_0x42 = this->field_0x42 & 0xfd;
  (this->GeometryCollectionPhysicsProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryCollectionPhysicsProxies).ArrayNum = 0;
  (this->GeometryCollectionPhysicsProxies).ArrayMax = 0;
  (this->ChaosCollisionFilter).Object = (FChaosCollisionEventFilter *)0x0;
  (this->ChaosCollisionFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChaosBreakingFilter).Object = (FChaosBreakingEventFilter *)0x0;
  (this->ChaosBreakingFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChaosTrailingFilter).Object = (FChaosTrailingEventFilter *)0x0;
  (this->ChaosTrailingFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChaosRemovalFilter).Object = (FChaosRemovalEventFilter *)0x0;
  (this->ChaosRemovalFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar13 = ::operator_new(0x90);
  local_res8.Object = pFVar17;
  if (pFVar13 != (FChaosBreakingEventFilter *)0x0) {
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pFVar13->field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pFVar13->field_0x28 = (double)fVar9;
    *(double *)&pFVar13->field_0x30 = (double)fVar10;
    *(double *)&pFVar13->field_0x38 = (double)fVar11;
    fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pFVar13->field_0x40 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pFVar13->field_0x48 = (double)fVar9;
    *(double *)&pFVar13->field_0x50 = (double)fVar10;
    *(double *)&pFVar13->field_0x58 = (double)fVar11;
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pFVar13->field_0x60 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pFVar13->field_0x68 = (double)fVar9;
    *(double *)&pFVar13->field_0x70 = (double)fVar10;
    *(double *)&pFVar13->field_0x78 = (double)fVar11;
    *(undefined ***)pFVar13 = &___7FChaosCollisionEventFilter__6B_;
    pFVar13->BreakingEventRequestSettings = (FChaosBreakingEventRequestSettings *)pFVar1;
    local_res8.Object = pFVar13;
  }
  pTVar14 = TSharedPtr<FChaosCollisionEventFilter,1>::
            TSharedPtr<FChaosCollisionEventFilter,1><FChaosCollisionEventFilter>
                      ((TSharedPtr<FChaosCollisionEventFilter,1> *)&local_28,
                       (TRawPtrProxy<FChaosCollisionEventFilter> *)&local_res8);
  pFVar5 = pTVar14->Object;
  pTVar6 = (pTVar14->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (this->ChaosCollisionFilter).SharedReferenceCount.ReferenceController;
  (this->ChaosCollisionFilter).Object = pFVar5;
  (this->ChaosCollisionFilter).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar14->SharedReferenceCount).ReferenceController);
  pFVar13 = ::operator_new(0x90);
  local_res8.Object = pFVar17;
  if (pFVar13 != (FChaosBreakingEventFilter *)0x0) {
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pFVar13->field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pFVar13->field_0x28 = (double)fVar9;
    *(double *)&pFVar13->field_0x30 = (double)fVar10;
    *(double *)&pFVar13->field_0x38 = (double)fVar11;
    fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pFVar13->field_0x40 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pFVar13->field_0x48 = (double)fVar9;
    *(double *)&pFVar13->field_0x50 = (double)fVar10;
    *(double *)&pFVar13->field_0x58 = (double)fVar11;
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pFVar13->field_0x60 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pFVar13->field_0x68 = (double)fVar9;
    *(double *)&pFVar13->field_0x70 = (double)fVar10;
    *(double *)&pFVar13->field_0x78 = (double)fVar11;
    *(undefined ***)pFVar13 = &___7FChaosBreakingEventFilter__6B_;
    pFVar13->BreakingEventRequestSettings = pFVar2;
    local_res8.Object = pFVar13;
  }
  pTVar15 = TSharedPtr<FChaosBreakingEventFilter,1>::
            TSharedPtr<FChaosBreakingEventFilter,1><FChaosBreakingEventFilter>
                      (&local_28,&local_res8);
  pFVar13 = pTVar15->Object;
  pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (this->ChaosBreakingFilter).SharedReferenceCount.ReferenceController;
  (this->ChaosBreakingFilter).Object = pFVar13;
  (this->ChaosBreakingFilter).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar15->SharedReferenceCount).ReferenceController);
  pFVar13 = ::operator_new(0x90);
  local_res8.Object = pFVar17;
  if (pFVar13 != (FChaosBreakingEventFilter *)0x0) {
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pFVar13->field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pFVar13->field_0x28 = (double)fVar9;
    *(double *)&pFVar13->field_0x30 = (double)fVar10;
    *(double *)&pFVar13->field_0x38 = (double)fVar11;
    fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pFVar13->field_0x40 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pFVar13->field_0x48 = (double)fVar9;
    *(double *)&pFVar13->field_0x50 = (double)fVar10;
    *(double *)&pFVar13->field_0x58 = (double)fVar11;
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pFVar13->field_0x60 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pFVar13->field_0x68 = (double)fVar9;
    *(double *)&pFVar13->field_0x70 = (double)fVar10;
    *(double *)&pFVar13->field_0x78 = (double)fVar11;
    *(undefined ***)pFVar13 = &___7FChaosTrailingEventFilter__6B_;
    pFVar13->BreakingEventRequestSettings = (FChaosBreakingEventRequestSettings *)pFVar3;
    local_res8.Object = pFVar13;
  }
  pTVar16 = TSharedPtr<FChaosTrailingEventFilter,1>::
            TSharedPtr<FChaosTrailingEventFilter,1><FChaosTrailingEventFilter>
                      ((TSharedPtr<FChaosTrailingEventFilter,1> *)&local_28,
                       (TRawPtrProxy<FChaosTrailingEventFilter> *)&local_res8);
  pFVar7 = pTVar16->Object;
  pTVar6 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (this->ChaosTrailingFilter).SharedReferenceCount.ReferenceController;
  (this->ChaosTrailingFilter).Object = pFVar7;
  (this->ChaosTrailingFilter).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar16->SharedReferenceCount).ReferenceController);
  pFVar13 = ::operator_new(0x90);
  if (pFVar13 != (FChaosBreakingEventFilter *)0x0) {
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pFVar13->field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pFVar13->field_0x28 = (double)fVar9;
    *(double *)&pFVar13->field_0x30 = (double)fVar10;
    *(double *)&pFVar13->field_0x38 = (double)fVar11;
    fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pFVar13->field_0x40 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pFVar13->field_0x48 = (double)fVar9;
    *(double *)&pFVar13->field_0x50 = (double)fVar10;
    *(double *)&pFVar13->field_0x58 = (double)fVar11;
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pFVar13->field_0x60 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pFVar13->field_0x68 = (double)fVar9;
    *(double *)&pFVar13->field_0x70 = (double)fVar10;
    *(double *)&pFVar13->field_0x78 = (double)fVar11;
    *(undefined ***)pFVar13 = &___7FChaosRemovalEventFilter__6B_;
    pFVar13->BreakingEventRequestSettings = (FChaosBreakingEventRequestSettings *)pFVar4;
    pFVar17 = pFVar13;
  }
  local_res8.Object = pFVar17;
  pTVar18 = TSharedPtr<FChaosRemovalEventFilter,1>::
            TSharedPtr<FChaosRemovalEventFilter,1><FChaosRemovalEventFilter>
                      ((TSharedPtr<FChaosRemovalEventFilter,1> *)&local_28,
                       (TRawPtrProxy<FChaosRemovalEventFilter> *)&local_res8);
  pFVar8 = pTVar18->Object;
  pTVar6 = (pTVar18->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (this->ChaosRemovalFilter).SharedReferenceCount.ReferenceController;
  (this->ChaosRemovalFilter).Object = pFVar8;
  (this->ChaosRemovalFilter).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar18->SharedReferenceCount).ReferenceController);
  return this;
}

// ~UChaosDestructionListener @ 14635ed60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChaosDestructionListener::~UChaosDestructionListener(UChaosDestructionListener *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChaosRemovalFilter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChaosTrailingFilter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChaosBreakingFilter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChaosCollisionFilter).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->GeometryCollectionPhysicsProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Solvers).HashSize = 0;
  FVar2 = (this->Solvers).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<Chaos::FPBDRigidsSolver_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::FPBDRigidsSolver_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Solvers).Elements);
  pFVar1 = (this->RawRemovalDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawTrailingDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawBreakingDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawCollisionDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar3 = *(void **)&(this->OnRemovalEvents).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovalEvents);
  pvVar3 = *(void **)&(this->OnTrailingEvents).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTrailingEvents);
  pvVar3 = *(void **)&(this->OnBreakingEvents).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBreakingEvents);
  pvVar3 = *(void **)&(this->OnCollisionEvents).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCollisionEvents);
  (this->GeometryCollectionActors).HashSize = 0;
  FVar2 = (this->GeometryCollectionActors).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AGeometryCollectionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AGeometryCollectionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GeometryCollectionActors).Elements);
  (this->ChaosSolverActors).HashSize = 0;
  FVar2 = (this->ChaosSolverActors).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AChaosSolverActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AChaosSolverActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ChaosSolverActors).Elements);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddChaosSolverActor @ 146363010

void __thiscall
UChaosDestructionListener::AddChaosSolverActor
          (UChaosDestructionListener *this,AChaosSolverActor *param_1)

{
  return;
}

// AddGeometryCollectionActor @ 146363900

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChaosDestructionListener::AddGeometryCollectionActor
          (UChaosDestructionListener *this,AGeometryCollectionActor *param_1)

{
  UGeometryCollectionComponent *this_00;
  int iVar1;
  UWorld *pUVar2;
  uint uVar3;
  TObjectPtr<AGeometryCollectionActor_const_>_u_0 local_res10;
  AGeometryCollectionActor *local_res18;
  
  if (param_1 != (AGeometryCollectionActor *)0x0) {
    local_res10.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable((UObject *)param_1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar1 = TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<AGeometryCollectionActor_const_>_>
                      (&this->GeometryCollectionActors,uVar3 >> 0x10 ^ uVar3,
                       (TObjectPtr<AGeometryCollectionActor_const_> *)&local_res10.ObjectPtr);
    if (iVar1 == -1) {
      local_res18 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<AGeometryCollectionActor>_>
                (&this->GeometryCollectionActors,
                 (TObjectPtr<AGeometryCollectionActor> *)&local_res10.ObjectPtr,(bool *)&local_res18
                );
      this_00 = (param_1->GeometryCollectionComponent).field0_0x0.DebugPtr;
      if ((this_00 != (UGeometryCollectionComponent *)0x0) &&
         (this_00->PhysicsProxy != (FGeometryCollectionPhysicsProxy *)0x0)) {
        pUVar2 = *(UWorld **)&this_00->field_0xb0;
        if (pUVar2 == (UWorld *)0x0) {
          pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
        }
        RegisterChaosEvents(this,pUVar2->PhysicsScene);
      }
    }
  }
  return;
}

// BeginPlay @ 146369a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDestructionListener::BeginPlay(UChaosDestructionListener *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  UpdateEvents(this);
  return;
}

// ClearEvents @ 14636b570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDestructionListener::ClearEvents(UChaosDestructionListener *this)

{
  FEventManager *this_00;
  UWorld *pUVar1;
  EEventType local_res8 [2];
  
  pUVar1 = *(UWorld **)&this->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_res8[0] = Collision;
  this_00 = *(FEventManager **)(pUVar1->PhysicsScene->_padding_ + 0xbd8);
  Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
  local_res8[0] = Breaking;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
  local_res8[0] = Trailing;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
  local_res8[0] = Removal;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
  return;
}

// EndPlay @ 146370be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDestructionListener::EndPlay(UChaosDestructionListener *this,Type param_1)

{
  ClearEvents(this);
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 146379980

UClass * __cdecl UChaosDestructionListener::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosDestructionListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"ChaosDestructionListener",
               &Z_Registration_Info_UClass_UChaosDestructionListener.InnerSingleton,
               StaticRegisterNativesUChaosDestructionListener,0x520,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosDestructionListener>,
               InternalVTableHelperCtorCaller<UChaosDestructionListener>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosDestructionListener.InnerSingleton;
}

// HandleBreakingEvents @ 14637d900

void __thiscall
UChaosDestructionListener::HandleBreakingEvents
          (UChaosDestructionListener *this,FBreakingEventData *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FChaosBreakingEventFilter,1> *this_00;
  int iVar4;
  uint uVar5;
  FBreakingData *pFVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FChaosBreakingEventFilter *pFVar10;
  ForAnyElementType local_58;
  undefined8 local_50;
  FReadAccessScope local_48;
  
  if (this->bIsBreakingEventListeningEnabled != '\0') {
    pFVar6 = (FBreakingData *)(param_1->BreakingData).AllBreakingsArray.AllocatorInstance.Data;
    pTVar3 = &this->RawBreakingDataArray;
    iVar4 = (param_1->BreakingData).AllBreakingsArray.ArrayNum;
    if (((pFVar6 == (FBreakingData *)0x0) && (iVar4 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar1 = &(this->RawBreakingDataArray).ArrayMax;
    piVar2 = &(this->RawBreakingDataArray).ArrayNum;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc0,0x10,iVar4,&pTVar3->AllocatorInstance,piVar2,piVar1);
    ConstructItems<Chaos::FBreakingData,Chaos::FBreakingData,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0xc0,pFVar6,iVar4);
    this_00 = &this->ChaosBreakingFilter;
    pFVar10 = this_00->Object;
    if (pFVar10 != (FChaosBreakingEventFilter *)0x0) {
      (**(code **)(*(longlong *)pFVar10 + 0x10))(pFVar10,&this->ChaosComponentTransform);
      if ((this_00->Object == (FChaosBreakingEventFilter *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (0 < *(int *)&this_00->Object->field_0x18) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnBreakingEvents
                   ,&local_48);
        iVar4 = *(int *)&(this->OnBreakingEvents).field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        if (0 < iVar4) {
          pFVar10 = TSharedPtr<FChaosBreakingEventFilter,1>::operator->(this_00);
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50 = 0;
          if (&local_58 != (ForAnyElementType *)&pFVar10->field_0x10) {
            uVar5 = *(uint *)&pFVar10->field_0x18;
            _Src = *(void **)&pFVar10->field_0x10;
            local_50 = (ulonglong)uVar5;
            if (uVar5 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,uVar5,0,&local_58,uVar5,(int *)((longlong)&local_50 + 4));
              memcpy(local_58.Data,_Src,(longlong)(int)uVar5 * 0x38);
            }
          }
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnBreakingEvents
                     ,&local_58);
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
        }
      }
    }
    *piVar2 = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// HandleCollisionEvents @ 14637db30

void __thiscall
UChaosDestructionListener::HandleCollisionEvents
          (UChaosDestructionListener *this,FCollisionEventData *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FChaosCollisionEventFilter,1> *this_00;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *_Src;
  void *_Src_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FChaosCollisionEventFilter *pFVar9;
  ForAnyElementType local_48;
  undefined8 local_40;
  FReadAccessScope local_38;
  
  if (this->bIsCollisionEventListeningEnabled != 0) {
    _Src = (param_1->CollisionData).AllCollisionsArray.AllocatorInstance.Data;
    pTVar3 = &this->RawCollisionDataArray;
    iVar4 = (param_1->CollisionData).AllCollisionsArray.ArrayNum;
    if (((_Src == (FScriptContainerElement *)0x0) && (iVar4 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar1 = &(this->RawCollisionDataArray).ArrayMax;
    piVar2 = &(this->RawCollisionDataArray).ArrayNum;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,8,iVar4,&pTVar3->AllocatorInstance,piVar2,piVar1);
    if (iVar4 != 0) {
      memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x120,_Src,(longlong)iVar4 * 0x120
            );
    }
    this_00 = &this->ChaosCollisionFilter;
    pFVar9 = this_00->Object;
    if (pFVar9 != (FChaosCollisionEventFilter *)0x0) {
      (**(code **)(*(longlong *)pFVar9 + 0x10))(pFVar9,&this->ChaosComponentTransform);
      if ((this_00->Object == (FChaosCollisionEventFilter *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (0 < *(int *)&this_00->Object->field_0x18) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnCollisionEvents,&local_38);
        iVar4 = *(int *)&(this->OnCollisionEvents).field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if (0 < iVar4) {
          pFVar9 = TSharedPtr<FChaosCollisionEventFilter,1>::operator->(this_00);
          local_48.Data = (FScriptContainerElement *)0x0;
          local_40 = 0;
          if (&local_48 != (ForAnyElementType *)&pFVar9->field_0x10) {
            uVar5 = *(uint *)&pFVar9->field_0x18;
            _Src_00 = *(void **)&pFVar9->field_0x10;
            local_40 = (ulonglong)uVar5;
            if (uVar5 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x80,8,uVar5,0,&local_48,uVar5,(int *)((longlong)&local_40 + 4));
              memcpy(local_48.Data,_Src_00,(longlong)(int)uVar5 << 7);
            }
          }
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->OnCollisionEvents,&local_48);
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data);
          }
        }
      }
    }
    *piVar2 = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// HandleRemovalEvents @ 14637dde0

void __thiscall
UChaosDestructionListener::HandleRemovalEvents
          (UChaosDestructionListener *this,FRemovalEventData *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FChaosRemovalEventFilter,1> *this_00;
  int iVar4;
  uint uVar5;
  FRemovalData *pFVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FChaosRemovalEventFilter *pFVar10;
  ForAnyElementType local_58;
  undefined8 local_50;
  FReadAccessScope local_48;
  
  if (this->bIsRemovalEventListeningEnabled != '\0') {
    pFVar6 = (FRemovalData *)(param_1->RemovalData).AllRemovalArray.AllocatorInstance.Data;
    pTVar3 = &this->RawRemovalDataArray;
    iVar4 = (param_1->RemovalData).AllRemovalArray.ArrayNum;
    if (((pFVar6 == (FRemovalData *)0x0) && (iVar4 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar1 = &(this->RawRemovalDataArray).ArrayMax;
    piVar2 = &(this->RawRemovalDataArray).ArrayNum;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,iVar4,&pTVar3->AllocatorInstance,piVar2,piVar1);
    ConstructItems<Chaos::FRemovalData,Chaos::FRemovalData,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x58,pFVar6,iVar4);
    this_00 = &this->ChaosRemovalFilter;
    pFVar10 = this_00->Object;
    if (pFVar10 != (FChaosRemovalEventFilter *)0x0) {
      (**(code **)(*(longlong *)pFVar10 + 0x10))(pFVar10,&this->ChaosComponentTransform);
      if ((this_00->Object == (FChaosRemovalEventFilter *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (0 < *(int *)&this_00->Object->field_0x18) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRemovalEvents,
                   &local_48);
        iVar4 = *(int *)&(this->OnRemovalEvents).field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        if (0 < iVar4) {
          pFVar10 = TSharedPtr<FChaosRemovalEventFilter,1>::operator->(this_00);
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50 = 0;
          if (&local_58 != (ForAnyElementType *)&pFVar10->field_0x10) {
            uVar5 = *(uint *)&pFVar10->field_0x18;
            _Src = *(void **)&pFVar10->field_0x10;
            local_50 = (ulonglong)uVar5;
            if (uVar5 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,uVar5,0,&local_58,uVar5,(int *)((longlong)&local_50 + 4));
              memcpy(local_58.Data,_Src,(longlong)(int)uVar5 << 5);
            }
          }
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnRemovalEvents,
                     &local_58);
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
        }
      }
    }
    *piVar2 = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// HandleTrailingEvents @ 14637e010

void __thiscall
UChaosDestructionListener::HandleTrailingEvents
          (UChaosDestructionListener *this,FTrailingEventData *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FChaosTrailingEventFilter,1> *this_00;
  int iVar4;
  uint uVar5;
  FTrailingData *pFVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FChaosTrailingEventFilter *pFVar10;
  ForAnyElementType local_58;
  undefined8 local_50;
  FReadAccessScope local_48;
  
  if (this->bIsTrailingEventListeningEnabled != '\0') {
    pFVar6 = (FTrailingData *)(param_1->TrailingData).AllTrailingsArray.AllocatorInstance.Data;
    pTVar3 = &this->RawTrailingDataArray;
    iVar4 = (param_1->TrailingData).AllTrailingsArray.ArrayNum;
    if (((pFVar6 == (FTrailingData *)0x0) && (iVar4 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar1 = &(this->RawTrailingDataArray).ArrayMax;
    piVar2 = &(this->RawTrailingDataArray).ArrayNum;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc0,0x10,iVar4,&pTVar3->AllocatorInstance,piVar2,piVar1);
    ConstructItems<Chaos::FTrailingData,Chaos::FTrailingData,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0xc0,pFVar6,iVar4);
    this_00 = &this->ChaosTrailingFilter;
    pFVar10 = this_00->Object;
    if (pFVar10 != (FChaosTrailingEventFilter *)0x0) {
      (**(code **)(*(longlong *)pFVar10 + 0x10))(pFVar10,&this->ChaosComponentTransform);
      if ((this_00->Object == (FChaosTrailingEventFilter *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (0 < *(int *)&this_00->Object->field_0x18) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTrailingEvents
                   ,&local_48);
        iVar4 = *(int *)&(this->OnTrailingEvents).field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        if (0 < iVar4) {
          pFVar10 = TSharedPtr<FChaosTrailingEventFilter,1>::operator->(this_00);
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50 = 0;
          if (&local_58 != (ForAnyElementType *)&pFVar10->field_0x10) {
            uVar5 = *(uint *)&pFVar10->field_0x18;
            _Src = *(void **)&pFVar10->field_0x10;
            local_50 = (ulonglong)uVar5;
            if (uVar5 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,uVar5,0,&local_58,uVar5,(int *)((longlong)&local_50 + 4));
              memcpy(local_58.Data,_Src,(longlong)(int)uVar5 * 0x50);
            }
          }
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTrailingEvents
                     ,&local_58);
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
        }
      }
    }
    *piVar2 = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// IsEventListening @ 146380170

bool __thiscall UChaosDestructionListener::IsEventListening(UChaosDestructionListener *this)

{
  undefined1 *puVar1;
  
  return this->bIsCollisionEventListeningEnabled != '\0' ||
         (this->bIsBreakingEventListeningEnabled != '\0' ||
         (this->bIsTrailingEventListeningEnabled != '\0' ||
         this->bIsRemovalEventListeningEnabled != '\0'));
}

// RegisterChaosEvents @ 146387d20

void __thiscall
UChaosDestructionListener::RegisterChaosEvents
          (UChaosDestructionListener *this,FPhysScene_Chaos *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 *local_68 [2];
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_48 = (code *)0x0;
  uStack_40 = 0;
  uStack_50 = 0;
  lVar1 = *(longlong *)(param_1->_padding_ + 0xbd8);
  local_58 = HandleCollisionEvents;
  SRWLock = (PSRWLOCK)(lVar1 + 0x20);
  uStack_4c = uStack_3c;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 1) {
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
  plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFCollisionEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_58;
    puVar5[3] = CONCAT44(uStack_4c,uStack_50);
    puVar5[4] = local_48;
    puVar5[5] = CONCAT44(uStack_3c,uStack_40);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_res10 = puVar5;
  (*pcVar3)(plVar2,&local_res10);
  ReleaseSRWLockShared(SRWLock);
  uStack_4c = uStack_3c;
  local_48 = HandleBreakingEvents;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uStack_40 = 0;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 2) {
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
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 8);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFBreakingEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_48;
    puVar5[3] = CONCAT44(uStack_3c,uStack_40);
    puVar5[4] = local_58;
    puVar5[5] = CONCAT44(uStack_4c,uStack_50);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_res18 = puVar5;
  (*pcVar3)(plVar2,&local_res18);
  ReleaseSRWLockShared(SRWLock);
  uStack_4c = uStack_3c;
  local_48 = HandleTrailingEvents;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uStack_40 = 0;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 3) {
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
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 0x10);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFTrailingEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_48;
    puVar5[3] = CONCAT44(uStack_3c,uStack_40);
    puVar5[4] = local_58;
    puVar5[5] = CONCAT44(uStack_4c,uStack_50);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_res20 = puVar5;
  (*pcVar3)(plVar2,&local_res20);
  ReleaseSRWLockShared(SRWLock);
  uStack_4c = uStack_3c;
  local_48 = HandleRemovalEvents;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uStack_40 = 0;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 5) {
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
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 0x20);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFRemovalEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_48;
    puVar5[3] = CONCAT44(uStack_3c,uStack_40);
    puVar5[4] = local_58;
    puVar5[5] = CONCAT44(uStack_4c,uStack_50);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_68[0] = puVar5;
  (*pcVar3)(plVar2,local_68);
                    /* WARNING: Could not recover jumptable at 0x000146388272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(SRWLock);
  return;
}

// RegisterChaosEvents @ 146388280

void __thiscall
UChaosDestructionListener::RegisterChaosEvents
          (UChaosDestructionListener *this,TSharedPtr<FPhysScene_Chaos,1> *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 *local_68 [2];
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_1->Object == (FPhysScene_Chaos *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48 = (code *)0x0;
  uStack_40 = 0;
  uStack_50 = 0;
  local_58 = HandleCollisionEvents;
  lVar1 = *(longlong *)(param_1->Object->_padding_ + 0xbd8);
  uStack_4c = uStack_3c;
  SRWLock = (PSRWLOCK)(lVar1 + 0x20);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 1) {
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
  plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFCollisionEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_58;
    puVar5[3] = CONCAT44(uStack_4c,uStack_50);
    puVar5[4] = local_48;
    puVar5[5] = CONCAT44(uStack_3c,uStack_40);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_res10 = puVar5;
  (*pcVar3)(plVar2,&local_res10);
  ReleaseSRWLockShared(SRWLock);
  uStack_4c = uStack_3c;
  local_48 = HandleBreakingEvents;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uStack_40 = 0;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 2) {
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
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 8);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFBreakingEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_48;
    puVar5[3] = CONCAT44(uStack_3c,uStack_40);
    puVar5[4] = local_58;
    puVar5[5] = CONCAT44(uStack_4c,uStack_50);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_res18 = puVar5;
  (*pcVar3)(plVar2,&local_res18);
  ReleaseSRWLockShared(SRWLock);
  uStack_4c = uStack_3c;
  local_48 = HandleTrailingEvents;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uStack_40 = 0;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 3) {
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
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 0x10);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFTrailingEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_48;
    puVar5[3] = CONCAT44(uStack_3c,uStack_40);
    puVar5[4] = local_58;
    puVar5[5] = CONCAT44(uStack_4c,uStack_50);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_res20 = puVar5;
  (*pcVar3)(plVar2,&local_res20);
  ReleaseSRWLockShared(SRWLock);
  uStack_4c = uStack_3c;
  local_58 = (code *)0x0;
  local_48 = HandleRemovalEvents;
  uStack_50 = 0;
  uStack_40 = 0;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar1 + 0x10) < 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(lVar1 + 0x10) < 5) {
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
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 0x20);
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &
              ___7__TRawEventHandler_UFRemovalEventData_Chaos__VUChaosDestructionListener___Chaos__6B_
    ;
    puVar5[1] = this;
    puVar5[2] = local_48;
    puVar5[3] = CONCAT44(uStack_3c,uStack_40);
    puVar5[4] = local_58;
    puVar5[5] = CONCAT44(uStack_4c,uStack_50);
    if (this == (UChaosDestructionListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar5[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_68[0] = puVar5;
  (*pcVar3)(plVar2,local_68);
  ReleaseSRWLockShared(SRWLock);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveChaosSolverActor @ 146389d30

void __thiscall
UChaosDestructionListener::RemoveChaosSolverActor
          (UChaosDestructionListener *this,AChaosSolverActor *param_1)

{
  return;
}

// RemoveGeometryCollectionActor @ 146389d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UChaosDestructionListener::RemoveGeometryCollectionActor
          (UChaosDestructionListener *this,AGeometryCollectionActor *param_1)

{
  uint uVar1;
  TObjectPtr<AGeometryCollectionActor_const_>_u_0 local_res10;
  
  if (param_1 != (AGeometryCollectionActor *)0x0) {
    ClearEvents(this);
    local_res10.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->GeometryCollectionActors).Elements.field_0x8 !=
        *(int *)&(this->GeometryCollectionActors).Elements.field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<AGeometryCollectionActor_const_>_>
                (&this->GeometryCollectionActors,uVar1 >> 0x10 ^ uVar1,
                 (TObjectPtr<AGeometryCollectionActor_const_> *)&local_res10.ObjectPtr);
    }
    UpdateEvents(this);
  }
  return;
}

// SetBreakingEventEnabled @ 14638bff0

void __thiscall
UChaosDestructionListener::SetBreakingEventEnabled(UChaosDestructionListener *this,bool param_1)

{
  this->bIsBreakingEventListeningEnabled = '\0';
  this->field_0x250 = this->field_0x250 | param_1 * '\x02';
  UpdateTransformSettings(this);
  return;
}

// SetBreakingEventRequestSettings @ 14638c010

void __thiscall
UChaosDestructionListener::SetBreakingEventRequestSettings
          (UChaosDestructionListener *this,FChaosBreakingEventRequestSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EChaosBreakingSortMethod EVar4;
  undefined3 uVar5;
  
  fVar1 = param_1->MinRadius;
  fVar2 = param_1->MinSpeed;
  fVar3 = param_1->MinMass;
  (this->BreakingEventRequestSettings).MaxNumberOfResults = param_1->MaxNumberOfResults;
  (this->BreakingEventRequestSettings).MinRadius = fVar1;
  (this->BreakingEventRequestSettings).MinSpeed = fVar2;
  (this->BreakingEventRequestSettings).MinMass = fVar3;
  EVar4 = param_1->SortMethod;
  uVar5 = *(undefined3 *)&param_1->field_0x15;
  (this->BreakingEventRequestSettings).MaxDistance = param_1->MaxDistance;
  (this->BreakingEventRequestSettings).SortMethod = EVar4;
  *(undefined3 *)&(this->BreakingEventRequestSettings).field_0x15 = uVar5;
  UpdateTransformSettings(this);
  return;
}

// SetCollisionEventEnabled @ 14638c2f0

void __thiscall
UChaosDestructionListener::SetCollisionEventEnabled(UChaosDestructionListener *this,bool param_1)

{
  this->bIsCollisionEventListeningEnabled = '\0';
  this->field_0x250 = this->field_0x250 | param_1;
  UpdateTransformSettings(this);
  return;
}

// SetCollisionEventRequestSettings @ 14638c310

void __thiscall
UChaosDestructionListener::SetCollisionEventRequestSettings
          (UChaosDestructionListener *this,FChaosCollisionEventRequestSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EChaosCollisionSortMethod EVar4;
  undefined3 uVar5;
  
  fVar1 = param_1->MinMass;
  fVar2 = param_1->MinSpeed;
  fVar3 = param_1->MinImpulse;
  (this->CollisionEventRequestSettings).MaxNumberResults = param_1->MaxNumberResults;
  (this->CollisionEventRequestSettings).MinMass = fVar1;
  (this->CollisionEventRequestSettings).MinSpeed = fVar2;
  (this->CollisionEventRequestSettings).MinImpulse = fVar3;
  EVar4 = param_1->SortMethod;
  uVar5 = *(undefined3 *)&param_1->field_0x15;
  (this->CollisionEventRequestSettings).MaxDistance = param_1->MaxDistance;
  (this->CollisionEventRequestSettings).SortMethod = EVar4;
  *(undefined3 *)&(this->CollisionEventRequestSettings).field_0x15 = uVar5;
  UpdateTransformSettings(this);
  return;
}

// SetRemovalEventEnabled @ 14638e6e0

void __thiscall
UChaosDestructionListener::SetRemovalEventEnabled(UChaosDestructionListener *this,bool param_1)

{
  this->bIsRemovalEventListeningEnabled = '\0';
  this->field_0x250 = this->field_0x250 | param_1 << 3;
  UpdateTransformSettings(this);
  return;
}

// SetRemovalEventRequestSettings @ 14638e700

void __thiscall
UChaosDestructionListener::SetRemovalEventRequestSettings
          (UChaosDestructionListener *this,FChaosRemovalEventRequestSettings *param_1)

{
  float fVar1;
  float fVar2;
  EChaosRemovalSortMethod EVar3;
  undefined3 uVar4;
  
  fVar1 = param_1->MinMass;
  fVar2 = param_1->MaxDistance;
  EVar3 = param_1->SortMethod;
  uVar4 = *(undefined3 *)&param_1->field_0xd;
  (this->RemovalEventRequestSettings).MaxNumberOfResults = param_1->MaxNumberOfResults;
  (this->RemovalEventRequestSettings).MinMass = fVar1;
  (this->RemovalEventRequestSettings).MaxDistance = fVar2;
  (this->RemovalEventRequestSettings).SortMethod = EVar3;
  *(undefined3 *)&(this->RemovalEventRequestSettings).field_0xd = uVar4;
  UpdateTransformSettings(this);
  return;
}

// SetTrailingEventEnabled @ 14638f050

void __thiscall
UChaosDestructionListener::SetTrailingEventEnabled(UChaosDestructionListener *this,bool param_1)

{
  this->bIsTrailingEventListeningEnabled = '\0';
  this->field_0x250 = this->field_0x250 | param_1 << 2;
  UpdateTransformSettings(this);
  return;
}

// SetTrailingEventRequestSettings @ 14638f070

void __thiscall
UChaosDestructionListener::SetTrailingEventRequestSettings
          (UChaosDestructionListener *this,FChaosTrailingEventRequestSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EChaosTrailingSortMethod EVar4;
  undefined3 uVar5;
  
  fVar1 = param_1->MinMass;
  fVar2 = param_1->MinSpeed;
  fVar3 = param_1->MinAngularSpeed;
  (this->TrailingEventRequestSettings).MaxNumberOfResults = param_1->MaxNumberOfResults;
  (this->TrailingEventRequestSettings).MinMass = fVar1;
  (this->TrailingEventRequestSettings).MinSpeed = fVar2;
  (this->TrailingEventRequestSettings).MinAngularSpeed = fVar3;
  EVar4 = param_1->SortMethod;
  uVar5 = *(undefined3 *)&param_1->field_0x15;
  (this->TrailingEventRequestSettings).MaxDistance = param_1->MaxDistance;
  (this->TrailingEventRequestSettings).SortMethod = EVar4;
  *(undefined3 *)&(this->TrailingEventRequestSettings).field_0x15 = uVar5;
  UpdateTransformSettings(this);
  return;
}

// SortBreakingEvents @ 14638f170

void __thiscall
UChaosDestructionListener::SortBreakingEvents
          (UChaosDestructionListener *this,
          TArray<FChaosBreakingEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosBreakingSortMethod param_2)

{
  FChaosBreakingEventFilter *pFVar1;
  
  pFVar1 = (this->ChaosBreakingFilter).Object;
  if (pFVar1 != (FChaosBreakingEventFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014638f189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x18))();
    return;
  }
  return;
}

// SortCollisionEvents @ 14638f1a0

void __thiscall
UChaosDestructionListener::SortCollisionEvents
          (UChaosDestructionListener *this,
          TArray<FChaosCollisionEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosCollisionSortMethod param_2)

{
  FChaosCollisionEventFilter *pFVar1;
  
  pFVar1 = (this->ChaosCollisionFilter).Object;
  if (pFVar1 != (FChaosCollisionEventFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014638f1b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x18))();
    return;
  }
  return;
}

// SortRemovalEvents @ 14638f410

void __thiscall
UChaosDestructionListener::SortRemovalEvents
          (UChaosDestructionListener *this,
          TArray<FChaosRemovalEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosRemovalSortMethod param_2)

{
  FChaosRemovalEventFilter *pFVar1;
  
  pFVar1 = (this->ChaosRemovalFilter).Object;
  if (pFVar1 != (FChaosRemovalEventFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014638f429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x18))();
    return;
  }
  return;
}

// SortTrailingEvents @ 14638f440

void __thiscall
UChaosDestructionListener::SortTrailingEvents
          (UChaosDestructionListener *this,
          TArray<FChaosTrailingEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosTrailingSortMethod param_2)

{
  FChaosTrailingEventFilter *pFVar1;
  
  pFVar1 = (this->ChaosTrailingFilter).Object;
  if (pFVar1 != (FChaosTrailingEventFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014638f459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x18))();
    return;
  }
  return;
}

// StaticRegisterNativesUChaosDestructionListener @ 14638f4d0

void __cdecl UChaosDestructionListener::StaticRegisterNativesUChaosDestructionListener(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UChaosDestructionListener_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14638f940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChaosDestructionListener::TickComponent
          (UChaosDestructionListener *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  return;
}

// UnregisterChaosEvents @ 14638fea0

void __thiscall
UChaosDestructionListener::UnregisterChaosEvents
          (UChaosDestructionListener *this,FPhysScene_Chaos *param_1)

{
  FEventManager *this_00;
  EEventType local_res10 [6];
  
  local_res10[0] = Collision;
  this_00 = *(FEventManager **)(param_1->_padding_ + 0xbd8);
  Chaos::FEventManager::UnregisterHandler(this_00,local_res10,this);
  local_res10[0] = Breaking;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res10,this);
  local_res10[0] = Trailing;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res10,this);
  local_res10[0] = Removal;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res10,this);
  return;
}

// UnregisterChaosEvents @ 14638ff30

void __thiscall
UChaosDestructionListener::UnregisterChaosEvents
          (UChaosDestructionListener *this,TSharedPtr<FPhysScene_Chaos,1> *param_1)

{
  FEventManager *this_00;
  code *pcVar1;
  bool bVar2;
  EEventType local_res10 [2];
  EEventType local_res18 [2];
  EEventType local_res20 [2];
  EEventType local_28 [4];
  
  if (param_1->Object == (FPhysScene_Chaos *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10[0] = Collision;
  this_00 = *(FEventManager **)(param_1->Object->_padding_ + 0xbd8);
  Chaos::FEventManager::UnregisterHandler(this_00,local_res10,this);
  local_res18[0] = Breaking;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res18,this);
  local_res20[0] = Trailing;
  Chaos::FEventManager::UnregisterHandler(this_00,local_res20,this);
  local_28[0] = Removal;
  Chaos::FEventManager::UnregisterHandler(this_00,local_28,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateEvents @ 146390ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDestructionListener::UpdateEvents(UChaosDestructionListener *this)

{
  ulonglong uVar1;
  UActorComponent *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UWorld *pUVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((*(int *)&(this->ChaosSolverActors).Elements.field_0x8 ==
       *(int *)&(this->ChaosSolverActors).Elements.field_0x34) &&
     (*(int *)&(this->GeometryCollectionActors).Elements.field_0x8 ==
      *(int *)&(this->GeometryCollectionActors).Elements.field_0x34)) {
    pUVar6 = *(UWorld **)&this->field_0xb0;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar6->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      RegisterChaosEvents(this,pUVar6->PhysicsScene);
      return;
    }
  }
  else {
    pUVar6 = *(UWorld **)&this->field_0xb0;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar6->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      RegisterChaosEvents(this,pUVar6->PhysicsScene);
    }
    iVar10 = 0;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->GeometryCollectionActors).Elements.field_0x10;
    iVar8 = *(int *)&(this->GeometryCollectionActors).Elements.field_0x28;
    uVar4 = 1;
    iVar12 = 0;
    iVar5 = 0;
    if (iVar8 != 0) {
      puVar13 = *(uint **)&(this->GeometryCollectionActors).Elements.field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_60.Array;
      }
      uVar9 = *puVar13;
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar10;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar10 + 1;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146390ce5;
        uVar9 = puVar13[lVar7 + 1];
      }
      uVar4 = -uVar9 & uVar9;
      uVar1 = (ulonglong)uVar4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res10 = (int)lVar7;
      iVar5 = iVar12 + -1 + local_res10;
      if (iVar8 < iVar5) {
LAB_146390ce5:
        iVar5 = iVar8;
      }
    }
    puVar14 = &(this->GeometryCollectionActors).Elements.field_0x10;
    uVar9 = *(uint *)&(this->GeometryCollectionActors).Elements.field_0x28;
    uVar15 = uVar9 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar5;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar4,iVar10);
    iVar8 = (int)uVar9 >> 5;
    TStack_60._28_4_ = iVar5;
    TStack_60.BaseBitIndex = iVar12;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->GeometryCollectionActors).Elements.field_0x8 -
                         *(int *)&(this->GeometryCollectionActors).Elements.field_0x34);
    if (((int)uVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = *(uint *)&(this->GeometryCollectionActors).Elements.field_0x28;
    if (uVar9 != uVar4) {
      puVar11 = *(undefined1 **)&(this->GeometryCollectionActors).Elements.field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar14;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar8 * 4);
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar8;
        uVar15 = uVar15 + 0x20;
        iVar8 = iVar8 + 1;
        uVar9 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_146390e00;
        uVar9 = *(uint *)(puVar11 + lVar7 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar15;
      if ((int)uVar4 < (int)uVar9) {
        uVar9 = uVar4;
      }
    }
LAB_146390e00:
    while( true ) {
      if (*(int *)&(this->GeometryCollectionActors).Elements.field_0x8 -
          *(int *)&(this->GeometryCollectionActors).Elements.field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TObjectPtr<AGeometryCollectionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar9) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) break;
      lVar7 = *(longlong *)
               (*(longlong *)&(this->GeometryCollectionActors).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
      if ((lVar7 != 0) &&
         ((this_00 = *(UActorComponent **)(lVar7 + 0x2c0), this_00 != (UActorComponent *)0x0 &&
          (this_00[0xd]._padding_ != 0)))) {
        pUVar6 = this_00->WorldPrivate;
        if (pUVar6 == (UWorld *)0x0) {
          pUVar6 = UActorComponent::GetWorld_Uncached(this_00);
        }
        RegisterChaosEvents(this,pUVar6->PhysicsScene);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// UpdateTransformSettings @ 146393ab0

void __thiscall UChaosDestructionListener::UpdateTransformSettings(UChaosDestructionListener *this)

{
  undefined1 *puVar1;
  
  if (this->bIsCollisionEventListeningEnabled == '\0' &&
      (this->bIsBreakingEventListeningEnabled == '\0' &&
      (this->bIsTrailingEventListeningEnabled == '\0' &&
      this->bIsRemovalEventListeningEnabled == '\0'))) {
    this->field_0x1aa = this->field_0x1aa & 0xf7;
    LOCK();
    this->bChanged = (FThreadSafeBool)0x1;
    UNLOCK();
    return;
  }
  if (((((this->CollisionEventRequestSettings).SortMethod != SortByNearestFirst) &&
       ((this->BreakingEventRequestSettings).SortMethod != SortByNearestFirst)) &&
      ((this->TrailingEventRequestSettings).SortMethod != SortByNearestFirst)) &&
     ((this->RemovalEventRequestSettings).SortMethod != SortByNearestFirst)) {
    this->field_0x1aa = this->field_0x1aa & 0xf7;
    this->field_0x1aa = this->field_0x1aa;
    LOCK();
    this->bChanged = (FThreadSafeBool)0x1;
    UNLOCK();
    return;
  }
  this->field_0x1aa = this->field_0x1aa & 0xf7;
  this->field_0x1aa = this->field_0x1aa | 8;
  LOCK();
  this->bChanged = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// execAddChaosSolverActor @ 146394100

void __cdecl
UChaosDestructionListener::execAddChaosSolverActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execAddGeometryCollectionActor @ 146394180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UChaosDestructionListener::execAddGeometryCollectionActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryCollectionComponent *this;
  AGeometryCollectionActor *pAVar2;
  int iVar3;
  UWorld *pUVar4;
  uint uVar5;
  TObjectPtr<AGeometryCollectionActor_const_>_u_0 local_res10;
  AGeometryCollectionActor *local_res20;
  AGeometryCollectionActor *local_18 [2];
  
  local_res20 = (AGeometryCollectionActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pAVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (AGeometryCollectionActor *)0x0) {
    local_res10.DebugPtr = local_res20;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar2 != (AGeometryCollectionActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
    }
    uVar5 = ((uint)((ulonglong)pAVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pAVar2 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar3 = TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<AGeometryCollectionActor_const_>_>
                      ((TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
                        *)&param_1[0x13].field_0x8,uVar5 >> 0x10 ^ uVar5,
                       (TObjectPtr<AGeometryCollectionActor_const_> *)&local_res10.ObjectPtr);
    if (iVar3 == -1) {
      local_18[0] = pAVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
      TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<AGeometryCollectionActor>_>
                ((TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
                  *)&param_1[0x13].field_0x8,
                 (TObjectPtr<AGeometryCollectionActor> *)&local_res10.ObjectPtr,(bool *)local_18);
      this = (pAVar2->GeometryCollectionComponent).field0_0x0.DebugPtr;
      if ((this != (UGeometryCollectionComponent *)0x0) &&
         (this->PhysicsProxy != (FGeometryCollectionPhysicsProxy *)0x0)) {
        pUVar4 = *(UWorld **)&this->field_0xb0;
        if (pUVar4 == (UWorld *)0x0) {
          pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        RegisterChaosEvents((UChaosDestructionListener *)param_1,pUVar4->PhysicsScene);
      }
    }
  }
  return;
}

// execIsEventListening @ 146395e20

void __cdecl
UChaosDestructionListener::execIsEventListening(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = (param_1[0xe].field_0x20 & 0xf) != 0;
  return;
}

// execRemoveChaosSolverActor @ 1463962b0

void __cdecl
UChaosDestructionListener::execRemoveChaosSolverActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execRemoveGeometryCollectionActor @ 146396330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UChaosDestructionListener::execRemoveGeometryCollectionActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AGeometryCollectionActor *pAVar2;
  uint uVar3;
  AGeometryCollectionActor *local_res10;
  TObjectPtr<AGeometryCollectionActor_const_>_u_0 local_res20;
  
  local_res10 = (AGeometryCollectionActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pAVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (AGeometryCollectionActor *)0x0) {
    ClearEvents((UChaosDestructionListener *)param_1);
    local_res20.DebugPtr = pAVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar2);
    }
    if (*(int *)&param_1[0x13].field_0x10 != *(int *)&param_1[0x14].field_0x14) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar2 != (AGeometryCollectionActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
      uVar3 = ((uint)((ulonglong)pAVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pAVar2 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<AGeometryCollectionActor_const_>_>
                ((TSet<TObjectPtr<AGeometryCollectionActor>,DefaultKeyFuncs<TObjectPtr<AGeometryCollectionActor>,0>,FDefaultSetAllocator>
                  *)&param_1[0x13].field_0x8,uVar3 >> 0x10 ^ uVar3,
                 (TObjectPtr<AGeometryCollectionActor_const_> *)&local_res20.ObjectPtr);
    }
    UpdateEvents((UChaosDestructionListener *)param_1);
  }
  return;
}

// execSetBreakingEventEnabled @ 146396a10

void __cdecl
UChaosDestructionListener::execSetBreakingEventEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 & 0xfd;
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 | -(local_res8[0] != 0) & 2U;
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSetBreakingEventRequestSettings @ 146396ab0

void __cdecl
UChaosDestructionListener::execSetBreakingEventRequestSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_28 [32];
  
  local_28[0x14] = 1;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar17 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0xf].field_0x14 = puVar17[0];
  param_1[0xf].field_0x15 = uVar2;
  param_1[0xf].field_0x16 = uVar3;
  param_1[0xf].field_0x17 = uVar4;
  param_1[0xf].field_0x18 = uVar5;
  param_1[0xf].field_0x19 = uVar6;
  param_1[0xf].field_0x1a = uVar7;
  param_1[0xf].field_0x1b = uVar8;
  param_1[0xf].field_0x1c = uVar9;
  param_1[0xf].field_0x1d = uVar10;
  param_1[0xf].field_0x1e = uVar11;
  param_1[0xf].field_0x1f = uVar12;
  param_1[0xf].field_0x20 = uVar13;
  param_1[0xf].field_0x21 = uVar14;
  param_1[0xf].field_0x22 = uVar15;
  param_1[0xf].field_0x23 = uVar16;
  *(undefined8 *)&param_1[0xf].field_0x24 = *(undefined8 *)(puVar17 + 0x10);
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSetCollisionEventEnabled @ 146396b70

void __cdecl
UChaosDestructionListener::execSetCollisionEventEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 & 0xfe;
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 | local_res8[0] != 0;
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSetCollisionEventRequestSettings @ 146396c10

void __cdecl
UChaosDestructionListener::execSetCollisionEventRequestSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar *puVar10;
  uchar local_28 [32];
  
  local_28[0x14] = 1;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar10 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar10[8];
  uVar3 = puVar10[9];
  uVar4 = puVar10[10];
  uVar5 = puVar10[0xb];
  uVar6 = puVar10[0xc];
  uVar7 = puVar10[0xd];
  uVar8 = puVar10[0xe];
  uVar9 = puVar10[0xf];
  *(undefined8 *)&param_1[0xe].field_0x24 = *(undefined8 *)puVar10;
  param_1[0xf].field_0x4 = uVar2;
  param_1[0xf].field_0x5 = uVar3;
  param_1[0xf].field_0x6 = uVar4;
  param_1[0xf].field_0x7 = uVar5;
  param_1[0xf].field_0x8 = uVar6;
  param_1[0xf].field_0x9 = uVar7;
  param_1[0xf].field_0xa = uVar8;
  param_1[0xf].field_0xb = uVar9;
  uVar2 = puVar10[0x11];
  uVar3 = puVar10[0x12];
  uVar4 = puVar10[0x13];
  uVar5 = puVar10[0x14];
  uVar6 = puVar10[0x15];
  uVar7 = puVar10[0x16];
  uVar8 = puVar10[0x17];
  param_1[0xf].field_0xc = puVar10[0x10];
  param_1[0xf].field_0xd = uVar2;
  param_1[0xf].field_0xe = uVar3;
  param_1[0xf].field_0xf = uVar4;
  param_1[0xf].field_0x10 = uVar5;
  param_1[0xf].field_0x11 = uVar6;
  param_1[0xf].field_0x12 = uVar7;
  param_1[0xf].field_0x13 = uVar8;
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSetRemovalEventEnabled @ 146397f00

void __cdecl
UChaosDestructionListener::execSetRemovalEventEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 & 0xf7;
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 | -(local_res8[0] != 0) & 8U;
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSetRemovalEventRequestSettings @ 146397fa0

void __cdecl
UChaosDestructionListener::execSetRemovalEventRequestSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar *puVar10;
  uchar local_18 [16];
  
  local_18[0xc] = 1;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar10 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar6 = puVar10[4];
  uVar7 = puVar10[5];
  uVar8 = puVar10[6];
  uVar9 = puVar10[7];
  uVar2 = *(undefined8 *)(puVar10 + 8);
  param_1[0x10].field_0x1c = puVar10[0];
  param_1[0x10].field_0x1d = uVar3;
  param_1[0x10].field_0x1e = uVar4;
  param_1[0x10].field_0x1f = uVar5;
  param_1[0x10].field_0x20 = uVar6;
  param_1[0x10].field_0x21 = uVar7;
  param_1[0x10].field_0x22 = uVar8;
  param_1[0x10].field_0x23 = uVar9;
  *(undefined8 *)&param_1[0x10].field_0x24 = uVar2;
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSetTrailingEventEnabled @ 1463986a0

void __cdecl
UChaosDestructionListener::execSetTrailingEventEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 & 0xfb;
  param_1[0xe].field_0x20 = param_1[0xe].field_0x20 | -(local_res8[0] != 0) & 4U;
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSetTrailingEventRequestSettings @ 146398740

void __cdecl
UChaosDestructionListener::execSetTrailingEventRequestSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_28 [32];
  
  local_28[0x14] = 1;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar17 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0x10].field_0x4 = puVar17[0];
  param_1[0x10].field_0x5 = uVar2;
  param_1[0x10].field_0x6 = uVar3;
  param_1[0x10].field_0x7 = uVar4;
  param_1[0x10].field_0x8 = uVar5;
  param_1[0x10].field_0x9 = uVar6;
  param_1[0x10].field_0xa = uVar7;
  param_1[0x10].field_0xb = uVar8;
  param_1[0x10].field_0xc = uVar9;
  param_1[0x10].field_0xd = uVar10;
  param_1[0x10].field_0xe = uVar11;
  param_1[0x10].field_0xf = uVar12;
  param_1[0x10].field_0x10 = uVar13;
  param_1[0x10].field_0x11 = uVar14;
  param_1[0x10].field_0x12 = uVar15;
  param_1[0x10].field_0x13 = uVar16;
  uVar2 = puVar17[0x11];
  uVar3 = puVar17[0x12];
  uVar4 = puVar17[0x13];
  uVar5 = puVar17[0x14];
  uVar6 = puVar17[0x15];
  uVar7 = puVar17[0x16];
  uVar8 = puVar17[0x17];
  param_1[0x10].field_0x14 = puVar17[0x10];
  param_1[0x10].field_0x15 = uVar2;
  param_1[0x10].field_0x16 = uVar3;
  param_1[0x10].field_0x17 = uVar4;
  param_1[0x10].field_0x18 = uVar5;
  param_1[0x10].field_0x19 = uVar6;
  param_1[0x10].field_0x1a = uVar7;
  param_1[0x10].field_0x1b = uVar8;
  UpdateTransformSettings((UChaosDestructionListener *)param_1);
  return;
}

// execSortBreakingEvents @ 146398960

void __cdecl
UChaosDestructionListener::execSortBreakingEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  void **ppvVar3;
  undefined1 local_res8 [8];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x1f].field_0x10;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,ppvVar3,local_res8[0],&param_1[0xc].field_0x10);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSortCollisionEvents @ 146398a70

void __cdecl
UChaosDestructionListener::execSortCollisionEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  void **ppvVar3;
  undefined1 local_res8 [8];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)(param_1 + 0x1f);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,ppvVar3,local_res8[0],&param_1[0xc].field_0x10);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSortRemovalEvents @ 146398b80

void __cdecl
UChaosDestructionListener::execSortRemovalEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  void **ppvVar3;
  undefined1 local_res8 [8];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x20].field_0x8;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,ppvVar3,local_res8[0],&param_1[0xc].field_0x10);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSortTrailingEvents @ 146398c90

void __cdecl
UChaosDestructionListener::execSortTrailingEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  void **ppvVar3;
  undefined1 local_res8 [8];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x1f].field_0x20;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,ppvVar3,local_res8[0],&param_1[0xc].field_0x10);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

