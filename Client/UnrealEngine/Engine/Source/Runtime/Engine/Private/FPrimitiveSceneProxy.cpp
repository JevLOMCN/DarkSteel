// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 69

// FPrimitiveSceneProxy @ 1483e2250

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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FPrimitiveSceneProxy::FPrimitiveSceneProxy
          (FPrimitiveSceneProxy *this,FPrimitiveSceneProxyDesc *param_1,FName param_2)

{
  undefined1 *puVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  undefined1 uVar7;
  ERayTracingGroupCullingPriority EVar8;
  schar sVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  UObjectBaseUtility *pUVar13;
  TAtomic<FMinimalName> TVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  code *pcVar17;
  TConsoleVariableData<int> *pTVar18;
  bool bVar19;
  uchar uVar20;
  char cVar21;
  bool bVar22;
  short sVar23;
  FStaticShaderPlatform FVar24;
  EShaderPlatform EVar25;
  int iVar26;
  EBlendMode EVar27;
  TReferenceControllerBase<1> *pTVar28;
  FPrimitiveSceneProxy *pFVar29;
  FName FVar30;
  UClass *pUVar31;
  UObject *pUVar32;
  UPackage *pUVar33;
  FActorPrimitiveColorHandler *this_00;
  FLinearColor *pFVar34;
  FUObjectItem *pFVar35;
  TStatIdData *pTVar36;
  wchar_t *pwVar37;
  IConsoleManager *pIVar38;
  byte bVar39;
  byte bVar40;
  FName FVar41;
  longlong lVar42;
  byte bVar43;
  UPrimitiveComponent *pUVar44;
  FUObjectItem *pFVar45;
  longlong *plVar46;
  byte bVar47;
  TReferenceControllerBase<1> *pTVar48;
  ulonglong uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  ERuntimeVirtualTextureMaterialType local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [4];
  undefined4 local_b4;
  longlong *local_b0;
  undefined8 local_a8;
  FUObjectItem *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  FLinearColor local_88;
  FUObjectItem *local_78;
  undefined8 uStack_70;
  URuntimeVirtualTexture **local_68;
  undefined8 uStack_60;
  
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxy__6B_;
  pTVar48 = (TReferenceControllerBase<1> *)0x0;
  (this->DebugMassData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugMassData).ArrayNum = 0;
  (this->DebugMassData).ArrayMax = 0;
  pTVar28 = ::operator_new(0x18);
  if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
    (this->SimpleStreamableAssetManagerIndex).Object = (int *)0x10;
    (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar28->SharedReferenceCount = (atomic<int>)0x1;
    pTVar28->WeakReferenceCount = (atomic<int>)0x1;
    pTVar28->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar28[1]._padding_ = 0xffffffff;
    if ((pTVar28 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar19)) {
      pcVar17 = (code *)swi(3);
      pFVar29 = (FPrimitiveSceneProxy *)(*pcVar17)();
      return pFVar29;
    }
    (this->SimpleStreamableAssetManagerIndex).Object = (int *)(pTVar28 + 1);
    (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController = pTVar28;
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
    pTVar48 = pTVar28;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
  (this->WireframeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  if ((param_1->CustomPrimitiveData == (FCustomPrimitiveData *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CustomPrimitiveData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxyDesc.h"
                          ,0xea,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    pFVar29 = (FPrimitiveSceneProxy *)(*pcVar17)();
    return pFVar29;
  }
  FCustomPrimitiveData::FCustomPrimitiveData
            (&this->CustomPrimitiveData,param_1->CustomPrimitiveData);
  iVar26 = 0x7fff;
  if (param_1->TranslucencySortPriority < 0x7fff) {
    iVar26 = param_1->TranslucencySortPriority;
  }
  sVar23 = -0x8000;
  if (-0x8000 < iVar26) {
    sVar23 = (short)iVar26;
  }
  this->TranslucencySortPriority = sVar23;
  this->TranslucencySortDistanceOffset = param_1->TranslucencySortDistanceOffset;
  (this->Mobility).Value = (param_1->Mobility).Value;
  this->LightmapType = param_1->LightmapType;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  bVar39 = ((char)(*(uint *)&param_1->field_0x74 >> 0xb) * '\x02' ^ this->field_0x78) & 2U ^
           this->field_0x78;
  this->field_0x78 = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x74 >> 0xc) << 2 ^ bVar39) & 4 ^ bVar39;
  this->field_0x78 = bVar39;
  bVar39 = (param_1->bReceivesDecals << 3 ^ bVar39 & 0xf7) & 0xdf | 0x10;
  this->field_0x78 = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x70 >> 2) << 6 ^ bVar39) & 0x40 ^ bVar39;
  this->field_0x78 = bVar39;
  this->field_0x78 = (char)(*(uint *)&param_1->field_0x70 >> 3) << 7 | bVar39 & 0x7f;
  bVar39 = ((char)(*(uint *)&param_1->field_0x74 >> 0xf) * '\x02' ^ this->field_0x79) & 2U ^
           this->field_0x79;
  this->field_0x79 = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x74 >> 0xe) << 2 ^ bVar39) & 4 ^ bVar39;
  this->field_0x79 = bVar39;
  bVar39 = (param_1->bLevelInstanceEditingState << 3 ^ bVar39 & 0xf7) & 0xef;
  this->field_0x79 = bVar39;
  this->field_0x79 = ((byte)*(undefined4 *)&param_1->field_0x70 & 0xe0 ^ bVar39) & 0x20 ^ bVar39;
  bVar39 = (this->StaticDepthPriorityGroup ^ (param_1->DepthPriorityGroup).Value) & 7 ^
           this->field_0x7a;
  this->field_0x7a = bVar39;
  bVar39 = ((param_1->ViewOwnerDepthPriorityGroup).Value << 3 ^ bVar39) & 0x38 ^ bVar39;
  this->field_0x7a = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x74 >> 0x17) << 6 ^ bVar39) & 0x40 ^ bVar39;
  this->field_0x7a = bVar39;
  this->field_0x7a = (char)(*(uint *)&param_1->field_0x70 >> 6) << 7 | bVar39 & 0x7f;
  bVar39 = (param_1->bVisibleInRealTimeSkyCaptures ^ this->bVisibleInRealTimeSkyCaptures) & 1 ^
           this->field_0x7b;
  this->field_0x7b = bVar39;
  bVar39 = ((char)((uint)*(undefined4 *)&param_1->field_0x70 >> 8) * '\x02' ^ bVar39) & 2 ^ bVar39;
  this->field_0x7b = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x70 >> 9) << 2 ^ bVar39) & 4 ^ bVar39;
  this->field_0x7b = bVar39;
  bVar39 = (param_1->bRenderInMainPass << 3 ^ bVar39 & 0xf7) & 0xef;
  this->field_0x7b = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x74 >> 0x11) << 5 ^ bVar39) & 0x20 ^ bVar39;
  this->field_0x7b = bVar39;
  uVar10 = *(uint *)&param_1->field_0x70;
  this->bSinglePassGDME = '\0';
  this->bVisibleInLumenScene = '\0';
  this->bSupportsParallelGDRTI = '\x01';
  this->bNeedsUnbuiltPreviewLighting = '\x01';
  this->bGoodCandidateForCachedShadowmap = '\x01';
  this->bCanSkipRedundantTransformUpdates = '\x01';
  this->bOpaqueOrMasked = '\x01';
  this->field_0x7b = ((char)(uVar10 >> 0xb) << 6 ^ bVar39) & 0xc0 ^ bVar39 | 0x80;
  this->bWillEverBeLit = '\x01';
  this->bHasValidSettingsForStaticLighting = param_1->bHasValidSettingsForStaticLighting;
  if ((param_1->CastShadow == 1 && param_1->bCastDynamicShadow == 1) &&
     (param_1->bShadowIndirectOnly == 0)) {
    bVar39 = 2;
  }
  else {
    bVar39 = 0;
  }
  bVar47 = 0;
  bVar39 = this->field_0x7d & 0xfd | bVar39;
  this->field_0x7d = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x70 >> 0xe) << 2 ^ bVar39) & 4 ^ bVar39;
  bVar40 = 0;
  this->field_0x7d = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x70 >> 0xf) << 3 ^ bVar39) & 8 ^ bVar39;
  this->field_0x7d = bVar39;
  bVar43 = bVar40;
  if (param_1->bAffectDynamicIndirectLighting == 1 &&
      param_1->bAffectIndirectLightingWhileHidden == 1) {
    bVar43 = 0x10;
  }
  this->field_0x7d = bVar43 | bVar39 & 0xef;
  bVar39 = param_1->bAffectDistanceFieldLighting << 5 ^ (bVar43 | bVar39 & 0xcf);
  this->field_0x7d = bVar39 & 0xbf;
  if (param_1->CastShadow == 1 && param_1->bCastStaticShadow == 1) {
    bVar40 = 0x80;
  }
  this->field_0x7d = bVar40 | bVar39 & 0x3f;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  bVar19 = param_1->CastShadow == 1 &&
           (param_1->bCastDynamicShadow == 1 && param_1->bCastVolumetricTranslucentShadow == 1);
  bVar39 = this->field_0x7f;
  this->bCastVolumetricTranslucentShadow = bVar19;
  if (param_1->CastShadow == 1 && param_1->bCastContactShadow == 1) {
    bVar47 = 2;
  }
  bVar40 = 0;
  this->field_0x7f = bVar47 | bVar19 | bVar39 & 0xe0;
  bVar43 = bVar40;
  if (param_1->CastShadow == 1 && param_1->bCastHiddenShadow == 1) {
    bVar43 = 0x20;
  }
  bVar43 = bVar43 | bVar47 | bVar19 | bVar39 & 0xc0;
  this->field_0x7f = bVar43;
  bVar43 = ((char)(*(uint *)&param_1->field_0x70 >> 0x15) << 6 ^ bVar43) & 0x40 ^ bVar43;
  this->field_0x7f = bVar43;
  this->field_0x7f = (char)(*(uint *)&param_1->field_0x70 >> 0x16) << 7 | bVar43 & 0x7f;
  bVar39 = (byte)(*(uint *)&param_1->field_0x70 >> 0x17);
  if (param_1->bSelfShadowOnly != 0) {
    bVar39 = 1;
  }
  bVar39 = (this->bCastInsetShadow ^ bVar39) & 1 ^ this->field_0x80;
  this->field_0x80 = bVar39;
  bVar39 = (param_1->field_0x73 * '\x02' ^ bVar39) & 2 ^ bVar39;
  this->field_0x80 = bVar39;
  bVar39 = ((byte)((uint)*(undefined4 *)&param_1->field_0x70 >> 0x19) << 2 ^ bVar39) & 4 ^ bVar39;
  this->field_0x80 = bVar39;
  bVar39 = ((byte)((uint)*(undefined4 *)&param_1->field_0x70 >> 0x1a) << 3 ^ bVar39) & 8 ^ bVar39;
  this->field_0x80 = bVar39;
  uVar11 = *(undefined4 *)&param_1->field_0x70;
  this->bSupportsDistanceFieldRepresentation = '\0';
  this->bSupportsHeightfieldRepresentation = '\0';
  puVar1 = &this->field_0x81;
  this->bIsStaticMesh = '\0';
  this->bHasDeformableMesh = '\x01';
  this->bSupportsGPUScene = '\0';
  this->bIsLandscapeGrass = '\0';
  this->bIsHierarchicalInstancedStaticMesh = '\0';
  this->bIsHeterogeneousVolume = '\0';
  this->bIsAlwaysVisible = '\0';
  this->bIsNaniteMesh = '\0';
  this->field_0x80 = ((byte)((uint)uVar11 >> 0x1b) << 4 ^ bVar39 & 0xf) & 0x1f | 0x40;
  puVar3 = &this->field_0x82;
  this->bEvaluateWorldPositionOffset = '\x01';
  this->bAnyMaterialUsesMotionVectorWorldOffset = '\0';
  this->bAnyMaterialUsesTemporalResponsiveness = '\0';
  this->bAnyMaterialHasPixelAnimation = '\0';
  this->bAnyMaterialAlwaysEvaluatesWorldPositionOffset = '\0';
  this->bAnyMaterialHasWorldPositionOffset = '\0';
  this->bHasWorldPositionOffsetVelocity = '\0';
  this->bWantsSelectionOutline = '\x01';
  this->bVerifyUsedMaterials = '\x01';
  puVar1 = &this->field_0x83;
  this->bSupportsDistanceFieldRepresentation = '\0';
  this->bShouldNotifyOnWorldAddRemove = '\0';
  this->bSupportsSortedTriangles = '\0';
  this->bCompatibleWithLumenCardSharing = '\0';
  this->bIsLandscapeNaniteProxy = '\0';
  this->bIsLandscapeProxy = '\0';
  this->bLumenHeightfield = param_1->bLumenHeightfield;
  this->bSupportsHeightfieldRepresentation = '\0';
  bVar39 = (param_1->field_0x76 << 2 ^ this->field_0x84) & 4 ^ this->field_0x84;
  this->field_0x84 = bVar39;
  if ((param_1->Mobility).Value != '\x02') {
    bVar40 = 8;
  }
  this->field_0x84 = bVar40 | bVar39 & 0xf7;
  this->field_0x84 =
       ((char)(*(uint *)&param_1->field_0x74 >> 7) << 4 ^ (bVar40 | bVar39 & 7)) & 0x1f;
  bVar39 = (param_1->bIsFirstPerson ^ this->bIsFirstPerson) & 1 ^ this->field_0x85;
  this->field_0x85 = bVar39;
  bVar39 = (param_1->bIsFirstPersonWorldSpaceRepresentation * '\x02' ^ bVar39 & 0xfd) & 0xf3;
  this->field_0x85 = bVar39;
  bVar39 = ((byte)((uint)*(undefined4 *)&param_1->field_0x70 >> 0x18) & 0xf0 ^ bVar39) & 0x10 ^
           bVar39;
  this->field_0x85 = bVar39;
  bVar39 = ((byte)((uint)*(undefined4 *)&param_1->field_0x70 >> 0x18) & 0xe0 ^ bVar39) & 0x20 ^
           bVar39;
  this->field_0x85 = bVar39;
  bVar39 = ((byte)((uint)*(undefined4 *)&param_1->field_0x70 >> 0x18) & 0xc0 ^ bVar39) & 0x40 ^
           bVar39;
  this->field_0x85 = bVar39;
  this->field_0x85 =
       (byte)((uint)*(undefined4 *)&param_1->field_0x70 >> 0x18) & 0x80 | bVar39 & 0x7f;
  bVar39 = (this->bIsBeingMovedByEditor ^ param_1->bIsBeingMovedByEditor) & 1 ^ this->field_0x86;
  this->field_0x86 = bVar39;
  bVar39 = ((char)(*(uint *)&param_1->field_0x74 >> 1) * '\x02' ^ bVar39) & 2 ^ bVar39;
  this->field_0x86 = bVar39;
  bVar39 = ((byte)*(undefined4 *)&param_1->field_0x74 & 0xfc ^ bVar39) & 4 ^ bVar39;
  this->field_0x86 = bVar39;
  bVar39 = ((byte)*(undefined4 *)&param_1->field_0x74 & 0xf8 ^ bVar39) & 8 ^ bVar39;
  this->field_0x86 = bVar39;
  bVar39 = ((byte)*(undefined4 *)&param_1->field_0x74 & 0xf0 ^ bVar39) & 0x10 ^ bVar39;
  this->field_0x86 = bVar39;
  bVar39 = ((byte)*(undefined4 *)&param_1->field_0x74 & 0xe0 ^ bVar39) & 0x20 ^ bVar39;
  this->field_0x86 = bVar39;
  this->field_0x86 = ((byte)*(undefined4 *)&param_1->field_0x74 & 0xc0 ^ bVar39) & 0x40 ^ bVar39;
  this->CustomDepthStencilValue = (uchar)param_1->CustomDepthStencilValue;
  switch(param_1->CustomDepthStencilWriteMask) {
  case ERSM_Default:
    uVar20 = '\0';
    break;
  case ERSM_255:
    uVar20 = '\x01';
    break;
  case ERSM_1:
    uVar20 = '\x02';
    break;
  case ERSM_2:
    uVar20 = '\x03';
    break;
  case ERSM_4:
    uVar20 = '\x04';
    break;
  case ERSM_8:
    uVar20 = '\x05';
    break;
  case ERSM_16:
    uVar20 = '\x06';
    break;
  case ERSM_32:
    uVar20 = '\a';
    break;
  case ERSM_64:
    uVar20 = '\b';
    break;
  case ERSM_128:
    uVar20 = '\t';
    break;
  default:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                        ,0xad,L"");
    if (bVar19) {
      pcVar17 = (code *)swi(3);
      pFVar29 = (FPrimitiveSceneProxy *)(*pcVar17)();
      return pFVar29;
    }
    uVar20 = '\0';
  }
  (this->CustomDepthStencilWriteMask).Value = uVar20;
  pTVar4 = &this->RuntimeVirtualTextures;
  pTVar5 = &this->Owners;
  this->LightingChannelMask = (byte)param_1->LightingChannels & 7;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  EVar8 = param_1->RayTracingGroupCullingPriority;
  (this->CombinedMaterialRelevance).field0_0x0.Raw = 0;
  this->RayTracingGroupCullingPriority = EVar8;
  this->InstanceSceneDataBuffersInternal = (FInstanceSceneDataBuffers *)0x0;
  (this->IndirectLightingCacheQuality).Value = (param_1->IndirectLightingCacheQuality).Value;
  this->VirtualTextureLodBias = param_1->VirtualTextureLodBias;
  this->VirtualTextureCullMips = (schar)param_1->VirtualTextureCullMips;
  sVar9 = param_1->VirtualTextureMinCoverage;
  (this->MinMaxMaterialDisplacement).field0_0x0._s_0.Y = 0.0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  (this->RuntimeVirtualTextureMaterialTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RuntimeVirtualTextureMaterialTypes).ArrayNum = 0;
  (this->RuntimeVirtualTextureMaterialTypes).ArrayMax = 0;
  (this->MaterialCacheRenderProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialCacheRenderProxies).ArrayNum = 0;
  (this->MaterialCacheRenderProxies).ArrayMax = 0;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Owners).ArrayNum = 0;
  (this->Owners).ArrayMax = 0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).SphereRadius = 0.0;
  this->VirtualTextureMinCoverage = sVar9;
  this->DynamicIndirectShadowMinVisibility = 0.0;
  this->DistanceFieldSelfShadowBias = 0.0;
  *(undefined8 *)&this->MaxWPOExtent = 0;
  this->MaterialCacheDescriptor = 0xffffffff;
  (this->PrimitiveComponentId).PrimIDValue = (param_1->ComponentId).PrimIDValue;
  this->Scene = param_1->Scene;
  this->PrimitiveSceneInfo = (FPrimitiveSceneInfo *)0x0;
  pUVar32 = param_1->Owner;
  if (pUVar32 == (UObject *)0x0) {
    local_98 = 0;
    FVar30.ComparisonIndex.Value = 0;
    FVar30.Number = 0;
  }
  else {
    FVar30.ComparisonIndex.Value = *(uint *)&pUVar32->field_0x18;
    FVar30.Number = *(uint *)&pUVar32->field_0x1c;
  }
  this->OwnerName = FVar30;
  this->ResourceName = param_2;
  pUVar13 = (UObjectBaseUtility *)param_1->Owner;
  if (pUVar13 == (UObjectBaseUtility *)0x0) {
LAB_1483e2ade:
    local_90 = 0;
    FVar41.ComparisonIndex.Value = 0;
    FVar41.Number = 0;
  }
  else {
    pUVar31 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar32 = UObjectBaseUtility::GetTypedOuter(pUVar13,pUVar31);
    if (pUVar32 == (UObject *)0x0) goto LAB_1483e2ade;
    pUVar13 = (UObjectBaseUtility *)param_1->Owner;
    if (pUVar13 == (UObjectBaseUtility *)0x0) {
      pUVar33 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)0x0);
      FVar41 = (FName)pUVar33->_padding_;
    }
    else {
      pUVar31 = Z_Construct_UClass_ULevel_NoRegister();
      pUVar32 = UObjectBaseUtility::GetTypedOuter(pUVar13,pUVar31);
      pUVar33 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar32);
      FVar41 = (FName)pUVar33->_padding_;
    }
  }
  this->LevelName = FVar41;
  (this->MeshDrawCommandStatsCategory).ComparisonIndex = 0;
  (this->MeshDrawCommandStatsCategory).Number = 0;
  this->VisibilityId = param_1->VisibilityId;
  this->UniformBuffer = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
  pUVar44 = (UPrimitiveComponent *)param_1->Component;
  if (pUVar44 == (UPrimitiveComponent *)0x0) {
LAB_1483e2b3e:
    pUVar44 = (UPrimitiveComponent *)0x0;
  }
  else {
    pUVar31 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar26 = (int)pUVar31->_padding_;
    if ((*(int *)(*(longlong *)&pUVar44->field_0x10 + 0x38) < iVar26) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar44->field_0x10 + 0x30) + (longlong)iVar26 * 8) !=
        &pUVar31->_padding_)) goto LAB_1483e2b3e;
  }
  this->ComponentForDebuggingOnly = pUVar44;
  (this->PSOPrecacheRequestsToBoostOnDraw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum = 0;
  (this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax = 0;
  fVar50 = param_1->CachedMaxDrawDistance;
  if (param_1->CachedMaxDrawDistance <= 0.0) {
    fVar50 = __real_7f7fffff;
  }
  this->MaxDrawDistance = fVar50;
  this->MinDrawDistance = param_1->MinDrawDistance;
  if ((this->Scene == (FSceneInterface *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Scene",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                          ,0x1b6,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    pFVar29 = (FPrimitiveSceneProxy *)(*pcVar17)();
    return pFVar29;
  }
  pUVar13 = (UObjectBaseUtility *)param_1->Owner;
  if (pUVar13 != (UObjectBaseUtility *)0x0) {
    pUVar31 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar32 = UObjectBaseUtility::GetTypedOuter(pUVar13,pUVar31);
    if (pUVar32 != (UObject *)0x0) {
      cVar21 = pUVar32[0xe].field_0x12;
      this->bShouldNotifyOnWorldAddRemove = cVar21;
      if ((byte)(cVar21 << 7) != 0) {
        uVar7 = this->field_0x7b;
        bVar39 = ~((byte)pUVar32[0xe].field_0x10 >> 5);
        if (((this->bForceHidden ^ bVar39) & 1) != 0) {
          pcVar17 = *(code **)(this->_padding_ + 0x238);
          this->field_0x7b = (bVar39 << 4 ^ uVar7) & 0x10 ^ uVar7;
          if (pcVar17 != OnForceHiddenChanged) {
            (*pcVar17)(this);
          }
        }
      }
      pUVar44 = (UPrimitiveComponent *)param_1->Component;
      if (pUVar44 == (UPrimitiveComponent *)0x0) {
LAB_1483e2c84:
        fVar50 = FLinearColor::White.field0_0x0._0_4_;
        fVar51 = FLinearColor::White.field0_0x0._4_4_;
        fVar52 = FLinearColor::White.field0_0x0._8_4_;
        fVar53 = FLinearColor::White.field0_0x0._12_4_;
      }
      else {
        pUVar31 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar26 = (int)pUVar31->_padding_;
        if ((*(int *)(*(longlong *)&pUVar44->field_0x10 + 0x38) < iVar26) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar44->field_0x10 + 0x30) + (longlong)iVar26 * 8) !=
            &pUVar31->_padding_)) goto LAB_1483e2c84;
        this_00 = FActorPrimitiveColorHandler::Get();
        pFVar34 = FActorPrimitiveColorHandler::GetPrimitiveColor(this_00,&local_88,pUVar44);
        fVar50 = (pFVar34->field0_0x0)._s_0.R;
        fVar51 = (pFVar34->field0_0x0)._s_0.G;
        fVar52 = (pFVar34->field0_0x0)._s_0.B;
        fVar53 = (pFVar34->field0_0x0)._s_0.A;
      }
      (this->PrimitiveColor).field0_0x0._s_0.R = fVar50;
      (this->PrimitiveColor).field0_0x0._s_0.G = fVar51;
      (this->PrimitiveColor).field0_0x0._s_0.B = fVar52;
      (this->PrimitiveColor).field0_0x0._s_0.A = fVar53;
    }
  }
  pUVar32 = param_1->AdditionalStatObjectPtr;
  if (pUVar32 == (UObject *)0x0) {
    pTVar36 = (param_1->StatId).StatIdPtr;
  }
  else {
    local_a0 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar32->field_0xc);
    TVar14 = ((local_a0->StatID).StatIdPtr)->Name;
    if ((TVar14._0_4_ == 0) && (TVar14._4_4_ == 0)) {
      pFVar35 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar32->field_0xc);
      FUObjectItem::CreateStatID(pFVar35);
    }
    pTVar36 = (local_a0->StatID).StatIdPtr;
  }
  (this->StatId).StatIdPtr = pTVar36;
  this->MeshDrawCommandStatsCategory = param_1->MeshDrawCommandStatsCategory;
  uVar7 = this->field_0x7c;
  if ((this->bNeedsUnbuiltPreviewLighting != '\0') &&
     (!(bool)this->bHasValidSettingsForStaticLighting)) {
    this->field_0x7c = uVar7 & 0xbf;
  }
  bVar39 = ~(~(~(byte)(*(uint *)&param_1->field_0x74 >> 0x12) * '\x02') & 2) & this->field_0x78;
  this->field_0x78 = bVar39;
  if ((((((bVar39 & 0x40) != 0) || ((char)bVar39 < '\0')) ||
       (this->bUseViewOwnerDepthPriorityGroup != '\0')) ||
      (this->bIsFirstPersonWorldSpaceRepresentation != '\0')) &&
     (pTVar2 = &param_1->ActorOwners, pTVar5 != pTVar2)) {
    pFVar15 = (pTVar5->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Owners).ArrayNum = (param_1->ActorOwners).ArrayNum;
    (this->Owners).ArrayMax = (param_1->ActorOwners).ArrayMax;
    (param_1->ActorOwners).ArrayNum = 0;
    (param_1->ActorOwners).ArrayMax = 0;
  }
  FVar24.Platform = FSceneInterface::GetShaderPlatform(this->Scene);
  bVar19 = UseVirtualTexturing(FVar24);
  if (bVar19) {
    pFVar45 = (FUObjectItem *)(param_1->RuntimeVirtualTextures).DataPtr;
    uStack_70 = *(undefined8 *)&(param_1->RuntimeVirtualTextures).ArrayNum;
    pFVar35 = (FUObjectItem *)(&pFVar45->field0_0x0 + (param_1->RuntimeVirtualTextures).ArrayNum);
    local_a0 = pFVar35;
    local_78 = pFVar45;
    if (pFVar45 != pFVar35) {
      do {
        lVar42 = (pFVar45->field0_0x0).FlagsAndRefCount;
        if (lVar42 != 0) {
          local_b4 = *(undefined4 *)(lVar42 + 0xc);
          pFVar15 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_b4) &&
              ((FScriptContainerElement *)&local_b4 <
               pFVar15 + (longlong)(this->RuntimeVirtualTextures).ArrayMax * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar17 = (code *)swi(3);
            pFVar29 = (FPrimitiveSceneProxy *)(*pcVar17)();
            return pFVar29;
          }
          iVar26 = (this->RuntimeVirtualTextures).ArrayNum;
          if (iVar26 == (this->RuntimeVirtualTextures).ArrayMax) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar4->AllocatorInstance,
                                &(this->RuntimeVirtualTextures).ArrayMax);
          }
          (this->RuntimeVirtualTextures).ArrayNum = iVar26 + 1;
          *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_b4;
          local_res8[0] = *(ERuntimeVirtualTextureMaterialType *)(lVar42 + 0x34);
          TArray<enum_ERuntimeVirtualTextureMaterialType,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<enum_ERuntimeVirtualTextureMaterialType>
                    (&this->RuntimeVirtualTextureMaterialTypes,local_res8);
          pFVar35 = local_a0;
        }
        pFVar45 = (FUObjectItem *)&pFVar45->field1_0x8;
      } while (pFVar45 != pFVar35);
    }
  }
  local_68 = (param_1->RuntimeVirtualTextures).DataPtr;
  uStack_60 = *(undefined8 *)&(param_1->RuntimeVirtualTextures).ArrayNum;
  if (0 < (param_1->RuntimeVirtualTextures).ArrayNum) {
    bVar39 = 0;
    if (param_1->VirtualTextureRenderPassType == Never) {
      bVar39 = 0x20;
    }
    bVar43 = 0;
    if (param_1->VirtualTextureRenderPassType == Always) {
      bVar43 = 0x10;
    }
    this->field_0x78 = bVar39 | this->field_0x78 & 0xcf | bVar43;
  }
  if ((0 < (this->RuntimeVirtualTextures).ArrayNum) &&
     (fVar50 = param_1->VirtualTextureMainPassMaxDrawDistance, 0.0 < fVar50)) {
    fVar51 = this->MaxDrawDistance;
    if (fVar50 <= this->MaxDrawDistance) {
      fVar51 = fVar50;
    }
    this->MaxDrawDistance = fVar51;
  }
  this->bAnyMaterialHasWorldPositionOffset = '\0';
  this->bAnyMaterialUsesMotionVectorWorldOffset = '\0';
  this->bAnyMaterialUsesTemporalResponsiveness = '\0';
  this->bAnyMaterialHasPixelAnimation = '\0';
  EVar25 = FSceneInterface::GetShaderPlatform(this->Scene);
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  (**(code **)(param_1->_padding_ + 8))(param_1,&local_b0,0);
  iVar26 = (int)local_a8;
  plVar6 = local_b0 + (int)local_a8;
  plVar46 = local_b0;
  while( true ) {
    if ((int)local_a8 != iVar26) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (plVar46 == plVar6) goto LAB_1483e2f6c;
    if (((UMaterialInterface *)*plVar46 != (UMaterialInterface *)0x0) &&
       (bVar19 = UMaterialInterface::IsUsingWorldPositionOffset_Concurrent
                           ((UMaterialInterface *)*plVar46,EVar25), bVar19)) break;
    plVar46 = plVar46 + 1;
  }
  this->bAnyMaterialHasWorldPositionOffset = '\x01';
