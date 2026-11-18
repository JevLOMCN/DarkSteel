// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 51

// GetViewOwner @ 147327a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall USceneCaptureComponent::GetViewOwner(USceneCaptureComponent *this)

{
  return (AActor *)0x0;
}

// Is2D @ 147327ab0

bool __thiscall USceneCaptureComponent::Is2D(USceneCaptureComponent *this)

{
  return false;
}

// IsCube @ 147327ad0

bool __thiscall USceneCaptureComponent::IsCube(USceneCaptureComponent *this)

{
  return false;
}

// StaticClass @ 147328010

UClass * __cdecl USceneCaptureComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USceneCaptureComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureComponent",
               &Z_Registration_Info_UClass_USceneCaptureComponent.InnerSingleton,
               StaticRegisterNativesUSceneCaptureComponent,0x350,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneCaptureComponent>,
               InternalVTableHelperCtorCaller<USceneCaptureComponent>,aFStackX_8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneCaptureComponent.InnerSingleton;
}

// UpdateSceneCaptureContents @ 1473283f0

void __thiscall
USceneCaptureComponent::UpdateSceneCaptureContents
          (USceneCaptureComponent *this,FSceneInterface *param_1)

{
  return;
}

// UpdateSceneCaptureContents @ 147328400

void __thiscall
USceneCaptureComponent::UpdateSceneCaptureContents
          (USceneCaptureComponent *this,FSceneInterface *param_1,ISceneRenderBuilder *param_2)

{
  return;
}

// USceneCaptureComponent @ 14792a7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneCaptureComponent * __thiscall
USceneCaptureComponent::USceneCaptureComponent(USceneCaptureComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  FViewLightingChannels *pFVar3;
  FViewLightingChannels *pFVar4;
  FViewLightingChannels FVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this_00 = &this->ShowFlags;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->HiddenComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->HiddenComponents).ArrayNum = 0;
  (this->HiddenComponents).ArrayMax = 0;
  (this->HiddenActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = &this->ViewLightingChannels;
  pFVar4->bViewChannel0 = '\x01';
  pFVar4->bViewChannel4 = '\0';
  pFVar4->bViewChannel3 = '\0';
  pFVar4->bViewChannel2 = '\0';
  pFVar4->bViewChannel1 = '\0';
  (this->HiddenActors).ArrayNum = 0;
  (this->HiddenActors).ArrayMax = 0;
  (this->ShowOnlyComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowOnlyComponents).ArrayNum = 0;
  (this->ShowOnlyComponents).ArrayMax = 0;
  (this->ShowOnlyActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowOnlyActors).ArrayNum = 0;
  (this->ShowOnlyActors).ArrayMax = 0;
  (this->CollectionTransform).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->CollectionTransformWorldToLocal).ComparisonIndex = 0;
  (this->CollectionTransformWorldToLocal).Number = 0;
  (this->CollectionTransformProjection).ComparisonIndex = 0;
  (this->CollectionTransformProjection).Number = 0;
  (this->ShowFlagSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowFlagSettings).ArrayNum = 0;
  (this->ShowFlagSettings).ArrayMax = 0;
  (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ShowFlags).CustomShowFlags.NumBits = 0;
  (this->ShowFlags).CustomShowFlags.MaxBits = 0x80;
  EnsureRetrievingVTablePtrDuringCtor(L"FEngineShowFlags()");
  uVar8 = _UNK_15060db28;
  uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)this_00 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)&(this->ShowFlags).field_0x8 = uVar8;
  *(undefined8 *)&(this->ShowFlags).field_0x10 = uVar7;
  *(undefined8 *)&(this->ShowFlags).field_0x18 = uVar8;
  FEngineShowFlags::InitCustomShowFlags(this_00,ESFIM_Game);
  (this->ShowFlags).VectorFields = 0;
  (this->ShowFlags).VisualizeOutOfBoundsPixels = 0;
  (this->ShowFlags).VisualizeTSR = 0;
  (this->ShowFlags).VisualizeTemporalUpscaler = 0;
  (this->ShowFlags).VisualizeReprojection = 0;
  (this->ShowFlags).VisualizeMotionVectors = 0;
  (this->ShowFlags).VisualizeMotionBlur = 0;
  (this->ShowFlags).PhysicalMaterialMasks = 0;
  (this->ShowFlags).VertexColors = 0;
  (this->ShowFlags).VisualizeDOF = 0;
  (this->ShowFlags).TestImage = 0;
  (this->ShowFlags).OpaqueCompositeEditorPrimitives = 0;
  (this->ShowFlags).CompositeEditorPrimitives = 0;
  (this->ShowFlags).GBufferHints = 0;
  (this->ShowFlags).PathTracing = 0;
  (this->ShowFlags).AlphaInvert = 0;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 0;
  (this->ShowFlags).VisualizeShadowCasters = 0;
  (this->ShowFlags).VisualizeLWCComplexity = 0;
  (this->ShowFlags).VisualizeGPUSkinCache = 0;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 0;
  (this->ShowFlags).LumenSecondaryBounces = 0;
  (this->ShowFlags).LumenFarFieldTraces = 0;
  (this->ShowFlags).LumenGlobalTraces = 0;
  (this->ShowFlags).LumenDetailTraces = 0;
  (this->ShowFlags).LumenScreenTraces = 0;
  (this->ShowFlags).DebugDrawDistantVirtualSMLights = 0;
  (this->ShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  (this->ShowFlags).VisualizeVolumetricCloudConservativeDensity = 0;
  (this->ShowFlags).VirtualTexturePrimitives = 0;
  (this->ShowFlags).VisualizePostProcessStack = 0;
  (this->ShowFlags).VisualizeCalibrationCustom = 0;
  (this->ShowFlags).VisualizeCalibrationGrayscale = 0;
  (this->ShowFlags).VisualizeCalibrationColor = 0;
  (this->ShowFlags).VisualizeLightFunctionAtlas = 0;
  (this->ShowFlags).VisualizeSkyAtmosphere = 0;
  (this->ShowFlags).RayTracingDebug = 0;
  (this->ShowFlags).LightComplexity = 0;
  (this->ShowFlags).Pivot = 0;
  (this->ShowFlags).LightInfluences = 0;
  (this->ShowFlags).HitProxies = 0;
  (this->ShowFlags).Bounds = 0;
  (this->ShowFlags).ModeWidgets = 0;
  (this->ShowFlags).EditingLevelInstance = 0;
  (this->ShowFlags).Selection = 0;
  (this->ShowFlags).Splines = 0;
  (this->ShowFlags).Cover = 0;
  (this->ShowFlags).MeshEdges = 0;
  (this->ShowFlags).Snap = 0;
  (this->ShowFlags).Grid = 0;
  (this->ShowFlags).LargeVertices = 0;
  (this->ShowFlags).Editor = 0;
  (this->ShowFlags).Brushes = 0;
  (this->ShowFlags).BSPSplit = 0;
  (this->ShowFlags).AudioRadius = 0;
  (this->ShowFlags).CameraFrustums = 0;
  (this->ShowFlags).MassProperties = 0;
  (this->ShowFlags).Constraints = 0;
  (this->ShowFlags).StreamingBounds = 0;
  (this->ShowFlags).LightMapDensity = 0;
  (this->ShowFlags).StationaryLightOverlap = 0;
  (this->ShowFlags).ShaderComplexity = 0;
  (this->ShowFlags).SelectionOutline = 0;
  (this->ShowFlags).VisualizeInstanceUpdates = 0;
  (this->ShowFlags).HISMCClusterTree = 0;
  (this->ShowFlags).HISMCOcclusionBounds = 0;
  (this->ShowFlags).Navigation = 0;
  (this->ShowFlags).DebugAI = 0;
  (this->ShowFlags).VisualizeSSS = 0;
  (this->ShowFlags).MotionBlur = 1;
  (this->ShowFlags).ScreenPercentage = 1;
  (this->ShowFlags).CompositeDebugPrimitives = 1;
  (this->ShowFlags).VolumeLightingSamples = 0;
  (this->ShowFlags).DisableOcclusionQueries = 0;
  (this->ShowFlags).VisualizeInstanceOcclusionQueries = 0;
  (this->ShowFlags).OcclusionMeshes = 0;
  (this->ShowFlags).VREditing = 0;
  (this->ShowFlags).ServerDrawDebug = 0;
  (this->ShowFlags).Bones = 0;
  (this->ShowFlags).VisualizeVirtualTexture = 0;
  (this->ShowFlags).RequiredTextureResolution = 0;
  (this->ShowFlags).OutputMaterialTextureScales = 0;
  (this->ShowFlags).MaterialTextureScaleAccuracy = 0;
  (this->ShowFlags).MeshUVDensityAccuracy = 0;
  (this->ShowFlags).PrimitiveDistanceAccuracy = 0;
  (this->ShowFlags).ShaderComplexityWithQuadOverdraw = 0;
  (this->ShowFlags).QuadOverdraw = 0;
  (this->ShowFlags).HLODColoration = 0;
  (this->ShowFlags).LODColoration = 0;
  (this->ShowFlags).VisualizeShadingModels = 0;
  (this->ShowFlags).VisualizeSSR = 0;
  (this->ShowFlags).VisualizeLightingOnProbes = 0;
  (this->ShowFlags).VisualizeGlobalDistanceField = 0;
  (this->ShowFlags).PhysicsField = 0;
  (this->ShowFlags).VisualizeMeshDistanceFields = 0;
  (this->ShowFlags).VisualizeDistanceFieldAO = 0;
  (this->ShowFlags).LumenScreenTraces = 1;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 1;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 1;
  (this->ShowFlags).LumenSecondaryBounces = 1;
  (this->ShowFlags).LumenFarFieldTraces = 1;
  (this->ShowFlags).LumenGlobalTraces = 1;
  (this->ShowFlags).LumenDetailTraces = 1;
  this_00->VisualizeHDR = 0;
  this_00->VisualizeVirtualShadowMap = 0;
  this_00->VisualizeGroom = 0;
  this_00->VisualizeSubstrate = 0;
  this_00->VisualizeLumen = 0;
  this_00->VisualizeNanite = 0;
  this_00->VisualizeBuffer = 0;
  this_00->MaterialAmbientOcclusion = 1;
  this_00->MaterialNormal = 1;
  this_00->ReflectionOverride = 0;
  this_00->LightingOnlyOverride = 0;
  this_00->OverrideDiffuseAndSpecular = 0;
  this_00->VisualizeLocalExposure = 0;
  this_00->VisualizeLocalFogVolumes = 0;
  this_00->VisualizeSkyLightIlluminance = 0;
  (this->ShowFlags).StereoMotionVectors = 0;
  (this->ShowFlags).RandomColor = 0;
  (this->ShowFlags).FrontBackFace = 0;
  (this->ShowFlags).Zebra = 0;
  (this->ShowFlags).Clay = 0;
  puVar2 = &(this->ShowFlags).field_0x10;
  (this->ShowFlags).ShadowFrustums = 0;
  (this->ShowFlags).VisualizeVolumetricLightmap = 0;
  (this->ShowFlags).PrecomputedVisibilityCells = 0;
  (this->ShowFlags).VisualizeLightCulling = 0;
  (this->ShowFlags).DistanceCulledPrimitives = 0;
  (this->ShowFlags).StereoRendering = 0;
  (this->ShowFlags).HMDDistortion = 0;
  (this->ShowFlags).HighResScreenshotMask = 0;
  (this->ShowFlags).CameraSafeFrames = 0;
  (this->ShowFlags).CameraAspectRatioBars = 0;
  (this->ShowFlags).CollisionPawn = 0;
  (this->ShowFlags).CollisionVisibility = 0;
  (this->ShowFlags).Collision = 0;
  (this->ShowFlags).ActorColoration = 0;
  (this->ShowFlags).Game = 1;
  (this->ShowFlags).Volumes = 0;
  (this->ShowFlags).LightRadius = 0;
  (this->ShowFlags).Wireframe = 0;
  (this->ProfilingEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfilingEventName).Data.ArrayNum = 0;
  (this->ProfilingEventName).Data.ArrayMax = 0;
  (this->ViewStates).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewStates).Array.ArrayNum = 0;
  (this->ViewStates).Array.ArrayMax = 0;
  return this;
}

