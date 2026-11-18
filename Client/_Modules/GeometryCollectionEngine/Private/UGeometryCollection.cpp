// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 84

// StaticClass @ 14639a5a0

UClass * __cdecl UGeometryCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollection",
               &Z_Registration_Info_UClass_UGeometryCollection.InnerSingleton,
               StaticRegisterNativesUGeometryCollection,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCollection>,
               InternalVTableHelperCtorCaller<UGeometryCollection>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollection.InnerSingleton;
}

// UGeometryCollection @ 1463a3d10

UGeometryCollection * __thiscall
UGeometryCollection::UGeometryCollection(UGeometryCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  (this->RenderData).Ptr = (FGeometryCollectionRenderData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  (this->DamageThreshold).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DamageThreshold).ArrayNum = 0;
  (this->DamageThreshold).ArrayMax = 0;
  (this->DamagePropagationData).bEnabled = true;
  (this->DamagePropagationData).BreakDamagePropagationFactor = 1.0;
  (this->DamagePropagationData).ShockDamagePropagationFactor = 0.0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->EmbeddedGeometryExemplar).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmbeddedGeometryExemplar).ArrayNum = 0;
  (this->EmbeddedGeometryExemplar).ArrayMax = 0;
  this->bUseFullPrecisionUVs = false;
  (this->CustomRendererType).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RootProxyData).ProxyMeshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyData).ProxyMeshes.ArrayNum = 0;
  (this->RootProxyData).ProxyMeshes.ArrayMax = 0;
  (this->RootProxyData).MeshTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyData).MeshTransforms.ArrayNum = 0;
  (this->RootProxyData).MeshTransforms.ArrayMax = 0;
  (this->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootProxyData).MeshOverrideMaterials.ArrayNum = 0;
  (this->RootProxyData).MeshOverrideMaterials.ArrayMax = 0;
  (this->AutoInstanceMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoInstanceMeshes).ArrayNum = 0;
  (this->AutoInstanceMeshes).ArrayMax = 0;
  this->bConvertVertexColorsToSRGB = true;
  (this->PhysicsMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->bOptimizeConvexes = true;
  (this->SizeSpecificData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SizeSpecificData).ArrayNum = 0;
  (this->SizeSpecificData).ArrayMax = 0;
  (this->RemoveOnFractureMaterials_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RemoveOnFractureMaterials_DEPRECATED).ArrayNum = 0;
  (this->RemoveOnFractureMaterials_DEPRECATED).ArrayMax = 0;
  *(undefined8 *)&this->Overrides = 0;
  *(undefined8 *)&(this->Overrides).field_0x8 = 0;
  *(undefined8 *)&(this->Overrides).field_0x20 = 0;
  *(undefined4 *)&(this->Overrides).field_0x28 = 0;
  *(undefined4 *)&(this->Overrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->Overrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Overrides).field_0x34 = 0;
  *(undefined8 *)&(this->Overrides).field_0x40 = 0;
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  FDataflowInstance::FDataflowInstance
            (&this->DataflowInstance,(UObject *)0x0,(UDataflow *)0x0,(FName)0x0);
  (this->PersistentGuid).A = 0;
  (this->PersistentGuid).B = 0;
  (this->PersistentGuid).C = 0;
  (this->PersistentGuid).D = 0;
  (this->StateGuid).A = 0;
  (this->StateGuid).B = 0;
  (this->StateGuid).C = 0;
  (this->StateGuid).D = 0;
  this->RootIndex = -1;
  (this->BreadthFirstTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreadthFirstTransformIndices).ArrayNum = 0;
  (this->BreadthFirstTransformIndices).ArrayMax = 0;
  (this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoInstanceTransformRemapIndices).ArrayNum = 0;
  (this->AutoInstanceTransformRemapIndices).ArrayMax = 0;
  this->BoneSelectedMaterialIndex = -1;
  (this->GeometryCollection).Object = (FGeometryCollection *)0x0;
  (this->GeometryCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->RenderResourceReleaseFence);
  return this;
}

// UGeometryCollection @ 1463a3f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGeometryCollection * __thiscall
UGeometryCollection::UGeometryCollection(UGeometryCollection *this,FObjectInitializer *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FGeometryCollectionSizeSpecificData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  FGeometryCollection *pFVar10;
  FGeometryCollection *pFVar11;
  FGeometryCollection *pFVar12;
  FGuid *pFVar13;
  FGeometryCollection *pFVar14;
  undefined1 auStackY_138 [32];
  FCollectionHierarchyFacade local_f8;
  FLinearColor_u_0 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  UObject::UObject((UObject *)this,param_1);
  pFVar14 = (FGeometryCollection *)0x0;
  this->_padding_ = 2;
  pTVar1 = &this->DamageThreshold;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->RenderData).Ptr = (FGeometryCollectionRenderData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->EnableClustering = true;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  this->ClusterGroupIndex = 0;
  this->MaxClusterLevel = 100;
  this->DamageModel = Chaos_Damage_Model_UserDefined_Damage_Threshold;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_48._s_0.B = 5000.0;
  local_48._0_8_ = 0x4743500048f42400;
  (this->DamageThreshold).ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&pTVar1->AllocatorInstance,3,&(this->DamageThreshold).ArrayMax);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)pFVar3 = local_48._0_8_;
  *(float *)(pFVar3 + 8) = local_48._s_0.B;
  this->bUseSizeSpecificDamageThreshold = false;
  this->bUseMaterialDamageModifiers = false;
  this->PerClusterOnlyDamageThreshold = false;
  (this->DamagePropagationData).bEnabled = true;
  (this->DamagePropagationData).BreakDamagePropagationFactor = 1.0;
  (this->DamagePropagationData).ShockDamagePropagationFactor = 0.0;
  this->ClusterConnectionType = Chaos_MinimalSpanningSubsetDelaunayTriangulation;
  this->ConnectionGraphBoundsFilteringMargin = 0.0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->EmbeddedGeometryExemplar).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmbeddedGeometryExemplar).ArrayNum = 0;
  (this->EmbeddedGeometryExemplar).ArrayMax = 0;
  this->bUseFullPrecisionUVs = false;
  this->bStripOnCook = false;
  this->bStripRenderDataOnCook = false;
  (this->CustomRendererType).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RootProxyData).ProxyMeshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyData).ProxyMeshes.ArrayNum = 0;
  (this->RootProxyData).ProxyMeshes.ArrayMax = 0;
  (this->RootProxyData).MeshTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyData).MeshTransforms.ArrayNum = 0;
  (this->RootProxyData).MeshTransforms.ArrayMax = 0;
  (this->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootProxyData).MeshOverrideMaterials.ArrayNum = 0;
  (this->RootProxyData).MeshOverrideMaterials.ArrayMax = 0;
  (this->AutoInstanceMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoInstanceMeshes).ArrayNum = 0;
  (this->AutoInstanceMeshes).ArrayMax = 0;
  this->EnableNanite = false;
  this->bEnableNaniteFallback = false;
  this->NaniteMinimumResidencyInKB = 0;
  this->bConvertVertexColorsToSRGB = true;
  (this->PhysicsMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->bDensityFromPhysicsMaterial = false;
  this->CachedDensityFromPhysicsMaterialInGCm3 = 0.0;
  this->bMassAsDensity = true;
  this->Mass = 2500.0;
  this->MinimumMassClamp = 0.1;
  this->bImportCollisionFromSource = false;
  this->bOptimizeConvexes = Chaos::CVars::bChaosConvexSimplifyUnion;
  (this->MaximumSleepTime).field0_0x0._s_0.Y = 10.0;
  (this->RemovalDuration).field0_0x0._s_0.X = 2.5;
  this->bScaleOnRemoval = true;
  this->bRemoveOnMaxSleep = false;
  this->bAutomaticCrumblePartialClusters = true;
  (this->MaximumSleepTime).field0_0x0._s_0.X = 5.0;
  (this->RemovalDuration).field0_0x0._s_0.Y = 5.0;
  pTVar2 = &this->SizeSpecificData;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SizeSpecificData).ArrayNum = 0;
  (this->SizeSpecificData).ArrayMax = 0;
  this->bSlowMovingAsSleeping = true;
  this->SlowMovingVelocityThreshold = 1.0;
  this->EnableRemovePiecesOnFracture_DEPRECATED = false;
  (this->RemoveOnFractureMaterials_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RemoveOnFractureMaterials_DEPRECATED).ArrayNum = 0;
  (this->RemoveOnFractureMaterials_DEPRECATED).ArrayMax = 0;
  *(undefined8 *)&this->Overrides = 0;
  *(undefined8 *)&(this->Overrides).field_0x8 = 0;
  *(undefined8 *)&(this->Overrides).field_0x20 = 0;
  *(undefined4 *)&(this->Overrides).field_0x28 = 0;
  *(undefined4 *)&(this->Overrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->Overrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Overrides).field_0x34 = 0;
  *(undefined8 *)&(this->Overrides).field_0x40 = 0;
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_48._8_8_;
  local_48 = (FLinearColor_u_0)(auVar4 << 0x40);
  FDataflowInstance::FDataflowInstance
            (&this->DataflowInstance,(UObject *)this,(UDataflow *)0x0,(FName)0x0);
  (this->PersistentGuid).A = 0;
  (this->PersistentGuid).B = 0;
  (this->PersistentGuid).C = 0;
  (this->PersistentGuid).D = 0;
  (this->StateGuid).A = 0;
  (this->StateGuid).B = 0;
  (this->StateGuid).C = 0;
  (this->StateGuid).D = 0;
  this->RootIndex = -1;
  (this->BreadthFirstTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreadthFirstTransformIndices).ArrayNum = 0;
  (this->BreadthFirstTransformIndices).ArrayMax = 0;
  (this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoInstanceTransformRemapIndices).ArrayNum = 0;
  (this->AutoInstanceTransformRemapIndices).ArrayMax = 0;
  this->BoneSelectedMaterialIndex = -1;
  pFVar10 = ::operator_new(0x4c0);
  pFVar11 = pFVar14;
  if (pFVar10 != (FGeometryCollection *)0x0) {
    local_48 = FLinearColor::White.field0_0x0;
    pFVar11 = FGeometryCollection::FGeometryCollection
                        (pFVar10,(FGeometryCollectionDefaults *)&local_48._s_0);
  }
  (this->GeometryCollection).Object = pFVar11;
  pFVar12 = ::operator_new(0x18);
  pFVar10 = pFVar14;
  if (pFVar12 != (FGeometryCollection *)0x0) {
    *(undefined4 *)&pFVar12->_padding_ = 1;
    pFVar12->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGeometryCollection__U__DefaultDeleter_VFGeometryCollection___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 1;
    pFVar12->_padding_ = (longlong)pFVar11;
    pFVar10 = pFVar12;
  }
  (this->GeometryCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar10;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->RenderResourceReleaseFence);
  bVar8 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar8) {
    pFVar13 = FGuid::NewGuid((FGuid *)&local_48._s_0);
    uVar5 = pFVar13->B;
    uVar6 = pFVar13->C;
    uVar7 = pFVar13->D;
    (this->PersistentGuid).A = pFVar13->A;
    (this->PersistentGuid).B = uVar5;
    (this->PersistentGuid).C = uVar6;
    (this->PersistentGuid).D = uVar7;
  }
  bVar8 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar8) {
    pFVar13 = FGuid::NewGuid((FGuid *)&local_48._s_0);
    uVar5 = pFVar13->B;
    uVar6 = pFVar13->C;
    uVar7 = pFVar13->D;
    (this->StateGuid).A = pFVar13->A;
    (this->StateGuid).B = uVar5;
    (this->StateGuid).C = uVar6;
    (this->StateGuid).D = uVar7;
  }
  pFVar11 = (this->GeometryCollection).Object;
  this->RootIndex = -1;
  if (pFVar11 != (FGeometryCollection *)0x0) {
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
              (&local_f8,(FManagedArrayCollection *)pFVar11);
    iVar9 = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_f8);
    this->RootIndex = iVar9;
  }
  CacheBreadthFirstTransformIndices(this);
  if (GEngine != (UEngine *)0x0) {
    pFVar14 = (FGeometryCollection *)(GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1463a435d;
    if (pFVar14 != (FGeometryCollection *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pFVar14);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar14 != (FGeometryCollection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pFVar14);
  }
LAB_1463a435d:
  (this->PhysicsMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)pFVar14;
  iVar9 = (this->SizeSpecificData).ArrayNum;
  if (iVar9 == (this->SizeSpecificData).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,&(this->SizeSpecificData).ArrayMax);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->SizeSpecificData).ArrayNum = iVar9 + 1;
  DefaultConstructItems<FGeometryCollectionSizeSpecificData,int>(pFVar3 + (longlong)iVar9 * 0x20,1);
  FDataflowInstance::SetDataflowTerminal
            (&this->DataflowInstance,GeometryCollectionDataflowTerminalNodeName);
  return this;
}

// ~UGeometryCollection @ 1463a5a40

void __thiscall UGeometryCollection::~UGeometryCollection(UGeometryCollection *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  FRenderCommandFence::~FRenderCommandFence(&this->RenderResourceReleaseFence);
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GeometryCollection).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BreadthFirstTransformIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowInstance::~FDataflowInstance(&this->DataflowInstance);
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Overrides).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Overrides);
  pFVar1 = (this->RemoveOnFractureMaterials_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionSizeSpecificData,int>
            ((FGeometryCollectionSizeSpecificData *)(this->SizeSpecificData).AllocatorInstance.Data,
             (this->SizeSpecificData).ArrayNum);
  pFVar1 = (this->SizeSpecificData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)
             (this->AutoInstanceMeshes).AllocatorInstance.Data,(this->AutoInstanceMeshes).ArrayNum);
  pFVar1 = (this->AutoInstanceMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionProxyMeshMaterials,int>
            ((FGeometryCollectionProxyMeshMaterials *)
             (this->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data,
             (this->RootProxyData).MeshOverrideMaterials.ArrayNum);
  pFVar1 = (this->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootProxyData).MeshTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootProxyData).ProxyMeshes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionEmbeddedExemplar,int>
            ((FGeometryCollectionEmbeddedExemplar *)
             (this->EmbeddedGeometryExemplar).AllocatorInstance.Data,
             (this->EmbeddedGeometryExemplar).ArrayNum);
  pFVar1 = (this->EmbeddedGeometryExemplar).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DamageThreshold).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<FGeometryCollectionRenderData>::operator()
            ((TDefaultDelete<FGeometryCollectionRenderData> *)&this->RenderData,
             (this->RenderData).Ptr);
  this->_padding_ = (longlong)&___7IDataflowInstanceInterface__6B_;
  this->_padding_ = (longlong)&___7IDataflowContentOwner__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 1463a8f20

void __thiscall
UGeometryCollection::AddAssetUserData(UGeometryCollection *this,UAssetUserData *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar3 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar7 = (UObject *)(*pcVar3)(this,local_res18);
    if (pUVar7 != (UObject *)0x0) {
      local_48 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      pFVar4 = (this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar4 + (longlong)(this->AutoInstanceTransformRemapIndices).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->AutoInstanceTransformRemapIndices).ArrayNum;
      if (iVar6 != 0) {
        iVar11 = 0;
        pFVar4 = (this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data;
        bVar5 = *(UObject **)pFVar4 != local_48;
        lVar8 = 0;
        pUVar7 = local_48;
        iVar9 = 0;
        do {
          iVar10 = iVar9;
          do {
            lVar8 = lVar8 + 1;
            iVar10 = iVar10 + 1;
            if (iVar6 <= lVar8) break;
          } while (bVar5 == (*(UObject **)(pFVar4 + lVar8 * 8) != pUVar7));
          if (bVar5 != false) {
            if (iVar11 != iVar9) {
              memmove(pFVar4 + (longlong)iVar11 * 8,pFVar4 + (longlong)iVar9 * 8,
                      (longlong)(iVar10 - iVar9) << 3);
              pUVar7 = local_48;
            }
            iVar11 = iVar11 + (iVar10 - iVar9);
          }
          bVar5 = (bool)(bVar5 ^ 1);
          iVar9 = iVar10;
        } while (lVar8 < iVar6);
        (this->AutoInstanceTransformRemapIndices).ArrayNum = iVar11;
      }
    }
    pTVar2 = &this->AutoInstanceTransformRemapIndices;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 <
         pFVar4 + (longlong)(this->AutoInstanceTransformRemapIndices).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->AutoInstanceTransformRemapIndices).ArrayNum;
    piVar1 = &(this->AutoInstanceTransformRemapIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->AutoInstanceTransformRemapIndices).ArrayNum = iVar6 + 1;
    *(UAssetUserData **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// AddNewMaterialSlot @ 1463a9f30

int __thiscall UGeometryCollection::AddNewMaterialSlot(UGeometryCollection *this,bool param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  pTVar2 = &this->Materials;
  uVar8 = (this->Materials).ArrayNum;
  piVar1 = &(this->Materials).ArrayMax;
  if (uVar8 == *piVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Materials).ArrayNum = uVar8 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) = 0;
  if ((0 < (int)uVar8) && (param_1)) {
    uVar11 = uVar8 - 1;
    uVar10 = 0;
    if ((int)uVar11 < (this->Materials).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
    uVar11 = 0;
    if ((int)uVar8 < (this->Materials).ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = *(UObject **)pFVar3, pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 * 8) = *(undefined8 *)pFVar3;
  }
  InvalidateCollection(this);
  return uVar8;
}

// AppendGeometry @ 1463aa360

int __thiscall
UGeometryCollection::AppendGeometry
          (UGeometryCollection *this,UGeometryCollection *param_1,bool param_2,
          TTransform<double> *param_3)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FGeometryCollection *this_00;
  FGeometryCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  
  InvalidateCollection(this);
  iVar8 = 0;
  if (0 < (param_1->Materials).ArrayNum) {
    pTVar1 = &this->Materials;
    piVar2 = &(this->Materials).ArrayNum;
    iVar8 = *piVar2;
    if ((pTVar1 == &param_1->Materials) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    iVar3 = (param_1->Materials).ArrayNum;
    if (iVar3 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar3,&pTVar1->AllocatorInstance,piVar2,&(this->Materials).ArrayMax);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8,
                 (TObjectPtr<UMaterialInterface> *)(param_1->Materials).AllocatorInstance.Data,iVar3
                );
    }
  }
  if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar8 = (*pcVar6)();
    return iVar8;
  }
  this_00 = (this->GeometryCollection).Object;
  pFVar4 = (param_1->GeometryCollection).Object;
  pTVar5 = (param_1->GeometryCollection).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar4 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar8 = (*pcVar6)();
    return iVar8;
  }
  iVar8 = FGeometryCollection::AppendGeometry(this_00,pFVar4,iVar8,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar8;
}

// AttachEmbeddedGeometryExemplar @ 1463aa6f0

