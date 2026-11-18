// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 77

// StaticClass @ 145ef5fb0

UClass * __cdecl ALandscapeProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeProxy",
               &Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton,
               StaticRegisterNativesALandscapeProxy,0x7f0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscapeProxy>,InternalVTableHelperCtorCaller<ALandscapeProxy>,
               aFStackX_8,APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton;
}

// ALandscapeProxy @ 145f020f0

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

ALandscapeProxy * __thiscall
ALandscapeProxy::ALandscapeProxy(ALandscapeProxy *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FLightmassPrimitiveSettings *pFVar2;
  FLightingChannels *pFVar3;
  FLightingChannels *pFVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  FLightingChannels FVar7;
  float fVar8;
  TIntPoint<int> TVar9;
  TVector<double>_u_0 local_28;
  
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->LOD0ScreenSize = 0.5;
  this->LODGroupKey = 0;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  (this->OriginalLandscapeGuid).A = 0;
  (this->OriginalLandscapeGuid).B = 0;
  (this->OriginalLandscapeGuid).C = 0;
  (this->OriginalLandscapeGuid).D = 0;
  (this->PerLODOverrideMaterials).ArrayNum = 0;
  (this->PerLODOverrideMaterials).ArrayMax = 0;
  (this->ScalableLOD0ScreenSize)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x8 = 0;
  (this->SplineComponent).field0_0x0.DebugPtr = (ULandscapeSplinesComponent *)0x0;
  (this->PerLODOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalableLOD0ScreenSize)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  this->bEnableNanite = false;
  this->bDisableRuntimeGrassMapGeneration = false;
  this->LOD0DistributionSetting = 1.25;
  this->LODDistributionSetting = 3.0;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x48 = 0;
  (this->ScalableLOD0DistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x20 = 0;
  (this->ScalableLOD0ScreenSize).Default = 0.5;
  (this->ScalableLOD0DistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x8 = 0;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x48 = 0;
  (this->ScalableLODDistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x20 = 0;
  (this->ScalableLOD0DistributionSetting).Default = 1.25;
  (this->ScalableLODDistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x8 = 0;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x48 = 0;
  (this->ScalableLODDistributionSetting).Default = 3.0;
  this->bUseScalableLODSettings = false;
  this->LODBlendRange = 0.1;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  this->bVirtualTextureRenderWithQuad = false;
  this->bVirtualTextureRenderWithQuadHQ = true;
  this->VirtualTextureNumLods = 6;
  this->VirtualTextureLodBias = 0;
  this->VirtualTextureRenderPassType = Always;
  (this->LandscapeComponents).ArrayNum = 0;
  (this->LandscapeComponents).ArrayMax = 0;
  (this->CollisionComponents).ArrayNum = 0;
  (this->CollisionComponents).ArrayMax = 0;
  (this->FoliageComponents).ArrayNum = 0;
  (this->FoliageComponents).ArrayMax = 0;
  (this->NaniteComponents).ArrayNum = 0;
  (this->NaniteComponents).ArrayMax = 0;
  *(undefined8 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x8 = 0;
  (this->DefaultPhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->LandscapeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->LandscapeHoleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteComponent_DEPRECATED).field0_0x0.DebugPtr = (ULandscapeNaniteComponent *)0x0;
  (this->NaniteComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->FoliageCache).CachedGrassComps.Elements = 0;
  *(undefined8 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x34 = 0;
  (this->FoliageCache).CachedGrassComps.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FoliageCache).CachedGrassComps.HashSize = 0;
  pFVar2->bUseTwoSidedLighting = 0;
  pFVar2->bUseVertexNormalForHemisphereGather = 0;
  pFVar2->bUseEmissiveForStaticLighting = 0;
  pFVar2->bShadowIndirectOnly = 0;
  (this->GrassTypeSummary).MaxInstanceDiscardDistance = 1.7976931348623157e+308;
  (this->AsyncFoliageTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncFoliageTasks).ArrayNum = 0;
  (this->AsyncFoliageTasks).ArrayMax = 0;
  pFVar4 = &this->LightingChannels;
  pFVar4->bChannel0 = '\x01';
  pFVar4->bChannel2 = '\0';
  pFVar4->bChannel1 = '\0';
  this->GrassTypesMaxDiscardDistance = 0.0;
  (this->GrassTypeSummary).LandscapeComponentCount = -1;
  (this->GrassTypeSummary).bHasAnyGrass = true;
  this->NonNaniteVirtualShadowMapConstantDepthBias = 150.0;
  this->NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold = 250.0;
  this->NonNaniteVirtualShadowMapInvalidationScreenSizeLimit = 0.2;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  this->bIsLandscapeActorRegisteredWithLandscapeInfo = false;
  fVar8 = __real_41200000;
  this->bIsRegisteredWithSubsystem = false;
  (this->RegisteredToSubsystem).field0_0x0.DebugPtr = (ULandscapeSubsystem *)0x0;
  *(undefined4 *)&(this->HadLayersContentAtPostLoadTime).bIsSet = 0;
  *(undefined8 *)&this->TargetLayers = 0;
  *(undefined8 *)&(this->TargetLayers).field_0x8 = 0;
  *(undefined8 *)&(this->TargetLayers).field_0x20 = 0;
  this->bHasLayersContent_DEPRECATED = false;
  this->bStripGrassWhenCookedClient = false;
  this->bStripGrassWhenCookedServer = false;
  *(undefined4 *)&(this->TargetLayers).field_0x28 = 0;
  *(undefined4 *)&(this->TargetLayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetLayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetLayers).field_0x34 = 0;
  *(undefined8 *)&(this->TargetLayers).field_0x40 = 0;
  *(undefined4 *)&(this->TargetLayers).field_0x48 = 0;
  TVar9 = UE::Math::TIntPoint<int>::ZeroValue;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xf7;
  (this->SectionBase).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)TVar9.field0_0x0;
  this->bHasEditLayersOnLoad = false;
  AActor::SetNetUpdateFrequency((AActor *)this,fVar8);
  AActor::SetHidden((AActor *)this,false);
  AActor::SetReplicatingMovement((AActor *)this,false);
  AActor::SetCanBeDamaged((AActor *)this,false);
  local_28._s_0.Y = _UNK_151199de8;
  local_28._s_0.X = ___xmm_40600000000000004060000000000000;
  this->CastShadow = '\x01';
  this->bCastStaticShadow = '\x01';
  this->bCastDynamicShadow = '\x01';
  this->bCastContactShadow = '\x01';
  this->bCastFarShadow = 1;
  this->bCastHiddenShadow = '\0';
  this->bCastShadowAsTwoSided = 0;
  this->bHoldout = '\0';
  local_28._s_0.Z = __real_4070000000000000;
  puVar6 = &this->field_0x584;
  this->bAffectDistanceFieldLighting = '\x01';
  this->bAffectIndirectLightingWhileHidden = '\0';
  this->bAffectDynamicIndirectLighting = '\x01';
  USceneComponent::SetRelativeScale3D
            ((USceneComponent *)this->_padding_,(TVector<double> *)&local_28._s_0);
  *(undefined1 *)(this->_padding_ + 0x1ab) = 0;
  this->bCastStaticShadow = '\x01';
  this->StaticLightingResolution = 1.0;
  this->StreamingDistanceMultiplier = 1.0;
  this->MaxLODLevel = -1;
  this->bUseDynamicMaterialInstance = false;
  this->ShadowCacheInvalidationBehavior = Auto;
  this->bUsedForNavigation = 1;
  this->bFillCollisionUnderLandscapeForNavmesh = 0;
  FBodyInstance::SetCollisionProfileName
            (&this->BodyInstance,UCollisionProfile::BlockAll_ProfileName);
  this->bGenerateOverlapEvents = 0;
  this->FrameOffsetForTickInterval = FrameOffsetForTickIntervalInc;
  FrameOffsetForTickIntervalInc = FrameOffsetForTickIntervalInc + 1;
  return this;
}

// ~ALandscapeProxy @ 145f03aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::~ALandscapeProxy(ALandscapeProxy *this)

{
  int *piVar1;
  TArray<FAsyncTask<FAsyncGrassTask>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FAsyncTaskBase *this_00;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  pTVar2 = &this->AsyncFoliageTasks;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  uVar9 = 0;
  if (0 < (this->AsyncFoliageTasks).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->AsyncFoliageTasks).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
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
      this_00 = *(FAsyncTaskBase **)((pTVar2->AllocatorInstance).Data + lVar10);
      FAsyncTaskBase::EnsureCompletion(this_00,true,false);
      FAsyncTaskBase::CheckIdle(this_00);
      if (this_00 != (FAsyncTaskBase *)0x0) {
        (**(code **)(this_00->_padding_ + 0x28))(this_00,1);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < (this->AsyncFoliageTasks).ArrayNum);
  }
  piVar1 = &(this->AsyncFoliageTasks).ArrayMax;
  (this->AsyncFoliageTasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  *(undefined4 *)&(this->TargetLayers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TargetLayers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLandscapeTargetLayerSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLandscapeTargetLayerSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLandscapeTargetLayerSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetLayers);
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->FoliageCache).CachedGrassComps.HashSize = 0;
  FVar5 = (this->FoliageCache).CachedGrassComps.Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FoliageCache);
  pFVar4 = (this->NaniteComponents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->FoliageComponents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CollisionComponents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->LandscapeComponents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x48 = 0;
  pvVar3 = *(void **)&(this->ScalableLODDistributionSetting).PerQuality.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ScalableLODDistributionSetting).PerQuality);
  pvVar3 = (void *)(this->ScalableLODDistributionSetting)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x48 = 0;
  pvVar3 = *(void **)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ScalableLOD0DistributionSetting).PerQuality);
  pvVar3 = (void *)(this->ScalableLOD0DistributionSetting)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x48 = 0;
  pvVar3 = *(void **)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ScalableLOD0ScreenSize).PerQuality);
  pvVar3 = (void *)(this->ScalableLOD0ScreenSize)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar4 = (this->PerLODOverrideMaterials).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ILandscapeSplineInterface__6B_;
  APartitionActor::~APartitionActor((APartitionActor *)this);
  return;
}

// AddReferencedObjects @ 145f08a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ALandscapeProxy::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  CastChecked<ALandscapeProxy,UObject>(param_1);
  AActor::AddReferencedObjects(param_1,param_2);
  return;
}

// AreNaniteComponentsValid @ 145f08cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ALandscapeProxy::AreNaniteComponentsValid(ALandscapeProxy *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->NaniteComponents).ArrayNum;
  if (iVar2 != 0) {
    pFVar4 = (this->NaniteComponents).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->NaniteComponents).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeNaniteComponent>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) {
        return true;
      }
      lVar3 = *(longlong *)pFVar4;
      if ((lVar3 == 0) ||
         (((*(uint *)(lVar3 + 0x65c) != param_1->D || *(uint *)(lVar3 + 0x658) != param_1->C) ||
          *(uint *)(lVar3 + 0x654) != param_1->B) || *(uint *)(lVar3 + 0x650) != param_1->A)) break;
      pFVar4 = pFVar4 + 8;
    }
  }
  return false;
}

// AuditNaniteMaterials @ 145f08fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ALandscapeProxy::AuditNaniteMaterials(ALandscapeProxy *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  int iVar3;
  UStaticMeshComponent *pUVar4;
  bool bVar5;
  UWorld *pUVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  FMaterialAudit local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7553,"ALandscapeProxy::AuditMaterials",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
               ,0x1d81);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7553);
  }
  pFVar7 = (this->NaniteComponents).AllocatorInstance.Data;
  iVar3 = (this->NaniteComponents).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->NaniteComponents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeNaniteComponent>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_148);
    }
    if (pFVar7 == pFVar1) {
      bVar5 = true;
      goto LAB_145f09130;
    }
    pUVar4 = *(UStaticMeshComponent **)pFVar7;
    if (pUVar4 == (UStaticMeshComponent *)0x0) goto LAB_145f09128;
    local_138.bCompatibleWithLumenCardSharing = '\0';
    local_138.bHasSky = '\0';
    local_138.bHasMasked = '\0';
    local_138.bHasAnyError = '\0';
    local_138.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.AssetName.Data.ArrayNum = 0;
    local_138.AssetName.Data.ArrayMax = 0;
    local_138.Entries.AllocatorInstance.SecondaryData =
         (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
    local_138.Entries.ArrayNum = 0;
    local_138.Entries.ArrayMax = 4;
    local_138.FallbackMaterial = (UMaterialInterface *)0x0;
    Nanite::AuditMaterials(pUVar4,&local_138,true);
    pUVar6 = AActor::GetWorld((AActor *)this);
    bVar5 = Nanite::IsMaskingAllowed(pUVar6,pUVar4->bForceNaniteForMasked);
    if (((local_138.bHasAnyError != 0) || (local_138.bHasSky != '\0')) ||
       ((!bVar5 && (local_138.bHasMasked != '\0')))) break;
    if (local_138.Entries.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
      FMemory::Free((void *)local_138.Entries.AllocatorInstance.SecondaryData);
    }
    if (local_138.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AssetName.Data.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 8;
  }
  if (local_138.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
    FMemory::Free((void *)local_138.Entries.AllocatorInstance.SecondaryData);
  }
  if (local_138.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AssetName.Data.AllocatorInstance.Data);
  }
LAB_145f09128:
  bVar5 = false;
LAB_145f09130:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// CreateLandscapeInfo @ 145f0b060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeInfo * __thiscall
ALandscapeProxy::CreateLandscapeInfo(ALandscapeProxy *this,bool param_1,bool param_2)

{
  UWorld *pUVar1;
  ULandscapeInfo *this_00;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  this_00 = ULandscapeInfo::FindOrCreate(pUVar1,&this->LandscapeGuid);
  ULandscapeInfo::RegisterActor(this_00,this,param_1,param_2);
  return this_00;
}

// EditorApplySpline @ 145f0bdd0

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
ALandscapeProxy::EditorApplySpline
          (ALandscapeProxy *this,USplineComponent *param_1,float param_2,float param_3,float param_4
          ,float param_5,float param_6,float param_7,int param_8,bool param_9,bool param_10,
          ULandscapeLayerInfoObject *param_11,FName param_12)

{
  return;
}

// EditorSetLandscapeMaterial @ 145f0be00

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
ALandscapeProxy::EditorSetLandscapeMaterial(ALandscapeProxy *this,UMaterialInterface *param_1)

{
  return;
}

// EnableNaniteComponents @ 145f0bfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::EnableNaniteComponents(ALandscapeProxy *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->NaniteComponents).AllocatorInstance.Data;
  iVar2 = (this->NaniteComponents).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->NaniteComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeNaniteComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(ULandscapeNaniteComponent **)pFVar3 != (ULandscapeNaniteComponent *)0x0) {
      ULandscapeNaniteComponent::SetEnabled(*(ULandscapeNaniteComponent **)pFVar3,param_1);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetHeightAtLocation @ 145f0f0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

TOptional<float> __thiscall
ALandscapeProxy::GetHeightAtLocation
          (ALandscapeProxy *this,TVector<double> *param_1,EHeightfieldSource param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  TIntPoint<int> TVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar15;
  FHeightField *this_00;
  undefined4 in_register_00000084;
  int in_R9D;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar40;
  undefined4 uVar41;
  undefined1 auVar39 [16];
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int iStack_1b4;
  double local_1a8;
  double dStack_1a0;
  TVector<double> local_198 [2];
  double local_168;
  undefined8 uStack_160;
  undefined1 local_138 [96];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  *(undefined1 *)((longlong)&param_1->field0_0x0 + 4) = 0;
  pdVar1 = (double *)CONCAT44(in_register_00000084,param_2);
  lVar13 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (lVar13 != 0) {
    pdVar14 = (double *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_138);
    uVar12 = _UNK_15061cc8c;
    uVar11 = _UNK_15061cc88;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_168 = pdVar1[2];
    dVar4 = *pdVar1;
    dVar5 = pdVar1[1];
    dVar37 = *pdVar14 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar40 = pdVar14[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar22 = dVar4 - pdVar14[4];
    dVar38 = dVar5 - pdVar14[5];
    uVar60 = (undefined4)((ulonglong)dVar38 >> 0x20);
    auVar27._8_4_ = SUB84(dVar40,0);
    auVar27._0_8_ = dVar37;
    uVar41 = (undefined4)((ulonglong)dVar40 >> 0x20);
    auVar27._12_4_ = uVar41;
    dVar63 = pdVar14[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar3 = pdVar14[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
    uStack_160 = 0;
    auVar57._8_4_ = SUB84(dVar38,0);
    auVar57._0_8_ = dVar22;
    auVar57._12_4_ = uVar60;
    dVar18 = local_168 - pdVar14[6];
    auVar52._8_4_ = SUB84(dVar3,0);
    auVar52._0_8_ = dVar63;
    auVar52._12_4_ = uVar42;
    auVar33._8_4_ = SUB84(dVar63,0);
    auVar33._0_8_ = auVar27._8_8_;
    auVar33._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
    auVar32._8_4_ = SUB84(dVar40,0);
    auVar32._0_8_ = dVar37;
    auVar32._12_4_ = uVar41;
    auVar46._8_4_ = SUB84(dVar38,0);
    auVar46._0_8_ = dVar22;
    auVar46._12_4_ = uVar60;
    auVar58._0_8_ = auVar57._8_8_ * dVar37 - auVar27._8_8_ * dVar22;
    auVar58._8_8_ = dVar18 * dVar40 - auVar33._8_8_ * dVar38;
    auVar23._8_4_ = SUB84(dVar3,0);
    auVar23._0_8_ = dVar63;
    auVar23._12_4_ = uVar42;
    auVar33 = blendpd(auVar32,auVar23,2);
    auVar48._8_4_ = SUB84(auVar58._8_8_,0);
    auVar48._0_8_ = auVar58._0_8_;
    auVar48._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = dVar18;
    auVar23 = blendpd(auVar46,auVar44,2);
    auVar24._0_8_ = auVar23._0_8_ * dVar63 - auVar33._0_8_ * dVar18;
    auVar24._8_8_ = auVar23._8_8_ * dVar3 - auVar33._8_8_ * 0.0;
    dVar37 = auVar48._8_8_ + auVar48._8_8_;
    dVar51 = auVar24._0_8_ + auVar24._0_8_;
    auVar23 = blendpd(auVar58,auVar24,2);
    uVar41 = (undefined4)((ulonglong)dVar51 >> 0x20);
    auVar29._8_4_ = SUB84(dVar51,0);
    auVar29._0_8_ = dVar37;
    auVar29._12_4_ = uVar41;
    auVar43._8_4_ = SUB84(dVar51,0);
    auVar43._0_8_ = dVar37;
    auVar43._12_4_ = uVar41;
    auVar59._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar59._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar44 = blendpd(auVar43,auVar59,2);
    local_1a8 = (double)(float)GlobalVectorConstants::SmallNumber.m128_u64[0];
    dStack_1a0 = (double)(float)((ulonglong)GlobalVectorConstants::SmallNumber._0_8_ >> 0x20);
    lVar16 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar14 + 0x44) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                *(uint *)(pdVar14 + 8) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= local_1a8);
    lVar17 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar14 + 0x4c) & _UNK_15061cc8c,
                                *(uint *)(pdVar14 + 9) & _UNK_15061cc88) <= dStack_1a0);
    auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar14 + 8));
    dVar18 = __real_3ff0000000000000 / (double)this->ComponentSizeQuads;
    dVar22 = dVar18 * (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar23._4_4_,
                                       ~(uint)lVar16 & auVar23._0_4_) *
                      (dVar37 * auVar52._8_8_ + dVar22 +
                      (auVar59._0_8_ * dVar40 - auVar29._8_8_ * dVar63));
    dVar18 = dVar18 * (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar23._12_4_,
                                       ~(uint)lVar17 & auVar23._8_4_) *
                      (dVar51 * dVar3 + dVar38 +
                      (auVar44._0_8_ * dVar63 - auVar59._0_8_ * auVar33._0_8_));
    local_1b8 = (int)ROUND((dVar22 + dVar22) - __real_3fe0000000000000) >> 1;
    iStack_1b4 = (int)ROUND((dVar18 + dVar18) - __real_3fe0000000000000) >> 1;
    TVar8.field0_0x0._s_0.Y = iStack_1b4;
    TVar8.field0_0x0._s_0.X = local_1b8;
    pTVar15 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                      *)(lVar13 + 0xa0),TVar8);
    if ((pTVar15 !=
         (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0) &&
       (lVar13 = *(longlong *)&pTVar15->field_0x8, lVar13 != 0)) {
      dVar4 = dVar4 - *(double *)(lVar13 + 0x210);
      dVar5 = dVar5 - *(double *)(lVar13 + 0x218);
      uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
      lVar16 = *(longlong *)(lVar13 + 0x5f0);
      auVar53._8_4_ = SUB84(dVar5,0);
      auVar53._0_8_ = dVar4;
      auVar53._12_4_ = uVar41;
      auVar25._8_4_ = SUB84(dVar5,0);
      auVar25._0_8_ = dVar4;
      auVar25._12_4_ = uVar41;
      dVar22 = local_168 - *(double *)(lVar13 + 0x220);
      dVar38 = *(double *)(lVar13 + 0x1f0) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar18 = *(double *)(lVar13 + 0x1f8) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar28._8_4_ = SUB84(dVar18,0);
      auVar28._0_8_ = dVar38;
      uVar41 = (undefined4)((ulonglong)dVar18 >> 0x20);
      auVar28._12_4_ = uVar41;
      auVar34._8_4_ = SUB84(dVar18,0);
      auVar34._0_8_ = dVar38;
      auVar34._12_4_ = uVar41;
      dVar63 = *(double *)(lVar13 + 0x200) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar3 = *(double *)(lVar13 + 0x208) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar19._8_4_ = SUB84(dVar63,0);
      auVar19._0_8_ = auVar28._8_8_;
      auVar19._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar22;
      auVar23 = blendpd(auVar25,auVar6,2);
      auVar54._0_8_ = auVar53._8_8_ * dVar38 - auVar28._8_8_ * dVar4;
      auVar54._8_8_ = dVar22 * dVar18 - auVar19._8_8_ * dVar5;
      auVar45._8_4_ = SUB84(auVar54._8_8_,0);
      auVar45._0_8_ = auVar54._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar63;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar44 = blendpd(auVar34,auVar2,2);
      auVar26._0_8_ = auVar23._0_8_ * dVar63 - auVar44._0_8_ * dVar22;
      auVar26._8_8_ = auVar23._8_8_ * dVar3 - auVar44._8_8_ * 0.0;
      dVar22 = auVar45._8_8_ + auVar45._8_8_;
      dVar38 = auVar26._0_8_ + auVar26._0_8_;
      auVar33 = blendpd(auVar54,auVar26,2);
      auVar23 = *(undefined1 (*) [16])(lVar13 + 0x230);
      uVar41 = (undefined4)((ulonglong)dVar38 >> 0x20);
      auVar20._8_4_ = SUB84(dVar38,0);
      auVar20._0_8_ = dVar22;
      auVar20._12_4_ = uVar41;
      auVar61._0_8_ = (double)CONCAT44(uVar10 & auVar23._4_4_,uVar9 & auVar23._0_4_);
      auVar61._8_4_ = uVar11 & auVar23._8_4_;
      auVar61._12_4_ = uVar12 & auVar23._12_4_;
      lVar17 = -(ulonglong)(auVar61._8_8_ <= dStack_1a0);
      auVar55._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar55._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      auVar39._8_4_ = SUB84(dVar38,0);
      auVar39._0_8_ = dVar22;
      auVar39._12_4_ = uVar41;
      auVar33 = blendpd(auVar39,auVar55,2);
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
      auVar62._0_8_ =
           (double)CONCAT44(~(uint)(-(ulonglong)(auVar61._0_8_ <= local_1a8) >> 0x20) &
                            auVar23._4_4_,
                            ~(uint)-(ulonglong)(auVar61._0_8_ <= local_1a8) & auVar23._0_4_);
      auVar62._8_4_ = ~(uint)lVar17 & auVar23._8_4_;
      auVar62._12_4_ = ~(uint)((ulonglong)lVar17 >> 0x20) & auVar23._12_4_;
      dVar22 = auVar62._0_8_ *
               (dVar22 * dVar3 + dVar4 + (auVar55._0_8_ * dVar18 - auVar20._8_8_ * dVar63));
      dVar63 = auVar62._8_8_ *
               (dVar38 * dVar3 + dVar5 + (auVar33._0_8_ * dVar63 - auVar55._0_8_ * auVar44._0_8_));
      auVar7._4_8_ = auVar23._8_8_;
      auVar7._0_4_ = (int)((ulonglong)dVar22 >> 0x20);
      auVar21._0_8_ = auVar7._0_8_ << 0x20;
      auVar21._8_4_ = SUB84(dVar63,0);
      auVar21._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
      if (lVar16 != 0) {
        if (in_R9D == 1) {
          this_00 = *(FHeightField **)(lVar16 + 0x38);
        }
        else {
          if (in_R9D != 2) {
            return (TOptional<float>)param_1;
          }
          this_00 = *(FHeightField **)(lVar16 + 0x30);
        }
        if (this_00 != (FHeightField *)0x0) {
          local_1a8 = (double)(float)dVar22;
          dStack_1a0 = (double)(float)auVar21._8_8_;
          dVar63 = Chaos::FHeightField::GetHeightAt(this_00,(TVector<double,2> *)&local_1a8);
          auVar23 = *(undefined1 (*) [16])(lVar13 + 0x200);
          auVar44 = *(undefined1 (*) [16])(lVar13 + 0x1f0);
          auVar33 = *(undefined1 (*) [16])(lVar13 + 0x1f0);
          auVar56._0_8_ = (double)(float)dVar63;
          auVar56._8_8_ = 0;
          dVar22 = auVar23._8_8_;
          auVar29 = blendpd(auVar33,auVar23,2);
          dVar38 = auVar23._0_8_;
          auVar46 = blendpd(ZEXT816(0),auVar56,2);
          auVar49._0_8_ = auVar33._0_8_ * 0.0 - auVar33._8_8_ * 0.0;
          auVar49._8_8_ = auVar56._0_8_ * auVar33._8_8_ - dVar38 * 0.0;
          auVar23 = blendpd(auVar44,auVar23,2);
          auVar47._0_8_ = auVar46._0_8_ * dVar38 - auVar29._0_8_ * auVar56._0_8_;
          auVar47._8_8_ = auVar46._8_8_ * dVar22 - auVar29._8_8_ * 0.0;
          dVar63 = auVar49._8_8_ + auVar49._8_8_;
          dVar3 = auVar47._0_8_ + auVar47._0_8_;
          uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
          auVar33 = blendpd(auVar49,auVar47,2);
          auVar50._0_8_ = auVar33._0_8_ + auVar33._0_8_;
          auVar50._8_8_ = auVar33._8_8_ + auVar33._8_8_;
          auVar35._8_4_ = SUB84(dVar3,0);
          auVar35._0_8_ = dVar63;
          auVar35._12_4_ = uVar41;
          auVar30._8_4_ = SUB84(dVar3,0);
          auVar30._0_8_ = dVar63;
          auVar30._12_4_ = uVar41;
          auVar33 = blendpd(auVar30,auVar50,2);
          auVar36._0_8_ = auVar35._8_8_ * auVar44._0_8_ - auVar44._8_8_ * dVar63;
          auVar36._8_8_ = auVar50._0_8_ * auVar44._8_8_ - dVar38 * dVar3;
          auVar31._0_8_ = auVar33._0_8_ * dVar38 - auVar23._0_8_ * auVar50._0_8_;
          auVar31._8_8_ = auVar33._8_8_ * dVar22 - auVar23._8_8_ * auVar50._8_8_;
          auVar23 = blendpd(auVar36,auVar31,2);
          if (local_198 != param_1) {
            *(float *)&param_1->field0_0x0 =
                 (float)(auVar23._0_8_ + dVar22 * auVar50._0_8_ + auVar56._0_8_ +
                        *(double *)(lVar13 + 0x220));
            *(undefined1 *)((longlong)&param_1->field0_0x0 + 4) = 1;
          }
        }
      }
    }
  }
  return (TOptional<float>)param_1;
}

// GetHeightValues @ 145f0f620

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

void __thiscall
ALandscapeProxy::GetHeightValues
          (ALandscapeProxy *this,int *param_1,int *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 local_148;
  undefined1 local_147 [3];
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  uint local_134;
  uint local_130;
  FScriptContainerElement *local_128;
  longlong local_120;
  FScriptContainerElement *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  undefined1 local_c8 [16];
  
  *param_1 = 0;
  *param_2 = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_3,0,Default);
  iVar21 = (this->LandscapeComponents).ArrayNum;
  if ((iVar21 != 0) && ((this->CollisionComponents).ArrayNum != 0)) {
    iVar19 = -0x7fffffff;
    pFVar20 = (this->LandscapeComponents).AllocatorInstance.Data;
    iVar14 = -0x7fffffff;
    iVar23 = 0x7fffffff;
    iVar17 = 0x7fffffff;
    pFVar18 = pFVar20 + (longlong)iVar21 * 8;
    while( true ) {
      local_140 = iVar23;
      local_13c = iVar17;
      if ((this->LandscapeComponents).ArrayNum != iVar21) {
        local_148 = 0;
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_148);
      }
      if (pFVar20 == pFVar18) break;
      lVar3 = *(longlong *)pFVar20;
      if (lVar3 == 0) {
        return;
      }
      iVar13 = *(int *)(lVar3 + 0x548);
      iVar2 = *(int *)(lVar3 + 0x54c);
      if (iVar13 < iVar23) {
        iVar23 = iVar13;
      }
      if (iVar2 < iVar17) {
        iVar17 = iVar2;
      }
      iVar13 = iVar13 + *(int *)(lVar3 + 0x550);
      if (iVar19 < iVar13) {
        iVar19 = iVar13;
      }
      iVar2 = *(int *)(lVar3 + 0x550) + iVar2;
      if (iVar14 < iVar2) {
        iVar14 = iVar2;
      }
      pFVar20 = pFVar20 + 8;
    }
    if (iVar23 != 0x7fffffff) {
      iVar21 = (iVar14 - iVar17) + 1;
      *param_1 = (iVar19 - iVar23) + 1;
      *param_2 = iVar21;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (param_3,iVar21 * *param_1,Default);
      dVar11 = __real_3f80000000000000;
      local_130 = (this->CollisionComponents).ArrayNum;
      uVar16 = (ulonglong)(int)local_130;
      pFVar18 = (this->CollisionComponents).AllocatorInstance.Data;
      local_118 = pFVar18 + uVar16 * 8;
      do {
        pFVar20 = local_118;
        local_128 = pFVar18;
        if ((this->CollisionComponents).ArrayNum != (int)uVar16) {
          local_147[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<ULandscapeHeightfieldCollisionComponent>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_147);
        }
        if (pFVar18 == pFVar20) {
          return;
        }
        lVar3 = *(longlong *)pFVar18;
        if (((lVar3 == 0) || (lVar4 = *(longlong *)(lVar3 + 0x5f0), local_120 = lVar4, lVar4 == 0))
           || (lVar5 = *(longlong *)(lVar4 + 0x30), lVar5 == 0)) {
          *param_1 = 0;
          *param_2 = 0;
          TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_3,0,Default);
          return;
        }
        iVar19 = 0;
        iVar14 = *(int *)(lVar3 + 0x558) - iVar23;
        local_110 = *(undefined8 *)(lVar3 + 0x230);
        uStack_108 = *(undefined8 *)(lVar3 + 0x238);
        iVar21 = *(int *)(lVar3 + 0x55c) - iVar17;
        uVar1 = *(ushort *)(lVar5 + 0x90);
        local_100 = SUB168(*(undefined1 (*) [16])(lVar3 + 0x240),0);
        dVar7 = local_100 * dVar11;
        uVar15 = (uint)*(ushort *)(lVar5 + 0x92);
        local_134 = (uint)*(ushort *)(lVar5 + 0x92);
        local_144 = iVar21;
        local_138 = iVar14;
        if (local_134 != 0) {
          do {
            iVar17 = 0;
            if (uVar1 != 0) {
              do {
                local_f8 = 0;
                uStack_f0 = 0;
                dVar24 = Chaos::FHeightField::GetHeight
                                   (*(FHeightField **)(lVar4 + 0x30),iVar19,iVar17);
                auVar26 = *(undefined1 (*) [16])(lVar3 + 0x1f0);
                dVar10 = *(double *)(lVar3 + 0x208);
                uVar22 = (iVar21 + iVar17) * *param_1 + iVar19 + iVar14;
                local_e8 = (double)(float)(dVar24 * (double)(float)dVar7);
                uVar15 = 0;
                if ((int)uVar22 < param_3->ArrayNum) {
                  uVar15 = ~uVar22 >> 0x1f;
                }
                local_c8 = *(undefined1 (*) [16])(lVar3 + 0x1f0);
                auVar32 = *(undefined1 (*) [16])(lVar3 + 0x200);
                dVar24 = auVar32._0_8_;
                auVar27 = blendpd(local_c8,auVar32,2);
                auVar35._0_8_ = local_c8._0_8_ * 0.0 - local_c8._8_8_ * 0.0;
                auVar35._8_8_ = local_e8 * local_c8._8_8_ - dVar24 * 0.0;
                auVar25._8_8_ = 0;
                auVar25._0_8_ = local_e8;
                auVar25 = blendpd(ZEXT816(0),auVar25,2);
                auVar29._0_8_ = auVar25._0_8_ * dVar24 - auVar27._0_8_ * local_e8;
                auVar29._8_8_ = auVar25._8_8_ * auVar32._8_8_ - auVar27._8_8_ * 0.0;
                auVar25 = blendpd(auVar35,auVar29,2);
                auVar36._0_8_ = auVar25._0_8_ + auVar25._0_8_;
                auVar36._8_8_ = auVar25._8_8_ + auVar25._8_8_;
                dVar8 = auVar35._8_8_ + auVar35._8_8_;
                dVar9 = auVar29._0_8_ + auVar29._0_8_;
                uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
                auVar30._8_4_ = SUB84(dVar9,0);
                auVar30._0_8_ = dVar8;
                auVar30._12_4_ = uVar33;
                auVar27._8_4_ = SUB84(dVar9,0);
                auVar27._0_8_ = dVar8;
                auVar27._12_4_ = uVar33;
                auVar25 = blendpd(auVar27,auVar36,2);
                auVar31._0_8_ = auVar30._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar8;
                auVar31._8_8_ = auVar36._0_8_ * auVar26._8_8_ - dVar24 * dVar9;
                auVar29 = blendpd(auVar26,auVar32,2);
                auVar26._8_4_ = SUB84(auVar31._8_8_,0);
                auVar26._0_8_ = auVar31._0_8_;
                auVar26._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
                auVar28._0_8_ = auVar25._0_8_ * dVar24 - auVar29._0_8_ * auVar36._0_8_;
                auVar28._8_8_ = auVar25._8_8_ * auVar32._8_8_ - auVar29._8_8_ * auVar36._8_8_;
                auVar32 = blendpd(auVar31,auVar28,2);
                local_d0 = auVar36._0_8_ * dVar10 + local_e8 + auVar32._0_8_ +
                           *(double *)(lVar3 + 0x220);
                dVar24 = dVar9 * dVar10 + auVar28._0_8_ + *(double *)(lVar3 + 0x218);
                fVar34 = (float)local_d0;
                local_e0._8_4_ = SUB84(dVar24,0);
                local_e0._0_8_ = dVar8 * dVar10 + auVar26._8_8_ + *(double *)(lVar3 + 0x210);
                local_e0._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
                if ((uVar15 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar17 = iVar17 + 1;
                *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar22 * 4) = fVar34;
                iVar21 = local_144;
                uVar15 = local_134;
              } while (iVar17 < (int)(uint)uVar1);
            }
            iVar19 = iVar19 + 1;
            pFVar18 = local_128;
            iVar17 = local_13c;
            iVar23 = local_140;
          } while (iVar19 < (int)uVar15);
        }
        pFVar18 = pFVar18 + 8;
        uVar16 = (ulonglong)local_130;
      } while( true );
    }
  }
  return;
}

// GetLODScreenSizeArray @ 145f0fed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
ALandscapeProxy::GetLODScreenSizeArray
          (ALandscapeProxy *this,TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = this->SubsectionSizeQuads + 1;
  iVar4 = 1;
  if (iVar3 != 0) {
    iVar4 = iVar3;
  }
  uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = this->MaxLODLevel;
  iVar3 = (int)lVar2 + -1;
  if ((iVar4 != -1) && (iVar4 < iVar3)) {
    iVar3 = iVar4;
  }
  ::GetLODScreenSizeArray(__return_storage_ptr__,this,iVar3 + 1);
  return __return_storage_ptr__;
}

// GetLandscapeActor @ 145f0ff50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscape * __thiscall ALandscapeProxy::GetLandscapeActor(ALandscapeProxy *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeProxy.h"
             ,0x458,L"Pure virtual not implemented (%s)");
  return (ALandscape *)0x0;
}

// GetLandscapeActor @ 145f0ff80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscape * __thiscall ALandscapeProxy::GetLandscapeActor(ALandscapeProxy *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeProxy.h"
             ,0x459,L"Pure virtual not implemented (%s)");
  return (ALandscape *)0x0;
}

