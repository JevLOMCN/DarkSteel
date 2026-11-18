// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// FStaticMeshSceneProxyDesc @ 14877b080

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
          (FStaticMeshSceneProxyDesc *this,UStaticMeshComponent *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10000001;
  (this->OverrideMaterials).DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).ArrayMax = 0;
  (this->MaterialCacheTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialCacheTextures).ArrayNum = 0;
  (this->MaterialCacheTextures).ArrayMax = 0;
  (this->LODData).DataPtr = (FStaticMeshComponentLODInfo *)0x0;
  (this->LODData).ArrayNum = 0;
  this->StaticMesh = (UStaticMesh *)0x0;
  this->BodySetup = (UBodySetup *)0x0;
  this->LODParentPrimitive = (UObject *)0x0;
  this->MeshPaintTexture = (UTexture *)0x0;
  this->NaniteResources = (FResources *)0x0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  this->OverlayMaterialMaxDrawDistance = 0.0;
  this->NanitePixelProgrammableDistance = 0.0;
  this->DistanceFieldSelfShadowBias = 0.0;
  this->MinLOD = 0;
  this->WorldPositionOffsetDisableDistance = 0;
  this->StaticLightMapResolution = 0;
  this->MeshPaintTextureCoordinateIndex = 0;
  this->MaterialCacheTextureCoordinateIndex = 0;
  *(undefined2 *)&(this->CollisionResponseContainer).bIsSet = 0;
  this->DistanceFieldIndirectShadowMinVisibility = 0.1;
  this->ForcedLodModel = 0;
  (this->WireframeColor).field0_0x0.Bits = 0xff00ffff;
  puVar2 = &this->field_0x164;
  this->bReverseCulling = 0;
  this->bUseProvidedMaterialRelevance = 0;
  this->bForceNaniteForMasked = 0;
  this->bForceDisableNanite = 0;
  this->bDisallowNanite = 0;
  this->bDisplayNaniteFallbackMesh = 0;
  this->bSortTriangles = 0;
  this->bEvaluateWorldPositionOffsetInRayTracing = 0;
  this->bOverrideDistanceFieldSelfShadowBias = 0;
  this->bCastDistanceFieldIndirectShadow = 0;
  this->bOverrideMinLOD = 0;
  this->bEvaluateWorldPositionOffset = 1;
  this->bDrawMeshCollisionIfSimple = 0;
  this->bDrawMeshCollisionIfComplex = 0;
  this->_padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
  InitializeFromStaticMeshComponent(this,param_1);
  return this;
}

// FStaticMeshSceneProxyDesc @ 14877b180

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
FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc(FStaticMeshSceneProxyDesc *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10000001;
  this->_padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
  (this->OverrideMaterials).DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).ArrayMax = 0;
  (this->MaterialCacheTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialCacheTextures).ArrayNum = 0;
  (this->MaterialCacheTextures).ArrayMax = 0;
  (this->LODData).DataPtr = (FStaticMeshComponentLODInfo *)0x0;
  (this->LODData).ArrayNum = 0;
  this->StaticMesh = (UStaticMesh *)0x0;
  this->BodySetup = (UBodySetup *)0x0;
  this->LODParentPrimitive = (UObject *)0x0;
  this->MeshPaintTexture = (UTexture *)0x0;
  this->NaniteResources = (FResources *)0x0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  this->OverlayMaterialMaxDrawDistance = 0.0;
  this->NanitePixelProgrammableDistance = 0.0;
  this->DistanceFieldSelfShadowBias = 0.0;
  this->MinLOD = 0;
  this->WorldPositionOffsetDisableDistance = 0;
  this->StaticLightMapResolution = 0;
  this->MeshPaintTextureCoordinateIndex = 0;
  this->MaterialCacheTextureCoordinateIndex = 0;
  *(undefined2 *)&(this->CollisionResponseContainer).bIsSet = 0;
  this->DistanceFieldIndirectShadowMinVisibility = 0.1;
  this->ForcedLodModel = 0;
  (this->WireframeColor).field0_0x0.Bits = 0xff00ffff;
  puVar2 = &this->field_0x164;
  this->bReverseCulling = 0;
  this->bUseProvidedMaterialRelevance = 0;
  this->bForceNaniteForMasked = 0;
  this->bForceDisableNanite = 0;
  this->bDisallowNanite = 0;
  this->bDisplayNaniteFallbackMesh = 0;
  this->bSortTriangles = 0;
  this->bEvaluateWorldPositionOffsetInRayTracing = 0;
  this->bOverrideDistanceFieldSelfShadowBias = 0;
  this->bCastDistanceFieldIndirectShadow = 0;
  this->bOverrideMinLOD = 0;
  this->bEvaluateWorldPositionOffset = 1;
  this->bDrawMeshCollisionIfSimple = 0;
  this->bDrawMeshCollisionIfComplex = 0;
  return this;
}