int __thiscall
UGeometryCollection::AttachEmbeddedGeometryExemplar(UGeometryCollection *this,UStaticMesh *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<FGeometryCollectionEmbeddedExemplar,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  size_t _Size;
  FSoftObjectPath local_58;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  uVar9 = 0;
  local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58.AssetPath.PackageName.Number = 0;
  local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58.AssetPath.AssetName.Number = 0;
  local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SubPathString.Data.ArrayNum = 0;
  local_58.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_58,(UObject *)param_1);
  pTVar3 = &this->EmbeddedGeometryExemplar;
  if (0 < (this->EmbeddedGeometryExemplar).ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->EmbeddedGeometryExemplar).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      bVar6 = FSoftObjectPath::operator==
                        (&local_58,
                         (FSoftObjectPath *)
                         ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30));
      if (bVar6) goto LAB_1463aa8cd;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->EmbeddedGeometryExemplar).ArrayNum);
  }
  uVar9 = (this->EmbeddedGeometryExemplar).ArrayNum;
  piVar1 = &(this->EmbeddedGeometryExemplar).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar3->AllocatorInstance,piVar1);
    (this->EmbeddedGeometryExemplar).ArrayNum = uVar9;
  }
  FVar5.Data = local_58.SubPathString.Data.AllocatorInstance.Data;
  (this->EmbeddedGeometryExemplar).ArrayNum = uVar9 + 1;
  local_38 = local_58.AssetPath.PackageName.ComparisonIndex.Value;
  uStack_34 = local_58.AssetPath.PackageName.Number;
  uStack_30 = local_58.AssetPath.AssetName.ComparisonIndex.Value;
  uStack_2c = local_58.AssetPath.AssetName.Number;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar10 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30;
  _Size = (size_t)local_58.SubPathString.Data.ArrayNum;
  local_20 = local_58.SubPathString.Data.ArrayNum;
  if (local_58.SubPathString.Data.ArrayNum == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_58.SubPathString.Data.ArrayNum,0,&local_28,
               local_58.SubPathString.Data.ArrayNum,&local_1c);
    memcpy(local_28.Data,FVar5.Data,_Size);
  }
  iVar8 = local_20;
  FVar5.Data = local_28.Data;
  pFVar2 = pFVar10 + 0x10;
  *(uint *)pFVar10 = local_38;
  *(uint *)(pFVar10 + 4) = uStack_34;
  *(uint *)(pFVar10 + 8) = uStack_30;
  *(uint *)(pFVar10 + 0xc) = uStack_2c;
  *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 0x18) = local_20;
  if (local_20 == 0) {
    *(int *)(pFVar10 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_20,0,(ForAnyElementType *)pFVar2,local_20,(int *)(pFVar10 + 0x1c));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar2,FVar5.Data,(longlong)iVar8);
  }
  *(undefined8 *)(pFVar10 + 0x20) = 0;
  *(undefined4 *)(pFVar10 + 0x28) = 0;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_1463aa8cd:
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  return uVar9;
}

// BeginDestroy @ 1463ab820

void __thiscall UGeometryCollection::BeginDestroy(UGeometryCollection *this)

{
  FGeometryCollectionRenderData *this_00;
  
  UObject::BeginDestroy((UObject *)this);
  this_00 = (this->RenderData).Ptr;
  if (this_00 != (FGeometryCollectionRenderData *)0x0) {
    FGeometryCollectionRenderData::ReleaseResources(this_00);
  }
  FRenderCommandFence::BeginFence(&this->RenderResourceReleaseFence,RenderThread);
  return;
}

// CacheAutoInstanceTransformRemapIndices @ 1463ad900

void __thiscall
UGeometryCollection::CacheAutoInstanceTransformRemapIndices(UGeometryCollection *this)

{
  int *piVar1;
  size_t _Size;
  undefined4 uVar2;
  FGeometryCollection *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  longlong local_res8;
  ForAnyElementType local_c8;
  int local_c0 [2];
  ForAnyElementType local_b8;
  int local_b0 [2];
  ForAnyElementType local_a8;
  int local_a0 [2];
  ForAnyElementType local_98;
  int local_90 [2];
  int *local_88;
  FCollectionInstancedMeshFacade local_80;
  
  piVar18 = &(this->AutoInstanceTransformRemapIndices).ArrayMax;
  piVar1 = &(this->AutoInstanceTransformRemapIndices).ArrayNum;
  *piVar1 = 0;
  local_88 = piVar18;
  if ((this->AutoInstanceTransformRemapIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AutoInstanceTransformRemapIndices).AllocatorInstance,0,piVar18);
  }
  pFVar3 = (this->GeometryCollection).Object;
  if (pFVar3 != (FGeometryCollection *)0x0) {
    GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
              (&local_80,(FManagedArrayCollection *)pFVar3);
    bVar6 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::IsValid(&local_80);
    if (bVar6) {
      iVar8 = (this->AutoInstanceMeshes).ArrayNum;
      if (iVar8 != 0) {
        local_98.Data = (FScriptContainerElement *)0x0;
        local_90[0] = 0;
        local_90[1] = 0;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar8,&local_98,local_90,local_90 + 1);
        _Size = (longlong)iVar8 * 4;
        memset(local_98.Data + (longlong)iVar7 * 4,0,_Size);
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar8,&local_c8,local_c0,local_c0 + 1);
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0[0] = 0;
        local_b0[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar8,&local_b8,local_b0,local_b0 + 1);
        local_a8.Data = (FScriptContainerElement *)0x0;
        local_a0[0] = 0;
        local_a0[1] = 0;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar8,&local_a8,local_a0,local_a0 + 1);
        memset(local_a8.Data + (longlong)iVar7 * 4,0,_Size);
        uVar11 = 0;
        if (0 < iVar8) {
          lVar17 = 0;
          lVar16 = 0;
          do {
            uVar15 = ~uVar11 >> 0x1f;
            uVar14 = 0;
            if ((int)uVar11 < (this->AutoInstanceMeshes).ArrayNum) {
              uVar14 = uVar15;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar2 = *(undefined4 *)
                     ((this->AutoInstanceMeshes).AllocatorInstance.Data + lVar16 + 0x18);
            if (uVar11 == 0) {
              iVar13 = 0;
              iVar7 = local_c0[0];
            }
            else {
              uVar14 = 0;
              if ((int)(uVar11 - 1) < local_b0[0]) {
                uVar14 = -uVar11 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar10 = local_b8.Data + lVar17 * 4 + -4;
              uVar14 = 0;
              if ((int)(uVar11 - 1) < local_c0[0]) {
                uVar14 = -uVar11 >> 0x1f;
              }
              iVar7 = local_c0[0];
              if (uVar14 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar7 = local_c0[0];
              }
              iVar13 = *(int *)(local_c8.Data + lVar17 * 4 + -4) + *(int *)pFVar10;
            }
            uVar14 = 0;
            if ((int)uVar11 < iVar7) {
              uVar14 = uVar15;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(int *)(local_c8.Data + lVar17 * 4) = iVar13;
            uVar14 = 0;
            if ((int)uVar11 < local_b0[0]) {
              uVar14 = uVar15;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = uVar11 + 1;
            lVar16 = lVar16 + 0x30;
            *(undefined4 *)(local_b8.Data + lVar17 * 4) = uVar2;
            lVar17 = lVar17 + 1;
            piVar18 = local_88;
          } while (lVar17 < iVar8);
        }
        uVar11 = 0;
        if ((int)(local_c0[0] - 1U) < local_c0[0]) {
          uVar11 = ~(local_c0[0] - 1U) >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar5.Data = local_c8.Data;
        lVar16 = (longlong)local_c0[0];
        uVar11 = 0;
        if ((int)(local_b0[0] - 1U) < local_b0[0]) {
          uVar11 = ~(local_b0[0] - 1U) >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,*(int *)(local_b8.Data + (longlong)(local_b0[0] + -1) * 4) +
                       *(int *)(FVar5.Data + lVar16 * 4 + -4),
                   &(this->AutoInstanceTransformRemapIndices).AllocatorInstance,piVar1,piVar18);
        uVar11 = 0;
        iVar8 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetNumIndices
                          (&local_80);
        local_res8 = (longlong)iVar8;
        if (0 < iVar8) {
          lVar16 = 0;
          do {
            if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->GeometryCollection).Object;
            uVar14 = 0;
            if ((int)uVar11 < (int)pFVar3->_padding_) {
              uVar14 = ~uVar11 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar17 = pFVar3->_padding_;
            if (*(int *)(lVar16 + 8 + lVar17) == *(int *)(lVar16 + 0x34 + lVar17)) {
              uVar15 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetIndex
                                 (&local_80,uVar11);
              lVar17 = (longlong)(int)uVar15;
              uVar12 = ~uVar15 >> 0x1f;
              uVar14 = 0;
              if ((int)uVar15 < local_a0[0]) {
                uVar14 = uVar12;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = *(int *)(local_a8.Data + lVar17 * 4);
              uVar14 = 0;
              if ((int)uVar15 < local_b0[0]) {
                uVar14 = uVar12;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (iVar8 < *(int *)(local_b8.Data + lVar17 * 4)) {
                uVar14 = 0;
                if ((int)uVar15 < local_c0[0]) {
                  uVar14 = uVar12;
                }
                if ((uVar14 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar14 = iVar8 + *(int *)(local_c8.Data + lVar17 * 4);
                if ((-1 < (int)uVar14) &&
                   ((int)uVar14 < (this->AutoInstanceTransformRemapIndices).ArrayNum)) {
                  uVar9 = 0;
                  if ((int)uVar14 < *piVar1) {
                    uVar9 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  *(uint *)((this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data +
                           (longlong)(int)uVar14 * 4) = uVar11;
                  uVar14 = 0;
                  if ((int)uVar15 < local_a0[0]) {
                    uVar14 = uVar12;
                  }
                  if ((uVar14 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  *(int *)(local_a8.Data + lVar17 * 4) = *(int *)(local_a8.Data + lVar17 * 4) + 1;
                }
              }
            }
            uVar11 = uVar11 + 1;
            lVar16 = lVar16 + 0x50;
            local_res8 = local_res8 + -1;
          } while (local_res8 != 0);
        }
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data);
        }
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
      }
    }
  }
  return;
}

// CacheBreadthFirstTransformIndices @ 1463ae040

void __thiscall UGeometryCollection::CacheBreadthFirstTransformIndices(UGeometryCollection *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeometryCollection *pFVar3;
  FScriptContainerElement *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  FCollectionHierarchyFacade local_b8;
  
  pTVar2 = &this->BreadthFirstTransformIndices;
  piVar1 = &(this->BreadthFirstTransformIndices).ArrayMax;
  (this->BreadthFirstTransformIndices).ArrayNum = 0;
  if ((this->BreadthFirstTransformIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar3 = (this->GeometryCollection).Object;
  if (pFVar3 != (FGeometryCollection *)0x0) {
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
              (&local_b8,(FManagedArrayCollection *)pFVar3);
    pTVar5 = Chaos::Facades::FCollectionHierarchyFacade::ComputeTransformIndicesInBreadthFirstOrder
                       (&local_b8,&local_c8);
    if (pTVar2 != pTVar5) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BreadthFirstTransformIndices).ArrayNum = pTVar5->ArrayNum;
      *piVar1 = pTVar5->ArrayMax;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  return;
}

// CacheMaterialDensity @ 1463ae110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGeometryCollection::CacheMaterialDensity(UGeometryCollection *this)

{
  UPhysicalMaterial *pUVar1;
  
  pUVar1 = (this->PhysicsMaterial).field0_0x0.DebugPtr;
  this->CachedDensityFromPhysicsMaterialInGCm3 = 0.0;
  if ((pUVar1 != (UPhysicalMaterial *)0x0) ||
     ((GEngine != (UEngine *)0x0 &&
      (pUVar1 = (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr,
      pUVar1 != (UPhysicalMaterial *)0x0)))) {
    this->CachedDensityFromPhysicsMaterialInGCm3 = pUVar1->Density;
  }
  return;
}

// CreateDataflowContent @ 1463aebb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDataflowBaseContent> __thiscall
UGeometryCollection::CreateDataflowContent(UGeometryCollection *this)

{
  int *piVar1;
  UDataflowBaseContent *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  TObjectPtr<UDataflowBaseContent>_u_0 in_RDX;
  undefined1 auStack_d8 [32];
  TObjectPtr<UObject>_u_0 local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDataflowBaseContent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar2 = (UDataflowBaseContent *)(in_RDX.DebugPtr)->_padding_;
  piVar1 = &this[-1].BoneSelectedMaterialIndex;
  local_b8[0] = (TObjectPtr<UObject>_u_0)piVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (piVar1 != (int *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)piVar1);
  }
  UDataflowBaseContent::SetDataflowOwner(pUVar2,(TObjectPtr<UObject> *)&local_b8[0].ObjectPtr);
  pUVar2 = (UDataflowBaseContent *)(in_RDX.DebugPtr)->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (piVar1 != (int *)0x0) {
      UE::GC::MarkAsReachable((UObject *)piVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (piVar1 != (int *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)piVar1);
    }
  }
  (pUVar2->TerminalAsset).field0_0x0.DebugPtr = (UObject *)piVar1;
  UDataflowBaseContent::SetConstructionDirty(pUVar2,true);
  UDataflowBaseContent::SetSimulationDirty(pUVar2,true);
  (**(code **)(this->_padding_ + 0x10))(this);
  return (TObjectPtr<UDataflowBaseContent>)in_RDX;
}

// FillAutoInstanceMeshesInstancesIfNeeded @ 1463b10d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGeometryCollection::FillAutoInstanceMeshesInstancesIfNeeded(UGeometryCollection *this)

{
  FGeometryCollection *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FString local_78;
  FCollectionInstancedMeshFacade local_68;
  
  if ((this->GeometryCollection).Object != (FGeometryCollection *)0x0) {
    iVar5 = (this->AutoInstanceMeshes).ArrayNum;
    if ((0 < iVar5) &&
       (pFVar8 = (this->AutoInstanceMeshes).AllocatorInstance.Data, *(int *)(pFVar8 + 0x18) == 0)) {
      pFVar11 = pFVar8 + (longlong)iVar5 * 0x30;
      uVar9 = 0;
      while( true ) {
        if ((this->AutoInstanceMeshes).ArrayNum != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FGeometryCollectionAutoInstanceMesh,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar8 == pFVar11) break;
        *(undefined4 *)(pFVar8 + 0x18) = 0;
        pFVar8 = pFVar8 + 0x30;
      }
      if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
                (&local_68,(FManagedArrayCollection *)(this->GeometryCollection).Object);
      bVar4 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::IsValid(&local_68);
      if (bVar4) {
        if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (**(code **)(((this->GeometryCollection).Object)->_padding_ + 0x60))();
        lVar13 = (longlong)iVar5;
        uVar12 = uVar9;
        if (0 < iVar5) {
          do {
            if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this->GeometryCollection).Object;
            uVar10 = (uint)uVar12;
            uVar6 = 0;
            if ((int)uVar10 < (int)pFVar1->_padding_) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            lVar2 = pFVar1->_padding_;
            if (*(int *)(lVar2 + 8 + uVar9) == *(int *)(lVar2 + 0x34 + uVar9)) {
              uVar6 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetIndex
                                (&local_68,uVar10);
              if ((-1 < (int)uVar6) && ((int)uVar6 < (this->AutoInstanceMeshes).ArrayNum)) {
                uVar7 = 0;
                if ((int)uVar6 < (this->AutoInstanceMeshes).ArrayNum) {
                  uVar7 = ~uVar6 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar8 = (this->AutoInstanceMeshes).AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 0x30 + 0x18;
                *(int *)pFVar8 = *(int *)pFVar8 + 1;
              }
            }
            uVar9 = uVar9 + 0x50;
            lVar13 = lVar13 + -1;
            uVar12 = (ulonglong)(uVar10 + 1);
          } while (lVar13 != 0);
        }
      }
      else if (2 < (byte)LogGeometryCollectionInternal._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionInternal);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// FindOrAddAutoInstanceMesh @ 1463b2070

int __thiscall
UGeometryCollection::FindOrAddAutoInstanceMesh
          (UGeometryCollection *this,FGeometryCollectionAutoInstanceMesh *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FGeometryCollectionAutoInstanceMesh_const_&>
                    (&this->AutoInstanceMeshes,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->AutoInstanceMeshes).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->AutoInstanceMeshes).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30 + 0x18;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  return uVar4;
}

// FindOrAddAutoInstanceMesh @ 1463b2100

int __thiscall
UGeometryCollection::FindOrAddAutoInstanceMesh
          (UGeometryCollection *this,UStaticMesh *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  TObjectPtr<UStaticMesh_const_>_u_0 local_38;
  ForAnyElementType local_30;
  int local_28;
  uint local_24 [3];
  void *local_18;
  undefined8 local_10;
  
  local_30.Data = (FScriptContainerElement *)0x0;
  uVar6 = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  uVar4 = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    uVar4 = local_24[0];
  }
  iVar5 = param_2->ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38.DebugPtr = param_1;
  local_28 = iVar5;
  if ((iVar5 != 0) || (uVar4 != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,uVar4,&local_30,iVar5,(int *)local_24);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              (local_30.Data,(UMaterialInterface **)pFVar1,iVar5);
  }
  uVar4 = TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FGeometryCollectionAutoInstanceMesh_const_&>
                    (&this->AutoInstanceMeshes,
                     (FGeometryCollectionAutoInstanceMesh *)&local_38.ObjectPtr);
  if ((int)uVar4 < (this->AutoInstanceMeshes).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->AutoInstanceMeshes).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30 + 0x18;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return uVar4;
}

// GeometryCollectionSizeSpecificDataDefaults @ 1463b2650

FGeometryCollectionSizeSpecificData * __cdecl
UGeometryCollection::GeometryCollectionSizeSpecificDataDefaults
          (FGeometryCollectionSizeSpecificData *__return_storage_ptr__)

{
  undefined4 uVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  FGeometryCollectionSizeSpecificData *pFVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  FGeometryCollectionSizeSpecificData::FGeometryCollectionSizeSpecificData(__return_storage_ptr__);
  iVar2 = (__return_storage_ptr__->CollisionShapes).ArrayNum;
  __return_storage_ptr__->MaxSize = 99999.9;
  if (iVar2 != 0) {
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data = (FScriptContainerElement)0x0
    ;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    (__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data[1] =
         (FScriptContainerElement)0x2;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 4) = 5;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 8) = 10;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 0xc) = 0x19;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 0x10) = 0x32;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 0x1c) =
         0x3f800000;
    pUVar7 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    pUVar3 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      pFVar8 = GetTypeName<UPhysicsSettings>(&local_48);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar9);
    }
    pUVar7 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<UPhysicsSettings>(&local_38);
      pwVar9 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UObject>(local_28,pUVar3);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar10);
    }
    uVar1 = *(undefined4 *)&pUVar3[3].field_0xc;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 0x20) = uVar1
    ;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 0x14) =
         0x3f800000;
    if ((__return_storage_ptr__->CollisionShapes).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)((__return_storage_ptr__->CollisionShapes).AllocatorInstance.Data + 0x18) = 0x3c;
  }
  __return_storage_ptr__->DamageThreshold = 5000;
  return __return_storage_ptr__;
}

