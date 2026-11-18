// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FScenePrimitiveRenderingContext @ 1454d17f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FScenePrimitiveRenderingContext * __thiscall
FScenePrimitiveRenderingContext::FScenePrimitiveRenderingContext
          (FScenePrimitiveRenderingContext *this,FRDGBuilder *param_1,FScene *param_2,
          FSceneViewFamily *param_3)

{
  FSceneRendererBase *pFVar1;
  FRDGBuilder *pFVar2;
  FEngineShowFlags *pFVar3;
  FSceneUniformBufferBlackboardStruct *pFVar4;
  undefined1 auStack_f8 [48];
  FEngineShowFlags local_c8;
  FEngineShowFlags local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar1 = &this->Renderer;
  this->GraphBuilder = param_1;
  this->_padding_ = (longlong)&___7FScenePrimitiveRenderingContext__6B_;
  (this->Renderer).Scene = (FScene *)0x0;
  pFVar1->_padding_ = (longlong)&___7FSceneRendererBase__6B_;
  (this->Renderer).Views.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Renderer).Views.ArrayNum = 0;
  (this->Renderer).Views.ArrayMax = 0;
  FSceneUniformBuffer::FSceneUniformBuffer(&(this->Renderer).SceneUniforms);
  (this->Renderer).SceneExtensionsRenderers.bValidateCallbacks = false;
  (this->Renderer).SceneExtensionsRenderers.CurrentCallbackStage = Begin;
  (this->Renderer).SceneExtensionsRenderers.SceneRenderer = (FSceneRendererBase *)0x0;
  *(undefined8 *)&(this->Renderer).SceneExtensionsRenderers.Renderers = 0;
  *(undefined8 *)&(this->Renderer).SceneExtensionsRenderers.Renderers.field_0x8 = 0;
  *(undefined8 *)&(this->Renderer).SceneExtensionsRenderers.Renderers.field_0x20 = 0;
  *(undefined4 *)&(this->Renderer).SceneExtensionsRenderers.Renderers.field_0x28 = 0;
  *(undefined4 *)&(this->Renderer).SceneExtensionsRenderers.Renderers.field_0x2c = 0x80;
  *(undefined4 *)&(this->Renderer).SceneExtensionsRenderers.Renderers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Renderer).SceneExtensionsRenderers.Renderers.field_0x34 = 0;
  this->GPUScene = &param_2->GPUScene;
  (this->GPUSceneDynamicContext).DymamicPrimitiveUploadDataMutex.State = (atomic<unsigned_char>)0x0;
  (this->GPUSceneDynamicContext).DymamicPrimitiveUploadData.AllocatorInstance.SecondaryData.Data =
       (FUploadData **)0x0;
  (this->GPUSceneDynamicContext).DymamicPrimitiveUploadData.ArrayNum = 0;
  (this->GPUSceneDynamicContext).DymamicPrimitiveUploadData.ArrayMax = 0x80;
  (this->GPUSceneDynamicContext).GPUScene = &param_2->GPUScene;
  this->ViewFamily = param_3;
  (this->Renderer).Scene = param_2;
  if (param_3 == (FSceneViewFamily *)0x0) {
    local_c8.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c8._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_c8._8_8_ = _UNK_15060db28;
    local_c8.CustomShowFlags.NumBits = 0;
    local_c8._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_c8._24_8_ = _UNK_15060db28;
    local_c8.CustomShowFlags.MaxBits = 0x80;
    FEngineShowFlags::InitCustomShowFlags(&local_c8,ESFIM_Game);
    local_c8.Pivot = 0;
    local_c8.LightInfluences = 0;
    local_c8.HitProxies = 0;
    local_c8.Bounds = 0;
    local_c8.ModeWidgets = 0;
    local_c8.EditingLevelInstance = 0;
    local_c8.Selection = 0;
    local_c8.Splines = 0;
    local_c8.Cover = 0;
    local_c8.MeshEdges = 0;
    local_c8.Snap = 0;
    local_c8.Grid = 0;
    local_c8.LargeVertices = 0;
    local_c8.Editor = 0;
    local_c8.Brushes = 0;
    local_c8.BSPSplit = 0;
    local_c8.AudioRadius = 0;
    local_c8.CameraFrustums = 0;
    local_c8.MassProperties = 0;
    local_c8.Constraints = 0;
    local_c8.StreamingBounds = 0;
    local_c8.LightMapDensity = 0;
    local_c8.StationaryLightOverlap = 0;
    local_c8.ShaderComplexity = 0;
    local_c8.LightComplexity = 0;
    local_c8.VisualizeInstanceUpdates = 0;
    local_c8.HISMCClusterTree = 0;
    local_c8.HISMCOcclusionBounds = 0;
    local_c8.Navigation = 0;
    local_c8.DebugAI = 0;
    local_c8.VisualizeSSS = 0;
    local_c8.SelectionOutline = 0;
    local_c8.DisableOcclusionQueries = 0;
    local_c8.VisualizeInstanceOcclusionQueries = 0;
    local_c8.OcclusionMeshes = 0;
    local_c8.VREditing = 0;
    local_c8.ServerDrawDebug = 0;
    local_c8.Bones = 0;
    local_c8.VisualizeVirtualTexture = 0;
    local_c8.RequiredTextureResolution = 0;
    local_c8.OutputMaterialTextureScales = 0;
    local_c8.MaterialTextureScaleAccuracy = 0;
    local_c8.MeshUVDensityAccuracy = 0;
    local_c8.PrimitiveDistanceAccuracy = 0;
    local_c8.ShaderComplexityWithQuadOverdraw = 0;
    local_c8.QuadOverdraw = 0;
    local_c8.HLODColoration = 0;
    local_c8.LODColoration = 0;
    local_c8.VisualizeShadingModels = 0;
    local_c8.VisualizeSSR = 0;
    local_c8.VisualizeLightingOnProbes = 0;
    local_c8.VisualizeGlobalDistanceField = 0;
    local_c8.PhysicsField = 0;
    local_c8.VisualizeMeshDistanceFields = 0;
    local_c8.VisualizeDistanceFieldAO = 0;
    local_c8.VolumeLightingSamples = 0;
    local_c8.VisualizeVolumetricLightmap = 0;
    local_c8.PrecomputedVisibilityCells = 0;
    local_c8.VisualizeLightCulling = 0;
    local_c8.DistanceCulledPrimitives = 0;
    local_c8.StereoRendering = 0;
    local_c8.HMDDistortion = 0;
    local_c8.HighResScreenshotMask = 0;
    local_c8.CameraSafeFrames = 0;
    local_c8.CameraAspectRatioBars = 0;
    local_c8.CollisionPawn = 0;
    local_c8.CollisionVisibility = 0;
    local_c8.Collision = 0;
    local_c8.ActorColoration = 0;
    local_c8.Game = 1;
    local_c8.Volumes = 0;
    local_c8.LightRadius = 0;
    local_c8.Wireframe = 0;
    local_c8.ShadowFrustums = 0;
    local_c8.VisualizeOutOfBoundsPixels = 0;
    local_c8.VisualizeTSR = 0;
    local_c8.VisualizeTemporalUpscaler = 0;
    local_c8.VisualizeReprojection = 0;
    local_c8.VisualizeMotionVectors = 0;
    local_c8.VisualizeMotionBlur = 0;
    local_c8.ScreenPercentage = 1;
    local_c8.PhysicalMaterialMasks = 0;
    local_c8.VertexColors = 0;
    local_c8.VisualizeDOF = 0;
    local_c8.TestImage = 0;
    local_c8.OpaqueCompositeEditorPrimitives = 0;
    local_c8.CompositeEditorPrimitives = 0;
    local_c8.CompositeDebugPrimitives = 1;
    local_c8.MotionBlur = 1;
    local_c8.GBufferHints = 0;
    local_c8.VectorFields = 0;
    local_c8.VisualizeVirtualShadowMap = 0;
    local_c8.VisualizeGroom = 0;
    local_c8.VisualizeSubstrate = 0;
    local_c8.VisualizeLumen = 0;
    local_c8.VisualizeNanite = 0;
    local_c8.VisualizeBuffer = 0;
    local_c8.MaterialAmbientOcclusion = 1;
    local_c8.MaterialNormal = 1;
    local_c8.ReflectionOverride = 0;
    local_c8.LightingOnlyOverride = 0;
    local_c8.OverrideDiffuseAndSpecular = 0;
    local_c8.VisualizeLocalExposure = 0;
    local_c8.VisualizeLocalFogVolumes = 0;
    local_c8.VisualizeSkyLightIlluminance = 0;
    local_c8.VisualizeHDR = 0;
    local_c8.RandomColor = 0;
    local_c8.FrontBackFace = 0;
    local_c8.Zebra = 0;
    local_c8.Clay = 0;
    local_c8.StereoMotionVectors = 0;
    local_c8.AlphaInvert = 0;
    local_c8.SceneCaptureCopySceneDepth = 1;
    local_c8.VisualizeShadowCasters = 0;
    local_c8.VisualizeLWCComplexity = 0;
    local_c8.VisualizeGPUSkinCache = 0;
    local_c8.LumenShortRangeAmbientOcclusion = 1;
    local_c8.LumenSecondaryBounces = 1;
    local_c8.LumenFarFieldTraces = 1;
    local_c8.LumenGlobalTraces = 1;
    local_c8.LumenDetailTraces = 1;
    local_c8.LumenScreenTraces = 1;
    local_c8.DebugDrawDistantVirtualSMLights = 0;
    local_c8.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
    local_c8.VisualizeVolumetricCloudConservativeDensity = 0;
    local_c8.VirtualTexturePrimitives = 0;
    local_c8.VisualizePostProcessStack = 0;
    local_c8.VisualizeCalibrationCustom = 0;
    local_c8.VisualizeCalibrationGrayscale = 0;
    local_c8.VisualizeCalibrationColor = 0;
    local_c8.VisualizeLightFunctionAtlas = 0;
    local_c8.VisualizeSkyAtmosphere = 0;
    local_c8.RayTracingDebug = 0;
    local_c8.PathTracing = 0;
    FSceneExtensionsRenderers::Begin
              (&(this->Renderer).SceneExtensionsRenderers,pFVar1,&local_c8,false);
    local_88.CustomShowFlags.AllocatorInstance.SecondaryData =
         local_c8.CustomShowFlags.AllocatorInstance.SecondaryData;
  }
  else {
    pFVar3 = FEngineShowFlags::FEngineShowFlags(&local_88,&param_3->EngineShowFlags);
    FSceneExtensionsRenderers::Begin(&(this->Renderer).SceneExtensionsRenderers,pFVar1,pFVar3,false)
    ;
  }
  if (local_88.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_88.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  if (this->ViewFamily != (FSceneViewFamily *)0x0) {
    this->ViewFamily->SceneRenderer = (ISceneRenderer *)pFVar1;
  }
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,this->GraphBuilder,0);
  FGPUScene::BeginRender(this->GPUScene,this->GraphBuilder,&this->GPUSceneDynamicContext);
  FGPUScene::FillSceneUniformBuffer
            (this->GPUScene,this->GraphBuilder,&(this->Renderer).SceneUniforms);
  FSceneExtensionsRenderers::UpdateSceneUniformBuffer
            (&(this->Renderer).SceneExtensionsRenderers,this->GraphBuilder,
             &(this->Renderer).SceneUniforms);
  pFVar2 = this->GraphBuilder;
  pFVar4 = FRDGBlackboard::GetMutable<FSceneUniformBufferBlackboardStruct>(&pFVar2->Blackboard);
  if (pFVar4 == (FSceneUniformBufferBlackboardStruct *)0x0) {
    pFVar4 = FRDGBlackboard::Create<FSceneUniformBufferBlackboardStruct>(&pFVar2->Blackboard);
  }
  pFVar4->SceneRenderer = pFVar1;
  return this;
}