// GetLandscapeGuid @ 145f10030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGuid * __thiscall
ALandscapeProxy::GetLandscapeGuid(ALandscapeProxy *this,FGuid *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar2 = *(undefined4 *)&this->_padding_;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  __return_storage_ptr__->A = *(undefined4 *)&this->_padding_;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetLandscapeHoleMaterial @ 145f10090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall ALandscapeProxy::GetLandscapeHoleMaterial(ALandscapeProxy *this)

{
  return (this->LandscapeHoleMaterial).field0_0x0.DebugPtr;
}

// GetLandscapeInfo @ 145f10120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeInfo * __thiscall ALandscapeProxy::GetLandscapeInfo(ALandscapeProxy *this)

{
  longlong *plVar1;
  int iVar2;
  UWorld *pUVar3;
  ULandscapeInfoMap *pUVar4;
  ulong64 uVar5;
  longlong lVar6;
  ULandscapeInfo *pUVar7;
  
  plVar1 = &this->_padding_;
  pUVar3 = AActor::GetWorld((AActor *)&this[-1].FoliageCache.CachedGrassComps.Hash);
  pUVar7 = (ULandscapeInfo *)0x0;
  if ((pUVar3 != (UWorld *)0x0) &&
     (((*(int *)((longlong)&this->_padding_ + 4) != 0 || (int)this->_padding_ != 0) ||
      *(int *)((longlong)&this->_padding_ + 4) != 0) || (int)*plVar1 != 0)) {
    pUVar4 = ULandscapeInfoMap::GetLandscapeInfoMap(pUVar3);
    uVar5 = CityHash64((char *)plVar1,0x10);
    iVar2 = TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
                        *)&pUVar4->Map,(uint)uVar5,(FGuid *)plVar1);
    if ((iVar2 != -1) &&
       (((lVar6 = (longlong)iVar2 * 0x20 + *(longlong *)&(pUVar4->Map).field_0x0, lVar6 != 0 &&
         (pUVar7 = *(ULandscapeInfo **)(lVar6 + 0x10),
         UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar7 != (ULandscapeInfo *)0x0)))
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
  }
  return pUVar7;
}

// GetLandscapeMaterial @ 145f10250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall
ALandscapeProxy::GetLandscapeMaterial(ALandscapeProxy *this,schar param_1)

{
  UWorld *pUVar1;
  FScriptContainerElement *pFVar2;
  UMaterial *pUVar3;
  FScriptContainerElement *pFVar4;
  
  if ((param_1 != -1) && (pUVar1 = AActor::GetWorld((AActor *)this), pUVar1 != (UWorld *)0x0)) {
    pFVar2 = (this->PerLODOverrideMaterials).AllocatorInstance.Data;
    pFVar4 = pFVar2 + (longlong)(this->PerLODOverrideMaterials).ArrayNum * 0x10;
    for (; pFVar2 != pFVar4; pFVar2 = pFVar2 + 0x10) {
      if ((*(int *)pFVar2 == (int)param_1) &&
         (*(UMaterialInterface **)(pFVar2 + 8) != (UMaterialInterface *)0x0)) {
        return *(UMaterialInterface **)(pFVar2 + 8);
      }
    }
  }
  pUVar3 = (UMaterial *)(this->LandscapeMaterial).field0_0x0.DebugPtr;
  if (pUVar3 == (UMaterial *)0x0) {
    pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterial *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    return (UMaterialInterface *)pUVar3;
  }
  return (UMaterialInterface *)pUVar3;
}

// GetNaniteComponentContentId @ 145f10ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGuid * __thiscall
ALandscapeProxy::GetNaniteComponentContentId(ALandscapeProxy *this,FGuid *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  FGuid *pFVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = (this->NaniteComponents).ArrayNum;
  if (iVar1 == 0) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGuid *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (*(longlong *)(this->NaniteComponents).AllocatorInstance.Data == 0) {
    local_28 = 0;
    puVar8 = &local_28;
    local_20 = 0;
  }
  else {
    if ((this->NaniteComponents).ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FGuid *)(*pcVar3)();
        return pFVar7;
      }
    }
    lVar2 = *(longlong *)(this->NaniteComponents).AllocatorInstance.Data;
    puVar8 = &local_18;
    local_18 = *(undefined8 *)(lVar2 + 0x650);
    uStack_10 = *(undefined8 *)(lVar2 + 0x658);
  }
  uVar4 = *puVar8;
  uVar5 = puVar8[1];
  __return_storage_ptr__->A = (int)uVar4;
  __return_storage_ptr__->B = (int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->C = (int)uVar5;
  __return_storage_ptr__->D = (int)((ulonglong)uVar5 >> 0x20);
  return __return_storage_ptr__;
}

// GetNanitePrimitiveComponentIds @ 145f10fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *
__thiscall
ALandscapeProxy::GetNanitePrimitiveComponentIds
          (ALandscapeProxy *this,
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  int iVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  undefined1 *this_00;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FSparseArrayAllocationInfo local_a0;
  int local_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  undefined4 local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res18 = (this->NaniteComponents).ArrayNum;
  uVar10 = (ulonglong)(int)local_res18;
  pFVar20 = (this->NaniteComponents).AllocatorInstance.Data;
  pFVar14 = pFVar20 + uVar10 * 8;
  local_res20 = pFVar14;
  do {
    if ((this->NaniteComponents).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeNaniteComponent>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar20 == pFVar14) {
      return __return_storage_ptr__;
    }
    if ((*(longlong *)pFVar20 != 0) &&
       (lVar11 = *(longlong *)(*(longlong *)pFVar20 + 0x530), pFVar14 = local_res20, lVar11 != 0)) {
      iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar16 = *(uint *)(lVar11 + 0x218);
      if (iVar12 == 0) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar19 = (int)((iVar12 >> 0x1f & 0x1fU) + iVar12) >> 5;
        if ((iVar12 == 0) || (iVar19 != (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          iVar4 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
          if (iVar4 < iVar12 + 1) {
            uVar9 = iVar4 + 0x1fU >> 5;
            uVar13 = iVar12 + 0x20U >> 5;
            if (uVar13 < 5) {
              iVar4 = 4;
            }
            else {
              uVar10 = (ulonglong)uVar13;
              if (uVar9 < 5) {
                uVar9 = 0;
              }
              if (uVar9 == 0) {
                uVar17 = 4;
                if (4 < uVar10) {
                  uVar17 = uVar10;
                }
              }
              else {
                uVar17 = ((ulonglong)uVar13 * 3 >> 3) + 0x10 + uVar10;
              }
              uVar5 = FMemory::QuantizeSize(uVar17 * 4,0);
              iVar4 = (int)(uVar5 >> 2);
              if (iVar4 < (int)uVar13) {
                iVar4 = 0x7fffffff;
              }
            }
            *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar4 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       *(int *)&(__return_storage_ptr__->Elements).field_0x28);
          }
          puVar1 = &(__return_storage_ptr__->Elements).field_0x28;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          iVar4 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          uVar13 = iVar4 >> 0x1f & 0x1f;
          uVar9 = iVar4 + uVar13;
          iVar4 = (uVar9 & 0x1f) - uVar13;
          if (iVar4 != 0) {
            puVar1 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar7 = this_00;
            if (puVar1 != (undefined1 *)0x0) {
              puVar7 = puVar1;
            }
            *(uint *)(puVar7 + (longlong)((int)uVar9 >> 5) * 4) =
                 *(uint *)(puVar7 + (longlong)((int)uVar9 >> 5) * 4) &
                 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
          }
        }
        else {
          *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar12 + 1;
        }
        puVar1 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar1 != (undefined1 *)0x0) {
          this_00 = puVar1;
        }
        *(uint *)(this_00 + (longlong)iVar19 * 4) =
             *(uint *)(this_00 + (longlong)iVar19 * 4) & ~(1 << ((byte)iVar12 & 0x1f));
      }
      else {
        iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar12 = iVar12 + -1;
        lVar11 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar19 = *(int *)(lVar11 + 4 + (longlong)iVar3 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar19;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar12;
        if (iVar12 != 0) {
          *(undefined4 *)(lVar11 + (longlong)iVar19 * 0xc) = 0xffffffff;
        }
      }
      puVar15 = (uint *)0x0;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_a0,iVar3);
      if (local_a0.Pointer != (uint *)0x0) {
        *(uint *)local_a0.Pointer = uVar16;
        *(uint *)((longlong)local_a0.Pointer + 4) = 0xffffffff;
        puVar15 = local_a0.Pointer;
      }
      iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar16 = *puVar15;
      if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar2;
        }
        iVar12 = *(int *)((longlong)FVar8 +
                         (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar16) * 4);
        if (iVar12 != -1) {
          lVar11 = *(longlong *)&__return_storage_ptr__->Elements;
          do {
            if (*(uint *)(lVar11 + (longlong)iVar12 * 0xc) == uVar16) {
              if (iVar12 != -1) {
                *(uint *)(lVar11 + (longlong)iVar12 * 0xc) = uVar16;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,local_a0.Index,1);
                pFVar14 = local_res20;
                goto LAB_145f114d5;
              }
              break;
            }
            iVar12 = *(int *)(lVar11 + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      uVar13 = 1;
      uVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
              *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar9) {
        uVar10 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar13 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((int)uVar9 < 1) || ((int)uVar13 <= __return_storage_ptr__->HashSize)) {
        uVar16 = __return_storage_ptr__->HashSize - 1U & uVar16;
        puVar15[2] = uVar16;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar2;
        }
        uVar10 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar16;
        puVar15[1] = *(uint *)((longlong)FVar8 + uVar10 * 4);
        *(int *)((longlong)FVar8 + uVar10 * 4) = local_a0.Index;
        pFVar14 = local_res20;
      }
      else {
        __return_storage_ptr__->HashSize = uVar13;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar13 != 0) {
          uVar16 = uVar13;
          if (uVar13 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar16 = 0;
              goto LAB_145f11305;
            }
          }
          else {
LAB_145f11305:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar16,4
                      );
          }
          if (0 < (int)uVar13) {
            uVar17 = (ulonglong)uVar13;
            uVar10 = 0;
            do {
              FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar8 = FVar2;
              }
              uVar6 = uVar10 & (longlong)(int)uVar13 - 1U;
              uVar10 = uVar10 + 1;
              *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = 0xffffffff;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        pFVar14 = local_res20;
        if (__return_storage_ptr__->HashSize != 0) {
          iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          puStack_88 = &(__return_storage_ptr__->Elements).field_0x10;
          uStack_8c = 1;
          local_90 = 0;
          iStack_7c = 0;
          iStack_78 = 0;
          if (iVar12 != 0) {
            puVar15 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar18 = (uint *)puStack_88;
            if (puVar15 != (uint *)0x0) {
              puVar18 = puVar15;
            }
            uVar16 = *puVar18;
            while (uVar16 == 0) {
              iStack_78 = iStack_78 + 0x20;
              lVar11 = (longlong)local_90;
              local_90 = local_90 + 1;
              if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < local_90)
              goto LAB_145f1140a;
              uVar16 = puVar18[lVar11 + 1];
            }
            uStack_8c = -uVar16 & uVar16;
            uVar10 = (ulonglong)uStack_8c * 2 + 1;
            lVar11 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iStack_7c = iStack_78 + -1 + (int)lVar11;
            if (iVar12 < iStack_7c) {
LAB_145f1140a:
              iStack_7c = iVar12;
            }
          }
          local_80 = 0xffffffff;
          local_68._padding_ = CONCAT44(uStack_8c,local_90);
          local_68.CurrentBitIndex = iStack_7c;
          local_68.UnvisitedBitMask = 0xffffffff;
          local_68._28_4_ = uStack_74;
          local_68.BaseBitIndex = iStack_78;
          local_70 = __return_storage_ptr__;
          local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_88;
          iVar3 = iStack_7c;
          if (iStack_7c < iVar12) {
            do {
              uVar16 = __return_storage_ptr__->HashSize - 1U &
                       *(uint *)(*(longlong *)&local_70->Elements + (longlong)iVar3 * 0xc);
              lVar11 = *(longlong *)&local_70->Elements + (longlong)iVar3 * 0xc;
              *(uint *)(lVar11 + 8) = uVar16;
              FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar8 = FVar2;
              }
              uVar10 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar16;
              *(undefined4 *)(lVar11 + 4) = *(undefined4 *)((longlong)FVar8 + uVar10 * 4);
              *(int *)((longlong)FVar8 + uVar10 * 4) = iVar3;
              local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
              pFVar14 = local_res20;
              iVar3 = local_68.CurrentBitIndex;
            } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
          }
        }
      }
    }
LAB_145f114d5:
    uVar10 = (ulonglong)local_res18;
    pFVar20 = pFVar20 + 8;
  } while( true );
}

// GetPhysicalMaterialAtLocation @ 145f122c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UPhysicalMaterial * __thiscall
ALandscapeProxy::GetPhysicalMaterialAtLocation
          (ALandscapeProxy *this,TVector<double> *param_1,EHeightfieldSource param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  TIntPoint<int> TVar11;
  __m128d _Var12;
  byte bVar13;
  bool bVar14;
  longlong lVar15;
  double *pdVar16;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar17;
  UPhysicalMaterial *pUVar18;
  FChaosPhysicsMaterial *pFVar19;
  FHeightField *this_00;
  UPhysicalMaterial *pUVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar41;
  uint uVar45;
  uint uVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  double dVar59;
  undefined4 uVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  undefined1 auVar66 [16];
  double dVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar81;
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined4 uVar85;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  FMaterialHandle local_1a8;
  int iStack_1a4;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [96];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pUVar18 = (UPhysicalMaterial *)0x0;
  pUVar20 = (UPhysicalMaterial *)0x0;
  lVar15 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (lVar15 != 0) {
    pdVar16 = (double *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_128);
    _Var12 = GlobalVectorConstants::DoubleOne.ZW;
    uVar47 = _UNK_15061cc8c;
    uVar46 = _UNK_15061cc88;
    uVar45 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar41 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_168 = (param_1->field0_0x0)._s_0.Z;
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    dVar54 = *pdVar16 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar59 = pdVar16[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar81 = dVar5 - pdVar16[4];
    dVar82 = dVar6 - pdVar16[5];
    auVar42._8_4_ = SUB84(dVar59,0);
    auVar42._0_8_ = dVar54;
    uVar60 = (undefined4)((ulonglong)dVar59 >> 0x20);
    auVar42._12_4_ = uVar60;
    dVar34 = pdVar16[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar4 = pdVar16[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar61 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uStack_160 = 0;
    auVar49._8_4_ = SUB84(dVar59,0);
    auVar49._0_8_ = dVar54;
    auVar49._12_4_ = uVar60;
    dVar24 = local_168 - pdVar16[6];
    auVar36._8_4_ = SUB84(dVar4,0);
    auVar36._0_8_ = dVar34;
    auVar36._12_4_ = uVar61;
    auVar50 = blendpd(auVar49,auVar36,2);
    dVar48 = auVar42._8_8_;
    auVar78._8_4_ = SUB84(dVar82,0);
    auVar78._0_8_ = dVar81;
    uVar60 = (undefined4)((ulonglong)dVar82 >> 0x20);
    auVar78._12_4_ = uVar60;
    auVar76._8_4_ = SUB84(dVar34,0);
    auVar76._0_8_ = dVar48;
    auVar76._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    auVar35._8_4_ = SUB84(dVar82,0);
    auVar35._0_8_ = dVar81;
    auVar35._12_4_ = uVar60;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = dVar24;
    auVar36 = blendpd(auVar35,auVar27,2);
    auVar79._0_8_ = auVar78._8_8_ * dVar54 - dVar48 * dVar81;
    auVar79._8_8_ = dVar24 * dVar59 - auVar76._8_8_ * dVar82;
    auVar66._8_4_ = SUB84(auVar79._8_8_,0);
    auVar66._0_8_ = auVar79._0_8_;
    auVar66._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
    auVar73._8_4_ = SUB84(dVar4,0);
    auVar73._0_8_ = dVar34;
    auVar73._12_4_ = uVar61;
    auVar37._0_8_ = auVar36._0_8_ * dVar34 - auVar50._0_8_ * dVar24;
    auVar37._8_8_ = auVar36._8_8_ * dVar4 - auVar50._8_8_ * 0.0;
    auVar36 = blendpd(auVar79,auVar37,2);
    dVar65 = auVar66._8_8_ + auVar66._8_8_;
    dVar69 = auVar37._0_8_ + auVar37._0_8_;
    auVar80._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar80._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    uVar60 = SUB84(dVar69,0);
    auVar70._8_4_ = uVar60;
    auVar70._0_8_ = dVar65;
    uVar61 = (undefined4)((ulonglong)dVar69 >> 0x20);
    auVar70._12_4_ = uVar61;
    auVar25._8_4_ = uVar60;
    auVar25._0_8_ = dVar65;
    auVar25._12_4_ = uVar61;
    auVar62._8_4_ = uVar60;
    auVar62._0_8_ = dVar65;
    auVar62._12_4_ = uVar61;
    auVar8._4_8_ = dVar59;
    auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar55._0_8_ = auVar8._0_8_ << 0x20;
    auVar55._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar55._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar71._0_8_ = auVar70._8_8_ * dVar54 - dVar65 * dVar48;
    auVar71._8_8_ = auVar80._0_8_ * dVar59 - auVar25._8_8_ * dVar34;
    auVar36 = blendpd(auVar62,auVar80,2);
    auVar26._8_4_ = SUB84(auVar80._8_8_,0);
    auVar26._0_8_ = auVar80._0_8_;
    auVar26._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
    auVar63._0_8_ = auVar36._0_8_ * dVar34 - auVar80._0_8_ * auVar50._0_8_;
    auVar63._8_8_ = auVar36._8_8_ * dVar4 - auVar26._8_8_ * auVar50._8_8_;
    auVar36 = *(undefined1 (*) [16])(pdVar16 + 10);
    auVar56._8_8_ = auVar55._8_8_;
    auVar56._0_8_ = auVar36._0_8_;
    local_198 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
    dStack_190 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
    local_188 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
    dStack_180 = (double)GlobalVectorConstants::SmallNumber.m128_f32[3];
    lVar21 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar36._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar36._0_4_) <=
              local_188);
    local_158 = 0;
    uStack_150 = 0;
    auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar16 + 8));
    lVar22 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar16 + 0x44) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                *(uint *)(pdVar16 + 8) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= local_198);
    lVar23 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar16 + 0x4c) & _UNK_15061cc8c,
                                *(uint *)(pdVar16 + 9) & _UNK_15061cc88) <= dStack_190);
    auVar50._8_4_ = SUB84(auVar71._8_8_,0);
    auVar50._0_8_ = auVar71._0_8_;
    auVar50._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
    auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar56);
    dVar34 = (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar36._4_4_,
                              ~(uint)lVar22 & auVar36._0_4_) *
             (dVar65 * auVar73._8_8_ + dVar81 + auVar50._8_8_);
    dVar4 = (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar36._12_4_,
                             ~(uint)lVar23 & auVar36._8_4_) *
            (dVar69 * dVar4 + dVar82 + auVar63._0_8_);
    dVar48 = __real_3ff0000000000000 / (double)this->ComponentSizeQuads;
    local_148._8_4_ = SUB84(dVar4,0);
    local_148._0_8_ = dVar34;
    local_148._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar34 = dVar48 * dVar34;
    dVar48 = dVar48 * dVar4;
    auVar36 = blendpd(auVar71,auVar63,2);
    local_138 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar27._4_4_,
                                 ~(uint)lVar21 & auVar27._0_4_) *
                (auVar80._0_8_ * auVar73._8_8_ + dVar24 + auVar36._0_8_);
    local_1a8.InnerHandle =
         (THandle<Chaos::FChaosPhysicsMaterial,24,8>)
         ((int)ROUND((dVar34 + dVar34) - __real_3fe0000000000000) >> 1);
    iStack_1a4 = (int)ROUND((dVar48 + dVar48) - __real_3fe0000000000000) >> 1;
    TVar11.field0_0x0._s_0.Y = iStack_1a4;
    TVar11.field0_0x0._s_0.X = (int)local_1a8.InnerHandle;
    pTVar17 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                      *)(lVar15 + 0xa0),TVar11);
    if ((pTVar17 !=
         (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0) &&
       (lVar15 = *(longlong *)&pTVar17->field_0x8, lVar15 != 0)) {
      dVar5 = dVar5 - *(double *)(lVar15 + 0x210);
      dVar6 = dVar6 - *(double *)(lVar15 + 0x218);
      uVar85 = (undefined4)((ulonglong)dVar6 >> 0x20);
      lVar21 = *(longlong *)(lVar15 + 0x5f0);
      dVar59 = *(double *)(lVar15 + 0x1f0) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar65 = *(double *)(lVar15 + 0x1f8) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar74._8_4_ = SUB84(dVar6,0);
      auVar74._0_8_ = dVar5;
      auVar74._12_4_ = uVar85;
      dVar34 = *(double *)(lVar15 + 0x200) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar4 = *(double *)(lVar15 + 0x208) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar61 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar43._8_4_ = SUB84(dVar65,0);
      auVar43._0_8_ = dVar59;
      uVar60 = (undefined4)((ulonglong)dVar65 >> 0x20);
      auVar43._12_4_ = uVar60;
      dVar24 = local_168 - *(double *)(lVar15 + 0x220);
      dVar54 = auVar43._8_8_;
      auVar51._8_4_ = SUB84(dVar65,0);
      auVar51._0_8_ = dVar59;
      auVar51._12_4_ = uVar60;
      auVar38._8_4_ = SUB84(dVar6,0);
      auVar38._0_8_ = dVar5;
      auVar38._12_4_ = uVar85;
      auVar28._8_4_ = SUB84(dVar34,0);
      auVar28._0_8_ = dVar54;
      auVar28._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar24;
      auVar36 = blendpd(auVar38,auVar7,2);
      auVar75._0_8_ = auVar74._8_8_ * dVar59 - dVar54 * dVar5;
      auVar75._8_8_ = dVar24 * dVar65 - auVar28._8_8_ * dVar6;
      auVar64._8_4_ = SUB84(auVar75._8_8_,0);
      auVar64._0_8_ = auVar75._0_8_;
      auVar64._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
      auVar72._8_4_ = SUB84(dVar4,0);
      auVar72._0_8_ = dVar34;
      auVar72._12_4_ = uVar61;
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = dVar34;
      auVar3._12_4_ = uVar61;
      auVar27 = blendpd(auVar51,auVar3,2);
      dVar48 = auVar27._8_8_;
      auVar39._0_8_ = auVar36._0_8_ * dVar34 - auVar27._0_8_ * dVar24;
      auVar39._8_8_ = auVar36._8_8_ * dVar4 - dVar48 * 0.0;
      auVar76 = blendpd(auVar75,auVar39,2);
      auVar36 = *(undefined1 (*) [16])(lVar15 + 0x230);
      dVar69 = auVar64._8_8_ + auVar64._8_8_;
      dVar81 = auVar39._0_8_ + auVar39._0_8_;
      auVar77._0_8_ = auVar76._0_8_ + auVar76._0_8_;
      auVar77._8_8_ = auVar76._8_8_ + auVar76._8_8_;
      uVar60 = SUB84(dVar81,0);
      auVar67._8_4_ = uVar60;
      auVar67._0_8_ = dVar69;
      uVar61 = (undefined4)((ulonglong)dVar81 >> 0x20);
      auVar67._12_4_ = uVar61;
      auVar29._8_4_ = uVar60;
      auVar29._0_8_ = dVar69;
      auVar29._12_4_ = uVar61;
      auVar57._8_4_ = uVar60;
      auVar57._0_8_ = dVar69;
      auVar57._12_4_ = uVar61;
      auVar83._0_8_ = (double)CONCAT44(uVar45 & auVar36._4_4_,uVar41 & auVar36._0_4_);
      auVar83._8_4_ = uVar46 & auVar36._8_4_;
      auVar83._12_4_ = uVar47 & auVar36._12_4_;
      lVar22 = -(ulonglong)(auVar83._8_8_ <= dStack_190);
      auVar68._0_8_ = auVar67._8_8_ * dVar59 - dVar69 * dVar54;
      auVar68._8_8_ = auVar77._0_8_ * dVar65 - auVar29._8_8_ * dVar34;
      auVar76 = blendpd(auVar57,auVar77,2);
      auVar30._8_4_ = SUB84(auVar77._8_8_,0);
      auVar30._0_8_ = auVar77._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
      auVar9._4_8_ = dVar48;
      auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar52._0_8_ = auVar9._0_8_ << 0x20;
      auVar52._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar52._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar58._0_8_ = auVar76._0_8_ * dVar34 - auVar77._0_8_ * auVar27._0_8_;
      auVar58._8_8_ = auVar76._8_8_ * dVar4 - auVar30._8_8_ * dVar48;
      auVar27 = *(undefined1 (*) [16])(lVar15 + 0x240);
      auVar53._8_8_ = auVar52._8_8_;
      auVar53._0_8_ = auVar27._0_8_;
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
      auVar44._0_8_ = (double)CONCAT44(uVar45 & auVar27._4_4_,uVar41 & auVar27._0_4_);
      auVar44._8_4_ = uVar46 & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar44._12_4_ = uVar47 & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      lVar23 = -(ulonglong)(auVar44._8_8_ <= dStack_180);
      auVar84._0_8_ =
           (double)CONCAT44(~(uint)(-(ulonglong)(auVar83._0_8_ <= local_198) >> 0x20) &
                            auVar36._4_4_,
                            ~(uint)-(ulonglong)(auVar83._0_8_ <= local_198) & auVar36._0_4_);
      auVar84._8_4_ = ~(uint)lVar22 & auVar36._8_4_;
      auVar84._12_4_ = ~(uint)((ulonglong)lVar22 >> 0x20) & auVar36._12_4_;
      uVar41 = (uint)-(ulonglong)(auVar44._0_8_ <= local_188);
      auVar40._0_4_ = (uint)local_158 & uVar41;
      uVar45 = (uint)(-(ulonglong)(auVar44._0_8_ <= local_188) >> 0x20);
      auVar40._4_4_ = local_158._4_4_ & uVar45;
      uVar46 = (uint)lVar23;
      auVar40._8_4_ = (uint)uStack_150 & uVar46;
      uVar47 = (uint)((ulonglong)lVar23 >> 0x20);
      auVar40._12_4_ = uStack_150._4_4_ & uVar47;
      auVar27 = divpd((undefined1  [16])_Var12.m128d_f64,auVar53);
      auVar31._8_4_ = SUB84(auVar68._8_8_,0);
      auVar31._0_8_ = auVar68._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
      auVar36 = blendpd(auVar68,auVar58,2);
      local_188 = auVar84._0_8_ * (dVar69 * auVar72._8_8_ + dVar5 + auVar31._8_8_);
      dStack_180 = auVar84._8_8_ * (dVar81 * dVar4 + dVar6 + auVar58._0_8_);
      auVar32._0_4_ = ~uVar41 & auVar27._0_4_;
      auVar32._4_4_ = ~uVar45 & auVar27._4_4_;
      auVar32._8_4_ = ~uVar46 & auVar27._8_4_;
      auVar32._12_4_ = ~uVar47 & auVar27._12_4_;
      local_178 = SUB168(auVar32 | auVar40,0) *
                  (auVar77._0_8_ * auVar72._8_8_ + dVar24 + auVar36._0_8_);
      auVar10._4_8_ = SUB168(auVar32 | auVar40,8) * (auVar77._8_8_ * dVar4 + 0.0 + auVar36._8_8_);
      auVar10._0_4_ = (int)((ulonglong)local_188 >> 0x20);
      auVar33._0_8_ = auVar10._0_8_ << 0x20;
      auVar33._8_4_ = SUB84(dStack_180,0);
      auVar33._12_4_ = (int)((ulonglong)dStack_180 >> 0x20);
      if (lVar21 != 0) {
        if (param_2 == Simple) {
          this_00 = *(FHeightField **)(lVar21 + 0x38);
        }
        else {
          if (param_2 != Complex) {
            return (UPhysicalMaterial *)0x0;
          }
          this_00 = *(FHeightField **)(lVar21 + 0x30);
        }
        pUVar18 = pUVar20;
        if (this_00 != (FHeightField *)0x0) {
          local_198 = (double)(float)local_188;
          dStack_190 = (double)(float)auVar33._8_8_;
          bVar13 = Chaos::FHeightField::GetMaterialIndexAt(this_00,(TVector<double,2> *)&local_198);
          if (bVar13 != 0xff) {
            lVar15 = *(longlong *)(lVar15 + 0x5f0);
            if ((int)(uint)bVar13 < *(int *)(lVar15 + 0x28)) {
              if (*(int *)(lVar15 + 0x28) <= (int)(uint)bVar13) {
                local_1b8 = (longlong)(int)(uint)bVar13;
                local_1b0 = (longlong)*(int *)(lVar15 + 0x28);
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar14) {
                  pcVar2 = (code *)swi(3);
                  pUVar18 = (UPhysicalMaterial *)(*pcVar2)();
                  return pUVar18;
                }
              }
              local_1a8.InnerHandle =
                   *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
                    (*(longlong *)(lVar15 + 0x20) + (ulonglong)bVar13 * 4);
              pFVar19 = Chaos::FMaterialHandle::Get(&local_1a8);
              if (((pFVar19 != (FChaosPhysicsMaterial *)0x0) &&
                  (piVar1 = pFVar19->UserData, piVar1 != (int *)0x0)) && (*piVar1 == 2)) {
                pUVar18 = *(UPhysicalMaterial **)(piVar1 + 2);
              }
            }
          }
        }
      }
    }
  }
  return pUVar18;
}

// GetProxyBounds @ 145f12d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
ALandscapeProxy::GetProxyBounds(ALandscapeProxy *this,TBox<double> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  TBox<double> *pTVar20;
  FScriptContainerElement *pFVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined7 uStack_b7;
  undefined7 uStack_7f;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  iVar4 = (this->LandscapeComponents).ArrayNum;
  pFVar21 = (this->LandscapeComponents).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    pTVar20 = (TBox<double> *)(*pcVar6)();
    return pTVar20;
  }
  pFVar1 = pFVar21 + (longlong)iVar4 * 8;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  for (; pFVar21 != pFVar1; pFVar21 = pFVar21 + 8) {
    pUVar5 = *(UObject **)pFVar21;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_145f12e24;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
LAB_145f12e24:
      if ((pUVar5[3].field_0x20 & 1) != 0) {
        dVar15 = *(double *)&pUVar5[6].field_0x20 + *(double *)&pUVar5[7].field_0x10;
        dVar18 = *(double *)&pUVar5[6].field_0x20 - *(double *)&pUVar5[7].field_0x10;
        dVar17 = *(double *)&pUVar5[7].field_0x8 + *(double *)&pUVar5[7].field_0x20;
        dVar14 = *(double *)&pUVar5[7].field_0x8 - *(double *)&pUVar5[7].field_0x20;
        dVar16 = *(double *)(pUVar5 + 7) + *(double *)&pUVar5[7].field_0x18;
        dVar13 = *(double *)(pUVar5 + 7) - *(double *)&pUVar5[7].field_0x18;
        if (((dVar15 - dVar18 != (double)uVar24) || (dVar16 - dVar13 != (double)uVar23)) ||
           (dVar17 - dVar14 != (double)uVar22)) {
          if (__return_storage_ptr__->IsValid == '\0') {
            auVar9._8_4_ = SUB84(dVar13,0);
            auVar9._0_8_ = dVar18;
            auVar9._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar9;
            auVar12._8_4_ = SUB84(dVar15,0);
            auVar12._0_8_ = dVar14;
            auVar12._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) =
                 auVar12;
            auVar10._8_4_ = SUB84(dVar17,0);
            auVar10._0_8_ = dVar16;
            auVar10._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) =
                 auVar10;
            __return_storage_ptr__->IsValid = 1;
            __return_storage_ptr__->Pad[0] = (char)uStack_b7;
            __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_b7 >> 8);
            __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_b7 >> 0x10);
            __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_b7 >> 0x18);
            __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_b7 >> 0x20);
            __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_b7 >> 0x28);
            __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_b7 >> 0x30);
            uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
          else {
            dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
            dVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
            if (dVar3 <= dVar13) {
              dVar13 = dVar3;
            }
            dVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
            if (dVar3 <= dVar14) {
              dVar14 = dVar3;
            }
            dVar3 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
            if (dVar15 <= dVar3) {
              dVar15 = dVar3;
            }
            dVar3 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
            if (dVar16 <= dVar3) {
              dVar16 = dVar3;
            }
            dVar3 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
            if (dVar17 <= dVar3) {
              dVar17 = dVar3;
            }
            if (dVar18 <= dVar2) {
              dVar2 = dVar18;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar13;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar14;
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar15;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar16;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar17;
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2;
            uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
        }
      }
    }
  }
  iVar4 = (this->CollisionComponents).ArrayNum;
  pFVar21 = (this->CollisionComponents).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""),
     uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_,
     uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
     uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_, bVar19)) {
    pcVar6 = (code *)swi(3);
    pTVar20 = (TBox<double> *)(*pcVar6)();
    return pTVar20;
  }
  pFVar1 = pFVar21 + (longlong)iVar4 * 8;
  do {
    if (pFVar21 == pFVar1) {
      return __return_storage_ptr__;
    }
    pUVar5 = *(UObject **)pFVar21;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_145f13040;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
LAB_145f13040:
      if ((pUVar5[3].field_0x20 & 1) != 0) {
        dVar13 = *(double *)&pUVar5[6].field_0x20 + *(double *)&pUVar5[7].field_0x10;
        dVar18 = *(double *)&pUVar5[6].field_0x20 - *(double *)&pUVar5[7].field_0x10;
        dVar16 = *(double *)&pUVar5[7].field_0x8 + *(double *)&pUVar5[7].field_0x20;
        dVar14 = *(double *)&pUVar5[7].field_0x8 - *(double *)&pUVar5[7].field_0x20;
        dVar17 = *(double *)(pUVar5 + 7) + *(double *)&pUVar5[7].field_0x18;
        dVar15 = *(double *)(pUVar5 + 7) - *(double *)&pUVar5[7].field_0x18;
        if (((dVar13 - dVar18 != (double)uVar24) || (dVar17 - dVar15 != (double)uVar23)) ||
           (dVar16 - dVar14 != (double)uVar22)) {
          if (__return_storage_ptr__->IsValid == '\0') {
            auVar7._8_4_ = SUB84(dVar15,0);
            auVar7._0_8_ = dVar18;
            auVar7._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar7;
            auVar11._8_4_ = SUB84(dVar13,0);
            auVar11._0_8_ = dVar14;
            auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) =
                 auVar11;
            auVar8._8_4_ = SUB84(dVar16,0);
            auVar8._0_8_ = dVar17;
            auVar8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
            *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar8
            ;
            __return_storage_ptr__->IsValid = 1;
            __return_storage_ptr__->Pad[0] = (char)uStack_7f;
            __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_7f >> 8);
            __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_7f >> 0x10);
            __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_7f >> 0x18);
            __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_7f >> 0x20);
            __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_7f >> 0x28);
            __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_7f >> 0x30);
            uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
          else {
            dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
            dVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
            if (dVar18 <= dVar2) {
              dVar2 = dVar18;
            }
            dVar18 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
            if (dVar13 <= dVar18) {
              dVar13 = dVar18;
            }
            if (dVar15 <= dVar3) {
              dVar3 = dVar15;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2;
            dVar15 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
            if (dVar14 <= dVar15) {
              dVar15 = dVar14;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
            dVar14 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
            if (dVar14 <= dVar16) {
              dVar14 = dVar16;
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar13;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar15;
            dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
            if (dVar13 <= dVar17) {
              dVar13 = dVar17;
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar14;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar13;
            uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
        }
      }
    }
    pFVar21 = pFVar21 + 8;
  } while( true );
}

// GetSectionBase @ 145f13650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntPoint<int> __thiscall ALandscapeProxy::GetSectionBase(ALandscapeProxy *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->SectionBase).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetSectionBaseOffset @ 145f13690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntPoint<int> __thiscall ALandscapeProxy::GetSectionBaseOffset(ALandscapeProxy *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->SectionBase).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetSplinesComponent @ 145f13750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeSplinesComponent * __thiscall ALandscapeProxy::GetSplinesComponent(ALandscapeProxy *this)

{
  return (ULandscapeSplinesComponent *)this->_padding_;
}

// InvalidateGeneratedComponentData @ 145f15690

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
ALandscapeProxy::InvalidateGeneratedComponentData(ALandscapeProxy *this,bool param_1)

{
  InvalidateGeneratedComponentData
            ((TArray<ULandscapeComponent_*,TSizedDefaultAllocator<32>_> *)&this->LandscapeComponents
             ,param_1);
  return;
}

