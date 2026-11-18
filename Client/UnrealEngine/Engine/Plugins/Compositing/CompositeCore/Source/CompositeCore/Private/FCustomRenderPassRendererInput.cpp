// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 1

// FCustomRenderPassRendererInput @ 14ea75e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCustomRenderPassRendererInput * __thiscall
FSceneInterface::FCustomRenderPassRendererInput::FCustomRenderPassRendererInput
          (FCustomRenderPassRendererInput *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = _UNK_15060db28;
  uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
  this_00 = &this->EngineShowFlags;
  *(undefined8 *)&(this->HiddenPrimitives).Elements = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x34 = 0;
  (this->HiddenPrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HiddenPrimitives).HashSize = 0;
  *(undefined8 *)&(this->ShowOnlyPrimitives).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
  (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
  (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->EngineShowFlags).CustomShowFlags.NumBits = 0;
  (this->EngineShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)this_00 = uVar4;
  *(undefined8 *)&(this->EngineShowFlags).field_0x8 = uVar5;
  *(undefined8 *)&(this->EngineShowFlags).field_0x10 = uVar4;
  *(undefined8 *)&(this->EngineShowFlags).field_0x18 = uVar5;
  FEngineShowFlags::InitCustomShowFlags(this_00,ESFIM_Game);
  (this->EngineShowFlags).VectorFields = 0;
  (this->EngineShowFlags).VisualizeOutOfBoundsPixels = 0;
  (this->EngineShowFlags).VisualizeTSR = 0;
  (this->EngineShowFlags).VisualizeTemporalUpscaler = 0;
  (this->EngineShowFlags).VisualizeReprojection = 0;
  (this->EngineShowFlags).VisualizeMotionVectors = 0;
  (this->EngineShowFlags).VisualizeMotionBlur = 0;
  (this->EngineShowFlags).PhysicalMaterialMasks = 0;
  (this->EngineShowFlags).VertexColors = 0;
  (this->EngineShowFlags).VisualizeDOF = 0;
  (this->EngineShowFlags).TestImage = 0;
  (this->EngineShowFlags).OpaqueCompositeEditorPrimitives = 0;
  (this->EngineShowFlags).CompositeEditorPrimitives = 0;
  (this->EngineShowFlags).GBufferHints = 0;
  (this->EngineShowFlags).PathTracing = 0;
  (this->EngineShowFlags).AlphaInvert = 0;
  (this->EngineShowFlags).SceneCaptureCopySceneDepth = 0;
  (this->EngineShowFlags).VisualizeShadowCasters = 0;
  (this->EngineShowFlags).VisualizeLWCComplexity = 0;
  (this->EngineShowFlags).VisualizeGPUSkinCache = 0;
  (this->EngineShowFlags).LumenShortRangeAmbientOcclusion = 0;
  (this->EngineShowFlags).LumenSecondaryBounces = 0;
  (this->EngineShowFlags).LumenFarFieldTraces = 0;
  (this->EngineShowFlags).LumenGlobalTraces = 0;
  (this->EngineShowFlags).LumenDetailTraces = 0;
  (this->EngineShowFlags).LumenScreenTraces = 0;
  (this->EngineShowFlags).DebugDrawDistantVirtualSMLights = 0;
  (this->EngineShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  (this->EngineShowFlags).VisualizeVolumetricCloudConservativeDensity = 0;
  (this->EngineShowFlags).VirtualTexturePrimitives = 0;
  (this->EngineShowFlags).VisualizePostProcessStack = 0;
  (this->EngineShowFlags).VisualizeCalibrationCustom = 0;
  (this->EngineShowFlags).VisualizeCalibrationGrayscale = 0;
  (this->EngineShowFlags).VisualizeCalibrationColor = 0;
  (this->EngineShowFlags).VisualizeLightFunctionAtlas = 0;
  (this->EngineShowFlags).VisualizeSkyAtmosphere = 0;
  (this->EngineShowFlags).RayTracingDebug = 0;
  (this->EngineShowFlags).LightComplexity = 0;
  (this->EngineShowFlags).Pivot = 0;
  (this->EngineShowFlags).LightInfluences = 0;
  (this->EngineShowFlags).HitProxies = 0;
  (this->EngineShowFlags).Bounds = 0;
  (this->EngineShowFlags).ModeWidgets = 0;
  (this->EngineShowFlags).EditingLevelInstance = 0;
  (this->EngineShowFlags).Selection = 0;
  (this->EngineShowFlags).Splines = 0;
  (this->EngineShowFlags).Cover = 0;
  (this->EngineShowFlags).MeshEdges = 0;
  (this->EngineShowFlags).Snap = 0;
  (this->EngineShowFlags).Grid = 0;
  (this->EngineShowFlags).LargeVertices = 0;
  (this->EngineShowFlags).Editor = 0;
  (this->EngineShowFlags).Brushes = 0;
  (this->EngineShowFlags).BSPSplit = 0;
  (this->EngineShowFlags).AudioRadius = 0;
  (this->EngineShowFlags).CameraFrustums = 0;
  (this->EngineShowFlags).MassProperties = 0;
  (this->EngineShowFlags).Constraints = 0;
  (this->EngineShowFlags).StreamingBounds = 0;
  (this->EngineShowFlags).LightMapDensity = 0;
  (this->EngineShowFlags).StationaryLightOverlap = 0;
  (this->EngineShowFlags).ShaderComplexity = 0;
  (this->EngineShowFlags).SelectionOutline = 0;
  (this->EngineShowFlags).VisualizeInstanceUpdates = 0;
  (this->EngineShowFlags).HISMCClusterTree = 0;
  (this->EngineShowFlags).HISMCOcclusionBounds = 0;
  (this->EngineShowFlags).Navigation = 0;
  (this->EngineShowFlags).DebugAI = 0;
  (this->EngineShowFlags).VisualizeSSS = 0;
  (this->EngineShowFlags).MotionBlur = 1;
  (this->EngineShowFlags).ScreenPercentage = 1;
  (this->EngineShowFlags).CompositeDebugPrimitives = 1;
  (this->EngineShowFlags).VolumeLightingSamples = 0;
  (this->EngineShowFlags).DisableOcclusionQueries = 0;
  (this->EngineShowFlags).VisualizeInstanceOcclusionQueries = 0;
  (this->EngineShowFlags).OcclusionMeshes = 0;
  (this->EngineShowFlags).VREditing = 0;
  (this->EngineShowFlags).ServerDrawDebug = 0;
  (this->EngineShowFlags).Bones = 0;
  (this->EngineShowFlags).VisualizeVirtualTexture = 0;
  (this->EngineShowFlags).RequiredTextureResolution = 0;
  (this->EngineShowFlags).OutputMaterialTextureScales = 0;
  (this->EngineShowFlags).MaterialTextureScaleAccuracy = 0;
  (this->EngineShowFlags).MeshUVDensityAccuracy = 0;
  (this->EngineShowFlags).PrimitiveDistanceAccuracy = 0;
  (this->EngineShowFlags).ShaderComplexityWithQuadOverdraw = 0;
  (this->EngineShowFlags).QuadOverdraw = 0;
  (this->EngineShowFlags).HLODColoration = 0;
  (this->EngineShowFlags).LODColoration = 0;
  (this->EngineShowFlags).VisualizeShadingModels = 0;
  (this->EngineShowFlags).VisualizeSSR = 0;
  (this->EngineShowFlags).VisualizeLightingOnProbes = 0;
  (this->EngineShowFlags).VisualizeGlobalDistanceField = 0;
  (this->EngineShowFlags).PhysicsField = 0;
  (this->EngineShowFlags).VisualizeMeshDistanceFields = 0;
  (this->EngineShowFlags).VisualizeDistanceFieldAO = 0;
  (this->EngineShowFlags).LumenScreenTraces = 1;
  (this->EngineShowFlags).SceneCaptureCopySceneDepth = 1;
  (this->EngineShowFlags).LumenShortRangeAmbientOcclusion = 1;
  (this->EngineShowFlags).LumenSecondaryBounces = 1;
  (this->EngineShowFlags).LumenFarFieldTraces = 1;
  (this->EngineShowFlags).LumenGlobalTraces = 1;
  (this->EngineShowFlags).LumenDetailTraces = 1;
  (this->EngineShowFlags).StereoMotionVectors = 0;
  (this->EngineShowFlags).RandomColor = 0;
  (this->EngineShowFlags).FrontBackFace = 0;
  (this->EngineShowFlags).Zebra = 0;
  (this->EngineShowFlags).Clay = 0;
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
  puVar2 = &(this->EngineShowFlags).field_0x10;
  (this->EngineShowFlags).ShadowFrustums = 0;
  (this->EngineShowFlags).VisualizeVolumetricLightmap = 0;
  (this->EngineShowFlags).PrecomputedVisibilityCells = 0;
  (this->EngineShowFlags).VisualizeLightCulling = 0;
  (this->EngineShowFlags).DistanceCulledPrimitives = 0;
  (this->EngineShowFlags).StereoRendering = 0;
  (this->EngineShowFlags).HMDDistortion = 0;
  (this->EngineShowFlags).HighResScreenshotMask = 0;
  (this->EngineShowFlags).CameraSafeFrames = 0;
  (this->EngineShowFlags).CameraAspectRatioBars = 0;
  (this->EngineShowFlags).CollisionPawn = 0;
  (this->EngineShowFlags).CollisionVisibility = 0;
  (this->EngineShowFlags).Collision = 0;
  (this->EngineShowFlags).ActorColoration = 0;
  (this->EngineShowFlags).Game = 1;
  (this->EngineShowFlags).Volumes = 0;
  (this->EngineShowFlags).LightRadius = 0;
  (this->EngineShowFlags).Wireframe = 0;
  FSceneViewOwner::FSceneViewOwner(&this->ViewActor,(AActor *)0x0);
  this_00->PostProcessing = 0;
  (this->EngineShowFlags).Refraction = 0;
  (this->EngineShowFlags).LightFunctions = 0;
  (this->EngineShowFlags).DynamicShadows = 0;
  (this->EngineShowFlags).Lighting = 0;
  (this->EngineShowFlags).UnlitViewmode = 0;
  (this->EngineShowFlags).UnlitRichView = 0;
  this->ViewStateInterface = (FSceneViewStateInterface *)0x0;
  this->PostVolumeUserFlags = 0;
  this->bIsSceneCapture = false;
  this->bUseMainViewFamilyShowFlags = false;
  this->bOverridesPostVolumeUserFlags = false;
  this->CustomRenderPass = (FCustomRenderPassBase *)0x0;
  (this->EngineShowFlags).Atmosphere = 0;
  return this;
}

