// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// FPrimitiveSceneProxyDesc @ 14da19930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc
          (FPrimitiveSceneProxyDesc *this,FPrimitiveSceneProxyDesc *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *_Src;
  uint uVar5;
  
  pTVar1 = &this->ActorOwners;
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxyDesc__6B_;
  this->Component = param_1->Component;
  this->Owner = param_1->Owner;
  this->World = param_1->World;
  piVar2 = &(this->ActorOwners).ArrayMax;
  iVar3 = (param_1->RuntimeVirtualTextures).ArrayNum;
  uVar4 = *(undefined4 *)&(param_1->RuntimeVirtualTextures).field_0xc;
  (this->RuntimeVirtualTextures).DataPtr = (param_1->RuntimeVirtualTextures).DataPtr;
  (this->RuntimeVirtualTextures).ArrayNum = iVar3;
  *(undefined4 *)&(this->RuntimeVirtualTextures).field_0xc = uVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ActorOwners).ArrayNum;
  _Src = (param_1->ActorOwners).AllocatorInstance.Data;
  (this->ActorOwners).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->CustomPrimitiveData = param_1->CustomPrimitiveData;
  this->Scene = param_1->Scene;
  this->PrimitiveComponentInterface = param_1->PrimitiveComponentInterface;
  this->AdditionalStatObjectPtr = param_1->AdditionalStatObjectPtr;
  this->HiddenEditorViews = param_1->HiddenEditorViews;
  (this->StatId).StatIdPtr = (param_1->StatId).StatIdPtr;
  uVar5 = (this->CastShadow ^ param_1->CastShadow) & 1 ^ *(uint *)&this->field_0x70;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 2 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 4 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 8 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x10 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x20 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x40 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x80 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x100 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x200 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x400 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x800 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x1000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x2000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x4000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x8000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x10000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x20000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x40000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x80000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x100000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x200000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x400000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x800000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x1000000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x2000000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x4000000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x8000000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x10000000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x20000000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x40000000 ^ uVar5;
  *(uint *)&this->field_0x70 = uVar5;
  *(uint *)&this->field_0x70 =
       (uVar5 ^ *(uint *)&param_1->field_0x70) & 0x7fffffff ^ *(uint *)&param_1->field_0x70;
  uVar5 = (this->bIsBeingMovedByEditor ^ param_1->bIsBeingMovedByEditor) & 1 ^
          *(uint *)&this->field_0x74;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 2 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 4 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 8 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x10 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x20 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x40 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x80 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x100 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x200 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x400 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x800 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x1000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x2000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x4000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x8000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x10000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x20000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x40000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x80000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x100000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x200000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x400000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x800000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x1000000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x2000000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x4000000 ^ uVar5;
  *(uint *)&this->field_0x74 = uVar5;
  *(uint *)&this->field_0x74 = (uVar5 ^ *(uint *)&param_1->field_0x74) & 0x8000000 ^ uVar5;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->TranslucencySortDistanceOffset = param_1->TranslucencySortDistanceOffset;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  this->LightingChannels = param_1->LightingChannels;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->ViewOwnerDepthPriorityGroup).Value = (param_1->ViewOwnerDepthPriorityGroup).Value;
  (this->Mobility).Value = (param_1->Mobility).Value;
  (this->IndirectLightingCacheQuality).Value = (param_1->IndirectLightingCacheQuality).Value;
  (this->DepthPriorityGroup).Value = (param_1->DepthPriorityGroup).Value;
  this->LightmapType = param_1->LightmapType;
  this->CustomDepthStencilWriteMask = param_1->CustomDepthStencilWriteMask;
  this->VirtualTextureRenderPassType = param_1->VirtualTextureRenderPassType;
  this->VirtualTextureLodBias = param_1->VirtualTextureLodBias;
  this->VirtualTextureMinCoverage = param_1->VirtualTextureMinCoverage;
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->VirtualTextureMainPassMaxDrawDistance = param_1->VirtualTextureMainPassMaxDrawDistance;
  (this->ComponentId).PrimIDValue = (param_1->ComponentId).PrimIDValue;
  this->VisibilityId = param_1->VisibilityId;
  this->CachedMaxDrawDistance = param_1->CachedMaxDrawDistance;
  this->MinDrawDistance = param_1->MinDrawDistance;
  this->BoundsScale = param_1->BoundsScale;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  this->FeatureLevel = param_1->FeatureLevel;
  this->MeshDrawCommandStatsCategory = param_1->MeshDrawCommandStatsCategory;
  return this;
}

