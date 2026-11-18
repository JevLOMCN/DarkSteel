// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FSystemSettings @ 1488063e0

FSystemSettings * __thiscall FSystemSettings::FSystemSettings(FSystemSettings *this)

{
  FEngineShowFlags *pFVar1;
  code *pcVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  FSystemSettings *pFVar6;
  
  this->bIsEditor = false;
  this->_padding_ = (longlong)&___7FSystemSettings__6B_;
  (this->Force0Mask).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Force0Mask).CustomShowFlags.NumBits = 0;
  (this->Force0Mask).CustomShowFlags.MaxBits = 0x80;
  pFVar1 = &this->Force0Mask;
  pFVar1->PostProcessing = 0;
  pFVar1->Diffuse = 0;
  pFVar1->VisualizeOutOfBoundsPixels = 0;
  pFVar1->ReflectionEnvironment = 0;
  pFVar1->MegaLights = 0;
  pFVar1->VisualizeTSR = 0;
  pFVar1->VisualizeTemporalUpscaler = 0;
  pFVar1->VisualizeReprojection = 0;
  pFVar1->VisualizeMotionVectors = 0;
  pFVar1->VisualizeMotionBlur = 0;
  pFVar1->ScreenPercentage = 0;
  pFVar1->SeparateTranslucency = 0;
  pFVar1->ToneCurve = 0;
  pFVar1->SceneColorFringe = 0;
  pFVar1->CameraInterpolation = 0;
  pFVar1->Refraction = 0;
  pFVar1->PhysicalMaterialMasks = 0;
  pFVar1->VertexColors = 0;
  pFVar1->VisualizeDOF = 0;
  pFVar1->TestImage = 0;
  pFVar1->OpaqueCompositeEditorPrimitives = 0;
  pFVar1->CompositeEditorPrimitives = 0;
  pFVar1->CompositeDebugPrimitives = 0;
  pFVar1->MotionBlur = 0;
  pFVar1->GBufferHints = 0;
  pFVar1->DepthOfField = 0;
  pFVar1->VectorFields = 0;
  pFVar1->ColorGrading = 0;
  pFVar1->RectLights = 0;
  pFVar1->SpotLights = 0;
  pFVar1->PointLights = 0;
  pFVar1->DirectionalLights = 0;
  pFVar1->DirectLighting = 0;
  pFVar1->VisualizeVirtualShadowMap = 0;
  pFVar1->VisualizeGroom = 0;
  pFVar1->VisualizeSubstrate = 0;
  pFVar1->VisualizeLumen = 0;
  pFVar1->VisualizeNanite = 0;
  pFVar1->VisualizeBuffer = 0;
  pFVar1->MaterialAmbientOcclusion = 0;
  pFVar1->MaterialNormal = 0;
  pFVar1->ReflectionOverride = 0;
  pFVar1->LightingOnlyOverride = 0;
  pFVar1->OverrideDiffuseAndSpecular = 0;
  pFVar1->OnScreenDebug = 0;
  pFVar1->CameraImperfections = 0;
  pFVar1->Decals = 0;
  pFVar1->AmbientOcclusion = 0;
  pFVar1->Grain = 0;
  pFVar1->Vignette = 0;
  pFVar1->GlobalIllumination = 0;
  pFVar1->LensDistortion = 0;
  pFVar1->LensFlares = 0;
  pFVar1->VisualizeLocalExposure = 0;
  pFVar1->VisualizeLocalFogVolumes = 0;
  pFVar1->VisualizeSkyLightIlluminance = 0;
  pFVar1->VisualizeHDR = 0;
  pFVar1->EyeAdaptation = 0;
  pFVar1->AmbientCubemap = 0;
  pFVar1->TemporalAA = 0;
  pFVar1->AntiAliasing = 0;
  pFVar1->Tonemapper = 0;
  pFVar1->LocalExposure = 0;
  pFVar1->Bloom = 0;
  puVar3 = &(this->Force0Mask).field_0x8;
  (this->Force0Mask).Specular = 0;
  (this->Force0Mask).Pivot = 0;
  (this->Force0Mask).LightInfluences = 0;
  (this->Force0Mask).HitProxies = 0;
  (this->Force0Mask).Bounds = 0;
  (this->Force0Mask).ModeWidgets = 0;
  (this->Force0Mask).EditingLevelInstance = 0;
  (this->Force0Mask).VisualizeLevelInstanceEditing = 0;
  (this->Force0Mask).Selection = 0;
  (this->Force0Mask).Splines = 0;
  (this->Force0Mask).Cover = 0;
  (this->Force0Mask).MeshEdges = 0;
  (this->Force0Mask).Snap = 0;
  (this->Force0Mask).Grid = 0;
  (this->Force0Mask).LargeVertices = 0;
  (this->Force0Mask).BSPTriangles = 0;
  (this->Force0Mask).Editor = 0;
  (this->Force0Mask).DeferredLighting = 0;
  (this->Force0Mask).UnlitViewmode = 0;
  (this->Force0Mask).UnlitRichView = 0;
  (this->Force0Mask).Lighting = 0;
  (this->Force0Mask).Brushes = 0;
  (this->Force0Mask).BSPSplit = 0;
  (this->Force0Mask).ForceFeedbackRadius = 0;
  (this->Force0Mask).AudioRadius = 0;
  (this->Force0Mask).CameraFrustums = 0;
  (this->Force0Mask).MassProperties = 0;
  (this->Force0Mask).Constraints = 0;
  (this->Force0Mask).StreamingBounds = 0;
  (this->Force0Mask).LightMapDensity = 0;
  (this->Force0Mask).StationaryLightOverlap = 0;
  (this->Force0Mask).ShaderComplexity = 0;
  (this->Force0Mask).LightComplexity = 0;
  (this->Force0Mask).LOD = 0;
  (this->Force0Mask).BillboardSprites = 0;
  (this->Force0Mask).Translucency = 0;
  (this->Force0Mask).BuilderBrush = 0;
  (this->Force0Mask).SkeletalMeshes = 0;
  (this->Force0Mask).HeterogeneousVolumes = 0;
  (this->Force0Mask).Niagara = 0;
  (this->Force0Mask).Particles = 0;
  (this->Force0Mask).DynamicShadows = 0;
  (this->Force0Mask).InstancedGrass = 0;
  (this->Force0Mask).VisualizeInstanceUpdates = 0;
  (this->Force0Mask).HISMCClusterTree = 0;
  (this->Force0Mask).HISMCOcclusionBounds = 0;
  (this->Force0Mask).InstancedFoliage = 0;
  (this->Force0Mask).InstancedStaticMeshes = 0;
  (this->Force0Mask).LightFunctions = 0;
  (this->Force0Mask).TexturedLightProfiles = 0;
  (this->Force0Mask).GameplayDebug = 0;
  (this->Force0Mask).Navigation = 0;
  (this->Force0Mask).VisLog = 0;
  (this->Force0Mask).DebugAI = 0;
  (this->Force0Mask).IndirectLightingCache = 0;
  (this->Force0Mask).VolumetricLightmap = 0;
  (this->Force0Mask).VisualizeSSS = 0;
  (this->Force0Mask).SubsurfaceScattering = 0;
  (this->Force0Mask).CapsuleShadows = 0;
  (this->Force0Mask).RayTracedDistanceFieldShadows = 0;
  (this->Force0Mask).ContactShadows = 0;
  (this->Force0Mask).LumenReflections = 0;
  (this->Force0Mask).ScreenSpaceReflections = 0;
  (this->Force0Mask).SelectionOutline = 0;
  puVar3 = &(this->Force0Mask).field_0x10;
  (this->Force0Mask).ShadowFrustums = 0;
  (this->Force0Mask).DisableOcclusionQueries = 0;
  (this->Force0Mask).VisualizeInstanceOcclusionQueries = 0;
  (this->Force0Mask).OcclusionMeshes = 0;
  (this->Force0Mask).VREditing = 0;
  (this->Force0Mask).MediaPlanes = 0;
  (this->Force0Mask).ServerDrawDebug = 0;
  (this->Force0Mask).Bones = 0;
  (this->Force0Mask).WidgetComponents = 0;
  (this->Force0Mask).VisualizeVirtualTexture = 0;
  (this->Force0Mask).RequiredTextureResolution = 0;
  (this->Force0Mask).OutputMaterialTextureScales = 0;
  (this->Force0Mask).MaterialTextureScaleAccuracy = 0;
  (this->Force0Mask).MeshUVDensityAccuracy = 0;
  (this->Force0Mask).PrimitiveDistanceAccuracy = 0;
  (this->Force0Mask).ShaderComplexityWithQuadOverdraw = 0;
  (this->Force0Mask).QuadOverdraw = 0;
  (this->Force0Mask).HLODColoration = 0;
  (this->Force0Mask).LODColoration = 0;
  (this->Force0Mask).VisualizeSenses = 0;
  (this->Force0Mask).VisualizeShadingModels = 0;
  (this->Force0Mask).VisualizeSSR = 0;
  (this->Force0Mask).VolumetricFog = 0;
  (this->Force0Mask).LumenGlobalIllumination = 0;
  (this->Force0Mask).DistanceFieldAO = 0;
  (this->Force0Mask).ScreenSpaceAO = 0;
  (this->Force0Mask).VisualizeLightingOnProbes = 0;
  (this->Force0Mask).VisualizeGlobalDistanceField = 0;
  (this->Force0Mask).PhysicsField = 0;
  (this->Force0Mask).VisualizeMeshDistanceFields = 0;
  (this->Force0Mask).VisualizeDistanceFieldAO = 0;
  (this->Force0Mask).Paper2DSprites = 0;
  (this->Force0Mask).VolumeLightingSamples = 0;
  (this->Force0Mask).VisualizeVolumetricLightmap = 0;
  (this->Force0Mask).PrecomputedVisibilityCells = 0;
  (this->Force0Mask).PreviewShadowsIndicator = 0;
  (this->Force0Mask).SkyLighting = 0;
  (this->Force0Mask).PrecomputedVisibility = 0;
  (this->Force0Mask).VisualizeLightCulling = 0;
  (this->Force0Mask).DistanceCulledPrimitives = 0;
  (this->Force0Mask).StereoRendering = 0;
  (this->Force0Mask).HMDDistortion = 0;
  (this->Force0Mask).HighResScreenshotMask = 0;
  (this->Force0Mask).Rendering = 0;
  (this->Force0Mask).TextRender = 0;
  (this->Force0Mask).CameraSafeFrames = 0;
  (this->Force0Mask).CameraAspectRatioBars = 0;
  (this->Force0Mask).Cloud = 0;
  (this->Force0Mask).Atmosphere = 0;
  (this->Force0Mask).PostProcessMaterial = 0;
  (this->Force0Mask).LightShafts = 0;
  (this->Force0Mask).CollisionPawn = 0;
  (this->Force0Mask).CollisionVisibility = 0;
  (this->Force0Mask).Collision = 0;
  (this->Force0Mask).BSP = 0;
  (this->Force0Mask).ActorColoration = 0;
  (this->Force0Mask).Game = 0;
  (this->Force0Mask).Volumes = 0;
  (this->Force0Mask).Fog = 0;
  (this->Force0Mask).LightRadius = 0;
  (this->Force0Mask).Landscape = 0;
  (this->Force0Mask).StaticMeshes = 0;
  (this->Force0Mask).Materials = 0;
  (this->Force0Mask).Wireframe = 0;
  *(undefined8 *)&(this->Force0Mask).field_0x18 = 0;
  (this->Force1Mask).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Force1Mask).CustomShowFlags.NumBits = 0;
  iVar5 = InstanceCount + 1;
  (this->Force1Mask).CustomShowFlags.MaxBits = 0x80;
  pFVar1 = &this->Force1Mask;
  InstanceCount = iVar5;
  pFVar1->PostProcessing = 0;
  pFVar1->Diffuse = 0;
  pFVar1->VisualizeOutOfBoundsPixels = 0;
  pFVar1->ReflectionEnvironment = 0;
  pFVar1->MegaLights = 0;
  pFVar1->VisualizeTSR = 0;
  pFVar1->VisualizeTemporalUpscaler = 0;
  pFVar1->VisualizeReprojection = 0;
  pFVar1->VisualizeMotionVectors = 0;
  pFVar1->VisualizeMotionBlur = 0;
  pFVar1->ScreenPercentage = 0;
  pFVar1->SeparateTranslucency = 0;
  pFVar1->ToneCurve = 0;
  pFVar1->SceneColorFringe = 0;
  pFVar1->CameraInterpolation = 0;
  pFVar1->Refraction = 0;
  pFVar1->PhysicalMaterialMasks = 0;
  pFVar1->VertexColors = 0;
  pFVar1->VisualizeDOF = 0;
  pFVar1->TestImage = 0;
  pFVar1->OpaqueCompositeEditorPrimitives = 0;
  pFVar1->CompositeEditorPrimitives = 0;
  pFVar1->CompositeDebugPrimitives = 0;
  pFVar1->MotionBlur = 0;
  pFVar1->GBufferHints = 0;
  pFVar1->DepthOfField = 0;
  pFVar1->VectorFields = 0;
  pFVar1->ColorGrading = 0;
  pFVar1->RectLights = 0;
  pFVar1->SpotLights = 0;
  pFVar1->PointLights = 0;
  pFVar1->DirectionalLights = 0;
  pFVar1->DirectLighting = 0;
  pFVar1->VisualizeVirtualShadowMap = 0;
  pFVar1->VisualizeGroom = 0;
  pFVar1->VisualizeSubstrate = 0;
  pFVar1->VisualizeLumen = 0;
  pFVar1->VisualizeNanite = 0;
  pFVar1->VisualizeBuffer = 0;
  pFVar1->MaterialAmbientOcclusion = 0;
  pFVar1->MaterialNormal = 0;
  pFVar1->ReflectionOverride = 0;
  pFVar1->LightingOnlyOverride = 0;
  pFVar1->OverrideDiffuseAndSpecular = 0;
  pFVar1->OnScreenDebug = 0;
  pFVar1->CameraImperfections = 0;
  pFVar1->Decals = 0;
  pFVar1->AmbientOcclusion = 0;
  pFVar1->Grain = 0;
  pFVar1->Vignette = 0;
  pFVar1->GlobalIllumination = 0;
  pFVar1->LensDistortion = 0;
  pFVar1->LensFlares = 0;
  pFVar1->VisualizeLocalExposure = 0;
  pFVar1->VisualizeLocalFogVolumes = 0;
  pFVar1->VisualizeSkyLightIlluminance = 0;
  pFVar1->VisualizeHDR = 0;
  pFVar1->EyeAdaptation = 0;
  pFVar1->AmbientCubemap = 0;
  pFVar1->TemporalAA = 0;
  pFVar1->AntiAliasing = 0;
  pFVar1->Tonemapper = 0;
  pFVar1->LocalExposure = 0;
  pFVar1->Bloom = 0;
  puVar3 = &(this->Force1Mask).field_0x8;
  (this->Force1Mask).Specular = 0;
  (this->Force1Mask).Pivot = 0;
  (this->Force1Mask).LightInfluences = 0;
  (this->Force1Mask).HitProxies = 0;
  (this->Force1Mask).Bounds = 0;
  (this->Force1Mask).ModeWidgets = 0;
  (this->Force1Mask).EditingLevelInstance = 0;
  (this->Force1Mask).VisualizeLevelInstanceEditing = 0;
  (this->Force1Mask).Selection = 0;
  (this->Force1Mask).Splines = 0;
  (this->Force1Mask).Cover = 0;
  (this->Force1Mask).MeshEdges = 0;
  (this->Force1Mask).Snap = 0;
  (this->Force1Mask).Grid = 0;
  (this->Force1Mask).LargeVertices = 0;
  (this->Force1Mask).BSPTriangles = 0;
  (this->Force1Mask).Editor = 0;
  (this->Force1Mask).DeferredLighting = 0;
  (this->Force1Mask).UnlitViewmode = 0;
  (this->Force1Mask).UnlitRichView = 0;
  (this->Force1Mask).Lighting = 0;
  (this->Force1Mask).Brushes = 0;
  (this->Force1Mask).BSPSplit = 0;
  (this->Force1Mask).ForceFeedbackRadius = 0;
  (this->Force1Mask).AudioRadius = 0;
  (this->Force1Mask).CameraFrustums = 0;
  (this->Force1Mask).MassProperties = 0;
  (this->Force1Mask).Constraints = 0;
  (this->Force1Mask).StreamingBounds = 0;
  (this->Force1Mask).LightMapDensity = 0;
  (this->Force1Mask).StationaryLightOverlap = 0;
  (this->Force1Mask).ShaderComplexity = 0;
  (this->Force1Mask).LightComplexity = 0;
  (this->Force1Mask).LOD = 0;
  (this->Force1Mask).BillboardSprites = 0;
  (this->Force1Mask).Translucency = 0;
  (this->Force1Mask).BuilderBrush = 0;
  (this->Force1Mask).SkeletalMeshes = 0;
  (this->Force1Mask).HeterogeneousVolumes = 0;
  (this->Force1Mask).Niagara = 0;
  (this->Force1Mask).Particles = 0;
  (this->Force1Mask).DynamicShadows = 0;
  (this->Force1Mask).InstancedGrass = 0;
  (this->Force1Mask).VisualizeInstanceUpdates = 0;
  (this->Force1Mask).HISMCClusterTree = 0;
  (this->Force1Mask).HISMCOcclusionBounds = 0;
  (this->Force1Mask).InstancedFoliage = 0;
  (this->Force1Mask).InstancedStaticMeshes = 0;
  (this->Force1Mask).LightFunctions = 0;
  (this->Force1Mask).TexturedLightProfiles = 0;
  (this->Force1Mask).GameplayDebug = 0;
  (this->Force1Mask).Navigation = 0;
  (this->Force1Mask).VisLog = 0;
  (this->Force1Mask).DebugAI = 0;
  (this->Force1Mask).IndirectLightingCache = 0;
  (this->Force1Mask).VolumetricLightmap = 0;
  (this->Force1Mask).VisualizeSSS = 0;
  (this->Force1Mask).SubsurfaceScattering = 0;
  (this->Force1Mask).CapsuleShadows = 0;
  (this->Force1Mask).RayTracedDistanceFieldShadows = 0;
  (this->Force1Mask).ContactShadows = 0;
  (this->Force1Mask).LumenReflections = 0;
  (this->Force1Mask).ScreenSpaceReflections = 0;
  (this->Force1Mask).SelectionOutline = 0;
  puVar3 = &(this->Force1Mask).field_0x10;
  (this->Force1Mask).ShadowFrustums = 0;
  (this->Force1Mask).DisableOcclusionQueries = 0;
  (this->Force1Mask).VisualizeInstanceOcclusionQueries = 0;
  (this->Force1Mask).OcclusionMeshes = 0;
  (this->Force1Mask).VREditing = 0;
  (this->Force1Mask).MediaPlanes = 0;
  (this->Force1Mask).ServerDrawDebug = 0;
  (this->Force1Mask).Bones = 0;
  (this->Force1Mask).WidgetComponents = 0;
  (this->Force1Mask).VisualizeVirtualTexture = 0;
  (this->Force1Mask).RequiredTextureResolution = 0;
  (this->Force1Mask).OutputMaterialTextureScales = 0;
  (this->Force1Mask).MaterialTextureScaleAccuracy = 0;
  (this->Force1Mask).MeshUVDensityAccuracy = 0;
  (this->Force1Mask).PrimitiveDistanceAccuracy = 0;
  (this->Force1Mask).ShaderComplexityWithQuadOverdraw = 0;
  (this->Force1Mask).QuadOverdraw = 0;
  (this->Force1Mask).HLODColoration = 0;
  (this->Force1Mask).LODColoration = 0;
  (this->Force1Mask).VisualizeSenses = 0;
  (this->Force1Mask).VisualizeShadingModels = 0;
  (this->Force1Mask).VisualizeSSR = 0;
  (this->Force1Mask).VolumetricFog = 0;
  (this->Force1Mask).LumenGlobalIllumination = 0;
  (this->Force1Mask).DistanceFieldAO = 0;
  (this->Force1Mask).ScreenSpaceAO = 0;
  (this->Force1Mask).VisualizeLightingOnProbes = 0;
  (this->Force1Mask).VisualizeGlobalDistanceField = 0;
  (this->Force1Mask).PhysicsField = 0;
  (this->Force1Mask).VisualizeMeshDistanceFields = 0;
  (this->Force1Mask).VisualizeDistanceFieldAO = 0;
  (this->Force1Mask).Paper2DSprites = 0;
  (this->Force1Mask).VolumeLightingSamples = 0;
  (this->Force1Mask).VisualizeVolumetricLightmap = 0;
  (this->Force1Mask).PrecomputedVisibilityCells = 0;
  (this->Force1Mask).PreviewShadowsIndicator = 0;
  (this->Force1Mask).SkyLighting = 0;
  (this->Force1Mask).PrecomputedVisibility = 0;
  (this->Force1Mask).VisualizeLightCulling = 0;
  (this->Force1Mask).DistanceCulledPrimitives = 0;
  (this->Force1Mask).StereoRendering = 0;
  (this->Force1Mask).HMDDistortion = 0;
  (this->Force1Mask).HighResScreenshotMask = 0;
  (this->Force1Mask).Rendering = 0;
  (this->Force1Mask).TextRender = 0;
  (this->Force1Mask).CameraSafeFrames = 0;
  (this->Force1Mask).CameraAspectRatioBars = 0;
  (this->Force1Mask).Cloud = 0;
  (this->Force1Mask).Atmosphere = 0;
  (this->Force1Mask).PostProcessMaterial = 0;
  (this->Force1Mask).LightShafts = 0;
  (this->Force1Mask).CollisionPawn = 0;
  (this->Force1Mask).CollisionVisibility = 0;
  (this->Force1Mask).Collision = 0;
  (this->Force1Mask).BSP = 0;
  (this->Force1Mask).ActorColoration = 0;
  (this->Force1Mask).Game = 0;
  (this->Force1Mask).Volumes = 0;
  (this->Force1Mask).Fog = 0;
  (this->Force1Mask).LightRadius = 0;
  (this->Force1Mask).Landscape = 0;
  (this->Force1Mask).StaticMeshes = 0;
  (this->Force1Mask).Materials = 0;
  (this->Force1Mask).Wireframe = 0;
  *(undefined8 *)&(this->Force1Mask).field_0x18 = 0;
  if (iVar5 != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceCount == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SystemSettings.cpp"
                       ,0x77,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSystemSettings *)(*pcVar2)();
      return pFVar6;
    }
  }
  return this;
}

