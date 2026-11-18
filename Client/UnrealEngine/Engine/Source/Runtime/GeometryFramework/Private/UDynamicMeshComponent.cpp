// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 123

// StaticClass @ 1496e9cc0

UClass * __cdecl UDynamicMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshComponent",
               &Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton,
               StaticRegisterNativesUDynamicMeshComponent,0x950,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UDynamicMeshComponent>,local_res8,
               UBaseDynamicMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 1496ea510

bool __cdecl
`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(void)

{
  return false;
}

// UDynamicMeshComponent @ 1496f95b0

UDynamicMeshComponent * __thiscall
UDynamicMeshComponent::UDynamicMeshComponent(UDynamicMeshComponent *this,FVTableHelper *param_1)

{
  UBaseDynamicMeshComponent::UBaseDynamicMeshComponent((UBaseDynamicMeshComponent *)this,param_1);
  *(undefined8 *)&(this->OnMeshChanged).field_0x18 = 2;
  (this->MeshObject).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnMeshChanged = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->OnMeshChanged).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__IToolFrameworkComponent__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  this->_padding_ = (longlong)&___7UDynamicMeshComponent__6B_;
  *(undefined8 *)&(this->OnMeshChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnMeshVerticesChanged = 0;
  *(undefined8 *)&(this->OnMeshVerticesChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshVerticesChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshVerticesChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnMeshRegionChanged = 0;
  *(undefined8 *)&(this->OnMeshRegionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshRegionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshRegionChanged).field_0x18 = 2;
  this->bInvalidateProxyOnChange = true;
  (this->MeshObjectChangedHandle).ID = 0;
  this->bIsEditable = true;
  this->bAllowsGeometrySelection = true;
  *(undefined8 *)&this->TriangleColorFunc = 0;
  *(undefined8 *)&(this->TriangleColorFunc).field_0x28 = 0;
  *(undefined8 *)&this->VertexColorMappingFunc = 0;
  *(undefined8 *)&(this->VertexColorMappingFunc).field_0x28 = 0;
  *(undefined8 *)&this->SecondaryTriFilterFunc = 0;
  *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x28 = 0;
  (this->Decomposition).Ptr = (FMeshRenderDecomposition *)0x0;
  (this->RenderMeshPostProcessor).Ptr = (IRenderMeshPostProcessor *)0x0;
  (this->RenderMesh).Ptr = (FDynamicMesh3 *)0x0;
  *(undefined8 *)&this->OnChildAttachmentModified = 0;
  *(undefined8 *)&(this->OnChildAttachmentModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnChildAttachmentModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnChildAttachmentModified).field_0x18 = 2;
  this->TangentsType = Default;
  this->bAutoCalculatedTangentsValid = false;
  (this->AutoCalculatedTangents).Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCalculatedTangents).Tangents.ArrayNum = 0;
  (this->AutoCalculatedTangents).Tangents.ArrayMax = 0;
  (this->AutoCalculatedTangents).Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCalculatedTangents).Bitangents.ArrayNum = 0;
  (this->AutoCalculatedTangents).Bitangents.ArrayMax = 0;
  (this->AutoCalculatedTangents).AllDegenerateTris.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AutoCalculatedTangents).AllDegenerateTris.ArrayNum = 0;
  (this->AutoCalculatedTangents).AllDegenerateTris.ArrayMax = 0;
  (this->AutoCalculatedTangents).Mesh = (FDynamicMesh3 *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DistanceFieldLock,4000);
  (this->CurrentDistanceField).Object = (FDistanceFieldVolumeData *)0x0;
  (this->CurrentDistanceField).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DistanceFieldComputeQueue).JobCounter = (atomic<int>)0x0;
  (this->DistanceFieldComputeQueue).bIsShuttingDown = false;
  (this->DistanceFieldComputeQueue).PendingJobs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DistanceFieldComputeQueue).PendingJobs.ArrayNum = 0;
  (this->DistanceFieldComputeQueue).PendingJobs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->DistanceFieldComputeQueue).PendingJobsLock,4000);
  *(undefined8 *)&(this->DistanceFieldComputeQueue).OnComputeCompleted = 0;
  *(undefined8 *)&(this->DistanceFieldComputeQueue).OnComputeCompleted.field_0x28 = 0;
  this->CollisionType = '\x02';
  this->bUseAsyncCooking = false;
  this->bEnableComplexCollision = false;
  this->bDeferCollisionUpdates = false;
  this->bDisableMeshUVHitResults = false;
  (this->MeshBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  this->bTransientDeferCollisionUpdates = false;
  this->bCollisionUpdatePending = false;
  (this->LocalBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->LocalBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->AggGeom).SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphereElems.ArrayNum = 0;
  (this->AggGeom).SphereElems.ArrayMax = 0;
  (this->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).BoxElems.ArrayNum = 0;
  (this->AggGeom).BoxElems.ArrayMax = 0;
  (this->AggGeom).SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphylElems.ArrayNum = 0;
  (this->AggGeom).SphylElems.ArrayMax = 0;
  (this->AggGeom).ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).ConvexElems.ArrayNum = 0;
  (this->AggGeom).ConvexElems.ArrayMax = 0;
  (this->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (this->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (this->AggGeom).LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).LevelSetElems.ArrayNum = 0;
  (this->AggGeom).LevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (this->AggGeom).MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (this->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  (this->AsyncBodySetupQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncBodySetupQueue).ArrayNum = 0;
  (this->AsyncBodySetupQueue).ArrayMax = 0;
  this->bProxyValid = false;
  this->bProxyVerifyUsedMaterials = true;
  return this;
}

// UDynamicMeshComponent @ 1496f98e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDynamicMeshComponent * __thiscall
UDynamicMeshComponent::UDynamicMeshComponent
          (UDynamicMeshComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  code *pcVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UDynamicMesh *pUVar6;
  FDelegateHandle FVar7;
  FName local_res8;
  
  UBaseDynamicMeshComponent::UBaseDynamicMeshComponent((UBaseDynamicMeshComponent *)this,param_1);
  this->bInvalidateProxyOnChange = true;
  this->bIsEditable = true;
  this->bAllowsGeometrySelection = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MeshObject).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&this->OnMeshChanged = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__IToolFrameworkComponent__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  this->_padding_ = (longlong)&___7UDynamicMeshComponent__6B_;
  *(undefined8 *)&(this->OnMeshChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnMeshVerticesChanged = 0;
  *(undefined8 *)&(this->OnMeshVerticesChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshVerticesChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshVerticesChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnMeshRegionChanged = 0;
  *(undefined8 *)&(this->OnMeshRegionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshRegionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshRegionChanged).field_0x18 = 2;
  (this->MeshObjectChangedHandle).ID = 0;
  *(undefined8 *)&this->TriangleColorFunc = 0;
  *(undefined8 *)&(this->TriangleColorFunc).field_0x28 = 0;
  *(undefined8 *)&this->VertexColorMappingFunc = 0;
  *(undefined8 *)&(this->VertexColorMappingFunc).field_0x28 = 0;
  *(undefined8 *)&this->SecondaryTriFilterFunc = 0;
  *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x28 = 0;
  (this->Decomposition).Ptr = (FMeshRenderDecomposition *)0x0;
  (this->RenderMeshPostProcessor).Ptr = (IRenderMeshPostProcessor *)0x0;
  (this->RenderMesh).Ptr = (FDynamicMesh3 *)0x0;
  *(undefined8 *)&this->OnChildAttachmentModified = 0;
  *(undefined8 *)&(this->OnChildAttachmentModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnChildAttachmentModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnChildAttachmentModified).field_0x18 = 2;
  this->TangentsType = Default;
  this->bAutoCalculatedTangentsValid = false;
  (this->AutoCalculatedTangents).Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCalculatedTangents).Tangents.ArrayNum = 0;
  (this->AutoCalculatedTangents).Tangents.ArrayMax = 0;
  (this->AutoCalculatedTangents).Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCalculatedTangents).Bitangents.ArrayNum = 0;
  (this->AutoCalculatedTangents).Bitangents.ArrayMax = 0;
  (this->AutoCalculatedTangents).AllDegenerateTris.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AutoCalculatedTangents).AllDegenerateTris.ArrayNum = 0;
  (this->AutoCalculatedTangents).AllDegenerateTris.ArrayMax = 0;
  (this->AutoCalculatedTangents).Mesh = (FDynamicMesh3 *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DistanceFieldLock,4000);
  (this->CurrentDistanceField).Object = (FDistanceFieldVolumeData *)0x0;
  (this->CurrentDistanceField).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DistanceFieldComputeQueue).JobCounter = (atomic<int>)0x0;
  (this->DistanceFieldComputeQueue).bIsShuttingDown = false;
  (this->DistanceFieldComputeQueue).PendingJobs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DistanceFieldComputeQueue).PendingJobs.ArrayNum = 0;
  (this->DistanceFieldComputeQueue).PendingJobs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->DistanceFieldComputeQueue).PendingJobsLock,4000);
  *(undefined8 *)&(this->DistanceFieldComputeQueue).OnComputeCompleted = 0;
  *(undefined8 *)&(this->DistanceFieldComputeQueue).OnComputeCompleted.field_0x28 = 0;
  this->CollisionType = '\x02';
  this->bUseAsyncCooking = false;
  this->bEnableComplexCollision = false;
  this->bDeferCollisionUpdates = false;
  this->bDisableMeshUVHitResults = false;
  (this->MeshBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  this->bTransientDeferCollisionUpdates = false;
  this->bCollisionUpdatePending = false;
  (this->LocalBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->LocalBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  (this->AggGeom).SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphereElems.ArrayNum = 0;
  (this->AggGeom).SphereElems.ArrayMax = 0;
  (this->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).BoxElems.ArrayNum = 0;
  (this->AggGeom).BoxElems.ArrayMax = 0;
  (this->AggGeom).SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphylElems.ArrayNum = 0;
  (this->AggGeom).SphylElems.ArrayMax = 0;
  (this->AggGeom).ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).ConvexElems.ArrayNum = 0;
  (this->AggGeom).ConvexElems.ArrayMax = 0;
  (this->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (this->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (this->AggGeom).LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).LevelSetElems.ArrayNum = 0;
  (this->AggGeom).LevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (this->AggGeom).MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (this->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  (this->AsyncBodySetupQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncBodySetupQueue).ArrayNum = 0;
  (this->AsyncBodySetupQueue).ArrayMax = 0;
  this->bProxyValid = false;
  this->bProxyVerifyUsedMaterials = true;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  pFVar4 = ::FName::FName(&local_res8,L"DynamicMesh");
  FVar2 = *pFVar4;
  pUVar5 = UDynamicMesh::StaticClass();
  pUVar6 = (UDynamicMesh *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MeshObject).field0_0x0.DebugPtr = pUVar6;
  FVar7 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar6->MeshChangedEvent,(UDynamicMeshComponent *)&local_res8,
                     (pmf_738e16cf *)this);
                    /* WARNING: Load size is inaccurate */
  (this->MeshObjectChangedHandle).ID = *FVar7.ID;
  this->bProxyValid = false;
  pcVar3 = *(code **)(this->_padding_ + 0xd48);
  if (pcVar3 == InvalidateAutoCalculatedTangents) {
    this->bAutoCalculatedTangentsValid = false;
  }
  else {
    (*pcVar3)(this);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  UpdateLocalBounds(this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  pcVar3 = *(code **)(this->_padding_ + 0xb48);
  if (pcVar3 == GetDynamicMesh) {
    pUVar6 = (this->MeshObject).field0_0x0.DebugPtr;
  }
  else {
    pUVar6 = (UDynamicMesh *)(*pcVar3)(this);
  }
  (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6);
  return this;
}

// ~UDynamicMeshComponent @ 1496fb330

void __thiscall UDynamicMeshComponent::~UDynamicMeshComponent(UDynamicMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FDynamicMesh3 *pFVar3;
  IRenderMeshPostProcessor *pIVar4;
  FMeshRenderDecomposition *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__IToolFrameworkComponent__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  this->_padding_ = (longlong)&___7UDynamicMeshComponent__6B_;
  pFVar1 = (this->AsyncBodySetupQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FKAggregateGeom::~FKAggregateGeom(&this->AggGeom);
  TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::
  ~TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>(&this->DistanceFieldComputeQueue);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentDistanceField).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DistanceFieldLock);
  pFVar1 = (this->AutoCalculatedTangents).AllDegenerateTris.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoCalculatedTangents).Bitangents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoCalculatedTangents).Tangents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChildAttachmentModified).field_0x8,
             *(int *)&(this->OnChildAttachmentModified).field_0x10);
  pvVar2 = *(void **)&(this->OnChildAttachmentModified).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChildAttachmentModified);
  pFVar3 = (this->RenderMesh).Ptr;
  if (pFVar3 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pIVar4 = (this->RenderMeshPostProcessor).Ptr;
  if (pIVar4 != (IRenderMeshPostProcessor *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pFVar5 = (this->Decomposition).Ptr;
  if (pFVar5 != (FMeshRenderDecomposition *)0x0) {
    pFVar1 = (pFVar5->TriangleToGroupMap).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,int>
              ((TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>
                *)(pFVar5->Groups).AllocatorInstance.Data,(pFVar5->Groups).ArrayNum);
    pFVar1 = (pFVar5->Groups).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar5,0x20);
  }
  if (*(longlong *)&this->SecondaryTriFilterFunc != 0) {
    plVar6 = *(longlong **)&(this->SecondaryTriFilterFunc).field_0x28;
    plVar7 = (longlong *)&(this->SecondaryTriFilterFunc).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (*(longlong *)&this->VertexColorMappingFunc != 0) {
    plVar6 = *(longlong **)&(this->VertexColorMappingFunc).field_0x28;
    plVar7 = (longlong *)&(this->VertexColorMappingFunc).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (*(longlong *)&this->TriangleColorFunc != 0) {
    plVar6 = *(longlong **)&(this->TriangleColorFunc).field_0x28;
    plVar7 = (longlong *)&(this->TriangleColorFunc).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMeshRegionChanged).field_0x8,*(int *)&(this->OnMeshRegionChanged).field_0x10
            );
  pvVar2 = *(void **)&(this->OnMeshRegionChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshRegionChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMeshVerticesChanged).field_0x8,
             *(int *)&(this->OnMeshVerticesChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnMeshVerticesChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshVerticesChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMeshChanged).field_0x8,*(int *)&(this->OnMeshChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnMeshChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshChanged);
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UBaseDynamicMeshComponent::~UBaseDynamicMeshComponent((UBaseDynamicMeshComponent *)this);
  return;
}

// operator() @ 1496fe350

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  FDynamicMeshAttributeSet *pFVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  bool bVar13;
  float fVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  UPhysicsSettings *pUVar21;
  FDynamicMeshAttributeSet *pFVar22;
  uint uVar23;
  longlong lVar24;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined2 local_178 [4];
  undefined8 local_170;
  uint local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  float local_150;
  float fStack_14c;
  float local_148;
  int local_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_138;
  uint local_134;
  IndexIterator local_130;
  TDynamicMeshScalarTriangleAttribute<int> *local_120;
  float local_118;
  float local_114;
  float local_110;
  void *local_108;
  undefined8 local_100;
  FDynamicMeshAttributeSet *local_f8;
  undefined8 local_f0;
  double local_e0;
  code *local_d8;
  FDynamicMesh3 **local_d0;
  FDynamicMesh3 *local_c8;
  int *local_c0;
  void **local_b8;
  undefined4 *local_b0;
  FDynamicMeshAttributeSet **local_a8;
  undefined4 *local_a0;
  longlong *local_98;
  float *local_90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  
  pUVar21 = UPhysicsSettings::Get();
  if (pUVar21->bSupportUVFromHitResults != false) {
    pFVar6 = (param_1->AttributeSet).Ptr;
    if (((pFVar6 != (FDynamicMeshAttributeSet *)0x0) &&
        (iVar17 = (**(code **)(pFVar6->_padding_ + 0xa8))(), 0 < iVar17)) &&
       (*(char *)(*(longlong *)this + 0x854) == '\0')) {
      bVar13 = true;
      lVar25 = **(longlong **)((longlong)this + 8);
      pFVar6 = (param_1->AttributeSet).Ptr;
      this_00 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                 *)(lVar25 + 0x30);
      pFVar22 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar22 = pFVar6;
      }
      uVar18 = (**(code **)(pFVar22->_padding_ + 0xa8))();
      iVar17 = *(int *)(lVar25 + 0x38);
      if (iVar17 < (int)uVar18) {
        iVar19 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar18 - iVar17,(ForAnyElementType *)this_00,
                            (int *)(lVar25 + 0x38),(int *)(lVar25 + 0x3c));
        memset((this_00->AllocatorInstance).Data + (longlong)iVar19 * 0x10,0,
               (longlong)(int)(uVar18 - iVar17) << 4);
      }
      else {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        if ((int)uVar18 < iVar17) {
          uVar29 = iVar17 - uVar18;
          if (((int)(uVar18 | uVar29) < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (uVar29 != 0) {
            TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ::RemoveAtImpl(this_00,uVar18,uVar29);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)this_00,*(int *)(lVar25 + 0x38),
                       (int *)(lVar25 + 0x3c));
          }
        }
      }
      bVar16 = true;
      goto LAB_1496fe4db;
    }
  }
  bVar16 = false;
  bVar13 = false;
LAB_1496fe4db:
  pFVar6 = (param_1->AttributeSet).Ptr;
  if ((pFVar6 == (FDynamicMeshAttributeSet *)0x0) ||
     (local_120 = (pFVar6->MaterialIDAttrib).Ptr,
     local_120 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    local_120 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  }
  iVar17 = (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
           (param_1->VertexRefCounts).FreeIndices.CurBlockUsed;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  if (bVar16) {
    uVar18 = ((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) * 3;
    if ((int)uVar18 < 1) {
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar18,&local_160.AllocatorInstance,&local_160.ArrayNum,
                          &local_160.ArrayMax);
      memset(local_160.AllocatorInstance.Data + (longlong)iVar19 * 4,0,(longlong)(int)uVar18 << 2);
    }
    local_f8 = (param_1->AttributeSet).Ptr;
    local_108 = (void *)0x0;
    local_100 = 0;
    local_140 = (**(code **)(local_f8->_padding_ + 0xa8))();
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_130,&param_1->VertexRefCounts,0,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    uVar18 = (param_1->VertexRefCounts).RefCounts.CurBlock;
    uVar27 = (ulonglong)(uint)local_130._8_4_;
    uVar29 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    uVar23 = local_130._8_4_;
    while (uVar23 != uVar18 * 0x200 + uVar29) {
      iVar19 = (int)uVar27;
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>::operator()'::__l33::<lambda_1>,void,int>
                 ::Call;
      lVar25 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar27 >> 9) * 8);
      pdVar2 = (double *)(lVar25 + (ulonglong)(local_130._8_4_ & 0x1ff) * 0x18);
      local_e0 = *(double *)(lVar25 + 0x10 + (ulonglong)(local_130._8_4_ & 0x1ff) * 0x18);
      local_98 = *(longlong **)((longlong)this + 8);
      local_118 = (float)*pdVar2;
      local_114 = (float)pdVar2[1];
      local_110 = (float)local_e0;
      local_13c = *(undefined4 *)(*local_98 + 8);
      local_c0 = &local_144;
      local_b8 = &local_108;
      local_b0 = &local_140;
      local_a8 = &local_f8;
      local_a0 = &local_13c;
      local_90 = &local_118;
      local_88 = &local_160;
      local_144 = iVar19;
      local_d0 = &local_c8;
      local_c8 = param_1;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                (param_1,iVar19,(TFunctionRef<void___cdecl(int)> *)&local_d8);
      local_130._8_4_ = iVar19 + 1;
      uVar27 = (ulonglong)(uint)local_130._8_4_;
      if ((int)local_130._8_4_ < (int)local_130._12_4_) {
        do {
          if ((*(short *)(*(longlong *)(*(longlong *)(local_130._0_8_ + 8) + (uVar27 >> 9) * 8) +
                         (ulonglong)(local_130._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(*(longlong *)(local_130._0_8_ + 8) + (uVar27 >> 9) * 8) +
                        (ulonglong)(local_130._8_4_ & 0x1ff) * 2) != -1)) break;
          local_130._8_4_ = (int)uVar27 + 1;
          uVar27 = (ulonglong)(uint)local_130._8_4_;
        } while ((int)local_130._8_4_ < (int)local_130._12_4_);
      }
      uVar23 = (uint)uVar27;
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
  }
  else {
    if (iVar17 != 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                (&local_160,
                 (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    }
    uVar18 = (param_1->VertexRefCounts).UsedCount;
    pFVar7 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (*(int *)((longlong)&pFVar7[1].Data + 4) < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar18,pFVar7,*(int *)&pFVar7[1].Data,(int *)((longlong)&pFVar7[1].Data + 4))
      ;
    }
    uVar29 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    uVar18 = 0;
    if ((uVar29 != 0) &&
       (pFVar8 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
       0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
      uVar23 = 1;
      uVar18 = 1;
      if (1 < (int)uVar29) {
        do {
          sVar5 = *(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar23 >> 9) * 8) +
                            (ulonglong)(uVar23 & 0x1ff) * 2);
          if ((sVar5 != 0) && (uVar18 = uVar23, sVar5 != -1)) break;
          uVar23 = uVar23 + 1;
          uVar18 = uVar23;
        } while ((int)uVar23 < (int)uVar29);
      }
    }
joined_r0x0001496fe5eb:
    if (uVar18 != uVar29) {
      while( true ) {
        pFVar7 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
        lVar25 = *(longlong *)
                  ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        local_e0 = *(double *)(lVar25 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        local_150 = (float)*pdVar2;
        fStack_14c = (float)pdVar2[1];
        local_148 = (float)local_e0;
        if (((pFVar7->Data <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 <
             pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0xc)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar23 = *(uint *)&pFVar7[1].Data;
        puVar1 = (uint *)((longlong)&pFVar7[1].Data + 4);
        if (uVar23 == *puVar1) {
          uVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,pFVar7,(int *)puVar1);
        }
        pFVar8 = pFVar7->Data;
        *(uint *)&pFVar7[1].Data = uVar23 + 1;
        *(ulonglong *)(pFVar8 + (longlong)(int)uVar23 * 0xc) = CONCAT44(fStack_14c,local_150);
        *(float *)(pFVar8 + (longlong)(int)uVar23 * 0xc + 8) = local_148;
        if (iVar17 == 0) {
          if ((uVar18 != uVar23) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("vid == Index",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                                  ,0x578,L""), bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          uVar20 = 0;
          if ((int)uVar18 < local_160.ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar18 * 4) = uVar23;
        }
        uVar18 = uVar18 + 1;
        if ((int)uVar29 <= (int)uVar18) break;
        pFVar8 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          if ((*(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
          uVar18 = uVar18 + 1;
          if ((int)uVar29 <= (int)uVar18) goto joined_r0x0001496fe5eb;
        }
      }
      goto joined_r0x0001496fe5eb;
    }
  }
  uVar18 = (param_1->TriangleRefCounts).UsedCount;
  lVar25 = **(longlong **)((longlong)this + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)(lVar25 + 0x1c) < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar18,(ForAnyElementType *)(lVar25 + 0x10),*(int *)(lVar25 + 0x18),
               (int *)(lVar25 + 0x1c));
  }
  uVar18 = (param_1->TriangleRefCounts).UsedCount;
  lVar25 = **(longlong **)((longlong)this + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)(lVar25 + 0x2c) < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar18,(ForAnyElementType *)(lVar25 + 0x20),*(int *)(lVar25 + 0x28),
               (int *)(lVar25 + 0x2c));
  }
  fVar14 = __real_322bcc77;
  local_138 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
              (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar18 = 0;
  if (((local_138 != 0) &&
      (pFVar8 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
      0xfffd < (ushort)(**(short **)pFVar8 - 1U))) && (uVar18 = 1, 1 < local_138)) {
    do {
      sVar5 = *(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 2);
      if ((sVar5 != 0) && (sVar5 != -1)) break;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < local_138);
  }
  local_134 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (uVar18 != local_134) {
LAB_1496feb00:
    do {
      lVar25 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8);
      local_f0 = *(undefined8 *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      uVar29 = *(uint *)(lVar25 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      local_170 = 0;
      local_168 = 0;
      if (bVar13) {
        uVar29 = uVar18 * 3;
        uVar23 = 0;
        if ((int)uVar29 < local_160.ArrayNum) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar25 = (longlong)(int)uVar29;
        local_170 = CONCAT44(local_170._4_4_,
                             *(undefined4 *)(local_160.AllocatorInstance.Data + lVar25 * 4));
        uVar23 = 0;
        if ((int)(uVar29 + 1) < local_160.ArrayNum) {
          uVar23 = ~(uVar29 + 1) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_170 = CONCAT44(*(undefined4 *)(local_160.AllocatorInstance.Data + lVar25 * 4 + 4),
                             (uint)local_170);
        uVar23 = 0;
        if ((int)(uVar29 + 2) < local_160.ArrayNum) {
          uVar23 = ~(uVar29 + 2) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar15 = local_170;
        uVar29 = *(uint *)(local_160.AllocatorInstance.Data + lVar25 * 4 + 8);
      }
      else {
        uVar15 = local_f0;
        if (iVar17 != 0) {
          lVar25 = (longlong)(int)(uint)local_f0;
          uVar23 = 0;
          if ((int)(uint)local_f0 < local_160.ArrayNum) {
            uVar23 = ~(uint)local_f0 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar26 = (longlong)(int)local_f0._4_4_;
          local_170 = CONCAT44(local_170._4_4_,
                               *(undefined4 *)(local_160.AllocatorInstance.Data + lVar25 * 4));
          uVar23 = 0;
          if ((int)local_f0._4_4_ < local_160.ArrayNum) {
            uVar23 = ~local_f0._4_4_ >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_170 = CONCAT44(*(undefined4 *)(local_160.AllocatorInstance.Data + lVar26 * 4),
                               (uint)local_170);
          uVar23 = 0;
          if ((int)uVar29 < local_160.ArrayNum) {
            uVar23 = ~uVar29 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar15 = local_170;
          uVar29 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar29 * 4);
        }
      }
      local_168 = uVar29;
      local_170 = uVar15;
      lVar25 = (longlong)(int)(uint)local_170;
      plVar9 = (longlong *)**(longlong **)((longlong)this + 8);
      uVar29 = 0;
      if ((int)(uint)local_170 < (int)plVar9[1]) {
        uVar29 = ~(uint)local_170 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar24 = (longlong)(int)local_170._4_4_;
      lVar26 = *plVar9;
      plVar9 = (longlong *)**(longlong **)((longlong)this + 8);
      uVar29 = 0;
      if ((int)local_170._4_4_ < (int)plVar9[1]) {
        uVar29 = ~local_170._4_4_ >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar28 = (longlong)(int)local_168;
      lVar10 = *plVar9;
      plVar9 = (longlong *)**(longlong **)((longlong)this + 8);
      uVar29 = 0;
      if ((int)local_168 < (int)plVar9[1]) {
        uVar29 = ~local_168 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar35 = *(float *)(lVar10 + lVar24 * 0xc);
      fVar3 = *(float *)(lVar26 + lVar25 * 0xc);
      lVar11 = *plVar9;
      if ((((((fVar3 != fVar35) ||
             (*(float *)(lVar10 + 4 + lVar24 * 0xc) != *(float *)(lVar26 + 4 + lVar25 * 0xc))) ||
            (*(float *)(lVar10 + 8 + lVar24 * 0xc) != *(float *)(lVar26 + 8 + lVar25 * 0xc))) &&
           (((fVar4 = *(float *)(lVar11 + lVar28 * 0xc), fVar3 != fVar4 ||
             (*(float *)(lVar11 + 4 + lVar28 * 0xc) != *(float *)(lVar26 + 4 + lVar25 * 0xc))) ||
            (*(float *)(lVar11 + 8 + lVar28 * 0xc) != *(float *)(lVar26 + 8 + lVar25 * 0xc))))) &&
          (((fVar35 != fVar4 ||
            (*(float *)(lVar11 + 4 + lVar28 * 0xc) != *(float *)(lVar10 + 4 + lVar24 * 0xc))) ||
           (*(float *)(lVar11 + 8 + lVar28 * 0xc) != *(float *)(lVar10 + 8 + lVar24 * 0xc))))) &&
         (fVar32 = *(float *)(lVar26 + 4 + lVar25 * 0xc),
         fVar30 = *(float *)(lVar26 + 8 + lVar25 * 0xc),
         fVar34 = fVar30 - *(float *)(lVar10 + 8 + lVar24 * 0xc),
         fVar33 = fVar32 - *(float *)(lVar10 + 4 + lVar24 * 0xc),
         fVar32 = fVar32 - *(float *)(lVar11 + 4 + lVar28 * 0xc),
         fVar30 = fVar30 - *(float *)(lVar11 + 8 + lVar28 * 0xc),
         fVar31 = fVar33 * fVar30 - fVar34 * fVar32,
         fVar32 = (fVar3 - fVar35) * fVar32 - fVar33 * (fVar3 - fVar4),
         fVar35 = fVar34 * (fVar3 - fVar4) - (fVar3 - fVar35) * fVar30,
         fVar14 <= fVar35 * fVar35 + fVar31 * fVar31 + fVar32 * fVar32)) {
        lVar25 = **(longlong **)((longlong)this + 8);
        if (((*(undefined8 **)(lVar25 + 0x10) <= &local_170) &&
            (&local_170 <
             (undefined8 *)
             ((longlong)*(undefined8 **)(lVar25 + 0x10) + (longlong)*(int *)(lVar25 + 0x1c) * 0xc)))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = *(int *)(lVar25 + 0x18);
        if (iVar19 == *(int *)(lVar25 + 0x1c)) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)(lVar25 + 0x10),(int *)(lVar25 + 0x1c));
        }
        *(int *)(lVar25 + 0x18) = iVar19 + 1;
        lVar25 = *(longlong *)(lVar25 + 0x10);
        *(undefined8 *)(lVar25 + (longlong)iVar19 * 0xc) = local_170;
        *(uint *)(lVar25 + 8 + (longlong)iVar19 * 0xc) = local_168;
        if (local_120 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          local_178[0] = 0;
        }
        else {
          local_178[0] = (undefined2)
                         *(undefined4 *)
                          (*(longlong *)
                            (*(longlong *)&local_120->field_0x20 + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
        }
        lVar25 = **(longlong **)((longlong)this + 8);
        if (((*(undefined2 **)(lVar25 + 0x20) <= local_178) &&
            (local_178 < *(undefined2 **)(lVar25 + 0x20) + *(int *)(lVar25 + 0x2c))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = *(int *)(lVar25 + 0x28);
        if (iVar19 == *(int *)(lVar25 + 0x2c)) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,(ForAnyElementType *)(lVar25 + 0x20),(int *)(lVar25 + 0x2c));
        }
        *(int *)(lVar25 + 0x28) = iVar19 + 1;
        *(undefined2 *)(*(longlong *)(lVar25 + 0x20) + (longlong)iVar19 * 2) = local_178[0];
      }
      uVar18 = uVar18 + 1;
      if ((int)uVar18 < local_138) {
        do {
          lVar25 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar18 >> 9) * 8);
          if ((*(short *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) goto LAB_1496feb00;
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < local_138);
      }
    } while (uVar18 != local_134);
  }
  puVar1 = (uint *)(**(longlong **)((longlong)this + 8) + 0x40);
  *puVar1 = *puVar1 | 1;
  puVar1 = (uint *)(**(longlong **)((longlong)this + 8) + 0x40);
  *puVar1 = *puVar1 | 2;
  puVar1 = (uint *)(**(longlong **)((longlong)this + 8) + 0x40);
  *puVar1 = *puVar1 | 4;
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1496ffa10

void __thiscall
`UDynamicMeshComponent::ValidateMaterialSlots'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2 != (FDynamicMeshAttributeSet *)0x0) &&
     (pTVar3 = (pFVar2->MaterialIDAttrib).Ptr,
     pTVar3 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    uVar10 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar9 = 0;
    if ((uVar10 != 0) &&
       (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
       0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
      uVar8 = 1;
      uVar9 = 1;
      if (1 < (int)uVar10) {
        do {
          lVar7 = (ulonglong)(uVar8 & 0x1ff) * 2;
          lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8);
          if ((*(short *)(lVar7 + lVar5) != 0) && (uVar9 = uVar8, *(short *)(lVar7 + lVar5) != -1))
          break;
          uVar8 = uVar8 + 1;
          uVar9 = uVar8;
        } while ((int)uVar8 < (int)uVar10);
      }
    }
joined_r0x0001496ffab7:
    if (uVar9 != uVar10) {
      while( true ) {
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)&pTVar3->field_0x20 + (ulonglong)(uVar9 >> 9) * 8) +
                        (ulonglong)(uVar9 & 0x1ff) * 4);
        piVar6 = *(int **)this;
        if (iVar1 < *piVar6) {
          iVar1 = *piVar6;
        }
        uVar9 = uVar9 + 1;
        *piVar6 = iVar1;
        if ((int)uVar10 <= (int)uVar9) break;
        pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar5 = (ulonglong)(uVar9 >> 9) * 8;
          lVar7 = (ulonglong)(uVar9 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar5)) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar5)) != -1)) break;
          uVar9 = uVar9 + 1;
          if ((int)uVar10 <= (int)uVar9) goto joined_r0x0001496ffab7;
        }
      }
      goto joined_r0x0001496ffab7;
    }
  }
  return;
}

