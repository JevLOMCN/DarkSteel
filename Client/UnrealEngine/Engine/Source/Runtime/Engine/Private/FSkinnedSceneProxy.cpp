// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 29

// CanApplyStreamableRenderAssetScaleFactor @ 147ce3da0

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
Nanite::FSkinnedSceneProxy::CanApplyStreamableRenderAssetScaleFactor(FSkinnedSceneProxy *this)

{
  return true;
}

// GetSkinningSceneExtensionProxy @ 147d0ddc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinningSceneExtensionProxy * __thiscall
Nanite::FSkinnedSceneProxy::GetSkinningSceneExtensionProxy(FSkinnedSceneProxy *this)

{
  if ((((this->field_0x78 & 2) == 0) && ((this->field_0x7f & 0x20) == 0)) &&
     ((this->field_0x7c & 4) == 0)) {
    return (FSkinningSceneExtensionProxy *)0x0;
  }
  return (this->SceneExtensionProxy).Ptr;
}

// HasRayTracingRepresentation @ 147d13a70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall Nanite::FSkinnedSceneProxy::HasRayTracingRepresentation(FSkinnedSceneProxy *this)

{
  return this->bHasRayTracingRepresentation;
}

// IsRayTracingRelevant @ 147d1a450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall Nanite::FSkinnedSceneProxy::IsRayTracingRelevant(FSkinnedSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 147d1a480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall Nanite::FSkinnedSceneProxy::IsRayTracingStaticRelevant(FSkinnedSceneProxy *this)

{
  return (bool)(~this->bDynamicRayTracingGeometry & 1);
}