// InvalidateGeneratedComponentData @ 145f156b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ALandscapeProxy::InvalidateGeneratedComponentData
          (TArray<ULandscapeComponent_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  ulonglong uVar1;
  int iVar2;
  ALandscapeProxy *this;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  int local_118;
  undefined1 local_114 [4];
  ALandscapeProxy *local_110;
  ALandscapeProxy **local_108;
  longlong *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  longlong *local_d0;
  int iStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_84;
  undefined1 local_78 [32];
  uint *local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 local_40 [8];
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_78._0_8_ = 0;
  iVar10 = 0;
  local_78._8_8_ = 0;
  local_58 = (uint *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  iVar12 = 0;
  for (iVar9 = iVar12; (-1 < iVar9 && (iVar9 < param_1->ArrayNum)); iVar9 = iVar9 + 1) {
    if (iVar9 < 0) {
      local_128 = (longlong)iVar9;
      local_120 = (longlong)param_1->ArrayNum;
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
    plVar5 = *(longlong **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8);
    local_100 = plVar5;
    if (param_2) {
      (**(code **)(*plVar5 + 0x440))(plVar5,1,0);
    }
    local_110 = CastChecked<ALandscapeProxy,UObject>((UObject *)plVar5[4]);
    uVar7 = ((uint)((ulonglong)local_110 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_110 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    if (local_78._8_4_ != local_44) {
      FVar8 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = local_38;
      }
      iVar2 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar7) * 4);
      while (iVar2 != -1) {
        plVar5 = (longlong *)((longlong)iVar2 * 0x60 + local_78._0_8_);
        if ((ALandscapeProxy *)*plVar5 == local_110) {
          if (plVar5 != (longlong *)0x0) goto LAB_145f15857;
          break;
        }
        iVar2 = (int)plVar5[0xb];
      }
    }
    local_108 = &local_110;
    local_128 = 0;
    TSet<TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<ALandscapeProxy_*_&&>_>
              ((TSet<TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_78,(uint)&local_118,
               (TKeyInitializer<ALandscapeProxy_*_&&> *)(ulonglong)uVar7,(bool *)&local_108);
    plVar5 = (longlong *)((longlong)local_118 * 0x60 + local_78._0_8_);
LAB_145f15857:
    TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>::
    Emplace<ULandscapeComponent_*_const_&>
              ((TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                *)(plVar5 + 1),(ULandscapeComponent **)local_114,(bool *)&local_100);
  }
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = iVar12;
  if (local_50 != 0) {
    puVar11 = (uint *)(local_78 + 0x10);
    if (local_58 != (uint *)0x0) {
      puVar11 = local_58;
    }
    uVar7 = *puVar11;
    local_b0 = iVar12;
    while (uVar7 == 0) {
      lVar6 = (longlong)iVar10;
      local_b0 = local_b0 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_b4 = local_50;
      if ((int)(local_50 + -1 + (local_50 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145f1590c;
      uVar7 = puVar11[lVar6 + 1];
    }
    uStack_c4 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uStack_c4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_b4 = (int)lVar6 + -1 + local_b0;
    if (local_50 < iStack_b4) {
      iStack_b4 = local_50;
    }
  }
LAB_145f1590c:
  local_f8 = (longlong *)local_78;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10);
  uStack_b8 = 0xffffffff;
  uStack_ac = local_84;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_84;
  TStack_f0.BaseBitIndex = local_b0;
  local_d0 = local_f8;
  iStack_c8 = iVar10;
  local_c0 = TStack_f0.Array;
  TStack_f0._padding_._0_4_ = iVar10;
  TStack_f0._padding_._4_4_ = uStack_c4;
  TStack_f0.CurrentBitIndex = iStack_b4;
  if (iStack_b4 < local_50) {
    do {
      this = *(ALandscapeProxy **)((longlong)TStack_f0.CurrentBitIndex * 0x60 + *local_f8);
      FlushGrassComponents
                (this,(TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                       *)((longlong)TStack_f0.CurrentBitIndex * 0x60 + *local_f8 + 8),true);
      UpdateRenderingMethod(this);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  return;
}

// InvalidateGeneratedComponentData @ 145f15a10

void __cdecl
ALandscapeProxy::InvalidateGeneratedComponentData
          (TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
           *param_1,bool param_2)

{
  TArray<ULandscapeComponent_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<ULandscapeComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
           ::Array(param_1,&local_18);
  InvalidateGeneratedComponentData(pTVar1,param_2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// IsLevelBoundsRelevant @ 145f15a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ALandscapeProxy::IsLevelBoundsRelevant(ALandscapeProxy *this)

{
  return true;
}

// IsSplineOwnerValid @ 145f15c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ALandscapeProxy::IsSplineOwnerValid(ALandscapeProxy *this)

{
  return true;
}

// LandscapeActorToWorld @ 145f15d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
ALandscapeProxy::LandscapeActorToWorld
          (ALandscapeProxy *this,TTransform<double> *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TTransform<double> *pTVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  dVar5 = __real_8000000000000000;
  lVar1 = *(longlong *)&this[-1].BodyInstance.WalkableSlopeOverride.CachedSlopeAngle;
  if (lVar1 == 0) {
    pTVar9 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar9 = (TTransform<double> *)(lVar1 + 0x1f0);
  }
  dVar3 = (pTVar9->Rotation).XY.m128d_f64[1];
  dVar6 = (pTVar9->Rotation).ZW.m128d_f64[0];
  dVar13 = (pTVar9->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar9->Translation).XY.m128d_f64[0];
  dVar4 = (pTVar9->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar13;
  dVar6 = (pTVar9->Translation).ZW.m128d_f64[0];
  dVar13 = (pTVar9->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar3 = (pTVar9->Scale3D).XY.m128d_f64[0];
  dVar4 = (pTVar9->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar13;
  dVar6 = (pTVar9->Scale3D).ZW.m128d_f64[0];
  dVar13 = (pTVar9->Scale3D).ZW.m128d_f64[1];
  uVar2 = *(undefined8 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x28;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar13;
  dVar5 = dVar5 * (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0];
  dVar6 = (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar10 = *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64;
  dVar7 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
  dVar13 = (double)(int)uVar2;
  dVar3 = (double)(int)((ulonglong)uVar2 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64;
  dVar13 = (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] *
           (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar13,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar4 = (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] *
          (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar14 = blendpd(auVar10,auVar12,2);
  auVar22._8_4_ = SUB84(dVar4,0);
  auVar22._0_8_ = dVar13;
  auVar22._12_4_ = uVar21;
  dVar3 = auVar12._0_8_;
  auVar23._0_8_ = auVar22._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar13;
  auVar23._8_8_ = dVar5 * auVar10._8_8_ - dVar3 * dVar4;
  auVar15._8_4_ = SUB84(dVar4,0);
  auVar15._0_8_ = dVar13;
  auVar15._12_4_ = uVar21;
  auVar24._8_4_ = SUB84(dVar6,0);
  auVar24._0_8_ = dVar5;
  auVar24._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar10 = blendpd(auVar15,auVar24,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar3 - auVar14._0_8_ * dVar5;
  auVar11._8_8_ = auVar10._8_8_ * auVar12._8_8_ - auVar14._8_8_ * dVar6;
  auVar10 = *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64;
  auVar24 = blendpd(auVar23,auVar11,2);
  dVar19 = auVar23._8_8_ + auVar23._8_8_;
  dVar20 = auVar11._0_8_ + auVar11._0_8_;
  auVar25._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar25._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar17._8_4_ = SUB84(dVar20,0);
  auVar17._0_8_ = dVar19;
  uVar21 = (undefined4)((ulonglong)dVar20 >> 0x20);
  auVar17._12_4_ = uVar21;
  auVar14._8_4_ = SUB84(dVar20,0);
  auVar14._0_8_ = dVar19;
  auVar14._12_4_ = uVar21;
  auVar24 = blendpd(auVar10,auVar12,2);
  auVar15 = blendpd(auVar14,auVar25,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar19;
  auVar18._8_8_ = auVar25._0_8_ * auVar10._8_8_ - dVar3 * dVar20;
  auVar16._0_8_ = auVar15._0_8_ * dVar3 - auVar24._0_8_ * auVar25._0_8_;
  auVar16._8_8_ = auVar15._8_8_ * auVar12._8_8_ - auVar24._8_8_ * auVar25._8_8_;
  dVar8 = (__return_storage_ptr__->Translation).XY.m128d_f64[1];
  auVar12._8_4_ = SUB84(auVar18._8_8_,0);
  auVar12._0_8_ = auVar18._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar24 = blendpd(auVar18,auVar16,2);
  dVar3 = (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
  dVar6 = (__return_storage_ptr__->Translation).ZW.m128d_f64[1] + 0.0;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (__return_storage_ptr__->Translation).XY.m128d_f64[0] +
       dVar19 * dVar7 + dVar13 + auVar12._8_8_;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       dVar8 + dVar20 * dVar7 + dVar4 + auVar16._0_8_;
  auVar10._8_4_ = SUB84(dVar6,0);
  auVar10._0_8_ = auVar25._0_8_ * dVar7 + dVar5 + auVar24._0_8_ + dVar3;
  auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar10;
  return __return_storage_ptr__;
}

// PostLoad @ 145f16bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::PostLoad(ALandscapeProxy *this)

{
  FGuid *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  FLandscapeComponentGrassData *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName FVar12;
  bool bVar13;
  TSharedRef<FLandscapeComponentGrassData,1> *pTVar14;
  FName FVar15;
  bool bVar16;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  TSharedRef<FLandscapeComponentGrassData,1> local_60 [2];
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4493,"ALandscapeProxy::PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
               ,0x118d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4493);
  }
  AActor::PostLoad((AActor *)this);
  uVar2 = (this->OriginalLandscapeGuid).D;
  uVar3 = (this->OriginalLandscapeGuid).C;
  uVar4 = (this->OriginalLandscapeGuid).B;
  uVar5 = (this->OriginalLandscapeGuid).A;
  if (((((uVar2 != 0 || uVar3 != 0) || uVar4 != 0) || uVar5 != 0) &&
      (((uVar3 != (this->LandscapeGuid).C || uVar4 != (this->LandscapeGuid).B) ||
       uVar2 != (this->LandscapeGuid).D) || uVar5 != (this->LandscapeGuid).A)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!OriginalLandscapeGuid.IsValid() || (OriginalLandscapeGuid == LandscapeGuid)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                          ,0x1185,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar1 = &this->LandscapeGuid;
  uVar2 = pFVar1->B;
  uVar3 = (this->LandscapeGuid).C;
  uVar4 = (this->LandscapeGuid).D;
  (this->OriginalLandscapeGuid).A = pFVar1->A;
  (this->OriginalLandscapeGuid).B = uVar2;
  (this->OriginalLandscapeGuid).C = uVar3;
  (this->OriginalLandscapeGuid).D = uVar4;
  ChangeLandscapeGuidIfObjectIsInstanced(pFVar1,(UObject *)this);
  if (((this->ComponentSizeQuads == 0) && (0 < (this->LandscapeComponents).ArrayNum)) &&
     (lVar7 = *(longlong *)(this->LandscapeComponents).AllocatorInstance.Data, lVar7 != 0)) {
    this->ComponentSizeQuads = *(int *)(lVar7 + 0x550);
    this->SubsectionSizeQuads = *(int *)(lVar7 + 0x554);
    this->NumSubsections = *(int *)(lVar7 + 0x558);
  }
  bVar13 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar13) {
    FBodyInstance::FixupData(&this->BodyInstance,(UObject *)this);
  }
  FVar15 = (FName)(this->LandscapeComponents).AllocatorInstance.Data;
  iVar6 = (this->LandscapeComponents).ArrayNum;
  local_a8 = (FName)((longlong)FVar15 + (longlong)iVar6 * 8);
  while( true ) {
    FVar12 = local_a8;
    local_res18 = FVar15;
    if ((this->LandscapeComponents).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar15 == FVar12) break;
    lVar7 = *(longlong *)FVar15;
    if (lVar7 != 0) {
      if (5 < (byte)LogGrass._0_1_) {
        local_res20 = (FName)this->_padding_;
        ::FName::ToString(&local_res20,&local_90);
        local_b8 = *(FName *)(lVar7 + 0x18);
        ::FName::ToString(&local_b8,&local_a0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        FVar15 = local_res18;
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
          FVar15 = local_res18;
        }
      }
      if (((GGrassMapUseRuntimeGeneration != 0) &&
          (this->bDisableRuntimeGrassMapGeneration == false)) &&
         (bVar13 = FLandscapeComponentGrassData::HasData
                             (*(FLandscapeComponentGrassData **)(lVar7 + 0x728)), bVar13)) {
        if (2 < (byte)LogGrass._0_1_) {
          local_res18 = (FName)this->_padding_;
          ::FName::ToString(&local_res18,&local_70);
          local_b0 = *(FName *)(lVar7 + 0x18);
          ::FName::ToString(&local_b0,&local_80);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        pTVar14 = MakeShared<FLandscapeComponentGrassData,1>(local_60);
        pFVar9 = *(FLandscapeComponentGrassData **)(lVar7 + 0x728);
        pTVar10 = *(TReferenceControllerBase<1> **)(lVar7 + 0x730);
        pTVar11 = (pTVar14->SharedReferenceCount).ReferenceController;
        *(FLandscapeComponentGrassData **)(lVar7 + 0x728) = pTVar14->Object;
        *(TReferenceControllerBase<1> **)(lVar7 + 0x730) = pTVar11;
        pTVar14->Object = pFVar9;
        (pTVar14->SharedReferenceCount).ReferenceController = pTVar10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60[0].SharedReferenceCount.ReferenceController);
      }
    }
    FVar15 = (FName)((longlong)FVar15 + 8);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostLoadFixupLandscapeGuidsIfInstanced @ 145f17460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::PostLoadFixupLandscapeGuidsIfInstanced(ALandscapeProxy *this)

{
  FGuid *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  
  uVar2 = (this->OriginalLandscapeGuid).A;
  uVar3 = (this->OriginalLandscapeGuid).B;
  uVar4 = (this->OriginalLandscapeGuid).C;
  uVar5 = (this->OriginalLandscapeGuid).D;
  if ((((uVar5 != 0 || uVar4 != 0) || uVar3 != 0) || uVar2 != 0) &&
     (((uVar5 != (this->LandscapeGuid).D || uVar4 != (this->LandscapeGuid).C) ||
      uVar3 != (this->LandscapeGuid).B) || uVar2 != (this->LandscapeGuid).A)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OriginalLandscapeGuid.IsValid() || (OriginalLandscapeGuid == LandscapeGuid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x1185,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar1 = &this->LandscapeGuid;
  uVar2 = pFVar1->B;
  uVar3 = (this->LandscapeGuid).C;
  uVar4 = (this->LandscapeGuid).D;
  (this->OriginalLandscapeGuid).A = pFVar1->A;
  (this->OriginalLandscapeGuid).B = uVar2;
  (this->OriginalLandscapeGuid).C = uVar3;
  (this->OriginalLandscapeGuid).D = uVar4;
  ChangeLandscapeGuidIfObjectIsInstanced(pFVar1,(UObject *)this);
  return;
}

// PostRegisterAllComponents @ 145f17500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::PostRegisterAllComponents(ALandscapeProxy *this)

{
  TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *pTVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  ALandscapeProxy *pAVar5;
  UWorld *pUVar6;
  ULandscapeInfo *this_00;
  ULandscapeSubsystem *this_01;
  TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *this_02;
  bool bVar7;
  FWeakObjectPtr local_res8;
  ALandscapeProxy *local_res10;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  if (((this->_padding_ & 0x20000000000) != 0) || (((uint)this->_padding_ >> 0x1e & 1) != 0)) {
    return;
  }
  if ((((this->LandscapeGuid).D == 0 && (this->LandscapeGuid).C == 0) &&
      (this->LandscapeGuid).B == 0) && (this->LandscapeGuid).A == 0) goto LAB_145f17683;
  lVar3 = (**(code **)(this->_padding_ + 0x18))();
  if (lVar3 != 0) {
    pUVar4 = ALandscape::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) {
      pUVar4 = ALandscapeStreamingProxy::StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar2) ||
         (((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8)
           != &pUVar4->_padding_ || (this == (ALandscapeProxy *)0x0)))) goto LAB_145f17655;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      this_02 = *(TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> **)(lVar3 + 0x200);
      pTVar1 = this_02 + *(int *)(lVar3 + 0x208);
      for (; this_02 != pTVar1; this_02 = this_02 + 1) {
        bVar7 = TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>::
                UEOpEquals<ALandscapeStreamingProxy_const_,bool>
                          (this_02,(TWeakObjectPtr<ALandscapeStreamingProxy_const_,FWeakObjectPtr> *
                                   )&local_res8);
        if (bVar7) {
          bVar7 = true;
          goto LAB_145f17651;
        }
      }
      bVar7 = false;
    }
    else {
      pAVar5 = (ALandscapeProxy *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 0x28));
      bVar7 = pAVar5 == this;
    }
LAB_145f17651:
    if (bVar7) goto LAB_145f17683;
  }
LAB_145f17655:
  pUVar6 = AActor::GetWorld((AActor *)this);
  this_00 = ULandscapeInfo::FindOrCreate(pUVar6,&this->LandscapeGuid);
  ULandscapeInfo::RegisterActor(this_00,this,true,true);
LAB_145f17683:
  pUVar6 = AActor::GetWorld((AActor *)this);
  if ((pUVar6 != (UWorld *)0x0) &&
     (this_01 = UWorld::GetSubsystem<ULandscapeSubsystem>(pUVar6),
     this_01 != (ULandscapeSubsystem *)0x0)) {
    ULandscapeSubsystem::RegisterActor(this_01,this);
  }
  UpdateRenderingMethod(this);
  return;
}

// PreSave @ 145f176d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::PreSave(ALandscapeProxy *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  AActor::PreSave((AActor *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Serialize @ 145f1d5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::Serialize(ALandscapeProxy *this,FArchive *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (this->LandscapeGuid).A;
  uVar6 = (this->LandscapeGuid).B;
  uVar7 = (this->LandscapeGuid).C;
  uVar8 = (this->LandscapeGuid).D;
  if (((param_1->field_0x28 & 4) != 0) && ((param_1->field_0x29 & 1) != 0)) {
    uVar1 = (this->OriginalLandscapeGuid).A;
    uVar2 = (this->OriginalLandscapeGuid).B;
    uVar3 = (this->OriginalLandscapeGuid).C;
    uVar4 = (this->OriginalLandscapeGuid).D;
    if ((((uVar4 != (this->LandscapeGuid).D || uVar3 != (this->LandscapeGuid).C) ||
         uVar2 != (this->LandscapeGuid).B) || uVar1 != (this->LandscapeGuid).A) &&
       (((uVar4 != 0 || uVar3 != 0) || uVar2 != 0) || uVar1 != 0)) {
      uVar1 = (this->OriginalLandscapeGuid).B;
      uVar2 = (this->OriginalLandscapeGuid).C;
      uVar3 = (this->OriginalLandscapeGuid).D;
      (this->LandscapeGuid).A = (this->OriginalLandscapeGuid).A;
      (this->LandscapeGuid).B = uVar1;
      (this->LandscapeGuid).C = uVar2;
      (this->LandscapeGuid).D = uVar3;
    }
  }
  AActor::Serialize((AActor *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLandscapeCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((param_1->field_0x28 & 4) != 0) && ((param_1->field_0x29 & 1) != 0)) {
    (this->LandscapeGuid).A = uVar5;
    (this->LandscapeGuid).B = uVar6;
    (this->LandscapeGuid).C = uVar7;
    (this->LandscapeGuid).D = uVar8;
  }
  return;
}

// SetLODGroupKeyInternal @ 145f1e020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::SetLODGroupKeyInternal(ALandscapeProxy *this,uint param_1)

{
  if (this->LODGroupKey != param_1) {
    this->LODGroupKey = param_1;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
    return;
  }
  return;
}

// SetLandscapeMaterialScalarParameterValue @ 145f1e090

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
ALandscapeProxy::SetLandscapeMaterialScalarParameterValue
          (ALandscapeProxy *this,FName param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (this->bUseDynamicMaterialInstance != false) {
    iVar3 = (this->LandscapeComponents).ArrayNum;
    pFVar7 = (this->LandscapeComponents).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->LandscapeComponents).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      lVar5 = *(longlong *)pFVar7;
      puVar6 = *(undefined8 **)(lVar5 + 0x580);
      iVar4 = *(int *)(lVar5 + 0x588);
      puVar2 = puVar6 + iVar4;
      while( true ) {
        if (*(int *)(lVar5 + 0x588) != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceDynamic>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar6 == puVar2) break;
        if ((UMaterialInstanceDynamic *)*puVar6 != (UMaterialInstanceDynamic *)0x0) {
          UMaterialInstanceDynamic::SetScalarParameterValue
                    ((UMaterialInstanceDynamic *)*puVar6,param_1,param_2);
        }
        puVar6 = puVar6 + 1;
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// SetLandscapeMaterialTextureParameterValue @ 145f1e190

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
ALandscapeProxy::SetLandscapeMaterialTextureParameterValue
          (ALandscapeProxy *this,FName param_1,UTexture *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (this->bUseDynamicMaterialInstance != false) {
    pFVar8 = (this->LandscapeComponents).AllocatorInstance.Data;
    uVar3 = (this->LandscapeComponents).ArrayNum;
    uVar6 = (ulonglong)(int)uVar3;
    pFVar1 = pFVar8 + uVar6 * 8;
    while( true ) {
      if ((this->LandscapeComponents).ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      lVar5 = *(longlong *)pFVar8;
      puVar7 = *(undefined8 **)(lVar5 + 0x580);
      iVar4 = *(int *)(lVar5 + 0x588);
      puVar2 = puVar7 + iVar4;
      while( true ) {
        if (*(int *)(lVar5 + 0x588) != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceDynamic>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar7 == puVar2) break;
        if ((UMaterialInstanceDynamic *)*puVar7 != (UMaterialInstanceDynamic *)0x0) {
          UMaterialInstanceDynamic::SetTextureParameterValue
                    ((UMaterialInstanceDynamic *)*puVar7,param_1,param_2);
        }
        puVar7 = puVar7 + 1;
      }
      uVar6 = (ulonglong)uVar3;
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// SetLandscapeMaterialVectorParameterValue @ 145f1e280

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
ALandscapeProxy::SetLandscapeMaterialVectorParameterValue
          (ALandscapeProxy *this,FName param_1,FLinearColor *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_48;
  
  if (this->bUseDynamicMaterialInstance != false) {
    pFVar8 = (this->LandscapeComponents).AllocatorInstance.Data;
    uVar3 = (this->LandscapeComponents).ArrayNum;
    uVar6 = (ulonglong)(int)uVar3;
    pFVar1 = pFVar8 + uVar6 * 8;
    while( true ) {
      if ((this->LandscapeComponents).ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      lVar5 = *(longlong *)pFVar8;
      puVar7 = *(undefined8 **)(lVar5 + 0x580);
      iVar4 = *(int *)(lVar5 + 0x588);
      puVar2 = puVar7 + iVar4;
      while( true ) {
        if (*(int *)(lVar5 + 0x588) != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceDynamic>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar7 == puVar2) break;
        if ((UMaterialInstanceDynamic *)*puVar7 != (UMaterialInstanceDynamic *)0x0) {
          local_48._0_8_ = *(undefined8 *)&param_2->field0_0x0;
          local_48._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
          UMaterialInstanceDynamic::SetVectorParameterValue
                    ((UMaterialInstanceDynamic *)*puVar7,param_1,(FLinearColor *)&local_48._s_0);
        }
        puVar7 = puVar7 + 1;
      }
      uVar6 = (ulonglong)uVar3;
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// SetVirtualTextureRenderPassType @ 145f1e450

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
ALandscapeProxy::SetVirtualTextureRenderPassType
          (ALandscapeProxy *this,ERuntimeVirtualTextureMainPassType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (param_1 != this->VirtualTextureRenderPassType) {
    this->VirtualTextureRenderPassType = param_1;
    pFVar3 = (this->LandscapeComponents).AllocatorInstance.Data;
    iVar2 = (this->LandscapeComponents).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LandscapeComponents).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) break;
      if (*(UActorComponent **)pFVar3 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderStateDirty(*(UActorComponent **)pFVar3);
      }
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// UnregisterAllComponents @ 145f1fdb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::UnregisterAllComponents(ALandscapeProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FUObjectItem *pFVar4;
  ULandscapeInfo *this_00;
  ULandscapeSubsystem *this_01;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 != (UWorld *)0x0) {
    pUVar3 = AActor::GetWorld((AActor *)this);
    if (pUVar3 == (UWorld *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0) {
      pUVar3 = AActor::GetWorld((AActor *)this);
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
         ((((this->LandscapeGuid).D != 0 || (this->LandscapeGuid).C != 0) ||
          (this->LandscapeGuid).B != 0) || (this->LandscapeGuid).A != 0)) {
        this_00 = (ULandscapeInfo *)(**(code **)(this->_padding_ + 0x18))();
        if (this_00 != (ULandscapeInfo *)0x0) {
          ULandscapeInfo::UnregisterActor(this_00,this);
        }
        pUVar3 = AActor::GetWorld((AActor *)this);
        this_01 = UWorld::GetSubsystem<ULandscapeSubsystem>(pUVar3);
        if (this_01 != (ULandscapeSubsystem *)0x0) {
          ULandscapeSubsystem::UnregisterActor(this_01,this);
        }
      }
    }
  }
  AActor::UnregisterAllComponents((AActor *)this,param_1);
  return;
}

// UpdateRenderingMethod @ 145f20020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall ALandscapeProxy::UpdateRenderingMethod(ALandscapeProxy *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  UStaticMeshComponent *pUVar3;
  UActorComponent *this_00;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStackY_178 [32];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146 [14];
  FMaterialAudit local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7630,"ALandscapeProxy::UpdateRenderingMethod",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
               ,0x1dce);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7630);
  }
  pTVar5 = CVarRenderNaniteLandscape.Ref;
  if ((this->LandscapeComponents).ArrayNum != 0) {
    bVar11 = false;
    bVar6 = IsInParallelGameThread();
    if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pTVar5->ShadowedValue[0] != 0) && ((this->NaniteComponents).ArrayNum != 0)) {
      iVar7 = (**(code **)(GEngine->_padding_ + 0x2c8))();
      bVar6 = UseNanite(GRHIGlobals.ShaderPlatformForFeatureLevel[iVar7],true,true);
      bVar11 = false;
      if (bVar6) {
        bVar11 = -1 < CpuChannel->Enabled;
        if (bVar11) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId7553,"ALandscapeProxy::AuditMaterials",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                     ,0x1d81);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7553);
        }
        pFVar9 = (this->NaniteComponents).AllocatorInstance.Data;
        iVar7 = (this->NaniteComponents).ArrayNum;
        pFVar1 = pFVar9 + (longlong)iVar7 * 8;
        while( true ) {
          if ((this->NaniteComponents).ArrayNum != iVar7) {
            `TCheckedPointerIterator<TObjectPtr<ULandscapeNaniteComponent>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_148);
          }
          if (pFVar9 == pFVar1) {
            if (bVar11) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            bVar11 = true;
            goto LAB_145f202cf;
          }
          pUVar3 = *(UStaticMeshComponent **)pFVar9;
          if (pUVar3 == (UStaticMeshComponent *)0x0) goto LAB_145f202a5;
          local_138.bCompatibleWithLumenCardSharing = '\0';
          local_138.bHasSky = '\0';
          local_138.bHasMasked = '\0';
          local_138.bHasAnyError = '\0';
          local_138.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.AssetName.Data.ArrayNum = 0;
          local_138.AssetName.Data.ArrayMax = 0;
          local_138.Entries.AllocatorInstance.SecondaryData =
               (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
          local_138.Entries.ArrayNum = 0;
          local_138.Entries.ArrayMax = 4;
          local_138.FallbackMaterial = (UMaterialInterface *)0x0;
          Nanite::AuditMaterials(pUVar3,&local_138,true);
          pUVar8 = AActor::GetWorld((AActor *)this);
          bVar6 = Nanite::IsMaskingAllowed(pUVar8,pUVar3->bForceNaniteForMasked);
          if (((local_138.bHasAnyError != 0) || (local_138.bHasSky != '\0')) ||
             ((!bVar6 && (local_138.bHasMasked != '\0')))) break;
          if (local_138.Entries.AllocatorInstance.SecondaryData !=
              (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
            FMemory::Free((void *)local_138.Entries.AllocatorInstance.SecondaryData);
          }
          if (local_138.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.AssetName.Data.AllocatorInstance.Data);
          }
          pFVar9 = pFVar9 + 8;
        }
        if (local_138.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_138.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_138.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AssetName.Data.AllocatorInstance.Data);
        }
LAB_145f202a5:
        if (bVar11) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        bVar11 = false;
      }
    }
LAB_145f202cf:
    pFVar9 = (this->LandscapeComponents).AllocatorInstance.Data;
    iVar7 = (this->LandscapeComponents).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar7 * 8;
    while( true ) {
      if ((this->LandscapeComponents).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_147);
      }
      if (pFVar9 == pFVar1) break;
      this_00 = *(UActorComponent **)pFVar9;
      if ((this_00 != (UActorComponent *)0x0) &&
         ((bool)*(char *)((longlong)&this_00[8].PrimaryComponentTick._padding_ + 1) != bVar11)) {
        *(bool *)((longlong)&this_00[8].PrimaryComponentTick._padding_ + 1) = bVar11;
        UActorComponent::MarkRenderStateDirty(this_00);
      }
      pFVar9 = pFVar9 + 8;
    }
    pFVar9 = (this->NaniteComponents).AllocatorInstance.Data;
    iVar7 = (this->NaniteComponents).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar7 * 8;
    while( true ) {
      if ((this->NaniteComponents).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeNaniteComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_146);
      }
      if (pFVar9 == pFVar1) break;
      if (*(ULandscapeNaniteComponent **)pFVar9 != (ULandscapeNaniteComponent *)0x0) {
        ULandscapeNaniteComponent::SetEnabled(*(ULandscapeNaniteComponent **)pFVar9,bVar11);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateSharedProperties @ 145f203c0

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
ALandscapeProxy::UpdateSharedProperties(ALandscapeProxy *this,ULandscapeInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((*(uint *)((longlong)&this->_padding_ + 4) != (param_1->LandscapeGuid).D ||
       (uint)this->_padding_ != (param_1->LandscapeGuid).C) ||
      *(uint *)((longlong)&this->_padding_ + 4) != (param_1->LandscapeGuid).B) ||
      (uint)this->_padding_ != (param_1->LandscapeGuid).A) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LandscapeGuid == InLandscapeInfo->LandscapeGuid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x715,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// _getUObject @ 145f20e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall ALandscapeProxy::_getUObject(ALandscapeProxy *this)

{
  return (UObject *)&this[-1].FoliageCache.CachedGrassComps.Hash;
}

// LandscapeExportHeightmapToRenderTarget @ 145f315b0

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
ALandscapeProxy::LandscapeExportHeightmapToRenderTarget
          (ALandscapeProxy *this,UTextureRenderTarget2D *param_1,bool param_2,bool param_3)

{
  return true;
}

// AddExclusionBox @ 145f49620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ALandscapeProxy::AddExclusionBox(FWeakObjectPtr param_1,TBox<double> *param_2)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes> FVar3;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FWeakObjectPtr local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar3 = StatPtr_STAT_GrassExclusionVolumes;
  local_res8 = param_1;
  if (StatPtr_STAT_GrassExclusionVolumes ==
      (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)0x0) {
    pFVar2 = ::FName::FName(&local_res10,"STAT_GrassExclusionVolumes");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GrassExclusionVolumes,*pFVar2,
                       L"Grass Exclusion Volumes","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res10 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_28.NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar1 & 0xffffafffffffffff | 0xa00000000000);
    local_res10 = FVar1;
    FThreadStats::AddStatMessage(this,&local_28);
    FStatsTrace::Add(&local_res10,1);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  local_28.StatData.Pad = (uchar  [8])&local_res8;
  local_28.NameAndInfo = (FStatNameAndInfo)param_2;
  TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FWeakObjectPtr_const_&,UE::Math::TBox<double>_const_&>_>
            ((TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
              *)&GGrassExclusionBoxes,
             (TPairInitializer<FWeakObjectPtr_const_&,UE::Math::TBox<double>_const_&> *)&local_res10
             ,(bool *)&local_28);
  GGrassExclusionChangeTag = GGrassExclusionChangeTag + 1;
  return;
}

// DebugDrawExclusionBoxes @ 145f4f910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ALandscapeProxy::DebugDrawExclusionBoxes(UWorld *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  ulonglong uStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  if (bGGrassDrawExclusionVolumes) {
    TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)&local_90._s_0,
               (TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
                *)&GGrassExclusionBoxes);
    uVar7 = local_90._s_0.X;
    fVar6 = __real_bf800000;
    dVar5 = __real_3fe0000000000000;
    unique0x100003e5 = uStack_78;
    auStack_e0._8_8_ = local_90._s_0.Z;
    local_b8 = (TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
                *)&GGrassExclusionBoxes;
    local_b0 = 0;
    auStack_e0._0_8_ = local_90._s_0.Y;
    local_c8 = local_70;
    uStack_c4 = uStack_6c;
    uStack_c0 = uStack_68;
    uVar11 = uStack_78 >> 0x20;
    if ((int)(uStack_78 >> 0x20) < *(int *)((longlong)local_90._s_0.Z + 0x18)) {
      do {
        lVar10 = (longlong)(int)uVar11;
        bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)uVar7 + lVar10 * 0x48));
        if (bVar8) {
          lVar4 = *(longlong *)uVar7;
          dVar1 = *(double *)(lVar4 + 0x20 + lVar10 * 0x48);
          dVar2 = *(double *)(lVar4 + 0x28 + lVar10 * 0x48);
          dVar3 = *(double *)(lVar4 + 0x30 + lVar10 * 0x48);
          local_a8._s_0.X = (dVar1 - *(double *)(lVar4 + 8 + lVar10 * 0x48)) * dVar5;
          local_a8._s_0.Y = (dVar2 - *(double *)(lVar4 + 0x10 + lVar10 * 0x48)) * dVar5;
          local_90._s_0.X = (dVar1 + *(double *)(lVar4 + 8 + lVar10 * 0x48)) * dVar5;
          local_90._s_0.Y = (dVar2 + *(double *)(lVar4 + 0x10 + lVar10 * 0x48)) * dVar5;
          local_a8._s_0.Z = (dVar3 - *(double *)(lVar4 + 0x18 + lVar10 * 0x48)) * dVar5;
          local_90._s_0.Z = (dVar3 + *(double *)(lVar4 + 0x18 + lVar10 * 0x48)) * dVar5;
          DrawDebugBox(param_1,(TVector<double> *)&local_90._s_0,(TVector<double> *)&local_a8._s_0,
                       &FColor::Red,false,fVar6,'\0',0.0);
        }
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar11 = (ulonglong)uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        uVar12 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar12 < 4) {
          iVar9 = 1;
        }
        else {
          uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar10 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_b8->HashSize < iVar9)) || (iVar9 < local_b8->HashSize)) {
          local_b8->HashSize = iVar9;
          TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
  }
  return;
}

// FlushGrassComponents @ 145f51670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
ALandscapeProxy::FlushGrassComponents
          (ALandscapeProxy *this,
          TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
          *param_1,bool param_2)

{
  int *piVar1;
  FCachedLandscapeFoliage *this_00;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  USceneComponent *pUVar7;
  code *pcVar8;
  undefined8 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ALandscapeProxy *pAVar15;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator> *pTVar16
  ;
  bool bVar17;
  int iVar18;
  longlong lVar19;
  UObject *pUVar20;
  TObjectPtr<UHierarchicalInstancedStaticMeshComponent>_u_0 TVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp> FVar23;
  undefined8 *puVar24;
  UClass *pUVar25;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FString *pFVar26;
  uint uVar27;
  ForElementType<FSetElementId> FVar28;
  ulonglong uVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  ForAnyElementType FVar32;
  FName FVar33;
  wchar_t *pwVar34;
  undefined1 *puVar35;
  uint uVar36;
  wchar_t *pwVar37;
  int iVar38;
  undefined1 *puVar39;
  uint *puVar40;
  FNameEntryId FVar41;
  ForElementType<UHierarchicalInstancedStaticMeshComponent_*> FVar42;
  undefined1 auStackY_328 [32];
  char local_2c8;
  undefined1 local_2c7;
  undefined4 local_2c6;
  undefined4 local_2c2;
  undefined4 local_2be;
  FName local_2b8;
  byte local_2b0;
  FName local_2a8;
  byte local_2a0;
  FName local_298;
  ForAnyElementType local_290;
  undefined8 local_288;
  undefined1 local_280 [4];
  FColor_u_0 local_27c;
  FName local_278;
  TObjectPtr<UHierarchicalInstancedStaticMeshComponent>_u_0 local_270;
  uint local_268;
  uint uStack_264;
  ForAnyElementType local_260;
  uint local_258;
  int local_254;
  FColor_u_0 local_250;
  FColor_u_0 local_24c;
  ALandscapeProxy *local_248;
  FName local_240;
  FName local_230;
  FName local_228 [2];
  undefined8 *local_218;
  TReferenceControllerBase<1> *pTStack_210;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  LARGE_INTEGER local_1d8;
  FStatMessage local_1d0;
  undefined1 local_1c0 [12];
  uint local_1b4;
  longlong local_1b0;
  uint local_1a8;
  int local_1a4;
  TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
  *local_198;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  TArray<UHierarchicalInstancedStaticMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
  local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2c8 = param_2;
  local_298 = (FName)param_1;
  local_248 = this;
  if (param_1 ==
      (TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator> *)
      0x0) {
    piVar1 = &(this->FoliageComponents).ArrayMax;
    uVar27 = 0;
    (this->FoliageComponents).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->FoliageComponents).AllocatorInstance,0,piVar1);
    }
    this_00 = &this->FoliageCache;
    bVar17 = 1 < (this->FoliageCache).CachedGrassComps.HashSize;
    if (!bVar17) {
      TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
      ::UnhashElements(&this_00->CachedGrassComps);
    }
    TSparseArray<TSparseSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x8
                     );
    puVar35 = &(this->FoliageCache).CachedGrassComps.Elements.field_0xc;
    *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x8 = 0;
    if (*(int *)puVar35 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar35);
    }
    *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x34 = 0;
    iVar38 = *(int *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x2c;
    *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x28 = 0;
    if ((iVar38 < 0) || (0x80 < iVar38)) {
      *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->FoliageCache).CachedGrassComps.Elements.field_0x10,0);
    }
    if (bVar17) {
      (this->FoliageCache).CachedGrassComps.HashSize = 1;
      TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
      ::Rehash(&this_00->CachedGrassComps);
    }
    local_118.AllocatorInstance.SecondaryData =
         (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0x18;
    AActor::
    GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              ((AActor *)this,&local_118,false);
    iVar38 = local_118.ArrayNum;
    uVar29 = (ulonglong)local_118.ArrayNum;
    FVar42 = (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData !=
        (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)0x0) {
      FVar42 = local_118.AllocatorInstance.SecondaryData;
    }
    local_270.DebugPtr =
         (UHierarchicalInstancedStaticMeshComponent *)((longlong)FVar42 + uVar29 * 8);
    while( true ) {
      TVar21 = local_270;
      if ((uint)uVar29 != iVar38) {
        local_2c7 = 0;
        `TCheckedPointerIterator<UHierarchicalInstancedStaticMeshComponent_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_2c7);
      }
      pAVar15 = local_248;
      if (FVar42 == (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)TVar21.DebugPtr)
      break;
      plVar6 = *(longlong **)FVar42;
      FVar23 = StatPtr_STAT_FoliageGrassDestoryComp;
      if (StatPtr_STAT_FoliageGrassDestoryComp ==
          (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)0x0) {
        pFVar22 = ::FName::FName(&local_160,"STAT_FoliageGrassDestoryComp");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageGrassDestoryComp,
                            *pFVar22,L"Grass Destroy Comps","STATGROUP_Foliage","STATCAT_Advanced",
                            L"Foliage",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_2a8.ComparisonIndex.Value = 0;
      local_2a8.Number = 0;
      local_2a0 = 0;
      FVar33 = *(FName *)FVar23;
      if ((FVar33.ComparisonIndex.Value.Value != 0) || (FVar33.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_27c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_27c._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          local_2a0 = local_2a0 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_278.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
            local_278.Number = FVar33.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_278,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                       ,0x95b);
            local_2a0 = local_2a0 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_2a8 = FVar33;
          local_298 = FVar33;
          FThreadStats::AddMessage(FVar33,CycleScopeStart);
          local_2a0 = local_2a0 | 4;
        }
      }
      (**(code **)(*plVar6 + 0xc38))(plVar6);
      local_2c2 = 0;
      (**(code **)(*plVar6 + 0x518))(plVar6,&local_2c2);
      (**(code **)(*plVar6 + 0x4a0))(plVar6,0);
      if ((local_2a0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_2a0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_2a0 & 4) != 0) {
        FThreadStats::AddMessage(local_2a8,CycleScopeEnd);
      }
      uVar29 = (ulonglong)(uint)local_118.ArrayNum;
      FVar42 = (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)((longlong)FVar42 + 8);
      local_2a0 = 0;
    }
    if ((local_248->_padding_ == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("RootComponent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                            ,0x961,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_290.Data = (FScriptContainerElement *)0x0;
    local_288 = 0;
    pFVar31 = *(FScriptContainerElement **)(pAVar15->_padding_ + 0xe8);
    pFVar2 = pFVar31 + (longlong)*(int *)(pAVar15->_padding_ + 0xf0) * 8;
    FVar32.Data = local_290.Data;
    for (; local_290.Data = FVar32.Data, pFVar31 != pFVar2; pFVar31 = pFVar31 + 8) {
      lVar19 = *(longlong *)pFVar31;
      if (lVar19 != 0) {
        pUVar25 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
        lVar19 = *(longlong *)(lVar19 + 0x10);
        iVar38 = (int)pUVar25->_padding_;
        if ((iVar38 <= *(int *)(lVar19 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar38 * 8) ==
            &pUVar25->_padding_)) {
          if ((local_290.Data <= pFVar31) &&
             ((pFVar31 < local_290.Data + (longlong)local_288._4_4_ * 8 &&
              (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar38 = (uint)local_288;
          if ((uint)local_288 == local_288._4_4_) {
            iVar38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_290,(int *)((longlong)&local_288 + 4));
          }
          local_288 = CONCAT44(local_288._4_4_,iVar38 + 1);
          pUVar20 = *(UObject **)pFVar31;
          *(UObject **)(local_290.Data + (longlong)iVar38 * 8) = pUVar20;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar20);
          }
        }
        uVar27 = (uint)local_288;
      }
      FVar32.Data = local_290.Data;
    }
    local_260.Data = (FScriptContainerElement *)0x0;
    local_258 = uVar27;
    if (uVar27 == 0) {
      local_254 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar27,0,&local_260,uVar27,&local_254);
      memcpy(local_260.Data,FVar32.Data,(longlong)(int)uVar27 << 3);
    }
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
    uVar29 = (ulonglong)(int)local_258;
    local_27c.Bits = local_258;
    local_270.DebugPtr = (UHierarchicalInstancedStaticMeshComponent *)(local_260.Data + uVar29 * 8);
    FVar32.Data = local_260.Data;
LAB_145f5211f:
    do {
      TVar21 = local_270;
      local_298 = (FName)FVar32.Data;
      if (local_258 != (uint)uVar29) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_280);
      }
      if ((UHierarchicalInstancedStaticMeshComponent *)FVar32.Data == TVar21.DebugPtr) {
        if ((UHierarchicalInstancedStaticMeshComponent *)local_260.Data !=
            (UHierarchicalInstancedStaticMeshComponent *)0x0) {
          FMemory::Free(local_260.Data);
        }
        if (local_118.AllocatorInstance.SecondaryData ==
            (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)0x0) {
          return;
        }
        FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
        return;
      }
      pUVar7 = *(USceneComponent **)FVar32.Data;
      FVar23 = StatPtr_STAT_FoliageGrassDestoryComp;
      if (StatPtr_STAT_FoliageGrassDestoryComp ==
          (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)0x0) {
        pFVar22 = ::FName::FName(&local_158,"STAT_FoliageGrassDestoryComp");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageGrassDestoryComp,
                            *pFVar22,L"Grass Destroy Comps","STATGROUP_Foliage","STATCAT_Advanced",
                            L"Foliage",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar33 = *(FName *)FVar23;
      bVar11 = false;
      bVar17 = false;
      local_240.ComparisonIndex.Value = 0;
      local_240.Number = 0;
      FVar41 = FVar33.ComparisonIndex.Value;
      uVar27 = FVar33.Number;
      if ((FVar41.Value == 0) && (uVar27 == 0)) {
LAB_145f52249:
        bVar12 = false;
        FVar33 = local_240;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_24c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_24c._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          bVar11 = false;
          bVar17 = true;
          if (-1 < CpuChannel->Enabled) {
            local_228[0].ComparisonIndex.Value = FVar41.Value;
            local_228[0].Number = uVar27;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (local_228,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                       ,0x96b);
            bVar11 = true;
            bVar17 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_145f52249;
        local_278.ComparisonIndex.Value = FVar41.Value;
        local_278.Number = uVar27;
        local_240 = FVar33;
        FThreadStats::AddMessage(FVar33,CycleScopeStart);
        bVar11 = false;
        bVar12 = true;
      }
      if (pUVar7 == (USceneComponent *)0x0) {
        pFVar26 = GetTypeName<UHierarchicalInstancedStaticMeshComponent>(&local_128);
        if ((pFVar26->Data).ArrayNum == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar37);
      }
      pUVar25 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
      iVar38 = (int)pUVar25->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar38) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar38 * 8) !=
          &pUVar25->_padding_)) {
        pFVar26 = GetTypeName<UHierarchicalInstancedStaticMeshComponent>(&local_148);
        pwVar37 = L"";
        if ((pFVar26->Data).ArrayNum == 0) {
          pwVar34 = L"";
        }
        else {
          pwVar34 = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
        }
        pFVar26 = GetFullNameForCastLogError<USceneComponent>(&local_138,pUVar7);
        if ((pFVar26->Data).ArrayNum != 0) {
          pwVar37 = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar37,pwVar34);
      }
      (**(code **)(pUVar7->_padding_ + 0xc38))(pUVar7);
      local_2be = 0;
      (**(code **)(pUVar7->_padding_ + 0x518))(pUVar7,&local_2be);
      (**(code **)(pUVar7->_padding_ + 0x4a0))(pUVar7,0);
      if (bVar17) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((!bVar12) || (FVar33 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false))
         || (FThreadStats::TlsSlot == 0xffffffff)) {
LAB_145f5238f:
        uVar29 = (ulonglong)local_27c.Bits;
        FVar32.Data = (FScriptContainerElement *)((longlong)local_298 + 8);
        goto LAB_145f5211f;
      }
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) goto LAB_145f5238f;
      local_1d0.NameAndInfo.Index.Value = local_240.ComparisonIndex.Value;
      local_1d0.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1d8);
      local_1d0.StatData.Pad[4] = '\0';
      local_1d0.StatData.Pad[5] = '\0';
      local_1d0.StatData.Pad[6] = '\0';
      local_1d0.StatData.Pad[7] = '\0';
      local_1d0.StatData.Pad[0] = local_1d8.s.LowPart._0_1_;
      local_1d0.StatData.Pad[1] = local_1d8.s.LowPart._1_1_;
      local_1d0.StatData.Pad[2] = local_1d8.s.LowPart._2_1_;
      local_1d0.StatData.Pad[3] = local_1d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_1d0);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
        goto LAB_145f5238f;
      }
      FThreadStats::Flush(this_01,false,false);
      uVar29 = (ulonglong)local_27c.Bits;
      FVar32.Data = (FScriptContainerElement *)((longlong)local_298 + 8);
    } while( true );
  }
  TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_1c0,&(this->FoliageCache).CachedGrassComps);
  iVar38 = 0;
  if (local_1a4 < *(int *)(local_1b0 + 0x18)) {
    do {
      iVar30 = local_1a4;
      uVar9 = local_1c0._0_8_;
      lVar19 = (longlong)local_1a4;
      pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)local_1c0._0_8_ + lVar19 * 0x68)
                                   );
      if (pUVar20 == (UObject *)0x0) {
LAB_145f5179a:
        TVar21.DebugPtr =
             (UHierarchicalInstancedStaticMeshComponent *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)uVar9 + 0x28 + lVar19 * 0x68));
        if (TVar21.DebugPtr != (UHierarchicalInstancedStaticMeshComponent *)0x0) {
          FVar23 = StatPtr_STAT_FoliageGrassDestoryComp;
          if (StatPtr_STAT_FoliageGrassDestoryComp ==
              (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)0x0) {
            pFVar22 = ::FName::FName(&local_150,"STAT_FoliageGrassDestoryComp");
            FVar23 = (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageGrassDestoryComp,
                                *pFVar22,L"Grass Destroy Comps","STATGROUP_Foliage",
                                "STATCAT_Advanced",L"Foliage",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          local_2b8.ComparisonIndex.Value = 0;
          local_2b8.Number = 0;
          local_2b0 = 0;
          FVar33 = *(FName *)FVar23;
          FVar41 = FVar33.ComparisonIndex.Value;
          uVar27 = FVar33.Number;
          if ((FVar41.Value != 0) || (uVar27 != 0)) {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_250.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_250._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
              local_2b0 = local_2b0 | 1;
              if (-1 < CpuChannel->Enabled) {
                local_230.ComparisonIndex.Value = FVar41.Value;
                local_230.Number = uVar27;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_230,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                           ,0x93d);
                local_2b0 = local_2b0 | 2;
              }
            }
            if (FThreadStats::bPrimaryEnable != false) {
              local_2b8 = FVar33;
              local_268 = FVar41.Value;
              uStack_264 = uVar27;
              FThreadStats::AddMessage(FVar33,CycleScopeStart);
              local_2b0 = local_2b0 | 4;
            }
          }
          (**(code **)(*(longlong *)TVar21.DebugPtr + 0xc38))(TVar21.DebugPtr);
          local_2c6 = 0;
          (**(code **)(*(longlong *)TVar21.DebugPtr + 0x518))(TVar21.DebugPtr,&local_2c6);
          (**(code **)(*(longlong *)TVar21.DebugPtr + 0x4a0))(TVar21.DebugPtr,0);
          pAVar15 = local_248;
          local_270.DebugPtr = TVar21.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar21.DebugPtr);
          }
          TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_>
          ::RemoveSwap(&pAVar15->FoliageComponents,
                       (TObjectPtr<UHierarchicalInstancedStaticMeshComponent> *)&local_270.ObjectPtr
                       ,Default);
          if ((local_2b0 & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_2b0 & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_2b0 & 4) != 0) {
            FThreadStats::AddMessage(local_2b8,CycleScopeEnd);
          }
          local_2b0 = 0;
          param_1 = (TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                     *)local_298;
        }
        TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
        ::RemoveByIndex(local_198,iVar30);
      }
      else {
        uVar27 = ((uint)((ulonglong)pUVar20 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar20 >> 4)) *
                 -0x7a143595;
        uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
        if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
          FVar4 = (param_1->Hash).SecondaryData;
          FVar28 = (ForElementType<FSetElementId>)&param_1->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar28 = FVar4;
          }
          iVar18 = *(int *)((longlong)FVar28 +
                           (ulonglong)(param_1->HashSize - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
          if (iVar18 != -1) {
            do {
              if (*(UObject **)(*(longlong *)&param_1->Elements + (longlong)iVar18 * 0x10) ==
                  pUVar20) goto LAB_145f5179a;
              iVar18 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar18 * 0x10);
            } while (iVar18 != -1);
          }
        }
      }
      local_1a8 = local_1a8 & ~local_1b4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1c0 + 8));
      param_2 = (bool)local_2c8;
    } while (local_1a4 < *(int *)(local_1b0 + 0x18));
  }
  if (param_2 != false) {
    iVar30 = *(int *)&(param_1->Elements).field_0x28;
    local_1f8 = &(param_1->Elements).field_0x10;
    uStack_1fc = 1;
    iStack_1ec = iVar38;
    local_1e8 = iVar38;
    if (iVar30 != 0) {
      puVar40 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar40 == (uint *)0x0) {
        puVar40 = (uint *)local_1f8;
      }
      uVar27 = *puVar40;
      iVar38 = 0;
      local_1e8 = 0;
      while (uVar27 == 0) {
        iVar38 = iVar38 + 1;
        local_1e8 = local_1e8 + 0x20;
        if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar38) goto LAB_145f51a31;
        uVar27 = puVar40[iVar38];
      }
      uStack_1fc = -uVar27 & uVar27;
      uVar29 = (ulonglong)uStack_1fc * 2 + 1;
      lVar19 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_248 = (ALandscapeProxy *)CONCAT44(local_248._4_4_,(int)lVar19);
      iStack_1ec = (int)lVar19 + -1 + local_1e8;
      if (iVar30 < iStack_1ec) {
LAB_145f51a31:
        iStack_1ec = iVar30;
      }
    }
    puVar35 = &(param_1->Elements).field_0x10;
    iStack_1e0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar27 = *(uint *)&(param_1->Elements).field_0x28;
    uStack_1f0 = 0xffffffff;
    TStack_188.CurrentBitIndex = iStack_1ec;
    TStack_188.UnvisitedBitMask = 0xffffffff;
    TStack_188._padding_ = CONCAT44(uStack_1fc,iVar38);
    uVar36 = uVar27 & 0xffffffe0;
    iVar30 = (int)uVar27 >> 5;
    TStack_188._28_4_ = iStack_1ec;
    TStack_188.BaseBitIndex = local_1e8;
    uStack_168 = CONCAT44(uStack_1dc,iStack_1e0);
    local_208 = param_1;
    iStack_200 = iVar38;
    iStack_1e4 = iStack_1ec;
    local_190 = param_1;
    TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f8;
    if ((((int)uVar27 < 0) || (*(int *)&(param_1->Elements).field_0x28 < (int)uVar27)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar33 = local_298;
    puVar14 = _UNK_150651568;
    puVar13 = ___xmm_00000000000000000000000000000010;
    uVar3 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar27 != uVar3) {
      puVar5 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar39 = puVar35;
      if (puVar5 != (undefined1 *)0x0) {
        puVar39 = puVar5;
      }
      uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar39 + (longlong)iVar30 * 4);
      while (uVar27 == 0) {
        iVar30 = iVar30 + 1;
        uVar36 = uVar36 + 0x20;
        uVar27 = uVar3;
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar30)
        goto LAB_145f51b51;
        uVar27 = *(uint *)(puVar39 + (longlong)iVar30 * 4);
      }
      uVar29 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_268 = (uint)lVar19;
      uVar27 = (local_268 - 1) + uVar36;
      if ((int)uVar3 < (int)uVar27) {
        uVar27 = uVar3;
      }
    }
