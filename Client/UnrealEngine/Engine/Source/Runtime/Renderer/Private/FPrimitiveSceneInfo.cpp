// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 60

// FPrimitiveSceneInfo @ 145295450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneInfo * __thiscall
FPrimitiveSceneInfo::FPrimitiveSceneInfo
          (FPrimitiveSceneInfo *this,FPrimitiveSceneInfoAdapter *param_1,FScene *param_2)

{
  FPrimitiveRuntimeVirtualTextureLodInfo *pFVar1;
  undefined1 *puVar2;
  TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  FInstanceSceneDataBuffers *pFVar8;
  FInstanceDataUpdateTaskInfo *pFVar9;
  FPrimitiveSceneInfo *pFVar10;
  undefined8 *puVar11;
  byte bVar12;
  float fVar13;
  void *local_18 [2];
  
  this->_padding_ = (longlong)&___7FPrimitiveSceneInfo__6B_;
  this->Proxy = param_1->SceneProxy;
  (this->PrimitiveComponentId).PrimIDValue = (param_1->ComponentId).PrimIDValue;
  this->LightingAttachmentRoot = 0;
  this->LODParentComponentId = 0;
  (this->StaticMeshCommandInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshCommandInfos).ArrayNum = 0;
  (this->StaticMeshCommandInfos).ArrayMax = 0;
  (this->StaticMeshRelevances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshRelevances).ArrayNum = 0;
  (this->StaticMeshRelevances).ArrayMax = 0;
  (this->StaticMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshes).ArrayNum = 0;
  (this->StaticMeshes).ArrayMax = 0;
  this->NaniteRasterBins[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteRasterBins[0].ArrayNum = 0;
  this->NaniteRasterBins[0].ArrayMax = 0;
  this->NaniteRasterBins[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteRasterBins[1].ArrayNum = 0;
  this->NaniteRasterBins[1].ArrayMax = 0;
  this->NaniteRasterBins[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteRasterBins[2].ArrayNum = 0;
  this->NaniteRasterBins[2].ArrayMax = 0;
  this->NaniteShadingBins[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteShadingBins[0].ArrayNum = 0;
  this->NaniteShadingBins[0].ArrayMax = 0;
  this->NaniteShadingBins[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteShadingBins[1].ArrayNum = 0;
  this->NaniteShadingBins[1].ArrayMax = 0;
  this->NaniteShadingBins[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteShadingBins[2].ArrayNum = 0;
  this->NaniteShadingBins[2].ArrayMax = 0;
  this->NaniteMaterialSlots[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteMaterialSlots[0].ArrayNum = 0;
  this->NaniteMaterialSlots[0].ArrayMax = 0;
  this->NaniteMaterialSlots[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteMaterialSlots[1].ArrayNum = 0;
  this->NaniteMaterialSlots[1].ArrayMax = 0;
  this->NaniteMaterialSlots[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NaniteMaterialSlots[2].ArrayNum = 0;
  this->NaniteMaterialSlots[2].ArrayMax = 0;
  (this->OctreeId).NodeIndex = 0xffffffff;
  (this->OctreeId).ElementIndex = -1;
  this->IndirectLightingCacheUniformBuffer =
       (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0;
  (this->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->IndirectLightingCacheAllocation = (FIndirectLightingCacheAllocation *)0x0;
  this->CachedPlanarReflectionProxy = (FPlanarReflectionSceneProxy *)0x0;
  this->CachedReflectionCaptureProxy = (FReflectionCaptureProxy *)0x0;
  (this->DistanceFieldInstanceIndices).ArrayNum = 0;
  (this->DistanceFieldInstanceIndices).ArrayMax = 1;
  (this->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->LumenPrimitiveGroupIndices).ArrayNum = 0;
  (this->LumenPrimitiveGroupIndices).ArrayMax = 1;
  (this->HitProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitProxies).ArrayNum = 0;
  (this->HitProxies).ArrayMax = 0;
  (this->DefaultDynamicHitProxyId).Index = -1;
  this->DefaultDynamicHitProxy = (HHitProxy *)0x0;
  this->LastRenderTime = -3.4028235e+38;
  this->LightList = (FLightPrimitiveInteraction *)0x0;
  this->Scene = param_2;
  this->NumMobileDynamicLocalLights = 0;
  this->GpuLodInstanceRadius = 0.0;
  this->PackedIndex = -1;
  this->PersistentIndex = -1;
  this->PrimitiveComponentInterfaceForDebuggingOnly = param_1->PrimitiveComponentInterface;
  this->SceneData = param_1->SceneData;
  pFVar1 = &this->RuntimeVirtualTextureLodInfo;
  pFVar1->MinLod = 0;
  pFVar1->CullValue = 0;
  pFVar1->CullMethod = 0;
  pFVar1->LodBias = 0;
  pFVar1->MaxLod = 0;
  this->bPendingFlushRuntimeVirtualTexture = false;
  this->bNeedsCachedReflectionCaptureUpdate = true;
  puVar2 = &this->field_0x1a2;
  this->bNeedsUniformBufferUpdate = false;
  this->bPendingDelete = false;
  this->bPendingAddStaticMeshes = false;
  this->bPendingAddToScene = false;
  this->bNaniteRasterBinsRenderCustomDepth = false;
  this->bRegisteredWithVelocityData = false;
  this->bRegisteredLightmapVirtualTextureProducerCallback = false;
  this->bIndirectLightingCacheBufferDirty = false;
  bVar12 = ((byte)param_1->SceneProxy->field_0x7b >> 1 ^ this->field_0x1a3) & 4 ^ this->field_0x1a3;
  this->field_0x1a3 = bVar12;
  bVar12 = (param_1->SceneProxy->field_0x7b << 3 ^ bVar12) & 8 ^ bVar12;
  this->field_0x1a3 = bVar12;
  if ((param_1->SceneProxy->bSupportsRuntimeVirtualTexture == '\0') ||
     ((param_1->SceneProxy->RuntimeVirtualTextures).ArrayNum < 1)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0x10;
  }
  this->bCachedRayTracingInstanceAnySegmentsDecal = false;
  this->bCachedRayTracingInstanceAllSegmentsTranslucent = false;
  this->bCachedRayTracingInstanceAllSegmentsDecal = false;
  (this->DynamicRayTracingInstanceCachedData).bForceOpaque = '\0';
  (this->DynamicRayTracingInstanceCachedData).bAllSegmentsTranslucent = '\0';
  (this->DynamicRayTracingInstanceCachedData).bAllSegmentsDecal = '\0';
  (this->DynamicRayTracingInstanceCachedData).bAnySegmentsDecal = '\0';
  (this->DynamicRayTracingInstanceCachedData).bReverseCulling = '\0';
  (this->DynamicRayTracingInstanceCachedData).bDoubleSided = '\0';
  this->bDynamicRayTracingInstanceCachedDataDirty = true;
  (this->DynamicRayTracingInstanceCachedData).Mask = '\0';
  (this->RayTracingLODData).AllocatorInstance.SecondaryData =
       (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0;
  this->field_0x1a3 = bVar12 & 0x2f | bVar6 | 0x80;
  (this->RayTracingLODData).ArrayNum = 0;
  (this->RayTracingLODData).ArrayMax = 1;
  this->RayTracingInstanceIndexMain = 0xffffffff;
  this->RayTracingInstanceIndexDecal = 0xffffffff;
  pFVar8 = FPrimitiveSceneProxy::GetInstanceSceneDataBuffers
                     (param_1->SceneProxy,UnsynchronizedAndUnsafe);
  this->InstanceSceneDataBuffersInternal = pFVar8;
  pFVar9 = (FInstanceDataUpdateTaskInfo *)(**(code **)(param_1->SceneProxy->_padding_ + 0x230))();
  pTVar3 = &this->StaticRayTracingGeometries;
  this->InstanceDataUpdateTaskInfo = pFVar9;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StaticRayTracingGeometries).ArrayNum = 0;
  (this->StaticRayTracingGeometries).ArrayMax = 0;
  this->LevelUpdateNotificationIndex = -1;
  this->InstanceSceneDataOffset = -1;
  this->NumInstanceSceneDataEntries = 0;
  this->InstancePayloadDataOffset = -1;
  this->InstancePayloadDataStride = 0;
  this->LightmapDataOffset = -1;
  this->NumLightmapDataEntries = 0;
  if ((this->PrimitiveComponentId).PrimIDValue == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveComponentId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0x14b,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FPrimitiveSceneInfo *)(*pcVar5)();
      return pFVar10;
    }
  }
  if (this->Proxy == (FPrimitiveSceneProxy *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0x14c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FPrimitiveSceneInfo *)(*pcVar5)();
      return pFVar10;
    }
  }
  if (this->SceneData == (FPrimitiveSceneInfoData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0x14d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FPrimitiveSceneInfo *)(*pcVar5)();
      return pFVar10;
    }
  }
  (this->LightingAttachmentRoot).PrimIDValue = (param_1->LightingAttachmentComponentId).PrimIDValue;
  (this->LODParentComponentId).PrimIDValue = (param_1->LODParentComponentId).PrimIDValue;
  this->CachedReflectionCaptureProxies[0] = (FReflectionCaptureProxy *)0x0;
  this->CachedReflectionCaptureProxies[1] = (FReflectionCaptureProxy *)0x0;
  this->CachedReflectionCaptureProxies[2] = (FReflectionCaptureProxy *)0x0;
  puVar11 = (undefined8 *)
            (**(code **)(param_1->SceneProxy->_padding_ + 0x78))(param_1->SceneProxy,local_18);
  if (pTVar3 != (TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *)puVar11) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)*puVar11;
    *puVar11 = 0;
    (this->StaticRayTracingGeometries).ArrayNum = *(int *)(puVar11 + 1);
    (this->StaticRayTracingGeometries).ArrayMax = *(int *)((longlong)puVar11 + 0xc);
    puVar11[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  this->CachedRayTracingGeometry = (FRayTracingGeometry *)0x0;
  bVar7 = FInstanceCullingContext::IsGPUCullingEnabled();
  if (bVar7) {
    fVar13 = (float)(**(code **)(param_1->SceneProxy->_padding_ + 0x218))();
    this->GpuLodInstanceRadius = fVar13;
  }
  return this;
}

// FPrimitiveSceneInfo @ 145295820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneInfo * __thiscall
FPrimitiveSceneInfo::FPrimitiveSceneInfo
          (FPrimitiveSceneInfo *this,FPrimitiveSceneDesc *param_1,FScene *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPrimitiveSceneInfo *pFVar3;
  FPrimitiveSceneInfoData *pFVar4;
  FPrimitiveSceneInfoAdapter local_58;
  
  local_58.HitProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.HitProxies.ArrayNum = 0;
  local_58.HitProxies.ArrayMax = 0;
  local_58.DefaultHitProxy = (HHitProxy *)0x0;
  if (param_1 == (FPrimitiveSceneDesc *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPrimitiveSceneDesc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0xfa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPrimitiveSceneInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_58.SceneData = param_1->PrimitiveSceneData;
  local_58.PrimitiveComponentInterface = param_1->PrimitiveComponentInterface;
  pFVar4 = local_58.SceneData;
  if (local_58.SceneData == (FPrimitiveSceneInfoData *)0x0) {
    pFVar4 = (FPrimitiveSceneInfoData *)&param_1->SceneProxy;
  }
  local_58.Component = (UPrimitiveComponent *)0x0;
  local_58.SceneProxy = pFVar4->SceneProxy;
  local_58.PrimitiveDesc = param_1;
  if (local_58.SceneProxy == (FPrimitiveSceneProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0x101,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPrimitiveSceneInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_58.ComponentId.PrimIDValue = (param_1->PrimitiveSceneData->PrimitiveSceneId).PrimIDValue;
  local_58.LODParentComponentId.PrimIDValue = (param_1->LodParentComponentId).PrimIDValue;
  local_58.LightingAttachmentComponentId.PrimIDValue =
       (param_1->LightingAttachmentComponentId).PrimIDValue;
  local_58.Mobility = param_1->Mobility;
  FPrimitiveSceneInfo(this,&local_58,param_2);
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)local_58.HitProxies.AllocatorInstance.Data,
             local_58.HitProxies.ArrayNum);
  if (local_58.HitProxies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.HitProxies.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPrimitiveSceneInfo__6B_;
  return this;
}

// FPrimitiveSceneInfo @ 145295950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneInfo * __thiscall
FPrimitiveSceneInfo::FPrimitiveSceneInfo
          (FPrimitiveSceneInfo *this,UPrimitiveComponent *param_1,FScene *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPrimitiveSceneInfo *pFVar3;
  UPrimitiveComponent *pUVar4;
  FActorLastRenderTime *pFVar5;
  FPrimitiveSceneInfoAdapter local_58;
  
  local_58.LODParentComponentId.PrimIDValue = 0;
  local_58.LightingAttachmentComponentId.PrimIDValue = 0;
  local_58.HitProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SceneProxy = param_1->SceneProxy;
  local_58.SceneData = &param_1->SceneData;
  local_58.HitProxies.ArrayNum = 0;
  local_58.HitProxies.ArrayMax = 0;
  local_58.DefaultHitProxy = (HHitProxy *)0x0;
  local_58.ComponentId.PrimIDValue = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
  local_58.PrimitiveComponentInterface =
       (IPrimitiveComponent *)&param_1->PrimitiveComponentInterface;
  local_58.PrimitiveDesc = (FPrimitiveSceneDesc *)0x0;
  pFVar5 = (FActorLastRenderTime *)(*(longlong *)&param_1->field_0xa8 + 0x198);
  if (*(longlong *)&param_1->field_0xa8 == 0) {
    pFVar5 = (FActorLastRenderTime *)0x0;
  }
  local_58.Component = param_1;
  if ((param_1->SceneData).OwnerLastRenderTimePtr != pFVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent->SceneData.OwnerLastRenderTimePtr == FActorLastRenderTime::GetPtr(InComponent->GetOwner())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPrimitiveSceneInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_58.Mobility = (Type)(byte)param_1->field_0x1ab;
  pUVar4 = UPrimitiveComponent::GetLightingAttachmentRoot(param_1);
  if ((pUVar4 != (UPrimitiveComponent *)0x0) && (pUVar4 != param_1)) {
    local_58.LightingAttachmentComponentId.PrimIDValue =
         (pUVar4->SceneData).PrimitiveSceneId.PrimIDValue;
  }
  pUVar4 = UPrimitiveComponent::GetLODParentPrimitive(param_1);
  if (pUVar4 != (UPrimitiveComponent *)0x0) {
    local_58.LODParentComponentId.PrimIDValue = (pUVar4->SceneData).PrimitiveSceneId.PrimIDValue;
  }
  FPrimitiveSceneInfo(this,&local_58,param_2);
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)local_58.HitProxies.AllocatorInstance.Data,
             local_58.HitProxies.ArrayNum);
  if (local_58.HitProxies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.HitProxies.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPrimitiveSceneInfo__6B_;
  return this;
}

// ~FPrimitiveSceneInfo @ 1452964c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::~FPrimitiveSceneInfo(FPrimitiveSceneInfo *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar5;
  longlong lVar6;
  longlong lVar7;
  TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> *pTVar10;
  
  pTVar9 = (TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *)&this->OctreeId;
  this->_padding_ = (longlong)&___7FPrimitiveSceneInfo__6B_;
  if (((FOctreeElementId2 *)pTVar9)->NodeIndex != 0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OctreeId.IsValidId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0x17b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = 0x27;
  do {
    if ((this->StaticMeshCommandInfos).ArrayNum != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMeshCommandInfos.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x17e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pFVar1 = (this->StaticRayTracingGeometries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar5 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
    FVar5 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)&this->RayTracingLODData;
  }
  DestructItems<FPrimitiveSceneInfo::FRayTracingLODData,int>
            ((FRayTracingLODData *)FVar5,(this->RayTracingLODData).ArrayNum);
  FVar5 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)(this->HitProxies).AllocatorInstance.Data,
             (this->HitProxies).ArrayNum);
  pFVar1 = (this->HitProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  if (this->IndirectLightingCacheUniformBuffer !=
      (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->IndirectLightingCacheUniformBuffer);
  }
  lVar6 = 3;
  lVar7 = 3;
  do {
    pFVar1 = pTVar9[-1].AllocatorInstance.Data;
    pTVar9 = pTVar9 + -1;
    lVar7 = lVar7 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar7 != 0);
  pTVar10 = (TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> *)this->NaniteMaterialSlots;
  lVar7 = 3;
  do {
    pFVar1 = pTVar10[-1].AllocatorInstance.Data;
    pTVar10 = pTVar10 + -1;
    lVar7 = lVar7 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar7 != 0);
  pTVar8 = (TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> *)this->NaniteShadingBins;
  do {
    pFVar1 = pTVar8[-1].AllocatorInstance.Data;
    pTVar8 = pTVar8 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  DestructItems<FStaticMeshBatch,int>
            ((FStaticMeshBatch *)(this->StaticMeshes).AllocatorInstance.Data,
             (this->StaticMeshes).ArrayNum);
  pFVar1 = (this->StaticMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMeshRelevances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMeshCommandInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

// operator() @ 145299130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l2::<lambda_1>::operator()
          (void *this,FCachedPassMeshDrawListContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FMeshDrawCommandSortKey_u_0 *pFVar2;
  undefined4 *puVar3;
  void *_Dst;
  undefined8 *puVar4;
  Type TVar5;
  undefined4 uVar6;
  FScene *pFVar7;
  FPrimitiveSceneInfo *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  FMeshInfoAndIndex FVar12;
  FMeshDrawCommandSortKey_u_0 FVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FMeshPassProcessor *pFVar20;
  ulonglong *puVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  Type TVar28;
  uint uVar29;
  int *piVar30;
  longlong lVar31;
  FMeshInfoAndIndex *pFVar32;
  longlong lVar33;
  ulong64 uVar34;
  uint uVar35;
  bool bVar36;
  undefined1 local_e8 [4];
  uint local_e4;
  ForElementType<_public:___cdecl__private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_2_::<lambda_1>::operator()(FCachedPassMeshDrawListContext_&,int)const_::_2_::FMeshInfoAndIndex>
  local_e0;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  uint local_cc;
  FMeshInfoAndIndex local_c8;
  FMeshInfoAndIndex *local_c0;
  ulonglong local_b8;
  uint local_b0;
  longlong local_a8;
  ulonglong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FMeshDrawCommandSortKey_u_0 local_88;
  int iStack_80;
  int iStack_7c;
  FMeshDrawCommandSortKey_u_0 local_78;
  FMeshDrawCommandSortKey_u_0 FStack_70;
  uint local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FPrimitiveSceneInfo_CacheMeshDrawCommand");
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId607,"FPrimitiveSceneInfo_CacheMeshDrawCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x25f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId607);
  }
  local_e0.Data = (FMeshInfoAndIndex *)0x0;
  local_d8 = 0;
  uStack_d4 = 0;
  uVar29 = *(int *)((longlong)this + 0x18) * 3;
  if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
  }
  if (0 < (int)uVar29) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<__FPrimitiveSceneInfo::CacheMeshDrawCommands_::__l2::<lambda_1>::operator()_::__l2::FMeshInfoAndIndex>_>
              (8,4,uVar29,&local_e0,0,(int *)&uStack_d4);
  }
  iVar16 = (param_2 + 1) * *(int *)((longlong)this + 0x18);
  uVar29 = *(int *)((longlong)this + 0x18) * param_2;
  lVar33 = (longlong)(int)uVar29;
  iVar17 = *(int *)((longlong)this + 0x10);
  if (iVar16 < *(int *)((longlong)this + 0x10)) {
    iVar17 = iVar16;
  }
  local_a8 = (longlong)iVar17;
  if (lVar33 < local_a8) {
    do {
      uVar27 = 0;
      if ((int)uVar29 < *(int *)((longlong)this + 0x10)) {
        uVar27 = ~uVar29 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar31 = *(longlong *)(*(longlong *)((longlong)this + 8) + lVar33 * 8);
      if ((*(int *)(lVar31 + 0x28) != 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneInfo->StaticMeshCommandInfos.Num() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                              ,0x26e,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar16 = *(int *)(lVar31 + 0x48) * 0x27;
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x24,4,iVar16,(ForAnyElementType *)(lVar31 + 0x20),(int *)(lVar31 + 0x28),
                          (int *)(lVar31 + 0x2c));
      DefaultConstructItems<FCachedMeshDrawCommandInfo,int>
                ((void *)(*(longlong *)(lVar31 + 0x20) + (longlong)iVar17 * 0x24),iVar16);
      if (((*(byte *)(*(longlong *)(lVar31 + 8) + 0x7f) & 1) == 0) &&
         (uVar27 = 0, 0 < *(int *)(lVar31 + 0x48))) {
        do {
          uVar26 = 0;
          if ((int)uVar27 < *(int *)(lVar31 + 0x48)) {
            uVar26 = ~uVar27 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          bVar14 = SupportsCachingMeshDrawCommands
                             ((FMeshBatch *)
                              ((longlong)(int)uVar27 * 0xf0 + *(longlong *)(lVar31 + 0x40)));
          if (bVar14) {
            local_c8.InfoIndex = uVar29;
            local_c8.MeshIndex = uVar27;
            if (((local_e0.Data <= &local_c8) && (&local_c8 < local_e0.Data + (int)uStack_d4)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (local_d8 == uStack_d4) {
              local_d8 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<__FPrimitiveSceneInfo::CacheMeshDrawCommands_::__l2::<lambda_1>::operator()_::__l2::FMeshInfoAndIndex>_>
                                   (0x408,&local_e0,(int *)&uStack_d4);
            }
            lVar24 = (longlong)(int)local_d8;
            local_d8 = local_d8 + 1;
            FVar12.MeshIndex = local_c8.MeshIndex;
            FVar12.InfoIndex = local_c8.InfoIndex;
            local_e0.Data[lVar24] = FVar12;
          }
          uVar27 = uVar27 + 1;
        } while ((int)uVar27 < *(int *)(lVar31 + 0x48));
      }
      uVar29 = uVar29 + 1;
      lVar33 = lVar33 + 1;
    } while (lVar33 < local_a8);
  }
  (**(code **)(param_1->_padding_ + 0x18))(param_1,local_d8 * 4);
  local_e4 = 0;
  do {
    uVar29 = local_e4;
    bVar14 = 2 < *(int *)(*(longlong *)this + 8);
    TVar28 = (Type)local_e4;
    if ((WaterInfoTexturePass < TVar28) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShadingPath < EShadingPath::Num && PassType < EMeshPass::Num",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                            ,0x942,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar25 = (ulonglong)(uVar29 & 0xff);
    local_b8 = uVar25;
    if ((FPassProcessorManager::Flags[bVar14][uVar25] & CachedMeshCommands) != None) {
      FCachedPassMeshDrawListContext::BeginMeshPass(param_1,TVar28);
      pFVar7 = *(FScene **)this;
      TVar5 = *(Type *)&pFVar7->field_0x8;
      if ((WaterInfoTexturePass < TVar28) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ShadingPath < EShadingPath::Num&& PassType < EMeshPass::Num",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                              ,0x933,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (((FPassProcessorManager::JumpTable[bVar14][uVar25] ==
            (_func___cdecl_FMeshPassProcessor_ptr_Type_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
             *)0x0) &&
          (FPassProcessorManager::DeprecatedJumpTable[bVar14][uVar25] ==
           (_func___cdecl_FMeshPassProcessor_ptr_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
            *)0x0)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("JumpTable[ShadingPathIdx][PassType] || DeprecatedJumpTable[ShadingPathIdx][PassType]"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                              ,0x935,
                              L"Pass type %u create function was never registered for shading path %u.  Use a FRegisterPassProcessorCreateFunction to register a create function for this enum value."
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (FPassProcessorManager::JumpTable[bVar14][uVar25] ==
          (_func___cdecl_FMeshPassProcessor_ptr_Type_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
           *)0x0) {
        pFVar20 = (*FPassProcessorManager::DeprecatedJumpTable[bVar14][uVar25])
                            (pFVar7,(FSceneView *)0x0,(FMeshPassDrawListContext *)param_1);
      }
      else {
        pFVar20 = (*FPassProcessorManager::JumpTable[bVar14][uVar25])
                            (TVar5,pFVar7,(FSceneView *)0x0,(FMeshPassDrawListContext *)param_1);
      }
      uVar27 = local_e4;
      if (pFVar20 != (FMeshPassProcessor *)0x0) {
        uVar25 = (ulonglong)(int)local_d8;
        local_d0 = local_d8;
        local_c0 = local_e0.Data + uVar25;
        piVar30 = &(local_e0.Data)->MeshIndex;
        while( true ) {
          pFVar32 = local_c0;
          if (local_d8 != (uint)uVar25) {
            local_e8[0] = 0;
            `TCheckedPointerIterator<``FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l2::<lambda_1>::operator()'::__l2::FMeshInfoAndIndex,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_e8);
          }
          if ((FMeshInfoAndIndex *)(piVar30 + -1) == pFVar32) break;
          uVar29 = ((FMeshInfoAndIndex *)(piVar30 + -1))->InfoIndex;
          uVar26 = 0;
          if ((int)uVar29 < *(int *)((longlong)this + 0x10)) {
            uVar26 = ~uVar29 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar8 = *(FPrimitiveSceneInfo **)
                    (*(longlong *)((longlong)this + 8) + (longlong)(int)uVar29 * 8);
          uVar29 = *piVar30;
          uVar26 = 0;
          if ((int)uVar29 < (pFVar8->StaticMeshes).ArrayNum) {
            uVar26 = ~uVar29 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar26 = *piVar30;
          pFVar9 = (pFVar8->StaticMeshes).AllocatorInstance.Data;
          uVar18 = 0;
          if ((int)uVar26 < (pFVar8->StaticMeshRelevances).ArrayNum) {
            uVar18 = ~uVar26 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar10 = (pFVar8->StaticMeshRelevances).AllocatorInstance.Data;
          pFVar1 = pFVar10 + (longlong)(int)uVar26 * 0x18;
          if (((*(ulonglong *)(pFVar10 + (longlong)(int)uVar26 * 0x18) >>
                ((ulonglong)(uVar27 & 0xff) & 0x3f) & 1) != 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!MeshRelevance.CommandInfosMask.Get(PassType)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                                  ,0x297,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FODSCManager::SetCurrentPrimitiveSceneInfo(pFVar8);
          (**(code **)(pFVar20->_padding_ + 0x10))
                    (pFVar20,pFVar9 + (longlong)(int)uVar29 * 0xf0,0xffffffffffffffff,pFVar8->Proxy,
                     0xffffffff);
          FCachedPassMeshDrawListContext::GetCommandInfoAndReset
                    (param_1,(FCachedMeshDrawCommandInfo *)&local_88.BasePass);
          if ((iStack_80 != -1) || (iStack_7c != -1)) {
            *(short *)(pFVar1 + 0x12) = *(short *)(pFVar1 + 0x12) + 1;
            *(ulonglong *)pFVar1 = *(ulonglong *)pFVar1 | 1L << (local_b8 & 0x3f);
            uVar26 = (uVar27 & 0xff) + *piVar30 * 0x27;
            uVar29 = 0;
            if ((int)uVar26 < (pFVar8->StaticMeshCommandInfos).ArrayNum) {
              uVar29 = ~uVar26 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar9 = (pFVar8->StaticMeshCommandInfos).AllocatorInstance.Data;
            pFVar2 = (FMeshDrawCommandSortKey_u_0 *)(pFVar9 + (longlong)(int)uVar26 * 0x24);
            if ((((byte)pFVar9[(longlong)(int)uVar26 * 0x24 + 0x18] & 0x7f) != 0x27) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CurrentCommandInfo.MeshPass == EMeshPass::Num",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                                    ,0x2ac,
                                    L"SceneInfo->StaticMeshCommandInfos[%d] is not expected to be initialized yet. MeshPass is %d, but expected EMeshPass::Num (%d)."
                                   ), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar13.Generic.PixelShaderHash = iStack_7c;
            FVar13.Generic.VertexShaderHash = iStack_80;
            *pFVar2 = local_88;
            pFVar2[1] = FVar13;
            pFVar2[2] = local_78;
            pFVar2[3] = FStack_70;
            pFVar2[4].Generic.VertexShaderHash = local_68;
          }
          FODSCManager::ResetCurrentPrimitiveSceneInfo();
          uVar25 = (ulonglong)local_d0;
          piVar30 = piVar30 + 2;
        }
        (**(code **)pFVar20->_padding_)(pFVar20,1);
        uVar29 = local_e4;
      }
      FCachedPassMeshDrawListContext::EndMeshPass(param_1);
    }
    local_e4 = uVar29 + 1;
  } while ((int)local_e4 < 0x27);
  uVar29 = param_2 * *(int *)((longlong)this + 0x18);
  uVar25 = (ulonglong)(int)uVar29;
  local_b8 = uVar25;
  if ((longlong)uVar25 < local_a8) {
    do {
      uVar27 = 0;
      if ((int)uVar29 < *(int *)((longlong)this + 0x10)) {
        uVar27 = ~uVar29 >> 0x1f;
      }
      local_b8 = uVar25;
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar34 = 0;
      local_cc = 0;
      local_d0 = 0;
      lVar33 = *(longlong *)(*(longlong *)((longlong)this + 8) + uVar25 * 8);
      if (0 < *(int *)(lVar33 + 0x48)) {
        local_e4 = 0;
        local_c0 = (FMeshInfoAndIndex *)0x0;
        do {
          pFVar32 = local_c0;
          uVar26 = local_d0;
          uVar27 = local_e4;
          uVar18 = 0;
          if ((int)local_d0 < *(int *)(lVar33 + 0x38)) {
            uVar18 = ~local_d0 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar18 = local_e4;
          puVar21 = (ulonglong *)((longlong)&pFVar32->InfoIndex + *(longlong *)(lVar33 + 0x30));
          local_a0 = puVar21;
          if (*(short *)((longlong)puVar21 + 0x12) != 0) {
            lVar31 = 0;
            if (*puVar21 != 0) {
              for (; (*puVar21 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
              }
            }
            uVar35 = (uint)uVar34;
            local_b0 = (uint)lVar31;
            uVar23 = 0x40;
            if (*puVar21 != 0) {
              uVar23 = local_b0;
            }
            uVar19 = uVar23 & 0xff;
            if (0x27 < uVar23) {
              uVar19 = 0x27;
            }
            if ((char)uVar19 != '\'') {
              lVar31 = (longlong)(int)uVar35 * 0x24;
              do {
                uVar26 = uVar19 + uVar18;
                uVar27 = 0;
                if ((int)uVar26 < *(int *)(lVar33 + 0x28)) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar22 = (longlong)(int)uVar26;
                lVar24 = *(longlong *)(lVar33 + 0x20);
                puVar3 = (undefined4 *)(lVar24 + lVar22 * 0x24);
                local_98 = *puVar3;
                uStack_94 = puVar3[1];
                uStack_90 = puVar3[2];
                uStack_8c = puVar3[3];
                uVar6 = *(undefined4 *)(lVar24 + 0x20 + lVar22 * 0x24);
                puVar4 = (undefined8 *)(lVar24 + 0x10 + lVar22 * 0x24);
                local_60 = *puVar4;
                uStack_58 = puVar4[1];
                uVar35 = (uint)uVar34;
                uVar27 = 0;
                if ((int)uVar35 < *(int *)(lVar33 + 0x28)) {
                  uVar27 = ~uVar35 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar24 = *(longlong *)(lVar33 + 0x20);
                uVar35 = uVar35 + 1;
                uVar34 = (ulong64)uVar35;
                puVar3 = (undefined4 *)(lVar31 + lVar24);
                *puVar3 = local_98;
                puVar3[1] = uStack_94;
                puVar3[2] = uStack_90;
                puVar3[3] = uStack_8c;
                puVar4 = (undefined8 *)(lVar31 + 0x10 + lVar24);
                *puVar4 = local_60;
                puVar4[1] = uStack_58;
                *(undefined4 *)(lVar31 + 0x20 + lVar24) = uVar6;
                lVar31 = lVar31 + 0x24;
                uVar25 = -1L << ((char)uVar19 + 1U & 0x3f) & *puVar21;
                lVar24 = 0;
                if (uVar25 != 0) {
                  for (; (uVar25 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
                  }
                }
                local_b0 = (uint)lVar24;
                uVar27 = 0x40;
                if (uVar25 != 0) {
                  uVar27 = local_b0;
                }
                uVar19 = uVar27 & 0xff;
                if (0x27 < uVar27) {
                  uVar19 = 0x27;
                }
              } while ((char)uVar19 != '\'');
              uVar34 = (ulong64)local_cc;
              pFVar32 = local_c0;
              uVar27 = local_e4;
              uVar26 = local_d0;
            }
            *(short *)((longlong)local_a0 + 0x12) = (short)uVar34;
            uVar34 = (ulong64)uVar35;
            local_cc = uVar35;
          }
          local_d0 = uVar26 + 1;
          local_e4 = uVar27 + 0x27;
          local_c0 = pFVar32 + 3;
          uVar25 = local_b8;
        } while ((int)local_d0 < *(int *)(lVar33 + 0x48));
      }
      iVar17 = *(int *)(lVar33 + 0x28);
      uVar27 = (uint)uVar34;
      if (iVar17 < (int)uVar27) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x24,4,uVar27 - iVar17,(ForAnyElementType *)(lVar33 + 0x20),
                            (int *)(lVar33 + 0x28),(int *)(lVar33 + 0x2c));
        DefaultConstructItems<FCachedMeshDrawCommandInfo,int>
                  ((void *)(*(longlong *)(lVar33 + 0x20) + (longlong)iVar16 * 0x24),uVar27 - iVar17)
        ;
      }
      else {
        if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar34);
        }
        if ((int)uVar27 < iVar17) {
          uVar26 = iVar17 - uVar27;
          if (((int)(uVar26 | uVar27) < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (uVar26 != 0) {
            _Dst = (void *)(*(longlong *)(lVar33 + 0x20) + (longlong)(int)uVar27 * 0x24);
            iVar17 = (*(int *)(lVar33 + 0x28) - uVar26) - uVar27;
            if (iVar17 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar26 * 0x24),
                      (longlong)iVar17 * 0x24);
            }
            *(int *)(lVar33 + 0x28) = *(int *)(lVar33 + 0x28) - uVar26;
          }
        }
      }
      iVar17 = *(int *)(lVar33 + 0x28);
      if (*(int *)(lVar33 + 0x2c) != iVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,iVar17,(ForAnyElementType *)(lVar33 + 0x20),iVar17,(int *)(lVar33 + 0x2c))
        ;
      }
      uVar29 = uVar29 + 1;
      uVar25 = uVar25 + 1;
      local_b8 = uVar25;
    } while ((longlong)uVar25 < local_a8);
  }
  if (local_e0.Data != (FMeshInfoAndIndex *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_e0.Data);
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 145299cd0

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
`FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  int iVar2;
  FPrimitiveSceneInfo *pFVar3;
  HHitProxy *pHVar4;
  code *pcVar5;
  bool bVar6;
  FPrimitiveRuntimeVirtualTextureLodInfo FVar7;
  FPrimitiveSceneInfo **ppFVar8;
  bool bVar9;
  FTaskTagScope local_38;
  undefined **local_28;
  FPrimitiveSceneInfo *local_20;
  HHitProxy *local_18;
  
  FTaskTagScope::FTaskTagScope(&local_38,EParallelRenderingThread);
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Magenta,"FPrimitiveSceneInfo_AddStaticMeshes_DrawStaticElements");
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1555,
               "FPrimitiveSceneInfo_AddStaticMeshes_DrawStaticElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x613);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1555);
  }
  ppFVar8 = TArrayView<FPrimitiveSceneInfo_*,int>::operator[]
                      (*(TArrayView<FPrimitiveSceneInfo_*,int> **)((longlong)this + 8),param_1);
  pFVar3 = *ppFVar8;
  local_28 = &___7FBatchingSPDI__6B_;
  local_18 = (HHitProxy *)0x0;
  pHVar4 = pFVar3->DefaultDynamicHitProxy;
  if (pHVar4 != (HHitProxy *)0x0) {
    *(int *)&pHVar4->_padding_ = (int)pHVar4->_padding_ + 1;
    local_18 = pHVar4;
  }
  local_20 = pFVar3;
  (**(code **)(pFVar3->Proxy->_padding_ + 0x38))(pFVar3->Proxy,&local_28);
  iVar2 = (pFVar3->StaticMeshes).ArrayNum;
  if ((pFVar3->StaticMeshes).ArrayMax != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,8,iVar2,&(pFVar3->StaticMeshes).AllocatorInstance,iVar2,
               &(pFVar3->StaticMeshes).ArrayMax);
  }
  iVar2 = (pFVar3->StaticMeshRelevances).ArrayNum;
  if ((pFVar3->StaticMeshRelevances).ArrayMax != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,&(pFVar3->StaticMeshRelevances).AllocatorInstance,iVar2,
               &(pFVar3->StaticMeshRelevances).ArrayMax);
  }
  FVar7 = BuildRuntimeVirtualTextureLodInfo(pFVar3);
  pFVar3->bPendingAddStaticMeshes = false;
  pFVar3->RuntimeVirtualTextureLodInfo = FVar7;
  if (((pFVar3->StaticMeshRelevances).ArrayNum != (pFVar3->StaticMeshes).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneInfo->StaticMeshRelevances.Num() == SceneInfo->StaticMeshes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x61e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (local_18 != (HHitProxy *)0x0) {
    plVar1 = &local_18->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)local_18->_padding_)(local_18,1);
    }
  }
  local_28 = &___7FStaticPrimitiveDrawInterface__6B_;
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_38);
  return;
}

// operator() @ 14529af20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>::operator()
          (void *this,
          FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
          *param_1,int param_2)

{
  FPrimitiveRayTracingData *pFVar1;
  longlong lVar2;
  FPrimitiveSceneProxy *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FPrimitiveSceneInfo *pFVar6;
  bool bVar7;
  ERayTracingPrimitiveFlags EVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FPrimitiveSceneInfo **ppFVar13;
  int iVar14;
  longlong lVar15;
  int local_d8;
  uint local_d4;
  FPrimitiveSceneInfo *local_d0;
  FPrimitiveSceneProxy *local_c8;
  FRayTracingInstance local_b8;
  FTaskTagScope local_48;
  
  FTaskTagScope::FTaskTagScope(&local_48,EParallelRenderingThread);
  ppFVar13 = TArrayView<FPrimitiveSceneInfo_*,int>::operator[]
                       (*(TArrayView<FPrimitiveSceneInfo_*,int> **)((longlong)this + 8),param_2);
  lVar2 = *(longlong *)this;
  local_d0 = *ppFVar13;
  uVar12 = local_d0->PackedIndex;
  lVar15 = (longlong)(int)uVar12;
  pFVar3 = local_d0->Proxy;
  local_d4 = ~uVar12 >> 0x1f;
  uVar9 = 0;
  if ((int)uVar12 < *(int *)(lVar2 + 0x2958)) {
    uVar9 = local_d4;
  }
  local_c8 = pFVar3;
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar1 = (FPrimitiveRayTracingData *)(*(longlong *)(lVar2 + 0x2950) + lVar15 * 8);
  iVar14 = -1;
  if (pFVar3->RayTracingGroupId != 0xffffffff) {
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
    ::FindIdByHash((TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
                    *)(*(longlong *)this + 0x2970),(FHashType)(uint)&local_d8,
                   (int *)(ulonglong)(pFVar3->RayTracingGroupId & 0x7fffffff));
    iVar14 = local_d8;
  }
  lVar2 = *(longlong *)this;
  uVar9 = local_d0->PackedIndex;
  uVar10 = 0;
  uVar11 = uVar10;
  if ((int)uVar9 < *(int *)(lVar2 + 0x2968)) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)(*(longlong *)(lVar2 + 0x2960) + (longlong)(int)uVar9 * 4) != iVar14) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scene->PrimitiveRayTracingGroupIds[SceneInfo->GetIndex()] == SceneRayTracingGroupId"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0x507,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = local_c8;
  CheckPrimitiveRayTracingData(pFVar1,local_c8);
  local_b8.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Materials.ArrayNum = 0;
  local_b8.Materials.ArrayMax = 0;
  local_b8.MaterialsView.DataPtr = (FMeshBatch *)0x0;
  lVar2 = *(longlong *)this;
  local_b8.MaterialsView.ArrayNum = 0;
  local_b8.bApplyLocalBoundsTransform = false;
  local_b8.bThinGeometry = false;
  local_b8.InstanceLayer = NearField;
  local_b8.bInstanceMaskAndFlagsDirty = true;
  local_b8.NumTransforms = 0;
  local_b8.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.PrimitiveInstanceIndices.ArrayNum = 0;
  local_b8.PrimitiveInstanceIndices.ArrayMax = 0;
  local_b8.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
  local_b8.PrimitiveInstanceIndicesView.ArrayNum = 0;
  local_b8.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.InstanceTransforms.ArrayNum = 0;
  local_b8.InstanceTransforms.ArrayMax = 0;
  local_b8.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
  local_b8.InstanceTransformsView.ArrayNum = 0;
  uVar9 = uVar10;
  if ((int)uVar12 < *(int *)(lVar2 + 0x2948)) {
    uVar9 = local_d4;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x2940);
  EVar8 = (**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_b8);
  pFVar6 = local_d0;
  *(ERayTracingPrimitiveFlags *)(lVar2 + lVar15) = EVar8;
  uVar12 = CacheRayTracingMeshCommands<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
                     (local_d0,&local_b8,EVar8,&param_1->Commands,&param_1->CommandContext,
                      &param_1->RayTracingMeshProcessor,&param_1->DeferredDatas);
  if ((*(byte *)(lVar2 + lVar15) & 0x10) != 0) {
    if ((int)uVar12 < (param_1->DeferredDatas).ArrayNum) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (param_1->DeferredDatas).AllocatorInstance.Data;
    FPrimitiveSceneInfo::SetupCachedRayTracingInstance
              (pFVar6,&local_b8,
               (FRayTracingGeometryInstance *)(pFVar4 + (longlong)(int)uVar12 * 0x90 + 0x30),
               (uint *)(pFVar4 + (longlong)(int)uVar12 * 0x90 + 0x88));
    pFVar4[(longlong)(int)uVar12 * 0x90 + 0x8c] = (FScriptContainerElement)0x1;
  }
  pFVar1->bCachedRaytracingDataDirty = false;
  if (local_b8.InstanceTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.InstanceTransforms.AllocatorInstance.Data);
  }
  if (local_b8.PrimitiveInstanceIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.PrimitiveInstanceIndices.AllocatorInstance.Data);
  }
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)local_b8.Materials.AllocatorInstance.Data,local_b8.Materials.ArrayNum);
  if ((FMeshBatch *)local_b8.Materials.AllocatorInstance.Data != (FMeshBatch *)0x0) {
    FMemory::Free(local_b8.Materials.AllocatorInstance.Data);
  }
  FTaskTagScope::~FTaskTagScope(&local_48);
  return;
}

// AddStaticMeshes @ 1452a4500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::AddStaticMeshes
          (FRHICommandListBase *param_1,FScene *param_2,
          TArrayView<FPrimitiveSceneInfo_*,int> *param_3,bool param_4)

{
  TSparseArray<FStaticMeshBatch_*,FDefaultSparseArrayAllocator> *this;
  int iVar1;
  int iVar2;
  FPrimitiveSceneInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FMeshBatchElement> FVar10;
  uint uVar11;
  ForElementType<FMeshBatchElement> FVar12;
  ForElementType<FMeshBatchElement> FVar13;
  longlong lVar14;
  bool bVar15;
  FLLMScope local_b4;
  Type local_b0;
  longlong local_a8;
  FPrimitiveSceneInfo **local_a0;
  FPrimitiveSceneInfo **local_98;
  FMemScope local_90;
  TArrayView<std::nullptr_t,int> local_88;
  <lambda_1> local_78;
  FSparseArrayAllocationInfo local_68;
  TArrayView<FPrimitiveSceneInfo_*,int> local_58;
  
  FLLMScope::FLLMScope(&local_b4,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_90,StaticMesh,true);
  local_88.DataPtr = (void **)0x0;
  local_88.ArrayNum = 0;
  local_78.Scene = param_2;
  local_78.SceneInfos = param_3;
  ParallelForImpl::
  ParallelForInternal<_FPrimitiveSceneInfo::AddStaticMeshes_::__l3::<lambda_1>,_ParallelForTemplate<_FPrimitiveSceneInfo::AddStaticMeshes_::__l3::<lambda_1>_>_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,&local_78,(<lambda_1>)param_4,None,&local_88);
  local_b0 = *(Type *)&param_2->field_0x8;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FPrimitiveSceneInfo_AddStaticMeshes_UpdateSceneArrays");
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1573,"FPrimitiveSceneInfo_AddStaticMeshes_UpdateSceneArrays"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x625);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1573);
  }
  local_a0 = param_3->DataPtr;
  local_98 = local_a0 + param_3->ArrayNum;
  if (local_a0 != local_98) {
    do {
      pFVar3 = *local_a0;
      bVar6 = OIT::IsSortedTrianglesEnabled(GMaxRHIShaderPlatform);
      if ((!bVar6) || (bVar6 = true, pFVar3->Proxy->bSupportsSortedTriangles == '\0')) {
        bVar6 = false;
      }
      uVar11 = 0;
      if (0 < (pFVar3->StaticMeshes).ArrayNum) {
        this = &param_2->StaticMeshes;
        local_a8 = 0;
        lVar14 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (pFVar3->StaticMeshRelevances).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pFVar3->StaticMeshRelevances).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar11 < (pFVar3->StaticMeshes).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar1 = *(int *)&(param_2->StaticMeshes).field_0x34;
          FVar12 = (ForElementType<FMeshBatchElement>)
                   ((longlong)(pFVar3->StaticMeshes).AllocatorInstance.Data + lVar14);
          if (iVar1 == 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,1,(ForAnyElementType *)this,
                               (int *)&(param_2->StaticMeshes).field_0x8,
                               (int *)&(param_2->StaticMeshes).field_0xc);
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->StaticMeshes).field_0x10,
                       false);
          }
          else {
            iVar9 = *(int *)&(param_2->StaticMeshes).field_0x30;
            iVar1 = iVar1 + -1;
            iVar2 = *(int *)(*(longlong *)&this->field_0x0 + 4 + (longlong)iVar9 * 8);
            *(int *)&(param_2->StaticMeshes).field_0x30 = iVar2;
            *(int *)&(param_2->StaticMeshes).field_0x34 = iVar1;
            if (iVar1 != 0) {
              *(undefined4 *)(*(longlong *)&this->field_0x0 + (longlong)iVar2 * 8) = 0xffffffff;
            }
          }
          TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::AllocateIndex
                    ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)this,&local_68,iVar9);
          *(ForElementType<FMeshBatchElement> *)
           (*(longlong *)&this->field_0x0 + (longlong)local_68.Index * 8) = FVar12;
          *(int *)((longlong)FVar12 + 0xe8) = local_68.Index;
          *(int *)(pFVar4 + local_a8 + 8) = local_68.Index;
          if ((bVar6) && (bVar7 = OIT::IsCompatible((FMeshBatch *)FVar12,local_b0), bVar7)) {
            if ((*(int *)((longlong)FVar12 + 0xa0) < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar10 = FVar12;
            if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar12 + 0x98) !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar10 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar12 + 0x98);
            }
            if ((*(int *)((longlong)FVar12 + 0xa0) < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar13 = FVar12;
            if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar12 + 0x98) !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar13 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar12 + 0x98);
            }
            FOITSceneData::Allocate
                      (&param_2->OITSceneData,param_1,
                       *(uint *)((longlong)FVar12 + 0xd4) >> 7 & (PT_Num|PT_TriangleStrip),
                       (FMeshBatchElement *)FVar13,
                       (FMeshBatchElementDynamicIndexBuffer *)((longlong)FVar10 + 0x20));
          }
          local_a8 = local_a8 + 0x18;
          uVar11 = uVar11 + 1;
          lVar14 = lVar14 + 0xf0;
        } while ((int)uVar11 < (pFVar3->StaticMeshes).ArrayNum);
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 != local_98);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (param_4) {
    local_58.DataPtr = param_3->DataPtr;
    local_58.ArrayNum = param_3->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
    CacheMeshDrawCommands(param_2,&local_58);
    CacheNaniteMaterialBins(param_2,param_3);
    CacheRayTracingPrimitives(param_2,param_3);
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(&local_b4);
  return;
}