// FSkinnedSceneProxy @ 1483e6dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSkinnedSceneProxy * __thiscall
Nanite::FSkinnedSceneProxy::FSkinnedSceneProxy
          (FSkinnedSceneProxy *this,FMaterialAudit *param_1,FSkinnedMeshSceneProxyDesc *param_2,
          FSkeletalMeshRenderData *param_3,bool param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uchar *puVar3;
  undefined4 *puVar4;
  FSkeletalMeshRenderData *pFVar5;
  longlong lVar6;
  ForElementType<Nanite::FMaterialAuditEntry> FVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FMaterialAudit *pFVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  undefined1 uVar17;
  int iVar18;
  USkinnedAsset *pUVar19;
  FSkinningSceneExtensionProxy *pFVar20;
  TOptional<FLinearColor> *pTVar21;
  FSkinnedSceneProxy *pFVar22;
  longlong lVar23;
  UMaterial *pUVar24;
  undefined8 uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ForElementType<Nanite::FMaterialAuditEntry> FVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  FLLMScope local_res8 [2];
  FMaterialAudit *local_res10;
  FSkinnedMeshSceneProxyDesc *local_res18;
  uint local_res20;
  uint local_a8;
  longlong local_a0;
  FName local_88;
  longlong local_80;
  FMemScope local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_res10 = param_1;
  local_res18 = param_2;
  FSceneProxyBase::FSceneProxyBase((FSceneProxyBase *)this,(FPrimitiveSceneProxyDesc *)param_2);
  *(undefined ***)this = &___7FSkinnedSceneProxy_Nanite__6B_;
  this->Resources = (param_3->NaniteResourcesPtr).Ptr;
  this->MeshObject = param_2->MeshObject;
  pUVar19 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_2);
  this->SkinnedAsset = pUVar19;
  pFVar20 = (FSkinningSceneExtensionProxy *)
            (**(code **)(this->MeshObject->_padding_ + 0x88))(this->MeshObject,pUVar19);
  (this->SceneExtensionProxy).Ptr = pFVar20;
  uVar28 = 0;
  this->RenderData = param_3;
  (this->CachedRayTracingMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRayTracingMaterials).ArrayNum = 0;
  (this->CachedRayTracingMaterials).ArrayMax = 0;
  this->bDynamicRayTracingGeometry = '\x01';
  this->bHasRayTracingRepresentation = '\x01';
  this->RayTracingGeometryGroupHandle = -1;
  this->CachedRayTracingMaterialsLODIndex = -1;
  this->NumLODs = 1;
  this->CardRepresentationData = (FCardRepresentationData *)0x0;
  this->NaniteResourceID = 0xffffffff;
  this->NaniteHierarchyOffset = 0xffffffff;
  pTVar21 = FSkinnedMeshSceneProxyDesc::GetDebugDrawColor(param_2);
  (this->DebugDrawColor).bIsSet = false;
  bVar14 = pTVar21->bIsSet;
  (this->DebugDrawColor).bIsSet = bVar14;
  if (bVar14 != false) {
    uVar25 = *(undefined8 *)((longlong)&(pTVar21->TypedValue).field0_0x0 + 8);
    *(undefined8 *)&(this->DebugDrawColor).TypedValue.field0_0x0 =
         *(undefined8 *)&(pTVar21->TypedValue).field0_0x0;
    *(undefined8 *)((longlong)&(this->DebugDrawColor).TypedValue.field0_0x0 + 8) = uVar25;
  }
  bVar14 = FSkinnedMeshSceneProxyDesc::ShouldDrawDebugSkeleton(param_2);
  this->bDrawDebugSkeleton = '\0';
  this->field_0x354 = this->field_0x354 | bVar14;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_88 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(local_78,&local_88,true);
  cVar15 = (**(code **)(this->MeshObject->_padding_ + 0x50))();
  if ((cVar15 == '\0') &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeshObject->IsNaniteMesh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                          ,0x99a,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pFVar22 = (FSkinnedSceneProxy *)(*pcVar8)();
    return pFVar22;
  }
  this->field_0x84 = this->field_0x84 | 0x40;
  if (((this->field_0x81 & 4) != 0) && ((param_2->bAllowAlwaysVisible == 0 || (1 < this->NumLODs))))
  {
    this->field_0x81 = this->field_0x81 & 0xfb;
  }
  this->field_0x80 = this->field_0x80 & 0xbf | 0x20;
  *(float *)&this->field_0x298 = param_2->NanitePixelProgrammableDistance;
  this->field_0x83 = (param_1->field_0xf8 << 2 ^ this->field_0x83) & 0x20 ^ this->field_0x83;
  FSkinnedMeshSceneProxyDesc::GetPreSkinnedLocalBounds(param_2,&this->PreSkinnedLocalBounds);
  if (param_2->bPerBoneMotionBlur != '\0') {
    this->field_0x82 = this->field_0x82 | 0x80;
  }
  pFVar5 = this->RenderData;
  if (((pFVar5->LODRenderData).Array.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    pFVar22 = (FSkinnedSceneProxy *)(*pcVar8)();
    return pFVar22;
  }
  lVar33 = *(longlong *)(pFVar5->LODRenderData).Array.AllocatorInstance.Data;
  local_80 = lVar33;
  lVar23 = (**(code **)(*(longlong *)this->SkinnedAsset + 0x330))(this->SkinnedAsset,0);
  uVar27 = 0;
  local_res20 = 0;
  local_a8 = 0;
  TArray<Nanite::FSceneProxyBase::FMaterialSection,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Nanite::FSceneProxyBase::FMaterialSection,TSizedDefaultAllocator<32>_> *)
             &this->field_0x280,*(int *)(lVar33 + 0x18),Default);
  uVar12 = _UNK_15076b18c;
  uVar11 = _UNK_15076b188;
  uVar10 = _UNK_15076b184;
  uVar9 = ___xmm_3f80000000000000000000003f800000;
  iVar18 = *(int *)(lVar33 + 0x18);
  uVar29 = uVar27;
  if (0 < iVar18) {
    local_a0 = 0;
    uVar31 = uVar28;
    uVar32 = uVar28;
    do {
      uVar30 = (uint)uVar31;
      uVar27 = ~uVar30 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar30 < iVar18) {
        uVar29 = uVar27;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pFVar22 = (FSkinnedSceneProxy *)(*pcVar8)();
        return pFVar22;
      }
      lVar33 = *(longlong *)(lVar33 + 0x10);
      uVar29 = 0;
      if ((int)uVar30 < *(int *)&this->field_0x288) {
        uVar29 = uVar27;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pFVar22 = (FSkinnedSceneProxy *)(*pcVar8)();
        return pFVar22;
      }
      lVar6 = *(longlong *)&this->field_0x280;
      *(uint *)(lVar6 + 0x10 + uVar28) = (uint)*(ushort *)(lVar33 + uVar32);
      pbVar2 = (byte *)(lVar6 + 0x40 + uVar28);
      *pbVar2 = *pbVar2 ^ (*(char *)(lVar33 + 0xd + uVar32) << 4 ^ *(byte *)(lVar6 + 0x40 + uVar28))
                          & 0x10;
      if ((int)uVar30 < *(int *)(lVar23 + 0x10)) {
        pUVar19 = this->SkinnedAsset;
        pcVar8 = *(code **)(*(longlong *)pUVar19 + 0x338);
        if (((int)uVar30 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          pFVar22 = (FSkinnedSceneProxy *)(*pcVar8)();
          return pFVar22;
        }
        cVar15 = (*pcVar8)(pUVar19);
        param_2 = local_res18;
        if (cVar15 != '\0') {
          uVar29 = 0;
          if ((int)uVar30 < *(int *)(lVar23 + 0x10)) {
            uVar29 = uVar27;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FSkinnedSceneProxy *)(*pcVar8)();
            return pFVar22;
          }
          *(undefined4 *)(lVar6 + 0x10 + uVar28) =
               *(undefined4 *)(*(longlong *)(lVar23 + 8) + local_a0 * 4);
          iVar18 = (**(code **)(*(longlong *)this->SkinnedAsset + 0x340))();
          if (*(int *)(lVar6 + 0x10 + uVar28) < iVar18) {
            iVar18 = *(int *)(lVar6 + 0x10 + uVar28);
          }
          iVar26 = 0;
          if (0 < iVar18) {
            iVar26 = iVar18;
          }
          *(int *)(lVar6 + 0x10 + uVar28) = iVar26;
          param_2 = local_res18;
        }
      }
      iVar18 = *(int *)&this->field_0x290;
      if (*(int *)&this->field_0x290 < *(int *)(lVar6 + 0x10 + uVar28)) {
        iVar18 = *(int *)(lVar6 + 0x10 + uVar28);
      }
      *(int *)&this->field_0x290 = iVar18;
      bVar14 = NaniteVoxelsSupported();
      if ((bVar14) &&
         ((this->Resources->VoxelMaterialsMask >>
           ((ulonglong)*(uint *)(lVar6 + 0x10 + uVar28) & 0x3f) & 1) != 0)) {
        bVar16 = 4;
      }
      else {
        bVar16 = 0;
      }
      pbVar2 = (byte *)(lVar6 + 0x40 + uVar28);
      *pbVar2 = *pbVar2 & 0xfb;
      pbVar2 = (byte *)(lVar6 + 0x40 + uVar28);
      *pbVar2 = *pbVar2 | bVar16;
      bVar14 = FSkeletalMeshObject::IsMaterialHidden
                         (this->MeshObject,0,*(int *)(lVar6 + 0x10 + uVar28));
      *(byte *)(lVar6 + 0x40 + uVar28) = *(byte *)(lVar6 + 0x40 + uVar28) & 0xf7 | bVar14 << 3;
      pUVar24 = (UMaterial *)
                FSkinnedMeshSceneProxyDesc::GetMaterial(param_2,*(int *)(lVar6 + 0x10 + uVar28));
      if (((pUVar24 == (UMaterial *)0x0) ||
          (cVar15 = (**(code **)(pUVar24->_padding_ + 0x378))(pUVar24,0), cVar15 == '\0')) ||
         (cVar15 = (**(code **)(pUVar24->_padding_ + 0x378))(pUVar24,0x12), cVar15 == '\0')) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((*(byte *)(lVar6 + 0x40 + uVar28) & 4) == 0) {
        if (pUVar24 != (UMaterial *)0x0) goto LAB_1483e735d;
LAB_1483e7362:
        if ((*(byte *)(lVar6 + 0x40 + uVar28) & 8) == 0) {
          pUVar24 = UMaterial::GetDefaultMaterial(MD_Surface);
        }
        else {
          pUVar24 = (GEngine->NaniteHiddenSectionMaterial).field0_0x0.DebugPtr;
        }
      }
      else {
        if ((pUVar24 == (UMaterial *)0x0) ||
           (cVar15 = (**(code **)(pUVar24->_padding_ + 0x378))(pUVar24,0x13), cVar15 == '\0'))
        goto LAB_1483e7362;
LAB_1483e735d:
        if (!bVar14) goto LAB_1483e7362;
      }
      uVar25 = (**(code **)(pUVar24->_padding_ + 0x310))(pUVar24);
      pFVar13 = local_res10;
      uVar29 = *(uint *)(lVar6 + 0x10 + uVar28);
      *(undefined8 *)(lVar6 + 8 + uVar28) = uVar25;
      uVar35 = uVar9;
      uVar36 = uVar10;
      uVar37 = uVar11;
      uVar38 = uVar12;
      if ((-1 < (int)uVar29) && ((int)uVar29 < (local_res10->Entries).ArrayNum)) {
        FVar34 = (ForElementType<Nanite::FMaterialAuditEntry>)&local_res10->Entries;
        uVar27 = 0;
        if ((int)uVar29 < (local_res10->Entries).ArrayNum) {
          uVar27 = ~uVar29 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          pFVar22 = (FSkinnedSceneProxy *)(*pcVar8)();
          return pFVar22;
        }
        FVar7 = (pFVar13->Entries).AllocatorInstance.SecondaryData;
        if (FVar7 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FVar34 = FVar7;
        }
        puVar3 = (uchar *)((longlong)FVar34 + 0x20) + (longlong)(int)uVar29 * 0x30;
        param_2 = local_res18;
        uVar35 = *(undefined4 *)puVar3;
        uVar36 = *(undefined4 *)(puVar3 + 4);
        uVar37 = *(undefined4 *)(puVar3 + 8);
        uVar38 = *(undefined4 *)(puVar3 + 0xc);
      }
      puVar4 = (undefined4 *)(lVar6 + 0x30 + uVar28);
      *puVar4 = uVar35;
      puVar4[1] = uVar36;
      puVar4[2] = uVar37;
      puVar4[3] = uVar38;
      local_68 = uVar35;
      uStack_64 = uVar36;
      uStack_60 = uVar37;
      uStack_5c = uVar38;
      cVar15 = (**(code **)(pUVar24->_padding_ + 0x478))(pUVar24);
      if (cVar15 == '\0') {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)(lVar33 + 8 + uVar32);
      }
      uVar31 = (ulonglong)(uVar30 + 1);
      uVar29 = local_a8 + *(int *)(lVar33 + 8 + uVar32);
      uVar28 = uVar28 + 0x50;
      uVar32 = uVar32 + 0x118;
      uVar27 = local_res20 + iVar18;
      local_a0 = local_a0 + 1;
      iVar18 = *(int *)(local_80 + 0x18);
      lVar33 = local_80;
      local_res20 = uVar27;
      local_a8 = uVar29;
    } while ((int)(uVar30 + 1) < iVar18);
  }
  FSceneProxyBase::OnMaterialsUpdated((FSceneProxyBase *)this,false);
  this->field_0x83 = this->field_0x83 & 0xfe;
  this->field_0x2a0 = 0x80;
  uVar17 = 0xc0;
  if ((char)param_2->_padding_ == '\0') {
    uVar17 = 0xa0;
  }
  this->field_0x2a1 = this->field_0x2a1 & 0xef;
  this->field_0x2a0 = uVar17;
  bVar14 = IsRayTracingAllowed();
  if ((bVar14) &&
     (cVar15 = (**(code **)(*(longlong *)this->SkinnedAsset + 0x368))(), cVar15 != '\0')) {
    bVar16 = 2;
  }
  else {
    bVar16 = 0;
  }
  this->field_0x7c = this->field_0x7c | 8;
  this->bHasRayTracingRepresentation = bVar16 >> 1;
  FPrimitiveSceneProxy::UpdateVisibleInLumenScene((FPrimitiveSceneProxy *)this);
  UpdateLumenCardsFromBounds(this,uVar29 <= uVar27 * 4);
  FMemScope::~FMemScope(local_78);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// FSkinnedSceneProxy @ 1483e75a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedSceneProxy * __thiscall
Nanite::FSkinnedSceneProxy::FSkinnedSceneProxy
          (FSkinnedSceneProxy *this,FMaterialAudit *param_1,USkinnedMeshComponent *param_2,
          FSkeletalMeshRenderData *param_3,bool param_4)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  FSkinnedMeshSceneProxyDesc local_198;
  
  pFVar1 = FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&local_198,param_2);
  FSkinnedSceneProxy(this,param_1,pFVar1,param_3,param_4);
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  local_198._padding_ = (longlong)&___7FPrimitiveSceneProxyDesc__6B_;
  if ((void *)local_198._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_198._padding_);
  }
  *(undefined ***)this = &___7FSkinnedSceneProxy_Nanite__6B_;
  return this;
}