LAB_145f51b51:
    while( true ) {
      pTVar16 = local_190;
      if (*(int *)&(local_190->Elements).field_0x8 - *(int *)&(local_190->Elements).field_0x34 !=
          (int)uStack_168) {
        local_2c8 = '\0';
        `TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2c8);
      }
      if (((TStack_188.CurrentBitIndex == uVar27) &&
          (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar35)) &&
         ((FName)pTVar16 == FVar33)) break;
      lVar19 = *(longlong *)
                (*(longlong *)&pTVar16->Elements + (longlong)TStack_188.CurrentBitIndex * 0x10);
      puVar24 = ::operator_new(0x78);
      local_218 = puVar13;
      pTStack_210 = (TReferenceControllerBase<1> *)puVar14;
      if (puVar24 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar24 + 1) = 1;
        *(undefined4 *)((longlong)puVar24 + 0xc) = 1;
        *puVar24 = &
                   ___7__TIntrusiveReferenceController_UFLandscapeComponentGrassData___00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)puVar24 + 0x14) = 0;
        puVar24[5] = 0;
        puVar24[6] = 0;
        puVar24[10] = 0;
        puVar24[0xc] = 0;
        local_218 = puVar24 + 2;
        *(undefined4 *)(puVar24 + 2) = 0xffffffff;
        puVar24[3] = 0;
        puVar24[4] = 0;
        puVar24[7] = 0;
        *(undefined4 *)(puVar24 + 8) = 0;
        *(undefined4 *)((longlong)puVar24 + 0x44) = 0x80;
        *(undefined4 *)(puVar24 + 9) = 0xffffffff;
        *(undefined4 *)((longlong)puVar24 + 0x4c) = 0;
        puVar24[0xb] = 0;
        puVar24[0xd] = 0;
        puVar24[0xe] = 0;
        pTStack_210 = (TReferenceControllerBase<1> *)puVar24;
        if ((local_218 == (undefined8 *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar9 = *(undefined8 *)(lVar19 + 0x728);
      pTVar10 = *(TReferenceControllerBase<1> **)(lVar19 + 0x730);
      *(undefined8 **)(lVar19 + 0x728) = local_218;
      *(TReferenceControllerBase<1> **)(lVar19 + 0x730) = pTStack_210;
      local_218 = (undefined8 *)uVar9;
      pTStack_210 = pTVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
    }
  }
  return;
}

// ProcessAsyncGrassInstanceTasks @ 145f5a1a0

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

void __thiscall
ALandscapeProxy::ProcessAsyncGrassInstanceTasks
          (ALandscapeProxy *this,bool param_1,bool param_2,
          TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
          *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  void *pvVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_2_::FStat_STAT_Grass_FinishAsync>
  FVar15;
  FThreadSafeStaticStat<FStat_STAT_FoliageGrassEndComp> FVar16;
  UGrassInstancedStaticMeshComponent *this_00;
  UClass *pUVar17;
  UObject *pUVar18;
  FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_34_::FStat_STAT_FoliageGrassEndComp_AcceptPrebuiltTree>
  FVar19;
  UWorld *pUVar20;
  FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_37_::FStat_STAT_FoliageGrassEndComp_SyncUpdate>
  FVar21;
  FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp> FVar22;
  TObjectPtr<UHierarchicalInstancedStaticMeshComponent>_u_0 TVar23;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  uint uVar26;
  ForElementType<FSetElementId> FVar27;
  FNameEntryId FVar28;
  longlong lVar29;
  TArray<FAsyncTask<FAsyncGrassTask>_*,TSizedDefaultAllocator<32>_> *pTVar30;
  FAsyncTaskBase *this_01;
  FName local_208;
  undefined4 local_1f8 [2];
  FName local_1f0;
  byte local_1e8;
  FName local_1e0;
  byte local_1d8;
  FName local_1d0;
  byte local_1c8;
  FName local_1c0;
  byte local_1b8;
  FName local_1b0;
  FAsyncTaskBase *local_1a8;
  longlong local_1a0;
  FColor_u_0 local_198;
  FColor_u_0 local_194;
  FColor_u_0 local_190;
  FColor_u_0 local_18c;
  FColor_u_0 local_188;
  uint local_184;
  FName local_180;
  FName local_178;
  uint local_170;
  uint uStack_16c;
  FName local_168;
  uint local_160;
  uint uStack_15c;
  FName local_158;
  uint local_150;
  uint uStack_14c;
  FName local_148;
  uint local_140;
  uint uStack_13c;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  TArray<FAsyncTask<FAsyncGrassTask>_*,TSizedDefaultAllocator<32>_> *local_128;
  LARGE_INTEGER local_120;
  FName local_118;
  FName local_110;
  LARGE_INTEGER local_108;
  TObjectPtr<UHierarchicalInstancedStaticMeshComponent>_u_0 local_100;
  undefined8 local_f8;
  FStatMessage local_f0;
  FString local_e0;
  FString local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68 [5];
  
  uVar26 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_Grass_FinishAsync =
         (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_2_::FStat_STAT_Grass_FinishAsync>
          )0x0;
    pFVar14 = ::FName::FName(&local_80,"STAT_Grass_FinishAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Grass_FinishAsync,*pFVar14,
               L"STAT_Grass_FinishAsync","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
               ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_Grass_FinishAsync;
  if (StatPtr_STAT_Grass_FinishAsync ==
      (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_2_::FStat_STAT_Grass_FinishAsync>
       )0x0) {
    pFVar14 = ::FName::FName(&local_78,"STAT_Grass_FinishAsync");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_2_::FStat_STAT_Grass_FinishAsync>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Grass_FinishAsync,*pFVar14,
                          L"STAT_Grass_FinishAsync","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1c0.ComparisonIndex.Value = 0;
  local_1c0.Number = 0;
  local_1b8 = 0;
  FVar2 = *(FName *)FVar15;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      local_1b8 = local_1b8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_180.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                   ,0xbe5);
        local_1b8 = local_1b8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c0 = FVar2;
      local_1b0 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_1b8 = local_1b8 | 4;
    }
  }
  dVar7 = __real_4170000000000000;
  if (0 < (this->AsyncFoliageTasks).ArrayNum) {
    pTVar30 = &this->AsyncFoliageTasks;
    local_1a0 = 0;
    local_128 = pTVar30;
    do {
      lVar29 = local_1a0;
      uVar11 = 0;
      if ((int)uVar26 < pTVar30->ArrayNum) {
        uVar11 = ~uVar26 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = *(FAsyncTaskBase **)((pTVar30->AllocatorInstance).Data + lVar29 * 8);
      local_1a8 = this_01;
      if (param_1) {
        FAsyncTaskBase::EnsureCompletion(this_01,true,false);
      }
      if ((this_01->WorkNotFinishedCounter).Counter == 0) {
        FAsyncTaskBase::SyncCompletion(this_01,false);
        FVar16 = StatPtr_STAT_FoliageGrassEndComp;
        if (StatPtr_STAT_FoliageGrassEndComp ==
            (FThreadSafeStaticStat<FStat_STAT_FoliageGrassEndComp>)0x0) {
          pFVar14 = ::FName::FName(&local_70,"STAT_FoliageGrassEndComp");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_FoliageGrassEndComp>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageGrassEndComp,
                              *pFVar14,L"Grass End Comp","STATGROUP_Foliage","STATCAT_Advanced",
                              L"Foliage",true,true,ST_int64,true,false,MCR_Invalid);
        }
        local_208.ComparisonIndex.Value = 0;
        local_208.Number = 0;
        bVar6 = false;
        bVar5 = false;
        bVar9 = false;
        FVar2 = *(FName *)FVar16;
        FVar28 = FVar2.ComparisonIndex.Value;
        uVar11 = FVar2.Number;
        if ((FVar28.Value != 0) || (uVar11 != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_194.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_194._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
            bVar5 = false;
            bVar9 = true;
            if (-1 < CpuChannel->Enabled) {
              local_178.ComparisonIndex.Value = FVar28.Value;
              local_178.Number = uVar11;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_178,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                         ,0xbf0);
              bVar5 = true;
              bVar9 = true;
            }
          }
          bVar6 = false;
          if (FThreadStats::bPrimaryEnable != false) {
            local_170 = FVar28.Value;
            uStack_16c = uVar11;
            FThreadStats::AddMessage(FVar2,CycleScopeStart);
            bVar6 = true;
            local_208 = FVar2;
          }
        }
        FAsyncTaskBase::CheckIdle(this_01);
        local_1a0 = local_1a0 + -1;
        local_184 = uVar26 - 1;
        uVar11 = 0;
        if ((int)uVar26 < pTVar30->ArrayNum) {
          uVar11 = ~uVar26 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (pTVar30->AllocatorInstance).Data + (longlong)(int)uVar26 * 8;
        iVar12 = (pTVar30->ArrayNum - uVar26) + -1;
        if (iVar12 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar12 << 3);
        }
        iVar12 = pTVar30->ArrayNum + -1;
        pTVar30->ArrayNum = iVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar30->AllocatorInstance,iVar12,&pTVar30->ArrayMax);
        this_00 = (UGrassInstancedStaticMeshComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01[1]._padding_);
        if (this_00 == (UGrassInstancedStaticMeshComponent *)0x0) {
LAB_145f5a655:
          this_00 = (UGrassInstancedStaticMeshComponent *)0x0;
        }
        else {
          pUVar17 = Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister();
          iVar12 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar12) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
              &pUVar17->_padding_)) goto LAB_145f5a655;
        }
        iVar12 = *(int *)(this_01[1]._padding_ + 0x330);
        if (5 < (byte)LogGrass._0_1_) {
          pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01[1]._padding_);
          uVar26 = *(uint *)((longlong)&this_01[1]._padding_ + 4);
          uVar11 = 0;
          if ((int)uVar26 < *(int *)&pUVar18[1].field_0x8) {
            uVar11 = ~uVar26 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_118 = *(FName *)(*(longlong *)
                                  ((longlong)(int)uVar26 * 0x1b8 + *(longlong *)(pUVar18 + 1)) +
                                0x18);
          ::FName::ToString(&local_118,&local_d0);
          pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01[1]._padding_);
          local_110.ComparisonIndex.Value = *(uint *)&pUVar18->field_0x18;
          local_110.Number = *(uint *)&pUVar18->field_0x1c;
          ::FName::ToString(&local_110,&local_e0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          this_01 = local_1a8;
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            this_01 = local_1a8;
          }
        }
        pvVar8 = ThreadLocalStoragePointer;
        if ((this_00 != (UGrassInstancedStaticMeshComponent *)0x0) &&
           (uVar26 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4))
                     * -0x7a143595, uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb,
           *(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34)) {
          FVar3 = (param_3->Hash).SecondaryData;
          FVar27 = (ForElementType<FSetElementId>)&param_3->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar27 = FVar3;
          }
          iVar13 = *(int *)((longlong)FVar27 +
                           (ulonglong)(param_3->HashSize - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
          if (iVar13 != -1) {
            do {
              if (*(UGrassInstancedStaticMeshComponent **)
                   (*(longlong *)&param_3->Elements + (longlong)iVar13 * 0x10) == this_00) {
                if (0 < iVar12) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1))
                  {
                    StatPtr_STAT_FoliageGrassEndComp_AcceptPrebuiltTree =
                         (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_34_::FStat_STAT_FoliageGrassEndComp_AcceptPrebuiltTree>
                          )0x0;
                    pFVar14 = ::FName::FName(&local_a0,"STAT_FoliageGrassEndComp_AcceptPrebuiltTree"
                                            );
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_FoliageGrassEndComp_AcceptPrebuiltTree,*pFVar14,
                               L"STAT_FoliageGrassEndComp_AcceptPrebuiltTree","STATGROUP_Quick",
                               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid
                              );
                    _Init_thread_footer(&::_TSS1);
                  }
                  FVar19 = StatPtr_STAT_FoliageGrassEndComp_AcceptPrebuiltTree;
                  if (StatPtr_STAT_FoliageGrassEndComp_AcceptPrebuiltTree ==
                      (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_34_::FStat_STAT_FoliageGrassEndComp_AcceptPrebuiltTree>
                       )0x0) {
                    pFVar14 = ::FName::FName(&local_98,"STAT_FoliageGrassEndComp_AcceptPrebuiltTree"
                                            );
                    FVar19 = (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_34_::FStat_STAT_FoliageGrassEndComp_AcceptPrebuiltTree>
                              )FThreadSafeStaticStatBase::DoSetup
                                         ((FThreadSafeStaticStatBase *)
                                          &StatPtr_STAT_FoliageGrassEndComp_AcceptPrebuiltTree,
                                          *pFVar14,L"STAT_FoliageGrassEndComp_AcceptPrebuiltTree",
                                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                                          ST_int64,true,false,MCR_Invalid);
                  }
                  local_1e0.ComparisonIndex.Value = 0;
                  local_1e0.Number = 0;
                  local_1d8 = 0;
                  FVar2 = *(FName *)FVar19;
                  FVar28 = FVar2.ComparisonIndex.Value;
                  uVar26 = FVar2.Number;
                  if ((FVar28.Value != 0) || (uVar26 != 0)) {
                    if (GCycleStatsShouldEmitNamedEvents != 0) {
                      local_190.Bits = 0;
                      FGenericPlatformMisc::BeginNamedEvent
                                ((FColor *)&local_190._s_0,
                                 (char *)*(FName *)((longlong)FVar19 + 0x10));
                      local_1d8 = local_1d8 | 1;
                      if (-1 < CpuChannel->Enabled) {
                        local_168.ComparisonIndex.Value = FVar28.Value;
                        local_168.Number = uVar26;
                        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                   ,0xc05);
                        local_1d8 = local_1d8 | 2;
                      }
                    }
                    if (FThreadStats::bPrimaryEnable != false) {
                      local_1e0 = FVar2;
                      local_160 = FVar28.Value;
                      uStack_15c = uVar26;
                      FThreadStats::AddMessage(FVar2,CycleScopeStart);
                      local_1d8 = local_1d8 | 4;
                    }
                  }
                  lVar29 = this_01[1]._padding_;
                  UGrassInstancedStaticMeshComponent::AcceptPrebuiltTree
                            (this_00,(TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)
                                     (lVar29 + 0x340),*(int *)(lVar29 + 0x350),iVar12,
                             (FStaticMeshInstanceData *)(lVar29 + 0x2f0));
                  if ((param_2) &&
                     (pUVar20 = AActor::GetWorld((AActor *)this), pUVar20 != (UWorld *)0x0)) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar8 + (ulonglong)_tls_index * 8) +
                                 0x9d4c) < ::_TSS2) &&
                       (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
                      StatPtr_STAT_FoliageGrassEndComp_SyncUpdate =
                           (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_37_::FStat_STAT_FoliageGrassEndComp_SyncUpdate>
                            )0x0;
                      pFVar14 = ::FName::FName(&local_90,"STAT_FoliageGrassEndComp_SyncUpdate");
                      FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &StatPtr_STAT_FoliageGrassEndComp_SyncUpdate,*pFVar14,
                                 L"STAT_FoliageGrassEndComp_SyncUpdate","STATGROUP_Quick",
                                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                                 MCR_Invalid);
                      _Init_thread_footer(&::_TSS2);
                    }
                    FVar21 = StatPtr_STAT_FoliageGrassEndComp_SyncUpdate;
                    if (StatPtr_STAT_FoliageGrassEndComp_SyncUpdate ==
                        (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_37_::FStat_STAT_FoliageGrassEndComp_SyncUpdate>
                         )0x0) {
                      pFVar14 = ::FName::FName(&local_88,"STAT_FoliageGrassEndComp_SyncUpdate");
                      FVar21 = (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::ProcessAsyncGrassInstanceTasks(bool,bool,TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>_const_&)_::_37_::FStat_STAT_FoliageGrassEndComp_SyncUpdate>
                                )FThreadSafeStaticStatBase::DoSetup
                                           ((FThreadSafeStaticStatBase *)
                                            &StatPtr_STAT_FoliageGrassEndComp_SyncUpdate,*pFVar14,
                                            L"STAT_FoliageGrassEndComp_SyncUpdate","STATGROUP_Quick"
                                            ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                                            false,MCR_Invalid);
                    }
                    local_1f0.ComparisonIndex.Value = 0;
                    local_1f0.Number = 0;
                    local_1e8 = 0;
                    FVar2 = *(FName *)FVar21;
                    FVar28 = FVar2.ComparisonIndex.Value;
                    uVar26 = FVar2.Number;
                    if ((FVar28.Value != 0) || (uVar26 != 0)) {
                      if (GCycleStatsShouldEmitNamedEvents != 0) {
                        local_18c.Bits = 0;
                        FGenericPlatformMisc::BeginNamedEvent
                                  ((FColor *)&local_18c._s_0,
                                   (char *)*(FName *)((longlong)FVar21 + 0x10));
                        local_1e8 = local_1e8 | 1;
                        if (-1 < CpuChannel->Enabled) {
                          local_158.ComparisonIndex.Value = FVar28.Value;
                          local_158.Number = uVar26;
                          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                    (&local_158,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                     ,0xc09);
                          local_1e8 = local_1e8 | 2;
                        }
                      }
                      if (FThreadStats::bPrimaryEnable != false) {
                        local_1f0 = FVar2;
                        local_150 = FVar28.Value;
                        uStack_14c = uVar26;
                        FThreadStats::AddMessage(FVar2,CycleScopeStart);
                        local_1e8 = local_1e8 | 4;
                      }
                    }
                    UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)this_00);
                    if ((local_1e8 & 1) != 0) {
                      FGenericPlatformMisc::EndNamedEvent();
                    }
                    if ((local_1e8 & 2) != 0) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    FVar2 = local_1f0;
                    if (((((local_1e8 & 4) != 0) && (local_1f0 != (FName)0x0)) &&
                        (FThreadStats::bPrimaryDisableForever == false)) &&
                       (FThreadStats::TlsSlot != 0xffffffff)) {
                      pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
                      if (pFVar24 == (FThreadStats *)0x0) {
                        pFVar25 = FThreadStatsPool::Get();
                        pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
                      }
                      if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
                        local_c0.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
                        local_c0.NameAndInfo.Number = FVar2.Number & 0xffff6fff | 0x6000;
                        QueryPerformanceCounter(&local_108);
                        local_c0.StatData.Pad[4] = '\0';
                        local_c0.StatData.Pad[5] = '\0';
                        local_c0.StatData.Pad[6] = '\0';
                        local_c0.StatData.Pad[7] = '\0';
                        local_c0.StatData.Pad[0] = local_108.s.LowPart._0_1_;
                        local_c0.StatData.Pad[1] = local_108.s.LowPart._1_1_;
                        local_c0.StatData.Pad[2] = local_108.s.LowPart._2_1_;
                        local_c0.StatData.Pad[3] = local_108.s.LowPart._3_1_;
                        FThreadStats::AddStatMessage(pFVar24,&local_c0);
                        piVar1 = &pFVar24->ScopeCount;
                        *piVar1 = *piVar1 + -1;
                        if (*piVar1 == 0) {
                          FThreadStats::Flush(pFVar24,false,false);
                        }
                        else if (FThreadStats::bIsRawStatsActive != false) {
                          FThreadStats::FlushRawStats(pFVar24,false,false);
                        }
                      }
                    }
                    local_1e8 = 0;
                  }
                  if ((local_1d8 & 1) != 0) {
                    FGenericPlatformMisc::EndNamedEvent();
                  }
                  if ((local_1d8 & 2) != 0) {
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  if ((local_1d8 & 4) != 0) {
                    FThreadStats::AddMessage(local_1e0,CycleScopeEnd);
                  }
                  local_1d8 = 0;
                }
                break;
              }
              iVar13 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar13 * 0x10);
            } while (iVar13 != -1);
          }
        }
        iVar12 = TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
                 ::FindIndexByHash<FCachedLandscapeFoliage::FGrassCompKey>
                           (&(this->FoliageCache).CachedGrassComps,
                            (((*(int *)((longlong)&this_01[1]._padding_ + 4) << 8 ^
                              (uint)this_01[1]._padding_) << 3 ^
                             *(uint *)((longlong)&this_01[1]._padding_ + 4)) << 10 ^
                            (uint)this_01[1]._padding_) << 3 ^
                            *(uint *)((longlong)&this_01[1]._padding_ + 4) ^
                            *(uint *)((longlong)&this_01[1]._padding_ + 4) ^
                            (uint)this_01[1]._padding_ ^
                            *(uint *)((longlong)&this_01[1]._padding_ + 4) ^
                            (uint)this_01[1]._padding_ ^ (uint)this_01[1]._padding_,
                            (FGrassCompKey *)&this_01[1]._padding_);
        if ((iVar12 != -1) &&
           (lVar29 = (longlong)iVar12 * 0x68 +
                     *(longlong *)&(this->FoliageCache).CachedGrassComps.Elements, lVar29 != 0)) {
          *(undefined1 *)(lVar29 + 0x58) = 0;
          bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar29 + 0x30));
          if (bVar10) {
            FVar22 = StatPtr_STAT_FoliageGrassDestoryComp;
            if (StatPtr_STAT_FoliageGrassDestoryComp ==
                (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)0x0) {
              pFVar14 = ::FName::FName(local_68,"STAT_FoliageGrassDestoryComp");
              FVar22 = (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageGrassDestoryComp
                                  ,*pFVar14,L"Grass Destroy Comps","STATGROUP_Foliage",
                                  "STATCAT_Advanced",L"Foliage",true,true,ST_int64,true,false,
                                  MCR_Invalid);
            }
            local_1d0.ComparisonIndex.Value = 0;
            local_1d0.Number = 0;
            local_1c8 = 0;
            FVar2 = *(FName *)FVar22;
            FVar28 = FVar2.ComparisonIndex.Value;
            uVar26 = FVar2.Number;
            if ((FVar28.Value != 0) || (uVar26 != 0)) {
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_188.Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
                local_1c8 = local_1c8 | 1;
                if (-1 < CpuChannel->Enabled) {
                  local_148.ComparisonIndex.Value = FVar28.Value;
                  local_148.Number = uVar26;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_148,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                             ,0xc14);
                  local_1c8 = local_1c8 | 2;
                }
              }
              if (FThreadStats::bPrimaryEnable != false) {
                local_1d0 = FVar2;
                local_140 = FVar28.Value;
                uStack_13c = uVar26;
                FThreadStats::AddMessage(FVar2,CycleScopeStart);
                local_1c8 = local_1c8 | 4;
              }
            }
            TVar23.DebugPtr =
                 (UHierarchicalInstancedStaticMeshComponent *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar29 + 0x30));
            if (TVar23.DebugPtr != (UHierarchicalInstancedStaticMeshComponent *)0x0) {
              (**(code **)(*(longlong *)TVar23.DebugPtr + 0xc38))(TVar23.DebugPtr);
              local_1f8[0] = 0;
              (**(code **)(*(longlong *)TVar23.DebugPtr + 0x518))(TVar23.DebugPtr,local_1f8);
              (**(code **)(*(longlong *)TVar23.DebugPtr + 0x4a0))(TVar23.DebugPtr,0);
            }
            local_100.DebugPtr = TVar23.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar23.DebugPtr != (UHierarchicalInstancedStaticMeshComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
            }
            TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_>
            ::RemoveSwap(&this->FoliageComponents,
                         (TObjectPtr<UHierarchicalInstancedStaticMeshComponent> *)
                         &local_100.ObjectPtr,Default);
            local_1b0.ComparisonIndex.Value = 0;
            local_1b0.Number = 0;
            local_f8 = 0;
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1b0,(FObjectPtr)&local_f8);
            *(FName *)(lVar29 + 0x30) = local_1b0;
            if ((local_1c8 & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_1c8 & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((local_1c8 & 4) != 0) {
              FThreadStats::AddMessage(local_1d0,CycleScopeEnd);
            }
            local_1c8 = 0;
          }
          *(uint *)(lVar29 + 0x48) = GFrameNumber;
          QueryPerformanceCounter(&local_138);
          *(double *)(lVar29 + 0x50) =
               (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
        }
        if (this_01 != (FAsyncTaskBase *)0x0) {
          (**(code **)(this_01->_padding_ + 0x28))(this_01,1);
        }
        if (!param_1) {
          if (bVar9) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar5) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar6) && (local_208 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar24 == (FThreadStats *)0x0) {
              pFVar25 = FThreadStatsPool::Get();
              pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
            }
            if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
              local_f0.NameAndInfo.Number = local_208.Number & 0xffff6fff | 0x6000;
              local_f0.NameAndInfo.Index.Value = local_208.ComparisonIndex.Value.Value;
              QueryPerformanceCounter(&local_120);
              local_f0.StatData.Pad[4] = '\0';
              local_f0.StatData.Pad[5] = '\0';
              local_f0.StatData.Pad[6] = '\0';
              local_f0.StatData.Pad[7] = '\0';
              local_f0.StatData.Pad[0] = local_120.s.LowPart._0_1_;
              local_f0.StatData.Pad[1] = local_120.s.LowPart._1_1_;
              local_f0.StatData.Pad[2] = local_120.s.LowPart._2_1_;
              local_f0.StatData.Pad[3] = local_120.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(pFVar24,&local_f0);
              piVar1 = &pFVar24->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(pFVar24,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar24,false,false);
              }
            }
          }
          break;
        }
        if (bVar9) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar5) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        lVar29 = local_1a0;
        pTVar30 = local_128;
        uVar26 = local_184;
        if (((bVar6) && (local_208 != (FName)0x0)) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar24 == (FThreadStats *)0x0) {
            pFVar25 = FThreadStatsPool::Get();
            pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
          }
          lVar29 = local_1a0;
          pTVar30 = local_128;
          uVar26 = local_184;
          if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
            local_b0.NameAndInfo.Number = local_208.Number & 0xffff6fff | 0x6000;
            local_b0.NameAndInfo.Index.Value = local_208.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_130);
            local_b0.StatData.Pad[4] = '\0';
            local_b0.StatData.Pad[5] = '\0';
            local_b0.StatData.Pad[6] = '\0';
            local_b0.StatData.Pad[7] = '\0';
            local_b0.StatData.Pad[0] = local_130.s.LowPart._0_1_;
            local_b0.StatData.Pad[1] = local_130.s.LowPart._1_1_;
            local_b0.StatData.Pad[2] = local_130.s.LowPart._2_1_;
            local_b0.StatData.Pad[3] = local_130.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar24,&local_b0);
            piVar1 = &pFVar24->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar24,false,false);
              lVar29 = local_1a0;
              pTVar30 = local_128;
              uVar26 = local_184;
            }
            else {
              lVar29 = local_1a0;
              pTVar30 = local_128;
              uVar26 = local_184;
              if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar24,false,false);
                lVar29 = local_1a0;
                pTVar30 = local_128;
                uVar26 = local_184;
              }
            }
          }
        }
      }
      local_1a0 = lVar29 + 1;
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < (this->AsyncFoliageTasks).ArrayNum);
  }
  if ((local_1b8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1b8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1b8 & 4) != 0) {
    FThreadStats::AddMessage(local_1c0,CycleScopeEnd);
  }
  return;
}

// RemoveAllExclusionBoxes @ 145f5c0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ALandscapeProxy::RemoveAllExclusionBoxes(void)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes> FVar4;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res8;
  FStatMessage local_18;
  
  FVar4 = StatPtr_STAT_GrassExclusionVolumes;
  if (StatPtr_STAT_GrassExclusionVolumes ==
      (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_GrassExclusionVolumes");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GrassExclusionVolumes,*pFVar3,
                       L"Grass Exclusion Volumes","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_18.StatData.Pad[0] = '\0';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_18);
    FStatsTrace::Set(&local_res8,0);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  if (GGrassExclusionBoxes._8_4_ != GGrassExclusionBoxes._52_4_) {
    bVar2 = 1 < (int)GGrassExclusionBoxes._72_4_;
    if (!bVar2) {
      TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
                        *)&GGrassExclusionBoxes);
    }
    GGrassExclusionBoxes._8_4_ = 0;
    if (GGrassExclusionBoxes._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)&GGrassExclusionBoxes,0,
                 (int *)&GGrassExclusionBoxes.field_0xc);
    }
    GGrassExclusionBoxes._48_4_ = 0xffffffff;
    GGrassExclusionBoxes._52_4_ = 0;
    GGrassExclusionBoxes._40_4_ = 0;
    if (0x80 < (uint)GGrassExclusionBoxes._44_4_) {
      GGrassExclusionBoxes._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&GGrassExclusionBoxes.field_0x10,0);
    }
    if (bVar2) {
      GGrassExclusionBoxes._72_4_ = 1;
      TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
                *)&GGrassExclusionBoxes);
    }
    GGrassExclusionChangeTag = GGrassExclusionChangeTag + 1;
  }
  return;
}

// RemoveExclusionBox @ 145f5c770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ALandscapeProxy::RemoveExclusionBox(FWeakObjectPtr param_1)

{
  FName FVar1;
  undefined8 uVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes> FVar4;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  int iVar5;
  longlong lVar6;
  FName local_res8;
  FStatMessage local_18;
  
  FVar4 = StatPtr_STAT_GrassExclusionVolumes;
  if (StatPtr_STAT_GrassExclusionVolumes ==
      (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_GrassExclusionVolumes");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GrassExclusionVolumes,*pFVar3,
                       L"Grass Exclusion Volumes","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_18);
    FStatsTrace::Add(&local_res8,-1);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  if (GGrassExclusionBoxes._8_4_ != GGrassExclusionBoxes._52_4_) {
    lVar6 = 0x154bed2f8;
    if (GGrassExclusionBoxes._64_8_ != 0) {
      lVar6 = GGrassExclusionBoxes._64_8_;
    }
    iVar5 = *(int *)(lVar6 + (longlong)
                             (int)(GGrassExclusionBoxes._72_4_ - 1 &
                                  (param_1.ObjectSerialNumber ^ param_1.ObjectIndex)) * 4);
    if (iVar5 != -1) {
      while( true ) {
        uVar2 = *(undefined8 *)(GGrassExclusionBoxes._0_8_ + (longlong)iVar5 * 0x48);
        if (((uint)uVar2 == param_1.ObjectIndex) &&
           ((uint)((ulonglong)uVar2 >> 0x20) == param_1.ObjectSerialNumber)) break;
        iVar5 = *(int *)(GGrassExclusionBoxes._0_8_ + 0x40 + (longlong)iVar5 * 0x48);
        if (iVar5 == -1) {
          GGrassExclusionChangeTag = GGrassExclusionChangeTag + 1;
          return;
        }
      }
      TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
                       *)&GGrassExclusionBoxes,iVar5);
    }
  }
  GGrassExclusionChangeTag = GGrassExclusionChangeTag + 1;
  return;
}

// RemoveInvalidExclusionBoxes @ 145f5cab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ALandscapeProxy::RemoveInvalidExclusionBoxes(void)

{
  FName FVar1;
  longlong lVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes> FVar5;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  FName local_res10;
  FName local_res18;
  FStatMessage local_b8;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
              *)&GGrassExclusionBoxes);
  local_48 = (TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
              *)&GGrassExclusionBoxes;
  local_40 = '\0';
  cStack_3f = '\0';
  stack0xffffffffffffff98 = local_a8._16_16_;
  local_78 = (longlong *)local_a8._0_8_;
  auStack_70._0_8_ = local_a8._8_8_;
  local_58 = local_88;
  pTStack_50 = pTStack_80;
  uVar6 = local_a8._24_8_ >> 0x20;
  if ((int)local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
    iVar8 = 1;
    uVar7 = local_a8._28_4_;
    do {
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_78 + (longlong)(int)uVar6 * 0x48));
      if (!bVar3) {
        FVar5 = StatPtr_STAT_GrassExclusionVolumes;
        if (StatPtr_STAT_GrassExclusionVolumes ==
            (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)0x0) {
          pFVar4 = ::FName::FName(&local_res18,"STAT_GrassExclusionVolumes");
          FVar5 = (FThreadSafeStaticStat<FStat_STAT_GrassExclusionVolumes>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GrassExclusionVolumes,
                             *pFVar4,L"Grass Exclusion Volumes","STATGROUP_Foliage",
                             "STATCAT_Advanced",L"Foliage",true,false,ST_int64,false,false,
                             MCR_Invalid);
        }
        FVar1 = *(FName *)FVar5;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this = TlsGetValue(FThreadStats::TlsSlot);
          if (this == (FThreadStats *)0x0) {
            this_00 = FThreadStatsPool::Get();
            this = FThreadStatsPool::GetFromPool(this_00);
          }
          local_b8.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
          local_b8.StatData.Pad[0] = '\x01';
          local_b8.StatData.Pad[1] = '\0';
          local_b8.StatData.Pad[2] = '\0';
          local_b8.StatData.Pad[3] = '\0';
          local_b8.StatData.Pad[4] = '\0';
          local_b8.StatData.Pad[5] = '\0';
          local_b8.StatData.Pad[6] = '\0';
          local_b8.StatData.Pad[7] = '\0';
          local_res10 = FVar1;
          local_b8.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this,&local_b8);
          FStatsTrace::Add(&local_res10,-1);
          if (this->ScopeCount == 0) {
            FThreadStats::Flush(this,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this,false,false);
          }
        }
        TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_50,uVar7);
        GGrassExclusionChangeTag = GGrassExclusionChangeTag + 1;
        local_40 = '\x01';
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar6 = (ulonglong)uStack_5c;
      uVar7 = uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      uVar7 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (3 < uVar7) {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_48->HashSize < iVar8)) || (iVar8 < local_48->HashSize)) {
        local_48->HashSize = iVar8;
        TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
             *)&GGrassExclusionBoxes);
  return;
}

// UpdateGrass @ 145f603e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ALandscapeProxy::UpdateGrass
          (ALandscapeProxy *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          bool param_3)

{
  double *pdVar1;
  TArray<ULandscapeComponent::FExcludeBox,TSizedDefaultAllocator<32>_> *this_00;
  double dVar2;
  FScriptContainerElement FVar3;
  undefined1 uVar4;
  ushort uVar5;
  int *piVar6;
  FLandscapeComponentGrassData *pFVar7;
  FMeshMapBuildData *this_01;
  FShadowMap *this_02;
  FIdentityFunctor FVar8;
  bool bVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ULandscapeComponent *pUVar20;
  FGrassVariety *pFVar21;
  undefined8 uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  TStatId TVar33;
  UWorld *this_03;
  ULandscapeSubsystem *pUVar34;
  longlong lVar35;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar36;
  TMatrix<double> *pTVar37;
  FName *pFVar38;
  FThreadSafeStaticStat<FStat_STAT_FoliageGrassStartComp> FVar39;
  size_t sVar40;
  UPackage *pUVar41;
  FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_146_::FStat_STAT_GrassCreateComp>
  FVar42;
  UClass *pUVar43;
  UGrassInstancedStaticMeshComponent *this_04;
  FMeshMapBuildData *pFVar44;
  FLightMap2D *this_05;
  FLightMap2D *pFVar45;
  FShadowMap *this_06;
  FMeshMapBuildData *pFVar46;
  FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_159_::FStat_STAT_GrassAttachComp>
  FVar47;
  FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_160_::FStat_STAT_GrassCreateBuilder>
  FVar48;
  FAsyncGrassBuilder *pFVar49;
  FAsyncTaskBase *pFVar50;
  FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_176_::FStat_STAT_GrassRegisterComp>
  FVar51;
  FThreadStats *this_07;
  FThreadStatsPool *this_08;
  UObject *pUVar52;
  UObject *pUVar53;
  UObject *pUVar54;
  FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp> FVar55;
  byte bVar56;
  byte bVar57;
  uint uVar58;
  uint uVar59;
  longlong lVar60;
  longlong *plVar61;
  ulonglong uVar62;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar63;
  ForAnyElementType FVar64;
  ForElementType<FSetElementId> FVar65;
  char cVar66;
  FNameEntryId FVar67;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 TVar68;
  TBox<double> *pTVar69;
  wchar_t *_Str;
  FAsyncTaskBase *this_09;
  TArray<FAsyncTask<FAsyncGrassTask>_*,TSizedDefaultAllocator<32>_> *pTVar70;
  FName FVar71;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 *pTVar72;
  FWeakObjectPtr *pFVar73;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 *pTVar74;
  FScriptContainerElement *pFVar75;
  TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_> *pTVar76
  ;
  FScriptContainerElement *pFVar77;
  ULandscapeGrassType *pUVar78;
  TBox<double> *pTVar79;
  ALandscapeProxy *pAVar80;
  void *pvVar81;
  ULandscapeComponent *pUVar82;
  FGrassVariety *this_10;
  FName FVar83;
  bool bVar84;
  ulonglong uVar85;
  ulonglong uVar86;
  ulonglong uVar87;
  ulonglong uVar88;
  float fVar89;
  double dVar90;
  double dVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar97;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  int iVar105;
  float fVar106;
  float fVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  undefined4 uVar111;
  int iVar112;
  undefined4 uVar113;
  int iVar114;
  float fVar115;
  undefined1 auVar116 [16];
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  float fVar121;
  float fVar122;
  double dVar123;
  double dVar124;
  float fVar125;
  float fVar126;
  undefined1 auStackY_bd8 [32];
  bool local_b70;
  uint local_b6c;
  int local_b68;
  undefined1 local_b60;
  undefined1 local_b5f;
  undefined1 local_b5e;
  undefined1 local_b5d;
  undefined1 local_b5c;
  undefined1 local_b5b;
  undefined1 local_b5a;
  undefined1 local_b59;
  undefined1 local_b58 [8];
  ALandscapeProxy *local_b50;
  uint local_b48;
  uint local_b44;
  uint local_b40;
  float local_b3c;
  undefined4 local_b38;
  uint local_b34;
  ULandscapeComponent *local_b30;
  float local_b28;
  uint local_b24;
  undefined1 local_b20 [4];
  float local_b1c;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 local_b18;
  float local_b10;
  int local_b0c;
  FName local_b08;
  Type local_b00;
  int local_afc;
  UGrassInstancedStaticMeshComponent *local_af8;
  uint local_af0;
  undefined1 local_ae8 [20];
  uint uStack_ad4;
  uint uStack_ad0;
  int iStack_acc;
  undefined8 local_ac8;
  FWeakObjectPtr FStack_ac0;
  undefined8 local_ab8;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> local_ab0;
  uint local_aa0;
  uint local_a9c;
  double local_a98;
  undefined2 local_a90;
  FScriptContainerElement *local_a88;
  UGrassInstancedStaticMeshComponent *local_a80;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_a78;
  FAsyncTaskBase *local_a70;
  float local_a68;
  float local_a64;
  float local_a60;
  FColor_u_0 local_a5c;
  FColor_u_0 local_a58;
  FColor_u_0 local_a54;
  FColor_u_0 local_a50;
  FColor_u_0 local_a4c;
  uint local_a48;
  uint local_a44;
  FColor_u_0 local_a40 [2];
  FName local_a38;
  byte local_a30;
  FName local_a28;
  byte local_a20;
  FName local_a18;
  byte local_a10;
  FName local_a08;
  uint local_a00;
  uint uStack_9fc;
  FName local_9f8;
  uint local_9f0;
  uint uStack_9ec;
  undefined8 local_9e8;
  FScriptContainerElement *local_9e0;
  FScriptContainerElement *local_9d8;
  FName local_9d0;
  uint local_9c8;
  uint uStack_9c4;
  undefined8 local_9c0;
  FName local_9b8;
  uint local_9b0;
  uint uStack_9ac;
  FName local_9a8;
  uint local_9a0;
  uint uStack_99c;
  undefined8 local_998;
  TBitArray<FDefaultBitArrayAllocator> *local_990;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 *local_988;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 *local_980;
  FName local_978;
  int *local_970;
  FName local_968;
  FName local_958;
  FName local_948;
  FName local_938;
  FName local_928;
  FName local_918;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  undefined1 local_8e8 [16];
  undefined8 local_8d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8d0;
  FName local_8b0;
  UGrassInstancedStaticMeshComponent *local_8a8;
  FMeshMapBuildData *local_8a0;
  UGrassInstancedStaticMeshComponent *local_898;
  TStatIdData *local_890;
  LARGE_INTEGER local_888;
  FGrassVariety *local_880;
  FName local_878;
  LARGE_INTEGER local_870;
  UObject *local_868;
  UObject *local_860;
  UHierarchicalInstancedStaticMeshComponent *local_858;
  UWorld *local_850;
  FStatMessage local_848;
  FString local_838;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 local_828;
  LARGE_INTEGER local_820;
  ULandscapeComponent *local_818;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 local_810;
  LARGE_INTEGER local_808;
  FName local_800;
  undefined8 local_7f8;
  undefined1 local_7f0 [64];
  undefined1 local_7b0 [12];
  uint local_7a4;
  double local_7a0;
  uint local_798;
  int local_794;
  TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
  *local_788;
  undefined1 local_780 [12];
  uint uStack_774;
  TBitArray<FDefaultBitArrayAllocator> *local_770;
  undefined8 uStack_768;
  longlong local_760;
  undefined8 uStack_758;
  TMap<FWeakObjectPtr,UE::Math::TBox<double>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<FWeakObjectPtr,UE::Math::TBox<double>,0>_>
  *local_750;
  longlong lStack_748;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_740;
  double dStack_738;
  double dStack_730;
  int local_728;
  undefined4 uStack_724;
  undefined8 local_720;
  FSourceLocation local_718;
  FSourceLocation local_6f8;
  FSourceLocation local_6d8;
  undefined1 local_6b8 [16];
  FString local_6a8;
  FString local_698;
  TVector<double>_u_0 local_688;
  TVector<double>_u_0 local_670;
  undefined1 local_658 [24];
  longlong lStack_640;
  longlong lStack_638;
  int local_630;
  undefined4 uStack_62c;
  FName local_620;
  FName local_618;
  FName local_610;
  FName local_608 [2];
  FString local_5f8;
  FString local_5e8;
  FName local_5d8;
  FName local_5d0;
  FName local_5c8;
  FScriptContainerElement local_5c0 [8];
  FName local_5b8;
  FName local_5b0;
  FName local_5a8 [4];
  undefined1 local_588 [32];
  double local_568;
  int iStack_560;
  undefined4 uStack_55c;
  double local_558;
  double dStack_550;
  undefined1 local_548 [16];
  double local_538;
  double dStack_530;
  undefined1 local_528;
  undefined7 uStack_527;
  FGrassBuilderBase local_518;
  undefined1 local_3e8 [128];
  undefined1 local_368 [40];
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  undefined1 local_330 [8];
  ForElementType<FSetElementId> local_328;
  int local_320;
  TVector<double>_u_0 local_318;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined8 local_2e8;
  TVector<double>_u_0 local_2e0;
  double local_2c8;
  double local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  TTransform<double> local_2a8;
  TVector<double>_u_0 local_248;
  FWeakObjectPtr FStack_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr FStack_220;
  FWeakObjectPtr local_218;
  FScriptContainerElement local_208 [128];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_bd8;
  local_b50 = this;
  local_a78 = param_1;
  local_970 = param_2;
  TVar33 = FThreadSafeStaticStatInner<FStat_STAT_GrassUpdate,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_GrassUpdate,1> *)
                      &StatPtr_STAT_GrassUpdate);
  local_6d8.Impl._Line = 0x9f0;
  local_6d8.Impl._Function =
       "void __cdecl ALandscapeProxy::UpdateGrass(const class TArray<struct UE::Math::TVector<double>,class TSizedDefaultAllocator<32> > &,int &,bool)"
  ;
  local_6d8.Impl._Column = 2;
  local_6d8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_a28,*(TStatIdData **)&(TVar33.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_6d8);
  bVar84 = -1 < CpuChannel->Enabled;
  if (bVar84) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2545,"ALandscapeProxy::UpdateGrass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
               ,0x9f1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2545);
  }
  if (GUndo == (ITransaction *)0x0) {
    this_03 = AActor::GetWorld((AActor *)this);
    local_850 = this_03;
    if ((this_03 == (UWorld *)0x0) ||
       (pUVar34 = UWorld::GetSubsystem<ULandscapeSubsystem>(this_03),
       pUVar34 == (ULandscapeSubsystem *)0x0)) {
      cVar66 = '\0';
    }
    else {
      cVar66 = pUVar34->bIsGrassCreationPrioritized;
    }
    if ((param_3) || (local_b70 = false, cVar66 != '\0')) {
      local_b70 = true;
    }
    uVar111 = (undefined4)__real_4170000000000000;
    uVar113 = (undefined4)((ulonglong)__real_4170000000000000 >> 0x20);
    if (0 < GGrassEnable) {
      bVar28 = 0 < GCullSubsections;
      FVar8 = (FIdentityFunctor)(0 < GDisableGPUCull);
      bVar9 = 0 < GDisableDynamicShadows;
      local_b28 = GGuardBandMultiplier;
      local_a68 = GGuardBandDiscardMultiplier;
      local_b0c = GMaxAsyncTasks;
      local_af0 = GMaxInstancesPerComponent;
      if (GMaxInstancesPerComponent < 0x400) {
        local_af0 = 0x400;
      }
      local_afc = GGrassMaxCreatePerFrame;
      if ((cVar66 != '\0') && (1 < GGrassCreationPrioritizedMultipler)) {
        local_b0c = GMaxAsyncTasks * GGrassCreationPrioritizedMultipler;
        local_afc = GGrassMaxCreatePerFrame * GGrassCreationPrioritizedMultipler;
      }
      local_b10 = GGrassCullDistanceScale;
      if (this_03 != (UWorld *)0x0) {
        fVar121 = GGuardBandDiscardMultiplier;
        if (GGuardBandDiscardMultiplier <= GGuardBandMultiplier) {
          fVar121 = GGuardBandMultiplier;
        }
        local_b00 = this_03->Scene->FeatureLevel;
        fVar121 = (float)((double)(fVar121 * GGrassCullDistanceScale) *
                         (this->GrassTypeSummary).MaxInstanceDiscardDistance);
        fVar121 = fVar121 * fVar121;
        local_b3c = fVar121;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`ALandscapeProxy::UpdateGrass'::__l14::
                 _dynamic_atexit_destructor_for__SortedLandscapeComponents__);
          _Init_thread_footer(&::_TSS0);
        }
        uVar58 = (this->LandscapeComponents).ArrayNum;
        if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
        }
        SortedLandscapeComponents.ArrayNum = 0;
        if (SortedLandscapeComponents.ArrayMax < (int)uVar58) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,uVar58,&SortedLandscapeComponents.AllocatorInstance,0,
                     &SortedLandscapeComponents.ArrayMax);
        }
        pUVar78 = (ULandscapeGrassType *)(this->LandscapeComponents).AllocatorInstance.Data;
        iVar29 = (this->LandscapeComponents).ArrayNum;
        TVar68.DebugPtr = (ULandscapeGrassType *)(&pUVar78->_padding_ + iVar29);
        pAVar80 = local_b50;
        fVar106 = __real_7f7fffff;
        local_b18.DebugPtr = TVar68.DebugPtr;
        while( true ) {
          if ((pAVar80->LandscapeComponents).ArrayNum != iVar29) {
            local_b60 = 0;
            `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_b60);
          }
          if (pUVar78 == TVar68.DebugPtr) break;
          plVar61 = (longlong *)pUVar78->_padding_;
          if (((plVar61 != (longlong *)0x0) && (piVar6 = (int *)plVar61[0xe5], -1 < *piVar6)) &&
             (piVar6[4] != piVar6[0xf])) {
            (**(code **)(*plVar61 + 0x598))(plVar61,local_7f0 + 8);
            pTVar63 = local_a78;
            iVar31 = local_a78->ArrayNum;
            if (iVar31 == 0) {
              fVar106 = 0.0;
            }
            pFVar75 = (local_a78->AllocatorInstance).Data;
            auVar116._8_8_ = 0;
            auVar116._0_8_ = local_7f0._48_8_;
            iVar117 = (int)local_7f0._40_8_;
            iVar118 = SUB84(local_7f0._40_8_,4);
            iVar119 = (int)local_7f0._32_8_;
            iVar120 = SUB84(local_7f0._32_8_,4);
            iVar112 = (int)local_7f0._24_8_;
            iVar114 = SUB84(local_7f0._24_8_,4);
            pFVar77 = pFVar75 + (longlong)iVar31 * 0x18;
            iVar109 = (int)local_7f0._16_8_;
            iVar110 = SUB84(local_7f0._16_8_,4);
            iVar105 = (int)local_7f0._8_8_;
            iVar108 = SUB84(local_7f0._8_8_,4);
            while( true ) {
              fVar125 = fVar106;
              if (pTVar63->ArrayNum != iVar31) {
                local_b5f = 0;
                `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_b5f);
                auVar116._8_8_ = 0;
                auVar116._0_8_ = local_7f0._48_8_;
                iVar117 = (int)local_7f0._40_8_;
                iVar118 = SUB84(local_7f0._40_8_,4);
                iVar119 = (int)local_7f0._32_8_;
                iVar120 = SUB84(local_7f0._32_8_,4);
                iVar112 = (int)local_7f0._24_8_;
                iVar114 = SUB84(local_7f0._24_8_,4);
                iVar109 = (int)local_7f0._16_8_;
                iVar110 = SUB84(local_7f0._16_8_,4);
                iVar105 = (int)local_7f0._8_8_;
                iVar108 = SUB84(local_7f0._8_8_,4);
              }
              pAVar80 = local_b50;
              dVar90 = auVar116._0_8_;
              if (pFVar75 == pFVar77) break;
              local_670._s_0.X =
                   (double)CONCAT44(iVar108,iVar105) - (double)CONCAT44(iVar120,iVar119);
              local_670._s_0.Y =
                   (double)CONCAT44(iVar110,iVar109) - (double)CONCAT44(iVar118,iVar117);
              local_670._s_0.Z = (double)CONCAT44(iVar114,iVar112) - dVar90;
              local_688._s_0.X =
                   (double)CONCAT44(iVar108,iVar105) + (double)CONCAT44(iVar120,iVar119);
              local_688._s_0.Y =
                   (double)CONCAT44(iVar110,iVar109) + (double)CONCAT44(iVar118,iVar117);
              local_688._s_0.Z = (double)CONCAT44(iVar114,iVar112) + dVar90;
              dVar90 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                                 ((TVector<double> *)&local_670._s_0,
                                  (TVector<double> *)&local_688._s_0,(TVector<double> *)pFVar75);
              pFVar75 = pFVar75 + 0x18;
              fVar106 = (float)dVar90;
              if (fVar125 <= (float)dVar90) {
                fVar106 = fVar125;
              }
            }
            if ((fVar121 <= __real_00000000) ||
               (TVar68 = local_b18, fVar106 = __real_7f7fffff, fVar125 <= fVar121)) {
              dVar124 = (double)CONCAT44(iVar114,iVar112) + dVar90;
              local_528 = 1;
              dVar123 = (double)CONCAT44(iVar108,iVar105) - (double)CONCAT44(iVar120,iVar119);
              dVar12 = (double)CONCAT44(iVar110,iVar109) - (double)CONCAT44(iVar118,iVar117);
              dVar11 = (double)CONCAT44(iVar110,iVar109) + (double)CONCAT44(iVar118,iVar117);
              if (SortedLandscapeComponents.ArrayNum == SortedLandscapeComponents.ArrayMax) {
                SortedLandscapeComponents.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&SortedLandscapeComponents.AllocatorInstance,
                                &SortedLandscapeComponents.ArrayMax);
              }
              FVar64.Data = SortedLandscapeComponents.AllocatorInstance.Data;
              lVar35 = (longlong)SortedLandscapeComponents.ArrayNum;
              local_548._8_8_ =
                   (double)CONCAT44(iVar108,iVar105) + (double)CONCAT44(iVar120,iVar119);
              local_548._0_8_ = (double)CONCAT44(iVar114,iVar112) - dVar90;
              pFVar77 = SortedLandscapeComponents.AllocatorInstance.Data + lVar35 * 0x48 + 0x10;
              SortedLandscapeComponents.ArrayNum = SortedLandscapeComponents.ArrayNum + 1;
              *(double *)pFVar77 = dVar123;
              *(double *)(pFVar77 + 8) = dVar12;
              *(longlong **)(FVar64.Data + lVar35 * 0x48) = plVar61;
              *(undefined1 (*) [16])(FVar64.Data + lVar35 * 0x48 + 0x20) = local_548;
              *(float *)(FVar64.Data + lVar35 * 0x48 + 8) = SQRT(fVar125);
              *(double *)(FVar64.Data + lVar35 * 0x48 + 0x30) = dVar11;
              *(double *)(FVar64.Data + lVar35 * 0x48 + 0x30 + 8) = dVar124;
              *(ulonglong *)(FVar64.Data + lVar35 * 0x48 + 0x40) = CONCAT71(uStack_527,local_528);
              TVar68 = local_b18;
              fVar106 = __real_7f7fffff;
              fVar121 = local_b3c;
              local_558 = dVar123;
              dStack_550 = dVar12;
              local_538 = dVar11;
              dStack_530 = dVar124;
            }
          }
          pUVar78 = (ULandscapeGrassType *)&pUVar78->_padding_;
        }
        if (cVar66 != '\0') {
          AlgoImpl::
          IntroSortInternal<_ALandscapeProxy::UpdateGrass_::__l14::SortedLandscapeElement,int,FIdentityFunctor,_ALandscapeProxy::UpdateGrass_::__l31::<lambda_1>_>
                    ((SortedLandscapeElement *)SortedLandscapeComponents.AllocatorInstance.Data,
                     SortedLandscapeComponents.ArrayNum,FVar8,(<lambda_1>)FVar8);
        }
        uVar62 = (ulonglong)SortedLandscapeComponents.ArrayNum;
        uVar111 = (undefined4)__real_4170000000000000;
        uVar113 = (undefined4)((ulonglong)__real_4170000000000000 >> 0x20);
        local_878 = (FName)((longlong)SortedLandscapeComponents.AllocatorInstance.Data +
                           uVar62 * 0x48);
        fVar122 = (float)(int)local_af0;
        local_b24 = SortedLandscapeComponents.ArrayNum;
        FVar83 = (FName)SortedLandscapeComponents.AllocatorInstance.Data;
        fVar121 = local_b10;
        fVar125 = __real_bf000000;
        fVar126 = local_b28;
        local_b3c = fVar122;
        while( true ) {
          FVar71 = local_878;
          local_b08 = FVar83;
          if (SortedLandscapeComponents.ArrayNum != (int)uVar62) {
            local_b5e = 0;
            `TCheckedPointerIterator<`ALandscapeProxy::UpdateGrass'::__l14::SortedLandscapeElement,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_b5e);
          }
          this = local_b50;
          if (FVar83 == FVar71) break;
          pUVar82 = *(ULandscapeComponent **)FVar83;
          fVar107 = *(float *)((longlong)FVar83 + 8);
          local_b30 = pUVar82;
          local_b1c = fVar107;
          if (pUVar82->ChangeTag != GGrassExclusionChangeTag) {
            this_00 = &pUVar82->ActiveExcludedBoxes;
            piVar6 = &(pUVar82->ActiveExcludedBoxes).ArrayMax;
            (pUVar82->ActiveExcludedBoxes).ArrayNum = 0;
            if (*piVar6 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,0,&this_00->AllocatorInstance,0,piVar6);
            }
            if ((GGrassExclusionBoxes._8_4_ != GGrassExclusionBoxes._52_4_) &&
               (GIgnoreExcludeBoxes == 0)) {
              local_8d0._padding_._0_4_ = 0;
              local_8d0._padding_._4_4_ = 1;
              local_8d0.Array =
                   (TBitArray<FDefaultBitArrayAllocator> *)&GGrassExclusionBoxes.field_0x10;
              local_8d0.UnvisitedBitMask = 0xffffffff;
              local_8d0.CurrentBitIndex = 0;
              local_8d0.BaseBitIndex = 0;
              iVar29 = 0;
              if (GGrassExclusionBoxes._40_4_ != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8d0);
                iVar29 = GGrassExclusionBoxes._40_4_;
              }
              unique0x10002cee =
                   (TBitArray<FDefaultBitArrayAllocator> *)
                   CONCAT44(local_8d0._padding_._4_4_,(undefined4)local_8d0._padding_);
              local_630 = GGrassExclusionBoxes._8_4_ - GGrassExclusionBoxes._52_4_;
              uStack_768 = CONCAT44(local_8d0.CurrentBitIndex,local_8d0.UnvisitedBitMask);
              local_760 = CONCAT44(local_8d0._28_4_,local_8d0.BaseBitIndex);
              local_658._16_8_ = local_8d0.Array;
              local_658._0_8_ = &GGrassExclusionBoxes;
              local_780._0_8_ = &GGrassExclusionBoxes;
              uStack_758._4_4_ = uStack_62c;
              uStack_758._0_4_ = local_630;
              local_770 = local_8d0.Array;
              local_658._8_8_ = unique0x10002cee;
              lStack_640 = uStack_768;
              lStack_638 = local_760;
              pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_658,
                                   (TBitArray<FDefaultBitArrayAllocator> *)
                                   &GGrassExclusionBoxes.field_0x10,iVar29);
              local_750 = &GGrassExclusionBoxes;
              lStack_748 = pTVar36->_padding_;
              pTStack_740 = pTVar36->Array;
              dStack_738 = *(double *)&pTVar36->UnvisitedBitMask;
              local_588._16_8_ = pTVar36->Array;
              local_588._24_4_ = pTVar36->UnvisitedBitMask;
              local_588._28_4_ = pTVar36->CurrentBitIndex;
              dStack_730 = *(double *)&pTVar36->BaseBitIndex;
              local_728 = GGrassExclusionBoxes._8_4_ - GGrassExclusionBoxes._52_4_;
              local_588._0_8_ = &GGrassExclusionBoxes;
              iStack_560 = GGrassExclusionBoxes._8_4_ - GGrassExclusionBoxes._52_4_;
              uStack_55c = uStack_724;
              local_588._8_8_ = lStack_748;
              local_568 = dStack_730;
              bVar23 = TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=
                                 ((TRangedForIterator *)local_780,(TRangedForIterator *)local_588);
              if (bVar23) {
                do {
                  pFVar73 = (FWeakObjectPtr *)
                            (*(longlong *)local_780._0_8_ + (longlong)uStack_768._4_4_ * 0x48);
                  if (((((*(double *)
                           (*(longlong *)local_780._0_8_ + 8 + (longlong)uStack_768._4_4_ * 0x48) <=
                          *(double *)((longlong)FVar83 + 0x28)) &&
                        (*(double *)((longlong)FVar83 + 0x10) <= (double)pFVar73[4])) &&
                       ((double)pFVar73[2] <= *(double *)((longlong)FVar83 + 0x30))) &&
                      ((*(double *)((longlong)FVar83 + 0x18) <= (double)pFVar73[5] &&
                       ((double)pFVar73[3] <= *(double *)((longlong)FVar83 + 0x38))))) &&
                     ((*(double *)((longlong)FVar83 + 0x20) <= (double)pFVar73[6] &&
                      (bVar23 = FWeakObjectPtr::IsValid(pFVar73), bVar23)))) {
                    local_248._s_0.X = (double)pFVar73[1];
                    local_248._s_0.Y = (double)pFVar73[2];
                    local_248._s_0.Z = (double)pFVar73[3];
                    FStack_230 = pFVar73[4];
                    local_228 = pFVar73[5];
                    FStack_220 = pFVar73[6];
                    local_218 = pFVar73[7];
                    TArray<ULandscapeComponent::FExcludeBox,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<ULandscapeComponent::FExcludeBox>
                              (this_00,(FExcludeBox *)&local_248._s_0);
                  }
                  uStack_768 = CONCAT44(uStack_768._4_4_,(uint)uStack_768 & ~uStack_774);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_780 + 8));
                  bVar23 = TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,UE::Math::TBox<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           ::TRangedForIterator::operator!=
                                     ((TRangedForIterator *)local_780,
                                      (TRangedForIterator *)local_588);
                } while (bVar23);
              }
              iVar29 = (pUVar82->ActiveExcludedBoxes).ArrayNum;
              if (*piVar6 != iVar29) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x38,8,iVar29,&this_00->AllocatorInstance,iVar29,piVar6);
              }
              AlgoImpl::
              IntroSortInternal<ULandscapeComponent::FExcludeBox,int,FIdentityFunctor,TDereferenceWrapper<ULandscapeComponent::FExcludeBox,_ALandscapeProxy::UpdateGrass_::__l41::<lambda_2>_>_>
                        ((FExcludeBox *)(this_00->AllocatorInstance).Data,
                         (pUVar82->ActiveExcludedBoxes).ArrayNum,FVar8,(<lambda_2> *)local_b20);
            }
            pUVar82->ChangeTag = GGrassExclusionChangeTag;
          }
          local_a44 = (pUVar82->GrassTypes).ArrayNum;
          uVar62 = (ulonglong)(int)local_a44;
          pTVar74 = (TObjectPtr<ULandscapeGrassType_const_>_u_0 *)
                    (pUVar82->GrassTypes).AllocatorInstance.Data;
          pTVar72 = pTVar74 + uVar62;
          local_988 = pTVar72;
          while( true ) {
            local_980 = pTVar74;
            if ((pUVar82->GrassTypes).ArrayNum != (int)uVar62) {
              local_b5d = 0;
              `TCheckedPointerIterator<ULandscapeGrassType_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_b5d);
            }
            if (pTVar74 == pTVar72) break;
            TVar68 = *pTVar74;
            local_b18 = TVar68;
            if (TVar68.DebugPtr != (ULandscapeGrassType *)0x0) {
              bVar23 = UWorld::IsGameWorld(local_850);
              if (bVar23) {
                pFVar7 = (pUVar82->GrassData).Object;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)TVar68.DebugPtr);
                }
                local_828 = TVar68;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (UE::GC::MarkAsReachable((UObject *)TVar68.DebugPtr),
                   UE::GC::GIsIncrementalReachabilityPending != false)) {
                  UE::GC::MarkAsReachable((UObject *)TVar68.DebugPtr);
                }
                uVar58 = ((uint)((ulonglong)TVar68.DebugPtr >> 0x14) & 0xffff ^
                         (uint)((ulonglong)TVar68.DebugPtr >> 4)) * -0x7a143595;
                uVar58 = (uVar58 >> 0xd ^ uVar58) * -0x3d4d51cb;
                iVar29 = TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<TObjectPtr<ULandscapeGrassType_const_>_>
                                   ((TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                                     *)&pFVar7->WeightOffsets,uVar58 >> 0x10 ^ uVar58,
                                    (TObjectPtr<ULandscapeGrassType_const_> *)&local_828.ObjectPtr);
                pTVar72 = local_988;
                if (iVar29 == -1) goto LAB_145f63327;
              }
              local_a48 = ((TVar68.DebugPtr)->GrassVarieties).ArrayNum;
              uVar62 = (ulonglong)(int)local_a48;
              this_10 = *(FGrassVariety **)((longlong)TVar68 + 0x28);
              local_b40 = 0xffffffff;
              uVar58 = 1;
              local_880 = this_10 + uVar62;
              local_b44 = 1;
              while( true ) {
                pFVar21 = local_880;
                if (((TVar68.DebugPtr)->GrassVarieties).ArrayNum != (int)uVar62) {
                  local_b5c = 0;
                  `TCheckedPointerIterator<FGrassVariety,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_b5c);
                }
                pTVar72 = local_988;
                pTVar74 = local_980;
                if (this_10 == pFVar21) break;
                local_b40 = local_b40 + 1;
                if ((GEngine == (UEngine *)0x0) ||
                   (GEngine->UseGrassVarityPerQualityLevels == false)) {
                  iVar29 = (this_10->EndCullDistance).Default;
                }
                else {
                  iVar29 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetValue
                                     ((FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
                                      &this_10->EndCullDistanceQuality,GGrassQualityLevel);
                }
                if ((((this_10->GrassMesh).field0_0x0.DebugPtr != (UStaticMesh *)0x0) &&
                    (fVar89 = FGrassVariety::GetDensity(this_10), pAVar80 = local_b50, 0.0 < fVar89)
                    ) && (0 < iVar29)) {
                  bVar23 = this_10->bUseGrid;
                  fVar115 = (float)iVar29 * local_a68 * fVar121;
                  fVar89 = (float)iVar29 * fVar126 * fVar121;
                  local_a64 = fVar115;
                  local_a60 = fVar89;
                  if ((bVar23 == false) || (fVar107 <= fVar115)) {
                    FGrassBuilderBase::FGrassBuilderBase
                              (&local_518,local_b50,pUVar82,this_10,local_b00,1,0,0,true);
                    local_b48 = 1;
                    if ((local_518.bHaveValidData != false) && (0 < local_518.SqrtMaxInstances)) {
                      uVar59 = -((int)ROUND(fVar125 - ((float)local_518.SqrtMaxInstances +
                                                      (float)local_518.SqrtMaxInstances) /
                                                      SQRT(fVar122)) >> 1);
                      uVar30 = 0x10;
                      if ((int)uVar59 < 0x10) {
                        uVar30 = uVar59;
                      }
                      local_b48 = 1;
                      if (1 < (int)uVar30) {
                        local_b48 = uVar30;
                      }
                    }
                    uVar30 = (local_518.SqrtMaxInstances / (int)local_b48) *
                             (local_518.SqrtMaxInstances / (int)local_b48);
                    if ((bVar23 != false) || (fVar107 <= fVar115)) {
                      local_720._0_1_ = (pUVar82->CachedLocalBox).IsValid;
                      local_720._1_1_ = (pUVar82->CachedLocalBox).Pad[0];
                      local_720._2_1_ = (pUVar82->CachedLocalBox).Pad[1];
                      local_720._3_1_ = (pUVar82->CachedLocalBox).Pad[2];
                      local_720._4_1_ = (pUVar82->CachedLocalBox).Pad[3];
                      local_720._5_1_ = (pUVar82->CachedLocalBox).Pad[4];
                      local_720._6_1_ = (pUVar82->CachedLocalBox).Pad[5];
                      local_720._7_1_ = (pUVar82->CachedLocalBox).Pad[6];
                      uVar59 = 0;
                      local_b6c = 0;
                      auVar93 = *(undefined1 (*) [16])&(pUVar82->CachedLocalBox).Min.field0_0x0;
                      pTStack_740 = *(TBitArray<FDefaultBitArrayAllocator> **)
                                     ((longlong)&(pUVar82->CachedLocalBox).Min.field0_0x0 + 0x10);
                      dStack_738 = (pUVar82->CachedLocalBox).Max.field0_0x0._s_0.X;
                      local_6b8._8_4_ = auVar93._8_4_;
                      local_6b8._0_8_ = auVar93._8_8_;
                      local_6b8._12_4_ = auVar93._12_4_;
                      dStack_730 = (pUVar82->CachedLocalBox).Max.field0_0x0._s_0.Y;
                      _local_728 = *(undefined8 *)
                                    ((longlong)&(pUVar82->CachedLocalBox).Max.field0_0x0 + 0x10);
                      dVar11 = auVar93._0_8_;
                      dVar124 = (dStack_738 - dVar11) *
                                (double)(__real_3f800000 / (float)(int)local_b48);
                      dVar90 = (dStack_730 - auVar93._8_8_) *
                               (double)(__real_3f800000 / (float)(int)local_b48);
                      fVar125 = __real_bf000000;
                      fVar126 = local_b28;
                      uVar58 = local_b44;
                      fVar122 = local_b3c;
                      if (0 < (int)local_b48) {
                        iVar29 = (int)_local_728;
                        uVar102 = SUB84(_local_728,4);
                        uVar103 = SUB84(pTStack_740,0);
                        uVar104 = (undefined4)((ulonglong)pTStack_740 >> 0x20);
                        local_b68 = 0;
                        uVar100 = auVar93._8_4_;
                        uVar101 = auVar93._12_4_;
                        local_998 = _local_728;
                        local_990 = pTStack_740;
                        uVar32 = local_b48;
LAB_145f610c2:
                        do {
                          if (((bVar28) && (1 < (int)uVar32)) ||
                             ((pUVar82->ActiveExcludedBoxes).ArrayNum != 0)) {
                            local_2b0 = 1;
                            local_2e0._s_0.Z = (double)CONCAT44(uVar104,uVar103);
                            local_2e0._s_0.X = (double)(int)uVar59 * dVar124 + dVar11;
                            local_2b8 = CONCAT44(uVar102,iVar29);
                            local_2e0._s_0.Y =
                                 (double)local_b68 * dVar90 + (double)CONCAT44(uVar101,uVar100);
                            local_2c8 = (double)(int)(uVar59 + 1) * dVar124 + dVar11;
                            local_2c0 = (double)(local_b68 + 1) * dVar90 +
                                        (double)CONCAT44(uVar101,uVar100);
                            pTVar37 = UE::Math::TTransform<double>::ToMatrixWithScale
                                                ((TTransform<double> *)&pUVar82->_padding_,
                                                 &local_168);
                            UE::Math::TBox<double>::TransformBy
                                      ((TBox<double> *)&local_2e0._s_0,
                                       (TBox<double> *)&local_318._s_0,pTVar37);
                            dVar14 = dStack_2f0;
                            dVar123 = local_2f8;
                            dVar12 = dStack_300;
                            uVar22 = local_318._s_0.Z;
                            uVar16 = local_318._s_0.Y;
                            uVar15 = local_318._s_0.X;
                            local_908 = local_318._s_0.X;
                            dStack_900 = local_318._s_0.Y;
                            local_8e8._8_8_ = dStack_2f0;
                            local_8e8._0_8_ = local_2f8;
                            local_8f8 = local_318._s_0.Z;
                            dStack_8f0 = dStack_300;
                            local_8d8 = local_2e8;
                            if ((bVar28) && (1 < (int)uVar32)) {
                              iVar29 = local_a78->ArrayNum;
                              if (iVar29 == 0) {
                                fVar106 = 0.0;
                              }
                              pFVar75 = (local_a78->AllocatorInstance).Data;
                              pFVar77 = pFVar75 + (longlong)iVar29 * 0x18;
                              pTVar63 = local_a78;
                              while( true ) {
                                fVar107 = fVar106;
                                if (pTVar63->ArrayNum != iVar29) {
                                  local_b5b = 0;
                                  `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::
                                  operator!='::__l2::<lambda_1>::operator()(&local_b5b);
                                  pTVar63 = local_a78;
                                }
                                if (pFVar75 == pFVar77) break;
                                dVar2 = *(double *)pFVar75;
                                dVar91 = 0.0;
                                uVar13 = uVar15;
                                if ((dVar2 < (double)uVar15) || (uVar13 = dVar12, dVar12 < dVar2)) {
                                  dVar91 = (dVar2 - (double)uVar13) * (dVar2 - (double)uVar13);
                                }
                                dVar2 = *(double *)(pFVar75 + 8);
                                uVar13 = uVar16;
                                if ((dVar2 < (double)uVar16) || (uVar13 = dVar123, dVar123 < dVar2))
                                {
                                  dVar91 = dVar91 + (dVar2 - (double)uVar13) *
                                                    (dVar2 - (double)uVar13);
                                }
                                dVar2 = *(double *)(pFVar75 + 0x10);
                                uVar13 = uVar22;
                                if ((dVar2 < (double)uVar22) || (uVar13 = dVar14, dVar14 < dVar2)) {
                                  dVar91 = dVar91 + (dVar2 - (double)uVar13) *
                                                    (dVar2 - (double)uVar13);
                                }
                                pFVar75 = pFVar75 + 0x18;
                                fVar106 = (float)dVar91;
                                if (fVar107 <= (float)dVar91) {
                                  fVar106 = fVar107;
                                }
                              }
                              uVar111 = (undefined4)__real_4170000000000000;
                              uVar113 = (undefined4)((ulonglong)__real_4170000000000000 >> 0x20);
                              fVar107 = SQRT(fVar107);
                              fVar121 = local_b10;
                              fVar89 = local_a60;
                              fVar106 = __real_7f7fffff;
                              fVar115 = local_a64;
                              uVar32 = local_b48;
                            }
                          }
                          if (bVar23 == false) {
                            local_b44 = local_b44 + uVar30;
                          }
                          if (fVar107 <= fVar115) {
                            local_ae8._0_4_ = 0;
                            local_ae8._4_4_ = 0;
                            local_ae8._8_4_ = 0;
                            local_ae8._12_4_ = 0;
                            register0x00001240 = ZEXT816(0);
                            local_ab0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_a9c = 0;
                            local_ac8._0_4_ = ___xmm_0000000000000000ffffffff00000000;
                            local_ac8._4_4_ = _UNK_15076adb4;
                            FStack_ac0 = _UNK_15076adb8;
                            local_ab8 = 0;
                            local_ab0.ArrayNum = 0;
                            local_ab0.ArrayMax = 0;
                            local_a90 = 1;
                            local_aa0 = GFrameNumber;
                            QueryPerformanceCounter(&local_820);
                            local_a98 = (double)local_820.QuadPart *
                                        FGenericPlatformTime::SecondsPerCycle +
                                        (double)CONCAT44(uVar113,uVar111);
                            local_818 = pUVar82;
                            if (UE::GC::GIsIncrementalReachabilityPending != false) {
                              UE::GC::MarkAsReachable((UObject *)pUVar82);
                            }
                            FWeakObjectPtr::operator=
                                      ((FWeakObjectPtr *)local_ae8,(FObjectPtr)&local_818);
                            TVar68 = local_b18;
                            local_810.DebugPtr = local_b18.DebugPtr;
                            if (UE::GC::GIsIncrementalReachabilityPending != false) {
                              UE::GC::MarkAsReachable((UObject *)local_b18.DebugPtr);
                            }
                            FWeakObjectPtr::operator=
                                      ((FWeakObjectPtr *)(local_ae8 + 8),(FObjectPtr)&local_810);
                            uVar58 = ((TVar68.DebugPtr)->GrassVarieties).ArrayNum;
                            uStack_ad0 = uVar59;
                            bVar25 = false;
                            uStack_ad4 = local_af0;
                            local_ae8._16_4_ = uVar32;
                            iStack_acc = local_b68;
                            local_ac8 = CONCAT44(local_b40,uVar58);
                            iVar29 = TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
                                     ::FindIndexByHash<FCachedLandscapeFoliage::FGrassCompKey>
                                               (&(pAVar80->FoliageCache).CachedGrassComps,
                                                (((local_b68 << 8 ^ local_b6c) << 3 ^ local_b40) <<
                                                 10 ^ uVar58) << 3 ^ local_ae8._12_4_ ^
                                                local_ae8._8_4_ ^ local_ae8._4_4_ ^ local_ae8._0_4_
                                                ^ uVar32 ^ local_af0,(FGrassCompKey *)local_ae8);
                            uVar59 = local_b6c;
                            if ((iVar29 == -1) ||
                               (lVar35 = (longlong)iVar29 * 0x68 +
                                         *(longlong *)
                                          &(pAVar80->FoliageCache).CachedGrassComps.Elements,
                               lVar35 == 0)) {
                              if (fVar89 < fVar107) goto LAB_145f616c0;
                              if ((param_3) ||
                                 ((*local_970 < local_afc &&
                                  ((pAVar80->AsyncFoliageTasks).ArrayNum < local_b0c)))) {
                                iVar29 = (pUVar82->ActiveExcludedBoxes).ArrayNum;
                                pTVar69 = (TBox<double> *)
                                          (pUVar82->ActiveExcludedBoxes).AllocatorInstance.Data;
                                pTVar79 = pTVar69 + iVar29;
                                while( true ) {
                                  if ((pUVar82->ActiveExcludedBoxes).ArrayNum != iVar29) {
                                    local_b59 = 0;
                                    `TCheckedPointerIterator<ULandscapeComponent::FExcludeBox,int,0>
                                    ::operator!='::__l2::<lambda_1>::operator()(&local_b59);
                                  }
                                  if (pTVar69 == pTVar79) break;
                                  if ((((((pTVar69->Min).field0_0x0._s_0.X <= dStack_8f0) &&
                                        (local_908 < (pTVar69->Max).field0_0x0._s_0.X ||
                                         local_908 == (pTVar69->Max).field0_0x0._s_0.X)) &&
                                       ((pTVar69->Min).field0_0x0._s_0.Y <= (double)local_8e8._0_8_)
                                       ) && ((pdVar1 = &(pTVar69->Max).field0_0x0._s_0.Y,
                                             dStack_900 < *pdVar1 || dStack_900 == *pdVar1 &&
                                             ((pTVar69->Min).field0_0x0._s_0.Z <=
                                              (double)local_8e8._8_8_)))) &&
                                     (pdVar1 = &(pTVar69->Max).field0_0x0._s_0.Z,
                                     local_8f8 < *pdVar1 || local_8f8 == *pdVar1)) {
                                    if (((local_ab0.AllocatorInstance.Data <= pTVar69) &&
                                        (pTVar69 < (TBox<double> *)
                                                   (local_ab0.AllocatorInstance.Data +
                                                   (longlong)local_ab0.ArrayMax * 0x38))) &&
                                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                           (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar25)) {
                                      pcVar10 = (code *)swi(3);
                                      (*pcVar10)();
                                      return;
                                    }
                                    iVar31 = local_ab0.ArrayNum;
                                    if (local_ab0.ArrayNum == local_ab0.ArrayMax) {
                                      iVar31 = UE::Core::Private::
                                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                         (0x838,&local_ab0.AllocatorInstance,
                                                          &local_ab0.ArrayMax);
                                    }
                                    local_ab0.ArrayNum = iVar31 + 1;
                                    dVar12 = (pTVar69->Min).field0_0x0._s_0.Y;
                                    lVar35 = (longlong)iVar31 * 0x38;
                                    *(double *)&local_ab0.AllocatorInstance.Data[lVar35].field_0x0 =
                                         (pTVar69->Min).field0_0x0._s_0.X;
                                    *(double *)(local_ab0.AllocatorInstance.Data + lVar35 + 8) =
                                         dVar12;
                                    dVar12 = (pTVar69->Max).field0_0x0._s_0.X;
                                    *(double *)(local_ab0.AllocatorInstance.Data + lVar35 + 0x10) =
                                         (pTVar69->Min).field0_0x0._s_0.Z;
                                    *(double *)
                                     (local_ab0.AllocatorInstance.Data + lVar35 + 0x10 + 8) = dVar12
                                    ;
                                    dVar12 = (pTVar69->Max).field0_0x0._s_0.Z;
                                    *(double *)(local_ab0.AllocatorInstance.Data + lVar35 + 0x20) =
                                         (pTVar69->Max).field0_0x0._s_0.Y;
                                    *(double *)
                                     (local_ab0.AllocatorInstance.Data + lVar35 + 0x20 + 8) = dVar12
                                    ;
                                    *(undefined8 *)
                                     (local_ab0.AllocatorInstance.Data + lVar35 + 0x30) =
                                         *(undefined8 *)&pTVar69->IsValid;
                                  }
                                  pTVar69 = pTVar69 + 1;
                                }
                                if (local_ab0.ArrayMax != local_ab0.ArrayNum) {
                                  UE::Core::Private::
                                  ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x38,8,local_ab0.ArrayNum,&local_ab0.AllocatorInstance,
                                             local_ab0.ArrayNum,&local_ab0.ArrayMax);
                                }
                                goto LAB_145f6189d;
                              }
                              if ((TBox<double> *)local_ab0.AllocatorInstance.Data !=
                                  (TBox<double> *)0x0) {
                                FMemory::Free(local_ab0.AllocatorInstance.Data);
                              }
                            }
                            else {
                              bVar24 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar35 + 0x30));
                              pUVar20 = local_b30;
                              if ((((!bVar24) &&
                                   (*(uint *)(lVar35 + 0x4c) != GGrassExclusionChangeTag)) &&
                                  (*(char *)(lVar35 + 0x59) == '\0')) &&
                                 (*(char *)(lVar35 + 0x58) == '\0')) {
                                pTVar69 = (TBox<double> *)
                                          (pUVar82->ActiveExcludedBoxes).AllocatorInstance.Data;
                                iVar29 = (pUVar82->ActiveExcludedBoxes).ArrayNum;
                                pTVar79 = pTVar69 + iVar29;
                                while( true ) {
                                  if ((pUVar20->ActiveExcludedBoxes).ArrayNum != iVar29) {
                                    local_b5a = 0;
                                    `TCheckedPointerIterator<ULandscapeComponent::FExcludeBox,int,0>
                                    ::operator!='::__l2::<lambda_1>::operator()(&local_b5a);
                                  }
                                  if (pTVar69 == pTVar79) break;
                                  if ((((pTVar69->Min).field0_0x0._s_0.X <= dStack_8f0) &&
                                      (local_908 < (pTVar69->Max).field0_0x0._s_0.X ||
                                       local_908 == (pTVar69->Max).field0_0x0._s_0.X)) &&
                                     (((pTVar69->Min).field0_0x0._s_0.Y <= (double)local_8e8._0_8_
                                      && (((pdVar1 = &(pTVar69->Max).field0_0x0._s_0.Y,
                                           dStack_900 < *pdVar1 || dStack_900 == *pdVar1 &&
                                           ((pTVar69->Min).field0_0x0._s_0.Z <=
                                            (double)local_8e8._8_8_)) &&
                                          (pdVar1 = &(pTVar69->Max).field0_0x0._s_0.Z,
                                          local_8f8 < *pdVar1 || local_8f8 == *pdVar1)))))) {
                                    if (((local_ab0.AllocatorInstance.Data <= pTVar69) &&
                                        (pTVar69 < (TBox<double> *)
                                                   (local_ab0.AllocatorInstance.Data +
                                                   (longlong)local_ab0.ArrayMax * 0x38))) &&
                                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                           (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar24)) {
                                      pcVar10 = (code *)swi(3);
                                      (*pcVar10)();
                                      return;
                                    }
                                    iVar31 = local_ab0.ArrayNum;
                                    if (local_ab0.ArrayNum == local_ab0.ArrayMax) {
                                      iVar31 = UE::Core::Private::
                                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                         (0x838,&local_ab0.AllocatorInstance,
                                                          &local_ab0.ArrayMax);
                                    }
                                    local_ab0.ArrayNum = iVar31 + 1;
                                    dVar12 = (pTVar69->Min).field0_0x0._s_0.Y;
                                    lVar60 = (longlong)iVar31 * 0x38;
                                    *(double *)&local_ab0.AllocatorInstance.Data[lVar60].field_0x0 =
                                         (pTVar69->Min).field0_0x0._s_0.X;
                                    *(double *)(local_ab0.AllocatorInstance.Data + lVar60 + 8) =
                                         dVar12;
                                    dVar12 = (pTVar69->Max).field0_0x0._s_0.X;
                                    *(double *)(local_ab0.AllocatorInstance.Data + lVar60 + 0x10) =
                                         (pTVar69->Min).field0_0x0._s_0.Z;
                                    *(double *)
                                     (local_ab0.AllocatorInstance.Data + lVar60 + 0x10 + 8) = dVar12
                                    ;
                                    dVar12 = (pTVar69->Max).field0_0x0._s_0.Z;
                                    *(double *)(local_ab0.AllocatorInstance.Data + lVar60 + 0x20) =
                                         (pTVar69->Max).field0_0x0._s_0.Y;
                                    *(double *)
                                     (local_ab0.AllocatorInstance.Data + lVar60 + 0x20 + 8) = dVar12
                                    ;
                                    *(undefined8 *)
                                     (local_ab0.AllocatorInstance.Data + lVar60 + 0x30) =
                                         *(undefined8 *)&pTVar69->IsValid;
                                  }
                                  pTVar69 = pTVar69 + 1;
                                }
                                if (local_ab0.ArrayMax != local_ab0.ArrayNum) {
                                  UE::Core::Private::
                                  ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x38,8,local_ab0.ArrayNum,&local_ab0.AllocatorInstance,
                                             local_ab0.ArrayNum,&local_ab0.ArrayMax);
                                }
                                pUVar82 = pUVar20;
                                if ((local_ab0.ArrayNum == *(int *)(lVar35 + 0x40)) &&
                                   (bVar24 = CompareItems<UE::Math::TBox<double>,int>
                                                       ((TBox<double> *)
                                                        local_ab0.AllocatorInstance.Data,
                                                        *(TBox<double> **)(lVar35 + 0x38),
                                                        local_ab0.ArrayNum), bVar24)) {
                                  *(uint *)(lVar35 + 0x4c) = GGrassExclusionChangeTag;
                                  pAVar80 = local_b50;
                                }
                                else {
                                  local_ab8 = *(undefined8 *)(lVar35 + 0x28);
                                  bVar25 = true;
                                  *(undefined1 *)(lVar35 + 0x59) = 1;
                                  pAVar80 = local_b50;
                                }
                              }
                              *(uint *)(lVar35 + 0x48) = GFrameNumber;
                              QueryPerformanceCounter(&local_808);
                              *(double *)(lVar35 + 0x50) =
                                   (double)local_808.QuadPart *
                                   FGenericPlatformTime::SecondsPerCycle +
                                   (double)CONCAT44(uVar113,uVar111);
                              uVar32 = local_b48;
                              if (bVar25) {
LAB_145f6189d:
                                local_a9c = GGrassExclusionChangeTag;
                                if ((((pUVar82->GrassData).Object)->NumElements < 0) &&
                                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("Component->GrassData->HasValidData()",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                                  ,0xb0d,L""), bVar25)) {
                                  pcVar10 = (code *)swi(3);
                                  (*pcVar10)();
                                  return;
                                }
                                *local_970 = *local_970 + 1;
                                FVar39 = StatPtr_STAT_FoliageGrassStartComp;
                                if (StatPtr_STAT_FoliageGrassStartComp ==
                                    (FThreadSafeStaticStat<FStat_STAT_FoliageGrassStartComp>)0x0) {
                                  pFVar38 = ::FName::FName(local_5a8,"STAT_FoliageGrassStartComp");
                                  FVar39 = (FThreadSafeStaticStat<FStat_STAT_FoliageGrassStartComp>)
                                           FThreadSafeStaticStatBase::DoSetup
                                                     ((FThreadSafeStaticStatBase *)
                                                      &StatPtr_STAT_FoliageGrassStartComp,*pFVar38,
                                                      L"Grass Start Comp","STATGROUP_Foliage",
                                                      "STATCAT_Advanced",L"Foliage",true,true,
                                                      ST_int64,true,false,MCR_Invalid);
                                }
                                FVar83 = *(FName *)FVar39;
                                bVar25 = false;
                                bVar19 = false;
                                local_968.ComparisonIndex.Value = 0;
                                local_968.Number = 0;
                                bVar24 = false;
                                bVar27 = false;
                                FVar67 = FVar83.ComparisonIndex.Value;
                                uVar58 = FVar83.Number;
                                if ((FVar67.Value == 0) && (uVar58 == 0)) {
LAB_145f61a2a:
                                  bVar19 = bVar27;
                                  bVar25 = bVar24;
                                  bVar24 = false;
                                  FVar83 = local_968;
                                }
                                else {
                                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                                    local_a5c.Bits = 0;
                                    FGenericPlatformMisc::BeginNamedEvent
                                              ((FColor *)&local_a5c._s_0,
                                               (char *)*(FName *)((longlong)FVar39 + 0x10));
                                    bVar25 = false;
                                    bVar19 = true;
                                    bVar24 = false;
                                    bVar27 = true;
                                    if (-1 < CpuChannel->Enabled) {
                                      local_a08.ComparisonIndex.Value = FVar67.Value;
                                      local_a08.Number = uVar58;
                                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                                (&local_a08,
                                                 (wchar_t *)*(FName *)((longlong)FVar39 + 8),
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                                 ,0xb11);
                                      bVar25 = true;
                                      bVar19 = true;
                                      bVar24 = true;
                                      bVar27 = true;
                                    }
                                  }
                                  if (FThreadStats::bPrimaryEnable == false) goto LAB_145f61a2a;
                                  local_a00 = FVar67.Value;
                                  uStack_9fc = uVar58;
                                  local_968 = FVar83;
                                  FThreadStats::AddMessage(FVar83,CycleScopeStart);
                                  bVar24 = true;
                                }
                                local_800 = (FName)pUVar82->_padding_;
                                ::FName::ToString(&local_800,&local_6a8);
                                ::FString::ToLower(&local_6a8,&local_5e8);
                                local_8b0 = (FName)(local_b18.DebugPtr)->_padding_;
                                ::FName::ToString(&local_8b0,&local_698);
                                ::FString::ToLower(&local_698,&local_5f8);
                                ::FString::PrintfImpl(&local_838,L"%s%s%d %d %d");
                                lVar35 = 0;
                                local_188.Data = (FScriptContainerElement *)0x0;
                                if (local_838.Data.ArrayNum == 0) {
                                  _Str = L"";
LAB_145f61b27:
                                  sVar40 = wcslen(_Str);
                                  local_178 = (int)sVar40;
                                  uVar58 = local_178 + 1;
                                  if (0x80 < uVar58) {
                                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::
                                    ResizeAllocation(&local_188,0,uVar58,1);
                                  }
                                  FVar64.Data = local_208;
                                  if (local_188.Data != (FScriptContainerElement *)0x0) {
                                    FVar64.Data = local_188.Data;
                                  }
                                  bVar27 = false;
                                  lVar60 = lVar35;
                                  local_180 = FVar64.Data;
                                  if (0 < (int)uVar58) {
                                    do {
                                      uVar5 = *(ushort *)((longlong)_Str + lVar60 * 2);
                                      FVar64.Data[lVar60] = SUB21(uVar5,0);
                                      lVar60 = lVar60 + 1;
                                      bVar27 = (bool)(bVar27 | 0x7f < uVar5);
                                    } while (lVar60 < (int)uVar58);
                                    if (bVar27) {
                                      do {
                                        if (0x7f < *(ushort *)((longlong)_Str + lVar35 * 2)) {
                                          FVar64.Data[lVar35] = (FScriptContainerElement)0x3f;
                                        }
                                        lVar35 = lVar35 + 1;
                                      } while (lVar35 < (int)uVar58);
                                    }
                                  }
                                  if ((FVar64.Data + (int)uVar58 == (FScriptContainerElement *)0x0)
                                     && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("Result",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                                  ,0x25,L""), bVar27)) {
                                    pcVar10 = (code *)swi(3);
                                    (*pcVar10)();
                                    return;
                                  }
                                }
                                else {
                                  _Str = (wchar_t *)local_838.Data.AllocatorInstance.Data;
                                  if (local_838.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) goto LAB_145f61b27;
                                  local_180 = (FScriptContainerElement *)0x0;
                                  local_178 = 0;
                                }
                                uVar62 = 0xffffffff;
                                uVar58 = 0xffffffff;
                                FVar3 = *local_180;
                                pFVar77 = local_180;
                                while (FVar3 != (FScriptContainerElement)0x0) {
                                  pFVar77 = pFVar77 + 1;
                                  uVar62 = (uint)(int)(char)FVar3 ^ uVar62;
                                  uVar58 = FCrc::CRCTablesSB8[2][uVar62 >> 8 & 0xff] ^
                                           FCrc::CRCTablesSB8[1][uVar62 >> 0x10 & 0xff] ^
                                           FCrc::CRCTablesSB8[0][uVar62 >> 0x18] ^
                                           FCrc::CRCTablesSB8[3][uVar62 & 0xff];
                                  uVar62 = (ulonglong)uVar58;
                                  FVar3 = *pFVar77;
                                }
                                uVar58 = ~uVar58;
                                if (local_188.Data != (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_188.Data);
                                }
                                if (local_838.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_838.Data.AllocatorInstance.Data);
                                }
                                if (local_5f8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
                                }
                                if (local_698.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_698.Data.AllocatorInstance.Data);
                                }
                                if (local_5e8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
                                }
                                if (local_6a8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
                                }
                                if (uVar58 == 0) {
                                  uVar58 = 1;
                                }
                                local_b34 = uVar58;
                                UObjectBase::AtomicallyClearFlags
                                          ((UObjectBase *)pAVar80,RF_Transactional);
                                pUVar41 = UObjectBaseUtility::GetOutermost
                                                    ((UObjectBaseUtility *)pAVar80);
                                if ((*(int *)(*(longlong *)
                                               ((longlong)ThreadLocalStoragePointer +
                                               (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS10) &&
                                   (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
                                  StatPtr_STAT_GrassCreateComp =
                                       (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_146_::FStat_STAT_GrassCreateComp>
                                        )0x0;
                                  pFVar38 = ::FName::FName(&local_5b0,"STAT_GrassCreateComp");
                                  FThreadSafeStaticStatBase::DoSetup
                                            ((FThreadSafeStaticStatBase *)
                                             &StatPtr_STAT_GrassCreateComp,*pFVar38,
                                             L"STAT_GrassCreateComp","STATGROUP_Quick",
                                             "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                                             false,MCR_Invalid);
                                  _Init_thread_footer(&::_TSS10);
                                }
                                FVar42 = StatPtr_STAT_GrassCreateComp;
                                if (StatPtr_STAT_GrassCreateComp ==
                                    (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_146_::FStat_STAT_GrassCreateComp>
                                     )0x0) {
                                  pFVar38 = ::FName::FName(&local_5b8,"STAT_GrassCreateComp");
                                  FVar42 = (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_146_::FStat_STAT_GrassCreateComp>
                                            )FThreadSafeStaticStatBase::DoSetup
                                                       ((FThreadSafeStaticStatBase *)
                                                        &StatPtr_STAT_GrassCreateComp,*pFVar38,
                                                        L"STAT_GrassCreateComp","STATGROUP_Quick",
                                                        "STATCAT_Advanced",L"Quick",true,true,
                                                        ST_int64,true,false,MCR_Invalid);
                                }
                                FVar71 = *(FName *)FVar42;
                                bVar27 = false;
                                bVar18 = false;
                                local_918.ComparisonIndex.Value = 0;
                                local_918.Number = 0;
                                FVar67 = FVar71.ComparisonIndex.Value;
                                uVar58 = FVar71.Number;
                                if ((FVar67.Value == 0) && (uVar58 == 0)) {
LAB_145f61eee:
                                  bVar17 = false;
                                  FVar71 = local_918;
                                }
                                else {
                                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                                    local_a58.Bits = 0;
                                    FGenericPlatformMisc::BeginNamedEvent
                                              ((FColor *)&local_a58._s_0,
                                               (char *)*(FName *)((longlong)FVar42 + 0x10));
                                    bVar27 = false;
                                    bVar18 = true;
                                    if (-1 < CpuChannel->Enabled) {
                                      local_9f8.ComparisonIndex.Value = FVar67.Value;
                                      local_9f8.Number = uVar58;
                                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                                (&local_9f8,
                                                 (wchar_t *)*(FName *)((longlong)FVar42 + 8),
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                                 ,0xb20);
                                      bVar27 = true;
                                      bVar18 = true;
                                    }
                                  }
                                  if (FThreadStats::bPrimaryEnable == false) goto LAB_145f61eee;
                                  local_9f0 = FVar67.Value;
                                  uStack_9ec = uVar58;
                                  local_918 = FVar71;
                                  FThreadStats::AddMessage(FVar71,CycleScopeStart);
                                  bVar17 = true;
                                }
                                local_9e8 = 0;
                                FObjectInitializer::AssertIfInConstructor
                                          ((UObject *)local_b50,
                                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                          );
                                pUVar43 = Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister
                                                    ();
                                FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                          ((FStaticConstructObjectParameters *)local_3e8,pUVar43);
                                local_3e8._8_8_ = local_b50;
                                local_3e8._48_8_ = (FObjectInstancingGraph *)0x0;
                                local_3e8._56_8_ = (UPackage *)0x0;
                                local_3e8._16_4_ = 0;
                                local_3e8._20_4_ = 0;
                                local_3e8._24_4_ = RF_Transient;
                                local_3e8._40_8_ = (UObject *)0x0;
                                local_3e8[0x20] = false;
                                this_04 = (UGrassInstancedStaticMeshComponent *)
                                          StaticConstructObject_Internal
                                                    ((FStaticConstructObjectParameters *)local_3e8);
                                local_a80 = this_04;
                                if (local_3e8._64_8_ != 0) {
                                  plVar61 = (longlong *)(local_3e8 + 0x50);
                                  if ((longlong *)local_3e8._104_8_ != (longlong *)0x0) {
                                    plVar61 = (longlong *)local_3e8._104_8_;
                                  }
                                  (**(code **)(*plVar61 + 0x10))();
                                }
                                if (bVar18) {
                                  FGenericPlatformMisc::EndNamedEvent();
                                }
                                if (bVar27) {
                                  FCpuProfilerTrace::OutputEndEvent();
                                }
                                if (bVar17) {
                                  FThreadStats::AddMessage(FVar71,CycleScopeEnd);
                                }
                                local_8a8 = this_04;
                                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                   (this_04 != (UGrassInstancedStaticMeshComponent *)0x0)) {
                                  UE::GC::MarkAsReachable((UObject *)this_04);
                                }
                                FWeakObjectPtr::operator=(&FStack_ac0,(FObjectPtr)&local_8a8);
                                pAVar80 = local_b50;
                                TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
                                ::Emplace<FCachedLandscapeFoliage::FGrassComp_const_&>
                                          (&(local_b50->FoliageCache).CachedGrassComps,
                                           (FGrassComp *)local_7f0,(bool *)local_ae8);
                                this_04->field_0x1ab = 0;
                                (**(code **)(*(longlong *)this_04 + 0xb28))
                                          (this_04,(this_10->GrassMesh).field0_0x0.DebugPtr);
                                iVar29 = this_10->MinLOD;
                                this_04->field_0x27d = this_04->field_0x27d & 0x6f;
                                pvVar81 = ThreadLocalStoragePointer;
                                *(int *)&this_04->field_0x594 = iVar29;
                                uVar62 = (ulonglong)_tls_index;
                                this_04->field_0x27c =
                                     (this_10->bReceivesDecals << 6 ^ this_04->field_0x27c) & 0x40U
                                     ^ this_04->field_0x27c;
                                if ((*(int *)(*(longlong *)((longlong)pvVar81 + uVar62 * 8) + 0x9d4c
                                             ) < ::_TSS11) &&
                                   (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
                                  ::FName::FName(&NoCollision,L"NoCollision");
                                  _Init_thread_footer(&::_TSS11);
                                }
                                (**(code **)(*(longlong *)this_04 + 0x788))(this_04,NoCollision,1);
                                this_04->field_0x718 = this_04->field_0x718 | 4;
                                UActorComponent::SetCanEverAffectNavigation
                                          ((UActorComponent *)this_04,false);
                                *(uint *)&this_04->field_0x6e4 = local_b34;
                                this_04->field_0x288 = this_10->LightingChannels;
                                this_04->field_0x27c =
                                     pAVar80->field_0x598 << 7 | this_04->field_0x27c & 0x7f;
                                bVar57 = this_04->field_0x27e;
                                this_04->field_0x27e = bVar57 & 0xbf;
                                if (((this_10->bCastDynamicShadow == false) &&
                                    (this_10->bCastContactShadow == false)) || (bVar9)) {
                                  bVar56 = 0;
                                }
                                else {
                                  bVar56 = 1;
                                }
                                bVar56 = bVar57 & 0xbe | bVar56;
                                this_04->field_0x27e = bVar56;
                                bVar56 = (this_10->bAffectDistanceFieldLighting << 4 ^ bVar56) &
                                         0x10 ^ bVar56;
                                this_04->field_0x27e = bVar56;
                                if ((this_10->bCastDynamicShadow == false) || (bVar9)) {
                                  bVar57 = 0;
                                }
                                else {
                                  bVar57 = 0x20;
                                }
                                this_04->field_0x27e = bVar56 & 0xdf | bVar57;
                                if ((this_10->bCastContactShadow == false) || (bVar9)) {
                                  bVar57 = 0;
                                }
                                else {
                                  bVar57 = 1;
                                }
                                this_04->field_0x27f = this_04->field_0x27f & 0xfe;
                                this_04->field_0x27f = this_04->field_0x27f | bVar57;
                                if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
                                     *)&this_04->field_0x548 != &this_10->OverrideMaterials) {
                                  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
                                  ::CopyToEmpty<TObjectPtr<UMaterialInterface>,int>
                                            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
                                              *)&this_04->field_0x548,
                                             (TObjectPtr<UMaterialInterface> *)
                                             (this_10->OverrideMaterials).AllocatorInstance.Data,
                                             (this_10->OverrideMaterials).ArrayNum,
                                             *(int *)&this_04->field_0x554);
                                }
                                this_04->bEvaluateWorldPositionOffset = '\x01';
                                *(uint *)&this_04->field_0x5a8 =
                                     this_10->InstanceWorldPositionOffsetDisableDistance;
                                this_04->field_0x279 = this_10->ShadowCacheInvalidationBehavior;
                                (**(code **)(*(longlong *)this_04 + 0x378))(this_04);
                                pFVar44 = ULandscapeComponent::GetMeshMapBuildData(local_b30);
                                local_8a0 = pFVar44;
                                if ((((this_10->bUseLandscapeLightmap != false) &&
                                     (iVar29 = UStaticMesh::GetNumLODs
                                                         ((this_10->GrassMesh).field0_0x0.DebugPtr),
                                     0 < iVar29)) && (pFVar44 != (FMeshMapBuildData *)0x0)) &&
                                   ((pFVar44->LightMap).Reference != (FLightMap *)0x0)) {
                                  uVar58 = UStaticMesh::GetNumLODs
                                                     ((this_10->GrassMesh).field0_0x0.DebugPtr);
                                  uVar32 = UStaticMesh::GetNumLODs
                                                     ((this_10->GrassMesh).field0_0x0.DebugPtr);
                                  UStaticMeshComponent::SetLODDataCount
                                            ((UStaticMeshComponent *)this_04,uVar32,uVar58);
                                  this_05 = ::operator_new(0x120);
                                  if (this_05 == (FLightMap2D *)0x0) {
                                    this_05 = (FLightMap2D *)0x0;
                                  }
                                  else {
                                    pFVar45 = (FLightMap2D *)
                                              (**(code **)(((pFVar44->LightMap).Reference)->
                                                           _padding_ + 0x30))();
                                    FLightMap2D::FLightMap2D(this_05,pFVar45);
                                    *(undefined ***)this_05 = &___7FLandscapeGrassLightMap__6B_;
                                    (this_05->CoordinateScale).field0_0x0._s_0 =
                                         (TVector2<double>_u_0_s_0)
                                         UE::Math::TVector2<double>::ZeroVector.field0_0x0;
                                    (this_05->CoordinateBias).field0_0x0._s_0 =
                                         (TVector2<double>_u_0_s_0)
                                         UE::Math::TVector2<double>::ZeroVector.field0_0x0;
                                    FLightMap::AddRef((FLightMap *)this_05);
                                  }
                                  if ((pFVar44->ShadowMap).Reference == (FShadowMap *)0x0) {
                                    this_06 = (FShadowMap *)0x0;
                                  }
                                  else {
                                    this_06 = ::operator_new(0x60);
                                    if (this_06 == (FShadowMap *)0x0) {
                                      this_06 = (FShadowMap *)0x0;
                                    }
                                    else {
                                      lVar35 = (**(code **)(((pFVar44->ShadowMap).Reference)->
                                                            _padding_ + 0x28))();
                                      this_06->_padding_ = (longlong)&___7FShadowMap__6B_;
                                      (this_06->LightGuids).AllocatorInstance.Data =
                                           (FScriptContainerElement *)0x0;
                                      TArray<FGuid,TSizedDefaultAllocator<32>_>::
                                      CopyToEmpty<FGuid,int>
                                                (&this_06->LightGuids,*(FGuid **)(lVar35 + 8),
                                                 *(int *)(lVar35 + 0x10),0);
                                      iVar29 = *(int *)(lVar35 + 0x18);
                                      this_06->_padding_ = (longlong)&___7FShadowMap2D__6B_;
                                      this_06->NumRefs = iVar29;
                                      pUVar52 = *(UObject **)(lVar35 + 0x20);
                                      this_06[1]._padding_ = (longlong)pUVar52;
                                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                         (pUVar52 != (UObject *)0x0)) {
                                        UE::GC::MarkAsReachable(pUVar52);
                                      }
                                      uVar15 = *(undefined8 *)(lVar35 + 0x30);
                                      this_06[1].LightGuids.AllocatorInstance.Data =
                                           *(FScriptContainerElement **)(lVar35 + 0x28);
                                      this_06[1].LightGuids.ArrayNum = (int)uVar15;
                                      this_06[1].LightGuids.ArrayMax =
                                           (int)((ulonglong)uVar15 >> 0x20);
                                      lVar60 = *(longlong *)(lVar35 + 0x40);
                                      *(undefined8 *)&this_06[1].NumRefs =
                                           *(undefined8 *)(lVar35 + 0x38);
                                      this_06[2]._padding_ = lVar60;
                                      *(undefined4 *)&this_06[2].LightGuids.AllocatorInstance.Data =
                                           *(undefined4 *)(lVar35 + 0x48);
                                      uVar15 = *(undefined8 *)(lVar35 + 0x50);
                                      uVar16 = *(undefined8 *)(lVar35 + 0x58);
                                      this_06->_padding_ =
                                           (longlong)&___7FLandscapeGrassShadowMap__6B_;
                                      this_06[2].LightGuids.ArrayNum = (int)uVar15;
                                      this_06[2].LightGuids.ArrayMax =
                                           (int)((ulonglong)uVar15 >> 0x20);
                                      *(undefined8 *)&this_06[2].NumRefs = uVar16;
                                      this_06[1].LightGuids =
                                           (TArray<FGuid,TSizedDefaultAllocator<32>_>)
                                           UE::Math::TVector2<double>::ZeroVector.field0_0x0;
                                      *(TVector2<double>_u_0 *)&this_06[1].NumRefs =
                                           (TVector2<double>_u_0_s_0)
                                           UE::Math::TVector2<double>::ZeroVector.field0_0x0;
                                    }
                                    if (this_06 != (FShadowMap *)0x0) {
                                      FShadowMap::AddRef(this_06);
                                    }
                                  }
                                  pFVar44 = local_8a0;
                                  local_b34 = *(uint *)&local_a80->field_0x600;
                                  uVar62 = (ulonglong)(int)local_b34;
                                  pFVar75 = (((TArray<FStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_>
                                               *)&local_a80->field_0x5f8)->AllocatorInstance).Data;
                                  pFVar77 = pFVar75 + 0x28;
                                  local_9d8 = pFVar75 + uVar62 * 0x50;
                                  while( true ) {
                                    local_a88 = pFVar77;
                                    local_9e0 = pFVar75;
                                    if (*(int *)&local_a80->field_0x600 != (int)uVar62) {
                                      local_b58[0] = 0;
                                      `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::
                                      operator!='::__l2::<lambda_1>::operator()(local_b58);
                                    }
                                    if (pFVar75 == local_9d8) break;
                                    pFVar46 = ::operator_new(0x38);
                                    if (pFVar46 == (FMeshMapBuildData *)0x0) {
                                      pFVar46 = (FMeshMapBuildData *)0x0;
                                    }
                                    else {
                                      pFVar46 = FMeshMapBuildData::FMeshMapBuildData(pFVar46);
                                    }
                                    if (pFVar77 == local_5c0) {
                                      if (pFVar46 != (FMeshMapBuildData *)0x0) {
                                        FMeshMapBuildData::~FMeshMapBuildData(pFVar46);
                                        ::operator_delete(pFVar46,0x38);
                                      }
                                    }
                                    else {
                                      this_01 = *(FMeshMapBuildData **)pFVar77;
                                      *(FMeshMapBuildData **)local_a88 = pFVar46;
                                      pFVar77 = local_a88;
                                      if (this_01 != (FMeshMapBuildData *)0x0) {
                                        FMeshMapBuildData::~FMeshMapBuildData(this_01);
                                        ::operator_delete(this_01,0x38);
                                        pFVar77 = local_a88;
                                      }
                                    }
                                    pFVar45 = (FLightMap2D *)**(undefined8 **)pFVar77;
                                    if (pFVar45 != this_05) {
                                      **(undefined8 **)pFVar77 = this_05;
                                      if (this_05 != (FLightMap2D *)0x0) {
                                        FLightMap::AddRef((FLightMap *)this_05);
                                      }
                                      if (pFVar45 != (FLightMap2D *)0x0) {
                                        FLightMap::Release((FLightMap *)pFVar45);
                                      }
                                    }
                                    this_02 = *(FShadowMap **)(*(longlong *)pFVar77 + 8);
                                    if (this_02 != this_06) {
                                      *(FShadowMap **)(*(longlong *)pFVar77 + 8) = this_06;
                                      if (this_06 != (FShadowMap *)0x0) {
                                        FShadowMap::AddRef(this_06);
                                      }
                                      if (this_02 != (FShadowMap *)0x0) {
                                        FShadowMap::Release(this_02);
                                      }
                                    }
                                    uVar62 = (ulonglong)local_b34;
                                    pFVar75 = local_9e0 + 0x50;
                                    *(FLightmapResourceCluster **)(*(longlong *)pFVar77 + 0x30) =
                                         pFVar44->ResourceCluster;
                                    pFVar77 = pFVar77 + 0x50;
                                  }
                                  if (this_06 != (FShadowMap *)0x0) {
                                    FShadowMap::Release(this_06);
                                  }
                                  pvVar81 = ThreadLocalStoragePointer;
                                  this_04 = local_a80;
                                  if (this_05 != (FLightMap2D *)0x0) {
                                    FLightMap::Release((FLightMap *)this_05);
                                    pvVar81 = ThreadLocalStoragePointer;
                                    this_04 = local_a80;
                                  }
                                }
                                if ((local_a78->ArrayNum == 0) || ((bool)FVar8)) {
                                  iVar29 = 0;
                                  *(undefined4 *)&this_04->field_0x710 = 0;
                                }
                                else {
                                  if ((GEngine == (UEngine *)0x0) ||
                                     (GEngine->UseGrassVarityPerQualityLevels == false)) {
                                    iVar29 = (this_10->StartCullDistance).Default;
                                  }
                                  else {
                                    iVar29 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::
                                             GetValue((
                                                  FPerQualityLevelProperty<FPerQualityLevelInt,int,2>
                                                  *)&this_10->StartCullDistanceQuality,
                                                  GGrassQualityLevel);
                                  }
                                  *(int *)&this_04->field_0x710 = (int)((float)iVar29 * fVar121);
                                  if ((GEngine == (UEngine *)0x0) ||
                                     (GEngine->UseGrassVarityPerQualityLevels == false)) {
                                    iVar29 = (this_10->EndCullDistance).Default;
                                  }
                                  else {
                                    iVar29 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::
                                             GetValue((
                                                  FPerQualityLevelProperty<FPerQualityLevelInt,int,2>
                                                  *)&this_10->EndCullDistanceQuality,
                                                  GGrassQualityLevel);
                                  }
                                  iVar29 = (int)((float)iVar29 * fVar121);
                                }
                                *(int *)&this_04->field_0x714 = iVar29;
                                if ((*(int *)(*(longlong *)
                                               ((longlong)pvVar81 + (ulonglong)_tls_index * 8) +
                                             0x9d4c) < ::_TSS13) &&
                                   (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
                                  StatPtr_STAT_GrassAttachComp =
                                       (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_159_::FStat_STAT_GrassAttachComp>
                                        )0x0;
                                  pFVar38 = ::FName::FName(&local_5c8,"STAT_GrassAttachComp");
                                  FThreadSafeStaticStatBase::DoSetup
                                            ((FThreadSafeStaticStatBase *)
                                             &StatPtr_STAT_GrassAttachComp,*pFVar38,
                                             L"STAT_GrassAttachComp","STATGROUP_Quick",
                                             "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                                             false,MCR_Invalid);
                                  _Init_thread_footer(&::_TSS13);
                                }
                                FVar47 = StatPtr_STAT_GrassAttachComp;
                                if (StatPtr_STAT_GrassAttachComp ==
                                    (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_159_::FStat_STAT_GrassAttachComp>
                                     )0x0) {
                                  pFVar38 = ::FName::FName(&local_5d0,"STAT_GrassAttachComp");
                                  FVar47 = (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_159_::FStat_STAT_GrassAttachComp>
                                            )FThreadSafeStaticStatBase::DoSetup
                                                       ((FThreadSafeStaticStatBase *)
                                                        &StatPtr_STAT_GrassAttachComp,*pFVar38,
                                                        L"STAT_GrassAttachComp","STATGROUP_Quick",
                                                        "STATCAT_Advanced",L"Quick",true,true,
                                                        ST_int64,true,false,MCR_Invalid);
                                }
                                FVar71 = *(FName *)FVar47;
                                bVar18 = false;
                                bVar27 = false;
                                local_928.ComparisonIndex.Value = 0;
                                local_928.Number = 0;
                                FVar67 = FVar71.ComparisonIndex.Value;
                                uVar58 = FVar71.Number;
                                if ((FVar67.Value == 0) && (uVar58 == 0)) {
LAB_145f627ce:
                                  bVar17 = false;
                                  FVar71 = local_928;
                                }
                                else {
                                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                                    local_a54.Bits = 0;
                                    FGenericPlatformMisc::BeginNamedEvent
                                              ((FColor *)&local_a54._s_0,
                                               (char *)*(FName *)((longlong)FVar47 + 0x10));
                                    bVar18 = false;
                                    bVar27 = true;
                                    if (-1 < CpuChannel->Enabled) {
                                      local_9d0.ComparisonIndex.Value = FVar67.Value;
                                      local_9d0.Number = uVar58;
                                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                                (&local_9d0,
                                                 (wchar_t *)*(FName *)((longlong)FVar47 + 8),
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                                 ,0xb62);
                                      bVar18 = true;
                                      bVar27 = true;
                                    }
                                  }
                                  if (FThreadStats::bPrimaryEnable == false) goto LAB_145f627ce;
                                  local_9c8 = FVar67.Value;
                                  uStack_9c4 = uVar58;
                                  local_928 = FVar71;
                                  FThreadStats::AddMessage(FVar71,CycleScopeStart);
                                  bVar17 = true;
                                }
                                pAVar80 = local_b50;
                                local_9c0 = 0;
                                (**(code **)(*(longlong *)this_04 + 0x508))
                                          (this_04,local_b50->_padding_);
                                lVar35 = pAVar80->_padding_;
                                dVar12 = *(double *)(lVar35 + 0x1f0);
                                dVar123 = *(double *)(lVar35 + 0x1f8);
                                dVar14 = *(double *)(lVar35 + 0x200);
                                dVar2 = *(double *)(lVar35 + 0x208);
                                local_2a8.Translation.XY.m128d_f64[0] = *(double *)(lVar35 + 0x210);
                                local_2a8.Translation.XY.m128d_f64[1] = *(double *)(lVar35 + 0x218);
                                local_2a8.Translation.ZW.m128d_f64[0] = *(double *)(lVar35 + 0x220);
                                local_2a8.Translation.ZW.m128d_f64[1] = *(double *)(lVar35 + 0x228);
                                local_2a8.Scale3D.XY.m128d_f64[0] =
                                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                                local_2a8.Scale3D.XY.m128d_f64[1] =
                                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                                auVar98._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
                                auVar98._0_8_ = auVar98._8_8_;
                                local_2a8.Scale3D.ZW.m128d_f64[0] =
                                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                                local_2a8.Scale3D.ZW.m128d_f64[1] =
                                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                                dVar91 = dVar12 * dVar12 + dVar14 * dVar14;
                                dVar97 = dVar123 * dVar123 + dVar2 * dVar2;
                                auVar99._8_4_ = SUB84(dVar97,0);
                                auVar99._0_8_ = dVar91;
                                auVar99._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
                                auVar92._0_8_ = auVar99._8_8_ + dVar91;
                                auVar92._8_8_ = dVar91 + dVar97;
                                uVar85 = -(ulonglong)
                                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.
                                           m128d_f64[0] <= auVar92._0_8_);
                                uVar87 = -(ulonglong)
                                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.
                                           m128d_f64[1] <= auVar92._8_8_);
                                auVar99 = sqrtpd(auVar98,auVar92);
                                uVar86 = -(ulonglong)
                                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.
                                           m128d_f64[0] <= auVar92._0_8_);
                                uVar88 = -(ulonglong)
                                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.
                                           m128d_f64[1] <= auVar92._8_8_);
                                auVar93 = divpd((undefined1  [16])
                                                GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                                auVar99);
                                auVar94._0_8_ = (ulonglong)(auVar93._0_8_ * dVar12) & uVar85;
                                uVar62 = uVar87 & (ulonglong)(auVar93._8_8_ * dVar123);
                                auVar94._8_4_ = (undefined4)uVar62;
                                auVar94._12_4_ = (undefined4)(uVar62 >> 0x20);
                                auVar95._0_4_ =
                                     ~(uint)uVar85 &
                                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                                auVar95._4_4_ =
                                     ~(uint)(uVar85 >> 0x20) &
                                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                                auVar95._8_4_ =
                                     ~(uint)uVar87 &
                                     GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                                auVar95._12_4_ =
                                     ~(uint)(uVar87 >> 0x20) &
                                     GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                                local_2a8.Rotation.XY.m128d_f64 = (double  [2])(auVar94 | auVar95);
                                auVar93 = divpd((undefined1  [16])
                                                GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                                auVar99);
                                auVar96._0_8_ = uVar86 & (ulonglong)(auVar93._0_8_ * dVar14);
                                uVar62 = uVar88 & (ulonglong)(auVar93._8_8_ * dVar2);
                                auVar96._8_4_ = (undefined4)uVar62;
                                auVar96._12_4_ = (undefined4)(uVar62 >> 0x20);
                                auVar93._4_4_ =
                                     ~(uint)(uVar86 >> 0x20) &
                                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                                auVar93._0_4_ =
                                     ~(uint)uVar86 &
                                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                                auVar93._8_4_ =
                                     ~(uint)uVar88 &
                                     GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                                auVar93._12_4_ =
                                     ~(uint)(uVar88 >> 0x20) &
                                     GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                                local_2a8.Rotation.ZW.m128d_f64 = (double  [2])(auVar96 | auVar93);
                                USceneComponent::SetWorldTransform
                                          ((USceneComponent *)this_04,&local_2a8,false,
                                           (FHitResult *)0x0,None);
                                pTVar76 = &pAVar80->FoliageComponents;
                                local_af8 = this_04;
                                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                  UE::GC::MarkAsReachable((UObject *)this_04);
                                }
                                pFVar77 = (pTVar76->AllocatorInstance).Data;
                                if (((pFVar77 <= (FScriptContainerElement *)&local_af8) &&
                                    ((FScriptContainerElement *)&local_af8 <
                                     pFVar77 + (longlong)(pAVar80->FoliageComponents).ArrayMax * 8))
                                   && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                          (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar26)) {
                                  pcVar10 = (code *)swi(3);
                                  (*pcVar10)();
                                  return;
                                }
                                iVar29 = (pAVar80->FoliageComponents).ArrayNum;
                                piVar6 = &(pAVar80->FoliageComponents).ArrayMax;
                                if (iVar29 == *piVar6) {
                                  iVar29 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x808,&pTVar76->AllocatorInstance,piVar6);
                                }
                                (pAVar80->FoliageComponents).ArrayNum = iVar29 + 1;
                                *(UGrassInstancedStaticMeshComponent **)
                                 ((pTVar76->AllocatorInstance).Data + (longlong)iVar29 * 8) =
                                     local_af8;
                                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                   (local_af8 != (UGrassInstancedStaticMeshComponent *)0x0)) {
                                  UE::GC::MarkAsReachable((UObject *)local_af8);
                                }
                                if (bVar27) {
                                  FGenericPlatformMisc::EndNamedEvent();
                                }
                                if (bVar18) {
                                  FCpuProfilerTrace::OutputEndEvent();
                                }
                                if (bVar17) {
                                  FThreadStats::AddMessage(FVar71,CycleScopeEnd);
                                }
                                if ((*(int *)(*(longlong *)
                                               ((longlong)ThreadLocalStoragePointer +
                                               (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS14) &&
                                   (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
                                  StatPtr_STAT_GrassCreateBuilder =
                                       (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_160_::FStat_STAT_GrassCreateBuilder>
                                        )0x0;
                                  pFVar38 = ::FName::FName(&local_5d8,"STAT_GrassCreateBuilder");
                                  FThreadSafeStaticStatBase::DoSetup
                                            ((FThreadSafeStaticStatBase *)
                                             &StatPtr_STAT_GrassCreateBuilder,*pFVar38,
                                             L"STAT_GrassCreateBuilder","STATGROUP_Quick",
                                             "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                                             false,MCR_Invalid);
                                  _Init_thread_footer(&::_TSS14);
                                }
                                FVar48 = StatPtr_STAT_GrassCreateBuilder;
                                if (StatPtr_STAT_GrassCreateBuilder ==
                                    (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_160_::FStat_STAT_GrassCreateBuilder>
                                     )0x0) {
                                  pFVar38 = ::FName::FName(&local_618,"STAT_GrassCreateBuilder");
                                  FVar48 = (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_160_::FStat_STAT_GrassCreateBuilder>
                                            )FThreadSafeStaticStatBase::DoSetup
                                                       ((FThreadSafeStaticStatBase *)
                                                        &StatPtr_STAT_GrassCreateBuilder,*pFVar38,
                                                        L"STAT_GrassCreateBuilder","STATGROUP_Quick"
                                                        ,"STATCAT_Advanced",L"Quick",true,true,
                                                        ST_int64,true,false,MCR_Invalid);
                                }
                                FVar71 = *(FName *)FVar48;
                                bVar18 = false;
                                bVar27 = false;
                                local_938.ComparisonIndex.Value = 0;
                                local_938.Number = 0;
                                FVar67 = FVar71.ComparisonIndex.Value;
                                uVar58 = FVar71.Number;
                                if ((FVar67.Value == 0) && (uVar58 == 0)) {
LAB_145f62bf7:
                                  bVar17 = false;
                                  FVar71 = local_938;
                                }
                                else {
                                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                                    local_a50.Bits = 0;
                                    FGenericPlatformMisc::BeginNamedEvent
                                              ((FColor *)&local_a50._s_0,
                                               (char *)*(FName *)((longlong)FVar48 + 0x10));
                                    bVar18 = false;
                                    bVar27 = true;
                                    if (-1 < CpuChannel->Enabled) {
                                      local_9b8.ComparisonIndex.Value = FVar67.Value;
                                      local_9b8.Number = uVar58;
                                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                                (&local_9b8,
                                                 (wchar_t *)*(FName *)((longlong)FVar48 + 8),
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                                 ,0xb6f);
                                      bVar18 = true;
                                      bVar27 = true;
                                    }
                                  }
                                  if (FThreadStats::bPrimaryEnable == false) goto LAB_145f62bf7;
                                  local_9b0 = FVar67.Value;
                                  uStack_9ac = uVar58;
                                  local_938 = FVar71;
                                  FThreadStats::AddMessage(FVar71,CycleScopeStart);
                                  bVar17 = true;
                                }
                                uVar58 = local_b44;
                                uVar32 = 0;
                                if (bVar23 == false) {
                                  if ((local_b44 <= uVar30) &&
                                     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                         (
                                                  "HaltonBaseIndex > (uint32)MaxInstancesSub",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                                  ,0xb74,L""), bVar26)) {
                                    pcVar10 = (code *)swi(3);
                                    (*pcVar10)();
                                    return;
                                  }
                                  uVar32 = uVar58 - uVar30;
                                }
                                pFVar49 = ::operator_new(0x360);
                                if (pFVar49 == (FAsyncGrassBuilder *)0x0) {
                                  pFVar49 = (FAsyncGrassBuilder *)0x0;
                                }
                                else {
                                  pFVar49 = FAsyncGrassBuilder::FAsyncGrassBuilder
                                                      (pFVar49,local_b50,local_b30,
                                                       local_b18.DebugPtr,this_10,local_b00,this_04,
                                                       local_b48,local_b6c,local_b68,uVar32,
                                                       &local_ab0);
                                }
                                if (bVar27) {
                                  FGenericPlatformMisc::EndNamedEvent();
                                }
                                if (bVar18) {
                                  FCpuProfilerTrace::OutputEndEvent();
                                }
                                if (bVar17) {
                                  FThreadStats::AddMessage(FVar71,CycleScopeEnd);
                                }
                                if (*(char *)pFVar49 == '\0') {
                                  pFVar77 = (pFVar49->ClusterTree).AllocatorInstance.Data;
                                  if (pFVar77 != (FScriptContainerElement *)0x0) {
                                    FMemory::Free(pFVar77);
                                  }
                                  FStaticMeshInstanceData::~FStaticMeshInstanceData
                                            (&pFVar49->InstanceBuffer);
                                  pFVar77 = (pFVar49->ExcludedBoxes).AllocatorInstance.Data;
                                  if (pFVar77 != (FScriptContainerElement *)0x0) {
                                    FMemory::Free(pFVar77);
                                  }
                                  SharedPointerInternals::TReferenceControllerBase<1>::
                                  ReleaseSharedReferenceNoInline
                                            ((pFVar49->GrassData).GrassData.SharedReferenceCount.
                                             ReferenceController);
                                  ::operator_delete(pFVar49,0x360);
                                }
                                else {
                                  pFVar50 = ::operator_new(0xa8);
                                  this_09 = (FAsyncTaskBase *)0x0;
                                  if (pFVar50 != (FAsyncTaskBase *)0x0) {
                                    pFVar50->_padding_ = 0;
                                    pFVar50->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
                                    (pFVar50->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
                                    pFVar50->_padding_ =
                                         (longlong)&___7__FAsyncTask_VFAsyncGrassTask____6B_;
                                    (pFVar50->WorkNotFinishedCounter).Counter = 0;
                                    pFVar50->DoneEvent = (FEvent *)0x0;
                                    pFVar50->QueuedPool = (FQueuedThreadPool *)0x0;
                                    pFVar50->Priority = Normal;
                                    pFVar50->Flags = None;
                                    pFVar50->RequiredMemory = -1;
                                    pFVar50->DebugName = (wchar_t *)0x0;
                                    pFVar50[1]._padding_ = (longlong)pFVar49;
                                    pFVar50[1]._padding_ = local_ae8._0_8_;
                                    pFVar50[1]._padding_ = local_ae8._8_8_;
                                    pFVar50[1]._padding_ = stack0xfffffffffffff528;
                                    pFVar50[1]._padding_ = _uStack_ad0;
                                    pFVar50[1]._padding_ = local_ac8;
                                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                      UE::GC::MarkAsReachable((UObject *)this_04);
                                    }
                                    pFVar50[1]._padding_ = 0;
                                    local_898 = this_04;
                                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                      UE::GC::MarkAsReachable((UObject *)this_04);
                                    }
                                    FWeakObjectPtr::operator=
                                              ((FWeakObjectPtr *)&pFVar50[1]._padding_,
                                               (FObjectPtr)&local_898);
                                    if ((*(int *)(*(longlong *)
                                                   ((longlong)ThreadLocalStoragePointer +
                                                   (ulonglong)_tls_index * 8) + 0x9d4c) <
                                         `public:_struct_TStatId___cdecl_FAsyncGrassTask::GetStatId(void)const___ptr64'
                                         ::__l2::_thread_safe_static_guard_0__) &&
                                       (_Init_thread_header(&
                                                  `public:_struct_TStatId___cdecl_FAsyncGrassTask::GetStatId(void)const___ptr64'
                                                  ::__l2::_thread_safe_static_guard_0__),
                                       `public:_struct_TStatId___cdecl_FAsyncGrassTask::GetStatId(void)const___ptr64'
                                       ::__l2::_thread_safe_static_guard_0__ == -1)) {
                                      FThreadSafeStaticStat<`FAsyncGrassTask::GetStatId'::__l2::FStat_FAsyncGrassTask>
                                      ::
                                      FThreadSafeStaticStat<_FAsyncGrassTask::GetStatId_::__l2::FStat_FAsyncGrassTask>
                                                (&`public:_struct_TStatId___cdecl_FAsyncGrassTask::GetStatId(void)const___ptr64'
                                                  ::__l2::StatPtr_FAsyncGrassTask);
                                      _Init_thread_footer(&
                                                  `public:_struct_TStatId___cdecl_FAsyncGrassTask::GetStatId(void)const___ptr64'
                                                  ::__l2::_thread_safe_static_guard_0__);
                                    }
                                    FThreadSafeStaticStatInner<`FAsyncGrassTask::GetStatId'::__l2::FStat_FAsyncGrassTask,1>
                                    ::GetStatId(&`public:_struct_TStatId___cdecl_FAsyncGrassTask::GetStatId(void)const___ptr64'
                                                 ::__l2::StatPtr_FAsyncGrassTask);
                                    (pFVar50->StatId).StatIdPtr = local_890;
                                    this_09 = pFVar50;
                                  }
                                  local_a70 = this_09;
                                  FAsyncTaskBase::Start
                                            (this_09,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0
                                            );
                                  pAVar80 = local_b50;
                                  pTVar70 = &local_b50->AsyncFoliageTasks;
                                  pFVar77 = (pTVar70->AllocatorInstance).Data;
                                  if (((pFVar77 <= (FScriptContainerElement *)&local_a70) &&
                                      ((FScriptContainerElement *)&local_a70 <
                                       pFVar77 + (longlong)(local_b50->AsyncFoliageTasks).ArrayMax *
                                                 8)) &&
                                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                         (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar27)) {
                                    pcVar10 = (code *)swi(3);
                                    (*pcVar10)();
                                    return;
                                  }
                                  iVar29 = (pAVar80->AsyncFoliageTasks).ArrayNum;
                                  piVar6 = &(pAVar80->AsyncFoliageTasks).ArrayMax;
                                  if (iVar29 == *piVar6) {
                                    iVar29 = UE::Core::Private::
                                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                       (0x808,&pTVar70->AllocatorInstance,piVar6);
                                  }
                                  (pAVar80->AsyncFoliageTasks).ArrayNum = iVar29 + 1;
                                  *(FAsyncTaskBase **)
                                   ((pTVar70->AllocatorInstance).Data + (longlong)iVar29 * 8) =
                                       local_a70;
                                }
                                if ((*(int *)(*(longlong *)
                                               ((longlong)ThreadLocalStoragePointer +
                                               (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS15) &&
                                   (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
                                  StatPtr_STAT_GrassRegisterComp =
                                       (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_176_::FStat_STAT_GrassRegisterComp>
                                        )0x0;
                                  pFVar38 = ::FName::FName(&local_620,"STAT_GrassRegisterComp");
                                  FThreadSafeStaticStatBase::DoSetup
                                            ((FThreadSafeStaticStatBase *)
                                             &StatPtr_STAT_GrassRegisterComp,*pFVar38,
                                             L"STAT_GrassRegisterComp","STATGROUP_Quick",
                                             "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                                             false,MCR_Invalid);
                                  _Init_thread_footer(&::_TSS15);
                                }
                                FVar51 = StatPtr_STAT_GrassRegisterComp;
                                if (StatPtr_STAT_GrassRegisterComp ==
                                    (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_176_::FStat_STAT_GrassRegisterComp>
                                     )0x0) {
                                  pFVar38 = ::FName::FName(local_608,"STAT_GrassRegisterComp");
                                  FVar51 = (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_176_::FStat_STAT_GrassRegisterComp>
                                            )FThreadSafeStaticStatBase::DoSetup
                                                       ((FThreadSafeStaticStatBase *)
                                                        &StatPtr_STAT_GrassRegisterComp,*pFVar38,
                                                        L"STAT_GrassRegisterComp","STATGROUP_Quick",
                                                        "STATCAT_Advanced",L"Quick",true,true,
                                                        ST_int64,true,false,MCR_Invalid);
                                }
                                FVar71 = *(FName *)FVar51;
                                local_948.ComparisonIndex.Value = 0;
                                local_948.Number = 0;
                                bVar27 = false;
                                bVar18 = false;
                                FVar67 = FVar71.ComparisonIndex.Value;
                                uVar58 = FVar71.Number;
                                if ((FVar67.Value == 0) && (uVar58 == 0)) {
LAB_145f6311e:
                                  bVar17 = false;
                                  FVar71 = local_948;
                                }
                                else {
                                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                                    local_a4c.Bits = 0;
                                    FGenericPlatformMisc::BeginNamedEvent
                                              ((FColor *)&local_a4c._s_0,
                                               (char *)*(FName *)((longlong)FVar51 + 0x10));
                                    bVar27 = false;
                                    bVar18 = true;
                                    if (-1 < CpuChannel->Enabled) {
                                      local_9a8.ComparisonIndex.Value = FVar67.Value;
                                      local_9a8.Number = uVar58;
                                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                                (&local_9a8,
                                                 (wchar_t *)*(FName *)((longlong)FVar51 + 8),
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                                 ,0xb87);
                                      bVar27 = true;
                                      bVar18 = true;
                                    }
                                  }
                                  if (FThreadStats::bPrimaryEnable == false) goto LAB_145f6311e;
                                  local_9a0 = FVar67.Value;
                                  uStack_99c = uVar58;
                                  local_948 = FVar71;
                                  FThreadStats::AddMessage(FVar71,CycleScopeStart);
                                  bVar17 = true;
                                }
                                UActorComponent::RegisterComponent((UActorComponent *)this_04);
                                if (bVar18) {
                                  FGenericPlatformMisc::EndNamedEvent();
                                }
                                if (bVar27) {
                                  FCpuProfilerTrace::OutputEndEvent();
                                }
                                if ((((bVar17) && (FVar71 != (FName)0x0)) &&
                                    (FThreadStats::bPrimaryDisableForever == false)) &&
                                   (FThreadStats::TlsSlot != 0xffffffff)) {
                                  this_07 = TlsGetValue(FThreadStats::TlsSlot);
                                  if (this_07 == (FThreadStats *)0x0) {
                                    this_08 = FThreadStatsPool::Get();
                                    this_07 = FThreadStatsPool::GetFromPool(this_08);
                                  }
                                  if (this_07->bWaitForExplicitFlush < this_07->ScopeCount) {
                                    local_848.NameAndInfo.Index = FVar71.ComparisonIndex.Value;
                                    local_848.NameAndInfo.Number =
                                         FVar71.Number & 0xffff6fff | 0x6000;
                                    QueryPerformanceCounter(&local_888);
                                    local_848.StatData.Pad[4] = '\0';
                                    local_848.StatData.Pad[5] = '\0';
                                    local_848.StatData.Pad[6] = '\0';
                                    local_848.StatData.Pad[7] = '\0';
                                    local_848.StatData.Pad[0] = local_888.s.LowPart._0_1_;
                                    local_848.StatData.Pad[1] = local_888.s.LowPart._1_1_;
                                    local_848.StatData.Pad[2] = local_888.s.LowPart._2_1_;
                                    local_848.StatData.Pad[3] = local_888.s.LowPart._3_1_;
                                    FThreadStats::AddStatMessage(this_07,&local_848);
                                    piVar6 = &this_07->ScopeCount;
                                    *piVar6 = *piVar6 + -1;
                                    if (*piVar6 == 0) {
                                      FThreadStats::Flush(this_07,false,false);
                                    }
                                    else if (FThreadStats::bIsRawStatsActive != false) {
                                      FThreadStats::FlushRawStats(this_07,false,false);
                                    }
                                  }
                                }
                                pAVar80 = local_b50;
                                UObjectBase::AtomicallySetFlags
                                          ((UObjectBase *)local_b50,RF_Transactional);
                                pUVar41 = UObjectBaseUtility::GetOutermost
                                                    ((UObjectBaseUtility *)pAVar80);
                                UPackage::SetDirtyFlag(pUVar41,pUVar41->bDirty);
                                if (bVar19) {
                                  FGenericPlatformMisc::EndNamedEvent();
                                }
                                if (bVar25) {
                                  FCpuProfilerTrace::OutputEndEvent();
                                }
                                if (bVar24) {
                                  FThreadStats::AddMessage(FVar83,CycleScopeEnd);
                                }
                                uVar32 = local_b48;
                                if ((TBox<double> *)local_ab0.AllocatorInstance.Data !=
                                    (TBox<double> *)0x0) {
                                  FMemory::Free(local_ab0.AllocatorInstance.Data);
                                  uVar32 = local_b48;
                                }
                              }
                              else {
LAB_145f616c0:
                                if ((TBox<double> *)local_ab0.AllocatorInstance.Data !=
                                    (TBox<double> *)0x0) {
                                  FMemory::Free(local_ab0.AllocatorInstance.Data);
                                }
                              }
                            }
                          }
                          local_b68 = local_b68 + 1;
                          iVar29 = (int)local_998;
                          uVar102 = SUB84(local_998,4);
                          uVar103 = SUB84(local_990,0);
                          uVar104 = (undefined4)((ulonglong)local_990 >> 0x20);
                          pUVar82 = local_b30;
                          uVar100 = local_6b8._0_4_;
                          uVar101 = local_6b8._4_4_;
                          fVar107 = local_b1c;
                        } while (local_b68 < (int)uVar32);
                        uVar59 = uVar59 + 1;
                        TVar68 = local_b18;
                        fVar125 = __real_bf000000;
                        fVar126 = local_b28;
                        uVar58 = local_b44;
                        fVar122 = local_b3c;
                        if ((int)uVar59 < (int)uVar32) {
                          local_b68 = 0;
                          local_b6c = uVar59;
                          goto LAB_145f610c2;
                        }
                      }
                    }
                    else {
                      local_b44 = uVar58 + uVar30 * local_b48 * local_b48;
                      uVar58 = local_b44;
                    }
                  }
                }
                this_10 = this_10 + 1;
                uVar62 = (ulonglong)local_a48;
              }
            }
