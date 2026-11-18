// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FPrimitiveSceneProxyDesc @ 1483e4170

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
          (FPrimitiveSceneProxyDesc *this,UPrimitiveComponent *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FLightingChannels *pFVar3;
  FLightingChannels *pFVar4;
  uint uVar5;
  
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->Component = (UObject *)0x0;
  this->Owner = (UObject *)0x0;
  pFVar4 = &this->LightingChannels;
  pFVar4->bChannel0 = '\x01';
  pFVar4->bChannel2 = '\0';
  pFVar4->bChannel1 = '\0';
  this->World = (UWorld *)0x0;
  (this->RuntimeVirtualTextures).DataPtr = (URuntimeVirtualTexture **)0x0;
  puVar2 = &this->field_0x74;
  this->bIsBeingMovedByEditor = 0;
  this->bShouldRenderProxyFallbackToDefaultMaterial = 0;
  this->bShadowIndirectOnly = 0;
  this->bIsPrecomputedLightingValid = 0;
  this->bHasValidSettingsForStaticLighting = 0;
  this->bHasStaticLighting = 0;
  this->bIsInstancedStaticMesh = 0;
  this->bIsOwnerEditorOnly = 0;
  this->bSupportsWorldPositionOffsetVelocity = 1;
  this->bIsHiddenEd = 0;
  this->bIsHidden = 0;
  this->bCollisionEnabled = 0;
  this->bWantsEditorEffects = 0;
  this->bShouldRenderSelected = 0;
  this->bIndividuallySelected = 0;
  this->bSelected = 0;
  this->bIsVisibleEditor = 1;
  this->bIsVisible = 1;
  this->bLumenHeightfield = 0;
  this->bIsFirstPersonWorldSpaceRepresentation = 0;
  this->bIsFirstPerson = 0;
  this->bHoldout = 0;
  this->bRayTracingFarField = 0;
  this->bForceMipStreaming = 0;
  this->bHiddenInSceneCapture = 0;
  this->bVisibleInSceneCaptureOnly = 0;
  this->bRenderCustomDepth = 0;
  this->bReceiveMobileCSMShadows = 1;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->ActorOwners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorOwners).ArrayNum = 0;
  (this->ActorOwners).ArrayMax = 0;
  this->CustomPrimitiveData = (FCustomPrimitiveData *)0x0;
  this->Scene = (FSceneInterface *)0x0;
  this->PrimitiveComponentInterface = (IPrimitiveComponent *)0x0;
  this->AdditionalStatObjectPtr = (UObject *)0x0;
  this->HiddenEditorViews = 0;
  this->TranslucencySortPriority = 0;
  this->TranslucencySortDistanceOffset = 0.0;
  this->CustomDepthStencilValue = 0;
  this->VirtualTextureMinCoverage = '\0';
  this->VirtualTextureCullMips = 0;
  this->VirtualTextureMainPassMaxDrawDistance = 0.0;
  this->ComponentId = 0;
  this->VisibilityId = 0;
  this->CachedMaxDrawDistance = 0.0;
  this->MinDrawDistance = 0.0;
  (this->MeshDrawCommandStatsCategory).ComparisonIndex = 0;
  (this->MeshDrawCommandStatsCategory).Number = 0;
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxyDesc__6B_;
  this->RayTracingGroupCullingPriority = CP_4_DEFAULT;
  this->ShadowCacheInvalidationBehavior = Auto;
  this->ViewOwnerDepthPriorityGroup = '\0';
  this->Mobility = '\x02';
  this->IndirectLightingCacheQuality = '\x01';
  this->DepthPriorityGroup = '\0';
  this->LightmapType = Default;
  this->CustomDepthStencilWriteMask = ERSM_Default;
  this->VirtualTextureRenderPassType = Exclusive;
  this->VirtualTextureLodBias = '\0';
  this->BoundsScale = 1.0;
  this->RayTracingGroupId = -1;
  puVar1 = &this->field_0x70;
  this->CastShadow = 0;
  this->bUseEditorCompositing = 0;
  this->bHasPerInstanceHitProxies = 0;
  this->bSelectable = 1;
  this->bUseAsOccluder = 0;
  this->bSingleSampleShadowFromStationaryLights = 0;
  this->bLightAttachmentsAsGroup = 0;
  this->bCastFarShadow = 0;
  this->bCastCinematicShadow = 0;
  this->bCastInsetShadow = 0;
  this->bSelfShadowOnly = 0;
  this->bCastShadowAsTwoSided = 0;
  this->bCastHiddenShadow = 0;
  this->bCastContactShadow = 1;
  this->bCastVolumetricTranslucentShadow = 0;
  this->bAffectDistanceFieldLighting = 1;
  this->bAffectIndirectLightingWhileHidden = 0;
  this->bAffectDynamicIndirectLighting = 1;
  this->bEmissiveLightSource = 0;
  this->bCastStaticShadow = 1;
  this->bCastDynamicShadow = 1;
  this->bTreatAsBackgroundForOcclusion = 0;
  this->bRenderInMainPass = 1;
  this->bRenderInDepthPass = 1;
  this->bVisibleInRayTracing = 1;
  this->bVisibleInRealTimeSkyCaptures = 1;
  this->bVisibleInReflectionCaptures = 1;
  this->bUseViewOwnerDepthPriorityGroup = 0;
  this->bLevelInstanceEditingState = 0;
  this->bOwnerNoSee = 0;
  this->bOnlyOwnerSee = 0;
  this->bReceivesDecals = 1;
  InitializeFromPrimitiveComponent(this,param_1);
  return this;
}

