// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 19

// StaticClass @ 14dcf59e0

UClass * __cdecl UMovieGraphShowFlags::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphShowFlags.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphShowFlags",
               &Z_Registration_Info_UClass_UMovieGraphShowFlags.InnerSingleton,
               StaticRegisterNativesUMovieGraphShowFlags,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphShowFlags>,
               InternalVTableHelperCtorCaller<UMovieGraphShowFlags>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphShowFlags.InnerSingleton;
}

// UMovieGraphShowFlags @ 14dd0b640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UMovieGraphShowFlags * __thiscall
UMovieGraphShowFlags::UMovieGraphShowFlags(UMovieGraphShowFlags *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &this->ShowFlags;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  *(undefined8 *)&(this->OverriddenShowFlags).Elements = 0;
  *(undefined8 *)&(this->OverriddenShowFlags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverriddenShowFlags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x34 = 0;
  (this->OverriddenShowFlags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverriddenShowFlags).HashSize = 0;
  *(undefined8 *)&this->ShowFlagEnableState = 0;
  *(undefined8 *)&(this->ShowFlagEnableState).field_0x8 = 0;
  *(undefined8 *)&(this->ShowFlagEnableState).field_0x20 = 0;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x28 = 0;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x34 = 0;
  *(undefined8 *)&(this->ShowFlagEnableState).field_0x40 = 0;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x48 = 0;
  (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ShowFlags).CustomShowFlags.NumBits = 0;
  (this->ShowFlags).CustomShowFlags.MaxBits = 0x80;
  EnsureRetrievingVTablePtrDuringCtor(L"FEngineShowFlags()");
  uVar5 = _UNK_15060db28;
  uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)this_00 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)&(this->ShowFlags).field_0x8 = uVar5;
  *(undefined8 *)&(this->ShowFlags).field_0x10 = uVar4;
  *(undefined8 *)&(this->ShowFlags).field_0x18 = uVar5;
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
  return this;
}

// UMovieGraphShowFlags @ 14dd0b780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UMovieGraphShowFlags * __thiscall
UMovieGraphShowFlags::UMovieGraphShowFlags(UMovieGraphShowFlags *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  UObject::UObject((UObject *)this);
  uVar5 = _UNK_15060db28;
  uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
  this_00 = &this->ShowFlags;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  *(undefined8 *)&(this->OverriddenShowFlags).Elements = 0;
  *(undefined8 *)&(this->OverriddenShowFlags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverriddenShowFlags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverriddenShowFlags).Elements.field_0x34 = 0;
  (this->OverriddenShowFlags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverriddenShowFlags).HashSize = 0;
  *(undefined8 *)&this->ShowFlagEnableState = 0;
  *(undefined8 *)&(this->ShowFlagEnableState).field_0x8 = 0;
  *(undefined8 *)&(this->ShowFlagEnableState).field_0x20 = 0;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x28 = 0;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x34 = 0;
  *(undefined8 *)&(this->ShowFlagEnableState).field_0x40 = 0;
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x48 = 0;
  (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ShowFlags).CustomShowFlags.NumBits = 0;
  (this->ShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)this_00 = uVar4;
  *(undefined8 *)&(this->ShowFlags).field_0x8 = uVar5;
  *(undefined8 *)&(this->ShowFlags).field_0x10 = uVar4;
  *(undefined8 *)&(this->ShowFlags).field_0x18 = uVar5;
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
  CopyOverridesToShowFlags(this,this_00);
  return this;
}

// ~UMovieGraphShowFlags @ 14dd0de70

void __thiscall UMovieGraphShowFlags::~UMovieGraphShowFlags(UMovieGraphShowFlags *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  FVar1 = (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->ShowFlagEnableState).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ShowFlagEnableState).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShowFlagEnableState);
  (this->OverriddenShowFlags).HashSize = 0;
  FVar3 = (this->OverriddenShowFlags).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OverriddenShowFlags).Elements);
  this->_padding_ = (longlong)&___7IMovieGraphTraversableObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyDefaultShowFlagValue @ 14dd13680

void __thiscall
UMovieGraphShowFlags::ApplyDefaultShowFlagValue
          (UMovieGraphShowFlags *this,uint param_1,bool param_2)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->OverriddenShowFlags).Elements.field_0x8 !=
      *(int *)&(this->OverriddenShowFlags).Elements.field_0x34) {
    FVar3 = (this->OverriddenShowFlags).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->OverriddenShowFlags).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->OverriddenShowFlags).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->OverriddenShowFlags).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) {
          return;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  FEngineShowFlags::SetSingleFlag(&this->ShowFlags,param_1,param_2);
  return;
}

// CopyOverridesToShowFlags @ 14dd19230

void __thiscall
UMovieGraphShowFlags::CopyOverridesToShowFlags(UMovieGraphShowFlags *this,FEngineShowFlags *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FEngineShowFlags *this_00;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FEngineShowFlags *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->OverriddenShowFlags).Elements.field_0x28;
  puVar1 = &(this->OverriddenShowFlags).Elements.field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar8 = *(uint **)&(this->OverriddenShowFlags).Elements.field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)puVar1;
    }
    uVar11 = *puVar8;
    iVar15 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar15 = iVar15 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dd192dd;
      uVar11 = puVar8[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar15;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14dd192dd:
  uVar11 = *(uint *)&(this->OverriddenShowFlags).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OverriddenShowFlags).Elements.field_0x8 -
                       *(int *)&(this->OverriddenShowFlags).Elements.field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = local_res10;
  uVar6 = *(uint *)&(this->OverriddenShowFlags).Elements.field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->OverriddenShowFlags).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dd193db;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14dd193db:
  do {
    if (*(int *)&(this->OverriddenShowFlags).Elements.field_0x8 -
        *(int *)&(this->OverriddenShowFlags).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    uVar6 = *(uint *)(*(longlong *)&(this->OverriddenShowFlags).Elements +
                     (longlong)TStack_60.CurrentBitIndex * 0xc);
    if (*(int *)&(this->ShowFlagEnableState).field_0x8 !=
        *(int *)&(this->ShowFlagEnableState).field_0x34) {
      puVar13 = *(undefined1 **)&(this->ShowFlagEnableState).field_0x40;
      puVar10 = &(this->ShowFlagEnableState).field_0x38;
      if (puVar13 != (undefined1 *)0x0) {
        puVar10 = puVar13;
      }
      uVar16 = *(uint *)(puVar10 +
                        (ulonglong)(*(int *)&(this->ShowFlagEnableState).field_0x48 - 1U & uVar6) *
                        4);
      if (uVar16 != 0xffffffff) {
        do {
          puVar8 = (uint *)((longlong)(int)uVar16 * 0x10 + *(longlong *)&this->ShowFlagEnableState);
          if (*puVar8 == uVar6) {
            puVar14 = puVar8 + 1;
            if (puVar8 == (uint *)0x0) {
              puVar14 = (uint *)0x0;
            }
            if (puVar14 != (uint *)0x0) {
              FEngineShowFlags::SetSingleFlag(this_00,uVar6,SUB41(*puVar14,0));
            }
            break;
          }
          uVar16 = puVar8[2];
        } while (uVar16 != 0xffffffff);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetMergedProperties @ 14dd286d0

/* WARNING: Removing unreachable block (ram,0x00014dd28a3f) */
/* WARNING: Removing unreachable block (ram,0x00014dd28a4e) */

TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphShowFlags::GetMergedProperties
          (UMovieGraphShowFlags *this,
          TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  FScriptContainerElement *local_e8;
  undefined8 local_e0;
  FString local_d8;
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  longlong *local_90;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  
  plVar1 = &this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_c8 = &this->_padding_;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar9 = *(int *)&(this->OverriddenShowFlags).Elements;
  iStack_c0 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  local_a8 = iStack_c0;
  if (iVar9 != 0) {
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = plVar1;
    }
    uVar16 = (uint)*plVar18;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14dd2877d;
      uVar16 = *(uint *)((longlong)plVar18 + lVar12 * 4 + 4);
    }
    uStack_bc = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_ac = local_a8 + -1 + local_res20;
    if (iVar9 < iStack_ac) {
      iStack_ac = iVar9;
    }
  }
LAB_14dd2877d:
  iStack_a0 = (int)this->_padding_ - *(int *)&(this->OverriddenShowFlags).Elements.field_0xc;
  uVar16 = *(uint *)&(this->OverriddenShowFlags).Elements;
  TStack_80._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uStack_b0 = 0xffffffff;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_80._28_4_ = iStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  local_b8 = plVar1;
  iStack_a4 = iStack_ac;
  local_90 = local_c8;
  local_88 = local_c8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  plVar18 = local_90;
  uVar3 = *(uint *)&(this->OverriddenShowFlags).Elements;
  if (uVar16 != uVar3) {
    plVar17 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar17 = plVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)plVar17 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14dd28890;
      uVar16 = *(uint *)((longlong)plVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_98 = (int)lVar12;
    uVar16 = local_98 + -1 + uVar19;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_14dd28890:
  while( true ) {
    plVar17 = local_88;
    if ((int)local_88[1] - *(int *)((longlong)local_88 + 0x34) != (int)uStack_60) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar12 = (longlong)TStack_80.CurrentBitIndex;
    if (((TStack_80.CurrentBitIndex == uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) && (plVar17 == plVar18)
       ) {
      local_res8 = SUB81(this,0);
      AlgoImpl::
      IntroSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,FString>,_UMovieGraphShowFlags::GetMergedProperties_::__l2::<lambda_1>_>_>
                ((TTuple<FString,FString> *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum,local_res8,(<lambda_1> *)local_res18);
      return __return_storage_ptr__;
    }
    lVar4 = *plVar17;
    pFVar11 = FEngineShowFlags::FindNameByIndex(&local_58,*(uint *)(lVar4 + lVar12 * 0xc));
    bVar8 = IsShowFlagEnabled((UMovieGraphShowFlags *)&this[-1].ShowFlags.field_0x18,
                              *(uint *)(lVar4 + lVar12 * 0xc));
    pwVar13 = L"true";
    if (!bVar8) {
      pwVar13 = L"false";
    }
    ::FString::FString(&local_d8,pwVar13);
    local_f8 = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0._0_4_ = (pFVar11->Data).ArrayNum;
    local_f0._4_4_ = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_e8 = local_d8.Data.AllocatorInstance.Data;
    uVar6._0_4_ = local_d8.Data.ArrayNum;
    uVar6._4_4_ = local_d8.Data.ArrayMax;
    local_e0._0_4_ = local_d8.Data.ArrayNum;
    local_e0._4_4_ = local_d8.Data.ArrayMax;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    uVar7 = uVar6;
    if (((pFVar14 <= (FScriptContainerElement *)&local_f8) &&
        (uVar7 = local_e0,
        (FScriptContainerElement *)&local_f8 <
        pFVar14 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) &&
       (local_e0 = uVar6,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), uVar7 = local_e0, bVar8)) break;
    local_e0 = uVar7;
    iVar9 = __return_storage_ptr__->ArrayNum;
    if (iVar9 == __return_storage_ptr__->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar9 + 1;
    pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
    *(undefined8 *)pFVar14 = 0;
    *(FScriptContainerElement **)pFVar14 = local_f8;
    *(undefined4 *)(pFVar14 + 8) = (undefined4)local_f0;
    *(undefined4 *)(pFVar14 + 0xc) = local_f0._4_4_;
    *(undefined8 *)(pFVar14 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar14 + 0x10) = local_e8;
    *(int *)(pFVar14 + 0x18) = (int)local_e0;
    *(int *)(pFVar14 + 0x1c) = local_e0._4_4_;
    local_e0 = 0;
    local_e8 = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_f8 = (FScriptContainerElement *)0x0;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  pcVar5 = (code *)swi(3);
  pTVar10 = (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar10;
}

// GetOverriddenShowFlags @ 14dd2b6a0

TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> * __thiscall
UMovieGraphShowFlags::GetOverriddenShowFlags(UMovieGraphShowFlags *this)

{
  return &this->OverriddenShowFlags;
}

// GetPrivateStaticClass @ 14dd2d4a0

UClass * __cdecl UMovieGraphShowFlags::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphShowFlags.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphShowFlags",
               &Z_Registration_Info_UClass_UMovieGraphShowFlags.InnerSingleton,
               StaticRegisterNativesUMovieGraphShowFlags,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphShowFlags>,
               InternalVTableHelperCtorCaller<UMovieGraphShowFlags>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphShowFlags.InnerSingleton;
}

// GetShowFlags @ 14dd2f780

FEngineShowFlags * __thiscall
UMovieGraphShowFlags::GetShowFlags
          (UMovieGraphShowFlags *this,FEngineShowFlags *__return_storage_ptr__)

{
  FEngineShowFlags::FEngineShowFlags(__return_storage_ptr__,&this->ShowFlags);
  CopyOverridesToShowFlags(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsShowFlagEnabled @ 14dd33b60

bool __thiscall UMovieGraphShowFlags::IsShowFlagEnabled(UMovieGraphShowFlags *this,uint param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  ForElementType<FSetElementId> FVar8;
  
  if (*(int *)&(this->OverriddenShowFlags).Elements.field_0x8 !=
      *(int *)&(this->OverriddenShowFlags).Elements.field_0x34) {
    FVar8 = (this->OverriddenShowFlags).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->OverriddenShowFlags).Hash;
    }
    iVar3 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->OverriddenShowFlags).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->OverriddenShowFlags).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0xc) == param_1) {
          if (*(int *)&(this->ShowFlagEnableState).field_0x8 !=
              *(int *)&(this->ShowFlagEnableState).field_0x34) {
            puVar7 = *(undefined1 **)&(this->ShowFlagEnableState).field_0x40;
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &(this->ShowFlagEnableState).field_0x38;
            }
            uVar4 = *(uint *)(puVar7 + (ulonglong)
                                       (*(int *)&(this->ShowFlagEnableState).field_0x48 - 1U &
                                       param_1) * 4);
            if (uVar4 != 0xffffffff) {
              while (puVar6 = (uint *)((longlong)(int)uVar4 * 0x10 +
                                      *(longlong *)&this->ShowFlagEnableState), *puVar6 != param_1)
              {
                uVar4 = puVar6[2];
                if (uVar4 == 0xffffffff) {
                  bVar2 = FEngineShowFlags::GetSingleFlag(&this->ShowFlags,param_1);
                  return bVar2;
                }
              }
              puVar5 = puVar6 + 1;
              if (puVar6 == (uint *)0x0) {
                puVar5 = (uint *)0x0;
              }
              if (puVar5 != (uint *)0x0) {
                return (bool)(char)*puVar5;
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = FEngineShowFlags::GetSingleFlag(&this->ShowFlags,param_1);
  return bVar2;
}

// IsShowFlagOverridden @ 14dd33c50

bool __thiscall UMovieGraphShowFlags::IsShowFlagOverridden(UMovieGraphShowFlags *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->OverriddenShowFlags).Elements.field_0x8 !=
      *(int *)&(this->OverriddenShowFlags).Elements.field_0x34) {
    FVar3 = (this->OverriddenShowFlags).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->OverriddenShowFlags).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->OverriddenShowFlags).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->OverriddenShowFlags).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) goto LAB_14dd33c9d;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14dd33c9d:
  return iVar2 != -1;
}

// IsShowFlagSetToDefaultValue @ 14dd33cb0

bool __thiscall
UMovieGraphShowFlags::IsShowFlagSetToDefaultValue(UMovieGraphShowFlags *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->ShowFlagEnableState).field_0x8 !=
      *(int *)&(this->ShowFlagEnableState).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ShowFlagEnableState).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ShowFlagEnableState).field_0x38;
    }
    uVar2 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->ShowFlagEnableState).field_0x48 - 1U & param_1) * 4)
    ;
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar2 * 0x10 + *(longlong *)&this->ShowFlagEnableState);
        if (*puVar3 == param_1) {
          puVar4 = puVar3 + 1;
          if (puVar3 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 == (uint *)0x0) {
            return true;
          }
          uVar2 = *puVar4;
          bVar1 = FEngineShowFlags::GetSingleFlag(&this->ShowFlags,param_1);
          if (bVar1 == (bool)(char)uVar2) {
            return true;
          }
          return false;
        }
        uVar2 = puVar3[2];
      } while (uVar2 != 0xffffffff);
    }
  }
  return true;
}