// AddToScene @ 1452b0460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __cdecl
FPrimitiveSceneInfo::AddToScene(FScene *param_1,TArrayView<FPrimitiveSceneInfo_*,int> *param_2)

{
  int *piVar1;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar2;
  FSpanAllocator *pFVar3;
  FPrimitiveSceneInfo **ppFVar4;
  double dVar5;
  uchar uVar6;
  uchar auVar7 [8];
  FPrimitiveSceneProxy *pFVar8;
  FRHIResource *this;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar9;
  FPrimitiveSceneInfo *pFVar10;
  FScriptContainerElement *pFVar11;
  FPrimitiveSceneProxy *pFVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  TArrayView<FPrimitiveSceneInfo_*,int> *pTVar30;
  double dVar31;
  undefined8 uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  char cVar36;
  FStaticShaderPlatform FVar37;
  EShaderPlatform EVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  EShadingPath EVar42;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar43;
  FIndirectLightingCacheAllocation *pFVar44;
  FReflectionCaptureProxy *pFVar45;
  FPlanarReflectionSceneProxy *pFVar46;
  TMatrix<double> *pTVar47;
  FPrimitiveBounds *pFVar48;
  undefined4 *puVar49;
  TBoxSphereBounds<double,double> *pTVar50;
  FName *pFVar51;
  FThreadSafeStaticStat<FStat_STAT_PrimitiveInfoMemory> FVar52;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar53;
  byte bVar54;
  FScriptContainerElement FVar55;
  uint uVar56;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar57;
  ulonglong uVar58;
  FName FVar59;
  FPrimitiveSceneInfo **ppFVar60;
  FScriptContainerElement FVar61;
  FName FVar62;
  int iVar63;
  FName FVar64;
  longlong lVar65;
  bool bVar66;
  FScriptContainerElement FVar67;
  float fVar68;
  float fVar69;
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStackY_4b8 [32];
  FPrimitiveSceneInfo *local_448;
  FScriptContainerElement local_440;
  uchar local_438 [8];
  FName local_430;
  FName local_428;
  TArrayView<FPrimitiveSceneInfo_*,int> *local_420;
  FPrimitiveSceneInfo *local_418;
  uint local_410;
  undefined4 local_40c;
  TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> local_408;
  FPrimitiveSceneInfoCompact local_3f8;
  undefined1 local_3a8 [16];
  undefined1 local_398 [8];
  FName local_390;
  undefined1 local_388 [8];
  undefined1 local_380 [40];
  double dStack_358;
  double local_350;
  TVector4<float>_u_0 TStack_348;
  undefined1 local_338 [32];
  undefined1 local_318 [32];
  FName local_2f8 [2];
  undefined1 local_2e8 [32];
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  double local_288;
  double dStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  TVector<double>_u_0 local_260;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined1 local_228 [64];
  FIndirectLightingCacheUniformParameters local_1e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_420 = param_2;
  bVar33 = IsInRenderingThread();
  if ((!bVar33) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                          ,0x6e7,L""), bVar33)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"FPrimitiveSceneInfo_AddToScene");
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1768,"FPrimitiveSceneInfo_AddToScene",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x6e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1768);
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Turquoise,"FPrimitiveSceneInfo_AddToScene_IndirectLightingCacheUniformBuffer")
  ;
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1771,
               "FPrimitiveSceneInfo_AddToScene_IndirectLightingCacheUniformBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x6eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1771);
  }
  uVar32 = _UNK_150689648;
  uVar29 = ___xmm_3f800000000000000000000000000000;
  FVar64 = (FName)param_2->DataPtr;
  FVar62 = (FName)((longlong)FVar64 + (longlong)param_2->ArrayNum * 8);
  local_428 = FVar64;
  local_430 = FVar62;
  for (; FVar64 != FVar62; FVar64 = (FName)((longlong)FVar64 + 8)) {
    auVar7 = *(uchar (*) [8])FVar64;
    pFVar8 = *(FPrimitiveSceneProxy **)((longlong)auVar7 + 8);
    bVar34 = IsIndirectLightingCacheAllowed(*(Type *)&param_1->field_0x8);
    if ((((bVar34) && (pFVar8->bWillEverBeLit != 0)) &&
        ((((pFVar8->bStaticLighting != '\0' && (pFVar8->bNeedsUnbuiltPreviewLighting != '\0')) ||
          (((uVar6 = (pFVar8->Mobility).Value, uVar6 == '\x02' || (uVar6 == '\x01')) &&
           ((pFVar8->IndirectLightingCacheQuality).Value != '\0')))) ||
         (pFVar8->LightmapType == ForceVolumetric)))) &&
       (TVar2 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
                ((longlong)auVar7 + 0xf0), *(longlong *)TVar2 == 0)) {
      local_2e8._16_8_ = 0.0;
      local_1e8.PointSkyBentNormal.field0_0x0._0_8_ = uVar29;
      local_1e8.PointSkyBentNormal.field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHCoefficients0.Elements[0].field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHCoefficients0.Elements[0].field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHCoefficients0.Elements[1].field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHCoefficients0.Elements[1].field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHCoefficients0.Elements[2].field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHCoefficients0.Elements[2].field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHCoefficients1.Elements[0].field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHCoefficients1.Elements[0].field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHCoefficients1.Elements[1].field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHCoefficients1.Elements[1].field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHCoefficients1.Elements[2].field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHCoefficients1.Elements[2].field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHCoefficients2.field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHCoefficients2.field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingSHSingleCoefficient.field0_0x0._0_8_ = uVar29;
      local_1e8.IndirectLightingSHSingleCoefficient.field0_0x0._8_8_ = uVar32;
      local_1e8.IndirectLightingCacheTexture0 = (FRHITexture *)0x0;
      local_1e8.IndirectLightingCacheTexture1 = (FRHITexture *)0x0;
      local_1e8.IndirectLightingCacheTexture2 = (FRHITexture *)0x0;
      local_1e8.IndirectLightingCacheTextureSampler0 = (FRHISamplerState *)0x0;
      local_1e8.IndirectLightingCacheTextureSampler1 = (FRHISamplerState *)0x0;
      local_1e8.IndirectLightingCacheTextureSampler2 = (FRHISamplerState *)0x0;
      local_2e8._0_8_ = 0.0;
      local_2e8._8_8_ = 0.0;
      GetIndirectLightingCacheParameters
                (*(Type *)&param_1->field_0x8,&local_1e8,(FIndirectLightingCache *)0x0,
                 (FIndirectLightingCacheAllocation *)0x0,(TVector<double> *)local_2e8,0,
                 (FVolumetricLightmapSceneData *)0x0);
      TVar43 = TUniformBufferRef<FIndirectLightingCacheUniformParameters>::
               CreateUniformBufferImmediate
                         ((FIndirectLightingCacheUniformParameters *)local_3a8,
                          (EUniformBufferUsage)&local_1e8,2);
      if (TVar2 != TVar43) {
        this = *(FRHIResource **)TVar2;
        *(longlong *)TVar2 = *(longlong *)TVar43;
        *(undefined8 *)TVar43 = 0;
        if (this != (FRHIResource *)0x0) {
          FRHIResource::Release(this);
        }
      }
      if ((FRHIResource *)local_3a8._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_3a8._0_8_);
      }
    }
    *(byte *)((longlong)auVar7 + 0x1a2) = *(byte *)((longlong)auVar7 + 0x1a2) & 0xdf;
  }
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Orange,"FPrimitiveSceneInfo_AddToScene_IndirectLightingCacheAllocation");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1802,
               "FPrimitiveSceneInfo_AddToScene_IndirectLightingCacheAllocation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x70a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1802);
  }
  FVar64 = local_428;
  FVar59 = local_428;
  if (local_428 != FVar62) {
    do {
      auVar7 = *(uchar (*) [8])FVar59;
      if ((((*(FPrimitiveSceneProxy **)((longlong)auVar7 + 8))->bStaticLighting != '\0') &&
          ((*(FPrimitiveSceneProxy **)((longlong)auVar7 + 8))->bNeedsUnbuiltPreviewLighting != '\0')
          ) && (bVar34 = IsIndirectLightingCacheAllowed(*(Type *)&param_1->field_0x8), bVar34)) {
        pFVar44 = FIndirectLightingCache::FindPrimitiveAllocation
                            (&param_1->IndirectLightingCache,
                             (FPrimitiveComponentId)
                             ((FPrimitiveComponentId *)((longlong)auVar7 + 0x10))->PrimIDValue);
        if (pFVar44 == (FIndirectLightingCacheAllocation *)0x0) {
          pFVar44 = FIndirectLightingCache::AllocatePrimitive
                              (&param_1->IndirectLightingCache,(FPrimitiveSceneInfo *)auVar7,true);
          pFVar44->bIsDirty = true;
          *(FIndirectLightingCacheAllocation **)((longlong)auVar7 + 0xe8) = pFVar44;
          FVar62 = local_430;
        }
        else {
          *(FIndirectLightingCacheAllocation **)((longlong)auVar7 + 0xe8) = pFVar44;
          pFVar44->bIsDirty = true;
          FVar62 = local_430;
        }
      }
      if ((*(byte *)((longlong)auVar7 + 0x1a2) & 2) == 0) {
        *(byte *)((longlong)auVar7 + 0x1a2) = *(byte *)((longlong)auVar7 + 0x1a2) | 2;
      }
      FVar59 = (FName)((longlong)FVar59 + 8);
    } while (FVar59 != FVar62);
  }
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Green,"FPrimitiveSceneInfo_AddToScene_LightmapDataOffset");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1831,"FPrimitiveSceneInfo_AddToScene_LightmapDataOffset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x727);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1831);
  }
  if (FVar64 != FVar62) {
    do {
      auVar7 = *(uchar (*) [8])FVar64;
      local_438 = auVar7;
      if (FReadOnlyCVARCache::bAllowStaticLighting != false) {
        iVar39 = UpdateStaticLightingBuffer((FPrimitiveSceneInfo *)auVar7);
        *(int *)((longlong)auVar7 + 0x238) = iVar39;
        if ((0 < iVar39) &&
           (bVar34 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                                 (FGenericStaticFeatureLevel)*(Type *)&param_1->field_0x8), bVar34))
        {
          iVar39 = *(int *)((longlong)auVar7 + 0x238);
          uVar40 = FSpanAllocator::SearchFreeList
                             (&(param_1->GPUScene).LightmapDataAllocator,iVar39,
                              (param_1->GPUScene).LightmapDataAllocator.FirstNonEmptySpan);
          if ((uVar40 == 0xffffffff) &&
             ((param_1->GPUScene).LightmapDataAllocator.PendingFreeSpans.ArrayNum != 0)) {
            FSpanAllocator::Consolidate(&(param_1->GPUScene).LightmapDataAllocator);
            uVar40 = FSpanAllocator::SearchFreeList
                               (&(param_1->GPUScene).LightmapDataAllocator,iVar39,
                                (param_1->GPUScene).LightmapDataAllocator.FirstNonEmptySpan);
          }
          pFVar3 = &(param_1->GPUScene).LightmapDataAllocator;
          pFVar3->CurrentSize = pFVar3->CurrentSize + iVar39;
          if (uVar40 == 0xffffffff) {
            iVar63 = (param_1->GPUScene).LightmapDataAllocator.PeakMaxSize;
            uVar40 = (param_1->GPUScene).LightmapDataAllocator.CurrentMaxSize;
            uVar58 = (ulonglong)uVar40;
            iVar39 = uVar40 + iVar39;
            (param_1->GPUScene).LightmapDataAllocator.CurrentMaxSize = iVar39;
            if (iVar39 < iVar63) {
              iVar39 = iVar63;
            }
            (param_1->GPUScene).LightmapDataAllocator.PeakMaxSize = iVar39;
            local_428 = FVar64;
          }
          else {
            FVar57 = (ForElementType<FSpanAllocator::FLinearAllocation>)
                     &(param_1->GPUScene).LightmapDataAllocator.FreeSpans;
            uVar41 = 0;
            if ((int)uVar40 < (param_1->GPUScene).LightmapDataAllocator.FreeSpans.ArrayNum) {
              uVar41 = ~uVar40 >> 0x1f;
            }
            local_3a8._8_8_ = FVar57;
            if ((uVar41 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            FVar9 = (param_1->GPUScene).LightmapDataAllocator.FreeSpans.AllocatorInstance.
                    SecondaryData;
            if (FVar9 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
              FVar57 = FVar9;
            }
            uVar58 = *(ulonglong *)((longlong)FVar57 + (longlong)(int)uVar40 * 8);
            iVar63 = (int)(uVar58 >> 0x20);
            local_398 = (undefined1  [8])CONCAT44(iVar63 - iVar39,(int)uVar58 + iVar39);
            uVar41 = 0;
            if ((int)uVar40 < (param_1->GPUScene).LightmapDataAllocator.FreeSpans.ArrayNum) {
              uVar41 = ~uVar40 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            FVar57 = *(ForElementType<FSpanAllocator::FLinearAllocation> *)(local_3a8._8_8_ + 0x50);
            if (FVar57 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
              FVar57 = (ForElementType<FSpanAllocator::FLinearAllocation>)local_3a8._8_8_;
            }
            *(undefined1 (*) [8])((longlong)FVar57 + (longlong)(int)uVar40 * 8) = local_398;
            if ((iVar63 == iVar39) &&
               ((param_1->GPUScene).LightmapDataAllocator.FirstNonEmptySpan == uVar40)) {
              (param_1->GPUScene).LightmapDataAllocator.FirstNonEmptySpan = uVar40 + 1;
            }
          }
          *(int *)((longlong)local_438 + 0x234) = (int)uVar58;
          FVar62 = local_430;
          FVar64 = local_428;
        }
      }
      FVar64 = (FName)((longlong)FVar64 + 8);
      local_428 = FVar64;
    } while (FVar64 != FVar62);
  }
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Yellow,"FPrimitiveSceneInfo_AddToScene_ReflectionCaptures");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1848,"FPrimitiveSceneInfo_AddToScene_ReflectionCaptures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x738);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1848);
  }
  ppFVar60 = local_420->DataPtr;
  ppFVar4 = ppFVar60 + local_420->ArrayNum;
  pTVar30 = local_420;
  do {
    local_420 = pTVar30;
    if (ppFVar60 == ppFVar4) {
      if (bVar66) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      EVar38 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
      bVar66 = ShouldSkipNaniteLPIs(EVar38);
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Red,"FPrimitiveSceneInfo_AddToScene_AddToPrimitiveOctree");
      bVar34 = -1 < CpuChannel->Enabled;
      if (bVar34) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1861,
                   "FPrimitiveSceneInfo_AddToScene_AddToPrimitiveOctree",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x745);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1861);
      }
      ppFVar60 = pTVar30->DataPtr;
      ppFVar4 = ppFVar60 + local_420->ArrayNum;
      for (; ppFVar60 != ppFVar4; ppFVar60 = ppFVar60 + 1) {
        pFVar10 = *ppFVar60;
        if ((!bVar66) || (pFVar10->Proxy->bIsNaniteMesh == '\0')) {
          local_3f8.Proxy = pFVar10->Proxy;
          bVar54 = (byte)local_3f8.PrimitiveFlagsCompact ^
                   ((local_3f8.Proxy)->bCastDynamicShadow ^ (byte)local_3f8.PrimitiveFlagsCompact) &
                   1;
          bVar54 = ((byte)(local_3f8.Proxy)->field_0x7a >> 5 ^ bVar54) & 2 ^ bVar54;
          bVar54 = ((byte)(local_3f8.Proxy)->field_0x7d >> 5 ^ bVar54) & 4 ^ bVar54;
          bVar54 = ((local_3f8.Proxy)->field_0x81 << 2 ^ bVar54) & 8 ^ bVar54;
          bVar54 = ((local_3f8.Proxy)->field_0x81 << 2 ^ bVar54) & 0x10 ^ bVar54;
          local_3f8.PrimitiveFlagsCompact =
               (FPrimitiveFlagsCompact)
               (((byte)(local_3f8.Proxy)->field_0x81 >> 1 ^ bVar54) & 0x20 ^ bVar54);
          local_3f8.Bounds.Origin.field0_0x0._s_0.X =
               ((local_3f8.Proxy)->Bounds).Origin.field0_0x0._s_0.X;
          local_3f8.Bounds.Origin.field0_0x0._s_0.Y =
               ((local_3f8.Proxy)->Bounds).Origin.field0_0x0._s_0.Y;
          local_3f8.Bounds.Origin.field0_0x0._16_4_ =
               *(undefined4 *)((longlong)&((local_3f8.Proxy)->Bounds).Origin.field0_0x0 + 0x10);
          local_3f8.Bounds.Origin.field0_0x0._20_4_ =
               *(undefined4 *)((longlong)&((local_3f8.Proxy)->Bounds).Origin.field0_0x0 + 0x14);
          local_3f8.Bounds.BoxExtent.field0_0x0._s_0.X =
               (float)((local_3f8.Proxy)->Bounds).BoxExtent.field0_0x0._s_0.X;
          local_3f8.Bounds.BoxExtent.field0_0x0._s_0.Y =
               (float)((local_3f8.Proxy)->Bounds).BoxExtent.field0_0x0._s_0.Y;
          fVar68 = (float)((local_3f8.Proxy)->Bounds).BoxExtent.field0_0x0._s_0.Z;
          fVar69 = (float)((local_3f8.Proxy)->Bounds).SphereRadius;
          local_3f8.Bounds.SphereRadius = fVar69;
          local_3f8.Bounds.BoxExtent.field0_0x0._s_0.Z = fVar68;
          local_268 = CONCAT44(fVar69,fVar68);
          local_3f8.MinDrawDistance = (local_3f8.Proxy)->MinDrawDistance;
          local_3f8.MaxDrawDistance = (local_3f8.Proxy)->MaxDrawDistance;
          local_3f8.VisibilityId = (local_3f8.Proxy)->VisibilityId;
          local_3f8.PrimitiveSceneInfo = pFVar10;
          local_288 = local_3f8.Bounds.Origin.field0_0x0._s_0.X;
          dStack_280 = local_3f8.Bounds.Origin.field0_0x0._s_0.Y;
          local_278 = local_3f8.Bounds.Origin.field0_0x0._16_4_;
          uStack_274 = local_3f8.Bounds.Origin.field0_0x0._20_4_;
          fStack_270 = local_3f8.Bounds.BoxExtent.field0_0x0._s_0.X;
          fStack_26c = local_3f8.Bounds.BoxExtent.field0_0x0._s_0.Y;
          if (((pFVar10->OctreeId).NodeIndex != 0xffffffff) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!SceneInfo->OctreeId.IsValidId()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                                  ,0x74f,L""), bVar35)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_338._0_8_ = local_3f8.Bounds.Origin.field0_0x0._s_0.X;
          local_338._8_8_ = local_3f8.Bounds.Origin.field0_0x0._s_0.Y;
          local_338._16_8_ =
               CONCAT44(local_3f8.Bounds.Origin.field0_0x0._20_4_,
                        local_3f8.Bounds.Origin.field0_0x0._16_4_);
          local_318._0_8_ = (undefined8)local_3f8.Bounds.BoxExtent.field0_0x0._s_0.X;
          local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_408.ArrayNum = 0;
          local_408.ArrayMax = 0;
          local_318._8_8_ = (undefined8)local_3f8.Bounds.BoxExtent.field0_0x0._s_0.Y;
          local_318._16_8_ = (undefined8)local_3f8.Bounds.BoxExtent.field0_0x0._s_0.Z;
          local_318._24_8_ = 0;
          local_338._24_8_ = 0;
          TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::AddElementInternal
                    (&param_1->PrimitiveOctree,0,&(param_1->PrimitiveOctree).RootNodeContext,
                     (FBoxCenterAndExtent *)local_338,&local_3f8,&local_408);
          if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.AllocatorInstance.Data);
          }
          if (((pFVar10->OctreeId).NodeIndex == 0xffffffff) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SceneInfo->OctreeId.IsValidId()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                                  ,0x751,L""), bVar35)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
      }
      if (bVar34) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Cyan,"FPrimitiveSceneInfo_AddToScene_UpdateBounds");
      bVar66 = -1 < CpuChannel->Enabled;
      if (bVar66) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1879,"FPrimitiveSceneInfo_AddToScene_UpdateBounds",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x757);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1879);
      }
      dVar31 = __real_3ff0000000000000;
      local_430 = (FName)local_420->DataPtr;
      ppFVar4 = (FPrimitiveSceneInfo **)((longlong)local_430 + (longlong)local_420->ArrayNum * 8);
      FVar61 = local_440;
      pTVar30 = local_420;
      while( true ) {
        local_420 = pTVar30;
        if (local_430 == (FName)ppFVar4) {
          if (bVar66) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          FGenericPlatformMisc::EndNamedEvent();
          FGenericPlatformMisc::BeginNamedEvent
                    (&FColor::Blue,"FPrimitiveSceneInfo_AddToScene_LevelNotifyPrimitives");
          bVar66 = -1 < CpuChannel->Enabled;
          if (bVar66) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1941,
                       "FPrimitiveSceneInfo_AddToScene_LevelNotifyPrimitives",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                       ,0x795);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1941);
          }
          ppFVar60 = pTVar30->DataPtr;
          ppFVar4 = ppFVar60 + pTVar30->ArrayNum;
          do {
            if (ppFVar60 == ppFVar4) {
              if (bVar66) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              FGenericPlatformMisc::EndNamedEvent();
              if (bVar33) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              FGenericPlatformMisc::EndNamedEvent();
              return;
            }
            local_418 = *ppFVar60;
            if ((bool)local_418->Proxy->bShouldNotifyOnWorldAddRemove) {
              FVar62 = local_418->Proxy->LevelName;
              local_388 = (undefined1  [8])FVar62;
              uVar40 = ::GetTypeHash(FVar62.ComparisonIndex.Value);
              pTVar53 = TMapBase<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,0>_>
                        ::FindOrAddImpl<FName>
                                  ((TMapBase<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&param_1->PrimitivesNeedingLevelUpdateNotification,
                                   FVar62.Number + uVar40,(FName *)local_388);
              local_418->LevelUpdateNotificationIndex = pTVar53->ArrayNum;
              pFVar11 = (pTVar53->AllocatorInstance).Data;
              if (((pFVar11 <= (FScriptContainerElement *)&local_418) &&
                  ((FScriptContainerElement *)&local_418 < pFVar11 + (longlong)pTVar53->ArrayMax * 8
                  )) && (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar34)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar39 = pTVar53->ArrayNum;
              if (iVar39 == pTVar53->ArrayMax) {
                iVar39 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar53->AllocatorInstance,&pTVar53->ArrayMax);
              }
              pTVar53->ArrayNum = iVar39 + 1;
              *(FPrimitiveSceneInfo **)((pTVar53->AllocatorInstance).Data + (longlong)iVar39 * 8) =
                   local_418;
            }
            ppFVar60 = ppFVar60 + 1;
          } while( true );
        }
        local_448 = *(FPrimitiveSceneInfo **)local_430;
        pFVar8 = local_448->Proxy;
        uVar40 = local_448->PackedIndex;
        lVar65 = (longlong)(int)uVar40;
        if (pFVar8->bCastsDynamicIndirectShadow != '\0') {
          pTVar53 = &param_1->DynamicIndirectCasterPrimitives;
          pFVar11 = (pTVar53->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_448) &&
              ((FScriptContainerElement *)&local_448 <
               pFVar11 + (longlong)(param_1->DynamicIndirectCasterPrimitives).ArrayMax * 8)) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar34)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar39 = (param_1->DynamicIndirectCasterPrimitives).ArrayNum;
          piVar1 = &(param_1->DynamicIndirectCasterPrimitives).ArrayMax;
          if (iVar39 == *piVar1) {
            iVar39 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar53->AllocatorInstance,piVar1);
          }
          (param_1->DynamicIndirectCasterPrimitives).ArrayNum = iVar39 + 1;
          *(FPrimitiveSceneInfo **)((pTVar53->AllocatorInstance).Data + (longlong)iVar39 * 8) =
               local_448;
        }
        uVar56 = ~uVar40 >> 0x1f;
        uVar41 = 0;
        if ((int)uVar40 < (param_1->PrimitiveSceneProxies).ArrayNum) {
          uVar41 = uVar56;
        }
        if ((uVar41 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *(FPrimitiveSceneProxy **)
         ((param_1->PrimitiveSceneProxies).AllocatorInstance.Data + lVar65 * 8) = pFVar8;
        dVar5 = (pFVar8->LocalToWorld).M[0][0];
        dVar15 = (pFVar8->LocalToWorld).M[0][1];
        dVar16 = (pFVar8->LocalToWorld).M[0][2];
        dVar70 = (pFVar8->LocalToWorld).M[0][3];
        dVar17 = (pFVar8->LocalToWorld).M[1][0];
        dVar18 = (pFVar8->LocalToWorld).M[1][1];
        dVar19 = (pFVar8->LocalToWorld).M[1][2];
        dVar20 = (pFVar8->LocalToWorld).M[1][3];
        dVar21 = (pFVar8->LocalToWorld).M[2][0];
        dVar22 = (pFVar8->LocalToWorld).M[2][1];
        dVar23 = (pFVar8->LocalToWorld).M[2][2];
        dVar24 = (pFVar8->LocalToWorld).M[2][3];
        dVar25 = (pFVar8->LocalToWorld).M[3][0];
        dVar26 = (pFVar8->LocalToWorld).M[3][1];
        dVar27 = (pFVar8->LocalToWorld).M[3][2];
        dVar28 = (pFVar8->LocalToWorld).M[3][3];
        pTVar47 = TScenePrimitiveArray<UE::Math::TMatrix<double>_>::Get
                            (&param_1->PrimitiveTransforms,uVar40);
        pTVar47->M[0][0] = dVar5;
        pTVar47->M[0][1] = dVar15;
        pTVar47->M[0][2] = dVar16;
        pTVar47->M[0][3] = dVar70;
        pTVar47->M[1][0] = dVar17;
        pTVar47->M[1][1] = dVar18;
        pTVar47->M[1][2] = dVar19;
        pTVar47->M[1][3] = dVar20;
        pTVar47->M[2][0] = dVar21;
        pTVar47->M[2][1] = dVar22;
        pTVar47->M[2][2] = dVar23;
        pTVar47->M[2][3] = dVar24;
        pTVar47->M[3][0] = dVar25;
        pTVar47->M[3][1] = dVar26;
        pTVar47->M[3][2] = dVar27;
        pTVar47->M[3][3] = dVar28;
        pFVar48 = TScenePrimitiveArray<FPrimitiveBounds>::Get(&param_1->PrimitiveBounds,uVar40);
        uVar71 = *(undefined4 *)&(pFVar8->Bounds).Origin.field0_0x0;
        uVar72 = *(undefined4 *)((longlong)&(pFVar8->Bounds).Origin.field0_0x0 + 4);
        uVar73 = *(undefined4 *)((longlong)&(pFVar8->Bounds).Origin.field0_0x0 + 8);
        uVar74 = *(undefined4 *)((longlong)&(pFVar8->Bounds).Origin.field0_0x0 + 0xc);
        uVar29 = *(undefined8 *)((longlong)&(pFVar8->Bounds).Origin.field0_0x0 + 0x10);
        dVar15 = (pFVar8->Bounds).BoxExtent.field0_0x0._s_0.X;
        dVar16 = (pFVar8->Bounds).BoxExtent.field0_0x0._s_0.Y;
        dVar70 = (pFVar8->Bounds).BoxExtent.field0_0x0._s_0.Z;
        dVar5 = (pFVar8->Bounds).SphereRadius;
        *(undefined4 *)&(pFVar48->BoxSphereBounds).Origin.field0_0x0 = uVar71;
        *(undefined4 *)((longlong)&(pFVar48->BoxSphereBounds).Origin.field0_0x0 + 4) = uVar72;
        *(undefined4 *)((longlong)&(pFVar48->BoxSphereBounds).Origin.field0_0x0 + 8) = uVar73;
        *(undefined4 *)((longlong)&(pFVar48->BoxSphereBounds).Origin.field0_0x0 + 0xc) = uVar74;
        *(undefined8 *)((longlong)&(pFVar48->BoxSphereBounds).Origin.field0_0x0 + 0x10) = uVar29;
        (pFVar48->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X = dVar15;
        (pFVar48->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y = dVar16;
        (pFVar48->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z = dVar70;
        (pFVar48->BoxSphereBounds).SphereRadius = dVar5;
        pFVar48->MinDrawDistance = pFVar8->MinDrawDistance;
        fVar68 = pFVar8->MaxDrawDistance;
        pFVar48->MaxDrawDistance = fVar68;
        pFVar48->MaxCullDistance = fVar68;
        FVar61 = (FScriptContainerElement)
                 ((byte)((pFVar8->field_0x7a & 0x40 | pFVar8->field_0x7d & 0x9f) >> 4 |
                         pFVar8->field_0x7d & 2 | pFVar8->field_0x81 & 0x40) >> 1 |
                  (pFVar8->field_0x81 & 6) << 2 | (byte)FVar61 & 0xc0);
        uVar41 = 0;
        if ((int)uVar40 < (param_1->PrimitiveFlagsCompact).ArrayNum) {
          uVar41 = uVar56;
        }
        if ((uVar41 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        (param_1->PrimitiveFlagsCompact).AllocatorInstance.Data[lVar65] = FVar61;
        iVar39 = pFVar8->VisibilityId;
        uVar41 = 0;
        if ((int)uVar40 < (param_1->PrimitiveVisibilityIds).ArrayNum) {
          uVar41 = uVar56;
        }
        if ((uVar41 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) break;
        pFVar10 = local_448;
        pFVar11 = (param_1->PrimitiveVisibilityIds).AllocatorInstance.Data;
        *(int *)(pFVar11 + lVar65 * 8) = (int)(iVar39 + (iVar39 >> 0x1f & 7U)) >> 3;
        pFVar11[lVar65 * 8 + 4] = (FScriptContainerElement)('\x01' << ((byte)iVar39 & 7));
        if ((local_448->PackedIndex != -1) && (local_448->PackedIndex != 0x7fffffff)) {
          FVar67 = (FScriptContainerElement)0x0;
          cVar36 = (**(code **)(local_448->Proxy->_padding_ + 0x138))();
          if (cVar36 != '\0') {
            FVar67 = (FScriptContainerElement)(pFVar10->Proxy->bIsFirstPerson == 0);
          }
          cVar36 = (**(code **)(pFVar10->Proxy->_padding_ + 0x150))();
          pFVar12 = pFVar10->Proxy;
          FVar55 = (FScriptContainerElement)((byte)FVar67 | 0x10);
          if (cVar36 == '\0') {
            FVar55 = FVar67;
          }
          if ((pFVar12->bAllowApproximateOcclusion != '\0') ||
             ((pFVar10->LightingAttachmentRoot).PrimIDValue != 0)) {
            FVar55 = (FScriptContainerElement)((byte)FVar55 | 4);
          }
          FVar67 = (FScriptContainerElement)((byte)FVar55 | 8);
          if (pFVar12->VisibilityId < 0) {
            FVar67 = FVar55;
          }
          FVar55 = (FScriptContainerElement)((byte)FVar67 | 0x20);
          if (pFVar12->bForceHidden == '\0') {
            FVar55 = FVar67;
          }
          local_438 = (uchar  [8])pFVar10->Scene;
          uVar41 = pFVar10->PackedIndex;
          uVar56 = 0;
          if ((int)uVar41 < *(int *)((longlong)local_438 + 0x2910)) {
            uVar56 = ~uVar41 >> 0x1f;
          }
          if ((uVar56 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)local_438 + 0x2908))->
          AllocatorInstance).Data[(int)uVar41] = FVar55;
        }
        local_380._32_8_ = uVar29;
        dStack_358 = dVar15;
        local_350 = dVar16;
        TStack_348._0_8_ = dVar70;
        TStack_348._8_8_ = dVar5;
        cVar36 = (**(code **)(pFVar8->_padding_ + 0x188))(pFVar8);
        if (cVar36 != '\0') {
          puVar49 = (undefined4 *)(**(code **)(pFVar8->_padding_ + 400))(pFVar8,local_228);
          local_380._32_8_ = *(undefined8 *)(puVar49 + 4);
          dStack_358 = *(double *)(puVar49 + 6);
          local_350 = *(double *)(puVar49 + 8);
          TStack_348._0_8_ = *(undefined8 *)(puVar49 + 10);
          uVar71 = *puVar49;
          uVar72 = puVar49[1];
          uVar73 = puVar49[2];
          uVar74 = puVar49[3];
          TStack_348._8_8_ = *(undefined8 *)(puVar49 + 0xc);
        }
        dVar5 = dStack_358 + dVar31;
        dVar15 = local_350 + dVar31;
        dVar70 = (double)TStack_348._0_8_ + dVar31;
        dVar16 = (double)TStack_348._8_8_ + dVar31;
        pTVar50 = TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Get
                            (&param_1->PrimitiveOcclusionBounds,uVar40);
        *(undefined4 *)&(pTVar50->Origin).field0_0x0 = uVar71;
        *(undefined4 *)((longlong)&(pTVar50->Origin).field0_0x0 + 4) = uVar72;
        *(undefined4 *)((longlong)&(pTVar50->Origin).field0_0x0 + 8) = uVar73;
        *(undefined4 *)((longlong)&(pTVar50->Origin).field0_0x0 + 0xc) = uVar74;
        *(undefined4 *)((longlong)&(pTVar50->Origin).field0_0x0 + 0x10) = local_380._32_4_;
        *(undefined4 *)((longlong)&(pTVar50->Origin).field0_0x0 + 0x14) = local_380._36_4_;
        (pTVar50->BoxExtent).field0_0x0._s_0.X = dVar5;
        auVar14._8_4_ = SUB84(dVar70,0);
        auVar14._0_8_ = dVar15;
        auVar14._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
        *(undefined1 (*) [16])((longlong)&(pTVar50->BoxExtent).field0_0x0 + 8) = auVar14;
        pTVar50->SphereRadius = dVar16;
        uVar41 = 0;
        if ((int)uVar40 < (param_1->PrimitiveComponentIds).ArrayNum) {
          uVar41 = ~uVar40 >> 0x1f;
        }
        uVar56 = (local_448->PrimitiveComponentId).PrimIDValue;
        dStack_358 = dVar5;
        TStack_348._8_8_ = dVar16;
        if ((uVar41 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *(uint *)((param_1->PrimitiveComponentIds).AllocatorInstance.Data + lVar65 * 4) = uVar56;
        local_410 = local_448->Proxy->RayTracingGroupId;
        if (local_410 != 0xffffffff) {
          Experimental::RobinHoodHashTable_Private::
          TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
          ::FindIdByHash((TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
                          *)&param_1->PrimitiveRayTracingGroups,(FHashType)(uint)&local_40c,
                         (int *)(ulonglong)(local_410 & 0x7fffffff));
          uVar71 = local_40c;
          uVar41 = 0;
          if ((int)uVar40 < (param_1->PrimitiveRayTracingGroupIds).ArrayNum) {
            uVar41 = ~uVar40 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          *(undefined4 *)
           ((param_1->PrimitiveRayTracingGroupIds).AllocatorInstance.Data + lVar65 * 4) = uVar71;
        }
        iVar39 = (local_448->StaticMeshRelevances).ArrayMax;
        iVar63 = (local_448->StaticMeshes).ArrayMax;
        uVar40 = (**(code **)(pFVar8->_padding_ + 0x168))(pFVar8);
        local_438 = (uchar  [8])
                    ((ulonglong)uVar40 + 600 + (longlong)iVar39 * 0x18 + (longlong)iVar63 * 0xf0);
        if (local_438 != (uchar  [8])0x0) {
          FVar52 = StatPtr_STAT_PrimitiveInfoMemory;
          if (StatPtr_STAT_PrimitiveInfoMemory ==
              (FThreadSafeStaticStat<FStat_STAT_PrimitiveInfoMemory>)0x0) {
            pFVar51 = ::FName::FName(local_2f8,"STAT_PrimitiveInfoMemory");
            FVar52 = (FThreadSafeStaticStat<FStat_STAT_PrimitiveInfoMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveInfoMemory,
                                *pFVar51,L"Primitive memory","STATGROUP_SceneMemory",
                                "STATCAT_Advanced",L"Scene Memory",true,false,ST_int64,false,false,
                                MCR_Physical);
          }
          FVar62 = *(FName *)FVar52;
          local_428 = FVar62;
          if (((FVar62 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            auVar7 = local_438;
            local_380._12_4_ = FVar62.Number & 0xffffafff | 0xa000;
            local_380[0] = local_438[0];
            local_380[1] = local_438[1];
            local_380[2] = local_438[2];
            local_380[3] = local_438[3];
            local_380[4] = local_438[4];
            local_380[5] = local_438[5];
            local_380[6] = local_438[6];
            local_380[7] = local_438[7];
            local_390 = FVar62;
            local_380._8_4_ = FVar62.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_380);
            FStatsTrace::Add(&local_390,(long64)auVar7);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
        local_430 = (FName)((longlong)local_430 + 8);
        pTVar30 = local_420;
      }
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar10 = *ppFVar60;
    if (pFVar10->bNeedsCachedReflectionCaptureUpdate) {
      EVar42 = FSceneInterface::GetShadingPath(*(Type *)&pFVar10->Scene->field_0x8);
      if (EVar42 != Mobile) {
        FVar37.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)pFVar10->Scene);
        bVar34 = IsForwardShadingEnabled(FVar37);
        if (!bVar34) goto LAB_1452b0c32;
      }
      pFVar8 = pFVar10->Proxy;
      local_2c8._s_0.X = (pFVar8->Bounds).Origin.field0_0x0._s_0.X;
      local_2c8._s_0.Y = (pFVar8->Bounds).Origin.field0_0x0._s_0.Y;
      local_2c8._s_0.Z = (pFVar8->Bounds).Origin.field0_0x0._s_0.Z;
      dStack_248 = (pFVar8->Bounds).BoxExtent.field0_0x0._s_0.X;
      local_240 = (pFVar8->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dStack_238 = (pFVar8->Bounds).BoxExtent.field0_0x0._s_0.Z;
      local_230 = (pFVar8->Bounds).SphereRadius;
      local_260._s_0.X = local_2c8._s_0.X;
      local_260._s_0.Y = local_2c8._s_0.Y;
      local_260._s_0.Z = local_2c8._s_0.Z;
      pFVar45 = FScene::FindClosestReflectionCapture
                          (pFVar10->Scene,(TVector<double> *)&local_2c8._s_0);
      pFVar10->CachedReflectionCaptureProxy = pFVar45;
      pFVar46 = FScene::FindClosestPlanarReflection
                          (pFVar10->Scene,(TBoxSphereBounds<double,double> *)&local_260._s_0);
      pFVar10->CachedPlanarReflectionProxy = pFVar46;
      EVar42 = FSceneInterface::GetShadingPath(*(Type *)&pFVar10->Scene->field_0x8);
      if (EVar42 == Mobile) {
        local_2a8._s_0.X = local_260._s_0.X;
        local_2a8._s_0.Y = local_260._s_0.Y;
        local_2a8._s_0.Z = local_260._s_0.Z;
        FScene::FindClosestReflectionCaptures
                  (pFVar10->Scene,(TVector<double> *)&local_2a8._s_0,
                   &pFVar10->CachedReflectionCaptureProxies);
      }
      pFVar10->bNeedsCachedReflectionCaptureUpdate = false;
    }
LAB_1452b0c32:
    ppFVar60 = ppFVar60 + 1;
    pTVar30 = local_420;
  } while( true );
}

// AllocateGPUSceneInstances @ 1452b4de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::AllocateGPUSceneInstances
          (FScene *param_1,TArrayView<FPrimitiveSceneInfo_*,int> *param_2)

{
  int *piVar1;
  FPrimitiveSceneInfo **ppFVar2;
  FPrimitiveSceneInfo *pFVar3;
  FInstanceDataUpdateTaskInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime> FVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FPrimitiveSceneInfo **ppFVar16;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_a8;
  FInstanceDataBufferHeader local_a0;
  FName local_90;
  FStatMessage local_80;
  FLumenSceneDataIterator local_70;
  
  if ((param_1->GPUScene).bIsEnabled == false) {
    return;
  }
  FVar12 = StatPtr_STAT_UpdateGPUSceneTime;
  if (StatPtr_STAT_UpdateGPUSceneTime == (FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime>)0x0)
  {
    pFVar11 = ::FName::FName(&local_a8,"STAT_UpdateGPUSceneTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGPUSceneTime,*pFVar11,
                        L"Update GPU Scene","STATGROUP_SceneUpdate","STATCAT_Advanced",
                        L"Scene Update",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x67a);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar14.Value;
      local_res20.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_1452b4f34;
    }
  }
  bVar7 = false;
  FVar15 = local_90;
LAB_1452b4f34:
  ppFVar16 = param_2->DataPtr;
  ppFVar2 = ppFVar16 + param_2->ArrayNum;
  while( true ) {
    if (ppFVar16 == ppFVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnGPUSceneInstancesAllocated
                );
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar7) && (FVar15 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        if (this->bWaitForExplicitFlush < this->ScopeCount) {
          local_80.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
          local_80.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_res20);
          local_80.StatData.Pad[4] = '\0';
          local_80.StatData.Pad[5] = '\0';
          local_80.StatData.Pad[6] = '\0';
          local_80.StatData.Pad[7] = '\0';
          local_80.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
          local_80.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
          local_80.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
          local_80.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this,&local_80);
          piVar1 = &this->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this,false,false);
          }
        }
      }
      return;
    }
    pFVar3 = *ppFVar16;
    if (((((pFVar3->InstanceSceneDataOffset != -1) || (pFVar3->NumInstanceSceneDataEntries != 0)) ||
         (pFVar3->InstancePayloadDataOffset != -1)) || (pFVar3->InstancePayloadDataStride != 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneInfo->InstanceSceneDataOffset == INDEX_NONE && SceneInfo->NumInstanceSceneDataEntries == 0 && SceneInfo->InstancePayloadDataOffset == INDEX_NONE && SceneInfo->InstancePayloadDataStride == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x683,L""), bVar9)) break;
    if (pFVar3->InstanceSceneDataBuffersInternal == (FInstanceSceneDataBuffers *)0x0) {
      local_a0.NumInstances = FInstanceDataBufferHeader::SinglePrimitiveHeader.NumInstances;
      local_a0.PayloadDataStride =
           FInstanceDataBufferHeader::SinglePrimitiveHeader.PayloadDataStride;
      local_a0.Flags = FInstanceDataBufferHeader::SinglePrimitiveHeader.Flags;
      local_a0._10_2_ = FInstanceDataBufferHeader::SinglePrimitiveHeader._10_2_;
    }
    else {
      pFVar4 = pFVar3->InstanceDataUpdateTaskInfo;
      if (pFVar4 == (FInstanceDataUpdateTaskInfo *)0x0) {
        FInstanceSceneDataBuffers::GetHeader
                  (pFVar3->InstanceSceneDataBuffersInternal,&local_a0,(FAccessTag)0x0);
      }
      else {
        local_a0.NumInstances = (pFVar4->InstanceDataBufferHeader).NumInstances;
        local_a0.PayloadDataStride = (pFVar4->InstanceDataBufferHeader).PayloadDataStride;
        local_a0.Flags = (pFVar4->InstanceDataBufferHeader).Flags;
        local_a0._10_2_ = *(undefined2 *)&(pFVar4->InstanceDataBufferHeader).field_0xa;
      }
    }
    pFVar3->NumInstanceSceneDataEntries = local_a0.NumInstances;
    if (0 < local_a0.NumInstances) {
      iVar10 = FGPUScene::AllocateInstanceSceneDataSlots
                         (&param_1->GPUScene,
                          (FPersistentPrimitiveIndex)(pFVar3->PersistentIndex).Index,
                          local_a0.NumInstances);
      pFVar3->InstanceSceneDataOffset = iVar10;
      pFVar3->InstancePayloadDataStride = local_a0.PayloadDataStride;
      if (0 < (int)local_a0.PayloadDataStride) {
        iVar10 = FGPUScene::AllocateInstancePayloadDataSlots
                           (&param_1->GPUScene,
                            local_a0.PayloadDataStride * pFVar3->NumInstanceSceneDataEntries);
        pFVar3->InstancePayloadDataOffset = iVar10;
      }
    }
    FGPUScene::AddPrimitiveToUpdate
              (&param_1->GPUScene,(FPersistentPrimitiveIndex)(pFVar3->PersistentIndex).Index,
               ChangedAll);
    FLumenSceneDataIterator::FLumenSceneDataIterator(&local_70,param_1);
    while (local_70.LumenSceneData != (FLumenSceneData *)0x0) {
      FLumenSceneData::UpdatePrimitiveInstanceOffset(local_70.LumenSceneData,pFVar3->PackedIndex);
      FLumenSceneDataIterator::operator++(&local_70);
    }
    ppFVar16 = ppFVar16 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AllocateRayTracingSBT @ 1452b51b0

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
FPrimitiveSceneInfo::AllocateRayTracingSBT
          (FPrimitiveSceneInfo *this,FRHIRayTracingGeometry *param_1,uint param_2)

{
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRayTracingSBTAllocation *this_00;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar7;
  char cVar8;
  uint uVar9;
  FRHIRayTracingGeometry *pFVar10;
  longlong *plVar11;
  FRayTracingCachedMeshCommandFlags local_38;
  
  uVar9 = 0;
  if (0 < (this->RayTracingLODData).ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->RayTracingLODData).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)&this->RayTracingLODData;
      if (FVar1 != (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
        FVar7 = FVar1;
      }
      plVar11 = (longlong *)((longlong)(int)uVar9 * 0x50 + (longlong)FVar7);
      if ((*plVar11 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODData.SBTAllocation == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                             ,0x1a0,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_1 == (FRHIRayTracingGeometry *)0x0) {
        cVar8 = (char)uVar9;
        if ((int)cVar8 < (this->StaticRayTracingGeometries).ArrayNum) {
          if ((cVar8 < '\0') &&
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
          lVar2 = *(longlong *)
                   ((this->StaticRayTracingGeometries).AllocatorInstance.Data + (longlong)cVar8 * 8)
          ;
          if (lVar2 != 0) {
            pFVar10 = *(FRHIRayTracingGeometry **)(lVar2 + 0xe8);
            uVar6 = *(uint *)(lVar2 + 0x98);
            if (pFVar10 != (FRHIRayTracingGeometry *)0x0) goto LAB_1452b5370;
          }
        }
      }
      else {
        if (((this->RayTracingLODData).ArrayNum != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RayTracingLODData.Num() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                               ,0x1a7,
                               L"We expect to have a single LOD when using CachedRayTracingInstanceGeometryRHI."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = param_1;
        uVar6 = param_2;
        if (((int)param_2 < *(int *)((longlong)plVar11 + 0x3c)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODData.NumCachedMeshCommands <= (int32)SegmentCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                               ,0x1af,
                               L"Number of cached ray tracing mesh commands (%d), should be lower or equal to number of segments (%d)."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_1452b5370:
        if (uVar6 != 0) {
          local_38.CachedMeshCommandHash = plVar11[1];
          local_38._8_8_ = plVar11[2];
          this_00 = FRayTracingShaderBindingTable::AllocateStaticRange
                              (&this->Scene->RayTracingSBT,uVar6,pFVar10,&local_38);
          *plVar11 = (longlong)this_00;
          if (this_00 != (FRayTracingSBTAllocation *)0x0) {
            iVar5 = FRayTracingSBTAllocation::GetUniqueId(this_00);
            *(int *)(plVar11 + 8) = iVar5;
            if ((((FRayTracingSBTAllocation *)*plVar11)->AllocatedLayers & Base) != None) {
              uVar6 = FRayTracingSBTAllocation::GetRecordIndex
                                ((FRayTracingSBTAllocation *)*plVar11,Base,0);
              *(uint *)((longlong)plVar11 + 0x44) = uVar6;
            }
            if ((((FRayTracingSBTAllocation *)*plVar11)->AllocatedLayers & Decals) != None) {
              uVar6 = FRayTracingSBTAllocation::GetRecordIndex
                                ((FRayTracingSBTAllocation *)*plVar11,Decals,0);
              *(uint *)(plVar11 + 9) = uVar6;
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->RayTracingLODData).ArrayNum);
  }
  return;
}

// ApplyWorldOffset @ 1452b5420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrimitiveSceneInfo::ApplyWorldOffset
          (FPrimitiveSceneInfo *this,FRHICommandListBase *param_1,TVector<double> *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_28 = *(undefined4 *)&param_2->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  local_18 = (param_2->field0_0x0)._s_0.Z;
  (**(code **)(this->Proxy->_padding_ + 0x1d0))(this->Proxy,local_18,&local_28);
  return;
}

// CacheMeshDrawCommands @ 1452b5d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::CacheMeshDrawCommands
          (FScene *param_1,TArrayView<FPrimitiveSceneInfo_*,int> *param_2)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FMeshDrawShaderBindings *pFVar6;
  TArray<FMeshDrawShaderBindingsLayout,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  TArrayView<FPrimitiveSceneInfo_*,int> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_2_::FStat_STAT_CacheMeshDrawCommands>
  FVar15;
  FCachedPassMeshDrawListContext *this;
  FName FVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStackY_318 [32];
  <lambda_1> local_2b6;
  TArray<FCachedPassMeshDrawListContextDeferred,TSizedDefaultAllocator<32>_> local_2b0;
  FName local_2a0;
  FColor_u_0 local_298;
  int local_294;
  FName local_290;
  FName local_288;
  FName local_280;
  TArrayView<FPrimitiveSceneInfo_*,int> *local_270;
  TArrayView<std::nullptr_t,int> local_268;
  <lambda_2> local_258;
  <lambda_1> local_248;
  FName local_228;
  FName local_220;
  FCachedPassMeshDrawListContext local_218;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_270 = param_2;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Emerald,"FPrimitiveSceneInfo_CacheMeshDrawCommands");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId595,"FPrimitiveSceneInfo_CacheMeshDrawCommands",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x253);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId595);
  }
  if (__CsvProfilerStat596 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("FPrimitiveSceneInfo_CacheMeshDrawCommands");
    __CsvProfilerStat596 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("FPrimitiveSceneInfo_CacheMeshDrawCommands",
             "CSV_FPrimitiveSceneInfo_CacheMeshDrawCommands");
  uVar17 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CacheMeshDrawCommands ==
        (FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_2_::FStat_STAT_CacheMeshDrawCommands>
         )0x0) {
      pFVar14 = ::FName::FName(&local_228,"STAT_CacheMeshDrawCommands");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheMeshDrawCommands,*pFVar14,
                 L"STAT_CacheMeshDrawCommands","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_CacheMeshDrawCommands;
  if (StatPtr_STAT_CacheMeshDrawCommands ==
      (FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_2_::FStat_STAT_CacheMeshDrawCommands>
       )0x0) {
    pFVar14 = ::FName::FName(&local_220,"STAT_CacheMeshDrawCommands");
    FVar15 = (FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_2_::FStat_STAT_CacheMeshDrawCommands>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheMeshDrawCommands,*pFVar14,
                          L"STAT_CacheMeshDrawCommands","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar15;
  bVar4 = false;
  bVar5 = false;
  local_280.ComparisonIndex.Value = 0;
  local_280.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_298.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_298._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_290.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x256);
        bVar4 = true;
        bVar5 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2a0 = FVar16;
      local_288 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_1452b5f5b;
    }
  }
  bVar5 = bVar10;
  bVar4 = bVar9;
  bVar9 = false;
  local_288 = local_280;
  FVar16 = local_280;
LAB_1452b5f5b:
  local_248.SceneInfos.DataPtr = param_2->DataPtr;
  local_248.SceneInfos.ArrayNum = param_2->ArrayNum;
  local_248.SceneInfos._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_294 = GMeshDrawCommandsBatchSize;
  local_248.BATCH_SIZE = GMeshDrawCommandsBatchSize;
  uVar2 = (longlong)(param_2->ArrayNum + -1 + GMeshDrawCommandsBatchSize) /
          (longlong)GMeshDrawCommandsBatchSize;
  uVar18 = uVar2 & 0xffffffff;
  iVar20 = (int)uVar2;
  local_248.Scene = param_1;
  if ((GMeshDrawCommandsCacheMultithreaded == 0) ||
     (bVar10 = FApp::ShouldUseThreadingForPerformance(), !bVar10)) {
    FCachedPassMeshDrawListContext::FCachedPassMeshDrawListContext(&local_218,param_1);
    local_218._padding_ = (longlong)&___7FCachedPassMeshDrawListContextImmediate__6B_;
    if (0 < iVar20) {
      do {
        `FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l2::<lambda_1>::operator()
                  (&local_248,&local_218,uVar17);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < iVar20);
    }
    if (local_218.MeshDrawCommandForStateBucketing.DebugData.MaterialRenderProxyName.Data.
        AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.MeshDrawCommandForStateBucketing.DebugData.MaterialRenderProxyName.
                    Data.AllocatorInstance.Data);
    }
    if (local_218.MeshDrawCommandForStateBucketing.VertexStreams.AllocatorInstance.SecondaryData !=
        (ForElementType<FVertexInputStream>)0x0) {
      FMemory::Free((void *)local_218.MeshDrawCommandForStateBucketing.VertexStreams.
                            AllocatorInstance.SecondaryData);
    }
    FMeshDrawShaderBindings::~FMeshDrawShaderBindings
              (&local_218.MeshDrawCommandForStateBucketing.ShaderBindings);
  }
  else {
    local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b0.ArrayNum = 0;
    local_2b0.ArrayMax = 0;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18);
    }
    if (0 < iVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1f0,8,iVar20,&local_2b0.AllocatorInstance,0,&local_2b0.ArrayMax);
      do {
        iVar12 = local_2b0.ArrayNum;
        if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1f0,8,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
        }
        local_2b0.ArrayNum = iVar12 + 1;
        this = (FCachedPassMeshDrawListContext *)
               (local_2b0.AllocatorInstance.Data + (longlong)iVar12 * 0x1f0);
        FCachedPassMeshDrawListContext::FCachedPassMeshDrawListContext(this,param_1);
        this->_padding_ = (longlong)&___7FCachedPassMeshDrawListContextDeferred__6B_;
        this[1]._padding_ = 0;
        this[1].Scene = (FScene *)0x0;
        pFVar6 = &this[1].MeshDrawCommandForStateBucketing.ShaderBindings;
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[0] = '\0';
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[1] = '\0';
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[2] = '\0';
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[3] = '\0';
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[4] = '\0';
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[5] = '\0';
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[6] = '\0';
        (pFVar6->ShaderLayouts).AllocatorInstance.InlineData[7] = '\0';
        pTVar7 = &this[1].MeshDrawCommandForStateBucketing.ShaderBindings.ShaderLayouts;
        (pTVar7->AllocatorInstance).InlineData[8] = '\0';
        (pTVar7->AllocatorInstance).InlineData[9] = '\0';
        (pTVar7->AllocatorInstance).InlineData[10] = '\0';
        (pTVar7->AllocatorInstance).InlineData[0xb] = '\0';
        (pTVar7->AllocatorInstance).InlineData[0xc] = '\0';
        (pTVar7->AllocatorInstance).InlineData[0xd] = '\0';
        (pTVar7->AllocatorInstance).InlineData[0xe] = '\0';
        (pTVar7->AllocatorInstance).InlineData[0xf] = '\0';
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    local_258.DrawListContexts = &local_2b0;
    local_268.DataPtr = (void **)0x0;
    local_258.DoWorkLambda = &local_248;
    local_268.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<_FPrimitiveSceneInfo::CacheMeshDrawCommands_::__l8::<lambda_2>,_ParallelForTemplate<_FPrimitiveSceneInfo::CacheMeshDrawCommands_::__l8::<lambda_2>_>_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar20,1,&local_258,local_2b6,Unbalanced,&local_268);
    if (0 < iVar20) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"DeferredFinalizeMeshDrawCommands");
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId763,"DeferredFinalizeMeshDrawCommands",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x2fb);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId763);
      }
      pTVar8 = local_270;
      iVar12 = local_294;
      local_2a0.ComparisonIndex.Value = 0;
      local_2a0.Number = 0;
      iVar19 = local_294;
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_2b0.ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = pTVar8->ArrayNum;
        if (iVar19 < iVar1) {
          iVar1 = iVar19;
        }
        FCachedPassMeshDrawListContextDeferred::DeferredFinalizeMeshDrawCommands
                  ((FCachedPassMeshDrawListContextDeferred *)
                   (local_2b0.AllocatorInstance.Data + (longlong)local_2a0),pTVar8,iVar19 - iVar12,
                   iVar1);
        FVar16 = local_288;
        local_2a0 = (FName)((longlong)local_2a0 + 0x1f0);
        uVar17 = uVar17 + 1;
        iVar19 = iVar19 + iVar12;
      } while ((int)uVar17 < iVar20);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    DestructItems<FCachedPassMeshDrawListContextDeferred,int>
              ((FCachedPassMeshDrawListContextDeferred *)local_2b0.AllocatorInstance.Data,
               local_2b0.ArrayNum);
    if ((FCachedPassMeshDrawListContextDeferred *)local_2b0.AllocatorInstance.Data !=
        (FCachedPassMeshDrawListContextDeferred *)0x0) {
      FMemory::Free(local_2b0.AllocatorInstance.Data);
    }
  }
  bVar10 = FParallelMeshDrawCommandPass::IsOnDemandShaderCreationEnabled();
  if (!bVar10) {
    FGraphicsMinimalPipelineStateId::InitializePersistentIds();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("FPrimitiveSceneInfo_CacheMeshDrawCommands");
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CacheNaniteMaterialBins @ 1452b6360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::CacheNaniteMaterialBins
          (FScene *param_1,TArrayView<FPrimitiveSceneInfo_*,int> *param_2)

{
  FPrimitiveSceneInfo **ppFVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_2_::FStat_STAT_CacheNaniteMaterialBins>
  FVar9;
  EShaderPlatform EVar10;
  ulonglong uVar11;
  atomic<unsigned_int> aVar12;
  FPrimitiveSceneInfo **ppFVar13;
  FName FVar14;
  byte bVar15;
  FName FVar16;
  FNaniteMaterialListContext *pFVar17;
  FName FVar18;
  bool bVar19;
  undefined1 auStackY_2b8 [32];
  <lambda_1> local_258;
  undefined1 local_257 [3];
  FColor_u_0 local_254;
  FName local_250;
  TArrayView<FNaniteMaterialListContext,int> local_248;
  FName local_238;
  FScene *local_228;
  TArrayView<FPrimitiveSceneInfo_*,int> *pTStack_220;
  bool local_218;
  undefined7 uStack_217;
  FName local_210;
  FName local_208 [2];
  <lambda_1> local_1f8;
  ForElementType<FNaniteMaterialListContext> local_1d8;
  atomic<unsigned_int> local_50;
  atomic<unsigned_int> local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Emerald,"FPrimitiveSceneInfo_CacheNaniteMaterialBins");
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId857,"FPrimitiveSceneInfo_CacheNaniteMaterialBins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x359);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId857);
  }
  if (__CsvProfilerStat858 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("FPrimitiveSceneInfo_CacheNaniteMaterialBins");
    __CsvProfilerStat858 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("FPrimitiveSceneInfo_CacheNaniteMaterialBins",
             "CSV_FPrimitiveSceneInfo_CacheNaniteMaterialBins");
  aVar6 = (atomic<unsigned_int>)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CacheNaniteMaterialBins ==
        (FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_2_::FStat_STAT_CacheNaniteMaterialBins>
         )0x0) {
      pFVar8 = ::FName::FName(&local_210,"STAT_CacheNaniteMaterialBins");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheNaniteMaterialBins,*pFVar8,
                 L"STAT_CacheNaniteMaterialBins","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_CacheNaniteMaterialBins;
  if (StatPtr_STAT_CacheNaniteMaterialBins ==
      (FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_2_::FStat_STAT_CacheNaniteMaterialBins>
       )0x0) {
    pFVar8 = ::FName::FName(local_208,"STAT_CacheNaniteMaterialBins");
    FVar9 = (FThreadSafeStaticStat<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_2_::FStat_STAT_CacheNaniteMaterialBins>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheNaniteMaterialBins,*pFVar8,
                         L"STAT_CacheNaniteMaterialBins","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar9;
  bVar15 = 0;
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  local_258 = (<lambda_1>)0x0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar14 = local_238, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_254.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_254._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar15 = 1;
      local_258 = (<lambda_1>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_250.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_250.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_250,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x35b);
        bVar15 = 3;
        local_258 = (<lambda_1>)0x3;
      }
    }
    FVar14 = local_238;
    if (FThreadStats::bPrimaryEnable != false) {
      local_248.DataPtr = (FNaniteMaterialListContext *)FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      local_258 = (<lambda_1>)(bVar15 | 4);
      FVar14 = FVar18;
    }
  }
  bVar4 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (!bVar4) goto LAB_1452b69de;
  if (*(int *)&param_1->field_0x8 == 5) {
    EVar10 = SP_NumPlatforms;
  }
  else {
    EVar10 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar4 = DoesPlatformSupportLumenGI(EVar10,false);
  local_50 = (atomic<unsigned_int>)0x0;
  local_1d8.SecondaryData = (ForElementType<FNaniteMaterialListContext>)0x0;
  local_4c = (atomic<unsigned_int>)0x8;
  if (GNaniteMaterialBinCacheParallel == 0) {
LAB_1452b67e9:
    local_50 = (atomic<unsigned_int>)((int)aVar6 + 1);
    FVar18 = (FName)&local_1d8;
    if ((FName)local_1d8.SecondaryData != (FName)0x0) {
      FVar18 = (FName)local_1d8.SecondaryData;
    }
    pFVar17 = (FNaniteMaterialListContext *)((longlong)(int)aVar6 * 0x30 + (longlong)FVar18);
    DefaultConstructItems<FNaniteMaterialListContext,int>(pFVar17,1);
    ppFVar13 = param_2->DataPtr;
    ppFVar1 = ppFVar13 + param_2->ArrayNum;
    for (; ppFVar13 != ppFVar1; ppFVar13 = ppFVar13 + 1) {
      BuildNaniteMaterialBins(param_1,*ppFVar13,bVar4,pFVar17);
    }
  }
  else {
    bVar5 = FApp::ShouldUseThreadingForPerformance();
    if (!bVar5) {
      aVar6 = local_50;
      if (local_50 == local_4c) {
        aVar6 = (atomic<unsigned_int>)
                UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_>
                          (0x830,&local_1d8,(int *)&local_4c);
      }
      goto LAB_1452b67e9;
    }
    aVar2 = (atomic<unsigned_int>)param_2->ArrayNum;
    local_228 = param_1;
    pTStack_220 = param_2;
    local_218 = bVar4;
    if (0 < (int)aVar2) {
      bVar4 = FApp::ShouldUseThreadingForPerformance();
      if (bVar4) {
LAB_1452b661e:
        bVar4 = true;
      }
      else {
        bVar5 = FForkProcessHelper::IsForkedMultithreadInstance();
        bVar4 = false;
        if (bVar5) goto LAB_1452b661e;
      }
      if (((1 < (int)aVar2) && (bVar4)) &&
         (aVar6 = aVar2, (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar2)) {
        aVar6 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
      }
      bVar4 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                        ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
      aVar12 = (atomic<unsigned_int>)((int)aVar6 + 1);
      if (bVar4) {
        aVar12 = aVar6;
      }
      aVar6 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      if ((int)aVar12 < (int)aVar6) {
        aVar6 = aVar12;
      }
      aVar12 = (atomic<unsigned_int>)0x1;
      if (1 < (int)aVar6) {
        aVar12 = aVar6;
      }
      if ((int)local_4c < 0) {
        FVar18 = (FName)&local_1d8;
        if ((FName)local_1d8.SecondaryData != (FName)0x0) {
          FVar18 = (FName)local_1d8.SecondaryData;
        }
        DestructItems<FNaniteMaterialListContext,int>
                  ((FNaniteMaterialListContext *)FVar18,(int)local_50);
        local_50 = (atomic<unsigned_int>)0x0;
        if (local_4c != (atomic<unsigned_int>)0x0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_>
                    (0x30,8,0,&local_1d8,0,(int *)&local_4c);
        }
      }
      else {
        FVar18 = (FName)&local_1d8;
        if ((FName)local_1d8.SecondaryData != (FName)0x0) {
          FVar18 = (FName)local_1d8.SecondaryData;
        }
        DestructItems<FNaniteMaterialListContext,int>
                  ((FNaniteMaterialListContext *)FVar18,(int)local_50);
        local_50 = (atomic<unsigned_int>)0x0;
      }
      iVar7 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_>
                        (0x30,8,(int)aVar12,&local_1d8,(int *)&local_50,(int *)&local_4c);
      FVar18 = (FName)&local_1d8;
      if ((FName)local_1d8.SecondaryData != (FName)0x0) {
        FVar18 = (FName)local_1d8.SecondaryData;
      }
      DefaultConstructItems<FNaniteMaterialListContext,int>
                ((void *)((longlong)iVar7 * 0x30 + (longlong)FVar18),(int)aVar12);
      local_248.ArrayNum = (int)local_50;
      local_248.DataPtr = (FNaniteMaterialListContext *)&local_1d8;
      if ((FName)local_1d8.SecondaryData != (FName)0x0) {
        local_248.DataPtr = (FNaniteMaterialListContext *)local_1d8.SecondaryData;
      }
      if (((int)local_50 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_1f8._17_7_ = uStack_217;
      local_1f8.bLumenEnabled = local_218;
      local_1f8.Scene = local_228;
      local_1f8.SceneInfos = pTStack_220;
      ParallelForImpl::
      ParallelForInternal<_FPrimitiveSceneInfo::CacheNaniteMaterialBins_::__l11::<lambda_1>,_ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_FPrimitiveSceneInfo::CacheNaniteMaterialBins_::__l11::<lambda_1>_>_::__l5::<lambda_1>,FNaniteMaterialListContext>
                (L"ParallelFor Task",(int)aVar2,1,&local_1f8,local_258,None,&local_248);
    }
  }
  if (0 < (int)local_50) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"NaniteMaterialListApply");
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId891,"NaniteMaterialListApply",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                 ,0x37b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId891);
    }
    aVar6 = local_50;
    uVar11 = (ulonglong)(int)local_50;
    FVar18 = (FName)&local_1d8;
    if ((FName)local_1d8.SecondaryData != (FName)0x0) {
      FVar18 = (FName)local_1d8.SecondaryData;
    }
    FVar16 = (FName)(uVar11 * 0x30 + (longlong)FVar18);
    while( true ) {
      if (SUB84(uVar11,0) != aVar6) {
        `TCheckedPointerIterator<FNaniteMaterialListContext,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_257);
      }
      if (FVar18 == FVar16) break;
      FNaniteMaterialListContext::Apply((FNaniteMaterialListContext *)FVar18,param_1);
      uVar11 = (ulonglong)(uint)local_50;
      FVar18 = (FName)((longlong)FVar18 + 0x30);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"NaniteComputeRelevance");
  if (CpuChannel->Enabled < 0) {
    FNaniteShadingPipelines::ComputeRelevance
              (param_1->NaniteShadingPipelines,*(Type *)&param_1->field_0x8);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId900,"NaniteComputeRelevance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,900);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId900);
    FNaniteShadingPipelines::ComputeRelevance
              (param_1->NaniteShadingPipelines,*(Type *)&param_1->field_0x8);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  param_1->NaniteShadingPipelines[0].bBuildCommands = true;
  FVar18 = (FName)&local_1d8;
  if ((FName)local_1d8.SecondaryData != (FName)0x0) {
    FVar18 = (FName)local_1d8.SecondaryData;
  }
  param_1->NaniteShadingPipelines[1].bBuildCommands = true;
  param_1->NaniteShadingPipelines[2].bBuildCommands = true;
  DestructItems<FNaniteMaterialListContext,int>((FNaniteMaterialListContext *)FVar18,(int)local_50);
  if ((FName)local_1d8.SecondaryData != (FName)0x0) {
    FMemory::Free((void *)local_1d8.SecondaryData);
  }
LAB_1452b69de:
  if (((byte)local_258 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((byte)local_258 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((byte)local_258 & 4) != 0) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("FPrimitiveSceneInfo_CacheNaniteMaterialBins");
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CacheRayTracingInstance @ 1452b6af0

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
FPrimitiveSceneInfo::CacheRayTracingInstance
          (FPrimitiveSceneInfo *this,FRayTracingGeometryInstance *param_1)

{
  FPrimitiveSceneProxy *pFVar1;
  FScene *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FInstanceHandle FVar6;
  uint uVar7;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar8;
  FPrimitiveSceneProxy *pFVar9;
  uint in_stack_ffffffffffffff10;
  FRHIRayTracingGeometry *local_d8;
  undefined8 uStack_d0;
  TMatrix<double> *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FRHIRayTracingGeometry *local_78;
  undefined8 uStack_70;
  TMatrix<double> *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((this->RayTracingInstanceIndexMain != 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingInstanceIndexMain == 0xffffffffui32",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x207,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->RayTracingInstanceIndexDecal != 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingInstanceIndexDecal == 0xffffffffui32",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x208,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = (this->RayTracingLODData).ArrayNum;
  if (((int)uVar7 < 1) &&
     (in_stack_ffffffffffffff10 = uVar7,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar8 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
    FVar8 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)&this->RayTracingLODData;
  }
  pFVar1 = this->Proxy;
  bVar5 = pFVar1->bRayTracingFarField;
  pFVar9 = (FPrimitiveSceneProxy *)0x0;
  if ((bVar5 == false) && ((*(uchar *)((longlong)FVar8 + 0x11) & 8) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((~(*(uchar *)((longlong)FVar8 + 0x11) >> 4) & 1) == 0) {
    uVar7 = (uint)FRayTracingScene::INVALID_INSTANCE_HANDLE.Layer << 0x18 |
            FRayTracingScene::INVALID_INSTANCE_HANDLE.Index;
  }
  else {
    pFVar2 = this->Scene;
    pFVar9 = (FPrimitiveSceneProxy *)(ulonglong)(byte)(bVar5 * '\x02');
    param_1->InstanceContributionToHitGroupIndex = *(int *)((longlong)FVar8 + 0x44);
    local_d8 = param_1->GeometryRHI;
    uStack_d0 = *(undefined8 *)&param_1->InstanceContributionToHitGroupIndex;
    local_c8 = (param_1->Transforms).DataPtr;
    uStack_c0 = *(undefined8 *)&(param_1->Transforms).ArrayNum;
    in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffff00;
    local_b8 = *(undefined8 *)&param_1->BaseInstanceSceneDataOffset;
    puStack_b0 = (param_1->InstanceSceneDataOffsets).DataPtr;
    local_a8 = *(undefined8 *)&(param_1->InstanceSceneDataOffsets).ArrayNum;
    uStack_a0._0_4_ = param_1->NumTransforms;
    uStack_a0._4_4_ = param_1->DefaultUserData;
    local_98 = (param_1->UserData).DataPtr;
    uStack_90 = *(undefined8 *)&(param_1->UserData).ArrayNum;
    local_88 = *(undefined8 *)&param_1->field_0x50;
    FVar6 = FRayTracingScene::AddCachedInstance
                      (&pFVar2->RayTracingScene,(FRayTracingGeometryInstance *)&stack0x00000008,
                       (ERayTracingSceneLayer)&local_d8,pFVar9,SUB81(pFVar1,0),
                       in_stack_ffffffffffffff10);
    uVar7 = (uint)*(byte *)FVar6 << 0x18 | *(uint *)((longlong)FVar6 + 4);
  }
  this->RayTracingInstanceIndexMain = uVar7;
  if (bVar4) {
    pFVar2 = this->Scene;
    param_1->InstanceContributionToHitGroupIndex = *(int *)((longlong)FVar8 + 0x48);
    local_78 = param_1->GeometryRHI;
    uStack_70 = *(undefined8 *)&param_1->InstanceContributionToHitGroupIndex;
    local_68 = (param_1->Transforms).DataPtr;
    uStack_60 = *(undefined8 *)&(param_1->Transforms).ArrayNum;
    local_58 = *(undefined8 *)&param_1->BaseInstanceSceneDataOffset;
    puStack_50 = (param_1->InstanceSceneDataOffsets).DataPtr;
    local_48 = *(undefined8 *)&(param_1->InstanceSceneDataOffsets).ArrayNum;
    uStack_40._0_4_ = param_1->NumTransforms;
    uStack_40._4_4_ = param_1->DefaultUserData;
    local_38 = (param_1->UserData).DataPtr;
    uStack_30 = *(undefined8 *)&(param_1->UserData).ArrayNum;
    local_28 = *(undefined8 *)&param_1->field_0x50;
    FVar6 = FRayTracingScene::AddCachedInstance
                      (&pFVar2->RayTracingScene,(FRayTracingGeometryInstance *)&stack0x00000010,
                       (ERayTracingSceneLayer)&local_78,
                       (FPrimitiveSceneProxy *)CONCAT71((int7)((ulonglong)pFVar9 >> 8),1),
                       SUB81(this->Proxy,0),in_stack_ffffffffffffff10 & 0xffffff00);
    uVar7 = (uint)*(byte *)FVar6 << 0x18 | *(uint *)((longlong)FVar6 + 4);
  }
  else {
    uVar7 = (uint)FRayTracingScene::INVALID_INSTANCE_HANDLE.Layer << 0x18 |
            FRayTracingScene::INVALID_INSTANCE_HANDLE.Index;
  }
  this->RayTracingInstanceIndexDecal = uVar7;
  this->bIsCachedRayTracingInstanceValid = false;
  this->field_0x1a3 =
       this->field_0x1a3 | -(param_1->GeometryRHI != (FRHIRayTracingGeometry *)0x0) & 0x40U;
  return;
}

// CacheRayTracingPrimitives @ 1452b6da0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::CacheRayTracingPrimitives
          (FScene *param_1,TArrayView<FPrimitiveSceneInfo_*,int> *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EShaderPlatform EVar9;
  EParallelForFlags EVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  FMeshDrawShaderBindings *this;
  FRayTracingMeshCommandStorage *pFVar28;
  longlong lVar29;
  FMeshDrawShaderBindings *pFVar30;
  undefined1 local_128;
  undefined1 local_127 [3];
  int local_124;
  TArray<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_120;
  longlong local_110;
  FRayTracingMeshCommandStorage *local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  longlong local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  <lambda_1> local_d0;
  FSpanAllocator *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  <lambda_2> local_a8;
  FRayTracingGeometryInstance local_98;
  
  EVar9 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar6 = IsRayTracingEnabled(EVar9);
  if (bVar6) {
    if (__CsvProfilerStat1253 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("FPrimitiveSceneInfo_CacheRayTracingPrimitives");
      __CsvProfilerStat1253 = true;
    }
    FCsvProfiler::BeginExclusiveStat
              ("FPrimitiveSceneInfo_CacheRayTracingPrimitives",
               "CSV_FPrimitiveSceneInfo_CacheRayTracingPrimitives");
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Emerald,"FPrimitiveSceneInfo_CacheRayTracingPrimitives");
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1254,"FPrimitiveSceneInfo_CacheRayTracingPrimitives",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                 ,0x4e6);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1254);
    }
    if ((GRHIGlobals.SupportsMultithreadedShaderCreation == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GRHIGlobals.SupportsMultithreadedShaderCreation",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x4e8,
                           L"Raytracing code needs the ability to create shaders from task threads."
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar28 = &param_1->CachedRayTracingMeshCommands;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    local_108 = pFVar28;
    if ((GRayTracingPrimitiveCacheMultithreaded == 0) ||
       (bVar7 = FApp::ShouldUseThreadingForPerformance(), !bVar7)) {
      EVar10 = None;
    }
    else {
      EVar10 = ForceSingleThread;
    }
    local_d0.Scene = param_1;
    local_a8.Scene = param_1;
    local_a8.SceneInfos = param_2;
    ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,_FPrimitiveSceneInfo::CacheRayTracingPrimitives_::__l18::<lambda_1>,_FPrimitiveSceneInfo::CacheRayTracingPrimitives_::__l18::<lambda_2>_>
              (L"ParallelFor Task",&local_120,param_2->ArrayNum,&local_d0,&local_a8,EVar10);
    if (0 < local_120.ArrayNum) {
      if (__CsvProfilerStat1315 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive
                  ("FPrimitiveSceneInfo_CacheRayTracingPrimitives_Merge");
        __CsvProfilerStat1315 = true;
      }
      FCsvProfiler::BeginExclusiveStat
                ("FPrimitiveSceneInfo_CacheRayTracingPrimitives_Merge",
                 "CSV_FPrimitiveSceneInfo_CacheRayTracingPrimitives_Merge");
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Emerald,"FPrimitiveSceneInfo_CacheRayTracingPrimitives_Merge");
      bVar7 = -1 < CpuChannel->Enabled;
      if (bVar7) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1316,
                   "FPrimitiveSceneInfo_CacheRayTracingPrimitives_Merge",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x524);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1316);
      }
      uVar16 = (ulonglong)local_120.ArrayNum;
      local_f4 = local_120.ArrayNum;
      pFVar27 = local_120.AllocatorInstance.Data + 0x50;
      local_b0 = local_120.AllocatorInstance.Data + uVar16 * 0x58;
      uVar17 = uVar16;
      while( true ) {
        pFVar20 = local_b0;
        local_e0 = pFVar27;
        if ((int)uVar16 != (int)uVar17) {
          local_128 = 0;
          `TCheckedPointerIterator<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_128);
        }
        local_c0 = pFVar27 + -0x50;
        if (local_c0 == pFVar20) break;
        local_f8 = *(uint *)pFVar27;
        uVar17 = (ulonglong)(int)local_f8;
        pFVar22 = (((TArray<FDeferredPrimitiveRayTracingData,TSizedDefaultAllocator<32>_> *)
                   (pFVar27 + -8))->AllocatorInstance).Data;
        pFVar20 = pFVar22 + 8;
        local_b8 = pFVar22 + uVar17 * 0x90;
        while( true ) {
          pFVar5 = local_b8;
          local_100 = pFVar22;
          if (*(int *)pFVar27 != (int)uVar17) {
            local_127[0] = 0;
            `TCheckedPointerIterator<FDeferredPrimitiveRayTracingData_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_127);
          }
          if (pFVar22 == pFVar5) break;
          uVar24 = 0;
          local_d8 = 0;
          if (0 < *(int *)(pFVar20 + 0x20)) {
            local_c8 = &pFVar28->Allocator;
            lVar19 = 0;
            local_110 = 0;
            do {
              lVar29 = local_d8;
              uVar21 = ~uVar24 >> 0x1f;
              uVar23 = 0;
              if ((int)uVar24 < *(int *)(pFVar20 + 0x20)) {
                uVar23 = uVar21;
              }
              if ((uVar23 == 0) &&
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
              pFVar27 = pFVar20;
              if (*(FScriptContainerElement **)(pFVar20 + 0x18) != (FScriptContainerElement *)0x0) {
                pFVar27 = *(FScriptContainerElement **)(pFVar20 + 0x18);
              }
              iVar3 = *(int *)(pFVar27 + lVar19 + 0x10);
              local_124 = FSpanAllocator::Allocate(local_c8,iVar3);
              piVar1 = &(local_108->Array).ArrayNum;
              lVar18 = 0x18;
              if ((local_108->Allocator).bGrowOnly == false) {
                lVar18 = 0x14;
              }
              iVar25 = *(int *)((local_108->Allocator).FreeSpans.AllocatorInstance.InlineData +
                               lVar18 + -0x20);
              iVar11 = *piVar1;
              if (iVar11 < iVar25) {
                iVar25 = iVar25 - iVar11;
                iVar11 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x98,8,iVar25,(ForAnyElementType *)local_108,piVar1,
                                    &(local_108->Array).ArrayMax);
                DefaultConstructItems<FRayTracingMeshCommand,int>
                          ((local_108->Array).AllocatorInstance.Data + (longlong)iVar11 * 0x98,
                           iVar25);
              }
              lVar18 = *(longlong *)local_100;
              uVar23 = 0;
              if ((int)uVar24 < *(int *)(lVar18 + 0x200)) {
                uVar23 = uVar21;
              }
              if ((uVar23 == 0) &&
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
              lVar26 = lVar18 + 0x1a8;
              if (*(longlong *)(lVar18 + 0x1f8) != 0) {
                lVar26 = *(longlong *)(lVar18 + 0x1f8);
              }
              *(int *)(local_110 + 0x38 + lVar26) = local_124;
              lVar18 = *(longlong *)local_100;
              uVar23 = 0;
              if ((int)uVar24 < *(int *)(lVar18 + 0x200)) {
                uVar23 = uVar21;
              }
              if ((uVar23 == 0) &&
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
              lVar26 = lVar18 + 0x1a8;
              if (*(longlong *)(lVar18 + 0x1f8) != 0) {
                lVar26 = *(longlong *)(lVar18 + 0x1f8);
              }
              *(int *)(local_110 + 0x3c + lVar26) = iVar3;
              uVar23 = 0;
              local_f0 = (longlong)local_124 * 0x98;
              local_e8 = 0;
              while( true ) {
                uVar12 = 0;
                if ((int)uVar24 < *(int *)(pFVar20 + 0x20)) {
                  uVar12 = uVar21;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar27 = pFVar20;
                if (*(FScriptContainerElement **)(pFVar20 + 0x18) != (FScriptContainerElement *)0x0)
                {
                  pFVar27 = *(FScriptContainerElement **)(pFVar20 + 0x18);
                }
                if (*(int *)(pFVar27 + lVar19 + 0x10) <= (int)uVar23) break;
                uVar12 = 0;
                if ((int)uVar24 < *(int *)(pFVar20 + 0x20)) {
                  uVar12 = uVar21;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar27 = pFVar20;
                if (*(FScriptContainerElement **)(pFVar20 + 0x18) != (FScriptContainerElement *)0x0)
                {
                  pFVar27 = *(FScriptContainerElement **)(pFVar20 + 0x18);
                }
                pFVar27 = pFVar27 + lVar19;
                uVar12 = 0;
                if ((int)uVar23 < *(int *)(pFVar27 + 0x10)) {
                  uVar12 = ~uVar23 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(FScriptContainerElement **)(pFVar27 + 8) != (FScriptContainerElement *)0x0) {
                  pFVar27 = *(FScriptContainerElement **)(pFVar27 + 8);
                }
                uVar12 = *(uint *)(pFVar27 + local_e8);
                uVar13 = 0;
                if ((int)uVar12 < *(int *)(local_e0 + -0x48)) {
                  uVar13 = ~uVar12 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar28 = local_108;
                pFVar30 = (FMeshDrawShaderBindings *)
                          ((longlong)(int)uVar12 * 0x98 + *(longlong *)&local_c0->field_0x0);
                uVar12 = 0;
                if ((int)(local_124 + uVar23) < (local_108->Array).ArrayNum) {
                  uVar12 = ~(local_124 + uVar23) >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                this = (FMeshDrawShaderBindings *)
                       ((pFVar28->Array).AllocatorInstance.Data + local_f0);
                FMeshDrawShaderBindings::CopyFrom(this,pFVar30);
                uVar23 = uVar23 + 1;
                *(undefined8 *)this[1].ShaderLayouts.AllocatorInstance.InlineData =
                     *(undefined8 *)pFVar30[1].ShaderLayouts.AllocatorInstance.InlineData;
                local_f0 = local_f0 + 0x98;
                *(undefined4 *)(this[1].ShaderLayouts.AllocatorInstance.InlineData + 8) =
                     *(undefined4 *)(pFVar30[1].ShaderLayouts.AllocatorInstance.InlineData + 8);
                *(undefined4 *)(this[1].ShaderLayouts.AllocatorInstance.InlineData + 0xc) =
                     *(undefined4 *)(pFVar30[1].ShaderLayouts.AllocatorInstance.InlineData + 0xc);
                *(undefined1 *)&this[1].ShaderLayouts.AllocatorInstance.SecondaryData =
                     *(undefined1 *)&pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData;
                bVar14 = this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1;
                bVar14 = (bVar14 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x1) & 1 ^ bVar14;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar14;
                bVar14 = (bVar14 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x1) & 2 ^ bVar14;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar14;
                bVar14 = (bVar14 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x1) & 4 ^ bVar14;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar14;
                bVar14 = (bVar14 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x1) & 8 ^ bVar14;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar14;
                bVar14 = (bVar14 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x1) & 0x10 ^ bVar14;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar14;
                bVar14 = (bVar14 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x1) & 0x20 ^ bVar14;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar14;
                bVar14 = (bVar14 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x1) & 0x40 ^ bVar14;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar14;
                bVar2 = pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1;
                bVar15 = this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x2;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 =
                     (bVar14 ^ bVar2) & 0x7f ^ bVar2;
                bVar15 = (bVar15 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.
                                   field_0x2) & 1 ^ bVar15;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x2 = bVar15;
                local_e8 = local_e8 + 4;
                this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x2 =
                     (bVar15 ^ pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x2) &
                     2 ^ bVar15;
                *(undefined2 *)&this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x4 =
                     *(undefined2 *)
                      &pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x4;
                *(undefined2 *)&this[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x6 =
                     *(undefined2 *)
                      &pFVar30[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x6;
                *(short *)&this[1].ShaderLayouts.ArrayNum = (short)pFVar30[1].ShaderLayouts.ArrayNum
                ;
                lVar29 = local_d8;
              }
              local_110 = local_110 + 0x50;
              local_d8 = lVar29 + 1;
              uVar24 = uVar24 + 1;
              lVar19 = lVar19 + 0x18;
              pFVar27 = local_e0;
              pFVar22 = local_100;
              pFVar28 = local_108;
            } while ((int)uVar24 < *(int *)(pFVar20 + 0x20));
          }
          if (*(FRHIRayTracingGeometry **)(pFVar20 + 0x28) == (FRHIRayTracingGeometry *)0x0) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(uint *)(pFVar20 + 0x80);
          }
          AllocateRayTracingSBT
                    (*(FPrimitiveSceneInfo **)pFVar22,*(FRHIRayTracingGeometry **)(pFVar20 + 0x28),
                     uVar24);
          CacheRayTracingShaderBindingData
                    (*(FPrimitiveSceneInfo **)pFVar22,*(FRHIRayTracingGeometry **)(pFVar20 + 0x28));
          if (pFVar20[0x84] != (FScriptContainerElement)0x0) {
            local_98.GeometryRHI = *(FRHIRayTracingGeometry **)(pFVar20 + 0x28);
            local_98._8_8_ = *(undefined8 *)(pFVar20 + 0x30);
            local_98.Transforms.DataPtr = *(TMatrix<double> **)(pFVar20 + 0x38);
            local_98.Transforms._8_8_ = *(undefined8 *)(pFVar20 + 0x40);
            local_98._32_8_ = *(undefined8 *)(pFVar20 + 0x48);
            local_98.InstanceSceneDataOffsets.DataPtr = *(uint **)(pFVar20 + 0x50);
            local_98.InstanceSceneDataOffsets._8_8_ = *(undefined8 *)(pFVar20 + 0x58);
            local_98._56_8_ = *(undefined8 *)(pFVar20 + 0x60);
            local_98.UserData.DataPtr = *(uint **)(pFVar20 + 0x68);
            local_98.UserData._8_8_ = *(undefined8 *)(pFVar20 + 0x70);
            local_98._80_8_ = *(undefined8 *)(pFVar20 + 0x78);
            CacheRayTracingInstance(*(FPrimitiveSceneInfo **)pFVar22,&local_98);
          }
          pFVar22 = pFVar22 + 0x90;
          uVar17 = (ulonglong)local_f8;
          pFVar20 = pFVar20 + 0x90;
        }
        uVar16 = local_120._8_8_ & 0xffffffff;
        pFVar27 = pFVar27 + 0x58;
        uVar17 = (ulonglong)local_f4;
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      FCsvProfiler::EndExclusiveStat("FPrimitiveSceneInfo_CacheRayTracingPrimitives_Merge");
    }
    DestructItems<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,int>
              ((FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
                *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    if ((FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
         *)local_120.AllocatorInstance.Data !=
        (FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    FCsvProfiler::EndExclusiveStat("FPrimitiveSceneInfo_CacheRayTracingPrimitives");
  }
  return;
}

// CacheRayTracingShaderBindingData @ 1452b76d0

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
FPrimitiveSceneInfo::CacheRayTracingShaderBindingData
          (FPrimitiveSceneInfo *this,FRHIRayTracingGeometry *param_1)

{
  undefined8 *puVar1;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar2;
  FScene *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  longlong *plVar14;
  int iVar15;
  FRHIRayTracingGeometry *pFVar16;
  uint uVar17;
  uint local_res18;
  undefined8 local_78;
  FRHIRayTracingGeometry *pFStack_70;
  uint local_68;
  uint uStack_64;
  byte bStack_60;
  byte bStack_5f;
  undefined6 uStack_5e;
  undefined8 local_58;
  FRHIRayTracingGeometry *pFStack_50;
  uint local_48;
  uint uStack_44;
  byte bStack_40;
  byte bStack_3f;
  undefined6 uStack_3e;
  
  local_res18 = 0;
  if (0 < (this->RayTracingLODData).ArrayNum) {
    do {
      uVar8 = 0;
      if ((int)local_res18 < (this->RayTracingLODData).ArrayNum) {
        uVar8 = ~local_res18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)&this->RayTracingLODData;
      if (FVar2 != (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
        FVar10 = FVar2;
      }
      plVar14 = (longlong *)((longlong)(int)local_res18 * 0x50 + (longlong)FVar10);
      if ((int)plVar14[4] != 0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1787568210388713005>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x1d3,"LODData.CachedShaderBindingDataBase.IsEmpty()");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(plVar14 + 4) = 0;
        if (*(int *)((longlong)plVar14 + 0x24) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)(plVar14 + 3),0,(int *)((longlong)plVar14 + 0x24)
                    );
        }
      }
      if ((int)plVar14[6] != 0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1787568210388713000>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x1d8,"LODData.CachedShaderBindingDataDecal.IsEmpty()");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(plVar14 + 6) = 0;
        if (*(int *)((longlong)plVar14 + 0x34) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)(plVar14 + 5),0,(int *)((longlong)plVar14 + 0x34)
                    );
        }
      }
      if (param_1 == (FRHIRayTracingGeometry *)0x0) {
        cVar11 = (char)local_res18;
        pFVar16 = (FRHIRayTracingGeometry *)0x0;
        if ((int)cVar11 < (this->StaticRayTracingGeometries).ArrayNum) {
          if ((cVar11 < '\0') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)
                   ((this->StaticRayTracingGeometries).AllocatorInstance.Data + (longlong)cVar11 * 8
                   );
          pFVar16 = (FRHIRayTracingGeometry *)0x0;
          if (lVar5 != 0) {
            pFVar16 = *(FRHIRayTracingGeometry **)(lVar5 + 0xe8);
          }
        }
      }
      else {
        pFVar16 = param_1;
        if (((this->RayTracingLODData).ArrayNum != 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RayTracingLODData.Num() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                               ,0x1e1,
                               L"When using CachedRayTracingInstanceGeometryRHI we only expect to have a single LOD"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (((*plVar14 != 0) && (pFVar16 != (FRHIRayTracingGeometry *)0x0)) &&
         (iVar15 = 0, 0 < *(int *)((longlong)plVar14 + 0x3c))) {
        do {
          pFVar3 = this->Scene;
          uVar17 = (int)plVar14[7] + iVar15;
          uVar8 = 0;
          if ((int)uVar17 < (pFVar3->CachedRayTracingMeshCommands).Array.ArrayNum) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (pFVar3->CachedRayTracingMeshCommands).Array.AllocatorInstance.Data;
          bVar13 = ~((byte)pFVar4[(longlong)(int)uVar17 * 0x98 + 0x8a] >> 1) & 1;
          if ((((FRayTracingSBTAllocation *)*plVar14)->AllocatedLayers & Base) != None) {
            bVar12 = (byte)pFVar4[(longlong)(int)uVar17 * 0x98 + 0x89] >> 3 & 1;
            local_78 = 0;
            pFStack_70 = pFVar16;
            local_68 = uVar17;
            uStack_64 = FRayTracingSBTAllocation::GetRecordIndex
                                  ((FRayTracingSBTAllocation *)*plVar14,Base,
                                   *(uint *)(pFVar4 + (longlong)(int)uVar17 * 0x98 + 0x84));
            bStack_60 = bVar13;
            bStack_5f = bVar12;
            if ((((undefined8 *)plVar14[3] <= &local_78) &&
                (&local_78 <
                 (undefined8 *)plVar14[3] + (longlong)*(int *)((longlong)plVar14 + 0x24) * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (int)plVar14[4];
            if (iVar9 == *(int *)((longlong)plVar14 + 0x24)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,(ForAnyElementType *)(plVar14 + 3),
                                 (int *)((longlong)plVar14 + 0x24));
            }
            *(int *)(plVar14 + 4) = iVar9 + 1;
            lVar5 = plVar14[3];
            puVar1 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar5);
            *puVar1 = local_78;
            puVar1[1] = pFStack_70;
            puVar1 = (undefined8 *)((longlong)iVar9 * 0x20 + 0x10 + lVar5);
            *puVar1 = CONCAT44(uStack_64,local_68);
            puVar1[1] = CONCAT62(uStack_5e,CONCAT11(bStack_5f,bStack_60));
          }
          if ((((FRayTracingSBTAllocation *)*plVar14)->AllocatedLayers & Decals) != None) {
            local_58 = 0;
            bVar12 = ~((byte)pFVar4[(longlong)(int)uVar17 * 0x98 + 0x89] >> 3) & 1;
            pFStack_50 = pFVar16;
            local_48 = uVar17;
            uStack_44 = FRayTracingSBTAllocation::GetRecordIndex
                                  ((FRayTracingSBTAllocation *)*plVar14,Decals,
                                   *(uint *)(pFVar4 + (longlong)(int)uVar17 * 0x98 + 0x84));
            bStack_40 = bVar13;
            bStack_3f = bVar12;
            if ((((undefined8 *)plVar14[5] <= &local_58) &&
                (&local_58 <
                 (undefined8 *)plVar14[5] + (longlong)*(int *)((longlong)plVar14 + 0x34) * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (int)plVar14[6];
            if (iVar9 == *(int *)((longlong)plVar14 + 0x34)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,(ForAnyElementType *)(plVar14 + 5),
                                 (int *)((longlong)plVar14 + 0x34));
            }
            *(int *)(plVar14 + 6) = iVar9 + 1;
            lVar5 = plVar14[5];
            puVar1 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar5);
            *puVar1 = local_58;
            puVar1[1] = pFStack_50;
            puVar1 = (undefined8 *)((longlong)iVar9 * 0x20 + 0x10 + lVar5);
            *puVar1 = CONCAT44(uStack_44,local_48);
            puVar1[1] = CONCAT62(uStack_3e,CONCAT11(bStack_3f,bStack_40));
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)((longlong)plVar14 + 0x3c));
      }
      local_res18 = local_res18 + 1;
    } while ((int)local_res18 < (this->RayTracingLODData).ArrayNum);
  }
  return;
}

// CacheReflectionCaptures @ 1452b7c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::CacheReflectionCaptures(FPrimitiveSceneInfo *this)

{
  FPrimitiveSceneProxy *pFVar1;
  EShadingPath EVar2;
  FReflectionCaptureProxy *pFVar3;
  FPlanarReflectionSceneProxy *pFVar4;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  pFVar1 = this->Proxy;
  local_68._s_0.X = (pFVar1->Bounds).Origin.field0_0x0._s_0.X;
  local_68._s_0.Y = (pFVar1->Bounds).Origin.field0_0x0._s_0.Y;
  local_68._s_0.Z = (pFVar1->Bounds).Origin.field0_0x0._s_0.Z;
  dStack_30 = (pFVar1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_28 = (pFVar1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dStack_20 = (pFVar1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_18 = (pFVar1->Bounds).SphereRadius;
  local_48._s_0.X = local_68._s_0.X;
  local_48._s_0.Y = local_68._s_0.Y;
  local_48._s_0.Z = local_68._s_0.Z;
  pFVar3 = FScene::FindClosestReflectionCapture(this->Scene,(TVector<double> *)&local_68._s_0);
  this->CachedReflectionCaptureProxy = pFVar3;
  pFVar4 = FScene::FindClosestPlanarReflection
                     (this->Scene,(TBoxSphereBounds<double,double> *)&local_48._s_0);
  this->CachedPlanarReflectionProxy = pFVar4;
  EVar2 = FSceneInterface::GetShadingPath(*(Type *)&this->Scene->field_0x8);
  if (EVar2 == Mobile) {
    local_68._s_0.X = local_48._s_0.X;
    local_68._s_0.Y = local_48._s_0.Y;
    local_68._s_0.Z = local_48._s_0.Z;
    FScene::FindClosestReflectionCaptures
              (this->Scene,(TVector<double> *)&local_68._s_0,&this->CachedReflectionCaptureProxies);
  }
  this->bNeedsCachedReflectionCaptureUpdate = false;
  return;
}

// FlushRuntimeVirtualTexture @ 1452c2fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::FlushRuntimeVirtualTexture(FPrimitiveSceneInfo *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScene *pFVar5;
  FPrimitiveSceneProxy *pFVar6;
  FRuntimeVirtualTextureSceneProxy *this_00;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  if (this->Proxy != (FPrimitiveSceneProxy *)0x0) {
    if (this->bWritesRuntimeVirtualTexture) {
      pFVar5 = this->Scene;
      local_68 = 0;
      iVar3 = *(int *)&(pFVar5->RuntimeVirtualTextures).field_0x28;
      local_40.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->RuntimeVirtualTextures).field_0x10;
      uStack_64 = 1;
      iStack_54 = 0;
      iStack_50 = 0;
      if (iVar3 != 0) {
        puVar9 = *(uint **)&(pFVar5->RuntimeVirtualTextures).field_0x20;
        if (puVar9 == (uint *)0x0) {
          puVar9 = (uint *)local_40.Array;
        }
        uVar4 = *puVar9;
        iStack_50 = 0;
        local_68 = 0;
        while (uVar4 == 0) {
          iStack_50 = iStack_50 + 0x20;
          lVar8 = (longlong)local_68;
          local_68 = local_68 + 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_1452c30b7;
          uVar4 = puVar9[lVar8 + 1];
        }
        uStack_64 = -uVar4 & uVar4;
        uVar2 = (ulonglong)uStack_64 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iStack_54 = (int)lVar8 + -1 + iStack_50;
        if (iVar3 < iStack_54) {
LAB_1452c30b7:
          iStack_54 = iVar3;
        }
      }
      local_40._padding_ = CONCAT44(uStack_64,local_68);
      local_40.CurrentBitIndex = iStack_54;
      local_40.UnvisitedBitMask = 0xffffffff;
      local_40._28_4_ = uStack_4c;
      local_40.BaseBitIndex = iStack_50;
      if (iStack_54 < iVar3) {
        do {
          pFVar6 = this->Proxy;
          this_00 = *(FRuntimeVirtualTextureSceneProxy **)
                     (*(longlong *)&pFVar5->RuntimeVirtualTextures + (longlong)iStack_54 * 8);
          pFVar7 = (pFVar6->RuntimeVirtualTextures).AllocatorInstance.Data;
          pFVar1 = pFVar7 + (longlong)(pFVar6->RuntimeVirtualTextures).ArrayNum * 4;
          if (pFVar7 != pFVar1) {
            do {
              if (*(int *)pFVar7 == this_00->RuntimeVirtualTextureId) {
                FRuntimeVirtualTextureSceneProxy::Dirty(this_00,&pFVar6->Bounds,Normal);
                break;
              }
              pFVar7 = pFVar7 + 4;
            } while (pFVar7 != pFVar1);
          }
          local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
          iStack_54 = local_40.CurrentBitIndex;
        } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
      }
    }
    pFVar6 = this->Proxy;
    if (pFVar6->bSupportsMaterialCache != '\0') {
      pFVar7 = (pFVar6->MaterialCacheRenderProxies).AllocatorInstance.Data;
      iVar3 = (pFVar6->MaterialCacheRenderProxies).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar3 * 8;
      while( true ) {
        if ((pFVar6->MaterialCacheRenderProxies).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FMaterialCacheVirtualTextureRenderProxy_*,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar7 == pFVar1) break;
        FMaterialCacheVirtualTextureRenderProxy::Flush
                  (*(FMaterialCacheVirtualTextureRenderProxy **)pFVar7,
                   (FSceneInterface *)this->Scene);
        pFVar7 = pFVar7 + 8;
      }
    }
  }
  return;
}

// FreeGPUSceneInstances @ 1452c3380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::FreeGPUSceneInstances(FPrimitiveSceneInfo *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  if ((this->Scene->GPUScene).bIsEnabled == false) {
    return;
  }
  if (this->InstanceSceneDataOffset == -1) {
    return;
  }
  FVar8 = StatPtr_STAT_UpdateGPUSceneTime;
  if (StatPtr_STAT_UpdateGPUSceneTime == (FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime>)0x0)
  {
    pFVar7 = ::FName::FName(&local_res20,"STAT_UpdateGPUSceneTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGPUSceneTime,*pFVar7,
                       L"Update GPU Scene","STATGROUP_SceneUpdate","STATCAT_Advanced",
                       L"Scene Update",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x6ac);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1452c34f8;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1452c34f8:
  if (((this->Proxy->InstanceSceneDataBuffersInternal == (FInstanceSceneDataBuffers *)0x0) &&
      (this->NumInstanceSceneDataEntries != 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy->SupportsInstanceDataBuffer() || NumInstanceSceneDataEntries == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x6ae,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->InstancePayloadDataOffset != -1) {
    if ((this->InstancePayloadDataStride < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstancePayloadDataStride > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x6b3,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FGPUScene::FreeInstancePayloadDataSlots
              (&this->Scene->GPUScene,this->InstancePayloadDataOffset,
               this->NumInstanceSceneDataEntries * this->InstancePayloadDataStride);
    this->InstancePayloadDataOffset = -1;
    this->InstancePayloadDataStride = 0;
  }
  FGPUScene::FreeInstanceSceneDataSlots
            (&this->Scene->GPUScene,this->InstanceSceneDataOffset,this->NumInstanceSceneDataEntries)
  ;
  this->InstanceSceneDataOffset = -1;
  this->NumInstanceSceneDataEntries = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnGPUSceneInstancesFreed);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GatherLightingAttachmentGroupPrimitives @ 1452c3850

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
FPrimitiveSceneInfo::GatherLightingAttachmentGroupPrimitives
          (FPrimitiveSceneInfo *this,
          TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  FPrimitiveSceneInfo **ppFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FAttachmentGroupSceneInfo *pFVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  FPrimitiveSceneInfo *local_28;
  FPrimitiveSceneInfo *local_20;
  
  ppFVar1 = (param_1->AllocatorInstance).Data;
  local_28 = this;
  if (((ppFVar1 <= &local_28) && (&local_28 < ppFVar1 + param_1->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  (param_1->AllocatorInstance).Data[iVar4] = local_28;
  if ((((this->LightingAttachmentRoot).PrimIDValue == 0) &&
      (this->Proxy->bLightAttachmentsAsGroup != '\0')) &&
     (pFVar6 = TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
               ::Find((TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                       *)&this->Scene->AttachmentGroups,&this->PrimitiveComponentId),
     pFVar6 != (FAttachmentGroupSceneInfo *)0x0)) {
    uVar8 = 0;
    lVar9 = (longlong)(pFVar6->Primitives).ArrayNum;
    if (0 < lVar9) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (pFVar6->Primitives).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_20 = *(FPrimitiveSceneInfo **)
                    ((pFVar6->Primitives).AllocatorInstance.Data + lVar7 * 8);
        ppFVar1 = (param_1->AllocatorInstance).Data;
        if (((ppFVar1 <= &local_20) && (&local_20 < ppFVar1 + param_1->ArrayMax)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        if (iVar4 == param_1->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        uVar8 = uVar8 + 1;
        param_1->ArrayNum = iVar4 + 1;
        lVar7 = lVar7 + 1;
        (param_1->AllocatorInstance).Data[iVar4] = local_20;
      } while (lVar7 < lVar9);
    }
  }
  return;
}

// GatherLightingAttachmentGroupPrimitives @ 1452c3a90

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
FPrimitiveSceneInfo::GatherLightingAttachmentGroupPrimitives
          (FPrimitiveSceneInfo *this,
          TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  FPrimitiveSceneInfo **ppFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FAttachmentGroupSceneInfo *pFVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  FPrimitiveSceneInfo *local_28;
  FPrimitiveSceneInfo *local_20;
  
  ppFVar1 = (param_1->AllocatorInstance).Data;
  local_28 = this;
  if (((ppFVar1 <= &local_28) && (&local_28 < ppFVar1 + param_1->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  (param_1->AllocatorInstance).Data[iVar4] = local_28;
  if ((((this->LightingAttachmentRoot).PrimIDValue == 0) &&
      (this->Proxy->bLightAttachmentsAsGroup != '\0')) &&
     (pFVar6 = TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
               ::Find((TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                       *)&this->Scene->AttachmentGroups,&this->PrimitiveComponentId),
     pFVar6 != (FAttachmentGroupSceneInfo *)0x0)) {
    uVar8 = 0;
    lVar9 = (longlong)(pFVar6->Primitives).ArrayNum;
    if (0 < lVar9) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (pFVar6->Primitives).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_20 = *(FPrimitiveSceneInfo **)
                    ((pFVar6->Primitives).AllocatorInstance.Data + lVar7 * 8);
        ppFVar1 = (param_1->AllocatorInstance).Data;
        if (((ppFVar1 <= &local_20) && (&local_20 < ppFVar1 + param_1->ArrayMax)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        if (iVar4 == param_1->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        uVar8 = uVar8 + 1;
        param_1->ArrayNum = iVar4 + 1;
        lVar7 = lVar7 + 1;
        (param_1->AllocatorInstance).Data[iVar4] = local_20;
      } while (lVar7 < lVar9);
    }
  }
  return;
}

// GetAttachmentGroupBounds @ 1452c3ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
FPrimitiveSceneInfo::GetAttachmentGroupBounds
          (FPrimitiveSceneInfo *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  FPrimitiveSceneProxy *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  FAttachmentGroupSceneInfo *pFVar6;
  TBoxSphereBounds<double,double> *pTVar7;
  longlong lVar8;
  uint uVar9;
  TBoxSphereBounds<double,double> local_48;
  
  pFVar1 = this->Proxy;
  dVar3 = (pFVar1->Bounds).Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pFVar1->Bounds).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
  dVar3 = (pFVar1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pFVar1->Bounds).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  dVar3 = (pFVar1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y =
       (pFVar1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar3;
  __return_storage_ptr__->SphereRadius = (pFVar1->Bounds).SphereRadius;
  if (((this->LightingAttachmentRoot).PrimIDValue != 0) ||
     (this->Proxy->bLightAttachmentsAsGroup == '\0')) {
    return __return_storage_ptr__;
  }
  pFVar6 = TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
           ::Find((TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                   *)&this->Scene->AttachmentGroups,&this->PrimitiveComponentId);
  if (pFVar6 == (FAttachmentGroupSceneInfo *)0x0) {
    return __return_storage_ptr__;
  }
  uVar9 = 0;
  if (0 < (pFVar6->Primitives).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (pFVar6->Primitives).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
        return pTVar7;
      }
      pTVar7 = UE::Math::TBoxSphereBounds<double,double>::operator+
                         (__return_storage_ptr__,&local_48,
                          (TBoxSphereBounds<double,double> *)
                          (*(longlong *)
                            (*(longlong *)((pFVar6->Primitives).AllocatorInstance.Data + lVar8) + 8)
                          + 400));
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      dVar3 = (pTVar7->Origin).field0_0x0._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar7->Origin).field0_0x0._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar7->BoxExtent).field0_0x0._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pTVar7->Origin).field0_0x0._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
      dVar3 = (pTVar7->BoxExtent).field0_0x0._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (pTVar7->BoxExtent).field0_0x0._s_0.Y;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar3;
      __return_storage_ptr__->SphereRadius = pTVar7->SphereRadius;
    } while ((int)uVar9 < (pFVar6->Primitives).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetComponentForDebugOnly @ 1452c4040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
FPrimitiveSceneInfo::GetComponentForDebugOnly(FPrimitiveSceneInfo *this)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UClass *pUVar3;
  
  if (this->PrimitiveComponentInterfaceForDebuggingOnly == (IPrimitiveComponent *)0x0) {
    return (UPrimitiveComponent *)0x0;
  }
  pUVar2 = (UPrimitiveComponent *)
           (**(code **)((longlong)*this->PrimitiveComponentInterfaceForDebuggingOnly + 0x98))();
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPrimitiveComponent *)0x0;
}

// GetComponentInterfaceForDebugOnly @ 1452c40b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

IPrimitiveComponent * __thiscall
FPrimitiveSceneInfo::GetComponentInterfaceForDebugOnly(FPrimitiveSceneInfo *this)

{
  return this->PrimitiveComponentInterfaceForDebuggingOnly;
}

// GetFullnameForDebuggingOnly @ 1452c5200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FPrimitiveSceneInfo::GetFullnameForDebuggingOnly
          (FPrimitiveSceneInfo *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility *this_00;
  
  if (this->PrimitiveComponentInterfaceForDebuggingOnly != (IPrimitiveComponent *)0x0) {
    this_00 = (UObjectBaseUtility *)
              (**(code **)((longlong)*this->PrimitiveComponentInterfaceForDebuggingOnly + 0x98))();
    UObjectBaseUtility::GetFullGroupName(this_00,__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown Object");
  return __return_storage_ptr__;
}

// GetInstanceDataHeader @ 1452c52a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstanceDataBufferHeader * __thiscall
FPrimitiveSceneInfo::GetInstanceDataHeader
          (FPrimitiveSceneInfo *this,FInstanceDataBufferHeader *__return_storage_ptr__)

{
  FInstanceDataUpdateTaskInfo *pFVar1;
  uint uVar2;
  undefined2 uVar3;
  
  if (this->InstanceSceneDataBuffersInternal == (FInstanceSceneDataBuffers *)0x0) {
    uVar2 = FInstanceDataBufferHeader::SinglePrimitiveHeader.PayloadDataStride;
    __return_storage_ptr__->NumInstances =
         FInstanceDataBufferHeader::SinglePrimitiveHeader.NumInstances;
    __return_storage_ptr__->PayloadDataStride = uVar2;
    uVar3 = FInstanceDataBufferHeader::SinglePrimitiveHeader._10_2_;
    __return_storage_ptr__->Flags = FInstanceDataBufferHeader::SinglePrimitiveHeader.Flags;
    *(undefined2 *)&__return_storage_ptr__->field_0xa = uVar3;
    return __return_storage_ptr__;
  }
  pFVar1 = this->InstanceDataUpdateTaskInfo;
  if (pFVar1 != (FInstanceDataUpdateTaskInfo *)0x0) {
    uVar2 = (pFVar1->InstanceDataBufferHeader).PayloadDataStride;
    __return_storage_ptr__->NumInstances = (pFVar1->InstanceDataBufferHeader).NumInstances;
    __return_storage_ptr__->PayloadDataStride = uVar2;
    uVar3 = *(undefined2 *)&(pFVar1->InstanceDataBufferHeader).field_0xa;
    __return_storage_ptr__->Flags = (pFVar1->InstanceDataBufferHeader).Flags;
    *(undefined2 *)&__return_storage_ptr__->field_0xa = uVar3;
    return __return_storage_ptr__;
  }
  FInstanceSceneDataBuffers::GetHeader
            (this->InstanceSceneDataBuffersInternal,__return_storage_ptr__,(FAccessTag)0x0);
  return __return_storage_ptr__;
}

// GetInstanceSceneDataBuffers @ 1452c5320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstanceSceneDataBuffers * __thiscall
FPrimitiveSceneInfo::GetInstanceSceneDataBuffers(FPrimitiveSceneInfo *this)

{
  if (this->InstanceSceneDataBuffersInternal == (FInstanceSceneDataBuffers *)0x0) {
    return (FInstanceSceneDataBuffers *)0x0;
  }
  if (this->InstanceDataUpdateTaskInfo != (FInstanceDataUpdateTaskInfo *)0x0) {
    FInstanceDataUpdateTaskInfo::WaitForUpdateCompletion(this->InstanceDataUpdateTaskInfo);
  }
  return this->InstanceSceneDataBuffersInternal;
}

// GetMemoryFootprint @ 1452c54c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FPrimitiveSceneInfo::GetMemoryFootprint(FPrimitiveSceneInfo *this)

{
  return (((this->StaticMeshes).ArrayMax * 10 + 0x19 + (this->StaticMeshRelevances).ArrayMax) * 3 +
         (this->HitProxies).ArrayMax) * 8;
}

// GetMeshBatch @ 1452c54f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMeshBatch * __thiscall FPrimitiveSceneInfo::GetMeshBatch(FPrimitiveSceneInfo *this,schar param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshBatch *pFVar4;
  
  if ((-1 < param_1) && ((int)param_1 < (this->StaticMeshes).ArrayNum)) {
    uVar3 = 0;
    if ((int)param_1 < (this->StaticMeshes).ArrayNum) {
      uVar3 = (uint)~(int)param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMeshBatch *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FMeshBatch *)((this->StaticMeshes).AllocatorInstance.Data + (longlong)param_1 * 0xf0);
  }
  return (FMeshBatch *)0x0;
}

// GetOwnerActorNameOrLabelForDebuggingOnly @ 1452c56e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FPrimitiveSceneInfo::GetOwnerActorNameOrLabelForDebuggingOnly
          (FPrimitiveSceneInfo *this,FString *__return_storage_ptr__)

{
  if (this->PrimitiveComponentInterfaceForDebuggingOnly != (IPrimitiveComponent *)0x0) {
    (**(code **)((longlong)*this->PrimitiveComponentInterfaceForDebuggingOnly + 0xb0))();
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown Object");
  return __return_storage_ptr__;
}

// GetStaticMeshesLODRange @ 1452c5c30

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
FPrimitiveSceneInfo::GetStaticMeshesLODRange
          (FPrimitiveSceneInfo *this,schar *param_1,schar *param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  *param_1 = '\x7f';
  uVar7 = 0;
  *param_2 = '\0';
  if (0 < (this->StaticMeshRelevances).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->StaticMeshRelevances).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->StaticMeshRelevances).AllocatorInstance.Data;
      FVar1 = pFVar2[lVar8 + 0x14];
      if (((byte)FVar1 & 0x10) == 0) {
        bVar5 = (byte)FVar1 & 0xf;
      }
      else {
        bVar5 = 0xff;
      }
      if (*param_1 < (char)bVar5) {
        bVar5 = *param_1;
      }
      *param_1 = bVar5;
      FVar1 = pFVar2[lVar8 + 0x14];
      if (((byte)FVar1 & 0x10) == 0) {
        bVar5 = (byte)FVar1 & 0xf;
      }
      else {
        bVar5 = 0xff;
      }
      if ((char)bVar5 < *param_2) {
        bVar5 = *param_2;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
      *param_2 = bVar5;
    } while ((int)uVar7 < (this->StaticMeshRelevances).ArrayNum);
  }
  return;
}

// GetStaticRayTracingGeometry @ 1452c5d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FPrimitiveSceneInfo::GetStaticRayTracingGeometry(FPrimitiveSceneInfo *this,schar param_1)

{
  code *pcVar1;
  bool bVar2;
  FRayTracingGeometry *pFVar3;
  
  if ((this->StaticRayTracingGeometries).ArrayNum <= (int)param_1) {
    return (FRayTracingGeometry *)0x0;
  }
  if (param_1 < '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRayTracingGeometry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return *(FRayTracingGeometry **)
          ((this->StaticRayTracingGeometries).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetValidStaticRayTracingGeometry @ 1452cd580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FPrimitiveSceneInfo::GetValidStaticRayTracingGeometry(FPrimitiveSceneInfo *this,schar *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FRayTracingGeometry *pFVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  
  fVar3 = __real_3c23d70a;
  uVar9 = (uint)*param_1;
  if ((int)uVar9 < (this->StaticRayTracingGeometries).ArrayNum) {
    do {
      cVar7 = (char)uVar9;
      uVar9 = 0;
      if ((int)cVar7 < (this->StaticRayTracingGeometries).ArrayNum) {
        uVar9 = (uint)~(int)cVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRayTracingGeometry *)(*pcVar2)();
        return pFVar6;
      }
      bVar4 = FRayTracingGeometry::HasPendingBuildRequest
                        (*(FRayTracingGeometry **)
                          ((this->StaticRayTracingGeometries).AllocatorInstance.Data +
                          (longlong)cVar7 * 8));
      cVar7 = *param_1;
      iVar1 = (this->StaticRayTracingGeometries).ArrayNum;
      uVar9 = (uint)~(int)cVar7 >> 0x1f;
      if (bVar4) {
        uVar5 = 0;
        if (cVar7 < iVar1) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FRayTracingGeometry *)(*pcVar2)();
          return pFVar6;
        }
        FRayTracingGeometry::BoostBuildPriority
                  (*(FRayTracingGeometry **)
                    ((this->StaticRayTracingGeometries).AllocatorInstance.Data + (longlong)cVar7 * 8
                    ),fVar3);
      }
      else {
        uVar5 = 0;
        if (cVar7 < iVar1) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FRayTracingGeometry *)(*pcVar2)();
          return pFVar6;
        }
        bVar4 = FRayTracingGeometry::IsValid
                          (*(FRayTracingGeometry **)
                            ((this->StaticRayTracingGeometries).AllocatorInstance.Data +
                            (longlong)cVar7 * 8));
        if (bVar4) {
          cVar7 = *param_1;
          uVar9 = 0;
          if ((int)cVar7 < (this->StaticRayTracingGeometries).ArrayNum) {
            uVar9 = (uint)~(int)cVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FRayTracingGeometry *)(*pcVar2)();
            return pFVar6;
          }
          bVar4 = FRayTracingGeometry::IsEvicted
                            (*(FRayTracingGeometry **)
                              ((this->StaticRayTracingGeometries).AllocatorInstance.Data +
                              (longlong)cVar7 * 8));
          if (!bVar4) {
            cVar7 = *param_1;
            uVar9 = 0;
            if ((int)cVar7 < (this->StaticRayTracingGeometries).ArrayNum) {
              uVar9 = (uint)~(int)cVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FRayTracingGeometry *)(*pcVar2)();
              return pFVar6;
            }
            return *(FRayTracingGeometry **)
                    ((this->StaticRayTracingGeometries).AllocatorInstance.Data + (longlong)cVar7 * 8
                    );
          }
        }
      }
      bVar8 = *param_1 + 1;
      uVar9 = (uint)bVar8;
      *param_1 = bVar8;
    } while ((int)(char)bVar8 < (this->StaticRayTracingGeometries).ArrayNum);
  }
  return (FRayTracingGeometry *)0x0;
}

// IsCachedRayTracingGeometryValid @ 1452ce290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveSceneInfo::IsCachedRayTracingGeometryValid(FPrimitiveSceneInfo *this)

{
  FRHIRayTracingGeometry *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRHIRayTracingGeometry *pFVar5;
  
  if (this->CachedRayTracingGeometry == (FRayTracingGeometry *)0x0) {
    return false;
  }
  if (((this->RayTracingInstanceIndexMain != 0xffffffff) &&
      (pFVar1 = (this->CachedRayTracingGeometry->RayTracingGeometryRHI).Reference,
      pFVar5 = FRayTracingScene::GetCachedInstanceGeometry
                         (&this->Scene->RayTracingScene,this->RayTracingInstanceIndexMain),
      pFVar5 != pFVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Scene->RayTracingScene.GetCachedInstanceGeometry(RayTracingInstanceIndexMain) == CachedRayTracingGeometry->GetRHI()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x18b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((this->RayTracingInstanceIndexDecal != 0xffffffff) &&
      (pFVar1 = (this->CachedRayTracingGeometry->RayTracingGeometryRHI).Reference,
      pFVar5 = FRayTracingScene::GetCachedInstanceGeometry
                         (&this->Scene->RayTracingScene,this->RayTracingInstanceIndexDecal),
      pFVar5 != pFVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Scene->RayTracingScene.GetCachedInstanceGeometry(RayTracingInstanceIndexDecal) == CachedRayTracingGeometry->GetRHI()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,400,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((((this->CachedRayTracingGeometry->GeometryState & RequiresBuild) != Invalid) ||
      (bVar3 = FRayTracingGeometry::HasPendingBuildRequest(this->CachedRayTracingGeometry), bVar3))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("!CachedRayTracingGeometry->GetRequiresBuild() && !CachedRayTracingGeometry->HasPendingBuildRequest()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                            ,0x193,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = FRayTracingGeometry::IsValid(this->CachedRayTracingGeometry);
  if ((bVar3) && (bVar3 = FRayTracingGeometry::IsEvicted(this->CachedRayTracingGeometry), !bVar3)) {
    return true;
  }
  return false;
}

// LinkAttachmentGroup @ 1452cf130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::LinkAttachmentGroup(FPrimitiveSceneInfo *this)

{
  uint uVar1;
  FScene *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FAttachmentGroupSceneInfo *pFVar7;
  undefined1 *puVar8;
  longlong lVar9;
  TMap<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
  *this_00;
  longlong lVar10;
  TPairInitializer<FPrimitiveComponentId_const_&,FAttachmentGroupSceneInfo_&&> local_res8;
  FPrimitiveSceneInfo *local_78;
  FPrimitiveComponentId *local_70;
  undefined8 *local_68;
  FPrimitiveComponentId *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  void *pvStack_48;
  undefined8 local_40;
  undefined8 local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  uVar1 = (this->LightingAttachmentRoot).PrimIDValue;
  if (uVar1 == 0) {
    if (this->Proxy->bLightAttachmentsAsGroup != '\0') {
      pFVar2 = this->Scene;
      pFVar7 = TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
               ::Find((TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                       *)&pFVar2->AttachmentGroups,&this->PrimitiveComponentId);
      if (pFVar7 == (FAttachmentGroupSceneInfo *)0x0) {
        local_58 = &local_38;
        local_28 = 0;
        local_38 = 0;
        pvStack_30 = (void *)0x0;
        local_60 = &this->PrimitiveComponentId;
        TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FAttachmentGroupSceneInfo_&&>_>
                  ((TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
                    *)&pFVar2->AttachmentGroups,
                   (TPairInitializer<FPrimitiveComponentId_const_&,FAttachmentGroupSceneInfo_&&> *)
                   &local_res8.Value,(bool *)&local_60);
        pFVar7 = (FAttachmentGroupSceneInfo *)
                 (*(longlong *)&pFVar2->AttachmentGroups +
                 ((longlong)(int)local_res8.Value * 5 + 1) * 8);
        if (pvStack_30 != (void *)0x0) {
          FMemory::Free(pvStack_30);
        }
      }
      pFVar7->ParentSceneInfo = this;
    }
  }
  else {
    pFVar2 = this->Scene;
    lVar10 = 0;
    this_00 = &pFVar2->AttachmentGroups;
    lVar6 = lVar10;
    if (*(int *)&(pFVar2->AttachmentGroups).field_0x8 !=
        *(int *)&(pFVar2->AttachmentGroups).field_0x34) {
      puVar8 = *(undefined1 **)&(pFVar2->AttachmentGroups).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(pFVar2->AttachmentGroups).field_0x38;
      }
      iVar5 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(pFVar2->AttachmentGroups).field_0x48 - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          lVar6 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x28;
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x28) == uVar1) break;
          iVar5 = *(int *)(lVar6 + 0x20);
          lVar6 = lVar10;
        } while (iVar5 != -1);
      }
    }
    lVar9 = lVar6 + 8;
    if (lVar6 == 0) {
      lVar9 = lVar10;
    }
    if (lVar9 == 0) {
      local_40 = 0;
      local_68 = &local_50;
      local_50 = 0;
      pvStack_48 = (void *)0x0;
      local_70 = &this->LightingAttachmentRoot;
      TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FAttachmentGroupSceneInfo_&&>_>
                ((TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)&local_70);
      lVar9 = *(longlong *)&this_00->field_0x0 + ((longlong)(int)local_res8.Key * 5 + 1) * 8;
      if (pvStack_48 != (void *)0x0) {
        FMemory::Free(pvStack_48);
      }
    }
    local_78 = this;
    if (((*(FPrimitiveSceneInfo ***)(lVar9 + 8) <= &local_78) &&
        (&local_78 < *(FPrimitiveSceneInfo ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)(lVar9 + 0x10);
    if (iVar5 == *(int *)(lVar9 + 0x14)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
    }
    *(int *)(lVar9 + 0x10) = iVar5 + 1;
    *(FPrimitiveSceneInfo **)(*(longlong *)(lVar9 + 8) + (longlong)iVar5 * 8) = local_78;
  }
  return;
}

// LinkLODParentComponent @ 1452cf370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::LinkLODParentComponent(FPrimitiveSceneInfo *this)

{
  if ((this->LODParentComponentId).PrimIDValue != 0) {
    FLODSceneTree::AddChildNode
              (&this->Scene->SceneLODHierarchy,
               (FPrimitiveComponentId)(this->LODParentComponentId).PrimIDValue,this);
    return;
  }
  return;
}

// NeedsReflectionCaptureUpdate @ 1452cf7e0

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

bool __thiscall FPrimitiveSceneInfo::NeedsReflectionCaptureUpdate(FPrimitiveSceneInfo *this)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  EShadingPath EVar3;
  
  if (!this->bNeedsCachedReflectionCaptureUpdate) {
    return false;
  }
  EVar3 = FSceneInterface::GetShadingPath(*(Type *)&this->Scene->field_0x8);
  if (EVar3 != Mobile) {
    FVar2.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
    bVar1 = IsForwardShadingEnabled(FVar2);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// RefreshNaniteRasterBins @ 1452cf9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RefreshNaniteRasterBins(FPrimitiveSceneInfo *this)

{
  FNaniteRasterPipelines *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScene *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth(this->Proxy);
  if (bVar4 != this->bNaniteRasterBinsRenderCustomDepth) {
    pFVar5 = this->NaniteRasterBins[0].AllocatorInstance.Data;
    pFVar3 = this->Scene;
    iVar2 = this->NaniteRasterBins[0].ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (this->NaniteRasterBins[0].ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNaniteRasterBin,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar1) break;
      this_00 = pFVar3->NaniteRasterPipelines;
      if (bVar4) {
        FNaniteRasterPipelines::RegisterBinForCustomPass(this_00,*(ushort *)(pFVar5 + 4));
        pFVar5 = pFVar5 + 8;
      }
      else {
        FNaniteRasterPipelines::UnregisterBinForCustomPass(this_00,*(ushort *)(pFVar5 + 4));
        pFVar5 = pFVar5 + 8;
      }
    }
    this->bNaniteRasterBinsRenderCustomDepth = false;
    this->field_0x1a2 = this->field_0x1a2 | bVar4 << 4;
  }
  return;
}

// RemoveCachedMeshDrawCommands @ 1452d05b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RemoveCachedMeshDrawCommands(FPrimitiveSceneInfo *this)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScene *pFVar5;
  FGraphicsMinimalPipelineStateId FVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  TSparseArray<FMeshDrawCommand,FDefaultSparseArrayAllocator> *this_00;
  longlong local_res18;
  
  uVar17 = 0;
  if (0 < (this->StaticMeshCommandInfos).ArrayNum) {
    local_res18 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar17 < (this->StaticMeshCommandInfos).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->StaticMeshCommandInfos).AllocatorInstance.Data;
      uVar15 = *(uint *)(pFVar4 + local_res18 + 0xc);
      if (uVar15 == 0xffffffff) {
        iVar3 = *(int *)(pFVar4 + local_res18 + 8);
        if (-1 < iVar3) {
          lVar13 = (longlong)iVar3 * 0x198;
          this_00 = &this->Scene->CachedDrawLists[(byte)pFVar4[local_res18 + 0x18] & 0x7f].
                     MeshDrawCommands;
          FVar6 = *(FGraphicsMinimalPipelineStateId *)(lVar13 + 0xe8 + *(longlong *)this_00);
          TSparseArray<FMeshDrawCommand,FDefaultSparseArrayAllocator>::DestroyElements
                    (this_00,iVar3,1);
          lVar18 = *(longlong *)this_00;
          bVar8 = (byte)iVar3 & 0x1f;
          uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
          if ((*(int *)&this_00->field_0x28 <= iVar3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar14 = &this_00->field_0x10;
          if (*(undefined1 **)&this_00->field_0x20 != (undefined1 *)0x0) {
            puVar14 = *(undefined1 **)&this_00->field_0x20;
          }
          iVar12 = iVar3;
          if (iVar3 < 0) {
            iVar12 = iVar3 + 0x1f;
          }
          lVar2 = (longlong)(iVar12 >> 5) * 4;
          if (((*(uint *)(puVar14 + lVar2) & uVar15) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)&this_00->field_0x34 != 0) {
            *(int *)((longlong)*(int *)&this_00->field_0x30 * 0x198 + lVar18) = iVar3;
          }
          *(undefined4 *)(lVar13 + lVar18) = 0xffffffff;
          if (*(int *)&this_00->field_0x34 < 1) {
            *(undefined4 *)(lVar13 + 4 + lVar18) = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar13 + 4 + lVar18) = *(undefined4 *)&this_00->field_0x30;
          }
          *(int *)&this_00->field_0x34 = *(int *)&this_00->field_0x34 + 1;
          *(int *)&this_00->field_0x30 = iVar3;
          if ((*(int *)&this_00->field_0x28 <= iVar3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar14 = &this_00->field_0x10;
          if (*(undefined1 **)&this_00->field_0x20 != (undefined1 *)0x0) {
            puVar14 = *(undefined1 **)&this_00->field_0x20;
          }
          *(uint *)(puVar14 + lVar2) = *(uint *)(puVar14 + lVar2) & ~uVar15;
          FGraphicsMinimalPipelineStateId::RemovePersistentId(FVar6);
          iVar3 = *(int *)(pFVar4 + local_res18 + 8);
          if (*(int *)(this_00 + 1) < *(int *)(pFVar4 + local_res18 + 8)) {
            iVar3 = *(int *)(this_00 + 1);
          }
          *(int *)(this_00 + 1) = iVar3;
        }
      }
      else {
        pFVar5 = this->Scene;
        uVar10 = (byte)pFVar4[local_res18 + 0x18] & 0x7f;
        uVar11 = 0;
        if ((int)uVar15 < *(int *)&pFVar5->CachedMeshDrawCommandStateBuckets[uVar10].field_0x8) {
          uVar11 = ~uVar15 >> 0x1f;
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
        lVar18 = *(longlong *)(pFVar5->CachedMeshDrawCommandStateBuckets + uVar10) +
                 (longlong)(int)uVar15 * 0x1a0;
        FVar6 = *(FGraphicsMinimalPipelineStateId *)(lVar18 + 0xe8);
        if ((*(int *)(lVar18 + 0x198) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StateBucketCount.Num > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                               ,0x333,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LOCK();
        piVar1 = (int *)(lVar18 + 0x198);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          Experimental::RobinHoodHashTable_Private::
          TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
          ::RemoveByElementId((TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                               *)(this->Scene->CachedMeshDrawCommandStateBuckets + uVar10),
                              (FHashElementId)*(int *)(pFVar4 + local_res18 + 0xc));
        }
        FGraphicsMinimalPipelineStateId::RemovePersistentId(FVar6);
      }
      local_res18 = local_res18 + 0x24;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (this->StaticMeshCommandInfos).ArrayNum);
  }
  uVar16 = 0;
  uVar19 = uVar16;
  if (0 < (this->StaticMeshRelevances).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar17 = 0;
      if ((int)uVar15 < (this->StaticMeshRelevances).ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      *(undefined8 *)((this->StaticMeshRelevances).AllocatorInstance.Data + uVar19) = 0;
      uVar19 = uVar19 + 0x18;
    } while ((int)(uVar15 + 1) < (this->StaticMeshRelevances).ArrayNum);
  }
  (this->StaticMeshCommandInfos).ArrayNum = 0;
  if ((this->StaticMeshCommandInfos).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,&(this->StaticMeshCommandInfos).AllocatorInstance,0,
               &(this->StaticMeshCommandInfos).ArrayMax);
  }
  return;
}

// RemoveCachedNaniteMaterialBins @ 1452d09f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RemoveCachedNaniteMaterialBins(FPrimitiveSceneInfo *this)

{
  int *piVar1;
  FScene *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_void___cdecl_FPrimitiveSceneInfo::RemoveCachedNaniteMaterialBins(void)_::_2_::FStat_STAT_RemoveCachedNaniteMaterialBins>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar12;
  longlong lVar13;
  FNaniteRasterBin *pFVar14;
  TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  longlong lVar19;
  TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> *pTVar20;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  longlong local_res20;
  longlong local_a8;
  FName local_a0;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  if (this->Proxy->bIsNaniteMesh == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RemoveCachedNaniteMaterialBins ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FPrimitiveSceneInfo::RemoveCachedNaniteMaterialBins(void)_::_2_::FStat_STAT_RemoveCachedNaniteMaterialBins>
         )0x0) {
      pFVar10 = ::FName::FName(&local_60,"STAT_RemoveCachedNaniteMaterialBins");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveCachedNaniteMaterialBins,*pFVar10,
                 L"STAT_RemoveCachedNaniteMaterialBins","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_RemoveCachedNaniteMaterialBins;
  if (StatPtr_STAT_RemoveCachedNaniteMaterialBins ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FPrimitiveSceneInfo::RemoveCachedNaniteMaterialBins(void)_::_2_::FStat_STAT_RemoveCachedNaniteMaterialBins>
       )0x0) {
    pFVar10 = ::FName::FName(local_58,"STAT_RemoveCachedNaniteMaterialBins");
    FVar11 = (FThreadSafeStaticStat<_private:_void___cdecl_FPrimitiveSceneInfo::RemoveCachedNaniteMaterialBins(void)_::_2_::FStat_STAT_RemoveCachedNaniteMaterialBins>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveCachedNaniteMaterialBins,
                          *pFVar10,L"STAT_RemoveCachedNaniteMaterialBins","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_a0 = *(FName *)FVar11;
  bVar5 = false;
  bVar4 = false;
  bVar8 = false;
  bVar7 = false;
  if ((local_a0.ComparisonIndex.Value.Value != 0) || (local_a0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = local_a0.ComparisonIndex.Value.Value;
        local_res18.Number = local_a0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x405);
        bVar5 = true;
        bVar4 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_a0,CycleScopeStart);
      bVar7 = true;
      goto LAB_1452d0bba;
    }
  }
  bVar5 = bVar8;
  bVar4 = bVar7;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
LAB_1452d0bba:
  lVar18 = 0;
  local_a8 = 3;
  lVar13 = 0;
  local_res20 = 0;
  do {
    lVar6 = local_res20;
    pFVar2 = this->Scene;
    uVar16 = 0;
    pTVar20 = this->NaniteRasterBins + lVar18;
    iVar12 = pTVar20->ArrayNum;
    if (0 < iVar12) {
      lVar19 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar16 < iVar12) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (FNaniteRasterBin *)((pTVar20->AllocatorInstance).Data + lVar19);
        if ((lVar18 == 0) && (this->bNaniteRasterBinsRenderCustomDepth)) {
          FNaniteRasterPipelines::UnregisterBinForCustomPass
                    ((FNaniteRasterPipelines *)
                     (pFVar2->NaniteRasterPipelines[0].PipelineBins.AllocatorInstance.InlineData +
                     lVar6),pFVar14->BinIndex);
        }
        FNaniteRasterPipelines::Unregister
                  ((FNaniteRasterPipelines *)
                   (pFVar2->NaniteRasterPipelines[0].PipelineBins.AllocatorInstance.InlineData +
                   lVar6),pFVar14);
        iVar12 = pTVar20->ArrayNum;
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 8;
      } while ((int)uVar16 < iVar12);
    }
    uVar16 = 0;
    pTVar15 = this->NaniteShadingBins + lVar18;
    iVar12 = pTVar15->ArrayNum;
    if (0 < iVar12) {
      do {
        uVar9 = 0;
        if ((int)uVar16 < iVar12) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FNaniteShadingPipelines::Unregister
                  (pFVar2->NaniteShadingPipelines + lVar18,
                   (FNaniteShadingBin *)
                   ((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar16 * 8));
        iVar12 = pTVar15->ArrayNum;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar12);
    }
    pFVar2->NaniteShadingPipelines[lVar18].bBuildCommands = true;
    FNaniteVisibility::RemoveReferences
              ((FNaniteVisibility *)
               (pFVar2->NaniteVisibility[0].VisibilityQueries.AllocatorInstance.InlineData +
               lVar13 + -8),this);
    pTVar20->ArrayNum = 0;
    if (pTVar20->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar20->AllocatorInstance,0,&pTVar20->ArrayMax);
    }
    pTVar15->ArrayNum = 0;
    if (pTVar15->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar15->AllocatorInstance,0,&pTVar15->ArrayMax);
    }
    pTVar17 = this->NaniteMaterialSlots + lVar18;
    pTVar17->ArrayNum = 0;
    if (pTVar17->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,0,&pTVar17->AllocatorInstance,0,&pTVar17->ArrayMax);
    }
    lVar13 = lVar13 + 0x1a8;
    local_res20 = local_res20 + 0x130;
    lVar18 = lVar18 + 1;
    local_a8 = local_a8 + -1;
  } while (local_a8 != 0);
  this->bNaniteRasterBinsRenderCustomDepth = false;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (local_a0 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = local_a0.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = local_a0.Number & 0xffff6fff | 0x6000;
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
  return;
}

// RemoveCachedRayTracingPrimitives @ 1452d1000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RemoveCachedRayTracingPrimitives(FPrimitiveSceneInfo *this)

{
  int *piVar1;
  TArray<FPrimitiveSceneInfo::FRayTracingLODData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar6;
  uchar *puVar7;
  undefined1 local_res10 [8];
  
  bVar5 = IsRayTracingAllowed();
  if (bVar5) {
    FRayTracingScene::FreeCachedInstance
              (&this->Scene->RayTracingScene,this->RayTracingInstanceIndexMain);
    FRayTracingScene::FreeCachedInstance
              (&this->Scene->RayTracingScene,this->RayTracingInstanceIndexDecal);
    pTVar2 = &this->RayTracingLODData;
    this->RayTracingInstanceIndexMain = 0xffffffff;
    this->RayTracingInstanceIndexDecal = 0xffffffff;
    FVar6 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
    iVar3 = (this->RayTracingLODData).ArrayNum;
    if (FVar6 == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
      FVar6 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)pTVar2;
    }
    puVar7 = (uchar *)((longlong)FVar6 + 0x24);
    while( true ) {
      if ((this->RayTracingLODData).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FPrimitiveSceneInfo::FRayTracingLODData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if ((ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> *)(puVar7 + -0x24) ==
          (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> *)
          ((longlong)iVar3 * 0x50 + (longlong)FVar6)) break;
      puVar7[-4] = '\0';
      puVar7[-3] = '\0';
      puVar7[-2] = '\0';
      puVar7[-1] = '\0';
      if (*(int *)puVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)(puVar7 + -0xc),0,(int *)puVar7);
      }
      puVar7[0xc] = '\0';
      puVar7[0xd] = '\0';
      puVar7[0xe] = '\0';
      puVar7[0xf] = '\0';
      if (*(int *)(puVar7 + 0x10) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)(puVar7 + 4),0,(int *)(puVar7 + 0x10));
      }
      FSpanAllocator::Free
                (&(this->Scene->CachedRayTracingMeshCommands).Allocator,*(int *)(puVar7 + 0x14),
                 *(int *)(puVar7 + 0x18));
      FRayTracingShaderBindingTable::FreeStaticRange
                (&this->Scene->RayTracingSBT,
                 *(FRayTracingSBTAllocation **)
                  ((ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> *)(puVar7 + -0x24))->
                  InlineData);
      puVar7 = puVar7 + 0x50;
    }
    FVar6 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
      FVar6 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)pTVar2;
    }
    DestructItems<FPrimitiveSceneInfo::FRayTracingLODData,int>
              ((FRayTracingLODData *)FVar6,(this->RayTracingLODData).ArrayNum);
    piVar1 = &(this->RayTracingLODData).ArrayMax;
    (this->RayTracingLODData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>_>
                (0x50,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if ((this->RayTracingInstanceIndexMain != 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RayTracingInstanceIndexMain == 0xffffffffui32",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x5dc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->RayTracingInstanceIndexDecal != 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RayTracingInstanceIndexDecal == 0xffffffffui32",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x5dd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->RayTracingLODData).ArrayNum != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RayTracingLODData.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x5de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// RemoveCachedReflectionCaptures @ 1452d1250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RemoveCachedReflectionCaptures(FPrimitiveSceneInfo *this)

{
  this->CachedReflectionCaptureProxy = (FReflectionCaptureProxy *)0x0;
  this->CachedPlanarReflectionProxy = (FPlanarReflectionSceneProxy *)0x0;
  this->CachedReflectionCaptureProxies[0] = (FReflectionCaptureProxy *)0x0;
  this->CachedReflectionCaptureProxies[1] = (FReflectionCaptureProxy *)0x0;
  this->CachedReflectionCaptureProxies[2] = (FReflectionCaptureProxy *)0x0;
  this->bNeedsCachedReflectionCaptureUpdate = true;
  return;
}

// RemoveFromScene @ 1452d1930

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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RemoveFromScene(FPrimitiveSceneInfo *this,bool param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  FLightPrimitiveInteraction *pFVar5;
  FOctreeElementId2 FVar6;
  FScene *pFVar7;
  FName FVar8;
  ForElementType<unsigned_int> FVar9;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> this_00;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PrimitiveInfoMemory> FVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FVirtualTextureSystem *this_03;
  FMeshBatchElement *pFVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FName *pFVar21;
  FName *pFVar22;
  uint uVar23;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar24;
  ForElementType<unsigned_int> FVar25;
  int iVar26;
  uchar auVar27 [8];
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_48;
  
  bVar11 = IsInRenderingThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                          ,0x7bd,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar5 = this->LightList;
  while (pFVar5 != (FLightPrimitiveInteraction *)0x0) {
    FLightPrimitiveInteraction::Destroy(pFVar5);
    pFVar5 = this->LightList;
  }
  pFVar22 = (FName *)0x0;
  uVar12 = 0;
  if ((this->OctreeId).NodeIndex != 0xffffffff) {
    FVar6 = this->OctreeId;
    pFVar7 = this->Scene;
    uVar17 = FVar6.NodeIndex;
    uVar18 = uVar12;
    if ((int)uVar17 < (pFVar7->PrimitiveOctree).TreeElements.ArrayNum) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar23 = FVar6.ElementIndex;
    pFVar19 = (pFVar7->PrimitiveOctree).TreeElements.AllocatorInstance.Data +
              (longlong)(int)uVar17 * 0x10;
    uVar18 = uVar12;
    if ((int)uVar23 < *(int *)(pFVar19 + 8)) {
      uVar18 = ~uVar23 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((*(FPrimitiveSceneInfo **)(*(longlong *)pFVar19 + (longlong)(int)uVar23 * 0x48) != this) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Scene->PrimitiveOctree.GetElementById(OctreeId).PrimitiveSceneInfo == this"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                            ,0x7c8,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::RemoveElement
              (&this->Scene->PrimitiveOctree,this->OctreeId);
  }
  iVar26 = this->LightmapDataOffset;
  (this->OctreeId).NodeIndex = 0xffffffff;
  (this->OctreeId).ElementIndex = -1;
  if ((iVar26 != -1) &&
     (bVar11 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                           (FGenericStaticFeatureLevel)*(Type *)&this->Scene->field_0x8), bVar11)) {
    FSpanAllocator::Free
              (&(this->Scene->GPUScene).LightmapDataAllocator,this->LightmapDataOffset,
               this->NumLightmapDataEntries);
  }
  if (this->Proxy->bCastsDynamicIndirectShadow != '\0') {
    pFVar7 = this->Scene;
    pTVar24 = &pFVar7->DynamicIndirectCasterPrimitives;
    pFVar19 = (pTVar24->AllocatorInstance).Data;
    iVar26 = (pFVar7->DynamicIndirectCasterPrimitives).ArrayNum;
    for (pFVar20 = pFVar19; pFVar20 != pFVar19 + (longlong)iVar26 * 8; pFVar20 = pFVar20 + 8) {
      if (*(FPrimitiveSceneInfo **)pFVar20 == this) {
        uVar18 = (uint)((longlong)pFVar20 - (longlong)pFVar19 >> 3);
        if (uVar18 != 0xffffffff) {
          if ((int)(uVar18 + 1) <= iVar26) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar4 = (pFVar7->DynamicIndirectCasterPrimitives).ArrayNum;
          pFVar19 = (pTVar24->AllocatorInstance).Data;
          iVar26 = iVar4 + ~uVar18;
          if (1 < iVar26) {
            iVar26 = 1;
          }
          if (iVar26 != 0) {
            memmove(pFVar19 + (longlong)(int)uVar18 * 8,pFVar19 + (longlong)(iVar4 - iVar26) * 8,
                    (longlong)iVar26 << 3);
          }
          iVar26 = (pFVar7->DynamicIndirectCasterPrimitives).ArrayNum + -1;
          (pFVar7->DynamicIndirectCasterPrimitives).ArrayNum = iVar26;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar24->AllocatorInstance,iVar26,
                     &(pFVar7->DynamicIndirectCasterPrimitives).ArrayMax);
        }
        break;
      }
    }
  }
  this->IndirectLightingCacheAllocation = (FIndirectLightingCacheAllocation *)0x0;
  if (((this->Proxy->Mobility).Value == '\x02') && (!this->bIndirectLightingCacheBufferDirty)) {
    this->field_0x1a2 = this->field_0x1a2 | 2;
  }
  iVar26 = (this->StaticMeshes).ArrayMax;
  piVar1 = &(this->StaticMeshRelevances).ArrayMax;
  iVar4 = *piVar1;
  uVar12 = (**(code **)(this->Proxy->_padding_ + 0x168))();
  auVar27 = (uchar  [8])((longlong)iVar26 * 0xf0 + 600 + (ulonglong)uVar12 + (longlong)iVar4 * 0x18)
  ;
  if (auVar27 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_PrimitiveInfoMemory;
    if (StatPtr_STAT_PrimitiveInfoMemory ==
        (FThreadSafeStaticStat<FStat_STAT_PrimitiveInfoMemory>)0x0) {
      pFVar13 = ::FName::FName(&local_50,"STAT_PrimitiveInfoMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_PrimitiveInfoMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveInfoMemory,*pFVar13,
                          L"Primitive memory","STATGROUP_SceneMemory","STATCAT_Advanced",
                          L"Scene Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar8 = *(FName *)FVar14;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_48.NameAndInfo.Number = FVar8.Number & 0xffffbfff | 0xb000;
      local_res20 = FVar8;
      local_48.StatData.Pad = auVar27;
      local_48.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_48);
      FStatsTrace::Add(&local_res20,-(longlong)auVar27);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (param_1) {
    iVar26 = this->PackedIndex;
    if ((iVar26 != -1) && (iVar26 != 0x7fffffff)) {
      pFVar7 = this->Scene;
      if (((iVar26 < 0) || ((pFVar7->PrimitivesNeedingStaticMeshUpdate).NumBits <= iVar26)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar9 = (pFVar7->PrimitivesNeedingStaticMeshUpdate).AllocatorInstance.SecondaryData;
      FVar25 = (ForElementType<unsigned_int>)&pFVar7->PrimitivesNeedingStaticMeshUpdate;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = FVar9;
      }
      puVar3 = (uint *)((longlong)FVar25 +
                       (longlong)((int)(iVar26 + (iVar26 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << ((byte)iVar26 & 0x1f));
    }
    this_00 = this->IndirectLightingCacheUniformBuffer;
    if (this_00 != (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
      this->IndirectLightingCacheUniformBuffer =
           (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    bVar11 = OIT::IsSortedTrianglesEnabled(GMaxRHIShaderPlatform);
    if ((bVar11) && (pFVar13 = pFVar22, pFVar21 = pFVar22, 0 < (this->StaticMeshes).ArrayNum)) {
      do {
        uVar18 = (uint)pFVar13;
        uVar12 = 0;
        if ((int)uVar18 < (this->StaticMeshes).ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar15 = (FMeshBatchElement *)
                  ((this->StaticMeshes).AllocatorInstance.Data +
                  (longlong)&(pFVar21->ComparisonIndex).Value);
        if (0 < *(int *)&pFVar15[1].PrimitiveUniformBufferResource) {
          if ((FMeshBatchElement *)pFVar15[1].PrimitiveUniformBuffer != (FMeshBatchElement *)0x0) {
            pFVar15 = (FMeshBatchElement *)pFVar15[1].PrimitiveUniformBuffer;
          }
          FOITSceneData::Deallocate(&this->Scene->OITSceneData,pFVar15);
        }
        pFVar13 = (FName *)(ulonglong)(uVar18 + 1);
        pFVar21 = pFVar21 + 0x1e;
      } while ((int)(uVar18 + 1) < (this->StaticMeshes).ArrayNum);
    }
    DestructItems<FStaticMeshBatch,int>
              ((FStaticMeshBatch *)(this->StaticMeshes).AllocatorInstance.Data,
               (this->StaticMeshes).ArrayNum);
    piVar2 = &(this->StaticMeshes).ArrayMax;
    (this->StaticMeshes).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,0,&(this->StaticMeshes).AllocatorInstance,0,piVar2);
    }
    (this->StaticMeshRelevances).ArrayNum = 0;
    if ((this->StaticMeshRelevances).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->StaticMeshRelevances).AllocatorInstance,0,piVar1);
    }
    RemoveCachedMeshDrawCommands(this);
    RemoveCachedNaniteMaterialBins(this);
    RemoveCachedRayTracingPrimitives(this);
  }
  if (this->bRegisteredLightmapVirtualTextureProducerCallback) {
    this_03 = FVirtualTextureSystem::Get();
    FVirtualTextureSystem::RemoveAllProducerDestroyedCallbacks(this_03,this);
    this->bRegisteredLightmapVirtualTextureProducerCallback = false;
  }
  if ((bool)this->Proxy->bShouldNotifyOnWorldAddRemove) {
    FVar8 = this->Proxy->LevelName;
    pFVar7 = this->Scene;
    uVar12 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
    if (*(int *)&(pFVar7->PrimitivesNeedingLevelUpdateNotification).field_0x8 !=
        *(int *)&(pFVar7->PrimitivesNeedingLevelUpdateNotification).field_0x34) {
      puVar16 = *(undefined1 **)&(pFVar7->PrimitivesNeedingLevelUpdateNotification).field_0x40;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = &(pFVar7->PrimitivesNeedingLevelUpdateNotification).field_0x38;
      }
      uVar12 = *(uint *)(puVar16 +
                        (ulonglong)
                        (*(int *)&(pFVar7->PrimitivesNeedingLevelUpdateNotification).field_0x48 - 1U
                        & FVar8.Number + uVar12) * 4);
      if (uVar12 != 0xffffffff) {
        do {
          pFVar13 = (FName *)((longlong)(int)uVar12 * 0x20 +
                             *(longlong *)&pFVar7->PrimitivesNeedingLevelUpdateNotification);
          if (*pFVar13 == FVar8) {
            pFVar21 = pFVar13 + 1;
            if (pFVar13 == (FName *)0x0) {
              pFVar21 = pFVar22;
            }
            if (pFVar21 == (FName *)0x0) {
              return;
            }
            uVar12 = this->LevelUpdateNotificationIndex;
            uVar18 = 0;
            if ((int)uVar12 < (int)pFVar21[1].ComparisonIndex.Value) {
              uVar18 = ~uVar12 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar18 = pFVar21[1].ComparisonIndex.Value;
            iVar26 = uVar18 + ~uVar12;
            if (1 < iVar26) {
              iVar26 = 1;
            }
            if (iVar26 != 0) {
              memmove((void *)((longlong)*pFVar21 + (longlong)(int)uVar12 * 8),
                      (void *)((longlong)*pFVar21 + (longlong)(int)(uVar18 - iVar26) * 8),
                      (longlong)iVar26 << 3);
            }
            uVar12 = pFVar21[1].ComparisonIndex.Value - 1;
            pFVar21[1].ComparisonIndex.Value = uVar12;
            if (uVar12 == 0) {
              pFVar7 = this->Scene;
              FVar8 = this->Proxy->LevelName;
              if (*(int *)&(pFVar7->PrimitivesNeedingLevelUpdateNotification).field_0x8 ==
                  *(int *)&(pFVar7->PrimitivesNeedingLevelUpdateNotification).field_0x34) {
                return;
              }
              local_58 = FVar8;
              uVar12 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
              TSet<TTuple<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                   *)&pFVar7->PrimitivesNeedingLevelUpdateNotification,
                                  FVar8.Number + uVar12,&local_58);
              return;
            }
            iVar26 = this->LevelUpdateNotificationIndex;
            if ((int)uVar12 <= iVar26) {
              return;
            }
            if ((iVar26 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(int *)(*(longlong *)((longlong)*pFVar21 + (longlong)iVar26 * 8) + 0x220) = iVar26;
            return;
          }
          uVar12 = pFVar13[3].ComparisonIndex.Value;
        } while (uVar12 != 0xffffffff);
      }
    }
  }
  return;
}

// RemoveStaticMeshes @ 1452d21e0

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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RemoveStaticMeshes(FPrimitiveSceneInfo *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMeshBatchElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  bVar3 = OIT::IsSortedTrianglesEnabled(GMaxRHIShaderPlatform);
  if ((bVar3) && (uVar7 = 0, 0 < (this->StaticMeshes).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->StaticMeshes).ArrayNum) {
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
      pFVar5 = (FMeshBatchElement *)((this->StaticMeshes).AllocatorInstance.Data + lVar6);
      if (0 < *(int *)&pFVar5[1].PrimitiveUniformBufferResource) {
        if ((FMeshBatchElement *)pFVar5[1].PrimitiveUniformBuffer != (FMeshBatchElement *)0x0) {
          pFVar5 = (FMeshBatchElement *)pFVar5[1].PrimitiveUniformBuffer;
        }
        FOITSceneData::Deallocate(&this->Scene->OITSceneData,pFVar5);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0xf0;
    } while ((int)uVar7 < (this->StaticMeshes).ArrayNum);
  }
  DestructItems<FStaticMeshBatch,int>
            ((FStaticMeshBatch *)(this->StaticMeshes).AllocatorInstance.Data,
             (this->StaticMeshes).ArrayNum);
  piVar1 = &(this->StaticMeshes).ArrayMax;
  (this->StaticMeshes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,8,0,&(this->StaticMeshes).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->StaticMeshRelevances).ArrayMax;
  (this->StaticMeshRelevances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->StaticMeshRelevances).AllocatorInstance,0,piVar1);
  }
  RemoveCachedMeshDrawCommands(this);
  RemoveCachedNaniteMaterialBins(this);
  RemoveCachedRayTracingPrimitives(this);
  return;
}

// RequestGPUSceneUpdate @ 1452d2550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FPrimitiveSceneInfo::RequestGPUSceneUpdate(FPrimitiveSceneInfo *this,EPrimitiveDirtyState param_1)

{
  if (((this->Scene != (FScene *)0x0) && (this->PackedIndex != -1)) &&
     (this->PackedIndex != 0x7fffffff)) {
    FGPUScene::AddPrimitiveToUpdate
              (&this->Scene->GPUScene,(FPersistentPrimitiveIndex)(this->PersistentIndex).Index,
               param_1);
    return true;
  }
  return false;
}

// RequestStaticMeshUpdate @ 1452d25a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::RequestStaticMeshUpdate(FPrimitiveSceneInfo *this)

{
  uint *puVar1;
  int iVar2;
  FScene *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  
  iVar2 = this->PackedIndex;
  if ((iVar2 != -1) && (iVar2 != 0x7fffffff)) {
    pFVar3 = this->Scene;
    if ((iVar2 < 0) || ((pFVar3->PrimitivesNeedingStaticMeshUpdate).NumBits <= iVar2)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar6 = (pFVar3->PrimitivesNeedingStaticMeshUpdate).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&pFVar3->PrimitivesNeedingStaticMeshUpdate;
    }
    puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
  }
  return;
}

// RequestUniformBufferUpdate @ 1452d2650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveSceneInfo::RequestUniformBufferUpdate(FPrimitiveSceneInfo *this)

{
  uint *puVar1;
  int iVar2;
  FScene *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ForElementType<unsigned_int> FVar7;
  
  iVar2 = this->PackedIndex;
  if ((iVar2 != -1) && (iVar2 != 0x7fffffff)) {
    pFVar3 = this->Scene;
    if ((iVar2 < 0) || ((pFVar3->PrimitivesNeedingUniformBufferUpdate).NumBits <= iVar2)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    FVar7 = (pFVar3->PrimitivesNeedingUniformBufferUpdate).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&pFVar3->PrimitivesNeedingUniformBufferUpdate;
    }
    puVar1 = (uint *)((longlong)FVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
    return true;
  }
  return false;
}

// SetCachedRayTracingInstanceGeometryRHI @ 1452d2f40

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
FPrimitiveSceneInfo::SetCachedRayTracingInstanceGeometryRHI
          (FPrimitiveSceneInfo *this,FRHIRayTracingGeometry *param_1,uint param_2)

{
  uchar *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar5;
  
  iVar2 = (this->RayTracingLODData).ArrayNum;
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingLODData.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x5a8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->RayTracingLODData).ArrayNum < 1) {
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
    FVar5 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
      FVar5 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)&this->RayTracingLODData;
    }
    if (*(FRayTracingSBTAllocation **)FVar5 != (FRayTracingSBTAllocation *)0x0) {
      FRayTracingShaderBindingTable::FreeStaticRange
                (&this->Scene->RayTracingSBT,*(FRayTracingSBTAllocation **)FVar5);
      *(undefined8 *)FVar5 = 0;
      puVar1 = (uchar *)((longlong)FVar5 + 0x20);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      if (*(int *)((longlong)FVar5 + 0x24) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)((longlong)FVar5 + 0x18),0,
                   (int *)((longlong)FVar5 + 0x24));
      }
      puVar1 = (uchar *)((longlong)FVar5 + 0x30);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      if (*(int *)((longlong)FVar5 + 0x34) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)((longlong)FVar5 + 0x28),0,
                   (int *)((longlong)FVar5 + 0x34));
      }
    }
    AllocateRayTracingSBT(this,param_1,param_2);
    CacheRayTracingShaderBindingData(this,param_1);
    if (this->RayTracingInstanceIndexMain != 0xffffffff) {
      FRayTracingScene::UpdateCachedInstanceGeometry
                (&this->Scene->RayTracingScene,this->RayTracingInstanceIndexMain,param_1,
                 *(int *)((longlong)FVar5 + 0x44));
    }
    if (this->RayTracingInstanceIndexDecal != 0xffffffff) {
      FRayTracingScene::UpdateCachedInstanceGeometry
                (&this->Scene->RayTracingScene,this->RayTracingInstanceIndexDecal,param_1,
                 *(int *)((longlong)FVar5 + 0x44));
    }
    this->bIsCachedRayTracingInstanceValid = false;
    this->field_0x1a3 = this->field_0x1a3 | -(param_1 != (FRHIRayTracingGeometry *)0x0) & 0x40U;
  }
  return;
}

// SetupCachedRayTracingInstance @ 1452d3a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::SetupCachedRayTracingInstance
          (FPrimitiveSceneInfo *param_1,FRayTracingInstance *param_2,
          FRayTracingGeometryInstance *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  FPrimitiveSceneProxy *pFVar3;
  code *pcVar4;
  bool bVar5;
  ERayTracingMode EVar6;
  FRHIRayTracingGeometry *pFVar7;
  FRayTracingMaskAndFlags local_res8;
  
  if ((((param_2->InstanceTransforms).ArrayNum != 0) ||
      ((param_2->InstanceTransformsView).ArrayNum != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingInstance.InstanceTransforms.IsEmpty() && RayTracingInstance.InstanceTransformsView.IsEmpty()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x55a,
                         L"Primitives with ERayTracingPrimitiveFlags::CacheInstances get instances transforms from GPUScene"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->Proxy;
  param_1->CachedRayTracingGeometry = param_2->Geometry;
  param_3->NumTransforms = param_2->NumTransforms;
  param_3->BaseInstanceSceneDataOffset = param_1->InstanceSceneDataOffset;
  EVar6 = Nanite::GetRayTracingMode();
  if ((EVar6 == Fallback) || (pFVar3->bIsNaniteMesh == '\0')) {
    if ((param_2->Geometry == (FRayTracingGeometry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RayTracingInstance.Geometry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x571,L"Cached ray tracing instances must have valid geometries."),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_3->GeometryRHI = (param_2->Geometry->RayTracingGeometryRHI).Reference;
    *param_4 = (param_2->Geometry->Initializer).Segments.ArrayNum;
  }
  else {
    pFVar7 = Nanite::FRayTracingManager::GetRayTracingGeometry
                       ((FRayTracingManager *)&Nanite::GRayTracingManager,param_1);
    param_3->GeometryRHI = pFVar7;
    if (pFVar7 != (FRHIRayTracingGeometry *)0x0) {
      *param_4 = (pFVar7->Initializer).Segments.ArrayNum;
    }
  }
  if (((param_1->PersistentIndex).Index == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneInfo->GetPersistentIndex().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                         ,0x578,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = param_1->InstanceSceneDataOffset;
  param_3->bIncrementUserDataPerInstance = true;
  param_3->DefaultUserData = uVar1;
  bVar5 = param_2->bApplyLocalBoundsTransform;
  param_3->Flags = None;
  param_3->field_0x50 = param_3->field_0x50 ^ (param_3->bApplyLocalBoundsTransform ^ bVar5) & 1U;
  if ((param_2->Materials).ArrayNum == 0) {
    iVar2 = (param_2->MaterialsView).ArrayNum;
  }
  else {
    if (((param_2->MaterialsView).ArrayNum != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaterialsView.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                           ,0x27,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (param_2->Materials).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iVar2 == 0) {
    local_res8.Mask = '\0';
    local_res8 = (FRayTracingMaskAndFlags)0x0;
  }
  else {
    local_res8 = BuildRayTracingInstanceMaskAndFlags(param_2,pFVar3);
  }
  param_3->Mask = local_res8.Mask;
  if (local_res8.bForceOpaque != 0) {
    param_3->Flags = param_3->Flags | ForceOpaque;
  }
  if (local_res8.bDoubleSided != 0) {
    param_3->Flags = param_3->Flags | TriangleCullDisable;
  }
  if (local_res8.bReverseCulling != 0) {
    param_3->Flags = param_3->Flags | TriangleCullReverse;
  }
  return;
}

// UnlinkAttachmentGroup @ 1452d6a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::UnlinkAttachmentGroup(FPrimitiveSceneInfo *this)

{
  FScene *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAttachmentGroupSceneInfo *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  FPrimitiveComponentId *pFVar9;
  FPrimitiveSceneInfo *local_res8;
  
  uVar6 = (this->LightingAttachmentRoot).PrimIDValue;
  if (uVar6 == 0) {
    if (this->Proxy->bLightAttachmentsAsGroup == '\0') {
      return;
    }
    pFVar5 = TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
             ::Find((TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                     *)&this->Scene->AttachmentGroups,&this->PrimitiveComponentId);
    if (pFVar5 == (FAttachmentGroupSceneInfo *)0x0) {
      return;
    }
    pFVar5->ParentSceneInfo = (FPrimitiveSceneInfo *)0x0;
    if ((pFVar5->Primitives).ArrayNum != 0) {
      return;
    }
    pFVar1 = this->Scene;
    if (*(int *)&(pFVar1->AttachmentGroups).field_0x8 ==
        *(int *)&(pFVar1->AttachmentGroups).field_0x34) {
      return;
    }
    uVar6 = (this->PrimitiveComponentId).PrimIDValue;
    pFVar9 = &this->PrimitiveComponentId;
  }
  else {
    pFVar1 = this->Scene;
    if (*(int *)&(pFVar1->AttachmentGroups).field_0x8 !=
        *(int *)&(pFVar1->AttachmentGroups).field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar1->AttachmentGroups).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar1->AttachmentGroups).field_0x38;
      }
      iVar4 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(pFVar1->AttachmentGroups).field_0x48 - 1U & uVar6) * 4);
      if (iVar4 != -1) {
        do {
          lVar8 = *(longlong *)&pFVar1->AttachmentGroups + (longlong)iVar4 * 0x28;
          if (*(uint *)(*(longlong *)&pFVar1->AttachmentGroups + (longlong)iVar4 * 0x28) == uVar6) {
            if (lVar8 != 0) goto LAB_1452d6ac0;
            goto LAB_1452d6a9a;
          }
          iVar4 = *(int *)(lVar8 + 0x20);
        } while (iVar4 != -1);
      }
    }
    lVar8 = 0;
LAB_1452d6a9a:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_1452d6ac0:
    local_res8 = this;
    TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>::RemoveSwap
              ((TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x10),
               &local_res8,Default);
    if (*(int *)(lVar8 + 0x18) != 0) {
      return;
    }
    if (*(longlong *)(lVar8 + 8) != 0) {
      return;
    }
    pFVar1 = this->Scene;
    if (*(int *)&(pFVar1->AttachmentGroups).field_0x8 ==
        *(int *)&(pFVar1->AttachmentGroups).field_0x34) {
      return;
    }
    uVar6 = (this->LightingAttachmentRoot).PrimIDValue;
    pFVar9 = &this->LightingAttachmentRoot;
  }
  TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
  ::RemoveImpl<FPrimitiveComponentId>
            ((TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
              *)&pFVar1->AttachmentGroups,uVar6,pFVar9);
  return;
}

// UnlinkLODParentComponent @ 1452d6b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::UnlinkLODParentComponent(FPrimitiveSceneInfo *this)

{
  if ((this->LODParentComponentId).PrimIDValue != 0) {
    FLODSceneTree::RemoveChildNode
              (&this->Scene->SceneLODHierarchy,
               (FPrimitiveComponentId)(this->LODParentComponentId).PrimIDValue,this);
    return;
  }
  return;
}

// UpdateCachedRaytracingData @ 1452d6bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::UpdateCachedRaytracingData
          (FScene *param_1,TArrayView<FPrimitiveSceneInfo_*,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = param_2->ArrayNum;
  if (0 < iVar6) {
    uVar5 = 0;
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar6) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = *(uint *)(*(longlong *)(lVar7 + (longlong)param_2->DataPtr) + 0x188);
      uVar4 = 0;
      if ((int)uVar3 < (param_1->PrimitiveRayTracingDatas).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (-1 < (char)(param_1->PrimitiveRayTracingDatas).AllocatorInstance.Data
                     [(longlong)(int)uVar3 * 8]) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Scene->PrimitiveRayTracingDatas[SceneInfo->GetIndex()].bCachedRaytracingDataDirty"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                           ,0x847,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < iVar6);
    CacheRayTracingPrimitives(param_1,param_2);
  }
  return;
}

// UpdateComponentLastRenderTime @ 1452d6d00

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
FPrimitiveSceneInfo::UpdateComponentLastRenderTime
          (FPrimitiveSceneInfo *this,float param_1,bool param_2)

{
  FUpdateLastRenderTime local_38;
  
  FPrimitiveSceneInfoData::SetLastRenderTime(this->SceneData,param_1,param_2);
  if (((param_2) && (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0)) &&
     (FSimpleStreamableAssetManager::GSimpleStreamableAssetManagerConsiderVisibility != 0)) {
    local_38.field1_0x10 = (FUpdateLastRenderTime_u_16)this->Proxy;
    local_38.ObjectRegistrationIndex.Object =
         ((local_38.field1_0x10.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).Object;
    local_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController =
         ((local_38.field1_0x10.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).
         SharedReferenceCount.ReferenceController;
    if (local_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.LastRenderedTime = param_1;
    FSimpleStreamableAssetManager::Update(&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController);
  }
  FPrimitiveSceneProxy::BoostPrecachedPSORequestsOnDraw(this->Proxy);
  return;
}

// UpdateIndirectLightingCacheBuffer @ 1452d6da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrimitiveSceneInfo::UpdateIndirectLightingCacheBuffer
          (FPrimitiveSceneInfo *this,FRHICommandListBase *param_1,FIndirectLightingCache *param_2,
          FIndirectLightingCacheAllocation *param_3,TVector<double> *param_4,uint param_5,
          FVolumetricLightmapSceneData *param_6)

{
  ERHIPipeline EVar1;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_198 [32];
  TVector<double>_u_0 local_158;
  FIndirectLightingCacheUniformParameters local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_138.PointSkyBentNormal.field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_138.PointSkyBentNormal.field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHCoefficients0.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHCoefficients0.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHCoefficients0.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHCoefficients0.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHCoefficients0.Elements[2].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHCoefficients0.Elements[2].field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHCoefficients1.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHCoefficients1.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHCoefficients1.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHCoefficients1.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHCoefficients1.Elements[2].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHCoefficients1.Elements[2].field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHCoefficients2.field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHCoefficients2.field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingSHSingleCoefficient.field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_138.IndirectLightingSHSingleCoefficient.field0_0x0._8_8_ = _UNK_150689648;
  local_138.IndirectLightingCacheTexture0 = (FRHITexture *)0x0;
  local_138.IndirectLightingCacheTexture1 = (FRHITexture *)0x0;
  local_138.IndirectLightingCacheTextureSampler1 = (FRHISamplerState *)0x0;
  local_138.IndirectLightingCacheTextureSampler2 = (FRHISamplerState *)0x0;
  local_158._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_158._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_138.IndirectLightingCacheTexture2 = (FRHITexture *)0x0;
  local_138.IndirectLightingCacheTextureSampler0 = (FRHISamplerState *)0x0;
  local_158._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  GetIndirectLightingCacheParameters
            (*(Type *)&this->Scene->field_0x8,&local_138,param_2,param_3,
             (TVector<double> *)&local_158._s_0,param_5,param_6);
  TVar2 = this->IndirectLightingCacheUniformBuffer;
  if (TVar2 != (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
    EVar1 = param_1->ActivePipelines;
    if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,TVar2,&local_138);
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,TVar2,&local_138);
    }
  }
  return;
}

// UpdateIndirectLightingCacheBuffer @ 1452d6f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrimitiveSceneInfo::UpdateIndirectLightingCacheBuffer
          (FPrimitiveSceneInfo *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  uchar uVar2;
  FPrimitiveSceneProxy *pFVar3;
  FScene *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FPrimitiveSceneInfo::UpdateIndirectLightingCacheBuffer(FRHICommandListBase_&)_::_5_::FStat_STAT_UpdateIndirectLightingCacheBuffer>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  FIndirectLightingCache *pFVar14;
  FIndirectLightingCacheAllocation *pFVar15;
  FNameEntryId FVar16;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FVolumetricLightmapSceneData *pFVar17;
  TVector<double>_u_0 local_48;
  
  if (!this->bIndirectLightingCacheBufferDirty) {
    return;
  }
  FVar16.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UpdateIndirectLightingCacheBuffer ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FPrimitiveSceneInfo::UpdateIndirectLightingCacheBuffer(FRHICommandListBase_&)_::_5_::FStat_STAT_UpdateIndirectLightingCacheBuffer>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res8.s,"STAT_UpdateIndirectLightingCacheBuffer");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateIndirectLightingCacheBuffer,
                 *pFVar10,L"STAT_UpdateIndirectLightingCacheBuffer","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_UpdateIndirectLightingCacheBuffer;
  if (StatPtr_STAT_UpdateIndirectLightingCacheBuffer ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FPrimitiveSceneInfo::UpdateIndirectLightingCacheBuffer(FRHICommandListBase_&)_::_5_::FStat_STAT_UpdateIndirectLightingCacheBuffer>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_UpdateIndirectLightingCacheBuffer");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FPrimitiveSceneInfo::UpdateIndirectLightingCacheBuffer(FRHICommandListBase_&)_::_5_::FStat_STAT_UpdateIndirectLightingCacheBuffer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UpdateIndirectLightingCacheBuffer,*pFVar10,
                          L"STAT_UpdateIndirectLightingCacheBuffer","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar9 == 0)) {
LAB_1452d70d5:
    bVar6 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x996);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1452d70d5;
    local_res8.s.LowPart = FVar12.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar6 = true;
    FVar16.Value = FVar12.Value;
  }
  if ((*(int *)&this->Scene->field_0x8 < 3) &&
     (bVar8 = FVolumetricLightmapSceneData::HasData(&this->Scene->VolumetricLightmapSceneData),
     bVar8)) {
    pFVar3 = this->Proxy;
    uVar2 = (pFVar3->Mobility).Value;
    if (((uVar2 != '\x02') &&
        (((uVar2 != '\x01' && (pFVar3->bNeedsUnbuiltPreviewLighting == '\0')) &&
         (pFVar3->LightmapType != ForceVolumetric)))) || (pFVar3->bWillEverBeLit == 0))
    goto LAB_1452d715c;
    pFVar4 = this->Scene;
    uVar9 = (**(code **)(*(longlong *)pFVar4 + 0x4e8))(pFVar4);
    pFVar3 = this->Proxy;
    local_48._s_0.Z = (pFVar3->Bounds).Origin.field0_0x0._s_0.Z;
    local_48._0_4_ = *(undefined4 *)&(pFVar3->Bounds).Origin.field0_0x0;
    local_48._4_4_ = *(undefined4 *)((longlong)&(pFVar3->Bounds).Origin.field0_0x0 + 4);
    local_48._8_4_ = *(undefined4 *)((longlong)&(pFVar3->Bounds).Origin.field0_0x0 + 8);
    local_48._12_4_ = *(undefined4 *)((longlong)&(pFVar3->Bounds).Origin.field0_0x0 + 0xc);
    pFVar17 = &pFVar4->VolumetricLightmapSceneData;
  }
  else {
LAB_1452d715c:
    pFVar15 = this->IndirectLightingCacheAllocation;
    if (((pFVar15 != (FIndirectLightingCacheAllocation *)0x0) &&
        (pFVar14 = &this->Scene->IndirectLightingCache,
        (int)(this->Scene->IndirectLightingCache)._padding_ != -1)) &&
       (pFVar15->bHasEverUpdatedSingleSample != false)) {
      pFVar17 = (FVolumetricLightmapSceneData *)0x0;
      local_48._s_0.Z = 0.0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
      local_48._8_4_ = 0;
      local_48._12_4_ = 0;
      uVar9 = 0;
      goto LAB_1452d71c0;
    }
    pFVar17 = (FVolumetricLightmapSceneData *)0x0;
    local_48._s_0.Z = 0.0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_48._8_4_ = 0;
    local_48._12_4_ = 0;
    uVar9 = 0;
  }
  pFVar15 = (FIndirectLightingCacheAllocation *)0x0;
  pFVar14 = (FIndirectLightingCache *)0x0;
LAB_1452d71c0:
  UpdateIndirectLightingCacheBuffer
            (this,param_1,pFVar14,pFVar15,(TVector<double> *)&local_48._s_0,uVar9,pFVar17);
  this->bIndirectLightingCacheBufferDirty = false;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar13 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48._12_4_ = FVar13.Number & 0xffff6fff | 0x6000;
      local_48._8_4_ = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_48._s_0.X = (double)(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_48._s_0);
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
  return;
}

// UpdateOcclusionFlags @ 1452d7390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneInfo::UpdateOcclusionFlags(FPrimitiveSceneInfo *this)

{
  uint uVar1;
  FPrimitiveSceneProxy *pFVar2;
  FScene *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement FVar8;
  FScriptContainerElement FVar9;
  
  if ((this->PackedIndex != -1) && (this->PackedIndex != 0x7fffffff)) {
    cVar5 = (**(code **)(this->Proxy->_padding_ + 0x138))();
    FVar9 = (FScriptContainerElement)0x0;
    if (cVar5 != '\0') {
      FVar9 = (FScriptContainerElement)0x0;
      if (this->Proxy->bIsFirstPerson == 0) {
        FVar9 = (FScriptContainerElement)0x1;
      }
    }
    cVar5 = (**(code **)(this->Proxy->_padding_ + 0x150))();
    pFVar2 = this->Proxy;
    FVar8 = (FScriptContainerElement)((byte)FVar9 | 0x10);
    if (cVar5 == '\0') {
      FVar8 = FVar9;
    }
    if ((pFVar2->bAllowApproximateOcclusion != '\0') ||
       ((this->LightingAttachmentRoot).PrimIDValue != 0)) {
      FVar8 = (FScriptContainerElement)((byte)FVar8 | 4);
    }
    pFVar3 = this->Scene;
    uVar1 = this->PackedIndex;
    FVar9 = (FScriptContainerElement)((byte)FVar8 | 8);
    if (pFVar2->VisibilityId < 0) {
      FVar9 = FVar8;
    }
    FVar8 = (FScriptContainerElement)((byte)FVar9 | 0x20);
    if (pFVar2->bForceHidden == '\0') {
      FVar8 = FVar9;
    }
    uVar7 = 0;
    if ((int)uVar1 < (pFVar3->PrimitiveOcclusionFlags).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
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
    (pFVar3->PrimitiveOcclusionFlags).AllocatorInstance.Data[(int)uVar1] = FVar8;
  }
  return;
}

// UpdateStaticLightingBuffer @ 1452d74c0

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

int __thiscall FPrimitiveSceneInfo::UpdateStaticLightingBuffer(FPrimitiveSceneInfo *this)

{
  FLightCacheInterface *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FVirtualTextureSystem *pFVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  FVirtualTextureProducerHandle local_78 [2];
  undefined1 local_70 [64];
  undefined1 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->bRegisteredLightmapVirtualTextureProducerCallback) {
    pFVar5 = FVirtualTextureSystem::Get();
    FVirtualTextureSystem::RemoveAllProducerDestroyedCallbacks(pFVar5,this);
    this->bRegisteredLightmapVirtualTextureProducerCallback = false;
  }
  uVar8 = 0;
  local_24 = 8;
  local_30 = (undefined1 *)0x0;
  local_28 = 0;
  (**(code **)(this->Proxy->_padding_ + 0x1e8))(this->Proxy,local_70);
  uVar9 = uVar8;
  if (0 < local_28) {
    do {
      uVar7 = (uint)uVar8;
      uVar3 = 0;
      if ((int)uVar7 < local_28) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_88 = (longlong)(int)uVar7;
        local_80 = (longlong)local_28;
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
      puVar6 = local_70;
      if (local_30 != (undefined1 *)0x0) {
        puVar6 = local_30;
      }
      this_00 = *(FLightCacheInterface **)(puVar6 + uVar9);
      if (this_00 != (FLightCacheInterface *)0x0) {
        FLightCacheInterface::CreatePrecomputedLightingUniformBuffer_RenderingThread
                  (this_00,*(Type *)&this->Scene->field_0x8);
        local_78[0].PackedValue = 0;
        bVar2 = FLightCacheInterface::GetVirtualTextureLightmapProducer
                          (this_00,*(Type *)&this->Scene->field_0x8,local_78);
        if (bVar2) {
          pFVar5 = FVirtualTextureSystem::Get();
          FVirtualTextureSystem::AddProducerDestroyedCallback
                    (pFVar5,local_78,OnLightmapVirtualTextureDestroyed,this);
          this->bRegisteredLightmapVirtualTextureProducerCallback = true;
        }
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar7 + 1) < local_28);
  }
  iVar4 = local_28;
  if (local_30 != (undefined1 *)0x0) {
    FMemory::Free(local_30);
  }
  return iVar4;
}

// UpdateStaticMeshes @ 1452d7690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPrimitiveSceneInfo::UpdateStaticMeshes
          (FScene *param_1,TArrayView<FPrimitiveSceneInfo_*,int> *param_2,
          EUpdateStaticMeshFlags param_3,bool param_4)

{
  uint *puVar1;
  FPrimitiveSceneInfo *this;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FPrimitiveSceneInfo::UpdateStaticMeshes(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,EUpdateStaticMeshFlags,bool)_::_2_::FStat_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes>
  FVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  int iVar18;
  FName FVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  bool bVar23;
  FColor_u_0 local_90;
  uint local_8c;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_68;
  FName local_60;
  TArrayView<FPrimitiveSceneInfo_*,int> local_58;
  
  bVar7 = false;
  bVar5 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FPrimitiveSceneInfo::UpdateStaticMeshes(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,EUpdateStaticMeshFlags,bool)_::_2_::FStat_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes>
         )0x0) {
      pFVar14 = ::FName::FName(&local_68,"STAT_FPrimitiveSceneInfo_UpdateStaticMeshes");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes,
                 *pFVar14,L"STAT_FPrimitiveSceneInfo_UpdateStaticMeshes","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes;
  if (StatPtr_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FPrimitiveSceneInfo::UpdateStaticMeshes(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,EUpdateStaticMeshFlags,bool)_::_2_::FStat_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes>
       )0x0) {
    pFVar14 = ::FName::FName(&local_60,"STAT_FPrimitiveSceneInfo_UpdateStaticMeshes");
    FVar15 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FPrimitiveSceneInfo::UpdateStaticMeshes(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,EUpdateStaticMeshFlags,bool)_::_2_::FStat_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FPrimitiveSceneInfo_UpdateStaticMeshes,*pFVar14,
                          L"STAT_FPrimitiveSceneInfo_UpdateStaticMeshes","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar9 = false;
  bVar11 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar5, bVar6 = bVar7, FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_90.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_90._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar5 = true;
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_88.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
                   ,0x80b);
        bVar7 = true;
        bVar5 = true;
        bVar9 = true;
        bVar11 = true;
      }
    }
    bVar4 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_80 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar9 = true;
      bVar11 = true;
      goto LAB_1452d7845;
    }
  }
  bVar7 = bVar9;
  bVar5 = bVar11;
  bVar11 = false;
  bVar9 = false;
  local_80 = local_78;
  FVar19 = local_78;
LAB_1452d7845:
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2060,"FPrimitiveSceneInfo_UpdateStaticMeshes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PrimitiveSceneInfo.cpp"
               ,0x80c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2060);
  }
  if (((param_3 & RayTracingCommands) == 0) && (bVar10 = IsRayTracingEnabled(), bVar10)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  uVar20 = param_3 & 2;
  if (((param_3 & RasterCommands) == 0) || (!bVar10)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((!param_4) || (bVar8 = false, !bVar10)) {
    bVar8 = true;
  }
  iVar18 = param_2->ArrayNum;
  uVar22 = 0;
  local_8c = uVar20;
  if (0 < iVar18) {
    lVar21 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar22 < iVar18) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = *(FPrimitiveSceneInfo **)((longlong)param_2->DataPtr + lVar21);
      iVar18 = this->PackedIndex;
      if (((iVar18 < 0) || ((param_1->PrimitivesNeedingStaticMeshUpdate).NumBits <= iVar18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar20 = local_8c;
      FVar2 = (param_1->PrimitivesNeedingStaticMeshUpdate).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&param_1->PrimitivesNeedingStaticMeshUpdate;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar2;
      }
      iVar12 = iVar18;
      if (iVar18 < 0) {
        iVar12 = iVar18 + 0x1f;
      }
      puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar12 >> 5) * 4);
      uVar13 = 1 << ((byte)iVar18 & 0x1f);
      uVar16 = *puVar1;
      if (bVar8) {
        uVar16 = uVar16 | uVar13;
      }
      else {
        uVar16 = uVar16 & ~uVar13;
      }
      *puVar1 = uVar16;
      if (local_8c != 0) {
        RemoveCachedMeshDrawCommands(this);
        RemoveCachedNaniteMaterialBins(this);
      }
      if ((param_3 & RayTracingCommands) != 0) {
        RemoveCachedRayTracingPrimitives(this);
      }
      if (((this->Proxy != (FPrimitiveSceneProxy *)0x0) && (this->Proxy->bIsNaniteMesh != '\0')) &&
         ((this->Scene != (FScene *)0x0 &&
          ((this->PackedIndex != -1 && (this->PackedIndex != 0x7fffffff)))))) {
        FGPUScene::AddPrimitiveToUpdate
                  (&this->Scene->GPUScene,(FPersistentPrimitiveIndex)(this->PersistentIndex).Index,
                   ChangedOther);
      }
      iVar18 = param_2->ArrayNum;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 8;
      FVar19 = local_80;
      bVar4 = bVar5;
      bVar6 = bVar7;
      bVar11 = bVar9;
    } while ((int)uVar22 < iVar18);
  }
  if (param_4) {
    if (uVar20 != 0) {
      local_58.DataPtr = param_2->DataPtr;
      local_58.ArrayNum = param_2->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
      CacheMeshDrawCommands(param_1,&local_58);
      CacheNaniteMaterialBins(param_1,param_2);
    }
    if ((param_3 & RayTracingCommands) != 0) {
      CacheRayTracingPrimitives(param_1,param_2);
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// GetRayTracingLODData @ 145325980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRayTracingLODData * __thiscall
FPrimitiveSceneInfo::GetRayTracingLODData(FPrimitiveSceneInfo *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRayTracingLODData *pFVar4;
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> FVar5;
  
  uVar3 = 0;
  if ((int)param_1 < (this->RayTracingLODData).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRayTracingLODData *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->RayTracingLODData).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
    FVar5 = (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)&this->RayTracingLODData;
  }
  return (FRayTracingLODData *)((longlong)FVar5 + (longlong)(int)param_1 * 0x50);
}