// FPrimitiveSceneProxyDesc @ 1483e4260

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
FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc(FPrimitiveSceneProxyDesc *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FLightingChannels *pFVar3;
  FLightingChannels *pFVar4;
  uint uVar5;
  
  this->RayTracingGroupCullingPriority = CP_4_DEFAULT;
  this->ShadowCacheInvalidationBehavior = Auto;
  this->ViewOwnerDepthPriorityGroup = '\0';
  this->Mobility = '\x02';
  this->Component = (UObject *)0x0;
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxyDesc__6B_;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->Owner = (UObject *)0x0;
  this->World = (UWorld *)0x0;
  pFVar4 = &this->LightingChannels;
  pFVar4->bChannel0 = '\x01';
  pFVar4->bChannel2 = '\0';
  pFVar4->bChannel1 = '\0';
  (this->RuntimeVirtualTextures).DataPtr = (URuntimeVirtualTexture **)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  puVar2 = &this->field_0x74;
  this->bIsBeingMovedByEditor = 0;
  this->bShouldRenderProxyFallbackToDefaultMaterial = 0;
  this->bShadowIndirectOnly = 0;
  this->bIsPrecomputedLightingValid = 0;
  this->bHasValidSettingsForStaticLighting = 0;
  this->bHasStaticLighting = 0;
  this->bIsInstancedStaticMesh = 0;
  this->bIsOwnerEditorOnly = 0;
  this->bSupportsWorldPositionOffsetVelocity = 1;
  this->bIsHiddenEd = 0;
  this->bIsHidden = 0;
  this->bCollisionEnabled = 0;
  this->bWantsEditorEffects = 0;
  this->bShouldRenderSelected = 0;
  this->bIndividuallySelected = 0;
  this->bSelected = 0;
  this->bIsVisibleEditor = 1;
  this->bIsVisible = 1;
  this->bLumenHeightfield = 0;
  this->bIsFirstPersonWorldSpaceRepresentation = 0;
  this->bIsFirstPerson = 0;
  this->bHoldout = 0;
  this->bRayTracingFarField = 0;
  this->bForceMipStreaming = 0;
  this->bHiddenInSceneCapture = 0;
  this->bVisibleInSceneCaptureOnly = 0;
  this->bRenderCustomDepth = 0;
  this->bReceiveMobileCSMShadows = 1;
  (this->ActorOwners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorOwners).ArrayNum = 0;
  (this->ActorOwners).ArrayMax = 0;
  this->CustomPrimitiveData = (FCustomPrimitiveData *)0x0;
  this->Scene = (FSceneInterface *)0x0;
  this->PrimitiveComponentInterface = (IPrimitiveComponent *)0x0;
  this->AdditionalStatObjectPtr = (UObject *)0x0;
  this->HiddenEditorViews = 0;
  this->TranslucencySortPriority = 0;
  this->TranslucencySortDistanceOffset = 0.0;
  this->CustomDepthStencilValue = 0;
  this->IndirectLightingCacheQuality = '\x01';
  this->DepthPriorityGroup = '\0';
  this->LightmapType = Default;
  this->CustomDepthStencilWriteMask = ERSM_Default;
  this->VirtualTextureRenderPassType = Exclusive;
  this->VirtualTextureLodBias = '\0';
  this->VirtualTextureMinCoverage = '\0';
  this->VirtualTextureCullMips = 0;
  this->VirtualTextureMainPassMaxDrawDistance = 0.0;
  this->ComponentId = 0;
  this->VisibilityId = 0;
  this->CachedMaxDrawDistance = 0.0;
  this->MinDrawDistance = 0.0;
  this->BoundsScale = 1.0;
  this->RayTracingGroupId = -1;
  (this->MeshDrawCommandStatsCategory).ComparisonIndex = 0;
  (this->MeshDrawCommandStatsCategory).Number = 0;
  puVar1 = &this->field_0x70;
  this->CastShadow = 0;
  this->bUseEditorCompositing = 0;
  this->bHasPerInstanceHitProxies = 0;
  this->bSelectable = 1;
  this->bUseAsOccluder = 0;
  this->bSingleSampleShadowFromStationaryLights = 0;
  this->bLightAttachmentsAsGroup = 0;
  this->bCastFarShadow = 0;
  this->bCastCinematicShadow = 0;
  this->bCastInsetShadow = 0;
  this->bSelfShadowOnly = 0;
  this->bCastShadowAsTwoSided = 0;
  this->bCastHiddenShadow = 0;
  this->bCastContactShadow = 1;
  this->bCastVolumetricTranslucentShadow = 0;
  this->bAffectDistanceFieldLighting = 1;
  this->bAffectIndirectLightingWhileHidden = 0;
  this->bAffectDynamicIndirectLighting = 1;
  this->bEmissiveLightSource = 0;
  this->bCastStaticShadow = 1;
  this->bCastDynamicShadow = 1;
  this->bTreatAsBackgroundForOcclusion = 0;
  this->bRenderInMainPass = 1;
  this->bRenderInDepthPass = 1;
  this->bVisibleInRayTracing = 1;
  this->bVisibleInRealTimeSkyCaptures = 1;
  this->bVisibleInReflectionCaptures = 1;
  this->bUseViewOwnerDepthPriorityGroup = 0;
  this->bLevelInstanceEditingState = 0;
  this->bOwnerNoSee = 0;
  this->bOnlyOwnerSee = 0;
  this->bReceivesDecals = 1;
  return this;
}