// Merge @ 14dd366a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphShowFlags::Merge(UMovieGraphShowFlags *this,IMovieGraphTraversableObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  uint uVar8;
  UMovieGraphShowFlags *this_00;
  UClass *pUVar9;
  bool *pbVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  UMovieGraphShowFlags *pUVar14;
  uint uVar15;
  uint uVar16;
  UMovieGraphShowFlags *pUVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_f0 [2];
  int local_e8;
  uint local_e4;
  TPairInitializer<unsigned_int_const_&,bool_&&> local_e0;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  uint *local_78;
  undefined1 *local_70;
  FString local_68 [2];
  undefined4 local_3c;
  
  pUVar14 = (UMovieGraphShowFlags *)0x0;
  uVar12 = 0;
  if ((param_1 != (IMovieGraphTraversableObject *)0x0) &&
     (this_00 = (UMovieGraphShowFlags *)(**(code **)((longlong)*param_1 + 8))(param_1),
     this_00 != (UMovieGraphShowFlags *)0x0)) {
    pUVar9 = StaticClass();
    iVar13 = (int)pUVar9->_padding_;
    if ((iVar13 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar9->_padding_)) goto LAB_14dd36723;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("InSourceFlags",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Renderers\\MovieGraphShowFlags.cpp"
                     ,0x79,
                     L"UMovieGraphShowFlags cannot merge with null or an object of another type.");
  this_00 = pUVar14;
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14dd36723:
  local_e0.Value = (bool *)&this_00->OverriddenShowFlags;
  uStack_cc = 1;
  uVar16 = *(uint *)&(this_00->OverriddenShowFlags).Elements.field_0x28;
  puVar1 = &(this_00->OverriddenShowFlags).Elements.field_0x10;
  local_b8 = 0;
  uStack_bc = uVar12;
  if (uVar16 != 0) {
    puVar18 = *(uint **)&(this_00->OverriddenShowFlags).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar8 = *puVar18;
    pUVar17 = pUVar14;
    uVar12 = 0;
    local_b8 = 0;
    while (uVar8 == 0) {
      uVar12 = (int)pUVar14 + 1;
      pUVar14 = (UMovieGraphShowFlags *)(ulonglong)uVar12;
      local_b8 = (int)pUVar17 + 0x20;
      pUVar17 = (UMovieGraphShowFlags *)(ulonglong)local_b8;
      uStack_bc = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14dd367a3;
      uVar8 = puVar18[(int)uVar12];
    }
    uStack_cc = -uVar8 & uVar8;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_e8 = (int)lVar4;
    uStack_bc = local_e8 + -1 + local_b8;
    if ((int)uVar16 < (int)uStack_bc) {
      uStack_bc = uVar16;
    }
  }
LAB_14dd367a3:
  uVar8 = *(uint *)&(this_00->OverriddenShowFlags).Elements.field_0x28;
  uStack_b4 = local_3c;
  iStack_b0 = *(int *)&(this_00->OverriddenShowFlags).Elements.field_0x8 -
              *(int *)&(this_00->OverriddenShowFlags).Elements.field_0x34;
  uVar15 = uVar8 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uStack_cc,uVar12);
  uStack_c0 = 0xffffffff;
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar8 >> 5;
  TStack_a0._28_4_ = local_3c;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  uStack_d0 = uVar12;
  local_c8 = puVar1;
  local_a8 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
             local_e0.Value;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || ((int)uVar16 < (int)uVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = *(uint *)&(this_00->OverriddenShowFlags).Elements.field_0x28;
  if (uVar8 != uVar12) {
    puVar3 = *(undefined1 **)&(this_00->OverriddenShowFlags).Elements.field_0x20;
    puVar11 = puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      puVar11 = puVar3;
    }
    uVar16 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      iVar13 = iVar13 + 1;
      uVar15 = uVar15 + 0x20;
      uVar8 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar13)
      goto LAB_14dd368a0;
      uVar16 = *(uint *)(puVar11 + (longlong)iVar13 * 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar8 = (int)lVar4 + -1 + uVar15;
    if ((int)uVar12 < (int)uVar8) {
      uVar8 = uVar12;
    }
  }