// USceneCaptureComponent @ 14792a960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneCaptureComponent * __thiscall
USceneCaptureComponent::USceneCaptureComponent
          (USceneCaptureComponent *this,FObjectInitializer *param_1)

{
  FEngineShowFlags *this_00;
  FViewLightingChannels *pFVar1;
  FViewLightingChannels *pFVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  FViewLightingChannels FVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  uVar9 = _UNK_15060db28;
  uVar8 = ___xmm_ffffffffffffffffffffffffffffffff;
  this_00 = &this->ShowFlags;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->HiddenComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->HiddenComponents).ArrayNum = 0;
  (this->HiddenComponents).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->HiddenActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HiddenActors).ArrayNum = 0;
  (this->HiddenActors).ArrayMax = 0;
  pFVar2 = &this->ViewLightingChannels;
  pFVar2->bViewChannel0 = '\x01';
  pFVar2->bViewChannel4 = '\0';
  pFVar2->bViewChannel3 = '\0';
  pFVar2->bViewChannel2 = '\0';
  pFVar2->bViewChannel1 = '\0';
  (this->ShowOnlyComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowOnlyComponents).ArrayNum = 0;
  (this->ShowOnlyComponents).ArrayMax = 0;
  (this->ShowOnlyActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowOnlyActors).ArrayNum = 0;
  (this->ShowOnlyActors).ArrayMax = 0;
  (this->CollectionTransform).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->CollectionTransformWorldToLocal).ComparisonIndex = 0;
  (this->CollectionTransformWorldToLocal).Number = 0;
  (this->CollectionTransformProjection).ComparisonIndex = 0;
  (this->CollectionTransformProjection).Number = 0;
  (this->ShowFlagSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowFlagSettings).ArrayNum = 0;
  (this->ShowFlagSettings).ArrayMax = 0;
  (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ShowFlags).CustomShowFlags.NumBits = 0;
  (this->ShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)this_00 = uVar8;
  *(undefined8 *)&(this->ShowFlags).field_0x8 = uVar9;
  *(undefined8 *)&(this->ShowFlags).field_0x10 = uVar8;
  *(undefined8 *)&(this->ShowFlags).field_0x18 = uVar9;
  FEngineShowFlags::InitCustomShowFlags(this_00,ESFIM_Game);
  (this->ShowFlags).VectorFields = 0;
  (this->ShowFlags).VisualizeOutOfBoundsPixels = 0;
  (this->ShowFlags).VisualizeTSR = 0;
  (this->ShowFlags).VisualizeTemporalUpscaler = 0;
  (this->ShowFlags).VisualizeReprojection = 0;
  (this->ShowFlags).VisualizeMotionVectors = 0;
  (this->ShowFlags).VisualizeMotionBlur = 0;
  (this->ShowFlags).PhysicalMaterialMasks = 0;
  (this->ShowFlags).VertexColors = 0;
  (this->ShowFlags).VisualizeDOF = 0;
  (this->ShowFlags).TestImage = 0;
  (this->ShowFlags).OpaqueCompositeEditorPrimitives = 0;
  (this->ShowFlags).CompositeEditorPrimitives = 0;
  (this->ShowFlags).GBufferHints = 0;
  (this->ShowFlags).PathTracing = 0;
  (this->ShowFlags).AlphaInvert = 0;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 0;
  (this->ShowFlags).VisualizeShadowCasters = 0;
  (this->ShowFlags).VisualizeLWCComplexity = 0;
  (this->ShowFlags).VisualizeGPUSkinCache = 0;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 0;
  (this->ShowFlags).LumenSecondaryBounces = 0;
  (this->ShowFlags).LumenFarFieldTraces = 0;
  (this->ShowFlags).LumenGlobalTraces = 0;
  (this->ShowFlags).LumenDetailTraces = 0;
  (this->ShowFlags).LumenScreenTraces = 0;
  (this->ShowFlags).DebugDrawDistantVirtualSMLights = 0;
  (this->ShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  (this->ShowFlags).VisualizeVolumetricCloudConservativeDensity = 0;
  (this->ShowFlags).VirtualTexturePrimitives = 0;
  (this->ShowFlags).VisualizePostProcessStack = 0;
  (this->ShowFlags).VisualizeCalibrationCustom = 0;
  (this->ShowFlags).VisualizeCalibrationGrayscale = 0;
  (this->ShowFlags).VisualizeCalibrationColor = 0;
  (this->ShowFlags).VisualizeLightFunctionAtlas = 0;
  (this->ShowFlags).VisualizeSkyAtmosphere = 0;
  (this->ShowFlags).RayTracingDebug = 0;
  (this->ShowFlags).LightComplexity = 0;
  (this->ShowFlags).Pivot = 0;
  (this->ShowFlags).LightInfluences = 0;
  (this->ShowFlags).HitProxies = 0;
  (this->ShowFlags).Bounds = 0;
  (this->ShowFlags).ModeWidgets = 0;
  (this->ShowFlags).EditingLevelInstance = 0;
  (this->ShowFlags).Selection = 0;
  (this->ShowFlags).Splines = 0;
  (this->ShowFlags).Cover = 0;
  (this->ShowFlags).MeshEdges = 0;
  (this->ShowFlags).Snap = 0;
  (this->ShowFlags).Grid = 0;
  (this->ShowFlags).LargeVertices = 0;
  (this->ShowFlags).Editor = 0;
  (this->ShowFlags).Brushes = 0;
  (this->ShowFlags).BSPSplit = 0;
  (this->ShowFlags).AudioRadius = 0;
  (this->ShowFlags).CameraFrustums = 0;
  (this->ShowFlags).MassProperties = 0;
  (this->ShowFlags).Constraints = 0;
  (this->ShowFlags).StreamingBounds = 0;
  (this->ShowFlags).LightMapDensity = 0;
  (this->ShowFlags).StationaryLightOverlap = 0;
  (this->ShowFlags).ShaderComplexity = 0;
  (this->ShowFlags).SelectionOutline = 0;
  (this->ShowFlags).VisualizeInstanceUpdates = 0;
  (this->ShowFlags).HISMCClusterTree = 0;
  (this->ShowFlags).HISMCOcclusionBounds = 0;
  (this->ShowFlags).Navigation = 0;
  (this->ShowFlags).DebugAI = 0;
  (this->ShowFlags).VisualizeSSS = 0;
  (this->ShowFlags).MotionBlur = 1;
  (this->ShowFlags).ScreenPercentage = 1;
  (this->ShowFlags).CompositeDebugPrimitives = 1;
  (this->ShowFlags).VolumeLightingSamples = 0;
  (this->ShowFlags).DisableOcclusionQueries = 0;
  (this->ShowFlags).VisualizeInstanceOcclusionQueries = 0;
  (this->ShowFlags).OcclusionMeshes = 0;
  (this->ShowFlags).VREditing = 0;
  (this->ShowFlags).ServerDrawDebug = 0;
  (this->ShowFlags).Bones = 0;
  (this->ShowFlags).VisualizeVirtualTexture = 0;
  (this->ShowFlags).RequiredTextureResolution = 0;
  (this->ShowFlags).OutputMaterialTextureScales = 0;
  (this->ShowFlags).MaterialTextureScaleAccuracy = 0;
  (this->ShowFlags).MeshUVDensityAccuracy = 0;
  (this->ShowFlags).PrimitiveDistanceAccuracy = 0;
  (this->ShowFlags).ShaderComplexityWithQuadOverdraw = 0;
  (this->ShowFlags).QuadOverdraw = 0;
  (this->ShowFlags).HLODColoration = 0;
  (this->ShowFlags).LODColoration = 0;
  (this->ShowFlags).VisualizeShadingModels = 0;
  (this->ShowFlags).VisualizeSSR = 0;
  (this->ShowFlags).VisualizeLightingOnProbes = 0;
  (this->ShowFlags).VisualizeGlobalDistanceField = 0;
  (this->ShowFlags).PhysicsField = 0;
  (this->ShowFlags).VisualizeMeshDistanceFields = 0;
  (this->ShowFlags).VisualizeDistanceFieldAO = 0;
  (this->ShowFlags).LumenScreenTraces = 1;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 1;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 1;
  (this->ShowFlags).LumenSecondaryBounces = 1;
  (this->ShowFlags).LumenFarFieldTraces = 1;
  (this->ShowFlags).LumenGlobalTraces = 1;
  (this->ShowFlags).LumenDetailTraces = 1;
  (this->ShowFlags).StereoMotionVectors = 0;
  (this->ShowFlags).RandomColor = 0;
  (this->ShowFlags).FrontBackFace = 0;
  (this->ShowFlags).Zebra = 0;
  (this->ShowFlags).Clay = 0;
  this_00->VisualizeHDR = 0;
  this_00->VisualizeVirtualShadowMap = 0;
  this_00->VisualizeGroom = 0;
  this_00->VisualizeSubstrate = 0;
  this_00->VisualizeLumen = 0;
  this_00->VisualizeNanite = 0;
  this_00->VisualizeBuffer = 0;
  this_00->MaterialAmbientOcclusion = 1;
  this_00->MaterialNormal = 1;
  this_00->ReflectionOverride = 0;
  this_00->LightingOnlyOverride = 0;
  this_00->OverrideDiffuseAndSpecular = 0;
  this_00->VisualizeLocalExposure = 0;
  this_00->VisualizeLocalFogVolumes = 0;
  this_00->VisualizeSkyLightIlluminance = 0;
  puVar4 = &(this->ShowFlags).field_0x10;
  (this->ShowFlags).ShadowFrustums = 0;
  (this->ShowFlags).VisualizeVolumetricLightmap = 0;
  (this->ShowFlags).PrecomputedVisibilityCells = 0;
  (this->ShowFlags).VisualizeLightCulling = 0;
  (this->ShowFlags).DistanceCulledPrimitives = 0;
  (this->ShowFlags).StereoRendering = 0;
  (this->ShowFlags).HMDDistortion = 0;
  (this->ShowFlags).HighResScreenshotMask = 0;
  (this->ShowFlags).CameraSafeFrames = 0;
  (this->ShowFlags).CameraAspectRatioBars = 0;
  (this->ShowFlags).CollisionPawn = 0;
  (this->ShowFlags).CollisionVisibility = 0;
  (this->ShowFlags).Collision = 0;
  (this->ShowFlags).ActorColoration = 0;
  (this->ShowFlags).Game = 1;
  (this->ShowFlags).Volumes = 0;
  (this->ShowFlags).LightRadius = 0;
  (this->ShowFlags).Wireframe = 0;
  (this->ProfilingEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfilingEventName).Data.ArrayNum = 0;
  (this->ProfilingEventName).Data.ArrayMax = 0;
  (this->ViewStates).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewStates).Array.ArrayNum = 0;
  (this->ViewStates).Array.ArrayMax = 0;
  (this->CaptureSource).Value = '\0';
  (this->ShowFlags).MotionBlur = 0;
  (this->ShowFlags).SeparateTranslucency = 0;
  (this->ShowFlags).HMDDistortion = 0;
  this_00->OnScreenDebug = 0;
  puVar4 = &this->field_0x252;
  this->bCaptureEveryFrame = '\x01';
  this->bSuppressGpuCaptureOrDump = '\0';
  this->bDumpGpuNextRender = '\0';
  this->bCaptureGpuNextRender = '\0';
  this->bCaptureOnMovement = '\x01';
  this->bAlwaysPersistRenderingState = false;
  this->LODDistanceFactor = 1.0;
  this->MaxViewDistanceOverride = -1.0;
  this->CaptureSortPriority = 0;
  this->bUseRayTracingIfEnabled = false;
  bVar10 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (((!bVar10) && (((uint)this->_padding_ >> 0xc & 1) == 0)) &&
     ((*(uint *)(this->_padding_ + 8) >> 0xc & 1) == 0)) {
    RegisterDelegates(this);
  }
  return this;
}

