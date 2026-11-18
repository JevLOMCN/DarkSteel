// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 110

// StaticClass @ 14dc27a40

UClass * __cdecl UChaosClothComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothComponent",
               &Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton,
               StaticRegisterNativesUChaosClothComponent,0xab0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothComponent>,
               InternalVTableHelperCtorCaller<UChaosClothComponent>,local_res8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton;
}

// UChaosClothComponent @ 14dc35500

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UChaosClothComponent * __thiscall
UChaosClothComponent::UChaosClothComponent(UChaosClothComponent *this,FVTableHelper *param_1)

{
  USkinnedMeshComponent::USkinnedMeshComponent((USkinnedMeshComponent *)this,param_1);
  IDataflowPhysicsSolverInterface::IDataflowPhysicsSolverInterface
            ((IDataflowPhysicsSolverInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowPhysicsSolverInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Chaos__ClothAsset__IClothComponentAdapter__;
  (this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr = (UDataflow *)0x0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x30 = 0xffffffff;
  (this->SimulationAsset).SimulationGroups.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  (this->LeaderClothComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->bTeleportOnce = false;
  this->bResetOnce = false;
  this->bHasValidRenderDataForVisibility = false;
  this->bResetRestLengthsFromMorphTarget = false;
  (this->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayNum = 0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayMax = 0;
  (this->ClothSimulationProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothSimulationProperties).ArrayNum = 0;
  (this->ClothSimulationProperties).ArrayMax = 0;
  (this->ClothSimulationProxy).Object = (FClothSimulationProxy *)0x0;
  (this->ClothSimulationProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnBoneTransformsFinalizedMC = 0;
  *(undefined8 *)&(this->OnBoneTransformsFinalizedMC).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoneTransformsFinalizedMC).field_0x10 = 0;
  (this->CollisionSources).Ptr = (FCollisionSources *)0x0;
  this->BlendWeight = 1.0;
  this->ClothGeometryScale = 1.0;
  *(undefined8 *)&(this->OnBoneTransformsFinalizedMC).field_0x18 = 2;
  return this;
}

// UChaosClothComponent @ 14dc35680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UChaosClothComponent * __thiscall
UChaosClothComponent::UChaosClothComponent(UChaosClothComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  double dVar3;
  FCollisionSources *this_00;
  TMatrix<double> *pTVar4;
  FCollisionSources *pFVar5;
  undefined1 auStack_d8 [32];
  UChaosClothComponent *local_b8 [2];
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  USkinnedMeshComponent::USkinnedMeshComponent((USkinnedMeshComponent *)this,param_1);
  IDataflowPhysicsSolverInterface::IDataflowPhysicsSolverInterface
            ((IDataflowPhysicsSolverInterface *)&this->_padding_);
  pFVar5 = (FCollisionSources *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr = (UDataflow *)0x0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowPhysicsSolverInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Chaos__ClothAsset__IClothComponentAdapter__;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x34 = 0;
  (this->SimulationAsset).SimulationGroups.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  this->BlendWeight = 1.0;
  this->ClothGeometryScale = 1.0;
  this->TeleportDistanceThreshold = 300.0;
  this->TeleportRotationThreshold = 0.0;
  puVar1 = &this->field_0x9b0;
  this->bUseAttachedParentAsPoseComponent = '\x01';
  this->bCollideWithEnvironment = '\0';
  this->bReset = '\x01';
  this->bTeleport = '\0';
  this->bBindToLeaderComponent = '\0';
  this->bSuspendSimulation = '\0';
  this->bEnableSimulation = '\x01';
  this->bWaitForParallelTask = '\0';
  (this->LeaderClothComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->ClothTeleportDistThresholdSquared = 90000.0;
  this->ClothTeleportCosineThresholdInRad = 1.0;
  this->ClothTeleportMode = None;
  this->bTeleportOnce = false;
  this->bResetOnce = false;
  this->bHasValidRenderDataForVisibility = false;
  this->bResetRestLengthsFromMorphTarget = false;
  (this->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayNum = 0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayMax = 0;
  (this->ClothSimulationProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothSimulationProperties).ArrayNum = 0;
  (this->ClothSimulationProperties).ArrayMax = 0;
  (this->ClothSimulationProxy).Object = (FClothSimulationProxy *)0x0;
  (this->ClothSimulationProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnBoneTransformsFinalizedMC = 0;
  *(undefined8 *)&(this->OnBoneTransformsFinalizedMC).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoneTransformsFinalizedMC).field_0x10 = 0;
  *(undefined8 *)&(this->OnBoneTransformsFinalizedMC).field_0x18 = 2;
  this_00 = ::operator_new(0x60);
  if (this_00 != (FCollisionSources *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (this_00->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
    local_b8[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)local_b8);
    (this_00->CollisionSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->CollisionSources).ArrayNum = 0;
    (this_00->CollisionSources).ArrayMax = 0;
    (this_00->ExternalCollisions).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ExternalCollisions).Spheres.ArrayNum = 0;
    (this_00->ExternalCollisions).Spheres.ArrayMax = 0;
    (this_00->ExternalCollisions).SphereConnections.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this_00->ExternalCollisions).SphereConnections.ArrayNum = 0;
    (this_00->ExternalCollisions).SphereConnections.ArrayMax = 0;
    (this_00->ExternalCollisions).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ExternalCollisions).Convexes.ArrayNum = 0;
    (this_00->ExternalCollisions).Convexes.ArrayMax = 0;
    (this_00->ExternalCollisions).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ExternalCollisions).Boxes.ArrayNum = 0;
    (this_00->ExternalCollisions).Boxes.ArrayMax = 0;
    this_00->Version = -1;
    this_00->bCollideWithEnvironment = this->bCollideWithEnvironment;
    pFVar5 = this_00;
  }
  (this->CollisionSources).Ptr = pFVar5;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  pTVar4 = USkinnedMeshComponent::GetBoneMatrix((USkinnedMeshComponent *)this,&local_a8,0);
  dVar3 = pTVar4->M[0][1];
  (this->PrevRootBoneMatrix).M[0][0] = pTVar4->M[0][0];
  (this->PrevRootBoneMatrix).M[0][1] = dVar3;
  dVar3 = pTVar4->M[0][3];
  (this->PrevRootBoneMatrix).M[0][2] = pTVar4->M[0][2];
  (this->PrevRootBoneMatrix).M[0][3] = dVar3;
  dVar3 = pTVar4->M[1][1];
  (this->PrevRootBoneMatrix).M[1][0] = pTVar4->M[1][0];
  (this->PrevRootBoneMatrix).M[1][1] = dVar3;
  dVar3 = pTVar4->M[1][3];
  (this->PrevRootBoneMatrix).M[1][2] = pTVar4->M[1][2];
  (this->PrevRootBoneMatrix).M[1][3] = dVar3;
  dVar3 = pTVar4->M[2][1];
  (this->PrevRootBoneMatrix).M[2][0] = pTVar4->M[2][0];
  (this->PrevRootBoneMatrix).M[2][1] = dVar3;
  dVar3 = pTVar4->M[2][3];
  (this->PrevRootBoneMatrix).M[2][2] = pTVar4->M[2][2];
  (this->PrevRootBoneMatrix).M[2][3] = dVar3;
  dVar3 = pTVar4->M[3][1];
  (this->PrevRootBoneMatrix).M[3][0] = pTVar4->M[3][0];
  (this->PrevRootBoneMatrix).M[3][1] = dVar3;
  dVar3 = pTVar4->M[3][3];
  (this->PrevRootBoneMatrix).M[3][2] = pTVar4->M[3][2];
  (this->PrevRootBoneMatrix).M[3][3] = dVar3;
  return this;
}

// ~UChaosClothComponent @ 14dc36600

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::~UChaosClothComponent(UChaosClothComponent *this)

{
  FCollisionSources *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowPhysicsSolverInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Chaos__ClothAsset__IClothComponentAdapter__;
  pFVar1 = (this->CollisionSources).Ptr;
  if (pFVar1 != (FCollisionSources *)0x0) {
    pFVar2 = (pFVar1->ExternalCollisions).Boxes.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)
               (pFVar1->ExternalCollisions).Convexes.AllocatorInstance.Data,
               (pFVar1->ExternalCollisions).Convexes.ArrayNum);
    pFVar2 = (pFVar1->ExternalCollisions).Convexes.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->ExternalCollisions).SphereConnections.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->ExternalCollisions).Spheres.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
              ((FCollisionSource *)(pFVar1->CollisionSources).AllocatorInstance.Data,
               (pFVar1->CollisionSources).ArrayNum);
    pFVar2 = (pFVar1->CollisionSources).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x60);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBoneTransformsFinalizedMC).field_0x8,
             *(int *)&(this->OnBoneTransformsFinalizedMC).field_0x10);
  pvVar3 = *(void **)&(this->OnBoneTransformsFinalizedMC).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBoneTransformsFinalizedMC);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothSimulationProxy).SharedReferenceCount.ReferenceController);
  DestructItems<FChaosClothSimulationProperties,int>
            ((FChaosClothSimulationProperties *)
             (this->ClothSimulationProperties).AllocatorInstance.Data,
             (this->ClothSimulationProperties).ArrayNum);
  pFVar2 = (this->ClothSimulationProperties).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  FVar4 = (this->SimulationAsset).SimulationGroups.Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SimulationAsset).SimulationGroups.Elements);
  this->_padding_ = (longlong)&___7IDataflowSimulationInterface__6B_;
  USkinnedMeshComponent::~USkinnedMeshComponent((USkinnedMeshComponent *)this);
  return;
}

// AddCollisionSource @ 14dc38570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UChaosClothComponent::AddCollisionSource
          (UChaosClothComponent *this,USkinnedMeshComponent *param_1,UPhysicsAsset *param_2,
          bool param_3)

{
  UE::Chaos::ClothAsset::FCollisionSources::Add
            ((this->CollisionSources).Ptr,param_1,param_2,param_3);
  return;
}

// BuildSimulationProxy @ 14dc3b3c0

void __thiscall UChaosClothComponent::BuildSimulationProxy(UChaosClothComponent *this)

{
  RecreateClothSimulationProxy((UChaosClothComponent *)&this[-1]._padding_);
  return;
}