// ApplyOverrides @ 14881f2c0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FSystemSettings::ApplyOverrides(FSystemSettings *this)

{
  longlong lVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EConsoleVariableFlags EVar5;
  wchar_t *pwVar6;
  IConsoleManager *pIVar7;
  
  pTVar3 = CVarUseMaxQualityMode.Ref;
  EVar5 = ECVF_SetByMask;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar3->ShadowedValue[0] != 0) {
    EVar5 = (**(code **)(*(longlong *)CVarUseMaxQualityMode._padding_ + 0x18))();
    EVar5 = EVar5 & ECVF_SetByMask;
  }
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar6,L"MAXQUALITYMODE");
  if (bVar4) {
    EVar5 = ECVF_SetByCommandline;
  }
  else if (EVar5 == ECVF_SetByMask) {
    return;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.MinResolution",1);
    _Init_thread_footer(&::_TSS0);
  }
  IConsoleVariable::Set<int>(::CVar,0x10,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.FadeResolution",1);
    _Init_thread_footer(&::_TSS1);
  }
  IConsoleVariable::Set<int>(::CVar,1,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.MinPreShadowResolution",1);
    _Init_thread_footer(&::_TSS2);
  }
  IConsoleVariable::Set<int>(::CVar,0x10,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.PreShadowFadeResolution",1);
    _Init_thread_footer(&::_TSS3);
  }
  IConsoleVariable::Set<int>(::CVar,1,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.TexelsPerPixel",1);
    _Init_thread_footer(&::_TSS4);
  }
  IConsoleVariable::Set<float>(::CVar,__real_40800000,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.PreShadowResolutionFactor",1)
    ;
    _Init_thread_footer(&::_TSS5);
  }
  IConsoleVariable::Set<float>(::CVar,__real_3f800000,EVar5,(FName)0x0);
  return;
}