LAB_1483e2f6c:
  FVar24.Platform = FSceneInterface::GetShaderPlatform(this->Scene);
  bVar19 = VelocityEncodeHasPixelAnimation(FVar24);
  if (bVar19) {
    FVar24.Platform = FSceneInterface::GetShaderPlatform(this->Scene);
    bVar19 = SupportsTSR(FVar24);
    if (bVar19) {
      iVar26 = (int)local_a8;
      plVar6 = local_b0 + (int)local_a8;
      plVar46 = local_b0;
      do {
        if ((int)local_a8 != iVar26) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (plVar46 == plVar6) goto LAB_1483e3004;
        plVar16 = (longlong *)*plVar46;
        if ((plVar16 != (longlong *)0x0) &&
           (cVar21 = (**(code **)(*plVar16 + 0x520))(plVar16), cVar21 != '\0')) {
          EVar27 = (**(code **)(*plVar16 + 0x460))(plVar16);
          bVar19 = IsOpaqueOrMaskedBlendMode(EVar27);
          if (bVar19) goto LAB_1483e2ffd;
        }
        plVar46 = plVar46 + 1;
      } while( true );
    }
  }
LAB_1483e304a:
  iVar26 = (int)local_a8;
  plVar6 = local_b0 + (int)local_a8;
  plVar46 = local_b0;
  while( true ) {
    if ((int)local_a8 != iVar26) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (plVar46 == plVar6) goto LAB_1483e3090;
    if (((UMaterialInterface *)*plVar46 != (UMaterialInterface *)0x0) &&
       (bVar19 = UMaterialInterface::IsUsingMotionVectorWorldOffset_Concurrent
                           ((UMaterialInterface *)*plVar46,EVar25), bVar19)) break;
    plVar46 = plVar46 + 1;
  }
  this->bAnyMaterialUsesMotionVectorWorldOffset = '\x01';