// CalcBounds @ 14dc3b3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UChaosClothComponent::CalcBounds
          (UChaosClothComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  int *piVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  FName FVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_protected:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UChaosClothComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_2_::FStat_STAT_CalcClothComponentBounds>
  FVar22;
  USkinnedMeshComponent *this_00;
  UClass *pUVar23;
  USkinnedAsset *pUVar24;
  TTransform<double> *pTVar25;
  TBoxSphereBounds<double,double> *pTVar26;
  TMatrix<double> *pTVar27;
  FClothSimulationProxy *this_01;
  UObject *pUVar28;
  double *pdVar29;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  IConsoleManager *pIVar30;
  uint uVar31;
  FNameEntryId FVar32;
  bool bVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar47;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  undefined1 auVar60 [16];
  undefined1 auStackY_b28 [32];
  FName local_ac8;
  FColor_u_0 local_ab8 [2];
  LARGE_INTEGER local_ab0;
  FName local_aa8;
  TVector<float>_u_0 local_aa0;
  FStatMessage local_a90;
  TVector<double>_u_0 local_a80;
  double dStack_a68;
  double local_a60;
  double dStack_a58;
  double local_a50;
  FName local_a48;
  FName local_a40;
  double local_a38;
  double dStack_a30;
  double local_a28;
  double local_a10;
  TVector<double>_u_0 local_a08;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined1 local_9b8 [16];
  undefined1 local_980 [16];
  undefined1 local_948 [16];
  TVector<double>_u_0 local_928;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  undefined1 local_8f0 [16];
  double local_8e0;
  double dStack_8d8;
  undefined8 local_8d0;
  double dStack_8c8;
  double local_8c0;
  undefined1 local_8b8 [16];
  double local_8a8;
  double dStack_8a0;
  undefined8 local_898;
  double dStack_890;
  double local_888;
  TVector<double>_u_0 local_880;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  TMatrix<double> local_848;
  TMatrix<double> local_7c8;
  TMatrix<double> local_748;
  TBoxSphereBounds<double,double> local_6c8;
  TBoxSphereBounds<double,double> local_690;
  TBoxSphereBounds<double,double> local_658;
  TBoxSphereBounds<double,double> local_620;
  TBoxSphereBounds<double,double> local_5e8;
  TBoxSphereBounds<double,double> local_5b0;
  TBoxSphereBounds<double,double> local_578;
  TBoxSphereBounds<double,double> local_540;
  TBoxSphereBounds<double,double> local_508;
  TMatrix<double> local_4c8;
  TMatrix<double> local_448;
  TMatrix<double> local_3c8;
  TTransform<double> local_348;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_CalcClothComponentBounds ==
          (FThreadSafeStaticStat<_protected:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UChaosClothComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_2_::FStat_STAT_CalcClothComponentBounds>
           )0x0) {
        pFVar21 = ::FName::FName(&local_a48,"STAT_CalcClothComponentBounds");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcClothComponentBounds,*pFVar21,
                   L"STAT_CalcClothComponentBounds","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar22 = StatPtr_STAT_CalcClothComponentBounds;
  if (StatPtr_STAT_CalcClothComponentBounds ==
      (FThreadSafeStaticStat<_protected:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UChaosClothComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_2_::FStat_STAT_CalcClothComponentBounds>
       )0x0) {
    pFVar21 = ::FName::FName(&local_a40,"STAT_CalcClothComponentBounds");
    FVar22 = (FThreadSafeStaticStat<_protected:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UChaosClothComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_2_::FStat_STAT_CalcClothComponentBounds>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcClothComponentBounds,
                          *pFVar21,L"STAT_CalcClothComponentBounds","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_ac8.ComparisonIndex.Value = 0;
  local_ac8.Number = 0;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  FVar8 = *(FName *)FVar22;
  FVar32 = FVar8.ComparisonIndex.Value;
  uVar31 = FVar8.Number;
  if ((FVar32.Value != 0) || (uVar31 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_ab8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_ab8[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_aa8.ComparisonIndex.Value = FVar32.Value;
        local_aa8.Number = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_aa8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                   ,0x176);
        bVar16 = true;
        bVar15 = true;
      }
    }
    bVar17 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_ab0.s.LowPart = FVar32.Value;
      local_ab0.s.HighPart = uVar31;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      bVar17 = true;
      local_ac8 = FVar8;
    }
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  if ((this->_padding_ & 0xc0000) != 0) {
    if ((this->_padding_ & 0x40000) == 0) {
      pTVar27 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_168);
      VectorMatrixMultiply(&local_2e8,(TMatrix<double> *)&this->_padding_,pTVar27);
      uVar3 = this->_padding_;
      uVar5 = this->_padding_;
      uVar4 = this->_padding_;
      uVar6 = this->_padding_;
      dVar2 = (double)this->_padding_;
      dVar49 = (double)this->_padding_;
      auVar59._8_4_ = (int)uVar3;
      auVar59._0_8_ = uVar3;
      auVar59._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
      auVar43._8_4_ = (int)uVar4;
      auVar43._0_8_ = uVar4;
      auVar43._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
      dVar48 = auVar43._8_8_ * local_2e8.M[0][1];
      auVar44._0_8_ =
           (double)CONCAT44((uint)((ulonglong)((double)uVar4 * local_2e8.M[0][0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84((double)uVar4 * local_2e8.M[0][0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar44._8_4_ = SUB84(dVar48,0) & _UNK_15061cc88;
      auVar44._12_4_ = (uint)((ulonglong)dVar48 >> 0x20) & _UNK_15061cc8c;
      local_2e8.M[3][1] =
           (double)uVar5 * local_2e8.M[1][1] + auVar59._8_8_ * local_2e8.M[0][1] +
           dVar2 * local_2e8.M[2][1] + local_2e8.M[3][1];
      dStack_8a0 = (double)CONCAT44((uint)((ulonglong)((double)uVar6 * local_2e8.M[1][0]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84((double)uVar6 * local_2e8.M[1][0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar44._0_8_ +
                   (double)CONCAT44((uint)((ulonglong)(dVar49 * local_2e8.M[2][0]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar49 * local_2e8.M[2][0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      local_898 = (double)CONCAT44((uint)((ulonglong)((double)uVar6 * local_2e8.M[1][1]) >> 0x20) &
                                   _UNK_15061cc8c,
                                   SUB84((double)uVar6 * local_2e8.M[1][1],0) & _UNK_15061cc88) +
                  auVar44._8_8_ +
                  (double)CONCAT44((uint)((ulonglong)(dVar49 * local_2e8.M[2][1]) >> 0x20) &
                                   _UNK_15061cc8c,
                                   SUB84(dVar49 * local_2e8.M[2][1],0) & _UNK_15061cc88);
      local_948._8_4_ = SUB84(local_898,0);
      local_948._0_8_ = dStack_8a0;
      local_948._12_4_ = (int)((ulonglong)local_898 >> 0x20);
      auVar58._0_8_ =
           local_2e8.M[1][0] * local_2e8.M[1][0] + local_2e8.M[0][0] * local_2e8.M[0][0] +
           local_2e8.M[2][0] * local_2e8.M[2][0];
      auVar58._8_8_ =
           local_2e8.M[1][1] * local_2e8.M[1][1] + local_2e8.M[0][1] * local_2e8.M[0][1] +
           local_2e8.M[2][1] * local_2e8.M[2][1];
      dVar48 = local_2e8.M[1][2] * local_2e8.M[1][2] + local_2e8.M[0][2] * local_2e8.M[0][2] +
               local_2e8.M[2][2] * local_2e8.M[2][2];
      auVar45._8_4_ = SUB84(auVar58._8_8_,0);
      auVar45._0_8_ = auVar58._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
      auVar46._8_8_ = auVar58._8_8_;
      auVar46._0_8_ = auVar45._8_8_;
      auVar59 = maxpd(auVar58,auVar46);
      dStack_890 = (double)CONCAT44((uint)((ulonglong)((double)uVar6 * local_2e8.M[1][2]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84((double)uVar6 * local_2e8.M[1][2],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)((double)uVar4 * local_2e8.M[0][2]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84((double)uVar4 * local_2e8.M[0][2],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(dVar49 * local_2e8.M[2][2]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar49 * local_2e8.M[2][2],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar57._8_4_ = SUB84(dVar48,0);
      auVar57._0_8_ = dVar48;
      auVar57._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar57 = maxpd(auVar59,auVar57);
      pdVar29 = (double *)local_8b8;
      local_888 = SQRT(dStack_890 * dStack_890 + dStack_8a0 * dStack_8a0 + local_898 * local_898);
      dVar49 = SQRT(auVar57._0_8_) * (double)this->_padding_;
      local_8b8._8_4_ = SUB84(local_2e8.M[3][1],0);
      local_8b8._0_8_ =
           (double)uVar5 * local_2e8.M[1][0] + (double)uVar3 * local_2e8.M[0][0] +
           dVar2 * local_2e8.M[2][0] + local_2e8.M[3][0];
      local_8b8._12_4_ = (int)((ulonglong)local_2e8.M[3][1] >> 0x20);
      if (dVar49 <= local_888) {
        local_888 = dVar49;
      }
      local_8a8 = (double)uVar5 * local_2e8.M[1][2] + (double)uVar3 * local_2e8.M[0][2] +
                  dVar2 * local_2e8.M[2][2] + local_2e8.M[3][2];
    }
    else {
      UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_748);
      dVar48 = (double)this->_padding_;
      dVar47 = (double)this->_padding_;
      dVar12 = (double)this->_padding_;
      dVar14 = (double)this->_padding_;
      dVar2 = (double)this->_padding_;
      dVar49 = (double)this->_padding_;
      local_748.M[3][1] =
           local_748.M[1][1] * dVar47 + local_748.M[0][1] * dVar48 + local_748.M[2][1] * dVar2 +
           local_748.M[3][1];
      auVar40._0_8_ =
           (double)CONCAT44((uint)((ulonglong)(local_748.M[0][0] * dVar12) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_748.M[0][0] * dVar12,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar40._8_4_ = SUB84(local_748.M[0][1] * dVar12,0) & _UNK_15061cc88;
      auVar40._12_4_ = (uint)((ulonglong)(local_748.M[0][1] * dVar12) >> 0x20) & _UNK_15061cc8c;
      dStack_8d8 = (double)CONCAT44((uint)((ulonglong)(local_748.M[1][0] * dVar14) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_748.M[1][0] * dVar14,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar40._0_8_ +
                   (double)CONCAT44((uint)((ulonglong)(local_748.M[2][0] * dVar49) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_748.M[2][0] * dVar49,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      local_8d0 = (double)CONCAT44((uint)((ulonglong)(local_748.M[1][1] * dVar14) >> 0x20) &
                                   _UNK_15061cc8c,
                                   SUB84(local_748.M[1][1] * dVar14,0) & _UNK_15061cc88) +
                  auVar40._8_8_ +
                  (double)CONCAT44((uint)((ulonglong)(local_748.M[2][1] * dVar49) >> 0x20) &
                                   _UNK_15061cc8c,
                                   SUB84(local_748.M[2][1] * dVar49,0) & _UNK_15061cc88);
      dStack_8c8 = (double)CONCAT44((uint)((ulonglong)(local_748.M[1][2] * dVar14) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_748.M[1][2] * dVar14,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(local_748.M[0][2] * dVar12) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_748.M[0][2] * dVar12,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(local_748.M[2][2] * dVar49) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_748.M[2][2] * dVar49,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar60._0_8_ =
           local_748.M[1][0] * local_748.M[1][0] + local_748.M[0][0] * local_748.M[0][0] +
           local_748.M[2][0] * local_748.M[2][0];
      auVar60._8_8_ =
           local_748.M[1][1] * local_748.M[1][1] + local_748.M[0][1] * local_748.M[0][1] +
           local_748.M[2][1] * local_748.M[2][1];
      auVar41._8_4_ = SUB84(auVar60._8_8_,0);
      auVar41._0_8_ = auVar60._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar42._8_8_ = auVar60._8_8_;
      auVar42._0_8_ = auVar41._8_8_;
      auVar57 = maxpd(auVar60,auVar42);
      dVar49 = local_748.M[1][2] * local_748.M[1][2] + local_748.M[0][2] * local_748.M[0][2] +
               local_748.M[2][2] * local_748.M[2][2];
      local_980._8_4_ = SUB84(local_8d0,0);
      local_980._0_8_ = dStack_8d8;
      local_980._12_4_ = (int)((ulonglong)local_8d0 >> 0x20);
      auVar11._8_4_ = SUB84(dVar49,0);
      auVar11._0_8_ = dVar49;
      auVar11._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      auVar57 = maxpd(auVar57,auVar11);
      pdVar29 = (double *)local_8f0;
      local_8c0 = SQRT(dStack_8c8 * dStack_8c8 + dStack_8d8 * dStack_8d8 + local_8d0 * local_8d0);
      local_8f0._8_4_ = SUB84(local_748.M[3][1],0);
      local_8f0._0_8_ =
           local_748.M[1][0] * dVar47 + local_748.M[0][0] * dVar48 + local_748.M[2][0] * dVar2 +
           local_748.M[3][0];
      local_8f0._12_4_ = (int)((ulonglong)local_748.M[3][1] >> 0x20);
      dVar49 = SQRT(auVar57._0_8_) * (double)this->_padding_;
      if (dVar49 <= local_8c0) {
        local_8c0 = dVar49;
      }
      local_8e0 = local_748.M[1][2] * dVar47 + local_748.M[0][2] * dVar48 +
                  local_748.M[2][2] * dVar2 + local_748.M[3][2];
    }
    dVar2 = pdVar29[1];
    dVar49 = pdVar29[2];
    dVar48 = pdVar29[3];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *pdVar29;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
    dVar47 = pdVar29[4];
    dVar12 = pdVar29[5];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar49;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar48;
    dVar2 = pdVar29[6];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar47;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar12;
    __return_storage_ptr__->SphereRadius = dVar2;
    if ((this->_padding_ & 0x2000000000000000) != 0) {
      local_a10 = (double)this->_padding_;
      local_880._s_0.X = (double)this->_padding_;
      local_880._s_0.Y = (double)this->_padding_;
      local_868 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_860 = _UNK_150689688;
      local_858 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_850 = _UNK_150689688;
      local_880._s_0.Z = local_a10;
      pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                          (__return_storage_ptr__,&local_5b0,
                           (TBoxSphereBounds<double,double> *)&local_880._s_0);
      dVar2 = (pTVar26->Origin).field0_0x0._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar26->Origin).field0_0x0._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pTVar26->Origin).field0_0x0._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
      dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (pTVar26->BoxExtent).field0_0x0._s_0.Y
      ;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
      __return_storage_ptr__->SphereRadius = pTVar26->SphereRadius;
    }
    goto LAB_14dc3c233;
  }
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0;
  uVar54 = 0;
  uVar55 = 0;
  this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (this_00 != (USkinnedMeshComponent *)0x0) {
    pUVar23 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar20 = (int)pUVar23->_padding_;
    if ((iVar20 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
        &pUVar23->_padding_)) {
      pUVar24 = USkinnedMeshComponent::GetSkinnedAsset(this_00);
      if ((pUVar24 != (USkinnedAsset *)0x0) && (this_00->bComponentUseFixedSkelBounds != '\0')) {
        local_a10 = (double)this_00[1]._padding_;
        uVar50 = (undefined4)this_00[1]._padding_;
        uVar51 = *(undefined4 *)((longlong)&this_00[1]._padding_ + 4);
        uVar52 = (undefined4)this_00[1]._padding_;
        uVar53 = *(undefined4 *)((longlong)&this_00[1]._padding_ + 4);
        uVar54 = SUB84(local_a10,0);
        uVar55 = (undefined4)((ulonglong)local_a10 >> 0x20);
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar30 = IConsoleManager::Get();
      CVarCacheLocalSpaceBounds =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar30 + 0xc0))(pIVar30,L"a.CacheLocalSpaceBounds",1);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (CVarCacheLocalSpaceBounds == (IConsoleVariable *)0x0) {
    bVar33 = true;
  }
  else {
    iVar20 = (**(code **)(*(longlong *)CVarCacheLocalSpaceBounds + 200))();
    bVar33 = iVar20 != 0;
  }
  pTVar25 = param_1;
  if (bVar33 != false) {
    pTVar25 = &UE::Math::TTransform<double>::Identity;
  }
  local_348.Rotation.XY.m128d_f64[0] = (pTVar25->Rotation).XY.m128d_f64[0];
  local_348.Rotation.XY.m128d_f64[1] = (pTVar25->Rotation).XY.m128d_f64[1];
  local_348.Rotation.ZW.m128d_f64[0] = (pTVar25->Rotation).ZW.m128d_f64[0];
  local_348.Rotation.ZW.m128d_f64[1] = (pTVar25->Rotation).ZW.m128d_f64[1];
  local_348.Translation.XY.m128d_f64[0] = (pTVar25->Translation).XY.m128d_f64[0];
  local_348.Translation.XY.m128d_f64[1] = (pTVar25->Translation).XY.m128d_f64[1];
  local_348.Scale3D.XY.m128d_f64[0] = (pTVar25->Scale3D).XY.m128d_f64[0];
  local_348.Scale3D.XY.m128d_f64[1] = (pTVar25->Scale3D).XY.m128d_f64[1];
  local_aa0._s_0.X = (float)(double)CONCAT44(uVar51,uVar50);
  local_348.Translation.ZW.m128d_f64[0] = (pTVar25->Translation).ZW.m128d_f64[0];
  local_348.Translation.ZW.m128d_f64[1] = (pTVar25->Translation).ZW.m128d_f64[1];
  local_348.Scale3D.ZW.m128d_f64[0] = (pTVar25->Scale3D).ZW.m128d_f64[0];
  local_348.Scale3D.ZW.m128d_f64[1] = (pTVar25->Scale3D).ZW.m128d_f64[1];
  local_aa0._s_0.Z = (float)(double)CONCAT44(uVar55,uVar54);
  local_aa0._s_0.Y = (float)(double)CONCAT44(uVar53,uVar52);
  pTVar26 = USkinnedMeshComponent::CalcMeshBound
                      ((USkinnedMeshComponent *)this,&local_578,(TVector<float> *)&local_aa0._s_0,
                       false,&local_348);
  dVar2 = (pTVar26->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar26->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pTVar26->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
  dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (pTVar26->BoxExtent).field0_0x0._s_0.Y;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
  __return_storage_ptr__->SphereRadius = pTVar26->SphereRadius;
  if ((this->_padding_ & 0x2000000000000000) != 0) {
    local_a28 = (double)this->_padding_;
    local_a38 = (double)this->_padding_;
    dStack_a30 = (double)this->_padding_;
    local_9f0 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_9e8 = _UNK_150689688;
    local_9e0 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_9d8 = _UNK_150689688;
    local_a08._s_0.X = local_a38;
    local_a08._s_0.Y = dStack_a30;
    local_a08._s_0.Z = local_a28;
    if (bVar33 == false) {
      pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                          (__return_storage_ptr__,&local_690,
                           (TBoxSphereBounds<double,double> *)&local_a08._s_0);
    }
    else {
      UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_4c8);
      UE::Math::TBoxSphereBounds<double,double>::TransformBy
                (__return_storage_ptr__,(TBoxSphereBounds<double,double> *)&local_928._s_0,
                 &local_4c8);
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_928._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_928._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_928._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_910;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_908;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_900;
      __return_storage_ptr__->SphereRadius = local_8f8;
      pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                          (__return_storage_ptr__,&local_540,
                           (TBoxSphereBounds<double,double> *)&local_a08._s_0);
      dVar2 = (pTVar26->Origin).field0_0x0._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar26->Origin).field0_0x0._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pTVar26->Origin).field0_0x0._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
      dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (pTVar26->BoxExtent).field0_0x0._s_0.Y
      ;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
      __return_storage_ptr__->SphereRadius = pTVar26->SphereRadius;
      pTVar27 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_268);
      UE::Math::TMatrix<double>::Inverse(pTVar27,&local_448);
      pTVar26 = UE::Math::TBoxSphereBounds<double,double>::TransformBy
                          (__return_storage_ptr__,&local_508,&local_448);
    }
    dVar2 = (pTVar26->Origin).field0_0x0._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar26->Origin).field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
    dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pTVar26->Origin).field0_0x0._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
    dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (pTVar26->BoxExtent).field0_0x0._s_0.Y;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
    __return_storage_ptr__->SphereRadius = pTVar26->SphereRadius;
  }
  local_a50 = 0.0;
  local_a80._s_0.X = 0.0;
  local_a80._s_0.Y = 0.0;
  local_a80._s_0.Z = 0.0;
  dStack_a68 = 0.0;
  local_a60 = 0.0;
  dStack_a58 = 0.0;
  cVar18 = (**(code **)(this->_padding_ + 0x30))();
  if (cVar18 == '\0') {
    if (this->bBindToLeaderComponent != '\0') {
      pUVar28 = FWeakObjectPtr::Get(&(this->LeaderClothComponent).WeakPtr);
      if (pUVar28 != (UObject *)0x0) {
        cVar18 = (**(code **)(*(longlong *)&pUVar28[0x3b].field_0x10 + 0x30))();
        if (cVar18 != '\0') {
          this_01 = *(FClothSimulationProxy **)(pUVar28 + 0x43);
          if (this_01 == (FClothSimulationProxy *)0x0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("LeaderProxy",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                                ,0x1b9,L"");
            if (bVar19) {
              pcVar9 = (code *)swi(3);
              pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar9)();
              return pTVar26;
            }
          }
          pTVar26 = &local_620;
          goto LAB_14dc3b93d;
        }
      }
    }
  }
  else {
    this_01 = TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1>::operator->
                        (&this->ClothSimulationProxy);
    pTVar26 = &local_658;
LAB_14dc3b93d:
    pTVar26 = UE::Chaos::ClothAsset::FClothSimulationProxy::CalculateBounds_AnyThread
                        (this_01,pTVar26);
    dVar2 = pTVar26->SphereRadius;
    dVar49 = (pTVar26->BoxExtent).field0_0x0._s_0.Y;
    dVar48 = (pTVar26->BoxExtent).field0_0x0._s_0.Z;
    dVar47 = (pTVar26->Origin).field0_0x0._s_0.Z;
    dVar12 = (pTVar26->BoxExtent).field0_0x0._s_0.X;
    local_a80._s_0.X = (pTVar26->Origin).field0_0x0._s_0.X;
    dVar14 = (pTVar26->Origin).field0_0x0._s_0.Y;
    local_a80._s_0.Y = dVar14;
    local_a80._s_0.Z = dVar47;
    dStack_a68 = dVar12;
    local_a60 = dVar49;
    dStack_a58 = dVar48;
    local_a50 = dVar2;
    if (__real_3e45798ee0000000 < dVar2) {
      iVar20 = _finite(local_a80._s_0.X);
      if (iVar20 != 0) {
        iVar20 = _finite(dVar14);
        if (iVar20 != 0) {
          iVar20 = _finite(dVar47);
          if (iVar20 != 0) {
            iVar20 = _finite(dVar12);
            if (iVar20 != 0) {
              iVar20 = _finite(dVar49);
              if (iVar20 != 0) {
                iVar20 = _finite(dVar48);
                if (iVar20 != 0) {
                  iVar20 = _finite(dVar2);
                  if (iVar20 != 0) {
                    UE::Math::TTransform<double>::ToMatrixWithScale(&local_348,&local_3c8);
                    UE::Math::TBoxSphereBounds<double,double>::TransformBy
                              ((TBoxSphereBounds<double,double> *)&local_a80._s_0,&local_6c8,
                               &local_3c8);
                    pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                                        (__return_storage_ptr__,&local_5e8,&local_6c8);
                    dVar2 = (pTVar26->Origin).field0_0x0._s_0.Y;
                    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
                         (pTVar26->Origin).field0_0x0._s_0.X;
                    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
                    dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.X;
                    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
                         (pTVar26->Origin).field0_0x0._s_0.Z;
                    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
                    dVar2 = (pTVar26->BoxExtent).field0_0x0._s_0.Z;
                    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y =
                         (pTVar26->BoxExtent).field0_0x0._s_0.Y;
                    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
                    __return_storage_ptr__->SphereRadius = pTVar26->SphereRadius;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  dVar2 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
  bVar7 = *(byte *)((longlong)&this->_padding_ + 2);
  this->_padding_ = (longlong)(__return_storage_ptr__->Origin).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar2;
  dVar2 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar2;
  dVar2 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar2;
  dVar2 = __return_storage_ptr__->SphereRadius;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar7 & 0xf3 | bVar33 << 2 | (bVar33 ^ 1U) << 3;
  this->_padding_ = (longlong)dVar2;
  if (bVar33 == false) {
    pTVar27 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_1e8);
    UE::Math::TMatrix<double>::Inverse(pTVar27,&local_7c8);
    this->_padding_ = (longlong)local_7c8.M[0][0];
    this->_padding_ = (longlong)local_7c8.M[0][1];
    this->_padding_ = (longlong)local_7c8.M[0][2];
    this->_padding_ = (longlong)local_7c8.M[0][3];
    this->_padding_ = (longlong)local_7c8.M[1][0];
    this->_padding_ = (longlong)local_7c8.M[1][1];
    this->_padding_ = (longlong)local_7c8.M[1][2];
    this->_padding_ = (longlong)local_7c8.M[1][3];
    this->_padding_ = (longlong)local_7c8.M[2][0];
    this->_padding_ = (longlong)local_7c8.M[2][1];
    this->_padding_ = (longlong)local_7c8.M[2][2];
    this->_padding_ = (longlong)local_7c8.M[2][3];
    this->_padding_ = (longlong)local_7c8.M[3][0];
    this->_padding_ = (longlong)local_7c8.M[3][1];
    this->_padding_ = (longlong)local_7c8.M[3][2];
    this->_padding_ = (longlong)local_7c8.M[3][3];
  }
  else {
    this->_padding_ = 0;
    this->_padding_ = 0x3ff0000000000000;
    this->_padding_ = 0x3ff0000000000000;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0x3ff0000000000000;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0x3ff0000000000000;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_848);
    auVar57 = *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0;
    auVar59 = *(undefined1 (*) [16])&(__return_storage_ptr__->BoxExtent).field0_0x0;
    dVar34 = auVar59._0_8_;
    dVar2 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
    dVar49 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
    dVar61 = auVar57._8_8_;
    dVar48 = auVar57._0_8_;
    auVar35._8_4_ = auVar57._0_4_;
    auVar35._0_8_ = dVar48;
    auVar35._12_4_ = auVar57._4_4_;
    dVar14 = auVar59._8_8_;
    auVar36._8_4_ = auVar59._0_4_;
    auVar36._0_8_ = dVar34;
    auVar36._12_4_ = auVar59._4_4_;
    dVar47 = auVar36._8_8_ * local_848.M[0][1];
    auVar37._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar34 * local_848.M[0][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar34 * local_848.M[0][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar37._8_4_ = SUB84(dVar47,0) & _UNK_15061cc88;
    auVar37._12_4_ = (uint)((ulonglong)dVar47 >> 0x20) & _UNK_15061cc8c;
    local_848.M[3][1] =
         dVar61 * local_848.M[1][1] + auVar35._8_8_ * local_848.M[0][1] + dVar2 * local_848.M[2][1]
         + local_848.M[3][1];
    dVar47 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_848.M[1][0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar14 * local_848.M[1][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar37._0_8_ +
             (double)CONCAT44((uint)((ulonglong)(dVar49 * local_848.M[2][0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar49 * local_848.M[2][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar12 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_848.M[1][1]) >> 0x20) &
                              _UNK_15061cc8c,SUB84(dVar14 * local_848.M[1][1],0) & _UNK_15061cc88) +
             auVar37._8_8_ +
             (double)CONCAT44((uint)((ulonglong)(dVar49 * local_848.M[2][1]) >> 0x20) &
                              _UNK_15061cc8c,SUB84(dVar49 * local_848.M[2][1],0) & _UNK_15061cc88);
    dVar14 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_848.M[1][2]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar14 * local_848.M[1][2],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(dVar34 * local_848.M[0][2]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar34 * local_848.M[0][2],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(dVar49 * local_848.M[2][2]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar49 * local_848.M[2][2],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_9b8._8_4_ = SUB84(dVar12,0);
    local_9b8._0_8_ = dVar47;
    local_9b8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar56._0_8_ =
         local_848.M[1][0] * local_848.M[1][0] + local_848.M[0][0] * local_848.M[0][0] +
         local_848.M[2][0] * local_848.M[2][0];
    auVar56._8_8_ =
         local_848.M[1][1] * local_848.M[1][1] + local_848.M[0][1] * local_848.M[0][1] +
         local_848.M[2][1] * local_848.M[2][1];
    dVar49 = local_848.M[1][2] * local_848.M[1][2] + local_848.M[0][2] * local_848.M[0][2] +
             local_848.M[2][2] * local_848.M[2][2];
    auVar38._8_4_ = SUB84(auVar56._8_8_,0);
    auVar38._0_8_ = auVar56._0_8_;
    auVar38._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar39._8_8_ = auVar56._8_8_;
    auVar39._0_8_ = auVar38._8_8_;
    auVar57 = maxpd(auVar56,auVar39);
    auVar10._8_4_ = SUB84(dVar49,0);
    auVar10._0_8_ = dVar49;
    auVar10._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    auVar57 = maxpd(auVar57,auVar10);
    dVar49 = SQRT(dVar14 * dVar14 + dVar47 * dVar47 + dVar12 * dVar12);
    dVar34 = SQRT(auVar57._0_8_) * __return_storage_ptr__->SphereRadius;
    auVar13._8_4_ = SUB84(local_848.M[3][1],0);
    auVar13._0_8_ =
         dVar61 * local_848.M[1][0] + dVar48 * local_848.M[0][0] + dVar2 * local_848.M[2][0] +
         local_848.M[3][0];
    auVar13._12_4_ = (int)((ulonglong)local_848.M[3][1] >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar13;
    if (dVar34 <= dVar49) {
      dVar49 = dVar34;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         dVar61 * local_848.M[1][2] + dVar48 * local_848.M[0][2] + dVar2 * local_848.M[2][2] +
         local_848.M[3][2];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar47;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar12;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar14;
    __return_storage_ptr__->SphereRadius = dVar49;
  }
LAB_14dc3c233:
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar17) && (local_ac8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_a90.NameAndInfo.Index = local_ac8.ComparisonIndex.Value;
      local_a90.NameAndInfo.Number = local_ac8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_ab0);
      local_a90.StatData.Pad[4] = '\0';
      local_a90.StatData.Pad[5] = '\0';
      local_a90.StatData.Pad[6] = '\0';
      local_a90.StatData.Pad[7] = '\0';
      local_a90.StatData.Pad[0] = local_ab0.s.LowPart._0_1_;
      local_a90.StatData.Pad[1] = local_ab0.s.LowPart._1_1_;
      local_a90.StatData.Pad[2] = local_ab0.s.LowPart._2_1_;
      local_a90.StatData.Pad[3] = local_ab0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_a90);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// CreateClothSimulationProxy @ 14dc437c0

TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> * __thiscall
UChaosClothComponent::CreateClothSimulationProxy
          (UChaosClothComponent *this,
          TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x198);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FClothSimulationProxy *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFClothSimulationProxy_ClothAsset_Chaos_UE___00_SharedPointerInternals__6B_
    ;
    UE::Chaos::ClothAsset::FClothSimulationProxy::FClothSimulationProxy
              ((FClothSimulationProxy *)(pTVar3 + 1),(IClothComponentAdapter *)&this->_padding_);
    if ((FClothSimulationProxy *)(pTVar3 + 1) == (FClothSimulationProxy *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FClothSimulationProxy *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateClothSimulationProxyImpl @ 14dc43890

void __thiscall UChaosClothComponent::CreateClothSimulationProxyImpl(UChaosClothComponent *this)

{
  char cVar1;
  undefined8 *puVar2;
  IConsoleManager *pIVar3;
  TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar3 = IConsoleManager::Get();
    CVarClothPhysics =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"p.ClothPhysics",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarClothPhysics != (IConsoleVariable *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)CVarClothPhysics + 0xc0))(), cVar1 == '\0')) {
    return;
  }
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0xc60))(this,local_18);
  pTVar4 = &this->ClothSimulationProxy;
  if (pTVar4 != (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)puVar2) {
    pTVar4->Object = (FClothSimulationProxy *)*puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationProxy).SharedReferenceCount,
               (FSharedReferencer<1> *)(puVar2 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (pTVar4->Object == (FClothSimulationProxy *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dc43926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar4->Object->_padding_ + 0x30))();
  return;
}

// FinalizeBoneTransform @ 14dc47c80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::FinalizeBoneTransform(UChaosClothComponent *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_28;
  
  USkinnedMeshComponent::FinalizeBoneTransform((USkinnedMeshComponent *)this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnBoneTransformsFinalizedMC,(FWriteAccessScope *)&local_28);
  puVar1 = &(this->OnBoneTransformsFinalizedMC).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnBoneTransformsFinalizedMC).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnBoneTransformsFinalizedMC).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnBoneTransformsFinalizedMC).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnBoneTransformsFinalizedMC).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnBoneTransformsFinalizedMC,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// GetAdditionalRequiredBonesForLeader @ 14dc49100

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UChaosClothComponent::GetAdditionalRequiredBonesForLeader
          (UChaosClothComponent *this,int param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FSkeletalMeshRenderData *pFVar10;
  USkinnedAsset *pUVar11;
  UClass *pUVar12;
  UPhysicsAsset *pUVar13;
  USkinnedMeshComponent *this_00;
  ushort *puVar14;
  USkinnedAsset *pUVar15;
  USkinnedAsset *pUVar16;
  FIdentityFunctor local_res20 [8];
  undefined1 local_48 [2];
  undefined2 local_46 [3];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_40;
  
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  pFVar10 = USkinnedMeshComponent::GetSkeletalMeshRenderData((USkinnedMeshComponent *)this);
  if (pFVar10 != (FSkeletalMeshRenderData *)0x0) {
    iVar7 = USkinnedMeshComponent::ComputeMinLOD((USkinnedMeshComponent *)this);
    iVar8 = USkinnedMeshComponent::GetNumLODs((USkinnedMeshComponent *)this);
    iVar9 = iVar7;
    if (iVar7 < iVar8 + -1) {
      iVar9 = iVar8 + -1;
    }
    if (param_1 < iVar9) {
      iVar9 = param_1;
    }
    if (iVar7 < iVar9) {
      iVar7 = iVar9;
    }
    if ((-1 < iVar7) && (iVar7 < (pFVar10->LODRenderData).Array.ArrayNum)) {
      uVar3 = *(uint *)(*(longlong *)
                         ((pFVar10->LODRenderData).Array.AllocatorInstance.Data +
                         (longlong)iVar7 * 8) + 0x520);
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if (local_40.ArrayMax < (int)uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar3,&local_40.AllocatorInstance,local_40.ArrayNum,&local_40.ArrayMax);
      }
      if (((pFVar10->LODRenderData).Array.ArrayNum <= iVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)
               ((pFVar10->LODRenderData).Array.AllocatorInstance.Data + (longlong)iVar7 * 8);
      puVar14 = *(ushort **)(lVar4 + 0x518);
      iVar9 = *(int *)(lVar4 + 0x520);
      puVar1 = puVar14 + iVar9;
      while( true ) {
        if (*(int *)(lVar4 + 0x520) != iVar9) {
          local_res20[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (puVar14 == puVar1) break;
        uVar2 = *puVar14;
        if ((int)(uint)uVar2 < (int)this->_padding_) {
          if (((int)this->_padding_ <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = *(int *)(this->_padding_ + (ulonglong)uVar2 * 4);
          if (iVar7 != -1) {
            local_46[0] = (undefined2)iVar7;
            if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)local_46) &&
                ((FScriptContainerElement *)local_46 <
                 local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = local_40.ArrayNum;
            if (local_40.ArrayNum == local_40.ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x202,&local_40.AllocatorInstance,&local_40.ArrayMax);
            }
            local_40.ArrayNum = iVar7 + 1;
            *(undefined2 *)(local_40.AllocatorInstance.Data + (longlong)iVar7 * 2) = local_46[0];
          }
        }
        puVar14 = puVar14 + 1;
      }
      AlgoImpl::
      IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
                ((ushort *)local_40.AllocatorInstance.Data,local_40.ArrayNum,local_res20[0],
                 (TLess<void> *)local_48);
    }
  }
  pUVar16 = (USkinnedAsset *)0x0;
  pUVar11 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar11 != (USkinnedAsset *)0x0) {
    pUVar12 = UChaosClothAssetBase::StaticClass();
    iVar9 = (int)pUVar12->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       (pUVar15 = pUVar16,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
       &pUVar12->_padding_)) {
      do {
        pUVar11 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
        if (pUVar11 == (USkinnedAsset *)0x0) {
LAB_14dc493d3:
          pUVar11 = pUVar16;
        }
        else {
          pUVar12 = UChaosClothAssetBase::StaticClass();
          iVar9 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar12->_padding_)) goto LAB_14dc493d3;
        }
        iVar9 = (**(code **)(*(longlong *)pUVar11 + 0x4c8))(pUVar11);
        if (iVar9 <= (int)pUVar15) break;
        pUVar11 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
        if (pUVar11 == (USkinnedAsset *)0x0) {
LAB_14dc4941d:
          pUVar11 = pUVar16;
        }
        else {
          pUVar12 = UChaosClothAssetBase::StaticClass();
          iVar9 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar12->_padding_)) goto LAB_14dc4941d;
        }
        pUVar13 = (UPhysicsAsset *)(**(code **)(*(longlong *)pUVar11 + 0x4e8))(pUVar11);
        if (pUVar13 != (UPhysicsAsset *)0x0) {
          bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
          if (bVar6) {
            this_00 = (USkinnedMeshComponent *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            pUVar11 = USkinnedMeshComponent::GetSkinnedAsset(this_00);
            if (pUVar11 != (USkinnedAsset *)0x0) {
              USkinnedMeshComponent::GetPhysicsRequiredBones(pUVar11,pUVar13,&local_40);
            }
          }
          else {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_9130485749806792104>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                               ,600,"LeaderPoseComponent.IsValid()");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        pUVar15 = (USkinnedAsset *)(ulonglong)((int)pUVar15 + 1);
      } while( true );
    }
  }
  if (local_40.ArrayNum != 0) {
    USkinnedMeshComponent::MergeInBoneIndexArrays(param_2,&local_40);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// GetAsset @ 14dc4a1d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UChaosClothAssetBase * __thiscall UChaosClothComponent::GetAsset(UChaosClothComponent *this)

{
  int iVar1;
  UChaosClothAssetBase *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UChaosClothAssetBase *)
           USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar2 != (UChaosClothAssetBase *)0x0) {
    pUVar3 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UChaosClothAssetBase *)0x0;
}

// GetAsset_WrapperImpl @ 14dc4a280

void __cdecl UChaosClothComponent::GetAsset_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// GetAssets @ 14dc4a360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UChaosClothAssetBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothComponent::GetAssets
          (UChaosClothComponent *this,
          TArray<UChaosClothAssetBase_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  USkinnedAsset *pUVar4;
  UClass *pUVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType local_28;
  undefined4 local_20;
  int iStack_1c;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pUVar4 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)&this[-1]._padding_);
  if (pUVar4 != (USkinnedAsset *)0x0) {
    pUVar5 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar4 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)&this[-1]._padding_);
      if (pUVar4 == (USkinnedAsset *)0x0) {
LAB_14dc4a3f6:
        pUVar4 = (USkinnedAsset *)0x0;
      }
      else {
        pUVar5 = UChaosClothAssetBase::StaticClass();
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) goto LAB_14dc4a3f6;
      }
      bVar3 = true;
      bVar2 = false;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_28,1,&iStack_1c);
      *(USkinnedAsset **)local_28.Data = pUVar4;
      pFVar6 = &local_28;
      goto LAB_14dc4a45e;
    }
  }
  bVar3 = false;
  bVar2 = true;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  pFVar6 = &local_18;
LAB_14dc4a45e:
  (__return_storage_ptr__->AllocatorInstance).Data = pFVar6->Data;
  pFVar6->Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)&pFVar6[1].Data;
  __return_storage_ptr__->ArrayMax = *(int *)((longlong)&pFVar6[1].Data + 4);
  pFVar6[1].Data = (FScriptContainerElement *)0x0;
  if (bVar2) {
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  if ((bVar3) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// GetClothAsset @ 14dc4a800

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UChaosClothAsset * __thiscall UChaosClothComponent::GetClothAsset(UChaosClothComponent *this)

{
  int iVar1;
  UChaosClothAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UChaosClothAsset *)USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this)
  ;
  if (pUVar2 != (UChaosClothAsset *)0x0) {
    pUVar3 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = UChaosClothAsset::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
  }
  return (UChaosClothAsset *)0x0;
}

// GetClothGeometryScale @ 14dc4aad0

float __thiscall UChaosClothComponent::GetClothGeometryScale(UChaosClothComponent *this)

{
  return *(float *)((longlong)&this->_padding_ + 4);
}

// GetClothOutfitInteractor @ 14dc4aae0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UChaosClothAssetInteractor * __thiscall
UChaosClothComponent::GetClothOutfitInteractor(UChaosClothComponent *this,int param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UChaosClothAssetInteractor *pUVar5;
  USkinnedAsset *pUVar6;
  UClass *pUVar7;
  USkinnedAsset *pUVar8;
  FName *pFVar9;
  USkinnedAsset *pUVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_res20 [8];
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                         ,0x317,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UChaosClothAssetInteractor *)(*pcVar2)();
    return pUVar5;
  }
  pUVar10 = (USkinnedAsset *)0x0;
  if ((param_2 == (FName)0x0) ||
     (pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this),
     pUVar6 == (USkinnedAsset *)0x0)) goto LAB_14dc4ac2e;
  pUVar7 = UChaosClothAssetBase::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar7->_padding_)) goto LAB_14dc4ac2e;
  pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar6 == (USkinnedAsset *)0x0) {
LAB_14dc4abae:
    pUVar6 = pUVar10;
  }
  else {
    pUVar7 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14dc4abae;
  }
  iVar1 = (this->ClothSimulationProperties).ArrayNum;
  iVar4 = (**(code **)(*(longlong *)pUVar6 + 0x4c8))(pUVar6);
  if ((iVar4 == iVar1) && (pUVar6 = pUVar10, 0 < (this->ClothSimulationProperties).ArrayNum)) {
    do {
      pUVar8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
      if (pUVar8 == (USkinnedAsset *)0x0) {
LAB_14dc4ac04:
        pUVar8 = pUVar10;
      }
      else {
        pUVar7 = UChaosClothAssetBase::StaticClass();
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) goto LAB_14dc4ac04;
      }
      uVar12 = (uint)pUVar6;
      pFVar9 = (FName *)(**(code **)(*(longlong *)pUVar8 + 0x4d8))(pUVar8,local_res20,pUVar6);
      if (*pFVar9 == param_2) {
        uVar11 = 0;
        if ((int)uVar12 < (this->ClothSimulationProperties).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UChaosClothAssetInteractor *)(*pcVar2)();
          return pUVar5;
        }
        return *(UChaosClothAssetInteractor **)
                ((this->ClothSimulationProperties).AllocatorInstance.Data +
                (longlong)(int)uVar12 * 0x28);
      }
      pUVar6 = (USkinnedAsset *)(ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < (this->ClothSimulationProperties).ArrayNum);
  }
LAB_14dc4ac2e:
  if ((-1 < param_1) && (param_1 < (this->ClothSimulationProperties).ArrayNum)) {
    if (((this->ClothSimulationProperties).ArrayNum <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UChaosClothAssetInteractor *)(*pcVar2)();
      return pUVar5;
    }
    pUVar10 = *(USkinnedAsset **)
               ((this->ClothSimulationProperties).AllocatorInstance.Data + (longlong)param_1 * 0x28)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (USkinnedAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
  }
  return (UChaosClothAssetInteractor *)pUVar10;
}

// GetClothTeleportMode @ 14dc4b180

EClothingTeleportMode __thiscall
UChaosClothComponent::GetClothTeleportMode(UChaosClothComponent *this)

{
  return (EClothingTeleportMode)this->_padding_;
}

// GetCollisionSources @ 14dc4b280

FCollisionSources * __thiscall UChaosClothComponent::GetCollisionSources(UChaosClothComponent *this)

{
  return (FCollisionSources *)this->_padding_;
}

// GetOwnerComponent @ 14dc4dc40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USkinnedMeshComponent * __thiscall
UChaosClothComponent::GetOwnerComponent(UChaosClothComponent *this)

{
  return (USkinnedMeshComponent *)&this[-1]._padding_;
}

// GetPrivateStaticClass @ 14dc4e650

UClass * __cdecl UChaosClothComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothComponent",
               &Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton,
               StaticRegisterNativesUChaosClothComponent,0xab0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothComponent>,
               InternalVTableHelperCtorCaller<UChaosClothComponent>,local_res8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton;
}

// GetPropertyCollections @ 14dc4e880

TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothComponent::GetPropertyCollections
          (UChaosClothComponent *this,UChaosClothAssetBase *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  iVar3 = (**(code **)(this->_padding_ + 0x18))(this,param_1,param_2);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSimulationGroupId(InAsset, ModelIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothComponent.h"
                       ,0x175,L"Invalid arguments");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
         (this->_padding_ + (longlong)param_2 * 0x28 + 8);
}

// GetReferenceSkeleton @ 14dc4eca0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FReferenceSkeleton * __thiscall
UChaosClothComponent::GetReferenceSkeleton(UChaosClothComponent *this)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  FReferenceSkeleton *pFVar4;
  
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)&this[-1]._padding_);
  if (pUVar2 == (USkinnedAsset *)0x0) {
    return (FReferenceSkeleton *)0x0;
  }
  pUVar3 = UChaosClothAssetBase::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) {
    return (FReferenceSkeleton *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return (FReferenceSkeleton *)0x0;
  }
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)&this[-1]._padding_);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14dc4ed19;
  }
  pUVar2 = (USkinnedAsset *)0x0;
LAB_14dc4ed19:
                    /* WARNING: Could not recover jumptable at 0x00014dc4ed29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar2 + 800))(pUVar2);
  return pFVar4;
}

// GetRestLengthsMorphTargetName @ 14dc4f730

FString * __thiscall UChaosClothComponent::GetRestLengthsMorphTargetName(UChaosClothComponent *this)

{
  return (FString *)&this->_padding_;
}

// GetSimulationAsset @ 14dc4f750

FDataflowSimulationAsset * __thiscall
UChaosClothComponent::GetSimulationAsset(UChaosClothComponent *this)

{
  return (FDataflowSimulationAsset *)&this->_padding_;
}

// GetSimulationAsset @ 14dc4f760

FDataflowSimulationAsset * __thiscall
UChaosClothComponent::GetSimulationAsset(UChaosClothComponent *this)

{
  return (FDataflowSimulationAsset *)&this->_padding_;
}

// GetSimulationGroupId @ 14dc4f840

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UChaosClothComponent::GetSimulationGroupId
          (UChaosClothComponent *this,UChaosClothAssetBase *param_1,int param_2)

{
  int iVar1;
  UChaosClothAssetBase *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UChaosClothAssetBase *pUVar5;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pUVar5 = (UChaosClothAssetBase *)0x0;
  pUVar2 = (UChaosClothAssetBase *)
           USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)&this[-1]._padding_);
  if (pUVar2 == (UChaosClothAssetBase *)0x0) {
LAB_14dc4f897:
    pUVar2 = pUVar5;
  }
  else {
    pUVar3 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_14dc4f897;
  }
  if ((param_1 == pUVar2) && (-1 < param_2)) {
    iVar1 = (**(code **)(param_1->_padding_ + 0x4c8))(param_1);
    if (param_2 < iVar1) {
      pUVar5 = (UChaosClothAssetBase *)&DAT_00000001;
      plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 0x4d0))(param_1,local_18,param_2);
      if (*plVar4 != 0) goto LAB_14dc4f8d7;
    }
  }
  param_2 = -1;
LAB_14dc4f8d7:
  if (pUVar5 != (UChaosClothAssetBase *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return param_2;
}

// GetSimulationName @ 14dc4f910

FString * __thiscall
UChaosClothComponent::GetSimulationName(UChaosClothComponent *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this[-1]._padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSimulationProxy @ 14dc4f940

FDataflowSimulationProxy * __thiscall
UChaosClothComponent::GetSimulationProxy(UChaosClothComponent *this)

{
  return (FDataflowSimulationProxy *)this->_padding_;
}

// GetSimulationProxy @ 14dc4f950

FDataflowSimulationProxy * __thiscall
UChaosClothComponent::GetSimulationProxy(UChaosClothComponent *this)

{
  return (FDataflowSimulationProxy *)this->_padding_;
}

// GetSolverPropertyCollections @ 14dc4faa0

TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothComponent::GetSolverPropertyCollections(UChaosClothComponent *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((int)this->_padding_ < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
         (this->_padding_ + 8);
}

// GetTeleportDistanceThreshold @ 14dc4fdb0

float __thiscall UChaosClothComponent::GetTeleportDistanceThreshold(UChaosClothComponent *this)

{
  return this->TeleportDistanceThreshold;
}

// GetTeleportRotationThreshold @ 14dc4fdc0

float __thiscall UChaosClothComponent::GetTeleportRotationThreshold(UChaosClothComponent *this)

{
  return this->TeleportRotationThreshold;
}

// GetUpdateClothSimulationData_AnyThread @ 14dc50270

void __thiscall
UChaosClothComponent::GetUpdateClothSimulationData_AnyThread
          (UChaosClothComponent *this,
          TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
          *param_1,TMatrix<double> *param_2,float *param_3)

{
  double dVar1;
  char cVar2;
  TMatrix<double> *pTVar3;
  UObject *pUVar4;
  FClothSimulationProxy *this_00;
  TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
  *pTVar5;
  TMatrix<double> local_88;
  
  pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale
                     ((TTransform<double> *)&this[-1]._padding_,&local_88);
  dVar1 = pTVar3->M[0][1];
  param_2->M[0][0] = pTVar3->M[0][0];
  param_2->M[0][1] = dVar1;
  dVar1 = pTVar3->M[0][3];
  param_2->M[0][2] = pTVar3->M[0][2];
  param_2->M[0][3] = dVar1;
  dVar1 = pTVar3->M[1][1];
  param_2->M[1][0] = pTVar3->M[1][0];
  param_2->M[1][1] = dVar1;
  dVar1 = pTVar3->M[1][3];
  param_2->M[1][2] = pTVar3->M[1][2];
  param_2->M[1][3] = dVar1;
  dVar1 = pTVar3->M[2][1];
  param_2->M[2][0] = pTVar3->M[2][0];
  param_2->M[2][1] = dVar1;
  dVar1 = pTVar3->M[2][3];
  param_2->M[2][2] = pTVar3->M[2][2];
  param_2->M[2][3] = dVar1;
  dVar1 = pTVar3->M[3][1];
  param_2->M[3][0] = pTVar3->M[3][0];
  param_2->M[3][1] = dVar1;
  dVar1 = pTVar3->M[3][3];
  param_2->M[3][2] = pTVar3->M[3][2];
  param_2->M[3][3] = dVar1;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (((pUVar4 == (UObject *)0x0) || (pUVar4 = pUVar4 + 0x43, *(longlong *)pUVar4 == 0)) ||
     ((this->_padding_ & 0x10) == 0)) {
    cVar2 = (**(code **)(this->_padding_ + 0x30))();
    if (((cVar2 == '\0') || ((this->_padding_ & 0x10) != 0)) ||
       (pUVar4 = (UObject *)&this->_padding_, *(longlong *)pUVar4 == 0)) {
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
               *)param_1);
      goto LAB_14dc5035c;
    }
  }
  *param_3 = *(float *)&this->_padding_;
  this_00 = TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1>::operator->
                      ((TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)pUVar4);
  pTVar5 = UE::Chaos::ClothAsset::FClothSimulationProxy::GetCurrentSimulationData_AnyThread(this_00)
  ;
  TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
  ::operator=(param_1,pTVar5);
LAB_14dc5035c:
  if (*(int *)&param_1->field_0x8 == *(int *)&param_1->field_0x34) {
    *param_3 = 0.0;
  }
  return;
}

// HandleExistingParallelSimulation @ 14dc51180

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::HandleExistingParallelSimulation(UChaosClothComponent *this)

{
  FClothSimulationProxy *this_00;
  UChaosClothComponent *this_01;
  
  if (this->bBindToLeaderComponent != '\0') {
    this_01 = (UChaosClothComponent *)FWeakObjectPtr::Get(&(this->LeaderClothComponent).WeakPtr);
    if (this_01 != (UChaosClothComponent *)0x0) {
      HandleExistingParallelSimulation(this_01);
    }
  }
  this_00 = (this->ClothSimulationProxy).Object;
  if ((this_00 != (FClothSimulationProxy *)0x0) &&
     ((this_00->ParallelTask).Reference != (FBaseGraphTask *)0x0)) {
    UE::Chaos::ClothAsset::FClothSimulationProxy::CompleteParallelSimulation_GameThread(this_00);
    USkinnedMeshComponent::InvalidateCachedBounds((USkinnedMeshComponent *)this);
    return;
  }
  return;
}

// HasAnySimulationMeshData @ 14dc51790

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UChaosClothComponent::HasAnySimulationMeshData(UChaosClothComponent *this,int param_1)

{
  int iVar1;
  int iVar2;
  USkinnedAsset *pUVar3;
  UClass *pUVar4;
  int iVar5;
  FChaosClothSimulationModel *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pUVar3 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)&this[-1]._padding_);
  if (pUVar3 != (USkinnedAsset *)0x0) {
    pUVar4 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      iVar1 = (**(code **)(*(longlong *)pUVar3 + 0x4c8))(pUVar3);
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          (**(code **)(*(longlong *)pUVar3 + 0x4d0))(pUVar3,&local_18,iVar5);
          if ((((local_18 != (FChaosClothSimulationModel *)0x0) && (-1 < param_1)) &&
              (param_1 < (local_18->ClothSimulationLodModels).ArrayNum)) &&
             (iVar2 = FChaosClothSimulationModel::GetNumVertices(local_18,param_1), 0 < iVar2)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_10);
            return true;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_10);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
    }
  }
  return false;
}

// IsComponentTickEnabled @ 14dc527e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChaosClothComponent::IsComponentTickEnabled(UChaosClothComponent *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  cVar2 = '\0';
  if ((this->bBindToLeaderComponent != '\0') &&
     (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_), pUVar4 != (UObject *)0x0)) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x430))(pUVar4);
    }
  }
  if (((this->bEnableSimulation != '\0') || (cVar2 != '\0')) &&
     (bVar3 = UActorComponent::IsComponentTickEnabled((UActorComponent *)this), bVar3)) {
    return true;
  }
  return false;
}

// IsSimulationEnabled @ 14dc529c0

bool __thiscall UChaosClothComponent::IsSimulationEnabled(UChaosClothComponent *this)

{
  char cVar1;
  IConsoleManager *pIVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    CVarClothPhysics =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"p.ClothPhysics",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (((this->_padding_ & 4) != 0) && (this->_padding_ != 0)) {
    if ((CVarClothPhysics != (IConsoleVariable *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)CVarClothPhysics + 0xc0))(), cVar1 == '\0')) {
      return false;
    }
    return true;
  }
  return false;
}

// IsSimulationSuspended @ 14dc52a90

bool __thiscall UChaosClothComponent::IsSimulationSuspended(UChaosClothComponent *this)

{
  char cVar1;
  
  if ((this->_padding_ & 8) == 0) {
    cVar1 = (**(code **)(this->_padding_ + 0x30))();
    if (cVar1 != '\0') {
      return false;
    }
  }
  return true;
}

// IsVisible @ 14dc52b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChaosClothComponent::IsVisible(UChaosClothComponent *this)

{
  bool bVar1;
  
  if (this->bHasValidRenderDataForVisibility != false) {
    bVar1 = USceneComponent::IsVisible((USceneComponent *)this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// NeedsResetRestLengths @ 14dc52c10

bool __thiscall UChaosClothComponent::NeedsResetRestLengths(UChaosClothComponent *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 4);
}

// OnAttachmentChanged @ 14dc52d20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::OnAttachmentChanged(UChaosClothComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  USkeletalMeshComponent *this_00;
  longlong *plVar3;
  USkeletalMeshComponent *local_res8;
  
  if (this->bUseAttachedParentAsPoseComponent == 0) goto LAB_14dc52e3e;
  this_00 = (USkeletalMeshComponent *)this->_padding_;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
LAB_14dc52dde:
    this_00 = (USkeletalMeshComponent *)0x0;
    plVar3 = (longlong *)&DAT_00000010;
LAB_14dc52de6:
    USkinnedMeshComponent::SetLeaderPoseComponent
              ((USkinnedMeshComponent *)this,(USkinnedMeshComponent *)this_00,false,false);
    if (this_00 == (USkeletalMeshComponent *)0x0) goto LAB_14dc52e3e;
  }
  else {
    pUVar2 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_14dc52dde;
    pUVar2 = StaticClass();
    plVar3 = &this_00->_padding_;
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_14dc52de6;
    local_res8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&(this->LeaderClothComponent).WeakPtr,(FObjectPtr)&local_res8);
    USkinnedMeshComponent::SetLeaderPoseComponent
              ((USkinnedMeshComponent *)this,(USkinnedMeshComponent *)this_00,false,false);
  }
  pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*plVar3 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(*plVar3 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    USkeletalMeshComponent::RecalcRequiredBones(this_00,*(int *)((longlong)&this_00->_padding_ + 4))
    ;
  }
LAB_14dc52e3e:
  UPrimitiveComponent::OnAttachmentChanged((UPrimitiveComponent *)this);
  return;
}

// OnPreEndOfFrameSync @ 14dc52e60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::OnPreEndOfFrameSync(UChaosClothComponent *this)

{
  FClothSimulationProxy *this_00;
  UChaosClothComponent *this_01;
  
  if (this->bBindToLeaderComponent != '\0') {
    this_01 = (UChaosClothComponent *)FWeakObjectPtr::Get(&(this->LeaderClothComponent).WeakPtr);
    if (this_01 != (UChaosClothComponent *)0x0) {
      HandleExistingParallelSimulation(this_01);
    }
  }
  this_00 = (this->ClothSimulationProxy).Object;
  if ((this_00 != (FClothSimulationProxy *)0x0) &&
     ((this_00->ParallelTask).Reference != (FBaseGraphTask *)0x0)) {
    UE::Chaos::ClothAsset::FClothSimulationProxy::CompleteParallelSimulation_GameThread(this_00);
    USkinnedMeshComponent::InvalidateCachedBounds((USkinnedMeshComponent *)this);
    return;
  }
  return;
}

// OnRegister @ 14dc531d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::OnRegister(UChaosClothComponent *this)

{
  float fVar1;
  FLLMScope local_res8 [2];
  TObjectPtr<UObject>_u_0 local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,Chaos,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Chaos,true);
  USkinnedMeshComponent::OnRegister((USkinnedMeshComponent *)this);
  UpdateComponentSpaceTransforms(this);
  ResetConfigProperties(this);
  RecreateClothSimulationProxy(this);
  UpdateVisibility(this);
  ((this->CollisionSources).Ptr)->bCollideWithEnvironment = this->bCollideWithEnvironment;
  local_res10 = (TObjectPtr<UObject>_u_0)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UE::Dataflow::RegisterSimulationInterface((TObjectPtr<UObject> *)&local_res10.ObjectPtr);
  fVar1 = this->TeleportDistanceThreshold;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = fVar1 * fVar1;
  }
  this->ClothTeleportDistThresholdSquared = fVar1;
  fVar1 = __real_3f800000;
  if (0.0 < this->TeleportRotationThreshold) {
    fVar1 = cosf(this->TeleportRotationThreshold * __real_3c8efa35);
  }
  this->ClothTeleportCosineThresholdInRad = fVar1;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnUnregister @ 14dc532d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::OnUnregister(UChaosClothComponent *this)

{
  int *piVar1;
  int iVar2;
  FChaosClothSimulationProperties *pFVar3;
  TObjectPtr<UObject>_u_0 local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  USkinnedMeshComponent::OnUnregister((USkinnedMeshComponent *)this);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ClothSimulationProxy !=
      (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)&local_18) {
    (this->ClothSimulationProxy).Object = (FClothSimulationProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationProxy).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  piVar1 = &(this->ClothSimulationProperties).ArrayMax;
  pFVar3 = (FChaosClothSimulationProperties *)
           (this->ClothSimulationProperties).AllocatorInstance.Data;
  iVar2 = (this->ClothSimulationProperties).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FChaosClothSimulationProperties,int>(pFVar3,iVar2);
    (this->ClothSimulationProperties).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ClothSimulationProperties).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FChaosClothSimulationProperties,int>(pFVar3,iVar2);
    (this->ClothSimulationProperties).ArrayNum = 0;
  }
  local_res8 = (TObjectPtr<UObject>_u_0)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UChaosClothComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UE::Dataflow::UnregisterSimulationInterface((TObjectPtr<UObject> *)&local_res8.ObjectPtr);
  return;
}

// PostLoad @ 14dc53880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UChaosClothComponent::PostLoad(UChaosClothComponent *this)

{
  int iVar1;
  FGuid FStack_18;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    this->_padding_ = this->_padding_;
  }
  FStack_18 = FUE5MainStreamObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&FStack_18);
  if (iVar1 < 0x57) {
    *(bool *)&this->_padding_ = this->_padding_ != 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014795ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x378))(this);
  return;
}

// PostProcessSimulation @ 14dc53890

void __thiscall
UChaosClothComponent::PostProcessSimulation(UChaosClothComponent *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FClothSimulationProxy *this_00;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackX_8 [8];
  
  this_00 = (FClothSimulationProxy *)this->_padding_;
  if (this_00 == (FClothSimulationProxy *)0x0) {
    return;
  }
  if (this_00->bIsPreProcessed) {
    if (this_00->bIsSimulating) {
      return;
    }
    cVar4 = (**(code **)((longlong)*this_00->ClothComponentAdapter + 0x30))();
    if (cVar4 != '\0') {
      if ((this_00->ParallelInitializationTask).Reference != (FBaseGraphTask *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsValidRef(ParallelInitializationTask)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                           ,0x2e9,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (!this_00->bIsPreProcessed) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsPreProcessed",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                           ,0x2ea,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar9 = (this_00->Cloths).AllocatorInstance.Data;
      bVar5 = false;
      iVar2 = (this_00->Cloths).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this_00->Cloths).ArrayNum != iVar2) {
          auStackX_8[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
        }
        if (pFVar9 == pFVar1) break;
        if ((longlong *)**(longlong **)pFVar9 != (longlong *)0x0) {
          iVar7 = (**(code **)(*(longlong *)**(longlong **)pFVar9 + 0x10))();
          pTVar8 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                           *)(*(longlong *)pFVar9 + 0x100),(this_00->Solver).Ptr);
          if (pTVar8 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (iVar7 != *(int *)&pTVar8->field_0x8) {
            cVar4 = (**(code **)((longlong)*this_00->ClothComponentAdapter + 0x30))();
            if (cVar4 == '\0') {
              *(undefined1 *)(*(longlong *)pFVar9 + 0x44) = 1;
            }
            bVar5 = true;
          }
        }
        pFVar9 = pFVar9 + 8;
      }
      if (bVar5) {
        Chaos::FClothingSimulationSolver::Update((this_00->Solver).Ptr,0.0);
      }
      UE::Chaos::ClothAsset::FClothSimulationProxy::WriteSimulationData(this_00);
      return;
    }
  }
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
           *)&this_00->CurrentSimulationData);
  return;
}

// PreProcessSimulation @ 14dc53ab0

void __thiscall UChaosClothComponent::PreProcessSimulation(UChaosClothComponent *this,float param_1)

{
  if ((FClothSimulationProxy *)this->_padding_ != (FClothSimulationProxy *)0x0) {
    UE::Chaos::ClothAsset::FClothSimulationProxy::PreProcess_GameThread
              ((FClothSimulationProxy *)this->_padding_,param_1,true);
    return;
  }
  return;
}

// ReadFromSimulation @ 14dc54150

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UChaosClothComponent::ReadFromSimulation(UChaosClothComponent *this,float param_1,bool param_2)

{
  if (this->_padding_ != 0) {
    if (((FClothSimulationProxy *)this->_padding_)->bIsSimulating) {
      UE::Chaos::ClothAsset::FClothSimulationProxy::WriteSimulationData
                ((FClothSimulationProxy *)this->_padding_);
    }
    USkinnedMeshComponent::InvalidateCachedBounds((USkinnedMeshComponent *)&this[-1]._padding_);
  }
  return;
}

// RecreateClothSimulationProxy @ 14dc54230

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::RecreateClothSimulationProxy(UChaosClothComponent *this)

{
  TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar1;
  int iVar2;
  char cVar3;
  USkinnedAsset *pUVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  IConsoleManager *pIVar7;
  FName local_res8;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  FString local_18;
  
  if ((this->_padding_ & 1) == 0) {
    if ((byte)LogChaosClothAsset._0_1_ < 3) {
      return;
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pTVar1 = &this->ClothSimulationProxy;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)&local_28) {
    pTVar1->Object = (FClothSimulationProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationProxy).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  pUVar4 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar4 == (USkinnedAsset *)0x0) {
    return;
  }
  pUVar5 = UChaosClothAssetBase::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar2) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pUVar4 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar4 != (USkinnedAsset *)0x0) {
    pUVar5 = UChaosClothAssetBase::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14dc542fd;
  }
  pUVar4 = (USkinnedAsset *)0x0;
LAB_14dc542fd:
  cVar3 = (**(code **)(*(longlong *)pUVar4 + 0x4c0))(pUVar4);
  if (cVar3 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar7 = IConsoleManager::Get();
      CVarClothPhysics =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"p.ClothPhysics",1);
      _Init_thread_footer(&::_TSS0);
    }
    if ((CVarClothPhysics == (IConsoleVariable *)0x0) ||
       (cVar3 = (**(code **)(*(longlong *)CVarClothPhysics + 0xc0))(), cVar3 != '\0')) {
      puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0xc60))(this,&local_18);
      if (pTVar1 != (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)puVar6) {
        pTVar1->Object = (FClothSimulationProxy *)*puVar6;
        *puVar6 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ClothSimulationProxy).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar6 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_18.Data.ArrayMax,local_18.Data.ArrayNum));
      if (pTVar1->Object != (FClothSimulationProxy *)0x0) {
        (**(code **)(pTVar1->Object->_padding_ + 0x30))();
      }
    }
  }
  return;
}

// RefreshBoneTransforms @ 14dc54470

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
UChaosClothComponent::RefreshBoneTransforms
          (UChaosClothComponent *this,FActorComponentTickFunction *param_1)

{
  byte *pbVar1;
  
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar1 = *pbVar1 & 0xfe;
  USkinnedMeshComponent::FlipEditableSpaceBases((USkinnedMeshComponent *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// RegisterOnBoneTransformsFinalizedDelegate @ 14dc544b0

FDelegateHandle __thiscall
UChaosClothComponent::RegisterOnBoneTransformsFinalizedDelegate
          (UChaosClothComponent *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnBoneTransformsFinalizedMC,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RemoveCollisionSource @ 14dc553e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UChaosClothComponent::RemoveCollisionSource
          (UChaosClothComponent *this,USkinnedMeshComponent *param_1,UPhysicsAsset *param_2)

{
  int iVar1;
  FCollisionSources *pFVar2;
  FWeakObjectPtr *this_00;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FWeakObjectPtr *this_01;
  int iVar8;
  byte bVar9;
  int local_res8;
  
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar2 = (this->CollisionSources).Ptr;
    iVar1 = (pFVar2->CollisionSources).ArrayNum;
    if (iVar1 != 0) {
      iVar5 = 0;
      this_00 = (FWeakObjectPtr *)(pFVar2->CollisionSources).AllocatorInstance.Data;
      local_res8 = 0;
      bVar3 = FWeakObjectPtr::IsValid(this_00);
      if ((!bVar3) ||
         ((bVar3 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                   UEOpEquals<USkinnedMeshComponent,bool>
                             ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_00,
                              param_1), bVar3 &&
          (bVar3 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::
                   UEOpEquals<UPhysicsAsset,bool>
                             ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)(this_00 + 2),
                              param_2), bVar3)))) {
        bVar9 = 0;
        iVar8 = 0;
        iVar6 = iVar5;
      }
      else {
        bVar9 = 1;
        iVar8 = 0;
        iVar5 = 0;
        iVar6 = 0;
      }
joined_r0x00014dc5548e:
      do {
        iVar5 = iVar5 + 1;
        if (iVar5 < iVar1) {
          this_01 = this_00 + (longlong)iVar5 * 0xf;
          bVar3 = FWeakObjectPtr::IsValid(this_01);
          if ((!bVar3) ||
             ((bVar3 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                       UEOpEquals<USkinnedMeshComponent,bool>
                                 ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_01,
                                  param_1), bVar3 &&
              (bVar3 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::
                       UEOpEquals<UPhysicsAsset,bool>
                                 ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)
                                  (this_01 + 2),param_2), bVar3)))) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
          iVar8 = local_res8;
          if (bVar9 == bVar4) goto joined_r0x00014dc5548e;
        }
        iVar7 = iVar5 - iVar6;
        if (bVar9 == 0) {
          DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
                    ((FCollisionSource *)(this_00 + (longlong)iVar6 * 0xf),iVar7);
        }
        else {
          if (iVar8 != iVar6) {
            memmove(this_00 + (longlong)iVar8 * 0xf,this_00 + (longlong)iVar6 * 0xf,
                    (longlong)iVar7 * 0x78);
          }
          iVar8 = iVar8 + iVar7;
          local_res8 = iVar8;
        }
        bVar9 = bVar9 ^ 1;
        iVar6 = iVar5;
      } while (iVar5 < iVar1);
      (pFVar2->CollisionSources).ArrayNum = iVar8;
      if (0 < iVar1 - iVar8) {
        pFVar2->Version = pFVar2->Version + 1;
      }
    }
  }
  return;
}

// RemoveCollisionSources @ 14dc555a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UChaosClothComponent::RemoveCollisionSources
          (UChaosClothComponent *this,USkinnedMeshComponent *param_1)

{
  int iVar1;
  FCollisionSources *pFVar2;
  FWeakObjectPtr *this_00;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar2 = (this->CollisionSources).Ptr;
    iVar1 = (pFVar2->CollisionSources).ArrayNum;
    if (iVar1 != 0) {
      iVar5 = 0;
      iVar8 = 0;
      this_00 = (FWeakObjectPtr *)(pFVar2->CollisionSources).AllocatorInstance.Data;
      bVar3 = FWeakObjectPtr::IsValid(this_00);
      if ((!bVar3) ||
         (bVar3 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                  UEOpEquals<USkinnedMeshComponent,bool>
                            ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_00,param_1
                            ), bVar3)) {
        bVar9 = 0;
        iVar6 = iVar5;
      }
      else {
        bVar9 = 1;
        iVar5 = 0;
        iVar8 = 0;
        iVar6 = 0;
      }
joined_r0x00014dc5562b:
      do {
        iVar5 = iVar5 + 1;
        if (iVar5 < iVar1) {
          bVar3 = FWeakObjectPtr::IsValid(this_00 + (longlong)iVar5 * 0xf);
          if ((!bVar3) ||
             (bVar3 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                      UEOpEquals<USkinnedMeshComponent,bool>
                                ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)
                                 (this_00 + (longlong)iVar5 * 0xf),param_1), bVar3)) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
          if (bVar9 == bVar4) goto joined_r0x00014dc5562b;
        }
        iVar7 = iVar5 - iVar6;
        if (bVar9 == 0) {
          DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
                    ((FCollisionSource *)(this_00 + (longlong)iVar6 * 0xf),iVar7);
        }
        else {
          if (iVar8 != iVar6) {
            memmove(this_00 + (longlong)iVar8 * 0xf,this_00 + (longlong)iVar6 * 0xf,
                    (longlong)iVar7 * 0x78);
          }
          iVar8 = iVar8 + iVar7;
        }
        bVar9 = bVar9 ^ 1;
        iVar6 = iVar5;
      } while (iVar5 < iVar1);
      (pFVar2->CollisionSources).ArrayNum = iVar8;
      if (0 < iVar1 - iVar8) {
        pFVar2->Version = pFVar2->Version + 1;
      }
    }
  }
  return;
}

// RequiresPreEndOfFrameSync @ 14dc55710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChaosClothComponent::RequiresPreEndOfFrameSync(UChaosClothComponent *this)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar1 == '\0') {
    bVar2 = ShouldWaitForParallelSimulationInTickComponent(this);
    if (!bVar2) {
      return true;
    }
  }
  if (this->bBindToLeaderComponent != '\0') {
    pUVar4 = FWeakObjectPtr::Get(&(this->LeaderClothComponent).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc5576a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)pUVar4 + 0x460))
                        (pUVar4,*(code **)(*(longlong *)pUVar4 + 0x460));
      return (bool)uVar3;
    }
  }
  bVar2 = UActorComponent::RequiresPreEndOfFrameSync((UActorComponent *)this);
  return bVar2;
}

// ResetCollisionSources @ 14dc55af0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::ResetCollisionSources(UChaosClothComponent *this)

{
  int *piVar1;
  int iVar2;
  FCollisionSources *pFVar3;
  FCollisionSource *pFVar4;
  
  pFVar3 = (this->CollisionSources).Ptr;
  piVar1 = &(pFVar3->CollisionSources).ArrayMax;
  pFVar4 = (FCollisionSource *)(pFVar3->CollisionSources).AllocatorInstance.Data;
  iVar2 = (pFVar3->CollisionSources).ArrayNum;
  if (-1 < (pFVar3->CollisionSources).ArrayMax) {
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>(pFVar4,iVar2);
    (pFVar3->CollisionSources).ArrayNum = 0;
    pFVar3->Version = pFVar3->Version + 1;
    return;
  }
  DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>(pFVar4,iVar2);
  (pFVar3->CollisionSources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&(pFVar3->CollisionSources).AllocatorInstance,0,piVar1);
  }
  pFVar3->Version = pFVar3->Version + 1;
  return;
}

// ResetConfigProperties @ 14dc55c80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::ResetConfigProperties(UChaosClothComponent *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FChaosClothSimulationProperties,TSizedDefaultAllocator<32>_> *this_00;
  FChaosClothSimulationProperties *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  USkinnedAsset *pUVar9;
  UClass *pUVar10;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  longlong lVar13;
  FName local_res18 [2];
  FString local_48;
  
  this_00 = &this->ClothSimulationProperties;
  piVar1 = &(this->ClothSimulationProperties).ArrayMax;
  pFVar3 = (FChaosClothSimulationProperties *)(this_00->AllocatorInstance).Data;
  piVar2 = &(this->ClothSimulationProperties).ArrayNum;
  if ((this->ClothSimulationProperties).ArrayMax < 0) {
    DestructItems<FChaosClothSimulationProperties,int>(pFVar3,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FChaosClothSimulationProperties,int>(pFVar3,*piVar2);
    *piVar2 = 0;
  }
  if ((this->_padding_ & 1) == 0) {
    if ((byte)LogChaosClothAsset._0_1_ < 3) {
      return;
    }
    local_res18[0] = (FName)this->_padding_;
    ::FName::ToString(local_res18,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    return;
  }
  pUVar9 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar9 == (USkinnedAsset *)0x0) {
    return;
  }
  pUVar10 = UChaosClothAssetBase::StaticClass();
  iVar12 = (int)pUVar10->_padding_;
  if (*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar12) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
      &pUVar10->_padding_) {
    return;
  }
  pUVar9 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar9 == (USkinnedAsset *)0x0) {
LAB_14dc55d76:
    pUVar9 = (USkinnedAsset *)0x0;
  }
  else {
    pUVar10 = UChaosClothAssetBase::StaticClass();
    iVar12 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar10->_padding_)) goto LAB_14dc55d76;
  }
  uVar7 = (**(code **)(*(longlong *)pUVar9 + 0x4c8))();
  iVar12 = *piVar2;
  if (iVar12 < (int)uVar7) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,uVar7 - iVar12,&this_00->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FChaosClothSimulationProperties,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x28,uVar7 - iVar12);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar12) {
      iVar12 = iVar12 - uVar7;
      if (iVar12 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (iVar12 == 0) goto LAB_14dc55e3f;
      TArray<FChaosClothSimulationProperties,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (this_00,uVar7,iVar12);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,&this_00->AllocatorInstance,*piVar2,piVar1);
    }
  }
LAB_14dc55e3f:
  iVar12 = 0;
  if (0 < (int)uVar7) {
    lVar13 = 0;
    do {
      if ((*piVar2 <= iVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this_00->AllocatorInstance).Data;
      pUVar9 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
      if (pUVar9 == (USkinnedAsset *)0x0) {
LAB_14dc55ed8:
        pUVar9 = (USkinnedAsset *)0x0;
      }
      else {
        pUVar10 = UChaosClothAssetBase::StaticClass();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) goto LAB_14dc55ed8;
      }
      pTVar11 = (TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*(longlong *)pUVar9 + 0x4e0))(pUVar9,iVar12);
      FChaosClothSimulationProperties::Initialize
                ((FChaosClothSimulationProperties *)(pFVar4 + lVar13),pTVar11);
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 0x28;
    } while (iVar12 < (int)uVar7);
  }
  return;
}

// ResetSimulationProxy @ 14dc56020

void __thiscall UChaosClothComponent::ResetSimulationProxy(UChaosClothComponent *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetAsset @ 14dc57540

void __thiscall
UChaosClothComponent::SetAsset(UChaosClothComponent *this,UChaosClothAssetBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc57546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb50))(this,param_1,1);
  return;
}

// SetAsset_WrapperImpl @ 14dc57560

void __cdecl UChaosClothComponent::SetAsset_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetClothAsset @ 14dc57b00

void __thiscall
UChaosClothComponent::SetClothAsset(UChaosClothComponent *this,UChaosClothAsset *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc57b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb50))(this,param_1,1);
  return;
}

// SetCollideWithEnvironment @ 14dc57bb0

void __thiscall
UChaosClothComponent::SetCollideWithEnvironment(UChaosClothComponent *this,bool param_1)

{
  FCollisionSources *pFVar1;
  
  this->bCollideWithEnvironment = '\0';
  pFVar1 = (this->CollisionSources).Ptr;
  this->field_0x9b0 = this->field_0x9b0 | param_1 << 7;
  pFVar1->bCollideWithEnvironment = this->bCollideWithEnvironment;
  return;
}

// SetSimulateInEditor @ 14dc59660

void __thiscall UChaosClothComponent::SetSimulateInEditor(UChaosClothComponent *this,bool param_1)

{
  return;
}

// SetSkinnedAssetAndUpdate @ 14dc596c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UChaosClothComponent::SetSkinnedAssetAndUpdate
          (UChaosClothComponent *this,USkinnedAsset *param_1,bool param_2)

{
  USkinnedAsset *pUVar1;
  
  pUVar1 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (param_1 != pUVar1) {
    USkinnedMeshComponent::SetSkinnedAssetAndUpdate((USkinnedMeshComponent *)this,param_1,param_2);
    if ((this->_padding_ & 1) != 0) {
      UpdateComponentSpaceTransforms(this);
      ResetConfigProperties(this);
      RecreateClothSimulationProxy(this);
    }
    UpdateVisibility(this);
  }
  return;
}

// SetTeleportDistanceThreshold @ 14dc59a70

void __thiscall
UChaosClothComponent::SetTeleportDistanceThreshold(UChaosClothComponent *this,float param_1)

{
  this->TeleportDistanceThreshold = param_1;
  if (0.0 < param_1) {
    this->ClothTeleportDistThresholdSquared = param_1 * param_1;
    return;
  }
  this->ClothTeleportDistThresholdSquared = 0.0;
  return;
}

// SetTeleportRotationThreshold @ 14dc59aa0

void __thiscall
UChaosClothComponent::SetTeleportRotationThreshold(UChaosClothComponent *this,float param_1)

{
  float fVar1;
  
  this->TeleportRotationThreshold = param_1;
  if (0.0 < param_1) {
    fVar1 = cosf(param_1 * __real_3c8efa35);
    this->ClothTeleportCosineThresholdInRad = fVar1;
    return;
  }
  this->ClothTeleportCosineThresholdInRad = __real_3f800000;
  return;
}

// ShouldWaitForParallelSimulationInTickComponent @ 14dc5a2a0

bool __thiscall
UChaosClothComponent::ShouldWaitForParallelSimulationInTickComponent(UChaosClothComponent *this)

{
  char cVar1;
  IConsoleManager *pIVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    CVarClothPhysicsWaitForParallelClothTask =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar2 + 0xc0))
                   (pIVar2,L"p.ClothPhysics.WaitForParallelClothTask",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (this->bWaitForParallelTask != '\0') {
    return true;
  }
  if ((CVarClothPhysicsWaitForParallelClothTask != (IConsoleVariable *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)CVarClothPhysicsWaitForParallelClothTask + 0xc0))(),
     cVar1 != '\0')) {
    return true;
  }
  return false;
}

// StartNewParallelSimulation @ 14dc5a4a0

void __thiscall
UChaosClothComponent::StartNewParallelSimulation(UChaosClothComponent *this,float param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((this->ClothSimulationProxy).Object != (FClothSimulationProxy *)0x0) {
    if (!__CsvProfilerStat710) {
      FCsvProfilerTrace::OutputInlineStat("Cloth",_GCsvCategory_Animation.Index);
      __CsvProfilerStat710 = true;
    }
    uVar5 = _GCsvCategory_Animation.Index;
    FCsvProfiler::BeginStat("Cloth",_GCsvCategory_Animation.Index,"CSV_Cloth");
    if (((this->ClothSimulationProxy).Object == (FClothSimulationProxy *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = UE::Chaos::ClothAsset::FClothSimulationProxy::Tick_GameThread
                      ((this->ClothSimulationProxy).Object,param_1);
    uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
    lVar10 = (longlong)(int)uVar1;
    uVar11 = 0;
    if (0 < (this->ClothSimulationProperties).ArrayNum) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->ClothSimulationProperties).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->ClothSimulationProperties).AllocatorInstance.Data;
        if (((bVar6) && (-1 < (int)uVar1)) && ((int)uVar1 < *(int *)(pFVar2 + lVar9 + 0x20))) {
          if (((int)uVar1 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)(*(longlong *)(pFVar2 + lVar9 + 0x18) + lVar10 * 0x10) != 0) {
            uVar8 = 0;
            if ((int)uVar1 < *(int *)(pFVar2 + lVar9 + 0x20)) {
              uVar8 = ~uVar1 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = *(longlong *)(pFVar2 + lVar9 + 0x18);
            if ((*(longlong *)(lVar3 + lVar10 * 0x10) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            Chaos::Softs::FCollectionPropertyFacade::ClearDirtyFlags
                      (*(FCollectionPropertyFacade **)(lVar3 + lVar10 * 0x10));
          }
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x28;
      } while ((int)uVar11 < (this->ClothSimulationProperties).ArrayNum);
    }
    FCsvProfiler::EndStat("Cloth",uVar5);
  }
  return;
}

// StaticRegisterNativesUChaosClothComponent @ 14dc5a840

void __cdecl UChaosClothComponent::StaticRegisterNativesUChaosClothComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1b;
  local_18.DataPtr = Z_Construct_UClass_UChaosClothComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14dc5ce60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UChaosClothComponent::TickComponent
          (UChaosClothComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  FClothSimulationProxy *this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  EClothingTeleportMode EVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UChaosClothComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ClothComponentTick>
  FVar10;
  UChaosClothComponent *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_178 [32];
  LARGE_INTEGER local_118;
  FName local_110;
  FStatMessage local_100;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (!__CsvProfilerStat309) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Physics");
    __CsvProfilerStat309 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Physics","CSV_Physics");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_ClothComponentTick ==
          (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UChaosClothComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ClothComponentTick>
           )0x0) {
        pFVar9 = ::FName::FName((FName *)&local_118.s,"STAT_ClothComponentTick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothComponentTick,*pFVar9,
                   L"STAT_ClothComponentTick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = StatPtr_STAT_ClothComponentTick;
  if (StatPtr_STAT_ClothComponentTick ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UChaosClothComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ClothComponentTick>
       )0x0) {
    pFVar9 = ::FName::FName((FName *)&local_100,"STAT_ClothComponentTick");
    FVar10 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UChaosClothComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ClothComponentTick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothComponentTick,*pFVar9,
                          L"STAT_ClothComponentTick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.s.LowPart = FVar12.Value;
        local_118.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                   ,0x136);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118.s.LowPart = FVar12.Value;
      local_118.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_14dc5d017;
    }
  }
  bVar4 = false;
  FVar13 = local_110;
LAB_14dc5d017:
  USkinnedMeshComponent::TickComponent((USkinnedMeshComponent *)this,param_1,param_2,param_3);
  if (this->bBindToLeaderComponent != '\0') {
    this_01 = (UChaosClothComponent *)FWeakObjectPtr::Get(&(this->LeaderClothComponent).WeakPtr);
    if (this_01 != (UChaosClothComponent *)0x0) {
      HandleExistingParallelSimulation(this_01);
    }
  }
  this_00 = (this->ClothSimulationProxy).Object;
  if ((this_00 != (FClothSimulationProxy *)0x0) &&
     ((this_00->ParallelTask).Reference != (FBaseGraphTask *)0x0)) {
    UE::Chaos::ClothAsset::FClothSimulationProxy::CompleteParallelSimulation_GameThread(this_00);
    USkinnedMeshComponent::InvalidateCachedBounds((USkinnedMeshComponent *)this);
  }
  cVar6 = (**(code **)(this->_padding_ + 0x30))();
  if (cVar6 != '\0') {
    USkinnedMeshComponent::GetBoneMatrix((USkinnedMeshComponent *)this,&local_e8,0);
    if ((this->bTeleport == '\0') && (this->bTeleportOnce == false)) {
      EVar7 = None;
    }
    else if ((this->bReset != 0) || (EVar7 = Teleport, this->bResetOnce != false)) {
      EVar7 = TeleportAndReset;
    }
    this->ClothTeleportMode = EVar7;
    if ((this->bReset == 0) && (this->bResetOnce == false)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    EVar7 = UE::ClothingSimulation::TeleportHelpers::CalculateClothingTeleport
                      (EVar7,&local_e8,&this->PrevRootBoneMatrix,bVar8,
                       this->ClothTeleportDistThresholdSquared,
                       this->ClothTeleportCosineThresholdInRad);
    (this->PrevRootBoneMatrix).M[0][0] = local_e8.M[0][0];
    (this->PrevRootBoneMatrix).M[0][1] = local_e8.M[0][1];
    this->ClothTeleportMode = EVar7;
    (this->PrevRootBoneMatrix).M[0][2] = local_e8.M[0][2];
    (this->PrevRootBoneMatrix).M[0][3] = local_e8.M[0][3];
    this->bTeleportOnce = false;
    this->bResetOnce = false;
    (this->PrevRootBoneMatrix).M[1][0] = local_e8.M[1][0];
    (this->PrevRootBoneMatrix).M[1][1] = local_e8.M[1][1];
    (this->PrevRootBoneMatrix).M[1][2] = local_e8.M[1][2];
    (this->PrevRootBoneMatrix).M[1][3] = local_e8.M[1][3];
    (this->PrevRootBoneMatrix).M[2][0] = local_e8.M[2][0];
    (this->PrevRootBoneMatrix).M[2][1] = local_e8.M[2][1];
    (this->PrevRootBoneMatrix).M[2][2] = local_e8.M[2][2];
    (this->PrevRootBoneMatrix).M[2][3] = local_e8.M[2][3];
    (this->PrevRootBoneMatrix).M[3][0] = local_e8.M[3][0];
    (this->PrevRootBoneMatrix).M[3][1] = local_e8.M[3][1];
    (this->PrevRootBoneMatrix).M[3][2] = local_e8.M[3][2];
    (this->PrevRootBoneMatrix).M[3][3] = local_e8.M[3][3];
  }
  if ((this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr == (UDataflow *)0x0) {
    StartNewParallelSimulation(this,param_1);
    bVar8 = ShouldWaitForParallelSimulationInTickComponent(this);
    if (bVar8) {
      HandleExistingParallelSimulation(this);
    }
  }
  this->bResetRestLengthsFromMorphTarget = false;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_100.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_118);
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.StatData.Pad[0] = local_118.s.LowPart._0_1_;
      local_100.StatData.Pad[1] = local_118.s.LowPart._1_1_;
      local_100.StatData.Pad[2] = local_118.s.LowPart._2_1_;
      local_100.StatData.Pad[3] = local_118.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_100);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Physics");
  return;
}

// UnregisterOnBoneTransformsFinalizedDelegate @ 14dc5dd00

void __thiscall
UChaosClothComponent::UnregisterOnBoneTransformsFinalizedDelegate
          (UChaosClothComponent *this,FDelegateHandle *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  ForAnyElementType *this_00;
  longlong lVar7;
  FDestructionSentinel local_38;
  
  uVar1 = param_1->ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnBoneTransformsFinalizedMC,(FWriteAccessScope *)&local_38);
    uVar6 = 0;
    if (0 < *(int *)&(this->OnBoneTransformsFinalizedMC).field_0x10) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < *(int *)&(this->OnBoneTransformsFinalizedMC).field_0x10) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (ForAnyElementType *)
                  (*(longlong *)&(this->OnBoneTransformsFinalizedMC).field_0x8 + lVar7);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnBoneTransformsFinalizedMC,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < *(int *)&(this->OnBoneTransformsFinalizedMC).field_0x10);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// UpdateClothTeleport @ 14dc5dfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::UpdateClothTeleport(UChaosClothComponent *this)

{
  undefined1 *puVar1;
  EClothingTeleportMode EVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  USkinnedMeshComponent::GetBoneMatrix((USkinnedMeshComponent *)this,&local_98,0);
  if ((this->bTeleport == '\0') && (this->bTeleportOnce == false)) {
    EVar2 = None;
  }
  else if ((this->bReset != 0) || (EVar2 = Teleport, this->bResetOnce != false)) {
    EVar2 = TeleportAndReset;
  }
  this->ClothTeleportMode = EVar2;
  if ((this->bReset == 0) && (this->bResetOnce == false)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  EVar2 = UE::ClothingSimulation::TeleportHelpers::CalculateClothingTeleport
                    (EVar2,&local_98,&this->PrevRootBoneMatrix,bVar3,
                     this->ClothTeleportDistThresholdSquared,this->ClothTeleportCosineThresholdInRad
                    );
  (this->PrevRootBoneMatrix).M[0][0] = local_98.M[0][0];
  (this->PrevRootBoneMatrix).M[0][1] = local_98.M[0][1];
  this->ClothTeleportMode = EVar2;
  (this->PrevRootBoneMatrix).M[0][2] = local_98.M[0][2];
  (this->PrevRootBoneMatrix).M[0][3] = local_98.M[0][3];
  this->bTeleportOnce = false;
  this->bResetOnce = false;
  (this->PrevRootBoneMatrix).M[1][0] = local_98.M[1][0];
  (this->PrevRootBoneMatrix).M[1][1] = local_98.M[1][1];
  (this->PrevRootBoneMatrix).M[1][2] = local_98.M[1][2];
  (this->PrevRootBoneMatrix).M[1][3] = local_98.M[1][3];
  (this->PrevRootBoneMatrix).M[2][0] = local_98.M[2][0];
  (this->PrevRootBoneMatrix).M[2][1] = local_98.M[2][1];
  (this->PrevRootBoneMatrix).M[2][2] = local_98.M[2][2];
  (this->PrevRootBoneMatrix).M[2][3] = local_98.M[2][3];
  (this->PrevRootBoneMatrix).M[3][0] = local_98.M[3][0];
  (this->PrevRootBoneMatrix).M[3][1] = local_98.M[3][1];
  (this->PrevRootBoneMatrix).M[3][2] = local_98.M[3][2];
  (this->PrevRootBoneMatrix).M[3][3] = local_98.M[3][3];
  return;
}

// UpdateComponentSpaceTransforms @ 14dc5e0f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::UpdateComponentSpaceTransforms(UChaosClothComponent *this)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  USkinnedAsset *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  UChaosClothAssetBase *pUVar9;
  longlong *plVar10;
  UChaosClothAssetBase *pUVar11;
  longlong lVar12;
  uint uVar13;
  
  if (((this->_padding_ & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsRegistered()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                         ,0x2f9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar5) {
    return;
  }
  pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar6 == (USkinnedAsset *)0x0) {
    return;
  }
  pUVar7 = UChaosClothAssetBase::StaticClass();
  iVar3 = (int)pUVar7->_padding_;
  if (*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar3) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8)
      != &pUVar7->_padding_) {
    return;
  }
  pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar6 != (USkinnedAsset *)0x0) {
    pUVar7 = UChaosClothAssetBase::StaticClass();
    iVar3 = (int)pUVar7->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar7->_padding_)) goto LAB_14dc5e1bd;
  }
  pUVar6 = (USkinnedAsset *)0x0;
LAB_14dc5e1bd:
  lVar8 = (**(code **)(*(longlong *)pUVar6 + 0x398))(pUVar6);
  if (lVar8 != 0) {
    pUVar9 = GetAsset(this);
    plVar10 = (longlong *)(**(code **)(pUVar9->_padding_ + 0x398))(pUVar9);
    uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
    uVar13 = 0;
    if ((int)uVar2 < (int)plVar10[1]) {
      uVar13 = ~uVar2 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar8 = *(longlong *)(*plVar10 + (longlong)(int)uVar2 * 8);
    pUVar9 = GetAsset(this);
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    pUVar11 = GetAsset(this);
    lVar12 = (**(code **)(pUVar11->_padding_ + 800))(pUVar11);
    USkinnedAsset::FillComponentSpaceTransforms
              ((USkinnedAsset *)pUVar9,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(lVar12 + 0x30),
               (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x518),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               (&this->_padding_ + (longlong)iVar3 * 2));
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    USkinnedMeshComponent::FlipEditableSpaceBases((USkinnedMeshComponent *)this);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 7);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}

// UpdateConfigProperties @ 14dc5e2c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::UpdateConfigProperties(UChaosClothComponent *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FCollectionPropertyFacade *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  USkinnedAsset *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong local_res8;
  TSharedPtr<FManagedArrayCollection_const_,1> local_38;
  
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  pUVar8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar8 == (USkinnedAsset *)0x0) {
    return;
  }
  pUVar9 = UChaosClothAssetBase::StaticClass();
  iVar1 = (int)pUVar9->_padding_;
  if (*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar9->_padding_) {
    return;
  }
  pUVar8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar8 != (USkinnedAsset *)0x0) {
    pUVar9 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) goto LAB_14dc5e351;
  }
  pUVar8 = (USkinnedAsset *)0x0;
LAB_14dc5e351:
  iVar1 = (this->ClothSimulationProperties).ArrayNum;
  iVar6 = (**(code **)(*(longlong *)pUVar8 + 0x4c8))(pUVar8);
  if ((iVar6 == iVar1) && (uVar13 = 0, 0 < (this->ClothSimulationProperties).ArrayNum)) {
    local_res8 = 0;
    do {
      pUVar8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
      if (pUVar8 == (USkinnedAsset *)0x0) {
LAB_14dc5e3d5:
        pUVar8 = (USkinnedAsset *)0x0;
      }
      else {
        pUVar9 = UChaosClothAssetBase::StaticClass();
        iVar1 = (int)pUVar9->_padding_;
        if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) goto LAB_14dc5e3d5;
      }
      plVar10 = (longlong *)(**(code **)(*(longlong *)pUVar8 + 0x4e0))(pUVar8,uVar13);
      uVar11 = 0;
      if ((int)uVar13 < (this->ClothSimulationProperties).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)plVar10[1] ==
          *(int *)((this->ClothSimulationProperties).AllocatorInstance.Data + local_res8 + 0x10)) {
        uVar11 = 0;
        if ((int)uVar13 < (this->ClothSimulationProperties).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->ClothSimulationProperties).AllocatorInstance.Data;
        if ((*(int *)(pFVar2 + local_res8 + 0x20) != (int)plVar10[1]) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CollectionPropertyFacades.Num() == AssetCollections.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                               ,0x97,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = 0;
        if (0 < (int)plVar10[1]) {
          lVar12 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar11 < *(int *)(pFVar2 + local_res8 + 0x20)) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = *(longlong *)(pFVar2 + local_res8 + 0x18);
            if ((*(longlong *)(lVar3 + lVar12) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = *(FCollectionPropertyFacade **)(lVar3 + lVar12);
            uVar7 = 0;
            if ((int)uVar11 < (int)plVar10[1]) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_38.Object = *(FManagedArrayCollection **)(*plVar10 + lVar12);
            local_38.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(*plVar10 + 8 + lVar12);
            if (local_38.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            Chaos::Softs::FCollectionPropertyFacade::UpdateProperties(this_00,&local_38);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_38.SharedReferenceCount.ReferenceController);
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + 0x10;
          } while ((int)uVar11 < (int)plVar10[1]);
        }
      }
      local_res8 = local_res8 + 0x28;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (this->ClothSimulationProperties).ArrayNum);
  }
  return;
}

// UpdateVisibility @ 14dc5e970

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothComponent::UpdateVisibility(UChaosClothComponent *this)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  FSkeletalMeshRenderData *this_00;
  bool bVar5;
  
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
      if (pUVar2 == (USkinnedAsset *)0x0) {
LAB_14dc5e9ec:
        pUVar2 = (USkinnedAsset *)0x0;
      }
      else {
        pUVar3 = UChaosClothAssetBase::StaticClass();
        iVar1 = (int)pUVar3->_padding_;
        if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) goto LAB_14dc5e9ec;
      }
      lVar4 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
      if (lVar4 != 0) {
        pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
        if (pUVar2 == (USkinnedAsset *)0x0) {
LAB_14dc5ea32:
          pUVar2 = (USkinnedAsset *)0x0;
        }
        else {
          pUVar3 = UChaosClothAssetBase::StaticClass();
          iVar1 = (int)pUVar3->_padding_;
          if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) goto LAB_14dc5ea32;
        }
        this_00 = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
        if (this_00 == (FSkeletalMeshRenderData *)0x0) {
          bVar5 = false;
        }
        else {
          iVar1 = FSkeletalMeshRenderData::GetFirstValidLODIdx(this_00,0);
          bVar5 = iVar1 != -1;
        }
        goto LAB_14dc5ea65;
      }
    }
  }
  bVar5 = false;
LAB_14dc5ea65:
  this->bHasValidRenderDataForVisibility = bVar5;
  USceneComponent::SetVisibility((USceneComponent *)this,bVar5,DirtyOnly);
  return;
}

// WaitForExistingParallelClothSimulation_GameThread @ 14dc5ea90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UChaosClothComponent::WaitForExistingParallelClothSimulation_GameThread(UChaosClothComponent *this)

{
  FClothSimulationProxy *this_00;
  code *pcVar1;
  bool bVar2;
  UChaosClothComponent *this_01;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                       ,0xa5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bBindToLeaderComponent != '\0') {
    this_01 = (UChaosClothComponent *)FWeakObjectPtr::Get(&(this->LeaderClothComponent).WeakPtr);
    if (this_01 != (UChaosClothComponent *)0x0) {
      HandleExistingParallelSimulation(this_01);
    }
  }
  this_00 = (this->ClothSimulationProxy).Object;
  if ((this_00 != (FClothSimulationProxy *)0x0) &&
     ((this_00->ParallelTask).Reference != (FBaseGraphTask *)0x0)) {
    UE::Chaos::ClothAsset::FClothSimulationProxy::CompleteParallelSimulation_GameThread(this_00);
    USkinnedMeshComponent::InvalidateCachedBounds((USkinnedMeshComponent *)this);
    return;
  }
  return;
}

// WriteToSimulation @ 14dc60a50

void __thiscall
UChaosClothComponent::WriteToSimulation(UChaosClothComponent *this,float param_1,bool param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((FClothSimulationProxy *)this->_padding_ != (FClothSimulationProxy *)0x0) &&
     (bVar4 = UE::Chaos::ClothAsset::FClothSimulationProxy::PreSimulate_GameThread
                        ((FClothSimulationProxy *)this->_padding_,param_1), bVar4)) {
    iVar6 = (int)this->_padding_;
    uVar8 = 0;
    uVar1 = *(uint *)((longlong)&this[-1]._padding_ + 4);
    lVar9 = (longlong)(int)uVar1;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = this->_padding_;
        if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x20 + lVar7))) {
          if (((int)uVar1 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)(*(longlong *)(lVar2 + 0x18 + lVar7) + lVar9 * 0x10) != 0) {
            uVar5 = 0;
            if ((int)uVar1 < *(int *)(lVar2 + 0x20 + lVar7)) {
              uVar5 = ~uVar1 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)(lVar2 + 0x18 + lVar7);
            if ((*(longlong *)(lVar2 + lVar9 * 0x10) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            Chaos::Softs::FCollectionPropertyFacade::ClearDirtyFlags
                      (*(FCollectionPropertyFacade **)(lVar2 + lVar9 * 0x10));
          }
        }
        iVar6 = (int)this->_padding_;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x28;
      } while ((int)uVar8 < iVar6);
    }
  }
  return;
}

// _getUObject @ 14dc610a0

UObject * __thiscall UChaosClothComponent::_getUObject(UChaosClothComponent *this)

{
  return (UObject *)&this[-1].OnBoneTransformsFinalizedMC;
}

// _getUObject`adjustor{552}' @ 14dc610ac

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UChaosClothComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UChaosClothComponent::_getUObject_adjustor_552__(UChaosClothComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UChaosClothComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 14dc610c0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UChaosClothComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall UChaosClothComponent::_getUObject_adjustor_560__(UChaosClothComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UChaosClothComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 14dc610d4

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UChaosClothComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall UChaosClothComponent::_getUObject_adjustor_568__(UChaosClothComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UChaosClothComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1384}' @ 14dc610e8

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UChaosClothComponent::_getUObject`adjustor{1384}' (void)const __ptr64 */

UObject * __thiscall UChaosClothComponent::_getUObject_adjustor_1384__(UChaosClothComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UChaosClothComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{2328}' @ 14dc610fc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UChaosClothComponent::_getUObject`adjustor{2328}' (void)const __ptr64 */

UObject * __thiscall UChaosClothComponent::_getUObject_adjustor_2328__(UChaosClothComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UChaosClothComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execAddCollisionSource @ 14dc61110

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosClothComponent::execAddCollisionSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FWeakObjectPtr *this;
  UPhysicsAsset *pUVar3;
  USkinnedMeshComponent *pUVar4;
  bool bVar5;
  int iVar6;
  USkinnedMeshComponent *pUVar7;
  UObject *pUVar8;
  USkinnedMeshComponent *pUVar9;
  FWeakObjectPtr this_00;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr FVar10;
  bool bVar11;
  int local_res8 [2];
  UPhysicsAsset *local_res10;
  USkinnedMeshComponent *local_res20;
  USkinnedMeshComponent *local_48 [2];
  
  local_res20 = (USkinnedMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (UPhysicsAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pUVar4 = local_res20;
  pUVar3 = local_res10;
  bVar11 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FWeakObjectPtr **)&param_1[0x44].field_0x8;
  bVar5 = FWeakObjectPtr::IsValid(this);
  if (((bVar5) && (pUVar4 != (USkinnedMeshComponent *)0x0)) && (pUVar3 != (UPhysicsAsset *)0x0)) {
    this_00 = this[1];
    FVar10 = (FWeakObjectPtr)((longlong)this[2].ObjectIndex * 0x78 + (longlong)this_00);
    for (; this_00 != FVar10; this_00 = (FWeakObjectPtr)((longlong)this_00 + 0x78)) {
      bVar5 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
              UEOpEquals<USkinnedMeshComponent,bool>
                        ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_00,pUVar4);
      if ((bVar5) &&
         (bVar5 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::
                  UEOpEquals<UPhysicsAsset,bool>
                            ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)
                             ((longlong)this_00 + 0x10),pUVar3), bVar5)) {
        if (this_00 != (FWeakObjectPtr)0x0) {
          return;
        }
        break;
      }
    }
    iVar6 = this[2].ObjectIndex;
    if (iVar6 == this[2].ObjectSerialNumber) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)(this + 1),&this[2].ObjectSerialNumber);
    }
    this[2].ObjectIndex = iVar6 + 1;
    this_01 = (FWeakObjectPtr *)((longlong)iVar6 * 0x78 + (longlong)this[1]);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    this_01->ObjectIndex = 0;
    this_01->ObjectSerialNumber = 0;
    local_48[0] = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(this_01,(FObjectPtr)local_48);
    this_01[1].ObjectIndex = 0;
    this_01[1].ObjectSerialNumber = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this_01[2].ObjectIndex = 0;
    this_01[2].ObjectSerialNumber = 0;
    local_48[0] = (USkinnedMeshComponent *)pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(this_01 + 2,(FObjectPtr)local_48);
    this_01[3].ObjectIndex = 0;
    this_01[3].ObjectSerialNumber = 0;
    this_01[4].ObjectIndex = 0;
    this_01[4].ObjectSerialNumber = 0;
    this_01[5].ObjectIndex = 0;
    this_01[5].ObjectSerialNumber = 0;
    this_01[6].ObjectIndex = 0;
    this_01[6].ObjectSerialNumber = 0;
    this_01[7].ObjectIndex = 0;
    this_01[7].ObjectSerialNumber = 0;
    this_01[8].ObjectIndex = 0;
    this_01[8].ObjectSerialNumber = 0;
    this_01[9].ObjectIndex = 0;
    this_01[9].ObjectSerialNumber = 0;
    this_01[10].ObjectIndex = 0;
    this_01[10].ObjectSerialNumber = 0;
    this_01[0xb].ObjectIndex = 0;
    this_01[0xb].ObjectSerialNumber = 0;
    this_01[0xc].ObjectIndex = 0;
    this_01[0xc].ObjectSerialNumber = 0;
    this_01[0xd].ObjectIndex = 0;
    this_01[0xd].ObjectSerialNumber = 0;
    this_01[0xe].ObjectIndex = 0;
    *(bool *)&this_01[0xe].ObjectSerialNumber = bVar11;
    pUVar7 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(pUVar4->LeaderPoseComponent).WeakPtr);
    pUVar9 = pUVar4;
    if (pUVar7 != (USkinnedMeshComponent *)0x0) {
      pUVar9 = pUVar7;
    }
    this_01[0xe].ObjectIndex = pUVar9->CurrentBoneTransformRevisionNumber;
    pUVar8 = FWeakObjectPtr::Get(this);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&pUVar8[1].field_0x10,(UObject *)pUVar4,
               (FTickFunction *)&pUVar4->_padding_);
    this[0xb].ObjectIndex = this[0xb].ObjectIndex + 1;
  }
  return;
}

// execForceNextUpdateTeleport @ 14dc613c0

void __cdecl
UChaosClothComponent::execForceNextUpdateTeleport(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined2 *)&param_1[0x42].field_0x1 = 1;
  return;
}

// execForceNextUpdateTeleportAndReset @ 14dc613f0

void __cdecl
UChaosClothComponent::execForceNextUpdateTeleportAndReset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined2 *)&param_1[0x42].field_0x1 = 0x101;
  return;
}