// CVarSink @ 148824060

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FSystemSettings::CVarSink(FSystemSettings *this)

{
  longlong lVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EConsoleVariableFlags EVar5;
  wchar_t *pwVar6;
  IConsoleManager *pIVar7;
  
  pTVar3 = CVarUseMaxQualityMode.Ref;
  EVar5 = ECVF_SetByMask;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar3->ShadowedValue[0] != 0) {
    EVar5 = (**(code **)(*(longlong *)CVarUseMaxQualityMode._padding_ + 0x18))();
    EVar5 = EVar5 & ECVF_SetByMask;
  }
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar6,L"MAXQUALITYMODE");
  if (bVar4) {
    EVar5 = ECVF_SetByCommandline;
  }
  else if (EVar5 == ECVF_SetByMask) {
    return;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.MinResolution",1);
    _Init_thread_footer(&::_TSS0);
  }
  IConsoleVariable::Set<int>(::CVar,0x10,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.FadeResolution",1);
    _Init_thread_footer(&::_TSS1);
  }
  IConsoleVariable::Set<int>(::CVar,1,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.MinPreShadowResolution",1);
    _Init_thread_footer(&::_TSS2);
  }
  IConsoleVariable::Set<int>(::CVar,0x10,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.PreShadowFadeResolution",1);
    _Init_thread_footer(&::_TSS3);
  }
  IConsoleVariable::Set<int>(::CVar,1,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.TexelsPerPixel",1);
    _Init_thread_footer(&::_TSS4);
  }
  IConsoleVariable::Set<float>(::CVar,__real_40800000,EVar5,(FName)0x0);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    pIVar7 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Shadow.PreShadowResolutionFactor",1)
    ;
    _Init_thread_footer(&::_TSS5);
  }
  IConsoleVariable::Set<float>(::CVar,__real_3f800000,EVar5,(FName)0x0);
  return;
}