// operator() @ 1496ffb70

void __thiscall
`UDynamicMeshComponent::UpdateAutoCalculatedTangents'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar3;
  FComputeTangentsOptions local_res10 [12];
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    if ((pFVar1->UVLayers).Array.ArrayNum < 1) {
      pTVar3 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
    }
    else {
      pTVar3 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                (pFVar1->UVLayers).Array.AllocatorInstance.Data;
    }
    if ((pFVar1->NormalLayers).Array.ArrayNum < 1) {
      pTVar2 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    if ((pTVar3 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) &&
       (pTVar2 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
      local_res10[0].bAveraged = true;
      local_res10[0].bAngleWeighted = true;
      *(FDynamicMesh3 **)(*(longlong *)this + 0x770) = param_1;
      UE::Geometry::TMeshTangents<float>::ComputeTriVertexTangents
                ((TMeshTangents<float> *)(*(longlong *)this + 0x770),pTVar2,pTVar3,local_res10);
      *(undefined8 *)(*(longlong *)this + 0x770) = 0;
      *(undefined1 *)(*(longlong *)this + 0x769) = 1;
    }
  }
  return;
}

// operator() @ 1497007a0

bool __thiscall
`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::
operator()(void *this)

{
  UDynamicMeshComponent *pUVar1;
  char cVar2;
  <lambda_1> local_98;
  undefined1 local_80 [24];
  undefined1 local_68 [16];
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  undefined8 local_40;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  local_98.__this = *(UDynamicMeshComponent **)this;
  local_98.BoundsOut = *(TAxisAlignedBox3<double> **)((longlong)this + 0x18);
  local_98.Triangles = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
  local_68._0_8_ = (UDynamicMeshComponent *)0x0;
  local_40 = 0;
  Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_80,DynamicMeshComponentAsyncExecTarget,&local_98,
             (TUniqueFunction<void___cdecl(void)> *)local_68);
  local_68._0_8_ = *(undefined8 *)this;
  local_68._8_8_ = *(undefined8 *)((longlong)this + 0x10);
  local_58 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>_>
            ((TFuture<void> *)&local_98,DynamicMeshComponentAsyncExecTarget,(<lambda_2> *)local_68,
             &local_38);
  pUVar1 = local_98.__this;
  if (local_98.__this != (UDynamicMeshComponent *)0x0) {
    do {
      cVar2 = (**(code **)(*(longlong *)pUVar1->_padding_ + 0x20))
                        ((longlong *)pUVar1->_padding_,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  if (local_80._0_8_ != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(local_80._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_80._0_8_ + 0x60),0xffffffff,0);
    } while (cVar2 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_98.BoundsOut);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_80._8_8_);
  return true;
}

// operator() @ 1497008b0

void __thiscall
`UDynamicMeshComponent::ApplyTransform'::__l5::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  TQuaternion<double>_u_0 local_60;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  pdVar1 = *(double **)((longlong)this + 8);
  local_60._s_0.X = *pdVar1;
  local_60._s_0.Y = pdVar1[1];
  local_60._s_0.Z = pdVar1[2];
  local_60._s_0.W = pdVar1[3];
  local_30 = pdVar1[6];
  local_40 = pdVar1[4];
  dStack_38 = pdVar1[5];
  local_18 = pdVar1[10];
  local_28 = pdVar1[8];
  dStack_20 = pdVar1[9];
  if (**(char **)this != '\0') {
    MeshTransforms::ApplyTransformInverse(param_1,(TTransformSRT3<double> *)&local_60._s_0,true,All)
    ;
    return;
  }
  MeshTransforms::ApplyTransform(param_1,(TTransformSRT3<double> *)&local_60._s_0,true,All);
  return;
}

// operator() @ 149700da0

FColor __thiscall
`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  FColor FVar1;
  undefined4 in_register_00000084;
  uint in_R9D;
  
  FVar1.field0_0x0 = SUB84(param_1,0);
  if ((((*(char *)(CONCAT44(in_register_00000084,param_2) + 0x1a8) != '\0') && (-1 < (int)in_R9D))
      && ((int)in_R9D <
          *(int *)(CONCAT44(in_register_00000084,param_2) + 0x140) * 0x200 +
          *(int *)(CONCAT44(in_register_00000084,param_2) + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(CONCAT44(in_register_00000084,param_2) + 0x148) +
                           (ulonglong)(in_R9D >> 9) * 8) + (ulonglong)(in_R9D & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    UE::Geometry::LinearColors::SelectFColor((int)FVar1.field0_0x0);
    return (FColor)FVar1.field0_0x0;
  }
  UE::Geometry::LinearColors::SelectFColor((int)FVar1.field0_0x0);
  return (FColor)FVar1.field0_0x0;
}

// ApplyChange @ 1497031c0

void __thiscall
UDynamicMeshComponent::ApplyChange(UDynamicMeshComponent *this,FMeshChange *param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined7 in_register_00000081;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014970320b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x10))
              (lVar1 + 0x30,param_1,CONCAT71(in_register_00000081,param_2));
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4820002403413656776>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x4c8,"MeshObject");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ApplyChange @ 149703220

void __thiscall
UDynamicMeshComponent::ApplyChange
          (UDynamicMeshComponent *this,FMeshReplacementChange *param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined7 in_register_00000081;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014970326b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x10))
              (lVar1 + 0x38,param_1,CONCAT71(in_register_00000081,param_2));
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4820002403413656785>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x4d1,"MeshObject");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ApplyChange @ 149703280

void __thiscall
UDynamicMeshComponent::ApplyChange
          (UDynamicMeshComponent *this,FMeshVertexChange *param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined7 in_register_00000081;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001497032ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))
              (lVar1 + 0x28,param_1,CONCAT71(in_register_00000081,param_2));
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4820002403413656767>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x4bf,"MeshObject");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ApplyTransform @ 149703330

void __thiscall
UDynamicMeshComponent::ApplyTransform
          (UDynamicMeshComponent *this,TTransform<double> *param_1,bool param_2)