// ~FStaticMeshSceneProxyDesc @ 14877f9e0

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
FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc(FStaticMeshSceneProxyDesc *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
  pFVar1 = (this->MaterialCacheTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  return;
}

// GetBodySetup @ 14879c9e0

UBodySetup * __thiscall FStaticMeshSceneProxyDesc::GetBodySetup(FStaticMeshSceneProxyDesc *this)

{
  UBodySetup *pUVar1;
  
  pUVar1 = this->BodySetup;
  if ((pUVar1 == (UBodySetup *)0x0) &&
     (pUVar1 = (UBodySetup *)0x0, this->StaticMesh != (UStaticMesh *)0x0)) {
    return (this->StaticMesh->BodySetup).field0_0x0.DebugPtr;
  }
  return pUVar1;
}

// GetCollisionResponseToChannels @ 14879d530

FCollisionResponseContainer * __thiscall
FStaticMeshSceneProxyDesc::GetCollisionResponseToChannels(FStaticMeshSceneProxyDesc *this)

{
  TOptional<FCollisionResponseContainer> *pTVar1;
  
  pTVar1 = (TOptional<FCollisionResponseContainer> *)
           &FCollisionResponseContainer::DefaultResponseContainer;
  if ((this->CollisionResponseContainer).bIsSet != false) {
    pTVar1 = &this->CollisionResponseContainer;
  }
  return &pTVar1->TypedValue;
}

// GetMaterial @ 1487a11a0

UMaterialInterface * __thiscall
FStaticMeshSceneProxyDesc::GetMaterial
          (FStaticMeshSceneProxyDesc *this,int param_1,bool param_2,bool param_3)

{
  bool bVar1;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar2;
  TObjectPtr<UMaterialInterface> *pTVar3;
  UMaterialInterface *this_00;
  UMaterialInterface *pUVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((param_1 < 0) || ((this->OverrideMaterials).ArrayNum <= param_1)) ||
     (pTVar2 = &TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                          (&this->OverrideMaterials,param_1)->field0_0x0,
     pTVar2->DebugPtr == (UMaterialInterface *)0x0)) {
    if (this->StaticMesh == (UStaticMesh *)0x0) {
      return (UMaterialInterface *)0x0;
    }
    this_00 = UStaticMesh::GetMaterial(this->StaticMesh,param_1);
  }
  else {
    pTVar3 = TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                       (&this->OverrideMaterials,param_1);
    this_00 = (pTVar3->field0_0x0).DebugPtr;
  }
  if ((((this_00 != (UMaterialInterface *)0x0) &&
       (UObject::ConditionalPostLoad((UObject *)this_00), !param_3)) &&
      ((param_2 ||
       (bVar1 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                          (this,(FMaterialAudit *)0x0), bVar1)))) &&
     (Nanite::GEnableNaniteMaterialOverrides != 0)) {
    local_18 = 0;
    uStack_10 = 0;
    pUVar4 = (UMaterialInterface *)(**(code **)(this_00->_padding_ + 0x3a8))(this_00,&local_18);
    if (pUVar4 != (UMaterialInterface *)0x0) {
      this_00 = pUVar4;
    }
  }
  return this_00;
}