// Exec @ 1488354b0

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
FSystemSettings::Exec(FSystemSettings *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// Initialize @ 148846fa0

/* WARNING: Removing unreachable block (ram,0x000148846fd5) */
/* WARNING: Removing unreachable block (ram,0x000148846ffa) */
/* WARNING: Removing unreachable block (ram,0x000148847044) */
/* WARNING: Removing unreachable block (ram,0x000148847069) */
/* WARNING: Removing unreachable block (ram,0x000148847013) */
/* WARNING: Removing unreachable block (ram,0x000148847038) */

void __thiscall FSystemSettings::Initialize(FSystemSettings *this,bool param_1)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  int local_res8 [2];
  FSystemSettingsData local_res10 [8];
  undefined8 local_res18;
  FIterSink local_res20;
  undefined1 local_a8 [16];
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  local_res18 = 0;
  local_res20.This = this;
  FEngineShowFlags::
  IterateAllFlags<_FSystemSettings::RegisterShowFlagConsoleVariables_::__l2::FIterSink>
            (&local_res20);
  pwVar4 = GetSectionName(false);
  FSystemSettingsData::LoadFromIni(local_res10,pwVar4,&GEngineIni,false,(bool *)0x0);
  this->bIsEditor = param_1;
  pwVar4 = GetSectionName(param_1);
  FSystemSettingsData::LoadFromIni
            ((FSystemSettingsData *)&this->_padding_,pwVar4,&GEngineIni,true,(bool *)0x0);
  ApplyOverrides(this);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = IConsoleManager::Singleton;
  uStack_90 = 0;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x60);
  local_98 = CVarSink;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_58);
  local_40 = &local_80;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    puVar5[4] = local_98;
    puVar5[5] = CONCAT44(uStack_8c,uStack_90);
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSystemSettings____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = this;
    if ((puVar5[4] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  (*pcVar1)(pIVar2,local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  local_res8[0] = 7;
  FConfigCacheIni::GetInt
            (GConfig,L"TextureStreaming",L"MinTextureResidentMipCount",local_res8,&GEngineIni);
  UTexture::SetMinTextureResidentMipCount(local_res8[0]);
  return;
}

// LoadFromIni @ 1488485e0

void __thiscall FSystemSettings::LoadFromIni(FSystemSettings *this)

{
  wchar_t *pwVar1;
  
  pwVar1 = GetSectionName(this->bIsEditor);
  FSystemSettingsData::LoadFromIni
            ((FSystemSettingsData *)&this->_padding_,pwVar1,&GEngineIni,true,(bool *)0x0);
  return;
}

// RegisterShowFlagConsoleVariables @ 148850c90

void __thiscall FSystemSettings::RegisterShowFlagConsoleVariables(FSystemSettings *this)

{
  FIterSink local_res8 [4];
  
  local_res8[0].This = this;
  FEngineShowFlags::
  IterateAllFlags<_FSystemSettings::RegisterShowFlagConsoleVariables_::__l2::FIterSink>(local_res8);
  return;
}

