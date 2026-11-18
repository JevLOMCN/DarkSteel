// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FWN_SceneTexturesCaptureController @ 14890a370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWN_SceneTexturesCaptureController * __thiscall
FWN_SceneTexturesCaptureController::FWN_SceneTexturesCaptureController
          (FWN_SceneTexturesCaptureController *this)

{
  FEngineShowFlags *pFVar1;
  undefined1 *puVar2;
  FEngineShowFlags *pFVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->bOverrideEngineShowFalgs = false;
  (this->EngineShowFlags).CustomShowFlags.NumBits = 0;
  (this->EngineShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)&this->EngineShowFlags = uVar6;
  *(undefined8 *)&(this->EngineShowFlags).field_0x8 = uVar7;
  *(undefined8 *)&(this->EngineShowFlags).field_0x10 = uVar6;
  *(undefined8 *)&(this->EngineShowFlags).field_0x18 = uVar7;
  FEngineShowFlags::InitCustomShowFlags(&this->EngineShowFlags,ESFIM_Game);
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
  pFVar3 = &this->EngineShowFlags;
  pFVar3->VisualizeHDR = 0;
  pFVar3->VisualizeVirtualShadowMap = 0;
  pFVar3->VisualizeGroom = 0;
  pFVar3->VisualizeSubstrate = 0;
  pFVar3->VisualizeLumen = 0;
  pFVar3->VisualizeNanite = 0;
  pFVar3->VisualizeBuffer = 0;
  pFVar3->MaterialAmbientOcclusion = 1;
  pFVar3->MaterialNormal = 1;
  pFVar3->ReflectionOverride = 0;
  pFVar3->LightingOnlyOverride = 0;
  pFVar3->OverrideDiffuseAndSpecular = 0;
  pFVar3->VisualizeLocalExposure = 0;
  pFVar3->VisualizeLocalFogVolumes = 0;
  pFVar3->VisualizeSkyLightIlluminance = 0;
  (this->EngineShowFlags).StereoMotionVectors = 0;
  (this->EngineShowFlags).RandomColor = 0;
  (this->EngineShowFlags).FrontBackFace = 0;
  (this->EngineShowFlags).Zebra = 0;
  (this->EngineShowFlags).Clay = 0;
  puVar4 = &(this->EngineShowFlags).field_0x10;
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
  this->MaxTime = 1.7976931348623157e+308;
  this->StartTime = 0.0;
  this->LastTime = 0.0;
  this->Interval = 0.0;
  this->Count = 0;
  (this->BaseDirPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDirPath).Data.ArrayNum = 0;
  (this->BaseDirPath).Data.ArrayMax = 0;
  this->MaxCount = 0x7fffffff;
  return this;
}