// GetMaterialRelevance @ 1487a1290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
FStaticMeshSceneProxyDesc::GetMaterialRelevance
          (FStaticMeshSceneProxyDesc *this,EShaderPlatform param_1)

{
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar1;
  
  FVar1.Raw._2_6_ = in_register_00000012;
  FVar1.Raw._0_2_ = param_1;
  if (this->bUseProvidedMaterialRelevance != 0) {
    *(FMaterialRelevance_u_0 *)FVar1 = (this->MaterialRelevance).field0_0x0;
    return (FMaterialRelevance)FVar1;
  }
  FMeshComponentHelper::GetMaterialRelevance<FStaticMeshSceneProxyDesc>
            ((FStaticMeshSceneProxyDesc *)FVar1,(EShaderPlatform)this);
  return (FMaterialRelevance)FVar1._s_0;
}

// GetMaterialRelevance @ 1487a12e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
FStaticMeshSceneProxyDesc::GetMaterialRelevance(FStaticMeshSceneProxyDesc *this,Type param_1)

{
  undefined4 in_register_00000014;
  FMaterialRelevance_u_0 FVar1;
  
  FVar1.Raw._4_4_ = in_register_00000014;
  FVar1.Raw._0_4_ = param_1;
  if (this->bUseProvidedMaterialRelevance != 0) {
    *(FMaterialRelevance_u_0 *)FVar1 = (this->MaterialRelevance).field0_0x0;
    return (FMaterialRelevance)FVar1;
  }
  FMeshComponentHelper::GetMaterialRelevance<FStaticMeshSceneProxyDesc>
            ((FStaticMeshSceneProxyDesc *)FVar1,(EShaderPlatform)this);
  return (FMaterialRelevance)FVar1._s_0;
}

// GetMaterialSlotsOverlayMaterial @ 1487a1340

void __thiscall
FStaticMeshSceneProxyDesc::GetMaterialSlotsOverlayMaterial
          (FStaticMeshSceneProxyDesc *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != &this->MaterialSlotsOverlayMaterial) {
    pFVar2 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
    iVar1 = (this->MaterialSlotsOverlayMaterial).ArrayNum;
    param_1->ArrayNum = iVar1;
    if ((iVar1 == 0) && (param_1->ArrayMax == 0)) {
      param_1->ArrayMax = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,param_1->ArrayMax,&param_1->AllocatorInstance,iVar1,&param_1->ArrayMax);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((param_1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar2,iVar1);
  }
  return;
}

// GetMeshPaintTextureResource @ 1487a1bf0

FTextureResource * __thiscall
FStaticMeshSceneProxyDesc::GetMeshPaintTextureResource(FStaticMeshSceneProxyDesc *this)

{
  char cVar1;
  FTextureResource *pFVar2;
  
  if (this->MeshPaintTexture != (UTexture *)0x0) {
    cVar1 = (**(code **)(this->MeshPaintTexture->_padding_ + 0x348))();
    if (cVar1 != '\0') {
      pFVar2 = UTexture::GetResource(this->MeshPaintTexture);
      return pFVar2;
    }
  }
  return (FTextureResource *)0x0;
}

// GetNaniteAuditMaterial @ 1487a1c40

UMaterialInterface * __thiscall
FStaticMeshSceneProxyDesc::GetNaniteAuditMaterial(FStaticMeshSceneProxyDesc *this,int param_1)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FStaticMeshComponentHelper::GetMaterial<FStaticMeshSceneProxyDesc>
                     (this,param_1,true,false);
  return pUVar1;
}

// GetNumMaterials @ 1487a1c60

int __thiscall FStaticMeshSceneProxyDesc::GetNumMaterials(FStaticMeshSceneProxyDesc *this)

{
  if (this->StaticMesh != (UStaticMesh *)0x0) {
    return (this->StaticMesh->StaticMaterials).ArrayNum;
  }
  return 0;
}

// GetUStaticMeshComponent @ 1487a67f0