LAB_145f63327:
            uVar62 = (ulonglong)local_a44;
            pTVar74 = pTVar74 + 1;
          }
          uVar62 = (ulonglong)local_b24;
          FVar83 = (FName)((longlong)local_b08 + 0x48);
        }
      }
    }
    local_368._0_8_ = (FScriptContainerElement *)0x0;
    local_368._8_8_ = 0;
    local_368._32_8_ = (ForElementType<unsigned_int>)0x0;
    local_340 = 0;
    local_33c = 0x80;
    local_338 = -1;
    local_334 = 0;
    local_328 = (ForElementType<FSetElementId>)0x0;
    local_320 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
      StatPtr_STAT_Grass_StillUsed =
           (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_177_::FStat_STAT_Grass_StillUsed>
            )0x0;
      FThreadSafeStaticStatInner<`ALandscapeProxy::UpdateGrass'::__l177::FStat_STAT_Grass_StillUsed,1>
      ::GetStatId(&StatPtr_STAT_Grass_StillUsed);
      _Init_thread_footer(&_TSS16);
    }
    TVar33 = FThreadSafeStaticStatInner<`ALandscapeProxy::UpdateGrass'::__l177::FStat_STAT_Grass_StillUsed,1>
             ::GetStatId(&StatPtr_STAT_Grass_StillUsed);
    local_6f8.Impl._Line = 0xb9a;
    local_6f8.Impl._Column = 3;
    local_6f8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
    ;
    local_6f8.Impl._Function =
         "void __cdecl ALandscapeProxy::UpdateGrass(const class TArray<struct UE::Math::TVector<double>,class TSizedDefaultAllocator<32> > &,int &,bool)"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_a38,*(TStatIdData **)&(TVar33.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_6f8);
    QueryPerformanceCounter(&local_870);
    uVar58 = GFrameNumber - GMinFramesToKeepGrass * GrassUpdateInterval;
    dVar90 = ((double)local_870.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             (double)CONCAT44(uVar113,uVar111)) - (double)GMinTimeToKeepGrass;
    TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_7b0,&(this->FoliageCache).CachedGrassComps);
    if (local_794 < *(int *)((longlong)local_7a0 + 0x18)) {
      do {
        iVar29 = local_794;
        pFVar73 = (FWeakObjectPtr *)((longlong)local_794 * 0x68 + *(longlong *)local_7b0._0_8_);
        pUVar52 = FWeakObjectPtr::Get(pFVar73 + 5);
        local_868 = pUVar52;
        pUVar53 = FWeakObjectPtr::Get(pFVar73 + 6);
        local_860 = pUVar53;
        if (((char)pFVar73[0xb].ObjectIndex != '\0') ||
           ((((pUVar54 = FWeakObjectPtr::Get(pFVar73), pUVar54 != (UObject *)0x0 &&
              (pUVar54 = FWeakObjectPtr::Get(pFVar73 + 1), pUVar54 != (UObject *)0x0)) &&
             (pUVar52 != (UObject *)0x0)) &&
            ((uVar58 <= (uint)pFVar73[9].ObjectIndex ||
             (dVar90 < (double)pFVar73[10] || dVar90 == (double)pFVar73[10])))))) {
          if ((pUVar52 != (UObject *)0x0) || (pUVar53 != (UObject *)0x0)) {
            if ((local_368._8_4_ == local_334) &&
               (uVar30 = *(int *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x8 -
                         *(int *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x34,
               uVar30 != 0)) {
              if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar30);
              }
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_368,uVar30);
              if (uVar30 < 4) {
                iVar29 = 1;
              }
              else {
                uVar62 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
                lVar35 = 0x3f;
                if (uVar62 != 0) {
                  for (; uVar62 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                  }
                }
                local_7f8._4_4_ = (undefined4)lVar35;
                iVar29 = 1 << ((byte)lVar35 & 0x1f);
              }
              if ((local_320 == 0) || (local_320 < iVar29)) {
                local_320 = iVar29;
                TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
                ::Rehash((TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
                          *)local_368);
              }
            }
            if (pUVar52 != (UObject *)0x0) {
              TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
              ::Emplace<UHierarchicalInstancedStaticMeshComponent_*_const_&>
                        ((TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
                          *)local_368,(UHierarchicalInstancedStaticMeshComponent **)&local_7f8,
                         (bool *)&local_868);
            }
            if (pUVar53 != (UObject *)0x0) {
              TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
              ::Emplace<UHierarchicalInstancedStaticMeshComponent_*_const_&>
                        ((TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
                          *)local_368,&local_858,(bool *)&local_860);
            }
          }
        }
        else {
          TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
          ::RemoveByIndex(local_788,iVar29);
        }
        local_798 = local_798 & ~local_7a4;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_7b0 + 8));
      } while (local_794 < *(int *)((longlong)local_7a0 + 0x18));
    }
    uVar62 = 0;
    if ((local_a30 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_a30 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_a30 & 4) != 0) {
      FThreadStats::AddMessage(local_a38,CycleScopeEnd);
    }
    local_a30 = 0;
    pAVar80 = this;
    if (local_368._8_4_ - local_334 < (this->FoliageComponents).ArrayNum) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
        StatPtr_STAT_Grass_DelComps =
             (FThreadSafeStaticStat<_public:_void___cdecl_ALandscapeProxy::UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,int_&,bool)_::_198_::FStat_STAT_Grass_DelComps>
              )0x0;
        FThreadSafeStaticStatInner<`ALandscapeProxy::UpdateGrass'::__l198::FStat_STAT_Grass_DelComps,1>
        ::GetStatId(&StatPtr_STAT_Grass_DelComps);
        _Init_thread_footer(&_TSS17);
      }
      TVar33 = FThreadSafeStaticStatInner<`ALandscapeProxy::UpdateGrass'::__l198::FStat_STAT_Grass_DelComps,1>
               ::GetStatId(&StatPtr_STAT_Grass_DelComps);
      local_718.Impl._Line = 0xbc5;
      local_718.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
      ;
      local_718.Impl._Column = 3;
      local_718.Impl._Function =
           "void __cdecl ALandscapeProxy::UpdateGrass(const class TArray<struct UE::Math::TVector<double>,class TSizedDefaultAllocator<32> > &,int &,bool)"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_a18,*(TStatIdData **)&(TVar33.StatIdPtr)->Name,
                 CycleStat|ClearEveryFrame,false,&local_718);
      if (0 < (this->FoliageComponents).ArrayNum) {
        pTVar76 = &this->FoliageComponents;
        uVar85 = uVar62;
        do {
          uVar30 = (uint)uVar62;
          uVar58 = 0;
          if ((int)uVar30 < (this->FoliageComponents).ArrayNum) {
            uVar58 = ~uVar30 >> 0x1f;
          }
          if ((uVar58 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar61 = *(longlong **)((pTVar76->AllocatorInstance).Data + uVar85);
          uVar58 = ((uint)((ulonglong)plVar61 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar61 >> 4)) *
                   -0x7a143595;
          uVar58 = (uVar58 >> 0xd ^ uVar58) * -0x3d4d51cb;
          if (local_368._8_4_ != local_334) {
            FVar65 = (ForElementType<FSetElementId>)local_330;
            if (local_328 != (ForElementType<FSetElementId>)0x0) {
              FVar65 = local_328;
            }
            for (iVar29 = *(int *)((longlong)FVar65 +
                                  (ulonglong)(local_320 - 1U & (uVar58 >> 0x10 ^ uVar58)) * 4);
                iVar29 != -1; iVar29 = *(int *)(local_368._0_8_ + (longlong)iVar29 * 0x10 + 8)) {
              if (*(longlong **)(local_368._0_8_ + (longlong)iVar29 * 0x10) == plVar61) {
                uVar58 = uVar30;
                if (iVar29 != -1) goto LAB_145f63ae1;
                break;
              }
            }
          }
          FVar55 = StatPtr_STAT_FoliageGrassDestoryComp;
          if (StatPtr_STAT_FoliageGrassDestoryComp ==
              (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)0x0) {
            pFVar38 = ::FName::FName(&local_610,"STAT_FoliageGrassDestoryComp");
            FVar55 = (FThreadSafeStaticStat<FStat_STAT_FoliageGrassDestoryComp>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageGrassDestoryComp,
                                *pFVar38,L"Grass Destroy Comps","STATGROUP_Foliage",
                                "STATCAT_Advanced",L"Foliage",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          FVar83 = *(FName *)FVar55;
          bVar9 = false;
          bVar28 = false;
          local_958.ComparisonIndex.Value = 0;
          local_958.Number = 0;
          if ((FVar83.ComparisonIndex.Value.Value == 0) && (FVar83.Number == 0)) {
LAB_145f639f2:
            bVar23 = false;
            FVar83 = local_958;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_a40[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_a40[0]._s_0,(char *)*(FName *)((longlong)FVar55 + 0x10));
              bVar9 = false;
              bVar28 = true;
              if (-1 < CpuChannel->Enabled) {
                local_978.ComparisonIndex.Value = FVar83.ComparisonIndex.Value.Value;
                local_978.Number = FVar83.Number;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_978,(wchar_t *)*(FName *)((longlong)FVar55 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                           ,0xbce);
                bVar9 = true;
                bVar28 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_145f639f2;
            local_b08 = FVar83;
            local_958 = FVar83;
            FThreadStats::AddMessage(FVar83,CycleScopeStart);
            bVar23 = true;
          }
          if (plVar61 != (longlong *)0x0) {
            (**(code **)(*plVar61 + 0xc38))(plVar61);
            local_b38 = 0;
            (**(code **)(*plVar61 + 0x518))(plVar61,&local_b38);
            (**(code **)(*plVar61 + 0x4a0))(plVar61,0);
          }
          uVar58 = uVar30 - 1;
          uVar85 = uVar85 - 8;
          uVar59 = 0;
          if ((int)uVar30 < (this->FoliageComponents).ArrayNum) {
            uVar59 = ~uVar30 >> 0x1f;
          }
          if ((uVar59 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(pTVar76,uVar30);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar76->AllocatorInstance,(this->FoliageComponents).ArrayNum,
                     &(this->FoliageComponents).ArrayMax);
          if (bVar28) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar9) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar23) {
            FThreadStats::AddMessage(FVar83,CycleScopeEnd);
          }
          pAVar80 = local_b50;
          if (!param_3) break;
LAB_145f63ae1:
          uVar62 = (ulonglong)(uVar58 + 1);
          uVar85 = uVar85 + 8;
        } while ((int)(uVar58 + 1) < (pAVar80->FoliageComponents).ArrayNum);
      }
      if ((local_a10 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_a10 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_a10 & 4) != 0) {
        FThreadStats::AddMessage(local_a18,CycleScopeEnd);
      }
    }
    ProcessAsyncGrassInstanceTasks
              (pAVar80,local_b70,param_3,
               (TSet<UHierarchicalInstancedStaticMeshComponent_*,DefaultKeyFuncs<UHierarchicalInstancedStaticMeshComponent_*,0>,FDefaultSetAllocator>
                *)local_368);
    local_320 = 0;
    if (local_328 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_328);
    }
    TSparseArray<TSparseSetElement<UHierarchicalInstancedStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UHierarchicalInstancedStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UHierarchicalInstancedStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_368);
  }
  if (bVar84) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_a20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_a20 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_a20 & 4) != 0) {
    FThreadStats::AddMessage(local_a28,CycleScopeEnd);
  }
  return;
}