// execGetAsset @ 14dc616f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UChaosClothComponent::execGetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(USkinnedAsset **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetClothAsset @ 14dc61770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UChaosClothComponent::execGetClothAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = UChaosClothAssetBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar3 = UChaosClothAsset::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        *(USkinnedAsset **)param_3 = pUVar2;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetClothOutfitInteractor @ 14dc61810

void __cdecl
UChaosClothComponent::execGetClothOutfitInteractor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UChaosClothAssetInteractor *pUVar2;
  int local_res10 [2];
  FName local_res18 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetClothOutfitInteractor((UChaosClothComponent *)param_1,local_res10[0],local_res18[0]);
  *(UChaosClothAssetInteractor **)param_3 = pUVar2;
  return;
}

// execGetCollideWithEnvironment @ 14dc61980

void __cdecl
UChaosClothComponent::execGetCollideWithEnvironment(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *(byte *)(param_1 + 0x3e) >> 7;
  return;
}

// execGetTeleportDistanceThreshold @ 14dc62780

void __cdecl
UChaosClothComponent::execGetTeleportDistanceThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x3e].field_0xc;
  return;
}

// execGetTeleportRotationThreshold @ 14dc627b0

void __cdecl
UChaosClothComponent::execGetTeleportRotationThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x3e].field_0x10;
  return;
}