LAB_1483e3090:
  if (local_b0 != (longlong *)0x0) {
    FMemory::Free(local_b0);
  }
  pTVar18 = CVarVelocityForceOutput.Ref;
  bVar19 = IsInParallelGameThread();
  if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
    lVar42 = 0;
  }
  else {
    lVar42 = 4;
  }
  cVar21 = *(char *)((longlong)pTVar18->ShadowedValue + lVar42);
  uVar49 = (ulonglong)_tls_index;
  this->bAlwaysHasVelocity = cVar21;
  if (((byte)(cVar21 << 7) == 0) && (param_1->bSupportsWorldPositionOffsetVelocity != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar49 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar38 = IConsoleManager::Get();
      CVarVelocityOutputPass =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar38 + 0xc0))(pIVar38,L"r.VelocityOutputPass",1);
      _Init_thread_footer(&::_TSS0);
    }
    if ((CVarVelocityOutputPass == (IConsoleVariable *)0x0) ||
       (iVar26 = (**(code **)(*(longlong *)CVarVelocityOutputPass + 200))(), iVar26 == 2)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pTVar18 = CVarVelocityEnableVertexDeformation.Ref;
    bVar22 = IsInParallelGameThread();
    if ((bVar22) || (bVar22 = IsInGameThread(), bVar22)) {
      lVar42 = 0;
    }
    else {
      lVar42 = 4;
    }
    iVar26 = *(int *)((longlong)pTVar18->ShadowedValue + lVar42);
    if (((iVar26 == 1) || ((iVar26 == 2 && (bVar19)))) &&
       (this->bAnyMaterialHasWorldPositionOffset != '\0')) {
      this->field_0x82 = this->field_0x82 | 2;
    }
  }
  pUVar44 = (UPrimitiveComponent *)param_1->Component;
  if (pUVar44 != (UPrimitiveComponent *)0x0) {
    pUVar31 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar26 = (int)pUVar31->_padding_;
    if ((iVar26 <= *(int *)(*(longlong *)&pUVar44->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar44->field_0x10 + 0x30) + (longlong)iVar26 * 8) ==
        &pUVar31->_padding_)) {
      bVar19 = UPrimitiveComponent::ShouldRenderProxyFallbackToDefaultMaterial(pUVar44);
      if ((bVar19) &&
         (((pUVar44->MaterialPSOPrecacheRequestIDs).ArrayNum == 0 &&
          (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("!PrimitiveComponent->ShouldRenderProxyFallbackToDefaultMaterial() || !PrimitiveComponent->MaterialPSOPrecacheRequestIDs.IsEmpty()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                               ,0x260,L""), bVar19)))) {
        pcVar17 = (code *)swi(3);
        pFVar29 = (FPrimitiveSceneProxy *)(*pcVar17)();
        return pFVar29;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar49 * 8) + 0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar37 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar37,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
          && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
              bHasNullRHIOnCommandline == false)) &&
         (((bVar19 = PipelineStateCache::IsPSOPrecachingEnabled(), bVar19 &&
           (GPSODrawnComponentBoostStrategy != 0)) &&
          ((bVar19 = UPrimitiveComponent::IsPSOPrecaching(pUVar44), bVar19 &&
           (pUVar44->PSOPrecacheRequestPriority == High)))))) {
        pTVar5 = &this->PSOPrecacheRequestsToBoostOnDraw;
        if (pTVar5 != &pUVar44->MaterialPSOPrecacheRequestIDs) {
          iVar26 = (pUVar44->MaterialPSOPrecacheRequestIDs).ArrayNum;
          pFVar15 = (pUVar44->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data;
          iVar12 = (this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax;
          (this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum = iVar26;
          if ((iVar26 == 0) && (iVar12 == 0)) {
            (this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar26,iVar12,&pTVar5->AllocatorInstance,iVar26,
                       &(this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax);
            if (iVar26 != 0) {
              memcpy((pTVar5->AllocatorInstance).Data,pFVar15,(longlong)iVar26 << 2);
            }
          }
        }
      }
    }
  }
  if (this->bIsFirstPerson == 0) {
    if (this->bIsFirstPersonWorldSpaceRepresentation != '\0') {
      this->bOwnerNoSee = '\x01';
      this->bCastHiddenShadow = '\0';
    }
  }
  else {
    this->bCastDynamicShadow = '\0';
    this->bCastStaticShadow = '\0';
    this->bCastVolumetricTranslucentShadow = '\0';
    this->bCastFarShadow = '\0';
  }
  return this;
LAB_1483e2ffd:
  this->bAnyMaterialHasPixelAnimation = '\x01';
LAB_1483e3004:
  iVar26 = (int)local_a8;
  plVar6 = local_b0 + (int)local_a8;
  plVar46 = local_b0;
  while( true ) {
    if ((int)local_a8 != iVar26) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (plVar46 == plVar6) goto LAB_1483e304a;
    if (((UMaterialInterface *)*plVar46 != (UMaterialInterface *)0x0) &&
       (bVar19 = UMaterialInterface::IsUsingTemporalResponsiveness_Concurrent
                           ((UMaterialInterface *)*plVar46,EVar25), bVar19)) break;
    plVar46 = plVar46 + 1;
  }
  this->bAnyMaterialUsesTemporalResponsiveness = '\x01';
  goto LAB_1483e304a;
}

// FPrimitiveSceneProxy @ 1483e33e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FPrimitiveSceneProxy::FPrimitiveSceneProxy(FPrimitiveSceneProxy *this,FPrimitiveSceneProxy *param_1)

{
  TArray<FPrimitiveSceneProxy::FDebugMassData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<ERuntimeVirtualTextureMaterialType,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FMaterialCacheVirtualTextureRenderProxy_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> this_00;
  undefined8 uVar11;
  double dVar12;
  byte bVar13;
  
  pTVar1 = &this->DebugMassData;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxy__6B_;
  iVar8 = (param_1->DebugMassData).ArrayNum;
  piVar2 = &(this->DebugMassData).ArrayMax;
  pFVar9 = (param_1->DebugMassData).AllocatorInstance.Data;
  (this->DebugMassData).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar8,0,&pTVar1->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar9,(longlong)iVar8 * 0x60);
  }
  (this->SimpleStreamableAssetManagerIndex).Object =
       (param_1->SimpleStreamableAssetManagerIndex).Object;
  pTVar10 = (param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController;
  (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar11 = *(undefined8 *)((longlong)&(param_1->WireframeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->WireframeColor).field0_0x0 =
       *(undefined8 *)&(param_1->WireframeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->WireframeColor).field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&(param_1->PrimitiveColor).field0_0x0 + 8);
  *(undefined8 *)&(this->PrimitiveColor).field0_0x0 =
       *(undefined8 *)&(param_1->PrimitiveColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->PrimitiveColor).field0_0x0 + 8) = uVar11;
  FCustomPrimitiveData::FCustomPrimitiveData
            (&this->CustomPrimitiveData,&param_1->CustomPrimitiveData);
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->TranslucencySortDistanceOffset = param_1->TranslucencySortDistanceOffset;
  (this->Mobility).Value = (param_1->Mobility).Value;
  this->LightmapType = param_1->LightmapType;
  (this->StatId).StatIdPtr = (param_1->StatId).StatIdPtr;
  bVar13 = (this->bIsLocalToWorldDeterminantNegative ^ param_1->bIsLocalToWorldDeterminantNegative)
           & 1 ^ this->field_0x78;
  this->field_0x78 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x78) & 2 ^ bVar13;
  this->field_0x78 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x78) & 4 ^ bVar13;
  this->field_0x78 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x78) & 8 ^ bVar13;
  this->field_0x78 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x78) & 0x10 ^ bVar13;
  this->field_0x78 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x78) & 0x20 ^ bVar13;
  this->field_0x78 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x78) & 0x40 ^ bVar13;
  this->field_0x78 = bVar13;
  this->field_0x78 = (bVar13 ^ param_1->field_0x78) & 0x7f ^ param_1->field_0x78;
  bVar13 = (this->bOftenMoving ^ param_1->bOftenMoving) & 1 ^ this->field_0x79;
  this->field_0x79 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x79) & 2 ^ bVar13;
  this->field_0x79 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x79) & 4 ^ bVar13;
  this->field_0x79 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x79) & 8 ^ bVar13;
  this->field_0x79 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x79) & 0x10 ^ bVar13;
  this->field_0x79 = bVar13;
  this->field_0x79 = (bVar13 ^ param_1->field_0x79) & 0x20 ^ bVar13;
  bVar13 = (this->StaticDepthPriorityGroup ^ param_1->StaticDepthPriorityGroup) & 7 ^
           this->field_0x7a;
  this->field_0x7a = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7a) & 0x38 ^ bVar13;
  this->field_0x7a = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7a) & 0x40 ^ bVar13;
  this->field_0x7a = bVar13;
  this->field_0x7a = (bVar13 ^ param_1->field_0x7a) & 0x7f ^ param_1->field_0x7a;
  bVar13 = (this->bVisibleInRealTimeSkyCaptures ^ param_1->bVisibleInRealTimeSkyCaptures) & 1 ^
           this->field_0x7b;
  this->field_0x7b = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7b) & 2 ^ bVar13;
  this->field_0x7b = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7b) & 4 ^ bVar13;
  this->field_0x7b = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7b) & 8 ^ bVar13;
  this->field_0x7b = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7b) & 0x10 ^ bVar13;
  this->field_0x7b = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7b) & 0x20 ^ bVar13;
  this->field_0x7b = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7b) & 0x40 ^ bVar13;
  this->field_0x7b = bVar13;
  this->field_0x7b = (bVar13 ^ param_1->field_0x7b) & 0x7f ^ param_1->field_0x7b;
  bVar13 = (this->bSinglePassGDME ^ param_1->bSinglePassGDME) & 1 ^ this->field_0x7c;
  this->field_0x7c = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7c) & 2 ^ bVar13;
  this->field_0x7c = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7c) & 4 ^ bVar13;
  this->field_0x7c = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7c) & 8 ^ bVar13;
  this->field_0x7c = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7c) & 0x10 ^ bVar13;
  this->field_0x7c = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7c) & 0x20 ^ bVar13;
  this->field_0x7c = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7c) & 0x40 ^ bVar13;
  this->field_0x7c = bVar13;
  this->field_0x7c = (bVar13 ^ param_1->field_0x7c) & 0x7f ^ param_1->field_0x7c;
  bVar13 = (this->bWillEverBeLit ^ param_1->bWillEverBeLit) & 1 ^ this->field_0x7d;
  this->field_0x7d = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7d) & 2 ^ bVar13;
  this->field_0x7d = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7d) & 4 ^ bVar13;
  this->field_0x7d = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7d) & 8 ^ bVar13;
  this->field_0x7d = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7d) & 0x10 ^ bVar13;
  this->field_0x7d = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7d) & 0x20 ^ bVar13;
  this->field_0x7d = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7d) & 0x40 ^ bVar13;
  this->field_0x7d = bVar13;
  this->field_0x7d = (bVar13 ^ param_1->field_0x7d) & 0x7f ^ param_1->field_0x7d;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  bVar13 = (this->bCastVolumetricTranslucentShadow ^ param_1->bCastVolumetricTranslucentShadow) & 1
           ^ this->field_0x7f;
  this->field_0x7f = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7f) & 2 ^ bVar13;
  this->field_0x7f = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7f) & 4 ^ bVar13;
  this->field_0x7f = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7f) & 8 ^ bVar13;
  this->field_0x7f = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7f) & 0x10 ^ bVar13;
  this->field_0x7f = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7f) & 0x20 ^ bVar13;
  this->field_0x7f = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x7f) & 0x40 ^ bVar13;
  this->field_0x7f = bVar13;
  this->field_0x7f = (bVar13 ^ param_1->field_0x7f) & 0x7f ^ param_1->field_0x7f;
  bVar13 = (this->bCastInsetShadow ^ param_1->bCastInsetShadow) & 1 ^ this->field_0x80;
  this->field_0x80 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x80) & 2 ^ bVar13;
  this->field_0x80 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x80) & 4 ^ bVar13;
  this->field_0x80 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x80) & 8 ^ bVar13;
  this->field_0x80 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x80) & 0x10 ^ bVar13;
  this->field_0x80 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x80) & 0x20 ^ bVar13;
  this->field_0x80 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x80) & 0x40 ^ bVar13;
  this->field_0x80 = bVar13;
  this->field_0x80 = (param_1->field_0x80 ^ bVar13) & 0x7f ^ param_1->field_0x80;
  bVar13 = (this->bIsStaticMesh ^ param_1->bIsStaticMesh) & 1 ^ this->field_0x81;
  this->field_0x81 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x81) & 2 ^ bVar13;
  this->field_0x81 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x81) & 4 ^ bVar13;
  this->field_0x81 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x81) & 8 ^ bVar13;
  this->field_0x81 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x81) & 0x10 ^ bVar13;
  this->field_0x81 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x81) & 0x20 ^ bVar13;
  this->field_0x81 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x81) & 0x40 ^ bVar13;
  this->field_0x81 = bVar13;
  this->field_0x81 = (param_1->field_0x81 ^ bVar13) & 0x7f ^ param_1->field_0x81;
  bVar13 = (this->bEvaluateWorldPositionOffset ^ param_1->bEvaluateWorldPositionOffset) & 1 ^
           this->field_0x82;
  this->field_0x82 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x82) & 2 ^ bVar13;
  this->field_0x82 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x82) & 4 ^ bVar13;
  this->field_0x82 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x82) & 8 ^ bVar13;
  this->field_0x82 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x82) & 0x10 ^ bVar13;
  this->field_0x82 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x82) & 0x20 ^ bVar13;
  this->field_0x82 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x82) & 0x40 ^ bVar13;
  this->field_0x82 = bVar13;
  this->field_0x82 = (bVar13 ^ param_1->field_0x82) & 0x7f ^ param_1->field_0x82;
  bVar13 = (this->bSupportsDistanceFieldRepresentation ^
           param_1->bSupportsDistanceFieldRepresentation) & 1 ^ this->field_0x83;
  this->field_0x83 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x83) & 2 ^ bVar13;
  this->field_0x83 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x83) & 4 ^ bVar13;
  this->field_0x83 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x83) & 8 ^ bVar13;
  this->field_0x83 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x83) & 0x10 ^ bVar13;
  this->field_0x83 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x83) & 0x20 ^ bVar13;
  this->field_0x83 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x83) & 0x40 ^ bVar13;
  this->field_0x83 = bVar13;
  this->field_0x83 = (bVar13 ^ param_1->field_0x83) & 0x7f ^ param_1->field_0x83;
  bVar13 = (this->bWantsSelectionOutline ^ param_1->bWantsSelectionOutline) & 1 ^ this->field_0x84;
  this->field_0x84 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x84) & 2 ^ bVar13;
  this->field_0x84 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x84) & 4 ^ bVar13;
  this->field_0x84 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x84) & 8 ^ bVar13;
  this->field_0x84 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x84) & 0x10 ^ bVar13;
  this->field_0x84 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x84) & 0x20 ^ bVar13;
  this->field_0x84 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x84) & 0x40 ^ bVar13;
  this->field_0x84 = bVar13;
  this->field_0x84 = (bVar13 ^ param_1->field_0x84) & 0x7f ^ param_1->field_0x84;
  bVar13 = (this->bIsFirstPerson ^ param_1->bIsFirstPerson) & 1 ^ this->field_0x85;
  this->field_0x85 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x85) & 2 ^ bVar13;
  this->field_0x85 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x85) & 4 ^ bVar13;
  this->field_0x85 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x85) & 8 ^ bVar13;
  this->field_0x85 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x85) & 0x10 ^ bVar13;
  this->field_0x85 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x85) & 0x20 ^ bVar13;
  this->field_0x85 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x85) & 0x40 ^ bVar13;
  this->field_0x85 = bVar13;
  this->field_0x85 = (bVar13 ^ param_1->field_0x85) & 0x7f ^ param_1->field_0x85;
  bVar13 = (this->bIsBeingMovedByEditor ^ param_1->bIsBeingMovedByEditor) & 1 ^ this->field_0x86;
  this->field_0x86 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x86) & 2 ^ bVar13;
  this->field_0x86 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x86) & 4 ^ bVar13;
  this->field_0x86 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x86) & 8 ^ bVar13;
  this->field_0x86 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x86) & 0x10 ^ bVar13;
  this->field_0x86 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x86) & 0x20 ^ bVar13;
  this->field_0x86 = bVar13;
  this->field_0x86 = (bVar13 ^ param_1->field_0x86) & 0x40 ^ bVar13;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  (this->CustomDepthStencilWriteMask).Value = (param_1->CustomDepthStencilWriteMask).Value;
  this->LightingChannelMask = param_1->LightingChannelMask;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  this->InstanceSceneDataBuffersInternal = param_1->InstanceSceneDataBuffersInternal;
  (this->CombinedMaterialRelevance).field0_0x0 = (param_1->CombinedMaterialRelevance).field0_0x0;
  (this->IndirectLightingCacheQuality).Value = (param_1->IndirectLightingCacheQuality).Value;
  this->VirtualTextureLodBias = param_1->VirtualTextureLodBias;
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  pTVar3 = &this->RuntimeVirtualTextures;
  this->VirtualTextureMinCoverage = param_1->VirtualTextureMinCoverage;
  this->DynamicIndirectShadowMinVisibility = param_1->DynamicIndirectShadowMinVisibility;
  this->DistanceFieldSelfShadowBias = param_1->DistanceFieldSelfShadowBias;
  this->MaxWPOExtent = param_1->MaxWPOExtent;
  (this->MinMaxMaterialDisplacement).field0_0x0 = (param_1->MinMaxMaterialDisplacement).field0_0x0;
  piVar2 = &(this->RuntimeVirtualTextures).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pFVar9 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  (this->RuntimeVirtualTextures).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar3->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar4 = &this->RuntimeVirtualTextureMaterialTypes;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RuntimeVirtualTextureMaterialTypes).ArrayMax;
  iVar8 = (param_1->RuntimeVirtualTextureMaterialTypes).ArrayNum;
  pFVar9 = (param_1->RuntimeVirtualTextureMaterialTypes).AllocatorInstance.Data;
  (this->RuntimeVirtualTextureMaterialTypes).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar8);
  }
  pTVar5 = &this->MaterialCacheRenderProxies;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MaterialCacheRenderProxies).ArrayMax;
  iVar8 = (param_1->MaterialCacheRenderProxies).ArrayNum;
  pFVar9 = (param_1->MaterialCacheRenderProxies).AllocatorInstance.Data;
  (this->MaterialCacheRenderProxies).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 3);
  }
  pTVar6 = &this->Owners;
  this->MaterialCacheDescriptor = param_1->MaterialCacheDescriptor;
  piVar2 = &(this->Owners).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->Owners).ArrayNum;
  pFVar9 = (param_1->Owners).AllocatorInstance.Data;
  (this->Owners).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  dVar12 = (param_1->LocalToWorld).M[0][1];
  (this->LocalToWorld).M[0][0] = (param_1->LocalToWorld).M[0][0];
  (this->LocalToWorld).M[0][1] = dVar12;
  dVar12 = (param_1->LocalToWorld).M[0][3];
  (this->LocalToWorld).M[0][2] = (param_1->LocalToWorld).M[0][2];
  (this->LocalToWorld).M[0][3] = dVar12;
  dVar12 = (param_1->LocalToWorld).M[1][1];
  (this->LocalToWorld).M[1][0] = (param_1->LocalToWorld).M[1][0];
  (this->LocalToWorld).M[1][1] = dVar12;
  dVar12 = (param_1->LocalToWorld).M[1][3];
  (this->LocalToWorld).M[1][2] = (param_1->LocalToWorld).M[1][2];
  (this->LocalToWorld).M[1][3] = dVar12;
  dVar12 = (param_1->LocalToWorld).M[2][1];
  (this->LocalToWorld).M[2][0] = (param_1->LocalToWorld).M[2][0];
  (this->LocalToWorld).M[2][1] = dVar12;
  dVar12 = (param_1->LocalToWorld).M[2][3];
  (this->LocalToWorld).M[2][2] = (param_1->LocalToWorld).M[2][2];
  (this->LocalToWorld).M[2][3] = dVar12;
  dVar12 = (param_1->LocalToWorld).M[3][1];
  (this->LocalToWorld).M[3][0] = (param_1->LocalToWorld).M[3][0];
  (this->LocalToWorld).M[3][1] = dVar12;
  dVar12 = (param_1->LocalToWorld).M[3][3];
  (this->LocalToWorld).M[3][2] = (param_1->LocalToWorld).M[3][2];
  (this->LocalToWorld).M[3][3] = dVar12;
  dVar12 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar12;
  dVar12 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar12;
  dVar12 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar12;
  (this->Bounds).SphereRadius = (param_1->Bounds).SphereRadius;
  dVar12 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar12;
  dVar12 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar12;
  dVar12 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar12;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  dVar12 = (param_1->ActorPosition).field0_0x0._s_0.Y;
  (this->ActorPosition).field0_0x0._s_0.X = (param_1->ActorPosition).field0_0x0._s_0.X;
  (this->ActorPosition).field0_0x0._s_0.Y = dVar12;
  (this->ActorPosition).field0_0x0._s_0.Z = (param_1->ActorPosition).field0_0x0._s_0.Z;
  (this->PrimitiveComponentId).PrimIDValue = (param_1->PrimitiveComponentId).PrimIDValue;
  this->Scene = param_1->Scene;
  this->PrimitiveSceneInfo = param_1->PrimitiveSceneInfo;
  this->OwnerName = param_1->OwnerName;
  this->ResourceName = param_1->ResourceName;
  this->LevelName = param_1->LevelName;
  this->MeshDrawCommandStatsCategory = param_1->MeshDrawCommandStatsCategory;
  this->VisibilityId = param_1->VisibilityId;
  this->UniformBuffer = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
  this_00 = param_1->UniformBuffer;
  this->UniformBuffer = this_00;
  if (this_00 != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  pTVar6 = &this->PSOPrecacheRequestsToBoostOnDraw;
  this->ComponentForDebuggingOnly = param_1->ComponentForDebuggingOnly;
  piVar2 = &(this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->PSOPrecacheRequestsToBoostOnDraw).ArrayNum;
  pFVar9 = (param_1->PSOPrecacheRequestsToBoostOnDraw).AllocatorInstance.Data;
  (this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  this->MaxDrawDistance = param_1->MaxDrawDistance;
  this->MinDrawDistance = param_1->MinDrawDistance;
  return this;
}

// FPrimitiveSceneProxy @ 1483e4050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FPrimitiveSceneProxy::FPrimitiveSceneProxy
          (FPrimitiveSceneProxy *this,UPrimitiveComponent *param_1,FName param_2)

{
  FPrimitiveSceneProxyDesc local_c8;
  
  local_c8.RayTracingGroupCullingPriority = CP_4_DEFAULT;
  local_c8.ShadowCacheInvalidationBehavior = Auto;
  local_c8.ViewOwnerDepthPriorityGroup.Value = '\0';
  local_c8.Mobility.Value = '\x02';
  local_c8.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_c8.IndirectLightingCacheQuality.Value = '\x01';
  local_c8.DepthPriorityGroup.Value = '\0';
  local_c8.LightmapType = Default;
  local_c8.CustomDepthStencilWriteMask = ERSM_Default;
  local_c8.RuntimeVirtualTextures.ArrayNum = 0;
  local_c8.LightingChannels.bChannel2 = '\0';
  local_c8.LightingChannels.bChannel1 = '\0';
  local_c8.LightingChannels.bChannel0 = '\x01';
  local_c8.ActorOwners.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ActorOwners.ArrayNum = 0;
  local_c8.ActorOwners.ArrayMax = 0;
  local_c8.bShouldRenderProxyFallbackToDefaultMaterial = 0;
  local_c8.bShadowIndirectOnly = 0;
  local_c8.bIsPrecomputedLightingValid = 0;
  local_c8.bHasValidSettingsForStaticLighting = 0;
  local_c8.bHasStaticLighting = 0;
  local_c8.bIsInstancedStaticMesh = 0;
  local_c8.bIsOwnerEditorOnly = 0;
  local_c8.bSupportsWorldPositionOffsetVelocity = 1;
  local_c8.bIsHiddenEd = 0;
  local_c8.bIsHidden = 0;
  local_c8.bCollisionEnabled = 0;
  local_c8.bWantsEditorEffects = 0;
  local_c8.bShouldRenderSelected = 0;
  local_c8.bIndividuallySelected = 0;
  local_c8.bSelected = 0;
  local_c8.bIsVisibleEditor = 1;
  local_c8.bIsVisible = 1;
  local_c8.bLumenHeightfield = 0;
  local_c8.bIsFirstPersonWorldSpaceRepresentation = 0;
  local_c8.bIsFirstPerson = 0;
  local_c8.bHoldout = 0;
  local_c8.bRayTracingFarField = 0;
  local_c8.bForceMipStreaming = 0;
  local_c8.bHiddenInSceneCapture = 0;
  local_c8.bVisibleInSceneCaptureOnly = 0;
  local_c8.bRenderCustomDepth = 0;
  local_c8.bReceiveMobileCSMShadows = 1;
  local_c8.bIsBeingMovedByEditor = 0;
  local_c8.HiddenEditorViews = 0;
  local_c8.TranslucencySortPriority = 0;
  local_c8.TranslucencySortDistanceOffset = 0.0;
  local_c8.CustomDepthStencilValue = 0;
  local_c8.VirtualTextureMinCoverage = '\0';
  local_c8.VirtualTextureCullMips = 0;
  local_c8.VirtualTextureMainPassMaxDrawDistance = 0.0;
  local_c8.ComponentId.PrimIDValue = 0;
  local_c8.VisibilityId = 0;
  local_c8.CachedMaxDrawDistance = 0.0;
  local_c8.MinDrawDistance = 0.0;
  local_c8.MeshDrawCommandStatsCategory.ComparisonIndex.Value = 0;
  local_c8.MeshDrawCommandStatsCategory.Number = 0;
  local_c8.Component = (UObject *)0x0;
  local_c8.Owner = (UObject *)0x0;
  local_c8.VirtualTextureRenderPassType = Exclusive;
  local_c8.VirtualTextureLodBias = '\0';
  local_c8.World = (UWorld *)0x0;
  local_c8.RuntimeVirtualTextures.DataPtr = (URuntimeVirtualTexture **)0x0;
  local_c8.BoundsScale = 1.0;
  local_c8.CustomPrimitiveData = (FCustomPrimitiveData *)0x0;
  local_c8.Scene = (FSceneInterface *)0x0;
  local_c8.RayTracingGroupId = -1;
  local_c8.PrimitiveComponentInterface = (IPrimitiveComponent *)0x0;
  local_c8.AdditionalStatObjectPtr = (UObject *)0x0;
  local_c8.bUseEditorCompositing = 0;
  local_c8.bHasPerInstanceHitProxies = 0;
  local_c8.bSelectable = 1;
  local_c8.bUseAsOccluder = 0;
  local_c8.bSingleSampleShadowFromStationaryLights = 0;
  local_c8.bLightAttachmentsAsGroup = 0;
  local_c8.bCastFarShadow = 0;
  local_c8.bCastCinematicShadow = 0;
  local_c8.bCastInsetShadow = 0;
  local_c8.bSelfShadowOnly = 0;
  local_c8.bCastShadowAsTwoSided = 0;
  local_c8.bCastHiddenShadow = 0;
  local_c8.bCastContactShadow = 1;
  local_c8.bCastVolumetricTranslucentShadow = 0;
  local_c8.bAffectDistanceFieldLighting = 1;
  local_c8.bAffectIndirectLightingWhileHidden = 0;
  local_c8.bAffectDynamicIndirectLighting = 1;
  local_c8.bEmissiveLightSource = 0;
  local_c8.bCastStaticShadow = 1;
  local_c8.bCastDynamicShadow = 1;
  local_c8.bTreatAsBackgroundForOcclusion = 0;
  local_c8.bRenderInMainPass = 1;
  local_c8.bRenderInDepthPass = 1;
  local_c8.bVisibleInRayTracing = 1;
  local_c8.bVisibleInRealTimeSkyCaptures = 1;
  local_c8.bVisibleInReflectionCaptures = 1;
  local_c8.bUseViewOwnerDepthPriorityGroup = 0;
  local_c8.bLevelInstanceEditingState = 0;
  local_c8.bOwnerNoSee = 0;
  local_c8.bOnlyOwnerSee = 0;
  local_c8.bReceivesDecals = 1;
  local_c8.CastShadow = 0;
  local_c8._padding_ = (longlong)&___7FPrimitiveSceneProxyDesc__6B_;
  FPrimitiveSceneProxyDesc::InitializeFromPrimitiveComponent(&local_c8,param_1);
  FPrimitiveSceneProxy(this,&local_c8,param_2);
  local_c8._padding_ = (longlong)&___7FPrimitiveSceneProxyDesc__6B_;
  if (local_c8.ActorOwners.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ActorOwners.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxy__6B_;
  return this;
}

// ~FPrimitiveSceneProxy @ 1483e8c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneProxy::~FPrimitiveSceneProxy(FPrimitiveSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxy__6B_;
  pFVar1 = (this->PSOPrecacheRequestsToBoostOnDraw).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (this->UniformBuffer != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  pFVar1 = (this->Owners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialCacheRenderProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeVirtualTextureMaterialTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomPrimitiveData).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DebugMassData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1483eae80

void __thiscall
`FPrimitiveSceneProxy::SetCustomDepthEnabled_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  lVar3 = *(longlong *)this;
  bVar1 = *(byte *)((longlong)this + 8);
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x43c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar2 = *(byte *)(lVar3 + 0x86);
  if ((bVar2 >> 2 & 1) != bVar1) {
    *(byte *)(lVar3 + 0x86) = (bVar1 << 2 ^ bVar2) & 4 ^ bVar2;
    if (*(longlong *)(lVar3 + 0x228) != 0) {
      (**(code **)(**(longlong **)(lVar3 + 0x220) + 0x518))();
      if ((*(byte *)(lVar3 + 0x81) & 2) != 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x220) + 0x520))
                  (*(longlong **)(lVar3 + 0x220),*(undefined8 *)(lVar3 + 0x228));
      }
    }
  }
  return;
}

// operator() @ 1483eaf40

void __thiscall
`FPrimitiveSceneProxy::SetCustomDepthStencilValue_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)this;
  uVar1 = *(uint *)((longlong)this + 8);
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x47a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(byte *)(lVar2 + 0x87) != uVar1) {
    *(char *)(lVar2 + 0x87) = (char)uVar1;
    if (*(longlong *)(lVar2 + 0x228) != 0) {
      (**(code **)(**(longlong **)(lVar2 + 0x220) + 0x518))();
      (**(code **)(**(longlong **)(lVar2 + 0x220) + 0x510))
                (*(longlong **)(lVar2 + 0x220),*(undefined8 *)(lVar2 + 0x228),8);
    }
  }
  return;
}

// operator() @ 1483eafe0

void __thiscall
`FPrimitiveSceneProxy::SetPrimitiveColor_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *(longlong *)this;
  if ((((*(float *)((longlong)this + 8) != *(float *)(lVar1 + 0x40)) ||
       (*(float *)((longlong)this + 0xc) != *(float *)(lVar1 + 0x44))) ||
      (*(float *)((longlong)this + 0x10) != *(float *)(lVar1 + 0x48))) ||
     (*(float *)((longlong)this + 0x14) != *(float *)(lVar1 + 0x4c))) {
    uVar3 = *(undefined4 *)((longlong)this + 0xc);
    uVar4 = *(undefined4 *)((longlong)this + 0x10);
    uVar5 = *(undefined4 *)((longlong)this + 0x14);
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)((longlong)this + 8);
    *(undefined4 *)(lVar1 + 0x44) = uVar3;
    *(undefined4 *)(lVar1 + 0x48) = uVar4;
    *(undefined4 *)(lVar1 + 0x4c) = uVar5;
    if (*(longlong *)(*(longlong *)this + 0x228) != 0) {
      (**(code **)(**(longlong **)(*(longlong *)this + 0x220) + 0x518))();
      plVar2 = *(longlong **)(*(longlong *)this + 0x220);
                    /* WARNING: Could not recover jumptable at 0x0001483eb05b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x510))(plVar2,*(undefined8 *)(*(longlong *)this + 0x228),8);
      return;
    }
  }
  return;
}

// operator() @ 1483eb070

void __thiscall
`FPrimitiveSceneProxy::SetSelection_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  
  lVar3 = *(longlong *)this;
  cVar7 = *(char *)((longlong)this + 9);
  bVar1 = *(byte *)((longlong)this + 8);
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                         ,0x3eb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar2 = *(byte *)(lVar3 + 0x79);
  bVar6 = (bVar1 * '\x02' ^ bVar2) & 2 ^ bVar2;
  bVar6 = (cVar7 << 2 ^ bVar6) & 4 ^ bVar6;
  *(byte *)(lVar3 + 0x79) = bVar6;
  if (((bVar1 & 1) == 0) && ((bVar6 & 4) == 0)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  if ((*(byte *)(lVar3 + 0x84) & 4) == 0) {
    if ((bVar2 & 6) == 0) {
      if (cVar7 == '\0') {
        return;
      }
    }
    else if (cVar7 != '\0') {
      return;
    }
  }
  else {
    cVar7 = '\x01';
  }
  (**(code **)(**(longlong **)(lVar3 + 0x220) + 0x290))
            (*(longlong **)(lVar3 + 0x220),*(undefined8 *)(lVar3 + 0x228),cVar7);
  return;
}

// ApplyLateUpdateTransform @ 1483efba0

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
FPrimitiveSceneProxy::ApplyLateUpdateTransform
          (FPrimitiveSceneProxy *this,FRHICommandListBase *param_1,TMatrix<double> *param_2)

{
  undefined1 auStackY_e8 [32];
  TVector<double>_u_0 local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  VectorMatrixMultiply(&local_98,&this->LocalToWorld,param_2);
  local_b8._s_0.X = (this->ActorPosition).field0_0x0._s_0.X;
  local_b8._s_0.Y = (this->ActorPosition).field0_0x0._s_0.Y;
  local_b8._s_0.Z = (this->ActorPosition).field0_0x0._s_0.Z;
  SetTransform(this,param_1,&local_98,&this->Bounds,&this->LocalBounds,
               (TVector<double> *)&local_b8._s_0);
  return;
}

// ApplyWorldOffset @ 1483efcc0

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
FPrimitiveSceneProxy::ApplyWorldOffset
          (FPrimitiveSceneProxy *this,FRHICommandListBase *param_1,TVector<double> *param_2)