// ~USceneCaptureComponent @ 14792cf40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent::~USceneCaptureComponent(USceneCaptureComponent *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>(&this->ViewStates);
  pFVar1 = (this->ProfilingEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DestructItems<FEngineShowFlagsSetting,int>
            ((FEngineShowFlagsSetting *)(this->ShowFlagSettings).AllocatorInstance.Data,
             (this->ShowFlagSettings).ArrayNum);
  pFVar1 = (this->ShowFlagSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShowOnlyActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShowOnlyComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HiddenActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HiddenComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddReferencedObjects @ 147930590

void __cdecl
USceneCaptureComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar7 = GetTypeName<USceneCaptureComponent>(&local_48);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar6 = StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar6->_padding_)) {
    uVar8 = 0;
    if (0 < *(int *)(param_1 + 0x15)) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(param_1 + 0x15)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar10 + *(longlong *)&param_1[0x14].field_0x20) + 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x15));
    }
    UActorComponent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar7 = GetTypeName<USceneCaptureComponent>(&local_38);
  pwVar9 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar11);
}

// BeginDestroy @ 147934b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent::BeginDestroy(USceneCaptureComponent *this)

{
  bool bVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_res10 [24];
  
  USceneComponent::BeginDestroy((USceneComponent *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      `USceneCaptureComponent::UnregisterDelegates'::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
    return;
  }
  return;
}

// ClearHiddenComponents @ 147939970

void __thiscall USceneCaptureComponent::ClearHiddenComponents(USceneCaptureComponent *this)

{
  (this->HiddenComponents).ArrayNum = 0;
  if ((this->HiddenComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->HiddenComponents).AllocatorInstance,0,
               &(this->HiddenComponents).ArrayMax);
  }
  return;
}

// ClearShowOnlyComponents @ 147939c70

void __thiscall USceneCaptureComponent::ClearShowOnlyComponents(USceneCaptureComponent *this)

{
  (this->ShowOnlyComponents).ArrayNum = 0;
  if ((this->ShowOnlyComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ShowOnlyComponents).AllocatorInstance,0,
               &(this->ShowOnlyComponents).ArrayMax);
  }
  return;
}

// GetPrivateStaticClass @ 14794c520

UClass * __cdecl USceneCaptureComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureComponent",
               &Z_Registration_Info_UClass_USceneCaptureComponent.InnerSingleton,
               StaticRegisterNativesUSceneCaptureComponent,0x350,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneCaptureComponent>,
               InternalVTableHelperCtorCaller<USceneCaptureComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneCaptureComponent.InnerSingleton;
}

// GetShowFlagSettings @ 14794d680

TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> * __thiscall
USceneCaptureComponent::GetShowFlagSettings(USceneCaptureComponent *this)

{
  return &this->ShowFlagSettings;
}

// GetViewState @ 147950c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneViewStateInterface * __thiscall
USceneCaptureComponent::GetViewState(USceneCaptureComponent *this,int param_1)

{
  TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FSceneViewStateReference *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  FSceneViewStateInterface *pFVar10;
  FSceneInterface *pFVar11;
  byte bVar12;
  uint uVar13;
  Type TVar14;
  longlong lVar15;
  undefined8 *local_28 [2];
  
  lVar15 = (longlong)param_1;
  pTVar1 = &this->ViewStates;
  iVar6 = (this->ViewStates).Array.ArrayNum;
  while (iVar6 <= param_1) {
    puVar9 = ::operator_new(0x38);
    local_28[0] = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &___7FSceneViewStateReference__6B_;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[5] = 0;
      *(undefined4 *)(puVar9 + 6) = 0;
      local_28[0] = puVar9;
    }
    pFVar2 = (pTVar1->Array).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 <
         pFVar2 + (longlong)(this->ViewStates).Array.ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSceneViewStateInterface *)(*pcVar3)();
      return pFVar10;
    }
    iVar6 = (this->ViewStates).Array.ArrayNum;
    if (iVar6 == (this->ViewStates).Array.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pTVar1,&(this->ViewStates).Array.ArrayMax);
    }
    (this->ViewStates).Array.ArrayNum = iVar6 + 1;
    *(undefined8 **)((pTVar1->Array).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
    if ((0 < param_1) && (cVar5 = (**(code **)(this->_padding_ + 0x650))(this), cVar5 != '\0')) {
      iVar6 = (this->ViewStates).Array.ArrayNum;
      uVar13 = iVar6 - 1;
      uVar7 = 0;
      if ((int)uVar13 < iVar6) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FSceneViewStateInterface *)(*pcVar3)();
        return pFVar10;
      }
      iVar6 = (this->ViewStates).Array.ArrayNum;
      this_00 = *(FSceneViewStateReference **)
                 ((pTVar1->Array).AllocatorInstance.Data + (longlong)iVar6 * 8 + -8);
      if ((iVar6 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FSceneViewStateInterface *)(*pcVar3)();
        return pFVar10;
      }
      FSceneViewStateReference::ShareOrigin
                (this_00,*(FSceneViewStateReference **)(pTVar1->Array).AllocatorInstance.Data);
    }
    iVar6 = (this->ViewStates).Array.ArrayNum;
  }
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (this->ViewStates).Array.ArrayNum) {
    uVar7 = uVar13;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FSceneViewStateInterface *)(*pcVar3)();
    return pFVar10;
  }
  pFVar10 = *(FSceneViewStateInterface **)
             (*(longlong *)((pTVar1->Array).AllocatorInstance.Data + lVar15 * 8) + 8);
  bVar12 = this->bCaptureEveryFrame;
  uVar7 = 0;
  if (((bVar12 == 0) && (this->bAlwaysPersistRenderingState == false)) ||
     (pFVar10 != (FSceneViewStateInterface *)0x0)) {
    if (((bVar12 == 0) && (pFVar10 != (FSceneViewStateInterface *)0x0)) &&
       (this->bAlwaysPersistRenderingState == false)) {
      if (param_1 < (this->ViewStates).Array.ArrayNum) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FSceneViewStateInterface *)(*pcVar3)();
        return pFVar10;
      }
      FSceneViewStateReference::Destroy
                (*(FSceneViewStateReference **)
                  ((this->ViewStates).Array.AllocatorInstance.Data + lVar15 * 8));
      pFVar10 = (FSceneViewStateInterface *)0x0;
    }
  }
  else {
    pFVar11 = UActorComponent::GetScene((UActorComponent *)this);
    TVar14 = GMaxRHIFeatureLevel;
    if (pFVar11 != (FSceneInterface *)0x0) {
      pFVar11 = UActorComponent::GetScene((UActorComponent *)this);
      TVar14 = pFVar11->FeatureLevel;
    }
    uVar8 = uVar7;
    if (param_1 < (this->ViewStates).Array.ArrayNum) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSceneViewStateInterface *)(*pcVar3)();
      return pFVar10;
    }
    FSceneViewStateReference::Allocate
              (*(FSceneViewStateReference **)((pTVar1->Array).AllocatorInstance.Data + lVar15 * 8),
               TVar14);
    if (param_1 < (this->ViewStates).Array.ArrayNum) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSceneViewStateInterface *)(*pcVar3)();
      return pFVar10;
    }
    pFVar10 = *(FSceneViewStateInterface **)
               (*(longlong *)((this->ViewStates).Array.AllocatorInstance.Data + lVar15 * 8) + 8);
  }
  return pFVar10;
}

// HideActorComponents @ 147952990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent::HideActorComponents
          (USceneCaptureComponent *this,AActor *param_1,bool param_2)

{
  ForElementType<UPrimitiveComponent_*> FVar1;
  UObject *pUVar2;
  int iVar3;
  ulonglong uVar4;
  ForElementType<UPrimitiveComponent_*> FVar5;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FWeakObjectPtr local_110;
  UObject *local_108;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_100;
  ulonglong local_30;
  
  if (param_1 != (AActor *)0x0) {
    local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
    local_100.ArrayMax = 0x18;
    local_100.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
    local_100.ArrayNum = 0;
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_100,param_2);
    iVar3 = local_100.ArrayNum;
    uVar4 = (ulonglong)local_100.ArrayNum;
    FVar5 = (ForElementType<UPrimitiveComponent_*>)&local_100;
    if (local_100.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FVar5 = local_100.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar5 + uVar4 * 8);
    while( true ) {
      if ((uint)uVar4 != iVar3) {
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (FVar5 == FVar1) break;
      pUVar2 = *(UObject **)FVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_110.ObjectIndex = 0;
      local_110.ObjectSerialNumber = 0;
      local_108 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_108);
      TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&>
                (&this->HiddenComponents,
                 (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_110);
      uVar4 = (ulonglong)(uint)local_100.ArrayNum;
      FVar5 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar5 + 8);
    }
    if (local_100.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// HideComponent @ 147952d80

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
USceneCaptureComponent::HideComponent(USceneCaptureComponent *this,UPrimitiveComponent *param_1)

{
  FWeakObjectPtr local_res10;
  UPrimitiveComponent *local_res18 [2];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&>
              (&this->HiddenComponents,
               (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_res10);
  }
  return;
}

// IsCulledByDetailMode @ 147956140

bool __thiscall USceneCaptureComponent::IsCulledByDetailMode(USceneCaptureComponent *this)

{
  byte bVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  FCachedSystemScalabilityCVars *pFVar5;
  
  pTVar2 = CVarSCCullByDetailMode.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 1;
      goto LAB_14795616f;
    }
  }
  lVar4 = 0;
LAB_14795616f:
  if (pTVar2->ShadowedValue[lVar4] != false) {
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    pFVar5 = GetCachedScalabilityCVars();
    if (pFVar5->DetailMode < (int)(uint)bVar1) {
      return true;
    }
  }
  return false;
}

// OnComponentDestroyed @ 147958be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent::OnComponentDestroyed(USceneCaptureComponent *this,bool param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  UObjectBaseUtility *pUVar4;
  USceneCaptureComponent *pUVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FUObjectItem *pFVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  undefined8 *puVar17;
  uint uVar18;
  wchar_t *pwVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  uint uStackX_18;
  ulonglong in_stack_fffffffffffffe08;
  ForAnyElementType FStack_1c8;
  undefined8 uStack_1c0;
  UObject *pUStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  FName FStack_1a0;
  FName FStack_198;
  FName FStack_190;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  FString FStack_f8;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  iVar12 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar12 < 0) {
    in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffff00000000;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  if ((GExitPurge == false) && (-1 < *(char *)((longlong)&this->_padding_ + 1))) {
    lVar3 = this->_padding_;
    uStackX_18 = (uint)this->_padding_;
    uVar21 = (ulonglong)uStackX_18;
    if (param_1) {
      lVar22 = 0;
      bVar10 = false;
      FStack_1c8.Data = (FScriptContainerElement *)0x0;
      uStack_1c0 = 0;
      if ((int)uStackX_18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar21);
      }
      if (0 < (int)uStackX_18) {
        pwVar19 = (wchar_t *)((longlong)&uStack_1c0 + 4);
        pwVar15 = (wchar_t *)(in_stack_fffffffffffffe08 & 0xffffffff00000000);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uStackX_18,&FStack_1c8,0,(int *)pwVar19);
        plVar23 = &this->_padding_;
        do {
          iVar12 = (int)this->_padding_;
          pFVar20 = (FScriptContainerElement *)(longlong)iVar12;
          uVar18 = iVar12 - 1;
          uVar11 = 0;
          if ((int)uVar18 < iVar12) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if (uVar11 == 0) {
            pwVar15 = (wchar_t *)(longlong)(int)uVar18;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            pwVar19 = (wchar_t *)pFVar20;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar12 = (int)this->_padding_;
          pFVar20 = (FScriptContainerElement *)(longlong)iVar12;
          pUVar4 = *(UObjectBaseUtility **)(*plVar23 + -8 + (longlong)pFVar20 * 8);
          if ((pUVar4 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar4[4].field_0x8 == lVar3))
          {
            if (iVar12 < 1) {
              pwVar15 = (wchar_t *)0x0;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              pwVar19 = (wchar_t *)pFVar20;
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar6 = *(UObject **)(*plVar23 + -8 + (longlong)(int)this->_padding_ * 8),
               pUVar6 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUVar6);
            }
            iVar12 = (int)this->_padding_;
            uVar11 = iVar12 - 1;
            pvVar1 = (void *)(*plVar23 + (longlong)(int)uVar11 * 8);
            iVar12 = ~uVar11 + iVar12;
            if (iVar12 != 0) {
              memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
            }
            *(int *)&this->_padding_ = (int)this->_padding_ + -1;
            if (pUVar4 != (UObjectBaseUtility *)0x0) {
              pUStack_1b8 = (UObject *)pUVar4;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar4);
              }
              if ((FStack_1c8.Data <= (FScriptContainerElement *)&pUStack_1b8) &&
                 ((FScriptContainerElement *)&pUStack_1b8 <
                  FStack_1c8.Data + (longlong)uStack_1c0._4_4_ * 8)) {
                pwVar15 = (wchar_t *)&pUStack_1b8;
                pwVar19 = (wchar_t *)FStack_1c8.Data;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar12 = (int)uStack_1c0;
              if ((int)uStack_1c0 == uStack_1c0._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&FStack_1c8,(int *)((longlong)&uStack_1c0 + 4));
              }
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,iVar12 + 1);
              *(UObject **)(FStack_1c8.Data + (longlong)iVar12 * 8) = pUStack_1b8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUStack_1b8 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUStack_1b8);
              }
            }
          }
          else {
            pUVar5 = *(USceneCaptureComponent **)&pUVar4[5].field_0x8;
            if (pUVar5 == (USceneCaptureComponent *)0x0) {
              if (((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
                  ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) &&
                 (1 < (byte)LogSceneComponent._0_1_)) {
                pFVar14 = UObjectBaseUtility::GetFullName(pUVar4,&FStack_f8,(UObject *)0x0,None);
                if ((pFVar14->Data).ArrayNum == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                }
                UObjectBaseUtility::GetFullName(pUVar4,&FStack_108,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this,&FStack_118,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
                }
                FVar16.Data = FStack_f8.Data.AllocatorInstance.Data;
                if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
                  FVar16.Data = FStack_f8.Data.AllocatorInstance.Data;
                }
LAB_147959024:
                if (FVar16.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar16.Data);
                }
              }
LAB_147959035:
              iVar12 = (int)this->_padding_;
              pFVar20 = (FScriptContainerElement *)(longlong)iVar12;
              if (iVar12 < 1) {
                pwVar15 = (wchar_t *)0x0;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                pwVar19 = (wchar_t *)pFVar20;
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar6 = *(UObject **)(*plVar23 + -8 + (longlong)(int)this->_padding_ * 8),
                 pUVar6 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              iVar12 = (int)this->_padding_;
              uVar11 = iVar12 - 1;
              pvVar1 = (void *)(*plVar23 + (longlong)(int)uVar11 * 8);
              iVar12 = ~uVar11 + iVar12;
              if (iVar12 != 0) {
                memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
              }
              *(int *)&this->_padding_ = (int)this->_padding_ + -1;
            }
            else {
              if (pUVar5 != this) {
                if (1 < (byte)LogSceneComponent._0_1_) {
                  pFVar14 = UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pUVar5,&FStack_128,(UObject *)0x0,None)
                  ;
                  if ((pFVar14->Data).ArrayNum == 0) {
                    pwVar19 = L"";
                  }
                  else {
                    pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                  }
                  pFVar14 = UObjectBaseUtility::GetFullName(pUVar4,&FStack_138,(UObject *)0x0,None);
                  if ((pFVar14->Data).ArrayNum == 0) {
                    pwVar15 = L"";
                  }
                  else {
                    pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                  }
                  UObjectBaseUtility::GetFullName(pUVar4,&FStack_148,(UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this,&FStack_158,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                  if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
                  }
                  if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
                  }
                  FVar16.Data = FStack_128.Data.AllocatorInstance.Data;
                  if (FStack_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_138.Data.AllocatorInstance.Data);
                    FVar16.Data = FStack_128.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147959024;
                }
                goto LAB_147959035;
              }
              pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
              if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                if (!bVar10) {
                  for (lVar22 = this->_padding_;
                      (lVar22 != 0 &&
                      ((pFVar13 = FUObjectArray::IndexToObject
                                            (&GUObjectArray,*(int *)(lVar22 + 0xc)),
                       ((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) != 0 ||
                       (*(longlong *)(lVar22 + 0xa8) == lVar3))));
                      lVar22 = *(longlong *)(lVar22 + 0xd0)) {
                  }
                  bVar10 = true;
                }
                if (lVar22 == 0) goto LAB_147958e4d;
                uStack_1b0 = 0;
                cVar9 = (**(code **)(*(longlong *)pUVar4 + 0x508))
                                  (pUVar4,lVar22,&FAttachmentTransformRules::KeepWorldTransform,0,
                                   pwVar15,pwVar19);
                if (cVar9 == '\0') goto LAB_147958e4d;
              }
              else {
LAB_147958e4d:
                (**(code **)(*(longlong *)pUVar4 + 0x518))
                          (pUVar4,&FDetachmentTransformRules::KeepWorldTransform);
              }
            }
            if ((int)uStackX_18 <= (int)this->_padding_) {
              FStack_1a0.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
              FStack_1a0.Number = *(uint *)&pUVar4->field_0x1c;
              ::FName::ToString(&FStack_1a0,&FStack_188);
              pwVar15 = L"";
              if (FStack_188.Data.ArrayNum != 0) {
                pwVar15 = (wchar_t *)FStack_188.Data.AllocatorInstance.Data;
              }
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChildCount > AttachChildren.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                 ,0x612,
                                 L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                );
              if (FStack_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_188.Data.AllocatorInstance.Data);
              }
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
          uStackX_18 = (uint)this->_padding_;
        } while (0 < (int)uStackX_18);
      }
      plVar23 = &this->_padding_;
      if ((ForAnyElementType *)plVar23 != &FStack_1c8) {
        if ((void *)*plVar23 != (void *)0x0) {
          FMemory::Free((void *)*plVar23);
        }
        *plVar23 = (longlong)FStack_1c8.Data;
        *(int *)&this->_padding_ = (int)uStack_1c0;
        FStack_1c8.Data = (FScriptContainerElement *)0x0;
        *(int *)((longlong)&this->_padding_ + 4) = uStack_1c0._4_4_;
        uStack_1c0 = 0;
      }
      if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.Data);
      }
    }
    else {
      while (0 < (int)uStackX_18) {
        iVar12 = (int)this->_padding_;
        uVar18 = iVar12 - 1;
        uVar11 = 0;
        if ((int)uVar18 < iVar12) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (int)this->_padding_;
        pUVar4 = *(UObjectBaseUtility **)(this->_padding_ + -8 + (longlong)iVar12 * 8);
        if (pUVar4 == (UObjectBaseUtility *)0x0) {
joined_r0x00014795986d:
          if ((iVar12 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 = *(UObject **)(this->_padding_ + -8 + (longlong)(int)this->_padding_ * 8),
             pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          iVar12 = (int)this->_padding_;
          uVar11 = iVar12 - 1;
          pvVar1 = (void *)(this->_padding_ + (longlong)(int)uVar11 * 8);
          iVar12 = ~uVar11 + iVar12;
          if (iVar12 != 0) {
            memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
          }
          *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        }
        else {
          pUVar5 = *(USceneCaptureComponent **)&pUVar4[5].field_0x8;
          if (pUVar5 == (USceneCaptureComponent *)0x0) {
            if (((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
                ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) &&
               (1 < (byte)LogSceneComponent._0_1_)) {
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_58,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_68,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&FStack_78,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
              }
              if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
              }
              if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
              }
            }
            iVar12 = (int)this->_padding_;
            goto joined_r0x00014795986d;
          }
          if (pUVar5 != this) {
            if (1 < (byte)LogSceneComponent._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar5,&FStack_88,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_98,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_a8,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&FStack_b8,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
              }
              if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
              }
              if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
              }
              if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
              }
            }
            iVar12 = (int)this->_padding_;
            goto joined_r0x00014795986d;
          }
          pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
          if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
            for (lVar22 = this->_padding_; lVar22 != 0; lVar22 = *(longlong *)(lVar22 + 0xd0)) {
              pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar22 + 0xc));
              if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                uStack_1a8 = 0;
                cVar9 = (**(code **)(*(longlong *)pUVar4 + 0x508))(pUVar4,lVar22);
                if (cVar9 != '\0') {
                  if ((int)uVar21 <= (int)this->_padding_) {
                    FStack_198.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
                    FStack_198.Number = *(uint *)&pUVar4->field_0x1c;
                    ::FName::ToString(&FStack_198,&FStack_178);
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ChildCount > AttachChildren.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                        ,0x63e,
                                        L"AttachChildren count did not decrease while reattaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                       );
                    if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
                    }
                    if (bVar10) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  goto LAB_147959903;
                }
                break;
              }
            }
          }
          puVar17 = (undefined8 *)pUVar5->_padding_;
          puVar2 = puVar17 + (int)pUVar5->_padding_;
          for (; puVar17 != puVar2; puVar17 = puVar17 + 1) {
            if (((UObjectBaseUtility *)*puVar17 != (UObjectBaseUtility *)0x0) &&
               ((UObjectBaseUtility *)*puVar17 == pUVar4)) goto LAB_1479595ca;
          }
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)&pUVar4[5].field_0x8,&FStack_c8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName(pUVar4,&FStack_d8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_e8,(UObject *)0x0,None)
          ;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ChildAttachParentWas->GetAttachChildren().Contains(Child)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                              ,0x646,
                              L"Did not find \'%s\', in Child->AttachParent->AttachChildren. Child: \'%s\', Child->AttachParent: \'%s\'"
                             );
          if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
          }
          if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
          }
          if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
          }
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_1479595ca:
          (**(code **)(*(longlong *)pUVar4 + 0x518))
                    (pUVar4,&FDetachmentTransformRules::KeepWorldTransform);
          if ((int)uVar21 <= (int)this->_padding_) {
            FStack_190.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
            FStack_190.Number = *(uint *)&pUVar4->field_0x1c;
            ::FName::ToString(&FStack_190,&FStack_168);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ChildCount > AttachChildren.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                ,0x648,
                                L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                               );
            if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
LAB_147959903:
        uStackX_18 = (uint)this->_padding_;
        uVar21 = (ulonglong)uStackX_18;
      }
    }
    if ((this->_padding_ != 0) && ((!param_1 || (*(longlong *)(this->_padding_ + 0xa8) != lVar3))))
    {
      (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
  }
  return;
}

// OnRegister @ 14795a0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent::OnRegister(USceneCaptureComponent *this)

{
  USceneComponent::OnRegister((USceneComponent *)this);
  UpdateShowFlags(this);
  return;
}

// OnUnregister @ 14795acc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USceneCaptureComponent::OnUnregister(USceneCaptureComponent *this)

{
  int *piVar1;
  TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 *puVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  uint uVar7;
  UWorld *pUVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  USceneCaptureComponent *local_res20;
  UWorld *local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SceneCapturesToUpdateMapCS);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (USceneCaptureComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  uVar11 = 0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (USceneCaptureComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  FVar5 = local_res18;
  pUVar8 = (UWorld *)this->_padding_;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_58 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_58);
  FVar4 = local_res10;
  local_40 = FVar5;
  if (SceneCapturesToUpdateMap._72_4_ != 0) {
    lVar9 = 0x154c33aa8;
    if (SceneCapturesToUpdateMap._64_8_ != 0) {
      lVar9 = SceneCapturesToUpdateMap._64_8_;
    }
    iVar14 = *(int *)(lVar9 + (longlong)
                              (int)(SceneCapturesToUpdateMap._72_4_ - 1U &
                                   (local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex)) * 4);
    do {
      iVar13 = iVar14;
      iVar14 = iVar13;
      if (iVar13 == -1) break;
      local_50 = FVar4;
      iVar14 = *(int *)(SceneCapturesToUpdateMap._0_8_ + 0x10 + (longlong)iVar13 * 0x18);
      local_48 = *(FWeakObjectPtr *)(SceneCapturesToUpdateMap._0_8_ + (longlong)iVar13 * 0x18);
      bVar6 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                        ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_48,
                         (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_50);
    } while (!bVar6);
    if (iVar13 != -1) {
      do {
        bVar6 = TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>::
                UEOpEquals<USceneCaptureComponent,bool>
                          ((TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)
                           (SceneCapturesToUpdateMap._0_8_ + ((longlong)iVar13 * 3 + 1) * 8),
                           (TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)&local_40);
        if (bVar6) {
          TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
                           *)&SceneCapturesToUpdateMap,iVar13);
        }
        do {
          iVar13 = iVar14;
          if (iVar13 == -1) goto LAB_14795aeba;
          local_38 = FVar4;
          iVar14 = *(int *)(SceneCapturesToUpdateMap._0_8_ + 0x10 + (longlong)iVar13 * 0x18);
          local_30 = *(FWeakObjectPtr *)(SceneCapturesToUpdateMap._0_8_ + (longlong)iVar13 * 0x18);
          bVar6 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                            ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_30,
                             (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_38);
        } while (!bVar6);
      } while( true );
    }
  }
LAB_14795aeba:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SceneCapturesToUpdateMapCS);
  this_00 = &this->ViewStates;
  uVar15 = uVar11;
  if (0 < (this->ViewStates).Array.ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < (this->ViewStates).Array.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FSceneViewStateReference::Destroy
                (*(FSceneViewStateReference **)((this_00->Array).AllocatorInstance.Data + uVar15));
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 8;
    } while ((int)(uVar10 + 1) < (this->ViewStates).Array.ArrayNum);
  }
  iVar14 = (this->ViewStates).Array.ArrayNum;
  if (1 < iVar14) {
    TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::RemoveAt
              (this_00,1,iVar14 + -1,Default);
  }
  pFVar12 = (this_00->Array).AllocatorInstance.Data;
  for (iVar14 = (this->ViewStates).Array.ArrayNum; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar2 = *(undefined8 **)pFVar12;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar12 = pFVar12 + 8;
  }
  piVar1 = &(this->ViewStates).Array.ArrayMax;
  (this->ViewStates).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  this->_padding_ = 0;
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// PostLoad @ 14795cd90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent::PostLoad(USceneCaptureComponent *this)

{
  bool bVar1;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    RegisterDelegates(this);
  }
  UpdateShowFlags(this);
  return;
}

// RegisterDelegates @ 147960900

void __thiscall USceneCaptureComponent::RegisterDelegates(USceneCaptureComponent *this)

{
  bool bVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_res10 [24];
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    `USceneCaptureComponent::RegisterDelegates'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_00 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<USceneCaptureComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(USceneCaptureComponent *)local_res10,(pmf_c3d78c6e *)this);
  return;
}

// ReleaseGarbageReferences @ 147961ae0

void __thiscall USceneCaptureComponent::ReleaseGarbageReferences(USceneCaptureComponent *this)

{
  <lambda_1> local_res8 [32];
  
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_USceneCaptureComponent::ReleaseGarbageReferences_::__l2::<lambda_1>_>
            (&this->HiddenActors,local_res8);
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_USceneCaptureComponent::ReleaseGarbageReferences_::__l2::<lambda_1>_>
            (&this->ShowOnlyActors,local_res8);
  return;
}

// RemoveShowOnlyActorComponents @ 147963550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent::RemoveShowOnlyActorComponents
          (USceneCaptureComponent *this,AActor *param_1,bool param_2)

{
  int iVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *this_00;
  code *pcVar4;
  int iVar5;
  ForElementType<UPrimitiveComponent_*> FVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ForElementType<UPrimitiveComponent_*> FVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_198 [32];
  FWeakObjectPtr *local_178;
  FWeakObjectPtr *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [8];
  FWeakObjectPtr local_140;
  uint local_138;
  ForElementType<UPrimitiveComponent_*> local_130;
  UObject *local_128;
  ForElementType<UPrimitiveComponent_*> local_120;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_118;
  ulonglong local_48;
  
  if (param_1 != (AActor *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
    local_118.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0x18;
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_118,param_2);
    uVar9 = (ulonglong)local_118.ArrayNum;
    local_138 = local_118.ArrayNum;
    FVar12 = (ForElementType<UPrimitiveComponent_*>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FVar12 = local_118.AllocatorInstance.SecondaryData;
    }
    local_120 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar12 + uVar9 * 8);
    uVar13 = uVar9;
    while( true ) {
      FVar6 = local_120;
      iVar14 = 0;
      local_130 = FVar12;
      if ((int)uVar9 != (int)uVar13) {
        local_148[0] = 0;
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_148);
      }
      if (FVar12 == FVar6) break;
      pUVar2 = *(UObject **)FVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_140.ObjectIndex = 0;
      local_140.ObjectSerialNumber = 0;
      local_128 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_128);
      pFVar3 = (FWeakObjectPtr *)(this->ShowOnlyComponents).AllocatorInstance.Data;
      if ((pFVar3 <= &local_140) &&
         (lVar10 = (longlong)(this->ShowOnlyComponents).ArrayMax, &local_140 < pFVar3 + lVar10)) {
        local_160 = (longlong)(this->ShowOnlyComponents).ArrayNum;
        local_158 = 8;
        local_178 = &local_140;
        local_170 = pFVar3;
        local_168 = lVar10;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar1 = (this->ShowOnlyComponents).ArrayNum;
      if (iVar1 != 0) {
        this_00 = (this->ShowOnlyComponents).AllocatorInstance.Data;
        bVar7 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                UEOpEquals<UPrimitiveComponent,bool>
                          ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)this_00,
                           (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_140);
        bVar7 = !bVar7;
        iVar11 = iVar14;
        do {
          iVar5 = iVar11;
          do {
            iVar5 = iVar5 + 1;
            if (iVar1 <= iVar5) break;
            bVar8 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                    UEOpEquals<UPrimitiveComponent,bool>
                              ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)
                               (this_00 + (longlong)iVar5 * 8),
                               (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_140);
          } while (bVar7 == !bVar8);
          if (bVar7 != false) {
            if (iVar14 != iVar11) {
              memmove(this_00 + (longlong)iVar14 * 8,this_00 + (longlong)iVar11 * 8,
                      (longlong)(iVar5 - iVar11) << 3);
            }
            iVar14 = iVar14 + (iVar5 - iVar11);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar11 = iVar5;
        } while (iVar5 < iVar1);
        (this->ShowOnlyComponents).ArrayNum = iVar14;
      }
      uVar9 = (ulonglong)(uint)local_118.ArrayNum;
      FVar12 = (ForElementType<UPrimitiveComponent_*>)((longlong)local_130 + 8);
      uVar13 = (ulonglong)local_138;
    }
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// RemoveShowOnlyComponent @ 147963810

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
USceneCaptureComponent::RemoveShowOnlyComponent
          (USceneCaptureComponent *this,UPrimitiveComponent *param_1)

{
  FWeakObjectPtr local_res8;
  UPrimitiveComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
            (&this->ShowOnlyComponents,
             (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_res8);
  return;
}

// Serialize @ 147966030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent::Serialize(USceneCaptureComponent *this,FArchive *param_1)

{
  int iVar1;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((iVar1 < 0x13) &&
     ((0 < (this->ShowOnlyActors).ArrayNum || (0 < (this->ShowOnlyComponents).ArrayNum)))) {
    this->PrimitiveRenderMode = PRM_UseShowOnlyList;
  }
  return;
}

// Serialize @ 1479660a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent::Serialize(USceneCaptureComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FRenderingObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FRenderingObjectVersion::GUID);
  if ((iVar1 < 0x13) &&
     ((0 < (this->ShowOnlyActors).ArrayNum || (0 < (this->ShowOnlyComponents).ArrayNum)))) {
    this->PrimitiveRenderMode = PRM_UseShowOnlyList;
  }
  return;
}

// SetCaptureSortPriority @ 1479677c0

void __thiscall
USceneCaptureComponent::SetCaptureSortPriority(USceneCaptureComponent *this,int param_1)

{
  this->CaptureSortPriority = param_1;
  return;
}

// SetShowFlagSettings @ 14796aea0

void __thiscall
USceneCaptureComponent::SetShowFlagSettings
          (USceneCaptureComponent *this,
          TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_>::operator=
            (&this->ShowFlagSettings,param_1);
  UpdateShowFlags(this);
  return;
}

// ShowOnlyActorComponents @ 14796fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent::ShowOnlyActorComponents
          (USceneCaptureComponent *this,AActor *param_1,bool param_2)

{
  ForElementType<UPrimitiveComponent_*> FVar1;
  UObject *pUVar2;
  int iVar3;
  ulonglong uVar4;
  ForElementType<UPrimitiveComponent_*> FVar5;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  FWeakObjectPtr local_114;
  UObject *local_108;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_100;
  ulonglong local_30;
  
  if (param_1 != (AActor *)0x0) {
    local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
    this->PrimitiveRenderMode = PRM_UseShowOnlyList;
    local_100.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0x18;
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_100,param_2);
    iVar3 = local_100.ArrayNum;
    uVar4 = (ulonglong)local_100.ArrayNum;
    FVar5 = (ForElementType<UPrimitiveComponent_*>)&local_100;
    if (local_100.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FVar5 = local_100.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar5 + uVar4 * 8);
    while( true ) {
      if ((uint)uVar4 != iVar3) {
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (FVar5 == FVar1) break;
      pUVar2 = *(UObject **)FVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_114.ObjectIndex = 0;
      local_114.ObjectSerialNumber = 0;
      local_108 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_114,(FObjectPtr)&local_108);
      TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>
                (&this->ShowOnlyComponents,
                 (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_114);
      uVar4 = (ulonglong)(uint)local_100.ArrayNum;
      FVar5 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar5 + 8);
    }
    if (local_100.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ShowOnlyComponent @ 14796ff60

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
USceneCaptureComponent::ShowOnlyComponent(USceneCaptureComponent *this,UPrimitiveComponent *param_1)

{
  FWeakObjectPtr local_res10;
  UPrimitiveComponent *local_res18 [2];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    this->PrimitiveRenderMode = PRM_UseShowOnlyList;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>
              (&this->ShowOnlyComponents,
               (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_res10);
  }
  return;
}

// StaticRegisterNativesUSceneCaptureComponent @ 147970840

void __cdecl USceneCaptureComponent::StaticRegisterNativesUSceneCaptureComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_USceneCaptureComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterDelegates @ 147976dc0

void __thiscall USceneCaptureComponent::UnregisterDelegates(USceneCaptureComponent *this)

{
  bool bVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_res10 [24];
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    `USceneCaptureComponent::UnregisterDelegates'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  return;
}

// UpdateDeferredCaptures @ 147978040

void __cdecl USceneCaptureComponent::UpdateDeferredCaptures(FSceneInterface *param_1)

{
  FSceneInterface local_res10;
  TArrayView<FSceneViewFamily_const_*_const,int> local_18;
  
  ISceneRenderBuilder::Create(&local_res10);
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FSceneViewFamily **)0x0;
  SceneCaptureUpdateDeferredCapturesInternal
            (param_1,&local_18,(ISceneRenderBuilder *)local_res10._padding_);
  (**(code **)((longlong)*(ISceneRenderBuilder *)local_res10._padding_ + 0x30))();
  if ((ISceneRenderBuilder *)local_res10._padding_ != (ISceneRenderBuilder *)0x0) {
    (**(code **)*(ISceneRenderBuilder *)local_res10._padding_)(local_res10._padding_,1);
  }
  return;
}

// UpdateShowFlags @ 14797b690

void __thiscall USceneCaptureComponent::UpdateShowFlags(USceneCaptureComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FString local_28;
  bool local_18;
  
  pUVar4 = UObject::GetArchetype((UObject *)this);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) {
      FEngineShowFlags::operator=(&this->ShowFlags,(FEngineShowFlags *)&pUVar4[0x12].field_0x8);
    }
  }
  iVar2 = (this->ShowFlagSettings).ArrayNum;
  pFVar7 = (this->ShowFlagSettings).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->ShowFlagSettings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEngineShowFlagsSetting,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    ::FString::FString(&local_28,(FString *)pFVar7);
    local_18 = (bool)pFVar7[0x10].field_0x0;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    uVar3 = FEngineShowFlags::FindIndexByName((wchar_t *)FVar6.Data,(wchar_t *)0x0);
    if (uVar3 != 0xffffffff) {
      FEngineShowFlags::SetSingleFlag(&this->ShowFlags,uVar3,local_18);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 0x18;
  }
  return;
}

// __VTableCtorCaller @ 14797d620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl USceneCaptureComponent::__VTableCtorCaller(FVTableHelper *param_1)

{
  uint *puVar1;
  longlong *this;
  longlong lVar2;
  longlong lVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  USceneComponent *this_00;
  USceneComponent *pUVar6;
  
  pUVar6 = (USceneComponent *)0x0;
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  this_00 = (USceneComponent *)
            StaticAllocateObject
                      (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this_00,param_1);
    this = &this_00[1]._padding_;
    this_00->_padding_ = (longlong)&_vftable__for__UObject__;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    this_00->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(byte *)&this_00[1]._padding_ = (byte)this_00[1]._padding_ & 0xe1 | 1;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1].CachedLevelCollection = 0;
    *(undefined4 *)((longlong)&this_00[1].CachedLevelCollection + 4) = 0x80;
    EnsureRetrievingVTablePtrDuringCtor(L"FEngineShowFlags()");
    lVar3 = _UNK_15060db28;
    lVar2 = ___xmm_ffffffffffffffffffffffffffffffff;
    *this = ___xmm_ffffffffffffffffffffffffffffffff;
    this_00[1]._padding_ = lVar3;
    this_00[1]._padding_ = lVar2;
    this_00[1]._padding_ = lVar3;
    FEngineShowFlags::InitCustomShowFlags((FEngineShowFlags *)this,ESFIM_Game);
    lVar2 = *this;
    puVar1 = (uint *)((longlong)&this_00[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xb07e06bf;
    *(uint *)&this_00[1]._padding_ = (uint)this_00[1]._padding_ & 0x74606800;
    puVar1 = (uint *)((longlong)&this_00[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0x202f200;
    *(uint *)&this_00[1]._padding_ = (uint)this_00[1]._padding_ & 0xffc7d6fd;
    puVar1 = (uint *)((longlong)&this_00[1]._padding_ + 4);
    *puVar1 = *puVar1 | 0x400600;
    puVar1 = (uint *)((longlong)&this_00[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0x9002782;
    *(uint *)&this_00[1]._padding_ = (uint)this_00[1]._padding_ | 0x81f8000;
    *(uint *)this = (uint)lVar2 & 0x1ff0ff | 0x3000000;
    lVar2 = this_00[1]._padding_;
    puVar1 = (uint *)((longlong)&this_00[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xffffffe0;
    *(uint *)&this_00[1]._padding_ = (uint)lVar2 & 0x3833c45c | 0x100;
    this_00[1].NetOldAttachSocketName.ComparisonIndex = 0;
    this_00[1].NetOldAttachSocketName.Number = 0;
    this_00[1].AttachChildren.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].AttachChildren.ArrayNum = 0;
    this_00[1].AttachChildren.ArrayMax = 0;
    this_00[1].ClientAttachedChildren.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar6 = this_00;
  }
  return (UObject *)pUVar6;
}

// execClearHiddenComponents @ 14797e270

void __cdecl
USceneCaptureComponent::execClearHiddenComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x8 = 0;
  if (*(int *)&param_1[0xf].field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(param_1 + 0xf),0,(int *)&param_1[0xf].field_0xc);
  }
  return;
}

// execClearShowOnlyComponents @ 14797e2f0

void __cdecl
USceneCaptureComponent::execClearShowOnlyComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x10].field_0x4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&param_1[0xf].field_0x20,0,(int *)&param_1[0x10].field_0x4
              );
  }
  return;
}

// execGetShowFlagSettings @ 147981930

void __cdecl
USceneCaptureComponent::execGetShowFlagSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> *)
                     &param_1[0x11].field_0x20);
  return;
}

// execHideActorComponents @ 147982ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
USceneCaptureComponent::execHideActorComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForElementType<UPrimitiveComponent_*> FVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  int iVar4;
  ulonglong uVar5;
  ForElementType<UPrimitiveComponent_*> FVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  int local_124;
  AActor *local_120;
  FWeakObjectPtr local_118;
  UObject *local_110;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_120 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_124 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_120 != (AActor *)0x0) {
    local_108.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0x18;
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (local_120,&local_108,local_124 != 0);
    iVar4 = local_108.ArrayNum;
    uVar5 = (ulonglong)local_108.ArrayNum;
    FVar6 = (ForElementType<UPrimitiveComponent_*>)&local_108;
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FVar6 = local_108.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar6 + uVar5 * 8);
    while( true ) {
      if ((uint)uVar5 != iVar4) {
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
      }
      if (FVar6 == FVar1) break;
      pUVar3 = *(UObject **)FVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_118.ObjectIndex = 0;
      local_118.ObjectSerialNumber = 0;
      local_110 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_110);
      TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&>
                ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(param_1 + 0xf),(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_118
                );
      uVar5 = (ulonglong)(uint)local_108.ArrayNum;
      FVar6 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar6 + 8);
    }
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// execHideComponent @ 147982f10

void __cdecl
USceneCaptureComponent::execHideComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res10 [2];
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_18[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
    TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&>
              ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                *)(param_1 + 0xf),(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_res20
              );
  }
  return;
}

// execRemoveShowOnlyActorComponents @ 1479872d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
USceneCaptureComponent::execRemoveShowOnlyActorComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *this;
  code *pcVar5;
  int iVar6;
  ForElementType<UPrimitiveComponent_*> FVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  int iVar11;
  ForElementType<UPrimitiveComponent_*> FVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_1a8 [32];
  FWeakObjectPtr *local_188;
  FWeakObjectPtr *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [4];
  int local_154;
  FWeakObjectPtr local_150;
  uint local_148;
  AActor *local_140;
  ForElementType<UPrimitiveComponent_*> local_138;
  UObject *local_130;
  UObject *local_128;
  ForElementType<UPrimitiveComponent_*> local_120;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_140 = (AActor *)0x0;
  local_128 = param_1;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_154 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_154,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_154);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_140 != (AActor *)0x0) {
    local_118.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0x18;
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (local_140,&local_118,local_154 != 0);
    uVar10 = (ulonglong)local_118.ArrayNum;
    local_148 = local_118.ArrayNum;
    FVar12 = (ForElementType<UPrimitiveComponent_*>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FVar12 = local_118.AllocatorInstance.SecondaryData;
    }
    local_120 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar12 + uVar10 * 8);
    uVar13 = uVar10;
    while( true ) {
      FVar7 = local_120;
      iVar14 = 0;
      local_138 = FVar12;
      if ((int)uVar10 != (int)uVar13) {
        local_158[0] = 0;
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_158);
      }
      if (FVar12 == FVar7) break;
      pUVar3 = *(UObject **)FVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_150.ObjectIndex = 0;
      local_150.ObjectSerialNumber = 0;
      local_130 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_130);
      pFVar4 = *(FWeakObjectPtr **)&param_1[0xf].field_0x20;
      if ((pFVar4 <= &local_150) && (&local_150 < pFVar4 + *(int *)&param_1[0x10].field_0x4)) {
        local_170 = (longlong)*(int *)(param_1 + 0x10);
        local_168 = 8;
        local_188 = &local_150;
        local_180 = pFVar4;
        local_178 = (longlong)*(int *)&param_1[0x10].field_0x4;
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
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        this = *(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> **)&param_1[0xf].field_0x20;
        bVar8 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                UEOpEquals<UPrimitiveComponent,bool>
                          (this,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_150);
        bVar8 = !bVar8;
        iVar11 = iVar14;
        do {
          iVar6 = iVar11;
          do {
            iVar6 = iVar6 + 1;
            if (iVar1 <= iVar6) break;
            bVar9 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                    UEOpEquals<UPrimitiveComponent,bool>
                              (this + iVar6,
                               (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_150);
          } while (bVar8 == !bVar9);
          if (bVar8 != false) {
            if (iVar14 != iVar11) {
              memmove(this + iVar14,this + iVar11,(longlong)(iVar6 - iVar11) << 3);
            }
            iVar14 = iVar14 + (iVar6 - iVar11);
          }
          bVar8 = (bool)(bVar8 ^ 1);
          iVar11 = iVar6;
        } while (iVar6 < iVar1);
        *(int *)(local_128 + 0x10) = iVar14;
        param_1 = local_128;
      }
      uVar10 = (ulonglong)(uint)local_118.ArrayNum;
      FVar12 = (ForElementType<UPrimitiveComponent_*>)((longlong)local_138 + 8);
      uVar13 = (ulonglong)local_148;
    }
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// execRemoveShowOnlyComponent @ 147987600

void __cdecl
USceneCaptureComponent::execRemoveShowOnlyComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res20;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
              *)&param_1[0xf].field_0x20,
             (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_res10);
  return;
}

// execSetCaptureSortPriority @ 147989280

void __cdecl
USceneCaptureComponent::execSetCaptureSortPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x10].field_0x20 = local_res8[0];
  return;
}

// execSetShowFlagSettings @ 14798ad30

void __cdecl
USceneCaptureComponent::execSetShowFlagSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FEngineShowFlagsSetting,TSizedDefaultAllocator<32>_> *)
             &param_1[0x11].field_0x20,pTVar2);
  UpdateShowFlags((USceneCaptureComponent *)param_1);
  DestructItems<FEngineShowFlagsSetting,int>
            ((FEngineShowFlagsSetting *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FEngineShowFlagsSetting *)local_18.AllocatorInstance.Data != (FEngineShowFlagsSetting *)0x0)
  {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execShowOnlyActorComponents @ 14798bd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
USceneCaptureComponent::execShowOnlyActorComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForElementType<UPrimitiveComponent_*> FVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  int iVar4;
  ulonglong uVar5;
  ForElementType<UPrimitiveComponent_*> FVar6;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  int local_134;
  AActor *local_130;
  FWeakObjectPtr local_128;
  UObject *local_120;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_130 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_134 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_130 != (AActor *)0x0) {
    param_1[0xe].field_0x20 = 2;
    local_118.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0x18;
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (local_130,&local_118,local_134 != 0);
    iVar4 = local_118.ArrayNum;
    uVar5 = (ulonglong)local_118.ArrayNum;
    FVar6 = (ForElementType<UPrimitiveComponent_*>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FVar6 = local_118.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar6 + uVar5 * 8);
    while( true ) {
      if ((uint)uVar5 != iVar4) {
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_138);
      }
      if (FVar6 == FVar1) break;
      pUVar3 = *(UObject **)FVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_128.ObjectIndex = 0;
      local_128.ObjectSerialNumber = 0;
      local_120 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_120);
      TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>
                ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)&param_1[0xf].field_0x20,
                 (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_128);
      uVar5 = (ulonglong)(uint)local_118.ArrayNum;
      FVar6 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar6 + 8);
    }
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// execShowOnlyComponent @ 14798bf30

void __cdecl
USceneCaptureComponent::execShowOnlyComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res10 [2];
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObject *)0x0) {
    param_1[0xe].field_0x20 = 2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_18[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
    TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>
              ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                *)&param_1[0xf].field_0x20,
               (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&local_res20);
  }
  return;
}

// operator() @ 150514170

bool __thiscall
`USceneCaptureComponent::RegisterDelegates'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5321193802315071691>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5321193802315071691>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505141b0

bool __thiscall
`USceneCaptureComponent::UnregisterDelegates'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5321193802315071697>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5321193802315071697>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