// execIsSimulationEnabled @ 14dc62db0

void __cdecl
UChaosClothComponent::execIsSimulationEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[0x3b].field_0x10 + 0x30))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsSimulationSuspended @ 14dc62df0

void __cdecl
UChaosClothComponent::execIsSimulationSuspended(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[0x3b].field_0x10 + 0x38))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRecreateClothSimulationProxy @ 14dc62e30

void __cdecl
UChaosClothComponent::execRecreateClothSimulationProxy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RecreateClothSimulationProxy((UChaosClothComponent *)param_1);
  return;
}

// execRemoveCollisionSource @ 14dc62e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosClothComponent::execRemoveCollisionSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FWeakObjectPtr *this;
  uint uVar3;
  USkinnedMeshComponent *pUVar4;
  UPhysicsAsset *pUVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FWeakObjectPtr *this_00;
  uint uVar10;
  uint uVar11;
  uint local_res8;
  USkinnedMeshComponent *local_res20;
  UPhysicsAsset *local_58;
  USkinnedMeshComponent *local_50;
  UPhysicsAsset *local_48;
  longlong local_40;
  
  uVar11 = 0;
  local_res20 = (USkinnedMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (UPhysicsAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar5 = local_58;
  pUVar4 = local_res20;
  local_50 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = *(longlong *)&param_1[0x44].field_0x8;
  if (local_res20 != (USkinnedMeshComponent *)0x0) {
    iVar1 = *(int *)(local_40 + 0x10);
    local_48 = local_58;
    if (iVar1 != 0) {
      this = *(FWeakObjectPtr **)(local_40 + 8);
      local_res8 = 0;
      bVar6 = FWeakObjectPtr::IsValid(this);
      uVar8 = uVar11;
      uVar10 = uVar11;
      if ((bVar6) &&
         ((bVar6 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                   UEOpEquals<USkinnedMeshComponent,bool>
                             ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this,pUVar4),
          uVar8 = 0, uVar10 = 0, !bVar6 ||
          (bVar6 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::
                   UEOpEquals<UPhysicsAsset,bool>
                             ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)(this + 2),
                              pUVar5), !bVar6)))) {
        uVar11 = 1;
      }
      do {
        pUVar5 = local_48;
        pUVar4 = local_50;
        uVar3 = uVar8;
        do {
          uVar3 = uVar3 + 1;
          if (iVar1 <= (int)uVar3) break;
          this_00 = this + (longlong)(int)uVar3 * 0xf;
          bVar6 = FWeakObjectPtr::IsValid(this_00);
          if ((!bVar6) ||
             ((bVar6 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                       UEOpEquals<USkinnedMeshComponent,bool>
                                 ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_00,
                                  pUVar4), bVar6 &&
              (bVar6 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::
                       UEOpEquals<UPhysicsAsset,bool>
                                 ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)
                                  (this_00 + 2),pUVar5), bVar6)))) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          uVar10 = local_res8;
        } while (uVar11 == uVar7);
        iVar9 = uVar3 - uVar8;
        if ((byte)uVar11 == 0) {
          DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
                    ((FCollisionSource *)(this + (longlong)(int)uVar8 * 0xf),iVar9);
        }
        else {
          if (uVar10 != uVar8) {
            memmove(this + (longlong)(int)uVar10 * 0xf,this + (longlong)(int)uVar8 * 0xf,
                    (longlong)iVar9 * 0x78);
          }
          uVar10 = uVar10 + iVar9;
          local_res8 = uVar10;
        }
        uVar11 = (uint)(byte)((byte)uVar11 ^ 1);
        uVar8 = uVar3;
      } while ((int)uVar3 < iVar1);
      *(uint *)(local_40 + 0x10) = uVar10;
      if (0 < (int)(iVar1 - uVar10)) {
        *(int *)(local_40 + 0x58) = *(int *)(local_40 + 0x58) + 1;
      }
    }
  }
  return;
}