// GetAssetUserDataArray @ 1463b2da0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UGeometryCollection::GetAssetUserDataArray(UGeometryCollection *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)
         &this->AutoInstanceTransformRemapIndices;
}

// GetAssetUserDataOfClass @ 1463b2dc0

UAssetUserData * __thiscall
UGeometryCollection::GetAssetUserDataOfClass
          (UGeometryCollection *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->AutoInstanceTransformRemapIndices).ArrayNum) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->AutoInstanceTransformRemapIndices).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)
                ((this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data + lVar9);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1463b2e6c;
LAB_1463b2e9a:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1463b2e9a;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1463b2e6c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1463b2e9a;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1463b2e9a;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->AutoInstanceTransformRemapIndices).ArrayNum);
  }
  return (UAssetUserData *)0x0;
}

// GetAutoInstanceMesh @ 1463b2ef0

FGeometryCollectionAutoInstanceMesh * __thiscall
UGeometryCollection::GetAutoInstanceMesh(UGeometryCollection *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGeometryCollectionAutoInstanceMesh *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AutoInstanceMeshes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCollectionAutoInstanceMesh *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGeometryCollectionAutoInstanceMesh *)
         ((this->AutoInstanceMeshes).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetBoneSelectedMaterial @ 1463b2f70

UMaterialInterface * __cdecl UGeometryCollection::GetBoneSelectedMaterial(void)

{
  return (UMaterialInterface *)0x0;
}

// GetDataflowAsset @ 1463b3210

UDataflow * __thiscall UGeometryCollection::GetDataflowAsset(UGeometryCollection *this)

{
  UDataflow *pUVar1;
  
  pUVar1 = FDataflowInstance::GetDataflowAsset(&this->DataflowInstance);
  return pUVar1;
}

// GetDataflowInstance @ 1463b3230

FDataflowInstance * __thiscall UGeometryCollection::GetDataflowInstance(UGeometryCollection *this)

{
  return (FDataflowInstance *)&(this->RemoveOnFractureMaterials_DEPRECATED).ArrayNum;
}

// GetDataflowInstance @ 1463b3240

FDataflowInstance * __thiscall UGeometryCollection::GetDataflowInstance(UGeometryCollection *this)

{
  return (FDataflowInstance *)&(this->RemoveOnFractureMaterials_DEPRECATED).ArrayNum;
}

// GetDefaultSizeSpecificData @ 1463b32b0

FGeometryCollectionSizeSpecificData * __thiscall
UGeometryCollection::GetDefaultSizeSpecificData(UGeometryCollection *this)

{
  int *piVar1;
  TArray<FGeometryCollectionSizeSpecificData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FGeometryCollectionSizeSpecificData *pFVar8;
  FGeometryCollectionSizeSpecificData *pFVar9;
  longlong lVar10;
  uint uVar11;
  FGeometryCollectionSizeSpecificData local_28;
  
  if ((this->SizeSpecificData).ArrayNum == 0) {
    pTVar2 = &this->SizeSpecificData;
    pFVar8 = GeometryCollectionSizeSpecificDataDefaults(&local_28);
    pFVar9 = (FGeometryCollectionSizeSpecificData *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (this->SizeSpecificData).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
        return pFVar9;
      }
    }
    iVar6 = (this->SizeSpecificData).ArrayNum;
    piVar1 = &(this->SizeSpecificData).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SizeSpecificData).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    lVar10 = (longlong)iVar6 * 0x20;
    *(float *)(pFVar3 + lVar10) = pFVar8->MaxSize;
    *(undefined8 *)(pFVar3 + lVar10 + 8) = 0;
    *(FScriptContainerElement **)(pFVar3 + lVar10 + 8) =
         (pFVar8->CollisionShapes).AllocatorInstance.Data;
    (pFVar8->CollisionShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar3 + lVar10 + 0x10) = (pFVar8->CollisionShapes).ArrayNum;
    *(int *)(pFVar3 + lVar10 + 0x14) = (pFVar8->CollisionShapes).ArrayMax;
    (pFVar8->CollisionShapes).ArrayNum = 0;
    (pFVar8->CollisionShapes).ArrayMax = 0;
    *(int *)(pFVar3 + lVar10 + 0x18) = pFVar8->DamageThreshold;
    if (local_28.CollisionShapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.CollisionShapes.AllocatorInstance.Data);
    }
  }
  uVar7 = GetDefaultSizeSpecificDataIndex(this);
  uVar11 = 0;
  if ((int)uVar7 < (this->SizeSpecificData).ArrayNum) {
    uVar11 = ~uVar7 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FGeometryCollectionSizeSpecificData *)(*pcVar4)();
      return pFVar9;
    }
  }
  return (FGeometryCollectionSizeSpecificData *)
         ((this->SizeSpecificData).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
}

// GetDefaultSizeSpecificData @ 1463b3440

FGeometryCollectionSizeSpecificData * __thiscall
UGeometryCollection::GetDefaultSizeSpecificData(UGeometryCollection *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGeometryCollectionSizeSpecificData *pFVar4;
  uint uVar5;
  
  if ((this->SizeSpecificData).ArrayNum == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7375484966458622657>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionObject.cpp"
                       ,0x2c1,"SizeSpecificData.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCollectionSizeSpecificData *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = GetDefaultSizeSpecificDataIndex(this);
  uVar5 = 0;
  if ((int)uVar3 < (this->SizeSpecificData).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCollectionSizeSpecificData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGeometryCollectionSizeSpecificData *)
         ((this->SizeSpecificData).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20);
}

// GetDefaultSizeSpecificDataIndex @ 1463b3500

int __thiscall UGeometryCollection::GetDefaultSizeSpecificDataIndex(UGeometryCollection *this)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  uVar8 = 0;
  uVar4 = 0xffffffff;
  if (0 < (this->SizeSpecificData).ArrayNum) {
    lVar7 = 0;
    fVar9 = __real_ff7fffff;
    uVar6 = 0xffffffff;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->SizeSpecificData).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      iVar5 = (this->SizeSpecificData).ArrayNum;
      fVar1 = *(float *)((this->SizeSpecificData).AllocatorInstance.Data + lVar7);
      uVar4 = uVar8;
      if (fVar1 <= fVar9) {
        fVar1 = fVar9;
        uVar4 = uVar6;
      }
      fVar9 = fVar1;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x20;
      uVar6 = uVar4;
    } while ((int)uVar8 < iVar5);
    if ((uVar4 != 0xffffffff) && ((int)uVar4 < iVar5)) {
      return uVar4;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LargestIndex != INDEX_NONE && LargestIndex < SizeSpecificData.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionObject.cpp"
                     ,0x2b0,L"");
  if (!bVar3) {
    return uVar4;
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// GetIdGuid @ 1463b5f00

FGuid * __thiscall
UGeometryCollection::GetIdGuid(UGeometryCollection *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->PersistentGuid).B;
  uVar2 = (this->PersistentGuid).C;
  uVar3 = (this->PersistentGuid).D;
  __return_storage_ptr__->A = (this->PersistentGuid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetMassOrDensity @ 1463b6000

float __thiscall UGeometryCollection::GetMassOrDensity(UGeometryCollection *this,bool *param_1)

{
  float fVar1;
  
  fVar1 = GetMassOrDensityInternal(this,param_1,true);
  return fVar1;
}

// GetMassOrDensityInternal @ 1463b6010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
UGeometryCollection::GetMassOrDensityInternal(UGeometryCollection *this,bool *param_1,bool param_2)

{
  bool bVar1;
  UPhysicalMaterial *pUVar2;
  float fVar3;
  undefined1 local_res8 [8];
  
  *param_1 = this->bMassAsDensity;
  fVar3 = this->Mass;
  if (this->bMassAsDensity != false) {
    fVar3 = fVar3 * __real_358637bd;
  }
  if (this->bDensityFromPhysicsMaterial != false) {
    if ((param_2) && (0.0 < this->CachedDensityFromPhysicsMaterialInGCm3)) {
      *param_1 = true;
      return this->CachedDensityFromPhysicsMaterialInGCm3 * __real_3a83126f;
    }
    pUVar2 = (this->PhysicsMaterial).field0_0x0.DebugPtr;
    if ((pUVar2 == (UPhysicalMaterial *)0x0) &&
       ((pUVar2 = (UPhysicalMaterial *)0x0, GEngine == (UEngine *)0x0 ||
        (pUVar2 = (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr,
        pUVar2 == (UPhysicalMaterial *)0x0)))) {
      bVar1 = `UGeometryCollection::GetMassOrDensityInternal'::__l14::<lambda_1>::operator()
                        (local_res8);
      if (!bVar1) {
        return fVar3;
      }
    }
    *param_1 = true;
    return pUVar2->Density * __real_3a83126f;
  }
  return fVar3;
}

// GetNaniteHierarchyOffset @ 1463b62f0

uint __thiscall
UGeometryCollection::GetNaniteHierarchyOffset(UGeometryCollection *this,int param_1,bool param_2)

{
  FResources *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pFVar1 = (((this->RenderData).Ptr)->NaniteResourcesPtr).Ptr;
  if ((param_1 < 0) || ((pFVar1->HierarchyRootOffsets).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryIndex >= 0 && GeometryIndex < NaniteResources.HierarchyRootOffsets.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionObject.cpp"
                       ,0x8ae,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = 0;
  if (param_1 < (pFVar1->HierarchyRootOffsets).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = *(int *)((pFVar1->HierarchyRootOffsets).AllocatorInstance.Data + (longlong)param_1 * 4) *
          0x38;
  if (param_2) {
    uVar4 = uVar4 + pFVar1->HierarchyOffset;
  }
  return uVar4;
}

// GetNaniteHierarchyOffset @ 1463b63b0

uint __thiscall UGeometryCollection::GetNaniteHierarchyOffset(UGeometryCollection *this)

{
  return ((((this->RenderData).Ptr)->NaniteResourcesPtr).Ptr)->HierarchyOffset;
}

// GetNaniteResourceID @ 1463b63d0

uint __thiscall UGeometryCollection::GetNaniteResourceID(UGeometryCollection *this)

{
  return ((((this->RenderData).Ptr)->NaniteResourcesPtr).Ptr)->RuntimeResourceID;
}

// GetPrivateStaticClass @ 1463b74e0

UClass * __cdecl UGeometryCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollection",
               &Z_Registration_Info_UClass_UGeometryCollection.InnerSingleton,
               StaticRegisterNativesUGeometryCollection,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCollection>,
               InternalVTableHelperCtorCaller<UGeometryCollection>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollection.InnerSingleton;
}

// GetRenderResourceSizeInfo @ 1463b7990

FGeometryCollectionRenderResourceSizeInfo * __thiscall
UGeometryCollection::GetRenderResourceSizeInfo
          (UGeometryCollection *this,
          FGeometryCollectionRenderResourceSizeInfo *__return_storage_ptr__)

{
  FGeometryCollectionRenderData *pFVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  longlong lVar3;
  ulong64 uVar4;
  uint uVar5;
  ulong64 uVar6;
  
  pFVar1 = (this->RenderData).Ptr;
  lVar3 = 0;
  __return_storage_ptr__->NaniteResourcesSize = 0;
  if ((pFVar1->MeshResource).PositionVertexBuffer.Data == (uchar *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (pFVar1->MeshResource).PositionVertexBuffer.NumVertices *
            (pFVar1->MeshResource).PositionVertexBuffer.Stride;
  }
  uVar6 = (ulonglong)uVar5 +
          (ulonglong)
          (((pFVar1->MeshResource).StaticMeshVertexBuffer.NumTexCoords *
            (pFVar1->MeshResource).StaticMeshVertexBuffer.TexcoordStride +
           (pFVar1->MeshResource).StaticMeshVertexBuffer.TangentsStride) *
          (pFVar1->MeshResource).StaticMeshVertexBuffer.NumVertices) +
          (longlong)(int)(pFVar1->MeshResource).IndexBuffer.IndexStorage._padding_;
  __return_storage_ptr__->MeshResourcesSize = uVar6;
  uVar5 = FColorVertexBuffer::GetAllocatedSize(&(pFVar1->MeshResource).ColorVertexBuffer);
  pFVar2 = (pFVar1->MeshResource).BoneMapVertexBuffer.BoneMapData;
  __return_storage_ptr__->MeshResourcesSize = uVar5 + uVar6;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    lVar3 = (**(code **)((longlong)*pFVar2 + 0x50))();
  }
  pFVar1 = (this->RenderData).Ptr;
  __return_storage_ptr__->MeshResourcesSize = __return_storage_ptr__->MeshResourcesSize + lVar3;
  uVar6 = __return_storage_ptr__->NaniteResourcesSize;
  uVar4 = GetNaniteResourcesSize((pFVar1->NaniteResourcesPtr).Ptr);
  __return_storage_ptr__->NaniteResourcesSize = uVar4 + uVar6;
  return __return_storage_ptr__;
}

// GetSelectedMaterialPath @ 1463b7ed0

wchar_t * __cdecl UGeometryCollection::GetSelectedMaterialPath(void)

{
  return 
  L"/Engine/EditorMaterials/GeometryCollection/SelectedGeometryMaterial.SelectedGeometryMaterial";
}

// GetSharedSimulationParams @ 1463b7ee0

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
UGeometryCollection::GetSharedSimulationParams
          (UGeometryCollection *this,FSharedSimulationParameters *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  UPhysicalMaterial *pUVar9;
  byte bVar10;
  int iVar11;
  FScriptContainerElement FVar12;
  uint uVar13;
  UPhysicalMaterial *pUVar14;
  float fVar15;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  FString local_78;
  FGeometryCollectionSizeSpecificData local_68;
  
  if (((this->SizeSpecificData).ArrayNum == 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7375484966458622657>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionObject.cpp"
                         ,0x2c1,"SizeSpecificData.Num()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = GetDefaultSizeSpecificDataIndex(this);
  pUVar9 = (UPhysicalMaterial *)0x0;
  uVar8 = 0;
  if ((int)uVar6 < (this->SizeSpecificData).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar10 = this->bMassAsDensity;
  fVar15 = this->Mass;
  pFVar3 = (this->SizeSpecificData).AllocatorInstance.Data;
  if ((bool)bVar10 != false) {
    fVar15 = fVar15 * __real_358637bd;
  }
  if (this->bDensityFromPhysicsMaterial != false) {
    pUVar14 = (this->PhysicsMaterial).field0_0x0.DebugPtr;
    if ((pUVar14 == (UPhysicalMaterial *)0x0) &&
       ((pUVar14 = pUVar9, GEngine == (UEngine *)0x0 ||
        (pUVar14 = (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr,
        pUVar14 == (UPhysicalMaterial *)0x0)))) {
      local_res8[0] = (FIdentityFunctor)0x0;
      bVar5 = `UGeometryCollection::GetMassOrDensityInternal'::__l14::<lambda_1>::operator()
                        (local_res8);
      if (!bVar5) goto LAB_1463b8013;
    }
    bVar10 = 1;
    fVar15 = pUVar14->Density * __real_3a83126f;
  }
LAB_1463b8013:
  param_1->Mass = fVar15;
  param_1->field_0x30 = param_1->field_0x30 ^ (param_1->bMassAsDensity ^ bVar10) & 1;
  param_1->MinimumMassClamp = this->MinimumMassClamp;
  FGeometryCollectionSizeSpecificData::FGeometryCollectionSizeSpecificData(&local_68);
  if (*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) == 0) goto LAB_1463b871b;
  if (local_68.CollisionShapes.ArrayNum < 1) {
    iVar11 = 1 - local_68.CollisionShapes.ArrayNum;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,iVar11,&local_68.CollisionShapes.AllocatorInstance,
                       &local_68.CollisionShapes.ArrayNum,&local_68.CollisionShapes.ArrayMax);
    DefaultConstructItems<FGeometryCollectionCollisionTypeData,int>
              (local_68.CollisionShapes.AllocatorInstance.Data + (longlong)iVar7 * 0x24,iVar11);
  }
  else if (1 < local_68.CollisionShapes.ArrayNum) {
    iVar7 = local_68.CollisionShapes.ArrayNum + -1;
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar7 == 0) goto LAB_1463b8144;
    iVar11 = (local_68.CollisionShapes.ArrayNum - iVar7) + -1;
    if (iVar11 != 0) {
      memmove(local_68.CollisionShapes.AllocatorInstance.Data + 0x24,
              local_68.CollisionShapes.AllocatorInstance.Data + 0x24 + (longlong)iVar7 * 0x24,
              (longlong)iVar11 * 0x24);
    }
    local_68.CollisionShapes.ArrayNum = local_68.CollisionShapes.ArrayNum - iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,&local_68.CollisionShapes.AllocatorInstance,local_68.CollisionShapes.ArrayNum,
               &local_68.CollisionShapes.ArrayMax);
  }
