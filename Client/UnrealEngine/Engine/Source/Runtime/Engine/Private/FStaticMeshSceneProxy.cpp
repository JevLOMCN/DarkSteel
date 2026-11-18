// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// FStaticMeshSceneProxy @ 148779d10

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

FStaticMeshSceneProxy * __thiscall
FStaticMeshSceneProxy::FStaticMeshSceneProxy
          (FStaticMeshSceneProxy *this,FStaticMeshSceneProxyDesc *param_1,bool param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  Type TVar3;
  FStaticMeshRenderData *pFVar4;
  FDistanceFieldVolumeData *pFVar5;
  ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> FVar6;
  FStaticMeshRayTracingProxy *pFVar7;
  UObject *pUVar8;
  longlong *plVar9;
  UStaticMesh *pUVar10;
  code *pcVar11;
  undefined8 uVar12;
  TConsoleVariableData<int> *pTVar13;
  TConsoleVariableData<int> *pTVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte bVar19;
  uchar uVar20;
  TEnumAsByte<ECollisionTraceFlag> TVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  FStaticMeshRenderData *pFVar26;
  TObjectPtr<UBodySetup>_u_0 TVar27;
  FStaticMeshSceneProxy *pFVar28;
  UMaterial *pUVar29;
  FMaterialRelevance FVar30;
  FLODInfo *pFVar31;
  UMaterial *pUVar32;
  ulonglong uVar33;
  UClass *pUVar34;
  undefined7 extraout_var;
  FTextureResource *pFVar35;
  FMaterialCacheVirtualTextureRenderProxy *pFVar36;
  uint uVar37;
  FLODInfo *this_00;
  uint uVar38;
  int *piVar39;
  uint uVar40;
  FCollisionResponseContainer *pFVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  FLODInfo *pFVar45;
  ulonglong uVar46;
  FScriptContainerElement *pFVar47;
  ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> FVar48;
  FMaterialRelevance *pFVar49;
  float fVar50;
  float fVar51;
  undefined1 local_a5;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  FName local_70;
  FStaticMeshSceneProxy *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  FString local_50;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(FPrimitiveSceneProxyDesc *)param_1,
             (FName)param_1->StaticMesh->_padding_);
  *(undefined ***)this = &___7FStaticMeshSceneProxy__6B_;
  pFVar26 = UStaticMesh::GetRenderData(param_1->StaticMesh);
  this->RenderData = pFVar26;
  (this->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  (this->LODs).ArrayMax = 0;
  (this->RayTracingLODInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayTracingLODInfos).ArrayNum = 0;
  (this->RayTracingLODInfos).ArrayMax = 0;
  this->OverlayMaterial = (UMaterialInterface *)(param_1->OverlayMaterial).field0_0x0;
  fVar50 = param_1->OverlayMaterialMaxDrawDistance;
  (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).ArrayMax = 0;
  (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData =
       (ForElementType<FRayTracingGeometry>)0x0;
  this->OverlayMaterialMaxDrawDistance = fVar50;
  (this->DynamicRayTracingGeometries).ArrayNum = 0;
  (this->DynamicRayTracingGeometries).ArrayMax = 8;
  this->CachedRayTracingMaterialsLODIndex = -1;
  this->RayTracingGeometryGroupHandle = -1;
  (this->CachedRayTracingMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRayTracingMaterials).ArrayNum = 0;
  (this->CachedRayTracingMaterials).ArrayMax = 0;
  this->ForcedLodModel = param_1->ForcedLodModel;
  uVar37 = (ZPULL(*(undefined4 *)&this->field_0xb10,0,1) ^ (uint)param_1->_padding_) & 1 ^
           *(undefined4 *)&this->field_0xb10;
  *(uint *)&this->field_0xb10 = uVar37;
  *(uint *)&this->field_0xb10 = (*(int *)&param_1->field_0x164 * 2 ^ uVar37) & 2 ^ uVar37;
  FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  if (param_1->bUseProvidedMaterialRelevance == 0) {
    FMeshComponentHelper::GetMaterialRelevance<FStaticMeshSceneProxyDesc>
              ((FStaticMeshSceneProxyDesc *)&this->MaterialRelevance,(EShaderPlatform)param_1);
  }
  else {
    (this->MaterialRelevance).field0_0x0 = (param_1->MaterialRelevance).field0_0x0;
  }
  this->WPODisableDistance = (float)param_1->WorldPositionOffsetDisableDistance;
  this->StaticMesh = param_1->StaticMesh;
  this->MeshPaintTextureResource = (FTextureResource *)0x0;
  (this->MeshPaintTextureDescriptor).field0_0x0 = (TIntVector2<unsigned_int>_u_0)0x0;
  this->Owner = (UObject *)param_1->_padding_;
  this->LightMapResolution = param_1->StaticLightMapResolution;
  TVar27 = (TObjectPtr<UBodySetup>_u_0)param_1->BodySetup;
  if (TVar27.DebugPtr == (UBodySetup *)0x0) {
    if (param_1->StaticMesh == (UStaticMesh *)0x0) {
      TVar27.DebugPtr = (UBodySetup *)0x0;
    }
    else {
      TVar27 = (param_1->StaticMesh->BodySetup).field0_0x0;
    }
  }
  this->BodySetup = (UBodySetup *)TVar27;
  this->CollisionTraceFlag = CTF_UseSimpleAndComplex;
  if ((param_1->CollisionResponseContainer).bIsSet == false) {
    pFVar41 = &FCollisionResponseContainer::DefaultResponseContainer;
  }
  else {
    pFVar41 = &(param_1->CollisionResponseContainer).TypedValue;
    if (((param_1->CollisionResponseContainer).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
      return pFVar28;
    }
  }
  uVar12 = *(undefined8 *)
            ((longlong)&(((TOptional<FCollisionResponseContainer> *)pFVar41)->TypedValue).field0_0x0
            + 8);
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 =
       *(undefined8 *)&(((TOptional<FCollisionResponseContainer> *)pFVar41)->TypedValue).field0_0x0;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar12;
  uVar12 = *(undefined8 *)
            ((longlong)&(((TOptional<FCollisionResponseContainer> *)pFVar41)->TypedValue).field0_0x0
            + 0x18);
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) =
       *(undefined8 *)
        ((longlong)&(((TOptional<FCollisionResponseContainer> *)pFVar41)->TypedValue).field0_0x0 +
        0x10);
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar12;
  this->LODForCollision = param_1->StaticMesh->LODForCollision;
  uVar37 = (param_1->bDrawMeshCollisionIfComplex ^ ZPULL(*(undefined4 *)&this->field_0xb80,0,1)) & 1
           ^ *(undefined4 *)&this->field_0xb80;
  *(uint *)&this->field_0xb80 = uVar37;
  *(uint *)&this->field_0xb80 = (*(uint *)&param_1->field_0x164 >> 1 ^ uVar37) & 2 ^ uVar37;
  if ((this->RenderData == (FStaticMeshRenderData *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("RenderData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                          ,0x103,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
    return pFVar28;
  }
  if (this->RenderData->bIsInitialized == false) {
    local_70 = (FName)this->StaticMesh->_padding_;
    ::FName::ToString(&local_70,&local_50);
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("RenderData->IsInitialized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                        ,0x10b,
                        L"Uninitialized Renderdata for Mesh: %s, Mesh NeedsLoad: %i, Mesh NeedsPostLoad: %i, Mesh Loaded: %i, Mesh NeedInit: %i, Mesh IsDefault: %i"
                       );
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar16) {
      pcVar11 = (code *)swi(3);
      pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
      return pFVar28;
    }
  }
  pFVar49 = &this->MaterialRelevance;
  this->field_0x85 = this->field_0x85 | 0xc;
  this->field_0x81 = this->field_0x81 & 0x7e | 1;
  this->field_0x82 =
       (param_1->bEvaluateWorldPositionOffset ^ this->field_0x82) & 1 ^ this->field_0x82;
  TVar3 = (*(FSceneInterface **)&this->field_0x220)->FeatureLevel;
  FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  uVar37 = UStaticMesh::GetMinLODIdx(param_1->StaticMesh,false);
  if (param_1->bOverrideMinLOD != 0) {
    uVar37 = param_1->MinLOD;
  }
  FStaticMeshSceneProxyDesc::GetMaterialSlotsOverlayMaterial
            (param_1,&this->MaterialSlotsOverlayMaterial);
  if ((GUseMobileLODBiasOnDesktopES31 != 0) && (TVar3 == ES3_1)) {
    pFVar26 = UStaticMesh::GetRenderData(param_1->StaticMesh);
    uVar37 = uVar37 + pFVar26->LODBiasModifier;
  }
  uVar40 = 0;
  pFVar26 = this->RenderData;
  local_a0 = *(uint *)((longlong)&param_1->_padding_ + 4) >> 0x1b & 0xffffff01;
  if (0 < (pFVar26->LODResources).Array.ArrayNum + -1) {
    lVar43 = 0;
    do {
      uVar24 = 0;
      if ((int)uVar40 < (pFVar26->LODResources).Array.ArrayNum) {
        uVar24 = ~uVar40 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
        return pFVar28;
      }
      iVar23 = FStaticMeshLODResources::GetNumVertices
                         (*(FStaticMeshLODResources **)
                           ((pFVar26->LODResources).Array.AllocatorInstance.Data + lVar43));
      if (0 < iVar23) break;
      pFVar26 = this->RenderData;
      uVar40 = uVar40 + 1;
      lVar43 = lVar43 + 8;
    } while ((int)uVar40 < (pFVar26->LODResources).Array.ArrayNum + -1);
  }
  if (((char)local_a0 != '\0') || (GForceDefaultMaterial != false)) {
    pUVar29 = UMaterial::GetDefaultMaterial(MD_Surface);
    FVar30 = UMaterialInterface::GetRelevance
                       ((UMaterialInterface *)pUVar29,(EShaderPlatform)local_60);
    uVar38 = *(uint *)&pFVar49->field0_0x0 >> 0x12;
    (pFVar49->field0_0x0).Raw = (pFVar49->field0_0x0).Raw | *(ulonglong *)FVar30.field0_0x0;
    uVar24 = *(uint *)FVar30.field0_0x0 >> 0x12;
    if (((byte)(*(uint *)FVar30.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar38 & 0x3f)) {
      uVar24 = uVar38;
    }
    uVar38 = (uint)(pFVar49->field0_0x0).Raw;
    *(uint *)&pFVar49->field0_0x0 = (uVar24 << 0x12 ^ uVar38) & 0xfc0000 ^ uVar38;
  }
  if (((this->RenderData->LODResources).Array.ArrayNum <= (int)uVar40) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("FirstAvailableLOD < RenderData->LODResources.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                          ,0x145,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
    return pFVar28;
  }
  pFVar26 = this->RenderData;
  uVar24 = (pFVar26->LODResources).Array.ArrayNum - 1;
  if ((int)uVar37 < (int)uVar24) {
    uVar24 = uVar37;
  }
  if ((int)uVar40 < (int)uVar24) {
    uVar40 = uVar24;
  }
  this->ClampedMinLOD = uVar40;
  uVar37 = (param_1->WireframeColor).field0_0x0.Bits;
  local_80._0_4_ = FLinearColor::sRGBToLinearTable[uVar37 >> 0x10 & 0xff];
  local_80._4_4_ = FLinearColor::sRGBToLinearTable[uVar37 >> 8 & 0xff];
  fStack_78 = FLinearColor::sRGBToLinearTable[uVar37 & 0xff];
  fStack_74 = (float)(uVar37 >> 0x18) * __real_3b808081;
  *(float *)&this->field_0x30 = (float)local_80;
  *(float *)&this->field_0x34 = local_80._4_4_;
  *(float *)&this->field_0x38 = fStack_78;
  *(float *)&this->field_0x3c = fStack_74;
  if (((pFVar26->LODResources).Array.ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
    return pFVar28;
  }
  pFVar4 = this->RenderData;
  this->DistanceFieldData =
       *(FDistanceFieldVolumeData **)
        (*(longlong *)(pFVar26->LODResources).Array.AllocatorInstance.Data + 0x40);
  if (((pFVar4->LODResources).Array.ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
    return pFVar28;
  }
  bVar18 = *(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 4);
  this->CardRepresentationData =
       *(FCardRepresentationData **)
        (*(longlong *)(pFVar4->LODResources).Array.AllocatorInstance.Data + 0x48);
  if (((((bVar18 & 4) == 0) ||
       (bVar18 = *(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 6),
       (bVar18 & 0x40) != 0)) || ((char)bVar18 < '\0')) ||
     (pFVar5 = this->DistanceFieldData, pFVar5 == (FDistanceFieldVolumeData *)0x0)) {
LAB_14877a3dd:
    bVar18 = 0;
  }
  else {
    iVar23 = (pFVar5->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.Y;
    iVar25 = (pFVar5->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.Z;
    if (iVar23 < (pFVar5->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.X) {
      iVar23 = (pFVar5->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.X;
    }
    if (iVar25 < iVar23) {
      iVar25 = iVar23;
    }
    if (iVar25 < 1) goto LAB_14877a3dd;
    bVar18 = 1;
  }
  this->field_0x83 = this->field_0x83 & 0xfe;
  this->field_0x83 = this->field_0x83 | bVar18;
  if ((((param_1->_padding_ & 0x1001) == 0x1001) && (param_1->bCastDistanceFieldIndirectShadow != 0)
      ) && (((char)param_1->_padding_ != '\0' && ((param_1->_padding_ & 0x10000000000) == 0)))) {
    bVar18 = 0x10;
  }
  else {
    bVar18 = 0;
  }
  this->field_0x7f = this->field_0x7f & 0xef;
  this->field_0x7f = this->field_0x7f | bVar18;
  fVar50 = param_1->DistanceFieldIndirectShadowMinVisibility;
  if (__real_3f800000 <= param_1->DistanceFieldIndirectShadowMinVisibility) {
    fVar50 = __real_3f800000;
  }
  if (fVar50 <= 0.0) {
    fVar50 = 0.0;
  }
  *(float *)&this->field_0xac = fVar50;
  if (param_1->bOverrideDistanceFieldSelfShadowBias == 0) {
    fVar50 = param_1->StaticMesh->DistanceFieldSelfShadowBias;
  }
  else {
    fVar50 = param_1->DistanceFieldSelfShadowBias;
  }
  if (fVar50 <= 0.0) {
    fVar50 = 0.0;
  }
  bVar18 = 0;
  *(float *)&this->field_0xb0 = fVar50;
  uVar37 = (this->RenderData->LODResources).Array.ArrayNum;
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
  }
  DestructItems<FStaticMeshSceneProxy::FLODInfo,int>
            ((FLODInfo *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  piVar39 = &(this->LODs).ArrayMax;
  (this->LODs).ArrayNum = 0;
  if (*piVar39 != uVar37) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,uVar37,&(this->LODs).AllocatorInstance,0,piVar39);
  }
  if ((this->RenderData->bLODsShareStaticLighting != false) || (param_2)) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  local_a4 = 0;
  if (0 < (this->RenderData->LODResources).Array.ArrayNum) {
    local_98 = 0;
    bVar18 = 0;
    do {
      uVar40 = local_a4;
      pFVar45 = (FLODInfo *)0x0;
      piVar39 = &(this->LODs).ArrayMax;
      uVar37 = (this->LODs).ArrayNum;
      if (uVar37 == *piVar39) {
        uVar37 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x880,&(this->LODs).AllocatorInstance,piVar39);
      }
      (this->LODs).ArrayNum = uVar37 + 1;
      uVar24 = 0;
      if ((int)uVar37 < (int)(uVar37 + 1)) {
        uVar24 = ~uVar37 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
        return pFVar28;
      }
      this_00 = (FLODInfo *)((this->LODs).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x80);
      pFVar31 = pFVar45;
      if (this_00 != (FLODInfo *)0x0) {
        pFVar31 = FLODInfo::FLODInfo(this_00,param_1,&this->RenderData->LODVertexFactories,uVar40,
                                     this->ClampedMinLOD,bVar16);
      }
      uVar37 = local_a4;
      local_88 = (longlong)(pFVar31->Sections).ArrayNum;
      if (0 < local_88) {
        local_80 = (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)&pFVar31->Sections
        ;
        local_90 = 0;
        local_9c = ~local_a4 >> 0x1f;
        pFVar31 = pFVar45;
        do {
          FVar48 = local_80;
          uVar24 = (uint)pFVar45;
          uVar40 = 0;
          if ((int)uVar24 < *(int *)((longlong)local_80 + 0x20)) {
            uVar40 = ~uVar24 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
            return pFVar28;
          }
          FVar6 = *(ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> *)
                   ((longlong)FVar48 + 0x18);
          pFVar26 = this->RenderData;
          if (FVar6 != (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0) {
            FVar48 = FVar6;
          }
          uVar40 = 0;
          if ((int)uVar37 < (pFVar26->LODResources).Array.ArrayNum) {
            uVar40 = local_9c;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
            return pFVar28;
          }
          lVar43 = *(longlong *)((pFVar26->LODResources).Array.AllocatorInstance.Data + local_98);
          uVar40 = 0;
          if ((int)uVar24 < *(int *)(lVar43 + 0x38)) {
            uVar40 = ~uVar24 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
            return pFVar28;
          }
          lVar15 = local_90;
          pUVar29 = *(UMaterial **)
                     ((pFVar31->Sections).AllocatorInstance.InlineData + (longlong)FVar48 + -0x30);
          lVar44 = lVar43 + 0x10;
          if (*(longlong *)(lVar43 + 0x30) != 0) {
            lVar44 = *(longlong *)(lVar43 + 0x30);
          }
          bVar18 = bVar18 | *(byte *)(local_90 + 0x15 + lVar44);
          pUVar32 = UMaterial::GetDefaultMaterial(MD_Surface);
          if (pUVar29 == pUVar32) {
            pUVar29 = UMaterial::GetDefaultMaterial(MD_Surface);
            FVar30 = UMaterialInterface::GetRelevance
                               ((UMaterialInterface *)pUVar29,(EShaderPlatform)local_58);
            uVar38 = *(uint *)&(this->MaterialRelevance).field0_0x0 >> 0x12;
            (this->MaterialRelevance).field0_0x0.Raw =
                 (this->MaterialRelevance).field0_0x0.Raw | *(ulonglong *)FVar30.field0_0x0;
            uVar40 = *(uint *)FVar30.field0_0x0 >> 0x12;
            if (((byte)(*(uint *)FVar30.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar38 & 0x3f)) {
              uVar40 = uVar38;
            }
            uVar38 = (uint)(this->MaterialRelevance).field0_0x0.Raw;
            *(uint *)&(this->MaterialRelevance).field0_0x0 =
                 (uVar40 << 0x12 ^ uVar38) & 0xfc0000 ^ uVar38;
          }
          fVar51 = (float)(**(code **)(**(longlong **)
                                         ((pFVar31->Sections).AllocatorInstance.InlineData +
                                         (longlong)FVar48 + -0x30) + 0x500))();
          local_90 = lVar15 + 0x1c;
          fVar50 = *(float *)&this->field_0xb4;
          if (*(float *)&this->field_0xb4 <= fVar51) {
            fVar50 = fVar51;
          }
          pFVar45 = (FLODInfo *)(ulonglong)(uVar24 + 1);
          pFVar31 = (FLODInfo *)&pFVar31->_padding_;
          local_88 = local_88 + -1;
          *(float *)&this->field_0xb4 = fVar50;
        } while (local_88 != 0);
        local_88 = 0;
        uVar40 = local_a4;
      }
      local_98 = local_98 + 8;
      local_a4 = uVar40 + 1;
    } while ((int)local_a4 < (this->RenderData->LODResources).Array.ArrayNum);
  }
  uVar42 = 0;
  if ((char)local_a0 != '\0') {
    this->OverlayMaterial = (UMaterialInterface *)0x0;
    iVar23 = (this->MaterialSlotsOverlayMaterial).ArrayNum;
    uVar33 = uVar42;
    uVar46 = uVar42;
    if (0 < iVar23) {
      do {
        uVar40 = (uint)uVar33;
        uVar37 = 0;
        if ((int)uVar40 < iVar23) {
          uVar37 = ~uVar40 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
          return pFVar28;
        }
        *(undefined8 *)((this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data + uVar46) = 0;
        iVar23 = (this->MaterialSlotsOverlayMaterial).ArrayNum;
        uVar33 = (ulonglong)(uVar40 + 1);
        uVar46 = uVar46 + 8;
      } while ((int)(uVar40 + 1) < iVar23);
    }
  }
  bVar16 = IsRayTracingAllowed();
  if ((bVar16) && (param_1->StaticMesh->bSupportRayTracing != '\0')) {
    bVar19 = 1;
  }
  else {
    bVar19 = 0;
  }
  puVar1 = &this->field_0x2d8;
  this->bSupportRayTracing = false;
  *puVar1 = bVar19 | *puVar1 & 0xf1 | 0x10;
  if (((bVar19 != 0) && (this->RenderData->RayTracingProxy == (FStaticMeshRayTracingProxy *)0x0)) &&
     (local_68 = this,
     bVar16 = `FStaticMeshSceneProxy::FStaticMeshSceneProxy'::__l47::<lambda_1>::operator()
                        (&local_68), !bVar16)) {
    this->bSupportRayTracing = false;
  }
  pTVar13 = CVarRayTracingStaticMeshesWPO.Ref;
  if (this->bSupportRayTracing) {
    if ((((this->field_0x82 & 1) == 0) ||
        ((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5) & 0x40) == 0)) ||
       (param_1->bEvaluateWorldPositionOffsetInRayTracing == 0)) {
      this->field_0x2d8 = *puVar1 | 2;
    }
    else {
      bVar16 = IsInParallelGameThread();
      if (bVar16) {
LAB_14877a950:
        uVar33 = uVar42;
      }
      else {
        bVar16 = IsInGameThread();
        uVar33 = 4;
        if (bVar16) goto LAB_14877a950;
      }
      pTVar14 = CVarRayTracingStaticMeshesWPO.Ref;
      iVar23 = *(int *)((longlong)pTVar13->ShadowedValue + uVar33);
      bVar16 = IsInParallelGameThread();
      if ((bVar16) || (bVar16 = IsInGameThread(), uVar33 = 4, bVar16)) {
        uVar33 = uVar42;
      }
      bVar19 = 0;
      if (*(int *)((longlong)pTVar14->ShadowedValue + uVar33) == 1) {
        bVar19 = 8;
      }
      this->field_0x2d8 = -(iVar23 != 0) & 2U | this->field_0x2d8 & 0xf5 | bVar19;
    }
    pFVar7 = this->RenderData->RayTracingProxy;
    if (pFVar7->bUsingRenderingLODs == false) {
      uVar37 = (pFVar7->LODs).Array.ArrayNum;
      if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
      }
      DestructItems<FStaticMeshSceneProxy::FRayTracingLODInfo,int>
                ((FRayTracingLODInfo *)(this->RayTracingLODInfos).AllocatorInstance.Data,
                 (this->RayTracingLODInfos).ArrayNum);
      (this->RayTracingLODInfos).ArrayNum = 0;
      if ((this->RayTracingLODInfos).ArrayMax != uVar37) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar37,&(this->RayTracingLODInfos).AllocatorInstance,0,
                   &(this->RayTracingLODInfos).ArrayMax);
      }
      if (0 < (this->RenderData->RayTracingProxy->LODs).Array.ArrayNum) {
        uVar33 = uVar42;
        do {
          uVar37 = (this->RayTracingLODInfos).ArrayNum;
          if (uVar37 == (this->RayTracingLODInfos).ArrayMax) {
            uVar37 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(this->RayTracingLODInfos).AllocatorInstance,
                                &(this->RayTracingLODInfos).ArrayMax);
          }
          (this->RayTracingLODInfos).ArrayNum = uVar37 + 1;
          uVar40 = 0;
          if ((int)uVar37 < (int)(uVar37 + 1)) {
            uVar40 = ~uVar37 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
            return pFVar28;
          }
          pFVar2 = (this->RayTracingLODInfos).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x18;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FRayTracingLODInfo::FRayTracingLODInfo((FRayTracingLODInfo *)pFVar2,param_1,(int)uVar33)
            ;
          }
          uVar37 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar37;
        } while ((int)uVar37 < (this->RenderData->RayTracingProxy->LODs).Array.ArrayNum);
      }
    }
  }
  bVar16 = CacheShadowDepthsFromPrimitivesUsingWPO();
  if ((bVar16) ||
     ((bVar19 = *(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5), (bVar19 & 0x40) == 0
      && (-1 < (char)bVar19)))) {
    bVar19 = 0x20;
  }
  else {
    bVar19 = 0;
  }
  this->field_0x7c = this->field_0x7c & 0xdf;
  this->field_0x7c = this->field_0x7c | bVar19;
  if ((ZPULL(*(undefined4 *)&this->field_0xb10,0,1) == 0) || (uVar37 = 1, bVar18 == 0)) {
    uVar37 = 0;
  }
  *(uint *)&this->field_0xb10 = *(undefined4 *)&this->field_0xb10 & 0xfffffffe | uVar37;
  if (((this->field_0x7d & 2) == 0) || (uVar37 == 0)) {
    bVar18 = 0;
  }
  else {
    bVar18 = 2;
  }
  this->field_0x80 = this->field_0x80 | 0x20;
  this->field_0x7d = this->field_0x7d & 0xfd | bVar18;
  FPrimitiveSceneProxy::EnableGPUSceneSupportFlags((FPrimitiveSceneProxy *)this);
  pUVar8 = this->Owner;
  if (pUVar8 != (UObject *)0x0) {
    pUVar34 = Z_Construct_UClass_ALODActor_NoRegister();
    iVar23 = (int)pUVar34->_padding_;
    if ((iVar23 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar23 * 8) ==
        &pUVar34->_padding_)) {
      uVar20 = pUVar8[0x14].field_0xc + '\x01';
      goto LAB_14877abca;
    }
  }
  pUVar8 = this->Owner;
  if (pUVar8 != (UObject *)0x0) {
    pUVar34 = Z_Construct_UClass_AWorldPartitionHLOD_NoRegister();
    iVar23 = (int)pUVar34->_padding_;
    if ((iVar23 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar23 * 8) ==
        &pUVar34->_padding_)) {
      uVar20 = pUVar8[0x11].field_0x20 + '\x02';
      goto LAB_14877abca;
    }
  }
  if (param_1->LODParentPrimitive == (UObject *)0x0) {
    uVar20 = '\0';
  }
  else {
    uVar20 = '\x01';
  }
LAB_14877abca:
  this->HierarchicalLODIndex = uVar20;
  if (this->BodySetup != (UBodySetup *)0x0) {
    TVar21 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this->BodySetup);
    this->CollisionTraceFlag = (uint)*(byte *)CONCAT71(extraout_var,TVar21.Value);
  }
  if ((((this->StaticMesh != (UStaticMesh *)0x0) &&
       (pFVar26 = this->RenderData, pFVar26 != (FStaticMeshRenderData *)0x0)) &&
      ((this->StaticMesh->SpeedTreeWind).Object != (FSpeedTreeWind *)0x0)) &&
     (0 < (pFVar26->LODVertexFactories).ArrayNum)) {
    do {
      plVar9 = *(longlong **)&this->field_0x220;
      uVar40 = (uint)uVar42;
      pcVar11 = *(code **)(*plVar9 + 0x3b0);
      pUVar10 = this->StaticMesh;
      uVar37 = 0;
      if ((int)uVar40 < (pFVar26->LODVertexFactories).ArrayNum) {
        uVar37 = ~uVar40 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
        return pFVar28;
      }
      (*pcVar11)(plVar9,(pFVar26->LODVertexFactories).AllocatorInstance.Data +
                        (longlong)(int)uVar40 * 0x470,pUVar10);
      plVar9 = *(longlong **)&this->field_0x220;
      pFVar26 = this->RenderData;
      pcVar11 = *(code **)(*plVar9 + 0x3b0);
      pUVar10 = this->StaticMesh;
      uVar37 = 0;
      if ((int)uVar40 < (pFVar26->LODVertexFactories).ArrayNum) {
        uVar37 = ~uVar40 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
        return pFVar28;
      }
      (*pcVar11)(plVar9,(pFVar26->LODVertexFactories).AllocatorInstance.Data +
                        (longlong)(int)uVar40 * 0x470 + 0x230,pUVar10);
      pFVar26 = this->RenderData;
      uVar42 = (ulonglong)(uVar40 + 1);
    } while ((int)(uVar40 + 1) < (pFVar26->LODVertexFactories).ArrayNum);
  }
  this->field_0x83 =
       ((char)((uint)*(undefined4 *)&param_1->field_0x164 >> 8) << 6 ^ this->field_0x83) & 0x40U ^
       this->field_0x83;
  bVar16 = IsAllowingApproximateOcclusionQueries();
  if (bVar16) {
    this->field_0x84 = this->field_0x84 | 8;
  }
  this->field_0x7c =
       this->field_0x7c ^
       (*(char *)((longlong)&(this->MaterialRelevance).field0_0x0 + 4) * '\x02' ^ this->field_0x7c)
       & 8U;
  this->field_0x7d =
       this->field_0x7d ^
       (*(char *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) * '\x02' ^ this->field_0x7d)
       & 0x40U;
  if (-1 < *(char *)((longlong)&(this->MaterialRelevance).field0_0x0 + 6)) {
    FPrimitiveSceneProxy::UpdateVisibleInLumenScene((FPrimitiveSceneProxy *)this);
  }
  if ((param_1->MeshPaintTexture == (UTexture *)0x0) ||
     (cVar22 = (**(code **)(param_1->MeshPaintTexture->_padding_ + 0x348))(), cVar22 == '\0')) {
    pFVar35 = (FTextureResource *)0x0;
  }
  else {
    pFVar35 = UTexture::GetResource(param_1->MeshPaintTexture);
  }
  this->MeshPaintTextureResource = pFVar35;
  *(uint *)&this->field_0xb10 =
       (param_1->MeshPaintTextureCoordinateIndex << 2 ^ *(uint *)&this->field_0xb10) & 0xc ^
       *(uint *)&this->field_0xb10;
  if ((param_1->MaterialCacheTextures).ArrayNum != 0) {
    if (((param_1->MaterialCacheTextures).ArrayNum < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar28 = (FStaticMeshSceneProxy *)(*pcVar11)();
      return pFVar28;
    }
    cVar22 = (**(code **)(**(longlong **)(param_1->MaterialCacheTextures).AllocatorInstance.Data +
                         0x348))();
    if (cVar22 != '\0') {
      pFVar47 = (param_1->MaterialCacheTextures).AllocatorInstance.Data;
      iVar23 = (param_1->MaterialCacheTextures).ArrayNum;
      pFVar2 = pFVar47 + (longlong)iVar23 * 8;
      while( true ) {
        if ((param_1->MaterialCacheTextures).ArrayNum != iVar23) {
          `TCheckedPointerIterator<UMaterialCacheVirtualTexture_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_a5);
        }
        if (pFVar47 == pFVar2) break;
        pFVar36 = UMaterialCacheVirtualTexture::CreateRenderProxy
                            (*(UMaterialCacheVirtualTexture **)pFVar47,
                             param_1->MaterialCacheTextureCoordinateIndex);
        iVar25 = *(int *)&this->field_0xe8;
        if (iVar25 == *(int *)&this->field_0xec) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&this->field_0xe0,(int *)&this->field_0xec)
          ;
        }
        pFVar47 = pFVar47 + 8;
        *(int *)&this->field_0xe8 = iVar25 + 1;
        *(FMaterialCacheVirtualTextureRenderProxy **)
         (*(longlong *)&this->field_0xe0 + (longlong)iVar25 * 8) = pFVar36;
      }
    }
  }
  return this;
}

// FStaticMeshSceneProxy @ 14877af40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStaticMeshSceneProxy * __thiscall
FStaticMeshSceneProxy::FStaticMeshSceneProxy
          (FStaticMeshSceneProxy *this,UStaticMeshComponent *param_1,bool param_2)

{
  FStaticMeshSceneProxyDesc local_198;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  local_198._padding_._0_4_ = (uint)local_198._padding_ | 0x10000001;
  local_198.WireframeColor.field0_0x0.Bits = (FColor_u_0)0xff00ffff;
  local_198.OverrideMaterials.DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
  local_198.OverrideMaterials.ArrayNum = 0;
  local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.MaterialSlotsOverlayMaterial.ArrayNum = 0;
  local_198.MaterialSlotsOverlayMaterial.ArrayMax = 0;
  local_198.MaterialCacheTextures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.MaterialCacheTextures.ArrayNum = 0;
  local_198.MaterialCacheTextures.ArrayMax = 0;
  local_198.LODData.DataPtr = (FStaticMeshComponentLODInfo *)0x0;
  local_198.LODData.ArrayNum = 0;
  local_198.MaterialRelevance.field0_0x0.Raw = (FMaterialRelevance_u_0)0x0;
  local_198.MeshPaintTextureCoordinateIndex = 0;
  local_198.MaterialCacheTextureCoordinateIndex = 0;
  local_198.CollisionResponseContainer.bIsSet = false;
  local_198.LightmapType = Default;
  local_198._padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
  local_198.LODParentPrimitive = (UObject *)0x0;
  local_198.MeshPaintTexture = (UTexture *)0x0;
  local_198.bUseProvidedMaterialRelevance = 0;
  local_198.bForceNaniteForMasked = 0;
  local_198.bForceDisableNanite = 0;
  local_198.bDisallowNanite = 0;
  local_198.bDisplayNaniteFallbackMesh = 0;
  local_198.bSortTriangles = 0;
  local_198.bEvaluateWorldPositionOffsetInRayTracing = 0;
  local_198.bOverrideDistanceFieldSelfShadowBias = 0;
  local_198.bCastDistanceFieldIndirectShadow = 0;
  local_198.bOverrideMinLOD = 0;
  local_198.bEvaluateWorldPositionOffset = 1;
  local_198.bDrawMeshCollisionIfSimple = 0;
  local_198.bDrawMeshCollisionIfComplex = 0;
  local_198.bReverseCulling = 0;
  local_198.StaticMesh = (UStaticMesh *)0x0;
  local_198.BodySetup = (UBodySetup *)0x0;
  local_198.NaniteResources = (FResources *)0x0;
  local_198.OverlayMaterial.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_198.OverlayMaterialMaxDrawDistance = ___xmm_3dcccccd000000000000000000000000;
  local_198.NanitePixelProgrammableDistance = _UNK_1509250e4;
  local_198.DistanceFieldSelfShadowBias = _UNK_1509250e8;
  local_198.DistanceFieldIndirectShadowMinVisibility = _UNK_1509250ec;
  local_198.ForcedLodModel = 0;
  local_198.MinLOD = 0;
  local_198.WorldPositionOffsetDisableDistance = 0;
  local_198.StaticLightMapResolution = 0;
  FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent(&local_198,param_1);
  FStaticMeshSceneProxy(this,&local_198,param_2);
  local_198._padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
  if (local_198.MaterialCacheTextures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialCacheTextures.AllocatorInstance.Data);
  }
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  *(undefined ***)this = &___7FStaticMeshSceneProxy__6B_;
  return this;
}

// ~FStaticMeshSceneProxy @ 14877f900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FStaticMeshSceneProxy::~FStaticMeshSceneProxy(FStaticMeshSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FRayTracingGeometry> FVar2;
  
  *(undefined ***)this = &___7FStaticMeshSceneProxy__6B_;
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data,
             (this->CachedRayTracingMaterials).ArrayNum);
  pFVar1 = (this->CachedRayTracingMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FRayTracingGeometry>)0x0) {
    FVar2 = (ForElementType<FRayTracingGeometry>)&this->DynamicRayTracingGeometries;
  }
  DestructItems<FRayTracingGeometry,int>
            ((FRayTracingGeometry *)FVar2,(this->DynamicRayTracingGeometries).ArrayNum);
  FVar2 = (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FRayTracingGeometry>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStaticMeshSceneProxy::FRayTracingLODInfo,int>
            ((FRayTracingLODInfo *)(this->RayTracingLODInfos).AllocatorInstance.Data,
             (this->RayTracingLODInfos).ArrayNum);
  pFVar1 = (this->RayTracingLODInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStaticMeshSceneProxy::FLODInfo,int>
            ((FLODInfo *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar1 = (this->LODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// AddSpeedTreeWind @ 148787d60

void __thiscall FStaticMeshSceneProxy::AddSpeedTreeWind(FStaticMeshSceneProxy *this)

{
  longlong *plVar1;
  code *pcVar2;
  UStaticMesh *pUVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FStaticMeshRenderData *pFVar7;
  
  if ((((this->StaticMesh != (UStaticMesh *)0x0) &&
       (pFVar7 = this->RenderData, pFVar7 != (FStaticMeshRenderData *)0x0)) &&
      ((this->StaticMesh->SpeedTreeWind).Object != (FSpeedTreeWind *)0x0)) &&
     (uVar6 = 0, 0 < (pFVar7->LODVertexFactories).ArrayNum)) {
    do {
      plVar1 = *(longlong **)&this->field_0x220;
      pcVar2 = *(code **)(*plVar1 + 0x3b0);
      pUVar3 = this->StaticMesh;
      uVar5 = 0;
      if ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(plVar1,(pFVar7->LODVertexFactories).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 0x470,pUVar3);
      plVar1 = *(longlong **)&this->field_0x220;
      pFVar7 = this->RenderData;
      pcVar2 = *(code **)(*plVar1 + 0x3b0);
      pUVar3 = this->StaticMesh;
      uVar5 = 0;
      if ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(plVar1,(pFVar7->LODVertexFactories).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 0x470 + 0x230,pUVar3);
      pFVar7 = this->RenderData;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum);
  }
  return;
}

// CanBeOccluded @ 14878ad80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FStaticMeshSceneProxy::CanBeOccluded(FStaticMeshSceneProxy *this)

{
  bool bVar1;
  
  if (((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) & 4) == 0) &&
     ((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5) & 2) == 0)) {
    bVar1 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
    if ((!bVar1) && ((this->field_0x78 & 0x20) == 0)) {
      return true;
    }
  }
  return false;
}

// CreateDynamicRayTracingGeometries @ 148790890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::CreateDynamicRayTracingGeometries
          (FStaticMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  TArray<FRayTracingGeometry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FRayTracingGeometrySegment *pFVar5;
  FRHIResource *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FRayTracingGeometry> FVar11;
  longlong *plVar12;
  ForAnyElementType FVar14;
  uint uVar15;
  FStaticMeshRayTracingProxy *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [8];
  longlong local_150;
  ForElementType<FRayTracingGeometry> local_148;
  FRHICommandListBase *local_140;
  FStaticMeshRayTracingProxy *local_138;
  FRayTracingGeometryInitializer local_130;
  FRHIBuffer *local_b8;
  uint local_b0;
  ERayTracingGeometryType local_ac;
  uint local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  ERayTracingGeometryInitializerType local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FResourceArrayUploadInterface *local_88;
  uint local_80 [2];
  uint auStack_78 [2];
  uint local_70 [2];
  FRHIRayTracingGeometry *local_68;
  FName local_60;
  uint local_58;
  FName local_54;
  ulonglong local_48;
  ForElementType<FRayTracingGeometry> FVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (this->bCreateDynamicRayTracingGeometries) {
    local_140 = param_1;
    if ((!this->bDynamicRayTracingGeometry) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bDynamicRayTracingGeometry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                           ,0x39c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar1 = &(this->DynamicRayTracingGeometries).ArrayNum;
    if ((*piVar1 != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicRayTracingGeometries.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                           ,0x39d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar2 = &this->DynamicRayTracingGeometries;
    pFVar16 = this->RenderData->RayTracingProxy;
    iVar10 = (pFVar16->LODs).Array.ArrayNum;
    local_148 = (ForElementType<FRayTracingGeometry>)pTVar2;
    local_138 = pFVar16;
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRayTracingGeometry>_>
                      (0x100,8,iVar10,&pTVar2->AllocatorInstance,piVar1,
                       &(this->DynamicRayTracingGeometries).ArrayMax);
    FVar13 = (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<FRayTracingGeometry>)0x0) {
      FVar13 = (ForElementType<FRayTracingGeometry>)pTVar2;
    }
    DefaultConstructItems<FRayTracingGeometry,int>
              ((void *)((longlong)FVar13 + (longlong)iVar8 * 0x100),iVar10);
    iVar10 = (pFVar16->LODs).Array.ArrayNum;
    uVar15 = 0;
    if (0 < iVar10) {
      lVar17 = 0;
      local_150 = 0;
      do {
        uVar18 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < iVar10) {
          uVar9 = uVar18;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)
                 (*(longlong *)((pFVar16->LODs).Array.AllocatorInstance.Data + lVar17 * 8) + 8);
        local_b8 = *(FRHIBuffer **)(lVar4 + 0x70);
        if (local_b8 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_b8);
        }
        local_b0 = *(uint *)(lVar4 + 0x78);
        local_ac = *(ERayTracingGeometryType *)(lVar4 + 0x7c);
        local_a8 = *(uint *)(lVar4 + 0x80);
        local_a4 = *(undefined2 *)(lVar4 + 0x84);
        local_a2 = *(undefined1 *)(lVar4 + 0x86);
        local_a1 = *(undefined1 *)(lVar4 + 0x87);
        local_a0 = *(undefined1 *)(lVar4 + 0x88);
        local_98.Data = (FScriptContainerElement *)0x0;
        iVar10 = *(int *)(lVar4 + 0x98);
        pFVar5 = *(FRayTracingGeometrySegment **)(lVar4 + 0x90);
        local_90 = CONCAT44(local_90._4_4_,iVar10);
        if (iVar10 == 0) {
          local_90 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar10,0,&local_98,iVar10,(int *)((longlong)&local_90 + 4));
          ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                    (local_98.Data,pFVar5,iVar10);
        }
        local_88 = *(FResourceArrayUploadInterface **)(lVar4 + 0xa0);
        local_80 = *(uint (*) [2])(lVar4 + 0xa8);
        auStack_78 = *(uint (*) [2])(lVar4 + 0xb0);
        local_70 = *(uint (*) [2])(lVar4 + 0xb8);
        local_68 = *(FRHIRayTracingGeometry **)(lVar4 + 0xc0);
        local_60 = *(FName *)(lVar4 + 200);
        local_58 = *(uint *)(lVar4 + 0xd0);
        local_54 = *(FName *)(lVar4 + 0xd4);
        iVar10 = (int)local_90;
        pFVar3 = local_98.Data + (longlong)(int)local_90 * 0x28;
        FVar14.Data = local_98.Data;
        while( true ) {
          if ((int)local_90 != iVar10) {
            local_158[0] = 0;
            `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_158);
          }
          FVar13 = local_148;
          if (FVar14.Data == pFVar3) break;
          this_00 = *(FRHIResource **)FVar14.Data;
          if (this_00 != (FRHIResource *)0x0) {
            *(undefined8 *)FVar14.Data = 0;
            FRHIResource::Release(this_00);
          }
          FVar14.Data = FVar14.Data + 0x28;
        }
        local_a4 = 0x101;
        local_a0 = Rendering;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)((longlong)local_148 + 0x808)) {
          uVar9 = uVar18;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = local_150;
        FVar11 = FVar13;
        if (*(ForElementType<FRayTracingGeometry> *)((longlong)FVar13 + 0x800) !=
            (ForElementType<FRayTracingGeometry>)0x0) {
          FVar11 = *(ForElementType<FRayTracingGeometry> *)((longlong)FVar13 + 0x800);
        }
        local_130.OfflineDataHeader.Reserved[4] = local_70[0];
        local_130.OfflineDataHeader.Reserved[5] = local_70[1];
        local_130.IndexBuffer.Reference = local_b8;
        local_130.IndexBufferOffset = local_b0;
        local_130.GeometryType = local_ac;
        local_130.TotalPrimitiveCount = local_a8;
        local_130.bFastBuild = (bool)(undefined1)local_a4;
        local_130.bAllowUpdate = (bool)local_a4._1_1_;
        local_130.bAllowCompaction = (bool)local_a2;
        local_130.bTemplate = (bool)local_a1;
        local_130.Type = local_a0;
        local_130.Segments.AllocatorInstance.Data = local_98.Data;
        local_130.Segments.ArrayNum = (int)local_90;
        local_130.Segments.ArrayMax = local_90._4_4_;
        local_130.OfflineData = local_88;
        local_130.SourceGeometry = local_68;
        local_130.DebugName.Number = local_58;
        local_130.OfflineDataHeader.Reserved[0] = local_80[0];
        local_130.OfflineDataHeader.Reserved[1] = local_80[1];
        local_130.OfflineDataHeader.Reserved[2] = auStack_78[0];
        local_130.OfflineDataHeader.Reserved[3] = auStack_78[1];
        local_130.OwnerName = local_54;
        local_b8 = (FRHIBuffer *)0x0;
        local_98.Data = (FScriptContainerElement *)0x0;
        local_90 = 0;
        local_130.DebugName.Name = local_60;
        FRayTracingGeometry::SetInitializer
                  ((FRayTracingGeometry *)((longlong)FVar11 + local_150),&local_130);
        uVar9 = 0;
        if ((int)uVar15 < *(int *)((longlong)FVar13 + 0x808)) {
          uVar9 = uVar18;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(ForElementType<FRayTracingGeometry> *)((longlong)FVar13 + 0x800) !=
            (ForElementType<FRayTracingGeometry>)0x0) {
          FVar13 = *(ForElementType<FRayTracingGeometry> *)((longlong)FVar13 + 0x800);
        }
        plVar12 = (longlong *)((longlong)FVar13 + lVar4);
        (**(code **)(*plVar12 + 0x18))(plVar12,local_140);
        DestructItems<FRayTracingGeometrySegment,int>
                  ((FRayTracingGeometrySegment *)local_98.Data,(int)local_90);
        if ((FRayTracingGeometrySegment *)local_98.Data != (FRayTracingGeometrySegment *)0x0) {
          FMemory::Free(local_98.Data);
        }
        if (local_b8 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_b8);
        }
        local_150 = lVar4 + 0x100;
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
        iVar10 = (local_138->LODs).Array.ArrayNum;
        pFVar16 = local_138;
      } while ((int)uVar15 < iVar10);
    }
  }
  return;
}

// CreateRenderThreadResources @ 148791630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::CreateRenderThreadResources
          (FStaticMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntVector2<unsigned_int> TVar3;
  
  bVar2 = IsRayTracingAllowed();
  if (bVar2) {
    this->RayTracingGeometryGroupHandle = this->RenderData->RayTracingGeometryGroupHandle;
  }
  bVar2 = IsRayTracingEnabled();
  if ((bVar2) && (this->bDynamicRayTracingGeometry)) {
    CreateDynamicRayTracingGeometries(this,param_1);
  }
  else if ((this->DynamicRayTracingGeometries).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicRayTracingGeometries.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                       ,0x3d5,L"Proxy shouldn\'t have entries in DynamicRayTracingGeometries.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar3 = MeshPaintVirtualTexture::GetTextureDescriptor
                    ((FTextureResource *)&stack0x00000008,(uint)this->MeshPaintTextureResource);
                    /* WARNING: Load size is inaccurate */
  (this->MeshPaintTextureDescriptor).field0_0x0 = (TIntVector2<unsigned_int>_u_0)*TVar3.field0_0x0;
  return;
}

// DestroyRenderThreadResources @ 148792790

void __thiscall FStaticMeshSceneProxy::DestroyRenderThreadResources(FStaticMeshSceneProxy *this)

{
  longlong *plVar1;
  code *pcVar2;
  UStaticMesh *pUVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FStaticMeshRenderData *pFVar7;
  
  ReleaseDynamicRayTracingGeometries(this);
  if (this->StaticMesh == (UStaticMesh *)0x0) {
    this->StaticMesh = (UStaticMesh *)0x0;
    return;
  }
  pFVar7 = this->RenderData;
  if ((pFVar7 != (FStaticMeshRenderData *)0x0) &&
     ((this->StaticMesh->SpeedTreeWind).Object != (FSpeedTreeWind *)0x0)) {
    uVar6 = 0;
    if ((pFVar7->LODVertexFactories).ArrayNum < 1) {
      this->StaticMesh = (UStaticMesh *)0x0;
      return;
    }
    while( true ) {
      plVar1 = *(longlong **)&this->field_0x220;
      pcVar2 = *(code **)(*plVar1 + 0x3b8);
      pUVar3 = this->StaticMesh;
      uVar5 = 0;
      if ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(plVar1,(pFVar7->LODVertexFactories).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 0x470 + 0x230,pUVar3);
      plVar1 = *(longlong **)&this->field_0x220;
      pFVar7 = this->RenderData;
      pcVar2 = *(code **)(*plVar1 + 0x3b8);
      pUVar3 = this->StaticMesh;
      uVar5 = 0;
      if ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) break;
      (*pcVar2)(plVar1,(pFVar7->LODVertexFactories).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 0x470,pUVar3);
      pFVar7 = this->RenderData;
      uVar6 = uVar6 + 1;
      if ((pFVar7->LODVertexFactories).ArrayNum <= (int)uVar6) {
        this->StaticMesh = (UStaticMesh *)0x0;
        return;
      }
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->StaticMesh = (UStaticMesh *)0x0;
  return;
}

// DrawStaticElements @ 148795520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::DrawStaticElements
          (FStaticMeshSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  byte *pbVar1;
  float fVar2;
  FStaticMeshRenderData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  EShaderPlatform EVar12;
  Type TVar13;
  EShadingPath EVar14;
  FMaterialRenderProxy *this_00;
  FMaterial *this_01;
  ushort *puVar15;
  ForElementType<FMeshBatchElement> FVar16;
  FMeshBatchElement *pFVar17;
  byte bVar18;
  FScriptContainerElement *pFVar19;
  byte *pbVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  UMaterialInterface *pUVar30;
  uint uVar31;
  longlong lVar32;
  float fVar33;
  undefined1 auStackY_818 [32];
  uint local_7d8;
  byte local_7d4;
  byte local_7d1;
  undefined1 local_7d0;
  byte local_7cf;
  undefined1 local_7ce [2];
  int local_7cc;
  ulonglong local_7c8;
  ulonglong local_7c0;
  longlong local_7b8;
  undefined4 local_7b0;
  Type local_7ac;
  ulonglong local_7a8;
  FScriptContainerElement *local_7a0;
  undefined1 local_798 [4];
  uint local_794;
  UMaterialInterface *local_790;
  longlong local_788;
  longlong local_780;
  longlong local_778;
  ForElementType<FMeshBatchElement> local_770;
  int local_6d0;
  int local_6cc;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  short local_6a0;
  undefined1 local_69e;
  uint local_69c;
  undefined1 local_698;
  undefined1 local_697;
  ForElementType<FMeshBatchElement> local_690;
  int local_5f0;
  int local_5ec;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  short local_5c0;
  undefined1 local_5be;
  uint local_5bc;
  undefined1 local_5b8;
  undefined1 local_5b7;
  FMeshBatchElement local_5b0;
  FMeshBatchElement *local_518;
  int local_510;
  undefined4 local_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  short local_4e0;
  undefined1 local_4de;
  uint local_4dc;
  undefined2 local_4d8;
  FMeshBatchElement local_4d0;
  FMeshBatchElement *local_438;
  int local_430;
  undefined4 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  short local_400;
  undefined1 local_3fe;
  uint local_3fc;
  undefined2 local_3f8;
  ForElementType<FMeshBatchElement> local_3f0;
  int local_350;
  int local_34c;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  short local_320;
  undefined1 local_31e;
  uint local_31c;
  undefined1 local_318;
  undefined1 local_317;
  ForElementType<FMeshBatchElement> local_310;
  int local_270;
  int local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  short local_240;
  undefined1 local_23e;
  uint local_23c;
  undefined1 local_238;
  undefined1 local_237;
  ForElementType<FMeshBatchElement> local_230;
  int local_190;
  int local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  short local_160;
  undefined1 local_15e;
  uint local_15c;
  undefined1 local_158;
  undefined1 local_157;
  FMeshBatchElement local_150;
  FMeshBatchElement *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  uint local_7c;
  undefined2 local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_818;
  if ((this->field_0x79 & 0x20) == 0) {
    local_7b0 = (**(code **)(*(longlong *)this + 0x160))();
    iVar26 = (this->RenderData->LODResources).Array.ArrayNum;
    local_7ac = (*(FSceneInterface **)&this->field_0x220)->FeatureLevel;
    EVar12 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar12].bContainsValidPlatformInfo == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar23 = this->ForcedLodModel;
    local_7d8 = this->ClampedMinLOD;
    uVar28 = (ulonglong)(int)local_7d8;
    local_7cc = *(int *)&this->field_0xd8;
    if (iVar23 < 1) {
      uVar29 = uVar28;
      local_778 = (longlong)iVar26;
      if ((longlong)uVar28 < (longlong)iVar26) {
        do {
          uVar22 = 0;
          pFVar3 = this->RenderData;
          uVar27 = (uint)uVar29;
          uVar31 = ~uVar27 >> 0x1f;
          uVar25 = 0;
          if ((int)uVar27 < (pFVar3->LODResources).Array.ArrayNum) {
            uVar25 = uVar31;
          }
          local_7a8 = uVar28;
          local_794 = uVar31;
          if ((uVar25 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar8 = local_7a8;
          lVar24 = *(longlong *)((pFVar3->LODResources).Array.AllocatorInstance.Data + uVar28 * 8);
          fVar2 = this->RenderData->ScreenSize[local_7a8].Default;
          local_7b8 = lVar24;
          fVar33 = (float)(**(code **)(*(longlong *)this + 0x210))(this);
          fVar33 = fVar33 * fVar2;
          local_7d1 = 0;
          local_7d4 = 0;
          if ((GUseShadowIndexBuffer != false) && ((*(byte *)(lVar24 + 0x94) & 1) != 0)) {
            uVar25 = 0;
            if ((int)uVar27 < (this->LODs).ArrayNum) {
              uVar25 = uVar31;
            }
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar9 = false;
            local_7a0 = (this->LODs).AllocatorInstance.Data + uVar8 * 0x80;
            bVar6 = true;
            if ((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            bVar18 = this->bCastShadow;
            local_7c8 = 0;
            local_7c0 = 0;
            while( true ) {
              pFVar19 = local_7a0;
              local_7cf = bVar18;
              if (*(int *)(lVar24 + 0x38) <= (int)uVar22) break;
              pFVar21 = local_7a0 + 0x30;
              uVar25 = 0;
              if ((int)uVar22 < *(int *)(local_7a0 + 0x50)) {
                uVar25 = ~uVar22 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(FScriptContainerElement **)(pFVar19 + 0x48) != (FScriptContainerElement *)0x0) {
                pFVar21 = *(FScriptContainerElement **)(pFVar19 + 0x48);
              }
              this_00 = (FMaterialRenderProxy *)
                        (**(code **)(**(longlong **)(pFVar21 + local_7c0) + 0x310))();
              this_01 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,local_7ac);
              if ((bVar9) ||
                 ((!bVar5 &&
                  (cVar10 = (**(code **)(this_01->_padding_ + 0x58))(this_01), cVar10 != '\0')))) {
                bVar9 = true;
              }
              else {
                bVar9 = false;
              }
              if (((!bVar6) || (bVar5)) ||
                 (cVar10 = (**(code **)(this_01->_padding_ + 0x58))(this_01), cVar10 == '\0')) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              lVar24 = local_7b8;
              lVar32 = local_7b8 + 0x10;
              uVar25 = 0;
              if ((int)uVar22 < *(int *)(local_7b8 + 0x38)) {
                uVar25 = ~uVar22 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(longlong *)(lVar24 + 0x30) != 0) {
                lVar32 = *(longlong *)(lVar24 + 0x30);
              }
              if (((((bVar9) && (!bVar6)) ||
                   ((bVar11 = FMaterial::WritesEveryPixel(this_01,false), !bVar11 ||
                    (((cVar10 = (**(code **)(this_01->_padding_ + 0x48))(this_01), cVar10 != '\0' ||
                      (cVar10 = (**(code **)(this_01->_padding_ + 0x50))(this_01), cVar10 != '\0'))
                     || (bVar11 = IsTranslucentBlendMode(this_01), bVar11)))))) ||
                  ((bVar11 = FMaterial::MaterialModifiesMeshPosition_RenderThread(this_01), bVar11
                   || (iVar26 = (**(code **)(this_01->_padding_ + 0x40))(this_01), iVar26 != 0))))
                 || ((cVar10 = (**(code **)(this_01->_padding_ + 0x368))(this_01), cVar10 != '\0' ||
                     (puVar15 = (ushort *)
                                (**(code **)(this_01->_padding_ + 0x280))(this_01,local_798),
                     (*puVar15 & 0x400) != 0)))) goto LAB_148796176;
              local_7c0 = local_7c0 + 0x18;
              lVar24 = local_7c8 + 0x15;
              local_7c8 = local_7c8 + 0x1c;
              bVar18 = *(byte *)(lVar24 + lVar32) & local_7cf;
              uVar22 = uVar22 + 1;
              lVar24 = local_7b8;
            }
            if (((((this->field_0x85 & 0x10) == 0) ||
                 (EVar14 = FSceneInterface::GetShadingPath
                                     (*(Type *)(*(longlong *)&this->field_0x220 + 8)),
                 EVar14 != Deferred)) || (this->field_0x68 == '\x02')) ||
               (this->field_0x68 == '\x01')) {
              local_7d4 = 0;
            }
            else {
              local_7d4 = 1;
            }
            local_7d1 = bVar18;
            if ((bVar18 != 0) || (local_7d4 != 0)) {
              iVar26 = (**(code **)(*(longlong *)this + 600))(this);
              (**(code **)((longlong)*param_1 + 0x10))(param_1,iVar26);
              iVar23 = 0;
              if (0 < iVar26) {
                do {
                  local_b8 = (FMeshBatchElement *)0x0;
                  local_7c = local_7c & 0xf081803c | 0x81803c;
                  local_ac = 1;
                  local_98 = 0;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_90 = 0xffffffffffffffff;
                  local_88 = 0;
                  local_84 = 0xffffffff;
                  local_80 = 0;
                  local_7e = 0xff;
                  local_78 = 0xffff;
                  local_b0 = 1;
                  DefaultConstructItems<FMeshBatchElement,int>(&local_150,1);
                  cVar10 = (**(code **)(*(longlong *)this + 0x260))
                                     (this,local_7d8,iVar23,(undefined1)local_7b0);
                  if (cVar10 != '\0') {
                    local_7c = (((uint)local_7d4 + (uint)local_7d4 | (uint)local_7d4) << 2 |
                               bVar18 & 1) << 2 | local_7c & 0xffffffc3;
                    (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_150,fVar33);
                  }
                  pFVar17 = &local_150;
                  if (local_b8 != (FMeshBatchElement *)0x0) {
                    pFVar17 = local_b8;
                  }
                  DestructItems<FMeshBatchElement,int>(pFVar17,local_b0);
                  if (local_b8 != (FMeshBatchElement *)0x0) {
                    FMemory::Free(local_b8);
                  }
                  iVar23 = iVar23 + 1;
                } while (iVar23 < iVar26);
              }
            }
LAB_148796176:
            uVar29 = (ulonglong)local_7d8;
          }
          uVar27 = 0;
          local_7c8 = local_7c8 & 0xffffffff00000000;
          uVar25 = (uint)uVar29;
          if (0 < *(int *)(local_7b8 + 0x38)) {
            local_780 = (longlong)(int)(uint)uVar29;
            local_788 = local_780 << 7;
            local_7a0 = (FScriptContainerElement *)0x0;
            uVar28 = 0;
            do {
              lVar24 = local_788;
              pFVar19 = local_7a0;
              uVar22 = (uint)uVar28;
              uVar25 = uVar27;
              if ((int)uVar29 < (this->LODs).ArrayNum) {
                uVar25 = local_794;
              }
              if ((uVar25 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar21 = (this->LODs).AllocatorInstance.Data + lVar24 + 0x30;
              uVar25 = uVar27;
              if ((int)uVar22 < *(int *)(pFVar21 + 0x20)) {
                uVar25 = ~uVar22 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(FScriptContainerElement **)(pFVar21 + 0x18) != (FScriptContainerElement *)0x0) {
                pFVar21 = *(FScriptContainerElement **)(pFVar21 + 0x18);
              }
              pUVar30 = *(UMaterialInterface **)(pFVar19 + 0x10 + (longlong)pFVar21);
              if (*(UMaterialInterface **)(pFVar19 + 0x10 + (longlong)pFVar21) ==
                  (UMaterialInterface *)0x0) {
                pUVar30 = this->OverlayMaterial;
              }
              local_790 = pUVar30;
              iVar26 = (**(code **)(*(longlong *)this + 600))(this);
              local_7c0 = CONCAT44(local_7c0._4_4_,iVar26);
              (**(code **)((longlong)*param_1 + 0x10))(param_1,(local_7cc + 1) * iVar26);
              uVar29 = 0;
              if (0 < iVar26) {
                do {
                  local_518 = (FMeshBatchElement *)0x0;
                  local_4dc = local_4dc & 0xf081803c | 0x81803c;
                  local_50c = 1;
                  local_4f8 = 0;
                  local_508 = 0;
                  uStack_500 = 0;
                  local_4f0 = 0xffffffffffffffff;
                  local_4e8 = 0;
                  local_4e4 = 0xffffffff;
                  local_4e0 = 0;
                  local_4de = 0xff;
                  local_4d8 = 0xffff;
                  local_510 = 1;
                  DefaultConstructItems<FMeshBatchElement,int>(&local_5b0,1);
                  cVar10 = (**(code **)(*(longlong *)this + 0x268))(this,local_7d8,uVar29);
                  iVar23 = local_510;
                  if (cVar10 != '\0') {
                    if (0 < local_7cc) {
                      local_310.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                      pFVar17 = &local_5b0;
                      if (local_518 != (FMeshBatchElement *)0x0) {
                        pFVar17 = local_518;
                      }
                      local_270 = local_510;
                      if (local_510 == 0) {
                        local_26c = 1;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                  (0x98,8,local_510,0,&local_310,local_510,&local_26c);
                        FVar16 = (ForElementType<FMeshBatchElement>)&local_310;
                        if (local_310.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                          FVar16 = local_310.SecondaryData;
                        }
                        ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                  ((void *)FVar16,pFVar17,iVar23);
                      }
                      pbVar20 = *(byte **)&this->field_0xd0;
                      iVar26 = *(int *)&this->field_0xd8;
                      local_268 = local_508;
                      local_260 = uStack_500;
                      pbVar1 = pbVar20 + iVar26;
                      local_258 = local_4f8;
                      local_250 = (undefined4)local_4f0;
                      local_24c = local_4f0._4_4_;
                      local_244 = local_4e4;
                      local_240 = local_4e0;
                      local_23e = local_4de;
                      local_238 = (undefined1)local_4d8;
                      local_237 = local_4d8._1_1_;
                      local_248 = local_4e8;
                      local_23c = local_4dc & 0xff9ffc3 | local_23c & 0xf0040000 | 0x40000;
                      while( true ) {
                        if (*(int *)&this->field_0xd8 != iVar26) {
                          local_7ce[0] = 0;
                          `TCheckedPointerIterator<enum_ERuntimeVirtualTextureMaterialType,int,0>::
                          operator!='::__l2::<lambda_1>::operator()(local_7ce);
                        }
                        if (pbVar20 == pbVar1) break;
                        local_23c = (*pbVar20 & 7) << 0x13 | local_23c & 0xffc7ffff;
                        (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_310,fVar33);
                        pbVar20 = pbVar20 + 1;
                      }
                      FVar16 = (ForElementType<FMeshBatchElement>)&local_310;
                      if (local_310.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FVar16 = local_310.SecondaryData;
                      }
                      DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar16,local_270);
                      pUVar30 = local_790;
                      if (local_310.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FMemory::Free((void *)local_310.SecondaryData);
                        pUVar30 = local_790;
                      }
                    }
                    iVar26 = local_510;
                    local_230.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                    pFVar17 = &local_5b0;
                    if (local_518 != (FMeshBatchElement *)0x0) {
                      pFVar17 = local_518;
                    }
                    local_190 = local_510;
                    if (local_510 == 0) {
                      local_18c = 1;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                (0x98,8,local_510,0,&local_230,local_510,&local_18c);
                      FVar16 = (ForElementType<FMeshBatchElement>)&local_230;
                      if (local_230.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FVar16 = local_230.SecondaryData;
                      }
                      ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                ((void *)FVar16,pFVar17,iVar26);
                    }
                    local_188 = local_508;
                    local_180 = uStack_500;
                    local_178 = local_4f8;
                    local_170 = (undefined4)local_4f0;
                    local_16c = local_4f0._4_4_;
                    local_164 = local_4e4;
                    local_160 = local_4e0;
                    local_15e = local_4de;
                    local_158 = (undefined1)local_4d8;
                    local_157 = local_4d8._1_1_;
                    local_168 = local_4e8;
                    uVar25 = uVar27;
                    if (local_7d4 == 0) {
                      uVar25 = 0x20;
                    }
                    uVar22 = uVar27;
                    if (local_7d4 == 0) {
                      uVar22 = 0x10;
                    }
                    uVar31 = uVar27;
                    if (local_7d1 == 0) {
                      uVar31 = 4;
                    }
                    local_15c = (local_4dc & 0xfffffff | local_15c & 0xf0000000) &
                                (uVar25 | 0xffffffdf) & (uVar22 | 0xffffffef) &
                                (uVar31 | 0xfffffffb);
                    (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_230,fVar33);
                    FVar16 = (ForElementType<FMeshBatchElement>)&local_230;
                    if (local_230.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FVar16 = local_230.SecondaryData;
                    }
                    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar16,local_190);
                    if (local_230.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FMemory::Free((void *)local_230.SecondaryData);
                    }
                    iVar26 = local_510;
                    if ((pUVar30 != (UMaterialInterface *)0x0) &&
                       (0.0 < this->OverlayMaterialMaxDrawDistance ||
                        this->OverlayMaterialMaxDrawDistance == 0.0)) {
                      local_690.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                      pFVar17 = &local_5b0;
                      if (local_518 != (FMeshBatchElement *)0x0) {
                        pFVar17 = local_518;
                      }
                      local_5f0 = local_510;
                      if (local_510 == 0) {
                        local_5ec = 1;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                  (0x98,8,local_510,0,&local_690,local_510,&local_5ec);
                        FVar16 = (ForElementType<FMeshBatchElement>)&local_690;
                        if (local_690.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                          FVar16 = local_690.SecondaryData;
                        }
                        ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                  ((void *)FVar16,pFVar17,iVar26);
                      }
                      local_5e8 = local_508;
                      local_5e0 = uStack_500;
                      local_5d8 = local_4f8;
                      local_5d0 = (undefined4)local_4f0;
                      local_5cc = local_4f0._4_4_;
                      local_5c4 = local_4e4;
                      local_5c0 = local_4e0;
                      local_5be = local_4de;
                      local_5b8 = (undefined1)local_4d8;
                      local_5b7 = local_4d8._1_1_;
                      local_5c8 = local_4e8;
                      local_5bc = local_4dc & 0xfbefffb | local_5bc & 0xf0400000 | 0x400000;
                      local_5e0 = (**(code **)(pUVar30->_padding_ + 0x310))(pUVar30);
                      local_5c0 = local_5c0 + *(short *)(local_7b8 + 0x38);
                      (**(code **)((longlong)*param_1 + 0x18))
                                (param_1,&local_690,this->OverlayMaterialMaxDrawDistance);
                      FVar16 = (ForElementType<FMeshBatchElement>)&local_690;
                      if (local_690.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FVar16 = local_690.SecondaryData;
                      }
                      DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar16,local_5f0);
                      if (local_690.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FMemory::Free((void *)local_690.SecondaryData);
                      }
                    }
                    uVar28 = local_7c8 & 0xffffffff;
                    iVar26 = (int)local_7c0;
                  }
                  uVar22 = (uint)uVar28;
                  pFVar17 = &local_5b0;
                  if (local_518 != (FMeshBatchElement *)0x0) {
                    pFVar17 = local_518;
                  }
                  DestructItems<FMeshBatchElement,int>(pFVar17,local_510);
                  if (local_518 != (FMeshBatchElement *)0x0) {
                    FMemory::Free(local_518);
                  }
                  uVar25 = (int)uVar29 + 1;
                  uVar29 = (ulonglong)uVar25;
                } while ((int)uVar25 < iVar26);
              }
              uVar22 = uVar22 + 1;
              uVar28 = (ulonglong)uVar22;
              local_7a0 = local_7a0 + 0x18;
              uVar29 = (ulonglong)local_7d8;
              local_7c8 = CONCAT44(local_7c8._4_4_,uVar22);
              uVar25 = local_7d8;
            } while ((int)uVar22 < *(int *)(local_7b8 + 0x38));
          }
          local_7d8 = uVar25 + 1;
          uVar28 = local_7a8 + 1;
          uVar29 = (ulonglong)local_7d8;
        } while ((longlong)uVar28 < local_778);
      }
    }
    else {
      if (iVar23 < iVar26) {
        iVar26 = iVar23;
      }
      iVar23 = local_7d8 + 1;
      if ((int)(local_7d8 + 1) < iVar26) {
        iVar23 = iVar26;
      }
      pFVar3 = this->RenderData;
      uVar28 = 0;
      uVar22 = iVar23 - 1;
      uVar25 = ~uVar22 >> 0x1f;
      local_7c8 = CONCAT44(local_7c8._4_4_,uVar25);
      uVar27 = 0;
      if ((int)uVar22 < (pFVar3->LODResources).Array.ArrayNum) {
        uVar27 = uVar25;
      }
      if (uVar27 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar25 = (uint)local_7c8;
      }
      uVar7 = __real_7f7fffff;
      local_7c0 = local_7c0 & 0xffffffff00000000;
      local_7b8 = *(longlong *)
                   ((pFVar3->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar22 * 8)
      ;
      if (0 < *(int *)(local_7b8 + 0x38)) {
        local_7a0 = (FScriptContainerElement *)((longlong)(int)uVar22 << 7);
        local_7a8 = 0;
        do {
          pFVar19 = local_7a0;
          uVar29 = local_7a8;
          uVar31 = (uint)uVar28;
          uVar27 = 0;
          if ((int)uVar22 < (this->LODs).ArrayNum) {
            uVar27 = uVar25;
          }
          if ((uVar27 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar19 = (this->LODs).AllocatorInstance.Data + (longlong)pFVar19 + 0x30;
          uVar25 = 0;
          if ((int)uVar31 < *(int *)(pFVar19 + 0x20)) {
            uVar25 = ~uVar31 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(FScriptContainerElement **)(pFVar19 + 0x18) != (FScriptContainerElement *)0x0) {
            pFVar19 = *(FScriptContainerElement **)(pFVar19 + 0x18);
          }
          pUVar30 = *(UMaterialInterface **)(pFVar19 + uVar29 + 0x10);
          if (*(UMaterialInterface **)(pFVar19 + uVar29 + 0x10) == (UMaterialInterface *)0x0) {
            pUVar30 = this->OverlayMaterial;
          }
          TVar13 = (**(code **)(*(longlong *)this + 600))(this);
          local_7ac = TVar13;
          (**(code **)((longlong)*param_1 + 0x10))(param_1,(local_7cc + 1) * TVar13);
          iVar26 = 0;
          if (0 < (int)TVar13) {
            do {
              local_42c = 1;
              local_438 = (FMeshBatchElement *)0x0;
              local_3fc = local_3fc & 0xf081803c | 0x81803c;
              local_418 = 0;
              local_410 = 0xffffffffffffffff;
              local_428 = 0;
              uStack_420 = 0;
              local_408 = 0;
              local_404 = 0xffffffff;
              local_400 = 0;
              local_3fe = 0xff;
              local_3f8 = 0xffff;
              local_430 = 1;
              DefaultConstructItems<FMeshBatchElement,int>(&local_4d0,1);
              cVar10 = (**(code **)(*(longlong *)this + 0x268))(this,uVar22,iVar26);
              iVar23 = local_430;
              if (cVar10 != '\0') {
                if (0 < local_7cc) {
                  local_3f0.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                  pFVar17 = &local_4d0;
                  if (local_438 != (FMeshBatchElement *)0x0) {
                    pFVar17 = local_438;
                  }
                  local_350 = local_430;
                  if (local_430 == 0) {
                    local_34c = 1;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                              (0x98,8,local_430,0,&local_3f0,local_430,&local_34c);
                    FVar16 = (ForElementType<FMeshBatchElement>)&local_3f0;
                    if (local_3f0.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FVar16 = local_3f0.SecondaryData;
                    }
                    ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                              ((void *)FVar16,pFVar17,iVar23);
                  }
                  pbVar20 = *(byte **)&this->field_0xd0;
                  iVar23 = *(int *)&this->field_0xd8;
                  local_348 = local_428;
                  local_340 = uStack_420;
                  pbVar1 = pbVar20 + iVar23;
                  local_338 = local_418;
                  local_330 = (undefined4)local_410;
                  local_32c = local_410._4_4_;
                  local_324 = local_404;
                  local_320 = local_400;
                  local_31e = local_3fe;
                  local_318 = (undefined1)local_3f8;
                  local_317 = local_3f8._1_1_;
                  local_328 = local_408;
                  local_31c = local_31c & 0xf0040000 | local_3fc & 0xff9ffc3 | 0x40000;
                  while( true ) {
                    if (*(int *)&this->field_0xd8 != iVar23) {
                      local_7d0 = 0;
                      `TCheckedPointerIterator<enum_ERuntimeVirtualTextureMaterialType,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(&local_7d0);
                    }
                    if (pbVar20 == pbVar1) break;
                    local_31c = (*pbVar20 & 7) << 0x13 | local_31c & 0xffc7ffff;
                    (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_3f0,uVar7);
                    pbVar20 = pbVar20 + 1;
                  }
                  FVar16 = (ForElementType<FMeshBatchElement>)&local_3f0;
                  if (local_3f0.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FVar16 = local_3f0.SecondaryData;
                  }
                  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar16,local_350);
                  if (local_3f0.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FMemory::Free((void *)local_3f0.SecondaryData);
                  }
                  uVar28 = local_7c0 & 0xffffffff;
                }
                (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_4d0,uVar7);
                iVar23 = local_430;
                if (pUVar30 != (UMaterialInterface *)0x0) {
                  local_770.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                  pFVar17 = &local_4d0;
                  if (local_438 != (FMeshBatchElement *)0x0) {
                    pFVar17 = local_438;
                  }
                  local_6d0 = local_430;
                  if (local_430 == 0) {
                    local_6cc = 1;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                              (0x98,8,local_430,0,&local_770,local_430,&local_6cc);
                    FVar16 = (ForElementType<FMeshBatchElement>)&local_770;
                    if (local_770.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FVar16 = local_770.SecondaryData;
                    }
                    ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                              ((void *)FVar16,pFVar17,iVar23);
                  }
                  local_6c8 = local_428;
                  local_6c0 = uStack_420;
                  local_6b8 = local_418;
                  local_6b0 = (undefined4)local_410;
                  local_6ac = local_410._4_4_;
                  local_6a4 = local_404;
                  local_6a0 = local_400;
                  local_69e = local_3fe;
                  local_698 = (undefined1)local_3f8;
                  local_697 = local_3f8._1_1_;
                  local_6a8 = local_408;
                  local_69c = local_69c & 0xf0400000 | local_3fc & 0xfbefffb | 0x400000;
                  local_6c0 = (**(code **)(pUVar30->_padding_ + 0x310))(pUVar30);
                  local_6a0 = local_6a0 + *(short *)(local_7b8 + 0x38);
                  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_770,uVar7);
                  FVar16 = (ForElementType<FMeshBatchElement>)&local_770;
                  if (local_770.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FVar16 = local_770.SecondaryData;
                  }
                  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar16,local_6d0);
                  if (local_770.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FMemory::Free((void *)local_770.SecondaryData);
                  }
                }
              }
              uVar31 = (uint)uVar28;
              pFVar17 = &local_4d0;
              if (local_438 != (FMeshBatchElement *)0x0) {
                pFVar17 = local_438;
              }
              DestructItems<FMeshBatchElement,int>(pFVar17,local_430);
              if (local_438 != (FMeshBatchElement *)0x0) {
                FMemory::Free(local_438);
              }
              iVar26 = iVar26 + 1;
            } while (iVar26 < (int)local_7ac);
          }
          uVar31 = uVar31 + 1;
          uVar28 = (ulonglong)uVar31;
          local_7a8 = local_7a8 + 0x18;
          local_7c0 = CONCAT44(local_7c0._4_4_,uVar31);
          uVar25 = (uint)local_7c8;
        } while ((int)uVar31 < *(int *)(local_7b8 + 0x38));
      }
    }
  }
  return;
}

// GetCachedRayTracingInstance @ 14879ce30

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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

ERayTracingPrimitiveFlags __thiscall
FStaticMeshSceneProxy::GetCachedRayTracingInstance
          (FStaticMeshSceneProxy *this,FRayTracingInstance *param_1)

{
  int *piVar1;
  FMeshBatch *pFVar2;
  code *pcVar3;
  FStaticMeshRayTracingProxy *pFVar4;
  undefined1 uVar5;
  bool bVar6;
  ERayTracingPrimitiveFlags EVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FMeshBatchElement> FVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_198 [32];
  FMeshBatch *local_178;
  FMeshBatch *local_170;
  ulonglong local_168;
  FMeshBatch *local_160;
  undefined8 local_158;
  ERayTracingPrimitiveFlags local_148;
  int local_144;
  longlong local_140;
  FRayTracingInstance *local_138;
  longlong local_130;
  FStaticMeshRayTracingProxy *local_128;
  FMeshBatch local_120;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_138 = param_1;
  local_148 = FPrimitiveSceneProxy::GetCachedRayTracingInstance
                        ((FPrimitiveSceneProxy *)this,param_1);
  if ((local_148 & (Dynamic|Skip|Exclude|UnsupportedProxyType)) == None) {
    iVar9 = (**(code **)(*(longlong *)this + 600))(this);
    local_144 = iVar9;
    uVar5 = (**(code **)(*(longlong *)this + 0x160))(this);
    local_128 = this->RenderData->RayTracingProxy;
    if (local_128->bUsingRenderingLODs == false) {
      uVar16 = 0;
    }
    else {
      uVar16 = this->ClampedMinLOD;
    }
    local_130 = (longlong)(local_128->LODs).Array.ArrayNum;
    lVar15 = (longlong)(int)uVar16;
    if (lVar15 < local_130) {
      do {
        pFVar4 = local_128;
        iVar14 = (local_128->LODs).Array.ArrayNum;
        uVar10 = 0;
        if ((int)uVar16 < iVar14) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        local_140 = lVar15;
        if (uVar10 == 0) {
          local_178 = (FMeshBatch *)(longlong)(int)uVar16;
          local_170 = (FMeshBatch *)(longlong)iVar14;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            EVar7 = (*pcVar3)();
            return EVar7;
          }
        }
        iVar14 = 0;
        lVar15 = *(longlong *)((pFVar4->LODs).Array.AllocatorInstance.Data + lVar15 * 8);
        if (0 < iVar9) {
          do {
            iVar9 = 0;
            if (0 < *(int *)(*(longlong *)(lVar15 + 0x10) + 0x28)) {
              do {
                local_120.Elements.AllocatorInstance.SecondaryData =
                     (ForElementType<FMeshBatchElement>)0x0;
                local_120.bUseForLumenSurfaceCacheCapture = 0;
                local_120.bUseForWaterInfoTextureDepth = 0;
                local_120.bViewDependentArguments = 0;
                local_120.bForceTwoSidedInRayTracing = 0;
                local_120.CastRayTracedShadow = 1;
                local_120.bOverlayMaterial = 0;
                local_120.RuntimeVirtualTextureMaterialType = 0;
                local_120.bRenderToVirtualTexture = 0;
                local_120.bDitheredLODTransition = 0;
                local_120.bSelectable = 1;
                local_120.bUseSelectionOutline = 1;
                local_120.bUseWireframeSelectionColoring = 0;
                local_120.bCanApplyViewModeOverrides = 0;
                local_120.DepthPriorityGroup = 0;
                local_120.Type = 0;
                local_120.bWireframe = 0;
                local_120.bUseAsOccluder = 1;
                local_120.bUseForDepthPass = 1;
                local_120.bUseForMaterial = 1;
                local_120.CastShadow = 1;
                local_120.bDisableBackfaceCulling = 0;
                local_120.ReverseCulling = 0;
                local_120.Elements.ArrayMax = 1;
                local_120.LCI = (FLightCacheInterface *)0x0;
                local_120.VertexFactory = (FVertexFactory *)0x0;
                local_120.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
                local_120.BatchHitProxyId.Index = -1;
                local_120.DynamicMeshBoundsIndex = -1;
                local_120.TessellationDisablingShadowMapMeshSize = 0.0;
                local_120.SegmentIndex = -1;
                local_120.MeshIdInPrimitive = 0;
                local_120.LODIndex = -1;
                local_120.VisualizeHLODIndex = -1;
                local_120.VisualizeLODIndex = -1;
                local_120.Elements.ArrayNum = 1;
                DefaultConstructItems<FMeshBatchElement,int>(&local_120,1);
                if (this->RenderData->RayTracingProxy->bUsingRenderingLODs == false) {
                  local_178 = (FMeshBatch *)CONCAT71(local_178._1_7_,uVar5);
                  local_170 = &local_120;
                  cVar8 = (**(code **)(*(longlong *)this + 0x270))(this,uVar16,iVar14,iVar9);
                }
                else {
                  local_168 = local_168 & 0xffffffffffffff00;
                  local_170 = (FMeshBatch *)((ulonglong)local_170 & 0xffffffffffffff00);
                  local_178 = (FMeshBatch *)CONCAT71(local_178._1_7_,uVar5);
                  local_160 = &local_120;
                  cVar8 = (**(code **)(*(longlong *)this + 0x268))();
                }
                if (cVar8 != '\0') {
                  local_120.ReverseCulling = this->bReverseCulling;
                  local_120.MeshIdInPrimitive = (ushort)iVar9;
                  pFVar2 = (FMeshBatch *)(param_1->Materials).AllocatorInstance.Data;
                  local_120.SegmentIndex = iVar9;
                  if ((pFVar2 <= &local_120) &&
                     (uVar13 = (ulonglong)(param_1->Materials).ArrayMax,
                     &local_120 < pFVar2 + uVar13)) {
                    local_160 = (FMeshBatch *)(longlong)(param_1->Materials).ArrayNum;
                    local_158 = 0xe0;
                    local_178 = &local_120;
                    local_170 = pFVar2;
                    local_168 = uVar13;
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar6) {
                      pcVar3 = (code *)swi(3);
                      EVar7 = (*pcVar3)();
                      return EVar7;
                    }
                  }
                  iVar11 = (param_1->Materials).ArrayNum;
                  piVar1 = &(param_1->Materials).ArrayMax;
                  if (iVar11 == *piVar1) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8e0,&(param_1->Materials).AllocatorInstance,piVar1);
                  }
                  (param_1->Materials).ArrayNum = iVar11 + 1;
                  FMeshBatch::FMeshBatch
                            ((FMeshBatch *)
                             ((param_1->Materials).AllocatorInstance.Data + (longlong)iVar11 * 0xe0)
                             ,&local_120);
                  param_1 = local_138;
                }
                FVar12 = (ForElementType<FMeshBatchElement>)&local_120;
                if (local_120.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar12 = local_120.Elements.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMeshBatchElement,int>
                          ((FMeshBatchElement *)FVar12,local_120.Elements.ArrayNum);
                if (local_120.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FMemory::Free((void *)local_120.Elements.AllocatorInstance.SecondaryData);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(*(longlong *)(lVar15 + 0x10) + 0x28));
            }
            iVar14 = iVar14 + 1;
            iVar9 = local_144;
          } while (iVar14 < local_144);
        }
        uVar16 = uVar16 + 1;
        lVar15 = local_140 + 1;
      } while (lVar15 < local_130);
    }
  }
  return local_148;
}

// GetCollisionMeshElement @ 14879d1b0

bool __thiscall
FStaticMeshSceneProxy::GetCollisionMeshElement
          (FStaticMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          FMaterialRenderProxy *param_5,FMeshBatch *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  FStaticMeshRenderData *pFVar3;
  FStaticMeshRenderData *pFVar4;
  longlong lVar5;
  ForElementType<FMeshBatchElement> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  ForElementType<FMeshBatchElement> FVar11;
  FVertexFactory *pFVar12;
  uint uVar13;
  FLightCacheInterface *pFVar14;
  longlong lVar15;
  longlong lVar16;
  
  pFVar3 = this->RenderData;
  lVar16 = (longlong)param_1;
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (pFVar3->LODResources).Array.ArrayNum) {
    uVar10 = uVar13;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar4 = this->RenderData;
  lVar5 = *(longlong *)((pFVar3->LODResources).Array.AllocatorInstance.Data + lVar16 * 8);
  uVar10 = 0;
  if (param_1 < (pFVar4->LODVertexFactories).ArrayNum) {
    uVar10 = uVar13;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar12 = (FVertexFactory *)((pFVar4->LODVertexFactories).AllocatorInstance.Data + lVar16 * 0x470)
  ;
  uVar10 = 0;
  if (param_3 < *(int *)(lVar5 + 0x38)) {
    uVar10 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar15 = *(longlong *)(lVar5 + 0x30);
  if (*(longlong *)(lVar5 + 0x30) == 0) {
    lVar15 = lVar5 + 0x10;
  }
  lVar15 = (longlong)param_3 * 0x1c + lVar15;
  if (*(int *)(lVar15 + 8) != 0) {
    uVar10 = 0;
    if (param_1 < (this->LODs).ArrayNum) {
      uVar10 = uVar13;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar14 = (FLightCacheInterface *)((this->LODs).AllocatorInstance.Data + lVar16 * 0x80);
    if (*(int *)(lVar15 + 8) != 0) {
      if (((param_6->Elements).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      FVar6 = (param_6->Elements).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FMeshBatchElement>)param_6;
      if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar11 = FVar6;
      }
      param_6->Type = 0;
      *(longlong *)((longlong)FVar11 + 0x18) = lVar5 + 0x228;
      *(undefined4 *)((longlong)FVar11 + 0x58) = *(undefined4 *)(lVar15 + 4);
      *(undefined4 *)((longlong)FVar11 + 0x5c) = *(undefined4 *)(lVar15 + 8);
      param_6->VertexFactory = (FVertexFactory *)0x0;
    }
    if (((param_6->Elements).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    FVar6 = (param_6->Elements).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<FMeshBatchElement>)param_6;
    if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar11 = FVar6;
    }
    if (pFVar14[1].PrecomputedLightingUniformBuffer.Reference == (FRHIUniformBuffer *)0x0) {
      lVar16._0_4_ = pFVar12[1].PositionStream.ArrayNum;
      lVar16._4_4_ = pFVar12[1].PositionStream.ArrayMax;
    }
    else {
      lVar16 = pFVar14[2]._padding_;
      pFVar12 = (FVertexFactory *)
                (pFVar12[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10);
    }
    *(longlong *)((longlong)FVar11 + 0x40) = lVar16;
    if (*(int *)((longlong)FVar11 + 0x5c) != 0) {
      param_6->LODIndex = (schar)param_1;
      param_6->VisualizeLODIndex = (schar)param_1;
      param_6->VisualizeHLODIndex = this->HierarchicalLODIndex;
      bVar1 = this->field_0x78;
      param_6->LCI = pFVar14;
      param_6->VertexFactory = pFVar12;
      uVar10 = (this->bReverseCulling ^ (uint)bVar1) & 1 |
               *(uint *)&param_6->field_0xd4 & 0xfffffffa;
      *(uint *)&param_6->field_0xd4 = ((uint)param_4 << 10 ^ uVar10) & 0x1c00 ^ uVar10;
      param_6->MaterialRenderProxy = param_5;
      *(undefined4 *)((longlong)FVar11 + 0x68) = *(undefined4 *)(lVar15 + 0xc);
      *(undefined4 *)((longlong)FVar11 + 0x6c) = *(undefined4 *)(lVar15 + 0x10);
      *(uint *)((longlong)FVar11 + 0x7c) =
           (param_3 << 0xe ^ *(uint *)((longlong)FVar11 + 0x7c)) & 0xffc03fff ^ param_3 << 0xe;
      SetMeshElementScreenSize(this,param_1,false,param_6);
      return true;
    }
  }
  return false;
}

// GetCurrentFirstLODIdx_Internal @ 14879d5b0

uchar __thiscall FStaticMeshSceneProxy::GetCurrentFirstLODIdx_Internal(FStaticMeshSceneProxy *this)

{
  return this->RenderData->CurrentFirstLODIdx;
}

// GetDistanceFieldAtlasData @ 14879d7e0

void __thiscall
FStaticMeshSceneProxy::GetDistanceFieldAtlasData
          (FStaticMeshSceneProxy *this,FDistanceFieldVolumeData **param_1,float *param_2)

{
  *param_1 = this->DistanceFieldData;
  *param_2 = *(float *)&this->field_0xb0;
  return;
}

// GetDynamicMeshElements @ 14879db70

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::GetDynamicMeshElements
          (FStaticMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  FScriptContainerElement *pFVar15;
  TObjectPtr<UMaterial>_u_0 TVar16;
  longlong lVar17;
  UBodySetup *pUVar18;
  FDebugMassData *this_00;
  code *pcVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint uVar23;
  FName FVar24;
  byte bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  char cVar35;
  uint uVar36;
  uint uVar37;
  FNameEntryId FVar38;
  int iVar39;
  FName *pFVar40;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_StaticMeshSceneProxy_GetMeshElements>
  FVar41;
  undefined4 extraout_var;
  FMeshBatch *this_01;
  FColoredMaterialRenderProxy *pFVar42;
  FColoredMaterialRenderProxy *pFVar43;
  undefined4 extraout_var_00;
  FMaterialRenderProxy *pFVar44;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles> FVar45;
  FThreadStats *pFVar46;
  FThreadStatsPool *pFVar47;
  undefined4 extraout_var_01;
  UNavCollisionBase *pUVar48;
  FLinearColor *pFVar49;
  FPrimitiveDrawInterface *pFVar50;
  byte *pbVar51;
  FName FVar52;
  ForElementType<FMeshBatchElement> FVar53;
  TTransform<double> *pTVar54;
  ulonglong uVar55;
  FName FVar56;
  longlong lVar57;
  FMeshElementCollector *pFVar58;
  uint uVar59;
  FStaticMeshRenderData *pFVar60;
  FStaticMeshSceneProxy *pFVar61;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar62;
  uint uVar63;
  ForElementType<FMeshBatchElement> FVar64;
  FColor_u_0 FVar65;
  uint uVar66;
  int iVar67;
  FEngineShowFlags *pFVar68;
  byte bVar69;
  int iVar70;
  uint uVar71;
  int iVar72;
  FStaticMeshSceneProxy *this_02;
  undefined1 auStackY_4c8 [32];
  bool bVar73;
  uint local_464;
  undefined1 local_45c [12];
  uint local_450;
  uint local_44c;
  FStaticMeshSceneProxy *local_448;
  bool local_440;
  FColoredMaterialRenderProxy *local_438;
  byte local_430 [16];
  byte local_420 [4];
  uint local_41c;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_418;
  FName local_410;
  int local_408;
  ForElementType<FMeshBatchElement> local_400;
  FEngineShowFlags *local_3f8;
  TObjectPtr<UMaterial>_u_0 local_3f0;
  ForElementType<FMeshBatchElement> local_3e8;
  FName local_3e0;
  FName local_3d8;
  FColor_u_0 local_3d0;
  FColor_u_0 local_3cc;
  undefined4 local_3c8;
  uint local_3c4;
  uint local_3c0;
  FColor_u_0 local_3bc;
  longlong local_3b8;
  FName local_3b0;
  FNameEntryId local_3a8;
  uint uStack_3a4;
  FNameEntryId local_3a0;
  uint uStack_39c;
  FNameEntryId local_398;
  uint uStack_394;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  FName local_380;
  FLinearColor_u_0 local_370;
  FLinearColor_u_0 local_360;
  FName local_350;
  FName local_348;
  undefined1 local_340 [4];
  undefined1 local_33c [4];
  undefined1 local_338 [8];
  TObjectPtr<UMaterial>_u_0 local_330;
  FStatMessage local_328;
  FStatMessage local_318;
  FStatMessage local_308;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8 [2];
  FLinearColor_u_0 local_2c8;
  FLinearColor_u_0 local_2b8;
  FLinearColor_u_0 local_2a8;
  FLinearColor local_298;
  FLinearColor local_288;
  FLinearColor local_278;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_45c._4_8_ = param_4;
  local_448 = this;
  local_41c = param_3;
  local_418 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_StaticMeshSceneProxy_GetMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_StaticMeshSceneProxy_GetMeshElements>
         )0x0) {
      pFVar40 = ::FName::FName(&local_2e0,"STAT_StaticMeshSceneProxy_GetMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshSceneProxy_GetMeshElements,
                 *pFVar40,L"STAT_StaticMeshSceneProxy_GetMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar41 = StatPtr_STAT_StaticMeshSceneProxy_GetMeshElements;
  if (StatPtr_STAT_StaticMeshSceneProxy_GetMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_StaticMeshSceneProxy_GetMeshElements>
       )0x0) {
    pFVar40 = ::FName::FName(local_2d8,"STAT_StaticMeshSceneProxy_GetMeshElements");
    FVar41 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_StaticMeshSceneProxy_GetMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshSceneProxy_GetMeshElements,*pFVar40,
                          L"STAT_StaticMeshSceneProxy_GetMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar56 = *(FName *)FVar41;
  bVar28 = false;
  bVar30 = false;
  local_380.ComparisonIndex.Value = 0;
  local_380.Number = 0;
  bVar32 = false;
  bVar34 = false;
  if ((FVar56.ComparisonIndex.Value.Value == 0) && (FVar56.Number == 0)) {
LAB_14879dd20:
    bVar30 = bVar34;
    bVar28 = bVar32;
    bVar32 = false;
    local_410 = local_380;
    FVar56 = local_380;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3cc._s_0,(char *)*(FName *)((longlong)FVar41 + 0x10));
      bVar28 = false;
      bVar30 = true;
      bVar32 = false;
      bVar34 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3b0.ComparisonIndex.Value = FVar56.ComparisonIndex.Value.Value;
        local_3b0.Number = FVar56.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3b0,(wchar_t *)*(FName *)((longlong)FVar41 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                   ,0x687);
        bVar28 = true;
        bVar30 = true;
        bVar32 = true;
        bVar34 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14879dd20;
    local_410 = FVar56;
    FThreadStats::AddMessage(FVar56,CycleScopeStart);
    bVar32 = true;
  }
  if (((this->field_0x7a & 0x40) == 0) || ((char)this->field_0x7c < '\0')) {
    bVar34 = false;
  }
  else {
    bVar34 = true;
  }
  local_3f8 = &param_2->EngineShowFlags;
  bVar69 = this->field_0x79 & 6;
  local_440 = bVar69 != 0;
  bVar33 = false;
  bVar26 = false;
  bVar27 = false;
  local_430[4] = bVar69;
  if (((param_2->EngineShowFlags).CollisionVisibility == 0) &&
     ((param_2->EngineShowFlags).CollisionPawn == 0)) {
    bVar29 = false;
    bVar33 = IsRichView(param_2);
    if ((((((bVar33) || ((this->field_0x79 & 0x20) != 0)) ||
          ((param_2->EngineShowFlags).Collision != 0)) ||
         ((this->bDrawMeshCollisionIfComplex != 0 || this->bDrawMeshCollisionIfSimple != 0 ||
          ((param_2->EngineShowFlags).Bounds != 0)))) ||
        ((param_2->EngineShowFlags).VisualizeInstanceUpdates != 0)) ||
       ((bVar69 != 0 || ((this->field_0x79 & 0x10) != 0)))) {
      bVar27 = false;
      bVar29 = false;
      bVar34 = true;
      bVar26 = false;
      goto LAB_14879dece;
    }
    bVar27 = false;
    bVar26 = false;
    if (bVar34) {
      bVar27 = false;
      bVar29 = false;
      bVar34 = true;
      bVar26 = false;
      goto LAB_14879dece;
    }
  }
  else {
    bVar29 = true;
    if ((this->field_0x7b & 0x20) != 0) {
      if (((param_2->EngineShowFlags).CollisionPawn != 0) &&
         ((this->CollisionResponse).field0_0x0._s_0.Pawn != '\0')) {
        bVar33 = true;
      }
      if (((param_2->EngineShowFlags).CollisionVisibility == 0) ||
         ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')) {
        bVar34 = false;
      }
      else {
        bVar34 = true;
      }
      if (bVar34 || bVar33) {
        if (((param_2->EngineShowFlags).CollisionVisibility == 0) ||
           (this->CollisionTraceFlag == CTF_UseSimpleAsComplex)) {
          if (((param_2->EngineShowFlags).CollisionPawn == 0) ||
             (this->CollisionTraceFlag != CTF_UseComplexAsSimple)) {
            bVar26 = false;
          }
          else {
            bVar26 = true;
          }
        }
        else {
          bVar26 = true;
        }
        if ((((param_2->EngineShowFlags).CollisionPawn == 0) ||
            (this->CollisionTraceFlag == CTF_UseComplexAsSimple)) &&
           (((param_2->EngineShowFlags).CollisionVisibility == 0 ||
            (this->CollisionTraceFlag != CTF_UseSimpleAsComplex)))) {
          bVar27 = false;
        }
        else {
          bVar27 = true;
        }
      }
    }
  }
  bVar34 = false;
LAB_14879dece:
  pFVar68 = &param_2->EngineShowFlags;
  uVar14 = *(undefined4 *)&(param_2->EngineShowFlags).field_0x10;
  this_02 = local_448;
  if ((ZPULL(uVar14,3,1) != 0) && (bVar34)) {
    local_3c0 = (uint)uVar14 >> 9 & 0xffffff01;
    local_3c4 = (uint)uVar14 >> 1 & 0x7fffff01;
    FSceneViewFamily::GetFeatureLevel(param_2);
    local_44c = 0;
    iVar39 = local_418->ArrayNum;
    this_02 = local_448;
    if (0 < iVar39) {
      local_430[0xc] = 1;
      local_430[0xd] = 0;
      local_430[0xe] = 0;
      local_430[0xf] = 0;
      local_3d8.ComparisonIndex.Value = 0;
      local_3d8.Number = 0;
      do {
        FVar56 = local_3d8;
        uVar36 = local_430._12_4_;
        uVar37 = local_44c;
        uVar63 = 0;
        if ((int)local_44c < iVar39) {
          uVar63 = ~local_44c >> 0x1f;
        }
        if ((uVar63 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        bVar34 = FPrimitiveSceneProxy::IsShown
                           ((FPrimitiveSceneProxy *)this_02,
                            *(FSceneView **)((local_418->AllocatorInstance).Data + (longlong)FVar56)
                           );
        if ((bVar34) && ((local_41c & uVar36) != 0)) {
          GetLODMask(this_02,(FSceneView *)local_45c);
          pFVar60 = this_02->RenderData;
          local_450 = 0;
          local_400 = (ForElementType<FMeshBatchElement>)0x0;
          if (0 < (pFVar60->LODResources).Array.ArrayNum) {
            uVar55 = (ulonglong)(ushort)local_45c._0_2_;
            do {
              FVar64 = local_400;
              uVar37 = local_450;
              if (((ushort)uVar55 >> 0xe & 1) != 0) {
                uVar36 = (uint)uVar55 & 0x7f;
                if ((short)(ushort)uVar55 < 0) {
                  if (((int)uVar36 <= (int)local_450) &&
                     ((int)local_450 <= (int)((uint)(uVar55 >> 7) & 0x7f))) {
LAB_14879e02b:
                    if (this_02->ClampedMinLOD <= (int)local_450) {
                      uVar63 = ~local_450;
                      uVar36 = 0;
                      if ((int)local_450 < (pFVar60->LODResources).Array.ArrayNum) {
                        uVar36 = uVar63 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar34)) {
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      pFVar61 = local_448;
                      pFVar43 = *(FColoredMaterialRenderProxy **)
                                 ((pFVar60->LODResources).Array.AllocatorInstance.Data +
                                 (longlong)FVar64 * 8);
                      uVar36 = 0;
                      if ((int)uVar37 < (local_448->LODs).ArrayNum) {
                        uVar36 = uVar63 >> 0x1f;
                      }
                      local_438 = pFVar43;
                      if ((uVar36 == 0) &&
                         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar34)) {
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      pFVar15 = (pFVar61->LODs).AllocatorInstance.Data;
                      bVar34 = AllowDebugViewmodes();
                      if ((((bVar34) && ((char)local_3c4 != '\0')) && (local_3f8->Materials == 0))
                         && (pFVar15[(longlong)FVar64 * 0x80 + 0x78] == (FScriptContainerElement)0x0
                            )) {
                        if ((char)local_3c0 == '\0') {
                          local_2c8._s_0.R = (float)*(undefined4 *)&pFVar61->field_0x30;
                          local_2c8._s_0.G = (float)*(undefined4 *)&pFVar61->field_0x34;
                          local_2c8._s_0.B = (float)*(undefined4 *)&pFVar61->field_0x38;
                          local_2c8._s_0.A = (float)*(undefined4 *)&pFVar61->field_0x3c;
                        }
                        else {
                          local_2c8._s_0.R = (float)*(undefined4 *)&pFVar61->field_0x40;
                          local_2c8._s_0.G = (float)*(undefined4 *)&pFVar61->field_0x44;
                          local_2c8._s_0.B = (float)*(undefined4 *)&pFVar61->field_0x48;
                          local_2c8._s_0.A = (float)*(undefined4 *)&pFVar61->field_0x4c;
                        }
                        pFVar43 = ::operator_new(0xe0);
                        if (pFVar43 == (FColoredMaterialRenderProxy *)0x0) {
                          pFVar43 = (FColoredMaterialRenderProxy *)0x0;
                          this_02 = local_448;
                        }
                        else {
                          FVar38 = FNameEntryId::FromValidEName((EName)local_338);
                          this_02 = local_448;
                          uStack_3a4 = 0;
                          local_3a8.Value = *(uint *)CONCAT44(extraout_var,FVar38.Value);
                          pFVar49 = GetSelectionColor(&local_298,(FLinearColor *)&local_2c8._s_0,
                                                      true,(bool)((byte)local_448->field_0x79 >> 4 &
                                                                 1),false);
                          pFVar44 = (FMaterialRenderProxy *)
                                    (**(code **)(((GEngine->WireframeMaterial).field0_0x0.DebugPtr)
                                                 ->_padding_ + 0x310))();
                          FVar56.Number = uStack_3a4;
                          FVar56.ComparisonIndex.Value = local_3a8.Value;
                          pFVar43 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                              (pFVar43,pFVar44,pFVar49,FVar56);
                        }
                        pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                        FMeshElementCollector::RegisterOneFrameMaterialProxy
                                  ((FMeshElementCollector *)local_45c._4_8_,
                                   (FMaterialRenderProxy *)pFVar43);
                        iVar39 = (**(code **)(*(longlong *)this_02 + 600))();
                        uVar37 = local_450;
                        iVar72 = 0;
                        pFVar42 = local_438;
                        if (0 < iVar39) {
                          do {
                            if (0 < (int)pFVar42->_padding_) {
                              this_01 = FMeshElementCollector::AllocateMesh(pFVar58);
                              cVar35 = (**(code **)(*(longlong *)this_02 + 0x278))
                                                 (this_02,uVar37,iVar72,pFVar43);
                              pFVar42 = local_438;
                              if (cVar35 != '\0') {
                                this_01->bCanApplyViewModeOverrides = 0;
                                FMeshElementCollector::AddMesh(pFVar58,local_44c,this_01);
                                iVar70 = FMeshBatch::GetNumPrimitives(this_01);
                                pFVar42 = local_438;
                                this_02 = local_448;
                                if ((iVar70 != 0) && (FThreadStats::bPrimaryEnable != false)) {
                                  FVar45 = StatPtr_STAT_StaticMeshTriangles;
                                  if (StatPtr_STAT_StaticMeshTriangles ==
                                      (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0) {
                                    pFVar40 = ::FName::FName(&local_2f8,"STAT_StaticMeshTriangles");
                                    FVar45 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)
                                             FThreadSafeStaticStatBase::DoSetup
                                                       ((FThreadSafeStaticStatBase *)
                                                        &StatPtr_STAT_StaticMeshTriangles,*pFVar40,
                                                        L"Static Mesh Tris","STATGROUP_Engine",
                                                        "STATCAT_Advanced",L"Engine",true,true,
                                                        ST_int64,false,false,MCR_Invalid);
                                  }
                                  TVar16 = (TObjectPtr<UMaterial>_u_0)
                                           *(TObjectPtr<UMaterial>_u_0 *)FVar45;
                                  pFVar42 = local_438;
                                  pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                  this_02 = local_448;
                                  local_3f0 = TVar16;
                                  if (((TVar16.DebugPtr != (UMaterial *)0x0) &&
                                      (FThreadStats::bPrimaryDisableForever == false)) &&
                                     (FThreadStats::TlsSlot != 0xffffffff)) {
                                    pFVar46 = TlsGetValue(FThreadStats::TlsSlot);
                                    if (pFVar46 == (FThreadStats *)0x0) {
                                      pFVar47 = FThreadStatsPool::Get();
                                      pFVar46 = FThreadStatsPool::GetFromPool(pFVar47);
                                    }
                                    local_328.NameAndInfo.Number =
                                         TVar16._4_4_ & 0xffffafff | 0xa000;
                                    local_330 = TVar16;
                                    local_328.StatData.Pad = (uchar  [8])(longlong)iVar70;
                                    local_328.NameAndInfo.Index.Value = TVar16._0_4_;
                                    FThreadStats::AddStatMessage(pFVar46,&local_328);
                                    FStatsTrace::Add((FName *)&local_330.ObjectPtr,(longlong)iVar70)
                                    ;
                                    if (pFVar46->ScopeCount == 0) {
                                      FThreadStats::Flush(pFVar46,false,false);
                                      pFVar42 = local_438;
                                      pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                      this_02 = local_448;
                                    }
                                    else {
                                      pFVar42 = local_438;
                                      pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                      this_02 = local_448;
                                      if (FThreadStats::bIsRawStatsActive != false) {
                                        FThreadStats::FlushRawStats(pFVar46,false,false);
                                        pFVar42 = local_438;
                                        pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                        this_02 = local_448;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            iVar72 = iVar72 + 1;
                          } while (iVar72 < iVar39);
                          uVar55 = (ulonglong)(ushort)local_45c._0_2_;
                          uVar37 = local_450;
                        }
                      }
                      else {
                        local_464 = 0;
                        this_02 = pFVar61;
                        if (0 < (int)pFVar43->_padding_) {
                          do {
                            iVar39 = (**(code **)(*(longlong *)pFVar61 + 600))();
                            local_3b8 = CONCAT44(local_3b8._4_4_,iVar39);
                            local_430[8] = 0;
                            local_430[9] = 0;
                            local_430[10] = 0;
                            local_430[0xb] = 0;
                            pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                            if (0 < iVar39) {
                              do {
                                uVar14 = local_430._8_4_;
                                iVar39 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                         ::Add(&pFVar58->MeshBatchStorage,1);
                                uVar36 = iVar39 / 0x49;
                                uVar63 = 0;
                                if ((int)uVar36 <
                                    (((TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                       *)local_45c._4_8_)->Chunks).Array.ArrayNum) {
                                  uVar63 = ~uVar36 >> 0x1f;
                                }
                                if ((uVar63 == 0) &&
                                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar34)) {
                                  pcVar19 = (code *)swi(3);
                                  (*pcVar19)();
                                  return;
                                }
                                pFVar61 = local_448;
                                pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                FVar64 = (ForElementType<FMeshBatchElement>)
                                         ((ulonglong)(uint)(iVar39 % 0x49) * 0xe0 +
                                         (longlong)
                                         (((TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                            *)local_45c._4_8_)->Chunks).Array.AllocatorInstance.Data
                                         [(int)uVar36]);
                                local_3e8 = FVar64;
                                cVar35 = (**(code **)(*(longlong *)local_448 + 0x268))
                                                   (local_448,uVar37,uVar14,local_464);
                                if (cVar35 != '\0') {
                                  if (((local_430[4] != 0) && (local_3f8->VertexColors != 0)) &&
                                     ((bVar34 = AllowDebugViewmodes(), bVar34 &&
                                      (pFVar44 = MeshPaintVisualize::GetMaterialRenderProxy
                                                           (false,(bool)((byte)pFVar61->field_0x79
                                                                         >> 4 & 1)),
                                      pFVar58 = (FMeshElementCollector *)local_45c._4_8_,
                                      pFVar44 != (FMaterialRenderProxy *)0x0)))) {
                                    FMeshElementCollector::RegisterOneFrameMaterialProxy
                                              ((FMeshElementCollector *)local_45c._4_8_,pFVar44);
                                    *(FMaterialRenderProxy **)((longlong)FVar64 + 0xb0) = pFVar44;
                                    pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                  }
                                  uVar36 = *(uint *)((longlong)FVar64 + 0xd4);
                                  if (((((uVar36 >> 0x11 & 1) == 0) ||
                                       (((ushort)uVar55 >> 0xe & 1) == 0)) ||
                                      ((uVar55 & 0x8000) != 0)) ||
                                     ((((byte)((ushort)uVar55 >> 7) ^ (byte)uVar55) & 0x7f) == 0)) {
                                    uVar36 = uVar36 & 0xfffdffff;
                                  }
                                  *(uint *)((longlong)FVar64 + 0xd4) = uVar36 & 0xffffbfff | 0x2000;
                                  FMeshElementCollector::AddMesh
                                            (pFVar58,local_44c,(FMeshBatch *)FVar64);
                                  iVar39 = *(int *)((longlong)FVar64 + 0xa0);
                                  uVar36 = 0;
                                  local_408 = 0;
                                  if (0 < iVar39) {
                                    lVar57 = 0;
                                    do {
                                      iVar72 = local_408;
                                      uVar37 = 0;
                                      if ((int)uVar36 < iVar39) {
                                        uVar37 = ~uVar36 >> 0x1f;
                                      }
                                      if ((uVar37 == 0) &&
                                         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar34)) {
                                        pcVar19 = (code *)swi(3);
                                        (*pcVar19)();
                                        return;
                                      }
                                      FVar53 = FVar64;
                                      if (*(ForElementType<FMeshBatchElement> *)
                                           ((longlong)FVar64 + 0x98) !=
                                          (ForElementType<FMeshBatchElement>)0x0) {
                                        FVar53 = *(ForElementType<FMeshBatchElement> *)
                                                  ((longlong)FVar64 + 0x98);
                                      }
                                      if (((*(uint *)((longlong)FVar53 + 0x7c + lVar57) & 0x400) ==
                                           0) || (lVar17 = *(longlong *)
                                                            ((longlong)FVar53 + 0x30 + lVar57),
                                                 lVar17 == 0)) {
                                        iVar70 = *(int *)((longlong)FVar53 + 0x60 + lVar57) *
                                                 *(int *)((longlong)FVar53 + 0x5c + lVar57);
                                      }
                                      else {
                                        uVar37 = *(uint *)((longlong)FVar53 + 0x60 + lVar57);
                                        iVar67 = 0;
                                        iVar70 = 0;
                                        iVar39 = 0;
                                        uVar63 = 0;
                                        iVar72 = local_408;
                                        if (uVar37 < 2) {
                                          if (uVar37 != 0) {
                                            iVar39 = *(int *)((longlong)FVar53 + 0x5c + lVar57);
                                            goto LAB_14879e6c0;
                                          }
                                        }
                                        else {
                                          iVar39 = *(int *)((longlong)FVar53 + 0x5c + lVar57);
                                          do {
                                            uVar66 = uVar63 * 2;
                                            uVar63 = uVar63 + 2;
                                            iVar67 = iVar67 + ((*(int *)(lVar17 + (ulonglong)
                                                                                  (uVar66 + 1) * 4)
                                                               - *(int *)(lVar17 + (ulonglong)uVar66
                                                                                   * 4)) + 1) *
                                                              iVar39;
                                            iVar70 = iVar70 + ((*(int *)(lVar17 + (ulonglong)
                                                                                  (uVar66 + 3) * 4)
                                                               - *(int *)(lVar17 + (ulonglong)
                                                                                   (uVar66 + 2) * 4)
                                                               ) + 1) * iVar39;
                                          } while (uVar63 < uVar37 - 1);
                                          if (uVar37 <= uVar63) {
                                            iVar70 = iVar70 + iVar67;
                                            FVar64 = local_3e8;
                                            goto LAB_14879e6ef;
                                          }
LAB_14879e6c0:
                                          iVar39 = ((*(int *)(lVar17 + (ulonglong)(uVar63 * 2 + 1) *
                                                                       4) -
                                                    *(int *)(lVar17 + (ulonglong)(uVar63 * 2) * 4))
                                                   + 1) * iVar39;
                                          FVar64 = local_3e8;
                                        }
                                        iVar70 = iVar39 + iVar70 + iVar67;
                                      }
LAB_14879e6ef:
                                      iVar39 = *(int *)((longlong)FVar64 + 0xa0);
                                      iVar72 = iVar72 + iVar70;
                                      uVar36 = uVar36 + 1;
                                      lVar57 = lVar57 + 0x98;
                                      local_408 = iVar72;
                                    } while ((int)uVar36 < iVar39);
                                    if ((iVar72 != 0) && (FThreadStats::bPrimaryEnable != false)) {
                                      FVar45 = StatPtr_STAT_StaticMeshTriangles;
                                      if (StatPtr_STAT_StaticMeshTriangles ==
                                          (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0
                                         ) {
                                        pFVar40 = ::FName::FName(&local_2f0,
                                                                 "STAT_StaticMeshTriangles");
                                        FVar45 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>
                                                  )FThreadSafeStaticStatBase::DoSetup
                                                             ((FThreadSafeStaticStatBase *)
                                                              &StatPtr_STAT_StaticMeshTriangles,
                                                              *pFVar40,L"Static Mesh Tris",
                                                              "STATGROUP_Engine","STATCAT_Advanced",
                                                              L"Engine",true,true,ST_int64,false,
                                                              false,MCR_Invalid);
                                      }
                                      FVar56 = *(FName *)FVar45;
                                      local_3e0 = FVar56;
                                      if (((FVar56 != (FName)0x0) &&
                                          (FThreadStats::bPrimaryDisableForever == false)) &&
                                         (FThreadStats::TlsSlot != 0xffffffff)) {
                                        pFVar46 = TlsGetValue(FThreadStats::TlsSlot);
                                        if (pFVar46 == (FThreadStats *)0x0) {
                                          pFVar47 = FThreadStatsPool::Get();
                                          pFVar46 = FThreadStatsPool::GetFromPool(pFVar47);
                                        }
                                        local_318.NameAndInfo.Number =
                                             FVar56.Number & 0xffffafff | 0xa000;
                                        local_350 = FVar56;
                                        local_318.StatData.Pad = (uchar  [8])(longlong)iVar72;
                                        local_318.NameAndInfo.Index.Value =
                                             FVar56.ComparisonIndex.Value.Value;
                                        FThreadStats::AddStatMessage(pFVar46,&local_318);
                                        FStatsTrace::Add(&local_350,(longlong)iVar72);
                                        if (pFVar46->ScopeCount == 0) {
                                          FThreadStats::Flush(pFVar46,false,false);
                                        }
                                        else if (FThreadStats::bIsRawStatsActive != false) {
                                          FThreadStats::FlushRawStats(pFVar46,false,false);
                                        }
                                      }
                                    }
                                    uVar55 = (ulonglong)(ushort)local_45c._0_2_;
                                    pFVar61 = local_448;
                                    pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                    uVar37 = local_450;
                                  }
                                }
                                local_430._8_4_ = local_430._8_4_ + 1;
                              } while ((int)local_430._8_4_ < (int)local_3b8);
                            }
                            local_464 = local_464 + 1;
                            this_02 = local_448;
                          } while ((int)local_464 < (int)local_438->_padding_);
                        }
                      }
                    }
                  }
                }
                else if ((uVar36 == local_450) || (((uint)uVar55 >> 7 & 0x7f) == local_450))
                goto LAB_14879e02b;
              }
              local_400 = (ForElementType<FMeshBatchElement>)((longlong)local_400 + 1);
              local_450 = uVar37 + 1;
              pFVar60 = this_02->RenderData;
              uVar36 = local_430._12_4_;
              uVar37 = local_44c;
            } while ((int)local_450 < (pFVar60->LODResources).Array.ArrayNum);
          }
        }
        local_44c = uVar37 + 1;
        local_3d8 = (FName)((longlong)local_3d8 + 8);
        local_430._12_4_ = uVar36 << 1 | (uint)((int)uVar36 < 0);
        iVar39 = local_418->ArrayNum;
        FVar56 = local_410;
        pFVar68 = local_3f8;
      } while ((int)local_44c < iVar39);
    }
  }
  fVar31 = __real_3b808081;
  uVar36 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar37 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_430[0] = 0xdf;
  local_430[1] = 0x95;
  local_430[2] = 0x9d;
  local_430[3] = 0xff;
  local_420[0] = 0xff;
  local_420[1] = 0xff;
  local_420[2] = 0;
  local_420[3] = 0xff;
  local_464 = 0;
  pTVar62 = local_418;
  uVar63 = local_41c;
  if (0 < local_418->ArrayNum) {
    do {
      if ((uVar63 >> (local_464 & 0x1f) & 1) != 0) {
        bVar34 = AllowDebugViewmodes();
        if (bVar34) {
          if (((pFVar68->Collision == 0) || ((this_02->field_0x7b & 0x20) == 0)) ||
             (this_02->CollisionTraceFlag != CTF_UseComplexAsSimple)) {
            bVar69 = 0;
          }
          else {
            bVar69 = 1;
          }
          if ((this_02->bDrawMeshCollisionIfComplex == 0) ||
             (this_02->CollisionTraceFlag == CTF_UseSimpleAsComplex)) {
            bVar25 = 0;
          }
          else {
            bVar25 = 1;
          }
          if ((this_02->bDrawMeshCollisionIfSimple == 0) ||
             (this_02->CollisionTraceFlag != CTF_UseComplexAsSimple)) {
            bVar34 = false;
          }
          else {
            bVar34 = true;
          }
          if ((bVar34 || (bool)(bVar25 | bVar69)) || ((bVar29 && (bVar26)))) {
            pFVar60 = this_02->RenderData;
            iVar39 = (pFVar60->LODResources).Array.ArrayNum;
            if (0 < iVar39) {
              uVar63 = iVar39 - 1U;
              if (this_02->LODForCollision < (int)(iVar39 - 1U)) {
                uVar63 = this_02->LODForCollision;
              }
              uVar66 = 0;
              if (0 < (int)uVar63) {
                uVar66 = uVar63;
              }
              uVar63 = 0;
              if ((int)uVar66 < iVar39) {
                uVar63 = ~uVar66 >> 0x1f;
              }
              local_450 = uVar66;
              if ((uVar63 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              lVar57 = *(longlong *)
                        ((pFVar60->LODResources).Array.AllocatorInstance.Data +
                        (longlong)(int)uVar66 * 8);
              local_3b8 = lVar57;
              UMaterial::GetDefaultMaterial(MD_Surface);
              _local_390 = *(undefined8 *)&this_02->field_0x30;
              _fStack_388 = *(undefined8 *)&this_02->field_0x38;
              if (bVar29) {
                local_3f0 = (TObjectPtr<UMaterial>_u_0)
                            (GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.DebugPtr;
              }
              else {
                local_3f0 = (TObjectPtr<UMaterial>_u_0)
                            (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
                pbVar51 = local_430;
                if (this_02->CollisionTraceFlag != CTF_UseComplexAsSimple) {
                  pbVar51 = local_420;
                }
                fStack_38c = FLinearColor::sRGBToLinearTable[pbVar51[1]];
                local_390 = FLinearColor::sRGBToLinearTable[pbVar51[2]];
                fStack_384 = (float)pbVar51[3] * fVar31;
                fStack_388 = FLinearColor::sRGBToLinearTable[*pbVar51];
              }
              local_44c = 0;
              pFVar68 = local_3f8;
              if (0 < *(int *)(lVar57 + 0x38)) {
                FVar56 = (FName)(lVar57 + 0x10);
                local_3e8 = (ForElementType<FMeshBatchElement>)0x0;
                local_3e0 = FVar56;
                do {
                  FVar64 = local_3e8;
                  TVar16 = local_3f0;
                  uVar63 = local_44c;
                  uVar59 = 0;
                  if ((int)local_44c < *(int *)((longlong)FVar56 + 0x28)) {
                    uVar59 = ~local_44c >> 0x1f;
                  }
                  if ((uVar59 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  FVar52 = FVar56;
                  if (*(FName *)((longlong)FVar56 + 0x20) != (FName)0x0) {
                    FVar52 = *(FName *)((longlong)FVar56 + 0x20);
                  }
                  if (*(char *)((longlong)FVar52 + 0x14 + (longlong)FVar64) != '\0') {
                    pFVar43 = ::operator_new(0xe0);
                    if (pFVar43 == (FColoredMaterialRenderProxy *)0x0) {
                      local_438 = (FColoredMaterialRenderProxy *)0x0;
                    }
                    else {
                      FVar38 = FNameEntryId::FromValidEName((EName)local_340);
                      uStack_39c = 0;
                      local_3a0.Value = *(uint *)CONCAT44(extraout_var_00,FVar38.Value);
                      pFVar44 = (FMaterialRenderProxy *)
                                (**(code **)((TVar16.DebugPtr)->_padding_ + 0x310))(TVar16.DebugPtr)
                      ;
                      FVar52.Number = uStack_39c;
                      FVar52.ComparisonIndex.Value = local_3a0.Value;
                      local_438 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                            (pFVar43,pFVar44,(FLinearColor *)&local_390,FVar52);
                    }
                    pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                    FMeshElementCollector::RegisterOneFrameMaterialProxy
                              ((FMeshElementCollector *)local_45c._4_8_,
                               (FMaterialRenderProxy *)local_438);
                    iVar72 = 0;
                    local_430[8] = 0;
                    local_430[9] = 0;
                    local_430[10] = 0;
                    local_430[0xb] = 0;
                    iVar39 = (**(code **)(*(longlong *)local_448 + 600))();
                    FVar56 = local_3e0;
                    if (0 < iVar39) {
                      do {
                        iVar39 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                 ::Add(&pFVar58->MeshBatchStorage,1);
                        uVar59 = iVar39 / 0x49;
                        uVar71 = 0;
                        if ((int)uVar59 <
                            (((TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                               *)local_45c._4_8_)->Chunks).Array.ArrayNum) {
                          uVar71 = ~uVar59 >> 0x1f;
                        }
                        if ((uVar71 == 0) &&
                           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar34)) {
                          pcVar19 = (code *)swi(3);
                          (*pcVar19)();
                          return;
                        }
                        pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                        FVar64 = (ForElementType<FMeshBatchElement>)
                                 ((ulonglong)(uint)(iVar39 % 0x49) * 0xe0 +
                                 (longlong)
                                 (((TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                    *)local_45c._4_8_)->Chunks).Array.AllocatorInstance.Data
                                 [(int)uVar59]);
                        local_400 = FVar64;
                        cVar35 = (**(code **)(*(longlong *)local_448 + 0x280))
                                           (local_448,uVar66,iVar72,uVar63);
                        if (cVar35 != '\0') {
                          FMeshElementCollector::AddMesh(pFVar58,local_464,(FMeshBatch *)FVar64);
                          iVar39 = *(int *)((longlong)FVar64 + 0xa0);
                          uVar59 = 0;
                          local_430[0xc] = 0;
                          local_430[0xd] = 0;
                          local_430[0xe] = 0;
                          local_430[0xf] = 0;
                          uVar63 = local_44c;
                          if (0 < iVar39) {
                            lVar57 = 0;
                            do {
                              uVar71 = local_430._12_4_;
                              uVar63 = 0;
                              if ((int)uVar59 < iVar39) {
                                uVar63 = ~uVar59 >> 0x1f;
                              }
                              if ((uVar63 == 0) &&
                                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar34)) {
                                pcVar19 = (code *)swi(3);
                                (*pcVar19)();
                                return;
                              }
                              FVar53 = FVar64;
                              if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar64 + 0x98) !=
                                  (ForElementType<FMeshBatchElement>)0x0) {
                                FVar53 = *(ForElementType<FMeshBatchElement> *)
                                          ((longlong)FVar64 + 0x98);
                              }
                              if (((*(uint *)((longlong)FVar53 + 0x7c + lVar57) & 0x400) == 0) ||
                                 (lVar17 = *(longlong *)((longlong)FVar53 + 0x30 + lVar57),
                                 lVar17 == 0)) {
                                iVar72 = *(int *)((longlong)FVar53 + 0x60 + lVar57) *
                                         *(int *)((longlong)FVar53 + 0x5c + lVar57);
                              }
                              else {
                                uVar63 = *(uint *)((longlong)FVar53 + 0x60 + lVar57);
                                iVar70 = 0;
                                iVar72 = 0;
                                iVar39 = 0;
                                uVar66 = 0;
                                uVar71 = local_430._12_4_;
                                FVar64 = local_400;
                                if (uVar63 < 2) {
                                  if (uVar63 != 0) {
                                    iVar39 = *(int *)((longlong)FVar53 + 0x5c + lVar57);
                                    goto LAB_14879ee50;
                                  }
                                }
                                else {
                                  iVar39 = *(int *)((longlong)FVar53 + 0x5c + lVar57);
                                  do {
                                    uVar23 = uVar66 * 2;
                                    uVar66 = uVar66 + 2;
                                    iVar70 = iVar70 + ((*(int *)(lVar17 + (ulonglong)(uVar23 + 1) *
                                                                          4) -
                                                       *(int *)(lVar17 + (ulonglong)uVar23 * 4)) + 1
                                                      ) * iVar39;
                                    iVar72 = iVar72 + ((*(int *)(lVar17 + (ulonglong)(uVar23 + 3) *
                                                                          4) -
                                                       *(int *)(lVar17 + (ulonglong)(uVar23 + 2) * 4
                                                               )) + 1) * iVar39;
                                  } while (uVar66 < uVar63 - 1);
                                  if (uVar63 <= uVar66) {
                                    iVar72 = iVar72 + iVar70;
                                    goto LAB_14879ee7f;
                                  }
LAB_14879ee50:
                                  iVar39 = ((*(int *)(lVar17 + (ulonglong)(uVar66 * 2 + 1) * 4) -
                                            *(int *)(lVar17 + (ulonglong)(uVar66 * 2) * 4)) + 1) *
                                           iVar39;
                                }
                                iVar72 = iVar39 + iVar72 + iVar70;
                              }
LAB_14879ee7f:
                              iVar39 = *(int *)((longlong)FVar64 + 0xa0);
                              uVar71 = uVar71 + iVar72;
                              uVar59 = uVar59 + 1;
                              lVar57 = lVar57 + 0x98;
                              local_430._12_4_ = uVar71;
                            } while ((int)uVar59 < iVar39);
                            pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                            uVar63 = local_44c;
                            uVar66 = local_450;
                            if ((uVar71 != 0) && (FThreadStats::bPrimaryEnable != false)) {
                              FVar45 = StatPtr_STAT_StaticMeshTriangles;
                              if (StatPtr_STAT_StaticMeshTriangles ==
                                  (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0) {
                                pFVar40 = ::FName::FName(&local_2e8,"STAT_StaticMeshTriangles");
                                FVar45 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)
                                         FThreadSafeStaticStatBase::DoSetup
                                                   ((FThreadSafeStaticStatBase *)
                                                    &StatPtr_STAT_StaticMeshTriangles,*pFVar40,
                                                    L"Static Mesh Tris","STATGROUP_Engine",
                                                    "STATCAT_Advanced",L"Engine",true,true,ST_int64,
                                                    false,false,MCR_Invalid);
                              }
                              FVar56 = *(FName *)FVar45;
                              pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                              uVar63 = local_44c;
                              local_3d8 = FVar56;
                              uVar66 = local_450;
                              if (((FVar56 != (FName)0x0) &&
                                  (FThreadStats::bPrimaryDisableForever == false)) &&
                                 (FThreadStats::TlsSlot != 0xffffffff)) {
                                pFVar46 = TlsGetValue(FThreadStats::TlsSlot);
                                if (pFVar46 == (FThreadStats *)0x0) {
                                  pFVar47 = FThreadStatsPool::Get();
                                  pFVar46 = FThreadStatsPool::GetFromPool(pFVar47);
                                }
                                local_308.NameAndInfo.Number = FVar56.Number & 0xffffafff | 0xa000;
                                local_348 = FVar56;
                                local_308.StatData.Pad = (uchar  [8])(longlong)(int)uVar71;
                                local_308.NameAndInfo.Index.Value =
                                     FVar56.ComparisonIndex.Value.Value;
                                FThreadStats::AddStatMessage(pFVar46,&local_308);
                                FStatsTrace::Add(&local_348,(longlong)(int)uVar71);
                                if (pFVar46->ScopeCount == 0) {
                                  FThreadStats::Flush(pFVar46,false,false);
                                  pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                  uVar63 = local_44c;
                                  uVar66 = local_450;
                                }
                                else {
                                  pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                  uVar63 = local_44c;
                                  uVar66 = local_450;
                                  if (FThreadStats::bIsRawStatsActive != false) {
                                    FThreadStats::FlushRawStats(pFVar46,false,false);
                                    pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
                                    uVar63 = local_44c;
                                    uVar66 = local_450;
                                  }
                                }
                              }
                            }
                          }
                        }
                        iVar72 = local_430._8_4_ + 1;
                        local_430._8_4_ = iVar72;
                        iVar39 = (**(code **)(*(longlong *)local_448 + 600))();
                        FVar56 = local_3e0;
                        FVar64 = local_3e8;
                      } while (iVar72 < iVar39);
                    }
                  }
                  local_44c = uVar63 + 1;
                  local_3e8 = (ForElementType<FMeshBatchElement>)((longlong)FVar64 + 0x1c);
                  pFVar68 = local_3f8;
                  this_02 = local_448;
                } while ((int)local_44c < *(int *)(local_3b8 + 0x38));
              }
            }
          }
        }
        if (((pFVar68->Collision == 0) || ((this_02->field_0x7b & 0x20) == 0)) ||
           (this_02->CollisionTraceFlag == CTF_UseComplexAsSimple)) {
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
        pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
        if (((bVar27) || (bVar34)) && (this_02->BodySetup != (UBodySetup *)0x0)) {
          puVar1 = &this_02->field_0x110;
          dVar2 = *(double *)&this_02->field_0x120;
          dVar3 = *(double *)&this_02->field_0x128;
          dVar4 = *(double *)&this_02->field_0x140;
          dVar5 = *(double *)&this_02->field_0x168;
          dVar6 = *(double *)&this_02->field_0x160;
          dVar7 = *(double *)&this_02->field_0x188;
          dVar8 = *(double *)&this_02->field_0x180;
          dVar9 = *(double *)&this_02->field_0x148;
          dVar10 = *(double *)&this_02->field_0x158;
          dVar11 = *(double *)&this_02->field_0x178;
          dVar22 = dVar2 * dVar9 - dVar3 * dVar4;
          dVar20 = dVar5 * dVar2 - dVar6 * dVar3;
          dVar12 = *(double *)&this_02->field_0x138;
          dVar21 = dVar5 * dVar4 - dVar6 * dVar9;
          dVar13 = *(double *)&this_02->field_0x118;
          dVar3 = dVar7 * dVar2 - dVar8 * dVar3;
          dVar2 = dVar7 * dVar6 - dVar8 * dVar5;
          dVar4 = dVar7 * dVar4 - dVar8 * dVar9;
          dVar2 = ((((dVar2 * dVar12 - dVar4 * dVar10) + dVar21 * dVar11) * *(double *)puVar1 -
                   ((dVar2 * dVar13 - dVar3 * dVar10) + dVar20 * dVar11) *
                   *(double *)&this_02->field_0x130) +
                  ((dVar4 * dVar13 - dVar3 * dVar12) + dVar22 * dVar11) *
                  *(double *)&this_02->field_0x150) -
                  ((dVar21 * dVar13 - dVar20 * dVar12) + dVar22 * dVar10) *
                  *(double *)&this_02->field_0x170;
          if (__real_3e45798ee0000000 <=
              (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar36,SUB84(dVar2,0) & uVar37)) {
            bVar33 = AllowDebugViewmodes();
            if ((!bVar33) || (bVar34)) {
              UE::Math::TTransform<double>::SetFromMatrix(&local_208,(TMatrix<double> *)puVar1);
              bVar69 = this_02->field_0x82;
              pUVar18 = this_02->BodySetup;
              if (((char)bVar69 < '\0') ||
                 ((((bVar69 & 0x10) != 0 || ((bVar69 & 3) == 3)) || ((bVar69 & 0x60) != 0)))) {
                bVar34 = true;
              }
              else {
                bVar34 = false;
              }
              bVar33 = this_02->Owner == (UObject *)0x0;
              local_370._s_0.R = FLinearColor::sRGBToLinearTable[local_430[2]];
              local_370._s_0.G = FLinearColor::sRGBToLinearTable[local_430[1]];
              local_370._s_0.B = FLinearColor::sRGBToLinearTable[local_430[0]];
              local_370._s_0.A = (float)((uint)local_430._0_4_ >> 0x18) * fVar31;
              pFVar49 = GetSelectionColor(&local_288,(FLinearColor *)&local_370._s_0,local_440,
                                          (bool)((byte)this_02->field_0x79 >> 4 & 1),true);
              FLinearColor::ToFColorSRGB(pFVar49);
              pTVar54 = &local_208;
              pFVar43 = (FColoredMaterialRenderProxy *)0x0;
              bVar73 = false;
              FVar65 = local_3bc;
              pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
            }
            else {
              pFVar43 = ::operator_new(0xe0);
              if (pFVar43 == (FColoredMaterialRenderProxy *)0x0) {
                pFVar43 = (FColoredMaterialRenderProxy *)0x0;
              }
              else {
                FVar38 = FNameEntryId::FromValidEName((EName)local_33c);
                local_2b8._s_0.R = (float)*(undefined4 *)&this_02->field_0x30;
                local_2b8._s_0.G = (float)*(undefined4 *)&this_02->field_0x34;
                local_2b8._s_0.B = (float)*(undefined4 *)&this_02->field_0x38;
                local_2b8._s_0.A = (float)*(undefined4 *)&this_02->field_0x3c;
                uStack_394 = 0;
                local_398.Value = *(uint *)CONCAT44(extraout_var_01,FVar38.Value);
                pFVar44 = (FMaterialRenderProxy *)
                          (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.
                                       DebugPtr)->_padding_ + 0x310))();
                FVar24.Number = uStack_394;
                FVar24.ComparisonIndex.Value = local_398.Value;
                pFVar43 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                    (pFVar43,pFVar44,(FLinearColor *)&local_2b8._s_0,FVar24);
              }
              pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
              FMeshElementCollector::RegisterOneFrameMaterialProxy
                        ((FMeshElementCollector *)local_45c._4_8_,(FMaterialRenderProxy *)pFVar43);
              UE::Math::TTransform<double>::SetFromMatrix(&local_268,(TMatrix<double> *)puVar1);
              bVar69 = this_02->field_0x82;
              pUVar18 = this_02->BodySetup;
              if ((((char)bVar69 < '\0') || ((bVar69 & 0x10) != 0)) ||
                 (((bVar69 & 3) == 3 || ((bVar69 & 0x60) != 0)))) {
                bVar34 = true;
              }
              else {
                bVar34 = false;
              }
              local_2a8._0_8_ = *(undefined8 *)&this_02->field_0x30;
              local_2a8._8_8_ = *(undefined8 *)&this_02->field_0x38;
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_2a8._s_0);
              pTVar54 = &local_268;
              bVar73 = true;
              bVar33 = false;
              FVar65 = local_3d0;
            }
            FKAggregateGeom::GetAggGeom
                      (&pUVar18->AggGeom,pTVar54,(FColor)FVar65,(FMaterialRenderProxy *)pFVar43,
                       bVar33,bVar73,bVar34,local_464,pFVar58);
            pUVar48 = UStaticMesh::GetNavCollision(this_02->StaticMesh);
            pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
            if ((pUVar48 != (UNavCollisionBase *)0x0) &&
               (pUVar48 = UStaticMesh::GetNavCollision(this_02->StaticMesh),
               pFVar58 = (FMeshElementCollector *)local_45c._4_8_, pUVar48->bIsDynamicObstacle != 0)
               ) {
              UE::Math::TTransform<double>::SetFromMatrix
                        (&local_1a8,(TMatrix<double> *)&this_02->field_0x110);
              pUVar48 = UStaticMesh::GetNavCollision(this_02->StaticMesh);
              local_360._s_0.R = FLinearColor::sRGBToLinearTable[0x76];
              pcVar19 = *(code **)(pUVar48->_padding_ + 0x2d0);
              local_360._s_0.G = FLinearColor::sRGBToLinearTable[0x54];
              local_360._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
              local_360._s_0.A = 1.0;
              pFVar49 = GetSelectionColor(&local_278,(FLinearColor *)&local_360._s_0,local_440,
                                          (bool)((byte)this_02->field_0x79 >> 4 & 1),true);
              FLinearColor::ToFColorSRGB(pFVar49);
              uVar14 = local_3c8;
              pFVar58 = (FMeshElementCollector *)local_45c._4_8_;
              pFVar50 = FMeshElementCollector::GetPDI
                                  ((FMeshElementCollector *)local_45c._4_8_,local_464);
              (*pcVar19)(pUVar48,pFVar50,&local_1a8,uVar14);
            }
          }
        }
        if ((pFVar68->MassProperties != 0) && (0 < *(int *)&this_02->field_0x18)) {
          this_00 = *(FDebugMassData **)&this_02->field_0x10;
          UE::Math::TTransform<double>::SetFromMatrix
                    (&local_148,(TMatrix<double> *)&this_02->field_0x110);
          pFVar50 = FMeshElementCollector::GetPDI(pFVar58,local_464);
          FPrimitiveSceneProxy::FDebugMassData::DrawDebugMass(this_00,pFVar50,&local_148);
        }
        pTVar62 = local_418;
        uVar63 = local_41c;
        if (pFVar68->StaticMeshes != 0) {
          if ((this_02->Owner == (UObject *)0x0) || ((this_02->field_0x79 & 6) != 0)) {
            bVar34 = true;
          }
          else {
            bVar34 = false;
          }
          pFVar50 = FMeshElementCollector::GetPDI(pFVar58,local_464);
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this_02,pFVar50,pFVar68,
                     (TBoxSphereBounds<double,double> *)&this_02->field_0x190,bVar34);
          pTVar62 = local_418;
          uVar63 = local_41c;
        }
      }
      local_464 = local_464 + 1;
      FVar56 = local_410;
    } while ((int)local_464 < pTVar62->ArrayNum);
  }
  if (bVar30) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar32) {
    FThreadStats::AddMessage(FVar56,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 14879f720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshSceneProxy::GetDynamicRayTracingInstances
          (FStaticMeshSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *pTVar1;
  FStaticMeshRenderData *pFVar2;
  longlong *plVar3;
  ForElementType<FRayTracingGeometry> FVar4;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar5;
  FMeshBatch *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  TConsoleVariableData<int> *pTVar10;
  FStaticMeshRayTracingProxy *pFVar11;
  TMatrix<double> *pTVar12;
  uint *puVar13;
  char cVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  UMaterial *pUVar20;
  undefined8 uVar21;
  longlong lVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  int iVar30;
  ForElementType<FRayTracingGeometry> FVar31;
  FRayTracingInstanceCollector *pFVar32;
  FRayTracingGeometry *pFVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_338 [32];
  byte local_2f8;
  undefined1 local_2f7 [3];
  int local_2f4;
  uint local_2f0;
  int local_2ec;
  FRayTracingGeometry *local_2e8;
  undefined4 local_2e0;
  FRayTracingInstanceCollector *local_2d8;
  undefined8 local_2d0;
  uint uStack_2c8;
  uint local_2c0;
  int local_2bc;
  undefined8 local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  int local_2a8;
  FRayTracingInstance local_2a0;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  FRayTracingDynamicGeometryUpdateParams local_208;
  undefined4 local_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined1 local_14d;
  uint *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined1 local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  FRayTracingGeometry *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  float local_c8 [2];
  float afStack_c0 [2];
  float local_b8 [2];
  float afStack_b0 [2];
  float local_a8 [2];
  float afStack_a0 [2];
  float local_98 [2];
  float afStack_90 [2];
  undefined1 local_88;
  FRHIResource *local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2d8 = param_1;
  cVar14 = (**(code **)(*(longlong *)this + 0x58))();
  if ((cVar14 == '\0') ||
     (this->bSupportRayTracing != true || this->bHasRayTracingRepresentation != true)) {
    local_2f7[0] = 0;
    bVar15 = `FStaticMeshSceneProxy::GetDynamicRayTracingInstances'::__l3::<lambda_1>::operator()
                       (local_2f7);
    if (!bVar15) {
      return;
    }
  }
  pTVar10 = CVarRayTracingStaticMeshes.Ref;
  if (!this->bDynamicRayTracingGeometry) {
    return;
  }
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar10->ShadowedValue[1] == 0) {
    return;
  }
  if (((this->DynamicRayTracingGeometries).ArrayNum == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!DynamicRayTracingGeometries.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                          ,0x850,
                          L"Proxy should have entries in DynamicRayTracingGeometries when using the GetDynamicRayTracingInstances() code path."
                         ), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar29 = (param_1->Views).ArrayNum;
  pFVar28 = (param_1->Views).AllocatorInstance.Data;
  local_2f4 = iVar29;
  if ((iVar29 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2f0 = param_1->VisibilityMap;
  local_2a8 = 0;
  if (local_2f0 != 0) {
    for (; (local_2f0 >> local_2a8 & 1) == 0; local_2a8 = local_2a8 + 1) {
    }
  }
  local_2bc = 0x20;
  if (local_2f0 != 0) {
    local_2bc = local_2a8;
  }
  if (((local_2bc < 0) || (iVar29 <= local_2bc)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Views.IsValidIndex(FirstActiveViewIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                          ,0x858,
                          L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                         ), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2e0 = (**(code **)(*(longlong *)this + 0x160))(this);
  uVar17 = 0;
  local_2f8 = 0;
  local_2d0 = this->RenderData->RayTracingProxy;
  local_2ec = (local_2d0->LODs).Array.ArrayNum;
  uVar25 = local_2ec - 1;
  if (local_2d0->bUsingRenderingLODs == false) {
    uVar25 = uVar17;
  }
  if (0 < iVar29) {
    uVar24 = 1;
    uVar27 = local_2f0;
    iVar29 = local_2f4;
    do {
      uVar18 = uVar25;
      if ((uVar27 & uVar24) != 0) {
        if (((int)uVar17 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar22 = *(longlong *)pFVar28;
        local_228 = *(undefined8 *)(lVar22 + 0xbc8);
        uStack_220 = *(undefined8 *)(lVar22 + 0xbd0);
        local_218 = *(undefined8 *)(lVar22 + 0xbd8);
        bVar16 = (**(code **)(*(longlong *)this + 0x298))(this,&local_228);
        local_2f8 = local_2f8 | bVar16;
        uVar27 = local_2f0;
        iVar29 = local_2f4;
        if ((this->RenderData->RayTracingProxy->bUsingRenderingLODs != false) &&
           (uVar18 = (**(code **)(*(longlong *)this + 0x20))(this,lVar22), uVar27 = local_2f0,
           iVar29 = local_2f4, (int)uVar25 < (int)uVar18)) {
          uVar18 = uVar25;
        }
      }
      uVar25 = uVar18;
      uVar17 = uVar17 + 1;
      uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
      pFVar28 = pFVar28 + 8;
    } while ((int)uVar17 < iVar29);
  }
  pFVar11 = local_2d0;
  pFVar32 = local_2d8;
  iVar29 = local_2ec;
  pFVar2 = this->RenderData;
  bVar15 = pFVar2->RayTracingProxy->bUsingRenderingLODs;
  uVar17 = uVar25;
  if ((bVar15 != false) &&
     (uVar17 = (uint)pFVar2->CurrentFirstLODIdx, (int)(uint)pFVar2->CurrentFirstLODIdx < (int)uVar25
     )) {
    uVar17 = uVar25;
  }
  uVar25 = uVar17;
  if (local_2f8 == 0) {
LAB_14879fac3:
    FRayTracingInstanceCollector::AddReferencedGeometryGroup
              (pFVar32,this->RenderData->RayTracingGeometryGroupHandle);
    fVar9 = __real_3c23d70a;
    for (uVar25 = uVar17; (int)uVar25 < iVar29; uVar25 = uVar25 + 1) {
      uVar17 = 0;
      if ((int)uVar25 < (pFVar11->LODs).Array.ArrayNum) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar22 = *(longlong *)
                ((pFVar11->LODs).Array.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
      bVar15 = FRayTracingGeometry::HasPendingBuildRequest(*(FRayTracingGeometry **)(lVar22 + 8));
      if (bVar15) {
        FRayTracingGeometry::BoostBuildPriority(*(FRayTracingGeometry **)(lVar22 + 8),fVar9);
      }
      else {
        bVar15 = FRayTracingGeometry::IsValid(*(FRayTracingGeometry **)(lVar22 + 8));
        if ((bVar15) &&
           (bVar15 = FRayTracingGeometry::IsEvicted(*(FRayTracingGeometry **)(lVar22 + 8)), !bVar15)
           ) break;
      }
    }
  }
  else if (bVar15 == false) {
    FRayTracingInstanceCollector::AddReferencedGeometryGroupForDynamicUpdate
              (local_2d8,pFVar2->RayTracingGeometryGroupHandle);
    for (; (int)uVar25 < iVar29; uVar25 = uVar25 + 1) {
      uVar27 = 0;
      if ((int)uVar25 < (pFVar11->LODs).Array.ArrayNum) {
        uVar27 = ~uVar25 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar3 = *(longlong **)
                ((pFVar11->LODs).Array.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
      if (((*(byte *)((longlong)plVar3 + 0x5c) & 4) != 0) ||
         (cVar14 = (**(code **)(*plVar3 + 0x18))(), cVar14 != '\0')) break;
    }
    if ((uVar25 != 0xffffffff) && ((int)uVar25 < iVar29)) goto LAB_14879fb91;
    local_2f8 = 0;
    goto LAB_14879fac3;
  }
  if (uVar25 == 0xffffffff) {
    return;
  }
  if (iVar29 <= (int)uVar25) {
    return;
  }
LAB_14879fb91:
  uVar17 = 0;
  if ((int)uVar25 < (pFVar11->LODs).Array.ArrayNum) {
    uVar17 = ~uVar25 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar28 = *(FScriptContainerElement **)
             ((pFVar11->LODs).Array.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
  if (*(int *)(*(longlong *)(pFVar28 + 0x18) + 0xac) != 0) {
    local_2d0 = (FStaticMeshRayTracingProxy *)pFVar28;
    if (local_2f8 == 0) {
      pFVar33 = *(FRayTracingGeometry **)(pFVar28 + 8);
      bVar15 = FRayTracingGeometry::IsValid(pFVar33);
      if ((((!bVar15) || (bVar15 = FRayTracingGeometry::IsEvicted(pFVar33), bVar15)) ||
          (local_2e8 = pFVar33, bVar15 = FRayTracingGeometry::HasPendingBuildRequest(pFVar33),
          bVar15)) &&
         (local_2e8 = pFVar33,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Geometry.IsValid() && !Geometry.IsEvicted() && !Geometry.HasPendingBuildRequest()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                             ,0x8c9,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar17 = 0;
      if ((int)uVar25 < (this->DynamicRayTracingGeometries).ArrayNum) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar4 = (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<FRayTracingGeometry>)&this->DynamicRayTracingGeometries;
      if (FVar4 != (ForElementType<FRayTracingGeometry>)0x0) {
        FVar31 = FVar4;
      }
      local_2e8 = (FRayTracingGeometry *)((longlong)(int)uVar25 * 0x100 + (longlong)FVar31);
      bVar15 = FRayTracingGeometry::HasPendingBuildRequest(local_2e8);
      if (bVar15) {
        return;
      }
    }
    uStack_158 = 0;
    local_14d = 1;
    local_138 = (uint *)0x0;
    iStack_130 = 0;
    local_2ec = (**(code **)(*(longlong *)this + 600))(this);
    uVar17 = (this->CachedRayTracingMaterials).ArrayNum;
    uVar27 = local_2ec * *(int *)(*(longlong *)(pFVar28 + 0x10) + 0x28);
    if ((uVar27 == uVar17) && ((int)this->CachedRayTracingMaterialsLODIndex == uVar25)) {
      pFVar26 = (this->CachedRayTracingMaterials).AllocatorInstance.Data;
      if (((int)uVar17 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_2d0._0_4_ = SUB84(pFVar26,0);
      local_2d0._4_4_ = (undefined4)((ulonglong)pFVar26 >> 0x20);
      local_14d = 0;
      uVar34 = (undefined4)local_2d0;
      uVar35 = local_2d0._4_4_;
      local_2d0 = (FStaticMeshRayTracingProxy *)pFVar26;
      uStack_2c8 = uVar17;
    }
    else {
      pTVar1 = &this->CachedRayTracingMaterials;
      piVar23 = &(this->CachedRayTracingMaterials).ArrayMax;
      pFVar6 = (FMeshBatch *)(pTVar1->AllocatorInstance).Data;
      if ((this->CachedRayTracingMaterials).ArrayMax < 0) {
        DestructItems<FMeshBatch,int>(pFVar6,uVar17);
        (this->CachedRayTracingMaterials).ArrayNum = 0;
        if (*piVar23 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,0,&pTVar1->AllocatorInstance,0,piVar23);
        }
      }
      else {
        DestructItems<FMeshBatch,int>(pFVar6,uVar17);
        (this->CachedRayTracingMaterials).ArrayNum = 0;
      }
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
      }
      if (*piVar23 < (int)uVar27) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,uVar27,&pTVar1->AllocatorInstance,
                   (this->CachedRayTracingMaterials).ArrayNum,piVar23);
      }
      iVar29 = 0;
      if (0 < local_2ec) {
        local_2c0 = ~uVar25 >> 0x1f;
        pFVar28 = (FScriptContainerElement *)local_2d0;
        do {
          iVar30 = 0;
          if (0 < *(int *)(*(longlong *)(pFVar28 + 0x10) + 0x28)) {
            do {
              piVar23 = &(this->CachedRayTracingMaterials).ArrayMax;
              iVar19 = (this->CachedRayTracingMaterials).ArrayNum;
              if (iVar19 == *piVar23) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x8e0,&(this->CachedRayTracingMaterials).AllocatorInstance,
                                    piVar23);
              }
              (this->CachedRayTracingMaterials).ArrayNum = iVar19 + 1;
              pFVar28 = (this->CachedRayTracingMaterials).AllocatorInstance.Data +
                        (longlong)iVar19 * 0xe0;
              DefaultConstructItems<FMeshBatch,int>(pFVar28,1);
              if (this->RenderData->RayTracingProxy->bUsingRenderingLODs == false) {
                cVar14 = (**(code **)(*(longlong *)this + 0x270))(this,uVar25,iVar29,iVar30);
              }
              else {
                cVar14 = (**(code **)(*(longlong *)this + 0x268))();
              }
              if (cVar14 == '\0') {
                pUVar20 = UMaterial::GetDefaultMaterial(MD_Surface);
                uVar21 = (**(code **)(pUVar20->_padding_ + 0x310))(pUVar20);
                *(undefined8 *)(pFVar28 + 0xb0) = uVar21;
                pTVar5 = this->RenderData->RayTracingProxy->LODVertexFactories;
                uVar17 = 0;
                if ((int)uVar25 < pTVar5->ArrayNum) {
                  uVar17 = local_2c0;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(FScriptContainerElement **)(pFVar28 + 0xa8) =
                     (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x470;
              }
              *(int *)(pFVar28 + 0xcc) = iVar30;
              *(short *)(pFVar28 + 0xd0) = (short)iVar30;
              iVar30 = iVar30 + 1;
              *(uint *)(pFVar28 + 0xd4) =
                   (this->bReverseCulling ^ *(uint *)(pFVar28 + 0xd4)) & 1 ^
                   *(uint *)(pFVar28 + 0xd4);
              pFVar28 = (FScriptContainerElement *)local_2d0;
            } while (iVar30 < *(int *)(*(longlong *)((longlong)local_2d0 + 0x10) + 0x28));
          }
          iVar29 = iVar29 + 1;
        } while (iVar29 < local_2ec);
      }
      uVar17 = (this->CachedRayTracingMaterials).ArrayNum;
      pFVar28 = (this->CachedRayTracingMaterials).AllocatorInstance.Data;
      if (((int)uVar17 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_2b8._0_4_ = SUB84(pFVar28,0);
      local_2b8._4_4_ = (undefined4)((ulonglong)pFVar28 >> 0x20);
      this->CachedRayTracingMaterialsLODIndex = (short)uVar25;
      pFVar28 = (FScriptContainerElement *)local_2d0;
      uVar34 = (undefined4)local_2b8;
      uVar35 = local_2b8._4_4_;
    }
    pFVar26 = (FScriptContainerElement *)0x0;
    local_2b8 = (TMatrix<double> *)&this->field_0x110;
    iStack_2b0 = 1;
    uVar27 = 0;
    pFVar32 = local_2d8;
    pFVar33 = local_2e8;
    local_160 = uVar34;
    uStack_15c = uVar35;
    uStack_158 = uVar17;
    if (local_2f8 != 0) {
      pTVar5 = this->RenderData->RayTracingProxy->LODVertexFactories;
      uVar24 = uVar27;
      if ((int)uVar25 < pTVar5->ArrayNum) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar22 = (**(code **)(*(longlong *)
                             ((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x470) +
                           0x30))();
      pFVar32 = local_2d8;
      pFVar33 = local_2e8;
      if ((*(uint *)(lVar22 + 0x38) & 0x400) != 0) {
        iVar29 = (this->CachedRayTracingMaterials).ArrayNum;
        pFVar6 = (FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data;
        local_108.Data = (FScriptContainerElement *)0x0;
        uVar25 = *(uint *)(*(longlong *)(pFVar28 + 0x18) + 0xfc);
        local_208.MeshBatches.AllocatorInstance.Data = pFVar26;
        if (iVar29 != 0) {
          local_100._0_4_ = iVar29;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,iVar29,0,&local_108,iVar29,(int *)((longlong)&local_100 + 4));
          ConstructItems<FMeshBatch,FMeshBatch,int>(local_108.Data,pFVar6,iVar29);
          local_208.MeshBatches.AllocatorInstance.Data = local_108.Data;
          iVar29 = (int)local_100;
          uVar27 = local_100._4_4_;
        }
        pFVar32 = local_2d8;
        pFVar33 = local_2e8;
        local_208.NumTriangles = (local_2e8->Initializer).TotalPrimitiveCount;
        local_208.VertexBufferSize = uVar25 * 0xc;
        local_f8 = 0;
        local_e8 = local_2e8;
        local_e0 = 0;
        local_d8 = 1;
        local_d4 = 0;
        local_c8[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
        local_c8[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
        afStack_c0[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
        afStack_c0[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
        local_b8[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
        local_b8[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
        afStack_b0[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
        afStack_b0[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
        local_a8[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
        local_a8[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
        afStack_a0[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
        afStack_a0[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
        local_98[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
        local_98[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
        afStack_90[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
        afStack_90[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
        local_88 = 0;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = 0;
        local_208.bUsingIndirectDraw = false;
        local_208.Geometry = local_2e8;
        local_208.Buffer = (FRWBuffer *)0x0;
        local_208.bApplyWorldPositionOffset = true;
        local_208.InstanceId = 0;
        local_208.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
        local_208.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
        local_208.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
        local_208.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
        local_208.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
        local_208.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
        local_208.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
        local_208.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
        local_208.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
        local_208.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
        local_208.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
        local_208.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
        local_208.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
        local_208.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
        local_208.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
        local_208.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
        local_208.bAlphaMasked = false;
        local_208.IndexBuffer.Reference = (FRHIBuffer *)0x0;
        local_80 = (FRHIResource *)0x0;
        local_208.MeshBatches.ArrayNum = iVar29;
        local_208.MeshBatches.ArrayMax = uVar27;
        local_208.NumVertices = uVar25;
        local_f4 = uVar25;
        local_f0 = local_208.VertexBufferSize;
        local_ec = local_208.NumTriangles;
        FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(local_2d8,local_2bc,&local_208);
        if (local_80 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_80);
        }
        DestructItems<FMeshBatch,int>((FMeshBatch *)local_108.Data,(int)local_100);
        if ((FMeshBatch *)local_108.Data != (FMeshBatch *)0x0) {
          FMemory::Free(local_108.Data);
        }
      }
    }
    if (((this->CachedRayTracingMaterials).ArrayNum != uVar17) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CachedRayTracingMaterials.Num() == RayTracingInstance.GetMaterials().Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                            ,0x91d,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pFVar33->Initializer).Segments.ArrayNum != (this->CachedRayTracingMaterials).ArrayNum) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("RayTracingInstance.Geometry->Initializer.Segments.Num() == CachedRayTracingMaterials.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                            ,0x921,
                            L"Segments/Materials mismatch. Number of segments: %d. Number of Materials: %d. LOD Index: %d"
                           ), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar13 = local_138;
    pTVar12 = local_2b8;
    iVar29 = local_2f4;
    if (0 < local_2f4) {
      uVar8._4_4_ = uStack_12c;
      uVar8._0_4_ = iStack_130;
      uVar21._4_4_ = uStack_2ac;
      uVar21._0_4_ = iStack_2b0;
      uVar25 = local_2f0;
      do {
        uVar27 = (uint)pFVar26;
        if ((uVar25 >> (uVar27 & 0x1f) & 1) != 0) {
          local_2a0.bInstanceMaskAndFlagsDirty = (bool)local_14d;
          local_2a0.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a0.Materials.ArrayNum = 0;
          local_2a0.Materials.ArrayMax = 0;
          local_2a0.bApplyLocalBoundsTransform = false;
          local_2a0.bThinGeometry = false;
          local_2a0.InstanceLayer = NearField;
          local_2a0.NumTransforms = 0;
          local_2a0.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_2a0.PrimitiveInstanceIndices.ArrayNum = 0;
          local_2a0.PrimitiveInstanceIndices.ArrayMax = 0;
          local_2a0.PrimitiveInstanceIndicesView.DataPtr = puVar13;
          local_2a0.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a0.InstanceTransforms.ArrayNum = 0;
          local_2a0.InstanceTransforms.ArrayMax = 0;
          local_2a0.InstanceTransformsView.DataPtr = pTVar12;
          local_2a0.Geometry = pFVar33;
          local_2a0.MaterialsView.DataPtr._0_4_ = uVar34;
          local_2a0.MaterialsView.DataPtr._4_4_ = uVar35;
          local_2a0.MaterialsView.ArrayNum = uVar17;
          local_2a0.PrimitiveInstanceIndicesView._8_8_ = uVar8;
          local_2a0.InstanceTransformsView._8_8_ = uVar21;
          FRayTracingInstanceCollector::AddRayTracingInstance(pFVar32,uVar27,&local_2a0);
          uVar25 = local_2f0;
        }
        pFVar26 = (FScriptContainerElement *)(ulonglong)(uVar27 + 1);
      } while ((int)(uVar27 + 1) < iVar29);
    }
    DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
  }
  return;
}

// GetInstanceWorldPositionOffsetDisableDistance @ 1487a0670

bool __thiscall
FStaticMeshSceneProxy::GetInstanceWorldPositionOffsetDisableDistance
          (FStaticMeshSceneProxy *this,float *param_1)

{
  *param_1 = this->WPODisableDistance;
  return 0.0 < this->WPODisableDistance;
}

// GetLCIs @ 1487a06d0

void __thiscall
FStaticMeshSceneProxy::GetLCIs
          (FStaticMeshSceneProxy *this,
          TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<FLightCacheInterface_*> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FLightCacheInterface_*> FVar6;
  uint uVar7;
  FScriptContainerElement *local_18 [2];
  
  uVar7 = 0;
  if (0 < (this->LODs).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->LODs).ArrayNum) {
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
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      local_18[0] = (this->LODs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x80;
      FVar6 = (ForElementType<FLightCacheInterface_*>)param_1;
      if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
        FVar6 = FVar1;
      }
      if ((ulonglong)FVar6 <= local_18) {
        FVar6 = (ForElementType<FLightCacheInterface_*>)param_1;
        if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
          FVar6 = FVar1;
        }
        if ((local_18 <
             (FScriptContainerElement **)((longlong)FVar6 + (longlong)param_1->ArrayMax * 8)) &&
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
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<FLightCacheInterface_*>)param_1;
      if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
        FVar6 = FVar1;
      }
      uVar7 = uVar7 + 1;
      *(FScriptContainerElement **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_18[0];
    } while ((int)uVar7 < (this->LODs).ArrayNum);
  }
  return;
}

// GetLOD @ 1487a0850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall FStaticMeshSceneProxy::GetLOD(FStaticMeshSceneProxy *this,FSceneView *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  schar sVar4;
  int iVar5;
  int iVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  int iVar8;
  float fVar9;
  FStaticMeshSceneProxy *local_res8;
  TVector4<double>_u_0 local_38;
  
  if (this->RenderData == (FStaticMeshRenderData *)0x0) {
    local_res8 = this;
    bVar3 = `FStaticMeshSceneProxy::GetLOD'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar3) goto LAB_1487a08e2;
  }
  iVar5 = GetCVarForceLOD_AnyThread();
  if (-1 < iVar5) {
    iVar8 = (this->RenderData->LODResources).Array.ArrayNum + -1;
    if (iVar5 < iVar8) {
      iVar8 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar8) {
      iVar5 = iVar8;
    }
    return iVar5;
  }
  iVar5 = this->ForcedLodModel;
  if (0 < iVar5) {
    iVar8 = (this->RenderData->LODResources).Array.ArrayNum;
    iVar6 = this->ClampedMinLOD + 1;
    if (iVar5 < iVar8) {
      iVar8 = iVar5;
    }
    if (iVar6 < iVar8) {
      iVar6 = iVar8;
    }
    return iVar6 + -1;
  }
LAB_1487a08e2:
  pcVar2 = *(code **)(*(longlong *)this + 0x210);
  pFVar7 = GetCachedScalabilityCVars();
  fVar1 = pFVar7->StaticMeshLODDistanceScale;
  fVar9 = (float)(*pcVar2)(this);
  local_38._s_0.X = (double)*(undefined8 *)&this->field_0x190;
  local_38._s_0.Y = (double)*(undefined8 *)&this->field_0x198;
  local_38._s_0.W = __real_3ff0000000000000;
  local_38._s_0.Z = (double)*(undefined8 *)&this->field_0x1a0;
  sVar4 = ComputeStaticMeshLOD
                    (this->RenderData,(TVector4<double> *)&local_38._s_0,
                     (float)*(double *)&this->field_0x1c0,param_1,this->ClampedMinLOD,fVar9 * fVar1)
  ;
  return (int)sVar4;
}

// GetLODMask @ 1487a0990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLODMask __thiscall
FStaticMeshSceneProxy::GetLODMask(FStaticMeshSceneProxy *this,FSceneView *param_1)

{
  double dVar1;
  int iVar2;
  Type TVar3;
  FStaticMeshRenderData *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  FLODMask FVar14;
  uint uVar15;
  FMaterialRenderProxy *this_00;
  FMaterial *pFVar16;
  FCachedSystemScalabilityCVars *pFVar17;
  ushort uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  FSceneView *in_R8;
  ushort uVar24;
  longlong lVar25;
  float fVar26;
  FStaticMeshSceneProxy *local_res8;
  TVector4<double>_u_0 local_d8;
  TVector4<double>_u_0 local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  int iStack_84;
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  uVar23 = 0;
  *(undefined2 *)param_1 = 0;
  if ((this->RenderData != (FStaticMeshRenderData *)0x0) ||
     (local_res8 = this,
     bVar10 = `FStaticMeshSceneProxy::GetLODMask'::__l3::<lambda_1>::operator()(&local_res8), bVar10
     )) {
    uVar15 = GetCVarForceLOD();
    if ((int)uVar15 < 0) {
      if ((in_R8->DrawDynamicFlags & ForceLowestLOD) == None) {
        uVar15 = this->ForcedLodModel;
        if ((int)uVar15 < 1) {
          iVar2 = (this->LODs).ArrayNum;
          bVar10 = false;
          if (iVar2 != 0) {
            TVar3 = *(Type *)(*(longlong *)&this->field_0x220 + 8);
            if ((iVar2 < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              FVar14 = (FLODMask)(*pcVar7)();
              return FVar14;
            }
            pFVar4 = this->RenderData;
            pFVar5 = (this->LODs).AllocatorInstance.Data;
            if (((pFVar4->LODResources).Array.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              FVar14 = (FLODMask)(*pcVar7)();
              return FVar14;
            }
            lVar6 = *(longlong *)(pFVar4->LODResources).Array.AllocatorInstance.Data;
            bVar10 = false;
            if (0 < *(int *)(lVar6 + 0x38)) {
              lVar25 = 0;
              do {
                uVar15 = 0;
                if ((int)uVar23 < *(int *)(pFVar5 + 0x50)) {
                  uVar15 = ~uVar23 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  FVar14 = (FLODMask)(*pcVar7)();
                  return FVar14;
                }
                pFVar19 = pFVar5 + 0x30;
                if (*(FScriptContainerElement **)(pFVar5 + 0x48) != (FScriptContainerElement *)0x0)
                {
                  pFVar19 = *(FScriptContainerElement **)(pFVar5 + 0x48);
                }
                this_00 = (FMaterialRenderProxy *)
                          (**(code **)(**(longlong **)(pFVar19 + lVar25) + 0x310))();
                pFVar16 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,TVar3);
                cVar12 = (**(code **)(pFVar16->_padding_ + 0x58))(pFVar16);
                if (cVar12 != '\0') {
                  bVar10 = true;
                  break;
                }
                uVar23 = uVar23 + 1;
                lVar25 = lVar25 + 0x18;
              } while ((int)uVar23 < *(int *)(lVar6 + 0x38));
            }
          }
          pFVar17 = GetCachedScalabilityCVars();
          local_98._0_1_ = pFVar17->bInitialized;
          local_98._1_3_ = *(undefined3 *)&pFVar17->field_0x1;
          local_98._4_4_ = pFVar17->DetailMode;
          uStack_90._0_4_ = pFVar17->CookOutUnusedDetailModeComponents;
          uStack_90._4_1_ = pFVar17->MaterialQualityLevel;
          uStack_90._5_3_ = *(undefined3 *)&pFVar17->field_0xd;
          local_88 = pFVar17->MaxShadowResolution;
          iStack_84 = pFVar17->MaxCSMShadowResolution;
          fStack_80 = pFVar17->ViewDistanceScale;
          fStack_7c = pFVar17->ViewDistanceScaleSquared;
          fVar8 = pFVar17->StaticMeshLODDistanceScale;
          local_68 = pFVar17->FieldOfViewMinAngle;
          fStack_64 = pFVar17->FieldOfViewMinAngleScale;
          fStack_60 = pFVar17->FieldOfViewMaxAngle;
          fStack_5c = pFVar17->FieldOfViewMaxAngleScale;
          fVar26 = (float)(**(code **)(*(longlong *)this + 0x210))(this);
          dVar9 = __real_3ff0000000000000;
          fVar26 = fVar26 * fVar8;
          if (bVar10) {
            local_d8._s_0.W = __real_3ff0000000000000;
            local_d8._s_0.X = *(double *)&this->field_0x190;
            local_d8._s_0.Y = *(double *)&this->field_0x198;
            local_d8._s_0.Z = *(double *)&this->field_0x1a0;
            bVar13 = ComputeTemporalStaticMeshLOD
                               (this->RenderData,(TVector4<double> *)&local_d8._s_0,
                                (float)*(double *)&this->field_0x1c0,in_R8,this->ClampedMinLOD,
                                fVar26,0);
            local_d8._s_0.X = (double)*(undefined8 *)&this->field_0x190;
            local_d8._s_0.Y = (double)*(undefined8 *)&this->field_0x198;
            dVar1 = *(double *)&this->field_0x1c0;
            local_d8._s_0.Z = (double)*(undefined8 *)&this->field_0x1a0;
            iVar2 = this->ClampedMinLOD;
            *(ushort *)param_1 = (ushort)(bVar13 & 0x7f) | *(ushort *)param_1 & 0x3f80 | 0x4000;
            local_d8._s_0.W = dVar9;
            bVar13 = ComputeTemporalStaticMeshLOD
                               (this->RenderData,(TVector4<double> *)&local_d8._s_0,(float)dVar1,
                                in_R8,iVar2,fVar26,1);
            uVar18 = (ushort)(bVar13 | 0x80) << 7 | *(ushort *)param_1 & 0x7f;
          }
          else {
            local_b8._s_0.W = __real_3ff0000000000000;
            local_b8._s_0.X = *(double *)&this->field_0x190;
            local_b8._s_0.Y = *(double *)&this->field_0x198;
            local_b8._s_0.Z = *(double *)&this->field_0x1a0;
            bVar13 = ComputeStaticMeshLOD
                               (this->RenderData,(TVector4<double> *)&local_b8._s_0,
                                (float)*(double *)&this->field_0x1c0,in_R8,this->ClampedMinLOD,
                                fVar26);
            uVar18 = (ushort)(bVar13 & 0x7f) ^ (ushort)(bVar13 & 0x7f) << 7 | 0x4000;
          }
          goto LAB_1487a0e11;
        }
        uVar20 = this->ClampedMinLOD + 1;
        uVar23 = (this->RenderData->LODResources).Array.ArrayNum;
        if ((int)uVar15 < (int)uVar23) {
          uVar23 = uVar15;
        }
        if ((int)uVar20 < (int)uVar23) {
          uVar20 = uVar23 & 0xffff;
        }
      }
      else {
        uVar20 = (uint)(ushort)(this->RenderData->LODResources).Array.ArrayNum;
      }
      uVar18 = (((short)uVar20 + -1) * 0x80 ^ *(ushort *)param_1) & 0x3f80 ^ *(ushort *)param_1;
      uVar18 = (uVar18 >> 7 & 0x7f ^ uVar18 & 0xff80) & 0x3fff | 0x4000;
    }
    else {
      uVar23 = this->ClampedMinLOD;
      uVar20 = (this->RenderData->LODResources).Array.ArrayNum - 1;
      if ((int)uVar15 < (int)uVar20) {
        uVar20 = uVar15;
      }
      if ((int)uVar23 < (int)uVar20) {
        uVar23 = uVar20 & 0xffff;
      }
      uVar18 = ((short)uVar23 << 7 ^ *(ushort *)param_1) & 0x3f80 ^ *(ushort *)param_1;
      uVar18 = (uVar18 >> 7 & 0x7f ^ uVar18 & 0xff80) & 0x3fff | 0x4000;
    }
  }
  else {
    uVar18 = 0x4000;
  }
LAB_1487a0e11:
  *(ushort *)param_1 = uVar18;
  bVar13 = this->RenderData->CurrentFirstLODIdx;
  if (((char)bVar13 < '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurFirstLODIdx >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                          ,0xb48,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    FVar14 = (FLODMask)(*pcVar7)();
    return FVar14;
  }
  uVar18 = *(ushort *)param_1;
  uVar21 = (ushort)bVar13;
  uVar22 = (ushort)bVar13;
  uVar24 = uVar18;
  if ((uVar18 & 0x7f) <= uVar21) {
    uVar24 = uVar21;
  }
  uVar24 = (uVar24 ^ uVar18) & 0x7f ^ uVar18;
  if (uVar21 < (uVar18 >> 7 & 0x7f)) {
    uVar22 = uVar18 >> 7;
  }
  *(ushort *)param_1 = (uVar22 << 7 ^ uVar24) & 0x3f80 ^ uVar24;
  return SUB82(param_1,0);
}

// GetLightMapCoordinateIndex @ 1487a0ee0

int __thiscall FStaticMeshSceneProxy::GetLightMapCoordinateIndex(FStaticMeshSceneProxy *this)

{
  if (this->StaticMesh != (UStaticMesh *)0x0) {
    return this->StaticMesh->LightMapCoordinateIndex;
  }
  return -1;
}

// GetLightRelevance @ 1487a0f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::GetLightRelevance
          (FStaticMeshSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3,
          bool *param_4,bool *param_5)

{
  int iVar1;
  code *pcVar2;
  bool *pbVar3;
  bool *pbVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  pbVar4 = param_5;
  pbVar3 = param_4;
  *param_2 = true;
  *param_3 = false;
  *param_4 = true;
  *param_5 = true;
  if ((this->LODs).ArrayNum < 1) {
    *param_3 = true;
    *param_4 = false;
    *param_5 = false;
    return;
  }
  uVar9 = 0;
  lVar10 = 0;
  do {
    uVar6 = 0;
    if ((int)uVar9 < (this->LODs).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar8 = (this->LODs).AllocatorInstance.Data + lVar10;
    piVar7 = (int *)(**(code **)(*(longlong *)pFVar8 + 8))(pFVar8,&param_4,param_1);
    iVar1 = *piVar7;
    if ((((iVar1 != 0) && (*param_3 = true, iVar1 != 1)) && (*pbVar3 = false, iVar1 == 2)) ||
       (*param_2 = false, iVar1 != 3)) {
      *pbVar4 = false;
    }
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 0x80;
  } while ((int)uVar9 < (this->LODs).ArrayNum);
  return;
}

// GetMeshCardRepresentation @ 1487a13f0

FCardRepresentationData * __thiscall
FStaticMeshSceneProxy::GetMeshCardRepresentation(FStaticMeshSceneProxy *this)

{
  return this->CardRepresentationData;
}

// GetMeshDescription @ 1487a1400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::GetMeshDescription
          (FStaticMeshSceneProxy *this,int param_1,
          TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *param_2)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<FMeshBatchElement> FVar8;
  int iVar9;
  int iVar10;
  FMeshBatch *pFVar11;
  longlong lVar12;
  undefined1 auStack_178 [32];
  FMeshBatch *local_158;
  FMeshBatch *local_150;
  ulonglong local_148;
  FMeshBatch *local_140;
  undefined8 local_138;
  longlong local_128;
  FMeshBatch local_120;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar1 = this->RenderData;
  pFVar11 = (FMeshBatch *)(longlong)param_1;
  iVar9 = (pFVar1->LODResources).Array.ArrayNum;
  uVar5 = 0;
  if (param_1 < iVar9) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (local_158 = pFVar11, local_150 = (FMeshBatch *)(longlong)iVar9,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = (this->LODs).ArrayNum;
  lVar12 = *(longlong *)
            ((pFVar1->LODResources).Array.AllocatorInstance.Data + (longlong)pFVar11 * 8);
  uVar5 = 0;
  if (param_1 < iVar9) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  local_128 = lVar12;
  if ((uVar5 == 0) &&
     (local_158 = pFVar11, local_150 = (FMeshBatch *)(longlong)iVar9,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = 0;
  if (0 < *(int *)(lVar12 + 0x38)) {
    do {
      iVar10 = 0;
      iVar6 = (**(code **)(*(longlong *)this + 600))(this);
      if (0 < iVar6) {
        do {
          local_120.Elements.AllocatorInstance.SecondaryData =
               (ForElementType<FMeshBatchElement>)0x0;
          local_120.bUseForLumenSurfaceCacheCapture = 0;
          local_120.bUseForWaterInfoTextureDepth = 0;
          local_120.bViewDependentArguments = 0;
          local_120.bForceTwoSidedInRayTracing = 0;
          local_120.CastRayTracedShadow = 1;
          local_120.bOverlayMaterial = 0;
          local_120.RuntimeVirtualTextureMaterialType = 0;
          local_120.bRenderToVirtualTexture = 0;
          local_120.bDitheredLODTransition = 0;
          local_120.bSelectable = 1;
          local_120.bUseSelectionOutline = 1;
          local_120.bUseWireframeSelectionColoring = 0;
          local_120.bCanApplyViewModeOverrides = 0;
          local_120.DepthPriorityGroup = 0;
          local_120.Type = 0;
          local_120.bWireframe = 0;
          local_120.bUseAsOccluder = 1;
          local_120.bUseForDepthPass = 1;
          local_120.bUseForMaterial = 1;
          local_120.CastShadow = 1;
          local_120.bDisableBackfaceCulling = 0;
          local_120.ReverseCulling = 0;
          local_120.Elements.ArrayMax = 1;
          local_120.LCI = (FLightCacheInterface *)0x0;
          local_120.VertexFactory = (FVertexFactory *)0x0;
          local_120.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
          local_120.BatchHitProxyId.Index = -1;
          local_120.DynamicMeshBoundsIndex = -1;
          local_120.TessellationDisablingShadowMapMeshSize = 0.0;
          local_120.SegmentIndex = -1;
          local_120.MeshIdInPrimitive = 0;
          local_120.LODIndex = -1;
          local_120.VisualizeHLODIndex = -1;
          local_120.VisualizeLODIndex = -1;
          local_120.Elements.ArrayNum = 1;
          DefaultConstructItems<FMeshBatchElement,int>(&local_120,1);
          local_140 = &local_120;
          local_148 = local_148 & 0xffffffffffffff00;
          local_150 = (FMeshBatch *)((ulonglong)local_150 & 0xffffffffffffff00);
          local_158 = (FMeshBatch *)((ulonglong)local_158 & 0xffffffffffffff00);
          cVar4 = (**(code **)(*(longlong *)this + 0x268))(this,param_1,iVar10,iVar9);
          if (cVar4 != '\0') {
            pFVar11 = (FMeshBatch *)(param_2->AllocatorInstance).Data;
            if ((pFVar11 <= &local_120) && (&local_120 < pFVar11 + param_2->ArrayMax)) {
              local_140 = (FMeshBatch *)(longlong)param_2->ArrayNum;
              local_138 = 0xe0;
              local_158 = &local_120;
              local_150 = pFVar11;
              local_148 = (longlong)param_2->ArrayMax;
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
            iVar7 = param_2->ArrayNum;
            if (iVar7 == param_2->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8e0,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar7 + 1;
            FMeshBatch::FMeshBatch
                      ((FMeshBatch *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0xe0),
                       &local_120);
          }
          FVar8 = (ForElementType<FMeshBatchElement>)&local_120;
          if (local_120.Elements.AllocatorInstance.SecondaryData !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar8 = local_120.Elements.AllocatorInstance.SecondaryData;
          }
          DestructItems<FMeshBatchElement,int>
                    ((FMeshBatchElement *)FVar8,local_120.Elements.ArrayNum);
          if (local_120.Elements.AllocatorInstance.SecondaryData !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FMemory::Free((void *)local_120.Elements.AllocatorInstance.SecondaryData);
          }
          iVar10 = iVar10 + 1;
          lVar12 = local_128;
        } while (iVar10 < iVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar12 + 0x38));
  }
  return;
}

// GetMeshElement @ 1487a16b0

bool __thiscall
FStaticMeshSceneProxy::GetMeshElement
          (FStaticMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          bool param_5,bool param_6,FMeshBatch *param_7)

{
  Type TVar1;
  int iVar2;
  FStaticMeshRenderData *pFVar3;
  FStaticMeshRenderData *pFVar4;
  longlong lVar5;
  ForElementType<FMeshBatchElement> FVar6;
  FRHIUniformBuffer *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  FMaterialRenderProxy *this_00;
  FMaterial *pFVar15;
  uint uVar16;
  uint uVar17;
  FLightCacheInterface *pFVar18;
  ForElementType<FMeshBatchElement> FVar19;
  uint uVar20;
  FLightCacheInterface *pFVar21;
  ForElementType<FMeshBatchElement> FVar22;
  longlong lVar23;
  FVertexFactory *local_res8;
  bool local_res10;
  
  pFVar3 = this->RenderData;
  lVar23 = (longlong)param_1;
  TVar1 = *(Type *)(*(longlong *)&this->field_0x220 + 8);
  uVar20 = (uint)~param_1 >> 0x1f;
  uVar17 = 0;
  uVar16 = uVar17;
  if (param_1 < (pFVar3->LODResources).Array.ArrayNum) {
    uVar16 = uVar20;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  pFVar4 = this->RenderData;
  lVar5 = *(longlong *)((pFVar3->LODResources).Array.AllocatorInstance.Data + lVar23 * 8);
  uVar16 = uVar17;
  if (param_1 < (pFVar4->LODVertexFactories).ArrayNum) {
    uVar16 = uVar20;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  local_res8 = (FVertexFactory *)
               ((pFVar4->LODVertexFactories).AllocatorInstance.Data + lVar23 * 0x470);
  uVar13 = 0;
  uVar16 = uVar13;
  if (param_3 < *(int *)(lVar5 + 0x38)) {
    uVar16 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  lVar14 = *(longlong *)(lVar5 + 0x30);
  if (*(longlong *)(lVar5 + 0x30) == 0) {
    lVar14 = lVar5 + 0x10;
  }
  lVar14 = (longlong)param_3 * 0x1c + lVar14;
  if (*(int *)(lVar14 + 8) == 0) {
    return false;
  }
  uVar16 = uVar13;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar16 = uVar20;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  pFVar21 = (FLightCacheInterface *)((this->LODs).AllocatorInstance.Data + lVar23 * 0x80);
  uVar16 = uVar13;
  if (param_3 < *(int *)&pFVar21[1].ResourceCluster) {
    uVar16 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  pFVar18 = (FLightCacheInterface *)pFVar21[1].ShadowMap;
  if ((FLightCacheInterface *)pFVar21[1].ShadowMap == (FLightCacheInterface *)0x0) {
    pFVar18 = pFVar21 + 1;
  }
  this_00 = (FMaterialRenderProxy *)
            (**(code **)(*(longlong *)(&pFVar18->_padding_)[(longlong)param_3 * 3] + 0x310))();
  pFVar15 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,TVar1);
  if (((param_7->Elements).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  FVar6 = (param_7->Elements).AllocatorInstance.SecondaryData;
  FVar22 = (ForElementType<FMeshBatchElement>)param_7;
  if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar22 = FVar6;
  }
  pFVar7 = pFVar21[1].PrecomputedLightingUniformBuffer.Reference;
  if (pFVar7 == (FRHIUniformBuffer *)0x0) {
    *(undefined8 *)((longlong)FVar22 + 0x40) = *(undefined8 *)&local_res8[1].PositionStream.ArrayNum
    ;
  }
  else {
    if ((*(uint *)((longlong)&(pFVar7->Layout).Reference + 4) <= *(uint *)(lVar14 + 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Section.MaxVertexIndex < ProxyLODInfo.OverrideColorVertexBuffer->GetNumVertices()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                           ,0x30d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    local_res8 = (FVertexFactory *)
                 (local_res8[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10);
    *(longlong *)((longlong)FVar22 + 0x40) = pFVar21[2]._padding_;
    pFVar7 = pFVar21[1].PrecomputedLightingUniformBuffer.Reference;
    *(uint *)((longlong)FVar22 + 0x7c) = *(uint *)((longlong)FVar22 + 0x7c) | 0x100;
    *(FRHIUniformBuffer **)((longlong)FVar22 + 0x38) = pFVar7;
  }
  if ((((GUseReversedIndexBuffer == false) ||
       (((this->bReverseCulling ^ (uint)(byte)this->field_0x78) & 1) == 0)) ||
      ((*(byte *)(lVar5 + 0x94) & 2) == 0)) ||
     (cVar11 = (**(code **)(pFVar15->_padding_ + 0x48))(pFVar15), cVar11 != '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((this->field_0x68 != '\x02') && (this->field_0x68 != '\x01')) {
    cVar11 = (**(code **)(pFVar15->_padding_ + 0x58))(pFVar15);
    local_res10 = true;
    if (cVar11 != '\0') goto LAB_1487a1a14;
  }
  local_res10 = false;
LAB_1487a1a14:
  lVar23 = *(longlong *)(lVar5 + 0x2c8);
  if (*(int *)(lVar14 + 8) != 0) {
    if (((param_7->Elements).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    FVar6 = (param_7->Elements).AllocatorInstance.SecondaryData;
    FVar19 = (ForElementType<FMeshBatchElement>)param_7;
    if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar19 = FVar6;
    }
    param_7->Type = 0;
    if (!bVar9) {
      lVar23 = lVar5 + 0x228;
    }
    *(longlong *)((longlong)FVar19 + 0x18) = lVar23;
    *(undefined4 *)((longlong)FVar19 + 0x58) = *(undefined4 *)(lVar14 + 4);
    iVar2 = *(int *)(lVar14 + 8);
    *(int *)((longlong)FVar19 + 0x5c) = iVar2;
    param_7->VertexFactory = local_res8;
    if (iVar2 != 0) {
      param_7->SegmentIndex = param_3;
      param_7->MeshIdInPrimitive = (ushort)param_3;
      param_7->LODIndex = (schar)param_1;
      param_7->VisualizeLODIndex = (schar)param_1;
      param_7->VisualizeHLODIndex = this->HierarchicalLODIndex;
      if (((((uint)(byte)this->field_0x78 ^ this->bReverseCulling) & 1) == 0) || (uVar16 = 1, bVar9)
         ) {
        uVar16 = uVar13;
      }
      uVar20 = *(uint *)&param_7->field_0xd4;
      param_7->ReverseCulling = uVar16;
      if ((this->bCastShadow == 0) || (*(char *)(lVar14 + 0x15) == '\0')) {
        uVar16 = uVar20 & 0xfffffffa | uVar16;
      }
      else {
        uVar16 = uVar20 & 0xfffffffe | uVar16 | 4;
        *(uint *)&param_7->field_0xd4 = uVar16;
        if ((this->field_0x7d & 2) != 0) {
          uVar17 = 0x800000;
        }
      }
      uVar17 = uVar16 & 0xff7fffff | uVar17;
      *(uint *)&param_7->field_0xd4 = ((uint)param_4 << 10 ^ uVar17) & 0x1c00 ^ uVar17;
      param_7->LCI = pFVar21;
      param_7->MaterialRenderProxy = this_00;
      *(undefined4 *)((longlong)FVar22 + 0x68) = *(undefined4 *)(lVar14 + 0xc);
      *(undefined4 *)((longlong)FVar22 + 0x6c) = *(undefined4 *)(lVar14 + 0x10);
      *(uint *)((longlong)FVar22 + 0x7c) =
           (param_3 << 0xe ^ *(uint *)((longlong)FVar22 + 0x7c)) & 0xffc03fff ^ param_3 << 0xe;
      SetMeshElementScreenSize(this,param_1,local_res10,param_7);
      return true;
    }
  }
  return false;
}

// GetRayTracingGeometryGroupHandle @ 1487a31e0

int __thiscall FStaticMeshSceneProxy::GetRayTracingGeometryGroupHandle(FStaticMeshSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                         ,0x832,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  return this->RayTracingGeometryGroupHandle;
}

// GetRayTracingMeshElement @ 1487a3240

bool __thiscall
FStaticMeshSceneProxy::GetRayTracingMeshElement
          (FStaticMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          FMeshBatch *param_5)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  int iVar3;
  FStaticMeshRayTracingProxy *pFVar4;
  longlong lVar5;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  ForElementType<FMeshBatchElement> FVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  bool bVar14;
  FVertexFactory *pFVar15;
  FMaterialRenderProxy *this_00;
  FMaterial *pFVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ForElementType<FMeshBatchElement> FVar20;
  longlong lVar21;
  uint uVar22;
  ForElementType<FMeshBatchElement> FVar23;
  longlong lVar24;
  
  lVar24 = (longlong)param_1;
  TVar2 = *(Type *)(*(longlong *)&this->field_0x220 + 8);
  uVar22 = (uint)~param_1 >> 0x1f;
  pFVar4 = this->RenderData->RayTracingProxy;
  uVar18 = 0;
  if (param_1 < (pFVar4->LODs).Array.ArrayNum) {
    uVar18 = uVar22;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  lVar5 = *(longlong *)((pFVar4->LODs).Array.AllocatorInstance.Data + lVar24 * 8);
  pTVar6 = this->RenderData->RayTracingProxy->LODVertexFactories;
  uVar18 = 0;
  if (param_1 < pTVar6->ArrayNum) {
    uVar18 = uVar22;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar15 = (FVertexFactory *)((pTVar6->AllocatorInstance).Data + lVar24 * 0x470);
  lVar7 = *(longlong *)(lVar5 + 0x10);
  uVar18 = 0;
  if (param_3 < *(int *)(lVar7 + 0x28)) {
    uVar18 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  lVar21 = *(longlong *)(lVar7 + 0x20);
  if (*(longlong *)(lVar7 + 0x20) == 0) {
    lVar21 = lVar7;
  }
  lVar21 = (longlong)param_3 * 0x1c + lVar21;
  if (*(int *)(lVar21 + 8) == 0) {
    return false;
  }
  uVar18 = 0;
  if (param_1 < (this->RayTracingLODInfos).ArrayNum) {
    uVar18 = uVar22;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar1 = (this->RayTracingLODInfos).AllocatorInstance.Data + lVar24 * 0x18;
  uVar18 = 0;
  if (param_3 < *(int *)(pFVar1 + 0x10)) {
    uVar18 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar19 = *(FScriptContainerElement **)(pFVar1 + 8);
  if (*(FScriptContainerElement **)(pFVar1 + 8) == (FScriptContainerElement *)0x0) {
    pFVar19 = pFVar1;
  }
  this_00 = (FMaterialRenderProxy *)
            (**(code **)(**(longlong **)(pFVar19 + (longlong)param_3 * 8) + 0x310))();
  pFVar16 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,TVar2);
  if (((param_5->Elements).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  FVar8 = (param_5->Elements).AllocatorInstance.SecondaryData;
  FVar23 = (ForElementType<FMeshBatchElement>)param_5;
  if (FVar8 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar23 = FVar8;
  }
  *(undefined8 *)((longlong)FVar23 + 0x40) = *(undefined8 *)&pFVar15[1].PositionStream.ArrayNum;
  if (((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
     (cVar13 = (**(code **)(pFVar16->_padding_ + 0x58))(pFVar16), cVar13 == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x20);
  if (*(int *)(lVar21 + 8) == 0) {
    return false;
  }
  if (((param_5->Elements).ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  FVar8 = (param_5->Elements).AllocatorInstance.SecondaryData;
  FVar20 = (ForElementType<FMeshBatchElement>)param_5;
  if (FVar8 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar20 = FVar8;
  }
  param_5->Type = 0;
  *(undefined8 *)((longlong)FVar20 + 0x18) = uVar9;
  *(undefined4 *)((longlong)FVar20 + 0x58) = *(undefined4 *)(lVar21 + 4);
  iVar3 = *(int *)(lVar21 + 8);
  *(int *)((longlong)FVar20 + 0x5c) = iVar3;
  param_5->VertexFactory = pFVar15;
  if (iVar3 == 0) {
    return false;
  }
  param_5->SegmentIndex = param_3;
  param_5->MeshIdInPrimitive = (ushort)param_3;
  param_5->LODIndex = (schar)param_1;
  uVar22 = (uint)(byte)this->field_0x78 ^ this->bReverseCulling;
  uVar18 = *(uint *)&param_5->field_0xd4;
  uVar17 = uVar22 & 1;
  param_5->ReverseCulling = uVar22;
  if ((this->bCastShadow == 0) || (*(char *)(lVar21 + 0x15) == '\0')) {
    uVar17 = uVar17 | uVar18 & 0xfffffffa;
  }
  else {
    uVar17 = uVar17 | uVar18 & 0xfffffffe | 4;
    *(uint *)&param_5->field_0xd4 = uVar17;
    if ((this->field_0x7d & 2) != 0) {
      uVar18 = 0x800000;
      goto LAB_1487a35e1;
    }
  }
  uVar18 = 0;
LAB_1487a35e1:
  param_5->LCI = (FLightCacheInterface *)0x0;
  uVar18 = uVar17 & 0xff7fffff | uVar18;
  *(uint *)&param_5->field_0xd4 = ((uint)param_4 << 10 ^ uVar18) & 0x1c00 ^ uVar18;
  param_5->MaterialRenderProxy = this_00;
  *(undefined4 *)((longlong)FVar23 + 0x68) = *(undefined4 *)(lVar21 + 0xc);
  *(undefined4 *)((longlong)FVar23 + 0x6c) = *(undefined4 *)(lVar21 + 0x10);
  SetMeshElementScreenSize(this,param_1,bVar11,param_5);
  return true;
}

// GetRayTracingWPOConfig @ 1487a3660

void __thiscall
FStaticMeshSceneProxy::GetRayTracingWPOConfig
          (FStaticMeshSceneProxy *this,bool *param_1,bool *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  pTVar1 = CVarRayTracingStaticMeshesWPO.Ref;
  bVar2 = IsInParallelGameThread();
  lVar4 = 4;
  if (bVar2) {
LAB_1487a369c:
    lVar3 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_1487a369c;
    lVar3 = 4;
  }
  *param_1 = *(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0;
  pTVar1 = CVarRayTracingStaticMeshesWPO.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) goto LAB_1487a36c2;
  }
  lVar4 = 0;
LAB_1487a36c2:
  *param_2 = *(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 1;
  return;
}

// GetScreenSize @ 1487a4150

float __thiscall FStaticMeshSceneProxy::GetScreenSize(FStaticMeshSceneProxy *this,int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->RenderData->ScreenSize[param_1].Default;
  fVar2 = (float)(**(code **)(*(longlong *)this + 0x210))();
  return fVar2 * fVar1;
}

// GetShadowMeshElement @ 1487a4190

bool __thiscall
FStaticMeshSceneProxy::GetShadowMeshElement
          (FStaticMeshSceneProxy *this,int param_1,int param_2,uchar param_3,FMeshBatch *param_4,
          bool param_5)

{
  uchar *puVar1;
  undefined1 *puVar2;
  FStaticMeshRenderData *pFVar3;
  FStaticMeshRenderData *pFVar4;
  longlong lVar5;
  ForElementType<FMeshBatchElement> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  UMaterial *pUVar12;
  FMaterialRenderProxy *pFVar13;
  uint uVar14;
  ForElementType<FMeshBatchElement> FVar15;
  uint uVar16;
  FLightCacheInterface *pFVar17;
  longlong lVar18;
  FVertexFactory *pFVar19;
  
  pFVar3 = this->RenderData;
  lVar18 = (longlong)param_1;
  uVar14 = 0;
  uVar16 = (uint)~param_1 >> 0x1f;
  uVar11 = uVar14;
  if (param_1 < (pFVar3->LODResources).Array.ArrayNum) {
    uVar11 = uVar16;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar4 = this->RenderData;
  lVar5 = *(longlong *)((pFVar3->LODResources).Array.AllocatorInstance.Data + lVar18 * 8);
  uVar11 = uVar14;
  if (param_1 < (pFVar4->LODVertexFactories).ArrayNum) {
    uVar11 = uVar16;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar19 = (FVertexFactory *)((pFVar4->LODVertexFactories).AllocatorInstance.Data + lVar18 * 0x470)
  ;
  uVar11 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar11 = uVar16;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar17 = (FLightCacheInterface *)((this->LODs).AllocatorInstance.Data + lVar18 * 0x80);
  if (((GUseReversedIndexBuffer == false) ||
      (((this->bReverseCulling ^ (uint)(byte)this->field_0x78) & 1) == 0)) ||
     ((*(byte *)(lVar5 + 0x94) & 4) == 0)) {
    bVar8 = false;
    if ((*(byte *)(lVar5 + 0x94) & 1) == 0) {
      return false;
    }
  }
  else {
    bVar8 = true;
  }
  if (((param_4->Elements).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  FVar6 = (param_4->Elements).AllocatorInstance.SecondaryData;
  FVar15 = (ForElementType<FMeshBatchElement>)param_4;
  if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar15 = FVar6;
  }
  if (pFVar17[1].PrecomputedLightingUniformBuffer.Reference == (FRHIUniformBuffer *)0x0) {
    param_4->VertexFactory = pFVar19;
    lVar18._0_4_ = pFVar19[1].PositionStream.ArrayNum;
    lVar18._4_4_ = pFVar19[1].PositionStream.ArrayMax;
  }
  else {
    param_4->VertexFactory =
         (FVertexFactory *)(pFVar19[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10);
    lVar18 = pFVar17[2]._padding_;
  }
  *(longlong *)((longlong)FVar15 + 0x40) = lVar18;
  if ((*(longlong *)(lVar5 + 0x2c8) == 0) || (!bVar8)) {
    lVar18 = lVar5 + 0x278;
  }
  else {
    lVar18 = *(longlong *)(lVar5 + 0x2c8) + 0x50;
  }
  *(longlong *)((longlong)FVar15 + 0x18) = lVar18;
  puVar1 = (uchar *)((longlong)FVar15 + 0x58);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(undefined4 *)((longlong)FVar15 + 0x5c) = *(undefined4 *)(lVar5 + 0x98);
  puVar1 = (uchar *)((longlong)FVar15 + 0x68);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(int *)((longlong)FVar15 + 0x6c) = *(int *)(lVar5 + 0x1cc) + -1;
  param_4->LODIndex = (schar)param_1;
  param_4->VisualizeLODIndex = (schar)param_1;
  param_4->VisualizeHLODIndex = this->HierarchicalLODIndex;
  if ((((this->bReverseCulling ^ (uint)(byte)this->field_0x78) & 1) != 0) && (!bVar8)) {
    uVar14 = 1;
  }
  uVar14 = *(uint *)&param_4->field_0xd4 & 0xfffffc7e | uVar14;
  param_4->LCI = pFVar17;
  *(uint *)&param_4->field_0xd4 = ((uint)param_3 << 10 ^ uVar14) & 0x1c00 ^ uVar14;
  pUVar12 = UMaterial::GetDefaultMaterial(MD_Surface);
  pFVar13 = (FMaterialRenderProxy *)(**(code **)(pUVar12->_padding_ + 0x310))(pUVar12);
  param_4->bUseForMaterial = 0;
  param_4->bUseAsOccluder = 0;
  param_4->bUseForDepthPass = 0;
  param_4->MaterialRenderProxy = pFVar13;
  SetMeshElementScreenSize(this,param_1,param_5,param_4);
  return true;
}

// GetStaticRayTracingGeometries @ 1487a5220

TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> * __thiscall
FStaticMeshSceneProxy::GetStaticRayTracingGeometries
          (FStaticMeshSceneProxy *this,
          TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FStaticMeshRayTracingProxy *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ForAnyElementType local_28;
  int local_20 [2];
  
  uVar10 = 0;
  if (!this->bSupportRayTracing) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar1 = this->RenderData->RayTracingProxy;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  iVar8 = (pFVar1->LODs).Array.ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar8,&local_28,local_20,local_20 + 1);
  memset(local_28.Data + (longlong)iVar5 * 8,0,(longlong)iVar8 << 3);
  iVar8 = (pFVar1->LODs).Array.ArrayNum;
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      uVar2 = *(undefined8 *)
               (*(longlong *)((pFVar1->LODs).Array.AllocatorInstance.Data + uVar11) + 8);
      uVar6 = 0;
      if ((int)uVar9 < local_20[0]) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      *(undefined8 *)(local_28.Data + uVar11) = uVar2;
      iVar8 = (pFVar1->LODs).Array.ArrayNum;
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = local_20[0];
  __return_storage_ptr__->ArrayMax = local_20[1];
  return __return_storage_ptr__;
}

// GetStreamableRenderAssetInfo @ 1487a59d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::GetStreamableRenderAssetInfo
          (FStaticMeshSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  TObjectPtr<UStreamableRenderAsset>_u_0 *pTVar3;
  longlong *plVar4;
  UStaticMesh *this_00;
  code *pcVar5;
  UMaterialInterface *pUVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  Type TVar9;
  bool bVar10;
  bool bVar11;
  EStreamableRenderAssetType EVar12;
  int iVar13;
  ulonglong uVar14;
  FMeshUVChannelInfo *pFVar15;
  FLightMap2D *this_01;
  FShadowMap2D *this_02;
  FStaticMeshRenderData *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  undefined1 local_res20 [8];
  undefined1 local_288 [4];
  uint local_284;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  FPrimitiveMaterialInfo local_268;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  float local_210;
  undefined4 local_20c;
  uint local_208;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  float local_1c0;
  undefined4 local_1bc;
  uint local_1b8;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  float local_170;
  undefined4 local_16c;
  uint local_168;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  float local_120;
  undefined4 local_11c;
  uint local_118;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  float local_d0;
  undefined4 local_cc;
  uint local_c8;
  FStreamingTextureLevelContext local_b8;
  
  TVar9 = GetCurrentMaterialQualityLevelChecked();
  FStreamingTextureLevelContext::FStreamingTextureLevelContext
            (&local_b8,TVar9,(ULevel *)0x0,
             (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0);
  fVar7 = __real_3f800000;
  dVar23 = __real_3e45798ee0000000;
  local_284 = (this->LODs).ArrayNum;
  uVar14 = (ulonglong)(int)local_284;
  pFVar17 = (this->LODs).AllocatorInstance.Data;
  local_270 = pFVar17 + uVar14 * 0x80;
  local_b8.bForceNoUseBuiltData = true;
  pFVar18 = pFVar17 + 0x50;
  do {
    pFVar1 = local_270;
    local_280 = pFVar17;
    local_278 = pFVar18;
    if ((this->LODs).ArrayNum != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FStaticMeshSceneProxy::FLODInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar17 == pFVar1) {
      this_00 = this->StaticMesh;
      if ((((this_00->_padding_ & 1) != 0) &&
          (*(byte *)((longlong)&this_00->_padding_ + 1) <
           *(byte *)((longlong)&this_00->_padding_ + 3))) &&
         (EVar12 = UStaticMesh::GetRenderAssetType(this_00), EVar12 == StaticMesh)) {
        if (this->ForcedLodModel < 1) {
          dVar23 = param_1->SphereRadius + param_1->SphereRadius;
        }
        else {
          pFVar16 = UStaticMesh::GetRenderData(this->StaticMesh);
          dVar23 = (double)((this->ForcedLodModel - (pFVar16->LODResources).Array.ArrayNum) + -1);
        }
        local_110 = (TObjectPtr<UStreamableRenderAsset>_u_0)this->StaticMesh;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UStaticMesh *)local_110.DebugPtr != (UStaticMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_110.DebugPtr);
        }
        local_108 = (param_1->Origin).field0_0x0._s_0.X;
        dStack_100 = (param_1->Origin).field0_0x0._s_0.Y;
        pTVar3 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
        local_f8 = (param_1->Origin).field0_0x0._s_0.Z;
        dStack_f0 = (param_1->BoxExtent).field0_0x0._s_0.X;
        local_c8 = local_c8 & 0xfffffffd | 1;
        local_cc = 0xffff0000;
        local_e8 = (param_1->BoxExtent).field0_0x0._s_0.Y;
        dStack_e0 = (param_1->BoxExtent).field0_0x0._s_0.Z;
        local_d8 = param_1->SphereRadius;
        local_d0 = (float)dVar23;
        if (((pTVar3 <= &local_110) && (&local_110 < pTVar3 + (longlong)param_2->ArrayMax * 10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                  ((FStreamingRenderAssetPrimitiveInfo *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x50),
                   (FStreamingRenderAssetPrimitiveInfo *)&local_110.ObjectPtr);
      }
      FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_b8);
      return;
    }
    pFVar17 = *(FScriptContainerElement **)(pFVar18 + -8);
    iVar13 = *(int *)pFVar18;
    if (pFVar17 == (FScriptContainerElement *)0x0) {
      pFVar17 = pFVar18 + -0x20;
    }
    pFVar1 = pFVar17 + (longlong)iVar13 * 0x18;
    while( true ) {
      if (*(int *)pFVar18 != iVar13) {
        local_288[0] = 0;
        `TCheckedPointerIterator<FStaticMeshSceneProxy::FLODInfo::FSectionInfo_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_288);
      }
      pFVar8 = local_278;
      if (pFVar17 == pFVar1) break;
      pUVar6 = *(UMaterialInterface **)pFVar17;
      local_268._16_8_ = *(undefined8 *)(pFVar17 + 0x10);
      if (pUVar6 != (UMaterialInterface *)0x0) {
        pFVar15 = UStaticMesh::GetUVChannelData(this->StaticMesh,(int)*(longlong *)(pFVar17 + 8));
        local_268.UVChannelData = &Fallback;
        if (pFVar15 != (FMeshUVChannelInfo *)0x0) {
          local_268.UVChannelData = pFVar15;
        }
        local_268.PackedRelativeBox = 0xffff0000;
        local_268.Material = pUVar6;
        FStreamingTextureLevelContext::ProcessMaterial
                  (&local_b8,param_1,&local_268,fVar7,param_2,false,(UPrimitiveComponent *)0x0);
      }
      pFVar17 = pFVar17 + 0x18;
    }
    if ((*(longlong **)(local_278 + -0x40) != (longlong *)0x0) &&
       (this_01 = (FLightMap2D *)(**(code **)(**(longlong **)(local_278 + -0x40) + 0x28))(),
       this_01 != (FLightMap2D *)0x0)) {
      bVar10 = AllowHighQualityLightmaps
                         ((FGenericStaticFeatureLevel)*(Type *)(*(longlong *)&this->field_0x220 + 8)
                         );
      bVar11 = FLightMap2D::IsValid(this_01,bVar10 ^ 1);
      if ((bVar11) &&
         ((dVar21 = (this_01->CoordinateScale).field0_0x0._s_0.X, dVar23 < dVar21 &&
          (dVar2 = (this_01->CoordinateScale).field0_0x0._s_0.Y, dVar23 < dVar2)))) {
        if (dVar2 <= dVar21) {
          dVar21 = dVar2;
        }
        fVar22 = (float)((double)this->StaticMesh->LightmapUVDensity / dVar21);
        local_250.DebugPtr = (UStreamableRenderAsset *)FLightMap2D::GetTexture(this_01,bVar10 ^ 1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UTexture2D *)local_250.DebugPtr != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_250.DebugPtr);
        }
        local_248 = (param_1->Origin).field0_0x0._s_0.X;
        dStack_240 = (param_1->Origin).field0_0x0._s_0.Y;
        pTVar3 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
        local_238 = (param_1->Origin).field0_0x0._s_0.Z;
        dStack_230 = (param_1->BoxExtent).field0_0x0._s_0.X;
        local_208 = local_208 & 0xfffffffe | 2;
        local_20c = 0xffff0000;
        local_228 = (param_1->BoxExtent).field0_0x0._s_0.Y;
        dStack_220 = (param_1->BoxExtent).field0_0x0._s_0.Z;
        local_218 = param_1->SphereRadius;
        local_210 = fVar22;
        if (((pTVar3 <= &local_250) && (&local_250 < pTVar3 + (longlong)param_2->ArrayMax * 10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                  ((FStreamingRenderAssetPrimitiveInfo *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x50),
                   (FStreamingRenderAssetPrimitiveInfo *)&local_250.ObjectPtr);
        local_200.DebugPtr =
             (UStreamableRenderAsset *)FLightMap2D::GetAOMaterialMaskTexture(this_01);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UTexture2D *)local_200.DebugPtr != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_200.DebugPtr);
        }
        local_1f8 = (param_1->Origin).field0_0x0._s_0.X;
        dStack_1f0 = (param_1->Origin).field0_0x0._s_0.Y;
        pTVar3 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
        local_1e8 = (param_1->Origin).field0_0x0._s_0.Z;
        dStack_1e0 = (param_1->BoxExtent).field0_0x0._s_0.X;
        local_1b8 = local_1b8 & 0xfffffffe | 2;
        local_1bc = 0xffff0000;
        local_1d8 = (param_1->BoxExtent).field0_0x0._s_0.Y;
        dStack_1d0 = (param_1->BoxExtent).field0_0x0._s_0.Z;
        local_1c8 = param_1->SphereRadius;
        local_1c0 = fVar22;
        if (((pTVar3 <= &local_200) && (&local_200 < pTVar3 + (longlong)param_2->ArrayMax * 10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                  ((FStreamingRenderAssetPrimitiveInfo *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x50),
                   (FStreamingRenderAssetPrimitiveInfo *)&local_200.ObjectPtr);
        local_1b0.DebugPtr = (UStreamableRenderAsset *)FLightMap2D::GetSkyOcclusionTexture(this_01);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UTexture2D *)local_1b0.DebugPtr != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1b0.DebugPtr);
        }
        local_1a8 = (param_1->Origin).field0_0x0._s_0.X;
        dStack_1a0 = (param_1->Origin).field0_0x0._s_0.Y;
        pTVar3 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
        local_198 = (param_1->Origin).field0_0x0._s_0.Z;
        dStack_190 = (param_1->BoxExtent).field0_0x0._s_0.X;
        local_168 = local_168 & 0xfffffffe | 2;
        local_16c = 0xffff0000;
        local_188 = (param_1->BoxExtent).field0_0x0._s_0.Y;
        dStack_180 = (param_1->BoxExtent).field0_0x0._s_0.Z;
        local_178 = param_1->SphereRadius;
        local_170 = fVar22;
        if (((pTVar3 <= &local_1b0) && (&local_1b0 < pTVar3 + (longlong)param_2->ArrayMax * 10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                  ((FStreamingRenderAssetPrimitiveInfo *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x50),
                   (FStreamingRenderAssetPrimitiveInfo *)&local_1b0.ObjectPtr);
      }
    }
    plVar4 = *(longlong **)(pFVar8 + -0x38);
    if ((plVar4 != (longlong *)0x0) &&
       (this_02 = (FShadowMap2D *)(**(code **)(*plVar4 + 0x20))(), this_02 != (FShadowMap2D *)0x0))
    {
      if (((this_02->Texture).field0_0x0.DebugPtr == (UShadowMapTexture2D *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                              ,0x156,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar21 = (this_02->CoordinateScale).field0_0x0._s_0.X;
      dVar2 = (this_02->CoordinateScale).field0_0x0._s_0.Y;
      uVar19 = SUB84(dVar21,0);
      uVar20 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (dVar2 <= dVar21) {
        uVar19 = SUB84(dVar2,0);
        uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      fVar22 = (float)((double)this->StaticMesh->LightmapUVDensity / (double)CONCAT44(uVar20,uVar19)
                      );
      if ((dVar23 < dVar21) && (dVar23 < dVar2)) {
        local_160.DebugPtr = (UStreamableRenderAsset *)FShadowMap2D::GetTexture(this_02);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UTexture2D *)local_160.DebugPtr != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_160.DebugPtr);
        }
        local_158 = (param_1->Origin).field0_0x0._s_0.X;
        dStack_150 = (param_1->Origin).field0_0x0._s_0.Y;
        pTVar3 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
        local_148 = (param_1->Origin).field0_0x0._s_0.Z;
        dStack_140 = (param_1->BoxExtent).field0_0x0._s_0.X;
        local_118 = local_118 & 0xfffffffe | 2;
        local_11c = 0xffff0000;
        local_138 = (param_1->BoxExtent).field0_0x0._s_0.Y;
        dStack_130 = (param_1->BoxExtent).field0_0x0._s_0.Z;
        local_128 = param_1->SphereRadius;
        local_120 = fVar22;
        if (((pTVar3 <= &local_160) && (&local_160 < pTVar3 + (longlong)param_2->ArrayMax * 10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                  ((FStreamingRenderAssetPrimitiveInfo *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x50),
                   (FStreamingRenderAssetPrimitiveInfo *)&local_160.ObjectPtr);
      }
    }
    pFVar17 = local_280 + 0x80;
    uVar14 = (ulonglong)local_284;
    pFVar18 = pFVar8 + 0x80;
  } while( true );
}

// GetTypeHash @ 1487a6700

ulong64 __thiscall FStaticMeshSceneProxy::GetTypeHash(FStaticMeshSceneProxy *this)

{
  return 0x155249c68;
}

// GetViewRelevance @ 1487a6860

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

FPrimitiveViewRelevance * __thiscall
FStaticMeshSceneProxy::GetViewRelevance
          (FStaticMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FSceneViewFamily *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FStaticShaderPlatform FVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar5 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar10 = 0;
  if ((!bVar5) || (uVar8 = 4, (param_1->Family->EngineShowFlags).StaticMeshes == 0)) {
    uVar8 = uVar10;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar8;
  bVar5 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 5;
  uVar9 = ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar9;
  uVar8 = -(uint)((this->field_0x7b & 0xc) != 0) & 0x40;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar8 | uVar9 & 0xffffffbf;
  if (this->field_0x89 != '\x01') {
    uVar10 = 0x2000;
  }
  uVar10 = uVar10 | uVar8 | uVar9 & 0xffffdfbf;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar10;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)(byte)this->field_0x7f << 0xe ^ uVar10) & 0x4000 ^ uVar10;
  bVar5 = FReadOnlyCVARCache::bAllowStaticLighting;
  if (((param_1->Family->EngineShowFlags).CollisionVisibility == 0) &&
     ((param_1->Family->EngineShowFlags).CollisionPawn == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar6 = IsRichView(param_1->Family);
  if (((((((bVar6) || (pFVar3 = param_1->Family, (pFVar3->EngineShowFlags).Collision != 0)) ||
         (bVar4)) ||
        (((pFVar3->EngineShowFlags).Bounds != 0 ||
         ((pFVar3->EngineShowFlags).VisualizeInstanceUpdates != 0)))) ||
       (this->bDrawMeshCollisionIfComplex != 0 || this->bDrawMeshCollisionIfSimple != 0)) ||
      (((bVar5 != false && ((this->field_0x7a & 0x40) != 0)) && (-1 < (char)this->field_0x7c)))) ||
     ((this->field_0x79 & 0x20) != 0)) {
    uVar10 = *(uint *)&__return_storage_ptr__->field_0x8;
    __return_storage_ptr__->bDynamicRelevance = 1;
    if (((param_1->Family->EngineShowFlags).Collision != 0) || (bVar4)) {
      *(uint *)&__return_storage_ptr__->field_0x8 = uVar10 | 6;
    }
  }
  else {
    __return_storage_ptr__->bStaticRelevance = 1;
  }
  bVar5 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = bVar5;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  if (((param_1->Family->EngineShowFlags).Materials == 0) || (bVar4)) {
    pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    *pbVar1 = *pbVar1 | 4;
  }
  FVar7.Platform = FSceneView::GetShaderPlatform(param_1);
  bVar5 = VelocityIncludeStationaryPrimitives(FVar7);
  if (((((bVar5) || (this->field_0x68 == '\x02')) || (this->field_0x68 == '\x01')) ||
      ((((this->field_0x86 & 1) != 0 || ((char)this->field_0x82 < '\0')) ||
       (uVar10 = 0, (this->field_0x82 & 0x72) != 0)))) &&
     ((uVar10 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar10 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar10 >> 4;
  return __return_storage_ptr__;
}

// GetWireframeMeshElement @ 1487a6ac0

bool __thiscall
FStaticMeshSceneProxy::GetWireframeMeshElement
          (FStaticMeshSceneProxy *this,int param_1,int param_2,FMaterialRenderProxy *param_3,
          uchar param_4,bool param_5,FMeshBatch *param_6)

{
  uchar *puVar1;
  FStaticMeshRenderData *pFVar2;
  FStaticMeshRenderData *pFVar3;
  FStaticMeshLODResources *this_00;
  FScriptContainerElement *pFVar4;
  ForElementType<FMeshBatchElement> FVar5;
  FAdditionalStaticMeshIndexBuffers *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  FStaticMeshSection *pFVar13;
  uint uVar14;
  FVertexFactory *pFVar15;
  longlong lVar16;
  ForElementType<FMeshBatchElement> FVar17;
  
  pFVar2 = this->RenderData;
  lVar16 = (longlong)param_1;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar12 = 0;
  if (param_1 < (pFVar2->LODResources).Array.ArrayNum) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  pFVar3 = this->RenderData;
  this_00 = *(FStaticMeshLODResources **)
             ((pFVar2->LODResources).Array.AllocatorInstance.Data + lVar16 * 8);
  uVar12 = 0;
  if (param_1 < (pFVar3->LODVertexFactories).ArrayNum) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  pFVar15 = (FVertexFactory *)((pFVar3->LODVertexFactories).AllocatorInstance.Data + lVar16 * 0x470)
  ;
  uVar12 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  pFVar4 = (this->LODs).AllocatorInstance.Data;
  if ((param_6->Elements).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  FVar5 = (param_6->Elements).AllocatorInstance.SecondaryData;
  FVar17 = (ForElementType<FMeshBatchElement>)param_6;
  if (FVar5 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar17 = FVar5;
  }
  if (*(longlong *)(pFVar4 + lVar16 * 0x80 + 0x58) == 0) {
    uVar11._0_4_ = pFVar15[1].PositionStream.ArrayNum;
    uVar11._4_4_ = pFVar15[1].PositionStream.ArrayMax;
  }
  else {
    uVar11 = *(undefined8 *)(pFVar4 + lVar16 * 0x80 + 0x60);
    pFVar15 = (FVertexFactory *)
              (pFVar15[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10);
  }
  *(undefined8 *)((longlong)FVar17 + 0x40) = uVar11;
  uVar14 = (uint)(byte)this->field_0x78 ^ this->bReverseCulling;
  uVar12 = uVar14 & 1 | *(uint *)&param_6->field_0xd4 & 0xfffffffe;
  param_6->ReverseCulling = uVar14;
  iVar10 = *(int *)&this->field_0xb10;
  param_6->MaterialRenderProxy = param_3;
  uVar12 = (iVar10 << 2 ^ uVar12) & 4 ^ uVar12;
  *(uint *)&param_6->field_0xd4 = ((uint)param_4 << 10 ^ uVar12) & 0x1c00 ^ uVar12;
  puVar1 = (uchar *)((longlong)FVar17 + 0x68);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  iVar10 = FStaticMeshLODResources::GetNumVertices(this_00);
  *(int *)((longlong)FVar17 + 0x6c) = iVar10 + -1;
  pFVar6 = this_00->AdditionalIndexBuffers;
  if (*(int *)&(this_00->Sections).field_0x28 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  pFVar13 = *(FStaticMeshSection **)&(this_00->Sections).field_0x20;
  if (pFVar13 == (FStaticMeshSection *)0x0) {
    pFVar13 = (FStaticMeshSection *)&this_00->Sections;
  }
  uVar12 = SetMeshElementGeometrySource
                     (this,pFVar13,&this_00->IndexBuffer,pFVar6,pFVar15,true,false,param_6);
  SetMeshElementScreenSize(this,param_1,false,param_6);
  return uVar12 != 0;
}

// HasDistanceFieldRepresentation @ 1487ab270

bool __thiscall FStaticMeshSceneProxy::HasDistanceFieldRepresentation(FStaticMeshSceneProxy *this)

{
  if (((this->field_0x7d & 0x22) == 0x22) &&
     (this->DistanceFieldData != (FDistanceFieldVolumeData *)0x0)) {
    return true;
  }
  return false;
}

// HasDynamicIndirectShadowCasterRepresentation @ 1487ab290

bool __thiscall
FStaticMeshSceneProxy::HasDynamicIndirectShadowCasterRepresentation(FStaticMeshSceneProxy *this)

{
  if ((((this->field_0x7f & 0x10) != 0) && ((this->field_0x7d & 0x22) == 0x22)) &&
     (this->DistanceFieldData != (FDistanceFieldVolumeData *)0x0)) {
    return true;
  }
  return false;
}

// HasRayTracingRepresentation @ 1487ab420

bool __thiscall FStaticMeshSceneProxy::HasRayTracingRepresentation(FStaticMeshSceneProxy *this)

{
  return this->bHasRayTracingRepresentation;
}

// IsCollisionView @ 1487aec70

bool __thiscall
FStaticMeshSceneProxy::IsCollisionView
          (FStaticMeshSceneProxy *this,FEngineShowFlags *param_1,bool *param_2,bool *param_3)

{
  undefined1 *puVar1;
  ECollisionTraceFlag *pEVar2;
  bool bVar3;
  bool bVar4;
  
  *param_3 = false;
  *param_2 = false;
  if ((param_1->CollisionVisibility == 0) && (param_1->CollisionPawn == 0)) {
    return false;
  }
  if ((this->field_0x7b & 0x20) != 0) {
    if ((param_1->CollisionPawn == 0) || ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((param_1->CollisionVisibility == 0) ||
       ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar4 || bVar3) {
      pEVar2 = &this->CollisionTraceFlag;
      if (((param_1->CollisionVisibility == 0) || (*pEVar2 == CTF_UseSimpleAsComplex)) &&
         ((param_1->CollisionPawn == 0 || (*pEVar2 != CTF_UseComplexAsSimple)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      *param_3 = bVar4;
      if (((param_1->CollisionPawn != 0) && (*pEVar2 != CTF_UseComplexAsSimple)) ||
         ((param_1->CollisionVisibility != 0 && (*pEVar2 == CTF_UseSimpleAsComplex)))) {
        *param_2 = true;
        return true;
      }
      *param_2 = false;
    }
  }
  return true;
}

// IsReversedCullingNeeded @ 1487af420

bool __thiscall
FStaticMeshSceneProxy::IsReversedCullingNeeded(FStaticMeshSceneProxy *this,bool param_1)

{
  if ((((this->bReverseCulling ^ (uint)(byte)this->field_0x78) & 1) != 0) && (!param_1)) {
    return true;
  }
  return false;
}

// IsUsingDistanceCullFade @ 1487af7a0

bool __thiscall FStaticMeshSceneProxy::IsUsingDistanceCullFade(FStaticMeshSceneProxy *this)

{
  return (bool)(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 1 & 1);
}

// OnEvaluateWorldPositionOffsetChanged_RenderThread @ 1487b12e0

void __thiscall
FStaticMeshSceneProxy::OnEvaluateWorldPositionOffsetChanged_RenderThread
          (FStaticMeshSceneProxy *this)

{
  bool bVar1;
  IRendererModule *pIVar2;
  
  bVar1 = ShouldOptimizedWPOAffectNonNaniteShaderSelection();
  if (bVar1) {
    pIVar2 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x0001487b1310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x248))
              (pIVar2,*(undefined8 *)&this->field_0x228,*(code **)((longlong)*pIVar2 + 0x248));
    return;
  }
  return;
}

// ReleaseDynamicRayTracingGeometries @ 1487b6f00

void __thiscall
FStaticMeshSceneProxy::ReleaseDynamicRayTracingGeometries(FStaticMeshSceneProxy *this)

{
  TArray<FRayTracingGeometry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<FRayTracingGeometry> FVar6;
  ForElementType<FRayTracingGeometry> FVar7;
  undefined1 local_res8 [8];
  
  if (this->bCreateDynamicRayTracingGeometries) {
    if ((((this->DynamicRayTracingGeometries).ArrayNum != 0) && (!this->bDynamicRayTracingGeometry))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("DynamicRayTracingGeometries.IsEmpty() || bDynamicRayTracingGeometry",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                              ,0x3ba,
                              L"Proxy shouldn\'t have DynamicRayTracingGeometries since bDynamicRayTracingGeometry is false."
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar3 = (this->DynamicRayTracingGeometries).ArrayNum;
    pTVar1 = &this->DynamicRayTracingGeometries;
    FVar6 = (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FRayTracingGeometry>)0x0) {
      FVar6 = (ForElementType<FRayTracingGeometry>)pTVar1;
    }
    FVar7 = (ForElementType<FRayTracingGeometry>)((longlong)iVar3 * 0x100 + (longlong)FVar6);
    while( true ) {
      if ((this->DynamicRayTracingGeometries).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FRayTracingGeometry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar6 == FVar7) break;
      (**(code **)(*(longlong *)FVar6 + 0x20))(FVar6);
      FVar6 = (ForElementType<FRayTracingGeometry>)((longlong)FVar6 + 0x100);
    }
    FVar6 = (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FRayTracingGeometry>)0x0) {
      FVar6 = (ForElementType<FRayTracingGeometry>)pTVar1;
    }
    DestructItems<FRayTracingGeometry,int>
              ((FRayTracingGeometry *)FVar6,(this->DynamicRayTracingGeometries).ArrayNum);
    piVar2 = &(this->DynamicRayTracingGeometries).ArrayMax;
    (this->DynamicRayTracingGeometries).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRayTracingGeometry>_>
                (0x100,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  return;
}

// RemoveSpeedTreeWind @ 1487ba1e0

void __thiscall FStaticMeshSceneProxy::RemoveSpeedTreeWind(FStaticMeshSceneProxy *this)

{
  longlong *plVar1;
  code *pcVar2;
  UStaticMesh *pUVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FStaticMeshRenderData *pFVar7;
  
  if ((((this->StaticMesh != (UStaticMesh *)0x0) &&
       (pFVar7 = this->RenderData, pFVar7 != (FStaticMeshRenderData *)0x0)) &&
      ((this->StaticMesh->SpeedTreeWind).Object != (FSpeedTreeWind *)0x0)) &&
     (uVar6 = 0, 0 < (pFVar7->LODVertexFactories).ArrayNum)) {
    do {
      plVar1 = *(longlong **)&this->field_0x220;
      pcVar2 = *(code **)(*plVar1 + 0x3b8);
      pUVar3 = this->StaticMesh;
      uVar5 = 0;
      if ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(plVar1,(pFVar7->LODVertexFactories).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 0x470 + 0x230,pUVar3);
      plVar1 = *(longlong **)&this->field_0x220;
      pFVar7 = this->RenderData;
      pcVar2 = *(code **)(*plVar1 + 0x3b8);
      pUVar3 = this->StaticMesh;
      uVar5 = 0;
      if ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(plVar1,(pFVar7->LODVertexFactories).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 0x470,pUVar3);
      pFVar7 = this->RenderData;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (pFVar7->LODVertexFactories).ArrayNum);
  }
  return;
}

// SetEvaluateWorldPositionOffsetInRayTracing @ 1487c1e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshSceneProxy::SetEvaluateWorldPositionOffsetInRayTracing
          (FStaticMeshSceneProxy *this,FRHICommandListBase *param_1,bool param_2)

{
  byte bVar1;
  char local_res8 [8];
  byte local_res20 [8];
  
  if (this->bSupportRayTracing) {
    if ((((this->field_0x82 & 1) == 0) ||
        ((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5) & 0x40) == 0)) ||
       (!param_2)) {
      local_res8[0] = '\0';
      bVar1 = this->field_0x2d8 | 2;
    }
    else {
      (**(code **)(*(longlong *)this + 0x290))(this,local_res20,local_res8);
      bVar1 = (local_res20[0] & 1) * '\x02' | this->field_0x2d8 & 0xfd;
    }
    this->field_0x2d8 = bVar1;
    if ((bVar1 & 8) == 0) {
      if (local_res8[0] != '\0') {
        this->field_0x2d8 = (local_res8[0] << 3 ^ bVar1) & 8 ^ bVar1;
        CreateDynamicRayTracingGeometries(this,param_1);
      }
    }
    else if (local_res8[0] == '\0') {
      ReleaseDynamicRayTracingGeometries(this);
      this->bDynamicRayTracingGeometry = false;
    }
    (**(code **)(**(longlong **)&this->field_0x220 + 0x4f8))(*(longlong **)&this->field_0x220,this);
  }
  return;
}

// SetMeshElementGeometrySource @ 1487c2bd0

uint __thiscall
FStaticMeshSceneProxy::SetMeshElementGeometrySource
          (FStaticMeshSceneProxy *this,FStaticMeshSection *param_1,FRawStaticIndexBuffer *param_2,
          FAdditionalStaticMeshIndexBuffers *param_3,FVertexFactory *param_4,bool param_5,
          bool param_6,FMeshBatch *param_7)

{
  uchar *puVar1;
  undefined1 *puVar2;
  ForElementType<FMeshBatchElement> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FMeshBatchElement> FVar8;
  
  if (param_1->NumTriangles == 0) {
    return 0;
  }
  if ((param_7->Elements).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  FVar3 = (param_7->Elements).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMeshBatchElement>)param_7;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar8 = FVar3;
  }
  if (param_5) {
    if ((param_3 == (FAdditionalStaticMeshIndexBuffers *)0x0) ||
       ((int)(param_3->WireframeIndexBuffer)._padding_ == -1)) {
      param_7->Type = 0;
      puVar1 = (uchar *)((longlong)FVar8 + 0x58);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      *(FRawStaticIndexBuffer **)((longlong)FVar8 + 0x18) = param_2;
      iVar7 = param_2->CachedNumIndices;
      if (iVar7 < 0) {
        iVar7 = (int)(param_2->IndexStorage)._padding_;
        if (param_2->b32Bit == false) {
          iVar7 = iVar7 / 2;
        }
        else {
          iVar7 = (int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2;
        }
      }
      uVar6 = iVar7 / 3 + (iVar7 >> 0x1f) +
              (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
      param_7->bDisableBackfaceCulling = 1;
      param_7->bWireframe = 1;
    }
    else {
      *(uint *)&param_7->field_0xd4 = *(uint *)&param_7->field_0xd4 & 0xfffffd7f;
      *(uint *)&param_7->field_0xd4 = *(uint *)&param_7->field_0xd4 | 0x100;
      puVar1 = (uchar *)((longlong)FVar8 + 0x58);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      *(FRawStaticIndexBuffer **)((longlong)FVar8 + 0x18) = &param_3->WireframeIndexBuffer;
      iVar7 = (param_3->WireframeIndexBuffer).CachedNumIndices;
      if (iVar7 < 0) {
        iVar7 = (int)(param_3->WireframeIndexBuffer).IndexStorage._padding_;
        if ((param_3->WireframeIndexBuffer).b32Bit != false) {
          uVar6 = ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2) / 2;
          goto LAB_1487c2d3b;
        }
        iVar7 = iVar7 / 2;
      }
      uVar6 = iVar7 / 2;
    }
  }
  else {
    param_7->Type = 0;
    if (!param_6) {
      param_3 = (FAdditionalStaticMeshIndexBuffers *)param_2;
    }
    *(FAdditionalStaticMeshIndexBuffers **)((longlong)FVar8 + 0x18) = param_3;
    *(uint *)((longlong)FVar8 + 0x58) = param_1->FirstIndex;
    uVar6 = param_1->NumTriangles;
  }
LAB_1487c2d3b:
  *(uint *)((longlong)FVar8 + 0x5c) = uVar6;
  param_7->VertexFactory = param_4;
  return uVar6;
}

// SetMeshElementGeometrySource @ 1487c2d70

uint __thiscall
FStaticMeshSceneProxy::SetMeshElementGeometrySource
          (FStaticMeshSceneProxy *this,int param_1,int param_2,bool param_3,bool param_4,
          bool param_5,FVertexFactory *param_6,FMeshBatch *param_7)

{
  FStaticMeshRenderData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  pFVar1 = this->RenderData;
  uVar5 = 0;
  if (param_1 < (pFVar1->LODResources).Array.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  lVar2 = *(longlong *)((pFVar1->LODResources).Array.AllocatorInstance.Data + (longlong)param_1 * 8)
  ;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar2 + 0x38)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  lVar6 = *(longlong *)(lVar2 + 0x30);
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    lVar6 = lVar2 + 0x10;
  }
  uVar5 = SetMeshElementGeometrySource
                    (this,(FStaticMeshSection *)(lVar6 + (longlong)param_2 * 0x1c),
                     (FRawStaticIndexBuffer *)(lVar2 + 0x228),
                     *(FAdditionalStaticMeshIndexBuffers **)(lVar2 + 0x2c8),param_6,param_3,param_4,
                     param_7);
  return uVar5;
}

// SetMeshElementScreenSize @ 1487c2ec0

void __thiscall
FStaticMeshSceneProxy::SetMeshElementScreenSize
          (FStaticMeshSceneProxy *this,int param_1,bool param_2,FMeshBatch *param_3)

{
  uchar *puVar1;
  float fVar2;
  ForElementType<FMeshBatchElement> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FMeshBatchElement> FVar7;
  float fVar8;
  
  if (((param_3->Elements).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (param_3->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMeshBatchElement>)param_3;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar7 = FVar3;
  }
  uVar6 = *(uint *)&param_3->field_0xd4 & 0xfffdffff;
  if (this->ForcedLodModel < 1) {
    *(uint *)&param_3->field_0xd4 = (uint)param_2 << 0x11 | uVar6;
    fVar2 = this->RenderData->ScreenSize[param_1].Default;
    fVar8 = (float)(**(code **)(*(longlong *)this + 0x210))(this);
    puVar1 = (uchar *)((longlong)FVar7 + 0x74);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    *(float *)((longlong)FVar7 + 0x78) = fVar8 * fVar2;
    if (param_1 < 7) {
      fVar2 = this->RenderData->ScreenSize[(longlong)param_1 + 1].Default;
      fVar8 = (float)(**(code **)(*(longlong *)this + 0x210))(this);
      *(float *)((longlong)FVar7 + 0x74) = fVar8 * fVar2;
    }
  }
  else {
    *(uint *)&param_3->field_0xd4 = uVar6;
    puVar1 = (uchar *)((longlong)FVar7 + 0x78);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = (uchar *)((longlong)FVar7 + 0x74);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = 0x80;
    puVar1[3] = 0xbf;
  }
  return;
}

// ShouldEvaluateWPOInRayTracing @ 1487c3c10

bool __thiscall
FStaticMeshSceneProxy::ShouldEvaluateWPOInRayTracing
          (FStaticMeshSceneProxy *this,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  
  pTVar3 = CVarRayTracingStaticMeshesWPOCulling.Ref;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar1 = (code *)swi(3);
    bVar5 = (bool)(*pcVar1)();
    return bVar5;
  }
  pTVar4 = CVarRayTracingStaticMeshesWPOCullingRadius.Ref;
  if (0 < pTVar3->ShadowedValue[1]) {
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar1 = (code *)swi(3);
      bVar5 = (bool)(*pcVar1)();
      return bVar5;
    }
    dVar6 = dVar6 - *(double *)&this->field_0x1a0;
    dVar7 = dVar7 - *(double *)&this->field_0x190;
    dVar2 = dVar2 - *(double *)&this->field_0x198;
    if ((double)pTVar4->ShadowedValue[1] + *(double *)&this->field_0x1c0 <
        SQRT(dVar2 * dVar2 + dVar7 * dVar7 + dVar6 * dVar6)) {
      return false;
    }
  }
  return true;
}

// ShouldRenderBackFaces @ 1487c3da0

bool __thiscall FStaticMeshSceneProxy::ShouldRenderBackFaces(FStaticMeshSceneProxy *this)

{
  return (bool)((this->bReverseCulling ^ this->field_0x78) & 1);
}

// StaticMeshHasPendingStreaming @ 1487c5750

bool __thiscall FStaticMeshSceneProxy::StaticMeshHasPendingStreaming(FStaticMeshSceneProxy *this)

{
  if ((this->StaticMesh != (UStaticMesh *)0x0) && ((this->StaticMesh->_padding_ & 4) != 0)) {
    return true;
  }
  return false;
}

// operator() @ 150530c80

bool __thiscall
`FStaticMeshSceneProxy::GetDynamicRayTracingInstances'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8619905079949916100>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8619905079949916100>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150530cc0

bool __thiscall `FStaticMeshSceneProxy::GetLOD'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8619905079949915423>);
  if (bVar2) {
    bVar4 = *(longlong *)(*(longlong *)this + 0xb28) != 0;
    if (bVar4) {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0xb28) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8619905079949915423>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150530d48;
    }
  }
  bVar2 = false;
LAB_150530d48:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// operator() @ 150530d80

bool __thiscall `FStaticMeshSceneProxy::GetLODMask'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8619905079949915390>);
  if (bVar2) {
    bVar4 = *(longlong *)(*(longlong *)this + 0xb28) != 0;
    if (bVar4) {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0xb28) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8619905079949915390>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150530e08;
    }
  }
  bVar2 = false;
LAB_150530e08:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// operator() @ 150530f90

bool __thiscall
`FStaticMeshSceneProxy::FStaticMeshSceneProxy'::__l47::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8619905079949917828>);
  if (bVar2) {
    bVar4 = *(longlong *)(*(longlong *)this + 0xb28) != 0;
    if (bVar4) {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0xb28) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8619905079949917828>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531018;
    }
  }
  bVar2 = false;
LAB_150531018:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