{
  TObjectPtr<UDynamicMesh>_u_0 TVar1;
  FDynamicMesh3 *pFVar2;
  FDynamicMeshAttributeSet *this_00;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FDynamicMeshAttributeSet *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  TObjectPtr<UDynamicMesh>_u_0 local_res20;
  undefined1 *local_78;
  TTransform<double> *local_70;
  FDynamicMeshChangeInfo local_68;
  FDynamicMeshChangeInfo local_48 [2];
  
  local_res18[0] = param_2;
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413655820>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x10c,"MeshObject");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((this->bIsEditable == false) &&
       (bVar5 = `UDynamicMeshComponent::ApplyTransform'::__l3::<lambda_1>::operator()(local_res8),
       !bVar5)) {
      return;
    }
    TVar1 = (TObjectPtr<UDynamicMesh>_u_0)(this->MeshObject).field0_0x0.DebugPtr;
    local_78 = local_res18;
    local_68.MeshChange = (FMeshChange *)0x0;
    local_68.ReplaceChange = (FMeshReplacementChange *)0x0;
    local_68.VertexChange = (FMeshVertexChange *)0x0;
    local_68.Type = GeneralEdit;
    local_68.Flags = NormalsTangents|VertexPositions;
    local_68.bIsRevertChange = false;
    local_68.Type = DeformationEdit;
    uVar4 = local_68._0_8_;
    local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
    local_48[0].VertexChange = (FMeshVertexChange *)0x0;
    local_48[0].Type = DeformationEdit;
    local_48[0].Flags = local_68.Flags;
    local_48[0].bIsRevertChange = local_68.bIsRevertChange;
    local_48[0]._3_5_ = local_68._3_5_;
    local_48[0].MeshChange = (FMeshChange *)0x0;
    local_70 = param_1;
    local_68._0_8_ = uVar4;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&(TVar1.DebugPtr)->PreMeshChangedEvent,TVar1.DebugPtr,local_48);
    `UDynamicMeshComponent::ApplyTransform'::__l5::<lambda_2>::operator()
              (&local_78,((TVar1.DebugPtr)->Mesh).Ptr);
    pFVar2 = ((TVar1.DebugPtr)->Mesh).Ptr;
    if ((pFVar2->TriangleGroups).bIsSet == false) {
      UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar2,0);
    }
    pFVar2 = ((TVar1.DebugPtr)->Mesh).Ptr;
    if ((pFVar2->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar2);
    }
    this_00 = ((((TVar1.DebugPtr)->Mesh).Ptr)->AttributeSet).Ptr;
    pFVar6 = (FDynamicMeshAttributeSet *)0x0;
    if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar6 = this_00;
    }
    if ((pFVar6->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
    }
    local_68.MeshChange = (FMeshChange *)0x0;
    local_68.ReplaceChange = (FMeshReplacementChange *)0x0;
    local_68.VertexChange = (FMeshVertexChange *)0x0;
    local_68._0_8_ = uVar4;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&(TVar1.DebugPtr)->MeshChangedEvent,TVar1.DebugPtr,&local_68);
    local_res20 = TVar1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &(TVar1.DebugPtr)->MeshModifiedBPEvent,&local_res20);
  }
  return;
}

// BeginDestroy @ 1497034e0

void __thiscall UDynamicMeshComponent::BeginDestroy(UDynamicMeshComponent *this)

{
  UMeshComponent::BeginDestroy((UMeshComponent *)this);
  FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
  return;
}

// BroadcastMeshPropertyChangeEvent @ 1497037c0

void __thiscall UDynamicMeshComponent::BroadcastMeshPropertyChangeEvent(UDynamicMeshComponent *this)

{
  return;
}

// CalcBounds @ 149703fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UDynamicMeshComponent::CalcBounds
          (UDynamicMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  TMatrix<double> *pTVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auStack_168 [32];
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  TVector<double>_u_0 local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_110._s_0.X = (this->LocalBounds).Min.field0_0x0._s_0.X;
  local_110._s_0.Y = (this->LocalBounds).Min.field0_0x0._s_0.Y;
  local_110._s_0.Z = (this->LocalBounds).Min.field0_0x0._s_0.Z;
  local_f8 = (this->LocalBounds).Max.field0_0x0._s_0.X;
  dStack_f0 = (this->LocalBounds).Max.field0_0x0._s_0.Y;
  local_e8 = (this->LocalBounds).Max.field0_0x0._s_0.Z;
  dVar3 = (this->LocalBounds).Min.field0_0x0._s_0.X;
  pTVar1 = &(this->LocalBounds).Max;
  if ((((pTVar1->field0_0x0)._s_0.X <= dVar3 && dVar3 != (pTVar1->field0_0x0)._s_0.X) ||
      (dVar3 = (this->LocalBounds).Min.field0_0x0._s_0.Y,
      pdVar2 = &(this->LocalBounds).Max.field0_0x0._s_0.Y, *pdVar2 <= dVar3 && dVar3 != *pdVar2)) ||
     (dVar3 = (this->LocalBounds).Min.field0_0x0._s_0.Z,
     pdVar2 = &(this->LocalBounds).Max.field0_0x0._s_0.Z, *pdVar2 <= dVar3 && dVar3 != *pdVar2)) {
    local_e0 = 0;
  }
  else {
    local_e0 = 1;
  }
  pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_d8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_110._s_0,(TBox<double> *)&local_148._s_0,pTVar5);
  local_120 = local_120 - local_148._s_0.Z;
  local_128 = local_128 - local_148._s_0.Y;
  dVar9 = local_120 * __real_3fe0000000000000;
  dVar4 = (local_130 - local_148._s_0.X) * __real_3fe0000000000000;
  dVar3 = local_128 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar4 + local_148._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3 + local_148._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar9 + local_148._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar9;
  dVar3 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar6._0_8_ = dVar3 * dVar3;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (local_120 * local_120 + local_128 * local_128) * __real_3fd0000000000000 +
                 auVar6._0_8_;
  auVar7 = sqrtpd(auVar6,auVar7);
  __return_storage_ptr__->SphereRadius = auVar7._0_8_;
  dVar8 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dVar4 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  dVar9 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3 * dVar8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar8 * dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar8 * dVar9;
  __return_storage_ptr__->SphereRadius =
       (double)*(float *)((longlong)&this->_padding_ + 4) * __return_storage_ptr__->SphereRadius;
  return __return_storage_ptr__;
}

// ClearSimpleCollisionShapes @ 149704e60

void __thiscall
UDynamicMeshComponent::ClearSimpleCollisionShapes(UDynamicMeshComponent *this,bool param_1)

{
  FKAggregateGeom::EmptyElements(&this->AggGeom);
  if (param_1) {
    (**(code **)(this->_padding_ + 0xd68))(this,0);
  }
  return;
}

// ClearTriangleColorFunction @ 149704ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDynamicMeshComponent::ClearTriangleColorFunction
          (UDynamicMeshComponent *this,EDynamicMeshComponentRenderUpdateMode param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(longlong *)&this->TriangleColorFunc != 0) {
    local_48 = *(longlong *)&this->TriangleColorFunc;
    uVar6 = *(undefined8 *)&(this->TriangleColorFunc).field_0x8;
    uVar1 = *(undefined4 *)&(this->TriangleColorFunc).field_0x10;
    uVar2 = *(undefined4 *)&(this->TriangleColorFunc).field_0x14;
    uVar3 = *(undefined4 *)&(this->TriangleColorFunc).field_0x18;
    uVar4 = *(undefined4 *)&(this->TriangleColorFunc).field_0x1c;
    uVar5 = *(undefined8 *)&(this->TriangleColorFunc).field_0x20;
    plStack_20 = *(longlong **)&(this->TriangleColorFunc).field_0x28;
    *(undefined8 *)&this->TriangleColorFunc = 0;
    *(undefined8 *)&(this->TriangleColorFunc).field_0x8 = uStack_40;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x10 = local_38;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x14 = uStack_34;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x18 = uStack_30;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x1c = uStack_2c;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x28 = 0;
    *(undefined4 *)&(this->TriangleColorFunc).field_0x2c = 0;
    local_38 = uVar1;
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    local_28 = uVar5;
    uStack_40 = uVar6;
    if (local_48 != 0) {
      plVar7 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar7 = plStack_20;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (param_1 == FastUpdate) {
      FastNotifyColorsUpdated(this);
    }
    else if (param_1 == FullUpdate) {
      (**(code **)(this->_padding_ + 0xb50))(this);
    }
  }
  return;
}

// ClearVertexColorRemappingFunction @ 149704f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDynamicMeshComponent::ClearVertexColorRemappingFunction
          (UDynamicMeshComponent *this,EDynamicMeshComponentRenderUpdateMode param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(longlong *)&this->VertexColorMappingFunc != 0) {
    local_48 = *(longlong *)&this->VertexColorMappingFunc;
    uVar6 = *(undefined8 *)&(this->VertexColorMappingFunc).field_0x8;
    uVar1 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x10;
    uVar2 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x14;
    uVar3 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x18;
    uVar4 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x1c;
    uVar5 = *(undefined8 *)&(this->VertexColorMappingFunc).field_0x20;
    plStack_20 = *(longlong **)&(this->VertexColorMappingFunc).field_0x28;
    *(undefined8 *)&this->VertexColorMappingFunc = 0;
    *(undefined8 *)&(this->VertexColorMappingFunc).field_0x8 = uStack_40;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x10 = local_38;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x14 = uStack_34;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x18 = uStack_30;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x1c = uStack_2c;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x28 = 0;
    *(undefined4 *)&(this->VertexColorMappingFunc).field_0x2c = 0;
    local_38 = uVar1;
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    local_28 = uVar5;
    uStack_40 = uVar6;
    if (local_48 != 0) {
      plVar7 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar7 = plStack_20;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (param_1 == FastUpdate) {
      FastNotifyColorsUpdated(this);
    }
    else if (param_1 == FullUpdate) {
      (**(code **)(this->_padding_ + 0xb50))(this);
    }
  }
  return;
}

// ConfigureMaterialSet @ 149706340

void __thiscall
UDynamicMeshComponent::ConfigureMaterialSet
          (UDynamicMeshComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  iVar4 = param_1->ArrayNum;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      pcVar1 = *(code **)(this->_padding_ + 0x6b8);
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
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
      (*pcVar1)(this,uVar5,*(undefined8 *)((param_1->AllocatorInstance).Data + lVar6));
      iVar4 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  if (!param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149706417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xcc8))(this);
  return;
}

// ContainsPhysicsTriMeshData @ 149706430

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDynamicMeshComponent::ContainsPhysicsTriMeshData(UDynamicMeshComponent *this,bool param_1)

{
  int iVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  
  pTVar3 = CVarDynamicMeshComponent_MaxComplexCollisionTriCount.Ref;
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    return false;
  }
  if (this->_padding_ != 0) {
    iVar1 = *(int *)(*(longlong *)(this->_padding_ + 0xb8) + 0x170);
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    iVar2 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
    if ((-1 < iVar2) && (iVar2 < iVar1)) {
      if (bHavePrintedWarningMessage == false) {
        if (2 < (byte)LogGeometry._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
        }
        bHavePrintedWarningMessage = true;
      }
      return false;
    }
    return 0 < iVar1;
  }
  return false;
}

// CreateBodySetupHelper @ 1497068a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBodySetup * __thiscall UDynamicMeshComponent::CreateBodySetupHelper(UDynamicMeshComponent *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  UClass *pUVar6;
  UBodySetup *pUVar7;
  FGuid *pFVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  FGCScopeGuard local_b8 [8];
  FGuid local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FGCScopeGuard::FGCScopeGuard(local_b8);
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  local_b0.A = 0;
  local_b0.B = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UBodySetup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  local_98._24_4_ = -(uint)bVar5 & (RF_ArchetypeObject|RF_Public);
  pUVar7 = (UBodySetup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FGCScopeGuard::~FGCScopeGuard(local_b8);
  pFVar8 = FGuid::NewGuid(&local_b0);
  uVar1 = pFVar8->A;
  uVar2 = pFVar8->B;
  uVar3 = pFVar8->C;
  uVar4 = pFVar8->D;
  pUVar7->bGenerateMirroredCollision = '\0';
  (pUVar7->BodySetupGuid).A = uVar1;
  (pUVar7->BodySetupGuid).B = uVar2;
  (pUVar7->BodySetupGuid).C = uVar3;
  (pUVar7->BodySetupGuid).D = uVar4;
  *(uchar *)((longlong)&pUVar7->_padding_ + 1) = (this->CollisionType).Value;
  FBodyInstance::SetCollisionProfileName
            (&pUVar7->DefaultInstance,UCollisionProfile::BlockAll_ProfileName);
  pUVar7->bSupportUVsAndFaceRemap = '\0';
  return pUVar7;
}

