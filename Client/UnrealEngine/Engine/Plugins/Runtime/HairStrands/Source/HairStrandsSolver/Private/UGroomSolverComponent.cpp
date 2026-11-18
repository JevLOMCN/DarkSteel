// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 41

// StaticClass @ 14e245ad0

UClass * __cdecl UGroomSolverComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomSolverComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsSolver",L"GroomSolverComponent",
               &Z_Registration_Info_UClass_UGroomSolverComponent.InnerSingleton,
               StaticRegisterNativesUGroomSolverComponent,0x860,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroomSolverComponent>,
               InternalVTableHelperCtorCaller<UGroomSolverComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomSolverComponent.InnerSingleton;
}

// UGroomSolverComponent @ 14e2516c0

UGroomSolverComponent * __thiscall
UGroomSolverComponent::UGroomSolverComponent(UGroomSolverComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  IDataflowPhysicsSolverInterface::IDataflowPhysicsSolverInterface
            ((IDataflowPhysicsSolverInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SolverSettings).CurveDynamicIndices.ArrayNum = 0;
  (this->SolverSettings).CurveDynamicIndices.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGroomSolverComponent__6B_;
  (this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SolverSettings).CurveKinematicIndices.ArrayNum = 0;
  (this->SolverSettings).CurveKinematicIndices.ArrayMax = 0;
  (this->SolverSettings).PointDynamicIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SolverSettings).PointDynamicIndices.ArrayNum = 0;
  (this->SolverSettings).PointDynamicIndices.ArrayMax = 0;
  (this->SolverSettings).PointKinematicIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SolverSettings).PointKinematicIndices.ArrayNum = 0;
  (this->SolverSettings).PointKinematicIndices.ArrayMax = 0;
  (this->SolverSettings).ObjectDistanceLods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverSettings).ObjectDistanceLods.ArrayNum = 0;
  (this->SolverSettings).ObjectDistanceLods.ArrayMax = 0;
  (this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr = (UDataflow *)0x0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x20 = 0;
  (this->SolverSettings).MaxLODDistance = 1000.0;
  (this->SolverSettings).MinLODDistance = 100.0;
  (this->SolverSettings).MaxPointsCount = 100000.0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x34 = 0;
  (this->SimulationAsset).SimulationGroups.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  *(undefined8 *)&(this->GroomComponents).Elements = 0;
  *(undefined8 *)&(this->GroomComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GroomComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x34 = 0;
  (this->GroomComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GroomComponents).HashSize = 0;
  (this->MeshDeformer).field0_0x0.DebugPtr = (UMeshDeformer *)0x0;
  (this->DeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)0x0;
  (this->DeformerSettings).field0_0x0.DebugPtr = (UMeshDeformerInstanceSettings *)0x0;
  FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy
            ((FDataflowPhysicsSolverProxy *)&this->GroomSolverProxy);
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ =
       (longlong)&FDataflowGroomSolverProxy::_vftable__for__FDataflowPhysicsSolverProxy__;
  (this->GroomSolverProxy)._padding_ =
       (longlong)&FDataflowGroomSolverProxy::_vftable__for__Chaos__FPhysicsSolverEvents__;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy).DeformerInstance = (UMeshDeformerInstance *)0x0;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids = 0;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x8 = 0;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x20 = 0;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x28 = 0;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x34 = 0;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x40 = 0;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x48 = 0;
  *(undefined8 *)&this->CollisionComponents = 0;
  *(undefined8 *)&(this->CollisionComponents).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionComponents).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionComponents).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionComponents).field_0x34 = 0;
  *(undefined4 *)&(this->CollisionComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CollisionComponents).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionComponents).field_0x48 = 0;
  return this;
}

// UGroomSolverComponent @ 14e251990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGroomSolverComponent * __thiscall
UGroomSolverComponent::UGroomSolverComponent
          (UGroomSolverComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  IDataflowPhysicsSolverInterface::IDataflowPhysicsSolverInterface
            ((IDataflowPhysicsSolverInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SolverSettings).CurveDynamicIndices.ArrayNum = 0;
  (this->SolverSettings).CurveDynamicIndices.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGroomSolverComponent__6B_;
  (this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SolverSettings).CurveKinematicIndices.ArrayNum = 0;
  (this->SolverSettings).CurveKinematicIndices.ArrayMax = 0;
  (this->SolverSettings).PointDynamicIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SolverSettings).PointDynamicIndices.ArrayNum = 0;
  (this->SolverSettings).PointDynamicIndices.ArrayMax = 0;
  (this->SolverSettings).PointKinematicIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SolverSettings).PointKinematicIndices.ArrayNum = 0;
  (this->SolverSettings).PointKinematicIndices.ArrayMax = 0;
  (this->SolverSettings).ObjectDistanceLods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverSettings).ObjectDistanceLods.ArrayNum = 0;
  (this->SolverSettings).ObjectDistanceLods.ArrayMax = 0;
  (this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr = (UDataflow *)0x0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x20 = 0;
  (this->SolverSettings).MaxLODDistance = 1000.0;
  (this->SolverSettings).MinLODDistance = 100.0;
  (this->SolverSettings).MaxPointsCount = 100000.0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x34 = 0;
  (this->SimulationAsset).SimulationGroups.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  *(undefined8 *)&(this->GroomComponents).Elements = 0;
  *(undefined8 *)&(this->GroomComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GroomComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroomComponents).Elements.field_0x34 = 0;
  (this->GroomComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GroomComponents).HashSize = 0;
  (this->MeshDeformer).field0_0x0.DebugPtr = (UMeshDeformer *)0x0;
  (this->DeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)0x0;
  (this->DeformerSettings).field0_0x0.DebugPtr = (UMeshDeformerInstanceSettings *)0x0;
  FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy
            ((FDataflowPhysicsSolverProxy *)&this->GroomSolverProxy);
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ =
       (longlong)&FDataflowGroomSolverProxy::_vftable__for__FDataflowPhysicsSolverProxy__;
  (this->GroomSolverProxy)._padding_ =
       (longlong)&FDataflowGroomSolverProxy::_vftable__for__Chaos__FPhysicsSolverEvents__;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 0;
  (this->GroomSolverProxy)._padding_ = 2;
  (this->GroomSolverProxy).DeformerInstance = (UMeshDeformerInstance *)0x0;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids = 0;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x8 = 0;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x20 = 0;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x28 = 0;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x34 = 0;
  *(undefined8 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x40 = 0;
  *(undefined4 *)&(this->GroomSolverProxy).DeformerInstanceGuids.field_0x48 = 0;
  *(undefined8 *)&this->CollisionComponents = 0;
  *(undefined8 *)&(this->CollisionComponents).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionComponents).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionComponents).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollisionComponents).field_0x34 = 0;
  *(undefined8 *)&(this->CollisionComponents).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionComponents).field_0x48 = 0;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0x10;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0x77 | 8;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  return this;
}