LAB_14dd368a0:
  do {
    pTVar6 = local_a8;
    if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
        (int)uStack_80) {
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_a0.CurrentBitIndex == uVar8) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this_00->OverriddenShowFlags)) {
      return;
    }
    lVar4 = *(longlong *)&pTVar6->Elements;
    uVar12 = *(uint *)(lVar4 + (longlong)TStack_a0.CurrentBitIndex * 0xc);
    puVar18 = (uint *)(lVar4 + (longlong)TStack_a0.CurrentBitIndex * 0xc);
    if ((int)this->_padding_ != *(int *)&(this->OverriddenShowFlags).Elements.field_0xc) {
      puVar3 = *(undefined1 **)&(this->OverriddenShowFlags).Elements.field_0x18;
      puVar11 = &(this->OverriddenShowFlags).Elements.field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      iVar13 = *(int *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->OverriddenShowFlags).Elements.field_0x20 - 1U & uVar12) * 4)
      ;
      if (iVar13 != -1) {
        do {
          if (*(uint *)(this->_padding_ + (longlong)iVar13 * 0xc) == uVar12) goto LAB_14dd36a88;
          iVar13 = *(int *)(this->_padding_ + 4 + (longlong)iVar13 * 0xc);
        } while (iVar13 != -1);
      }
    }
    local_res20[0] = uVar12;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
               &this->_padding_,&local_e4,(bool *)local_res20);
    if (*(int *)&(this->OverriddenShowFlags).Elements.field_0x30 !=
        *(int *)&(this->ShowFlagEnableState).field_0xc) {
      puVar3 = *(undefined1 **)&(this->ShowFlagEnableState).field_0x18;
      puVar11 = &(this->ShowFlagEnableState).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      iVar13 = *(int *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->ShowFlagEnableState).field_0x20 - 1U & local_res20[0]) * 4);
      if (iVar13 != -1) {
        lVar4 = *(longlong *)&(this->OverriddenShowFlags).Elements.field_0x28;
        do {
          if (*(uint *)(lVar4 + (longlong)iVar13 * 0x10) == local_res20[0]) goto LAB_14dd369cb;
          iVar13 = *(int *)(lVar4 + 8 + (longlong)iVar13 * 0x10);
        } while (iVar13 != -1);
      }
    }
    local_res10[0] =
         FEngineShowFlags::GetSingleFlag
                   ((FEngineShowFlags *)&(this->ShowFlagEnableState).field_0x28,local_res20[0]);
    local_78 = local_res20;
    local_70 = local_res10;
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,bool_&&>_>
              ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                *)&(this->OverriddenShowFlags).Elements.field_0x28,&local_e0,(bool *)&local_78);