// UpdateGrass @ 145f63c40

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
ALandscapeProxy::UpdateGrass
          (ALandscapeProxy *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int local_res20 [2];
  
  local_res20[0] = 0;
  UpdateGrass(this,param_1,local_res20,param_2);
  return;
}

// UpdateGrassTypeSummary @ 145f63c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::UpdateGrassTypeSummary(ALandscapeProxy *this)

{
  int iVar1;
  FName FVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_UpdateGrassTypeSummary> FVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  char *pcVar12;
  longlong *plVar13;
  FColor_u_0 FVar14;
  longlong lVar15;
  char cVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  undefined1 uVar21;
  int iVar22;
  longlong *plVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  char local_res20;
  undefined1 local_b8 [4];
  uint local_b4;
  uint local_b0;
  longlong *local_a8;
  FScriptContainerElement *local_a0;
  FName local_98;
  FName local_90;
  longlong local_80;
  longlong *local_78;
  FScriptContainerElement *local_70;
  
  FVar7 = StatPtr_STAT_UpdateGrassTypeSummary;
  if (StatPtr_STAT_UpdateGrassTypeSummary ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateGrassTypeSummary>)0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_UpdateGrassTypeSummary");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_UpdateGrassTypeSummary>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGrassTypeSummary,*pFVar6,
                       L"Grass Type Update Summary","STATGROUP_Foliage","STATCAT_Advanced",
                       L"Foliage",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar7;
  uVar21 = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar14.Bits = (uint)FVar2.ComparisonIndex.Value;
  uVar9 = FVar2.Number;
  if ((FVar14.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      uVar21 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar14.Bits;
        uStackX_14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                   ,0x400);
        uVar21 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar14.Bits;
      uStackX_14 = uVar9;
      local_98 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar21) | 4;
      goto LAB_145f63e08;
    }
  }
  local_98 = local_90;