// CreateSceneProxy @ 149706eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UDynamicMeshComponent::CreateSceneProxy(UDynamicMeshComponent *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  EShaderPlatform EVar6;
  FPrimitiveSceneProxy *pFVar7;
  longlong lVar8;
  FDynamicMeshSceneProxy *this_00;
  FDynamicMeshSceneProxy *this_01;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStackY_118 [32];
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (((this->bProxyValid != false) && (this->_padding_ != 0)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4820002403413656549>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                         ,0x3e5,"GetCurrentSceneProxy() == nullptr"), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar1)();
    return pFVar7;
  }
  this_01 = (FDynamicMeshSceneProxy *)0x0;
  if (((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) ||
     (lVar8 = (**(code **)(this->_padding_ + 0xb38))(this), *(int *)(lVar8 + 0x170) < 1))
  goto LAB_149707270;
  this_00 = ::operator_new(0x510);
  if (this_00 != (FDynamicMeshSceneProxy *)0x0) {
    FBaseDynamicMeshSceneProxy::FBaseDynamicMeshSceneProxy
              ((FBaseDynamicMeshSceneProxy *)this_00,(UBaseDynamicMeshComponent *)this);
    *(undefined ***)this_00 = &___7FDynamicMeshSceneProxy__6B_;
    pcVar1 = *(code **)(this->_padding_ + 0xaa8);
    EVar6 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this_00->field_0x220);
    (*pcVar1)(this,&this_00->MaterialRelevance,EVar6);
    (this_00->RenderBufferSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->RenderBufferSets).ArrayNum = 0;
    (this_00->RenderBufferSets).ArrayMax = 0;
    this_00->bIsSingleBuffer = false;
    this_00->ParentComponent = this;
    this_01 = this_00;
  }
  if (*(longlong *)&this->TriangleColorFunc == 0) {
    cVar5 = (**(code **)(this->_padding_ + 0xb88))(this);
    if (cVar5 == '\x02') {
      this_01->field_0x295 = 1;
      local_b8 = *(longlong *)&this_01->field_0x2a0;
      uVar3 = *(undefined8 *)&this_01->field_0x2a8;
      local_a8 = *(longlong *)&this_01->field_0x2b0;
      uStack_a0 = *(undefined8 *)&this_01->field_0x2b8;
      uVar2 = *(undefined8 *)&this_01->field_0x2c0;
      plVar10 = *(longlong **)&this_01->field_0x2c8;
      *(code **)&this_01->field_0x2a0 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
           ::Call;
      *(undefined8 *)&this_01->field_0x2a8 = uStack_b0;
      *(undefined4 *)&this_01->field_0x2b0 = 0x51eb44a8;
      *(undefined4 *)&this_01->field_0x2b4 = 1;
      *(UDynamicMeshComponent **)&this_01->field_0x2b8 = this;
      *(undefined4 *)&this_01->field_0x2c0 = (undefined4)local_98;
      *(undefined4 *)&this_01->field_0x2c4 = local_98._4_4_;
      *(undefined4 *)&this_01->field_0x2c8 = 0;
      *(undefined4 *)&this_01->field_0x2cc = 0;
      uStack_b0 = uVar3;
      local_98 = uVar2;
      plStack_90 = plVar10;
      if (local_b8 != 0) {
        plVar9 = &local_a8;
        goto LAB_1497070d8;
      }
    }
  }
  else {
    this_01->field_0x295 = 1;
    lVar8 = *(longlong *)&this_01->field_0x2a0;
    local_d8 = *(longlong *)&this_01->field_0x2b0;
    uStack_d0 = *(undefined8 *)&this_01->field_0x2b8;
    uVar2 = *(undefined8 *)&this_01->field_0x2c0;
    plVar10 = *(longlong **)&this_01->field_0x2c8;
    *(code **)&this_01->field_0x2a0 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
         ::Call;
    *(undefined8 *)&this_01->field_0x2a8 = uStack_e0;
    *(undefined4 *)&this_01->field_0x2b0 = 0x51eb4488;
    *(undefined4 *)&this_01->field_0x2b4 = 1;
    *(UDynamicMeshComponent **)&this_01->field_0x2b8 = this;
    *(undefined4 *)&this_01->field_0x2c0 = (undefined4)local_c8;
    *(undefined4 *)&this_01->field_0x2c4 = local_c8._4_4_;
    *(undefined4 *)&this_01->field_0x2c8 = 0;
    *(undefined4 *)&this_01->field_0x2cc = 0;
    local_c8 = uVar2;
    plStack_c0 = plVar10;
    if (lVar8 != 0) {
      plVar9 = &local_d8;
LAB_1497070d8:
      if (plVar10 != (longlong *)0x0) {
        plVar9 = plVar10;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  cVar5 = (**(code **)(this->_padding_ + 0xd10))(this);
  if (cVar5 != '\0') {
    this_01->field_0x2d0 = 1;
    local_88 = *(longlong *)&this_01->field_0x2e0;
    uVar3 = *(undefined8 *)&this_01->field_0x2e8;
    local_78 = *(longlong *)&this_01->field_0x2f0;
    uStack_70 = *(undefined8 *)&this_01->field_0x2f8;
    uVar2 = *(undefined8 *)&this_01->field_0x300;
    plStack_60 = *(longlong **)&this_01->field_0x308;
    *(code **)&this_01->field_0x2e0 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,void,UE::Math::TVector4<float>_&>
         ::Call;
    *(undefined8 *)&this_01->field_0x2e8 = uStack_80;
    *(undefined4 *)&this_01->field_0x2f0 = 0x51eb44c8;
    *(undefined4 *)&this_01->field_0x2f4 = 1;
    *(UDynamicMeshComponent **)&this_01->field_0x2f8 = this;
    *(undefined4 *)&this_01->field_0x300 = (undefined4)local_68;
    *(undefined4 *)&this_01->field_0x304 = local_68._4_4_;
    *(undefined4 *)&this_01->field_0x308 = 0;
    *(undefined4 *)&this_01->field_0x30c = 0;
    uStack_80 = uVar3;
    local_68 = uVar2;
    if (local_88 != 0) {
      plVar10 = &local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar10 = plStack_60;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  if (*(longlong *)&this->SecondaryTriFilterFunc != 0) {
    this_01->field_0x312 = 1;
    local_58 = *(longlong *)&this_01->field_0x320;
    uVar3 = *(undefined8 *)&this_01->field_0x328;
    local_48 = *(longlong *)&this_01->field_0x330;
    uStack_40 = *(undefined8 *)&this_01->field_0x338;
    uVar2 = *(undefined8 *)&this_01->field_0x340;
    plStack_30 = *(longlong **)&this_01->field_0x348;
    *(code **)&this_01->field_0x320 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
         ::Call;
    *(undefined8 *)&this_01->field_0x328 = uStack_50;
    *(undefined4 *)&this_01->field_0x330 = 0x51eb44e8;
    *(undefined4 *)&this_01->field_0x334 = 1;
    *(UDynamicMeshComponent **)&this_01->field_0x338 = this;
    *(undefined4 *)&this_01->field_0x340 = (undefined4)local_38;
    *(undefined4 *)&this_01->field_0x344 = local_38._4_4_;
    *(undefined4 *)&this_01->field_0x348 = 0;
    *(undefined4 *)&this_01->field_0x34c = 0;
    uStack_50 = uVar3;
    local_38 = uVar2;
    if (local_58 != 0) {
      plVar10 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar10 = plStack_30;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  if ((this->Decomposition).Ptr == (FMeshRenderDecomposition *)0x0) {
    FDynamicMeshSceneProxy::Initialize(this_01);
  }
  else {
    FDynamicMeshSceneProxy::InitializeFromDecomposition(this_01,&this->Decomposition);
  }
  this_01->field_0x84 =
       (this->bProxyVerifyUsedMaterials * '\x02' ^ this_01->field_0x84) & 2U ^ this_01->field_0x84;
LAB_149707270:
  this->bProxyValid = true;
  return (FPrimitiveSceneProxy *)this_01;
}

// DisableSecondaryTriangleBuffers @ 1497077e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDynamicMeshComponent::DisableSecondaryTriangleBuffers(UDynamicMeshComponent *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&this->SecondaryTriFilterFunc;
  uVar6 = *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->SecondaryTriFilterFunc).field_0x28;
  *(undefined8 *)&this->SecondaryTriFilterFunc = 0;
  *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x10 = local_38;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x14 = uStack_34;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x18 = uStack_30;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x28 = 0;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x2c = 0;
  local_38 = uVar1;
  uStack_34 = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_40 = uVar6;
  if (local_48 != 0) {
    plVar7 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0xb50))(this);
  return;
}

// EditMesh @ 149708bf0

void __thiscall
UDynamicMeshComponent::EditMesh
          (UDynamicMeshComponent *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *param_1,
          EDynamicMeshComponentRenderUpdateMode param_2)

{
  TObjectPtr<UDynamicMesh>_u_0 TVar1;
  code *pcVar2;
  undefined8 uVar3;
  FDynamicMesh3 *pFVar4;
  FDynamicMeshAttributeSet *this_00;
  bool bVar5;
  FDynamicMeshAttributeSet *pFVar6;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  uint5 uStack_75;
  FDynamicMeshChangeInfo local_58 [2];
  
  if ((this->MeshObject).field0_0x0.DebugPtr != (UDynamicMesh *)0x0) {
    if ((this->bIsEditable == false) &&
       (bVar5 = `UDynamicMeshComponent::EditMesh'::__l3::<lambda_1>::operator()(&local_res8), !bVar5
       )) {
      return;
    }
    TVar1 = (TObjectPtr<UDynamicMesh>_u_0)(this->MeshObject).field0_0x0.DebugPtr;
    pcVar2 = *(code **)param_1;
    uVar3 = *(undefined8 *)&param_1->field_0x8;
    local_58[0].ReplaceChange = (FMeshReplacementChange *)0x0;
    local_58[0].VertexChange = (FMeshVertexChange *)0x0;
    local_58[0].MeshChange = (FMeshChange *)0x0;
    local_58[0]._0_8_ = (ulonglong)uStack_75 << 0x18;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&(TVar1.DebugPtr)->PreMeshChangedEvent,TVar1.DebugPtr,local_58);
    (*pcVar2)(uVar3);
    pFVar4 = ((TVar1.DebugPtr)->Mesh).Ptr;
    if ((pFVar4->TriangleGroups).bIsSet == false) {
      UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar4,0);
    }
    pFVar4 = ((TVar1.DebugPtr)->Mesh).Ptr;
    if ((pFVar4->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar4);
    }
    this_00 = ((((TVar1.DebugPtr)->Mesh).Ptr)->AttributeSet).Ptr;
    pFVar6 = (FDynamicMeshAttributeSet *)0x0;
    if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar6 = this_00;
    }
    if ((pFVar6->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
    }
    local_58[0].MeshChange = (FMeshChange *)0x0;
    local_58[0].ReplaceChange = (FMeshReplacementChange *)0x0;
    local_58[0].VertexChange = (FMeshVertexChange *)0x0;
    local_58[0]._0_8_ = (ulonglong)uStack_75 << 0x18;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&(TVar1.DebugPtr)->MeshChangedEvent,TVar1.DebugPtr,local_58);
    local_res8 = TVar1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &(TVar1.DebugPtr)->MeshModifiedBPEvent,&local_res8);
    if (param_2 != NoUpdate) {
      (**(code **)(this->_padding_ + 0xb50))(this);
    }
  }
  return;
}

// EnableComplexAsSimpleCollision @ 149708f20

void __thiscall UDynamicMeshComponent::EnableComplexAsSimpleCollision(UDynamicMeshComponent *this)

{
  bool bVar1;
  
  bVar1 = this->bEnableComplexCollision != false;
  if (!bVar1) {
    this->bEnableComplexCollision = true;
  }
  if ((this->CollisionType).Value == '\x03') {
    if (bVar1) goto LAB_149708f5b;
  }
  else {
    (this->CollisionType).Value = '\x03';
  }
  (**(code **)(this->_padding_ + 0xd80))();
LAB_149708f5b:
                    /* WARNING: Could not recover jumptable at 0x000149708f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd68))(this,1);
  return;
}

// EnableSecondaryTriangleBuffers @ 149708f80

void __thiscall
UDynamicMeshComponent::EnableSecondaryTriangleBuffers
          (UDynamicMeshComponent *this,
          TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->SecondaryTriFilterFunc;
  uVar2 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x28;
  *(undefined8 *)&this->SecondaryTriFilterFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->SecondaryTriFilterFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->SecondaryTriFilterFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  (**(code **)(this->_padding_ + 0xb50))();
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000149708fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// FastNotifyColorsUpdated @ 149709800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDynamicMeshComponent::FastNotifyColorsUpdated(UDynamicMeshComponent *this)

{
  IRenderMeshPostProcessor *pIVar1;
  FDynamicMesh3 *pFVar2;
  FDynamicMeshSceneProxy *this_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStackY_e8 [32];
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4820002403413655991>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                        ,0x1b7,"MeshObject");
    if (!bVar10) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->RenderMeshPostProcessor).Ptr != (IRenderMeshPostProcessor *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4820002403413655997>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                        ,0x1bd,"!RenderMeshPostProcessor");
    if (!bVar10) {
      pIVar1 = (this->RenderMeshPostProcessor).Ptr;
      pFVar2 = (this->RenderMesh).Ptr;
      pcVar3 = *(code **)((longlong)*pIVar1 + 8);
      uVar12 = (**(code **)(this->_padding_ + 0xb38))(this);
      (*pcVar3)(pIVar1,uVar12,pFVar2);
      ResetProxy(this);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->bProxyValid == false) ||
      (this_00 = (FDynamicMeshSceneProxy *)this->_padding_, this_00 == (FDynamicMeshSceneProxy *)0x0
      )) || (cVar11 = (**(code **)(this->_padding_ + 0xc98))(), cVar11 == '\0')) {
    ResetProxy(this);
    return;
  }
  cVar11 = (**(code **)(this->_padding_ + 0xcf8))(this);
  if ((cVar11 == '\0') || (this_00->field_0x295 != '\0')) {
    cVar11 = (**(code **)(this->_padding_ + 0xcf8))(this);
    if ((cVar11 == '\0') &&
       ((this_00->field_0x295 == '\x01' &&
        (this_00->field_0x295 = 0, *(longlong *)&this_00->field_0x2a0 != 0)))) {
      plVar13 = (longlong *)&this_00->field_0x2b0;
      if (*(longlong **)&this_00->field_0x2c8 != (longlong *)0x0) {
        plVar13 = *(longlong **)&this_00->field_0x2c8;
      }
      (**(code **)(*plVar13 + 0x10))();
      *(undefined8 *)&this_00->field_0x2a0 = 0;
    }
  }
  else {
    this_00->field_0x295 = 1;
    lVar8 = *(longlong *)&this_00->field_0x2a0;
    local_a8 = *(longlong *)&this_00->field_0x2b0;
    uStack_a0 = *(undefined8 *)&this_00->field_0x2b8;
    uVar12 = *(undefined8 *)&this_00->field_0x2c0;
    plStack_90 = *(longlong **)&this_00->field_0x2c8;
    *(code **)&this_00->field_0x2a0 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
         ::Call;
    *(undefined8 *)&this_00->field_0x2a8 = uStack_b0;
    *(undefined4 *)&this_00->field_0x2b0 = 0x51eb4448;
    *(undefined4 *)&this_00->field_0x2b4 = 1;
    *(UDynamicMeshComponent **)&this_00->field_0x2b8 = this;
    *(undefined4 *)&this_00->field_0x2c0 = (undefined4)local_98;
    *(undefined4 *)&this_00->field_0x2c4 = local_98._4_4_;
    *(undefined4 *)&this_00->field_0x2c8 = 0;
    *(undefined4 *)&this_00->field_0x2cc = 0;
    local_98 = uVar12;
    if (lVar8 != 0) {
      plVar13 = &local_a8;
      if (plStack_90 != (longlong *)0x0) {
        plVar13 = plStack_90;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  cVar11 = (**(code **)(this->_padding_ + 0xd10))(this);
  if ((cVar11 == '\0') || (this_00->field_0x2d0 != '\0')) {
    cVar11 = (**(code **)(this->_padding_ + 0xd10))(this);
    if ((cVar11 != '\0') || (this_00->field_0x2d0 != '\x01')) goto LAB_149709b3f;
    this_00->field_0x2d0 = 0;
    local_58 = *(longlong *)&this_00->field_0x2e0;
    uVar9 = *(undefined8 *)&this_00->field_0x2e8;
    uVar4 = *(undefined4 *)&this_00->field_0x2f0;
    uVar5 = *(undefined4 *)&this_00->field_0x2f4;
    uVar6 = *(undefined4 *)&this_00->field_0x2f8;
    uVar7 = *(undefined4 *)&this_00->field_0x2fc;
    uVar12 = *(undefined8 *)&this_00->field_0x300;
    plVar13 = *(longlong **)&this_00->field_0x308;
    *(undefined8 *)&this_00->field_0x2e0 = 0;
    *(undefined8 *)&this_00->field_0x2e8 = uStack_50;
    *(undefined4 *)&this_00->field_0x2f0 = local_48;
    *(undefined4 *)&this_00->field_0x2f4 = uStack_44;
    *(undefined4 *)&this_00->field_0x2f8 = uStack_40;
    *(undefined4 *)&this_00->field_0x2fc = uStack_3c;
    *(undefined4 *)&this_00->field_0x300 = (undefined4)local_38;
    *(undefined4 *)&this_00->field_0x304 = local_38._4_4_;
    *(undefined4 *)&this_00->field_0x308 = 0;
    *(undefined4 *)&this_00->field_0x30c = 0;
    uStack_50 = uVar9;
    local_48 = uVar4;
    uStack_44 = uVar5;
    uStack_40 = uVar6;
    uStack_3c = uVar7;
    local_38 = uVar12;
    plStack_30 = plVar13;
    if (local_58 == 0) goto LAB_149709b3f;
    plVar14 = (longlong *)&local_48;
  }
  else {
    this_00->field_0x2d0 = 1;
    local_88 = *(longlong *)&this_00->field_0x2e0;
    uVar9 = *(undefined8 *)&this_00->field_0x2e8;
    local_78 = *(longlong *)&this_00->field_0x2f0;
    uStack_70 = *(undefined8 *)&this_00->field_0x2f8;
    uVar12 = *(undefined8 *)&this_00->field_0x300;
    plVar13 = *(longlong **)&this_00->field_0x308;
    *(code **)&this_00->field_0x2e0 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,void,UE::Math::TVector4<float>_&>
         ::Call;
    *(undefined8 *)&this_00->field_0x2e8 = uStack_80;
    *(undefined4 *)&this_00->field_0x2f0 = 0x51eb4468;
    *(undefined4 *)&this_00->field_0x2f4 = 1;
    *(UDynamicMeshComponent **)&this_00->field_0x2f8 = this;
    *(undefined4 *)&this_00->field_0x300 = (undefined4)local_68;
    *(undefined4 *)&this_00->field_0x304 = local_68._4_4_;
    *(undefined4 *)&this_00->field_0x308 = 0;
    *(undefined4 *)&this_00->field_0x30c = 0;
    uStack_80 = uVar9;
    local_68 = uVar12;
    plStack_60 = plVar13;
    if (local_88 == 0) goto LAB_149709b3f;
    plVar14 = &local_78;
  }
  if (plVar13 != (longlong *)0x0) {
    plVar14 = plVar13;
  }
  (**(code **)(*plVar14 + 0x10))();
LAB_149709b3f:
  FDynamicMeshSceneProxy::FastUpdateVertices(this_00,false,false,true,false);
  return;
}

// FastNotifyPositionsUpdated @ 149709b90

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
UDynamicMeshComponent::FastNotifyPositionsUpdated
          (UDynamicMeshComponent *this,bool param_1,bool param_2,bool param_3)

{
  IRenderMeshPostProcessor *pIVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [8];
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  TFuture<void> *pTVar8;
  longlong *plVar9;
  FDynamicMeshSceneProxy *this_00;
  <lambda_1> local_res8;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [16];
  TUniqueFunction<void___cdecl(void)> local_48;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656042>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x1ea,"MeshObject");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((this->RenderMeshPostProcessor).Ptr == (IRenderMeshPostProcessor *)0x0) {
      if (((this->bProxyValid != false) && (this->_padding_ != 0)) &&
         (cVar6 = (**(code **)(this->_padding_ + 0xc98))(), cVar6 != '\0')) {
        this_00 = (FDynamicMeshSceneProxy *)0x0;
        local_68 = (undefined1  [8])0x0;
        local_60 = (TReferenceControllerBase<1> *)0x0;
        local_48._0_8_ = 0;
        local_48._40_8_ = 0;
        local_res8.__this = this;
        pTVar8 = Async<_UDynamicMeshComponent::FastNotifyPositionsUpdated_::__l11::<lambda_1>_>
                           ((TFuture<void> *)local_58,DynamicMeshComponentAsyncExecTarget,
                            &local_res8,&local_48);
        TFuture<void>::operator=((TFuture<void> *)local_68,pTVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_58._8_8_);
        if (this->bProxyValid != false) {
          this_00 = (FDynamicMeshSceneProxy *)this->_padding_;
        }
        FDynamicMeshSceneProxy::FastUpdateVertices(this_00,true,param_1,param_2,param_3);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
        auVar4 = local_68;
        if (local_68 != (undefined1  [8])0x0) {
          do {
            cVar6 = (**(code **)(**(longlong **)((longlong)auVar4 + 0x60) + 0x20))
                              (*(longlong **)((longlong)auVar4 + 0x60),0xffffffff,0);
          } while (cVar6 == '\0');
        }
        (**(code **)(this->_padding_ + 0x5b0))(this);
        plVar9 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
        (**(code **)(*plVar9 + 0x2b8))(plVar9);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        return;
      }
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4820002403413656048>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                         ,0x1f0,"!RenderMeshPostProcessor");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar1 = (this->RenderMeshPostProcessor).Ptr;
      pFVar2 = (this->RenderMesh).Ptr;
      pcVar3 = *(code **)((longlong)*pIVar1 + 8);
      uVar7 = (**(code **)(this->_padding_ + 0xb38))(this);
      (*pcVar3)(pIVar1,uVar7,pFVar2);
    }
    ResetProxy(this);
  }
  return;
}

// FastNotifySecondaryTrianglesChanged @ 149709d80

void __thiscall
UDynamicMeshComponent::FastNotifySecondaryTrianglesChanged(UDynamicMeshComponent *this)

{
  IRenderMeshPostProcessor *pIVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FDynamicMeshSceneProxy *this_00;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656201>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x289,"MeshObject");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    return;
  }
  if ((this->RenderMeshPostProcessor).Ptr == (IRenderMeshPostProcessor *)0x0) {
    if ((this->bProxyValid != false) && (this->_padding_ != 0)) {
      cVar5 = (**(code **)(this->_padding_ + 0xc98))();
      if (cVar5 != '\0') {
        if (this->bProxyValid == false) {
          this_00 = (FDynamicMeshSceneProxy *)0x0;
        }
        else {
          this_00 = (FDynamicMeshSceneProxy *)this->_padding_;
        }
        FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers(this_00);
        plVar7 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
                    /* WARNING: Could not recover jumptable at 0x000149709eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x2b8))(plVar7,*(code **)(*plVar7 + 0x2b8));
        return;
      }
    }
    ResetProxy(this);
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4820002403413656207>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x28f,"!RenderMeshPostProcessor");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar1 = (this->RenderMeshPostProcessor).Ptr;
  pFVar2 = (this->RenderMesh).Ptr;
  pcVar3 = *(code **)((longlong)*pIVar1 + 8);
  uVar6 = (**(code **)(this->_padding_ + 0xb38))(this);
  (*pcVar3)(pIVar1,uVar6,pFVar2);
  ResetProxy(this);
  return;
}

// FastNotifyTriangleVerticesUpdated @ 149709ee0

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
UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
          (UDynamicMeshComponent *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          EMeshRenderAttributeFlags param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IRenderMeshPostProcessor *pIVar3;
  FDynamicMesh3 *pFVar4;
  FDynamicMeshSceneProxy *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [8];
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  TFuture<void> *pTVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  bool bVar16;
  undefined1 local_res20 [8];
  int local_b8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  <lambda_1> local_90;
  FDynamicMeshSceneProxy *local_88;
  undefined1 local_80 [24];
  TUniqueFunction<void___cdecl(void)> local_68;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656229>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x2a5,"MeshObject");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((this->RenderMeshPostProcessor).Ptr == (IRenderMeshPostProcessor *)0x0) {
      if ((*(longlong *)&this->SecondaryTriFilterFunc == 0) ||
         ((param_2 & SecondaryIndexBuffers) == None)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (((this->bProxyValid != false) &&
          (pFVar5 = (FDynamicMeshSceneProxy *)this->_padding_, local_88 = pFVar5,
          pFVar5 != (FDynamicMeshSceneProxy *)0x0)) &&
         (cVar10 = (**(code **)(this->_padding_ + 0xc98))(), cVar10 != '\0')) {
        if ((this->Decomposition).Ptr == (FMeshRenderDecomposition *)0x0) {
          FastNotifyVertexAttributesUpdated(this,param_2);
          if (bVar9) {
            FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers(pFVar5);
          }
          plVar12 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
          (**(code **)(*plVar12 + 0x2b8))(plVar12);
          return;
        }
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        bVar15 = -1 < CpuChannel->Enabled;
        if (bVar15) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId712,
                     "SimpleDynamicMeshComponent_FastVertexUpdate_FindSets",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x2c8);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId712);
        }
        pFVar14 = (param_1->AllocatorInstance).Data;
        iVar2 = param_1->ArrayNum;
        pFVar1 = pFVar14 + (longlong)iVar2 * 4;
        while( true ) {
          if (param_1->ArrayNum != iVar2) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar14 == pFVar1) break;
          local_b8[0] = FMeshRenderDecomposition::GetGroupForTriangle
                                  ((this->Decomposition).Ptr,*(int *)pFVar14);
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_b0,local_b8);
          pFVar14 = pFVar14 + 4;
        }
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        local_a0 = (undefined1  [8])0x0;
        local_98 = (TReferenceControllerBase<1> *)0x0;
        bVar15 = (bool)(param_2 & Positions);
        if (bVar15 != false) {
          local_68._0_8_ = 0;
          local_68._40_8_ = 0;
          local_90.__this = this;
          pTVar13 = Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>_>
                              ((TFuture<void> *)local_80,DynamicMeshComponentAsyncExecTarget,
                               &local_90,&local_68);
          TFuture<void>::operator=((TFuture<void> *)local_a0,pTVar13);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_80._8_8_);
        }
        pTVar8 = local_98;
        auVar7 = local_a0;
        bVar16 = -1 < CpuChannel->Enabled;
        if (bVar16) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId735,
                     "SimpleDynamicMeshComponent_FastVertexUpdate_ApplyUpdate",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x2df);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId735);
        }
        pFVar5 = local_88;
        FDynamicMeshSceneProxy::FastUpdateVertices
                  (local_88,&local_b0,bVar15,(bool)(param_2 >> 2 & 1),(bool)(param_2 >> 1 & 1),
                   (bool)(param_2 >> 3 & 1));
        if (bVar16) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar9) {
          FDynamicMeshSceneProxy::FastUpdateIndexBuffers(pFVar5,&local_b0);
        }
        if (bVar15 != false) {
          bVar9 = -1 < CpuChannel->Enabled;
          if (bVar9) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId749,
                       "SimpleDynamicMeshComponent_FastVertexUpdate_FinalPositionsUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x2ed);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId749);
          }
          UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
          if (auVar7 != (undefined1  [8])0x0) {
            do {
              plVar12 = *(longlong **)((longlong)auVar7 + 0x60);
              cVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,0xffffffff,0);
            } while (cVar10 == '\0');
          }
          (**(code **)(this->_padding_ + 0x5b0))(this);
          if (bVar9) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        plVar12 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
        (**(code **)(*plVar12 + 0x2b8))(plVar12);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        if (local_b0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_b0.AllocatorInstance.Data);
        return;
      }
    }
    else {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4820002403413656235>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                         ,0x2ab,"!RenderMeshPostProcessor");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pIVar3 = (this->RenderMeshPostProcessor).Ptr;
      pFVar4 = (this->RenderMesh).Ptr;
      pcVar6 = *(code **)((longlong)*pIVar3 + 8);
      uVar11 = (**(code **)(this->_padding_ + 0xb38))(this);
      (*pcVar6)(pIVar3,uVar11,pFVar4);
    }
    ResetProxy(this);
  }
  return;
}

// FastNotifyTriangleVerticesUpdated @ 14970a310

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
UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
          (UDynamicMeshComponent *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          EMeshRenderAttributeFlags param_2)

{
  ulonglong uVar1;
  uint uVar2;
  IRenderMeshPostProcessor *pIVar3;
  FDynamicMesh3 *pFVar4;
  FDynamicMeshSceneProxy *pFVar5;
  code *pcVar6;
  ForElementType<unsigned_int> FVar7;
  undefined1 auVar8 [8];
  TReferenceControllerBase<1> *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong *plVar15;
  TFuture<void> *pTVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 local_res20 [8];
  int local_138 [2];
  ForElementType<unsigned_int> local_130;
  FDynamicMeshSceneProxy *local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  undefined1 local_110 [8];
  TReferenceControllerBase<1> *local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  <lambda_1> local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_90 [24];
  TUniqueFunction<void___cdecl(void)> local_78;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4820002403413656316>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                        ,0x2fc,"MeshObject");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((this->RenderMeshPostProcessor).Ptr == (IRenderMeshPostProcessor *)0x0) {
      if ((*(longlong *)&this->SecondaryTriFilterFunc == 0) ||
         ((param_2 & SecondaryIndexBuffers) == None)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (((this->bProxyValid != false) &&
          (pFVar5 = (FDynamicMeshSceneProxy *)this->_padding_,
          pFVar5 != (FDynamicMeshSceneProxy *)0x0)) &&
         (cVar12 = (**(code **)(this->_padding_ + 0xc98))(), cVar12 != '\0')) {
        if ((this->Decomposition).Ptr == (FMeshRenderDecomposition *)0x0) {
          FastNotifyVertexAttributesUpdated(this,param_2);
          if (bVar11) {
            FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers(pFVar5);
          }
          plVar15 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
          (**(code **)(*plVar15 + 0x2b8))(plVar15);
          return;
        }
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.ArrayNum = 0;
        local_120.ArrayMax = 0;
        bVar24 = -1 < CpuChannel->Enabled;
        if (bVar24) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId799,
                     "SimpleDynamicMeshComponent_FastVertexUpdate_FindSets",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,799);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId799);
        }
        iVar19 = *(int *)&(param_1->Elements).field_0x28;
        local_130 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
        iStack_f8 = 0;
        uStack_f4 = 1;
        local_e0 = 0;
        iVar18 = 0;
        iStack_e4 = iStack_f8;
        if (iVar19 != 0) {
          puVar21 = *(uint **)&(param_1->Elements).field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)local_130;
          }
          uVar23 = *puVar21;
          local_e0 = 0;
          iStack_f8 = 0;
          while (uVar23 == 0) {
            lVar17 = (longlong)iStack_f8;
            local_e0 = local_e0 + 0x20;
            iStack_f8 = iStack_f8 + 1;
            if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) {
              iVar18 = *(int *)&(param_1->Elements).field_0x28;
              iStack_e4 = iVar19;
              goto LAB_14970a597;
            }
            uVar23 = (puVar21 + 1)[lVar17];
          }
          iVar18 = *(int *)&(param_1->Elements).field_0x28;
          uStack_f4 = -uVar23 & uVar23;
          uVar1 = (ulonglong)uStack_f4 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_d0 = (int)lVar17;
          iStack_e4 = local_e0 + -1 + local_d0;
          if (iVar18 < iStack_e4) {
            iStack_e4 = iVar19;
          }
        }
LAB_14970a597:
        iStack_d8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34
        ;
        uVar23 = *(uint *)&(param_1->Elements).field_0x28;
        TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
        uStack_e8 = 0xffffffff;
        uVar22 = uVar23 & 0xffffffe0;
        TStack_b8.CurrentBitIndex = iStack_e4;
        TStack_b8.UnvisitedBitMask = 0xffffffff;
        iVar19 = (int)uVar23 >> 5;
        TStack_b8._28_4_ = iStack_e4;
        TStack_b8.BaseBitIndex = local_e0;
        uStack_98 = CONCAT44(uStack_d4,iStack_d8);
        local_128 = pFVar5;
        local_100 = param_1;
        local_f0 = (undefined1 *)local_130;
        iStack_dc = iStack_e4;
        local_c0 = param_1;
        TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_130;
        if ((((int)uVar23 < 0) || (iVar18 < (int)uVar23)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar7 = local_130;
        uVar2 = *(int *)((longlong)local_130 + 0x18);
        if (uVar23 != uVar2) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_130 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_130 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_130;
          }
          uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar19 * 4);
          while (uVar23 == 0) {
            lVar17 = (longlong)iVar19;
            uVar22 = uVar22 + 0x20;
            iVar19 = iVar19 + 1;
            uVar23 = uVar2;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_14970a6c0;
            uVar23 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar17 * 4);
          }
          uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar23 = (int)lVar17 + -1 + uVar22;
          if ((int)uVar2 < (int)uVar23) {
            uVar23 = uVar2;
          }
        }
LAB_14970a6c0:
        while( true ) {
          pTVar10 = local_c0;
          if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
              (int)uStack_98) {
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_b8.CurrentBitIndex == uVar23) &&
              ((ForElementType<unsigned_int>)TStack_b8.Array == FVar7)) && (pTVar10 == param_1))
          break;
          local_138[0] = FMeshRenderDecomposition::GetGroupForTriangle
                                   ((this->Decomposition).Ptr,
                                    *(int *)(*(longlong *)&pTVar10->Elements +
                                            (longlong)TStack_b8.CurrentBitIndex * 0xc));
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_120,local_138);
          TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        }
        if (bVar24) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        local_110 = (undefined1  [8])0x0;
        local_108 = (TReferenceControllerBase<1> *)0x0;
        bVar24 = (bool)(param_2 & Positions);
        if (bVar24 != false) {
          local_78._0_8_ = 0;
          local_78._40_8_ = 0;
          local_c8.__this = this;
          pTVar16 = Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>_>
                              ((TFuture<void> *)local_90,DynamicMeshComponentAsyncExecTarget,
                               &local_c8,&local_78);
          TFuture<void>::operator=((TFuture<void> *)local_110,pTVar16);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_90._8_8_);
        }
        pTVar9 = local_108;
        auVar8 = local_110;
        bVar13 = -1 < CpuChannel->Enabled;
        if (bVar13) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId822,
                     "SimpleDynamicMeshComponent_FastVertexUpdate_ApplyUpdate",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x336);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId822);
        }
        pFVar5 = local_128;
        FDynamicMeshSceneProxy::FastUpdateVertices
                  (local_128,&local_120,bVar24,(bool)(param_2 >> 2 & 1),(bool)(param_2 >> 1 & 1),
                   (bool)(param_2 >> 3 & 1));
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        bVar13 = -1 < CpuChannel->Enabled;
        if (bVar13) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId830,
                     "SimpleDynamicMeshComponent_FastVertexUpdate_UpdateIndexBuffers",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                     ,0x33e);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId830);
        }
        if (bVar11) {
          FDynamicMeshSceneProxy::FastUpdateIndexBuffers(pFVar5,&local_120);
        }
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar24 != false) {
          bVar11 = -1 < CpuChannel->Enabled;
          if (bVar11) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId840,
                       "SimpleDynamicMeshComponent_FastVertexUpdate_FinalPositionsUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x348);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId840);
          }
          UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
          if (auVar8 != (undefined1  [8])0x0) {
            do {
              plVar15 = *(longlong **)((longlong)auVar8 + 0x60);
              cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,0xffffffff,0);
            } while (cVar12 == '\0');
          }
          (**(code **)(this->_padding_ + 0x5b0))(this);
          if (bVar11) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        plVar15 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
        (**(code **)(*plVar15 + 0x2b8))(plVar15);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        if (local_120.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_120.AllocatorInstance.Data);
        return;
      }
    }
    else {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4820002403413656322>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                          ,0x302,"!RenderMeshPostProcessor");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pIVar3 = (this->RenderMeshPostProcessor).Ptr;
      pFVar4 = (this->RenderMesh).Ptr;
      pcVar6 = *(code **)((longlong)*pIVar3 + 8);
      uVar14 = (**(code **)(this->_padding_ + 0xb38))(this);
      (*pcVar6)(pIVar3,uVar14,pFVar4);
    }
    ResetProxy(this);
  }
  return;
}

// FastNotifyTriangleVerticesUpdated_ApplyPrecompute @ 14970a970

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
UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_ApplyPrecompute
          (UDynamicMeshComponent *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          EMeshRenderAttributeFlags param_2,TFuture<bool> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,TAxisAlignedBox3<double> *param_5)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  longlong *plVar6;
  FDynamicMeshSceneProxy *this_00;
  bool bVar7;
  double dVar8;
  
  if (*(longlong *)param_3 != 0) {
    do {
      do {
      } while (*(longlong *)param_3 == 0);
      plVar6 = *(longlong **)(*(longlong *)param_3 + 0x60);
      cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  if (*(longlong *)param_3 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(longlong *)param_3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)param_3;
  while (*(char *)(lVar2 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x20))(*(longlong **)(lVar2 + 0x60),0xffffffff,0);
  }
  if ((((*(char *)(lVar2 + 0x70) != '\0') && (this->bProxyValid != false)) && (this->_padding_ != 0)
      ) && (cVar4 = (**(code **)(this->_padding_ + 0xc98))(this), cVar4 != '\0')) {
    if (this->bProxyValid == false) {
      this_00 = (FDynamicMeshSceneProxy *)0x0;
    }
    else {
      this_00 = (FDynamicMeshSceneProxy *)this->_padding_;
    }
    if ((*(longlong *)&this->SecondaryTriFilterFunc == 0) ||
       ((param_2 & SecondaryIndexBuffers) == None)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId964,
                 "SimpleDynamicMeshComponent_FastVertexUpdate_ApplyUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                 ,0x3c4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId964);
    }
    FDynamicMeshSceneProxy::FastUpdateVertices
              (this_00,param_4,(bool)(param_2 & Positions),(bool)(param_2 >> 2 & 1),
               (bool)(param_2 >> 1 & 1),(bool)(param_2 >> 3 & 1));
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId972,
                 "SimpleDynamicMeshComponent_FastVertexUpdate_UpdateIndexBuffers",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                 ,0x3cc);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId972);
    }
    if (bVar5) {
      FDynamicMeshSceneProxy::FastUpdateIndexBuffers(this_00,param_4);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((bool)(param_2 & Positions) != false) {
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId981,
                   "SimpleDynamicMeshComponent_FastVertexUpdate_FinalPositionsUpdate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                   ,0x3d5);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId981);
      }
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
      dVar8 = (this->LocalBounds).Min.field0_0x0._s_0.X;
      dVar1 = (param_5->Min).field0_0x0._s_0.X;
      if (dVar1 <= dVar8) {
        dVar8 = dVar1;
      }
      (this->LocalBounds).Min.field0_0x0._s_0.X = dVar8;
      dVar8 = (param_5->Min).field0_0x0._s_0.Y;
      dVar1 = (this->LocalBounds).Min.field0_0x0._s_0.Y;
      if (dVar1 <= dVar8) {
        dVar8 = dVar1;
      }
      (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar8;
      dVar8 = (param_5->Min).field0_0x0._s_0.Z;
      dVar1 = (this->LocalBounds).Min.field0_0x0._s_0.Z;
      if (dVar1 <= dVar8) {
        dVar8 = dVar1;
      }
      (this->LocalBounds).Min.field0_0x0._s_0.Z = dVar8;
      dVar8 = (param_5->Max).field0_0x0._s_0.X;
      dVar1 = (this->LocalBounds).Max.field0_0x0._s_0.X;
      if (dVar8 <= dVar1) {
        dVar8 = dVar1;
      }
      (this->LocalBounds).Max.field0_0x0._s_0.X = dVar8;
      dVar8 = (param_5->Max).field0_0x0._s_0.Y;
      dVar1 = (this->LocalBounds).Max.field0_0x0._s_0.Y;
      if (dVar8 <= dVar1) {
        dVar8 = dVar1;
      }
      (this->LocalBounds).Max.field0_0x0._s_0.Y = dVar8;
      dVar8 = (param_5->Max).field0_0x0._s_0.Z;
      dVar1 = (this->LocalBounds).Max.field0_0x0._s_0.Z;
      if (dVar8 <= dVar1) {
        dVar8 = dVar1;
      }
      (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar8;
      (**(code **)(this->_padding_ + 0x5b0))(this);
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
                    /* WARNING: Could not recover jumptable at 0x00014970ac9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x2b8))(plVar6,*(code **)(*plVar6 + 0x2b8));
    return;
  }
  FastNotifyTriangleVerticesUpdated(this,param_1,param_2);
  return;
}

// FastNotifyTriangleVerticesUpdated_TryPrecompute @ 14970acd0

TFuture<bool> * __thiscall
UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute
          (UDynamicMeshComponent *this,TFuture<bool> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TAxisAlignedBox3<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  TFuture<bool> *pTVar4;
  <lambda_1> local_res8 [8];
  <lambda_2> local_88;
  TUniqueFunction<void___cdecl(void)> local_68;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656446>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x37e,"MeshObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<bool> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else if (((((this->RenderMeshPostProcessor).Ptr == (IRenderMeshPostProcessor *)0x0) &&
            (this->bProxyValid != false)) && (this->_padding_ != 0)) &&
          (((this->Decomposition).Ptr != (FMeshRenderDecomposition *)0x0 &&
           (cVar3 = (**(code **)(this->_padding_ + 0xc98))(), cVar3 != '\0')))) {
    local_68._0_8_ = 0;
    local_68._40_8_ = 0;
    local_88.BoundsOut = param_3;
    local_88.__this = this;
    local_88.Triangles = param_1;
    local_88.UpdateSetsOut = param_2;
    Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>_>
              (__return_storage_ptr__,DynamicMeshComponentAsyncExecTarget,&local_88,&local_68);
    return __return_storage_ptr__;
  }
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l5::<lambda_1>_>
            (__return_storage_ptr__,DynamicMeshComponentAsyncExecTarget,local_res8,&local_38);
  return __return_storage_ptr__;
}

// FastNotifyUVsUpdated @ 14970ae00

void __thiscall UDynamicMeshComponent::FastNotifyUVsUpdated(UDynamicMeshComponent *this)

{
  FastNotifyVertexAttributesUpdated(this,VertexUVs);
  return;
}

// FastNotifyVertexAttributesUpdated @ 14970ae10

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
UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
          (UDynamicMeshComponent *this,EMeshRenderAttributeFlags param_1)

{
  IRenderMeshPostProcessor *pIVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [8];
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  TFuture<void> *pTVar9;
  longlong *plVar10;
  FDynamicMeshSceneProxy *this_00;
  <lambda_1> local_res8;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [16];
  TUniqueFunction<void___cdecl(void)> local_48;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656115>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x233,"MeshObject");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((this->RenderMeshPostProcessor).Ptr == (IRenderMeshPostProcessor *)0x0) {
      if ((this->bProxyValid != false) && (this->_padding_ != 0)) {
        if (param_1 == None) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4820002403413656129>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                             ,0x241,"UpdatedAttributes != EMeshRenderAttributeFlags::None");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          cVar7 = (**(code **)(this->_padding_ + 0xc98))();
          if (cVar7 != '\0') {
            this_00 = (FDynamicMeshSceneProxy *)0x0;
            local_60 = (TReferenceControllerBase<1> *)0x0;
            local_68 = (undefined1  [8])0x0;
            bVar6 = (bool)(param_1 & Positions);
            if (bVar6 != false) {
              local_48._0_8_ = 0;
              local_48._40_8_ = 0;
              local_res8.__this = this;
              pTVar9 = Async<_UDynamicMeshComponent::FastNotifyVertexAttributesUpdated_::__l14::<lambda_1>_>
                                 ((TFuture<void> *)local_58,DynamicMeshComponentAsyncExecTarget,
                                  &local_res8,&local_48);
              TFuture<void>::operator=((TFuture<void> *)local_68,pTVar9);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_58._8_8_);
            }
            pTVar5 = local_60;
            auVar4 = local_68;
            if (this->bProxyValid != false) {
              this_00 = (FDynamicMeshSceneProxy *)this->_padding_;
            }
            FDynamicMeshSceneProxy::FastUpdateVertices
                      (this_00,bVar6,(bool)(param_1 >> 2 & 1),(bool)(param_1 >> 1 & 1),
                       (bool)(param_1 >> 3 & 1));
            if (bVar6 != false) {
              UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
              if (auVar4 != (undefined1  [8])0x0) {
                do {
                  plVar10 = *(longlong **)((longlong)auVar4 + 0x60);
                  cVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,0xffffffff,0);
                } while (cVar7 == '\0');
              }
              (**(code **)(this->_padding_ + 0x5b0))(this);
            }
            plVar10 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
            (**(code **)(*plVar10 + 0x2b8))(plVar10);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            return;
          }
        }
      }
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4820002403413656121>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                         ,0x239,"!RenderMeshPostProcessor");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar1 = (this->RenderMeshPostProcessor).Ptr;
      pFVar2 = (this->RenderMesh).Ptr;
      pcVar3 = *(code **)((longlong)*pIVar1 + 8);
      uVar8 = (**(code **)(this->_padding_ + 0xb38))(this);
      (*pcVar3)(pIVar1,uVar8,pFVar2);
    }
    ResetProxy(this);
  }
  return;
}

// FastNotifyVertexAttributesUpdated @ 14970b090

void __thiscall
UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
          (UDynamicMeshComponent *this,bool param_1,bool param_2,bool param_3)

{
  IRenderMeshPostProcessor *pIVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FDynamicMeshSceneProxy *this_00;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656084>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x214,"MeshObject");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((this->RenderMeshPostProcessor).Ptr == (IRenderMeshPostProcessor *)0x0) {
      if ((this->bProxyValid != false) && (this->_padding_ != 0)) {
        if ((param_1) || ((param_2 || (param_3)))) {
          cVar5 = (**(code **)(this->_padding_ + 0xc98))();
          if (cVar5 != '\0') {
            if (this->bProxyValid == false) {
              this_00 = (FDynamicMeshSceneProxy *)0x0;
            }
            else {
              this_00 = (FDynamicMeshSceneProxy *)this->_padding_;
            }
            FDynamicMeshSceneProxy::FastUpdateVertices(this_00,false,param_1,param_2,param_3);
            plVar7 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
            (**(code **)(*plVar7 + 0x2b8))(plVar7);
            return;
          }
        }
        else {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4820002403413656098>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                             ,0x222,"bNormals || bColors || bUVs");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4820002403413656090>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                         ,0x21a,"!RenderMeshPostProcessor");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar1 = (this->RenderMeshPostProcessor).Ptr;
      pFVar2 = (this->RenderMesh).Ptr;
      pcVar3 = *(code **)((longlong)*pIVar1 + 8);
      uVar6 = (**(code **)(this->_padding_ + 0xb38))(this);
      (*pcVar3)(pIVar1,uVar6,pFVar2);
    }
    ResetProxy(this);
  }
  return;
}

// FinishPhysicsAsyncCook @ 14970bf10

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
UDynamicMeshComponent::FinishPhysicsAsyncCook
          (UDynamicMeshComponent *this,bool param_1,UBodySetup *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UBodySetup>,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TEnumAsByte<ECollisionTraceFlag> TVar7;
  char cVar8;
  bool bVar9;
  undefined7 extraout_var;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  uVar11 = (this->AsyncBodySetupQueue).ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&local_50,0,(int *)((longlong)&local_48 + 4));
  }
  pTVar2 = &this->AsyncBodySetupQueue;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar12 = pFVar4;
  do {
    if (pFVar12 == pFVar4 + (longlong)(this->AsyncBodySetupQueue).ArrayNum * 8) {
LAB_14970c25e:
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      return;
    }
    if (*(UBodySetup **)pFVar12 == param_2) {
      uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
      if (uVar11 != 0xffffffff) {
        TVar7 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)param_2);
        iVar10 = (param_2->AggGeom).ConvexElems.ArrayNum;
        cVar3 = *(char *)CONCAT71(extraout_var,TVar7.Value);
        cVar8 = (**(code **)(this->_padding_ + 0x20))(&this->_padding_,0);
        if (cVar3 == '\x02') {
          if (iVar10 != 0) goto LAB_14970c00a;
LAB_14970c0e0:
          bVar9 = true;
        }
        else {
          if (((cVar3 == '\x03') && (cVar8 == '\0')) ||
             ((cVar3 == '\x01' && ((iVar10 == 0 && (cVar8 == '\0')))))) goto LAB_14970c0e0;
LAB_14970c00a:
          bVar9 = false;
        }
        if ((param_1) || (bVar9)) {
          (this->MeshBodySetup).field0_0x0.DebugPtr = param_2;
          UActorComponent::RecreatePhysicsState((UActorComponent *)this);
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum) {
            lVar13 = (longlong)(int)uVar11 * 8;
            do {
              uVar14 = 0;
              if ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum) {
                uVar14 = ~uVar11 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_58 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar13);
              if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
                  ((FScriptContainerElement *)&local_58 <
                   local_50.Data + (longlong)local_48._4_4_ * 8)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar10 = (int)local_48;
              if ((int)local_48 == local_48._4_4_) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_50,(int *)((longlong)&local_48 + 4));
              }
              uVar11 = uVar11 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar10 + 1);
              lVar13 = lVar13 + 8;
              *(undefined8 *)(local_50.Data + (longlong)iVar10 * 8) = local_58;
            } while ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum);
          }
          FVar6.Data = local_50.Data;
          iVar10 = (int)local_48;
          piVar1 = &(this->AsyncBodySetupQueue).ArrayMax;
          (this->AsyncBodySetupQueue).ArrayNum = (int)local_48;
          if (((int)local_48 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_48,*piVar1,&pTVar2->AllocatorInstance,(int)local_48,piVar1);
            ConstructItems<TObjectPtr<UBodySetup>,UBodySetup_*,int>
                      ((pTVar2->AllocatorInstance).Data,(UBodySetup **)FVar6.Data,iVar10);
          }
        }
        else {
          uVar14 = 0;
          if ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
          iVar10 = (this->AsyncBodySetupQueue).ArrayNum + ~uVar11;
          if (iVar10 != 0) {
            memmove(pFVar4,pFVar4 + 8,(longlong)iVar10 << 3);
          }
          piVar1 = &(this->AsyncBodySetupQueue).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->AsyncBodySetupQueue).ArrayNum,
                     &(this->AsyncBodySetupQueue).ArrayMax);
        }
      }
      goto LAB_14970c25e;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetAutoCalculatedTangents @ 14970e8e0

TMeshTangents<float> * __thiscall
UDynamicMeshComponent::GetAutoCalculatedTangents(UDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  TMeshTangents<float> *pTVar3;
  longlong lVar4;
  UDynamicMeshComponent *local_res8 [4];
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413655903>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x15f,"MeshObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMeshTangents<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else if ((this->TangentsType != Default) && (this->TangentsType == AutoCalculated)) {
    lVar4 = (**(code **)(this->_padding_ + 0xb48))();
    if (*(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x208) != 0) {
      if (((this->TangentsType != Default) && (this->TangentsType == AutoCalculated)) &&
         (this->bAutoCalculatedTangentsValid == false)) {
        lVar4 = (**(code **)(this->_padding_ + 0xb48))(this);
        local_res8[0] = this;
        `UDynamicMeshComponent::UpdateAutoCalculatedTangents'::__l5::<lambda_1>::operator()
                  (local_res8,*(FDynamicMesh3 **)(lVar4 + 0xb8));
      }
      pTVar3 = &this->AutoCalculatedTangents;
      if (this->bAutoCalculatedTangentsValid == false) {
        pTVar3 = (TMeshTangents<float> *)0x0;
      }
      return pTVar3;
    }
  }
  return (TMeshTangents<float> *)0x0;
}

// GetBaseSceneProxy @ 14970e9f0

FBaseDynamicMeshSceneProxy * __thiscall
UDynamicMeshComponent::GetBaseSceneProxy(UDynamicMeshComponent *this)

{
  if (this->bProxyValid != false) {
    return (FBaseDynamicMeshSceneProxy *)this->_padding_;
  }
  return (FBaseDynamicMeshSceneProxy *)0x0;
}

// GetBodySetup @ 14970ea10

UBodySetup * __thiscall UDynamicMeshComponent::GetBodySetup(UDynamicMeshComponent *this)

{
  undefined8 uVar1;
  
  if ((this->MeshBodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    uVar1 = (**(code **)(this->_padding_ + 0xd98))();
    (**(code **)(this->_padding_ + 0xda0))(this,uVar1);
    return (this->MeshBodySetup).field0_0x0.DebugPtr;
  }
  return (this->MeshBodySetup).field0_0x0.DebugPtr;
}

// GetBodySetup @ 14970ea60

UBodySetup * __thiscall UDynamicMeshComponent::GetBodySetup(UDynamicMeshComponent *this)

{
  return (this->MeshBodySetup).field0_0x0.DebugPtr;
}

// GetCurrentSceneProxy @ 14970f2e0

FDynamicMeshSceneProxy * __thiscall
UDynamicMeshComponent::GetCurrentSceneProxy(UDynamicMeshComponent *this)

{
  if (this->bProxyValid != false) {
    return (FDynamicMeshSceneProxy *)this->_padding_;
  }
  return (FDynamicMeshSceneProxy *)0x0;
}

// GetDynamicMesh @ 14970f370

UDynamicMesh * __thiscall UDynamicMeshComponent::GetDynamicMesh(UDynamicMeshComponent *this)

{
  return (this->MeshObject).field0_0x0.DebugPtr;
}

// GetGroupColor @ 149710530

FColor __thiscall
UDynamicMeshComponent::GetGroupColor(UDynamicMeshComponent *this,FDynamicMesh3 *param_1,int param_2)

{
  FColor FVar1;
  undefined4 in_register_00000084;
  uint in_R9D;
  
  FVar1.field0_0x0 = SUB84(param_1,0);
  if ((((*(char *)(CONCAT44(in_register_00000084,param_2) + 0x1a8) != '\0') && (-1 < (int)in_R9D))
      && ((int)in_R9D <
          *(int *)(CONCAT44(in_register_00000084,param_2) + 0x140) * 0x200 +
          *(int *)(CONCAT44(in_register_00000084,param_2) + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(CONCAT44(in_register_00000084,param_2) + 0x148) +
                           (ulonglong)(in_R9D >> 9) * 8) + (ulonglong)(in_R9D & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    UE::Geometry::LinearColors::SelectFColor((int)FVar1.field0_0x0);
    return (FColor)FVar1.field0_0x0;
  }
  UE::Geometry::LinearColors::SelectFColor((int)FVar1.field0_0x0);
  return (FColor)FVar1.field0_0x0;
}

// GetMesh @ 149710cd0

FDynamicMesh3 * __thiscall UDynamicMeshComponent::GetMesh(UDynamicMeshComponent *this)

{
  UDynamicMesh *pUVar1;
  
  pUVar1 = (this->MeshObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMesh *)0x0) {
    return (pUVar1->Mesh).Ptr;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetMesh @ 149710cf0

FDynamicMesh3 * __thiscall UDynamicMeshComponent::GetMesh(UDynamicMeshComponent *this)

{
  UDynamicMesh *pUVar1;
  
  pUVar1 = (this->MeshObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMesh *)0x0) {
    return (pUVar1->Mesh).Ptr;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetPhysicsTriMeshData @ 149710fc0

bool __thiscall
UDynamicMeshComponent::GetPhysicsTriMeshData
          (UDynamicMeshComponent *this,FTriMeshCollisionData *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FTriMeshCollisionData *local_res10 [3];
  longlong *local_28;
  FTriMeshCollisionData **local_20;
  code *local_18;
  longlong **local_10;
  
  plVar1 = &this[-1]._padding_;
  local_res10[0] = param_1;
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656920>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x558,"bEnableComplexCollision");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_20 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_28 = plVar1;
  (**(code **)(*plVar1 + 0xb40))(plVar1,&local_18);
  return true;
}

// GetPrivateStaticClass @ 149711280

UClass * __cdecl UDynamicMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshComponent",
               &Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton,
               StaticRegisterNativesUDynamicMeshComponent,0x950,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UDynamicMeshComponent>,local_res8,
               UBaseDynamicMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton;
}

// GetRenderMesh @ 149711790

FDynamicMesh3 * __thiscall UDynamicMeshComponent::GetRenderMesh(UDynamicMeshComponent *this)

{
  FDynamicMesh3 *pFVar1;
  
  if (((this->RenderMeshPostProcessor).Ptr != (IRenderMeshPostProcessor *)0x0) &&
     (pFVar1 = (this->RenderMesh).Ptr, pFVar1 != (FDynamicMesh3 *)0x0)) {
    return pFVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001497117a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0xb38))();
  return pFVar1;
}

// GetRenderMesh @ 1497117c0

FDynamicMesh3 * __thiscall UDynamicMeshComponent::GetRenderMesh(UDynamicMeshComponent *this)

{
  FDynamicMesh3 *pFVar1;
  
  if (((this->RenderMeshPostProcessor).Ptr != (IRenderMeshPostProcessor *)0x0) &&
     (pFVar1 = (this->RenderMesh).Ptr, pFVar1 != (FDynamicMesh3 *)0x0)) {
    return pFVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001497117d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0xb30))();
  return pFVar1;
}

// GetTriMeshSizeEstimates @ 149711820

bool __thiscall
UDynamicMeshComponent::GetTriMeshSizeEstimates
          (UDynamicMeshComponent *this,FTriMeshCollisionDataEstimates *param_1,bool param_2)

{
  longlong *local_28;
  FTriMeshCollisionDataEstimates *local_20;
  code *local_18;
  longlong **local_10;
  
  local_28 = &this[-1]._padding_;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::GetTriMeshSizeEstimates'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_20 = param_1;
  (**(code **)(*local_28 + 0xb40))(local_28,&local_18);
  return true;
}

// GetTriangleColor @ 149711870

FColor __thiscall
UDynamicMeshComponent::GetTriangleColor
          (UDynamicMeshComponent *this,FDynamicMesh3 *param_1,int param_2)

{
  code *pcVar1;
  longlong *plVar2;
  FColor_u_0 FVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 in_register_00000084;
  uint in_R9D;
  undefined1 local_res8 [8];
  undefined8 local_18 [2];
  
  local_18[0] = CONCAT44(in_register_00000084,param_2);
  if (*(void **)&this->TriangleColorFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->TriangleColorFunc);
    pcVar1 = *(code **)&this->TriangleColorFunc;
    plVar2 = *(longlong **)&(this->TriangleColorFunc).field_0x28;
    plVar5 = (longlong *)&(this->TriangleColorFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(param_1,uVar4,local_18,local_res8);
    return (FColor)SUB84(param_1,0);
  }
  FVar3 = FColor::White.field0_0x0;
  if ((in_R9D & 1) == 0) {
    FVar3 = FColor::Red.field0_0x0;
  }
  *(FColor_u_0 *)&param_1->_padding_ = FVar3;
  return (FColor)SUB84(param_1,0);
}

// HasTriangleColorFunction @ 149711f30

bool __thiscall UDynamicMeshComponent::HasTriangleColorFunction(UDynamicMeshComponent *this)

{
  return *(longlong *)&this->TriangleColorFunc != 0;
}

// HasVertexColorRemappingFunction @ 149711f50

bool __thiscall UDynamicMeshComponent::HasVertexColorRemappingFunction(UDynamicMeshComponent *this)

{
  return *(longlong *)&this->VertexColorMappingFunc != 0;
}

// InternalOnMeshUpdated @ 149713d50

void __thiscall UDynamicMeshComponent::InternalOnMeshUpdated(UDynamicMeshComponent *this)

{
  if ((this->bDeferCollisionUpdates == false) && (this->bTransientDeferCollisionUpdates == false)) {
                    /* WARNING: Could not recover jumptable at 0x000149713d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xd88))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149713d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd80))();
  return;
}

// InvalidateAutoCalculatedTangents @ 149713d80

void __thiscall UDynamicMeshComponent::InvalidateAutoCalculatedTangents(UDynamicMeshComponent *this)

{
  this->bAutoCalculatedTangentsValid = false;
  return;
}

// InvalidatePhysicsData @ 149713d90

void __thiscall UDynamicMeshComponent::InvalidatePhysicsData(UDynamicMeshComponent *this)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x800))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x800))(this);
    (**(code **)(*plVar2 + 0x2d0))(plVar2);
    this->bCollisionUpdatePending = true;
  }
  return;
}

// NotifyMaterialSetUpdated @ 149714470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UDynamicMeshComponent::NotifyMaterialSetUpdated(UDynamicMeshComponent *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  EShaderPlatform EVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((this->bProxyValid != false) && (lVar1 = this->_padding_, lVar1 != 0)) {
    plVar2 = *(longlong **)(lVar1 + 0x500);
    pcVar3 = *(code **)(*plVar2 + 0xaa8);
    EVar4 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)(lVar1 + 0x220));
    puVar5 = (undefined8 *)(*pcVar3)(plVar2,local_res8,EVar4);
    *(undefined8 *)(lVar1 + 0x4e0) = *puVar5;
  }
  return;
}

// NotifyMeshModified @ 1497144f0

void __thiscall UDynamicMeshComponent::NotifyMeshModified(UDynamicMeshComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497144f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb50))();
  return;
}

// NotifyMeshUpdated @ 149714540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDynamicMeshComponent::NotifyMeshUpdated(UDynamicMeshComponent *this)

{
  IRenderMeshPostProcessor *pIVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (((this->MeshObject).field0_0x0.DebugPtr != (UDynamicMesh *)0x0) &&
     (pIVar1 = (this->RenderMeshPostProcessor).Ptr, pIVar1 != (IRenderMeshPostProcessor *)0x0)) {
    pFVar2 = (this->RenderMesh).Ptr;
    pcVar3 = *(code **)((longlong)*pIVar1 + 8);
    uVar4 = (**(code **)(this->_padding_ + 0xb38))();
    (*pcVar3)(pIVar1,uVar4,pFVar2);
  }
  this->bProxyValid = false;
  (**(code **)(this->_padding_ + 0xd48))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  UpdateLocalBounds(this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
                    /* WARNING: Could not recover jumptable at 0x0001497145ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x2b8))(plVar5,*(code **)(*plVar5 + 0x2b8));
  return;
}

// NotifyMeshVertexAttributesModified @ 149714600

void __thiscall
UDynamicMeshComponent::NotifyMeshVertexAttributesModified
          (UDynamicMeshComponent *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  EMeshRenderAttributeFlags EVar1;
  EMeshRenderAttributeFlags EVar2;
  
  EVar2 = param_1 | VertexNormals;
  if (!param_2) {
    EVar2 = param_1;
  }
  EVar1 = EVar2 | VertexUVs;
  if (!param_3) {
    EVar1 = EVar2;
  }
  EVar2 = EVar1 | VertexColors;
  if (!param_4) {
    EVar2 = EVar1;
  }
  if (EVar2 != None) {
    FastNotifyVertexAttributesUpdated(this,EVar2);
    return;
  }
  return;
}

// OnChildAttached @ 149714650

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
UDynamicMeshComponent::OnChildAttached(UDynamicMeshComponent *this,USceneComponent *param_1)

{
  TMulticastDelegate<void___cdecl(USceneComponent_*,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChildAttachmentModified,param_1,true);
  return;
}

// OnChildDetached @ 149714670

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
UDynamicMeshComponent::OnChildDetached(UDynamicMeshComponent *this,USceneComponent *param_1)

{
  TMulticastDelegate<void___cdecl(USceneComponent_*,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChildAttachmentModified,param_1,false);
  return;
}

// OnMeshObjectChanged @ 149714690

void __thiscall
UDynamicMeshComponent::OnMeshObjectChanged
          (UDynamicMeshComponent *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  undefined1 *puVar1;
  EDynamicMeshChangeType EVar2;
  EDynamicMeshAttributeChangeFlags EVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  EMeshRenderAttributeFlags EVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  EMeshRenderAttributeFlags EVar13;
  longlong lVar14;
  uint uVar15;
  FMeshVertexChange *pFVar16;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  
  EVar2 = param_2->Type;
  if ((EVar2 == MeshChange) || ((byte)(EVar2 - MeshReplacementChange) < 2)) {
    if (this->bInvalidateProxyOnChange != false) {
      (**(code **)(this->_padding_ + 0xb50))();
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnMeshChanged);
    if (EVar2 == MeshVertexChange) {
      pFVar16 = param_2->VertexChange;
      bVar4 = param_2->bIsRevertChange;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnMeshVerticesChanged,(FWriteAccessScope *)&local_68);
      puVar1 = &(this->OnMeshVerticesChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar11 = false;
      uVar15 = *(int *)&(this->OnMeshVerticesChanged).field_0x10 - 1;
      if (-1 < (int)uVar15) {
        lVar14 = (longlong)(int)uVar15 << 4;
        bVar11 = false;
        do {
          uVar12 = 0;
          if ((int)uVar15 < *(int *)&(this->OnMeshVerticesChanged).field_0x10) {
            uVar12 = ~uVar15 >> 0x1f;
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
          lVar5 = *(longlong *)&(this->OnMeshVerticesChanged).field_0x8;
          if (((*(int *)(lVar14 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar14 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar6 + 0x68))(plVar6,this,pFVar16,bVar4), cVar10 == '\0')) {
            bVar11 = true;
          }
          lVar14 = lVar14 + -0x10;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      puVar1 = &(this->OnMeshVerticesChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnMeshVerticesChanged,false);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
    }
    bVar4 = param_2->bIsRevertChange;
    if (param_2->MeshChange == (FMeshChange *)0x0) {
      if (param_2->ReplaceChange == (FMeshReplacementChange *)0x0) {
        pFVar16 = param_2->VertexChange;
      }
      else {
        if ((param_2->VertexChange != (FMeshVertexChange *)0x0) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_926996952002854820>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\UDynamicMesh.h"
                                ,0x5c,"!VertexChange"), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar16 = (FMeshVertexChange *)param_2->ReplaceChange;
      }
    }
    else {
      if (((param_2->ReplaceChange != (FMeshReplacementChange *)0x0) ||
          (param_2->VertexChange != (FMeshVertexChange *)0x0)) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_926996952002854825>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\UDynamicMesh.h"
                              ,0x57,"!ReplaceChange && !VertexChange"), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar16 = (FMeshVertexChange *)param_2->MeshChange;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMeshRegionChanged,
               (FWriteAccessScope *)&local_50);
    puVar1 = &(this->OnMeshRegionChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar11 = false;
    uVar15 = *(int *)&(this->OnMeshRegionChanged).field_0x10 - 1;
    if (-1 < (int)uVar15) {
      lVar14 = (longlong)(int)uVar15 << 4;
      bVar11 = false;
      do {
        uVar12 = 0;
        if ((int)uVar15 < *(int *)&(this->OnMeshRegionChanged).field_0x10) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(this->OnMeshRegionChanged).field_0x8;
        if (((*(int *)(lVar14 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar14 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar6 + 0x68))(plVar6,this,pFVar16,bVar4), cVar10 == '\0')) {
          bVar11 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(this->OnMeshRegionChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar11) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnMeshRegionChanged,
                 false);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  else if (EVar2 == DeformationEdit) {
    EVar3 = param_2->Flags;
    EVar8 = EVar3 >> 1 & Positions;
    EVar13 = EVar8 | VertexNormals;
    if ((EVar3 & NormalsTangents) == Unknown) {
      EVar13 = EVar8;
    }
    EVar8 = EVar13 | VertexColors;
    if ((EVar3 & VertexColors) == Unknown) {
      EVar8 = EVar13;
    }
    EVar13 = EVar8 | VertexUVs;
    if ((EVar3 & UVs) == Unknown) {
      EVar13 = EVar8;
    }
    FastNotifyVertexAttributesUpdated(this,EVar13);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnMeshChanged);
  }
  else {
    (**(code **)(this->_padding_ + 0xb50))();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnMeshChanged);
  }
  if ((this->bDeferCollisionUpdates == false) && (this->bTransientDeferCollisionUpdates == false)) {
                    /* WARNING: Could not recover jumptable at 0x000149714a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xd88))(this);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149714a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd80))(this);
  return;
}

// OnNewDistanceFieldData_Async @ 149714a70

void __thiscall
UDynamicMeshComponent::OnNewDistanceFieldData_Async
          (UDynamicMeshComponent *this,
          TUniquePtr<FDistanceFieldVolumeData,TDefaultDelete<FDistanceFieldVolumeData>_> param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149714a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// PostEditImport @ 149714b20

void __thiscall UDynamicMeshComponent::PostEditImport(UDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  UDynamicMesh *pUVar4;
  FDelegateHandle FVar5;
  FName local_res8 [2];
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413655702>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x96,"MeshObject != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = ::FName::FName(local_res8,L"DynamicMesh");
    pUVar4 = NewObject<UDynamicMesh>
                       ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->MeshObject).field0_0x0.DebugPtr = pUVar4;
    FVar5 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
            ::AddUObject<UDynamicMeshComponent>
                      ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                        *)&pUVar4->MeshChangedEvent,(UDynamicMeshComponent *)(local_res8 + 1),
                       (pmf_738e16cf *)this);
                    /* WARNING: Load size is inaccurate */
    (this->MeshObjectChangedHandle).ID = *FVar5.ID;
  }
  return;
}

// PostLoad @ 149714c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDynamicMeshComponent::PostLoad(UDynamicMeshComponent *this)

{
  code *pcVar1;
  FGuid FVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  UDynamicMesh *pUVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  FName local_res8 [2];
  FGuid local_28;
  code *local_18;
  uint uStack_10;
  uint uStack_c;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  local_28 = FUE5ReleaseStreamObjectVersion::GUID;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_28);
  if ((iVar4 < 0x2a) && (this->TangentsType == Default)) {
    this->TangentsType = NoTangents;
  }
  pUVar6 = (this->MeshObject).field0_0x0.DebugPtr;
  if (pUVar6 == (UDynamicMesh *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413655677>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x7d,"MeshObject != nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = ::FName::FName(local_res8,L"DynamicMesh");
    pUVar6 = NewObject<UDynamicMesh>
                       ((UObject *)this,*pFVar5,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->MeshObject).field0_0x0.DebugPtr = pUVar6;
  }
  local_28.C = 0;
  local_28._0_8_ = OnMeshObjectChanged;
  FVar2 = local_28;
  local_18 = OnMeshObjectChanged;
  uStack_10 = local_28.C;
  uStack_c = local_28.D;
  local_28 = FVar2;
  FVar7 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar6->MeshChangedEvent,(UDynamicMeshComponent *)(local_res8 + 1),
                     (pmf_738e16cf *)this);
                    /* WARNING: Load size is inaccurate */
  (this->MeshObjectChangedHandle).ID = *FVar7.ID;
  this->bProxyValid = false;
  (**(code **)(this->_padding_ + 0xd48))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  UpdateLocalBounds(this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
  (**(code **)(*plVar8 + 0x2b8))(plVar8);
  if ((this->MeshBodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0) {
    bVar3 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar3) {
      UObjectBase::AtomicallySetFlags
                ((UObjectBase *)(this->MeshBodySetup).field0_0x0.DebugPtr,
                 RF_ArchetypeObject|RF_Public);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149714dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x800))(this);
  return;
}

// ProcessMesh @ 1497153b0

void __thiscall
UDynamicMeshComponent::ProcessMesh
          (UDynamicMeshComponent *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1)

{
  UDynamicMesh *pUVar1;
  
  pUVar1 = (this->MeshObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMesh *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497153cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,(pUVar1->Mesh).Ptr);
    return;
  }
  return;
}

// RebuildPhysicsData @ 1497153e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDynamicMeshComponent::RebuildPhysicsData(UDynamicMeshComponent *this)

{
  int *piVar1;
  TArray<TObjectPtr<UBodySetup>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  UWorld *this_00;
  longlong lVar13;
  UBodySetup *this_01;
  undefined8 *puVar14;
  ulong64 uVar15;
  FGuid *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  UDynamicMeshComponent *local_res10;
  UBodySetup *local_98 [2];
  code *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((this->bUseAsyncCooking == false) || (this_00 == (UWorld *)0x0)) {
LAB_1497155b1:
    bVar10 = false;
    piVar1 = &(this->AsyncBodySetupQueue).ArrayMax;
    (this->AsyncBodySetupQueue).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AsyncBodySetupQueue).AllocatorInstance,0,piVar1);
    }
    this_01 = (UBodySetup *)(**(code **)(this->_padding_ + 0x800))(this);
    if (this_01 == (UBodySetup *)0x0) {
      return;
    }
  }
  else {
    bVar10 = UWorld::IsGameWorld(this_00);
    if (!bVar10) {
      bVar10 = UWorld::IsEditorWorld(this_00);
      pTVar9 = CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor.Ref;
      if (!bVar10) goto LAB_1497155b1;
      bVar10 = IsInParallelGameThread();
      if (bVar10) {
LAB_149715474:
        lVar13 = 0;
      }
      else {
        bVar10 = IsInGameThread();
        lVar13 = 1;
        if (bVar10) goto LAB_149715474;
      }
      if (pTVar9->ShadowedValue[lVar13] == false) goto LAB_1497155b1;
    }
    pTVar2 = &this->AsyncBodySetupQueue;
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    bVar10 = true;
    iVar12 = (this->AsyncBodySetupQueue).ArrayNum;
    pFVar3 = pFVar17 + (longlong)iVar12 * 8;
    while( true ) {
      if ((this->AsyncBodySetupQueue).ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UBodySetup>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar17 == pFVar3) break;
      if (*(UBodySetup **)pFVar17 != (UBodySetup *)0x0) {
        UBodySetup::AbortPhysicsMeshAsyncCreation(*(UBodySetup **)pFVar17);
      }
      pFVar17 = pFVar17 + 8;
    }
    this_01 = (UBodySetup *)(**(code **)(this->_padding_ + 0xd98))(this);
    if (this_01 == (UBodySetup *)0x0) {
      return;
    }
    local_98[0] = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_98) &&
        ((FScriptContainerElement *)local_98 <
         pFVar3 + (longlong)(this->AsyncBodySetupQueue).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar12 = (this->AsyncBodySetupQueue).ArrayNum;
    piVar1 = &(this->AsyncBodySetupQueue).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
      (this->AsyncBodySetupQueue).ArrayNum = iVar12;
    }
    (this->AsyncBodySetupQueue).ArrayNum = iVar12 + 1;
    *(UBodySetup **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_98[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98[0] != (UBodySetup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_98[0]);
    }
  }
  *(uchar *)((longlong)&this_01->_padding_ + 1) = (this->CollisionType).Value;
  UBodySetup::RemoveSimpleCollision(this_01);
  UBodySetup::AddCollisionFrom(this_01,&this->AggGeom);
  if (bVar10) {
    uStack_80 = 0;
    local_88 = _vcall__3472__flat______;
    local_78 = (undefined1  [8])0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
      ;
      puVar14[1] = this_01;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar14[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_res10);
      puVar14[4] = local_88;
      puVar14[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    UBodySetup::CreatePhysicsMeshesAsync
              (this_01,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_78);
  }
  else {
    pFVar16 = FGuid::NewGuid((FGuid *)&local_88);
    uVar5 = pFVar16->A;
    uVar6 = pFVar16->B;
    uVar7 = pFVar16->C;
    uVar8 = pFVar16->D;
    lVar13 = this_01->_padding_;
    this_01->bHasCookedCollisionData = '\x01';
    (this_01->BodySetupGuid).A = uVar5;
    (this_01->BodySetupGuid).B = uVar6;
    (this_01->BodySetupGuid).C = uVar7;
    (this_01->BodySetupGuid).D = uVar8;
    (**(code **)(lVar13 + 0x2d0))(this_01);
    (**(code **)(this_01->_padding_ + 0x2b0))(this_01);
    UActorComponent::RecreatePhysicsState((UActorComponent *)this);
    this->bCollisionUpdatePending = false;
  }
  if ((this->bProxyValid != false) &&
     ((FBaseDynamicMeshSceneProxy *)this->_padding_ != (FBaseDynamicMeshSceneProxy *)0x0)) {
    FBaseDynamicMeshSceneProxy::SetCollisionData((FBaseDynamicMeshSceneProxy *)this->_padding_);
  }
  return;
}

// RemapVertexColor @ 1497162a0

void __thiscall
UDynamicMeshComponent::RemapVertexColor(UDynamicMeshComponent *this,TVector4<float> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(void **)&this->VertexColorMappingFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->VertexColorMappingFunc);
    pcVar1 = *(code **)&this->VertexColorMappingFunc;
    plVar2 = *(longlong **)&(this->VertexColorMappingFunc).field_0x28;
    plVar4 = (longlong *)&(this->VertexColorMappingFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,param_1);
  }
  return;
}