// ~FPrimitiveSceneProxyDesc @ 1483e8cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc(FPrimitiveSceneProxyDesc *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxyDesc__6B_;
  pFVar1 = (this->ActorOwners).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetUsedMaterials @ 14840b7b0

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
FPrimitiveSceneProxyDesc::GetUsedMaterials
          (FPrimitiveSceneProxyDesc *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  
  pUVar5 = this->Component;
  if (pUVar5 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14840b81b;
  }
  pUVar5 = (UObject *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxyDesc.cpp"
                     ,0xe5,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14840b81b:
                    /* WARNING: Could not recover jumptable at 0x00014840b837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar5 + 0x7f0))(pUVar5,param_1,param_2);
  return;
}

// InitializeFromPrimitiveComponent @ 14840e1f0

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
FPrimitiveSceneProxyDesc::InitializeFromPrimitiveComponent
          (FPrimitiveSceneProxyDesc *this,UPrimitiveComponent *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  TAtomic<FMinimalName> TVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  ELightmapType EVar8;
  uchar uVar9;
  ERuntimeVirtualTextureMainPassType EVar10;
  int iVar11;
  UClass *pUVar12;
  UWorld *pUVar13;
  FSceneInterface *pFVar14;
  UObject *pUVar15;
  FUObjectItem *pFVar16;
  FUObjectItem *pFVar17;
  TStatIdData *pTVar18;
  undefined8 *puVar19;
  FName FVar20;
  uint uVar21;
  uint uVar22;
  Type TVar23;
  longlong lVar24;
  uint uVar25;
  UPrimitiveComponent *pUVar26;
  float fVar27;
  undefined4 local_38 [2];
  undefined8 local_30;
  int iStack_28;
  undefined4 uStack_24;
  
  uVar25 = (param_1->CastShadow ^ this->CastShadow) & 1 ^ *(uint *)&this->field_0x70;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((byte)param_1->field_0x27c >> 5 ^ uVar25) & 2 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27d * 2 ^ uVar25) & 4 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  *(uint *)&this->field_0x70 = ((uint)(byte)param_1->field_0x27d << 3 ^ uVar25) & 8 ^ uVar25;
  bVar6 = UPrimitiveComponent::GetLevelInstanceEditingState(param_1);
  this->bLevelInstanceEditingState = 0;
  *(uint *)&this->field_0x70 = *(uint *)&this->field_0x70 | (uint)bVar6 << 4;
  uVar25 = (byte)param_1->field_0x27b >> 2 & 0x3fffffe0 | *(uint *)&this->field_0x70 & 0xffffffdf;
  this->bUseViewOwnerDepthPriorityGroup = param_1->bUseViewOwnerDepthPriorityGroup;
  uVar25 = ((uint)(byte)param_1->field_0x27c << 5 ^ uVar25) & 0x40 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27c << 5 ^ uVar25) & 0x80 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27c << 5 ^ uVar25) & 0x100 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27c << 4 ^ uVar25) & 0x200 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27c << 6 ^ uVar25) & 0x400 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27d << 9 ^ uVar25) & 0x800 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27e << 7 ^ uVar25) & 0x1000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27e << 7 ^ uVar25) & 0x2000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27e << 0xd ^ uVar25) & 0x4000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27e << 0xd ^ uVar25) & 0x8000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27e << 0xd ^ uVar25) & 0x10000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27e << 0xd ^ uVar25) & 0x20000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((byte)param_1->field_0x27e & 0xffffff80) << 0xb | uVar25 & 0xfffbffff;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27f << 0x13 ^ uVar25) & 0x80000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27f << 0xf ^ uVar25) & 0x100000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27f << 0xf ^ uVar25) & 0x200000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27f << 0x15 ^ uVar25) & 0x400000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27f << 0x14 ^ uVar25) & 0x800000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27f << 0x14 ^ uVar25) & 0x1000000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27f << 0x17 ^ uVar25) & 0x2000000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x280 << 0x1a ^ uVar25) & 0x4000000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x280 << 0x18 ^ uVar25) & 0x8000000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27d << 0x19 ^ uVar25) & 0x10000000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x27d << 0x19 ^ uVar25) & 0x20000000 ^ uVar25;
  *(uint *)&this->field_0x70 = uVar25;
  uVar21 = ((byte)param_1->field_0x27d & 0xffffff80) << 0x17;
  *(uint *)&this->field_0x70 = uVar21 | uVar25 & 0xbfffffff;
  *(uint *)&this->field_0x70 =
       ((byte)param_1->field_0x281 & 0xfffffff0) << 0x1b | uVar21 | uVar25 & 0x3fffffff;
  uVar25 = (param_1->bIsBeingMovedByEditor ^ this->bIsBeingMovedByEditor) & 1 ^
           *(uint *)&this->field_0x74;
  *(uint *)&this->field_0x74 = uVar25;
  uVar25 = ((byte)param_1->field_0x280 >> 1 ^ uVar25) & 2 ^ uVar25;
  *(uint *)&this->field_0x74 = uVar25;
  uVar25 = ((byte)param_1->field_0x281 >> 4 ^ uVar25) & 4 ^ uVar25;
  *(uint *)&this->field_0x74 = uVar25;
  uVar25 = (byte)param_1->field_0x281 >> 4 & 0xffffff8 | uVar25 & 0xfffffff7;
  *(uint *)&this->field_0x74 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x282 << 4 ^ uVar25) & 0x10 ^ uVar25;
  *(uint *)&this->field_0x74 = uVar25;
  uVar25 = ((byte)param_1->field_0x27d >> 1 ^ uVar25) & 0x20 ^ uVar25;
  *(uint *)&this->field_0x74 = uVar25;
  uVar25 = ((uint)(byte)param_1->field_0x282 << 5 ^ uVar25) & 0x40 ^ uVar25;
  *(uint *)&this->field_0x74 = uVar25;
  uVar22 = (byte)param_1->field_0x27c & 0xffffff80 | uVar25 & 0xffffff7f;
  uVar21 = 0;
  *(uint *)&this->field_0x74 = uVar22;
  uVar22 = ((uint)(byte)param_1->field_0x27d << 0xb ^ uVar22) & 0x10000 ^ uVar22;
  *(uint *)&this->field_0x74 = uVar22;
  uVar25 = uVar21;
  if (param_1->FirstPersonPrimitiveType == FirstPerson) {
    uVar25 = 0x100;
  }
  *(uint *)&this->field_0x74 = uVar25 | uVar22 & 0xfffffeff;
  if (param_1->FirstPersonPrimitiveType == WorldSpaceRepresentation) {
    uVar21 = 0x200;
  }
  uVar21 = uVar21 | uVar25 | uVar22 & 0xfffffcff;
  *(uint *)&this->field_0x74 = uVar21;
  *(uint *)&this->field_0x74 = ((uint)(byte)param_1->field_0x282 << 8 ^ uVar21) & 0x400 ^ uVar21;
  bVar7 = (**(code **)(*(longlong *)param_1 + 0x560))(param_1);
  uVar25 = ((uint)bVar7 << 0xb ^ *(uint *)&this->field_0x74) & 0x800 ^ *(uint *)&this->field_0x74;
  *(uint *)&this->field_0x74 = uVar25;
  *(uint *)&this->field_0x74 = ((uint)(byte)param_1->field_0x1a8 << 7 ^ uVar25) & 0x1000 ^ uVar25;
  bVar6 = UObject::IsSelected((UObject *)param_1);
  this->bSelected = 0;
  *(uint *)&this->field_0x74 = *(uint *)&this->field_0x74 | (uint)bVar6 << 0xd;
  bVar6 = UPrimitiveComponent::IsComponentIndividuallySelected(param_1);
  this->bIndividuallySelected = 0;
  *(uint *)&this->field_0x74 = *(uint *)&this->field_0x74 | (uint)bVar6 << 0xe;
  bVar7 = (**(code **)(*(longlong *)param_1 + 0x798))(param_1);
  *(uint *)&this->field_0x74 =
       *(uint *)&this->field_0x74 ^ ((uint)bVar7 << 0xf ^ *(uint *)&this->field_0x74) & 0x8000;
  iVar11 = (**(code **)(*(longlong *)param_1 + 0x5e0))();
  uVar2 = *(undefined4 *)&this->field_0x74;
  this->bCollisionEnabled = -(uint)(iVar11 != 0) >> 0x11;
  lVar24 = *(longlong *)&param_1->field_0xa8;
  if (lVar24 != 0) {
    *(uint *)&this->field_0x74 =
         (*(byte *)(lVar24 + 0x58) & 0xffffff80) << 0xb |
         uVar2 & 0xfff9ffff | -(uint)(iVar11 != 0) & 0x20000;
    if ((this->bOnlyOwnerSee != 0 ||
         (this->bOwnerNoSee != 0 || this->bUseViewOwnerDepthPriorityGroup != 0)) ||
       (ZPULL(uVar2,9,1) != 0)) {
      do {
        local_38[0] = *(undefined4 *)(lVar24 + 0xc);
        pFVar3 = (this->ActorOwners).AllocatorInstance.Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           (((FScriptContainerElement *)local_38 <
             pFVar3 + (longlong)(this->ActorOwners).ArrayMax * 4 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (this->ActorOwners).ArrayNum;
        if (iVar11 == (this->ActorOwners).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->ActorOwners).AllocatorInstance,
                              &(this->ActorOwners).ArrayMax);
        }
        (this->ActorOwners).ArrayNum = iVar11 + 1;
        *(undefined4 *)((this->ActorOwners).AllocatorInstance.Data + (longlong)iVar11 * 4) =
             local_38[0];
        lVar24 = *(longlong *)(lVar24 + 0x158);
      } while (lVar24 != 0);
    }
    bVar7 = (**(code **)(**(longlong **)&param_1->field_0xa8 + 0x120))();
    *(uint *)&this->field_0x74 =
         *(uint *)&this->field_0x74 ^ ((uint)bVar7 << 0x15 ^ *(uint *)&this->field_0x74) & 0x200000;
  }
  bVar7 = (**(code **)(*(longlong *)param_1 + 0x888))(param_1);
  *(uint *)&this->field_0x74 =
       *(uint *)&this->field_0x74 ^ ((uint)bVar7 << 0x14 ^ *(uint *)&this->field_0x74) & 0x100000;
  pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  iVar11 = (int)pUVar12->_padding_;
  pUVar26 = (UPrimitiveComponent *)0x0;
  if ((iVar11 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
      &pUVar12->_padding_)) {
    pUVar26 = param_1;
  }
  this->bIsInstancedStaticMesh = 0;
  *(uint *)&this->field_0x74 =
       *(uint *)&this->field_0x74 | -(uint)(pUVar26 != (UPrimitiveComponent *)0x0) & 0x400000;
  (this->Mobility).Value = param_1->field_0x1ab;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->TranslucencySortDistanceOffset = param_1->TranslucencySortDistanceOffset;
  EVar8 = UPrimitiveComponent::GetLightmapType(param_1);
  this->LightmapType = EVar8;
  (this->ViewOwnerDepthPriorityGroup).Value = (param_1->ViewOwnerDepthPriorityGroup).Value;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  this->CustomDepthStencilWriteMask = param_1->CustomDepthStencilWriteMask;
  this->LightingChannels = param_1->LightingChannels;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  (this->IndirectLightingCacheQuality).Value = (param_1->IndirectLightingCacheQuality).Value;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  uVar9 = (**(code **)(*(longlong *)param_1 + 0x7e8))(param_1);
  (this->DepthPriorityGroup).Value = uVar9;
  this->VirtualTextureLodBias = param_1->VirtualTextureLodBias;
  this->VirtualTextureCullMips = (int)param_1->VirtualTextureCullMips;
  this->VirtualTextureMinCoverage = param_1->VirtualTextureMinCoverage;
  (this->ComponentId).PrimIDValue = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
  this->VisibilityId = param_1->VisibilityId;
  this->CachedMaxDrawDistance = param_1->CachedMaxDrawDistance;
  this->MinDrawDistance = param_1->MinDrawDistance;
  this->BoundsScale = param_1->BoundsScale;
  iVar11 = UPrimitiveComponent::GetRayTracingGroupId(param_1);
  this->RayTracingGroupId = iVar11;
  bVar6 = UPrimitiveComponent::HasStaticLighting(param_1);
  this->bHasStaticLighting = 0;
  *(uint *)&this->field_0x74 = *(uint *)&this->field_0x74 | (uint)bVar6 << 0x17;
  bVar7 = (**(code **)(*(longlong *)param_1 + 0x7a8))(param_1,0);
  *(uint *)&this->field_0x74 =
       *(uint *)&this->field_0x74 ^ ((uint)bVar7 << 0x18 ^ *(uint *)&this->field_0x74) & 0x1000000;
  bVar7 = (**(code **)(*(longlong *)param_1 + 0x630))(param_1);
  *(uint *)&this->field_0x74 =
       *(uint *)&this->field_0x74 ^ ((uint)bVar7 << 0x19 ^ *(uint *)&this->field_0x74) & 0x2000000;
  bVar7 = (**(code **)(*(longlong *)param_1 + 0x8e0))(param_1);
  *(uint *)&this->field_0x74 =
       *(uint *)&this->field_0x74 ^ ((uint)bVar7 << 0x1a ^ *(uint *)&this->field_0x74) & 0x4000000;
  this->Component = (UObject *)param_1;
  this->Owner = *(UObject **)&param_1->field_0xa8;
  pUVar13 = *(UWorld **)&param_1->field_0xb0;
  if (pUVar13 == (UWorld *)0x0) {
    pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  this->World = pUVar13;
  this->CustomPrimitiveData = &param_1->CustomPrimitiveDataInternal;
  pFVar14 = UActorComponent::GetScene((UActorComponent *)param_1);
  this->Scene = pFVar14;
  this->PrimitiveComponentInterface = (IPrimitiveComponent *)&param_1->PrimitiveComponentInterface;
  if (pFVar14 == (FSceneInterface *)0x0) {
    TVar23 = Num;
  }
  else {
    TVar23 = pFVar14->FeatureLevel;
  }
  this->FeatureLevel = TVar23;
  bVar6 = UPrimitiveComponent::ShouldRenderProxyFallbackToDefaultMaterial(param_1);
  this->bShouldRenderProxyFallbackToDefaultMaterial = 0;
  *(uint *)&this->field_0x74 = *(uint *)&this->field_0x74 | (uint)bVar6 << 0x1b;
  pUVar15 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x480))(param_1);
  this->AdditionalStatObjectPtr = pUVar15;
  if (pUVar15 == (UObject *)0x0) {
    pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    TVar4 = ((pFVar16->StatID).StatIdPtr)->Name;
    if ((TVar4._0_4_ == 0) && (TVar4._4_4_ == 0)) {
      pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
      FUObjectItem::CreateStatID(pFVar17);
    }
    pTVar18 = (pFVar16->StatID).StatIdPtr;
  }
  else {
    pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar15->field_0xc);
    TVar4 = ((pFVar16->StatID).StatIdPtr)->Name;
    if ((TVar4._0_4_ == 0) && (TVar4._4_4_ == 0)) {
      pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar15->field_0xc);
      FUObjectItem::CreateStatID(pFVar17);
    }
    pTVar18 = (pFVar16->StatID).StatIdPtr;
  }
  (this->StatId).StatIdPtr = pTVar18;
  puVar19 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x640))(param_1);
  local_30 = *puVar19;
  iStack_28 = *(int *)(puVar19 + 1);
  if ((iStack_28 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined4 *)&(this->RuntimeVirtualTextures).DataPtr = (undefined4)local_30;
  *(undefined4 *)((longlong)&(this->RuntimeVirtualTextures).DataPtr + 4) = local_30._4_4_;
  (this->RuntimeVirtualTextures).ArrayNum = iStack_28;
  *(undefined4 *)&(this->RuntimeVirtualTextures).field_0xc = uStack_24;
  EVar10 = (**(code **)(*(longlong *)param_1 + 0x648))(param_1);
  this->VirtualTextureRenderPassType = EVar10;
  fVar27 = (float)(**(code **)(*(longlong *)param_1 + 0x650))(param_1);
  this->VirtualTextureMainPassMaxDrawDistance = fVar27;
  FVar20 = UPrimitiveComponent::GetMeshDrawCommandStatsCategory(param_1);
  this->MeshDrawCommandStatsCategory = *(FName *)FVar20;
  return;
}

// GetWorld @ 1487a6d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPrimitiveSceneProxyDesc::GetWorld(FPrimitiveSceneProxyDesc *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  if (this->World != (UWorld *)0x0) {
    return this->World;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("World",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxyDesc.h"
                     ,0x10e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UWorld *)(*pcVar1)();
    return pUVar3;
  }
  return this->World;
}