LAB_145f63e08:
  if ((GEngine == (UEngine *)0x0) ||
     (local_res20 = '\x01', GEngine->UseGrassVarityPerQualityLevels == false)) {
    local_res20 = '\0';
  }
  local_b0 = (this->LandscapeComponents).ArrayNum;
  uVar10 = (ulonglong)(int)local_b0;
  cVar16 = false;
  pFVar20 = (this->LandscapeComponents).AllocatorInstance.Data;
  local_70 = pFVar20 + uVar10 * 8;
  uVar27 = 0;
  uVar28 = 0;
  do {
    pFVar4 = local_70;
    iVar22 = 0;
    local_res18.ComparisonIndex.Value._0_1_ = cVar16;
    local_a0 = pFVar20;
    if ((this->LandscapeComponents).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_b8);
    }
    FVar2 = local_98;
    FVar14 = local_res10;
    if (pFVar20 == pFVar4) {
      iVar22 = (this->LandscapeComponents).ArrayNum;
      (this->GrassTypeSummary).MaxInstanceDiscardDistance = (double)CONCAT44(uVar28,uVar27);
      (this->GrassTypeSummary).bHasAnyGrass = (bool)cVar16;
      (this->GrassTypeSummary).LandscapeComponentCount = iVar22;
      if ((local_res10.Bits & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((FVar14.Bits & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((FVar14.Bits & 4) != 0) {
        FThreadStats::AddMessage(FVar2,CycleScopeEnd);
      }
      return;
    }
    lVar15 = *(longlong *)pFVar20;
    local_80 = lVar15;
    if (*(char *)(lVar15 + 0x6a0) == '\0') {
      uVar25 = (undefined4)*(undefined8 *)(lVar15 + 0x6a8);
      uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x6a8) >> 0x20);
      pcVar12 = (char *)(lVar15 + 0x6a1);
    }
    else {
      local_b4 = *(uint *)(lVar15 + 0x698);
      uVar10 = (ulonglong)(int)local_b4;
      uVar25 = 0;
      uVar26 = 0;
      plVar13 = *(longlong **)(lVar15 + 0x690);
      plVar19 = plVar13 + uVar10;
      local_78 = plVar19;
      while( true ) {
        local_a8 = plVar13;
        if (*(int *)(lVar15 + 0x698) != (int)uVar10) {
          `TCheckedPointerIterator<TObjectPtr<ULandscapeGrassType>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_b8);
        }
        cVar16 = local_res20;
        if (plVar13 == plVar19) break;
        lVar3 = *plVar13;
        if (lVar3 != 0) {
          plVar17 = *(longlong **)(lVar3 + 0x28);
          iVar1 = *(int *)(lVar3 + 0x30);
          plVar18 = plVar17 + 0x2b;
          plVar23 = plVar17 + (longlong)iVar1 * 0x37;
          while( true ) {
            if (*(int *)(lVar3 + 0x30) != iVar1) {
              `TCheckedPointerIterator<FGrassVariety,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_b8);
            }
            lVar15 = local_80;
            plVar19 = local_78;
            plVar13 = local_a8;
            if (plVar17 == plVar23) break;
            if (*plVar17 != 0) {
              if (cVar16 == '\0') {
                iVar5 = (int)plVar18[-0xb];
              }
              else {
                if (((int)plVar18[-6] != *(int *)((longlong)plVar18 + -4)) &&
                   (-1 < GGrassQualityLevel)) {
                  plVar13 = plVar18;
                  if ((longlong *)plVar18[1] != (longlong *)0x0) {
                    plVar13 = (longlong *)plVar18[1];
                  }
                  iVar5 = *(int *)((longlong)plVar13 +
                                  (ulonglong)((int)plVar18[2] - 1U & GGrassQualityLevel) * 4);
                  if (iVar5 != -1) {
                    do {
                      piVar11 = (int *)((longlong)iVar5 * 0x10 + plVar18[-7]);
                      if (*piVar11 == GGrassQualityLevel) {
                        piVar8 = piVar11 + 1;
                        if (piVar11 == (int *)0x0) {
                          piVar8 = (int *)0x0;
                        }
                        if (piVar8 != (int *)0x0) {
                          iVar5 = *piVar8;
                          goto LAB_145f63fa3;
                        }
                        break;
                      }
                      iVar5 = piVar11[2];
                    } while (iVar5 != -1);
                  }
                }
                iVar5 = (int)plVar18[-8];
              }
LAB_145f63fa3:
              iVar22 = iVar22 + 1;
              dVar24 = (double)iVar5;
              if (dVar24 <= (double)CONCAT44(uVar26,uVar25)) {
                dVar24 = (double)CONCAT44(uVar26,uVar25);
              }
              uVar25 = SUB84(dVar24,0);
              uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
            }
            plVar17 = plVar17 + 0x37;
            plVar18 = plVar18 + 0x37;
          }
        }
        uVar10 = (ulonglong)local_b4;
        plVar13 = plVar13 + 1;
      }
      pcVar12 = (char *)(lVar15 + 0x6a1);
      *(ulonglong *)(lVar15 + 0x6a8) = CONCAT44(uVar26,uVar25);
      *pcVar12 = 0 < iVar22;
      *(undefined1 *)(lVar15 + 0x6a0) = 0;
      pFVar20 = local_a0;
      cVar16 = (char)local_res18.ComparisonIndex.Value;
    }
    if ((cVar16 != '\0') || (*pcVar12 != '\0')) {
      cVar16 = '\x01';
    }
    uVar10 = (ulonglong)local_b0;
    if ((double)CONCAT44(uVar26,uVar25) <= (double)CONCAT44(uVar28,uVar27)) {
      uVar25 = uVar27;
      uVar26 = uVar28;
    }
    pFVar20 = pFVar20 + 8;
    uVar27 = uVar25;
    uVar28 = uVar26;
  } while( true );
}