// ~UGroomSolverComponent @ 14e252170

void __thiscall UGroomSolverComponent::~UGroomSolverComponent(UGroomSolverComponent *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGroomSolverComponent__6B_;
  *(undefined4 *)&(this->CollisionComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CollisionComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionComponents);
  FDataflowGroomSolverProxy::~FDataflowGroomSolverProxy(&this->GroomSolverProxy);
  (this->GroomComponents).HashSize = 0;
  FVar2 = (this->GroomComponents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GroomComponents).Elements);
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  FVar2 = (this->SimulationAsset).SimulationGroups.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SimulationAsset).SimulationGroups.Elements);
  pFVar3 = (this->SolverSettings).ObjectDistanceLods.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SolverSettings).PointKinematicIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SolverSettings).PointDynamicIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IDataflowSimulationInterface__6B_;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddCollisionComponent @ 14e252cd0

void __thiscall
UGroomSolverComponent::AddCollisionComponent
          (UGroomSolverComponent *this,UMeshComponent *param_1,int param_2)

{
  TPairInitializer<TObjectPtr<UMeshComponent>_&&,int_const_&> local_res8;
  int local_res18 [4];
  int **local_18;
  int *local_10;
  
  local_res8.Value = (int *)param_1;
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TObjectPtr<UMeshComponent>_&&,int_const_&>_>
            ((TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
              *)&this->CollisionComponents,&local_res8,(bool *)&local_18);
  return;
}

// AddGroomComponent @ 14e2530a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomSolverComponent::AddGroomComponent(UGroomSolverComponent *this,UGroomComponent *param_1)

{
  TObjectPtr<UGroomComponent>_u_0 local_res10;
  UGroomComponent *local_res18 [2];
  
  if (param_1 != (UGroomComponent *)0x0) {
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<UGroomComponent>_>
              (&this->GroomComponents,(TObjectPtr<UGroomComponent> *)&local_res10.ObjectPtr,
               (bool *)local_res18);
    local_res10 = (TObjectPtr<UGroomComponent>_u_0)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UGroomSolverComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FSoftObjectPtr::operator=(&(param_1->GroomSolver).SoftObjectPtr,(FObjectPtr)&local_res10);
  }
  return;
}

// BuildSimulationProxy @ 14e253210

void __thiscall UGroomSolverComponent::BuildSimulationProxy(UGroomSolverComponent *this)

{
  return;
}

// CreateRenderState_Concurrent @ 14e253270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGroomSolverComponent::CreateRenderState_Concurrent
          (UGroomSolverComponent *this,FRegisterComponentContext *param_1)

{
  UMeshDeformerInstance *pUVar1;
  
  pUVar1 = (this->DeformerInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeshDeformerInstance *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2b0))();
  }
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  return;
}

// DestroyRenderState_Concurrent @ 14e253400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomSolverComponent::DestroyRenderState_Concurrent(UGroomSolverComponent *this)

{
  UMeshDeformerInstance *pUVar1;
  
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  pUVar1 = (this->DeformerInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeshDeformerInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e253422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14e253b60

UClass * __cdecl UGroomSolverComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomSolverComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsSolver",L"GroomSolverComponent",
               &Z_Registration_Info_UClass_UGroomSolverComponent.InnerSingleton,
               StaticRegisterNativesUGroomSolverComponent,0x860,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroomSolverComponent>,
               InternalVTableHelperCtorCaller<UGroomSolverComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomSolverComponent.InnerSingleton;
}

// GetSimulationAsset @ 14e253c60

FDataflowSimulationAsset * __thiscall
UGroomSolverComponent::GetSimulationAsset(UGroomSolverComponent *this)

{
  return (FDataflowSimulationAsset *)&this->_padding_;
}

// GetSimulationAsset @ 14e253c70

FDataflowSimulationAsset * __thiscall
UGroomSolverComponent::GetSimulationAsset(UGroomSolverComponent *this)

{
  return (FDataflowSimulationAsset *)&this->_padding_;
}

// GetSimulationName @ 14e253c80

FString * __thiscall
UGroomSolverComponent::GetSimulationName
          (UGroomSolverComponent *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this[-1]._padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSimulationProxy @ 14e253cb0

FDataflowSimulationProxy * __thiscall
UGroomSolverComponent::GetSimulationProxy(UGroomSolverComponent *this)

{
  return (FDataflowSimulationProxy *)&this->_padding_;
}

// GetSimulationProxy @ 14e253cc0

FDataflowSimulationProxy * __thiscall
UGroomSolverComponent::GetSimulationProxy(UGroomSolverComponent *this)

{
  return (FDataflowSimulationProxy *)&this->_padding_;
}

// OnRegister @ 14e254000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomSolverComponent::OnRegister(UGroomSolverComponent *this)

{
  UMeshDeformer *pUVar1;
  UObject *pUVar2;
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  pUVar1 = (this->MeshDeformer).field0_0x0.DebugPtr;
  if (pUVar1 == (UMeshDeformer *)0x0) {
    pUVar2 = (UObject *)0x0;
  }
  else {
    pUVar2 = (UObject *)
             (**(code **)(*(longlong *)pUVar1 + 0x2b8))
                       (pUVar1,this,(this->DeformerSettings).field0_0x0.DebugPtr);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->DeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)pUVar2;
  (this->GroomSolverProxy).DeformerInstance = (UMeshDeformerInstance *)pUVar2;
  return;
}

// OnUnregister @ 14e254070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomSolverComponent::OnUnregister(UGroomSolverComponent *this)

{
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  (this->DeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)0x0;
  (this->GroomSolverProxy).DeformerInstance = (UMeshDeformerInstance *)0x0;
  return;
}

// ReadFromSimulation @ 14e2540b0

void __thiscall
UGroomSolverComponent::ReadFromSimulation(UGroomSolverComponent *this,float param_1,bool param_2)

{
  return;
}

// RemoveCollisionComponent @ 14e255210

void __thiscall
UGroomSolverComponent::RemoveCollisionComponent(UGroomSolverComponent *this,UMeshComponent *param_1)

{
  uint uVar1;
  TObjectPtr<UMeshComponent_const_>_u_0 local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (*(int *)&(this->CollisionComponents).field_0x8 !=
      *(int *)&(this->CollisionComponents).field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMeshComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectPtr<UMeshComponent_const_>_>
              ((TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
                *)&this->CollisionComponents,uVar1 >> 0x10 ^ uVar1,
               (TObjectPtr<UMeshComponent_const_> *)&local_res8.ObjectPtr);
  }
  return;
}

// RemoveGroomComponent @ 14e2552c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomSolverComponent::RemoveGroomComponent(UGroomSolverComponent *this,UGroomComponent *param_1)

{
  uint uVar1;
  TObjectPtr<UGroomComponent_const_>_u_0 local_res10 [3];
  
  if (param_1 != (UGroomComponent *)0x0) {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->GroomComponents).Elements.field_0x8 !=
        *(int *)&(this->GroomComponents).Elements.field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UGroomComponent_const_>_>
                (&this->GroomComponents,uVar1 >> 0x10 ^ uVar1,
                 (TObjectPtr<UGroomComponent_const_> *)&local_res10[0].ObjectPtr);
    }
    local_res10[0].DebugPtr = (UGroomComponent *)0x0;
    FSoftObjectPtr::operator=(&(param_1->GroomSolver).SoftObjectPtr,(FObjectPtr)local_res10);
  }
  return;
}