UStaticMeshComponent * __thiscall
FStaticMeshSceneProxyDesc::GetUStaticMeshComponent(FStaticMeshSceneProxyDesc *this)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UStaticMeshComponent *)this->_padding_;
  if (pUVar2 != (UStaticMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UStaticMeshComponent *)0x0;
}

// GetUsedMaterials @ 1487a6840

void __thiscall
FStaticMeshSceneProxyDesc::GetUsedMaterials
          (FStaticMeshSceneProxyDesc *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  ulonglong uVar16;
  byte abStackX_20 [8];
  longlong lStack_98;
  TObjectPtr<UMaterialInterface>_u_0 TStack_90;
  FStaticMeshSceneProxyDesc *pFStack_88;
  FStaticMeshSceneProxyDesc *pFStack_80;
  ForAnyElementType FStack_78;
  undefined8 uStack_70;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> TStack_68;
  code *pcStack_58;
  FStaticMeshSceneProxyDesc **ppFStack_50;
  code *pcStack_48;
  FStaticMeshSceneProxyDesc **ppFStack_40;
  ulonglong uVar14;
  
  if (this->StaticMesh != (UStaticMesh *)0x0) {
    ppFStack_50 = &pFStack_88;
    pcStack_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedMaterials<FStaticMeshSceneProxyDesc>'::__l5::<lambda_1>,UMaterialInterface_*,int>
                 ::Call;
    pFStack_88 = this;
    UStaticMesh::GetUsedMaterials
              (this->StaticMesh,param_1,
               (TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&pcStack_58);
    bVar5 = IsRayTracingAllowed();
    uVar10 = 0;
    if ((((bVar5) && (this->StaticMesh->bSupportRayTracing != '\0')) &&
        (bVar5 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                           (this,(FMaterialAudit *)0x0), bVar5)) &&
       (Nanite::GEnableNaniteMaterialOverrides != 0)) {
      ppFStack_40 = &pFStack_80;
      TStack_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pcStack_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FStaticMeshSceneProxyDesc>'::__l2::<lambda_1>,UMaterialInterface_*,int>
                   ::Call;
      TStack_68.ArrayNum = 0;
      TStack_68.ArrayMax = 0;
      pFStack_80 = this;
      UStaticMesh::GetUsedMaterials
                (this->StaticMesh,&TStack_68,
                 (TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&pcStack_48);
      FVar11.Data = TStack_68.AllocatorInstance.Data;
      lVar9 = (longlong)TStack_68.ArrayNum;
      if (TStack_68.ArrayNum != 0) {
        abStackX_20[0] = *(longlong *)TStack_68.AllocatorInstance.Data != 0;
        uVar14 = uVar10;
        uVar16 = uVar10;
        do {
          uVar12 = (uint)uVar14;
          uVar13 = uVar12;
          do {
            uVar10 = uVar10 + 1;
            uVar13 = uVar13 + 1;
            uVar14 = (ulonglong)uVar13;
            if (lVar9 <= (longlong)uVar10) break;
          } while ((bool)abStackX_20[0] == (*(longlong *)(FVar11.Data + uVar10 * 8) != 0));
          if (abStackX_20[0] != 0) {
            uVar15 = (uint)uVar16;
            if (uVar15 != uVar12) {
              memmove(FVar11.Data + (longlong)(int)uVar15 * 8,
                      FVar11.Data + (longlong)(int)uVar12 * 8,(longlong)(int)(uVar13 - uVar12) << 3)
              ;
            }
            uVar16 = (ulonglong)(uVar15 + (uVar13 - uVar12));
          }
          abStackX_20[0] = abStackX_20[0] ^ 1;
        } while ((longlong)uVar10 < lVar9);
        TStack_68.ArrayNum = (int)uVar16;
        if ((param_1 == &TStack_68) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar9 = (longlong)TStack_68.ArrayNum;
        if (TStack_68.ArrayNum != 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,TStack_68.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8,
                 TStack_68.AllocatorInstance.Data,lVar9 << 3);
        }
      }
      if (TStack_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_68.AllocatorInstance.Data);
      }
    }
    if (0 < param_1->ArrayNum) {
      FStack_78.Data = (FScriptContainerElement *)0x0;
      uStack_70 = 0;
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&FStack_78 !=
          &this->MaterialSlotsOverlayMaterial) {
        uVar13 = (this->MaterialSlotsOverlayMaterial).ArrayNum;
        pFVar1 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
        uStack_70 = (ulonglong)uVar13;
        if (uVar13 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar13,0,&FStack_78,uVar13,(int *)((longlong)&uStack_70 + 4));
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (FStack_78.Data,(TObjectPtr<UMaterialInterface> *)pFVar1,uVar13);
        }
      }
      iVar7 = (int)uStack_70;
      bVar5 = false;
      pFVar1 = FStack_78.Data + (longlong)(int)uStack_70 * 8;
      FVar11.Data = FStack_78.Data;
      while( true ) {
        if ((int)uStack_70 != iVar7) {
          abStackX_20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(abStackX_20);
        }
        if (FVar11.Data == pFVar1) break;
        lVar9 = *(longlong *)FVar11.Data;
        if (lVar9 == 0) {
          bVar5 = true;
          FVar11.Data = FVar11.Data + 8;
        }
        else {
          pFVar2 = (param_1->AllocatorInstance).Data;
          lStack_98 = lVar9;
          if (((pFVar2 <= (FScriptContainerElement *)&lStack_98) &&
              ((FScriptContainerElement *)&lStack_98 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
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
          iVar8 = param_1->ArrayNum;
          if (iVar8 == param_1->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          FVar11.Data = FVar11.Data + 8;
          param_1->ArrayNum = iVar8 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = lStack_98;
        }
      }
      if ((bVar5) &&
         (TStack_90 = (TObjectPtr<UMaterialInterface>_u_0)
                      (this->OverlayMaterial).field0_0x0.DebugPtr,
         TStack_90.DebugPtr != (UMaterialInterface *)0x0)) {
        pTVar3 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
        if ((pTVar3 <= &TStack_90) &&
           ((&TStack_90 < pTVar3 + param_1->ArrayMax &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        ((TObjectPtr<UMaterialInterface>_u_0 *)
        ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8))->DebugPtr =
             (UMaterialInterface *)TStack_90;
      }
      if (FStack_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data);
      }
    }
  }
  return;
}

// HasValidNaniteData @ 1487ab590

bool __thiscall FStaticMeshSceneProxyDesc::HasValidNaniteData(FStaticMeshSceneProxyDesc *this)

{
  if (this->NaniteResources != (FResources *)0x0) {
    return 0 < (this->NaniteResources->PageStreamingStates).ArrayNum;
  }
  return false;
}

// InitializeFromStaticMeshComponent @ 1487ae1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent
          (FStaticMeshSceneProxyDesc *this,UStaticMeshComponent *param_1)

{
  int *piVar1;
  uint uVar2;
  UStaticMesh *pUVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  FStaticMeshComponentLODInfo *pFVar5;
  FMaterialRelevance_u_0 FVar6;
  FScriptContainerElement *_Src;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  bool bVar12;
  ELightmapType EVar13;
  EShaderPlatform EVar14;
  int iVar15;
  FColor FVar16;
  UMaterialInterface *pUVar17;
  FResources *pFVar18;
  UBodySetup *pUVar19;
  undefined4 extraout_var;
  UPrimitiveComponent *pUVar20;
  FMaterialRelevance_u_0 *pFVar21;
  FCollisionResponseContainer *pFVar22;
  UTexture *pUVar23;
  uint uVar24;
  uint uVar25;
  TArray<UMaterialCacheVirtualTexture_*,TSizedDefaultAllocator<32>_> *pTVar26;
  float fVar27;
  undefined1 local_res10 [8];
  undefined4 uStack_c;
  
  FPrimitiveSceneProxyDesc::InitializeFromPrimitiveComponent
            ((FPrimitiveSceneProxyDesc *)this,(UPrimitiveComponent *)param_1);
  pUVar3 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->StaticMesh = pUVar3;
  pTVar4 = (TObjectPtr<UMaterialInterface> *)param_1->_padding_;
  iVar15 = (int)param_1->_padding_;
  if (iVar15 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  (this->OverrideMaterials).DataPtr = pTVar4;
  *(ulonglong *)&(this->OverrideMaterials).ArrayNum = CONCAT44(uStack_c,iVar15);
  pUVar17 = UMeshComponent::GetOverlayMaterial((UMeshComponent *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar17;
  fVar27 = UMeshComponent::GetOverlayMaterialMaxDrawDistance((UMeshComponent *)param_1);
  this->OverlayMaterialMaxDrawDistance = fVar27;
  UMeshComponent::GetMaterialSlotsOverlayMaterial
            ((UMeshComponent *)param_1,&this->MaterialSlotsOverlayMaterial);
  this->ForcedLodModel = param_1->ForcedLodModel;
  this->MinLOD = param_1->MinLOD;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->NanitePixelProgrammableDistance = param_1->NanitePixelProgrammableDistance;
  uVar24 = (param_1->bReverseCulling ^ ZPULL(*(undefined4 *)&this->field_0x164,0,1)) & 1 ^
           *(undefined4 *)&this->field_0x164;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((byte)param_1->field_0x5ac ^ uVar24) & 8 ^ uVar24;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((uint)(byte)param_1->field_0x5ad * 2 ^ uVar24) & 0x10 ^ uVar24;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((uint)(byte)param_1->field_0x5ae << 2 ^ uVar24) & 0x20 ^ uVar24;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((uint)(byte)param_1->field_0x5ae << 2 ^ uVar24) & 0x40 ^ uVar24;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((uint)(byte)param_1->field_0x5ac << 2 ^ uVar24) & 0x80 ^ uVar24;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((byte)param_1->field_0x5ae & 0xffffff80) * 2 | uVar24 & 0xfffffeff;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((uint)(byte)param_1->field_0x5ac << 9 ^ uVar24) & 0x400 ^ uVar24;
  *(uint *)&this->field_0x164 = uVar24;
  uVar24 = ((uint)(byte)param_1->field_0x5ac << 9 ^ uVar24) & 0x800 ^ uVar24;
  *(uint *)&this->field_0x164 = uVar24;
  *(uint *)&this->field_0x164 = ((uint)(byte)param_1->field_0x5ac << 0xc ^ uVar24) & 0x1000 ^ uVar24
  ;
  this->DistanceFieldSelfShadowBias = param_1->DistanceFieldSelfShadowBias;
  this->DistanceFieldIndirectShadowMinVisibility = param_1->DistanceFieldIndirectShadowMinVisibility
  ;
  iVar15 = (**(code **)(param_1->_padding_ + 0x7c0))(param_1);
  this->StaticLightMapResolution = iVar15;
  EVar13 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)param_1);
  this->LightmapType = EVar13;
  pFVar18 = (FResources *)(**(code **)(param_1->_padding_ + 0xb30))(param_1);
  this->NaniteResources = pFVar18;
  pUVar19 = (UBodySetup *)(**(code **)(param_1->_padding_ + 0x800))();
  this->BodySetup = pUVar19;
  if ((pUVar19 == (UBodySetup *)0x0) || (pUVar19->bNeverNeedsCookedCollisionData != '\0')) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (((bool)param_1->bDrawMeshCollisionIfComplex) && (bVar12)) {
    uVar24 = 2;
  }
  else {
    uVar24 = 0;
  }
  uVar2 = *(uint *)&this->field_0x164;
  this->bDrawMeshCollisionIfComplex = uVar24 >> 1;
  if ((param_1->bDrawMeshCollisionIfSimple == 0) || (!bVar12)) {
    uVar25 = 0;
  }
  else {
    uVar25 = 4;
  }
  *(uint *)&this->field_0x164 = uVar2 & 0xfffffff9 | uVar24 | uVar25;
  pFVar5 = (FStaticMeshComponentLODInfo *)(param_1->LODData).AllocatorInstance.Data;
  iVar15 = (param_1->LODData).ArrayNum;
  if (iVar15 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  (this->LODData).DataPtr = pFVar5;
  *(ulonglong *)&(this->LODData).ArrayNum = CONCAT44(uStack_c,iVar15);
  FVar16 = UStaticMeshComponent::GetWireframeColor(param_1);
  (this->WireframeColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar16.field0_0x0);
  pUVar20 = UPrimitiveComponent::GetLODParentPrimitive((UPrimitiveComponent *)param_1);
  this->LODParentPrimitive = (UObject *)pUVar20;
  if ((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0) {
    pcVar7 = *(code **)(param_1->_padding_ + 0xaa8);
    EVar14 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    pFVar21 = (FMaterialRelevance_u_0 *)(*pcVar7)(param_1,local_res10,EVar14);
    FVar6 = *pFVar21;
    this->bUseProvidedMaterialRelevance = 1;
    (this->MaterialRelevance).field0_0x0 = FVar6;
  }
  pFVar22 = (FCollisionResponseContainer *)(**(code **)(param_1->_padding_ + 0x5c8))(param_1);
  if ((pFVar22 != &FCollisionResponseContainer::DefaultResponseContainer) &&
     ((TOptional<FCollisionResponseContainer> *)pFVar22 != &this->CollisionResponseContainer)) {
    uVar8 = *(undefined4 *)((longlong)&pFVar22->field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&pFVar22->field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&pFVar22->field0_0x0 + 0xc);
    *(undefined4 *)&(this->CollisionResponseContainer).TypedValue.field0_0x0 =
         *(undefined4 *)&pFVar22->field0_0x0;
    *(undefined4 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 4) = uVar8
    ;
    *(undefined4 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 8) = uVar9
    ;
    *(undefined4 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 0xc) =
         uVar10;
    uVar11 = *(undefined8 *)((longlong)&pFVar22->field0_0x0 + 0x18);
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 0x10) =
         *(undefined8 *)((longlong)&pFVar22->field0_0x0 + 0x10);
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 0x18) =
         uVar11;
    (this->CollisionResponseContainer).bIsSet = true;
  }
  pUVar23 = (param_1->MeshPaintTextureOverride).field0_0x0.DebugPtr;
  if (pUVar23 == (UTexture *)0x0) {
    pUVar23 = (UTexture *)(**(code **)(param_1->_padding_ + 0xaf0))(param_1);
  }
  this->MeshPaintTexture = pUVar23;
  iVar15 = (**(code **)(param_1->_padding_ + 0xb08))(param_1);
  this->MeshPaintTextureCoordinateIndex = iVar15;
  pTVar26 = &this->MaterialCacheTextures;
  if (pTVar26 !=
      (TArray<UMaterialCacheVirtualTexture_*,TSizedDefaultAllocator<32>_> *)
      &param_1->MaterialCacheTextures) {
    iVar15 = (param_1->MaterialCacheTextures).ArrayNum;
    piVar1 = &(this->MaterialCacheTextures).ArrayMax;
    _Src = (param_1->MaterialCacheTextures).AllocatorInstance.Data;
    (this->MaterialCacheTextures).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar15,*piVar1,&pTVar26->AllocatorInstance,iVar15,piVar1);
    if (iVar15 != 0) {
      memcpy((pTVar26->AllocatorInstance).Data,_Src,(longlong)iVar15 << 3);
    }
  }
  return;
}

// SetCollisionResponseToChannels @ 1487c19e0

void __thiscall
FStaticMeshSceneProxyDesc::SetCollisionResponseToChannels
          (FStaticMeshSceneProxyDesc *this,FCollisionResponseContainer *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != &FCollisionResponseContainer::DefaultResponseContainer) &&
     ((TOptional<FCollisionResponseContainer> *)param_1 != &this->CollisionResponseContainer)) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->CollisionResponseContainer).TypedValue.field0_0x0 =
         *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 8) = uVar1
    ;
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x18);
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 0x10) =
         *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    *(undefined8 *)((longlong)&(this->CollisionResponseContainer).TypedValue.field0_0x0 + 0x18) =
         uVar1;
    (this->CollisionResponseContainer).bIsSet = true;
  }
  return;
}