{
  TMatrix<double> *_Src;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStackY_1b8 [32];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  TVector<double>_u_0 local_130;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_e8;
  undefined1 local_d8 [112];
  double local_68;
  double local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  _Src = &this->LocalToWorld;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  local_168._s_0.X = dVar1 + (this->Bounds).Origin.field0_0x0._s_0.X;
  dVar4 = (this->ActorPosition).field0_0x0._s_0.X;
  local_168._s_0.Y = dVar3 + (this->Bounds).Origin.field0_0x0._s_0.Y;
  dVar3 = dVar3 + (this->ActorPosition).field0_0x0._s_0.Y;
  local_168._s_0.Z = dVar2 + (this->Bounds).Origin.field0_0x0._s_0.Z;
  local_140 = (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dStack_138 = (this->Bounds).SphereRadius;
  local_150 = (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  dStack_148 = (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_130._s_0.Z = (this->LocalBounds).Origin.field0_0x0._s_0.Z;
  dStack_118 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  local_130._s_0.X = (this->LocalBounds).Origin.field0_0x0._s_0.X;
  local_130._s_0.Y = (this->LocalBounds).Origin.field0_0x0._s_0.Y;
  local_100 = (this->LocalBounds).SphereRadius;
  local_110 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  dStack_108 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  local_e8 = dVar2 + (this->ActorPosition).field0_0x0._s_0.Z;
  if (((this->LocalToWorld).M[2] + 3 < local_d8) || (local_d8 + 0x58 < _Src)) {
    local_d8._0_8_ = _Src->M[0][0];
    local_d8._8_8_ = (this->LocalToWorld).M[0][1];
    local_d8._16_8_ = (this->LocalToWorld).M[0][2];
    local_d8._24_8_ = (this->LocalToWorld).M[0][3];
    local_d8._32_8_ = (this->LocalToWorld).M[1][0];
    local_d8._40_8_ = (this->LocalToWorld).M[1][1];
    local_d8._48_8_ = (this->LocalToWorld).M[1][2];
    local_d8._56_8_ = (this->LocalToWorld).M[1][3];
    local_d8._64_8_ = (this->LocalToWorld).M[2][0];
    local_d8._72_8_ = (this->LocalToWorld).M[2][1];
    local_d8._80_8_ = (this->LocalToWorld).M[2][2];
    local_d8._88_8_ = (this->LocalToWorld).M[2][3];
  }
  else {
    memcpy(local_d8,_Src,0x60);
  }
  local_68 = dVar2 + (this->LocalToWorld).M[3][2];
  dVar2 = (this->LocalToWorld).M[3][1] + (param_2->field0_0x0)._s_0.Y;
  local_60 = (this->LocalToWorld).M[3][3];
  local_d8._104_4_ = SUB84(dVar2,0);
  local_d8._96_8_ = (this->LocalToWorld).M[3][0] + (param_2->field0_0x0)._s_0.X;
  local_d8._108_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_188._8_4_ = SUB84(dVar3,0);
  local_188._0_8_ = dVar1 + dVar4;
  local_188._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_188._s_0.Z = local_e8;
  SetTransform(this,param_1,(TMatrix<double> *)local_d8,
               (TBoxSphereBounds<double,double> *)&local_168._s_0,
               (TBoxSphereBounds<double,double> *)&local_130._s_0,(TVector<double> *)&local_188._s_0
              );
  return;
}

// BoostPrecachedPSORequestsOnDraw @ 1483f03c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneProxy::BoostPrecachedPSORequestsOnDraw(FPrimitiveSceneProxy *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  if ((this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum != 0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId736,"BoostPSOPriority",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                 ,0x2e0);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId736);
    }
    pFVar4 = (this->PSOPrecacheRequestsToBoostOnDraw).AllocatorInstance.Data;
    iVar3 = (this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum;
    pFVar2 = pFVar4 + (longlong)iVar3 * 4;
    while( true ) {
      if ((this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum != iVar3) {
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar2) break;
      FMaterialPSORequestManager::BoostPriority(&GMaterialPSORequestManager,Highest,*(uint *)pFVar4)
      ;
      pFVar4 = pFVar4 + 4;
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    piVar1 = &(this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax;
    (this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->PSOPrecacheRequestsToBoostOnDraw).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// BuildUniformShaderParameters @ 1483f0ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
FPrimitiveSceneProxy::BuildUniformShaderParameters
          (FPrimitiveSceneProxy *this,FPrimitiveUniformShaderParametersBuilder *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uchar uVar7;
  FInstanceSceneDataBuffers *this_00;
  code *pcVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  TVector2<float>_u_0 TVar16;
  float fVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  byte bVar21;
  ECustomDepthMode EVar22;
  uint uVar23;
  int iVar24;
  FPrimitiveUniformShaderParametersBuilder *pFVar25;
  TIntVector2<unsigned_int>_u_0 *pTVar26;
  FPrimitiveUniformShaderParametersBuilder *pFVar27;
  FPrimitiveUniformShaderParametersBuilder *pFVar28;
  TConsoleVariableData<int> *pTVar29;
  FCachedSystemScalabilityCVars *pFVar30;
  FInstanceDataUpdateTaskInfo *this_01;
  FRenderBounds *pFVar31;
  IConsoleManager *pIVar32;
  longlong *plVar33;
  TConsoleVariableData<int> *pTVar34;
  uint uVar35;
  uint uVar36;
  float *pfVar37;
  uint uVar38;
  longlong lVar39;
  FPrimitiveUniformShaderParametersBuilder *pFVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  FLinearColor_u_0_s_0 FVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStackY_668 [32];
  byte local_638;
  byte local_637;
  byte local_636;
  undefined8 local_630;
  int local_628;
  float local_624;
  float local_620;
  float fStack_61c;
  FInstanceDataBufferHeader local_618;
  undefined8 local_60c;
  uint local_600;
  uint local_5fc;
  uint local_5f8;
  uint local_5f4;
  uint local_5f0;
  undefined8 local_5e8;
  double local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  FLinearColor_u_0_s_0 local_598;
  FRenderBounds local_588;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  undefined1 local_4e8 [664];
  float local_250 [114];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_668;
  (**(code **)(this->Scene->_padding_ + 0x250))
            (this->Scene,this->PrimitiveSceneInfo,&local_637,&local_568);
  uVar35 = 0;
  if (((((bool)this->bAlwaysHasVelocity) || (this->bAnyMaterialHasPixelAnimation != '\0')) ||
      (this->bEvaluateWorldPositionOffset == '\x01' &&
       this->bHasWorldPositionOffsetVelocity == '\x01')) ||
     (uVar38 = uVar35,
     this->bAnyMaterialUsesTemporalResponsiveness != '\0' ||
     this->bAnyMaterialUsesMotionVectorWorldOffset != '\0')) {
    uVar38 = 1;
  }
  if ((this->bIsNaniteMesh == '\0') || (this->bSkinnedMesh == '\0')) {
    bVar21 = 0;
  }
  else {
    bVar21 = 1;
  }
  (**(code **)(this->_padding_ + 0x170))(this,&local_5e0);
  bVar18 = IsRayTracingEnabled();
  if (bVar18) {
    cVar19 = (**(code **)(this->_padding_ + 0x68))();
    if ((cVar19 == '\0') || (this->bVisibleInRayTracing == '\0')) {
      bVar20 = 0;
    }
    else {
      bVar20 = 1;
    }
  }
  else {
    bVar20 = (**(code **)(this->_padding_ + 0x198))(this);
  }
  memset((FPrimitiveUniformShaderParametersBuilder *)local_4e8,0,0x460);
  pfVar37 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4e8)->Parameters).
             CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  local_4e8._368_8_ = ___xmm_3f800000000000000000000000000000;
  local_4e8._376_8_ = _UNK_150689648;
  lVar39 = 9;
  local_4e8._448_8_ = ___xmm_3f800000000000000000000000000000;
  local_4e8._456_8_ = _UNK_150689648;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar37 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar37 + -2))->Y = 0.0;
    *pfVar37 = 0.0;
    pfVar37[1] = 1.0;
    pfVar37 = pfVar37 + 4;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
  pFVar25 = FPrimitiveUniformShaderParametersBuilder::Defaults
                      ((FPrimitiveUniformShaderParametersBuilder *)local_4e8);
  dVar3 = (this->LocalToWorld).M[0][1];
  (pFVar25->AbsoluteLocalToWorld).M[0][0] = (this->LocalToWorld).M[0][0];
  (pFVar25->AbsoluteLocalToWorld).M[0][1] = dVar3;
  dVar3 = (this->LocalToWorld).M[0][3];
  (pFVar25->AbsoluteLocalToWorld).M[0][2] = (this->LocalToWorld).M[0][2];
  (pFVar25->AbsoluteLocalToWorld).M[0][3] = dVar3;
  dVar3 = (this->LocalToWorld).M[1][1];
  (pFVar25->AbsoluteLocalToWorld).M[1][0] = (this->LocalToWorld).M[1][0];
  (pFVar25->AbsoluteLocalToWorld).M[1][1] = dVar3;
  dVar3 = (this->LocalToWorld).M[1][3];
  (pFVar25->AbsoluteLocalToWorld).M[1][2] = (this->LocalToWorld).M[1][2];
  (pFVar25->AbsoluteLocalToWorld).M[1][3] = dVar3;
  dVar3 = (this->LocalToWorld).M[2][1];
  (pFVar25->AbsoluteLocalToWorld).M[2][0] = (this->LocalToWorld).M[2][0];
  (pFVar25->AbsoluteLocalToWorld).M[2][1] = dVar3;
  dVar3 = (this->LocalToWorld).M[2][3];
  (pFVar25->AbsoluteLocalToWorld).M[2][2] = (this->LocalToWorld).M[2][2];
  (pFVar25->AbsoluteLocalToWorld).M[2][3] = dVar3;
  dVar3 = (this->LocalToWorld).M[3][1];
  (pFVar25->AbsoluteLocalToWorld).M[3][0] = (this->LocalToWorld).M[3][0];
  (pFVar25->AbsoluteLocalToWorld).M[3][1] = dVar3;
  dVar3 = (this->LocalToWorld).M[3][3];
  (pFVar25->AbsoluteLocalToWorld).M[3][2] = (this->LocalToWorld).M[3][2];
  (pFVar25->AbsoluteLocalToWorld).M[3][3] = dVar3;
  pFVar25->bHasPreviousLocalToWorld = 1;
  (pFVar25->AbsolutePreviousLocalToWorld).M[0][0] = local_568;
  (pFVar25->AbsolutePreviousLocalToWorld).M[0][1] = dStack_560;
  (pFVar25->AbsolutePreviousLocalToWorld).M[0][2] = local_558;
  (pFVar25->AbsolutePreviousLocalToWorld).M[0][3] = dStack_550;
  (pFVar25->AbsolutePreviousLocalToWorld).M[1][0] = local_548;
  (pFVar25->AbsolutePreviousLocalToWorld).M[1][1] = dStack_540;
  (pFVar25->AbsolutePreviousLocalToWorld).M[1][2] = local_538;
  (pFVar25->AbsolutePreviousLocalToWorld).M[1][3] = dStack_530;
  (pFVar25->AbsolutePreviousLocalToWorld).M[2][0] = local_528;
  (pFVar25->AbsolutePreviousLocalToWorld).M[2][1] = dStack_520;
  (pFVar25->AbsolutePreviousLocalToWorld).M[2][2] = local_518;
  (pFVar25->AbsolutePreviousLocalToWorld).M[2][3] = dStack_510;
  (pFVar25->AbsolutePreviousLocalToWorld).M[3][0] = local_508;
  (pFVar25->AbsolutePreviousLocalToWorld).M[3][1] = dStack_500;
  (pFVar25->AbsolutePreviousLocalToWorld).M[3][2] = local_4f8;
  (pFVar25->AbsolutePreviousLocalToWorld).M[3][3] = dStack_4f0;
  dVar3 = (this->ActorPosition).field0_0x0._s_0.Y;
  (pFVar25->AbsoluteActorWorldPosition).field0_0x0._s_0.X = (this->ActorPosition).field0_0x0._s_0.X;
  (pFVar25->AbsoluteActorWorldPosition).field0_0x0._s_0.Y = dVar3;
  (pFVar25->AbsoluteActorWorldPosition).field0_0x0._s_0.Z = (this->ActorPosition).field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Origin.field0_0x0._s_0.Y;
  (pFVar25->AbsoluteObjectWorldPosition).field0_0x0._s_0.X = (this->Bounds).Origin.field0_0x0._s_0.X
  ;
  (pFVar25->AbsoluteObjectWorldPosition).field0_0x0._s_0.Y = dVar3;
  (pFVar25->AbsoluteObjectWorldPosition).field0_0x0._s_0.Z = (this->Bounds).Origin.field0_0x0._s_0.Z
  ;
  pFVar25->ObjectRadius = (float)(this->Bounds).SphereRadius;
  (pFVar25->Parameters).ObjectBoundsX = (float)(this->Bounds).BoxExtent.field0_0x0._s_0.X;
  (pFVar25->Parameters).ObjectBoundsY = (float)(this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (pFVar25->Parameters).ObjectBoundsZ = (float)(this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar3 = (this->LocalBounds).Origin.field0_0x0._s_0.Y;
  dVar4 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->LocalBounds).Origin.field0_0x0._s_0.Z;
  dVar6 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (pFVar25->Parameters).LocalObjectBoundsMin.field0_0x0._s_0.X =
       (float)((this->LocalBounds).Origin.field0_0x0._s_0.X -
              (this->LocalBounds).BoxExtent.field0_0x0._s_0.X);
  (pFVar25->Parameters).LocalObjectBoundsMin.field0_0x0._s_0.Y = (float)(dVar3 - dVar4);
  (pFVar25->Parameters).LocalObjectBoundsMin.field0_0x0._s_0.Z = (float)(dVar5 - dVar6);
  dVar3 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar4 = (this->LocalBounds).Origin.field0_0x0._s_0.Y;
  dVar5 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  dVar6 = (this->LocalBounds).Origin.field0_0x0._s_0.Z;
  (pFVar25->Parameters).LocalObjectBoundsMax.field0_0x0._s_0.X =
       (float)((this->LocalBounds).Origin.field0_0x0._s_0.X +
              (this->LocalBounds).BoxExtent.field0_0x0._s_0.X);
  (pFVar25->Parameters).LocalObjectBoundsMax.field0_0x0._s_0.Y = (float)(dVar3 + dVar4);
  (pFVar25->Parameters).LocalObjectBoundsMax.field0_0x0._s_0.Z = (float)(dVar5 + dVar6);
  pFVar25->bHasPreSkinnedLocalBounds = 1;
  uVar23 = *(uint *)&pFVar25->field_0x454;
  fVar51 = 0.0;
  (pFVar25->Parameters).PreSkinnedLocalBoundsMin.field0_0x0._s_0.X = (float)(local_5e0 - local_5c8);
  (pFVar25->Parameters).PreSkinnedLocalBoundsMin.field0_0x0._s_0.Y = (float)(local_5d8 - local_5c0);
  (pFVar25->Parameters).PreSkinnedLocalBoundsMin.field0_0x0._s_0.Z = (float)(local_5d0 - local_5b8);
  (pFVar25->Parameters).PreSkinnedLocalBoundsMax.field0_0x0._s_0.X = (float)(local_5e0 + local_5c8);
  (pFVar25->Parameters).PreSkinnedLocalBoundsMax.field0_0x0._s_0.Y = (float)(local_5d8 + local_5c0);
  (pFVar25->Parameters).PreSkinnedLocalBoundsMax.field0_0x0._s_0.Z = (float)(local_5d0 + local_5b8);
  uVar23 = ((byte)this->field_0x78 ^ uVar23) & 8 ^ uVar23;
  *(uint *)&pFVar25->field_0x454 = uVar23;
  uVar23 = ((uint)(byte)((byte)uVar38 | local_638 | bVar21) << 6 ^ uVar23) & 0x40 ^ uVar23;
  *(uint *)&pFVar25->field_0x454 = uVar23;
  uVar38 = uVar35;
  if (this->bEvaluateWorldPositionOffset == '\x01' &&
      this->bAnyMaterialHasWorldPositionOffset == '\x01') {
    uVar38 = 0x80;
  }
  uVar38 = uVar38 | uVar23 & 0xffffff7f;
  *(uint *)&pFVar25->field_0x454 = uVar38;
  if ((this->bEvaluateWorldPositionOffset == '\x01' &&
       this->bAnyMaterialHasWorldPositionOffset == '\x01') ||
     (this->bAnyMaterialAlwaysEvaluatesWorldPositionOffset != '\0')) {
    fVar41 = this->MaxWPOExtent;
  }
  else {
    fVar41 = 0.0;
  }
  (pFVar25->Parameters).MaxWPOExtent = fVar41;
  uVar38 = ((uint)(byte)this->field_0x82 << 0x1b ^ uVar38) & 0x40000000 ^ uVar38;
  *(uint *)&pFVar25->field_0x454 = uVar38;
  (pFVar25->Parameters).MinMaterialDisplacement =
       (this->MinMaxMaterialDisplacement).field0_0x0._s_0.X;
  (pFVar25->Parameters).MaxMaterialDisplacement =
       (this->MinMaxMaterialDisplacement).field0_0x0._s_0.Y;
  *(uint *)&pFVar25->field_0x454 = (this->LightingChannelMask ^ uVar38) & 7 ^ uVar38;
  uVar38 = (**(code **)(this->_padding_ + 0x1f8))(this);
  (pFVar25->Parameters).LightmapUVIndex = uVar38;
  (pFVar25->Parameters).SingleCaptureIndex = local_628;
  pFVar25 = FPrimitiveUniformShaderParametersBuilder::CustomPrimitiveData
                      (pFVar25,&this->CustomPrimitiveData);
  *(uint *)&pFVar25->field_0x454 =
       ((uint)bVar20 << 0xb ^ *(uint *)&pFVar25->field_0x454) & 0x800 ^
       *(uint *)&pFVar25->field_0x454;
  bVar21 = (**(code **)(this->_padding_ + 0x1a0))(this);
  *(uint *)&pFVar25->field_0x454 =
       ((uint)bVar21 << 0xc ^ *(uint *)&pFVar25->field_0x454) & 0x1000 ^
       *(uint *)&pFVar25->field_0x454;
  pTVar34 = CVarForceSingleSampleShadowingFromStationary.Ref;
  if (this->bSingleSampleShadowFromStationaryLights == '\0') {
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pTVar34->ShadowedValue[1] != 0) || (uVar38 = uVar35, this->LightmapType == ForceVolumetric)
       ) goto LAB_1483f1263;
  }
  else {
LAB_1483f1263:
    uVar38 = 0x10;
  }
  pFVar25->bUseSingleSampleShadowFromStationaryLights = 0;
  *(uint *)&pFVar25->field_0x454 = *(uint *)&pFVar25->field_0x454 | uVar38;
  uVar38 = ((uint)local_637 << 5 ^ *(uint *)&pFVar25->field_0x454) & 0x20 ^
           *(uint *)&pFVar25->field_0x454;
  *(uint *)&pFVar25->field_0x454 = uVar38;
  uVar38 = ((uint)(byte)this->field_0x7f << 8 ^ uVar38) & 0x200 ^ uVar38;
  *(uint *)&pFVar25->field_0x454 = uVar38;
  uVar38 = ((uint)(byte)this->field_0x7f << 5 ^ uVar38) & 0x400 ^ uVar38;
  *(uint *)&pFVar25->field_0x454 = uVar38;
  *(uint *)&pFVar25->field_0x454 = ((uint)(byte)this->field_0x7d << 7 ^ uVar38) & 0x100 ^ uVar38;
  uVar38 = (this->bHoldout ^ ZPULL(*(undefined4 *)&pFVar25->field_0x458,0,1)) & 1 ^
           *(undefined4 *)&pFVar25->field_0x458;
  *(uint *)&pFVar25->field_0x458 = uVar38;
  if ((this->ShadowCacheInvalidationBehavior == Rigid) ||
     (this->ShadowCacheInvalidationBehavior == Static)) {
    uVar35 = 2;
  }
  *(uint *)&pFVar25->field_0x458 = uVar38 & 0xfffffffd | uVar35;
  bVar21 = (**(code **)(this->_padding_ + 0x140))(this);
  uVar38 = ((uint)bVar21 << 4 ^ *(uint *)&pFVar25->field_0x458) & 0x10 ^
           *(uint *)&pFVar25->field_0x458;
  *(uint *)&pFVar25->field_0x458 = uVar38;
  uVar35 = ((uint)(byte)this->field_0x78 << 0x10 ^ *(uint *)&pFVar25->field_0x454) & 0x20000 ^
           *(uint *)&pFVar25->field_0x454;
  *(uint *)&pFVar25->field_0x454 = uVar35;
  uVar35 = ((uint)(byte)this->field_0x78 << 0x10 ^ uVar35) & 0x40000 ^ uVar35;
  *(uint *)&pFVar25->field_0x454 = uVar35;
  uVar35 = ((uint)(byte)this->field_0x7b << 0x10 ^ uVar35) & 0x80000 ^ uVar35;
  *(uint *)&pFVar25->field_0x454 = uVar35;
  uVar35 = ((byte)this->field_0x7a & 0xffffff80) << 0xd | uVar35 & 0xffefffff;
  *(uint *)&pFVar25->field_0x454 = uVar35;
  uVar35 = ((uint)(byte)this->field_0x7b << 0x15 ^ uVar35) & 0x200000 ^ uVar35;
  *(uint *)&pFVar25->field_0x454 = uVar35;
  uVar35 = ((uint)(byte)this->field_0x7b << 0x15 ^ uVar35) & 0x400000 ^ uVar35;
  *(uint *)&pFVar25->field_0x454 = uVar35;
  fVar42 = __real_437f0000;
  fVar17 = __real_3f000000;
  fVar41 = __real_3f800000;
  uVar23 = 0;
  if ((this->bVisibleInLumenScene != '\0') ||
     (uVar36 = uVar23, this->bIsLandscapeNaniteProxy != '\0')) {
    uVar36 = 0x800000;
  }
  uVar36 = uVar35 & 0xff7fffff | uVar36;
  *(uint *)&pFVar25->field_0x454 = uVar36;
  uVar36 = ((uint)(byte)this->field_0x86 << 0x15 ^ uVar36) & 0x1000000 ^ uVar36;
  *(uint *)&pFVar25->field_0x454 = uVar36;
  uVar36 = ((uint)(byte)this->field_0x86 << 0x15 ^ uVar36) & 0x2000000 ^ uVar36;
  *(uint *)&pFVar25->field_0x454 = uVar36;
  *(uint *)&pFVar25->field_0x454 =
       ((uint)(byte)this->field_0x7b << 0x16 ^ uVar36) & 0x4000000 ^ uVar36;
  (pFVar25->Parameters).PrimitiveComponentId = (this->PrimitiveComponentId).PrimIDValue;
  local_5a8 = (this->PrimitiveColor).field0_0x0._s_0.R;
  fStack_5a4 = (this->PrimitiveColor).field0_0x0._s_0.G;
  fStack_5a0 = *(float *)((longlong)&(this->PrimitiveColor).field0_0x0 + 8);
  fStack_59c = *(float *)((longlong)&(this->PrimitiveColor).field0_0x0 + 0xc);
  local_598 = (this->WireframeColor).field0_0x0._s_0;
  fVar2 = local_598.G;
  fVar9 = local_598.B;
  fVar50 = local_598.A;
  auVar43._4_4_ = fStack_59c;
  auVar43._0_4_ = fStack_59c;
  auVar43._8_4_ = fStack_59c;
  auVar43._12_4_ = fStack_59c;
  if (fStack_59c <= 0.0) {
    auVar10._12_4_ = 0;
    auVar10._0_12_ = auVar43._4_12_;
    auVar43 = auVar10 << 0x20;
  }
  fVar48 = fStack_5a4;
  if (fStack_5a4 <= 0.0) {
    fVar48 = 0.0;
  }
  if (fVar41 <= auVar43._0_4_) {
    auVar43._0_4_ = fVar41;
  }
  if (fVar41 <= fVar48) {
    fVar48 = fVar41;
  }
  auVar44._4_4_ = fStack_5a0;
  auVar44._0_4_ = fStack_5a0;
  auVar44._8_4_ = fStack_5a0;
  auVar44._12_4_ = fStack_5a0;
  fVar49 = local_5a8;
  if (local_5a8 <= 0.0) {
    fVar49 = 0.0;
  }
  if (fStack_5a0 <= 0.0) {
    auVar11._12_4_ = 0;
    auVar11._0_12_ = auVar44._4_12_;
    auVar44 = auVar11 << 0x20;
  }
  if (fVar41 <= auVar44._0_4_) {
    auVar44._0_4_ = fVar41;
  }
  if (fVar41 <= fVar49) {
    fVar49 = fVar41;
  }
  FVar45 = local_598;
  if (local_598.R <= 0.0) {
    auVar12._12_4_ = 0;
    auVar12._0_12_ = local_598._4_12_;
    FVar45 = (FLinearColor_u_0_s_0)(auVar12 << 0x20);
  }
  if (fVar41 <= FVar45.R) {
    FVar45.R = fVar41;
  }
  auVar46._4_4_ = fVar2;
  auVar46._0_4_ = fVar2;
  auVar46._8_4_ = fVar2;
  auVar46._12_4_ = fVar2;
  if (fVar2 <= 0.0) {
    auVar13._12_4_ = 0;
    auVar13._0_12_ = auVar46._4_12_;
    auVar46 = auVar13 << 0x20;
  }
  if (fVar41 <= auVar46._0_4_) {
    auVar46._0_4_ = fVar41;
  }
  auVar47._4_4_ = fVar9;
  auVar47._0_4_ = fVar9;
  auVar47._8_4_ = fVar9;
  auVar47._12_4_ = fVar9;
  if (fVar9 <= 0.0) {
    auVar14._12_4_ = 0;
    auVar14._0_12_ = auVar47._4_12_;
    auVar47 = auVar14 << 0x20;
  }
  if (fVar50 <= 0.0) {
    fVar50 = 0.0;
  }
  if (fVar41 <= auVar47._0_4_) {
    auVar47._0_4_ = fVar41;
  }
  if (fVar41 <= fVar50) {
    fVar50 = fVar41;
  }
  local_630._4_4_ =
       ((((int)(fVar49 * fVar42 + fVar17) & 0xffU) << 8 | (int)(fVar48 * fVar42 + fVar17) & 0xffU)
        << 8 | (int)(auVar44._0_4_ * fVar42 + fVar17) & 0xffU) << 8 |
       (int)(auVar43._0_4_ * fVar42 + fVar17) & 0xffU;
  local_630._0_4_ =
       ((((int)(FVar45.R * fVar42 + fVar17) & 0xffU) << 8 |
        (int)(auVar46._0_4_ * fVar42 + fVar17) & 0xffU) << 8 |
       (int)(auVar47._0_4_ * fVar42 + fVar17) & 0xffU) << 8 |
       (int)(fVar50 * fVar42 + fVar17) & 0xffU;
  (pFVar25->Parameters).WireframeAndPrimitiveColor.field0_0x0 = local_630;
  uVar38 = ((byte)this->field_0x84 >> 3 ^ uVar38) & 4 ^ uVar38;
  *(uint *)&pFVar25->field_0x458 = uVar38;
  uVar38 = ((byte)this->field_0x84 >> 3 ^ uVar38) & 8 ^ uVar38;
  *(uint *)&pFVar25->field_0x458 = uVar38;
  uVar38 = ((uint)(byte)this->field_0x82 * 2 ^ uVar38) & 0x20 ^ uVar38;
  *(uint *)&pFVar25->field_0x458 = uVar38;
  uVar38 = ((byte)this->field_0x86 ^ uVar38) & 0x40 ^ uVar38;
  *(uint *)&pFVar25->field_0x458 = uVar38;
  if (this->RayTracingGroupId != -1) {
    uVar23 = 0x80;
  }
  *(uint *)&pFVar25->field_0x458 = uVar23 | uVar38 & 0xffffff7f;
  pTVar26 = (TIntVector2<unsigned_int>_u_0 *)(**(code **)(this->_padding_ + 0x220))(this,&local_620)
  ;
  (pFVar25->Parameters).MeshPaintTextureDescriptor.field0_0x0 = *pTVar26;
  uVar35 = (**(code **)(this->_padding_ + 0x228))(this);
  (pFVar25->Parameters).MaterialCacheDescriptor = uVar35;
  *(uint *)&pFVar25->field_0x458 =
       ((uint)(byte)this->field_0x85 << 9 ^ *(uint *)&pFVar25->field_0x458) & 0x200 ^
       *(uint *)&pFVar25->field_0x458;
  fVar42 = (float)(**(code **)(this->_padding_ + 0x1c0))(this);
  (pFVar25->Parameters).AnimationMinScreenSize = fVar42;
  lVar39 = 8;
  pFVar28 = param_1;
  do {
    pFVar40 = pFVar25;
    pFVar27 = pFVar28;
    uVar35 = (pFVar40->Parameters).InstanceSceneDataOffset;
    uVar38 = (pFVar40->Parameters).NumInstanceSceneDataEntries;
    iVar24 = (pFVar40->Parameters).SingleCaptureIndex;
    (pFVar27->Parameters).Flags = (pFVar40->Parameters).Flags;
    (pFVar27->Parameters).InstanceSceneDataOffset = uVar35;
    (pFVar27->Parameters).NumInstanceSceneDataEntries = uVar38;
    (pFVar27->Parameters).SingleCaptureIndex = iVar24;
    uVar15 = *(undefined8 *)((longlong)&(pFVar40->Parameters).PositionHigh.field0_0x0 + 8);
    *(undefined8 *)&(pFVar27->Parameters).PositionHigh.field0_0x0 =
         *(undefined8 *)&(pFVar40->Parameters).PositionHigh.field0_0x0;
    *(undefined8 *)((longlong)&(pFVar27->Parameters).PositionHigh.field0_0x0 + 8) = uVar15;
    uVar15 = *(undefined8 *)((pFVar40->Parameters).LocalToRelativeWorld.M[0] + 2);
    *(undefined8 *)(pFVar27->Parameters).LocalToRelativeWorld.M[0] =
         *(undefined8 *)(pFVar40->Parameters).LocalToRelativeWorld.M[0];
    *(undefined8 *)((pFVar27->Parameters).LocalToRelativeWorld.M[0] + 2) = uVar15;
    uVar15 = *(undefined8 *)((pFVar40->Parameters).LocalToRelativeWorld.M[1] + 2);
    *(undefined8 *)(pFVar27->Parameters).LocalToRelativeWorld.M[1] =
         *(undefined8 *)(pFVar40->Parameters).LocalToRelativeWorld.M[1];
    *(undefined8 *)((pFVar27->Parameters).LocalToRelativeWorld.M[1] + 2) = uVar15;
    uVar15 = *(undefined8 *)((pFVar40->Parameters).LocalToRelativeWorld.M[2] + 2);
    *(undefined8 *)(pFVar27->Parameters).LocalToRelativeWorld.M[2] =
         *(undefined8 *)(pFVar40->Parameters).LocalToRelativeWorld.M[2];
    *(undefined8 *)((pFVar27->Parameters).LocalToRelativeWorld.M[2] + 2) = uVar15;
    uVar15 = *(undefined8 *)((pFVar40->Parameters).LocalToRelativeWorld.M[3] + 2);
    *(undefined8 *)(pFVar27->Parameters).LocalToRelativeWorld.M[3] =
         *(undefined8 *)(pFVar40->Parameters).LocalToRelativeWorld.M[3];
    *(undefined8 *)((pFVar27->Parameters).LocalToRelativeWorld.M[3] + 2) = uVar15;
    uVar15 = *(undefined8 *)((pFVar40->Parameters).RelativeWorldToLocal.M[0] + 2);
    *(undefined8 *)(pFVar27->Parameters).RelativeWorldToLocal.M[0] =
         *(undefined8 *)(pFVar40->Parameters).RelativeWorldToLocal.M[0];
    *(undefined8 *)((pFVar27->Parameters).RelativeWorldToLocal.M[0] + 2) = uVar15;
    pFVar28 = (FPrimitiveUniformShaderParametersBuilder *)
              ((pFVar27->Parameters).RelativeWorldToLocal.M + 2);
    uVar15 = *(undefined8 *)((pFVar40->Parameters).RelativeWorldToLocal.M[1] + 2);
    pFVar25 = (FPrimitiveUniformShaderParametersBuilder *)
              ((pFVar40->Parameters).RelativeWorldToLocal.M + 2);
    *(undefined8 *)(pFVar27->Parameters).RelativeWorldToLocal.M[1] =
         *(undefined8 *)(pFVar40->Parameters).RelativeWorldToLocal.M[1];
    *(undefined8 *)((pFVar27->Parameters).RelativeWorldToLocal.M[1] + 2) = uVar15;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
  uVar35 = (pFVar25->Parameters).InstanceSceneDataOffset;
  uVar15 = *(undefined8 *)((pFVar40->Parameters).RelativeWorldToLocal.M[2] + 2);
  (pFVar28->Parameters).Flags = (pFVar25->Parameters).Flags;
  (pFVar28->Parameters).InstanceSceneDataOffset = uVar35;
  *(undefined8 *)((pFVar27->Parameters).RelativeWorldToLocal.M[2] + 2) = uVar15;
  uVar15 = *(undefined8 *)((pFVar40->Parameters).RelativeWorldToLocal.M[3] + 2);
  *(undefined8 *)(pFVar27->Parameters).RelativeWorldToLocal.M[3] =
       *(undefined8 *)(pFVar40->Parameters).RelativeWorldToLocal.M[3];
  *(undefined8 *)((pFVar27->Parameters).RelativeWorldToLocal.M[3] + 2) = uVar15;
  uVar15 = *(undefined8 *)((pFVar40->Parameters).PreviousLocalToRelativeWorld.M[0] + 2);
  *(undefined8 *)(pFVar27->Parameters).PreviousLocalToRelativeWorld.M[0] =
       *(undefined8 *)(pFVar40->Parameters).PreviousLocalToRelativeWorld.M[0];
  *(undefined8 *)((pFVar27->Parameters).PreviousLocalToRelativeWorld.M[0] + 2) = uVar15;
  uVar15 = *(undefined8 *)((pFVar40->Parameters).PreviousLocalToRelativeWorld.M[1] + 2);
  *(undefined8 *)(pFVar27->Parameters).PreviousLocalToRelativeWorld.M[1] =
       *(undefined8 *)(pFVar40->Parameters).PreviousLocalToRelativeWorld.M[1];
  *(undefined8 *)((pFVar27->Parameters).PreviousLocalToRelativeWorld.M[1] + 2) = uVar15;
  uVar15 = *(undefined8 *)((pFVar40->Parameters).PreviousLocalToRelativeWorld.M[2] + 2);
  *(undefined8 *)(pFVar27->Parameters).PreviousLocalToRelativeWorld.M[2] =
       *(undefined8 *)(pFVar40->Parameters).PreviousLocalToRelativeWorld.M[2];
  *(undefined8 *)((pFVar27->Parameters).PreviousLocalToRelativeWorld.M[2] + 2) = uVar15;
  fVar42 = (pFVar40->Parameters).PreviousLocalToRelativeWorld.M[3][1];
  fVar2 = (pFVar40->Parameters).PreviousLocalToRelativeWorld.M[3][2];
  fVar9 = (pFVar40->Parameters).PreviousLocalToRelativeWorld.M[3][3];
  (pFVar27->Parameters).PreviousLocalToRelativeWorld.M[3][0] =
       (pFVar40->Parameters).PreviousLocalToRelativeWorld.M[3][0];
  (pFVar27->Parameters).PreviousLocalToRelativeWorld.M[3][1] = fVar42;
  (pFVar27->Parameters).PreviousLocalToRelativeWorld.M[3][2] = fVar2;
  (pFVar27->Parameters).PreviousLocalToRelativeWorld.M[3][3] = fVar9;
  if (this->PrimitiveSceneInfo != (FPrimitiveSceneInfo *)0x0) {
    (param_1->Parameters).LightmapDataIndex = this->PrimitiveSceneInfo->LightmapDataOffset;
    (param_1->Parameters).InstanceSceneDataOffset =
         this->PrimitiveSceneInfo->InstanceSceneDataOffset;
    (param_1->Parameters).NumInstanceSceneDataEntries =
         this->PrimitiveSceneInfo->NumInstanceSceneDataEntries;
    (param_1->Parameters).InstancePayloadDataOffset =
         this->PrimitiveSceneInfo->InstancePayloadDataOffset;
    (param_1->Parameters).InstancePayloadDataStride =
         this->PrimitiveSceneInfo->InstancePayloadDataStride;
    (param_1->Parameters).PersistentPrimitiveIndex =
         (this->PrimitiveSceneInfo->PersistentIndex).Index;
  }
  if (this->bIsNaniteMesh == '\0') goto LAB_1483f1949;
  (**(code **)(this->_padding_ + 0x260))(this,&local_600);
  bVar21 = *(byte *)&this[1].SimpleStreamableAssetManagerIndex.Object;
  uVar35 = *(uint *)&this[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.
                     ReferenceController;
  local_636 = (**(code **)(this->_padding_ + 0x50))(this);
  if (((ulonglong)this[1].SimpleStreamableAssetManagerIndex.Object & 0x200) != 0) {
    fVar51 = (float)this[1].DebugMassData.ArrayNum;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar32 = IConsoleManager::Get();
    plVar33 = (longlong *)
              (**(code **)((longlong)*pIVar32 + 0xc0))(pIVar32,L"r.Nanite.MaxPixelsPerEdge");
    pTVar34 = (TConsoleVariableData<int> *)0x0;
    if (plVar33 != (longlong *)0x0) {
      pTVar34 = (TConsoleVariableData<int> *)(**(code **)(*plVar33 + 0x68))(plVar33);
    }
    CVarNaniteMaxPixelsPerEdge = pTVar34;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar34 = CVarNaniteMaxPixelsPerEdge;
  if (CVarNaniteMaxPixelsPerEdge != (TConsoleVariableData<int> *)0x0) {
    bVar18 = IsInParallelGameThread();
    if (bVar18) {
LAB_1483f17ff:
      pTVar29 = (TConsoleVariableData<int> *)0x0;
    }
    else {
      bVar18 = IsInGameThread();
      pTVar29 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar18) goto LAB_1483f17ff;
    }
    fVar41 = (float)*(int *)((longlong)pTVar29->ShadowedValue + (longlong)pTVar34->ShadowedValue);
  }
  fVar42 = (float)this[1].DebugMassData.ArrayMax;
  (param_1->Parameters).NaniteResourceID = local_600;
  (param_1->Parameters).NaniteHierarchyOffset = local_5fc;
  if ((0xfffe < local_5f0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("TransformCount < ((1 << 16) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveUniformShaderParameters.cpp"
                          ,0x28,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  param_1->bHasNaniteImposter = 0;
  (param_1->Parameters).NaniteAssemblyTransformOffset = local_5f4;
  uVar38 = 0;
  (param_1->Parameters).NaniteAssemblyTransformCount = local_5f0;
  if (local_5f8 != 0xffffffff) {
    uVar38 = 0x8000000;
  }
  *(uint *)&param_1->field_0x454 = *(uint *)&param_1->field_0x454 | uVar38;
  if (((local_5f8 != 0xffffffff) && (0xfffffe < local_5f8)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bHasNaniteImposter || ImposterIndex < ((1u << (32u - (8u))) - 1u)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveUniformShaderParametersBuilder.h"
                          ,0x117,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (param_1->Parameters).PackedNaniteFlags = local_5f8 & 0xffffff | (uint)bVar21 << 0x18;
  param_1->bReverseCulling = 0;
  *(uint *)&param_1->field_0x454 = *(uint *)&param_1->field_0x454 | (uint)local_636 << 0x1f;
  (param_1->Parameters).NaniteRayTracingDataOffset = uVar35;
  pFVar30 = GetCachedScalabilityCVars();
  fVar51 = fVar51 * pFVar30->ViewDistanceScale;
  uVar35 = *(uint *)&param_1->field_0x458;
  (param_1->Parameters).MaterialDisplacementFadeOutSize = fVar42 / fVar41;
  (param_1->Parameters).PixelProgrammableDistanceSquared = fVar51 * fVar51;
  *(uint *)&param_1->field_0x458 =
       ((uint)*(byte *)((longlong)&this[1].SimpleStreamableAssetManagerIndex.Object + 1) << 3 ^
       uVar35) & 0x100 ^ uVar35;
LAB_1483f1949:
  uVar35 = 0;
  cVar19 = (**(code **)(this->_padding_ + 0x1a8))(this,&local_5e8);
  if (cVar19 != '\0') {
    local_630 = (TVector2<float>_u_0)local_5e8;
    pFVar30 = GetCachedScalabilityCVars();
    local_630._0_4_ = (float)(undefined4)local_630 * pFVar30->ViewDistanceScale;
    local_630._4_4_ = (float)local_630._4_4_ * pFVar30->ViewDistanceScale;
    param_1->bHasInstanceDrawDistanceCull = 1;
    local_620 = (float)(undefined4)local_630 * (float)(undefined4)local_630;
    fStack_61c = (float)local_630._4_4_ * (float)local_630._4_4_;
    TVar16._s_0.Y = fStack_61c;
    TVar16._s_0.X = local_620;
    (param_1->Parameters).InstanceDrawDistanceMinMaxSquared.field0_0x0 = TVar16;
  }
  cVar19 = (**(code **)(this->_padding_ + 0x1b0))(this,&local_624);
  if (cVar19 != '\0') {
    pFVar30 = GetCachedScalabilityCVars();
    local_624 = local_624 * pFVar30->ViewDistanceScale;
    param_1->bHasWPODisableDistance = 1;
    (param_1->Parameters).InstanceWPODisableDistanceSquared = local_624 * local_624;
  }
  if (this->InstanceSceneDataBuffersInternal != (FInstanceSceneDataBuffers *)0x0) {
    this_01 = (FInstanceDataUpdateTaskInfo *)(**(code **)(this->_padding_ + 0x230))(this);
    if (this_01 != (FInstanceDataUpdateTaskInfo *)0x0) {
      FInstanceDataUpdateTaskInfo::WaitForUpdateCompletion(this_01);
    }
    this_00 = this->InstanceSceneDataBuffersInternal;
    lVar39 = (**(code **)(this->_padding_ + 0x230))(this);
    if (lVar39 == 0) {
      iVar24 = FInstanceDataBufferHeader::SinglePrimitiveHeader.NumInstances;
      if (this->InstanceSceneDataBuffersInternal != (FInstanceSceneDataBuffers *)0x0) {
        FInstanceSceneDataBuffers::GetHeader
                  (this->InstanceSceneDataBuffersInternal,&local_618,(FAccessTag)0x0);
        iVar24 = local_618.NumInstances;
      }
    }
    else {
      local_618._0_8_ = *(undefined8 *)(lVar39 + 8);
      iVar24 = local_618.NumInstances;
    }
    if (0 < iVar24) {
      local_60c = 0;
      pFVar31 = FInstanceSceneDataBuffers::GetInstanceLocalBounds
                          (this_00,&local_588,0,(FAccessTag)0x0);
      param_1->bHasInstanceLocalBounds = 1;
      fVar51 = (pFVar31->Min).field0_0x0._s_0.Z;
      fVar41 = (pFVar31->Max).field0_0x0._s_0.Z;
      fVar42 = (pFVar31->Max).field0_0x0._s_0.Y;
      fVar2 = (pFVar31->Min).field0_0x0._s_0.Y;
      (param_1->Parameters).InstanceLocalBoundsCenter.field0_0x0._s_0.X =
           ((pFVar31->Max).field0_0x0._s_0.X + (pFVar31->Min).field0_0x0._s_0.X) * fVar17;
      (param_1->Parameters).InstanceLocalBoundsCenter.field0_0x0._s_0.Y = (fVar42 + fVar2) * fVar17;
      (param_1->Parameters).InstanceLocalBoundsCenter.field0_0x0._s_0.Z = (fVar51 + fVar41) * fVar17
      ;
      fVar51 = (pFVar31->Max).field0_0x0._s_0.Y;
      fVar41 = (pFVar31->Max).field0_0x0._s_0.Z;
      fVar42 = (pFVar31->Min).field0_0x0._s_0.Y;
      fVar2 = (pFVar31->Min).field0_0x0._s_0.Z;
      (param_1->Parameters).InstanceLocalBoundsExtent.field0_0x0._s_0.X =
           ((pFVar31->Max).field0_0x0._s_0.X - (pFVar31->Min).field0_0x0._s_0.X) * fVar17;
      (param_1->Parameters).InstanceLocalBoundsExtent.field0_0x0._s_0.Y = (fVar51 - fVar42) * fVar17
      ;
      (param_1->Parameters).InstanceLocalBoundsExtent.field0_0x0._s_0.Z = (fVar41 - fVar2) * fVar17;
    }
  }
  EVar22 = GetCustomDepthMode();
  if ((EVar22 != Disabled) && (this->bRenderCustomDepth != '\0')) {
    uVar7 = (this->CustomDepthStencilWriteMask).Value;
    if (uVar7 != '\0') {
      if (uVar7 == '\x01') {
        uVar35 = 0xff00;
      }
      else {
        uVar35 = 0x100 << (uVar7 - 2 & 0x1f) & 0xff00;
      }
    }
    (param_1->Parameters).CustomStencilValueAndMask = this->CustomDepthStencilValue | uVar35;
  }
  return;
}

// CreateHitProxies @ 1483f9610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

HHitProxy * __thiscall
FPrimitiveSceneProxy::CreateHitProxies
          (FPrimitiveSceneProxy *this,IPrimitiveComponent *param_1,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_2)

{
  HHitProxy *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001483f9619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = (HHitProxy *)(**(code **)((longlong)*param_1 + 200))(param_1,param_2);
  return pHVar1;
}

// CreateHitProxies @ 1483f9630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

HHitProxy * __thiscall
FPrimitiveSceneProxy::CreateHitProxies
          (FPrimitiveSceneProxy *this,UPrimitiveComponent *param_1,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_2)

{
  HHitProxy *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001483f963d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = (HHitProxy *)
           (**(code **)((longlong)param_1->PrimitiveComponentInterface + 200))
                     (&param_1->PrimitiveComponentInterface,param_2);
  return pHVar1;
}

// CreateUniformBuffer @ 1483fa4b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneProxy::CreateUniformBuffer(FPrimitiveSceneProxy *this)

{
  TUniformBufferRef<FPrimitiveUniformShaderParameters> *pTVar1;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  TRefCountPtr<FRHIUniformBuffer> TVar6;
  FRHIResource *local_res8;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> local_18 [2];
  
  pTVar1 = &this->UniformBuffer;
  if ((*pTVar1 == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) &&
     (this->bVFRequiresPrimitiveUniformBuffer != '\0')) {
    pFVar5 = FPrimitiveUniformShaderParameters::GetStructMetadata();
    if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar6 = RHICreateUniformBuffer
                      (&local_res8,(FRHIUniformBufferLayout *)0x0,
                       (EUniformBufferUsage)(pFVar5->Layout).Reference,2);
    TUniformBufferRef<FPrimitiveUniformShaderParameters>::
    TUniformBufferRef<FPrimitiveUniformShaderParameters>
              (local_18,(FRHIUniformBuffer *)(TVar6.Reference)->_padding_);
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 != local_18) {
      TVar2 = *pTVar1;
      *pTVar1 = local_18[0];
      local_18[0] = TVar2;
    }
    if (local_18[0] != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)local_18[0]);
      return;
    }
  }
  return;
}

// DrawArc @ 1483fc8a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FPrimitiveSceneProxy::DrawArc
          (FPrimitiveDrawInterface *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float param_4,uint param_5,FLinearColor *param_6,uchar param_7,float param_8,bool param_9)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  
  uVar1 = param_5;
  if (param_5 != 0) {
    uVar2 = 1;
    fVar12 = (float)(param_2->field0_0x0)._s_0.X;
    fVar11 = __real_3f800000 / (float)param_5;
    fVar13 = (float)(param_2->field0_0x0)._s_0.Y;
    fVar14 = (float)(param_2->field0_0x0)._s_0.Z;
    fVar15 = (float)((param_3->field0_0x0)._s_0.X - (double)fVar12);
    fVar7 = (float)((param_3->field0_0x0)._s_0.Y - (double)fVar13);
    fVar8 = (float)((param_3->field0_0x0)._s_0.Z - (double)fVar14);
    fVar4 = fVar8 * fVar8;
    if (param_5 != 0) {
      fVar6 = fVar12;
      param_5 = (uint)fVar13;
      fVar16 = fVar14;
      do {
        fVar5 = (float)uVar2 * fVar11;
        fVar3 = (fVar11 + fVar11) * (float)uVar2 - __real_3f800000;
        fVar10 = fVar5 * fVar15 + fVar12;
        fVar9 = fVar5 * fVar7 + fVar13;
        local_d8 = (double)fVar10;
        local_d0 = (double)fVar9;
        fVar3 = (__real_3f800000 - fVar3 * fVar3) *
                SQRT(fVar7 * fVar7 + fVar15 * fVar15 + fVar4) * param_4 + fVar5 * fVar8 + fVar14;
        local_c0 = (double)fVar6;
        local_c8 = (double)fVar3;
        local_b8 = (double)(float)param_5;
        local_b0 = (double)fVar16;
        (**(code **)(param_1->_padding_ + 0x30))
                  (param_1,&local_c0,&local_d8,param_6,0,param_8,0,param_9,fVar16,fVar8);
        uVar2 = uVar2 + 1;
        fVar6 = fVar10;
        param_5 = (uint)fVar9;
        fVar16 = fVar3;
      } while (uVar2 <= uVar1);
    }
  }
  return;
}

// DrawArrowHead @ 1483fcb80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FPrimitiveSceneProxy::DrawArrowHead
          (FPrimitiveDrawInterface *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float param_4,FLinearColor *param_5,uchar param_6,float param_7,bool param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_a8;
  double local_a0;
  double local_98;
  
  dVar1 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar6 = __real_3ff0000000000000 / SQRT(dVar1 * dVar1 + dVar4 * dVar4 + dVar2 * dVar2);
  dVar5 = (double)param_4;
  dVar4 = dVar4 * dVar6;
  dVar2 = dVar2 * dVar6;
  dVar1 = dVar1 * dVar6;
  dVar7 = (double)(param_4 * __real_3eaaaaab);
  dVar6 = (dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
          dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) * dVar7;
  dVar3 = (dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
          dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) * dVar7;
  local_a8 = dVar4 * dVar5 + (param_2->field0_0x0)._s_0.X + dVar6;
  dVar7 = (dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
          dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar7;
  local_a0 = dVar1 * dVar5 + (param_2->field0_0x0)._s_0.Y + dVar3;
  local_98 = dVar2 * dVar5 + (param_2->field0_0x0)._s_0.Z + dVar7;
  (**(code **)(param_1->_padding_ + 0x30))
            (local_98,local_a0,&local_a8,param_5,param_6,param_7,0,param_8);
  local_a8 = (dVar4 * dVar5 + (param_2->field0_0x0)._s_0.X) - dVar6;
  local_a0 = (dVar1 * dVar5 + (param_2->field0_0x0)._s_0.Y) - dVar3;
  local_98 = (dVar2 * dVar5 + (param_2->field0_0x0)._s_0.Z) - dVar7;
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,param_2,&local_a8,param_5,param_6,param_7,0,param_8);
  return;
}

// DrawInRuntimeVirtualTextureOnly @ 1483fd540

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
FPrimitiveSceneProxy::DrawInRuntimeVirtualTextureOnly(FPrimitiveSceneProxy *this,bool param_1)

{
  char local_res8 [16];
  char local_res18 [16];
  
  if (this->bVirtualTextureMainPassDrawAlways != '\0') {
    return false;
  }
  if (this->bVirtualTextureMainPassDrawNever != '\0') {
    return true;
  }
  (**(code **)(this->Scene->_padding_ + 0x220))(this->Scene,local_res18,local_res8);
  if (param_1) {
    local_res8[0] = local_res18[0];
  }
  return local_res8[0] != '\0';
}

// EnableGPUSceneSupportFlags @ 1483fe5a0

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

void __thiscall FPrimitiveSceneProxy::EnableGPUSceneSupportFlags(FPrimitiveSceneProxy *this)

{
  FGenericStaticFeatureLevel FVar1;
  bool bVar2;
  
  FVar1.FeatureLevel = this->Scene->FeatureLevel;
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,FVar1);
  this->bVFRequiresPrimitiveUniformBuffer = '\0';
  this->bSupportsGPUScene = '\0';
  this->field_0x80 = this->field_0x80 | !bVar2 << 6;
  if (FVar1.FeatureLevel == ES3_1) {
    bVar2 = false;
  }
  this->field_0x81 = this->field_0x81 | bVar2 << 6;
  return;
}

// GetCachedRayTracingInstance @ 148405410

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
FPrimitiveSceneProxy::GetCachedRayTracingInstance
          (FPrimitiveSceneProxy *this,FRayTracingInstance *param_1)

{
  char cVar1;
  ERayTracingPrimitiveFlags EVar2;
  int iVar3;
  TConsoleVariableData<int> *pTVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  ERayTracingPrimitiveFlags EVar8;
  int *piVar9;
  
  cVar1 = (**(code **)(this->_padding_ + 0x58))();
  if (cVar1 == '\0') {
    return UnsupportedProxyType;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x68))(this);
  if ((cVar1 != '\0') &&
     (((this->bVisibleInRayTracing == '\x01' && this->bRenderInMainPass == '\x01' &&
       (((this->DrawInGame != '\0' || (this->bAffectIndirectLightingWhileHidden != '\0')) ||
        (this->bCastHiddenShadow != '\0')))) || (this->bRayTracingFarField)))) {
    pTVar7 = (TConsoleVariableData<int> *)0x0;
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)
               (**(code **)((longlong)*pIVar5 + 0xc0))
                         (pIVar5,L"r.RayTracing.Geometry.StaticMeshes",1);
      pTVar4 = pTVar7;
      if (plVar6 != (longlong *)0x0) {
        pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      RayTracingStaticMeshesCVar = pTVar4;
      _Init_thread_footer(&::_TSS0);
    }
    if (((this->bIsStaticMesh == '\0' && this->bIsNaniteMesh == '\0') ||
        (RayTracingStaticMeshesCVar == (TConsoleVariableData<int> *)0x0)) ||
       (iVar3 = TConsoleVariableData<int>::GetValueOnRenderThread(RayTracingStaticMeshesCVar),
       0 < iVar3)) {
      if ((*piVar9 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar5 = IConsoleManager::Get();
        plVar6 = (longlong *)
                 (**(code **)((longlong)*pIVar5 + 0xc0))
                           (pIVar5,L"r.RayTracing.Geometry.HierarchicalInstancedStaticMesh",1);
        pTVar4 = pTVar7;
        if (plVar6 != (longlong *)0x0) {
          pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
        }
        RayTracingHISMCVar = pTVar4;
        _Init_thread_footer(&::_TSS1);
      }
      if (((this->bIsHierarchicalInstancedStaticMesh == '\0') ||
          (RayTracingHISMCVar == (TConsoleVariableData<int> *)0x0)) ||
         (iVar3 = TConsoleVariableData<int>::GetValueOnRenderThread(RayTracingHISMCVar), 0 < iVar3))
      {
        if ((*piVar9 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
          pIVar5 = IConsoleManager::Get();
          plVar6 = (longlong *)
                   (**(code **)((longlong)*pIVar5 + 0xc0))
                             (pIVar5,L"r.RayTracing.Geometry.LandscapeGrass",1);
          if (plVar6 != (longlong *)0x0) {
            pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
          }
          RayTracingLandscapeGrassCVar = pTVar7;
          _Init_thread_footer(&::_TSS2);
        }
        if ((((this->bIsLandscapeGrass == '\0') ||
             (RayTracingLandscapeGrassCVar == (TConsoleVariableData<int> *)0x0)) ||
            (iVar3 = TConsoleVariableData<int>::GetValueOnRenderThread(RayTracingLandscapeGrassCVar)
            , 0 < iVar3)) && (this->bIsFirstPerson == 0)) {
          cVar1 = (**(code **)(this->_padding_ + 0x60))(this);
          if (cVar1 == '\0') {
            EVar8 = Dynamic;
          }
          else {
            if ((this->PrimitiveSceneInfo->StaticRayTracingGeometries).ArrayNum == 0) {
              return Exclude;
            }
            if ((this->PrimitiveSceneInfo->StaticMeshes).ArrayNum == 0) {
              return Exclude;
            }
            EVar8 = ComputeLOD;
          }
          EVar2 = EVar8 | FarField;
          if (!this->bRayTracingFarField) {
            EVar2 = EVar8;
          }
          return EVar2;
        }
      }
    }
  }
  return Exclude;
}

// GetDepthPriorityGroup @ 1484065f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ESceneDepthPriorityGroup __thiscall
FPrimitiveSceneProxy::GetDepthPriorityGroup(FPrimitiveSceneProxy *this,FSceneView *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  if ((this->bUseViewOwnerDepthPriorityGroup != '\0') &&
     (uVar2 = (param_1->ViewActor).ActorUniqueId, uVar2 != 0)) {
    pFVar4 = (this->Owners).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->Owners).ArrayNum * 4;
    for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 4) {
      if (*(uint *)pFVar4 == uVar2) {
        bVar3 = true;
        goto LAB_148406630;
      }
    }
    bVar3 = false;
LAB_148406630:
    if (bVar3) {
      return this->ViewOwnerDepthPriorityGroup;
    }
  }
  return this->StaticDepthPriorityGroup;
}

// GetInstanceDataHeader @ 148408750

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
FPrimitiveSceneProxy::GetInstanceDataHeader
          (FPrimitiveSceneProxy *this,FInstanceDataBufferHeader *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 uVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(this->_padding_ + 0x230))();
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 8);
    __return_storage_ptr__->NumInstances = (int)uVar1;
    __return_storage_ptr__->PayloadDataStride = (int)((ulonglong)uVar1 >> 0x20);
    *(undefined4 *)&__return_storage_ptr__->Flags = *(undefined4 *)(lVar4 + 0x10);
    return __return_storage_ptr__;
  }
  if (this->InstanceSceneDataBuffersInternal != (FInstanceSceneDataBuffers *)0x0) {
    FInstanceSceneDataBuffers::GetHeader
              (this->InstanceSceneDataBuffersInternal,__return_storage_ptr__,(FAccessTag)0x0);
    return __return_storage_ptr__;
  }
  uVar2 = FInstanceDataBufferHeader::SinglePrimitiveHeader.PayloadDataStride;
  __return_storage_ptr__->NumInstances =
       FInstanceDataBufferHeader::SinglePrimitiveHeader.NumInstances;
  __return_storage_ptr__->PayloadDataStride = uVar2;
  uVar3 = FInstanceDataBufferHeader::SinglePrimitiveHeader._10_2_;
  __return_storage_ptr__->Flags = FInstanceDataBufferHeader::SinglePrimitiveHeader.Flags;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = uVar3;
  return __return_storage_ptr__;
}