// ResetCollisionComponents @ 14e255470

void __thiscall UGroomSolverComponent::ResetCollisionComponents(UGroomSolverComponent *this)

{
  TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
           *)&this->CollisionComponents);
  return;
}

// ResetGroomComponents @ 14e255490

void __thiscall UGroomSolverComponent::ResetGroomComponents(UGroomSolverComponent *this)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = 0;
  puVar1 = &(this->GroomComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->GroomComponents).Elements.field_0x28;
  this_00 = &this->GroomComponents;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = iVar12;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->GroomComponents).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    iVar12 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e25553d;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e25553d:
  uVar9 = *(uint *)&(this->GroomComponents).Elements.field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->GroomComponents).Elements.field_0x8 -
                       *(int *)&(this->GroomComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->GroomComponents).Elements.field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->GroomComponents).Elements.field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e255640;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14e255640:
  while( true ) {
    if (*(int *)&(this->GroomComponents).Elements.field_0x8 -
        *(int *)&(this->GroomComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_res18 = 0;
    FSoftObjectPtr::operator=
              ((FSoftObjectPtr *)
               (*(longlong *)
                 (*(longlong *)&this_00->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10) +
               0x7c0),(FObjectPtr)&local_res18);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (*(int *)&(this->GroomComponents).Elements.field_0x8 !=
      *(int *)&(this->GroomComponents).Elements.field_0x34) {
    TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    iVar3 = *(int *)&(this->GroomComponents).Elements.field_0xc;
    *(undefined4 *)&(this->GroomComponents).Elements.field_0x8 = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->GroomComponents).Elements.field_0xc);
    }
    *(undefined4 *)&(this->GroomComponents).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->GroomComponents).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->GroomComponents).Elements.field_0x28 = 0;
  }
  return;
}

// ResetSimulationProxy @ 14e255710

void __thiscall UGroomSolverComponent::ResetSimulationProxy(UGroomSolverComponent *this)

{
  return;
}