// execRemoveCollisionSources @ 14dc630a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosClothComponent::execRemoveCollisionSources(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  FWeakObjectPtr *this;
  USkinnedMeshComponent *pUVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  USkinnedMeshComponent *local_res10;
  
  local_res10 = (USkinnedMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)&param_1[0x44].field_0x8;
  if ((local_res10 != (USkinnedMeshComponent *)0x0) && (iVar1 = *(int *)(lVar3 + 0x10), iVar1 != 0))
  {
    iVar7 = 0;
    iVar10 = 0;
    this = *(FWeakObjectPtr **)(lVar3 + 8);
    bVar5 = FWeakObjectPtr::IsValid(this);
    if ((!bVar5) ||
       (bVar5 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                UEOpEquals<USkinnedMeshComponent,bool>
                          ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this,pUVar4),
       bVar5)) {
      bVar11 = 0;
      iVar8 = iVar7;
    }
    else {
      bVar11 = 1;
      iVar7 = 0;
      iVar10 = 0;
      iVar8 = 0;
    }
joined_r0x00014dc6318b:
    do {
      iVar7 = iVar7 + 1;
      if (iVar7 < iVar1) {
        bVar5 = FWeakObjectPtr::IsValid(this + (longlong)iVar7 * 0xf);
        if ((!bVar5) ||
           (bVar5 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                    UEOpEquals<USkinnedMeshComponent,bool>
                              ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)
                               (this + (longlong)iVar7 * 0xf),pUVar4), bVar5)) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar11 == bVar6) goto joined_r0x00014dc6318b;
      }
      iVar9 = iVar7 - iVar8;
      if (bVar11 == 0) {
        DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
                  ((FCollisionSource *)(this + (longlong)iVar8 * 0xf),iVar9);
      }
      else {
        if (iVar10 != iVar8) {
          memmove(this + (longlong)iVar10 * 0xf,this + (longlong)iVar8 * 0xf,(longlong)iVar9 * 0x78)
          ;
        }
        iVar10 = iVar10 + iVar9;
      }
      bVar11 = bVar11 ^ 1;
      iVar8 = iVar7;
    } while (iVar7 < iVar1);
    *(int *)(lVar3 + 0x10) = iVar10;
    if (0 < iVar1 - iVar10) {
      *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + 1;
    }
  }
  return;
}