// ALandscapeProxy @ 145f769e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeProxy * __thiscall
ALandscapeProxy::ALandscapeProxy(ALandscapeProxy *this,FVTableHelper *param_1)

{
  FLightmassPrimitiveSettings *pFVar1;
  FLightingChannels *pFVar2;
  FLightingChannels *pFVar3;
  undefined1 *puVar4;
  FLightingChannels FVar5;
  
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->LOD0ScreenSize = 0.5;
  this->LODGroupKey = 0;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  (this->OriginalLandscapeGuid).A = 0;
  (this->OriginalLandscapeGuid).B = 0;
  (this->OriginalLandscapeGuid).C = 0;
  (this->OriginalLandscapeGuid).D = 0;
  (this->PerLODOverrideMaterials).ArrayNum = 0;
  (this->PerLODOverrideMaterials).ArrayMax = 0;
  (this->ScalableLOD0ScreenSize)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x8 = 0;
  (this->SplineComponent).field0_0x0.DebugPtr = (ULandscapeSplinesComponent *)0x0;
  (this->PerLODOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalableLOD0ScreenSize)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  this->bEnableNanite = false;
  this->bDisableRuntimeGrassMapGeneration = false;
  this->LOD0DistributionSetting = 1.25;
  this->LODDistributionSetting = 3.0;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->ScalableLOD0ScreenSize).PerQuality.field_0x48 = 0;
  (this->ScalableLOD0DistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x20 = 0;
  (this->ScalableLOD0ScreenSize).Default = 0.5;
  (this->ScalableLOD0DistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x8 = 0;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->ScalableLOD0DistributionSetting).PerQuality.field_0x48 = 0;
  (this->ScalableLODDistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x20 = 0;
  (this->ScalableLOD0DistributionSetting).Default = 1.25;
  (this->ScalableLODDistributionSetting)._padding_ = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x8 = 0;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->ScalableLODDistributionSetting).PerQuality.field_0x48 = 0;
  (this->ScalableLODDistributionSetting).Default = 3.0;
  this->bUseScalableLODSettings = false;
  this->LODBlendRange = 0.1;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  this->bVirtualTextureRenderWithQuad = false;
  this->bVirtualTextureRenderWithQuadHQ = true;
  this->VirtualTextureNumLods = 6;
  this->VirtualTextureLodBias = 0;
  this->VirtualTextureRenderPassType = Always;
  (this->LandscapeComponents).ArrayNum = 0;
  (this->LandscapeComponents).ArrayMax = 0;
  (this->CollisionComponents).ArrayNum = 0;
  (this->CollisionComponents).ArrayMax = 0;
  (this->FoliageComponents).ArrayNum = 0;
  (this->FoliageComponents).ArrayMax = 0;
  (this->NaniteComponents).ArrayNum = 0;
  (this->NaniteComponents).ArrayMax = 0;
  *(undefined8 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x8 = 0;
  (this->DefaultPhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->LandscapeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->LandscapeHoleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteComponent_DEPRECATED).field0_0x0.DebugPtr = (ULandscapeNaniteComponent *)0x0;
  (this->NaniteComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->FoliageCache).CachedGrassComps.Elements = 0;
  *(undefined8 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FoliageCache).CachedGrassComps.Elements.field_0x34 = 0;
  (this->FoliageCache).CachedGrassComps.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FoliageCache).CachedGrassComps.HashSize = 0;
  pFVar1->bUseTwoSidedLighting = 0;
  pFVar1->bUseVertexNormalForHemisphereGather = 0;
  pFVar1->bUseEmissiveForStaticLighting = 0;
  pFVar1->bShadowIndirectOnly = 0;
  (this->GrassTypeSummary).MaxInstanceDiscardDistance = 1.7976931348623157e+308;
  (this->AsyncFoliageTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncFoliageTasks).ArrayNum = 0;
  (this->AsyncFoliageTasks).ArrayMax = 0;
  pFVar3 = &this->LightingChannels;
  pFVar3->bChannel0 = '\x01';
  pFVar3->bChannel2 = '\0';
  pFVar3->bChannel1 = '\0';
  this->GrassTypesMaxDiscardDistance = 0.0;
  (this->GrassTypeSummary).LandscapeComponentCount = -1;
  (this->GrassTypeSummary).bHasAnyGrass = true;
  this->NonNaniteVirtualShadowMapConstantDepthBias = 150.0;
  this->NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold = 250.0;
  this->NonNaniteVirtualShadowMapInvalidationScreenSizeLimit = 0.2;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  this->bIsLandscapeActorRegisteredWithLandscapeInfo = false;
  this->bIsRegisteredWithSubsystem = false;
  (this->RegisteredToSubsystem).field0_0x0.DebugPtr = (ULandscapeSubsystem *)0x0;
  *(undefined4 *)&(this->HadLayersContentAtPostLoadTime).bIsSet = 0;
  *(undefined8 *)&this->TargetLayers = 0;
  *(undefined8 *)&(this->TargetLayers).field_0x8 = 0;
  *(undefined8 *)&(this->TargetLayers).field_0x20 = 0;
  this->bHasLayersContent_DEPRECATED = false;
  this->bStripGrassWhenCookedClient = false;
  this->bStripGrassWhenCookedServer = false;
  *(undefined4 *)&(this->TargetLayers).field_0x28 = 0;
  *(undefined4 *)&(this->TargetLayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetLayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetLayers).field_0x34 = 0;
  *(undefined8 *)&(this->TargetLayers).field_0x40 = 0;
  *(undefined4 *)&(this->TargetLayers).field_0x48 = 0;
  (this->SectionBase).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->bHasEditLayersOnLoad = false;
  return this;
}

// ChangeComponentScreenSizeToUseSubSections @ 145f855d0

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
ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(ALandscapeProxy *this,float param_1)

{
  return;
}

// ChangeLODDistanceFactor @ 145f855e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::ChangeLODDistanceFactor(ALandscapeProxy *this,float param_1)

{
  return;
}

// ComputeLandscapeKey @ 145f86340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall ALandscapeProxy::ComputeLandscapeKey(ALandscapeProxy *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  UWorld *pUVar4;
  FGuid local_18;
  
  uVar1._0_4_ = (this->LandscapeGuid).A;
  uVar1._4_4_ = (this->LandscapeGuid).B;
  uVar2._0_4_ = (this->LandscapeGuid).C;
  uVar2._4_4_ = (this->LandscapeGuid).D;
  uVar3 = this->LODGroupKey;
  pUVar4 = AActor::GetWorld((AActor *)this);
  local_18._0_8_ = uVar1;
  local_18._8_8_ = uVar2;
  uVar3 = ComputeLandscapeKey(pUVar4,uVar3,&local_18);
  return uVar3;
}

// ComputeLandscapeKey @ 145f86390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl ALandscapeProxy::ComputeLandscapeKey(UWorld *param_1,uint param_2,FGuid *param_3)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = (ulong64)param_2;
  if (param_2 == 0) {
    uVar1 = CityHash64((char *)param_3,0x10);
  }
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar4 = (int)uVar1;
  uVar3 = (uVar2 >> 0x10 ^ uVar2) - iVar4 ^ (uint)(uVar1 >> 0xd) & 0x7ffff;
  uVar2 = (-0x61c88647 - uVar3) - iVar4 ^ uVar3 << 8;
  uVar5 = (iVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  return (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetPrivateStaticClass @ 145f93760

UClass * __cdecl ALandscapeProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeProxy",
               &Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton,
               StaticRegisterNativesALandscapeProxy,0x7f0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscapeProxy>,InternalVTableHelperCtorCaller<ALandscapeProxy>,
               local_res8,APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton;
}

// Serialize @ 145fa1b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::Serialize(ALandscapeProxy *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetPerLODOverrideMaterials @ 145fa2250

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
ALandscapeProxy::SetPerLODOverrideMaterials
          (ALandscapeProxy *this,
          TArray<FLandscapePerLODMaterialOverride,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FLandscapePerLODMaterialOverride,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FLandscapePerLODMaterialOverride *pFVar5;
  
  pTVar2 = &this->PerLODOverrideMaterials;
  if (pTVar2 != param_1) {
    iVar3 = (this->PerLODOverrideMaterials).ArrayMax;
    piVar1 = &(this->PerLODOverrideMaterials).ArrayMax;
    pFVar5 = (FLandscapePerLODMaterialOverride *)(param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->PerLODOverrideMaterials).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FLandscapePerLODMaterialOverride,FLandscapePerLODMaterialOverride,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
  }
  return;
}

// StaticRegisterNativesALandscapeProxy @ 145fa4750

void __cdecl ALandscapeProxy::StaticRegisterNativesALandscapeProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_ALandscapeProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execChangeComponentScreenSizeToUseSubSections @ 145fa9a00

void __cdecl
ALandscapeProxy::execChangeComponentScreenSizeToUseSubSections
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x768))(param_1,local_res8[0]);
  return;
}

// execChangeLODDistanceFactor @ 145fa9a90

void __cdecl
ALandscapeProxy::execChangeLODDistanceFactor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,local_res8[0]);
  return;
}

// execEditorApplySpline @ 145fa9b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ALandscapeProxy::execEditorApplySpline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [4];
  int local_res20 [2];
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [2];
  FName local_48;
  ULandscapeLayerInfoObject *local_40;
  USplineComponent *local_38 [2];
  
  local_38[0] = (USplineComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_50[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  local_54 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  local_58 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_5c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c);
  }
  local_60 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_64 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
  }
  local_68 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_40 = (ULandscapeLayerInfoObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EditorApplySpline((ALandscapeProxy *)param_1,local_38[0],local_50[0],local_54,local_58,local_5c,
                    local_60,local_64,local_68,bVar2,bVar3,local_40,local_48);
  return;
}

// execEditorSetLandscapeMaterial @ 145fa9eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ALandscapeProxy::execEditorSetLandscapeMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *local_res10;
  
  local_res10 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EditorSetLandscapeMaterial((ALandscapeProxy *)param_1,local_res10);
  return;
}

// execGetLandscapeActor @ 145fa9f40

void __cdecl ALandscapeProxy::execGetLandscapeActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x778))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execLandscapeExportHeightmapToRenderTarget @ 145fa9f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ALandscapeProxy::execLandscapeExportHeightmapToRenderTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  UTextureRenderTarget2D *local_res20;
  
  local_res20 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = LandscapeExportHeightmapToRenderTarget
                    ((ALandscapeProxy *)param_1,local_res20,bVar2,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetLandscapeMaterialScalarParameterValue @ 145faa0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ALandscapeProxy::execSetLandscapeMaterialScalarParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLandscapeMaterialScalarParameterValue((ALandscapeProxy *)param_1,local_res20,local_res10[0]);
  return;
}

// execSetLandscapeMaterialTextureParameterValue @ 145faa170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ALandscapeProxy::execSetLandscapeMaterialTextureParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  UTexture *local_res20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLandscapeMaterialTextureParameterValue((ALandscapeProxy *)param_1,local_res10,local_res20);
  return;
}

// execSetLandscapeMaterialVectorParameterValue @ 145faa240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ALandscapeProxy::execSetLandscapeMaterialVectorParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLandscapeMaterialVectorParameterValue
            ((ALandscapeProxy *)param_1,local_res10,(FLinearColor *)&local_18._s_0);
  return;
}

// execSetVirtualTextureRenderPassType @ 145faa320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ALandscapeProxy::execSetVirtualTextureRenderPassType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ERuntimeVirtualTextureMainPassType local_res10 [24];
  
  local_res10[0] = Never;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVirtualTextureRenderPassType((ALandscapeProxy *)param_1,local_res10[0]);
  return;
}

// FinishDestroy @ 145fcc8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeProxy::FinishDestroy(ALandscapeProxy *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  ForElementType<UObject_*> FVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0x10 & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar5 != (FLinkerLoad *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetLinker()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x457,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLinkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObject::DestroyNonNativeProperties((UObject *)this);
  pTVar8 = &DebugFinishDestroyed;
  pTVar7 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  FVar6 = (ForElementType<UObject_*>)pTVar7;
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(ALandscapeProxy **)FVar6 != this) {
      FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 + 8);
      if (FVar6 == FVar1) {
        return;
      }
    }
    iVar4 = (int)((longlong)FVar6 - (longlong)pTVar7 >> 3);
    if (iVar4 != -1) {
      if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar8 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugFinishDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar8 + (longlong)iVar4 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugFinishDestroyed.ArrayNum - iVar4) + -1) << 3);
      DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + -1;
    }
  }
  return;
}