// SelectDynamicCurves @ 14e255720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomSolverComponent::SelectDynamicCurves(UGroomSolverComponent *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  int iVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *pTVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  UWorld *pUVar23;
  FScriptContainerElement *pFVar24;
  byte bVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  ForAnyElementType FVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined8 *puVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar39;
  undefined4 uVar40;
  double dVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  uint local_25c;
  undefined8 *local_258;
  int local_250;
  uint local_24c;
  longlong local_248;
  longlong local_240;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_238;
  uint local_228;
  FScriptContainerElement *local_220;
  uint local_218;
  int local_210;
  uint uStack_20c;
  undefined1 *puStack_208;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *local_1d8;
  longlong lStack_1d0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  int local_188;
  int local_184;
  int local_180;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  
  pUVar23 = (UWorld *)this->_padding_;
  local_res20 = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  if (pUVar23 == (UWorld *)0x0) {
    pUVar23 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  UE::Groom::Private::GatherViewLocations(pUVar23,&local_238);
  iVar36 = (this->SolverSettings).CurveDynamicIndices.ArrayMax;
  (this->SolverSettings).CurveDynamicIndices.ArrayNum = 0;
  if (iVar36 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SolverSettings).CurveDynamicIndices.AllocatorInstance,0,
               &(this->SolverSettings).CurveDynamicIndices.ArrayMax);
  }
  iVar36 = (this->SolverSettings).CurveKinematicIndices.ArrayMax;
  (this->SolverSettings).CurveKinematicIndices.ArrayNum = 0;
  if (iVar36 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SolverSettings).CurveKinematicIndices.AllocatorInstance,0,
               &(this->SolverSettings).CurveKinematicIndices.ArrayMax);
  }
  iVar36 = (this->SolverSettings).PointDynamicIndices.ArrayMax;
  (this->SolverSettings).PointDynamicIndices.ArrayNum = 0;
  if (iVar36 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SolverSettings).PointDynamicIndices.AllocatorInstance,0,
               &(this->SolverSettings).PointDynamicIndices.ArrayMax);
  }
  iVar36 = (this->SolverSettings).PointKinematicIndices.ArrayMax;
  (this->SolverSettings).PointKinematicIndices.ArrayNum = 0;
  if (iVar36 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SolverSettings).PointKinematicIndices.AllocatorInstance,0,
               &(this->SolverSettings).PointKinematicIndices.ArrayMax);
  }
  iVar36 = (this->SolverSettings).ObjectDistanceLods.ArrayMax;
  (this->SolverSettings).ObjectDistanceLods.ArrayNum = 0;
  if (iVar36 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SolverSettings).ObjectDistanceLods.AllocatorInstance,0,
               &(this->SolverSettings).ObjectDistanceLods.ArrayMax);
  }
  if (0 < local_238.ArrayNum) {
    puVar4 = &(this->GroomComponents).Elements.field_0x10;
    local_268 = 0;
    local_264 = 0;
    local_1a8._padding_._0_4_ = 0;
    local_1a8._padding_._4_4_ = 1;
    local_1a8.UnvisitedBitMask = 0xffffffff;
    local_1a8.CurrentBitIndex = 0;
    local_1a8.BaseBitIndex = 0;
    local_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
    if (*(int *)&(this->GroomComponents).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
    }
    local_1d8 = &this->GroomComponents;
    uVar38 = *(uint *)&(this->GroomComponents).Elements.field_0x28;
    lStack_1d0 = CONCAT44(local_1a8._padding_._4_4_,(undefined4)local_1a8._padding_);
    local_1b0 = *(int *)&(this->GroomComponents).Elements.field_0x8 -
                *(int *)&(this->GroomComponents).Elements.field_0x34;
    bVar25 = (byte)uVar38 & 0x1f;
    uStack_1c0._4_4_ = local_1a8.CurrentBitIndex;
    uStack_1c0._0_4_ = local_1a8.UnvisitedBitMask;
    uStack_1b8._4_4_ = local_1a8._28_4_;
    uStack_1b8._0_4_ = local_1a8.BaseBitIndex;
    pTStack_1c8 = local_1a8.Array;
    iVar36 = (int)uVar38 >> 5;
    uStack_20c = 1 << bVar25;
    uVar31 = -1 << bVar25;
    uVar33 = uVar38 & 0xffffffe0;
    TStack_170.Array = local_1a8.Array;
    uStack_150 = CONCAT44(uStack_1ac,local_1b0);
    local_210 = iVar36;
    puStack_208 = puVar4;
    local_200 = uVar31;
    uStack_1fc = uVar38;
    uStack_1f8 = uVar33;
    local_178 = local_1d8;
    TStack_170._padding_ = lStack_1d0;
    TStack_170._16_8_ = uStack_1c0;
    TStack_170._24_8_ = uStack_1b8;
    if (((int)uVar38 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar17 = __real_3d000000;
    fVar16 = __real_bf000000;
    fVar15 = __real_3f800000;
    dVar14 = __real_3ff0000000000000;
    local_1d8 = &this->GroomComponents;
    uVar7 = *(uint *)&(this->GroomComponents).Elements.field_0x28;
    if (uVar38 != uVar7) {
      puVar35 = *(undefined1 **)&(this->GroomComponents).Elements.field_0x20;
      if (puVar35 == (undefined1 *)0x0) {
        puVar35 = puVar4;
      }
      uVar31 = uVar31 & *(uint *)(puVar35 + (longlong)iVar36 * 4);
      while (uVar31 == 0) {
        uStack_1f8 = uVar33 + 0x20;
        local_210 = iVar36 + 1;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_210)
        goto LAB_14e255a59;
        uVar31 = *(uint *)(puVar35 + (longlong)iVar36 * 4 + 4);
        local_200 = 0xffffffff;
        iVar36 = local_210;
        uVar33 = uStack_1f8;
      }
      uStack_20c = ~(uVar31 - 1) & uVar31;
      uVar5 = (ulonglong)uStack_20c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_184 = (int)lVar11;
      uStack_1fc = local_184 + -1 + uVar33;
      if ((int)uVar7 < (int)uStack_1fc) {
LAB_14e255a59:
        uStack_1fc = uVar7;
      }
    }
    lStack_1d0 = CONCAT44(uStack_20c,local_210);
    uStack_1c0 = CONCAT44(uStack_1fc,local_200);
    uStack_1b8 = CONCAT44(uStack_1f4,uStack_1f8);
    local_1b0 = *(int *)&(this->GroomComponents).Elements.field_0x8 -
                *(int *)&(this->GroomComponents).Elements.field_0x34;
    uVar44 = (undefined4)__real_4550000000000000;
    uVar5 = (ulonglong)__real_4550000000000000 >> 0x20;
    pTStack_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)puStack_208;
    local_138._8_8_ = uStack_1c0;
    local_138._0_8_ = puStack_208;
    uStack_120 = CONCAT44(uStack_1ac,local_1b0);
    puVar30 = local_1e8;
    puVar27 = local_1e0;
    local_148 = local_1d8;
    uStack_140 = lStack_1d0;
    local_128 = uStack_1b8;
    while( true ) {
      pTVar19 = local_178;
      if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
          (int)uStack_150) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_170.CurrentBitIndex == local_138._12_4_) &&
          (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)local_138._0_8_)) &&
         (pTVar19 == local_148)) break;
      local_240 = *(longlong *)&pTVar19->Elements;
      local_248 = (longlong)TStack_170.CurrentBitIndex * 0x10;
      plVar9 = *(longlong **)(local_248 + local_240);
      puVar32 = local_1f0;
      if ((plVar9 != (longlong *)0x0) && (plVar9[0xb4] != 0)) {
        (**(code **)(*plVar9 + 0x598))(plVar9,&local_118);
        iVar36 = local_238.ArrayNum;
        uVar28 = (ulonglong)local_238.ArrayNum;
        pFVar24 = local_238.AllocatorInstance.Data + uVar28 * 0x18;
        FVar29.Data = local_238.AllocatorInstance.Data;
        uVar40 = uVar44;
        uVar42 = (int)uVar5;
        local_220 = pFVar24;
        while( true ) {
          if ((int)uVar28 != iVar36) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res18);
            uVar28 = local_238._8_8_ & 0xffffffff;
            pFVar24 = local_220;
          }
          if (FVar29.Data == pFVar24) break;
          pFVar1 = FVar29.Data + 8;
          dVar41 = *(double *)FVar29.Data;
          pFVar2 = FVar29.Data + 0x10;
          FVar29.Data = FVar29.Data + 0x18;
          dVar41 = (local_110 - *(double *)pFVar1) * (local_110 - *(double *)pFVar1) +
                   (local_118 - dVar41) * (local_118 - dVar41) +
                   (local_108 - *(double *)pFVar2) * (local_108 - *(double *)pFVar2);
          if ((double)CONCAT44(uVar42,uVar40) <= dVar41) {
            dVar41 = (double)CONCAT44(uVar42,uVar40);
          }
          uVar40 = SUB84(dVar41,0);
          uVar42 = (undefined4)((ulonglong)dVar41 >> 0x20);
        }
        fVar43 = (this->SolverSettings).MaxLODDistance;
        fVar6 = (this->SolverSettings).MinLODDistance;
        dVar41 = dVar14;
        if (fVar43 < fVar6) {
          if (2 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
        }
        else {
          dVar41 = (SQRT((double)CONCAT44(uVar42,uVar40)) - (double)fVar6) /
                   (double)(fVar43 - fVar6);
          if (dVar14 <= dVar41) {
            dVar41 = dVar14;
          }
          if (dVar41 <= 0.0) {
            dVar41 = 0.0;
          }
        }
        lVar18 = local_240;
        lVar11 = local_248;
        uVar31 = 0;
        local_288 = 0;
        local_24c = *(uint *)(*(longlong *)(local_248 + local_240) + 0x790);
        uVar38 = local_res20;
        puVar32 = local_1f0;
        if (local_24c != 0) {
          do {
            if (((int)uVar31 < 0) ||
               (lVar10 = *(longlong *)(lVar11 + lVar18), *(int *)(lVar10 + 0x790) <= (int)uVar31)) {
              uVar38 = uVar38 | 8;
              puVar32 = (undefined8 *)0x0;
              puVar27 = (undefined8 *)0x0;
            }
            else {
              uVar38 = uVar38 | 4;
              if (((int)uVar31 < 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              puVar30 = *(undefined8 **)(*(longlong *)(lVar10 + 0x788) + (longlong)(int)uVar31 * 8);
              puVar32 = puVar30;
              if (puVar30 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
                UNLOCK();
              }
            }
            if (((uVar38 & 8) != 0) && (uVar38 = uVar38 & 0xfffffff7, puVar27 != (undefined8 *)0x0))
            {
              piVar3 = (int *)(puVar27 + 1);
              LOCK();
              iVar36 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                puVar26 = puVar27;
                if (piVar3 == (int *)0x0) {
                  puVar26 = (undefined8 *)0x0;
                }
                if (puVar26 != (undefined8 *)0x0) {
                  (**(code **)*puVar26)(puVar26,1);
                }
              }
            }
            if (((uVar38 & 4) != 0) && (uVar38 = uVar38 & 0xfffffffb, puVar30 != (undefined8 *)0x0))
            {
              piVar3 = (int *)(puVar30 + 1);
              LOCK();
              iVar36 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                puVar26 = puVar30;
                if (piVar3 == (int *)0x0) {
                  puVar26 = (undefined8 *)0x0;
                }
                if (puVar26 != (undefined8 *)0x0) {
                  (**(code **)*puVar26)(puVar26,1);
                }
              }
            }
            bVar20 = UGroomComponent::IsDeformationEnable
                               (*(UGroomComponent **)(lVar11 + lVar18),uVar31);
            if (((bVar20) && (puVar32 != (undefined8 *)0x0)) && (puVar32[3] != 0)) {
              local_288 = (int)((double)*(uint *)(*(longlong *)(puVar32[3] + 0x180) + 0xc) *
                                (dVar14 - dVar41) + (double)local_288);
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < local_24c);
          local_25c = 0;
          fVar43 = (this->SolverSettings).MaxPointsCount / (float)local_288;
          if (fVar15 <= fVar43) {
            fVar43 = fVar15;
          }
          puVar32 = local_1f0;
          puVar26 = local_258;
          local_res20 = uVar38;
          local_1e8 = puVar30;
          local_1e0 = puVar27;
          if (fVar43 <= 0.0) {
            fVar43 = 0.0;
          }
          do {
            uVar31 = local_25c;
            puVar30 = (undefined8 *)0x0;
            if (((int)local_25c < 0) ||
               (lVar11 = *(longlong *)(local_248 + local_240),
               *(int *)(lVar11 + 0x790) <= (int)local_25c)) {
              local_258 = (undefined8 *)0x0;
              uVar33 = 2;
              puVar26 = puVar30;
            }
            else {
              if (((int)local_25c < 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              puVar30 = *(undefined8 **)(*(longlong *)(lVar11 + 0x788) + (longlong)(int)uVar31 * 8);
              if (puVar30 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
                UNLOCK();
              }
              uVar33 = 1;
              puVar32 = puVar30;
            }
            uVar38 = uVar33 | uVar38;
            local_res20 = uVar38;
            if (((uVar38 & 2) != 0) &&
               (uVar38 = uVar38 & 0xfffffffd, local_res20 = uVar38, puVar26 != (undefined8 *)0x0)) {
              piVar3 = (int *)(puVar26 + 1);
              LOCK();
              iVar36 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                puVar27 = puVar26;
                if (piVar3 == (int *)0x0) {
                  puVar27 = (undefined8 *)0x0;
                }
                if (puVar27 != (undefined8 *)0x0) {
                  (**(code **)*puVar27)(puVar27,1);
                }
              }
            }
            if (((uVar38 & 1) != 0) &&
               (uVar38 = uVar38 & 0xfffffffe, local_res20 = uVar38, puVar32 != (undefined8 *)0x0)) {
              piVar3 = (int *)(puVar32 + 1);
              LOCK();
              iVar36 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                puVar27 = puVar32;
                if (piVar3 == (int *)0x0) {
                  puVar27 = (undefined8 *)0x0;
                }
                if (puVar27 != (undefined8 *)0x0) {
                  (**(code **)*puVar27)(puVar27,1);
                }
              }
            }
            bVar20 = UGroomComponent::IsDeformationEnable
                               (*(UGroomComponent **)(local_248 + local_240),uVar31);
            iVar36 = local_268;
            if (((bVar20) && (puVar30 != (undefined8 *)0x0)) && (puVar30[3] != 0)) {
              lVar11 = *(longlong *)(puVar30[3] + 0x180);
              iVar8 = *(int *)(lVar11 + 8);
              local_260 = *(int *)(lVar11 + 0xc);
              iVar34 = (int)((dVar14 - dVar41) * (double)iVar8 * (double)fVar43);
              local_250 = (local_260 / iVar8) * iVar34;
              local_220 = (FScriptContainerElement *)CONCAT44(local_220._4_4_,iVar34);
              local_218 = ((int)ROUND(fVar16 - (float)local_250 * fVar17) >> 1) * -0x40 - local_250;
              local_228 = ((int)ROUND(fVar16 - (float)(local_260 - local_250) * fVar17) >> 1) *
                          -0x40 - (local_260 - local_250);
              iVar21 = 0;
              iVar22 = local_268;
              iVar13 = local_264;
              iVar37 = local_250;
              if (0 < iVar34) {
                do {
                  pFVar24 = (this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data;
                  local_284 = iVar21 + iVar36;
                  if (((pFVar24 <= (FScriptContainerElement *)&local_284) &&
                      ((FScriptContainerElement *)&local_284 <
                       pFVar24 + (longlong)(this->SolverSettings).CurveDynamicIndices.ArrayMax * 4))
                     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar20)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar22 = (this->SolverSettings).CurveDynamicIndices.ArrayNum;
                  if (iVar22 == (this->SolverSettings).CurveDynamicIndices.ArrayMax) {
                    iVar22 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(this->SolverSettings).CurveDynamicIndices.
                                               AllocatorInstance,
                                        &(this->SolverSettings).CurveDynamicIndices.ArrayMax);
                  }
                  iVar21 = iVar21 + 1;
                  (this->SolverSettings).CurveDynamicIndices.ArrayNum = iVar22 + 1;
                  *(int *)((this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data +
                          (longlong)iVar22 * 4) = local_284;
                  puVar26 = local_258;
                  iVar22 = local_268;
                  iVar13 = local_264;
                  iVar37 = local_250;
                } while (iVar21 < iVar34);
              }
              for (; iVar36 = local_268, local_264 = iVar13, local_250 = iVar37, iVar34 < iVar8;
                  iVar34 = iVar34 + 1) {
                pFVar24 = (this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data;
                local_280 = iVar34 + local_268;
                local_268 = iVar22;
                if (((pFVar24 <= (FScriptContainerElement *)&local_280) &&
                    ((FScriptContainerElement *)&local_280 <
                     pFVar24 + (longlong)(this->SolverSettings).CurveKinematicIndices.ArrayMax * 4))
                   && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar20)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar22 = (this->SolverSettings).CurveKinematicIndices.ArrayNum;
                if (iVar22 == (this->SolverSettings).CurveKinematicIndices.ArrayMax) {
                  iVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&(this->SolverSettings).CurveKinematicIndices.
                                             AllocatorInstance,
                                      &(this->SolverSettings).CurveKinematicIndices.ArrayMax);
                }
                (this->SolverSettings).CurveKinematicIndices.ArrayNum = iVar22 + 1;
                *(int *)((this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data +
                        (longlong)iVar22 * 4) = local_280;
                puVar26 = local_258;
                iVar22 = local_268;
                iVar13 = local_264;
                iVar37 = local_250;
                local_268 = iVar36;
              }
              pTVar39 = &(this->SolverSettings).PointDynamicIndices;
              piVar3 = &(this->SolverSettings).PointDynamicIndices.ArrayMax;
              iVar36 = 0;
              local_268 = iVar22;
              if (0 < iVar37) {
                do {
                  pFVar24 = (pTVar39->AllocatorInstance).Data;
                  local_27c = iVar36 + iVar13;
                  if (((pFVar24 <= (FScriptContainerElement *)&local_27c) &&
                      ((FScriptContainerElement *)&local_27c < pFVar24 + (longlong)*piVar3 * 4)) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar20)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar34 = (this->SolverSettings).PointDynamicIndices.ArrayNum;
                  if (iVar34 == *piVar3) {
                    iVar34 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar39->AllocatorInstance,piVar3);
                  }
                  iVar36 = iVar36 + 1;
                  (this->SolverSettings).PointDynamicIndices.ArrayNum = iVar34 + 1;
                  *(int *)((pTVar39->AllocatorInstance).Data + (longlong)iVar34 * 4) = local_27c;
                  puVar26 = local_258;
                } while (iVar36 < iVar37);
              }
              if (0 < (int)local_218) {
                uVar28 = (ulonglong)local_218;
                do {
                  pFVar24 = (pTVar39->AllocatorInstance).Data;
                  local_278 = 0xffffffff;
                  if (((pFVar24 <= (FScriptContainerElement *)&local_278) &&
                      ((FScriptContainerElement *)&local_278 < pFVar24 + (longlong)*piVar3 * 4)) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar20)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar36 = (this->SolverSettings).PointDynamicIndices.ArrayNum;
                  if (iVar36 == *piVar3) {
                    iVar36 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar39->AllocatorInstance,piVar3);
                  }
                  (this->SolverSettings).PointDynamicIndices.ArrayNum = iVar36 + 1;
                  *(undefined4 *)((pTVar39->AllocatorInstance).Data + (longlong)iVar36 * 4) =
                       local_278;
                  uVar28 = uVar28 - 1;
                } while (uVar28 != 0);
              }
              iVar34 = local_260;
              iVar36 = local_264;
              pTVar39 = &(this->SolverSettings).PointKinematicIndices;
              for (; iVar37 < iVar34; iVar37 = iVar37 + 1) {
                pFVar24 = (pTVar39->AllocatorInstance).Data;
                local_274 = iVar37 + iVar36;
                if (((pFVar24 <= (FScriptContainerElement *)&local_274) &&
                    ((FScriptContainerElement *)&local_274 <
                     pFVar24 + (longlong)(this->SolverSettings).PointKinematicIndices.ArrayMax * 4))
                   && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar20)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar22 = (this->SolverSettings).PointKinematicIndices.ArrayNum;
                if (iVar22 == (this->SolverSettings).PointKinematicIndices.ArrayMax) {
                  iVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar39->AllocatorInstance,
                                      &(this->SolverSettings).PointKinematicIndices.ArrayMax);
                }
                (this->SolverSettings).PointKinematicIndices.ArrayNum = iVar22 + 1;
                *(int *)((pTVar39->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_274;
                puVar26 = local_258;
              }
              if (0 < (int)local_228) {
                uVar28 = (ulonglong)local_228;
                do {
                  pFVar24 = (pTVar39->AllocatorInstance).Data;
                  local_270 = 0xffffffff;
                  if (((pFVar24 <= (FScriptContainerElement *)&local_270) &&
                      ((FScriptContainerElement *)&local_270 <
                       pFVar24 + (longlong)(this->SolverSettings).PointKinematicIndices.ArrayMax * 4
                      )) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar20)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar36 = (this->SolverSettings).PointKinematicIndices.ArrayNum;
                  if (iVar36 == (this->SolverSettings).PointKinematicIndices.ArrayMax) {
                    iVar36 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar39->AllocatorInstance,
                                        &(this->SolverSettings).PointKinematicIndices.ArrayMax);
                  }
                  (this->SolverSettings).PointKinematicIndices.ArrayNum = iVar36 + 1;
                  *(undefined4 *)((pTVar39->AllocatorInstance).Data + (longlong)iVar36 * 4) =
                       local_270;
                  uVar28 = uVar28 - 1;
                } while (uVar28 != 0);
              }
              pTVar39 = &(this->SolverSettings).ObjectDistanceLods;
              iVar36 = 1;
              if (iVar8 != 0) {
                iVar36 = iVar8;
              }
              uVar28 = (ulonglong)(iVar36 - 1) * 2 + 1;
              lVar11 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              local_188 = 0x1f;
              if ((uint)local_220 != 0) {
                for (; (uint)local_220 >> local_188 == 0; local_188 = local_188 + -1) {
                }
              }
              local_180 = (int)lVar11;
              iVar36 = 0;
              if ((uint)local_220 != 0) {
                iVar36 = local_188;
              }
              pFVar24 = (pTVar39->AllocatorInstance).Data;
              local_26c = (local_180 - iVar36) + -1;
              if (((pFVar24 <= (FScriptContainerElement *)&local_26c) &&
                  ((FScriptContainerElement *)&local_26c <
                   pFVar24 + (longlong)(this->SolverSettings).ObjectDistanceLods.ArrayMax * 4)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar36 = (this->SolverSettings).ObjectDistanceLods.ArrayNum;
              if (iVar36 == (this->SolverSettings).ObjectDistanceLods.ArrayMax) {
                iVar36 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar39->AllocatorInstance,
                                    &(this->SolverSettings).ObjectDistanceLods.ArrayMax);
              }
              local_268 = local_268 + iVar8;
              (this->SolverSettings).ObjectDistanceLods.ArrayNum = iVar36 + 1;
              *(int *)((pTVar39->AllocatorInstance).Data + (longlong)iVar36 * 4) = local_26c;
              local_264 = local_264 + local_260;
              uVar31 = local_25c;
              uVar38 = local_res20;
            }
            local_25c = uVar31 + 1;
            puVar30 = local_1e8;
            puVar27 = local_1e0;
          } while (local_25c < local_24c);
        }
      }
      local_1f0 = puVar32;
      TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
    }
  }
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  return;
}