// SetMaterialRelevance @ 1487c2bb0

void __thiscall
FStaticMeshSceneProxyDesc::SetMaterialRelevance
          (FStaticMeshSceneProxyDesc *this,FMaterialRelevance *param_1)

{
  FMaterialRelevance_u_0 FVar1;
  
  FVar1 = param_1->field0_0x0;
  this->bUseProvidedMaterialRelevance = 1;
  (this->MaterialRelevance).field0_0x0 = FVar1;
  return;
}

// ShouldCreateMaterialCacheProxy @ 1487c39d0

bool __thiscall
FStaticMeshSceneProxyDesc::ShouldCreateMaterialCacheProxy(FStaticMeshSceneProxyDesc *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  iVar1 = (this->MaterialCacheTextures).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    cVar5 = (**(code **)(**(longlong **)(this->MaterialCacheTextures).AllocatorInstance.Data + 0x348
                        ))();
    if (cVar5 != '\0') {
      return true;
    }
  }
  return false;
}

// ShouldCreateNaniteProxy @ 1487c3a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FStaticMeshSceneProxyDesc::ShouldCreateNaniteProxy
          (FStaticMeshSceneProxyDesc *this,FMaterialAudit *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  UWorld *pUVar4;
  undefined1 auStack_138 [32];
  FMaterialAudit FStack_118;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (this->bDisallowNanite == 0 && this->bForceDisableNanite == 0) {
    EVar3 = GMaxRHIShaderPlatform;
    if ((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0) {
      EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    }
    bVar2 = UseNanite(EVar3,true,true);
    if (((bVar2) && (this->NaniteResources != (FResources *)0x0)) &&
       (0 < (this->NaniteResources->PageStreamingStates).ArrayNum)) {
      FStack_118.bCompatibleWithLumenCardSharing = '\0';
      FStack_118.bHasSky = '\0';
      FStack_118.bHasMasked = '\0';
      FStack_118.bHasAnyError = '\0';
      FStack_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_118.AssetName.Data.ArrayNum = 0;
      FStack_118.AssetName.Data.ArrayMax = 0;
      FStack_118.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      FStack_118.Entries.ArrayNum = 0;
      FStack_118.Entries.ArrayMax = 4;
      FStack_118.FallbackMaterial = (UMaterialInterface *)0x0;
      Nanite::FNaniteResourcesHelper::AuditMaterials<FStaticMeshSceneProxyDesc>
                (this,&FStack_118,param_1 != (FMaterialAudit *)0x0);
      pUVar4 = FPrimitiveSceneProxyDesc::GetWorld((FPrimitiveSceneProxyDesc *)this);
      bVar2 = Nanite::IsMaskingAllowed(pUVar4,this->bForceNaniteForMasked);
      if (((FStack_118.bHasAnyError == 0) && (FStack_118.bHasSky == '\0')) &&
         ((bVar2 || (FStack_118.bHasMasked == '\0')))) {
        if (param_1 != (FMaterialAudit *)0x0) {
          Nanite::FMaterialAudit::operator=(param_1,&FStack_118);
        }
        if (FStack_118.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)FStack_118.Entries.AllocatorInstance.SecondaryData);
        }
        if (FStack_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_118.AssetName.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (FStack_118.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)FStack_118.Entries.AllocatorInstance.SecondaryData);
      }
      if (FStack_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_118.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// UseNaniteOverrideMaterials @ 1487d24f0

bool __thiscall
FStaticMeshSceneProxyDesc::UseNaniteOverrideMaterials(FStaticMeshSceneProxyDesc *this,bool param_1)

{
  bool bVar1;
  
  if ((!param_1) &&
     (bVar1 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                        (this,(FMaterialAudit *)0x0), !bVar1)) {
    return false;
  }
  if (Nanite::GEnableNaniteMaterialOverrides == 0) {
    return false;
  }
  return true;
}