// ~FScenePrimitiveRenderingContext @ 1454d72b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FScenePrimitiveRenderingContext::~FScenePrimitiveRenderingContext
          (FScenePrimitiveRenderingContext *this)

{
  FRDGBuilder *pFVar1;
  FSceneUniformBufferBlackboardStruct *pFVar2;
  
  pFVar1 = this->GraphBuilder;
  this->_padding_ = (longlong)&___7FScenePrimitiveRenderingContext__6B_;
  pFVar2 = FRDGBlackboard::GetMutable<FSceneUniformBufferBlackboardStruct>(&pFVar1->Blackboard);
  if (pFVar2 == (FSceneUniformBufferBlackboardStruct *)0x0) {
    pFVar2 = FRDGBlackboard::Create<FSceneUniformBufferBlackboardStruct>(&pFVar1->Blackboard);
  }
  pFVar2->SceneRenderer = (FSceneRendererBase *)0x0;
  FGPUScene::EndRender(this->GPUScene);
  if (this->ViewFamily != (FSceneViewFamily *)0x0) {
    this->ViewFamily->SceneRenderer = (ISceneRenderer *)0x0;
  }
  FGPUSceneDynamicContext::~FGPUSceneDynamicContext(&this->GPUSceneDynamicContext);
  FSceneRendererBase::~FSceneRendererBase(&this->Renderer);
  this->_padding_ = (longlong)&___7IScenePrimitiveRenderingContext__6B_;
  return;
}

// GetSceneRenderer @ 1454f8800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ISceneRenderer * __thiscall
FScenePrimitiveRenderingContext::GetSceneRenderer(FScenePrimitiveRenderingContext *this)

{
  return (ISceneRenderer *)&this->Renderer;
}