// ResetProxy @ 149716930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDynamicMeshComponent::ResetProxy(UDynamicMeshComponent *this)

{
  longlong *plVar1;
  
  this->bProxyValid = false;
  (**(code **)(this->_padding_ + 0xd48))();
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  UpdateLocalBounds(this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xb48))(this);
                    /* WARNING: Could not recover jumptable at 0x000149716983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2b8))(plVar1,*(code **)(*plVar1 + 0x2b8));
  return;
}

// Serialize @ 149718cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDynamicMeshComponent::Serialize(UDynamicMeshComponent *this,FArchive *param_1)

{
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000149718cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  return;
}

// Serialize @ 149718ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDynamicMeshComponent::Serialize(UDynamicMeshComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5ReleaseStreamObjectVersion::GUID);
  return;
}

// SetBodySetup @ 149718d40

void __thiscall UDynamicMeshComponent::SetBodySetup(UDynamicMeshComponent *this,UBodySetup *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UBodySetup *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413657144>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x638,"NewSetup");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (this->MeshBodySetup).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// SetComplexAsSimpleCollisionEnabled @ 149719070

void __thiscall
UDynamicMeshComponent::SetComplexAsSimpleCollisionEnabled
          (UDynamicMeshComponent *this,bool param_1,bool param_2)

{
  bool bVar1;
  
  if (param_1) {
    bVar1 = this->bEnableComplexCollision == false;
    if (bVar1) {
      this->bEnableComplexCollision = true;
    }
    if ((this->CollisionType).Value == '\x03') {
LAB_1497190cd:
      if (!bVar1) goto LAB_1497190dd;
    }
    else {
      (this->CollisionType).Value = '\x03';
    }
  }
  else {
    bVar1 = this->bEnableComplexCollision == true;
    if (bVar1) {
      this->bEnableComplexCollision = false;
    }
    if ((this->CollisionType).Value != '\x03') goto LAB_1497190cd;
    (this->CollisionType).Value = '\0';
  }
  (**(code **)(this->_padding_ + 0xd80))(this);
LAB_1497190dd:
  if (param_2) {
    (**(code **)(this->_padding_ + 0xd68))(this,1);
  }
  return;
}

// SetDeferredCollisionUpdatesEnabled @ 149719400

void __thiscall
UDynamicMeshComponent::SetDeferredCollisionUpdatesEnabled
          (UDynamicMeshComponent *this,bool param_1,bool param_2)

{
  if (((this->bDeferCollisionUpdates != param_1) &&
      (this->bDeferCollisionUpdates = param_1, !param_1)) && (param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00014971941c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xd68))(this,1);
    return;
  }
  return;
}

// SetDynamicMesh @ 149719440

void __thiscall
UDynamicMeshComponent::SetDynamicMesh(UDynamicMeshComponent *this,UDynamicMesh *param_1)

{
  UDynamicMesh *pUVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 *puVar6;
  FDelegateHandle FVar7;
  ForAnyElementType *this_00;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_48;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656849>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x511,"NewMesh");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar1 = (this->MeshObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UDynamicMesh *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4820002403413656854>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                         ,0x516,"MeshObject");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      uVar2 = (this->MeshObjectChangedHandle).ID;
      if (uVar2 != 0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pUVar1->MeshChangedEvent,(FWriteAccessScope *)&local_48);
        uVar8 = 0;
        if (0 < *(int *)&(pUVar1->MeshChangedEvent).field_0x10) {
          lVar9 = 0;
          do {
            uVar5 = 0;
            if ((int)uVar8 < *(int *)&(pUVar1->MeshChangedEvent).field_0x10) {
              uVar5 = ~uVar8 >> 0x1f;
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
            this_00 = (ForAnyElementType *)
                      (*(longlong *)&(pUVar1->MeshChangedEvent).field_0x8 + lVar9);
            if (((*(int *)&this_00[1].Data != 0) &&
                (this_00->Data != (FScriptContainerElement *)0x0)) &&
               (puVar6 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
               *puVar6 == uVar2)) {
              if ((*(int *)&this_00[1].Data != 0) &&
                 (this_00->Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)this_00->Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (this_00,0,0,0x10);
                *(undefined4 *)&this_00[1].Data = 0;
              }
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar1->MeshChangedEvent,false);
              break;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0x10;
          } while ((int)uVar8 < *(int *)&(pUVar1->MeshChangedEvent).field_0x10);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
      }
    }
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0x10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->MeshObject).field0_0x0.DebugPtr = param_1;
    FVar7 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
            ::AddUObject<UDynamicMeshComponent>
                      ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                        *)&param_1->MeshChangedEvent,(UDynamicMeshComponent *)&stack0x00000018,
                       (pmf_738e16cf *)this);
                    /* WARNING: Load size is inaccurate */
    (this->MeshObjectChangedHandle).ID = *FVar7.ID;
    (**(code **)(this->_padding_ + 0xb50))(this);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnMeshChanged);
    if ((this->bDeferCollisionUpdates == false) && (this->bTransientDeferCollisionUpdates == false))
    {
                    /* WARNING: Could not recover jumptable at 0x0001497196b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xd88))(this);
      return;
    }
    (**(code **)(this->_padding_ + 0xd80))(this);
  }
  return;
}

// SetExternalDecomposition @ 149719750

void __thiscall
UDynamicMeshComponent::SetExternalDecomposition
          (UDynamicMeshComponent *this,
          TUniquePtr<FMeshRenderDecomposition,TDefaultDelete<FMeshRenderDecomposition>_> param_1)

{
  TUniquePtr<FMeshRenderDecomposition,TDefaultDelete<FMeshRenderDecomposition>_> *pTVar1;
  FMeshRenderDecomposition *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if (*(int *)(((param_1.Ptr)->Groups).AllocatorInstance.Data + 8) < 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656718>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x48e,"DecompositionIn->Num() > 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = &this->Decomposition;
  if ((FMeshRenderDecomposition *)pTVar1 != param_1.Ptr) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FMeshRenderDecomposition *)((param_1.Ptr)->Groups).AllocatorInstance.Data;
    ((param_1.Ptr)->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (pFVar2 != (FMeshRenderDecomposition *)0x0) {
      pFVar3 = (pFVar2->TriangleToGroupMap).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      DestructItems<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,int>
                ((TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>
                  *)(pFVar2->Groups).AllocatorInstance.Data,(pFVar2->Groups).ArrayNum);
      pFVar3 = (pFVar2->Groups).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar2,0x20);
    }
  }
  (**(code **)(this->_padding_ + 0xb50))(this);
  pFVar3 = ((param_1.Ptr)->Groups).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    if (*(void **)(pFVar3 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar3 + 0x10));
    }
    DestructItems<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,int>
              (*(TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>
                 **)pFVar3,*(int *)(pFVar3 + 8));
    if (*(void **)pFVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar3);
    }
    ::operator_delete(pFVar3,0x20);
  }
  return;
}

// SetInvalidateProxyOnChangeEnabled @ 149719850

void __thiscall
UDynamicMeshComponent::SetInvalidateProxyOnChangeEnabled(UDynamicMeshComponent *this,bool param_1)

{
  this->bInvalidateProxyOnChange = param_1;
  return;
}

// SetMesh @ 149719c20

void __thiscall UDynamicMeshComponent::SetMesh(UDynamicMeshComponent *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413655738>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0xba,"MeshObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((this->bIsEditable == false) &&
       (bVar2 = `UDynamicMeshComponent::SetMesh'::__l3::<lambda_1>::operator()(local_res8), !bVar2))
    {
      return;
    }
    UDynamicMesh::SetMesh((this->MeshObject).field0_0x0.DebugPtr,param_1);
  }
  return;
}

// SetRenderMeshPostProcessor @ 14971a590

void __thiscall
UDynamicMeshComponent::SetRenderMeshPostProcessor
          (UDynamicMeshComponent *this,
          TUniquePtr<IRenderMeshPostProcessor,TDefaultDelete<IRenderMeshPostProcessor>_> param_1)

{
  TUniquePtr<IRenderMeshPostProcessor,TDefaultDelete<IRenderMeshPostProcessor>_> *pTVar1;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar2;
  IRenderMeshPostProcessor *pIVar3;
  IRenderMeshPostProcessor IVar4;
  code *pcVar5;
  bool bVar6;
  FDynamicMesh3 *pFVar7;
  FDynamicMesh3 *this_00;
  FDynamicMesh3 *pFVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413655771>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0xdb,"MeshObject");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto LAB_14971a698;
  }
  pFVar8 = (FDynamicMesh3 *)0x0;
  pTVar1 = &this->RenderMeshPostProcessor;
  if ((IRenderMeshPostProcessor *)pTVar1 != param_1.Ptr) {
    pIVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (IRenderMeshPostProcessor *)*param_1.Ptr;
    *param_1.Ptr = (IRenderMeshPostProcessor)0x0;
    if (pIVar3 != (IRenderMeshPostProcessor *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  pTVar2 = &this->RenderMesh;
  pFVar7 = pFVar8;
  if (pTVar1->Ptr == (IRenderMeshPostProcessor *)0x0) {
LAB_14971a679:
    pFVar8 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar7;
    if (pFVar8 == (FDynamicMesh3 *)0x0) goto LAB_14971a698;
    puVar9 = (undefined8 *)pFVar8->_padding_;
  }
  else {
    if (pTVar2->Ptr != (FDynamicMesh3 *)0x0) goto LAB_14971a698;
    pFVar7 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0xb38))(this);
    this_00 = ::operator_new(0x230);
    if (this_00 != (FDynamicMesh3 *)0x0) {
      pFVar8 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(this_00,pFVar7);
    }
    pFVar7 = pFVar8;
    if (pTVar2 != (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                   *)local_28) goto LAB_14971a679;
    if (pFVar8 == (FDynamicMesh3 *)0x0) goto LAB_14971a698;
    puVar9 = (undefined8 *)pFVar8->_padding_;
  }
  (*(code *)*puVar9)(pFVar8,1);
LAB_14971a698:
  IVar4 = *param_1.Ptr;
  if (IVar4 != (IRenderMeshPostProcessor)0x0) {
    (*(code *)**(undefined8 **)IVar4)(IVar4,1);
  }
  return;
}

// SetSceneProxyVerifyUsedMaterials @ 14971a6c0

void __thiscall
UDynamicMeshComponent::SetSceneProxyVerifyUsedMaterials(UDynamicMeshComponent *this,bool param_1)

{
  longlong lVar1;
  
  this->bProxyVerifyUsedMaterials = param_1;
  if ((this->bProxyValid != false) && (lVar1 = this->_padding_, lVar1 != 0)) {
    *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) & 0xfd;
    *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) | param_1 * '\x02';
  }
  return;
}

// SetSimpleCollisionShapes @ 14971a7c0

void __thiscall
UDynamicMeshComponent::SetSimpleCollisionShapes
          (UDynamicMeshComponent *this,FKAggregateGeom *param_1,bool param_2)

{
  FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
  FKAggregateGeom::CloneAgg(&this->AggGeom,param_1);
  if (param_2) {
    (**(code **)(this->_padding_ + 0xd68))(this,0);
  }
  return;
}

// SetTangentsType @ 14971a830

void __thiscall
UDynamicMeshComponent::SetTangentsType
          (UDynamicMeshComponent *this,EDynamicMeshComponentTangentsMode param_1)

{
  if (param_1 != this->TangentsType) {
    this->TangentsType = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014971a841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xd48))();
    return;
  }
  return;
}

// SetTransientDeferCollisionUpdates @ 14971a850

void __thiscall
UDynamicMeshComponent::SetTransientDeferCollisionUpdates(UDynamicMeshComponent *this,bool param_1)

{
  this->bTransientDeferCollisionUpdates = param_1;
  return;
}

// SetTriangleColorFunction @ 14971a860

void __thiscall
UDynamicMeshComponent::SetTriangleColorFunction
          (UDynamicMeshComponent *this,
          TUniqueFunction<FColor___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *param_1,
          EDynamicMeshComponentRenderUpdateMode param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->TriangleColorFunc;
  uVar2 = *(undefined4 *)&(this->TriangleColorFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->TriangleColorFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->TriangleColorFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->TriangleColorFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->TriangleColorFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->TriangleColorFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->TriangleColorFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->TriangleColorFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->TriangleColorFunc).field_0x28;
  *(undefined8 *)&this->TriangleColorFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->TriangleColorFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->TriangleColorFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (param_2 == FastUpdate) {
    FastNotifyColorsUpdated(this);
  }
  else if (param_2 == FullUpdate) {
    (**(code **)(this->_padding_ + 0xb50))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014971a8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetVertexColorRemappingFunction @ 14971a930

void __thiscall
UDynamicMeshComponent::SetVertexColorRemappingFunction
          (UDynamicMeshComponent *this,
          TUniqueFunction<void___cdecl(UE::Math::TVector4<float>_&)> *param_1,
          EDynamicMeshComponentRenderUpdateMode param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->VertexColorMappingFunc;
  uVar2 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->VertexColorMappingFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->VertexColorMappingFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->VertexColorMappingFunc).field_0x28;
  *(undefined8 *)&this->VertexColorMappingFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->VertexColorMappingFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->VertexColorMappingFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (param_2 == FastUpdate) {
    FastNotifyColorsUpdated(this);
  }
  else if (param_2 == FullUpdate) {
    (**(code **)(this->_padding_ + 0xb50))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014971a9b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// StaticRegisterNativesUDynamicMeshComponent @ 14971aaf0

void __cdecl UDynamicMeshComponent::StaticRegisterNativesUDynamicMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UDynamicMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAutoCalculatedTangents @ 14971ae50

void __thiscall UDynamicMeshComponent::UpdateAutoCalculatedTangents(UDynamicMeshComponent *this)

{
  longlong lVar1;
  UDynamicMeshComponent *local_res8 [4];
  
  if (((this->TangentsType != Default) && (this->TangentsType == AutoCalculated)) &&
     (this->bAutoCalculatedTangentsValid == false)) {
    lVar1 = (**(code **)(this->_padding_ + 0xb48))();
    local_res8[0] = this;
    `UDynamicMeshComponent::UpdateAutoCalculatedTangents'::__l5::<lambda_1>::operator()
              (local_res8,*(FDynamicMesh3 **)(lVar1 + 0xb8));
  }
  return;
}

// UpdateCollision @ 14971aea0

void __thiscall UDynamicMeshComponent::UpdateCollision(UDynamicMeshComponent *this,bool param_1)

{
  if ((param_1) && (this->bCollisionUpdatePending == false)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014971aeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd88))();
  return;
}

// UpdateDistanceField @ 14971aec0

void __thiscall UDynamicMeshComponent::UpdateDistanceField(UDynamicMeshComponent *this)

{
  return;
}

// UpdateLocalBounds @ 14971aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDynamicMeshComponent::UpdateLocalBounds(UDynamicMeshComponent *this)

{
  double dVar1;
  undefined8 uVar2;
  FDynamicMesh3 *this_00;
  TVector<double>_u_0 *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((this->MeshObject).field0_0x0.DebugPtr == (UDynamicMesh *)0x0) {
    pTVar3 = &local_38;
    local_38._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_38._s_0.Y = _UNK_150a9e648;
    local_18 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_10 = _UNK_1508ffb58;
    local_38._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_20 = _UNK_150a9e6d8;
  }
  else {
    this_00 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0xb38))();
    pTVar3 = (TVector<double>_u_0 *)
             UE::Geometry::FDynamicMesh3::GetBounds
                       (this_00,(TAxisAlignedBox3<double> *)&local_38._s_0,true);
  }
  dVar4 = (pTVar3->_s_0).Y;
  dVar6 = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.X =
       (((TVector<double> *)&(pTVar3->_s_0).X)->field0_0x0)._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (((TVector<double> *)(pTVar3->XYZ + 3))->field0_0x0)._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = (pTVar3->_s_0).Z;
  (this->LocalBounds).Max.field0_0x0._s_0.X = dVar4;
  dVar7 = pTVar3->XYZ[5];
  (this->LocalBounds).Max.field0_0x0._s_0.Y = pTVar3->XYZ[4];
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar7;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = __real_3f1a378eac770000;
  dVar4 = (this->LocalBounds).Max.field0_0x0._s_0.Y - (this->LocalBounds).Min.field0_0x0._s_0.Y;
  dVar5 = (this->LocalBounds).Max.field0_0x0._s_0.X - (this->LocalBounds).Min.field0_0x0._s_0.X;
  dVar7 = dVar7 - (this->LocalBounds).Min.field0_0x0._s_0.Z;
  if (dVar4 <= 0.0) {
    dVar4 = dVar6;
  }
  if (dVar5 <= 0.0) {
    dVar5 = dVar6;
  }
  if (dVar7 <= 0.0) {
    dVar7 = dVar6;
  }
  if (dVar7 <= dVar4) {
    dVar7 = dVar4;
  }
  if (dVar7 <= dVar5) {
    dVar7 = dVar5;
  }
  if (dVar7 <= 0.0) {
    dVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X + __real_3f1a378eac770000;
    dVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - __real_3f1a378eac770000;
    dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z + __real_3f1a378eac770000;
    (this->LocalBounds).Min.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - __real_3f1a378eac770000;
    (this->LocalBounds).Min.field0_0x0._s_0.Y = (double)uVar2 - dVar1;
    (this->LocalBounds).Min.field0_0x0._s_0.Z = dVar4;
    (this->LocalBounds).Max.field0_0x0._s_0.X = dVar5;
    (this->LocalBounds).Max.field0_0x0._s_0.Y = (double)uVar2 + dVar1;
    (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar7;
  }
  return;
}

// ValidateMaterialSlots @ 14971d620

bool __thiscall
UDynamicMeshComponent::ValidateMaterialSlots(UDynamicMeshComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int *local_res8;
  int local_res10 [2];
  code *local_28;
  int **local_20;
  
  local_res8 = local_res10;
  local_res10[0] = 0;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::ValidateMaterialSlots'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  (**(code **)(this->_padding_ + 0xb40))(this,&local_28);
  iVar2 = local_res10[0] + 1;
  iVar1 = (**(code **)(this->_padding_ + 0x810))(this);
  if (param_1) {
    for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
      (**(code **)(this->_padding_ + 0x6b8))(this,iVar1,0);
    }
  }
  iVar1 = (**(code **)(this->_padding_ + 0x810))(this);
  if ((param_2) && (iVar2 < iVar1)) {
    (**(code **)(this->_padding_ + 0xcc8))(this,iVar2);
  }
  iVar1 = (**(code **)(this->_padding_ + 0x810))(this);
  return iVar1 == iVar2;
}

// WantsNegXTriMesh @ 14971d700

bool __thiscall UDynamicMeshComponent::WantsNegXTriMesh(UDynamicMeshComponent *this)

{
  return true;
}

// _getUObject @ 14971dd50

UObject * __thiscall UDynamicMeshComponent::_getUObject(UDynamicMeshComponent *this)

{
  return (UObject *)&this[-1].AggGeom.RenderInfoPtr;
}

// _getUObject`adjustor{552}' @ 14971dd5c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_552__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1].SecondaryTriFilterFunc.field_0x28);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 14971dd70

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_560__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1].SecondaryTriFilterFunc.field_0x20);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 14971dd84

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_568__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1].SecondaryTriFilterFunc.field_0x18);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1384}' @ 14971dd98

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{1384}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_1384__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1392}' @ 14971ddac

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{1392}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_1392__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1400}' @ 14971ddc0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{1400}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_1400__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1408}' @ 14971ddd4

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{1408}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_1408__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1512}' @ 14971dde8

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDynamicMeshComponent::_getUObject`adjustor{1512}' (void)const __ptr64 */

UObject * __thiscall UDynamicMeshComponent::_getUObject_adjustor_1512__(UDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execAllowsGeometrySelection @ 14971de70

void __cdecl
UDynamicMeshComponent::execAllowsGeometrySelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2a].field_0x1;
  return;
}

