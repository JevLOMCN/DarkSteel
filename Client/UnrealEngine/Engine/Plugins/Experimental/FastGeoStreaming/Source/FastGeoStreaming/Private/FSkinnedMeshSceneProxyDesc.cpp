// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 2

// FSkinnedMeshSceneProxyDesc @ 14da19ed0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshSceneProxyDesc * __thiscall
FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
          (FSkinnedMeshSceneProxyDesc *this,FSkinnedMeshSceneProxyDesc *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  double dVar7;
  undefined4 uVar8;
  byte bVar9;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc
            ((FPrimitiveSceneProxyDesc *)this,(FPrimitiveSceneProxyDesc *)param_1);
  this->_padding_ = (longlong)&___7FSkinnedMeshSceneProxyDesc__6B_;
  (this->DebugDrawColor).bIsSet = false;
  bVar3 = (param_1->DebugDrawColor).bIsSet;
  (this->DebugDrawColor).bIsSet = bVar3;
  if (bVar3 != false) {
    uVar6 = *(undefined8 *)((longlong)&(param_1->DebugDrawColor).TypedValue.field0_0x0 + 8);
    *(undefined8 *)&(this->DebugDrawColor).TypedValue.field0_0x0 =
         *(undefined8 *)&(param_1->DebugDrawColor).TypedValue.field0_0x0;
    *(undefined8 *)((longlong)&(this->DebugDrawColor).TypedValue.field0_0x0 + 8) = uVar6;
  }
  pTVar2 = &this->MaterialSlotsOverlayMaterial;
  (this->MaterialRelevance).field0_0x0 = (param_1->MaterialRelevance).field0_0x0;
  iVar4 = (param_1->LODInfo).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->LODInfo).field_0xc;
  (this->LODInfo).DataPtr = (param_1->LODInfo).DataPtr;
  (this->LODInfo).ArrayNum = iVar4;
  *(undefined4 *)&(this->LODInfo).field_0xc = uVar8;
  this->MeshObject = param_1->MeshObject;
  this->PreviousMeshObject = param_1->PreviousMeshObject;
  this->SkinnedAsset = param_1->SkinnedAsset;
  this->PhysicsAsset = param_1->PhysicsAsset;
  this->OverlayMaterial = param_1->OverlayMaterial;
  piVar1 = &(this->MaterialSlotsOverlayMaterial).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->MaterialSlotsOverlayMaterial).ArrayNum;
  pFVar5 = (param_1->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar5,iVar4);
  }
  this->MeshDeformerInstances = param_1->MeshDeformerInstances;
  iVar4 = (param_1->OverrideMaterials).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->OverrideMaterials).field_0xc;
  (this->OverrideMaterials).DataPtr = (param_1->OverrideMaterials).DataPtr;
  (this->OverrideMaterials).ArrayNum = iVar4;
  *(undefined4 *)&(this->OverrideMaterials).field_0xc = uVar8;
  iVar4 = (param_1->SkinCacheUsage).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->SkinCacheUsage).field_0xc;
  (this->SkinCacheUsage).DataPtr = (param_1->SkinCacheUsage).DataPtr;
  (this->SkinCacheUsage).ArrayNum = iVar4;
  *(undefined4 *)&(this->SkinCacheUsage).field_0xc = uVar8;
  this->PredictedLODLevel = param_1->PredictedLODLevel;
  this->MaxDistanceFactor = param_1->MaxDistanceFactor;
  dVar7 = (param_1->ComponentScale).field0_0x0._s_0.Y;
  (this->ComponentScale).field0_0x0._s_0.X = (param_1->ComponentScale).field0_0x0._s_0.X;
  (this->ComponentScale).field0_0x0._s_0.Y = dVar7;
  (this->ComponentScale).field0_0x0._s_0.Z = (param_1->ComponentScale).field0_0x0._s_0.Z;
  this->StreamingDistanceMultiplier = param_1->StreamingDistanceMultiplier;
  this->NanitePixelProgrammableDistance = param_1->NanitePixelProgrammableDistance;
  this->CapsuleIndirectShadowMinVisibility = param_1->CapsuleIndirectShadowMinVisibility;
  this->OverlayMaterialMaxDrawDistance = param_1->OverlayMaterialMaxDrawDistance;
  bVar9 = (this->bForceWireframe ^ param_1->bForceWireframe) & 1 ^ this->field_0x180;
  this->field_0x180 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0x180) & 2 ^ bVar9;
  this->field_0x180 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0x180) & 4 ^ bVar9;
  this->field_0x180 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0x180) & 8 ^ bVar9;
  this->field_0x180 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0x180) & 0x10 ^ bVar9;
  this->field_0x180 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0x180) & 0x20 ^ bVar9;
  this->field_0x180 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0x180) & 0x40 ^ bVar9;
  this->field_0x180 = bVar9;
  this->field_0x180 = (bVar9 ^ param_1->field_0x180) & 0x7f ^ param_1->field_0x180;
  *(uint *)&this->field_0x184 =
       (ZPULL(*(undefined4 *)&this->field_0x184,0,1) ^ param_1->bSortTriangles) & 1 ^
       *(undefined4 *)&this->field_0x184;
  this->field_0x188 =
       (this->bAllowAlwaysVisible ^ param_1->bAllowAlwaysVisible) & 1 ^ this->field_0x188;
  return this;
}

// FSkinnedMeshSceneProxyDesc @ 14da1a170

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshSceneProxyDesc * __thiscall
FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(FSkinnedMeshSceneProxyDesc *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  this->MaxDistanceFactor = 1.0;
  this->_padding_ = (longlong)&___7FSkinnedMeshSceneProxyDesc__6B_;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  (this->LODInfo).DataPtr = (FSkelMeshComponentLODInfo *)0x0;
  (this->LODInfo).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).ArrayMax = 0;
  (this->OverrideMaterials).DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->SkinCacheUsage).DataPtr = (ESkinCacheUsage *)0x0;
  (this->SkinCacheUsage).ArrayNum = 0;
  (this->DebugDrawColor).bIsSet = false;
  this->MeshObject = (FSkeletalMeshObject *)0x0;
  this->PreviousMeshObject = (FSkeletalMeshObject *)0x0;
  this->SkinnedAsset = (USkinnedAsset *)0x0;
  this->PhysicsAsset = (UPhysicsAsset *)0x0;
  this->OverlayMaterial = (UMaterialInterface *)0x0;
  this->MeshDeformerInstances = (FMeshDeformerInstanceSet *)0x0;
  this->PredictedLODLevel = 0;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ComponentScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ComponentScale).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bSortTriangles = 0;
  this->bAllowAlwaysVisible = '\0';
  this->CapsuleIndirectShadowMinVisibility = 0.0;
  this->OverlayMaterialMaxDrawDistance = 0.0;
  puVar1 = &this->field_0x180;
  this->bForceWireframe = '\0';
  this->bCPUSkinning = '\0';
  this->bDrawDebugSkeleton = '\0';
  this->bCastCapsuleIndirectShadow = '\0';
  this->bCastCapsuleDirectShadow = '\0';
  this->bPerBoneMotionBlur = '\0';
  this->bRenderStatic = '\0';
  this->bCanHighlightSelectedSections = '\0';
  (this->ComponentScale).field0_0x0._s_0.Z = (double)uVar2;
  this->StreamingDistanceMultiplier = 1.0;
  this->NanitePixelProgrammableDistance = 0.0;
  return this;
}