// execResetCollisionSources @ 14dc63270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosClothComponent::execResetCollisionSources(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x44].field_0x8;
  if (-1 < *(int *)(lVar1 + 0x14)) {
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
              (*(FCollisionSource **)(lVar1 + 8),*(int *)(lVar1 + 0x10));
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(int *)(lVar1 + 0x58) = *(int *)(lVar1 + 0x58) + 1;
    return;
  }
  DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
            (*(FCollisionSource **)(lVar1 + 8),*(int *)(lVar1 + 0x10));
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if (*(int *)(lVar1 + 0x14) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)(lVar1 + 8),0,(int *)(lVar1 + 0x14));
  }
  *(int *)(lVar1 + 0x58) = *(int *)(lVar1 + 0x58) + 1;
  return;
}

// execResetConfigProperties @ 14dc63320

void __cdecl
UChaosClothComponent::execResetConfigProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResetConfigProperties((UChaosClothComponent *)param_1);
  return;
}

// execResetRestLengthsWithMorphTarget @ 14dc63340

void __cdecl
UChaosClothComponent::execResetRestLengthsWithMorphTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  ForAnyElementType _Src;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_18.Data;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x42].field_0x4 = 1;
  puVar4 = &param_1[0x42].field_0x8;
  if ((ForAnyElementType *)puVar4 != &local_18) {
    iVar3 = (int)local_10;
    lVar5 = (longlong)(int)local_10;
    puVar1 = &param_1[0x42].field_0x14;
    *(int *)&param_1[0x42].field_0x10 = (int)local_10;
    if (((int)local_10 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,*(int *)puVar1,(ForAnyElementType *)puVar4,(int)local_10,
                 (int *)puVar1);
      if (iVar3 != 0) {
        memcpy(*(void **)puVar4,_Src.Data,lVar5 * 2);
      }
    }
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execResetTeleportMode @ 14dc63450

void __cdecl
UChaosClothComponent::execResetTeleportMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0x9f;
  return;
}