// GetInstanceSceneDataBuffers @ 148408860

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
FPrimitiveSceneProxy::GetInstanceSceneDataBuffers
          (FPrimitiveSceneProxy *this,EInstanceBufferAccessFlags param_1)

{
  FInstanceDataUpdateTaskInfo *this_00;
  
  if (param_1 == SynchronizeUpdateTask) {
    this_00 = (FInstanceDataUpdateTaskInfo *)(**(code **)(this->_padding_ + 0x230))();
    if (this_00 != (FInstanceDataUpdateTaskInfo *)0x0) {
      FInstanceDataUpdateTaskInfo::WaitForUpdateCompletion(this_00);
    }
    return this->InstanceSceneDataBuffersInternal;
  }
  return this->InstanceSceneDataBuffersInternal;
}

// GetMaterialCacheDescriptor @ 148408ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FPrimitiveSceneProxy::GetMaterialCacheDescriptor(FPrimitiveSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->bSupportsMaterialCache != '\0') && (this->MaterialCacheDescriptor == 0xffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bSupportsMaterialCache || MaterialCacheDescriptor != 0xffffffffui32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x4f4,L"Primitive writes to material cache with an unallocated descriptor");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return this->MaterialCacheDescriptor;
  }
  return this->MaterialCacheDescriptor;
}