LAB_1463b8144:
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->MaximumCollisionParticleCount =
       *(int *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 0x18);
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar12 = **(FScriptContainerElement **)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8);
  if (FVar12 == (FScriptContainerElement)0x0) {
    if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 1) == '\x03') {
      if (5 < (byte)LogGeometryCollectionInternal._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionInternal);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      FVar12 = (FScriptContainerElement)0x1;
    }
  }
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *local_68.CollisionShapes.AllocatorInstance.Data = FVar12;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar12 = *(FScriptContainerElement *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 1)
  ;
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_68.CollisionShapes.AllocatorInstance.Data[1] = FVar12;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 4);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 4) = uVar2;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 8);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 8) = uVar2;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 0xc);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 0xc) = uVar2;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 0x10);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 0x10) = uVar2;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 0x1c);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 0x1c) = uVar2;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 0x20);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 0x20) = uVar2;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 0x14);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 0x14) = uVar2;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 0x10) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x20 + 8) + 0x18);
  if ((local_68.CollisionShapes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_68.CollisionShapes.AllocatorInstance.Data + 0x18) = uVar2;
LAB_1463b871b:
  piVar1 = &(param_1->SizeSpecificData).ArrayNum;
  iVar7 = *piVar1;
  uVar8 = (this->SizeSpecificData).ArrayNum + 1;
  local_68.MaxSize = 3.4028235e+38;
  if (iVar7 < (int)uVar8) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,uVar8 - iVar7,(ForAnyElementType *)param_1,piVar1,
                        &(param_1->SizeSpecificData).ArrayMax);
    DefaultConstructItems<FSharedSimulationSizeSpecificData,int>
              ((param_1->SizeSpecificData).AllocatorInstance.Data + (longlong)iVar11 * 0x18,
               uVar8 - iVar7);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar7) {
      uVar6 = iVar7 - uVar8;
      if (((int)(uVar6 | uVar8) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar6 != 0) {
        TArray<FSharedSimulationSizeSpecificData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&param_1->SizeSpecificData,uVar8,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)param_1,*piVar1,&(param_1->SizeSpecificData).ArrayMax
                  );
      }
    }
  }
  if ((*piVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FillSharedSimulationSizeSpecificData
            ((FSharedSimulationSizeSpecificData *)(param_1->SizeSpecificData).AllocatorInstance.Data
             ,&local_68);
  if (0 < (this->SizeSpecificData).ArrayNum) {
    do {
      uVar6 = (uint)pUVar9;
      uVar8 = 0;
      if ((int)uVar6 < (this->SizeSpecificData).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = uVar6 + 1;
      pFVar3 = (this->SizeSpecificData).AllocatorInstance.Data;
      pUVar9 = (UPhysicalMaterial *)(ulonglong)uVar13;
      uVar8 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FillSharedSimulationSizeSpecificData
                ((FSharedSimulationSizeSpecificData *)
                 ((param_1->SizeSpecificData).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18)
                 ,(FGeometryCollectionSizeSpecificData *)(pFVar3 + (longlong)(int)uVar6 * 0x20));
    } while ((int)uVar13 < (this->SizeSpecificData).ArrayNum);
  }
  param_1->field_0x30 =
       param_1->field_0x30 ^ (this->bImportCollisionFromSource * '\x02' ^ param_1->field_0x30) & 2U;
  AlgoImpl::
  IntroSortInternal<FSharedSimulationSizeSpecificData,int,FIdentityFunctor,TDereferenceWrapper<FSharedSimulationSizeSpecificData,TLess<void>_>_>
            ((FSharedSimulationSizeSpecificData *)(param_1->SizeSpecificData).AllocatorInstance.Data
             ,*piVar1,local_res8[0],(TLess<void> *)local_res10);
  if (local_68.CollisionShapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CollisionShapes.AllocatorInstance.Data);
  }
  return;
}

// GetStateGuid @ 1463b89b0

FGuid * __thiscall
UGeometryCollection::GetStateGuid(UGeometryCollection *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->StateGuid).B;
  uVar2 = (this->StateGuid).C;
  uVar3 = (this->StateGuid).D;
  __return_storage_ptr__->A = (this->StateGuid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// HasMeshData @ 1463b90d0

bool __thiscall UGeometryCollection::HasMeshData(UGeometryCollection *this)

{
  FGeometryCollectionRenderData *pFVar1;
  
  pFVar1 = (this->RenderData).Ptr;
  if ((pFVar1 != (FGeometryCollectionRenderData *)0x0) && (pFVar1->bHasMeshData != false)) {
    return true;
  }
  return false;
}

// HasNaniteData @ 1463b90f0

bool __thiscall UGeometryCollection::HasNaniteData(UGeometryCollection *this)

{
  FGeometryCollectionRenderData *pFVar1;
  
  pFVar1 = (this->RenderData).Ptr;
  if ((pFVar1 != (FGeometryCollectionRenderData *)0x0) && (pFVar1->bHasNaniteData != false)) {
    return true;
  }
  return false;
}

// HasVisibleGeometry @ 1463b9160

bool __thiscall UGeometryCollection::HasVisibleGeometry(UGeometryCollection *this)

{
  FGeometryCollectionRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 local_res8 [32];
  
  if ((this->GeometryCollection).Object == (FGeometryCollection *)0x0) {
    local_res8[0] = 0;
    bVar3 = `UGeometryCollection::HasVisibleGeometry'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if (((this->EnableNanite == false) ||
      (pFVar1 = (this->RenderData).Ptr, pFVar1 == (FGeometryCollectionRenderData *)0x0)) ||
     (pFVar1->bHasNaniteData == false)) {
    if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FGeometryCollection::HasVisibleGeometry((this->GeometryCollection).Object);
    if (!bVar3) {
      return false;
    }
  }
  return true;
}

// InitResources @ 1463bb850

void __thiscall UGeometryCollection::InitResources(UGeometryCollection *this)

{
  FGeometryCollectionRenderData *this_00;
  longlong lVar1;
  
  this_00 = (this->RenderData).Ptr;
  if (this_00 != (FGeometryCollectionRenderData *)0x0) {
    if (this_00->bIsInitialized != false) {
      FGeometryCollectionRenderData::ReleaseResources(this_00);
    }
    if (this_00->bHasMeshData != false) {
      lVar1 = this->_padding_;
      (this_00->MeshResource).IndexBuffer._padding_ = lVar1;
      (this_00->MeshResource).StaticMeshVertexBuffer._padding_ = lVar1;
      (this_00->MeshResource).PositionVertexBuffer._padding_ = lVar1;
      (this_00->MeshResource).ColorVertexBuffer._padding_ = lVar1;
      (this_00->MeshResource).BoneMapVertexBuffer._padding_ = lVar1;
      BeginInitResource((FRenderResource *)&this_00->MeshResource,(FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).PositionVertexBuffer,
                        (FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).StaticMeshVertexBuffer,
                        (FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).ColorVertexBuffer,
                        (FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).BoneMapVertexBuffer,
                        (FRenderCommandPipe *)0x0);
    }
    if (this_00->bHasNaniteData != false) {
      Nanite::FResources::InitResources((this_00->NaniteResourcesPtr).Ptr,(UObject *)this);
    }
    this_00->bIsInitialized = true;
  }
  return;
}

// InitializeMaterials @ 1463bb9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGeometryCollection::InitializeMaterials(UGeometryCollection *this,bool param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeometryCollection *pFVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  FGuid *pFVar12;
  byte bVar13;
  ForElementType<FSetElementId> FVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  uint *puVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  longlong lVar23;
  undefined4 *puVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  TManagedArray<int> *pTVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_308 [8];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_300;
  UObject *local_2f0;
  longlong local_2e8;
  undefined1 local_2e0 [16];
  TPairInitializer<UMaterialInterface_*_const_&,int_const_&> local_2d0;
  UMaterialInterface *local_2c0;
  UMaterialInterface *local_2b8;
  int local_2b0 [2];
  UMaterialInterface *local_2a8;
  int local_2a0 [2];
  longlong *local_298;
  uint uStack_290;
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  uint local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 local_230;
  UMaterialInterface **local_228;
  int *local_220;
  UMaterialInterface **local_218;
  int *local_210;
  FGuid local_208 [2];
  undefined4 local_1dc;
  FCollectionHierarchyFacade local_1d8;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
  local_d8;
  TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  if ((this->Materials).ArrayNum == 0) {
    pTVar2 = &this->Materials;
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    local_2f0 = (UObject *)0x0;
    if (((pFVar20 <= (FScriptContainerElement *)&local_2f0) &&
        ((FScriptContainerElement *)&local_2f0 < pFVar20 + (longlong)(this->Materials).ArrayMax * 8)
        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->Materials).ArrayNum;
    piVar1 = &(this->Materials).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Materials).ArrayNum = iVar9 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_2f0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_2f0);
    }
  }
  uVar18 = 0;
  if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->GeometryCollection).Object;
  bVar7 = false;
  pTVar29 = &pFVar3->MaterialID;
  local_2d0.Value = (int *)pTVar29;
  iVar9 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
  uVar28 = uVar18;
  if (0 < iVar9) {
    do {
      uVar22 = (uint)uVar18;
      uVar16 = 0;
      if ((int)uVar22 < *(int *)&(pFVar3->MaterialID).field_0x18) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(uVar28 + *(longlong *)&(pFVar3->MaterialID).field_0x10);
      if (iVar9 < (this->Materials).ArrayNum) {
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((this->Materials).AllocatorInstance.Data + (longlong)iVar9 * 8) == 0) {
          bVar7 = true;
          break;
        }
      }
      uVar18 = (ulonglong)(uVar22 + 1);
      uVar28 = uVar28 + 4;
      iVar9 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
    } while ((int)(uVar22 + 1) < iVar9);
  }
  uVar16 = 0;
  iVar9 = (this->Materials).ArrayNum;
  local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.ArrayNum = 0;
  local_300.ArrayMax = 0;
  if (param_1) {
    local_128._0_8_ = 0;
    local_128._8_4_ = 0;
    local_128._8_8_ = 0;
    local_108 = (uint *)0x0;
    local_100 = 0;
    local_fc = 0x80;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = (ForElementType<FSetElementId>)0x0;
    local_e0 = 0;
    if (0 < iVar9) {
      lVar23 = 0;
      do {
        uVar22 = 0;
        if ((int)uVar16 < (this->Materials).ArrayNum) {
          uVar22 = ~uVar16 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2e8 = *(longlong *)((this->Materials).AllocatorInstance.Data + lVar23 * 8);
        if ((local_2e8 != 0) || (bVar7)) {
          uVar22 = 0;
          if ((int)uVar16 < (this->Materials).ArrayNum) {
            uVar22 = ~uVar16 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar25 = *(undefined8 *)((this->Materials).AllocatorInstance.Data + lVar23 * 8);
          do {
            uVar16 = uVar16 + 1;
            lVar23 = lVar23 + 1;
            if ((this->Materials).ArrayNum <= (int)uVar16) goto LAB_1463bbde0;
            if (((int)uVar16 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          } while ((*(longlong *)((this->Materials).AllocatorInstance.Data + lVar23 * 8) == 0) &&
                  (!bVar7));
          uVar22 = 0;
          if ((int)uVar16 < (this->Materials).ArrayNum) {
            uVar22 = ~uVar16 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar25 = *(undefined8 *)((this->Materials).AllocatorInstance.Data + lVar23 * 8);
LAB_1463bbde0:
          local_238 = local_2e8;
          local_230 = uVar25;
          TSet<TTuple<UMaterialInterface_*,UMaterialInterface_*>,DefaultKeyFuncs<TTuple<UMaterialInterface_*,UMaterialInterface_*>,0>,FDefaultSetAllocator>
          ::Emplace<TTuple<UMaterialInterface_*,UMaterialInterface_*>_>
                    ((TSet<TTuple<UMaterialInterface_*,UMaterialInterface_*>,DefaultKeyFuncs<TTuple<UMaterialInterface_*,UMaterialInterface_*>,0>,FDefaultSetAllocator>
                      *)local_128,(TTuple<UMaterialInterface_*,UMaterialInterface_*> *)local_2e0,
                     (bool *)&local_238);
        }
        uVar16 = uVar16 + 1;
        lVar23 = lVar23 + 1;
      } while ((int)uVar16 < (this->Materials).ArrayNum);
      pTVar29 = (TManagedArray<int> *)local_2d0.Value;
    }
    uVar16 = local_100;
    puVar26 = (undefined4 *)0x0;
    uVar22 = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._0_8_ = 0;
    uStack_290 = 0;
    local_88.Elements._8_8_ = 0;
    uStack_28c = 1;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_4_ = 0;
    local_d8.Elements._44_4_ = 0x80;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    uStack_27c = uStack_290;
    local_278 = uStack_290;
    if (local_100 != 0) {
      puVar19 = (uint *)(local_128 + 0x10);
      if (local_108 != (uint *)0x0) {
        puVar19 = local_108;
      }
      uVar27 = *puVar19;
      puVar15 = puVar26;
      puVar24 = puVar26;
      local_278 = uVar22;
      uStack_290 = uVar22;
      while (uVar27 == 0) {
        iVar9 = (int)puVar15;
        local_278 = (int)puVar24 + 0x20;
        puVar24 = (undefined4 *)(ulonglong)local_278;
        uStack_290 = iVar9 + 1;
        puVar15 = (undefined4 *)(ulonglong)uStack_290;
        uStack_27c = local_100;
        if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_290)
        goto LAB_1463bbf40;
        uVar27 = puVar19[(longlong)iVar9 + 1];
      }
      uStack_28c = -uVar27 & uVar27;
      uVar18 = (ulonglong)uStack_28c * 2 + 1;
      lVar23 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_2e0._4_4_ = (undefined4)lVar23;
      uStack_27c = (local_278 - 1) + local_2e0._4_4_;
      if ((int)local_100 < (int)uStack_27c) {
        uStack_27c = local_100;
      }
    }
LAB_1463bbf40:
    iStack_270 = local_128._8_4_ - local_f4;
    local_298 = (longlong *)local_128;
    local_288 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
    uStack_280 = 0xffffffff;
    TStack_260.CurrentBitIndex = uStack_27c;
    TStack_260.UnvisitedBitMask = 0xffffffff;
    uVar27 = local_100 & 0xffffffe0;
    TStack_260._padding_ = CONCAT44(uStack_28c,uStack_290);
    uStack_274 = local_1dc;
    iVar9 = (int)local_100 >> 5;
    TStack_260._28_4_ = local_1dc;
    TStack_260.BaseBitIndex = local_278;
    uStack_240 = CONCAT44(uStack_26c,iStack_270);
    bVar13 = (byte)local_100;
    local_268 = local_298;
    TStack_260.Array = local_288;
    if (((int)local_100 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar16 != local_100) {
      puVar19 = (uint *)(local_128 + 0x10);
      if (local_108 != (uint *)0x0) {
        puVar19 = local_108;
      }
      uVar16 = -1 << (bVar13 & 0x1f) & puVar19[iVar9];
      while (uVar16 == 0) {
        lVar23 = (longlong)iVar9;
        uVar27 = uVar27 + 0x20;
        iVar9 = iVar9 + 1;
        uVar16 = local_100;
        if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_1463bc051;
        uVar16 = puVar19[lVar23 + 1];
      }
      uVar18 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_2e0._8_4_ = (undefined4)lVar23;
      uVar16 = local_2e0._8_4_ + -1 + uVar27;
      if ((int)local_100 < (int)uVar16) {
        uVar16 = local_100;
      }
    }
LAB_1463bc051:
    while( true ) {
      plVar6 = local_268;
      if ((int)local_268[1] - *(int *)((longlong)local_268 + 0x34) != (int)uStack_240) {
        local_308[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_308);
      }
      if (((TStack_260.CurrentBitIndex == uVar16) &&
          (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
         (plVar6 == (longlong *)local_128)) break;
      pFVar20 = (FScriptContainerElement *)(*plVar6 + (longlong)TStack_260.CurrentBitIndex * 0x18);
      if (((local_300.AllocatorInstance.Data <= pFVar20) &&
          (pFVar20 < local_300.AllocatorInstance.Data + (longlong)local_300.ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_300.ArrayNum == local_300.ArrayMax) {
        local_300.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_300.AllocatorInstance,&local_300.ArrayMax);
      }
      *(UMaterialInterface **)(local_300.AllocatorInstance.Data + (longlong)local_300.ArrayNum * 8)
           = *(UMaterialInterface **)pFVar20;
      local_2b8 = *(UMaterialInterface **)pFVar20;
      local_228 = &local_2b8;
      local_220 = local_2b0;
      local_2b0[0] = local_300.ArrayNum;
      local_300.ArrayNum = local_300.ArrayNum + 1;
      TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,int_const_&>_>
                (&local_88,
                 (TPairInitializer<UMaterialInterface_*_const_&,int_const_&> *)(local_2e0 + 0xc),
                 (bool *)&local_228);
      pFVar20 = pFVar20 + 8;
      if (((local_300.AllocatorInstance.Data <= pFVar20) &&
          (pFVar20 < local_300.AllocatorInstance.Data + (longlong)local_300.ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_300.ArrayNum == local_300.ArrayMax) {
        local_300.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_300.AllocatorInstance,&local_300.ArrayMax);
      }
      *(UMaterialInterface **)(local_300.AllocatorInstance.Data + (longlong)local_300.ArrayNum * 8)
           = *(UMaterialInterface **)pFVar20;
      local_2a8 = *(UMaterialInterface **)pFVar20;
      local_218 = &local_2a8;
      local_210 = local_2a0;
      local_2a0[0] = local_300.ArrayNum;
      local_300.ArrayNum = local_300.ArrayNum + 1;
      TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,int_const_&>_>
                (&local_d8,&local_2d0,(bool *)&local_218);
      TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
    }
    iVar9 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
    puVar15 = puVar26;
    puVar24 = puVar26;
    if (0 < iVar9) {
      do {
        uVar27 = (uint)puVar15;
        iVar9 = (this->Materials).ArrayNum;
        uVar16 = uVar22;
        if ((int)uVar27 < *(int *)&pTVar29->field_0x18) {
          uVar16 = ~uVar27 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)((longlong)puVar24 + *(longlong *)&pTVar29->field_0x10) < iVar9) {
          uVar16 = uVar22;
          if ((int)uVar27 < *(int *)&pTVar29->field_0x18) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
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
          uVar16 = *(uint *)((longlong)puVar24 + *(longlong *)&pTVar29->field_0x10);
          uVar10 = uVar22;
          if ((int)uVar16 < (this->Materials).ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          uVar18 = *(ulonglong *)
                    ((this->Materials).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
          uVar16 = uVar22;
          if ((int)uVar27 < *(int *)&pTVar29->field_0x18) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
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
          uVar16 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
          uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
          uVar16 = uVar16 >> 0x10 ^ uVar16;
          puVar15 = puVar26;
          if ((*(byte *)((longlong)puVar24 + *(longlong *)&pTVar29->field_0x10) & 1) == 0) {
            if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
              FVar14 = (ForElementType<FSetElementId>)&local_88.Hash;
              if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar14 = local_88.Hash.SecondaryData;
              }
              iVar9 = *(int *)((longlong)FVar14 + (ulonglong)(local_88.HashSize - 1U & uVar16) * 4);
              while ((puVar15 = puVar26, iVar9 != -1 &&
                     (puVar15 = (undefined4 *)(local_88.Elements._0_8_ + (longlong)iVar9 * 0x18),
                     *(ulonglong *)(local_88.Elements._0_8_ + (longlong)iVar9 * 0x18) != uVar18))) {
                iVar9 = puVar15[4];
              }
            }
          }
          else if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
            FVar14 = (ForElementType<FSetElementId>)&local_d8.Hash;
            if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar14 = local_d8.Hash.SecondaryData;
            }
            iVar9 = *(int *)((longlong)FVar14 + (ulonglong)(local_d8.HashSize - 1U & uVar16) * 4);
            while ((puVar15 = puVar26, iVar9 != -1 &&
                   (puVar15 = (undefined4 *)(local_d8.Elements._0_8_ + (longlong)iVar9 * 0x18),
                   *(ulonglong *)(local_d8.Elements._0_8_ + (longlong)iVar9 * 0x18) != uVar18))) {
              iVar9 = puVar15[4];
            }
          }
          puVar11 = puVar15 + 2;
          if (puVar15 == (undefined4 *)0x0) {
            puVar11 = puVar26;
          }
          uVar17 = *puVar11;
          uVar16 = uVar22;
          if ((int)uVar27 < *(int *)&pTVar29->field_0x18) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
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
          *(undefined4 *)((longlong)puVar24 + *(longlong *)&pTVar29->field_0x10) = uVar17;
        }
        iVar9 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
        puVar15 = (undefined4 *)(ulonglong)(uVar27 + 1);
        puVar24 = puVar24 + 1;
      } while ((int)(uVar27 + 1) < iVar9);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    local_e0 = 0;
    if (local_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8);
    }
    TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_128);
  }
  else {
    if (0 < iVar9) {
      lVar23 = 0;
      do {
        uVar22 = 0;
        if ((int)uVar16 < (this->Materials).ArrayNum) {
          uVar22 = ~uVar16 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2c0 = *(UMaterialInterface **)((this->Materials).AllocatorInstance.Data + lVar23);
        if ((local_2c0 != (UMaterialInterface *)0x0) || (bVar7)) {
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<UMaterialInterface_*_const_&>(&local_300,&local_2c0);
        }
        uVar16 = uVar16 + 1;
        lVar23 = lVar23 + 8;
      } while ((int)uVar16 < (this->Materials).ArrayNum);
    }
    uVar28 = 0;
    iVar9 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
    uVar18 = uVar28;
    if (0 < iVar9) {
      do {
        uVar22 = (uint)uVar28;
        uVar16 = 0;
        if ((int)uVar22 < *(int *)&(pFVar3->MaterialID).field_0x18) {
          uVar16 = ~uVar22 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar16 = *(uint *)(uVar18 + *(longlong *)&(pFVar3->MaterialID).field_0x10);
        if ((-1 < (int)uVar16) && ((int)uVar16 < (this->Materials).ArrayNum)) {
          uVar27 = 0;
          if ((int)uVar16 < (this->Materials).ArrayNum) {
            uVar27 = ~uVar16 >> 0x1f;
          }
          if ((uVar27 == 0) &&
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
          for (FVar21.Data = local_300.AllocatorInstance.Data;
              FVar21.Data != local_300.AllocatorInstance.Data + (longlong)local_300.ArrayNum * 8;
              FVar21.Data = FVar21.Data + 8) {
            if (*(UMaterialInterface **)FVar21.Data ==
                *(UMaterialInterface **)
                 ((this->Materials).AllocatorInstance.Data + (longlong)(int)uVar16 * 8)) {
              uVar17 = (undefined4)
                       ((longlong)FVar21.Data - (longlong)local_300.AllocatorInstance.Data >> 3);
              goto LAB_1463bc748;
            }
          }
          uVar17 = 0xffffffff;
LAB_1463bc748:
          uVar16 = 0;
          if ((int)uVar22 < *(int *)&(pFVar3->MaterialID).field_0x18) {
            uVar16 = ~uVar22 >> 0x1f;
          }
          if ((uVar16 == 0) &&
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
          *(undefined4 *)(uVar18 + *(longlong *)&(pFVar3->MaterialID).field_0x10) = uVar17;
        }
        uVar28 = (ulonglong)(uVar22 + 1);
        iVar9 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
        uVar18 = uVar18 + 4;
      } while ((int)(uVar22 + 1) < iVar9);
    }
  }
  iVar5 = local_300.ArrayNum;
  FVar21.Data = local_300.AllocatorInstance.Data;
  iVar9 = (this->Materials).ArrayMax;
  piVar1 = &(this->Materials).ArrayMax;
  (this->Materials).ArrayNum = local_300.ArrayNum;
  if ((local_300.ArrayNum == 0) && (iVar9 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_300.ArrayNum,iVar9,&(this->Materials).AllocatorInstance,local_300.ArrayNum,
               piVar1);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              ((this->Materials).AllocatorInstance.Data,(UMaterialInterface **)FVar21.Data,iVar5);
  }
  this->BoneSelectedMaterialIndex = -1;
  if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FGeometryCollection::ReindexMaterials((this->GeometryCollection).Object);
  bVar7 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar7) {
    pFVar12 = FGuid::NewGuid(local_208);
    uVar16 = pFVar12->B;
    uVar22 = pFVar12->C;
    uVar27 = pFVar12->D;
    (this->StateGuid).A = pFVar12->A;
    (this->StateGuid).B = uVar16;
    (this->StateGuid).C = uVar22;
    (this->StateGuid).D = uVar27;
  }
  pFVar3 = (this->GeometryCollection).Object;
  this->RootIndex = -1;
  if (pFVar3 != (FGeometryCollection *)0x0) {
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
              (&local_1d8,(FManagedArrayCollection *)pFVar3);
    iVar9 = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_1d8);
    this->RootIndex = iVar9;
  }
  CacheBreadthFirstTransformIndices(this);
  if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.AllocatorInstance.Data);
  }
  return;
}

// InvalidateCollection @ 1463bca20

void __thiscall UGeometryCollection::InvalidateCollection(UGeometryCollection *this)

{
  FGeometryCollection *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  FGuid *pFVar7;
  FGuid local_c8;
  FCollectionHierarchyFacade local_b8;
  
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar5) {
    pFVar7 = FGuid::NewGuid(&local_c8);
    uVar2 = pFVar7->B;
    uVar3 = pFVar7->C;
    uVar4 = pFVar7->D;
    (this->StateGuid).A = pFVar7->A;
    (this->StateGuid).B = uVar2;
    (this->StateGuid).C = uVar3;
    (this->StateGuid).D = uVar4;
  }
  pFVar1 = (this->GeometryCollection).Object;
  this->RootIndex = -1;
  if (pFVar1 != (FGeometryCollection *)0x0) {
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
              (&local_b8,(FManagedArrayCollection *)pFVar1);
    iVar6 = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_b8);
    this->RootIndex = iVar6;
  }
  CacheBreadthFirstTransformIndices(this);
  return;
}

// IsEmpty @ 1463bcae0

bool __thiscall UGeometryCollection::IsEmpty(UGeometryCollection *this)

{
  FGeometryCollection *this_00;
  int iVar1;
  
  this_00 = (this->GeometryCollection).Object;
  if (this_00 != (FGeometryCollection *)0x0) {
    iVar1 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)this_00,FTransformCollection::TransformGroup);
    return iVar1 == 0;
  }
  return true;
}

// IsReadyForFinishDestroy @ 1463bcb60

bool __thiscall UGeometryCollection::IsReadyForFinishDestroy(UGeometryCollection *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->RenderResourceReleaseFence);
  return bVar1;
}

// MigrateDeprecatedDataflowData @ 1463bcd10

void __thiscall UGeometryCollection::MigrateDeprecatedDataflowData(UGeometryCollection *this)

{
  return;
}

// MigrateDeprecatedRootProxyData @ 1463bcd20

void __thiscall UGeometryCollection::MigrateDeprecatedRootProxyData(UGeometryCollection *this)

{
  return;
}

// NumElements @ 1463bd330

int __thiscall UGeometryCollection::NumElements(UGeometryCollection *this,FName *param_1)

{
  FGeometryCollection *this_00;
  int iVar1;
  
  this_00 = (this->GeometryCollection).Object;
  if (this_00 != (FGeometryCollection *)0x0) {
    iVar1 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this_00,*param_1);
    return iVar1;
  }
  return 0;
}

// PostInitProperties @ 1463bd670

void __thiscall UGeometryCollection::PostInitProperties(UGeometryCollection *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UGeometryCollection *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UGeometryCollection **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
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
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UGeometryCollection **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 1463bd680

void __thiscall UGeometryCollection::PostLoad(UGeometryCollection *this)

{
  FGeometryCollectionRenderData *this_00;
  longlong lVar1;
  wchar_t *pwVar2;
  
  UObject::PostLoad((UObject *)this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar2 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar2,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     (this_00 = (this->RenderData).Ptr, this_00 != (FGeometryCollectionRenderData *)0x0)) {
    if (this_00->bIsInitialized != false) {
      FGeometryCollectionRenderData::ReleaseResources(this_00);
    }
    if (this_00->bHasMeshData != false) {
      lVar1 = this->_padding_;
      (this_00->MeshResource).IndexBuffer._padding_ = lVar1;
      (this_00->MeshResource).StaticMeshVertexBuffer._padding_ = lVar1;
      (this_00->MeshResource).PositionVertexBuffer._padding_ = lVar1;
      (this_00->MeshResource).ColorVertexBuffer._padding_ = lVar1;
      (this_00->MeshResource).BoneMapVertexBuffer._padding_ = lVar1;
      BeginInitResource((FRenderResource *)&this_00->MeshResource,(FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).PositionVertexBuffer,
                        (FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).StaticMeshVertexBuffer,
                        (FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).ColorVertexBuffer,
                        (FRenderCommandPipe *)0x0);
      BeginInitResource((FRenderResource *)&(this_00->MeshResource).BoneMapVertexBuffer,
                        (FRenderCommandPipe *)0x0);
    }
    if (this_00->bHasNaniteData != false) {
      Nanite::FResources::InitResources((this_00->NaniteResourcesPtr).Ptr,(UObject *)this);
    }
    this_00->bIsInitialized = true;
  }
  return;
}

// PreSave @ 1463bd810

void __thiscall
UGeometryCollection::PreSave(UGeometryCollection *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// ReadDataflowContent @ 1463c1310

void __thiscall
UGeometryCollection::ReadDataflowContent
          (UGeometryCollection *this,TObjectPtr<UDataflowBaseContent> *param_1)

{
  return;
}

// ReindexMaterialSections @ 1463c1f40

void __thiscall UGeometryCollection::ReindexMaterialSections(UGeometryCollection *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GeometryCollection).Object == (FGeometryCollection *)0x0) {
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
  FGeometryCollection::ReindexMaterials((this->GeometryCollection).Object);
  InvalidateCollection(this);
  return;
}

// ReleaseResources @ 1463c2300

void __thiscall UGeometryCollection::ReleaseResources(UGeometryCollection *this)

{
  FGeometryCollectionRenderData *pFVar1;
  
  pFVar1 = (this->RenderData).Ptr;
  if (pFVar1 == (FGeometryCollectionRenderData *)0x0) {
    return;
  }
  if (pFVar1->bIsInitialized != false) {
    if (pFVar1->bHasMeshData != false) {
      BeginReleaseResource((FRenderResource *)&pFVar1->MeshResource,(FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(pFVar1->MeshResource).PositionVertexBuffer,
                 (FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(pFVar1->MeshResource).StaticMeshVertexBuffer,
                 (FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(pFVar1->MeshResource).ColorVertexBuffer,
                 (FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(pFVar1->MeshResource).BoneMapVertexBuffer,
                 (FRenderCommandPipe *)0x0);
    }
    if (pFVar1->bHasNaniteData != false) {
      Nanite::FResources::ReleaseResources((pFVar1->NaniteResourcesPtr).Ptr);
    }
    pFVar1->bIsInitialized = false;
  }
  return;
}

// RemoveElements @ 1463c2c50

void __thiscall
UGeometryCollection::RemoveElements
          (UGeometryCollection *this,FName *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          )

{
  FGeometryCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->GeometryCollection).Object == (FGeometryCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->GeometryCollection).Object;
  (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,param_1,param_2,0x101);
  InvalidateCollection(this);
  return;
}

// RemoveExemplars @ 1463c2cd0

void __thiscall
UGeometryCollection::RemoveExemplars
          (UGeometryCollection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  if ((0 < param_1->ArrayNum) && (uVar7 = param_1->ArrayNum - 1, -1 < (int)uVar7)) {
    lVar6 = (longlong)(int)uVar7 * 0x30;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->EmbeddedGeometryExemplar).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      _Dst = (this->EmbeddedGeometryExemplar).AllocatorInstance.Data + lVar6;
      if (*(void **)(_Dst + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x10));
      }
      iVar5 = (this->EmbeddedGeometryExemplar).ArrayNum + ~uVar7;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + 0x30,(longlong)iVar5 * 0x30);
      }
      piVar1 = &(this->EmbeddedGeometryExemplar).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,&(this->EmbeddedGeometryExemplar).AllocatorInstance,
                 (this->EmbeddedGeometryExemplar).ArrayNum,
                 &(this->EmbeddedGeometryExemplar).ArrayMax);
      lVar6 = lVar6 + -0x30;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// RemoveLastMaterialSlot @ 1463c3470

bool __thiscall UGeometryCollection::RemoveLastMaterialSlot(UGeometryCollection *this)

{
  uint uVar1;
  int *piVar2;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  UObject *pUVar5;
  
  if (1 < (this->Materials).ArrayNum) {
    pTVar3 = &this->Materials;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (pUVar5 = *(UObject **)
                  ((pTVar3->AllocatorInstance).Data + (longlong)(this->Materials).ArrayNum * 8 + -8)
       , pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    iVar4 = (this->Materials).ArrayNum;
    uVar1 = iVar4 - 1;
    _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar1 * 8;
    iVar4 = ~uVar1 + iVar4;
    if (iVar4 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
    }
    piVar2 = &(this->Materials).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar3->AllocatorInstance,(this->Materials).ArrayNum,&(this->Materials).ArrayMax
              );
    InvalidateCollection(this);
    return true;
  }
  return false;
}

// RemoveUserDataOfClass @ 1463c3530

void __thiscall
UGeometryCollection::RemoveUserDataOfClass
          (UGeometryCollection *this,TSubclassOf<UAssetUserData> param_1)

{
  FScriptContainerElement *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < (this->AutoInstanceTransformRemapIndices).ArrayNum) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < (this->AutoInstanceTransformRemapIndices).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)
               (&pUVar9->field_0x0 +
               (longlong)(this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1463c35ee;
LAB_1463c361c:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1463c361c;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1463c35ee:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1463c361c;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1463c361c;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < (this->AutoInstanceTransformRemapIndices).ArrayNum) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (this->AutoInstanceTransformRemapIndices).AllocatorInstance.Data +
                 (longlong)(int)uVar8 * 8;
          iVar5 = ((this->AutoInstanceTransformRemapIndices).ArrayNum - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + 8,(longlong)iVar5 << 3);
          }
          iVar5 = (this->AutoInstanceTransformRemapIndices).ArrayNum + -1;
          (this->AutoInstanceTransformRemapIndices).ArrayNum = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->AutoInstanceTransformRemapIndices).AllocatorInstance,iVar5,
                     &(this->AutoInstanceTransformRemapIndices).ArrayMax);
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < (this->AutoInstanceTransformRemapIndices).ArrayNum);
  }
  return;
}

// Reset @ 1463c3d60

void __thiscall UGeometryCollection::Reset(UGeometryCollection *this)

{
  int *piVar1;
  FGeometryCollection *pFVar2;
  
  pFVar2 = (this->GeometryCollection).Object;
  if (pFVar2 != (FGeometryCollection *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x18))();
    piVar1 = &(this->Materials).ArrayMax;
    (this->Materials).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Materials).AllocatorInstance,0,piVar1);
    }
    DestructItems<FGeometryCollectionEmbeddedExemplar,int>
              ((FGeometryCollectionEmbeddedExemplar *)
               (this->EmbeddedGeometryExemplar).AllocatorInstance.Data,
               (this->EmbeddedGeometryExemplar).ArrayNum);
    piVar1 = &(this->EmbeddedGeometryExemplar).ArrayMax;
    (this->EmbeddedGeometryExemplar).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->EmbeddedGeometryExemplar).AllocatorInstance,0,piVar1);
    }
    DestructItems<FGeometryCollectionAutoInstanceMesh,int>
              ((FGeometryCollectionAutoInstanceMesh *)
               (this->AutoInstanceMeshes).AllocatorInstance.Data,(this->AutoInstanceMeshes).ArrayNum
              );
    piVar1 = &(this->AutoInstanceMeshes).ArrayMax;
    (this->AutoInstanceMeshes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->AutoInstanceMeshes).AllocatorInstance,0,piVar1);
    }
    InvalidateCollection(this);
  }
  return;
}

// ResetFrom @ 1463c3e60

void __thiscall
UGeometryCollection::ResetFrom
          (UGeometryCollection *this,FManagedArrayCollection *param_1,
          TArray<UMaterial_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FGeometryCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  Reset(this);
  pFVar3 = (this->GeometryCollection).Object;
  if (pFVar3 != (FGeometryCollection *)0x0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FManagedArrayCollection::CopyTo(param_1,(FManagedArrayCollection *)pFVar3,&local_28,&local_38);
    UpdateConvexGeometryIfMissing(this);
    pTVar1 = &this->Materials;
    if (pTVar1 == (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)param_2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = param_2->ArrayNum;
    if (iVar2 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&pTVar1->AllocatorInstance,&(this->Materials).ArrayNum,
                         &(this->Materials).ArrayMax);
      ConstructItems<TObjectPtr<UMaterialInterface>,UMaterial_*,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,
                 (UMaterial **)(param_2->AllocatorInstance).Data,iVar2);
    }
    InitializeMaterials(this,param_3);
    UE::Dataflow::Private::SetRandomBoneColor(&this->GeometryCollection);
  }
  return;
}

// ResetFrom @ 1463c3f80

void __thiscall
UGeometryCollection::ResetFrom
          (UGeometryCollection *this,FManagedArrayCollection *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FGeometryCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  Reset(this);
  pFVar3 = (this->GeometryCollection).Object;
  if (pFVar3 != (FGeometryCollection *)0x0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FManagedArrayCollection::CopyTo(param_1,(FManagedArrayCollection *)pFVar3,&local_28,&local_38);
    UpdateConvexGeometryIfMissing(this);
    pTVar1 = &this->Materials;
    if (pTVar1 == (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)param_2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = param_2->ArrayNum;
    if (iVar2 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&pTVar1->AllocatorInstance,&(this->Materials).ArrayNum,
                         &(this->Materials).ArrayMax);
      ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,
                 (UMaterialInterface **)(param_2->AllocatorInstance).Data,iVar2);
    }
    InitializeMaterials(this,param_3);
    UE::Dataflow::Private::SetRandomBoneColor(&this->GeometryCollection);
  }
  return;
}

// Serialize @ 1463c5120

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UGeometryCollection::Serialize(UGeometryCollection *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  TUniquePtr<FGeometryCollectionRenderData,TDefaultDelete<FGeometryCollectionRenderData>_> *this_00;
  FScriptContainerElement *pFVar3;
  FGeometryCollection *pFVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  FName FVar10;
  FName FVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  int iVar14;
  FChaosArchiveContext *pFVar15;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar16;
  FGeometryCollection *pFVar17;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar18;
  TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *pTVar19;
  TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *pTVar20;
  FScriptContainerElement *pFVar21;
  FGuid *pFVar22;
  FGeometryCollectionRenderData *pFVar23;
  undefined8 *puVar24;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  FChaosArchiveContext *pFVar33;
  FGeometryCollectionRenderData *pFVar34;
  longlong lVar35;
  TSharedPtr<FGeometryCollection,1> *this_01;
  longlong lVar36;
  bool local_res18;
  uint local_res20 [2];
  uint local_3e8 [2];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_3e0;
  longlong local_3d0;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_3c8;
  TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> local_3b8;
  FGeometryCollectionRenderData *local_3a8;
  undefined8 local_3a0;
  undefined2 local_398;
  undefined2 uStack_396;
  undefined8 local_394;
  undefined2 local_38c;
  undefined2 uStack_38a;
  undefined8 local_388;
  undefined2 local_380;
  undefined2 uStack_37e;
  undefined8 local_378;
  TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *local_370;
  undefined8 local_368;
  TSharedPtr<FGeometryCollection,1> *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 *local_348;
  TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  FConstructionParameters local_328;
  FConstructionParameters local_318;
  FConstructionParameters local_308;
  TReferenceControllerBase<1> *local_2f8;
  undefined8 *local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FScriptContainerElement local_2a8 [8];
  FGuid local_2a0;
  FArchiveProxy local_288;
  FChaosArchiveContext *local_1f0;
  FDataflowInstance local_1e8;
  FCollectionHierarchyFacade local_1a8;
  FCollectionHierarchyFacade local_f8;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FDestructionObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  FArchiveProxy::FArchiveProxy(&local_288,param_1);
  local_288._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
  pFVar15 = ::operator_new(0x158);
  pFVar33 = (FChaosArchiveContext *)0x0;
  local_1f0 = pFVar33;
  if (pFVar15 != (FChaosArchiveContext *)0x0) {
    local_1f0 = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar15);
  }
  this_01 = &this->GeometryCollection;
  local_2f8 = (this->GeometryCollection).SharedReferenceCount.ReferenceController;
  pFVar4 = this_01->Object;
  if (local_2f8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2f8->SharedReferenceCount = (atomic<int>)((int)local_2f8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_378 = 0;
  local_360 = this_01;
  FDataflowInstance::FDataflowInstance(&local_1e8,(UObject *)0x0,(UDataflow *)0x0,(FName)0x0);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  local_res18 = SUB41(uVar28,0);
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 5) != 0) && ((this->SizeSpecificData).ArrayNum == 0)) {
    ValidateSizeSpecificDataDefaults(this);
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if ((iVar14 < 7) && (this->bMassAsDensity != false)) {
    this->Mass = this->Mass * __real_49742400;
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (2 < iVar14) {
    puVar5 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      local_res20[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res20[0] = uVar28;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      if (1 < local_res20[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar28 = local_res20[0];
      if ((param_1->field_0x28 & 1) == 0) goto LAB_1463c5331;
    }
    else {
      uVar28 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    local_res18 = uVar28 != 0;
  }
LAB_1463c5331:
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (3 < iVar14) {
    if (((param_1->field_0x28 & 1) == 0) && ((param_1->field_0x2b & 0x14) != 4)) {
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar31 = pFVar4->_padding_;
      pFVar17 = pFVar4;
    }
    else {
      if ((this_01->Object == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar17 = this_01->Object;
      lVar31 = pFVar17->_padding_;
    }
    (**(code **)(lVar31 + 0x40))(pFVar17,&local_288);
    if ((pFVar4 == (FGeometryCollection *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar16 = FManagedArrayCollection::FindAttributeTyped<TRefCountPtr<Chaos::FImplicitObject>_>
                        ((FManagedArrayCollection *)pFVar4,
                         FGeometryDynamicCollection::ImplicitsAttribute,
                         FTransformCollection::TransformGroup);
    if ((pTVar16 == (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) &&
       ((param_1->field_0x28 & 1) != 0)) {
      pFVar17 = TSharedPtr<FGeometryCollection,1>::operator->(this_01);
      iVar14 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)pFVar17,FTransformCollection::TransformGroup);
      lVar31 = (longlong)iVar14;
      local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e0.ArrayNum = 0;
      local_3e0.ArrayMax = 0;
      TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_3e0,iVar14,Default);
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_2e8 = FGeometryDynamicCollection::ImplicitsAttribute;
      local_2e0 = FTransformCollection::TransformGroup;
      pTVar18 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar4->_padding_,(TTuple<FName,FName> *)&local_2e8);
      pFVar15 = (FChaosArchiveContext *)&pTVar18->field_0x10;
      if (pTVar18 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar15 = pFVar33;
      }
      if ((pFVar15 != (FChaosArchiveContext *)0x0) &&
         (*(char *)&(pFVar15->TagToObject).AllocatorInstance.Data == '\x14')) {
        FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pFVar15);
        pFVar33 = *(FChaosArchiveContext **)&(pFVar15->ObjToTag).field_0x10;
        if ((pFVar33 == (FChaosArchiveContext *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypedManagedArray != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                ,0x319,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined1 *)&(pFVar33->TagToObject).ArrayNum = 1;
      }
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar19 = FManagedArrayCollection::FindAttributeTyped<TSharedPtr<Chaos::FImplicitObject,1>_>
                          ((FManagedArrayCollection *)pFVar4,
                           FGeometryDynamicCollection::SharedImplicitsAttribute,
                           FTransformCollection::TransformGroup);
      local_340 = pTVar19;
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar20 = FManagedArrayCollection::FindAttributeTyped<TSharedPtr<Chaos::FImplicitObject,1>_>
                          ((FManagedArrayCollection *)pFVar4,
                           FGeometryDynamicCollection::ImplicitsAttribute,
                           FTransformCollection::TransformGroup);
      local_3d0 = lVar31;
      local_370 = pTVar20;
      if (pFVar33 != (FChaosArchiveContext *)0x0) {
        uVar28 = 0;
        if (0 < iVar14) {
          lVar35 = 0;
          do {
            uVar27 = ~uVar28 >> 0x1f;
            uVar30 = 0;
            if ((int)uVar28 < *(int *)&(pFVar33->ObjToTag).field_0x8) {
              uVar30 = uVar27;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (*(longlong *)(*(longlong *)&pFVar33->ObjToTag + lVar35 * 8) != 0) {
              uVar30 = 0;
              if ((int)uVar28 < *(int *)&(pFVar33->ObjToTag).field_0x8) {
                uVar30 = uVar27;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              plVar6 = *(longlong **)(*(longlong *)&pFVar33->ObjToTag + lVar35 * 8);
              pFVar21 = (FScriptContainerElement *)(**(code **)(*plVar6 + 0x48))(plVar6,&local_348);
              uVar30 = 0;
              if ((int)uVar28 < local_3e0.ArrayNum) {
                uVar30 = uVar27;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar3 = local_3e0.AllocatorInstance.Data + lVar35 * 8;
              if (pFVar3 != pFVar21) {
                puVar26 = *(undefined8 **)pFVar3;
                *(longlong *)pFVar3 = *(longlong *)pFVar21;
                *(longlong *)pFVar21 = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  LOCK();
                  puVar24 = puVar26 + 1;
                  iVar14 = *(int *)puVar24;
                  *(int *)puVar24 = *(int *)puVar24 + -1;
                  UNLOCK();
                  if ((iVar14 == 1) && (*(int *)((longlong)puVar26 + 0xc) == 0)) {
                    (**(code **)*puVar26)(puVar26,1);
                  }
                }
              }
              if (local_348 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_348 + 1);
                iVar14 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar14 == 1) && (*(int *)((longlong)local_348 + 0xc) == 0)) {
                  (**(code **)*local_348)(local_348,1);
                }
              }
            }
            uVar28 = uVar28 + 1;
            lVar35 = lVar35 + 1;
            pTVar19 = local_340;
          } while (lVar35 < lVar31);
        }
        pTVar20 = local_370;
        if ((pFVar4 == (FGeometryCollection *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FManagedArrayCollection::RemoveAttribute
                  ((FManagedArrayCollection *)pFVar4,FGeometryDynamicCollection::ImplicitsAttribute,
                   FTransformCollection::TransformGroup);
      }
      lVar31 = local_3d0;
      if (pTVar19 != (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *)0x0) {
        uVar28 = 0;
        if (0 < local_3d0) {
          lVar35 = 0;
          lVar36 = 0;
          do {
            uVar27 = ~uVar28 >> 0x1f;
            uVar30 = 0;
            if ((int)uVar28 < *(int *)&pTVar19->field_0x18) {
              uVar30 = uVar27;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (*(longlong *)(lVar36 + *(longlong *)&pTVar19->field_0x10) != 0) {
              uVar30 = 0;
              if ((int)uVar28 < *(int *)&pTVar19->field_0x18) {
                uVar30 = uVar27;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar7 = *(longlong *)&pTVar19->field_0x10;
              if ((*(longlong *)(lVar36 + lVar7) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              plVar6 = *(longlong **)(lVar36 + lVar7);
              pFVar21 = (FScriptContainerElement *)(**(code **)(*plVar6 + 0x48))(plVar6,&local_338);
              uVar30 = 0;
              if ((int)uVar28 < local_3e0.ArrayNum) {
                uVar30 = uVar27;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar3 = local_3e0.AllocatorInstance.Data + lVar35 * 8;
              if (pFVar3 != pFVar21) {
                puVar26 = *(undefined8 **)pFVar3;
                *(longlong *)pFVar3 = *(longlong *)pFVar21;
                *(longlong *)pFVar21 = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  LOCK();
                  puVar24 = puVar26 + 1;
                  iVar14 = *(int *)puVar24;
                  *(int *)puVar24 = *(int *)puVar24 + -1;
                  UNLOCK();
                  if ((iVar14 == 1) && (*(int *)((longlong)puVar26 + 0xc) == 0)) {
                    (**(code **)*puVar26)(puVar26,1);
                  }
                }
              }
              if (local_338 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_338 + 1);
                iVar14 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar14 == 1) && (*(int *)((longlong)local_338 + 0xc) == 0)) {
                  (**(code **)*local_338)(local_338,1);
                }
              }
            }
            uVar28 = uVar28 + 1;
            lVar35 = lVar35 + 1;
            lVar36 = lVar36 + 0x10;
            pTVar20 = local_370;
          } while (lVar35 < lVar31);
        }
        if ((pFVar4 == (FGeometryCollection *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FManagedArrayCollection::RemoveAttribute
                  ((FManagedArrayCollection *)pFVar4,
                   FGeometryDynamicCollection::SharedImplicitsAttribute,
                   FTransformCollection::TransformGroup);
      }
      lVar31 = local_3d0;
      if (pTVar20 != (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *)0x0) {
        uVar28 = 0;
        if (0 < local_3d0) {
          lVar35 = 0;
          lVar36 = 0;
          do {
            uVar27 = ~uVar28 >> 0x1f;
            uVar30 = 0;
            if ((int)uVar28 < *(int *)&pTVar20->field_0x18) {
              uVar30 = uVar27;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (*(longlong *)(lVar36 + *(longlong *)&pTVar20->field_0x10) != 0) {
              uVar30 = 0;
              if ((int)uVar28 < *(int *)&pTVar20->field_0x18) {
                uVar30 = uVar27;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar7 = *(longlong *)&pTVar20->field_0x10;
              if ((*(longlong *)(lVar7 + lVar36) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              plVar6 = *(longlong **)(lVar7 + lVar36);
              pFVar21 = (FScriptContainerElement *)(**(code **)(*plVar6 + 0x48))(plVar6,&local_330);
              uVar30 = 0;
              if ((int)uVar28 < local_3e0.ArrayNum) {
                uVar30 = uVar27;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar3 = local_3e0.AllocatorInstance.Data + lVar35 * 8;
              if (pFVar3 != pFVar21) {
                puVar26 = *(undefined8 **)pFVar3;
                *(longlong *)pFVar3 = *(longlong *)pFVar21;
                *(longlong *)pFVar21 = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  LOCK();
                  puVar24 = puVar26 + 1;
                  iVar14 = *(int *)puVar24;
                  *(int *)puVar24 = *(int *)puVar24 + -1;
                  UNLOCK();
                  if ((iVar14 == 1) && (*(int *)((longlong)puVar26 + 0xc) == 0)) {
                    (**(code **)*puVar26)(puVar26,1);
                  }
                }
              }
              if (local_330 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_330 + 1);
                iVar14 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar14 == 1) && (*(int *)((longlong)local_330 + 0xc) == 0)) {
                  (**(code **)*local_330)(local_330,1);
                }
              }
            }
            uVar28 = uVar28 + 1;
            lVar35 = lVar35 + 1;
            lVar36 = lVar36 + 0x10;
          } while (lVar35 < lVar31);
        }
        if ((pFVar4 == (FGeometryCollection *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FManagedArrayCollection::RemoveAttribute
                  ((FManagedArrayCollection *)pFVar4,FGeometryDynamicCollection::ImplicitsAttribute,
                   FTransformCollection::TransformGroup);
      }
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar29 = 0;
      local_38c._0_1_ = true;
      local_38c._1_1_ = false;
      local_394 = 0;
      local_328.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_328.GroupIndexDependency.Number = 0;
      local_368 = 0;
      local_328.Saved = true;
      local_328.bAllowCircularDependency = false;
      local_328._10_2_ = uStack_38a;
      pTVar16 = FManagedArrayCollection::AddAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
                          ((FManagedArrayCollection *)pFVar4,
                           FGeometryDynamicCollection::ImplicitsAttribute,
                           FTransformCollection::TransformGroup,&local_328);
      uVar32 = uVar29;
      if (0 < lVar31) {
        do {
          uVar30 = (uint)uVar29;
          uVar28 = 0;
          if ((int)uVar30 < local_3e0.ArrayNum) {
            uVar28 = ~uVar30 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar12.Data = local_3e0.AllocatorInstance.Data;
          uVar28 = 0;
          if ((int)uVar30 < *(int *)&pTVar16->field_0x18) {
            uVar28 = ~uVar30 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar26 = *(undefined8 **)(FVar12.Data + uVar32 * 8);
          puVar24 = *(undefined8 **)(*(longlong *)&pTVar16->field_0x10 + uVar32 * 8);
          if (puVar24 != puVar26) {
            *(undefined8 **)(*(longlong *)&pTVar16->field_0x10 + uVar32 * 8) = puVar26;
            if (puVar26 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
              UNLOCK();
            }
            if (puVar24 != (undefined8 *)0x0) {
              LOCK();
              puVar26 = puVar24 + 1;
              iVar14 = *(int *)puVar26;
              *(int *)puVar26 = *(int *)puVar26 + -1;
              UNLOCK();
              if ((iVar14 == 1) && (*(int *)((longlong)puVar24 + 0xc) == 0)) {
                (**(code **)*puVar24)(puVar24,1);
              }
            }
          }
          uVar29 = (ulonglong)(uVar30 + 1);
          uVar32 = uVar32 + 1;
        } while ((longlong)uVar32 < lVar31);
      }
      DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                ((TRefCountPtr<Chaos::FImplicitObject> *)local_3e0.AllocatorInstance.Data,
                 local_3e0.ArrayNum);
      this_01 = local_360;
      if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.AllocatorInstance.Data);
        this_01 = local_360;
      }
    }
  }
  pFVar34 = (FGeometryCollectionRenderData *)0x0;
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (iVar14 < 9) {
    if ((pFVar4 == (FGeometryCollection *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FGeometryCollection::UpdateOldAttributeNames(pFVar4);
    bVar13 = UObjectBaseUtility::IsTemplate
                       ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar13) {
      pFVar22 = FGuid::NewGuid(&local_2a0);
      uVar28 = pFVar22->B;
      uVar30 = pFVar22->C;
      uVar27 = pFVar22->D;
      (this->StateGuid).A = pFVar22->A;
      (this->StateGuid).B = uVar28;
      (this->StateGuid).C = uVar30;
      (this->StateGuid).D = uVar27;
    }
    pFVar17 = this_01->Object;
    this->RootIndex = -1;
    if (pFVar17 != (FGeometryCollection *)0x0) {
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                (&local_1a8,(FManagedArrayCollection *)pFVar17);
      iVar14 = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_1a8);
      this->RootIndex = iVar14;
    }
    CacheBreadthFirstTransformIndices(this);
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((iVar14 == 1) ||
     ((iVar14 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID), 10 < iVar14
      && (iVar14 = FArchiveState::CustomVer
                             ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
         iVar14 < 0xe)))) {
    SerializeOldNaniteData((FArchive *)&local_288,this);
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar14 < 0xe) goto LAB_1463c5f63;
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  bVar13 = SUB41(uVar28,0);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    local_3e8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_3e8[0] = uVar28;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_3e8,4);
    if (1 < local_3e8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar28 = local_3e8[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_1463c5edf;
  }
  else {
    uVar28 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
LAB_1463c5edf:
    bVar13 = uVar28 != 0;
  }
  if (bVar13 != false) {
    this_00 = &this->RenderData;
    if ((this->RenderData).Ptr == (FGeometryCollectionRenderData *)0x0) {
      pFVar23 = ::operator_new(0x278);
      local_3a8 = pFVar34;
      if (pFVar23 != (FGeometryCollectionRenderData *)0x0) {
        memset(pFVar23,0,0x278);
        local_3a8 = FGeometryCollectionRenderData::FGeometryCollectionRenderData(pFVar23);
      }
      pFVar23 = local_3a8;
      if (this_00 !=
          (TUniquePtr<FGeometryCollectionRenderData,TDefaultDelete<FGeometryCollectionRenderData>_>
           *)&local_3a8) {
        pFVar23 = this_00->Ptr;
        this_00->Ptr = local_3a8;
        local_3a8 = (FGeometryCollectionRenderData *)0x0;
        TDefaultDelete<FGeometryCollectionRenderData>::operator()
                  ((TDefaultDelete<FGeometryCollectionRenderData> *)this_00,pFVar23);
        pFVar23 = pFVar34;
      }
      TDefaultDelete<FGeometryCollectionRenderData>::operator()
                ((TDefaultDelete<FGeometryCollectionRenderData> *)&local_3a8,pFVar23);
    }
    FGeometryCollectionRenderData::Serialize(this_00->Ptr,(FArchive *)&local_288,this);
  }
LAB_1463c5f63:
  if ((pFVar4 == (FGeometryCollection *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2d8 = FTransformCollection::ConvexHullAttribute;
  local_2d0 = FTransformCollection::ConvexGroup;
  pTVar18 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&pFVar4->_padding_,(TTuple<FName,FName> *)&local_2d8);
  pFVar23 = (FGeometryCollectionRenderData *)&pTVar18->field_0x10;
  if (pTVar18 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar23 = pFVar34;
  }
  if ((pFVar23 == (FGeometryCollectionRenderData *)0x0) || (pFVar23->bHasMeshData != true)) {
    if ((param_1->field_0x28 & 1) != 0) {
      if ((this_01->Object == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar14 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)this_01->Object,
                          FTransformCollection::ConvexGroup);
      lVar31 = (longlong)iVar14;
      local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.ArrayNum = 0;
      local_3b8.ArrayMax = 0;
      TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_3b8,iVar14,Default);
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_2c8 = FTransformCollection::ConvexHullAttribute;
      local_2c0 = FTransformCollection::ConvexGroup;
      pTVar18 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar4->_padding_,(TTuple<FName,FName> *)&local_2c8);
      pFVar23 = (FGeometryCollectionRenderData *)&pTVar18->field_0x10;
      if (pTVar18 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar23 = pFVar34;
      }
      if ((pFVar23 != (FGeometryCollectionRenderData *)0x0) && (pFVar23->bHasMeshData == true)) {
        FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pFVar23);
        lVar35 = (pFVar23->MeshResource).IndexBuffer._padding_;
        if ((lVar35 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypedManagedArray != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                ,0x319,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar32 = 0;
        *(undefined1 *)(lVar35 + 8) = 1;
        if (lVar35 != 0) {
          uVar29 = uVar32;
          if (0 < iVar14) {
            do {
              uVar27 = (uint)uVar29;
              uVar30 = ~uVar27 >> 0x1f;
              uVar28 = 0;
              if ((int)uVar27 < *(int *)(lVar35 + 0x18)) {
                uVar28 = uVar30;
              }
              if ((uVar28 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(longlong *)(*(longlong *)(lVar35 + 0x10) + uVar32 * 8) != 0) {
                uVar28 = 0;
                if ((int)uVar27 < *(int *)(lVar35 + 0x18)) {
                  uVar28 = uVar30;
                }
                if ((uVar28 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                puVar26 = *(undefined8 **)(*(longlong *)(lVar35 + 0x10) + uVar32 * 8);
                *(undefined8 *)(*(longlong *)(lVar35 + 0x10) + uVar32 * 8) = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
                  UNLOCK();
                }
                uVar28 = 0;
                if ((int)uVar27 < local_3b8.ArrayNum) {
                  uVar28 = uVar30;
                }
                if ((uVar28 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar21 = local_3b8.AllocatorInstance.Data + uVar32 * 8;
                if (pFVar21 == local_2a8) {
                  if (puVar26 != (undefined8 *)0x0) {
                    LOCK();
                    puVar24 = puVar26 + 1;
                    iVar14 = *(int *)puVar24;
                    *(int *)puVar24 = *(int *)puVar24 + -1;
                    UNLOCK();
                    if ((iVar14 == 1) && (*(int *)((longlong)puVar26 + 0xc) == 0)) {
                      puVar24 = (undefined8 *)*puVar26;
                      goto LAB_1463c6289;
                    }
                  }
                }
                else {
                  puVar8 = *(undefined8 **)pFVar21;
                  *(undefined8 **)pFVar21 = puVar26;
                  if (puVar8 != (undefined8 *)0x0) {
                    LOCK();
                    puVar26 = puVar8 + 1;
                    iVar14 = *(int *)puVar26;
                    *(int *)puVar26 = *(int *)puVar26 + -1;
                    UNLOCK();
                    if ((iVar14 == 1) && (*(int *)((longlong)puVar8 + 0xc) == 0)) {
                      puVar24 = (undefined8 *)*puVar8;
                      puVar26 = puVar8;
LAB_1463c6289:
                      (*(code *)*puVar24)(puVar26,1);
                    }
                  }
                }
              }
              uVar32 = uVar32 + 1;
              uVar29 = (ulonglong)(uVar27 + 1);
            } while ((longlong)uVar32 < lVar31);
          }
          if ((pFVar4 == (FGeometryCollection *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FManagedArrayCollection::RemoveAttribute
                    ((FManagedArrayCollection *)pFVar4,FTransformCollection::ConvexHullAttribute,
                     FTransformCollection::ConvexGroup);
        }
      }
      uVar28 = 0;
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar11 = FTransformCollection::ConvexHullAttribute;
      FVar10 = FTransformCollection::ConvexGroup;
      local_358 = 0;
      local_388 = 0;
      local_380._0_1_ = true;
      local_380._1_1_ = false;
      local_318.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_318.GroupIndexDependency.Number = 0;
      local_318.Saved = true;
      local_318.bAllowCircularDependency = false;
      local_318._10_2_ = uStack_37e;
      bVar13 = FManagedArrayCollection::HasAttribute
                         ((FManagedArrayCollection *)pFVar4,
                          FTransformCollection::ConvexHullAttribute,
                          FTransformCollection::ConvexGroup);
      if (!bVar13) {
        FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>
                  ((FManagedArrayCollection *)pFVar4,FVar11,FVar10,&local_318);
      }
      bVar13 = FManagedArrayCollection::HasAttribute
                         ((FManagedArrayCollection *)pFVar4,FVar11,FVar10);
      if ((!bVar13) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_2b8 = FVar11;
      local_2b0 = FVar10;
      pTVar18 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar4->_padding_,(TTuple<FName,FName> *)&local_2b8);
      if ((pTVar18 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar25 = FManagedArrayCollection::FValueType::ModifyTypedPtr<TRefCountPtr<Chaos::FConvex>_>
                          ((FValueType *)&pTVar18->field_0x10);
      if (0 < lVar31) {
        lVar35 = 0;
        do {
          uVar30 = 0;
          if ((int)uVar28 < local_3b8.ArrayNum) {
            uVar30 = ~uVar28 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar12.Data = local_3b8.AllocatorInstance.Data;
          uVar30 = 0;
          if ((int)uVar28 < *(int *)&pTVar25->field_0x18) {
            uVar30 = ~uVar28 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar26 = *(undefined8 **)(FVar12.Data + lVar35 * 8);
          puVar24 = *(undefined8 **)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 8);
          if (puVar24 != puVar26) {
            *(undefined8 **)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 8) = puVar26;
            if (puVar26 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
              UNLOCK();
            }
            if (puVar24 != (undefined8 *)0x0) {
              LOCK();
              puVar26 = puVar24 + 1;
              iVar14 = *(int *)puVar26;
              *(int *)puVar26 = *(int *)puVar26 + -1;
              UNLOCK();
              if ((iVar14 == 1) && (*(int *)((longlong)puVar24 + 0xc) == 0)) {
                (**(code **)*puVar24)(puVar24,1);
              }
            }
          }
          uVar28 = uVar28 + 1;
          lVar35 = lVar35 + 1;
        } while (lVar35 < lVar31);
      }
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                ((TRefCountPtr<Chaos::FConvex> *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum
                );
      if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.AllocatorInstance.Data);
      }
    }
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pFVar23);
    lVar31 = (pFVar23->MeshResource).IndexBuffer._padding_;
    if ((lVar31 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x319,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(undefined1 *)(lVar31 + 8) = 1;
  }
  if ((pFVar4 == (FGeometryCollection *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar16 = FManagedArrayCollection::FindAttributeTyped<TRefCountPtr<Chaos::FImplicitObject>_>
                      ((FManagedArrayCollection *)pFVar4,
                       FGeometryCollection::ExternalCollisionsAttribute,
                       FTransformCollection::TransformGroup);
  if ((pTVar16 == (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) &&
     ((param_1->field_0x28 & 1) != 0)) {
    if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)(this->GeometryCollection).Object,
                        FTransformCollection::TransformGroup);
    lVar31 = (longlong)iVar14;
    local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.ArrayNum = 0;
    local_3c8.ArrayMax = 0;
    TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_3c8,iVar14,Default);
    if ((pFVar4 == (FGeometryCollection *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar19 = FManagedArrayCollection::FindAttributeTyped<TSharedPtr<Chaos::FImplicitObject,1>_>
                        ((FManagedArrayCollection *)pFVar4,
                         FGeometryCollection::ExternalCollisionsAttribute,
                         FTransformCollection::TransformGroup);
    if (pTVar19 != (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *)0x0) {
      uVar28 = 0;
      if (0 < iVar14) {
        lVar35 = 0;
        lVar36 = 0;
        do {
          uVar27 = ~uVar28 >> 0x1f;
          uVar30 = 0;
          if ((int)uVar28 < *(int *)&pTVar19->field_0x18) {
            uVar30 = uVar27;
          }
          if ((uVar30 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(longlong *)(lVar36 + *(longlong *)&pTVar19->field_0x10) != 0) {
            uVar30 = 0;
            if ((int)uVar28 < *(int *)&pTVar19->field_0x18) {
              uVar30 = uVar27;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)&pTVar19->field_0x10;
            if ((*(longlong *)(lVar36 + lVar7) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            plVar6 = *(longlong **)(lVar36 + lVar7);
            pFVar21 = (FScriptContainerElement *)(**(code **)(*plVar6 + 0x48))(plVar6,&local_2f0);
            uVar30 = 0;
            if ((int)uVar28 < local_3c8.ArrayNum) {
              uVar30 = uVar27;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar3 = local_3c8.AllocatorInstance.Data + lVar35 * 8;
            if (pFVar3 != pFVar21) {
              puVar26 = *(undefined8 **)pFVar3;
              *(longlong *)pFVar3 = *(longlong *)pFVar21;
              *(longlong *)pFVar21 = 0;
              if (puVar26 != (undefined8 *)0x0) {
                LOCK();
                puVar24 = puVar26 + 1;
                iVar14 = *(int *)puVar24;
                *(int *)puVar24 = *(int *)puVar24 + -1;
                UNLOCK();
                if ((iVar14 == 1) && (*(int *)((longlong)puVar26 + 0xc) == 0)) {
                  (**(code **)*puVar26)(puVar26,1);
                }
              }
            }
            if (local_2f0 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(local_2f0 + 1);
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar14 == 1) && (*(int *)((longlong)local_2f0 + 0xc) == 0)) {
                (**(code **)*local_2f0)(local_2f0,1);
              }
            }
          }
          uVar28 = uVar28 + 1;
          lVar35 = lVar35 + 1;
          lVar36 = lVar36 + 0x10;
        } while (lVar35 < lVar31);
      }
      if ((pFVar4 == (FGeometryCollection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FManagedArrayCollection::RemoveAttribute
                ((FManagedArrayCollection *)pFVar4,FGeometryCollection::ExternalCollisionsAttribute,
                 FTransformCollection::TransformGroup);
    }
    if ((pFVar4 == (FGeometryCollection *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar29 = 0;
    local_398._0_1_ = true;
    local_398._1_1_ = false;
    local_3a0 = 0;
    local_308.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_308.GroupIndexDependency.Number = 0;
    local_350 = 0;
    local_308.Saved = true;
    local_308.bAllowCircularDependency = false;
    local_308._10_2_ = uStack_396;
    pTVar16 = FManagedArrayCollection::AddAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
                        ((FManagedArrayCollection *)pFVar4,
                         FGeometryCollection::ExternalCollisionsAttribute,
                         FTransformCollection::TransformGroup,&local_308);
    uVar32 = uVar29;
    if (0 < lVar31) {
      do {
        uVar30 = (uint)uVar29;
        uVar28 = 0;
        if ((int)uVar30 < local_3c8.ArrayNum) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar12.Data = local_3c8.AllocatorInstance.Data;
        uVar28 = 0;
        if ((int)uVar30 < *(int *)&pTVar16->field_0x18) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar26 = *(undefined8 **)(FVar12.Data + uVar32 * 8);
        puVar24 = *(undefined8 **)(*(longlong *)&pTVar16->field_0x10 + uVar32 * 8);
        if (puVar24 != puVar26) {
          *(undefined8 **)(*(longlong *)&pTVar16->field_0x10 + uVar32 * 8) = puVar26;
          if (puVar26 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
            UNLOCK();
          }
          if (puVar24 != (undefined8 *)0x0) {
            LOCK();
            puVar26 = puVar24 + 1;
            iVar14 = *(int *)puVar26;
            *(int *)puVar26 = *(int *)puVar26 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (*(int *)((longlong)puVar24 + 0xc) == 0)) {
              (**(code **)*puVar24)(puVar24,1);
            }
          }
        }
        uVar29 = (ulonglong)(uVar30 + 1);
        uVar32 = uVar32 + 1;
      } while ((longlong)uVar32 < lVar31);
    }
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_3c8.AllocatorInstance.Data,
               local_3c8.ArrayNum);
    if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.AllocatorInstance.Data);
    }
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar14 < 0x1f) {
    FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar14 < 0x44) {
    this->PerClusterOnlyDamageThreshold = true;
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar14 < 0x55) {
    (this->DamagePropagationData).bEnabled = false;
  }
  if (((param_1->field_0x28 & 1) != 0) && (local_res18 == false)) {
    uVar28 = this->BoneSelectedMaterialIndex;
    if (uVar28 != 0xffffffff) {
      if (((-1 < (int)uVar28) && (iVar14 = (this->Materials).ArrayNum, (int)uVar28 < iVar14)) &&
         (uVar28 == iVar14 - 1U)) {
        if (((int)uVar28 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar21 = (this->Materials).AllocatorInstance.Data + (longlong)(int)uVar28 * 8;
        iVar14 = (this->Materials).ArrayNum + ~uVar28;
        if (iVar14 != 0) {
          memmove(pFVar21,pFVar21 + 8,(longlong)iVar14 << 3);
        }
        piVar2 = &(this->Materials).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Materials).AllocatorInstance,(this->Materials).ArrayNum,
                   &(this->Materials).ArrayMax);
      }
      this->BoneSelectedMaterialIndex = -1;
    }
  }
  if (this->RootIndex == -1) {
    pFVar4 = (this->GeometryCollection).Object;
    this->RootIndex = -1;
    if (pFVar4 != (FGeometryCollection *)0x0) {
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                (&local_f8,(FManagedArrayCollection *)pFVar4);
      iVar14 = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_f8);
      this->RootIndex = iVar14;
    }
  }
  CacheBreadthFirstTransformIndices(this);
  CacheAutoInstanceTransformRemapIndices(this);
  if ((((param_1->field_0x28 & 1) != 0) &&
      (FillAutoInstanceMeshesInstancesIfNeeded(this), (param_1->field_0x28 & 1) != 0)) &&
     (iVar14 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     iVar14 < 0x6b)) {
    this->bConvertVertexColorsToSRGB = false;
  }
  FDataflowInstance::~FDataflowInstance(&local_1e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f8);
  pFVar33 = local_1f0;
  if (local_1f0 != (FChaosArchiveContext *)0x0) {
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_1f0);
    ::operator_delete(pFVar33,0x158);
  }
  FArchiveProxy::~FArchiveProxy(&local_288);
  return;
}

// Serialize @ 1463c6c10

void __thiscall
UGeometryCollection::Serialize(UGeometryCollection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetAutoInstanceMeshes @ 1463c7ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UGeometryCollection::SetAutoInstanceMeshes
          (UGeometryCollection *this,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FGeometryCollectionAutoInstanceMesh *pFVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  TObjectPtr<UMaterialInterface> *pTVar5;
  void *_Src;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  FGeometryCollection *pFVar21;
  FScriptContainerElement *pFVar22;
  TObjectPtr<UStaticMesh_const_>_u_0 *pTVar23;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar24;
  longlong lVar25;
  uint local_res10;
  longlong local_res20;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_108;
  uint local_f8 [2];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TObjectPtr<UStaticMesh_const_>_u_0 local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FGeometryCollection *local_98;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *local_90;
  longlong local_88;
  FCollectionInstancedMeshFacade local_80;
  
  pTVar24 = &this->AutoInstanceMeshes;
  local_90 = pTVar24;
  if (pTVar24 != param_1) {
    DestructItems<FGeometryCollectionAutoInstanceMesh,int>
              ((FGeometryCollectionAutoInstanceMesh *)(pTVar24->AllocatorInstance).Data,
               (this->AutoInstanceMeshes).ArrayNum);
    iVar10 = param_1->ArrayNum;
    piVar1 = &(this->AutoInstanceMeshes).ArrayMax;
    pFVar2 = (FGeometryCollectionAutoInstanceMesh *)(param_1->AllocatorInstance).Data;
    (this->AutoInstanceMeshes).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar10,*piVar1,&pTVar24->AllocatorInstance,iVar10,piVar1);
      ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
                ((pTVar24->AllocatorInstance).Data,pFVar2,iVar10);
    }
  }
  iVar10 = (this->AutoInstanceMeshes).ArrayNum;
  if (0 < iVar10) {
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar10,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
    uVar11 = (this->AutoInstanceMeshes).ArrayNum;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (local_e8._4_4_ < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&local_f0,(int)local_e8,(int *)((longlong)&local_e8 + 4));
    }
    local_res10 = 0;
    if (0 < (this->AutoInstanceMeshes).ArrayNum) {
      lVar19 = 0;
      do {
        uVar11 = 0;
        if ((int)local_res10 < (this->AutoInstanceMeshes).ArrayNum) {
          uVar11 = ~local_res10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (this->AutoInstanceMeshes).AllocatorInstance.Data;
        pTVar23 = (TObjectPtr<UStaticMesh_const_>_u_0 *)
                  (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x30);
        if ((TObjectPtr<UStaticMesh_const_>_u_0 *)local_108.AllocatorInstance.Data != pTVar23) {
          pUVar4 = *(UObject **)(pFVar3 + lVar19);
          FVar15.Data = local_108.AllocatorInstance.Data;
          do {
            if ((((((FObjectPtr *)FVar15.Data)->field0_0x0).Handle == pUVar4) &&
                (*(int *)((longlong)FVar15.Data + 0x10) == *(int *)(pFVar3 + lVar19 + 0x10))) &&
               (bVar9 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                                  ((TObjectPtr<UMaterialInterface> *)
                                   ((TObjectPtr<UStaticMesh_const_>_u_0 *)
                                   ((longlong)FVar15.Data + 8))->DebugPtr,
                                   *(TObjectPtr<UMaterialInterface> **)(pFVar3 + lVar19 + 8),
                                   *(int *)((longlong)FVar15.Data + 0x10)), bVar9)) {
              local_f8[0] = (uint)(((longlong)FVar15.Data -
                                   (longlong)local_108.AllocatorInstance.Data) / 0x30);
              goto LAB_1463c7e90;
            }
            FVar15.Data = FVar15.Data + 0x30;
          } while ((TObjectPtr<UStaticMesh_const_>_u_0 *)FVar15.Data != pTVar23);
        }
        local_f8[0] = 0xffffffff;
LAB_1463c7e90:
        if (local_f8[0] == 0xffffffff) {
          local_c8 = (TObjectPtr<UStaticMesh_const_>_u_0)
                     ((TObjectPtr<UStaticMesh_const_>_u_0 *)(pFVar3 + lVar19))->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_c8.DebugPtr != (UStaticMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
          }
          iVar10 = *(int *)(pFVar3 + lVar19 + 0x10);
          pTVar5 = *(TObjectPtr<UMaterialInterface> **)(pFVar3 + lVar19 + 8);
          local_c0.Data = (FScriptContainerElement *)0x0;
          local_b8 = iVar10;
          if (iVar10 == 0) {
            local_b4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,0,&local_c0,iVar10,&local_b4);
            ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                      (local_c0.Data,pTVar5,iVar10);
          }
          local_a0 = *(int *)(pFVar3 + lVar19 + 0x28);
          lVar16 = (longlong)local_a0;
          local_b0 = *(undefined4 *)(pFVar3 + lVar19 + 0x18);
          _Src = *(void **)(pFVar3 + lVar19 + 0x20);
          local_a8.Data = (FScriptContainerElement *)0x0;
          if (local_a0 == 0) {
            local_9c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_a0,0,&local_a8,local_a0,&local_9c);
            memcpy(local_a8.Data,_Src,lVar16 << 2);
          }
          local_b0 = 0;
          local_a0 = 0;
          if ((local_9c < 0) && (local_9c != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_a8,0,&local_9c);
          }
          if (((local_108.AllocatorInstance.Data <= &local_c8) &&
              (&local_c8 <
               (TObjectPtr<UStaticMesh_const_>_u_0 *)
               (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x30))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_108.ArrayNum == local_108.ArrayMax) {
            local_108.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_108.AllocatorInstance,&local_108.ArrayMax);
          }
          iVar10 = local_108.ArrayNum;
          FVar15.Data = local_108.AllocatorInstance.Data;
          lVar16 = (longlong)local_108.ArrayNum;
          local_108.ArrayNum = local_108.ArrayNum + 1;
          lVar16 = lVar16 * 0x30;
          ((TObjectPtr<UStaticMesh_const_>_u_0 *)(local_108.AllocatorInstance.Data + lVar16))->
          DebugPtr = (UStaticMesh *)local_c8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_c8.DebugPtr != (UStaticMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
          }
          iVar14 = local_b8;
          FVar8.Data = local_c0.Data;
          pFVar22 = FVar15.Data + lVar16 + 8;
          *(undefined8 *)pFVar22 = 0;
          *(int *)(pFVar22 + 8) = local_b8;
          if (local_b8 == 0) {
            *(int *)(FVar15.Data + lVar16 + 0x14) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_b8,0,(ForAnyElementType *)pFVar22,local_b8,
                       (int *)(FVar15.Data + lVar16 + 0x14));
            ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                      (*(void **)pFVar22,(TObjectPtr<UMaterialInterface> *)FVar8.Data,iVar14);
          }
          FVar8.Data = local_a8.Data;
          *(undefined4 *)(FVar15.Data + lVar16 + 0x18) = local_b0;
          pFVar22 = FVar15.Data + lVar16 + 0x20;
          *(undefined8 *)pFVar22 = 0;
          lVar25 = (longlong)local_a0;
          *(int *)(pFVar22 + 8) = local_a0;
          if (local_a0 == 0) {
            *(int *)(FVar15.Data + lVar16 + 0x2c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_a0,0,(ForAnyElementType *)pFVar22,local_a0,
                       (int *)(FVar15.Data + lVar16 + 0x2c));
            memcpy(*(void **)pFVar22,FVar8.Data,lVar25 << 2);
          }
          local_f8[0] = iVar10;
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data);
          }
          if (local_c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data);
          }
        }
        lVar16 = (longlong)(int)local_f8[0];
        iVar10 = *(int *)(pFVar3 + lVar19 + 0x18);
        uVar11 = 0;
        if ((int)local_f8[0] < local_108.ArrayNum) {
          uVar11 = ~local_f8[0] >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)(local_108.AllocatorInstance.Data + lVar16 * 0x30 + 0x18) =
             *(int *)(local_108.AllocatorInstance.Data + lVar16 * 0x30 + 0x18) + iVar10;
        if (((local_f0.Data <= (FScriptContainerElement *)local_f8) &&
            ((FScriptContainerElement *)local_f8 < local_f0.Data + (longlong)local_e8._4_4_ * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (int)local_e8;
        if ((int)local_e8 == local_e8._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f0,(int *)((longlong)&local_e8 + 4));
        }
        local_res10 = local_res10 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,iVar10 + 1);
        lVar19 = lVar19 + 0x30;
        *(uint *)(local_f0.Data + (longlong)iVar10 * 4) = local_f8[0];
      } while ((int)local_res10 < (this->AutoInstanceMeshes).ArrayNum);
    }
    pTVar6 = (this->GeometryCollection).SharedReferenceCount.ReferenceController;
    pFVar21 = (this->GeometryCollection).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar21 == (FGeometryCollection *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
              (&local_80,(FManagedArrayCollection *)pFVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTVar6 = (this->GeometryCollection).SharedReferenceCount.ReferenceController;
    pFVar21 = (this->GeometryCollection).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98 = pFVar21;
    if ((pFVar21 == (FGeometryCollection *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_d8,(this->AutoInstanceMeshes).ArrayNum,Default);
    local_res10 = 0;
    iVar10 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetNumIndices(&local_80);
    if (0 < iVar10) {
      local_res20 = 0;
      pTVar24 = &this->AutoInstanceMeshes;
      do {
        uVar11 = 0;
        if ((int)local_res10 < (int)pFVar21->_padding_) {
          uVar11 = ~local_res10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(local_res20 + 8 + pFVar21->_padding_) ==
            *(int *)(local_res20 + 0x34 + pFVar21->_padding_)) {
          uVar11 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetIndex
                             (&local_80,local_res10);
          lVar19 = (longlong)(int)uVar11;
          if ((-1 < (int)uVar11) && ((int)uVar11 < (int)local_e8)) {
            uVar17 = ~uVar11 >> 0x1f;
            uVar12 = 0;
            if ((int)uVar11 < pTVar24->ArrayNum) {
              uVar12 = uVar17;
            }
            if (uVar12 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            pFVar3 = (local_90->AllocatorInstance).Data;
            uVar12 = 0;
            if ((int)uVar11 < (int)local_e8) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar12 = *(uint *)(local_f0.Data + lVar19 * 4);
            uVar13 = 0;
            if ((int)uVar12 < local_108.ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar15.Data = local_108.AllocatorInstance.Data;
            GeometryCollection::Facades::FCollectionInstancedMeshFacade::SetIndex
                      (&local_80,local_res10,uVar12);
            pFVar21 = local_98;
            if (*(int *)(pFVar3 + lVar19 * 0x30 + 0x18) != 0) {
              iVar10 = *(int *)(pFVar3 + lVar19 * 0x30 + 0x28) /
                       *(int *)(pFVar3 + lVar19 * 0x30 + 0x18);
              if (0 < iVar10) {
                uVar13 = 0;
                if ((int)uVar11 < local_d8.ArrayNum) {
                  uVar13 = uVar17;
                }
                if (uVar13 == 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                uVar20 = (ulonglong)*(int *)(local_d8.AllocatorInstance.Data + lVar19 * 4);
                iVar14 = local_d8.ArrayNum;
                local_88 = (longlong)iVar10;
                if (0 < iVar10) {
                  lVar16 = uVar20 * 4;
                  do {
                    uVar18 = (uint)uVar20;
                    uVar13 = 0;
                    if ((int)uVar18 < *(int *)(pFVar3 + lVar19 * 0x30 + 0x28)) {
                      uVar13 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    local_e0[0] = *(undefined4 *)
                                   (lVar16 + *(longlong *)(pFVar3 + lVar19 * 0x30 + 0x20));
                    if (((*(undefined4 **)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x20) <=
                          local_e0) &&
                        (local_e0 <
                         *(undefined4 **)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x20) +
                         *(int *)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x2c))) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar14 = *(int *)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x28);
                    if (iVar14 == *(int *)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x2c)) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)
                                                (FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x20),
                                          (int *)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x2c)
                                         );
                    }
                    *(int *)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x28) = iVar14 + 1;
                    uVar20 = (ulonglong)(uVar18 + 1);
                    lVar16 = lVar16 + 4;
                    local_88 = local_88 + -1;
                    *(undefined4 *)
                     (*(longlong *)(FVar15.Data + (longlong)(int)uVar12 * 0x30 + 0x20) +
                     (longlong)iVar14 * 4) = local_e0[0];
                  } while (local_88 != 0);
                  local_88 = 0;
                  iVar14 = local_d8.ArrayNum;
                }
                uVar12 = 0;
                if ((int)uVar11 < iVar14) {
                  uVar12 = uVar17;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(int *)(local_d8.AllocatorInstance.Data + lVar19 * 4) =
                     *(int *)(local_d8.AllocatorInstance.Data + lVar19 * 4) + iVar10;
                pFVar21 = local_98;
              }
            }
          }
        }
        local_res10 = local_res10 + 1;
        local_res20 = local_res20 + 0x50;
        iVar10 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetNumIndices
                           (&local_80);
        pTVar24 = local_90;
      } while ((int)local_res10 < iVar10);
    }
    pTVar24 = local_90;
    if (local_90 != &local_108) {
      DestructItems<FGeometryCollectionAutoInstanceMesh,int>
                ((FGeometryCollectionAutoInstanceMesh *)(local_90->AllocatorInstance).Data,
                 local_90->ArrayNum);
      pFVar3 = (pTVar24->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar24->AllocatorInstance).Data = local_108.AllocatorInstance.Data;
      pTVar24->ArrayNum = local_108.ArrayNum;
      pTVar24->ArrayMax = local_108.ArrayMax;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    DestructItems<FGeometryCollectionAutoInstanceMesh,int>
              ((FGeometryCollectionAutoInstanceMesh *)local_108.AllocatorInstance.Data,
               local_108.ArrayNum);
    if ((TObjectPtr<UStaticMesh_const_>_u_0 *)local_108.AllocatorInstance.Data !=
        (TObjectPtr<UStaticMesh_const_>_u_0 *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  return;
}

// SetConvertVertexColorsToSRGB @ 1463c8800

void __thiscall
UGeometryCollection::SetConvertVertexColorsToSRGB(UGeometryCollection *this,bool param_1)

{
  if (this->bConvertVertexColorsToSRGB != param_1) {
    this->bConvertVertexColorsToSRGB = param_1;
  }
  return;
}

// SetDataflowAsset @ 1463c8820

void __thiscall UGeometryCollection::SetDataflowAsset(UGeometryCollection *this,UDataflow *param_1)

{
  FDataflowInstance::SetDataflowAsset(&this->DataflowInstance,param_1);
  return;
}

// SetEnableNanite @ 1463c8c70

void __thiscall UGeometryCollection::SetEnableNanite(UGeometryCollection *this,bool param_1)

{
  if (this->EnableNanite != param_1) {
    this->EnableNanite = param_1;
  }
  return;
}

// StaticRegisterNativesUGeometryCollection @ 1463c9bd0

void __cdecl UGeometryCollection::StaticRegisterNativesUGeometryCollection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGeometryCollection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateConvexGeometry @ 1463ce330

void __thiscall UGeometryCollection::UpdateConvexGeometry(UGeometryCollection *this)

{
  return;
}

// UpdateConvexGeometryIfMissing @ 1463ce340

void __thiscall UGeometryCollection::UpdateConvexGeometryIfMissing(UGeometryCollection *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GeometryCollection).Object == (FGeometryCollection *)0x0) {
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
  FManagedArrayCollection::HasAttribute
            ((FManagedArrayCollection *)(this->GeometryCollection).Object,
             FTransformCollection::ConvexHullAttribute,FTransformCollection::ConvexGroup);
  return;
}

// UpdateGeometryDependentProperties @ 1463ce450

void __thiscall UGeometryCollection::UpdateGeometryDependentProperties(UGeometryCollection *this)

{
  return;
}

// UpdateRootIndex @ 1463cf300

void __thiscall UGeometryCollection::UpdateRootIndex(UGeometryCollection *this)

{
  FGeometryCollection *pFVar1;
  int iVar2;
  FCollectionHierarchyFacade local_b8;
  
  pFVar1 = (this->GeometryCollection).Object;
  this->RootIndex = -1;
  if (pFVar1 != (FGeometryCollection *)0x0) {
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
              (&local_b8,(FManagedArrayCollection *)pFVar1);
    iVar2 = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_b8);
    this->RootIndex = iVar2;
  }
  return;
}

// ValidateSizeSpecificDataDefaults @ 1463d0b50

void __thiscall UGeometryCollection::ValidateSizeSpecificDataDefaults(UGeometryCollection *this)

{
  int *piVar1;
  TArray<FGeometryCollectionSizeSpecificData,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeometryCollectionSizeSpecificData *pFVar3;
  code *pcVar4;
  float fVar5;
  ForAnyElementType _Src;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FGeometryCollectionSizeSpecificData local_58;
  
  fVar5 = __real_47c34ff3;
  iVar7 = (this->SizeSpecificData).ArrayNum;
  if (iVar7 == 0) {
LAB_1463d0bc6:
    GeometryCollectionSizeSpecificDataDefaults(&local_58);
    if (local_58.CollisionShapes.ArrayNum != 0) {
      if ((local_58.CollisionShapes.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_58.CollisionShapes.AllocatorInstance.Data[1] == (FScriptContainerElement)0x3) {
        if ((local_58.CollisionShapes.ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *local_58.CollisionShapes.AllocatorInstance.Data = (FScriptContainerElement)0x1;
      }
    }
    pTVar2 = &this->SizeSpecificData;
    pFVar3 = (FGeometryCollectionSizeSpecificData *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= &local_58) && (&local_58 < pFVar3 + (this->SizeSpecificData).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->SizeSpecificData).ArrayNum;
    piVar1 = &(this->SizeSpecificData).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    _Src.Data = local_58.CollisionShapes.AllocatorInstance.Data;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    (this->SizeSpecificData).ArrayNum = iVar7 + 1;
    lVar9 = (longlong)iVar7 * 0x20;
    pFVar10 = pFVar8 + lVar9 + 8;
    *(float *)(pFVar8 + lVar9) = local_58.MaxSize;
    *(undefined8 *)pFVar10 = 0;
    *(int *)(pFVar10 + 8) = local_58.CollisionShapes.ArrayNum;
    if (local_58.CollisionShapes.ArrayNum == 0) {
      *(int *)(pFVar10 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,local_58.CollisionShapes.ArrayNum,0,(ForAnyElementType *)pFVar10,
                 local_58.CollisionShapes.ArrayNum,(int *)(pFVar10 + 0xc));
      memcpy(*(void **)pFVar10,_Src.Data,(longlong)local_58.CollisionShapes.ArrayNum * 0x24);
    }
    *(int *)(pFVar8 + lVar9 + 0x18) = local_58.DamageThreshold;
    if (local_58.CollisionShapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.CollisionShapes.AllocatorInstance.Data);
    }
  }
  else {
    pFVar8 = (this->SizeSpecificData).AllocatorInstance.Data;
    pFVar10 = pFVar8 + (longlong)iVar7 * 0x20;
    while( true ) {
      if ((this->SizeSpecificData).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FGeometryCollectionSizeSpecificData_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar10) goto LAB_1463d0bc6;
      if (fVar5 < *(float *)pFVar8 || fVar5 == *(float *)pFVar8) break;
      pFVar8 = pFVar8 + 0x20;
    }
  }
  if (((this->SizeSpecificData).ArrayNum == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeSpecificData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionObject.cpp"
                         ,0x15c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// WriteDataflowContent @ 1463d0e20

void __thiscall
UGeometryCollection::WriteDataflowContent
          (UGeometryCollection *this,TObjectPtr<UDataflowBaseContent> *param_1)

{
  UDataflowBaseContent *this_00;
  code *pcVar1;
  FName this_01;
  FString *pFVar2;
  UDataflow *local_res10;
  FString local_18;
  
  this_00 = (param_1->field0_0x0).DebugPtr;
  if (this_00 != (UDataflowBaseContent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pcVar1 = *(code **)(this_00->_padding_ + 0x2b8);
    local_res10 = FDataflowInstance::GetDataflowAsset
                            ((FDataflowInstance *)&(this->Overrides).field_0x20);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UDataflow *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    (*pcVar1)(this_00,&local_res10);
    this_01 = FDataflowInstance::GetDataflowTerminal
                        ((FDataflowInstance *)&(this->Overrides).field_0x20);
    pFVar2 = ::FName::ToString((FName *)this_01,&local_18);
    ::FString::operator=(&this_00->DataflowTerminal,pFVar2);
    UDataflowBaseContent::SetConstructionDirty(this_00,true);
    UDataflowBaseContent::SetSimulationDirty(this_00,true);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// _getUObject @ 1463d1500

UObject * __thiscall UGeometryCollection::_getUObject(UGeometryCollection *this)

{
  return (UObject *)&this[-1].GeometryCollection;
}

// _getUObject`adjustor{8}' @ 1463d150c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGeometryCollection::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UGeometryCollection::_getUObject_adjustor_8__(UGeometryCollection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGeometryCollection *)&this[-1].RenderResourceReleaseFence);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{48}' @ 1463d151c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGeometryCollection::_getUObject`adjustor{48}' (void)const __ptr64 */

UObject * __thiscall UGeometryCollection::_getUObject_adjustor_48__(UGeometryCollection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGeometryCollection *)&this[-1].BoneSelectedMaterialIndex);
  return (UObject *)pUVar1;
}

// execGetDataflowAsset @ 1463d1550

void __cdecl
UGeometryCollection::execGetDataflowAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDataflow *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FDataflowInstance::GetDataflowAsset((FDataflowInstance *)&param_1[0xc].field_0x8);
  *(UDataflow **)param_3 = pUVar1;
  return;
}

// execSetConvertVertexColorsToSRGB @ 1463d1660

void __cdecl
UGeometryCollection::execSetConvertVertexColorsToSRGB
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
  if ((bool)*(char *)(param_1 + 7) != (local_res8[0] != 0)) {
    *(bool *)(param_1 + 7) = local_res8[0] != 0;
  }
  return;
}

// execSetDataflowAsset @ 1463d1700

void __cdecl
UGeometryCollection::execSetDataflowAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDataflow *local_res8;
  
  local_res8 = (UDataflow *)0x0;
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
  FDataflowInstance::SetDataflowAsset((FDataflowInstance *)&param_1[0xc].field_0x8,local_res8);
  return;
}

// execSetEnableNanite @ 1463d1790

void __cdecl
UGeometryCollection::execSetEnableNanite(UObject *param_1,FFrame *param_2,void *param_3)

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
  if ((bool)param_1[6].field_0x20 != (local_res8[0] != 0)) {
    param_1[6].field_0x20 = local_res8[0] != 0;
  }
  return;
}

// operator() @ 1504eb370

bool __thiscall `UGeometryCollection::HasVisibleGeometry'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7375484966458622831>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7375484966458622831>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504eb3f0

bool __thiscall
`UGeometryCollection::GetMassOrDensityInternal'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7375484966458622462>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7375484966458622462>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