// execResumeSimulation @ 14dc63480

void __cdecl
UChaosClothComponent::execResumeSimulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xf7;
  return;
}

// execSetAsset @ 14dc634b0

void __cdecl UChaosClothComponent::execSetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
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
  (**(code **)(*(longlong *)param_1 + 0xb50))(param_1,local_res8,1);
  return;
}

// execSetClothAsset @ 14dc63550

void __cdecl UChaosClothComponent::execSetClothAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
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
  (**(code **)(*(longlong *)param_1 + 0xb50))(param_1,local_res8,1);
  return;
}

// execSetCollideWithEnvironment @ 14dc635f0

void __cdecl
UChaosClothComponent::execSetCollideWithEnvironment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
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
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0x7f;
  lVar2 = *(longlong *)&param_1[0x44].field_0x8;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) | -(local_res8[0] != 0) & 0x80U;
  *(byte *)(lVar2 + 0x5c) = *(byte *)(param_1 + 0x3e) >> 7;
  return;
}

// execSetEnableSimulation @ 14dc636a0

void __cdecl
UChaosClothComponent::execSetEnableSimulation(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfb;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) | -(local_res8[0] != 0) & 4U;
  return;
}

// execSetSimulateInEditor @ 14dc642a0

void __cdecl
UChaosClothComponent::execSetSimulateInEditor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
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

// execSetTeleportDistanceThreshold @ 14dc647c0

void __cdecl
UChaosClothComponent::execSetTeleportDistanceThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[0x3e].field_0xc = local_res8[0];
  if (0.0 < local_res8[0]) {
    *(float *)&param_1[0x3e].field_0x14 = local_res8[0] * local_res8[0];
    return;
  }
  *(undefined4 *)&param_1[0x3e].field_0x14 = 0;
  return;
}

// execSetTeleportRotationThreshold @ 14dc64880

void __cdecl
UChaosClothComponent::execSetTeleportRotationThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[0x3e].field_0x10 = local_res8[0];
  fVar2 = __real_3f800000;
  if (0.0 < local_res8[0]) {
    fVar2 = cosf(local_res8[0] * __real_3c8efa35);
  }
  *(float *)&param_1[0x3e].field_0x18 = fVar2;
  return;
}

// execSuspendSimulation @ 14dc65260

void __cdecl
UChaosClothComponent::execSuspendSimulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) | 8;
  return;
}