// execConfigureMaterialSet @ 14971df60

void __cdecl
UDynamicMeshComponent::execConfigureMaterialSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void **ppvVar9;
  bool bVar10;
  int local_res10 [2];
  void *local_38;
  undefined8 local_30;
  
  uVar7 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  ppvVar9 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = *(int *)(ppvVar9 + 1);
  uVar8 = uVar7;
  if (0 < iVar5) {
    do {
      uVar6 = (uint)uVar7;
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x6b8);
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
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
      (*pcVar2)(param_1,uVar7,*(undefined8 *)((longlong)*ppvVar9 + uVar8));
      iVar5 = *(int *)(ppvVar9 + 1);
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 8;
    } while ((int)(uVar6 + 1) < iVar5);
  }
  if (bVar10) {
    (**(code **)(*(longlong *)param_1 + 0xcc8))(param_1);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execEnableComplexAsSimpleCollision @ 14971e120

void __cdecl
UDynamicMeshComponent::execEnableComplexAsSimpleCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = param_1[0x35].field_0xa != '\0';
  if (!bVar1) {
    param_1[0x35].field_0xa = 1;
  }
  if (param_1[0x35].field_0x8 == '\x03') {
    if (bVar1) goto LAB_14971e170;
  }
  else {
    param_1[0x35].field_0x8 = 3;
  }
  (**(code **)(*(longlong *)param_1 + 0xd80))();
LAB_14971e170:
                    /* WARNING: Could not recover jumptable at 0x00014971e17d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xd68))(param_1,1);
  return;
}

// execGetTangentsType @ 14971e640

void __cdecl
UDynamicMeshComponent::execGetTangentsType(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = param_1[0x2f].field_0x10;
  if (param_1[0x2f].field_0x10 == -1) {
    cVar1 = '\x02';
  }
  *(char *)param_3 = cVar1;
  return;
}

// execGetTangentsTypePure @ 14971e670

void __cdecl
UDynamicMeshComponent::execGetTangentsTypePure(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = param_1[0x2f].field_0x10;
  if (param_1[0x2f].field_0x10 == -1) {
    cVar1 = '\x02';
  }
  *(char *)param_3 = cVar1;
  return;
}

// execNotifyMeshModified @ 14971e820

void __cdecl
UDynamicMeshComponent::execNotifyMeshModified(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014971e838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xcd8))();
  return;
}

// execNotifyMeshVertexAttributesModified @ 14971e850

void __cdecl
UDynamicMeshComponent::execNotifyMeshVertexAttributesModified
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  int local_38 [4];
  
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
  bVar2 = local_res8[0] != 0;
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
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_38[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xce0))(param_1,bVar2,bVar3,bVar4,local_38[0] != 0);
  return;
}

// execSetAllowsGeometrySelection @ 14971f100

void __cdecl
UDynamicMeshComponent::execSetAllowsGeometrySelection
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
  param_1[0x2a].field_0x1 = local_res8[0] != 0;
  return;
}

// execSetComplexAsSimpleCollisionEnabled @ 14971f220

void __cdecl
UDynamicMeshComponent::execSetComplexAsSimpleCollisionEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  
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
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetComplexAsSimpleCollisionEnabled((UDynamicMeshComponent *)param_1,bVar2,local_res20[0] != 0);
  return;
}

// execSetDeferredCollisionUpdatesEnabled @ 14971f380

void __cdecl
UDynamicMeshComponent::execSetDeferredCollisionUpdatesEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
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
  bVar2 = local_res8[0] != 0;
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
  if ((((bool)param_1[0x35].field_0xb != bVar2) && (param_1[0x35].field_0xb = bVar2, !bVar2)) &&
     (local_res10[0] != 0)) {
    (**(code **)(*(longlong *)param_1 + 0xd68))(param_1,1);
  }
  return;
}

// execSetDynamicMesh @ 14971f500

void __cdecl
UDynamicMeshComponent::execSetDynamicMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  FDelegateHandle FVar9;
  ForAnyElementType *this;
  uint uVar10;
  longlong lVar11;
  UObject *local_res10;
  undefined1 local_68 [40];
  FMRSWRecursiveAccessDetector *local_40;
  char local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4820002403413656849>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                       ,0x511,"NewMesh");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x27);
    if (lVar2 == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4820002403413656854>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                         ,0x516,"MeshObject");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      lVar3 = *(longlong *)&param_1[0x29].field_0x20;
      if (lVar3 != 0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x60),
                   (FWriteAccessScope *)(local_68 + 0x20));
        uVar10 = 0;
        if (0 < *(int *)(lVar2 + 0x70)) {
          lVar11 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar10 < *(int *)(lVar2 + 0x70)) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            this = (ForAnyElementType *)(*(longlong *)(lVar2 + 0x68) + lVar11);
            if ((*(int *)&this[1].Data != 0) && (this->Data != (FScriptContainerElement *)0x0)) {
              plVar8 = (longlong *)(**(code **)(*(longlong *)this->Data + 0x40))();
              if (*plVar8 == lVar3) {
                if ((*(int *)&this[1].Data != 0) && (this->Data != (FScriptContainerElement *)0x0))
                {
                  (*(code *)**(undefined8 **)this->Data)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (this,0,0,0x10);
                  *(undefined4 *)&this[1].Data = 0;
                }
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar2 + 0x60),
                           false);
                break;
              }
            }
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + 0x10;
          } while ((int)uVar10 < *(int *)(lVar2 + 0x70));
        }
        if (local_38 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_40,(FDestructionSentinel *)(local_68 + 0x20));
        }
      }
    }
    (**(code **)(*(longlong *)pUVar5 + 0x170))(pUVar5,0,param_1,0x10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_68._24_8_ = (ulonglong)(uint)local_68._28_4_ << 0x20;
    local_68._16_8_ = OnMeshObjectChanged;
    *(UObject **)(param_1 + 0x27) = pUVar5;
    FVar9 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
            ::AddUObject<UDynamicMeshComponent>
                      ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                        *)&pUVar5[2].field_0x10,(UDynamicMeshComponent *)local_68,
                       (pmf_738e16cf *)param_1);
    lVar2 = *(longlong *)param_1;
    *(undefined8 *)&param_1[0x29].field_0x20 = *(undefined8 *)FVar9.ID;
    (**(code **)(lVar2 + 0xb50))(param_1);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &param_1[0x27].field_0x8);
    if ((param_1[0x35].field_0xb == '\0') && (param_1[0x35].field_0x18 == '\0')) {
      (**(code **)(*(longlong *)param_1 + 0xd88))(param_1);
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0xd80))(param_1);
  }
  return;
}

// execSetTangentsType @ 14971fe00

void __cdecl
UDynamicMeshComponent::execSetTangentsType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
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
  if (local_res8[0] != param_1[0x2f].field_0x10) {
    param_1[0x2f].field_0x10 = local_res8[0];
    (**(code **)(*(longlong *)param_1 + 0xd48))(param_1);
  }
  return;
}

// execUpdateCollision @ 14971ffd0

void __cdecl
UDynamicMeshComponent::execUpdateCollision(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xd68))(param_1,local_res8[0] != 0);
  return;
}

// execValidateMaterialSlots @ 149720070

void __cdecl
UDynamicMeshComponent::execValidateMaterialSlots(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int *local_res20;
  code *local_48;
  undefined4 **local_40;
  
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
  bVar4 = local_res8[0] != 0;
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
  bVar5 = local_res10[0] != 0;
  local_res18[0] = 0;
  local_res20 = local_res18;
  local_40 = &local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::ValidateMaterialSlots'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  (**(code **)(*(longlong *)param_1 + 0xb40))(param_1,&local_48);
  iVar3 = local_res18[0] + 1;
  iVar2 = (**(code **)(*(longlong *)param_1 + 0x810))(param_1);
  if (bVar4) {
    for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x6b8))(param_1,iVar2,0);
    }
  }
  iVar2 = (**(code **)(*(longlong *)param_1 + 0x810))(param_1);
  if ((bVar5) && (iVar3 < iVar2)) {
    (**(code **)(*(longlong *)param_1 + 0xcc8))(param_1,iVar3);
  }
  iVar2 = (**(code **)(*(longlong *)param_1 + 0x810))(param_1);
  *(bool *)param_3 = iVar2 == iVar3;
  return;
}

// operator() @ 150544590

bool __thiscall `UDynamicMeshComponent::ApplyTransform'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4820002403413655820>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4820002403413655820>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505445d0

bool __thiscall `UDynamicMeshComponent::EditMesh'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4820002403413655758>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4820002403413655758>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150544610

bool __thiscall `UDynamicMeshComponent::SetMesh'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4820002403413655738>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4820002403413655738>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

