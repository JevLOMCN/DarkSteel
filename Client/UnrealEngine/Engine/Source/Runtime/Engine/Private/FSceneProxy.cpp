// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 43

// FSceneProxy @ 1483e57c0

FSceneProxy * __thiscall
Nanite::FSceneProxy::FSceneProxy
          (FSceneProxy *this,FMaterialAudit *param_1,FInstancedStaticMeshSceneProxyDesc *param_2)

{
  byte *pbVar1;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FSceneProxy(this,param_1,(FStaticMeshSceneProxyDesc *)param_2,&param_2->InstanceDataSceneProxy);
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  this->MinDrawDistance = param_2->InstanceMinDrawDistance;
  this->EndCullDistance = param_2->InstanceEndCullDistance;
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// FSceneProxy @ 1483e5870

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSceneProxy * __thiscall
Nanite::FSceneProxy::FSceneProxy
          (FSceneProxy *this,FMaterialAudit *param_1,FStaticMeshSceneProxyDesc *param_2,
          TSharedPtr<FInstanceDataSceneProxy,1> *param_3)

{
  undefined1 *puVar1;
  FFallbackLODInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  float fVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  ForElementType<Nanite::FMaterialAuditEntry> FVar9;
  FDistanceFieldVolumeData *pFVar10;
  FStaticMeshRayTracingProxy *pFVar11;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TConsoleVariableData<int> *pTVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  TEnumAsByte<ECollisionTraceFlag> TVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  FStaticMeshRenderData *pFVar24;
  UBodySetup *pUVar25;
  FCollisionResponseContainer *pFVar26;
  FSceneProxy *pFVar27;
  longlong lVar28;
  undefined8 uVar29;
  undefined7 extraout_var;
  FTextureResource *pFVar30;
  FMaterialCacheVirtualTextureRenderProxy *pFVar31;
  byte bVar32;
  uint uVar33;
  uint uVar34;
  byte bVar35;
  ulonglong uVar36;
  int *piVar37;
  ulonglong uVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  UMaterial *pUVar41;
  ForElementType<Nanite::FMaterialAuditEntry> FVar42;
  longlong lVar43;
  undefined8 uVar44;
  float fVar45;
  bool local_res10 [8];
  bool local_res18 [16];
  undefined1 local_b8 [8];
  longlong local_b0;
  uint local_a8;
  FLLMScope local_a4;
  longlong local_a0;
  FInstanceDataSceneProxy *local_98;
  FName local_90;
  longlong local_88;
  FMemScope local_80;
  FInstanceDataSceneProxy *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  FSceneProxyBase::FSceneProxyBase((FSceneProxyBase *)this,(FPrimitiveSceneProxyDesc *)param_2);
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  FMeshInfo::FMeshInfo(&this->MeshInfo,param_2);
  uVar36 = 0;
  this->Resources = (FResources *)0x0;
  pFVar24 = UStaticMesh::GetRenderData(param_2->StaticMesh);
  this->RenderData = pFVar24;
  this->StaticMesh = param_2->StaticMesh;
  UStaticMesh::GetBounds(param_2->StaticMesh,&this->StaticMeshBounds);
  this->MeshPaintTextureResource = (FTextureResource *)0x0;
  (this->MeshPaintTextureDescriptor).field0_0x0 = (TIntVector2<unsigned_int>_u_0)0x0;
  (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData =
       (ForElementType<FRayTracingGeometry>)0x0;
  this->MinDrawDistance = 0;
  this->EndCullDistance = 0;
  (this->DynamicRayTracingGeometries).ArrayNum = 0;
  (this->DynamicRayTracingGeometries).ArrayMax = 8;
  this->CoarseMeshStreamingHandle = -1;
  (this->CachedRayTracingMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRayTracingMaterials).ArrayNum = 0;
  (this->CachedRayTracingMaterials).ArrayMax = 0;
  this->bSupportRayTracing = false;
  this->bDynamicRayTracingGeometry = false;
  this->bHasRayTracingRepresentation = false;
  (this->InstanceDataSceneProxy).Object = (FInstanceDataSceneProxy *)0x0;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->CachedRayTracingMaterialsLODIndex = -1;
  this->RayTracingGeometryGroupHandle = -1;
  this->Owner = (UObject *)param_2->_padding_;
  this->LightMapResolution = param_2->StaticLightMapResolution;
  pUVar25 = FStaticMeshSceneProxyDesc::GetBodySetup(param_2);
  this->BodySetup = pUVar25;
  this->CollisionTraceFlag = CTF_UseSimpleAndComplex;
  pFVar26 = FStaticMeshSceneProxyDesc::GetCollisionResponseToChannels(param_2);
  uVar14 = *(undefined8 *)((longlong)&pFVar26->field0_0x0 + 8);
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 = *(undefined8 *)&pFVar26->field0_0x0;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&pFVar26->field0_0x0 + 0x18);
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) =
       *(undefined8 *)((longlong)&pFVar26->field0_0x0 + 0x10);
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar14;
  this->ForcedLodModel = param_2->ForcedLodModel;
  this->LODForCollision = param_2->StaticMesh->LODForCollision;
  uVar33 = (param_2->bDrawMeshCollisionIfComplex ^ ZPULL(*(undefined4 *)&this->field_0xbfc,0,1)) & 1
           ^ *(undefined4 *)&this->field_0xbfc;
  *(uint *)&this->field_0xbfc = uVar33;
  uVar40 = *(uint *)&param_2->field_0x164;
  (this->RayTracingFallbackLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayTracingFallbackLODs).ArrayNum = 0;
  (this->RayTracingFallbackLODs).ArrayMax = 0;
  (this->FallbackLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(uint *)&this->field_0xbfc = (uVar40 >> 1 ^ uVar33) & 2 ^ uVar33;
  (this->FallbackLODs).ArrayNum = 0;
  (this->FallbackLODs).ArrayMax = 0;
  FLLMScope::FLLMScope(&local_a4,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_90 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_80,&local_90,true);
  local_98 = param_3->Object;
  if (local_98 != (FInstanceDataSceneProxy *)0x0) {
    pTVar7 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (this->InstanceDataSceneProxy).Object;
    pTStack_70 = (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController;
    (this->InstanceDataSceneProxy).Object = local_98;
    (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
    if (((this->InstanceDataSceneProxy).Object == (FInstanceDataSceneProxy *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      pFVar27 = (FSceneProxy *)(*pcVar13)();
      return pFVar27;
    }
    lVar28 = (**(code **)(((this->InstanceDataSceneProxy).Object)->_padding_ + 8))();
    if ((this->_padding_ != 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceSceneDataBuffersInternal == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                            ,0x514,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      pFVar27 = (FSceneProxy *)(*pcVar13)();
      return pFVar27;
    }
    this->_padding_ = lVar28;
  }
  this->Resources = param_2->NaniteResources;
  if (param_2->bOverrideDistanceFieldSelfShadowBias == 0) {
    fVar45 = param_2->StaticMesh->DistanceFieldSelfShadowBias;
  }
  else {
    fVar45 = param_2->DistanceFieldSelfShadowBias;
  }
  this->bHasMaterialErrors = 0;
  if (fVar45 <= 0.0) {
    fVar45 = 0.0;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xbf | 0x20;
  *(float *)&this->_padding_ = fVar45;
  *(int *)((longlong)&this->_padding_ + 4) = param_2->WorldPositionOffsetDisableDistance;
  *(float *)&this->_padding_ = param_2->NanitePixelProgrammableDistance;
  uVar40 = (param_2->WireframeColor).field0_0x0.Bits;
  fVar45 = FLinearColor::sRGBToLinearTable[uVar40 >> 8 & 0xff];
  fVar6 = FLinearColor::sRGBToLinearTable[uVar40 & 0xff];
  *(float *)&this->_padding_ = FLinearColor::sRGBToLinearTable[uVar40 >> 0x10 & 0xff];
  *(float *)((longlong)&this->_padding_ + 4) = fVar45;
  *(float *)&this->_padding_ = fVar6;
  *(float *)((longlong)&this->_padding_ + 4) = (float)(uVar40 >> 0x18) * __real_3b808081;
  if (((this->MeshInfo)._padding_ != 0) || (bVar17 = false, (this->MeshInfo)._padding_ != 0)) {
    bVar17 = true;
  }
  pFVar24 = this->RenderData;
  if (((pFVar24->LODResources).Array.ArrayNum < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar13 = (code *)swi(3);
    pFVar27 = (FSceneProxy *)(*pcVar13)();
    return pFVar27;
  }
  lVar28 = *(longlong *)(pFVar24->LODResources).Array.AllocatorInstance.Data;
  this->DistanceFieldData = *(FDistanceFieldVolumeData **)(lVar28 + 0x40);
  this->CardRepresentationData = *(FCardRepresentationData **)(lVar28 + 0x48);
  bVar35 = *(byte *)((longlong)&this->_padding_ + 2);
  bVar32 = *(byte *)((longlong)&this->_padding_ + 3);
  *(byte *)((longlong)&this->_padding_ + 2) =
       (param_2->bEvaluateWorldPositionOffset ^ bVar35) & 1 ^ bVar35;
  *(byte *)((longlong)&this->_padding_ + 3) = (param_1->field_0xf8 << 2 ^ bVar32) & 0x20 ^ bVar32;
  local_88 = lVar28 + 0x10;
  TArray<Nanite::FSceneProxyBase::FMaterialSection,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Nanite::FSceneProxyBase::FMaterialSection,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,*(int *)(lVar28 + 0x38),Default);
  uVar15 = _UNK_15076b188;
  uVar14 = ___xmm_3f80000000000000000000003f800000;
  iVar21 = *(int *)(lVar28 + 0x38);
  local_a8 = 0;
  if (0 < iVar21) {
    local_a0 = 0;
    local_b0 = 0;
    uVar38 = uVar36;
    lVar28 = lVar28 + 0x10;
    do {
      lVar43 = local_b0;
      uVar33 = (uint)uVar36;
      uVar40 = 0;
      if ((int)uVar33 < iVar21) {
        uVar40 = ~uVar33 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar27 = (FSceneProxy *)(*pcVar13)();
        return pFVar27;
      }
      if (*(longlong *)(lVar28 + 0x20) != 0) {
        lVar28 = *(longlong *)(lVar28 + 0x20);
      }
      uVar40 = 0;
      if ((int)uVar33 < (int)this->_padding_) {
        uVar40 = ~uVar33 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar27 = (FSceneProxy *)(*pcVar13)();
        return pFVar27;
      }
      iVar21 = *(int *)(lVar28 + lVar43);
      lVar8 = this->_padding_;
      pbVar4 = (byte *)(uVar38 + 0x40 + lVar8);
      *pbVar4 = *pbVar4 & 0xf7;
      *(int *)(uVar38 + 0x10 + lVar8) = iVar21;
      pbVar4 = (byte *)(uVar38 + 0x40 + lVar8);
      *pbVar4 = *pbVar4 ^ (*(char *)(lVar28 + 0x15 + lVar43) << 4 ^ *(byte *)(uVar38 + 0x40 + lVar8)
                          ) & 0x10;
      iVar23 = (int)this->_padding_;
      if (iVar23 < iVar21) {
        iVar23 = iVar21;
      }
      *(int *)&this->_padding_ = iVar23;
      bVar18 = NaniteVoxelsSupported();
      if ((bVar18) &&
         ((this->Resources->VoxelMaterialsMask >>
           ((ulonglong)*(uint *)(uVar38 + 0x10 + lVar8) & 0x3f) & 1) != 0)) {
        bVar35 = 4;
      }
      else {
        bVar35 = 0;
      }
      pbVar4 = (byte *)(uVar38 + 0x40 + lVar8);
      *pbVar4 = *pbVar4 & 0xfb;
      pbVar4 = (byte *)(uVar38 + 0x40 + lVar8);
      *pbVar4 = *pbVar4 | bVar35;
      if ((*(byte *)(uVar38 + 0x40 + lVar8) & 8) == 0) {
        uVar40 = *(uint *)(uVar38 + 0x10 + lVar8);
        if (((int)uVar40 < 0) || ((param_1->Entries).ArrayNum <= (int)uVar40)) {
          pUVar41 = (UMaterial *)0x0;
        }
        else {
          uVar33 = 0;
          if ((int)uVar40 < (param_1->Entries).ArrayNum) {
            uVar33 = ~uVar40 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar13 = (code *)swi(3);
            pFVar27 = (FSceneProxy *)(*pcVar13)();
            return pFVar27;
          }
          FVar9 = (param_1->Entries).AllocatorInstance.SecondaryData;
          FVar42 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_1->Entries;
          if (FVar9 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
            FVar42 = FVar9;
          }
          pUVar41 = *(UMaterial **)((longlong)FVar42 + (longlong)(int)uVar40 * 0x30);
        }
        uVar40 = *(uint *)(uVar38 + 0x10 + lVar8);
        uVar29 = uVar14;
        uVar44 = uVar15;
        if ((-1 < (int)uVar40) && ((int)uVar40 < (param_1->Entries).ArrayNum)) {
          uVar33 = 0;
          if ((int)uVar40 < (param_1->Entries).ArrayNum) {
            uVar33 = ~uVar40 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar13 = (code *)swi(3);
            pFVar27 = (FSceneProxy *)(*pcVar13)();
            return pFVar27;
          }
          FVar9 = (param_1->Entries).AllocatorInstance.SecondaryData;
          FVar42 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_1->Entries;
          if (FVar9 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
            FVar42 = FVar9;
          }
          uVar29 = *(undefined8 *)
                    ((uchar *)((longlong)FVar42 + 0x20) + (longlong)(int)uVar40 * 0x30);
          uVar44 = *(undefined8 *)
                    ((uchar *)((longlong)FVar42 + 0x20) + (longlong)(int)uVar40 * 0x30 + 8);
        }
        uVar40 = *(uint *)(uVar38 + 0x10 + lVar8);
        puVar5 = (undefined8 *)(uVar38 + 0x30 + lVar8);
        *puVar5 = uVar29;
        puVar5[1] = uVar44;
        local_68 = uVar29;
        uStack_60 = uVar44;
        if (((int)uVar40 < 0) || ((param_1->Entries).ArrayNum <= (int)uVar40)) {
          bVar35 = 0;
        }
        else {
          uVar33 = 0;
          if ((int)uVar40 < (param_1->Entries).ArrayNum) {
            uVar33 = ~uVar40 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar13 = (code *)swi(3);
            pFVar27 = (FSceneProxy *)(*pcVar13)();
            return pFVar27;
          }
          FVar9 = (param_1->Entries).AllocatorInstance.SecondaryData;
          FVar42 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_1->Entries;
          if (FVar9 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
            FVar42 = FVar9;
          }
          bVar35 = ((uchar *)((longlong)FVar42 + 0x15))[(longlong)(int)uVar40 * 0x30] >> 1;
        }
        uVar40 = *(uint *)(uVar38 + 0x10 + lVar8);
        pbVar4 = (byte *)(uVar38 + 0x40 + lVar8);
        *pbVar4 = *pbVar4 ^ (bVar35 ^ *(byte *)(uVar38 + 0x40 + lVar8)) & 1;
        if (((int)uVar40 < 0) || ((param_1->Entries).ArrayNum <= (int)uVar40)) {
          bVar35 = 0;
        }
        else {
          uVar33 = 0;
          if ((int)uVar40 < (param_1->Entries).ArrayNum) {
            uVar33 = ~uVar40 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar13 = (code *)swi(3);
            pFVar27 = (FSceneProxy *)(*pcVar13)();
            return pFVar27;
          }
          FVar9 = (param_1->Entries).AllocatorInstance.SecondaryData;
          FVar42 = (ForElementType<Nanite::FMaterialAuditEntry>)&param_1->Entries;
          if (FVar9 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
            FVar42 = FVar9;
          }
          bVar35 = ((uchar *)((longlong)FVar42 + 0x15))[(longlong)(int)uVar40 * 0x30] >> 2;
        }
        pbVar4 = (byte *)(uVar38 + 0x40 + lVar8);
        *pbVar4 = *pbVar4 ^ (bVar35 * '\x02' ^ *(byte *)(uVar38 + 0x40 + lVar8)) & 2;
        if (((local_98 != (FInstanceDataSceneProxy *)0x0) && (pUVar41 != (UMaterial *)0x0)) &&
           (cVar19 = (**(code **)(pUVar41->_padding_ + 0x378))(pUVar41,7), cVar19 == '\0')) {
          pUVar41 = (UMaterial *)0x0;
        }
        if (((bVar17) && (pUVar41 != (UMaterial *)0x0)) &&
           (cVar19 = (**(code **)(pUVar41->_padding_ + 0x378))(pUVar41,4), cVar19 == '\0')) {
          pUVar41 = (UMaterial *)0x0;
        }
        if (((((*(byte *)(uVar38 + 0x40 + lVar8) & 4) != 0) &&
             ((pUVar41 == (UMaterial *)0x0 ||
              (cVar19 = (**(code **)(pUVar41->_padding_ + 0x378))(pUVar41,0x13), cVar19 == '\0'))))
            || (pUVar41 == (UMaterial *)0x0)) ||
           (lVar43 = local_b0, (*(uint *)((longlong)&param_2->_padding_ + 4) >> 0x1b & 1) != 0)) {
          lVar43 = local_b0;
          if ((*(byte *)(uVar38 + 0x40 + lVar8) & 8) != 0) goto LAB_1483e60fa;
          pUVar41 = UMaterial::GetDefaultMaterial(MD_Surface);
        }
      }
      else {
LAB_1483e60fa:
        pUVar41 = (GEngine->NaniteHiddenSectionMaterial).field0_0x0.DebugPtr;
      }
      uVar29 = (**(code **)(pUVar41->_padding_ + 0x310))(pUVar41);
      local_b0 = lVar43 + 0x1c;
      local_a0 = local_a0 + 1;
      *(undefined8 *)(uVar38 + 8 + lVar8) = uVar29;
      uVar38 = uVar38 + 0x50;
      local_a8 = local_a8 + 1;
      uVar36 = (ulonglong)local_a8;
      iVar21 = *(int *)(local_88 + 0x28);
      lVar28 = local_88;
    } while ((int)local_a8 < iVar21);
  }
  uVar40 = 0;
  FSceneProxyBase::OnMaterialsUpdated((FSceneProxyBase *)this,false);
  if (((this->_padding_ & 0x400000000) != 0) &&
     (pFVar10 = this->DistanceFieldData, pFVar10 != (FDistanceFieldVolumeData *)0x0)) {
    iVar21 = (pFVar10->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.Y;
    iVar23 = (pFVar10->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.Z;
    if (iVar21 < (pFVar10->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.X) {
      iVar21 = (pFVar10->Mips).Elements[0].IndirectionDimensions.field0_0x0._s_0.X;
    }
    if (iVar23 < iVar21) {
      iVar23 = iVar21;
    }
    if (0 < iVar23) {
      bVar35 = 1;
      goto LAB_1483e61ad;
    }
  }
  bVar35 = 0;
LAB_1483e61ad:
  pbVar4 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar4 = *pbVar4 & 0xfe;
  pFVar24 = this->RenderData;
  pbVar4 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar4 = *pbVar4 | bVar35;
  uVar33 = 0;
  lVar28 = 0;
  uVar22 = 0;
  if (0 < (pFVar24->LODResources).Array.ArrayNum) {
    do {
      uVar40 = uVar22;
      uVar22 = 0;
      if ((int)uVar40 < (pFVar24->LODResources).Array.ArrayNum) {
        uVar22 = ~uVar40 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar27 = (FSceneProxy *)(*pcVar13)();
        return pFVar27;
      }
      iVar21 = FStaticMeshLODResources::GetNumVertices
                         (*(FStaticMeshLODResources **)
                           ((pFVar24->LODResources).Array.AllocatorInstance.Data + lVar28));
      if (0 < iVar21) break;
      pFVar24 = this->RenderData;
      uVar40 = uVar40 + 1;
      lVar28 = lVar28 + 8;
      uVar22 = uVar40;
    } while ((int)uVar40 < (pFVar24->LODResources).Array.ArrayNum);
  }
  uVar22 = UStaticMesh::GetMinLODIdx(param_2->StaticMesh,false);
  if (param_2->bOverrideMinLOD != 0) {
    uVar22 = param_2->MinLOD;
  }
  uVar34 = (this->RenderData->LODResources).Array.ArrayNum - 1;
  if ((int)uVar22 < (int)uVar34) {
    uVar34 = uVar22;
  }
  if ((int)uVar40 < (int)uVar34) {
    uVar40 = uVar34;
  }
  this->ClampedMinLOD = uVar40;
  bVar17 = IsRayTracingEnabled();
  if ((bVar17) && (param_2->StaticMesh->bSupportRayTracing != '\0')) {
    bVar35 = 1;
  }
  else {
    bVar35 = 0;
  }
  this->bSupportRayTracing = bVar35;
  pFVar11 = this->RenderData->RayTracingProxy;
  if ((pFVar11 != (FStaticMeshRayTracingProxy *)0x0) && (pFVar11->bUsingRenderingLODs != false)) {
    uVar33 = this->ClampedMinLOD;
  }
  if (bVar35 != 0) {
    if ((pFVar11 == (FStaticMeshRayTracingProxy *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderData->RayTracingProxy != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                            ,0x3c2,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      pFVar27 = (FSceneProxy *)(*pcVar13)();
      return pFVar27;
    }
    pFVar11 = this->RenderData->RayTracingProxy;
    uVar40 = 0;
    if ((int)uVar33 < (pFVar11->LODs).Array.ArrayNum) {
      uVar40 = ~uVar33 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      pFVar27 = (FSceneProxy *)(*pcVar13)();
      return pFVar27;
    }
    bVar35 = 0;
    if (*(int *)(*(longlong *)
                  (*(longlong *)
                    ((pFVar11->LODs).Array.AllocatorInstance.Data + (longlong)(int)uVar33 * 8) +
                  0x18) + 0xac) != 0) {
      bVar35 = 2;
    }
    this->field_0xba2 = bVar35 | this->field_0xba2 & 0xf9;
    pTVar16 = CVarRayTracingNaniteProxyMeshesWPO.Ref;
    if ((((this->_padding_ & 0x10000) == 0) || ((this->_padding_ & 0x400000000000) == 0)) ||
       (param_2->bEvaluateWorldPositionOffsetInRayTracing == 0)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if ((bVar35 != 0) && (bVar17)) {
      bVar17 = IsInParallelGameThread();
      if ((bVar17) || (bVar17 = IsInGameThread(), lVar28 = 4, bVar17)) {
        lVar28 = 0;
      }
      if (*(int *)((longlong)pTVar16->ShadowedValue + lVar28) != 0) {
        GetStaticMeshRayTracingWPOConfig(local_res18,local_res10);
        this->bHasRayTracingRepresentation = local_res18[0];
        this->bDynamicRayTracingGeometry = local_res10[0];
      }
    }
  }
  if (this->bHasRayTracingRepresentation) {
    this->CoarseMeshStreamingHandle = (short)param_2->StaticMesh->_padding_;
    uVar40 = (this->RenderData->RayTracingProxy->LODs).Array.ArrayNum;
    if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
    }
    if ((this->RayTracingFallbackLODs).ArrayMax < (int)uVar40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar40,&(this->RayTracingFallbackLODs).AllocatorInstance,
                 (this->RayTracingFallbackLODs).ArrayNum,&(this->RayTracingFallbackLODs).ArrayMax);
    }
    pFVar24 = this->RenderData;
    uVar36 = 0;
    if (0 < (pFVar24->RayTracingProxy->LODs).Array.ArrayNum) {
      uVar38 = uVar36;
      do {
        piVar37 = &(this->RayTracingFallbackLODs).ArrayMax;
        pFVar11 = pFVar24->RayTracingProxy;
        uVar22 = (uint)uVar36;
        uVar40 = 0;
        if ((int)uVar22 < (pFVar11->LODs).Array.ArrayNum) {
          uVar40 = ~uVar22 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          pFVar27 = (FSceneProxy *)(*pcVar13)();
          return pFVar27;
        }
        uVar40 = (this->RayTracingFallbackLODs).ArrayNum;
        lVar28 = *(longlong *)((pFVar11->LODs).Array.AllocatorInstance.Data + uVar38);
        if (uVar40 == *piVar37) {
          uVar40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&(this->RayTracingFallbackLODs).AllocatorInstance,piVar37);
        }
        (this->RayTracingFallbackLODs).ArrayNum = uVar40 + 1;
        uVar34 = 0;
        if ((int)uVar40 < (int)(uVar40 + 1)) {
          uVar34 = ~uVar40 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          pFVar27 = (FSceneProxy *)(*pcVar13)();
          return pFVar27;
        }
        pFVar2 = (FFallbackLODInfo *)
                 ((this->RayTracingFallbackLODs).AllocatorInstance.Data +
                 (longlong)(int)uVar40 * 0x28);
        if (pFVar2 != (FFallbackLODInfo *)0x0) {
          pTVar12 = this->RenderData->RayTracingProxy->LODVertexFactories;
          uVar40 = 0;
          if ((int)uVar22 < pTVar12->ArrayNum) {
            uVar40 = ~uVar22 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            pFVar27 = (FSceneProxy *)(*pcVar13)();
            return pFVar27;
          }
          FFallbackLODInfo::FFallbackLODInfo
                    (pFVar2,param_2,*(FStaticMeshVertexBuffers **)(lVar28 + 0x18),
                     *(FStaticMeshSectionArray **)(lVar28 + 0x10),
                     (FStaticMeshVertexFactories *)
                     ((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x470),uVar22,
                     uVar33);
        }
        pFVar24 = this->RenderData;
        uVar36 = (ulonglong)(uVar22 + 1);
        uVar38 = uVar38 + 8;
      } while ((int)(uVar22 + 1) < (pFVar24->RayTracingProxy->LODs).Array.ArrayNum);
    }
  }
  uVar36 = 0;
  uVar40 = (this->RenderData->LODResources).Array.ArrayNum;
  if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
  }
  if ((this->FallbackLODs).ArrayMax < (int)uVar40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar40,&(this->FallbackLODs).AllocatorInstance,(this->FallbackLODs).ArrayNum,
               &(this->FallbackLODs).ArrayMax);
  }
  pFVar24 = this->RenderData;
  if (0 < (pFVar24->LODResources).Array.ArrayNum) {
    uVar38 = uVar36;
    do {
      piVar37 = &(this->FallbackLODs).ArrayMax;
      uVar33 = (uint)uVar36;
      uVar40 = 0;
      if ((int)uVar33 < (pFVar24->LODResources).Array.ArrayNum) {
        uVar40 = ~uVar33 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar27 = (FSceneProxy *)(*pcVar13)();
        return pFVar27;
      }
      uVar40 = (this->FallbackLODs).ArrayNum;
      lVar28 = *(longlong *)((pFVar24->LODResources).Array.AllocatorInstance.Data + uVar38);
      if (uVar40 == *piVar37) {
        uVar40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&(this->FallbackLODs).AllocatorInstance,piVar37);
      }
      (this->FallbackLODs).ArrayNum = uVar40 + 1;
      uVar22 = 0;
      if ((int)uVar40 < (int)(uVar40 + 1)) {
        uVar22 = ~uVar40 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar27 = (FSceneProxy *)(*pcVar13)();
        return pFVar27;
      }
      pFVar2 = (FFallbackLODInfo *)
               ((this->FallbackLODs).AllocatorInstance.Data + (longlong)(int)uVar40 * 0x28);
      if (pFVar2 != (FFallbackLODInfo *)0x0) {
        iVar21 = this->ClampedMinLOD;
        pFVar24 = this->RenderData;
        uVar40 = 0;
        if ((int)uVar33 < (pFVar24->LODVertexFactories).ArrayNum) {
          uVar40 = ~uVar33 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          pFVar27 = (FSceneProxy *)(*pcVar13)();
          return pFVar27;
        }
        FFallbackLODInfo::FFallbackLODInfo
                  (pFVar2,param_2,(FStaticMeshVertexBuffers *)(lVar28 + 0xd0),
                   (FStaticMeshSectionArray *)(lVar28 + 0x10),
                   (FStaticMeshVertexFactories *)
                   ((pFVar24->LODVertexFactories).AllocatorInstance.Data +
                   (longlong)(int)uVar33 * 0x470),uVar33,iVar21);
      }
      pFVar24 = this->RenderData;
      uVar36 = (ulonglong)(uVar33 + 1);
      uVar38 = uVar38 + 8;
    } while ((int)(uVar33 + 1) < (pFVar24->LODResources).Array.ArrayNum);
  }
  if (this->BodySetup != (UBodySetup *)0x0) {
    TVar20 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this->BodySetup);
    this->CollisionTraceFlag = (uint)*(byte *)CONCAT71(extraout_var,TVar20.Value);
  }
  bVar32 = (local_98 != (FInstanceDataSceneProxy *)0x0) + 1;
  *(byte *)&this->_padding_ = bVar32;
  bVar35 = 0x40;
  if ((char)param_2->_padding_ == '\0') {
    bVar35 = 0x20;
  }
  *(byte *)&this->_padding_ = bVar35 | bVar32;
  cVar19 = param_2->field_0x164;
  bVar35 = *(byte *)((longlong)&this->_padding_ + 1);
  pbVar4 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar4 = *pbVar4 | 8;
  *(byte *)((longlong)&this->_padding_ + 1) = (cVar19 << 4 ^ bVar35) & 0x10 ^ bVar35;
  pbVar4 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar4 = *pbVar4 ^ (*(char *)((longlong)&this->_padding_ + 7) * '\x02' ^
                      *(byte *)((longlong)&this->_padding_ + 5)) & 0x40;
  FPrimitiveSceneProxy::UpdateVisibleInLumenScene((FPrimitiveSceneProxy *)this);
  pFVar30 = FStaticMeshSceneProxyDesc::GetMeshPaintTextureResource(param_2);
  this->MeshPaintTextureResource = pFVar30;
  *(uint *)&this->field_0x310 =
       (param_2->MeshPaintTextureCoordinateIndex * 2 ^ *(uint *)&this->field_0x310) & 6 ^
       *(uint *)&this->field_0x310;
  bVar17 = FStaticMeshSceneProxyDesc::ShouldCreateMaterialCacheProxy(param_2);
  if (bVar17) {
    pFVar39 = (param_2->MaterialCacheTextures).AllocatorInstance.Data;
    iVar21 = (param_2->MaterialCacheTextures).ArrayNum;
    pFVar3 = pFVar39 + (longlong)iVar21 * 8;
    while( true ) {
      if ((param_2->MaterialCacheTextures).ArrayNum != iVar21) {
        `TCheckedPointerIterator<UMaterialCacheVirtualTexture_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_b8);
      }
      if (pFVar39 == pFVar3) break;
      pFVar31 = UMaterialCacheVirtualTexture::CreateRenderProxy
                          (*(UMaterialCacheVirtualTexture **)pFVar39,
                           param_2->MaterialCacheTextureCoordinateIndex);
      piVar37 = (int *)((longlong)&this->_padding_ + 4);
      iVar23 = (int)this->_padding_;
      if (iVar23 == *piVar37) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&this->_padding_,piVar37);
      }
      pFVar39 = pFVar39 + 8;
      *(int *)&this->_padding_ = iVar23 + 1;
      *(FMaterialCacheVirtualTextureRenderProxy **)(this->_padding_ + (longlong)iVar23 * 8) =
           pFVar31;
    }
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(&local_a4);
  return this;
}

// FSceneProxy @ 1483e69d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSceneProxy * __thiscall
Nanite::FSceneProxy::FSceneProxy
          (FSceneProxy *this,FMaterialAudit *param_1,
          UHierarchicalInstancedStaticMeshComponent *param_2)

{
  byte *pbVar1;
  byte bVar2;
  FInstancedStaticMeshSceneProxyDesc *pFVar3;
  byte bVar4;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  FInstancedStaticMeshSceneProxyDesc local_1d8;
  
  pFVar3 = FInstancedStaticMeshSceneProxyDesc::FInstancedStaticMeshSceneProxyDesc
                     (&local_1d8,(UInstancedStaticMeshComponent *)param_2);
  FSceneProxy(this,param_1,(FStaticMeshSceneProxyDesc *)pFVar3,&pFVar3->InstanceDataSceneProxy);
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  this->MinDrawDistance = pFVar3->InstanceMinDrawDistance;
  this->EndCullDistance = pFVar3->InstanceEndCullDistance;
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController);
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)&local_1d8);
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  bVar4 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 1) = bVar4 | 0x10;
  if (param_2->ViewRelevanceType == Grass) {
    *(undefined1 *)&this->_padding_ = 8;
    *(byte *)((longlong)&this->_padding_ + 1) = bVar4 | 0x30;
    bVar4 = 8;
  }
  else if (param_2->ViewRelevanceType == Foliage) {
    *(undefined1 *)&this->_padding_ = 4;
    bVar4 = 4;
  }
  else {
    *(undefined1 *)&this->_padding_ = 2;
    bVar4 = 2;
  }
  bVar2 = 0x40;
  if (param_2->field_0x1ab == '\0') {
    bVar2 = 0x20;
  }
  *(byte *)&this->_padding_ = bVar2 | bVar4;
  return this;
}

// FSceneProxy @ 1483e6b40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSceneProxy * __thiscall
Nanite::FSceneProxy::FSceneProxy
          (FSceneProxy *this,FMaterialAudit *param_1,UInstancedStaticMeshComponent *param_2)

{
  byte *pbVar1;
  FInstancedStaticMeshSceneProxyDesc *pFVar2;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_1c8;
  FInstancedStaticMeshSceneProxyDesc local_1c0;
  
  pFVar2 = FInstancedStaticMeshSceneProxyDesc::FInstancedStaticMeshSceneProxyDesc
                     (&local_1c0,param_2);
  FSceneProxy(this,param_1,(FStaticMeshSceneProxyDesc *)pFVar2,&pFVar2->InstanceDataSceneProxy);
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_1c8,&local_res20,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  this->MinDrawDistance = pFVar2->InstanceMinDrawDistance;
  this->EndCullDistance = pFVar2->InstanceEndCullDistance;
  FMemScope::~FMemScope(&local_1c8);
  FLLMScope::~FLLMScope(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController);
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)&local_1c0);
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  return this;
}

// FSceneProxy @ 1483e6c40

FSceneProxy * __thiscall
Nanite::FSceneProxy::FSceneProxy
          (FSceneProxy *this,FMaterialAudit *param_1,UStaticMeshComponent *param_2,
          TSharedPtr<FInstanceDataSceneProxy,1> *param_3)

{
  FStaticMeshSceneProxyDesc *pFVar1;
  FStaticMeshSceneProxyDesc local_198;
  
  pFVar1 = FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc(&local_198,param_2);
  FSceneProxy(this,param_1,pFVar1,param_3);
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc(&local_198);
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  return this;
}

// ~FSceneProxy @ 1483e8dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FSceneProxy::~FSceneProxy(FSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  FRHIResource *this_00;
  ForElementType<FRayTracingGeometry> FVar2;
  
  this->_padding_ = (longlong)&___7FSceneProxy_Nanite__6B_;
  ReleaseDynamicRayTracingGeometries(this);
  DestructItems<Nanite::FSceneProxy::FFallbackLODInfo,int>
            ((FFallbackLODInfo *)(this->FallbackLODs).AllocatorInstance.Data,
             (this->FallbackLODs).ArrayNum);
  pFVar1 = (this->FallbackLODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Nanite::FSceneProxy::FFallbackLODInfo,int>
            ((FFallbackLODInfo *)(this->RayTracingFallbackLODs).AllocatorInstance.Data,
             (this->RayTracingFallbackLODs).ArrayNum);
  pFVar1 = (this->RayTracingFallbackLODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController);
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
  pFVar1 = (this->MeshInfo).IrrelevantLights.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->MeshInfo)._padding_ = (longlong)&___7FLightCacheInterface__6B_;
  this_00 = (FRHIResource *)(this->MeshInfo)._padding_;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 1483eb150

void __thiscall
`Nanite::FSceneProxy::SetWorldPositionOffsetDisableDistance_GameThread'::__l2::<lambda_1>::
operator()(void *this,FRHICommandList *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  IRendererModule *pIVar5;
  
  iVar1 = *(int *)((longlong)this + 8);
  iVar2 = *(int *)(*(longlong *)this + 0x294);
  if ((iVar2 == iVar1) || ((iVar2 != 0 && (iVar1 != 0)))) {
    bVar4 = false;
    if (iVar2 == iVar1) {
      return;
    }
  }
  else {
    bVar4 = true;
  }
  *(int *)(*(longlong *)this + 0x294) = iVar1;
  plVar3 = *(longlong **)(*(longlong *)this + 0x220);
  (**(code **)(*plVar3 + 0x518))(plVar3,*(undefined8 *)(*(longlong *)this + 0x228));
  plVar3 = *(longlong **)(*(longlong *)this + 0x220);
  (**(code **)(*plVar3 + 0x510))(plVar3,*(undefined8 *)(*(longlong *)this + 0x228),8);
  if (bVar4) {
    pIVar5 = GetRendererModule();
    (**(code **)((longlong)*pIVar5 + 0x248))(pIVar5,*(undefined8 *)(*(longlong *)this + 0x228));
  }
  return;
}

// CreateDynamicRayTracingGeometries @ 1483f9120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxy::CreateDynamicRayTracingGeometries
          (FSceneProxy *this,FRHICommandListBase *param_1)

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
  local_140 = param_1;
  if ((!this->bDynamicRayTracingGeometry) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDynamicRayTracingGeometry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                         ,0x788,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar1 = &(this->DynamicRayTracingGeometries).ArrayNum;
  if ((*piVar1 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicRayTracingGeometries.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                         ,0x789,L""), bVar7)) {
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
  if (this->RenderData->RayTracingProxy->bUsingRenderingLODs == false) {
    uVar15 = 0;
  }
  else {
    uVar15 = this->ClampedMinLOD;
  }
  iVar10 = (pFVar16->LODs).Array.ArrayNum;
  if ((int)uVar15 < iVar10) {
    lVar17 = (longlong)(int)uVar15;
    local_150 = lVar17 << 8;
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
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
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
          `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_158);
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
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
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
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
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
  return;
}

// CreateRenderThreadResources @ 1483fa340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxy::CreateRenderThreadResources(FSceneProxy *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntVector2<unsigned_int> TVar3;
  
  if ((this->Resources->RuntimeResourceID == 0xffffffff) ||
     (this->Resources->HierarchyOffset == 0xffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resources->RuntimeResourceID != INDEX_NONE && Resources->HierarchyOffset != INDEX_NONE"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                       ,0x453,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsRayTracingAllowed();
  if (bVar2) {
    this->RayTracingGeometryGroupHandle = this->RenderData->RayTracingGeometryGroupHandle;
  }
  bVar2 = IsRayTracingEnabled();
  if ((bVar2) && (this->bDynamicRayTracingGeometry)) {
    CreateDynamicRayTracingGeometries(this,param_1);
  }
  TVar3 = MeshPaintVirtualTexture::GetTextureDescriptor
                    ((FTextureResource *)&stack0x00000008,(uint)this->MeshPaintTextureResource);
                    /* WARNING: Load size is inaccurate */
  (this->MeshPaintTextureDescriptor).field0_0x0 = (TIntVector2<unsigned_int>_u_0)*TVar3.field0_0x0;
  return;
}

// DrawStaticElements @ 1483fd5a0

void __thiscall
Nanite::FSceneProxy::DrawStaticElements(FSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  return;
}

// GetCachedRayTracingInstance @ 1484056c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ERayTracingPrimitiveFlags __thiscall
Nanite::FSceneProxy::GetCachedRayTracingInstance(FSceneProxy *this,FRayTracingInstance *param_1)

{
  FStaticMeshRayTracingProxy *pFVar1;
  code *pcVar2;
  longlong lVar3;
  ERayTracingMode EVar4;
  TConsoleVariableData<int> *pTVar5;
  ERayTracingPrimitiveFlags EVar6;
  bool bVar7;
  char cVar8;
  ERayTracingPrimitiveFlags EVar9;
  int iVar10;
  uint uVar11;
  IConsoleManager *pIVar12;
  longlong *plVar13;
  FRayTracingGeometry *pFVar14;
  uint uVar15;
  FRayTracingGeometry *pFVar16;
  int *piVar17;
  
  pTVar5 = CVarRayTracingNaniteProxyMeshes.Ref;
  if (this->bDynamicRayTracingGeometry) {
    EVar6 = FPrimitiveSceneProxy::GetCachedRayTracingInstance((FPrimitiveSceneProxy *)this,param_1);
    return EVar6;
  }
  if ((((this->_padding_ & 0xa000000) == 0xa000000) &&
      ((((this->_padding_ & 2) != 0 || ((this->_padding_ & 0x100000000000) != 0)) ||
       ((this->_padding_ & 0x2000000000000000) != 0)))) ||
     ((this->_padding_ & 0x40000000000000) != 0)) {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar2 = (code *)swi(3);
      EVar6 = (*pcVar2)();
      return EVar6;
    }
    if ((pTVar5->ShadowedValue[1] != 0) &&
       (cVar8 = (**(code **)(this->_padding_ + 0x68))(this), cVar8 != '\0')) {
      pFVar16 = (FRayTracingGeometry *)0x0;
      piVar17 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar17 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar12 = IConsoleManager::Get();
        plVar13 = (longlong *)
                  (**(code **)((longlong)*pIVar12 + 0xc0))
                            (pIVar12,L"r.RayTracing.Geometry.StaticMeshes");
        pFVar14 = pFVar16;
        if (plVar13 != (longlong *)0x0) {
          pFVar14 = (FRayTracingGeometry *)(**(code **)(*plVar13 + 0x68))(plVar13);
        }
        RayTracingStaticMeshesCVar = (TConsoleVariableData<int> *)pFVar14;
        _Init_thread_footer(&::_TSS0);
      }
      if ((RayTracingStaticMeshesCVar == (TConsoleVariableData<int> *)0x0) ||
         (iVar10 = TConsoleVariableData<int>::GetValueOnRenderThread(RayTracingStaticMeshesCVar),
         0 < iVar10)) {
        if ((*piVar17 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          pIVar12 = IConsoleManager::Get();
          plVar13 = (longlong *)
                    (**(code **)((longlong)*pIVar12 + 0xc0))
                              (pIVar12,L"r.RayTracing.Geometry.HierarchicalInstancedStaticMesh");
          pFVar14 = pFVar16;
          if (plVar13 != (longlong *)0x0) {
            pFVar14 = (FRayTracingGeometry *)(**(code **)(*plVar13 + 0x68))(plVar13);
          }
          RayTracingHISMCVar = (TConsoleVariableData<int> *)pFVar14;
          _Init_thread_footer(&::_TSS1);
        }
        if ((((this->_padding_ & 0x1000) == 0) ||
            (RayTracingHISMCVar == (TConsoleVariableData<int> *)0x0)) ||
           (iVar10 = TConsoleVariableData<int>::GetValueOnRenderThread(RayTracingHISMCVar),
           0 < iVar10)) {
          if ((*piVar17 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
            pIVar12 = IConsoleManager::Get();
            plVar13 = (longlong *)
                      (**(code **)((longlong)*pIVar12 + 0xc0))
                                (pIVar12,L"r.RayTracing.Geometry.LandscapeGrass");
            pFVar14 = pFVar16;
            if (plVar13 != (longlong *)0x0) {
              pFVar14 = (FRayTracingGeometry *)(**(code **)(*plVar13 + 0x68))(plVar13);
            }
            RayTracingLandscapeGrassCVar = (TConsoleVariableData<int> *)pFVar14;
            _Init_thread_footer(&::_TSS2);
          }
          if (((((this->_padding_ & 0x2000) == 0) ||
               (RayTracingLandscapeGrassCVar == (TConsoleVariableData<int> *)0x0)) ||
              (iVar10 = TConsoleVariableData<int>::GetValueOnRenderThread
                                  (RayTracingLandscapeGrassCVar), 0 < iVar10)) &&
             (EVar4 = (ERayTracingMode)GNaniteRayTracingMode, (this->_padding_ & 0x10000000000) == 0
             )) {
            lVar3 = this->_padding_;
            uVar11 = GetFirstValidRaytracingGeometryLODIndex
                               (this,(ERayTracingMode)GNaniteRayTracingMode,false);
            if (uVar11 == 0xffffffff) {
              EVar6 = Streaming|Skip;
              EVar9 = Skip;
            }
            else {
              if (EVar4 == Fallback) {
                pFVar1 = this->RenderData->RayTracingProxy;
                uVar15 = 0;
                if ((int)uVar11 < (pFVar1->LODs).Array.ArrayNum) {
                  uVar15 = ~uVar11 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  EVar6 = (*pcVar2)();
                  return EVar6;
                }
                pFVar16 = *(FRayTracingGeometry **)
                           (*(longlong *)
                             ((pFVar1->LODs).Array.AllocatorInstance.Data +
                             (longlong)(int)uVar11 * 8) + 8);
              }
              param_1->Geometry = pFVar16;
              param_1->bApplyLocalBoundsTransform = false;
              param_1->NumTransforms = *(uint *)(this->_padding_ + 0x228);
              if (EVar4 == Fallback) {
                (**(code **)(this->_padding_ + 0x280))(this,uVar11);
              }
              else {
                (**(code **)(this->_padding_ + 0x268))(this,&param_1->Materials);
              }
              EVar6 = Streaming|CacheInstances;
              EVar9 = CacheInstances;
            }
            if (this->CoarseMeshStreamingHandle == -1) {
              EVar6 = EVar9;
            }
            EVar9 = EVar6 | FarField;
            if ((lVar3 & 0x40000000000000) == 0) {
              EVar9 = EVar6;
            }
            return EVar9;
          }
        }
      }
    }
  }
  return Exclude;
}

// GetCollisionMeshElement @ 148405f10

bool __thiscall
Nanite::FSceneProxy::GetCollisionMeshElement
          (FSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          FMaterialRenderProxy *param_5,FMeshBatch *param_6)

{
  uchar *puVar1;
  int iVar2;
  FStaticMeshRenderData *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FMeshBatchElement> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 uVar12;
  ForElementType<FMeshBatchElement> FVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  FVertexFactory *pFVar18;
  
  pFVar3 = this->RenderData;
  lVar17 = (longlong)param_1;
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar14 = 0;
  if (param_1 < (pFVar3->LODResources).Array.ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar4 = *(longlong *)((pFVar3->LODResources).Array.AllocatorInstance.Data + lVar17 * 8);
  pFVar3 = this->RenderData;
  uVar14 = 0;
  if (param_1 < (pFVar3->LODVertexFactories).ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar18 = (FVertexFactory *)((pFVar3->LODVertexFactories).AllocatorInstance.Data + lVar17 * 0x470)
  ;
  uVar14 = 0;
  if (param_3 < *(int *)(lVar4 + 0x38)) {
    uVar14 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar16 = *(longlong *)(lVar4 + 0x30);
  if (*(longlong *)(lVar4 + 0x30) == 0) {
    lVar16 = lVar4 + 0x10;
  }
  lVar11 = (longlong)param_3 * 0x1c;
  if (*(int *)(lVar11 + 8 + lVar16) != 0) {
    uVar14 = 0;
    if (param_1 < (this->FallbackLODs).ArrayNum) {
      uVar14 = uVar15;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar5 = (this->FallbackLODs).AllocatorInstance.Data;
    uVar14 = 0;
    if (param_3 < *(int *)(pFVar5 + lVar17 * 0x28 + 0x10)) {
      uVar14 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if (*(int *)(lVar11 + 8 + lVar16) != 0) {
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
      FVar13 = (ForElementType<FMeshBatchElement>)param_6;
      if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar13 = FVar6;
      }
      param_6->Type = 0;
      *(longlong *)((longlong)FVar13 + 0x18) = lVar4 + 0x228;
      *(undefined4 *)((longlong)FVar13 + 0x58) = *(undefined4 *)(lVar11 + 4 + lVar16);
      *(undefined4 *)((longlong)FVar13 + 0x5c) = *(undefined4 *)(lVar11 + 8 + lVar16);
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
    FVar13 = (ForElementType<FMeshBatchElement>)param_6;
    if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar13 = FVar6;
    }
    if (*(longlong *)(pFVar5 + lVar17 * 0x28 + 0x18) == 0) {
      uVar12._0_4_ = pFVar18[1].PositionStream.ArrayNum;
      uVar12._4_4_ = pFVar18[1].PositionStream.ArrayMax;
    }
    else {
      uVar12 = *(undefined8 *)(pFVar5 + lVar17 * 0x28 + 0x20);
      pFVar18 = (FVertexFactory *)
                (pFVar18[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10);
    }
    *(undefined8 *)((longlong)FVar13 + 0x40) = uVar12;
    if (*(int *)((longlong)FVar13 + 0x5c) != 0) {
      param_6->LODIndex = (schar)param_1;
      param_6->VisualizeLODIndex = (schar)param_1;
      param_6->VisualizeHLODIndex = '\0';
      bVar10 = (**(code **)(this->_padding_ + 0x50))(this);
      lVar4 = this->_padding_;
      param_6->VertexFactory = pFVar18;
      uVar14 = (uint)(bVar10 != ((byte)lVar4 & 1)) | *(uint *)&param_6->field_0xd4 & 0xfffffffa;
      *(uint *)&param_6->field_0xd4 = ((uint)param_4 << 10 ^ uVar14) & 0x1c00 ^ uVar14;
      param_6->LCI = (FLightCacheInterface *)&this->MeshInfo;
      param_6->MaterialRenderProxy = param_5;
      *(undefined4 *)((longlong)FVar13 + 0x68) = *(undefined4 *)(lVar11 + 0xc + lVar16);
      *(undefined4 *)((longlong)FVar13 + 0x6c) = *(undefined4 *)(lVar11 + 0x10 + lVar16);
      *(uint *)((longlong)FVar13 + 0x7c) =
           (param_3 << 0xe ^ *(uint *)((longlong)FVar13 + 0x7c)) & 0xffc03fff ^ param_3 << 0xe;
      iVar2 = this->ForcedLodModel;
      param_6->bDitheredLODTransition = 0;
      if (0 < iVar2) {
        puVar1 = (uchar *)((longlong)FVar13 + 0x78);
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
        puVar1 = (uchar *)((longlong)FVar13 + 0x74);
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = 0x80;
        puVar1[3] = 0xbf;
        return true;
      }
      *(float *)((longlong)FVar13 + 0x78) = this->RenderData->ScreenSize[lVar17].Default;
      puVar1 = (uchar *)((longlong)FVar13 + 0x74);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      if (param_1 < 7) {
        *(float *)((longlong)FVar13 + 0x74) = this->RenderData->ScreenSize[lVar17 + 1].Default;
      }
      return true;
    }
  }
  return false;
}

// GetDistanceFieldAtlasData @ 1484069e0

void __thiscall
Nanite::FSceneProxy::GetDistanceFieldAtlasData
          (FSceneProxy *this,FDistanceFieldVolumeData **param_1,float *param_2)

{
  *param_1 = this->DistanceFieldData;
  *param_2 = *(float *)&this->_padding_;
  return;
}

// GetDynamicMeshElements @ 148406a00

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
Nanite::FSceneProxy::GetDynamicMeshElements
          (FSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  return;
}

// GetDynamicRayTracingInstances @ 148406d40

void __thiscall
Nanite::FSceneProxy::GetDynamicRayTracingInstances
          (FSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  
  pTVar2 = CVarRayTracingNaniteProxyMeshes.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pTVar2->ShadowedValue[1] != 0) {
    GetDynamicRayTracingInstances_Internal(this,param_1,(FRWBuffer *)0x0,true);
  }
  return;
}

// GetDynamicRayTracingInstances_Internal @ 1484072e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxy::GetDynamicRayTracingInstances_Internal
          (FSceneProxy *this,FRayTracingInstanceCollector *param_1,FRWBuffer *param_2,bool param_3)

{
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  longlong lVar3;
  FStaticMeshRayTracingProxy *pFVar4;
  ForElementType<FRayTracingGeometry> FVar5;
  FMeshBatch *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  FInstanceDataUpdateTaskInfo *this_00;
  FRayTracingInstance *pFVar12;
  byte bVar13;
  FRayTracingGeometry *pFVar14;
  FRayTracingInstanceCollector *this_01;
  uint uVar15;
  int iVar16;
  ForElementType<FRayTracingGeometry> FVar17;
  int *piVar18;
  FScriptContainerElement *pFVar19;
  FRayTracingGeometry *pFVar20;
  uint uVar21;
  undefined1 auStackY_2f8 [32];
  byte local_2b8;
  bool local_2b7;
  undefined1 local_2b6 [2];
  uint local_2b4;
  FRayTracingInstanceCollector *local_2b0;
  int local_2a8;
  longlong local_2a0;
  FMeshBatch *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  FRayTracingInstance local_288;
  int local_218;
  FRWBuffer *local_210;
  FString local_208;
  TVector<double>_u_0 local_1f8;
  FRayTracingDynamicGeometryUpdateParams local_1d8;
  FRayTracingInstance local_148;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  FRayTracingGeometry *local_b8;
  FRWBuffer *local_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  float local_98 [2];
  float afStack_90 [2];
  float local_88 [2];
  float afStack_80 [2];
  float local_78 [2];
  float afStack_70 [2];
  float local_68 [2];
  float afStack_60 [2];
  undefined1 local_58;
  FRHIResource *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2b0 = param_1;
  local_210 = param_2;
  cVar9 = (**(code **)(this->_padding_ + 0x58))();
  if ((cVar9 == '\0') ||
     (this->bSupportRayTracing != true || this->bHasRayTracingRepresentation != true)) {
    local_2b6[0] = 0;
    bVar10 = `Nanite::FSceneProxy::GetDynamicRayTracingInstances_Internal'::__l3::<lambda_1>::
             operator()(local_2b6);
    if (!bVar10) {
      return;
    }
  }
  if (!this->bDynamicRayTracingGeometry) {
    return;
  }
  if (((this->DynamicRayTracingGeometries).ArrayNum == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!DynamicRayTracingGeometries.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                          ,0x7cb,
                          L"Proxy should have entries in DynamicRayTracingGeometries when using the GetDynamicRayTracingInstances() code path."
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar2 = (param_1->Views).ArrayNum;
  pFVar19 = (param_1->Views).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2b4 = param_1->VisibilityMap;
  local_218 = 0;
  if (local_2b4 != 0) {
    for (; (local_2b4 >> local_218 & 1) == 0; local_218 = local_218 + 1) {
    }
  }
  local_2a8 = 0x20;
  if (local_2b4 != 0) {
    local_2a8 = local_218;
  }
  if (((local_2a8 < 0) || (iVar2 <= local_2a8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Views.IsValidIndex(FirstActiveViewIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                          ,0x7d3,
                          L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar14 = (FRayTracingGeometry *)0x0;
  bVar13 = *(byte *)((longlong)&this->_padding_ + 4) >> 5 & 1;
  local_2b8 = bVar13;
  if (0 < iVar2) {
    uVar15 = 1;
    pFVar20 = pFVar14;
    uVar11 = local_2b4;
    do {
      if ((uVar11 & uVar15) != 0) {
        if (((int)pFVar20 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar3 = *(longlong *)pFVar19;
        local_1f8._s_0.X = *(double *)(lVar3 + 0xbc8);
        local_1f8._s_0.Y = *(double *)(lVar3 + 0xbd0);
        local_1f8._s_0.Z = *(double *)(lVar3 + 0xbd8);
        bVar10 = ShouldStaticMeshEvaluateWPOInRayTracing
                           ((TVector<double> *)&local_1f8._s_0,
                            (TBoxSphereBounds<double,double> *)&this->_padding_);
        bVar13 = local_2b8 | bVar10;
        uVar11 = local_2b4;
        local_2b8 = bVar13;
      }
      uVar21 = (int)pFVar20 + 1;
      pFVar20 = (FRayTracingGeometry *)(ulonglong)uVar21;
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      pFVar19 = pFVar19 + 8;
      param_1 = local_2b0;
    } while ((int)uVar21 < iVar2);
  }
  if (bVar13 == 0) {
LAB_14840751f:
    uVar11 = GetFirstValidRaytracingGeometryLODIndex(this,Fallback,false);
    if (uVar11 == 0xffffffff) {
      return;
    }
  }
  else {
    if (this->RenderData->RayTracingProxy->bUsingRenderingLODs == false) {
      FRayTracingInstanceCollector::AddReferencedGeometryGroupForDynamicUpdate
                (param_1,this->RenderData->RayTracingGeometryGroupHandle);
    }
    uVar11 = GetFirstValidRaytracingGeometryLODIndex(this,Fallback,true);
    if (uVar11 == 0xffffffff) {
      local_2b8 = 0;
      goto LAB_14840751f;
    }
  }
  pFVar4 = this->RenderData->RayTracingProxy;
  uVar15 = 0;
  if ((int)uVar11 < (pFVar4->LODs).Array.ArrayNum) {
    uVar15 = ~uVar11 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2a0 = *(longlong *)((pFVar4->LODs).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
  ;
  pFVar20 = pFVar14;
  local_2b7 = param_3;
  if (local_2b8 != 0) {
    if (((int)uVar11 < 0) || ((this->DynamicRayTracingGeometries).ArrayNum <= (int)uVar11)) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5038686508739987470>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                          ,0x80e,"DynamicRayTracingGeometries.IsValidIndex(ValidLODIndex)");
      if (!bVar10) {
        return;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar15 = 0;
    if ((int)uVar11 < (this->DynamicRayTracingGeometries).ArrayNum) {
      uVar15 = ~uVar11 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar5 = (this->DynamicRayTracingGeometries).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FRayTracingGeometry>)&this->DynamicRayTracingGeometries;
    if (FVar5 != (ForElementType<FRayTracingGeometry>)0x0) {
      FVar17 = FVar5;
    }
    pFVar20 = (FRayTracingGeometry *)((longlong)(int)uVar11 * 0x100 + (longlong)FVar17);
    if ((((param_3) || (pFVar20->DynamicGeometrySharedBufferGenerationID != -1)) ||
        (bVar10 = FRayTracingGeometry::IsValid(pFVar20), !bVar10)) ||
       ((bVar10 = FRayTracingGeometry::IsEvicted(pFVar20), bVar10 ||
        (local_2b7 = false, (pFVar20->GeometryState & RequiresBuild) != Invalid)))) {
      local_2b7 = true;
    }
  }
  local_288.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Materials.ArrayNum = 0;
  local_288.Materials.ArrayMax = 0;
  local_288.MaterialsView.DataPtr = (FMeshBatch *)0x0;
  local_288.MaterialsView._8_8_ = (ulonglong)(uint)local_288.MaterialsView._12_4_ << 0x20;
  local_288.bApplyLocalBoundsTransform = false;
  local_288.bThinGeometry = false;
  local_288.InstanceLayer = NearField;
  local_288.bInstanceMaskAndFlagsDirty = true;
  local_288.NumTransforms = 0;
  local_288.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.PrimitiveInstanceIndices.ArrayNum = 0;
  local_288.PrimitiveInstanceIndices.ArrayMax = 0;
  local_288.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
  local_288.PrimitiveInstanceIndicesView.ArrayNum = 0;
  local_288.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.InstanceTransforms.ArrayNum = 0;
  local_288.InstanceTransforms.ArrayMax = 0;
  local_288.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
  local_288.InstanceTransformsView._8_8_ =
       (ulonglong)(uint)local_288.InstanceTransformsView._12_4_ << 0x20;
  local_288.Geometry = pFVar20;
  if (local_2b8 == 0) {
    local_288.Geometry = *(FRayTracingGeometry **)(local_2a0 + 8);
  }
  if (((int)(local_288.Geometry)->_padding_ == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RayTracingInstance.Geometry->IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                          ,0x822,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (FInstanceDataUpdateTaskInfo *)(**(code **)(this->_padding_ + 0x230))(this);
  if (this_00 != (FInstanceDataUpdateTaskInfo *)0x0) {
    FInstanceDataUpdateTaskInfo::WaitForUpdateCompletion(this_00);
  }
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x104) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                            ,0x182,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(byte *)(lVar3 + 0x102) & 1) == 0) {
      piVar18 = (int *)(lVar3 + 0xc0);
    }
    else {
      piVar18 = (int *)(lVar3 + 0xf8);
    }
    if (1 < *piVar18) {
      if ((bWarnOnce != false) && (bWarnOnce = false, 2 < (byte)LogStaticMesh._0_1_)) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this->StaticMesh,&local_208,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_148407b4f;
    }
  }
  local_298 = (FMeshBatch *)&this->_padding_;
  iStack_290 = 1;
  local_288.InstanceTransformsView._8_8_ = CONCAT44(uStack_28c,1);
  local_288.NumTransforms = 1;
  uVar21 = 0;
  uVar15 = uVar21;
  if ((int)uVar11 < (this->RayTracingFallbackLODs).ArrayNum) {
    uVar15 = ~uVar11 >> 0x1f;
  }
  local_288.InstanceTransformsView.DataPtr = (TMatrix<double> *)local_298;
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar1 = &this->CachedRayTracingMaterials;
  iVar16 = (this->CachedRayTracingMaterials).ArrayNum;
  if ((*(int *)((this->RayTracingFallbackLODs).AllocatorInstance.Data +
               (longlong)(int)uVar11 * 0x28 + 0x10) == iVar16) &&
     (uVar11 == (int)this->CachedRayTracingMaterialsLODIndex)) {
    local_288.bInstanceMaskAndFlagsDirty = false;
  }
  else {
    piVar18 = &(this->CachedRayTracingMaterials).ArrayMax;
    pFVar6 = (FMeshBatch *)(pTVar1->AllocatorInstance).Data;
    if (*piVar18 < 0) {
      DestructItems<FMeshBatch,int>(pFVar6,iVar16);
      (this->CachedRayTracingMaterials).ArrayNum = 0;
      if (*piVar18 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,0,&pTVar1->AllocatorInstance,0,piVar18);
      }
    }
    else {
      DestructItems<FMeshBatch,int>(pFVar6,iVar16);
      (this->CachedRayTracingMaterials).ArrayNum = 0;
    }
    (**(code **)(this->_padding_ + 0x280))(this,uVar11,pTVar1);
    this->CachedRayTracingMaterialsLODIndex = (short)uVar11;
  }
  local_298 = (FMeshBatch *)(pTVar1->AllocatorInstance).Data;
  iVar16 = (this->CachedRayTracingMaterials).ArrayNum;
  if ((iVar16 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_288.MaterialsView._8_8_ = CONCAT44(uStack_28c,iVar16);
  local_288.MaterialsView.DataPtr = local_298;
  this_01 = local_2b0;
  iStack_290 = iVar16;
  if ((local_2b8 != 0) && (local_2b7 != false)) {
    iVar16 = (this->CachedRayTracingMaterials).ArrayNum;
    pFVar6 = (FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    uVar11 = *(uint *)(*(longlong *)(local_2a0 + 0x18) + 0xfc);
    local_1d8.MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)pFVar14;
    if (iVar16 != 0) {
      local_d0._0_4_ = iVar16;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,iVar16,0,&local_d8,iVar16,(int *)((longlong)&local_d0 + 4));
      ConstructItems<FMeshBatch,FMeshBatch,int>(local_d8.Data,pFVar6,iVar16);
      local_1d8.MeshBatches.AllocatorInstance.Data = local_d8.Data;
      iVar16 = (int)local_d0;
      uVar21 = local_d0._4_4_;
    }
    this_01 = local_2b0;
    local_1d8.NumTriangles = (pFVar20->Initializer).TotalPrimitiveCount;
    local_1d8.VertexBufferSize = uVar11 * 0xc;
    local_c8 = 0;
    local_b0 = local_210;
    local_a8 = 1;
    local_a4 = 0;
    local_98[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_98[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    afStack_90[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
    afStack_90[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_88[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_88[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    afStack_80[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
    afStack_80[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_78[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_78[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    afStack_70[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
    afStack_70[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_68[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
    local_68[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
    afStack_60[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
    afStack_60[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
    local_58 = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    local_1d8.bUsingIndirectDraw = false;
    local_1d8.Buffer = local_210;
    local_1d8.bApplyWorldPositionOffset = true;
    local_1d8.InstanceId = 0;
    local_1d8.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_1d8.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_1d8.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_1d8.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_1d8.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_1d8.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_1d8.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_1d8.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_1d8.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_1d8.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_1d8.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_1d8.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_1d8.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
    local_1d8.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
    local_1d8.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
    local_1d8.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
    local_1d8.bAlphaMasked = false;
    local_1d8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
    local_50 = (FRHIResource *)0x0;
    local_1d8.MeshBatches.ArrayNum = iVar16;
    local_1d8.MeshBatches.ArrayMax = uVar21;
    local_1d8.NumVertices = uVar11;
    local_1d8.Geometry = pFVar20;
    local_c4 = uVar11;
    local_c0 = local_1d8.VertexBufferSize;
    local_bc = local_1d8.NumTriangles;
    local_b8 = pFVar20;
    FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(local_2b0,local_2a8,&local_1d8);
    if (local_50 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_50);
    }
    DestructItems<FMeshBatch,int>((FMeshBatch *)local_d8.Data,(int)local_d0);
    if ((FMeshBatch *)local_d8.Data != (FMeshBatch *)0x0) {
      FMemory::Free(local_d8.Data);
    }
  }
  uVar11 = local_2b4;
  if (0 < iVar2) {
    do {
      uVar15 = (uint)pFVar14;
      if ((uVar11 >> (uVar15 & 0x1f) & 1) != 0) {
        pFVar12 = FRayTracingInstance::FRayTracingInstance(&local_148,&local_288);
        FRayTracingInstanceCollector::AddRayTracingInstance(this_01,uVar15,pFVar12);
      }
      pFVar14 = (FRayTracingGeometry *)(ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < iVar2);
  }
LAB_148407b4f:
  if (local_288.InstanceTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.InstanceTransforms.AllocatorInstance.Data);
  }
  if (local_288.PrimitiveInstanceIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.PrimitiveInstanceIndices.AllocatorInstance.Data);
  }
  FVar8.Data = local_288.Materials.AllocatorInstance.Data;
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)local_288.Materials.AllocatorInstance.Data,local_288.Materials.ArrayNum);
  if ((FMeshBatch *)FVar8.Data != (FMeshBatch *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}

// GetFirstValidRaytracingGeometryLODIndex @ 148407e40

int __thiscall
Nanite::FSceneProxy::GetFirstValidRaytracingGeometryLODIndex
          (FSceneProxy *this,ERayTracingMode param_1,bool param_2)

{
  FStaticMeshRenderData *this_00;
  FStaticMeshRayTracingProxy *pFVar1;
  FRayTracingGeometry *this_01;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  if (param_1 != Fallback) {
    if ((param_2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bForDynamicUpdate",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                           ,0x72d,L"Nanite Ray Tracing is not compatible with dynamic BLAS update.")
       , bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    return 0;
  }
  this_00 = this->RenderData;
  pFVar1 = this_00->RayTracingProxy;
  iVar6 = (pFVar1->LODs).Array.ArrayNum;
  if (pFVar1->bUsingRenderingLODs == false) {
    uVar7 = 0;
  }
  else {
    uVar7 = this->ClampedMinLOD;
    if (this->ClampedMinLOD < (int)(uint)this_00->CurrentFirstLODIdx) {
      uVar7 = (uint)this_00->CurrentFirstLODIdx;
    }
    uVar7 = FStaticMeshRenderData::GetFirstValidLODIdx(this_00,uVar7);
  }
  pTVar3 = CVarRayTracingNaniteProxyMeshesLODBias.Ref;
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  uVar8 = pTVar3->ShadowedValue[1] + uVar7;
  uVar9 = iVar6 - 1U;
  if ((int)uVar8 < (int)(iVar6 - 1U)) {
    uVar9 = uVar8;
  }
  if ((int)uVar7 < (int)uVar9) {
    uVar7 = uVar9;
  }
  if ((int)uVar7 < iVar6) {
    lVar10 = (longlong)(int)uVar7;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar7 < (pFVar1->LODs).Array.ArrayNum) {
        uVar9 = uVar8;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      this_01 = *(FRayTracingGeometry **)
                 (*(longlong *)((pFVar1->LODs).Array.AllocatorInstance.Data + lVar10 * 8) + 8);
      if (param_2) {
        if (this->RenderData->RayTracingProxy->bUsingRenderingLODs != false) {
          return uVar7;
        }
        uVar9 = 0;
        if ((int)uVar7 < (pFVar1->LODs).Array.ArrayNum) {
          uVar9 = uVar8;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        if ((*(byte *)(*(longlong *)((pFVar1->LODs).Array.AllocatorInstance.Data + lVar10 * 8) +
                      0x5c) & 4) != 0) {
          return uVar7;
        }
        uVar9 = 0;
        if ((int)uVar7 < (pFVar1->LODs).Array.ArrayNum) {
          uVar9 = uVar8;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        cVar5 = (**(code **)(**(longlong **)
                               ((pFVar1->LODs).Array.AllocatorInstance.Data + lVar10 * 8) + 0x18))()
        ;
        if (cVar5 != '\0') {
          return uVar7;
        }
      }
      else {
        bVar4 = FRayTracingGeometry::IsValid(this_01);
        if (((bVar4) && (bVar4 = FRayTracingGeometry::IsEvicted(this_01), !bVar4)) &&
           (bVar4 = FRayTracingGeometry::HasPendingBuildRequest(this_01), !bVar4)) {
          return uVar7;
        }
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar6);
  }
  return -1;
}

// GetInstanceDataUpdateTaskInfo @ 1484087e0

FInstanceDataUpdateTaskInfo * __thiscall
Nanite::FSceneProxy::GetInstanceDataUpdateTaskInfo(FSceneProxy *this)

{
  FInstanceDataSceneProxy *pFVar1;
  FInstanceDataUpdateTaskInfo *pFVar2;
  
  pFVar1 = (this->InstanceDataSceneProxy).Object;
  if (pFVar1 != (FInstanceDataSceneProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484087ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FInstanceDataUpdateTaskInfo *)(**(code **)(pFVar1->_padding_ + 0x10))();
    return pFVar2;
  }
  return (FInstanceDataUpdateTaskInfo *)0x0;
}

// GetInstanceDrawDistanceMinMax @ 148408800

bool __thiscall
Nanite::FSceneProxy::GetInstanceDrawDistanceMinMax(FSceneProxy *this,TVector2<float> *param_1)

{
  undefined8 local_res8;
  
  if (this->EndCullDistance != 0) {
    local_res8._4_4_ = (float)this->EndCullDistance;
    local_res8._0_4_ = (float)this->MinDrawDistance;
    param_1->field0_0x0 = local_res8;
    return true;
  }
  param_1->field0_0x0 = (TVector2<float>_u_0)0x0;
  return false;
}

// GetInstanceWorldPositionOffsetDisableDistance @ 1484088b0

bool __thiscall
Nanite::FSceneProxy::GetInstanceWorldPositionOffsetDisableDistance(FSceneProxy *this,float *param_1)

{
  *param_1 = (float)*(uint *)((longlong)&this->_padding_ + 4);
  return *(int *)((longlong)&this->_padding_ + 4) != 0;
}

// GetLightMapCoordinateIndex @ 1484089b0

int __thiscall Nanite::FSceneProxy::GetLightMapCoordinateIndex(FSceneProxy *this)

{
  if (this->StaticMesh != (UStaticMesh *)0x0) {
    return this->StaticMesh->LightMapCoordinateIndex;
  }
  return -1;
}

// GetLightRelevance @ 1484089d0

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
Nanite::FSceneProxy::GetLightRelevance
          (FSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3,bool *param_4,
          bool *param_5)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  piVar2 = (int *)(**(code **)((this->MeshInfo)._padding_ + 8))(&this->MeshInfo,local_res8,param_1);
  iVar1 = *piVar2;
  *param_3 = iVar1 != 0;
  *param_2 = iVar1 == 2;
  if ((iVar1 == 1) || (iVar1 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  *param_4 = bVar3;
  *param_5 = iVar1 == 3;
  return;
}

// GetMemoryFootprint @ 148409220

uint __thiscall Nanite::FSceneProxy::GetMemoryFootprint(FSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0xc20;
}

// GetMeshCardRepresentation @ 148409260

FCardRepresentationData * __thiscall
Nanite::FSceneProxy::GetMeshCardRepresentation(FSceneProxy *this)

{
  return this->CardRepresentationData;
}

// GetPreSkinnedLocalBounds @ 1484099a0

void __thiscall
Nanite::FSceneProxy::GetPreSkinnedLocalBounds
          (FSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  
  dVar1 = (this->StaticMeshBounds).Origin.field0_0x0._s_0.Y;
  (param_1->Origin).field0_0x0._s_0.X = (this->StaticMeshBounds).Origin.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Z = (this->StaticMeshBounds).Origin.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar1;
  dVar1 = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.Y = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.Y;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar1;
  param_1->SphereRadius = (this->StaticMeshBounds).SphereRadius;
  return;
}

// GetRayTracingGeometryGroupHandle @ 14840a170

int __thiscall Nanite::FSceneProxy::GetRayTracingGeometryGroupHandle(FSceneProxy *this)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                         ,0x8dd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  return this->RayTracingGeometryGroupHandle;
}

// GetResourceMeshInfo @ 14840a350

FResourceMeshInfo * __thiscall
Nanite::FSceneProxy::GetResourceMeshInfo
          (FSceneProxy *this,FResourceMeshInfo *__return_storage_ptr__)

{
  FResources *pFVar1;
  FStaticMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FResourceMeshInfo *pFVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  bool local_3c;
  FDebugName local_38;
  
  uVar12 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = false;
  FDebugName::FDebugName(&local_38);
  pFVar1 = this->Resources;
  local_58 = CONCAT44(pFVar1->NumHierarchyNodes,pFVar1->NumClusters);
  local_50 = CONCAT44(pFVar1->NumInputTriangles,pFVar1->NumInputVertices);
  local_48 = CONCAT44(local_48._4_4_,(int)this->_padding_ + 1);
  FDebugName::operator=(&local_38,(FName)this->StaticMesh->_padding_);
  pFVar2 = this->RenderData;
  local_40 = this->Resources->NumResidentClusters;
  local_3c = 0 < (this->Resources->AssemblyTransforms).ArrayNum;
  if (((pFVar2->LODResources).Array.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FResourceMeshInfo *)(*pcVar4)();
    return pFVar8;
  }
  local_res8[0] = 0xffffffff;
  lVar3 = *(longlong *)(pFVar2->LODResources).Array.AllocatorInstance.Data;
  local_48 = CONCAT44(*(undefined4 *)(lVar3 + 0x38),(uint)local_48);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
            (&local_68,local_res8,(int)this->_padding_ + 1);
  iVar10 = *(int *)(lVar3 + 0x38);
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < iVar10) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FResourceMeshInfo *)(*pcVar4)();
        return pFVar8;
      }
      lVar9 = lVar3 + 0x10;
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        lVar9 = *(longlong *)(lVar3 + 0x30);
      }
      uVar6 = *(uint *)(uVar13 + lVar9);
      uVar7 = 0;
      if ((int)uVar6 < local_68.ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FResourceMeshInfo *)(*pcVar4)();
        return pFVar8;
      }
      *(uint *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar11;
      uVar12 = (ulonglong)(uVar11 + 1);
      iVar10 = *(int *)(lVar3 + 0x38);
      uVar13 = uVar13 + 0x1c;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  (__return_storage_ptr__->SegmentMapping).AllocatorInstance.Data = local_68.AllocatorInstance.Data;
  (__return_storage_ptr__->SegmentMapping).ArrayNum = local_68.ArrayNum;
  (__return_storage_ptr__->SegmentMapping).ArrayMax = local_68.ArrayMax;
  __return_storage_ptr__->NumClusters = (uint)local_58;
  __return_storage_ptr__->NumNodes = local_58._4_4_;
  __return_storage_ptr__->NumVertices = (uint)local_50;
  __return_storage_ptr__->NumTriangles = local_50._4_4_;
  __return_storage_ptr__->NumMaterials = (uint)local_48;
  __return_storage_ptr__->NumSegments = local_48._4_4_;
  __return_storage_ptr__->NumResidentClusters = local_40;
  __return_storage_ptr__->bAssembly = local_3c;
  (__return_storage_ptr__->DebugName).Name = local_38.Name;
  (__return_storage_ptr__->DebugName).Number = local_38.Number;
  return __return_storage_ptr__;
}

// GetResourcePrimitiveInfo @ 14840a840

FResourcePrimitiveInfo * __thiscall
Nanite::FSceneProxy::GetResourcePrimitiveInfo
          (FSceneProxy *this,FResourcePrimitiveInfo *__return_storage_ptr__)

{
  FResources *pFVar1;
  
  pFVar1 = this->Resources;
  __return_storage_ptr__->ResourceID = pFVar1->RuntimeResourceID;
  __return_storage_ptr__->HierarchyOffset = pFVar1->HierarchyOffset;
  __return_storage_ptr__->ImposterIndex = pFVar1->ImposterIndex;
  __return_storage_ptr__->AssemblyTransformOffset = pFVar1->AssemblyTransformOffset;
  __return_storage_ptr__->AssemblyTransformCount = (pFVar1->AssemblyTransforms).ArrayNum;
  return __return_storage_ptr__;
}

// GetStreamableRenderAssetInfo @ 14840ac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Nanite::FSceneProxy::GetStreamableRenderAssetInfo
          (FSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  TObjectPtr<UStreamableRenderAsset>_u_0 *pTVar4;
  code *pcVar5;
  double dVar6;
  Type TVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  UMaterialInterface *pUVar11;
  FLightMap2D *this_00;
  FShadowMap2D *this_01;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStackY_278 [32];
  undefined1 local_228 [8];
  FPrimitiveMaterialInfo local_220;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  float local_1c8;
  undefined4 local_1c4;
  uint local_1c0;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  float local_178;
  undefined4 local_174;
  uint local_170;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  float local_128;
  undefined4 local_124;
  uint local_120;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  float local_d8;
  undefined4 local_d4;
  uint local_d0;
  FStreamingTextureLevelContext local_c8;
  FMeshUVChannelInfo local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_278;
  TVar7 = GetCurrentMaterialQualityLevelChecked();
  FStreamingTextureLevelContext::FStreamingTextureLevelContext
            (&local_c8,TVar7,(ULevel *)0x0,
             (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0);
  fVar16 = __real_3f800000;
  iVar10 = (int)this->_padding_;
  lVar12 = this->_padding_;
  local_c8.bForceNoUseBuiltData = true;
  lVar13 = (longlong)iVar10 * 0x50 + lVar12;
  while( true ) {
    if ((int)this->_padding_ != iVar10) {
      local_228[0] = 0;
      `TCheckedPointerIterator<Nanite::FSceneProxyBase::FMaterialSection_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_228);
    }
    if (lVar12 == lVar13) break;
    pUVar11 = (UMaterialInterface *)(**(code **)(**(longlong **)(lVar12 + 8) + 0x40))();
    if (pUVar11 != (UMaterialInterface *)0x0) {
      local_78.LocalUVDensities._0_8_ = *(undefined8 *)(lVar12 + 0x30);
      local_78.LocalUVDensities._8_8_ = *(undefined8 *)(lVar12 + 0x38);
      local_220.UVChannelData = &local_78;
      local_78.bOverrideDensities = false;
      local_78._2_1_ = 0;
      local_78._3_1_ = 0;
      local_78.bInitialized = true;
      local_220.PackedRelativeBox = 0xffff0000;
      local_220.Material = pUVar11;
      FStreamingTextureLevelContext::ProcessMaterial
                (&local_c8,param_1,&local_220,fVar16,param_2,false,(UPrimitiveComponent *)0x0);
    }
    lVar12 = lVar12 + 0x50;
  }
  FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_c8);
  dVar6 = __real_3e45798ee0000000;
  plVar3 = (longlong *)(this->MeshInfo)._padding_;
  if (plVar3 != (longlong *)0x0) {
    this_00 = (FLightMap2D *)(**(code **)(*plVar3 + 0x28))();
    if (this_00 != (FLightMap2D *)0x0) {
      bVar8 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)*(Type *)(this->_padding_ + 8));
      bVar9 = FLightMap2D::IsValid(this_00,bVar8 ^ 1);
      if (bVar9) {
        dVar1 = (this_00->CoordinateScale).field0_0x0._s_0.X;
        uVar14 = SUB84(dVar1,0);
        uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if ((dVar6 < dVar1) && (dVar2 = (this_00->CoordinateScale).field0_0x0._s_0.Y, dVar6 < dVar2)
           ) {
          if (dVar2 <= dVar1) {
            uVar14 = SUB84(dVar2,0);
            uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          fVar16 = (float)((double)this->StaticMesh->LightmapUVDensity /
                          (double)CONCAT44(uVar15,uVar14));
          local_208.DebugPtr = (UStreamableRenderAsset *)FLightMap2D::GetTexture(this_00,bVar8 ^ 1);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UTexture2D *)local_208.DebugPtr != (UTexture2D *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_208.DebugPtr);
          }
          local_200 = (param_1->Origin).field0_0x0._s_0.X;
          dStack_1f8 = (param_1->Origin).field0_0x0._s_0.Y;
          pTVar4 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
          local_1f0 = (param_1->Origin).field0_0x0._s_0.Z;
          dStack_1e8 = (param_1->BoxExtent).field0_0x0._s_0.X;
          local_1c0 = local_1c0 & 0xfffffffe | 2;
          local_1c4 = 0xffff0000;
          local_1e0 = (param_1->BoxExtent).field0_0x0._s_0.Y;
          dStack_1d8 = (param_1->BoxExtent).field0_0x0._s_0.Z;
          local_1d0 = param_1->SphereRadius;
          local_1c8 = fVar16;
          if ((pTVar4 <= &local_208) && (&local_208 < pTVar4 + (longlong)param_2->ArrayMax * 10)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == param_2->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar10 + 1;
          FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                    ((FStreamingRenderAssetPrimitiveInfo *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x50),
                     (FStreamingRenderAssetPrimitiveInfo *)&local_208.ObjectPtr);
          local_1b8.DebugPtr =
               (UStreamableRenderAsset *)FLightMap2D::GetAOMaterialMaskTexture(this_00);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UTexture2D *)local_1b8.DebugPtr != (UTexture2D *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1b8.DebugPtr);
          }
          local_1b0 = (param_1->Origin).field0_0x0._s_0.X;
          dStack_1a8 = (param_1->Origin).field0_0x0._s_0.Y;
          pTVar4 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
          local_1a0 = (param_1->Origin).field0_0x0._s_0.Z;
          dStack_198 = (param_1->BoxExtent).field0_0x0._s_0.X;
          local_170 = local_170 & 0xfffffffe | 2;
          local_174 = 0xffff0000;
          local_190 = (param_1->BoxExtent).field0_0x0._s_0.Y;
          dStack_188 = (param_1->BoxExtent).field0_0x0._s_0.Z;
          local_180 = param_1->SphereRadius;
          local_178 = fVar16;
          if ((pTVar4 <= &local_1b8) && (&local_1b8 < pTVar4 + (longlong)param_2->ArrayMax * 10)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == param_2->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar10 + 1;
          FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                    ((FStreamingRenderAssetPrimitiveInfo *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x50),
                     (FStreamingRenderAssetPrimitiveInfo *)&local_1b8.ObjectPtr);
          local_168.DebugPtr =
               (UStreamableRenderAsset *)FLightMap2D::GetSkyOcclusionTexture(this_00);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UTexture2D *)local_168.DebugPtr != (UTexture2D *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_168.DebugPtr);
          }
          local_160 = (param_1->Origin).field0_0x0._s_0.X;
          dStack_158 = (param_1->Origin).field0_0x0._s_0.Y;
          pTVar4 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
          local_150 = (param_1->Origin).field0_0x0._s_0.Z;
          dStack_148 = (param_1->BoxExtent).field0_0x0._s_0.X;
          local_120 = local_120 & 0xfffffffe | 2;
          local_124 = 0xffff0000;
          local_140 = (param_1->BoxExtent).field0_0x0._s_0.Y;
          dStack_138 = (param_1->BoxExtent).field0_0x0._s_0.Z;
          local_130 = param_1->SphereRadius;
          local_128 = fVar16;
          if ((pTVar4 <= &local_168) && (&local_168 < pTVar4 + (longlong)param_2->ArrayMax * 10)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == param_2->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar10 + 1;
          FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                    ((FStreamingRenderAssetPrimitiveInfo *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x50),
                     (FStreamingRenderAssetPrimitiveInfo *)&local_168.ObjectPtr);
        }
      }
    }
  }
  plVar3 = (longlong *)(this->MeshInfo)._padding_;
  if (plVar3 != (longlong *)0x0) {
    this_01 = (FShadowMap2D *)(**(code **)(*plVar3 + 0x20))();
    if (this_01 != (FShadowMap2D *)0x0) {
      if ((this_01->Texture).field0_0x0.DebugPtr == (UShadowMapTexture2D *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                           ,0x156,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dVar1 = (this_01->CoordinateScale).field0_0x0._s_0.X;
      dVar2 = (this_01->CoordinateScale).field0_0x0._s_0.Y;
      uVar14 = SUB84(dVar1,0);
      uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar2 <= dVar1) {
        uVar14 = SUB84(dVar2,0);
        uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      fVar16 = (float)((double)this->StaticMesh->LightmapUVDensity / (double)CONCAT44(uVar15,uVar14)
                      );
      if ((dVar6 < dVar1) && (dVar6 < dVar2)) {
        local_118.DebugPtr = (UStreamableRenderAsset *)FShadowMap2D::GetTexture(this_01);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UTexture2D *)local_118.DebugPtr != (UTexture2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_110 = (param_1->Origin).field0_0x0._s_0.X;
        dStack_108 = (param_1->Origin).field0_0x0._s_0.Y;
        pTVar4 = (TObjectPtr<UStreamableRenderAsset>_u_0 *)(param_2->AllocatorInstance).Data;
        local_100 = (param_1->Origin).field0_0x0._s_0.Z;
        dStack_f8 = (param_1->BoxExtent).field0_0x0._s_0.X;
        local_d0 = local_d0 & 0xfffffffe | 2;
        local_d4 = 0xffff0000;
        local_f0 = (param_1->BoxExtent).field0_0x0._s_0.Y;
        dStack_e8 = (param_1->BoxExtent).field0_0x0._s_0.Z;
        local_e0 = param_1->SphereRadius;
        local_d8 = fVar16;
        if ((pTVar4 <= &local_118) && (&local_118 < pTVar4 + (longlong)param_2->ArrayMax * 10)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar10 + 1;
        FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
                  ((FStreamingRenderAssetPrimitiveInfo *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x50),
                   (FStreamingRenderAssetPrimitiveInfo *)&local_118.ObjectPtr);
      }
    }
  }
  return;
}

// GetTypeHash @ 14840b760

ulong64 __thiscall Nanite::FSceneProxy::GetTypeHash(FSceneProxy *this)

{
  return 0x155239dc8;
}

// GetViewRelevance @ 14840ba60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
Nanite::FSceneProxy::GetViewRelevance
          (FSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ECustomDepthMode EVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar7 = 0;
  uVar8 = 0;
  if ((!bVar4) || (uVar6 = 4, (param_1->Family->EngineShowFlags).NaniteMeshes == 0)) {
    uVar6 = uVar7;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar6;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3;
  if (GNaniteCustomDepthEnabled != 0) {
    EVar5 = GetCustomDepthMode();
    if ((EVar5 != Disabled) && (uVar6 = 0x20, (this->_padding_ & 0x4000000000000) != 0))
    goto LAB_14840bb33;
  }
  uVar6 = uVar7;
LAB_14840bb33:
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar6;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar7 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 =
       uVar7 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xffffdfff | 0x81;
  FMaterialRelevance::SetPrimitiveViewRelevance
            ((FMaterialRelevance *)&this->_padding_,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if ((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
     ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
      ((bVar3 & 0x72) != 0)))) {
    uVar8 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar8 >> 4;
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// HasDistanceFieldRepresentation @ 14840bdb0

bool __thiscall Nanite::FSceneProxy::HasDistanceFieldRepresentation(FSceneProxy *this)

{
  if (((this->_padding_ & 0x220000000000) == 0x220000000000) &&
     (this->DistanceFieldData != (FDistanceFieldVolumeData *)0x0)) {
    return true;
  }
  return false;
}

// HasRayTracingRepresentation @ 14840be10

bool __thiscall Nanite::FSceneProxy::HasRayTracingRepresentation(FSceneProxy *this)

{
  return this->bHasRayTracingRepresentation;
}

// IsCollisionView @ 14840f270

bool __thiscall
Nanite::FSceneProxy::IsCollisionView
          (FSceneProxy *this,FEngineShowFlags *param_1,bool *param_2,bool *param_3)

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
  if ((this->_padding_ & 0x20000000) != 0) {
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

// IsReversedCullingNeeded @ 14840f8c0

bool __thiscall Nanite::FSceneProxy::IsReversedCullingNeeded(FSceneProxy *this,bool param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(this->_padding_ + 0x50))();
  if ((bVar1 != ((byte)this->_padding_ & 1)) && (!param_1)) {
    return true;
  }
  return false;
}

// OnEvaluateWorldPositionOffsetChanged_RenderThread @ 1484130f0

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
Nanite::FSceneProxy::OnEvaluateWorldPositionOffsetChanged_RenderThread(FSceneProxy *this)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  UMaterial *pUVar6;
  undefined8 uVar7;
  IRendererModule *pIVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  iVar3 = (int)this->_padding_;
  puVar10 = (undefined8 *)this->_padding_;
  puVar11 = puVar10 + (longlong)iVar3 * 10;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<Nanite::FSceneProxyBase::FMaterialSection,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar10 == puVar11) break;
    if (((this->_padding_ & 0x10000) == 0) || ((*(byte *)((longlong)puVar10 + 0x2d) & 0x40) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar2 = *(byte *)((longlong)puVar10 + 0x2e);
    if (((bVar2 & 2) == 0) ||
       (((bVar2 & 1) == 0 && ((*(byte *)((longlong)puVar10 + 0x2c) & 8) == 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((bVar4) || (bVar5)) || (*(char *)((longlong)puVar10 + 0x2d) < '\0')) ||
       (*(char *)((longlong)puVar10 + 0x2f) < '\0')) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    if (((bVar2 & 1) == 0) && ((*(byte *)((longlong)puVar10 + 0x2c) & 8) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar9 != 0) || (bVar4)) {
      *puVar10 = puVar10[1];
      bVar2 = *(byte *)((longlong)&this->_padding_ + 1);
      *(byte *)((longlong)&this->_padding_ + 1) = (bVar2 & 1 | bVar9) ^ bVar2 & 0xfe;
      puVar10 = puVar10 + 10;
    }
    else {
      if ((*(byte *)(puVar10 + 8) & 8) == 0) {
        pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      else {
        pUVar6 = (GEngine->NaniteHiddenSectionMaterial).field0_0x0.DebugPtr;
      }
      uVar7 = (**(code **)(pUVar6->_padding_ + 0x310))();
      *puVar10 = uVar7;
      puVar10 = puVar10 + 10;
    }
  }
  pIVar8 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x00014841323d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar8 + 0x248))
            (pIVar8,this->_padding_,*(code **)((longlong)*pIVar8 + 0x248));
  return;
}

// ReleaseDynamicRayTracingGeometries @ 14841efa0

void __thiscall Nanite::FSceneProxy::ReleaseDynamicRayTracingGeometries(FSceneProxy *this)

{
  TArray<FRayTracingGeometry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<FRayTracingGeometry> FVar6;
  ForElementType<FRayTracingGeometry> FVar7;
  undefined1 local_res8 [8];
  
  if (((this->DynamicRayTracingGeometries).ArrayNum != 0) && (!this->bDynamicRayTracingGeometry)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicRayTracingGeometries.IsEmpty() || bDynamicRayTracingGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                       ,0x7a3,
                       L"Proxy shouldn\'t have DynamicRayTracingGeometries since bDynamicRayTracingGeometry is false."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
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
      `TCheckedPointerIterator<FRayTracingGeometry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
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
  return;
}

// SetEvaluateWorldPositionOffsetInRayTracing @ 148424480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxy::SetEvaluateWorldPositionOffsetInRayTracing
          (FSceneProxy *this,FRHICommandListBase *param_1,bool param_2)

{
  undefined1 uVar1;
  FStaticMeshRayTracingProxy *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  bool local_res8 [8];
  bool local_res20 [8];
  
  if (this->bSupportRayTracing) {
    lVar8 = 0;
    pFVar2 = this->RenderData->RayTracingProxy;
    uVar10 = 0;
    if (pFVar2->bUsingRenderingLODs != false) {
      uVar10 = this->ClampedMinLOD;
    }
    uVar6 = 0;
    if ((int)uVar10 < (pFVar2->LODs).Array.ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = lVar8;
    if (*(int *)(*(longlong *)
                  (*(longlong *)
                    ((pFVar2->LODs).Array.AllocatorInstance.Data + (longlong)(int)uVar10 * 8) + 0x18
                  ) + 0xac) != 0) {
      lVar7 = 2;
    }
    this->field_0xba2 = (byte)lVar7 | this->field_0xba2 & 0xfd;
    pTVar4 = CVarRayTracingNaniteProxyMeshesWPO.Ref;
    if ((param_2) && ((this->_padding_ & 0x400000000000) != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    cVar9 = '\0';
    if ((lVar7 != 0) && (bVar5)) {
      bVar5 = IsInParallelGameThread();
      if ((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) {
        lVar8 = 4;
      }
      if (*(int *)((longlong)pTVar4->ShadowedValue + lVar8) != 0) {
        GetStaticMeshRayTracingWPOConfig(local_res8,local_res20);
        this->bHasRayTracingRepresentation = local_res8[0];
        cVar9 = local_res20[0];
      }
    }
    uVar1 = this->field_0xba2;
    if (this->bDynamicRayTracingGeometry) {
      if (cVar9 == '\0') {
        ReleaseDynamicRayTracingGeometries(this);
        this->bDynamicRayTracingGeometry = false;
      }
    }
    else if (cVar9 != '\0') {
      this->field_0xba2 = (cVar9 << 2 ^ uVar1) & 4U ^ uVar1;
      CreateDynamicRayTracingGeometries(this,param_1);
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x4f8))((longlong *)this->_padding_,this);
  }
  return;
}

// SetInstanceCullDistance_RenderThread @ 148424e30

void __thiscall
Nanite::FSceneProxy::SetInstanceCullDistance_RenderThread
          (FSceneProxy *this,float param_1,float param_2)

{
  this->EndCullDistance = (uint)(longlong)param_2;
  return;
}

// SetMeshElementGeometrySource @ 148425270

uint __thiscall
Nanite::FSceneProxy::SetMeshElementGeometrySource
          (FSceneProxy *this,FStaticMeshSection *param_1,FSectionInfo *param_2,
          FRawStaticIndexBuffer *param_3,FAdditionalStaticMeshIndexBuffers *param_4,
          FVertexFactory *param_5,bool param_6,bool param_7,FMeshBatch *param_8)

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
  if ((param_8->Elements).ArrayNum < 1) {
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
  FVar3 = (param_8->Elements).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMeshBatchElement>)param_8;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar8 = FVar3;
  }
  if (param_6) {
    if ((param_4 == (FAdditionalStaticMeshIndexBuffers *)0x0) ||
       ((int)(param_4->WireframeIndexBuffer)._padding_ == -1)) {
      puVar1 = (uchar *)((longlong)FVar8 + 0x58);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      *(FRawStaticIndexBuffer **)((longlong)FVar8 + 0x18) = param_3;
      iVar7 = param_3->CachedNumIndices;
      if (iVar7 < 0) {
        iVar7 = (int)(param_3->IndexStorage)._padding_;
        if (param_3->b32Bit == false) {
          iVar7 = iVar7 / 2;
        }
        else {
          iVar7 = (int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2;
        }
      }
      param_8->Type = 0;
      uVar6 = iVar7 / 3 + (iVar7 >> 0x1f) +
              (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
      param_8->bDisableBackfaceCulling = 1;
      param_8->bWireframe = 1;
    }
    else {
      *(uint *)&param_8->field_0xd4 = *(uint *)&param_8->field_0xd4 & 0xfffffd7f;
      *(uint *)&param_8->field_0xd4 = *(uint *)&param_8->field_0xd4 | 0x100;
      puVar1 = (uchar *)((longlong)FVar8 + 0x58);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      *(FRawStaticIndexBuffer **)((longlong)FVar8 + 0x18) = &param_4->WireframeIndexBuffer;
      iVar7 = (param_4->WireframeIndexBuffer).CachedNumIndices;
      if (iVar7 < 0) {
        iVar7 = (int)(param_4->WireframeIndexBuffer).IndexStorage._padding_;
        if ((param_4->WireframeIndexBuffer).b32Bit != false) {
          uVar6 = ((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) / 2;
          goto LAB_1484253de;
        }
        iVar7 = iVar7 / 2;
      }
      uVar6 = iVar7 / 2;
    }
  }
  else {
    param_8->Type = 0;
    if (!param_7) {
      param_4 = (FAdditionalStaticMeshIndexBuffers *)param_3;
    }
    *(FAdditionalStaticMeshIndexBuffers **)((longlong)FVar8 + 0x18) = param_4;
    *(uint *)((longlong)FVar8 + 0x58) = param_1->FirstIndex;
    uVar6 = param_1->NumTriangles;
  }
LAB_1484253de:
  *(uint *)((longlong)FVar8 + 0x5c) = uVar6;
  param_8->VertexFactory = param_5;
  return uVar6;
}

// SetWorldPositionOffsetDisableDistance_GameThread @ 1484262e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Nanite::FSceneProxy::SetWorldPositionOffsetDisableDistance_GameThread(FSceneProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FSceneProxy *pFStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Nanite::FSceneProxy::SetWorldPositionOffsetDisableDistance_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FSceneProxy::SetWorldPositionOffsetDisableDistance_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_Nanite::FSceneProxy::SetWorldPositionOffsetDisableDistance_GameThread_::__l2::TSTR_CmdSetWPODisableDistance1755>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`Nanite::FSceneProxy::SetWorldPositionOffsetDisableDistance_GameThread'::__l2::TSTR_CmdSetWPODisableDistance1755>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetupFallbackRayTracingMaterials @ 148426a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxy::SetupFallbackRayTracingMaterials
          (FSceneProxy *this,int param_1,TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FStaticMeshRayTracingProxy *pFVar2;
  longlong lVar3;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined4 *puVar18;
  longlong local_res8;
  longlong local_58;
  
  lVar15 = (longlong)param_1;
  pFVar2 = this->RenderData->RayTracingProxy;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar14 = 0;
  if (param_1 < (pFVar2->LODs).Array.ArrayNum) {
    uVar14 = uVar11;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar3 = *(longlong *)((pFVar2->LODs).Array.AllocatorInstance.Data + lVar15 * 8);
  pTVar4 = this->RenderData->RayTracingProxy->LODVertexFactories;
  uVar14 = 0;
  if (param_1 < pTVar4->ArrayNum) {
    uVar14 = uVar11;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = (pTVar4->AllocatorInstance).Data + lVar15 * 0x470;
  uVar14 = 0;
  if (param_1 < (this->RayTracingFallbackLODs).ArrayNum) {
    uVar14 = uVar11;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = (this->RayTracingFallbackLODs).AllocatorInstance.Data + lVar15 * 0x28;
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_>::SetNum(param_2,*(int *)(pFVar1 + 0x10),Default);
  uVar14 = 0;
  if (0 < param_2->ArrayNum) {
    lVar15 = 0;
    local_res8 = 0;
    local_58 = 0;
    do {
      uVar12 = ~uVar14 >> 0x1f;
      lVar16 = *(longlong *)(lVar3 + 0x10);
      uVar11 = 0;
      if ((int)uVar14 < *(int *)(lVar16 + 0x28)) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)(lVar16 + 0x20) != 0) {
        lVar16 = *(longlong *)(lVar16 + 0x20);
      }
      puVar18 = (undefined4 *)(local_58 + lVar16);
      uVar11 = 0;
      if ((int)uVar14 < *(int *)(pFVar1 + 0x10)) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = pFVar1;
      if (*(FScriptContainerElement **)(pFVar1 + 8) != (FScriptContainerElement *)0x0) {
        pFVar9 = *(FScriptContainerElement **)(pFVar1 + 8);
      }
      uVar11 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = (param_2->AllocatorInstance).Data + local_res8;
      if ((*(int *)(pFVar13 + 0xa0) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = pFVar13;
      if (*(FScriptContainerElement **)(pFVar13 + 0x98) != (FScriptContainerElement *)0x0) {
        pFVar17 = *(FScriptContainerElement **)(pFVar13 + 0x98);
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      if (puVar18[2] != 0) {
        if ((*(int *)(pFVar13 + 0xa0) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar10 = pFVar13;
        if (*(FScriptContainerElement **)(pFVar13 + 0x98) != (FScriptContainerElement *)0x0) {
          pFVar10 = *(FScriptContainerElement **)(pFVar13 + 0x98);
        }
        *(uint *)(pFVar13 + 0xd4) = *(uint *)(pFVar13 + 0xd4) & 0xfffffc7f;
        *(undefined8 *)(pFVar10 + 0x18) = uVar5;
        *(undefined4 *)(pFVar10 + 0x58) = puVar18[1];
        *(undefined4 *)(pFVar10 + 0x5c) = puVar18[2];
      }
      *(FScriptContainerElement **)(pFVar13 + 0xa8) = pFVar8;
      *(undefined8 *)(pFVar17 + 0x40) = *(undefined8 *)(pFVar8 + 0x218);
      *(undefined4 *)(pFVar17 + 0x68) = puVar18[3];
      *(undefined4 *)(pFVar17 + 0x6c) = puVar18[4];
      uVar11 = *(uint *)(pFVar13 + 0xd4);
      *(undefined8 *)(pFVar13 + 0xb0) = *(undefined8 *)(pFVar9 + lVar15 * 8);
      *(uint *)(pFVar13 + 0xd4) = uVar11 & 0xffffffbf;
      *(uint *)(pFVar13 + 0xcc) = uVar14;
      pFVar13[0xd2] = (FScriptContainerElement)0x0;
      if ((*(char *)((longlong)puVar18 + 0x15) == '\0') || ((this->_padding_ & 0x20000000000) == 0))
      {
        uVar12 = 0;
      }
      else {
        uVar12 = 0x800000;
      }
      *(uint *)(pFVar13 + 0xd4) = uVar11 & 0xff7fffbf | uVar12;
      local_res8 = local_res8 + 0xe0;
      local_58 = local_58 + 0x1c;
      *(uint *)(pFVar13 + 0xd4) =
           -(uint)((this->Resources->VoxelMaterialsMask & 1L << ((byte)*puVar18 & 0x3f)) != 0) &
           0x1000000 | uVar11 & 0xfe7fffbf | uVar12;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      *(TGlobalResource<FIdentityPrimitiveUniformBuffer,1> **)(pFVar17 + 8) =
           &GIdentityPrimitiveUniformBuffer;
    } while ((int)uVar14 < param_2->ArrayNum);
  }
  return;
}

// operator() @ 15052ab20

bool __thiscall
`Nanite::FSceneProxy::GetDynamicRayTracingInstances_Internal'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5038686508739987389>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5038686508739987389>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