// GetPreSkinnedLocalBounds @ 148409880

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
FPrimitiveSceneProxy::GetPreSkinnedLocalBounds
          (FPrimitiveSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  TVector<double>_u_0 local_78 [5];
  
  fVar8 = (float)((uint)(this->MinMaxMaterialDisplacement).field0_0x0._s_0.X ^
                 __xmm_80000000800000008000000080000000);
  fVar11 = (this->MinMaxMaterialDisplacement).field0_0x0._s_0.Y;
  if (fVar8 <= fVar11) {
    fVar8 = fVar11;
  }
  if ((this->bEvaluateWorldPositionOffset == '\x01' &&
       this->bAnyMaterialHasWorldPositionOffset == '\x01') ||
     (this->bAnyMaterialAlwaysEvaluatesWorldPositionOffset != '\0')) {
    fVar11 = this->MaxWPOExtent;
  }
  else {
    fVar11 = 0.0;
  }
  GetLocalBoundsPadExtent
            ((TVector<double> *)&local_78[0]._s_0,&this->LocalToWorld,
             (float)((uint)(fVar11 + fVar8) ^ __xmm_80000000800000008000000080000000));
  dVar4 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->LocalBounds).Origin.field0_0x0._s_0.Z;
  dVar6 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  dVar2 = (this->LocalBounds).SphereRadius;
  dVar7 = (this->LocalBounds).Origin.field0_0x0._s_0.Y;
  dVar12 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z + (double)local_78[0]._16_8_;
  auVar9._0_8_ = (double)local_78[0]._16_8_ * (double)local_78[0]._16_8_;
  auVar9._8_8_ = 0;
  (param_1->Origin).field0_0x0._s_0.X = (this->LocalBounds).Origin.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Y = dVar7;
  auVar10._8_8_ = 0;
  auVar10._0_8_ =
       (double)local_78[0]._8_8_ * (double)local_78[0]._8_8_ +
       (double)local_78[0]._0_8_ * (double)local_78[0]._0_8_ + auVar9._0_8_;
  auVar10 = sqrtpd(auVar9,auVar10);
  (param_1->Origin).field0_0x0._s_0.Z = dVar5;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar6 + (double)local_78[0]._0_8_;
  auVar3._8_4_ = SUB84(dVar12,0);
  auVar3._0_8_ = dVar4 + (double)local_78[0]._8_8_;
  auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_1->BoxExtent).field0_0x0 + 8) = auVar3;
  param_1->SphereRadius = dVar2 + auVar10._0_8_;
  return;
}

// GetRayTracingProxyType @ 14840a240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ERayTracingProxyType __thiscall
FPrimitiveSceneProxy::GetRayTracingProxyType(FPrimitiveSceneProxy *this)

{
  undefined1 *puVar1;
  ERayTracingProxyType EVar2;
  ERayTracingProxyType EVar3;
  
  EVar2 = this->bIsStaticMesh;
  EVar3 = EVar2 | HierarchicalInstancedStaticMesh;
  if (this->bIsHierarchicalInstancedStaticMesh == '\0') {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | LandscapeGrass;
  if (this->bIsLandscapeGrass == '\0') {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | SkeletalMesh;
  if (this->bSkinnedMesh == '\0') {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | InstanceSkeletalMesh;
  if (!(bool)this->bInstancedSkinnedMesh) {
    EVar2 = EVar3;
  }
  return EVar2;
}

// GetViewRelevance @ 14840ba30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FPrimitiveSceneProxy::GetViewRelevance
          (FPrimitiveSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  return __return_storage_ptr__;
}

// IsInstanceDataGPUOnly @ 14840f4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveSceneProxy::IsInstanceDataGPUOnly(FPrimitiveSceneProxy *this)

{
  longlong lVar1;
  FInstanceDataBufferHeader local_18;
  
  lVar1 = (**(code **)(this->_padding_ + 0x230))();
  if (lVar1 != 0) {
    local_18._10_1_ = SUB41((uint)*(undefined4 *)(lVar1 + 0x10) >> 0x10,0);
    return local_18.bInstanceDataIsGPUOnly;
  }
  if (this->InstanceSceneDataBuffersInternal != (FInstanceSceneDataBuffers *)0x0) {
    FInstanceSceneDataBuffers::GetHeader
              (this->InstanceSceneDataBuffersInternal,&local_18,(FAccessTag)0x0);
    return local_18.bInstanceDataIsGPUOnly;
  }
  return FInstanceDataBufferHeader::SinglePrimitiveHeader.bInstanceDataIsGPUOnly;
}

// IsShadowCast @ 14840fa80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveSceneProxy::IsShadowCast(FPrimitiveSceneProxy *this,FSceneView *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FSetElementId> FVar9;
  undefined1 *puVar10;
  
  if ((this->PrimitiveSceneInfo == (FPrimitiveSceneInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveSceneInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                         ,0x637,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((!(bool)this->bCastStaticShadow) && (this->bCastDynamicShadow == '\0')) {
    return false;
  }
  if (this->bCastHiddenShadow == '\0') {
    if (this->DrawInGame == '\0') {
      return false;
    }
    if (*(int *)&(param_1->HiddenPrimitives).Elements.field_0x8 !=
        *(int *)&(param_1->HiddenPrimitives).Elements.field_0x34) {
      FVar9 = (param_1->HiddenPrimitives).Hash.SecondaryData;
      uVar2 = (this->PrimitiveComponentId).PrimIDValue;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&(param_1->HiddenPrimitives).Hash;
      }
      iVar7 = *(int *)((longlong)FVar9 +
                      (ulonglong)((param_1->HiddenPrimitives).HashSize - 1U & uVar2) * 4);
      if (iVar7 != -1) {
        lVar3 = *(longlong *)&(param_1->HiddenPrimitives).Elements;
        do {
          if (*(uint *)(lVar3 + (longlong)iVar7 * 0xc) == uVar2) {
            return false;
          }
          iVar7 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0xc);
        } while (iVar7 != -1);
      }
    }
    if (*(int *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
      if (*(int *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 8) ==
          *(int *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0x34)) {
        return false;
      }
      puVar10 = *(undefined1 **)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0x40);
      uVar2 = (this->PrimitiveComponentId).PrimIDValue;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = (undefined1 *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0x38);
      }
      iVar7 = *(int *)(puVar10 +
                      (ulonglong)
                      ((param_1->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize - 1U & uVar2) *
                      4);
      if (iVar7 == -1) {
        return false;
      }
      lVar3 = *(longlong *)&(param_1->ShowOnlyPrimitives).field0_0x0;
      while (*(uint *)(lVar3 + (longlong)iVar7 * 0xc) != uVar2) {
        iVar7 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0xc);
        if (iVar7 == -1) {
          return false;
        }
      }
    }
    if ((this->bForceHidden == '\0') &&
       ((bVar5 = DrawInRuntimeVirtualTextureOnly(this,(param_1->Family->EngineShowFlags).Editor),
        !bVar5 || (param_1->bIsVirtualTexture != false)))) {
      uVar2 = (param_1->ViewActor).ActorUniqueId;
      if (uVar2 != 0) {
        pFVar8 = (this->Owners).AllocatorInstance.Data;
        pFVar1 = pFVar8 + (longlong)(this->Owners).ArrayNum * 4;
        for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 4) {
          if (*(uint *)pFVar8 == uVar2) {
            bVar5 = true;
            goto LAB_14840fc1f;
          }
        }
      }
      bVar5 = false;
LAB_14840fc1f:
      if (((this->bOnlyOwnerSee == '\0') || (bVar5)) && ((!(bool)this->bOwnerNoSee || (!bVar5)))) {
        if (param_1->bIsSceneCapture == false) goto LAB_14840fc60;
        if (this->bHiddenInSceneCapture == '\0') {
          return true;
        }
      }
    }
    return false;
  }
  if (param_1->bIsSceneCapture != false) {
    return true;
  }
LAB_14840fc60:
  return (bool)(~this->bVisibleInSceneCaptureOnly & 1);
}

// IsShown @ 14840fc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveSceneProxy::IsShown(FPrimitiveSceneProxy *this,FSceneView *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  char local_res8 [8];
  undefined1 local_res18 [16];
  
  if (((this->bForceHidden == '\0') && (this->DrawInGame != '\0')) &&
     ((this->bVirtualTextureMainPassDrawAlways != '\0' ||
      (((this->bVirtualTextureMainPassDrawNever == '\0' &&
        ((**(code **)(this->Scene->_padding_ + 0x220))(this->Scene,local_res18,local_res8),
        local_res8[0] == '\0')) || (param_1->bIsVirtualTexture != false)))))) {
    uVar3 = (param_1->ViewActor).ActorUniqueId;
    if (uVar3 != 0) {
      pFVar5 = (this->Owners).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(this->Owners).ArrayNum * 4;
      for (; pFVar5 != pFVar2; pFVar5 = pFVar5 + 4) {
        if (*(uint *)pFVar5 == uVar3) {
          bVar4 = true;
          goto LAB_14840fd1f;
        }
      }
    }
    bVar4 = false;
LAB_14840fd1f:
    if (((this->bOnlyOwnerSee == '\0') || (bVar4)) && ((!(bool)this->bOwnerNoSee || (!bVar4)))) {
      if (param_1->bIsSceneCapture == false) {
        return (bool)(~this->bVisibleInSceneCaptureOnly & 1);
      }
      if (this->bHiddenInSceneCapture == '\0') {
        return true;
      }
    }
  }
  return false;
}