LAB_14dd369cb:
    bVar7 = IsShowFlagEnabled(this_00,*puVar18);
    local_f0[0] = *puVar18;
    if ((int)this->_padding_ != *(int *)&(this->OverriddenShowFlags).Elements.field_0xc) {
      puVar3 = *(undefined1 **)&(this->OverriddenShowFlags).Elements.field_0x18;
      puVar11 = &(this->OverriddenShowFlags).Elements.field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      iVar13 = *(int *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->OverriddenShowFlags).Elements.field_0x20 - 1U & local_f0[0])
                       * 4);
      if (iVar13 != -1) {
        do {
          if (*(uint *)(this->_padding_ + (longlong)iVar13 * 0xc) == local_f0[0]) {
            pbVar10 = TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                      ::FindOrAddImpl<unsigned_int_const_&>
                                ((TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                                  *)&(this->OverriddenShowFlags).Elements.field_0x28,local_f0[0],
                                 local_f0);
            *pbVar10 = bVar7;
            goto LAB_14dd36a88;
          }
          iVar13 = *(int *)(this->_padding_ + 4 + (longlong)iVar13 * 0xc);
        } while (iVar13 != -1);
      }
    }
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      FEngineShowFlags::FindNameByIndex(local_68,local_f0[0]);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
    }
