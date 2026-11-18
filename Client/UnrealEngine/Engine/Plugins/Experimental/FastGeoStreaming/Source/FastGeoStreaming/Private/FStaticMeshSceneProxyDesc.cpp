// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// FStaticMeshSceneProxyDesc @ 14da1a260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStaticMeshSceneProxyDesc * __thiscall
FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
          (FStaticMeshSceneProxyDesc *this,FStaticMeshSceneProxyDesc *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UMaterialCacheVirtualTexture_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  UMaterialInterface *pUVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc
            ((FPrimitiveSceneProxyDesc *)this,(FPrimitiveSceneProxyDesc *)param_1);
  pTVar2 = &this->MaterialSlotsOverlayMaterial;
  this->_padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
  piVar1 = &(this->MaterialSlotsOverlayMaterial).ArrayMax;
  iVar5 = (param_1->OverrideMaterials).ArrayNum;
  uVar10 = *(undefined4 *)&(param_1->OverrideMaterials).field_0xc;
  (this->OverrideMaterials).DataPtr = (param_1->OverrideMaterials).DataPtr;
  (this->OverrideMaterials).ArrayNum = iVar5;
  *(undefined4 *)&(this->OverrideMaterials).field_0xc = uVar10;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->MaterialSlotsOverlayMaterial).ArrayNum;
  pFVar7 = (param_1->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar7,iVar5);
  }
  pTVar3 = &this->MaterialCacheTextures;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MaterialCacheTextures).ArrayMax;
  iVar5 = (param_1->MaterialCacheTextures).ArrayNum;
  pFVar7 = (param_1->MaterialCacheTextures).AllocatorInstance.Data;
  (this->MaterialCacheTextures).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 3);
  }
  iVar5 = (param_1->LODData).ArrayNum;
  uVar10 = *(undefined4 *)&(param_1->LODData).field_0xc;
  (this->LODData).DataPtr = (param_1->LODData).DataPtr;
  (this->LODData).ArrayNum = iVar5;
  *(undefined4 *)&(this->LODData).field_0xc = uVar10;
  this->StaticMesh = param_1->StaticMesh;
  this->BodySetup = param_1->BodySetup;
  this->LODParentPrimitive = param_1->LODParentPrimitive;
  this->MeshPaintTexture = param_1->MeshPaintTexture;
  this->NaniteResources = param_1->NaniteResources;
  pUVar8 = (param_1->OverlayMaterial).field0_0x0.DebugPtr;
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->MaterialRelevance).field0_0x0 = (param_1->MaterialRelevance).field0_0x0;
  this->OverlayMaterialMaxDrawDistance = param_1->OverlayMaterialMaxDrawDistance;
  this->NanitePixelProgrammableDistance = param_1->NanitePixelProgrammableDistance;
  this->DistanceFieldSelfShadowBias = param_1->DistanceFieldSelfShadowBias;
  this->DistanceFieldIndirectShadowMinVisibility = param_1->DistanceFieldIndirectShadowMinVisibility
  ;
  this->ForcedLodModel = param_1->ForcedLodModel;
  this->MinLOD = param_1->MinLOD;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->StaticLightMapResolution = param_1->StaticLightMapResolution;
  this->MeshPaintTextureCoordinateIndex = param_1->MeshPaintTextureCoordinateIndex;
  this->MaterialCacheTextureCoordinateIndex = param_1->MaterialCacheTextureCoordinateIndex;
  (this->WireframeColor).field0_0x0 = (param_1->WireframeColor).field0_0x0;
  uVar11 = (ZPULL(*(undefined4 *)&this->field_0x164,0,1) ^ param_1->bReverseCulling) & 1 ^
           *(undefined4 *)&this->field_0x164;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 2 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 4 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 8 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x10 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x20 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x40 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x80 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x100 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x200 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x400 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x800 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x1000 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0x164) & 0x2000 ^ uVar11;
  *(uint *)&this->field_0x164 = uVar11;
  uVar6 = *(uint *)&param_1->field_0x164;
  (this->CollisionResponseContainer).bIsSet = false;
  *(uint *)&this->field_0x164 = (uVar11 ^ uVar6) & 0x4000 ^ uVar11;
  bVar4 = (param_1->CollisionResponseContainer).bIsSet;
  (this->CollisionResponseContainer).bIsSet = bVar4;
  if (bVar4 != false) {
    uVar9 = *(undefined8 *)
             ((longlong)&(param_1->CollisionResponseContainer).TypedValue.field0_0x0 + 8);
    *(undefined8 *)&(this->CollisionResponseContainer).TypedValue.field0_0x0 =
         *(undefined8 *)&(param_1->CollisionResponseContainer).TypedValue.field0_0x0;
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)
             ((longlong)&(param_1->CollisionResponseContainer).TypedValue.field0_0x0 + 0x18);
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 0x10) =
         *(undefined8 *)
          ((longlong)&(param_1->CollisionResponseContainer).TypedValue.field0_0x0 + 0x10);
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 0x18) =
         uVar9;
  }
  this->LightmapType = param_1->LightmapType;
  return this;
}