// SendRenderDynamicData_Concurrent @ 14e256750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGroomSolverComponent::SendRenderDynamicData_Concurrent(UGroomSolverComponent *this)

{
  UMeshDeformerInstance *pUVar1;
  FDestructionSentinel local_58;
  FSceneInterface *local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  if ((this->DeformerInstance).field0_0x0.DebugPtr != (UMeshDeformerInstance *)0x0) {
    local_38 = 2;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_40 = UActorComponent::GetScene((UActorComponent *)this);
    pUVar1 = (this->DeformerInstance).field0_0x0.DebugPtr;
    local_30 = this->_padding_;
    local_34 = 3;
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,&local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetDeformerSolver @ 14e256840

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
UGroomSolverComponent::SetDeformerSolver(UGroomSolverComponent *this,UMeshDeformer *param_1)

{
  UMeshDeformer *pUVar1;
  UObject *pUVar2;
  
  (this->MeshDeformer).field0_0x0.DebugPtr = param_1;
  if ((param_1 == (UMeshDeformer *)0x0) || ((this->_padding_ & 0x40000000) != 0)) {
    pUVar2 = (UObject *)0x0;
    (this->DeformerSettings).field0_0x0.DebugPtr = (UMeshDeformerInstanceSettings *)0x0;
  }
  else {
    pUVar2 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (this->DeformerSettings).field0_0x0.DebugPtr = (UMeshDeformerInstanceSettings *)pUVar2;
    pUVar1 = (this->MeshDeformer).field0_0x0.DebugPtr;
    pUVar2 = (UObject *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,this,pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  (this->DeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)pUVar2;
  (this->GroomSolverProxy).DeformerInstance = (UMeshDeformerInstance *)pUVar2;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUGroomSolverComponent @ 14e256980

void __cdecl UGroomSolverComponent::StaticRegisterNativesUGroomSolverComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UGroomSolverComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14e256ac0

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
UGroomSolverComponent::TickComponent
          (UGroomSolverComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->DeformerInstance).field0_0x0.DebugPtr != (UMeshDeformerInstance *)0x0) {
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  }
  SelectDynamicCurves(this);
  return;
}

// WriteToSimulation @ 14e257540

void __thiscall
UGroomSolverComponent::WriteToSimulation(UGroomSolverComponent *this,float param_1,bool param_2)

{
  return;
}

// _getUObject @ 14e257710

UObject * __thiscall UGroomSolverComponent::_getUObject(UGroomSolverComponent *this)

{
  return (UObject *)&this[-1].CollisionComponents.field_0x28;
}

// _getUObject`adjustor{552}' @ 14e25771c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomSolverComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UGroomSolverComponent::_getUObject_adjustor_552__(UGroomSolverComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomSolverComponent *)&this[-1].SimulationAsset.SimulationGroups.Hash);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 14e257730

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomSolverComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall UGroomSolverComponent::_getUObject_adjustor_560__(UGroomSolverComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomSolverComponent *)
                       &this[-1].SimulationAsset.SimulationGroups.Elements.field_0x30);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 14e257744

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomSolverComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall UGroomSolverComponent::_getUObject_adjustor_568__(UGroomSolverComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomSolverComponent *)
                       &this[-1].SimulationAsset.SimulationGroups.Elements.field_0x28);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1384}' @ 14e257758

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomSolverComponent::_getUObject`adjustor{1384}' (void)const __ptr64 */

UObject * __thiscall UGroomSolverComponent::_getUObject_adjustor_1384__(UGroomSolverComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomSolverComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execAddCollisionComponent @ 14e257770

void __cdecl
UGroomSolverComponent::execAddCollisionComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  UObject *local_38;
  UObject *local_30;
  UObject **local_28;
  undefined4 *local_20;
  
  local_38 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_30 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = local_res8[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  local_28 = &local_30;
  local_20 = local_res10;
  TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TObjectPtr<UMeshComponent>_&&,int_const_&>_>
            ((TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
              *)&param_1[0x33].field_0x18,
             (TPairInitializer<TObjectPtr<UMeshComponent>_&&,int_const_&> *)(local_res10 + 4),
             (bool *)&local_28);
  return;
}

// execAddGroomComponent @ 14e257870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UGroomSolverComponent::execAddGroomComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TObjectPtr<UGroomComponent>_u_0 local_res10;
  UObject *local_res20;
  UObject *local_18 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObject *)0x0) {
    local_18[0] = local_res20;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res20);
    }
    TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<UGroomComponent>_>
              ((TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
                *)&param_1[0x28].field_0x10,(TObjectPtr<UGroomComponent> *)&local_res10.ObjectPtr,
               (bool *)local_18);
    local_res10 = (TObjectPtr<UGroomComponent>_u_0)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&pUVar2[0x31].field_0x18,(FObjectPtr)&local_res10);
  }
  return;
}

// execRemoveCollisionComponent @ 14e257960

void __cdecl
UGroomSolverComponent::execRemoveCollisionComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMeshComponent *pUVar2;
  uint uVar3;
  UMeshComponent *local_res8;
  TObjectPtr<UMeshComponent_const_>_u_0 local_res10;
  
  local_res8 = (UMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UMeshComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  local_res10.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  if (*(int *)&param_1[0x33].field_0x20 != *(int *)&param_1[0x34].field_0x24) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectPtr<UMeshComponent_const_>_>
              ((TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
                *)&param_1[0x33].field_0x18,uVar3 >> 0x10 ^ uVar3,
               (TObjectPtr<UMeshComponent_const_> *)&local_res10.ObjectPtr);
  }
  return;
}

// execRemoveGroomComponent @ 14e257a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UGroomSolverComponent::execRemoveGroomComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGroomComponent *pUVar2;
  uint uVar3;
  UGroomComponent *local_res10 [2];
  TObjectPtr<UGroomComponent_const_>_u_0 local_res20;
  
  local_res10[0] = (UGroomComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UGroomComponent *)0x0) {
    local_res20.DebugPtr = local_res10[0];
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    if (*(int *)&param_1[0x28].field_0x18 != *(int *)&param_1[0x29].field_0x1c) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UGroomComponent *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UGroomComponent_const_>_>
                ((TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
                  *)&param_1[0x28].field_0x10,uVar3 >> 0x10 ^ uVar3,
                 (TObjectPtr<UGroomComponent_const_> *)&local_res20.ObjectPtr);
    }
    local_res20.DebugPtr = (UGroomComponent *)0x0;
    FSoftObjectPtr::operator=(&(pUVar2->GroomSolver).SoftObjectPtr,(FObjectPtr)&local_res20);
  }
  return;
}

// execResetCollisionComponents @ 14e257ba0

void __cdecl
UGroomSolverComponent::execResetCollisionComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectPtr<UMeshComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>,FDefaultSetAllocator>
           *)&param_1[0x33].field_0x18);
  return;
}

// execResetGroomComponents @ 14e257bd0

void __cdecl
UGroomSolverComponent::execResetGroomComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResetGroomComponents((UGroomSolverComponent *)param_1);
  return;
}

// execSetDeformerSolver @ 14e257bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UGroomSolverComponent::execSetDeformerSolver(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong *local_res8;
  
  pUVar2 = (UObject *)0x0;
  local_res8 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(longlong **)&param_1[0x2a].field_0x10 = local_res8;
  if ((local_res8 == (longlong *)0x0) || ((param_1[3].field_0x23 & 0x40) != 0)) {
    *(undefined8 *)&param_1[0x2a].field_0x20 = 0;
  }
  else {
    pUVar2 = (UObject *)(**(code **)(*local_res8 + 0x2b0))(local_res8,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x2a].field_0x20 = pUVar2;
    pUVar2 = (UObject *)
             (**(code **)(**(longlong **)&param_1[0x2a].field_0x10 + 0x2b8))
                       (*(longlong **)&param_1[0x2a].field_0x10,param_1,pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  *(UObject **)&param_1[0x2a].field_0x18 = pUVar2;
  *(UObject **)&param_1[0x31].field_0x10 = pUVar2;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)param_1);
  return;
}