LAB_14dd36a88:
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// RevertShowFlagToDefaultValue @ 14dd3f880

void __thiscall
UMovieGraphShowFlags::RevertShowFlagToDefaultValue(UMovieGraphShowFlags *this,uint param_1)

{
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
            *)&this->ShowFlagEnableState,param_1);
  return;
}

// SetShowFlagEnabled @ 14dd40400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphShowFlags::SetShowFlagEnabled(UMovieGraphShowFlags *this,uint param_1,bool param_2)

{
  longlong lVar1;
  int iVar2;
  bool *pbVar3;
  ForElementType<FSetElementId> FVar4;
  uint local_res10 [6];
  FString local_18;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->OverriddenShowFlags).Elements.field_0x8 !=
      *(int *)&(this->OverriddenShowFlags).Elements.field_0x34) {
    FVar4 = (this->OverriddenShowFlags).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->OverriddenShowFlags).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->OverriddenShowFlags).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->OverriddenShowFlags).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) {
          pbVar3 = TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                   ::FindOrAddImpl<unsigned_int_const_&>
                             ((TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                               *)&this->ShowFlagEnableState,param_1,local_res10);
          *pbVar3 = param_2;
          return;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    FEngineShowFlags::FindNameByIndex(&local_18,param_1);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetShowFlagOverridden @ 14dd404d0

void __thiscall
UMovieGraphShowFlags::SetShowFlagOverridden(UMovieGraphShowFlags *this,uint param_1,bool param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint local_res10 [2];
  uint local_res18 [4];
  uint *local_18;
  uint *local_10;
  
  local_res10[0] = param_1;
  if (param_2) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>(&this->OverriddenShowFlags,local_res18,(bool *)local_res10);
    if (*(int *)&(this->ShowFlagEnableState).field_0x8 !=
        *(int *)&(this->ShowFlagEnableState).field_0x34) {
      puVar4 = *(undefined1 **)&(this->ShowFlagEnableState).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->ShowFlagEnableState).field_0x38;
      }
      iVar3 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->ShowFlagEnableState).field_0x48 - 1U &
                                local_res10[0]) * 4);
      if (iVar3 != -1) {
        lVar1 = *(longlong *)&(this->ShowFlagEnableState).field_0x0;
        do {
          if (*(uint *)(lVar1 + (longlong)iVar3 * 0x10) == local_res10[0]) {
            return;
          }
          iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
        } while (iVar3 != -1);
      }
    }
    bVar2 = FEngineShowFlags::GetSingleFlag(&this->ShowFlags,local_res10[0]);
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar2);
    local_18 = local_res10;
    local_10 = local_res18;
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,bool_&&>_>
              ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                *)&this->ShowFlagEnableState,
               (TPairInitializer<unsigned_int_const_&,bool_&&> *)(local_res18 + 2),(bool *)&local_18
              );
  }
  else if (*(int *)&(this->OverriddenShowFlags).Elements.field_0x8 !=
           *(int *)&(this->OverriddenShowFlags).Elements.field_0x34) {
    local_res18[0] = param_1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    RemoveImpl<unsigned_int>(&this->OverriddenShowFlags,param_1,local_res18);
    return;
  }
  return;
}

// StaticRegisterNativesUMovieGraphShowFlags @ 14dd453f0

void __cdecl UMovieGraphShowFlags::StaticRegisterNativesUMovieGraphShowFlags(void)

{
  return;
}

// _getUObject @ 14dd4ded0

UObject * __thiscall UMovieGraphShowFlags::_getUObject(UMovieGraphShowFlags *this)

{
  return (UObject *)&this[-1].ShowFlags.field_0x18;
}