// OnLevelAddedToWorld_RenderThread @ 148413250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPrimitiveSceneProxy::OnLevelAddedToWorld_RenderThread(FPrimitiveSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (!(bool)this->bShouldNotifyOnWorldAddRemove) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bShouldNotifyOnWorldAddRemove",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bForceHidden != '\0') {
    this->field_0x7b = this->field_0x7b & 0xef;
                    /* WARNING: Could not recover jumptable at 0x0001484132a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x238))(this);
    return;
  }
  return;
}

// OnLevelRemovedFromWorld_RenderThread @ 1484153f0

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
FPrimitiveSceneProxy::OnLevelRemovedFromWorld_RenderThread(FPrimitiveSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (!(bool)this->bShouldNotifyOnWorldAddRemove) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bShouldNotifyOnWorldAddRemove",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x285,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bForceHidden == '\0') {
    this->field_0x7b = this->field_0x7b | 0x10;
                    /* WARNING: Could not recover jumptable at 0x000148415440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x238))(this);
    return;
  }
  return;
}

// PadInstanceLocalBounds @ 148417610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRenderBounds * __thiscall
FPrimitiveSceneProxy::PadInstanceLocalBounds
          (FPrimitiveSceneProxy *this,FRenderBounds *__return_storage_ptr__,FRenderBounds *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  TVector<double> *pTVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TVector<double> local_28;
  
  fVar7 = (float)((uint)(this->MinMaxMaterialDisplacement).field0_0x0._s_0.X ^
                 __xmm_80000000800000008000000080000000);
  fVar8 = (this->MinMaxMaterialDisplacement).field0_0x0._s_0.Y;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  if ((this->bEvaluateWorldPositionOffset == '\x01' &&
       this->bAnyMaterialHasWorldPositionOffset == '\x01') ||
     (this->bAnyMaterialAlwaysEvaluatesWorldPositionOffset != '\0')) {
    fVar8 = this->MaxWPOExtent;
  }
  else {
    fVar8 = 0.0;
  }
  pTVar6 = GetLocalBoundsPadExtent(&local_28,&this->LocalToWorld,fVar8 + fVar7);
  uVar5 = *(undefined8 *)((longlong)&(param_1->Min).field0_0x0 + 8);
  dVar2 = (pTVar6->field0_0x0)._s_0.X;
  dVar3 = (pTVar6->field0_0x0)._s_0.Y;
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 =
       *(undefined8 *)&(param_1->Min).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar5;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Max).field0_0x0 + 4);
  fVar8 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  fVar9 = (float)dVar2;
  fVar10 = (float)dVar3;
  fVar11 = (float)dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (__return_storage_ptr__->Min).field0_0x0._s_0.X - fVar9;
  fVar7 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = fVar8 - fVar10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = fVar7 - fVar11;
  fVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  fVar7 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X =
       fVar9 + (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = fVar10 + fVar8;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = fVar11 + fVar7;
  return __return_storage_ptr__;
}

// RenderBounds @ 1484203f0

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

void __thiscall
FPrimitiveSceneProxy::RenderBounds
          (FPrimitiveSceneProxy *this,FPrimitiveDrawInterface *param_1,FEngineShowFlags *param_2,
          TBoxSphereBounds<double,double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined1 auStackY_148 [32];
  FLinearColor_u_0 local_e8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((param_2->Bounds != 0) && ((param_2->Game != 0 || (param_4)))) {
    local_90 = (param_3->BoxExtent).field0_0x0._s_0.X;
    local_e8._s_0.R = FLinearColor::sRGBToLinearTable[0x48];
    local_e8._s_0.G = FLinearColor::sRGBToLinearTable[0x48];
    local_e8._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
    local_a8._s_0.X = (param_3->Origin).field0_0x0._s_0.X - local_90;
    local_90 = local_90 + (param_3->Origin).field0_0x0._s_0.X;
    local_88 = (param_3->BoxExtent).field0_0x0._s_0.Y;
    local_a8._s_0.Y = (param_3->Origin).field0_0x0._s_0.Y - local_88;
    local_80 = (param_3->BoxExtent).field0_0x0._s_0.Z;
    local_88 = local_88 + (param_3->Origin).field0_0x0._s_0.Y;
    local_a8._s_0.Z = (param_3->Origin).field0_0x0._s_0.Z - local_80;
    local_80 = local_80 + (param_3->Origin).field0_0x0._s_0.Z;
    local_e8._s_0.A = 1.0;
    local_78 = 1;
    DrawWireBox(param_1,(TBox<double> *)&local_a8._s_0,(FLinearColor *)&local_e8._s_0,'\0',0.0,0.0,
                false);
    fVar4 = __real_3b808081;
    local_e8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
    local_e8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
    local_e8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
    local_d8._s_0.Z = 0.0;
    local_c0._s_0.Z = 0.0;
    local_d8._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_d8._s_0.Y = _UNK_15061cbc8;
    local_e8._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081;
    local_c0._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_c0._s_0.Y = _UNK_150689518;
    DrawCircle(param_1,&param_3->Origin,(TVector<double> *)&local_c0._s_0,
               (TVector<double> *)&local_d8._s_0,(FLinearColor *)&local_e8._s_0,
               param_3->SphereRadius,0x20,'\0',0.0,0.0,false);
    dVar1 = __real_3ff0000000000000;
    local_e8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
    local_e8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
    local_e8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
    local_c0._s_0.Z = __real_3ff0000000000000;
    local_e8._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * fVar4;
    local_d8._s_0.Z = 0.0;
    local_c0._s_0.X = 0.0;
    local_c0._s_0.Y = 0.0;
    local_d8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_d8._s_0.Y = _UNK_150689518;
    DrawCircle(param_1,&param_3->Origin,(TVector<double> *)&local_d8._s_0,
               (TVector<double> *)&local_c0._s_0,(FLinearColor *)&local_e8._s_0,
               param_3->SphereRadius,0x20,'\0',0.0,0.0,false);
    local_e8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
    local_e8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
    local_c0._s_0.Z = dVar1;
    local_d8._s_0.Z = 0.0;
    local_e8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
    local_c0._s_0.X = 0.0;
    local_c0._s_0.Y = 0.0;
    local_e8._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * fVar4;
    local_d8._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_d8._s_0.Y = _UNK_15061cbc8;
    DrawCircle(param_1,&param_3->Origin,(TVector<double> *)&local_d8._s_0,
               (TVector<double> *)&local_c0._s_0,(FLinearColor *)&local_e8._s_0,
               param_3->SphereRadius,0x20,'\0',0.0,0.0,false);
    local_90 = (this->LocalBounds).Origin.field0_0x0._s_0.X;
    dVar1 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.X;
    local_88 = (this->LocalBounds).Origin.field0_0x0._s_0.Y;
    dVar2 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
    dVar3 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
    local_80 = (this->LocalBounds).Origin.field0_0x0._s_0.Z;
    local_e8._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
    local_e8._s_0.G = FLinearColor::sRGBToLinearTable[0x48];
    local_a8._s_0.X = local_90 - dVar1;
    local_e8._s_0.B = FLinearColor::sRGBToLinearTable[0x48];
    local_e8._s_0.A = 1.0;
    local_a8._s_0.Y = local_88 - dVar2;
    local_a8._s_0.Z = local_80 - dVar3;
    local_90 = local_90 + dVar1;
    local_88 = local_88 + dVar2;
    local_80 = local_80 + dVar3;
    local_78 = 1;
    DrawWireBox(param_1,&this->LocalToWorld,(TBox<double> *)&local_a8._s_0,
                (FLinearColor *)&local_e8._s_0,'\0',0.0,0.0,false);
  }
  return;
}

// ResetSceneVelocity_GameThread @ 148421760

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

void __thiscall FPrimitiveSceneProxy::ResetSceneVelocity_GameThread(FPrimitiveSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FPrimitiveSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x59b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::ResetSceneVelocity_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::ResetSceneVelocity_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::ResetSceneVelocity_GameThread_::__l2::TSTR_ResetSceneVelocity1438>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::ResetSceneVelocity_GameThread'::__l2::TSTR_ResetSceneVelocity1438>
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

// SetCollisionEnabled_GameThread @ 148423c10

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

void __thiscall
FPrimitiveSceneProxy::SetCollisionEnabled_GameThread(FPrimitiveSceneProxy *this,bool param_1)

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
  FPrimitiveSceneProxy *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x5c5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::SetCollisionEnabled_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::SetCollisionEnabled_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetCollisionEnabled_GameThread_::__l2::TSTR_SetCollisionEnabled1481>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetCollisionEnabled_GameThread'::__l2::TSTR_SetCollisionEnabled1481>
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

// SetCollisionEnabled_RenderThread @ 148423dc0

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
FPrimitiveSceneProxy::SetCollisionEnabled_RenderThread(FPrimitiveSceneProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x5d2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bCollisionEnabled = '\0';
  this->field_0x7b = this->field_0x7b | param_1 << 5;
  return;
}

// SetCustomDepthEnabled_GameThread @ 148423e20

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

void __thiscall
FPrimitiveSceneProxy::SetCustomDepthEnabled_GameThread(FPrimitiveSceneProxy *this,bool param_1)

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
  FPrimitiveSceneProxy *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x42c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::SetCustomDepthEnabled_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::SetCustomDepthEnabled_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetCustomDepthEnabled_GameThread_::__l2::TSTR_FSetCustomDepthEnabled1070>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetCustomDepthEnabled_GameThread'::__l2::TSTR_FSetCustomDepthEnabled1070>
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

// SetCustomDepthEnabled_RenderThread @ 148423fd0

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
FPrimitiveSceneProxy::SetCustomDepthEnabled_RenderThread(FPrimitiveSceneProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x43c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bRenderCustomDepth != param_1) {
    this->field_0x86 = this->field_0x86 & 0xfb | param_1 << 2;
    if (this->PrimitiveSceneInfo != (FPrimitiveSceneInfo *)0x0) {
      (**(code **)(this->Scene->_padding_ + 0x518))();
      if (this->bIsNaniteMesh != '\0') {
        (**(code **)(this->Scene->_padding_ + 0x520))(this->Scene,this->PrimitiveSceneInfo);
      }
    }
  }
  return;
}

// SetCustomDepthStencilValue_GameThread @ 148424080

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

void __thiscall
FPrimitiveSceneProxy::SetCustomDepthStencilValue_GameThread(FPrimitiveSceneProxy *this,int param_1)

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
  FPrimitiveSceneProxy *pFStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x46a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::SetCustomDepthStencilValue_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::SetCustomDepthStencilValue_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetCustomDepthStencilValue_GameThread_::__l2::TSTR_FSetCustomDepthStencilValue1132>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FPrimitiveSceneProxy::SetCustomDepthStencilValue_GameThread'::__l2::TSTR_FSetCustomDepthStencilValue1132>
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

// SetCustomDepthStencilValue_RenderThread @ 148424220

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
FPrimitiveSceneProxy::SetCustomDepthStencilValue_RenderThread
          (FPrimitiveSceneProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x47a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((uint)this->CustomDepthStencilValue != param_1) {
    this->CustomDepthStencilValue = (uchar)param_1;
    if (this->PrimitiveSceneInfo != (FPrimitiveSceneInfo *)0x0) {
      (**(code **)(this->Scene->_padding_ + 0x518))();
      (**(code **)(this->Scene->_padding_ + 0x510))(this->Scene,this->PrimitiveSceneInfo,8);
    }
  }
  return;
}

// SetDebugMassData @ 1484242c0

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
FPrimitiveSceneProxy::SetDebugMassData
          (FPrimitiveSceneProxy *this,
          TArray<FPrimitiveSceneProxy::FDebugMassData,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FPrimitiveSceneProxy::FDebugMassData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->DebugMassData;
  if (pTVar1 != param_1) {
    iVar3 = (this->DebugMassData).ArrayMax;
    piVar2 = &(this->DebugMassData).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->DebugMassData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x60);
    }
  }
  return;
}

// SetDistanceFieldSelfShadowBias_RenderThread @ 148424370

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
FPrimitiveSceneProxy::SetDistanceFieldSelfShadowBias_RenderThread
          (FPrimitiveSceneProxy *this,float param_1)

{
  this->DistanceFieldSelfShadowBias = param_1;
  return;
}

// SetDrawDistance_RenderThread @ 148424380

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
FPrimitiveSceneProxy::SetDrawDistance_RenderThread
          (FPrimitiveSceneProxy *this,float param_1,float param_2,float param_3)

{
  this->MinDrawDistance = param_1;
  if (param_2 <= 0.0) {
    param_2 = __real_7f7fffff;
  }
  this->MaxDrawDistance = param_2;
  if (((this->bSupportsRuntimeVirtualTexture != '\0') &&
      (0 < (this->RuntimeVirtualTextures).ArrayNum)) && (0.0 < param_3)) {
    if (param_3 <= param_2) {
      param_2 = param_3;
    }
    this->MaxDrawDistance = param_2;
  }
  return;
}

// SetDrawnInGame_RenderThread @ 1484243d0

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
FPrimitiveSceneProxy::SetDrawnInGame_RenderThread(FPrimitiveSceneProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x456,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->DrawInGame != param_1) {
    this->field_0x78 = this->field_0x78 & 0xfd | param_1 * '\x02';
    if (this->PrimitiveSceneInfo != (FPrimitiveSceneInfo *)0x0) {
      (**(code **)(this->Scene->_padding_ + 0x518))();
      (**(code **)(this->Scene->_padding_ + 0x510))(this->Scene,this->PrimitiveSceneInfo,8);
    }
  }
  return;
}

// SetEvaluateWorldPositionOffset_GameThread @ 148424630

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

void __thiscall
FPrimitiveSceneProxy::SetEvaluateWorldPositionOffset_GameThread
          (FPrimitiveSceneProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FPrimitiveSceneProxy *local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  FSceneInterface *local_98;
  FPrimitiveSceneInfo *pFStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x5a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_98 = this->Scene;
  pFStack_90 = this->PrimitiveSceneInfo;
  local_88[0] = (code *)0x0;
  local_a8 = this;
  uStack_a0 = param_1;
  local_60 = FMemory::Malloc(0x28,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPrimitiveSceneProxy::SetEvaluateWorldPositionOffset_GameThread'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = (code *)local_a8;
  local_60[2] = (code *)CONCAT71(uStack_9f,uStack_a0);
  local_60[3] = (code *)local_98;
  local_60[4] = (code *)pFStack_90;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPrimitiveSceneProxy::SetEvaluateWorldPositionOffset_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetEvaluateWorldPositionOffset_GameThread_::__l2::TSTR_SetEvaluateWorldPositionOffset1450>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetEvaluateWorldPositionOffset_GameThread'::__l2::TSTR_SetEvaluateWorldPositionOffset1450>
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
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// SetHiddenEdViews_GameThread @ 148424810

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

void __thiscall
FPrimitiveSceneProxy::SetHiddenEdViews_GameThread(FPrimitiveSceneProxy *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FPrimitiveSceneProxy *pFStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x53a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::SetHiddenEdViews_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::SetHiddenEdViews_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetHiddenEdViews_GameThread_::__l2::TSTR_SetEditorVisibility1341>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetHiddenEdViews_GameThread'::__l2::TSTR_SetEditorVisibility1341>
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

// SetHiddenEdViews_RenderThread @ 1484249b0

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
FPrimitiveSceneProxy::SetHiddenEdViews_RenderThread(FPrimitiveSceneProxy *this,ulong64 param_1)

{
  return;
}

// SetHovered_GameThread @ 1484249c0

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

void __thiscall FPrimitiveSceneProxy::SetHovered_GameThread(FPrimitiveSceneProxy *this,bool param_1)

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
  FPrimitiveSceneProxy *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x4b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::SetHovered_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::SetHovered_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetHovered_GameThread_::__l2::TSTR_SetNewHovered1204>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetHovered_GameThread'::__l2::TSTR_SetNewHovered1204>
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

// SetHovered_RenderThread @ 148424b70

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
FPrimitiveSceneProxy::SetHovered_RenderThread(FPrimitiveSceneProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x4a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bHovered = '\0';
  this->field_0x79 = this->field_0x79 | param_1 << 4;
  return;
}

// SetLevelInstanceEditingState_GameThread @ 148424e80

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

void __thiscall
FPrimitiveSceneProxy::SetLevelInstanceEditingState_GameThread
          (FPrimitiveSceneProxy *this,bool param_1)

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
  FPrimitiveSceneProxy *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x41a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::SetLevelInstanceEditingState_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::SetLevelInstanceEditingState_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetLevelInstanceEditingState_GameThread_::__l2::TSTR_SetNewLevelInstanceEditingState1054>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetLevelInstanceEditingState_GameThread'::__l2::TSTR_SetNewLevelInstanceEditingState1054>
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

// SetLevelInstanceEditingState_RenderThread @ 148425030

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
FPrimitiveSceneProxy::SetLevelInstanceEditingState_RenderThread
          (FPrimitiveSceneProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x414,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bLevelInstanceEditingState = '\0';
  this->field_0x79 = this->field_0x79 | param_1 << 3;
  return;
}

// SetLightingChannels_GameThread @ 148425090

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

void __thiscall
FPrimitiveSceneProxy::SetLightingChannels_GameThread
          (FPrimitiveSceneProxy *this,FLightingChannels param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FPrimitiveSceneProxy *local_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  FSceneInterface *local_98;
  FPrimitiveSceneInfo *pFStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x4bd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_98 = this->Scene;
  bStack_a0 = (byte)param_1 & 7;
  pFStack_90 = this->PrimitiveSceneInfo;
  local_88[0] = (code *)0x0;
  local_a8 = this;
  local_60 = FMemory::Malloc(0x28,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPrimitiveSceneProxy::SetLightingChannels_GameThread'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = (code *)local_a8;
  local_60[2] = (code *)CONCAT71(uStack_9f,bStack_a0);
  local_60[3] = (code *)local_98;
  local_60[4] = (code *)pFStack_90;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPrimitiveSceneProxy::SetLightingChannels_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetLightingChannels_GameThread_::__l2::TSTR_SetLightingChannelsCmd1217>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetLightingChannels_GameThread'::__l2::TSTR_SetLightingChannelsCmd1217>
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
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// SetPSORequestsToBoostOnDraw @ 148425950

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
FPrimitiveSceneProxy::SetPSORequestsToBoostOnDraw
          (FPrimitiveSceneProxy *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar2 = &this->PSOPrecacheRequestsToBoostOnDraw;
  if (pTVar2 != param_1) {
    iVar3 = (this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax;
    piVar1 = &(this->PSOPrecacheRequestsToBoostOnDraw).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->PSOPrecacheRequestsToBoostOnDraw).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
    if (iVar4 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
    }
  }
  return;
}

// SetPrimitiveColor_GameThread @ 148425af0

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

void __thiscall
FPrimitiveSceneProxy::SetPrimitiveColor_GameThread(FPrimitiveSceneProxy *this,FLinearColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  code *local_b8;
  code *pcStack_b0;
  FPrimitiveSceneProxy *local_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                       ,0x586,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_b8 = *(code **)&param_1->field0_0x0;
  pcStack_b0 = *(code **)((longlong)&param_1->field0_0x0 + 8);
  local_88[0] = (code *)0x0;
  local_a8 = this;
  pcStack_a0 = local_b8;
  pcStack_98 = pcStack_b0;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPrimitiveSceneProxy::SetPrimitiveColor_GameThread'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = (code *)local_a8;
  local_60[2] = pcStack_a0;
  local_60[3] = pcStack_b0;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPrimitiveSceneProxy::SetPrimitiveColor_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetPrimitiveColor_GameThread_::__l2::TSTR_SetSelectionOutlineColorIndex1416>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetPrimitiveColor_GameThread'::__l2::TSTR_SetSelectionOutlineColorIndex1416>
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
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// SetSelection_GameThread @ 148425d80

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

void __thiscall
FPrimitiveSceneProxy::SetSelection_GameThread(FPrimitiveSceneProxy *this,bool param_1,bool param_2)

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
  FPrimitiveSceneProxy *pFStack_70;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrimitiveSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelGameThread() || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                         ,0x407,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPrimitiveSceneProxy::SetSelection_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_66 = auStack_b8._42_4_;
  uStack_62 = auStack_b8._46_2_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPrimitiveSceneProxy::SetSelection_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  uStack_67 = param_2;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPrimitiveSceneProxy::SetSelection_GameThread_::__l2::TSTR_SetNewSelection1035>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_1_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._2_4_ = uStack_66;
    local_38._6_2_ = uStack_62;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPrimitiveSceneProxy::SetSelection_GameThread'::__l2::TSTR_SetNewSelection1035>
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

// SetSelection_RenderThread @ 148425f40

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
FPrimitiveSceneProxy::SetSelection_RenderThread
          (FPrimitiveSceneProxy *this,bool param_1,bool param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                         ,0x3eb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = this->field_0x79;
  this->field_0x79 = uVar1 & 0xf9 | param_1 * '\x02' | param_2 << 2;
  if ((param_1) || (param_2)) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  if (this->bWantsEditorEffects == '\0') {
    if (this->bParentSelected == '\0' && this->bIndividuallySelected == '\0') {
      if (cVar5 == '\0') {
        return;
      }
    }
    else if (cVar5 != '\0') {
      return;
    }
  }
  else {
    cVar5 = '\x01';
  }
  (**(code **)(this->Scene->_padding_ + 0x290))(this->Scene,this->PrimitiveSceneInfo,cVar5);
  return;
}

// SetTransform @ 148426020

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
FPrimitiveSceneProxy::SetTransform
          (FPrimitiveSceneProxy *this,FRHICommandListBase *param_1,TMatrix<double> *param_2,
          TBoxSphereBounds<double,double> *param_3,TBoxSphereBounds<double,double> *param_4,
          TVector<double> *param_5)

{
  TMatrix<double> *this_00;
  undefined1 *puVar1;
  double dVar2;
  FPrimitiveSceneInfo *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  TVector<double>_u_0 local_78;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  
  dVar8 = param_2->M[0][1];
  this_00 = &this->LocalToWorld;
  this_00->M[0][0] = param_2->M[0][0];
  (this->LocalToWorld).M[0][1] = dVar8;
  dVar8 = param_2->M[0][3];
  (this->LocalToWorld).M[0][2] = param_2->M[0][2];
  (this->LocalToWorld).M[0][3] = dVar8;
  dVar8 = param_2->M[1][1];
  (this->LocalToWorld).M[1][0] = param_2->M[1][0];
  (this->LocalToWorld).M[1][1] = dVar8;
  dVar8 = param_2->M[1][3];
  (this->LocalToWorld).M[1][2] = param_2->M[1][2];
  (this->LocalToWorld).M[1][3] = dVar8;
  dVar8 = param_2->M[2][1];
  (this->LocalToWorld).M[2][0] = param_2->M[2][0];
  (this->LocalToWorld).M[2][1] = dVar8;
  dVar8 = param_2->M[2][3];
  (this->LocalToWorld).M[2][2] = param_2->M[2][2];
  (this->LocalToWorld).M[2][3] = dVar8;
  dVar8 = param_2->M[3][1];
  (this->LocalToWorld).M[3][0] = param_2->M[3][0];
  (this->LocalToWorld).M[3][1] = dVar8;
  dVar8 = param_2->M[3][3];
  (this->LocalToWorld).M[3][2] = param_2->M[3][2];
  (this->LocalToWorld).M[3][3] = dVar8;
  dVar8 = UE::Math::TMatrix<double>::Determinant(this_00);
  fVar7 = (float)((uint)(this->MinMaxMaterialDisplacement).field0_0x0._s_0.X ^
                 __xmm_80000000800000008000000080000000);
  fVar12 = (this->MinMaxMaterialDisplacement).field0_0x0._s_0.Y;
  if (fVar7 <= fVar12) {
    fVar7 = fVar12;
  }
  this->field_0x78 = dVar8 < 0.0 | this->field_0x78 & 0xfe;
  if ((this->bEvaluateWorldPositionOffset == '\x01' &&
       this->bAnyMaterialHasWorldPositionOffset == '\x01') ||
     (this->bAnyMaterialAlwaysEvaluatesWorldPositionOffset != '\0')) {
    fVar12 = this->MaxWPOExtent;
  }
  else {
    fVar12 = 0.0;
  }
  local_40 = (param_3->BoxExtent).field0_0x0._s_0.Y;
  dStack_38 = (param_3->BoxExtent).field0_0x0._s_0.Z;
  local_50 = (param_3->Origin).field0_0x0._s_0.Z;
  dStack_48 = (param_3->BoxExtent).field0_0x0._s_0.X;
  dVar8 = param_3->SphereRadius;
  fVar12 = fVar12 + fVar7;
  dVar2 = (param_3->Origin).field0_0x0._s_0.Y;
  dVar9 = (double)fVar12;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_3->Origin).field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar2;
  dStack_48 = dStack_48 + dVar9;
  fVar7 = fVar12 * __real_3fddb3d7;
  (this->Bounds).Origin.field0_0x0._s_0.Z = local_50;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dStack_48;
  auVar4._8_4_ = SUB84(dStack_38 + dVar9,0);
  auVar4._0_8_ = local_40 + dVar9;
  auVar4._12_4_ = (int)((ulonglong)(dStack_38 + dVar9) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 8) = auVar4;
  (this->Bounds).SphereRadius = dVar8 + (double)fVar7;
  GetLocalBoundsPadExtent((TVector<double> *)&local_78._s_0,this_00,fVar12);
  local_40 = (param_4->BoxExtent).field0_0x0._s_0.Y;
  dStack_38 = (param_4->BoxExtent).field0_0x0._s_0.Z;
  local_50 = (param_4->Origin).field0_0x0._s_0.Z;
  dStack_48 = (param_4->BoxExtent).field0_0x0._s_0.X;
  dVar8 = param_4->SphereRadius;
  dVar9 = (param_4->Origin).field0_0x0._s_0.Y;
  auVar10._0_8_ = local_78._s_0.Z * local_78._s_0.Z;
  auVar10._8_8_ = 0;
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_4->Origin).field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar9;
  auVar11._8_8_ = 0;
  auVar11._0_8_ =
       local_78._s_0.Y * local_78._s_0.Y + local_78._s_0.X * local_78._s_0.X + auVar10._0_8_;
  auVar11 = sqrtpd(auVar10,auVar11);
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = local_50;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dStack_48 + local_78._s_0.X;
  dVar9 = (param_5->field0_0x0)._s_0.X;
  dVar6 = (param_5->field0_0x0)._s_0.Y;
  pFVar3 = this->PrimitiveSceneInfo;
  auVar5._8_4_ = SUB84(dStack_38 + local_78._s_0.Z,0);
  auVar5._0_8_ = local_40 + local_78._s_0.Y;
  auVar5._12_4_ = (int)((ulonglong)(dStack_38 + local_78._s_0.Z) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 8) = auVar5;
  (this->LocalBounds).SphereRadius = dVar8 + auVar11._0_8_;
  (this->ActorPosition).field0_0x0._s_0.X = dVar9;
  (this->ActorPosition).field0_0x0._s_0.Y = dVar6;
  (this->ActorPosition).field0_0x0._s_0.Z = dVar2;
  if (pFVar3 != (FPrimitiveSceneInfo *)0x0) {
    pFVar3->bNeedsCachedReflectionCaptureUpdate = true;
    (**(code **)(this->Scene->_padding_ + 0x518))(this->Scene,this->PrimitiveSceneInfo);
  }
                    /* WARNING: Could not recover jumptable at 0x00014842627e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x130))(this,param_1);
  return;
}

// SetupInstanceSceneDataBuffers @ 148427260

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
FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers
          (FPrimitiveSceneProxy *this,FInstanceSceneDataBuffers *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->InstanceSceneDataBuffersInternal == (FInstanceSceneDataBuffers *)0x0) {
    this->InstanceSceneDataBuffersInternal = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InstanceSceneDataBuffersInternal == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                     ,0x514,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->InstanceSceneDataBuffersInternal = param_1;
  return;
}

// ShouldRenderCustomDepth @ 148427770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveSceneProxy::ShouldRenderCustomDepth(FPrimitiveSceneProxy *this)

{
  ECustomDepthMode EVar1;
  
  EVar1 = GetCustomDepthMode();
  if ((EVar1 != Disabled) && (this->bRenderCustomDepth != '\0')) {
    return true;
  }
  return false;
}

// UpdateInstances_RenderThread @ 14842ad30

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
FPrimitiveSceneProxy::UpdateInstances_RenderThread
          (FPrimitiveSceneProxy *this,FRHICommandListBase *param_1,
          TBoxSphereBounds<double,double> *param_2,TBoxSphereBounds<double,double> *param_3,
          TBoxSphereBounds<double,double> *param_4)

{
  double dVar1;
  TConsoleVariableData<int> *pTVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FInstanceDataBufferHeader local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId903,"FPrimitiveSceneProxy::UpdateInstances_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
               ,0x387);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId903);
  }
  `FPrimitiveSceneProxy::UpdateInstances_RenderThread'::__l2::<lambda_1>::operator()(local_res8);
  dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_2->BoxExtent).field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->Bounds).SphereRadius = param_2->SphereRadius;
  dVar1 = (param_3->Origin).field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_3->Origin).field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->BoxExtent).field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_3->Origin).field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->BoxExtent).field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = (param_3->BoxExtent).field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->LocalBounds).SphereRadius = param_3->SphereRadius;
  pTVar2 = CVarVelocityForceOutput.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar6) == 0) {
    lVar6 = (**(code **)(this->_padding_ + 0x230))(this);
    if (lVar6 == 0) {
      uVar3 = FInstanceDataBufferHeader::SinglePrimitiveHeader._8_4_;
      if (this->InstanceSceneDataBuffersInternal != (FInstanceSceneDataBuffers *)0x0) {
        FInstanceSceneDataBuffers::GetHeader
                  (this->InstanceSceneDataBuffersInternal,&local_18,(FAccessTag)0x0);
        uVar3 = local_18._8_4_;
      }
    }
    else {
      local_18._0_8_ = *(undefined8 *)(lVar6 + 8);
      uVar3 = *(uint *)(lVar6 + 0x10);
    }
    local_18._8_4_ = uVar3;
    if ((local_18._8_4_ & 4) == 0) {
      bVar5 = 0;
      goto LAB_14842ae6f;
    }
  }
  bVar5 = 0x80;
LAB_14842ae6f:
  this->bAlwaysHasVelocity = '\0';
  this->field_0x82 = this->field_0x82 | bVar5;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateInstances_RenderThread @ 14842aea0

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
FPrimitiveSceneProxy::UpdateInstances_RenderThread
          (FPrimitiveSceneProxy *this,FRHICommandListBase *param_1,
          TBoxSphereBounds<double,double> *param_2,TBoxSphereBounds<double,double> *param_3)

{
  double dVar1;
  TConsoleVariableData<int> *pTVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  bool bVar7;
  FInstanceDataBufferHeader local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId914,"FPrimitiveSceneProxy::UpdateInstances_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
               ,0x392);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId914);
  }
  dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_2->BoxExtent).field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->Bounds).SphereRadius = param_2->SphereRadius;
  dVar1 = (param_3->Origin).field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_3->Origin).field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->BoxExtent).field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_3->Origin).field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->BoxExtent).field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = (param_3->BoxExtent).field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->LocalBounds).SphereRadius = param_3->SphereRadius;
  pTVar2 = CVarVelocityForceOutput.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar6) == 0) {
    lVar6 = (**(code **)(this->_padding_ + 0x230))(this);
    if (lVar6 == 0) {
      uVar3 = FInstanceDataBufferHeader::SinglePrimitiveHeader._8_4_;
      if (this->InstanceSceneDataBuffersInternal != (FInstanceSceneDataBuffers *)0x0) {
        FInstanceSceneDataBuffers::GetHeader
                  (this->InstanceSceneDataBuffersInternal,&local_18,(FAccessTag)0x0);
        uVar3 = local_18._8_4_;
      }
    }
    else {
      local_18._0_8_ = *(undefined8 *)(lVar6 + 8);
      uVar3 = *(uint *)(lVar6 + 0x10);
    }
    local_18._8_4_ = uVar3;
    if ((local_18._8_4_ & 4) == 0) {
      bVar5 = 0;
      goto LAB_14842afd5;
    }
  }
  bVar5 = 0x80;
LAB_14842afd5:
  this->bAlwaysHasVelocity = '\0';
  this->field_0x82 = this->field_0x82 | bVar5;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateUniformBuffer @ 14842ce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FPrimitiveSceneProxy::UpdateUniformBuffer(FPrimitiveSceneProxy *this,FRHICommandList *param_1)

{
  byte bVar1;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  float *pfVar7;
  FPrimitiveUniformShaderParameters *pFVar8;
  FPrimitiveUniformShaderParameters *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_7b8 [32];
  undefined1 local_798 [664];
  float local_500 [114];
  undefined8 local_338 [100];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  if (this->bVFRequiresPrimitiveUniformBuffer != '\0') {
    memset((FPrimitiveUniformShaderParametersBuilder *)local_798,0,0x460);
    pfVar7 = &(((FPrimitiveUniformShaderParametersBuilder *)local_798)->Parameters).
              CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
    local_798._368_8_ = ___xmm_3f800000000000000000000000000000;
    local_798._376_8_ = _UNK_150689648;
    lVar10 = 9;
    local_798._448_8_ = ___xmm_3f800000000000000000000000000000;
    local_798._456_8_ = _UNK_150689648;
    do {
      ((TVector4<float>_u_0_s_0 *)(pfVar7 + -2))->X = 0.0;
      ((TVector4<float>_u_0_s_0 *)(pfVar7 + -2))->Y = 0.0;
      *pfVar7 = 0.0;
      pfVar7[1] = 1.0;
      pfVar7 = pfVar7 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    BuildUniformShaderParameters(this,(FPrimitiveUniformShaderParametersBuilder *)local_798);
    pFVar8 = FPrimitiveUniformShaderParametersBuilder::Build
                       ((FPrimitiveUniformShaderParametersBuilder *)local_798);
    lVar10 = 6;
    puVar5 = local_338;
    do {
      puVar11 = puVar5;
      pFVar9 = pFVar8;
      uVar4 = *(undefined8 *)&pFVar9->NumInstanceSceneDataEntries;
      pFVar8 = (FPrimitiveUniformShaderParameters *)((pFVar9->RelativeWorldToLocal).M + 2);
      *puVar11 = *(undefined8 *)pFVar9;
      puVar11[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)&(pFVar9->PositionHigh).field0_0x0 + 8);
      puVar11[2] = *(undefined8 *)&(pFVar9->PositionHigh).field0_0x0;
      puVar11[3] = uVar4;
      uVar4 = *(undefined8 *)((pFVar9->LocalToRelativeWorld).M[0] + 2);
      puVar11[4] = *(undefined8 *)(pFVar9->LocalToRelativeWorld).M[0];
      puVar11[5] = uVar4;
      uVar4 = *(undefined8 *)((pFVar9->LocalToRelativeWorld).M[1] + 2);
      puVar11[6] = *(undefined8 *)(pFVar9->LocalToRelativeWorld).M[1];
      puVar11[7] = uVar4;
      uVar4 = *(undefined8 *)((pFVar9->LocalToRelativeWorld).M[2] + 2);
      puVar11[8] = *(undefined8 *)(pFVar9->LocalToRelativeWorld).M[2];
      puVar11[9] = uVar4;
      uVar4 = *(undefined8 *)((pFVar9->LocalToRelativeWorld).M[3] + 2);
      puVar11[10] = *(undefined8 *)(pFVar9->LocalToRelativeWorld).M[3];
      puVar11[0xb] = uVar4;
      uVar4 = *(undefined8 *)((pFVar9->RelativeWorldToLocal).M[0] + 2);
      puVar11[0xc] = *(undefined8 *)(pFVar9->RelativeWorldToLocal).M[0];
      puVar11[0xd] = uVar4;
      uVar4 = *(undefined8 *)((pFVar9->RelativeWorldToLocal).M[1] + 2);
      puVar11[0xe] = *(undefined8 *)(pFVar9->RelativeWorldToLocal).M[1];
      puVar11[0xf] = uVar4;
      lVar10 = lVar10 + -1;
      puVar5 = puVar11 + 0x10;
    } while (lVar10 != 0);
    uVar4 = *(undefined8 *)((pFVar9->RelativeWorldToLocal).M[2] + 2);
    puVar11[0x10] = *(undefined8 *)pFVar8;
    puVar11[0x11] = uVar4;
    uVar4 = *(undefined8 *)((pFVar9->RelativeWorldToLocal).M[3] + 2);
    puVar11[0x12] = *(undefined8 *)(pFVar9->RelativeWorldToLocal).M[3];
    puVar11[0x13] = uVar4;
    if (this->UniformBuffer == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxy.cpp"
                         ,0x2d7,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TVar2 = this->UniformBuffer;
    if (TVar2 != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
      bVar1 = param_1->field_0x6a;
      if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (param_1->field_0x6a == '\0') {
        FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
        (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,TVar2,local_338);
        FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,TVar2,local_338);
      }
    }
  }
  return;
}

// UpdateVisibleInLumenScene @ 14842d040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FPrimitiveSceneProxy::UpdateVisibleInLumenScene(FPrimitiveSceneProxy *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  byte bVar8;
  int *piVar9;
  longlong lVar10;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar9 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)
               (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.Lumen.HardwareRayTracing",1);
      pTVar7 = (TConsoleVariableData<int> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      LumenUseHardwareRayTracingCVar = pTVar7;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar9 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)
               (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.LumenScene.FarField",1);
      pTVar7 = (TConsoleVariableData<int> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      LumenUseFarFieldCVar = pTVar7;
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar9 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)
               (**(code **)((longlong)*pIVar5 + 0xc0))
                         (pIVar5,L"r.LumenScene.FarField.OcclusionOnly",1);
      pTVar7 = (TConsoleVariableData<int> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      LumenUseFarFieldOcclusionOnlyCVar = pTVar7;
      _Init_thread_footer(&::_TSS2);
    }
  }
  bVar1 = IsRayTracingEnabled();
  pTVar7 = LumenUseHardwareRayTracingCVar;
  if ((bVar1) &&
     ((GRHIGlobals.RayTracing.SupportsShaders != false ||
      (GRHIGlobals.RayTracing.SupportsInlineRayTracing != false)))) {
    bVar1 = IsInParallelGameThread();
    lVar10 = 4;
    if (bVar1) {
LAB_14842d0e5:
      lVar4 = 0;
    }
    else {
      bVar1 = IsInGameThread();
      if (bVar1) goto LAB_14842d0e5;
      lVar4 = 4;
    }
    if (*(int *)((longlong)pTVar7->ShadowedValue + lVar4) == 0) goto LAB_14842d1c6;
    bVar1 = false;
    bVar8 = this->bAffectDynamicIndirectLighting;
    bVar2 = IsRayTracingAllowed();
    if (!bVar2) goto LAB_14842d204;
    cVar3 = (**(code **)(this->_padding_ + 0x68))(this);
    pTVar7 = LumenUseFarFieldCVar;
    if (cVar3 == '\0') goto LAB_14842d204;
    if ((this->bVisibleInRayTracing == '\0') ||
       ((this->DrawInGame == '\0' && (this->bAffectIndirectLightingWhileHidden == '\0')))) {
      if (!this->bRayTracingFarField) goto LAB_14842d204;
      bVar1 = IsInParallelGameThread();
      if (bVar1) {
LAB_14842d163:
        lVar4 = 0;
      }
      else {
        bVar1 = IsInGameThread();
        if (bVar1) goto LAB_14842d163;
        lVar4 = 4;
      }
      bVar1 = false;
      if (*(int *)((longlong)pTVar7->ShadowedValue + lVar4) != 0) goto LAB_14842d171;
    }
    else {
LAB_14842d171:
      bVar1 = true;
    }
    pTVar7 = LumenUseFarFieldOcclusionOnlyCVar;
    if (!this->bRayTracingFarField) goto LAB_14842d204;
    bVar2 = IsInParallelGameThread();
    if (bVar2) {
LAB_14842d19d:
      lVar10 = 0;
    }
    else {
      bVar2 = IsInGameThread();
      if (bVar2) goto LAB_14842d19d;
    }
    if (*(int *)((longlong)pTVar7->ShadowedValue + lVar10) == 0) goto LAB_14842d204;
  }
  else {
LAB_14842d1c6:
    bVar1 = false;
    bVar8 = this->bAffectDynamicIndirectLighting;
    bVar2 = DoesProjectSupportDistanceFields();
    if ((((bVar2) && (this->bAffectDistanceFieldLighting != '\0')) &&
        (this->bSupportsDistanceFieldRepresentation != '\0' ||
         this->bSupportsHeightfieldRepresentation != '\0')) &&
       ((this->DrawInGame != '\0' || (this->bAffectIndirectLightingWhileHidden != '\0')))) {
      bVar1 = true;
    }
LAB_14842d204:
    if ((bVar8 != 0) && (bVar1)) {
      bVar8 = 4;
      goto LAB_14842d1a9;
    }
  }
  bVar8 = 0;
LAB_14842d1a9:
  this->bVisibleInLumenScene = '\0';
  this->field_0x7c = this->field_0x7c | bVar8;
  return;
}

// UseEditorCompositing @ 14842dc40

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
FPrimitiveSceneProxy::UseEditorCompositing(FPrimitiveSceneProxy *this,FSceneView *param_1)

{
  return false;
}

// UseSingleSampleShadowFromStationaryLights @ 14842dc50

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
FPrimitiveSceneProxy::UseSingleSampleShadowFromStationaryLights(FPrimitiveSceneProxy *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarForceSingleSampleShadowingFromStationary.Ref;
  if (this->bSingleSampleShadowFromStationaryLights == '\0') {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if ((pTVar2->ShadowedValue[1] == 0) && (this->LightmapType != ForceVolumetric)) {
      return false;
    }
  }
  return true;
}

// VerifyUsedMaterial @ 14842de00

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
FPrimitiveSceneProxy::VerifyUsedMaterial(FPrimitiveSceneProxy *this,FMaterialRenderProxy *param_1)

{
  return true;
}

// WouldSetTransformBeRedundant_AnyThread @ 14842de10

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
FPrimitiveSceneProxy::WouldSetTransformBeRedundant_AnyThread
          (FPrimitiveSceneProxy *this,TMatrix<double> *param_1,
          TBoxSphereBounds<double,double> *param_2,TBoxSphereBounds<double,double> *param_3,
          TVector<double> *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  TBoxSphereBounds<double,double> *pTVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  TBoxSphereBounds<double,double> local_78 [2];
  
  if ((((param_4->field0_0x0)._s_0.X == (this->ActorPosition).field0_0x0._s_0.X) &&
      ((param_4->field0_0x0)._s_0.Y == (this->ActorPosition).field0_0x0._s_0.Y)) &&
     ((param_4->field0_0x0)._s_0.Z == (this->ActorPosition).field0_0x0._s_0.Z)) {
    fVar7 = (float)((uint)(this->MinMaxMaterialDisplacement).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fVar9 = (this->MinMaxMaterialDisplacement).field0_0x0._s_0.Y;
    if (fVar7 <= fVar9) {
      fVar7 = fVar9;
    }
    if ((this->bEvaluateWorldPositionOffset == '\x01' &&
         this->bAnyMaterialHasWorldPositionOffset == '\x01') ||
       (this->bAnyMaterialAlwaysEvaluatesWorldPositionOffset != '\0')) {
      fVar9 = this->MaxWPOExtent;
    }
    else {
      fVar9 = 0.0;
    }
    fVar9 = fVar9 + fVar7;
    pTVar3 = PadLocalBounds(local_78,param_3,param_1,fVar9);
    if ((((pTVar3->Origin).field0_0x0._s_0.X == (this->LocalBounds).Origin.field0_0x0._s_0.X) &&
        ((pTVar3->Origin).field0_0x0._s_0.Y == (this->LocalBounds).Origin.field0_0x0._s_0.Y)) &&
       (((pTVar3->Origin).field0_0x0._s_0.Z == (this->LocalBounds).Origin.field0_0x0._s_0.Z &&
        (((((pTVar3->BoxExtent).field0_0x0._s_0.X == (this->LocalBounds).BoxExtent.field0_0x0._s_0.X
           && ((pTVar3->BoxExtent).field0_0x0._s_0.Y ==
               (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y)) &&
          ((pTVar3->BoxExtent).field0_0x0._s_0.Z == (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z)
          ) && (pTVar3->SphereRadius == (this->LocalBounds).SphereRadius)))))) {
      dVar8 = (double)fVar9;
      if ((((param_2->Origin).field0_0x0._s_0.X == (this->Bounds).Origin.field0_0x0._s_0.X) &&
          ((param_2->Origin).field0_0x0._s_0.Y == (this->Bounds).Origin.field0_0x0._s_0.Y)) &&
         (((param_2->Origin).field0_0x0._s_0.Z == (this->Bounds).Origin.field0_0x0._s_0.Z &&
          (((dVar8 + (param_2->BoxExtent).field0_0x0._s_0.X ==
             (this->Bounds).BoxExtent.field0_0x0._s_0.X &&
            (dVar8 + (param_2->BoxExtent).field0_0x0._s_0.Y ==
             (this->Bounds).BoxExtent.field0_0x0._s_0.Y)) &&
           ((dVar8 + (param_2->BoxExtent).field0_0x0._s_0.Z ==
             (this->Bounds).BoxExtent.field0_0x0._s_0.Z &&
            (param_2->SphereRadius + (double)(fVar9 * __real_3fddb3d7) ==
             (this->Bounds).SphereRadius)))))))) {
        lVar6 = 0;
        lVar2 = 0x110 - (longlong)param_1;
        do {
          lVar5 = 0;
          pdVar4 = (double *)param_1;
          do {
            if (*pdVar4 != *(double *)((longlong)pdVar4 + (longlong)this + lVar2)) {
              return false;
            }
            lVar5 = lVar5 + 1;
            pdVar4 = pdVar4 + 1;
          } while (lVar5 < 4);
          lVar6 = lVar6 + 1;
          param_1 = (TMatrix<double> *)((longlong)param_1 + 0x20);
        } while (lVar6 < 4);
        return true;
      }
    }
  }
  return false;
}

// operator() @ 15052aa90

bool __thiscall
`FPrimitiveSceneProxy::UpdateInstances_RenderThread'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8836359629098189704>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8836359629098189704>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