// ~FSkinnedSceneProxy @ 1483e8ee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall Nanite::FSkinnedSceneProxy::~FSkinnedSceneProxy(FSkinnedSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  FSkinningSceneExtensionProxy *pFVar2;
  
  *(undefined ***)this = &___7FSkinnedSceneProxy_Nanite__6B_;
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data,
             (this->CachedRayTracingMaterials).ArrayNum);
  pFVar1 = (this->CachedRayTracingMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->SceneExtensionProxy).Ptr;
  if (pFVar2 != (FSkinningSceneExtensionProxy *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  if (*(void **)&this->field_0x280 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x280);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CreateRenderThreadResources @ 1483fa410

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FSkinnedSceneProxy::CreateRenderThreadResources
          (FSkinnedSceneProxy *this,FRHICommandListBase *param_1)

{
  FSkinningSceneExtensionProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Resources->RuntimeResourceID == 0xffffffff) ||
     (this->Resources->HierarchyOffset == 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resources->RuntimeResourceID != INDEX_NONE && Resources->HierarchyOffset != INDEX_NONE"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                       ,0xa1d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SceneExtensionProxy).Ptr;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,*(undefined8 *)&this->field_0x220,param_1);
  bVar3 = IsRayTracingAllowed();
  if (bVar3) {
    this->RayTracingGeometryGroupHandle = this->RenderData->RayTracingGeometryGroupHandle;
  }
  TMulticastDelegate<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>::
  Broadcast(&FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources,this);
  return;
}

// DebugDrawSkeleton @ 1483fa590

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FSkinnedSceneProxy::DebugDrawSkeleton
          (FSkinnedSceneProxy *this,int param_1,FMeshElementCollector *param_2,
          FEngineShowFlags *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  FPrimitiveDrawInterface *pFVar10;
  longlong *plVar11;
  longlong lVar12;
  TOptional<FLinearColor> *pTVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_3c8 [32];
  wchar_t *local_388;
  wchar_t **local_380;
  wchar_t *local_378;
  wchar_t **local_370;
  FEngineShowFlags *local_368;
  TVector<double>_u_0 local_360;
  TVector<double>_u_0 local_348;
  FLinearColor_u_0 local_330;
  undefined1 local_320 [24];
  double dStack_308;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  TMatrix<double> local_2a8;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_368 = param_3;
  lVar9 = (**(code **)(this->MeshObject->_padding_ + 0x60))();
  if (lVar9 != 0) {
    puVar1 = &this->field_0x110;
    local_2a8.M[3][0] = *(double *)&this->field_0x170;
    local_2a8.M[3][1] = *(double *)&this->field_0x178;
    local_2a8.M[3][2] = *(double *)&this->field_0x180;
    local_2a8.M[3][3] = *(double *)&this->field_0x188;
    local_2a8.M[0][0]._0_4_ = *(uint *)puVar1;
    local_2a8.M[0][0]._4_4_ = *(uint *)&this->field_0x114;
    local_2a8.M[0][1]._0_4_ = *(uint *)&this->field_0x118;
    local_2a8.M[0][1]._4_4_ = *(uint *)&this->field_0x11c;
    local_2a8.M[1][0]._0_4_ = *(uint *)&this->field_0x130;
    local_2a8.M[1][0]._4_4_ = *(uint *)&this->field_0x134;
    local_2a8.M[1][1]._0_4_ = *(uint *)&this->field_0x138;
    local_2a8.M[1][1]._4_4_ = *(uint *)&this->field_0x13c;
    local_2a8.M[2][0]._0_4_ = *(uint *)&this->field_0x150;
    local_2a8.M[2][0]._4_4_ = *(uint *)&this->field_0x154;
    local_2a8.M[2][1]._0_4_ = *(uint *)&this->field_0x158;
    local_2a8.M[2][1]._4_4_ = *(uint *)&this->field_0x15c;
    local_2a8.M[0][2]._0_4_ = *(uint *)&this->field_0x120;
    local_2a8.M[0][2]._4_4_ = *(uint *)&this->field_0x124;
    local_2a8.M[0][3]._0_4_ = *(undefined4 *)&this->field_0x128;
    local_2a8.M[0][3]._4_4_ = *(undefined4 *)&this->field_0x12c;
    local_2a8.M[2][2]._0_4_ = *(uint *)&this->field_0x160;
    local_2a8.M[2][2]._4_4_ = *(uint *)&this->field_0x164;
    local_2a8.M[2][3]._0_4_ = *(undefined4 *)&this->field_0x168;
    local_2a8.M[2][3]._4_4_ = *(undefined4 *)&this->field_0x16c;
    local_2a8.M[1][2]._0_4_ = *(uint *)&this->field_0x140;
    local_2a8.M[1][2]._4_4_ = *(uint *)&this->field_0x144;
    local_2a8.M[1][3]._0_4_ = *(undefined4 *)&this->field_0x148;
    local_2a8.M[1][3]._4_4_ = *(undefined4 *)&this->field_0x14c;
    if ((((((__real_3e45798ee0000000 <
             (double)CONCAT44(local_2a8.M[0][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                              ,local_2a8.M[0][0]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
           (__real_3e45798ee0000000 <=
            (double)CONCAT44(local_2a8.M[0][1]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_2a8.M[0][1]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
            && (double)CONCAT44(local_2a8.M[0][1]._4_4_ &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_2a8.M[0][1]._0_4_ &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
               __real_3e45798ee0000000)) ||
          (__real_3e45798ee0000000 <=
           (double)CONCAT44(local_2a8.M[0][2]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_2a8.M[0][2]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
           && (double)CONCAT44(local_2a8.M[0][2]._4_4_ &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_2a8.M[0][2]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
              __real_3e45798ee0000000)) ||
         ((__real_3e45798ee0000000 <
           (double)CONCAT44(local_2a8.M[1][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_2a8.M[1][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          || (__real_3e45798ee0000000 <=
              (double)CONCAT44(local_2a8.M[1][1]._4_4_ &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_2a8.M[1][1]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
              (double)CONCAT44(local_2a8.M[1][1]._4_4_ &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_2a8.M[1][1]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
              __real_3e45798ee0000000)))) ||
        ((__real_3e45798ee0000000 <=
          (double)CONCAT44(local_2a8.M[1][2]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_2a8.M[1][2]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          && (double)CONCAT44(local_2a8.M[1][2]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                              ,local_2a8.M[1][2]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
             __real_3e45798ee0000000 ||
         ((__real_3e45798ee0000000 <
           (double)CONCAT44(local_2a8.M[2][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_2a8.M[2][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          || (__real_3e45798ee0000000 <=
              (double)CONCAT44(local_2a8.M[2][1]._4_4_ &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_2a8.M[2][1]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
              (double)CONCAT44(local_2a8.M[2][1]._4_4_ &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_2a8.M[2][1]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
              __real_3e45798ee0000000)))))) ||
       (__real_3e45798ee0000000 <=
        (double)CONCAT44(local_2a8.M[2][2]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_2a8.M[2][2]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
        (double)CONCAT44(local_2a8.M[2][2]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_2a8.M[2][2]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
        __real_3e45798ee0000000)) {
      if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)puVar1 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee0000000) &&
          (uVar14 = (uint)*(undefined8 *)&this->field_0x118 &
                    (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar15 = (uint)((ulonglong)*(undefined8 *)&this->field_0x118 >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
          (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) &&
         (uVar14 = (uint)*(undefined8 *)&this->field_0x120 &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar15 = (uint)((ulonglong)*(undefined8 *)&this->field_0x120 >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
         (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) {
        if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x130 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               (uint)*(undefined8 *)&this->field_0x130 &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3e45798ee0000000) &&
            (uVar14 = (uint)*(undefined8 *)&this->field_0x138 &
                      (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar15 = (uint)((ulonglong)*(undefined8 *)&this->field_0x138 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
            (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) &&
           (uVar14 = (uint)*(undefined8 *)&this->field_0x140 &
                     (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar15 = (uint)((ulonglong)*(undefined8 *)&this->field_0x140 >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
           (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) {
          if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x150 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 (uint)*(undefined8 *)&this->field_0x150 &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                __real_3e45798ee0000000) &&
              (uVar14 = (uint)*(undefined8 *)&this->field_0x158 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar15 = (uint)((ulonglong)*(undefined8 *)&this->field_0x158 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
              (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) &&
             (uVar14 = (uint)*(undefined8 *)&this->field_0x160 &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar15 = (uint)((ulonglong)*(undefined8 *)&this->field_0x160 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             (double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
             (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000)) {
            local_388 = 
            L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
            ;
            if (1 < (byte)LogUnrealMath._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
            }
            local_380 = &local_388;
            `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_380);
          }
        }
      }
      bVar7 = FMath::MatrixInverse(&local_108,(TMatrix<double> *)puVar1);
      if (!bVar7) {
        local_378 = 
        L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
        ;
        if (1 < (byte)LogUnrealMath._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
        }
        local_370 = &local_378;
        `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_370);
      }
      UE::Math::TTransform<double>::SetFromMatrix(&local_168,&local_2a8);
      pFVar10 = FMeshElementCollector::GetPDI(param_2,param_1);
      plVar11 = (longlong *)(**(code **)(this->MeshObject->_padding_ + 0x60))();
      fVar5 = __real_437f0000;
      fVar4 = __real_40800000;
      fVar3 = __real_3f800000;
      uVar14 = 0;
      if (0 < (int)plVar11[1]) {
        lVar9 = 0;
        do {
          lVar12 = (**(code **)(*(longlong *)this->SkinnedAsset + 800))();
          uVar15 = 0;
          if ((int)uVar14 < *(int *)(lVar12 + 0x28)) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar15 = *(uint *)(*(longlong *)(lVar12 + 0x20) + 8 + lVar9);
          FLinearColor::MakeFromHSV8
                    ((FLinearColor *)local_320,
                     (uchar)(int)(((float)(*(int *)&this->field_0x218 * 0xbb38435 + 0x3619636bU >> 9
                                          | 0x3f800000) - fVar3) * fVar5),0xff,0xff);
          pTVar13 = &this->DebugDrawColor;
          if ((this->DebugDrawColor).bIsSet == false) {
            pTVar13 = (TOptional<FLinearColor> *)local_320;
          }
          local_330._0_8_ = *(undefined8 *)&(pTVar13->TypedValue).field0_0x0;
          local_330._8_8_ = *(undefined8 *)((longlong)&(pTVar13->TypedValue).field0_0x0 + 8);
          uVar8 = 0;
          if ((int)uVar14 < (int)plVar11[1]) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_228.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_228.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_228.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_228.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_228.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_228.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_228.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_228.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_228,(TTransform<double> *)((longlong)(int)uVar14 * 0x60 + *plVar11),
                     &local_168);
          if ((int)uVar15 < 0) {
            local_2e0 = local_168.Translation.XY.m128d_f64[0];
            dStack_2d8 = local_168.Translation.XY.m128d_f64[1];
            local_2d0 = local_168.Translation.ZW.m128d_f64[0];
            local_348._s_0.X = local_168.Translation.XY.m128d_f64[0];
            local_348._s_0.Y = local_168.Translation.XY.m128d_f64[1];
            local_348._s_0.Z = local_168.Translation.ZW.m128d_f64[0];
            local_2c8 = local_228.Translation.XY.m128d_f64[0];
            dStack_2c0 = local_228.Translation.XY.m128d_f64[1];
            local_2b8 = local_228.Translation.ZW.m128d_f64[0];
          }
          else {
            uVar8 = 0;
            if ((int)uVar15 < (int)plVar11[1]) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_1c8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_1c8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_1c8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_1c8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_1c8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_1c8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_1c8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_1c8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_1c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_1c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply
                      (&local_1c8,(TTransform<double> *)((longlong)(int)uVar15 * 0x60 + *plVar11),
                       &local_168);
            local_320._16_8_ = local_1c8.Translation.XY.m128d_f64[0];
            dStack_308 = local_1c8.Translation.XY.m128d_f64[1];
            local_300 = local_1c8.Translation.ZW.m128d_f64[0];
            local_348._s_0.X = local_1c8.Translation.XY.m128d_f64[0];
            local_348._s_0.Y = local_1c8.Translation.XY.m128d_f64[1];
            local_348._s_0.Z = local_1c8.Translation.ZW.m128d_f64[0];
            local_2f8 = local_228.Translation.XY.m128d_f64[0];
            dStack_2f0 = local_228.Translation.XY.m128d_f64[1];
            local_2e8 = local_228.Translation.ZW.m128d_f64[0];
          }
          pTVar6 = CVarDebugDrawSimpleBones.Ref;
          local_360._s_0.Z = local_228.Translation.ZW.m128d_f64[0];
          local_360._s_0.X = local_228.Translation.XY.m128d_f64[0];
          local_360._s_0.Y = local_228.Translation.XY.m128d_f64[1];
          if ((local_368->Bones != 0) || (this->bDrawDebugSkeleton != 0)) {
            bVar7 = IsInParallelRenderingThread();
            if ((!bVar7) &&
               (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007955>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (pTVar6->ShadowedValue[1] == 0) {
              SkeletalDebugRendering::DrawWireBone
                        (pFVar10,(TVector<double> *)&local_348._s_0,
                         (TVector<double> *)&local_360._s_0,(FLinearColor *)&local_330._s_0,
                         SDPG_Foreground,fVar3);
            }
            else {
              (**(code **)(pFVar10->_padding_ + 0x30))();
            }
            pTVar6 = CVarDebugDrawBoneAxes.Ref;
            bVar7 = IsInParallelRenderingThread();
            if ((!bVar7) &&
               (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007955>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (pTVar6->ShadowedValue[1] != 0) {
              SkeletalDebugRendering::DrawAxes(pFVar10,&local_228,SDPG_Foreground,0.0,fVar4);
            }
          }
          uVar14 = uVar14 + 1;
          lVar9 = lVar9 + 0xc;
        } while ((int)uVar14 < (int)plVar11[1]);
      }
    }
  }
  return;
}

// DestroyRenderThreadResources @ 1483fb850

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall Nanite::FSkinnedSceneProxy::DestroyRenderThreadResources(FSkinnedSceneProxy *this)

{
  (**(code **)(((this->SceneExtensionProxy).Ptr)->_padding_ + 0x10))();
  TMulticastDelegate<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>::
  Broadcast(&FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources,this);
  return;
}

// DrawStaticElements @ 1483fd5b0

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
Nanite::FSkinnedSceneProxy::DrawStaticElements
          (FSkinnedSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  return;
}

// GetCachedRayTracingInstance @ 148405aa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ERayTracingPrimitiveFlags __thiscall
Nanite::FSkinnedSceneProxy::GetCachedRayTracingInstance
          (FSkinnedSceneProxy *this,FRayTracingInstance *param_1)

{
  byte bVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  ERayTracingPrimitiveFlags EVar7;
  char cVar8;
  int iVar9;
  IConsoleManager *pIVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  FRayTracingGeometry *pFVar14;
  FRayTracingGeometry *pFVar15;
  longlong lVar16;
  
  pTVar5 = CVarRayTracingNaniteSkinnedProxyMeshes.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar3 = (code *)swi(3);
    EVar7 = (*pcVar3)();
    return EVar7;
  }
  pTVar4 = CVarRayTracingNaniteProxyMeshes.Ref;
  if (pTVar5->ShadowedValue[1] != 0) {
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
      pcVar3 = (code *)swi(3);
      EVar7 = (*pcVar3)();
      return EVar7;
    }
    if (pTVar4->ShadowedValue[1] != 0) {
      if (this->bDynamicRayTracingGeometry != 0) {
        EVar7 = FPrimitiveSceneProxy::GetCachedRayTracingInstance
                          ((FPrimitiveSceneProxy *)this,param_1);
        return EVar7;
      }
      cVar8 = (**(code **)(*(longlong *)this + 0x68))();
      if ((cVar8 != '\0') &&
         ((((this->field_0x7b & 10) == 10 &&
           ((((this->field_0x78 & 2) != 0 || ((this->field_0x7d & 0x10) != 0)) ||
            ((this->field_0x7f & 0x20) != 0)))) || ((this->field_0x86 & 0x40) != 0)))) {
        pFVar15 = (FRayTracingGeometry *)0x0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          pIVar10 = IConsoleManager::Get();
          plVar11 = (longlong *)
                    (**(code **)((longlong)*pIVar10 + 0xc0))
                              (pIVar10,L"r.RayTracing.Geometry.SkeletalMeshes",1);
          pFVar14 = pFVar15;
          if (plVar11 != (longlong *)0x0) {
            pFVar14 = (FRayTracingGeometry *)(**(code **)(*plVar11 + 0x68))(plVar11);
          }
          RayTracingSkeletalMeshesCVar = (TConsoleVariableData<int> *)pFVar14;
          _Init_thread_footer(&::_TSS0);
        }
        if (((RayTracingSkeletalMeshesCVar == (TConsoleVariableData<int> *)0x0) ||
            (iVar9 = TConsoleVariableData<int>::GetValueOnRenderThread(RayTracingSkeletalMeshesCVar)
            , 0 < iVar9)) &&
           (pTVar5 = CVarRayTracingNaniteProxyMeshesLODBias.Ref, cVar8 = (char)GNaniteRayTracingMode
           , (this->field_0x85 & 1) == 0)) {
          EVar7 = this->field_0x86;
          pFVar14 = pFVar15;
          if ((char)GNaniteRayTracingMode == '\0') {
            bVar6 = IsInParallelRenderingThread();
            if ((!bVar6) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007955>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
              pcVar3 = (code *)swi(3);
              EVar7 = (*pcVar3)();
              return EVar7;
            }
            uVar13 = this->NumLODs - 1;
            bVar1 = this->RenderData->CurrentFirstLODIdx;
            uVar12 = pTVar5->ShadowedValue[1] + (uint)bVar1;
            if ((int)uVar12 < (int)uVar13) {
              uVar13 = uVar12;
            }
            uVar12 = (uint)bVar1;
            if ((int)(uint)bVar1 < (int)uVar13) {
              uVar12 = uVar13;
            }
            if ((int)uVar12 < (int)(uint)this->NumLODs) {
              lVar16 = (longlong)(int)uVar12 * 8;
              do {
                pFVar15 = (FRayTracingGeometry *)(ulonglong)uVar12;
                pFVar2 = this->RenderData;
                uVar13 = 0;
                if ((int)uVar12 < (pFVar2->LODRenderData).Array.ArrayNum) {
                  uVar13 = ~uVar12 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  EVar7 = (*pcVar3)();
                  return EVar7;
                }
                pFVar14 = (FRayTracingGeometry *)
                          (*(longlong *)
                            ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + lVar16) + 0x668)
                ;
                bVar6 = FRayTracingGeometry::IsValid(pFVar14);
                if (((bVar6) && (bVar6 = FRayTracingGeometry::IsEvicted(pFVar14), !bVar6)) &&
                   (bVar6 = FRayTracingGeometry::HasPendingBuildRequest(pFVar14), !bVar6)) {
                  if (uVar12 != 0xffffffff) {
                    pFVar2 = this->RenderData;
                    uVar13 = 0;
                    if ((int)uVar12 < (pFVar2->LODRenderData).Array.ArrayNum) {
                      uVar13 = ~uVar12 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      EVar7 = (*pcVar3)();
                      return EVar7;
                    }
                    pFVar14 = (FRayTracingGeometry *)
                              (*(longlong *)
                                ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                                (longlong)(int)uVar12 * 8) + 0x668);
                    goto LAB_148405db0;
                  }
                  break;
                }
                uVar12 = uVar12 + 1;
                lVar16 = lVar16 + 8;
              } while ((int)uVar12 < (int)(uint)this->NumLODs);
            }
            EVar7 = EVar7 & FarField | Skip;
          }
          else {
LAB_148405db0:
            param_1->Geometry = pFVar14;
            param_1->NumTransforms = *(uint *)(*(longlong *)&this->field_0x228 + 0x228);
            if (cVar8 == '\0') {
              (**(code **)(*(longlong *)this + 0x270))(this,pFVar15,1,1,&param_1->Materials);
              EVar7 = EVar7 & FarField | CacheInstances;
            }
            else {
              (**(code **)(*(longlong *)this + 0x268))(this,&param_1->Materials);
              EVar7 = EVar7 & FarField | CacheInstances;
            }
          }
          return EVar7;
        }
      }
    }
  }
  return Exclude;
}

// GetCurrentFirstLODIdx_RenderThread @ 1484065b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uchar __thiscall
Nanite::FSkinnedSceneProxy::GetCurrentFirstLODIdx_RenderThread(FSkinnedSceneProxy *this)

{
  if (1 < this->NumLODs) {
    return this->RenderData->CurrentFirstLODIdx;
  }
  return '\0';
}

// GetDesiredLODLevel_RenderThread @ 148406660

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDesiredLODLevel __thiscall
Nanite::FSkinnedSceneProxy::GetDesiredLODLevel_RenderThread
          (FSkinnedSceneProxy *this,FSceneView *param_1)

{
  undefined1 uVar1;
  
  if (1 < this->NumLODs) {
    uVar1 = (**(code **)(this->MeshObject->_padding_ + 0xa0))();
    *(undefined1 *)param_1 = uVar1;
    param_1->field_0x1 = 1;
    return SUB82(param_1,0);
  }
  param_1->field_0x1 = 1;
  *(undefined1 *)param_1 = 0;
  return SUB82(param_1,0);
}

// GetDynamicMeshElements @ 148406a10

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FSkinnedSceneProxy::GetDynamicMeshElements
          (FSkinnedSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  FPrimitiveDrawInterface *pFVar8;
  FDebugMassData *this_00;
  uint uVar9;
  FDebugMassData *pFVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_168 [32];
  undefined1 local_137 [3];
  uint local_134;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_130;
  FPrimitiveDrawInterface *local_128;
  FSceneViewFamily *local_120;
  FMeshElementCollector *local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_118 = param_4;
  if (this->MeshObject != (FSkeletalMeshObject *)0x0) {
    bVar12 = -1 < CpuChannel->Enabled;
    local_134 = param_3;
    local_130 = param_1;
    local_120 = param_2;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2722,"SkeletalMesh",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                 ,0xaa2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2722);
    }
    uVar11 = 0;
    uVar9 = local_134;
    if (0 < param_1->ArrayNum) {
      do {
        if ((uVar9 >> (uVar11 & 0x1f) & 1) != 0) {
          if (((param_2->EngineShowFlags).MassProperties != 0) && (0 < *(int *)&this->field_0x18)) {
            local_128 = FMeshElementCollector::GetPDI(param_4,uVar11);
            lVar6 = (**(code **)(this->MeshObject->_padding_ + 0x60))();
            if (lVar6 != 0) {
              plVar7 = (longlong *)(**(code **)(this->MeshObject->_padding_ + 0x60))();
              pFVar8 = local_128;
              iVar2 = *(int *)&this->field_0x18;
              this_00 = *(FDebugMassData **)&this->field_0x10;
              pFVar10 = this_00 + iVar2;
              while( true ) {
                if (*(int *)&this->field_0x18 != iVar2) {
                  local_137[0] = 0;
                  `TCheckedPointerIterator<FPrimitiveSceneProxy::FDebugMassData_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_137);
                }
                param_2 = local_120;
                param_1 = local_130;
                param_4 = local_118;
                if (this_00 == pFVar10) break;
                iVar3 = this_00->BoneIndex;
                if ((-1 < iVar3) && (iVar3 < (int)plVar7[1])) {
                  if ((iVar3 < 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  lVar6 = *plVar7;
                  UE::Math::TTransform<double>::SetFromMatrix
                            (&local_a8,(TMatrix<double> *)&this->field_0x110);
                  local_108.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_108.Rotation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[1];
                  local_108.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_108.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_108.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_108.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_108.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_108.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_108.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_108.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_108.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_108.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply
                            (&local_108,(TTransform<double> *)((longlong)iVar3 * 0x60 + lVar6),
                             &local_a8);
                  FPrimitiveSceneProxy::FDebugMassData::DrawDebugMass(this_00,pFVar8,&local_108);
                }
                this_00 = this_00 + 1;
              }
            }
          }
          if ((param_2->EngineShowFlags).SkeletalMeshes != 0) {
            bVar1 = this->field_0x79;
            pFVar8 = FMeshElementCollector::GetPDI(param_4,uVar11);
            FPrimitiveSceneProxy::RenderBounds
                      ((FPrimitiveSceneProxy *)this,pFVar8,&param_2->EngineShowFlags,
                       (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar1 & 6) != 0);
            param_1 = local_130;
          }
          if (((param_2->EngineShowFlags).Bones != 0) ||
             (uVar9 = local_134, this->bDrawDebugSkeleton != 0)) {
            DebugDrawSkeleton(this,uVar11,param_4,&param_2->EngineShowFlags);
            uVar9 = local_134;
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < param_1->ArrayNum);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// GetDynamicRayTracingInstances @ 148406dc0

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
Nanite::FSkinnedSceneProxy::GetDynamicRayTracingInstances
          (FSkinnedSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  FMeshBatch *pFVar4;
  int iVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FRayTracingGeometry *this_00;
  FRayTracingInstance *pFVar13;
  uint uVar14;
  int iVar15;
  undefined1 local_268;
  undefined4 uStack_254;
  FRayTracingInstance local_238;
  FRayTracingDynamicGeometryUpdateParams local_1c8;
  float local_f8 [2];
  float afStack_f0 [2];
  float local_e8 [2];
  float afStack_e0 [2];
  float local_d8 [2];
  float afStack_d0 [2];
  float local_c8 [2];
  float afStack_c0 [6];
  FRayTracingInstance local_a8;
  
  pTVar7 = CVarRayTracingNaniteSkinnedProxyMeshes.Ref;
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pTVar7->ShadowedValue[1] != 0) &&
     (iVar10 = (**(code **)(this->MeshObject->_padding_ + 0xe8))(),
     (int)(uint)this->RenderData->CurrentFirstLODIdx <= iVar10)) {
    iVar10 = (param_1->Views).ArrayNum;
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar1 = param_1->VisibilityMap;
    iVar5 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar15 = 0x20;
    if (uVar1 != 0) {
      iVar15 = iVar5;
    }
    if (((iVar15 < 0) || (iVar10 <= iVar15)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Views.IsValidIndex(FirstActiveViewIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                           ,0xb65,
                           L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (FRayTracingGeometry *)(**(code **)(this->MeshObject->_padding_ + 0xd0))();
    uVar14 = 0;
    if (this_00 == (FRayTracingGeometry *)0x0) {
      local_268 = 1;
      this_00 = (FRayTracingGeometry *)(**(code **)(this->MeshObject->_padding_ + 0xd8))();
      if (this_00 == (FRayTracingGeometry *)0x0) {
        return;
      }
    }
    else if ((((this_00->GeometryState & RequiresUpdate) != Invalid) ||
             (bVar9 = FRayTracingGeometry::IsValid(this_00), !bVar9)) ||
            (bVar9 = FRayTracingGeometry::IsEvicted(this_00), bVar9)) {
      local_f8[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_f8[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      afStack_f0[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
      afStack_f0[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_e8[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_e8[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      afStack_e0[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
      afStack_e0[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_d8[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_d8[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      afStack_d0[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
      afStack_d0[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_c8[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_c8[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      afStack_c0[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
      afStack_c0[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_1c8.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_1c8.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_1c8.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_1c8.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_1c8.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_1c8.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_1c8.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_1c8.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_1c8.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_1c8.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_1c8.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_1c8.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_1c8.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_1c8.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_1c8.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_1c8.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_1c8.MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.MeshBatches.ArrayNum = 0;
      local_1c8.MeshBatches.ArrayMax = 0;
      local_1c8.bUsingIndirectDraw = false;
      local_1c8.NumVertices = 0;
      local_1c8.VertexBufferSize = 0;
      local_1c8.NumTriangles = 0;
      local_1c8.Buffer = (FRWBuffer *)0x0;
      local_1c8.bApplyWorldPositionOffset = true;
      local_1c8.InstanceId = 0;
      local_1c8.bAlphaMasked = false;
      local_1c8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      local_1c8.Geometry = this_00;
      FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(param_1,iVar15,&local_1c8);
      DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
      local_268 = 0;
    }
    else {
      local_268 = 0;
    }
    uVar11 = (**(code **)(this->MeshObject->_padding_ + 0xe8))();
    if (((this->RenderData->LODRenderData).Array.ArrayNum <= (int)uVar11) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODIndex < RenderData->LODRenderData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                           ,0xb89,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = this->RenderData;
    uVar12 = 0;
    if ((int)uVar11 < (pFVar2->LODRenderData).Array.ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *(longlong *)
             ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
    if ((*(int *)(lVar3 + 0x18) < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODData.RenderSections.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                           ,0xb8c,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(int *)(lVar3 + 0x18) != (this_00->Initializer).Segments.ArrayNum) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODData.RenderSections.Num() == RayTracingGeometry->Initializer.Segments.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                           ,0xb8d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_238.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.Materials.ArrayNum = 0;
    local_238.Materials.ArrayMax = 0;
    local_238.bApplyLocalBoundsTransform = false;
    local_238.bThinGeometry = false;
    local_238.InstanceLayer = NearField;
    local_238.bInstanceMaskAndFlagsDirty = true;
    local_238.NumTransforms = *(uint *)(*(longlong *)&this->field_0x228 + 0x228);
    local_238.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.PrimitiveInstanceIndices.ArrayNum = 0;
    local_238.PrimitiveInstanceIndices.ArrayMax = 0;
    local_238.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
    local_238.PrimitiveInstanceIndicesView.ArrayNum = 0;
    local_238.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.InstanceTransforms.ArrayNum = 0;
    local_238.InstanceTransforms.ArrayMax = 0;
    local_238.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
    local_238.InstanceTransformsView.ArrayNum = 0;
    local_238.Geometry = this_00;
    if (uVar11 == (int)this->CachedRayTracingMaterialsLODIndex) {
      pFVar2 = this->RenderData;
      uVar12 = 0;
      if ((int)uVar11 < (pFVar2->LODRenderData).Array.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(int *)(*(longlong *)
                     ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                     (longlong)(int)uVar11 * 8) + 0x18) !=
           (this->CachedRayTracingMaterials).ArrayNum) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("RenderData->LODRenderData[LODIndex].RenderSections.Num() == CachedRayTracingMaterials.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                             ,0xb9c,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_238._40_4_ = local_238._40_4_ & 0xffffff;
    }
    else {
      TArray<FMeshBatch,TSizedDefaultAllocator<32>_>::Reset(&this->CachedRayTracingMaterials,0);
      (**(code **)(*(longlong *)this + 0x270))
                (this,uVar11,local_268,0,&this->CachedRayTracingMaterials);
      this->CachedRayTracingMaterialsLODIndex = (short)uVar11;
    }
    pFVar4 = (FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data;
    iVar5 = (this->CachedRayTracingMaterials).ArrayNum;
    if ((iVar5 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_238.MaterialsView._12_4_ = uStack_254;
    local_238.MaterialsView.ArrayNum = iVar5;
    local_238.MaterialsView.DataPtr = pFVar4;
    if (0 < iVar10) {
      do {
        if ((uVar1 >> (uVar14 & 0x1f) & 1) != 0) {
          pFVar13 = FRayTracingInstance::FRayTracingInstance(&local_a8,&local_238);
          FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar14,pFVar13);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar10);
    }
    if (local_238.InstanceTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.InstanceTransforms.AllocatorInstance.Data);
    }
    if (local_238.PrimitiveInstanceIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_238.PrimitiveInstanceIndices.AllocatorInstance.Data);
    }
    FVar8.Data = local_238.Materials.AllocatorInstance.Data;
    DestructItems<FMeshBatch,int>
              ((FMeshBatch *)local_238.Materials.AllocatorInstance.Data,local_238.Materials.ArrayNum
              );
    if ((FMeshBatch *)FVar8.Data != (FMeshBatch *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  return;
}

// GetFirstValidStaticRayTracingGeometryLODIndex @ 1484080c0

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
Nanite::FSkinnedSceneProxy::GetFirstValidStaticRayTracingGeometryLODIndex(FSkinnedSceneProxy *this)

{
  byte bVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FRayTracingGeometry *this_00;
  
  pTVar4 = CVarRayTracingNaniteProxyMeshesLODBias.Ref;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  uVar8 = this->NumLODs - 1;
  bVar1 = this->RenderData->CurrentFirstLODIdx;
  uVar7 = pTVar4->ShadowedValue[1] + (uint)bVar1;
  if ((int)uVar7 < (int)uVar8) {
    uVar8 = uVar7;
  }
  uVar7 = (uint)bVar1;
  if ((int)(uint)bVar1 < (int)uVar8) {
    uVar7 = uVar8;
  }
  if ((int)uVar7 < (int)(uint)this->NumLODs) {
    lVar9 = (longlong)(int)uVar7 * 8;
    do {
      pFVar2 = this->RenderData;
      uVar8 = 0;
      if ((int)uVar7 < (pFVar2->LODRenderData).Array.ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      this_00 = (FRayTracingGeometry *)
                (*(longlong *)((pFVar2->LODRenderData).Array.AllocatorInstance.Data + lVar9) + 0x668
                );
      bVar5 = FRayTracingGeometry::IsValid(this_00);
      if (((bVar5) && (bVar5 = FRayTracingGeometry::IsEvicted(this_00), !bVar5)) &&
         (bVar5 = FRayTracingGeometry::HasPendingBuildRequest(this_00), !bVar5)) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < (int)(uint)this->NumLODs);
  }
  return -1;
}

// GetMemoryFootprint @ 148409240

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall Nanite::FSkinnedSceneProxy::GetMemoryFootprint(FSkinnedSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x360;
}

// GetMeshCardRepresentation @ 148409270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCardRepresentationData * __thiscall
Nanite::FSkinnedSceneProxy::GetMeshCardRepresentation(FSkinnedSceneProxy *this)

{
  return this->CardRepresentationData;
}

// GetPreSkinnedLocalBounds @ 1484099e0

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
Nanite::FSkinnedSceneProxy::GetPreSkinnedLocalBounds
          (FSkinnedSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  
  dVar1 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Y;
  (param_1->Origin).field0_0x0._s_0.X = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Z = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar1;
  dVar1 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.Y = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Y
  ;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar1;
  param_1->SphereRadius = (this->PreSkinnedLocalBounds).SphereRadius;
  return;
}

// GetRayTracingGeometryGroupHandle @ 14840a1d0

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
Nanite::FSkinnedSceneProxy::GetRayTracingGeometryGroupHandle(FSkinnedSceneProxy *this)

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
                         ,0xc11,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  return this->RayTracingGeometryGroupHandle;
}

// GetResourceMeshInfo @ 14840a5c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FResourceMeshInfo * __thiscall
Nanite::FSkinnedSceneProxy::GetResourceMeshInfo
          (FSkinnedSceneProxy *this,FResourceMeshInfo *__return_storage_ptr__)

{
  ushort uVar1;
  int iVar2;
  FResources *pFVar3;
  FName FVar4;
  FSkeletalMeshRenderData *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FResourceMeshInfo *pFVar9;
  int iVar10;
  ushort *puVar11;
  uint local_res8 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  bool local_3c;
  FDebugName local_38;
  
  iVar10 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = false;
  FDebugName::FDebugName(&local_38);
  pFVar3 = this->Resources;
  local_58 = CONCAT44(pFVar3->NumHierarchyNodes,pFVar3->NumClusters);
  local_50 = CONCAT44(pFVar3->NumInputTriangles,pFVar3->NumInputVertices);
  local_48 = CONCAT44(local_48._4_4_,*(int *)&this->field_0x290 + 1);
  FVar4.ComparisonIndex.Value = *(uint *)&this->SkinnedAsset->field_0x18;
  FVar4.Number = *(uint *)&this->SkinnedAsset->field_0x1c;
  FDebugName::operator=(&local_38,FVar4);
  pFVar5 = this->RenderData;
  local_40 = this->Resources->NumResidentClusters;
  local_3c = 0 < (this->Resources->AssemblyTransforms).ArrayNum;
  if (((pFVar5->LODRenderData).Array.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FResourceMeshInfo *)(*pcVar7)();
    return pFVar9;
  }
  lVar6 = *(longlong *)(pFVar5->LODRenderData).Array.AllocatorInstance.Data;
  iVar2 = *(int *)(lVar6 + 0x18);
  puVar11 = *(ushort **)(lVar6 + 0x10);
  if ((iVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FResourceMeshInfo *)(*pcVar7)();
    return pFVar9;
  }
  local_48 = CONCAT44(iVar2,(uint)local_48);
  local_res8[0] = 0xffffffff;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
            (&local_68,local_res8,*(int *)&this->field_0x290 + 1);
  if (0 < iVar2) {
    do {
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar9 = (FResourceMeshInfo *)(*pcVar7)();
        return pFVar9;
      }
      uVar1 = *puVar11;
      if ((local_68.ArrayNum <= (int)(uint)uVar1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar9 = (FResourceMeshInfo *)(*pcVar7)();
        return pFVar9;
      }
      puVar11 = puVar11 + 0x8c;
      *(int *)(local_68.AllocatorInstance.Data + (ulonglong)uVar1 * 4) = iVar10;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar2);
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

// GetResourcePrimitiveInfo @ 14840a890

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FResourcePrimitiveInfo * __thiscall
Nanite::FSkinnedSceneProxy::GetResourcePrimitiveInfo
          (FSkinnedSceneProxy *this,FResourcePrimitiveInfo *__return_storage_ptr__)

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

// GetStaticRayTracingGeometries @ 14840ac60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> * __thiscall
Nanite::FSkinnedSceneProxy::GetStaticRayTracingGeometries
          (FSkinnedSceneProxy *this,
          TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTypeHash @ 14840b770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall Nanite::FSkinnedSceneProxy::GetTypeHash(FSkinnedSceneProxy *this)

{
  return 0x155239e08;
}

// GetViewRelevance @ 14840bbd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
Nanite::FSkinnedSceneProxy::GetViewRelevance
          (FSkinnedSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  FSceneViewFamily *pFVar2;
  bool bVar3;
  ECustomDepthMode EVar4;
  uint uVar5;
  FGPUSkinCacheVisualizationData *this_00;
  uint uVar6;
  uint uVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar3 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar6 = 0;
  uVar7 = 0;
  if ((!bVar3) || (uVar5 = 4, (param_1->Family->EngineShowFlags).NaniteMeshes == 0)) {
    uVar5 = uVar6;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar5;
  bVar3 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 3;
  if (GNaniteCustomDepthEnabled == 0) {
LAB_14840bca0:
    uVar5 = uVar6;
  }
  else {
    EVar4 = GetCustomDepthMode();
    if ((EVar4 == Disabled) || (uVar5 = 0x20, (this->field_0x86 & 4) == 0)) goto LAB_14840bca0;
  }
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar5;
  uVar5 = uVar6;
  if (this->field_0x89 != '\x01') {
    uVar5 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 =
       uVar5 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xffffdfff | 0x81;
  pFVar2 = param_1->Family;
  bVar3 = IsRichView(pFVar2);
  if ((((!bVar3) && ((pFVar2->EngineShowFlags).Bones == 0)) &&
      ((pFVar2->EngineShowFlags).Collision == 0)) &&
     (((pFVar2->EngineShowFlags).Bounds == 0 && ((this->field_0x79 & 6) == 0)))) {
    this_00 = GetGPUSkinCacheVisualizationData();
    bVar3 = FGPUSkinCacheVisualizationData::IsActive(this_00);
    if (!bVar3) goto LAB_14840bd15;
  }
  uVar6 = 2;
LAB_14840bd15:
  __return_storage_ptr__->bDynamicRelevance = uVar6 >> 1;
  FMaterialRelevance::SetPrimitiveViewRelevance
            ((FMaterialRelevance *)&this->field_0xa0,__return_storage_ptr__);
  if (((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
     (((this->field_0x86 & 1) != 0 ||
      (((char)this->field_0x82 < '\0' || ((this->field_0x82 & 0x72) != 0)))))) {
    uVar7 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar7 >> 4;
  if (1 < this->NumLODs) {
    FSkeletalMeshObject::UpdateMinDesiredLODLevel
              (this->MeshObject,param_1,(TBoxSphereBounds<double,double> *)&this->field_0x190);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// SetupFallbackRayTracingMaterials @ 148426e70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Nanite::FSkinnedSceneProxy::SetupFallbackRayTracingMaterials
          (FSkinnedSceneProxy *this,int param_1,bool param_2,bool param_3,
          TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *param_4)

{
  FSkeletalMeshRenderData *pFVar1;
  longlong lVar2;
  longlong lVar3;
  FSkeletalMeshObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  longlong local_res8;
  longlong local_48;
  longlong local_40;
  
  pFVar1 = this->RenderData;
  uVar11 = 0;
  uVar12 = 0;
  if (param_1 < (pFVar1->LODRenderData).Array.ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *(longlong *)
           ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_>::SetNum(param_4,*(int *)(lVar2 + 0x18),Default);
  if (0 < param_4->ArrayNum) {
    FVar7 = SUB41(param_1,0);
    local_48 = 0;
    if (param_3) {
      FVar7 = (FScriptContainerElement)0x0;
    }
    local_res8 = 0;
    local_40 = 0;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar11 < *(int *)(lVar2 + 0x18)) {
        uVar12 = uVar9;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pbVar13 = (byte *)(*(longlong *)(lVar2 + 0x10) + local_40);
      uVar12 = 0;
      if ((int)uVar11 < *(int *)&this->field_0x288) {
        uVar12 = uVar9;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&this->field_0x280;
      uVar12 = 0;
      if ((int)uVar11 < param_4->ArrayNum) {
        uVar12 = uVar9;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = (param_4->AllocatorInstance).Data + local_48;
      *(uint *)(pFVar10 + 0xd4) = *(uint *)(pFVar10 + 0xd4) & 0xfffffc7f;
      pFVar4 = this->MeshObject;
      if (param_2) {
        lVar8 = (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,param_1,uVar11,1);
      }
      else {
        lVar8 = (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,0,param_1,uVar11,1);
      }
      *(longlong *)(pFVar10 + 0xa8) = lVar8;
      if ((lVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshBatch.VertexFactory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                             ,0xb40,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = *(uint *)(pFVar10 + 0xd4);
      *(undefined8 *)(pFVar10 + 0xb0) = *(undefined8 *)(local_res8 + lVar3 + 8);
      *(uint *)(pFVar10 + 0xd4) = uVar12 & 0xffffffbf;
      pFVar10[0xd2] = FVar7;
      *(uint *)(pFVar10 + 0xcc) = uVar11;
      if ((pbVar13[0xd] == 0) || ((this->field_0x7d & 2) == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x800000;
      }
      *(uint *)(pFVar10 + 0xd4) = uVar12 & 0xff7fffbf | uVar9;
      *(uint *)(pFVar10 + 0xd4) =
           -(uint)((1L << (*pbVar13 & 0x3f) & this->Resources->VoxelMaterialsMask) != 0) & 0x1000000
           | uVar12 & 0xfe7fffbf | uVar9;
      if ((*(int *)(pFVar10 + 0xa0) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(FScriptContainerElement **)(pFVar10 + 0x98) != (FScriptContainerElement *)0x0) {
        pFVar10 = *(FScriptContainerElement **)(pFVar10 + 0x98);
      }
      if ((*(longlong *)(lVar2 + 0x28) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x56,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = uVar11 + 1;
      local_res8 = local_res8 + 0x50;
      local_40 = local_40 + 0x118;
      local_48 = local_48 + 0xe0;
      *(undefined8 *)(pFVar10 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined4 *)(pFVar10 + 0x58) = *(undefined4 *)(pbVar13 + 4);
      *(undefined4 *)(pFVar10 + 0x68) = *(undefined4 *)(pbVar13 + 0x10);
      *(int *)(pFVar10 + 0x6c) = *(int *)(pbVar13 + 0x48) + *(int *)(pbVar13 + 0x10) + -1;
      *(undefined4 *)(pFVar10 + 0x5c) = *(undefined4 *)(pbVar13 + 8);
      *(undefined8 *)pFVar10 = *(undefined8 *)&this->field_0x258;
    } while ((int)uVar11 < param_4->ArrayNum);
  }
  return;
}

// UpdateLumenCardsFromBounds @ 14842b0f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FSkinnedSceneProxy::UpdateLumenCardsFromBounds(FSkinnedSceneProxy *this,bool param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  atomic<unsigned_int> aVar13;
  bool bVar14;
  FCardRepresentationData *pFVar15;
  EShaderPlatform EVar16;
  FCardRepresentationData *pFVar17;
  double dVar18;
  undefined7 uStack_47;
  
  pFVar17 = (FCardRepresentationData *)0x0;
  pFVar15 = this->CardRepresentationData;
  if (pFVar15 != (FCardRepresentationData *)0x0) {
    (**(code **)pFVar15->_padding_)(pFVar15,1);
    this->CardRepresentationData = (FCardRepresentationData *)0x0;
  }
  if ((this->field_0x7c & 4) != 0) {
    iVar7 = *(int *)(*(longlong *)&this->field_0x220 + 8);
    if (iVar7 == 5) {
      EVar16 = SP_NumPlatforms;
    }
    else {
      EVar16 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar7];
    }
    bVar14 = AllowLumenCardGenerationForSkeletalMeshes(EVar16);
    if (bVar14) {
      pFVar15 = ::operator_new(0x98);
      if (pFVar15 != (FCardRepresentationData *)0x0) {
        pFVar15->_padding_ = (longlong)&___7FCardRepresentationData__6B_;
        (pFVar15->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.X = 0.0;
        (pFVar15->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.Y = 0.0;
        (pFVar15->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.Z = 0.0;
        (pFVar15->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.X = 0.0;
        (pFVar15->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.Y = 0.0;
        (pFVar15->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.Z = 0.0;
        (pFVar15->MeshCardsBuildData).Bounds.IsValid = '\0';
        *(undefined8 *)(pFVar15->MeshCardsBuildData).Bounds.Pad = 0;
        (pFVar15->MeshCardsBuildData).CardBuildData.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar15->MeshCardsBuildData).CardBuildData.ArrayNum = 0;
        (pFVar15->MeshCardsBuildData).CardBuildData.ArrayMax = 0;
        (pFVar15->MeshCardsBuildData).DebugData.Surfels.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar15->MeshCardsBuildData).DebugData.Surfels.ArrayNum = 0;
        (pFVar15->MeshCardsBuildData).DebugData.Surfels.ArrayMax = 0;
        (pFVar15->MeshCardsBuildData).DebugData.SurfelRays.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar15->MeshCardsBuildData).DebugData.SurfelRays.ArrayNum = 0;
        (pFVar15->MeshCardsBuildData).DebugData.SurfelRays.ArrayMax = 0;
        (pFVar15->MeshCardsBuildData).DebugData.Clusters.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar15->MeshCardsBuildData).DebugData.Clusters.ArrayNum = 0;
        (pFVar15->MeshCardsBuildData).DebugData.Clusters.ArrayMax = 0;
        (pFVar15->MeshCardsBuildData).DebugData.NumSurfels = 0;
        (pFVar15->CardRepresentationDataId).Value = 0;
        LOCK();
        UNLOCK();
        aVar13 = (atomic<unsigned_int>)
                 ((int)`public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'
                       ::__l2::NextCardRepresentationId + 1);
        (pFVar15->CardRepresentationDataId).Value =
             (uint)`public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'
                   ::__l2::NextCardRepresentationId;
        `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::__l2::
        NextCardRepresentationId = aVar13;
        pFVar17 = pFVar15;
      }
      this->CardRepresentationData = pFVar17;
      dVar1 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.X;
      dVar2 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Y;
      dVar3 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Y;
      dVar4 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Z;
      dVar5 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.X;
      dVar18 = dVar3 - dVar2;
      dVar6 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Z;
      dVar10 = dVar5 + dVar1;
      (pFVar17->MeshCardsBuildData).bMostlyTwoSided = true;
      dVar11 = dVar6 + dVar4;
      auVar9._8_4_ = SUB84(dVar18,0);
      auVar9._0_8_ = dVar1 - dVar5;
      auVar9._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      *(undefined1 (*) [16])&(pFVar17->MeshCardsBuildData).Bounds.Min.field0_0x0 = auVar9;
      auVar8._8_4_ = SUB84(dVar10,0);
      auVar8._0_8_ = dVar4 - dVar6;
      auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(pFVar17->MeshCardsBuildData).Bounds.Min.field0_0x0 + 0x10)
           = auVar8;
      auVar12._8_4_ = SUB84(dVar11,0);
      auVar12._0_8_ = dVar2 + dVar3;
      auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(pFVar17->MeshCardsBuildData).Bounds.Max.field0_0x0 + 8) =
           auVar12;
      (pFVar17->MeshCardsBuildData).Bounds.IsValid = 1;
      (pFVar17->MeshCardsBuildData).Bounds.Pad[0] = (char)uStack_47;
      (pFVar17->MeshCardsBuildData).Bounds.Pad[1] = (char)((uint7)uStack_47 >> 8);
      (pFVar17->MeshCardsBuildData).Bounds.Pad[2] = (char)((uint7)uStack_47 >> 0x10);
      (pFVar17->MeshCardsBuildData).Bounds.Pad[3] = (char)((uint7)uStack_47 >> 0x18);
      (pFVar17->MeshCardsBuildData).Bounds.Pad[4] = (char)((uint7)uStack_47 >> 0x20);
      (pFVar17->MeshCardsBuildData).Bounds.Pad[5] = (char)((uint7)uStack_47 >> 0x28);
      (pFVar17->MeshCardsBuildData).Bounds.Pad[6] = (char)((uint7)uStack_47 >> 0x30);
      MeshCardRepresentation::SetCardsFromBounds(&pFVar17->MeshCardsBuildData,param_1,false);
    }
  }
  return;
}

