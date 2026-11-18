// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// operator() @ 1488b3f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FCanvasTriangleRendererItem::Render_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FCanvasRenderContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMeshPassProcessorRenderState local_48;
  
  local_48.DepthStencilAccess = DepthRead_StencilRead;
  local_48.BlendState = (FRHIBlendState *)0x0;
  local_48.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_48.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_48.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_48.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_48.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_48.StencilRef = 0;
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCanvasTriangleRendererItem::FRenderData::RenderTriangles
            (*(FRenderData **)this,param_1,&local_48,*(FSceneView **)((longlong)this + 0x10),
             *(bool *)((longlong)this + 0x18));
  FCanvasRenderContext::DeferredRelease<FCanvasTriangleRendererItem::FRenderData>(param_1,this);
  FCanvasRenderContext::DeferredDelete<FSceneViewFamily>
            (param_1,*(FSceneViewFamily **)(*(longlong *)((longlong)this + 0x10) + 8));
  FCanvasRenderContext::DeferredDelete<FSceneView>(param_1,*(FSceneView **)((longlong)this + 0x10));
  return;
}

// Render_GameThread @ 1488d9a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FCanvasTriangleRendererItem::Render_GameThread
          (FCanvasTriangleRendererItem *this,FCanvas *param_1,FCanvasRenderThreadScope *param_2)

{
  TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FRenderTarget *pFVar4;
  longlong lVar5;
  FRenderData *pFVar6;
  FHitProxyConsumer *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  FSceneViewFamily *this_00;
  ConstructionValues *pCVar12;
  FSceneView *pFVar13;
  longlong *plVar14;
  FSceneView *pFVar15;
  FSceneView *pFVar16;
  code **ppcVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_4f8 [32];
  undefined4 local_4c8 [2];
  FCanvasRenderThreadScope *local_4c0;
  longlong local_4b8;
  FSharedReferencer<1> FStack_4b0;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_4a8;
  undefined8 local_498;
  undefined1 local_488 [784];
  FEngineShowFlags local_178;
  code *local_138 [2];
  code *local_128 [3];
  code **local_110;
  ConstructionValues local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  pFVar16 = (FSceneView *)0x0;
  local_4c8[0] = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  local_498 = 0;
  if (this->bFreezeTime == false) {
    uVar18 = *(undefined4 *)&(param_1->Time).RealTimeSeconds;
    uVar19 = *(undefined4 *)((longlong)&(param_1->Time).RealTimeSeconds + 4);
    uVar20 = *(undefined4 *)&(param_1->Time).WorldTimeSeconds;
    uVar21 = *(undefined4 *)((longlong)&(param_1->Time).WorldTimeSeconds + 4);
    uVar2 = (param_1->Time).DeltaRealTimeSeconds;
    uVar3 = (param_1->Time).DeltaWorldTimeSeconds;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  pFVar4 = param_1->RenderTarget;
  local_4c0 = param_2;
  this_00 = ::operator_new(0x1b8);
  pFVar15 = pFVar16;
  pFVar13 = pFVar16;
  if (this_00 != (FSceneViewFamily *)0x0) {
    local_178.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_4a8.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
    local_4a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_178._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_178._8_8_ = _UNK_15060db28;
    local_178.CustomShowFlags.NumBits = 0;
    local_178._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_178._24_8_ = _UNK_15060db28;
    local_178.CustomShowFlags.MaxBits = 0x80;
    FEngineShowFlags::InitCustomShowFlags(&local_178,ESFIM_Game);
    local_178.Pivot = 0;
    local_178.LightInfluences = 0;
    local_178.HitProxies = 0;
    local_178.Bounds = 0;
    local_178.ModeWidgets = 0;
    local_178.EditingLevelInstance = 0;
    local_178.Selection = 0;
    local_178.Splines = 0;
    local_178.Cover = 0;
    local_178.MeshEdges = 0;
    local_178.Snap = 0;
    local_178.Grid = 0;
    local_178.LargeVertices = 0;
    local_178.Editor = 0;
    local_178.Brushes = 0;
    local_178.BSPSplit = 0;
    local_178.AudioRadius = 0;
    local_178.CameraFrustums = 0;
    local_178.MassProperties = 0;
    local_178.Constraints = 0;
    local_178.StreamingBounds = 0;
    local_178.LightMapDensity = 0;
    local_178.StationaryLightOverlap = 0;
    local_178.ShaderComplexity = 0;
    local_178.LightComplexity = 0;
    local_178.VisualizeInstanceUpdates = 0;
    local_178.HISMCClusterTree = 0;
    local_178.HISMCOcclusionBounds = 0;
    local_178.Navigation = 0;
    local_178.DebugAI = 0;
    local_178.VisualizeSSS = 0;
    local_178.SelectionOutline = 0;
    local_178.DisableOcclusionQueries = 0;
    local_178.VisualizeInstanceOcclusionQueries = 0;
    local_178.OcclusionMeshes = 0;
    local_178.VREditing = 0;
    local_178.ServerDrawDebug = 0;
    local_178.Bones = 0;
    local_178.VisualizeVirtualTexture = 0;
    local_178.RequiredTextureResolution = 0;
    local_178.OutputMaterialTextureScales = 0;
    local_178.MaterialTextureScaleAccuracy = 0;
    local_178.MeshUVDensityAccuracy = 0;
    local_178.PrimitiveDistanceAccuracy = 0;
    local_178.ShaderComplexityWithQuadOverdraw = 0;
    local_178.QuadOverdraw = 0;
    local_178.HLODColoration = 0;
    local_178.LODColoration = 0;
    local_178.VisualizeShadingModels = 0;
    local_178.VisualizeSSR = 0;
    local_178.VisualizeLightingOnProbes = 0;
    local_178.VisualizeGlobalDistanceField = 0;
    local_178.PhysicsField = 0;
    local_178.VisualizeMeshDistanceFields = 0;
    local_178.VisualizeDistanceFieldAO = 0;
    local_178.VolumeLightingSamples = 0;
    local_178.VisualizeVolumetricLightmap = 0;
    local_178.PrecomputedVisibilityCells = 0;
    local_178.VisualizeLightCulling = 0;
    local_178.DistanceCulledPrimitives = 0;
    local_178.StereoRendering = 0;
    local_178.HMDDistortion = 0;
    local_178.HighResScreenshotMask = 0;
    local_178.CameraSafeFrames = 0;
    local_178.CameraAspectRatioBars = 0;
    local_178.CollisionPawn = 0;
    local_178.CollisionVisibility = 0;
    local_178.Collision = 0;
    local_178.ActorColoration = 0;
    local_178.Game = 1;
    local_178.Volumes = 0;
    local_178.LightRadius = 0;
    local_178.Wireframe = 0;
    local_178.ShadowFrustums = 0;
    local_178.VisualizeOutOfBoundsPixels = 0;
    local_178.VisualizeTSR = 0;
    local_178.VisualizeTemporalUpscaler = 0;
    local_178.VisualizeReprojection = 0;
    local_178.VisualizeMotionVectors = 0;
    local_178.VisualizeMotionBlur = 0;
    local_178.ScreenPercentage = 1;
    local_178.PhysicalMaterialMasks = 0;
    local_178.VertexColors = 0;
    local_178.VisualizeDOF = 0;
    local_178.TestImage = 0;
    local_178.OpaqueCompositeEditorPrimitives = 0;
    local_178.CompositeEditorPrimitives = 0;
    local_178.CompositeDebugPrimitives = 1;
    local_178.MotionBlur = 1;
    local_178.GBufferHints = 0;
    local_178.VectorFields = 0;
    local_178.VisualizeVirtualShadowMap = 0;
    local_178.VisualizeGroom = 0;
    local_178.VisualizeSubstrate = 0;
    local_178.VisualizeLumen = 0;
    local_178.VisualizeNanite = 0;
    local_178.VisualizeBuffer = 0;
    local_178.MaterialAmbientOcclusion = 1;
    local_178.MaterialNormal = 1;
    local_178.ReflectionOverride = 0;
    local_178.LightingOnlyOverride = 0;
    local_178.OverrideDiffuseAndSpecular = 0;
    local_178.VisualizeLocalExposure = 0;
    local_178.VisualizeLocalFogVolumes = 0;
    local_178.VisualizeSkyLightIlluminance = 0;
    local_178.VisualizeHDR = 0;
    local_178.RandomColor = 0;
    local_178.FrontBackFace = 0;
    local_178.Zebra = 0;
    local_178.Clay = 0;
    local_178.StereoMotionVectors = 0;
    local_178.AlphaInvert = 0;
    local_178.SceneCaptureCopySceneDepth = 1;
    local_178.VisualizeShadowCasters = 0;
    local_178.VisualizeLWCComplexity = 0;
    local_178.VisualizeGPUSkinCache = 0;
    local_178.LumenShortRangeAmbientOcclusion = 1;
    local_178.LumenSecondaryBounces = 1;
    local_178.LumenFarFieldTraces = 1;
    local_178.LumenGlobalTraces = 1;
    local_178.LumenDetailTraces = 1;
    local_178.LumenScreenTraces = 1;
    local_178.DebugDrawDistantVirtualSMLights = 0;
    local_178.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
    local_178.VisualizeVolumetricCloudConservativeDensity = 0;
    local_178.VirtualTexturePrimitives = 0;
    local_178.VisualizePostProcessStack = 0;
    local_178.VisualizeCalibrationCustom = 0;
    local_178.VisualizeCalibrationGrayscale = 0;
    local_178.VisualizeCalibrationColor = 0;
    local_178.VisualizeLightFunctionAtlas = 0;
    local_178.VisualizeSkyAtmosphere = 0;
    local_178.RayTracingDebug = 0;
    local_178.PathTracing = 0;
    pCVar12 = FSceneViewFamily::ConstructionValues::ConstructionValues
                        (&local_108,pFVar4,param_1->Scene,&local_178,&local_4a8);
    pCVar12->bTimesSet = 1;
    *(undefined4 *)&(pCVar12->Time).RealTimeSeconds = uVar18;
    *(undefined4 *)((longlong)&(pCVar12->Time).RealTimeSeconds + 4) = uVar19;
    *(undefined4 *)&(pCVar12->Time).WorldTimeSeconds = uVar20;
    *(undefined4 *)((longlong)&(pCVar12->Time).WorldTimeSeconds + 4) = uVar21;
    (pCVar12->Time).DeltaRealTimeSeconds = (float)uVar2;
    (pCVar12->Time).DeltaWorldTimeSeconds = (float)uVar3;
    pFVar13 = (FSceneView *)FSceneViewFamily::FSceneViewFamily(this_00,pCVar12);
    pFVar15 = (FSceneView *)&DAT_00000003;
  }
  if (((ulonglong)pFVar15 & 2) != 0) {
    pFVar15 = (FSceneView *)(ulonglong)((uint)pFVar15 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
    if (local_108.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.EngineShowFlags.CustomShowFlags.AllocatorInstance.
                            SecondaryData);
    }
  }
  if ((((ulonglong)pFVar15 & 1) != 0) &&
     (local_178.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     )) {
    FMemory::Free((void *)local_178.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  plVar14 = (longlong *)(**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,local_4c8);
  lVar5 = *plVar14;
  FSceneViewInitOptions::FSceneViewInitOptions((FSceneViewInitOptions *)local_488);
  local_488._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_488._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_488._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_488._48_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_488._56_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_488._32_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_488._40_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_488._80_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_488._88_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_488._64_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_488._72_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  pTVar1 = &this->Data;
  local_488._112_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_488._120_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_488._96_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_488._104_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_488._144_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_488._152_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_488._288_8_ = 0;
  local_488._328_8_ = 0;
  local_488._128_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_488._136_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_488._296_8_ = lVar5;
  local_488._336_8_ = lVar5;
  local_488._344_8_ = pFVar13;
  if ((pTVar1->Object == (FRenderData *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar6 = pTVar1->Object;
  local_488._160_8_ = (pFVar6->Transform).Matrix.M[0][0];
  local_488._168_8_ = (pFVar6->Transform).Matrix.M[0][1];
  local_488._176_8_ = (pFVar6->Transform).Matrix.M[0][2];
  local_488._184_8_ = (pFVar6->Transform).Matrix.M[0][3];
  local_488._192_8_ = (pFVar6->Transform).Matrix.M[1][0];
  local_488._200_8_ = (pFVar6->Transform).Matrix.M[1][1];
  local_488._208_8_ = (pFVar6->Transform).Matrix.M[1][2];
  local_488._216_8_ = (pFVar6->Transform).Matrix.M[1][3];
  local_488._224_8_ = (pFVar6->Transform).Matrix.M[2][0];
  local_488._232_8_ = (pFVar6->Transform).Matrix.M[2][1];
  local_488._240_8_ = (pFVar6->Transform).Matrix.M[2][2];
  local_488._248_8_ = (pFVar6->Transform).Matrix.M[2][3];
  local_488._256_8_ = (pFVar6->Transform).Matrix.M[3][0];
  local_488._264_8_ = (pFVar6->Transform).Matrix.M[3][1];
  local_488._272_8_ = (pFVar6->Transform).Matrix.M[3][2];
  local_488._280_8_ = (pFVar6->Transform).Matrix.M[3][3];
  local_488._400_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_488._416_16_ = (undefined1  [16])FLinearColor::White.field0_0x0;
  pFVar15 = ::operator_new(0x1c30);
  if (pFVar15 != (FSceneView *)0x0) {
    pFVar16 = FSceneView::FSceneView(pFVar15,(FSceneViewInitOptions *)local_488);
  }
  pFVar7 = param_1->HitProxyConsumer;
  pTVar8 = (this->Data).SharedReferenceCount.ReferenceController;
  pFVar6 = pTVar1->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_138[0] = (code *)0x0;
  local_110 = FMemory::Malloc(0x28,8);
  local_110[1] = (code *)pFVar6;
  local_110[2] = (code *)pTVar8;
  *local_110 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FCanvasTriangleRendererItem::Render_GameThread'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
  local_110[3] = (code *)pFVar16;
  *(bool *)(local_110 + 4) = pFVar7 != (FHitProxyConsumer *)0x0;
  if (local_110 != (code **)&DAT_fffffffffffffff8) {
    local_138[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FCanvasTriangleRendererItem::Render_GameThread'::__l2::<lambda_1>,void,FCanvasRenderContext_&>
                   ::Call;
  }
  FCanvasRenderThreadScope::EnqueueRenderCommand
            (local_4c0,(TFunction<void___cdecl(FCanvasRenderContext_&)> *)local_138);
  if (local_138[0] != (code *)0x0) {
    ppcVar17 = local_138 + 2;
    if (local_110 != (code **)0x0) {
      ppcVar17 = local_110;
    }
    (**(code **)(*ppcVar17 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((param_1->AllowedModes & 2) != 0) {
    local_4b8 = 0;
    FStack_4b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *)&local_4b8) {
      pTVar1->Object = (FRenderData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Data).SharedReferenceCount,&FStack_4b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_4b0.ReferenceController);
  }
  if (local_488._604_4_ != -1) {
    local_488._664_4_ = 0;
    if ((ForElementType<FSetElementId>)local_488._656_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_488._656_8_);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_488 + 0x250));
  }
  local_488._584_4_ = 0;
  if ((ForElementType<FSetElementId>)local_488._576_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_488._576_8_);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_488 + 0x200));
  return true;
}

// Render_RenderThread @ 1488da4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FCanvasTriangleRendererItem::Render_RenderThread
          (FCanvasTriangleRendererItem *this,FCanvasRenderContext *param_1,
          FMeshPassProcessorRenderState *param_2,FCanvas *param_3)

{
  int *piVar1;
  TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FRenderTarget *pFVar5;
  FRDGBuilder *pFVar6;
  longlong lVar7;
  FRenderData *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  ConstructionValues *pCVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  FSceneView *pFVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStackY_4f8 [32];
  undefined8 *local_4a8;
  FRenderTarget *local_4a0;
  TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> local_498;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_488;
  undefined8 local_478;
  undefined1 local_470 [8];
  undefined1 local_468 [784];
  FEngineShowFlags local_158;
  ConstructionValues local_118;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_478 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  if (this->bFreezeTime == false) {
    uVar17 = *(undefined4 *)&(param_3->Time).RealTimeSeconds;
    uVar18 = *(undefined4 *)((longlong)&(param_3->Time).RealTimeSeconds + 4);
    uVar19 = *(undefined4 *)&(param_3->Time).WorldTimeSeconds;
    uVar20 = *(undefined4 *)((longlong)&(param_3->Time).WorldTimeSeconds + 4);
    uVar3 = (param_3->Time).DeltaRealTimeSeconds;
    uVar4 = (param_3->Time).DeltaWorldTimeSeconds;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
  }
  pFVar5 = param_3->RenderTarget;
  local_158.CustomShowFlags.MaxBits = 0x80;
  local_488.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_488.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_158.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_158._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_158._8_8_ = _UNK_15060db28;
  local_158.CustomShowFlags.NumBits = 0;
  local_158._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_158._24_8_ = _UNK_15060db28;
  local_4a0 = pFVar5;
  FEngineShowFlags::InitCustomShowFlags(&local_158,ESFIM_Game);
  local_158.Pivot = 0;
  local_158.LightInfluences = 0;
  local_158.HitProxies = 0;
  local_158.Bounds = 0;
  local_158.ModeWidgets = 0;
  local_158.EditingLevelInstance = 0;
  local_158.Selection = 0;
  local_158.Splines = 0;
  local_158.Cover = 0;
  local_158.MeshEdges = 0;
  local_158.Snap = 0;
  local_158.Grid = 0;
  local_158.LargeVertices = 0;
  local_158.Editor = 0;
  local_158.Brushes = 0;
  local_158.BSPSplit = 0;
  local_158.AudioRadius = 0;
  local_158.CameraFrustums = 0;
  local_158.MassProperties = 0;
  local_158.Constraints = 0;
  local_158.StreamingBounds = 0;
  local_158.LightMapDensity = 0;
  local_158.StationaryLightOverlap = 0;
  local_158.ShaderComplexity = 0;
  local_158.LightComplexity = 0;
  local_158.VisualizeInstanceUpdates = 0;
  local_158.HISMCClusterTree = 0;
  local_158.HISMCOcclusionBounds = 0;
  local_158.Navigation = 0;
  local_158.DebugAI = 0;
  local_158.VisualizeSSS = 0;
  local_158.SelectionOutline = 0;
  local_158.DisableOcclusionQueries = 0;
  local_158.VisualizeInstanceOcclusionQueries = 0;
  local_158.OcclusionMeshes = 0;
  local_158.VREditing = 0;
  local_158.ServerDrawDebug = 0;
  local_158.Bones = 0;
  local_158.VisualizeVirtualTexture = 0;
  local_158.RequiredTextureResolution = 0;
  local_158.OutputMaterialTextureScales = 0;
  local_158.MaterialTextureScaleAccuracy = 0;
  local_158.MeshUVDensityAccuracy = 0;
  local_158.PrimitiveDistanceAccuracy = 0;
  local_158.ShaderComplexityWithQuadOverdraw = 0;
  local_158.QuadOverdraw = 0;
  local_158.HLODColoration = 0;
  local_158.LODColoration = 0;
  local_158.VisualizeShadingModels = 0;
  local_158.VisualizeSSR = 0;
  local_158.VisualizeLightingOnProbes = 0;
  local_158.VisualizeGlobalDistanceField = 0;
  local_158.PhysicsField = 0;
  local_158.VisualizeMeshDistanceFields = 0;
  local_158.VisualizeDistanceFieldAO = 0;
  local_158.VolumeLightingSamples = 0;
  local_158.VisualizeVolumetricLightmap = 0;
  local_158.PrecomputedVisibilityCells = 0;
  local_158.VisualizeLightCulling = 0;
  local_158.DistanceCulledPrimitives = 0;
  local_158.StereoRendering = 0;
  local_158.HMDDistortion = 0;
  local_158.HighResScreenshotMask = 0;
  local_158.CameraSafeFrames = 0;
  local_158.CameraAspectRatioBars = 0;
  local_158.CollisionPawn = 0;
  local_158.CollisionVisibility = 0;
  local_158.Collision = 0;
  local_158.ActorColoration = 0;
  local_158.Game = 1;
  local_158.Volumes = 0;
  local_158.LightRadius = 0;
  local_158.Wireframe = 0;
  local_158.ShadowFrustums = 0;
  local_158.VisualizeOutOfBoundsPixels = 0;
  local_158.VisualizeTSR = 0;
  local_158.VisualizeTemporalUpscaler = 0;
  local_158.VisualizeReprojection = 0;
  local_158.VisualizeMotionVectors = 0;
  local_158.VisualizeMotionBlur = 0;
  local_158.ScreenPercentage = 1;
  local_158.PhysicalMaterialMasks = 0;
  local_158.VertexColors = 0;
  local_158.VisualizeDOF = 0;
  local_158.TestImage = 0;
  local_158.OpaqueCompositeEditorPrimitives = 0;
  local_158.CompositeEditorPrimitives = 0;
  local_158.CompositeDebugPrimitives = 1;
  local_158.MotionBlur = 1;
  local_158.GBufferHints = 0;
  local_158.VectorFields = 0;
  local_158.VisualizeVirtualShadowMap = 0;
  local_158.VisualizeGroom = 0;
  local_158.VisualizeSubstrate = 0;
  local_158.VisualizeLumen = 0;
  local_158.VisualizeNanite = 0;
  local_158.VisualizeBuffer = 0;
  local_158.MaterialAmbientOcclusion = 1;
  local_158.MaterialNormal = 1;
  local_158.ReflectionOverride = 0;
  local_158.LightingOnlyOverride = 0;
  local_158.OverrideDiffuseAndSpecular = 0;
  local_158.VisualizeLocalExposure = 0;
  local_158.VisualizeLocalFogVolumes = 0;
  local_158.VisualizeSkyLightIlluminance = 0;
  local_158.VisualizeHDR = 0;
  local_158.RandomColor = 0;
  local_158.FrontBackFace = 0;
  local_158.Zebra = 0;
  local_158.Clay = 0;
  local_158.StereoMotionVectors = 0;
  local_158.AlphaInvert = 0;
  local_158.SceneCaptureCopySceneDepth = 1;
  local_158.VisualizeShadowCasters = 0;
  local_158.VisualizeLWCComplexity = 0;
  local_158.VisualizeGPUSkinCache = 0;
  local_158.LumenShortRangeAmbientOcclusion = 1;
  local_158.LumenSecondaryBounces = 1;
  local_158.LumenFarFieldTraces = 1;
  local_158.LumenGlobalTraces = 1;
  local_158.LumenDetailTraces = 1;
  local_158.LumenScreenTraces = 1;
  local_158.DebugDrawDistantVirtualSMLights = 0;
  local_158.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_158.VisualizeVolumetricCloudConservativeDensity = 0;
  local_158.VirtualTexturePrimitives = 0;
  local_158.VisualizePostProcessStack = 0;
  local_158.VisualizeCalibrationCustom = 0;
  local_158.VisualizeCalibrationGrayscale = 0;
  local_158.VisualizeCalibrationColor = 0;
  local_158.VisualizeLightFunctionAtlas = 0;
  local_158.VisualizeSkyAtmosphere = 0;
  local_158.RayTracingDebug = 0;
  local_158.PathTracing = 0;
  pCVar13 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_118,pFVar5,(FSceneInterface *)0x0,&local_158,&local_488);
  pCVar13->bTimesSet = 1;
  *(undefined4 *)&(pCVar13->Time).RealTimeSeconds = uVar17;
  *(undefined4 *)((longlong)&(pCVar13->Time).RealTimeSeconds + 4) = uVar18;
  *(undefined4 *)&(pCVar13->Time).WorldTimeSeconds = uVar19;
  *(undefined4 *)((longlong)&(pCVar13->Time).WorldTimeSeconds + 4) = uVar20;
  (pCVar13->Time).DeltaRealTimeSeconds = (float)uVar3;
  (pCVar13->Time).DeltaWorldTimeSeconds = (float)uVar4;
  pFVar6 = param_1->GraphBuilder;
  puVar14 = FMemStackBase::Alloc((FMemStackBase *)&pFVar6->_padding_,0x1c0,0x10);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  else {
    *puVar14 = &___7__TObject___CBVFSceneViewFamily___FRDGAllocator__6B_;
    FSceneViewFamily::FSceneViewFamily((FSceneViewFamily *)(puVar14 + 1),pCVar13);
  }
  local_4a8 = puVar14;
  if (((undefined8 **)pFVar6->_padding_ <= &local_4a8) &&
     (&local_4a8 < (undefined8 **)pFVar6->_padding_ + *(int *)((longlong)&pFVar6->_padding_ + 4))) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  iVar12 = (int)pFVar6->_padding_;
  piVar1 = (int *)((longlong)&pFVar6->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar6->_padding_,piVar1);
  }
  *(int *)&pFVar6->_padding_ = iVar12 + 1;
  *(undefined8 **)(pFVar6->_padding_ + (longlong)iVar12 * 8) = local_4a8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_118.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_118.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_158.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_158.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  plVar15 = (longlong *)(**(code **)(local_4a0->_padding_ + 0x28))(local_4a0,local_470);
  lVar7 = *plVar15;
  FSceneViewInitOptions::FSceneViewInitOptions((FSceneViewInitOptions *)local_468);
  local_468._344_8_ = puVar14 + 1;
  local_468._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_468._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_468._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_468._48_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_468._56_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_468._32_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_468._40_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_468._80_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_468._88_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_468._64_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_468._72_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  pTVar2 = &this->Data;
  local_468._112_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_468._120_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_468._96_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_468._104_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_468._144_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_468._152_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_468._288_8_ = 0;
  local_468._328_8_ = 0;
  local_468._128_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_468._136_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_468._296_8_ = lVar7;
  local_468._336_8_ = lVar7;
  if (pTVar2->Object == (FRenderData *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  pFVar8 = pTVar2->Object;
  local_468._160_8_ = (pFVar8->Transform).Matrix.M[0][0];
  local_468._168_8_ = (pFVar8->Transform).Matrix.M[0][1];
  local_468._176_8_ = (pFVar8->Transform).Matrix.M[0][2];
  local_468._184_8_ = (pFVar8->Transform).Matrix.M[0][3];
  local_468._192_8_ = (pFVar8->Transform).Matrix.M[1][0];
  local_468._200_8_ = (pFVar8->Transform).Matrix.M[1][1];
  local_468._208_8_ = (pFVar8->Transform).Matrix.M[1][2];
  local_468._216_8_ = (pFVar8->Transform).Matrix.M[1][3];
  local_468._224_8_ = (pFVar8->Transform).Matrix.M[2][0];
  local_468._232_8_ = (pFVar8->Transform).Matrix.M[2][1];
  local_468._240_8_ = (pFVar8->Transform).Matrix.M[2][2];
  local_468._248_8_ = (pFVar8->Transform).Matrix.M[2][3];
  local_468._256_8_ = (pFVar8->Transform).Matrix.M[3][0];
  local_468._264_8_ = (pFVar8->Transform).Matrix.M[3][1];
  local_468._272_8_ = (pFVar8->Transform).Matrix.M[3][2];
  local_468._280_8_ = (pFVar8->Transform).Matrix.M[3][3];
  local_468._400_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_468._416_16_ = (undefined1  [16])FLinearColor::White.field0_0x0;
  pFVar16 = FCanvasRenderContext::Alloc<FSceneView_const_,FSceneViewInitOptions_&>
                      (param_1,(FSceneViewInitOptions *)local_468);
  if (pTVar2->Object == (FRenderData *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  FRenderData::RenderTriangles
            (pTVar2->Object,param_1,param_2,pFVar16,
             param_3->HitProxyConsumer != (FHitProxyConsumer *)0x0);
  if ((param_3->AllowedModes & 2) != 0) {
    FCanvasRenderContext::DeferredRelease<FCanvasTriangleRendererItem::FRenderData>(param_1,pTVar2);
    local_498.Object = (FRenderData *)0x0;
    local_498.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != &local_498) {
      pTVar2->Object = (FRenderData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Data).SharedReferenceCount,&local_498.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_498.SharedReferenceCount.ReferenceController);
  }
  if (local_468._604_4_ != -1) {
    local_468._664_4_ = 0;
    if ((ForElementType<FSetElementId>)local_468._656_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_468._656_8_);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_468 + 0x250));
  }
  local_468._584_4_ = 0;
  if ((ForElementType<FSetElementId>)local_468._576_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_468._576_8_);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_468 + 0x200));
  return true;
}

// FCanvasTriangleRendererItem @ 148906a80

FCanvasTriangleRendererItem * __thiscall
FCanvasTriangleRendererItem::FCanvasTriangleRendererItem
          (FCanvasTriangleRendererItem *this,Type param_1,FMaterialRenderProxy *param_2,
          FTransformEntry *param_3,bool param_4)

{
  code *pcVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCanvasTriangleRendererItem *pFVar7;
  
  this->_padding_ = (longlong)&___7FCanvasTriangleRendererItem__6B_;
  pTVar6 = ::operator_new(0x490);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    (this->Data).Object = (FRenderData *)0x10;
    (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRenderData_FCanvasTriangleRendererItem___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)param_2;
    dVar2 = (param_3->Matrix).M[0][1];
    pTVar6[2]._padding_ = (longlong)(param_3->Matrix).M[0][0];
    *(double *)&pTVar6[2].SharedReferenceCount = dVar2;
    dVar2 = (param_3->Matrix).M[0][3];
    pTVar6[3]._padding_ = (longlong)(param_3->Matrix).M[0][2];
    *(double *)&pTVar6[3].SharedReferenceCount = dVar2;
    dVar2 = (param_3->Matrix).M[1][1];
    pTVar6[4]._padding_ = (longlong)(param_3->Matrix).M[1][0];
    *(double *)&pTVar6[4].SharedReferenceCount = dVar2;
    dVar2 = (param_3->Matrix).M[1][3];
    pTVar6[5]._padding_ = (longlong)(param_3->Matrix).M[1][2];
    *(double *)&pTVar6[5].SharedReferenceCount = dVar2;
    dVar2 = (param_3->Matrix).M[2][1];
    pTVar6[6]._padding_ = (longlong)(param_3->Matrix).M[2][0];
    *(double *)&pTVar6[6].SharedReferenceCount = dVar2;
    dVar2 = (param_3->Matrix).M[2][3];
    pTVar6[7]._padding_ = (longlong)(param_3->Matrix).M[2][2];
    *(double *)&pTVar6[7].SharedReferenceCount = dVar2;
    dVar2 = (param_3->Matrix).M[3][1];
    pTVar6[8]._padding_ = (longlong)(param_3->Matrix).M[3][0];
    *(double *)&pTVar6[8].SharedReferenceCount = dVar2;
    dVar2 = (param_3->Matrix).M[3][3];
    pTVar6[9]._padding_ = (longlong)(param_3->Matrix).M[3][2];
    *(double *)&pTVar6[9].SharedReferenceCount = dVar2;
    uVar3 = *(undefined4 *)&param_3->field_0x88;
    uVar4 = *(undefined4 *)&param_3->field_0x8c;
    pTVar6[10]._padding_ = *(longlong *)&param_3->MatrixCRC;
    pTVar6[10].SharedReferenceCount = (atomic<int>)uVar3;
    pTVar6[10].WeakReferenceCount = (atomic<int>)uVar4;
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)(pTVar6 + 0xb));
    *(undefined1 *)&pTVar6[0xe].SharedReferenceCount = 1;
    pTVar6[0xb]._padding_ = (longlong)&___7FRawIndexBuffer16or32__6B_;
    pTVar6[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe]._padding_ = 0;
    FStaticMeshVertexBuffer::FStaticMeshVertexBuffer((FStaticMeshVertexBuffer *)(pTVar6 + 0xf));
    FPositionVertexBuffer::FPositionVertexBuffer
              ((FPositionVertexBuffer *)&pTVar6[0x1a].SharedReferenceCount);
    FColorVertexBuffer::FColorVertexBuffer((FColorVertexBuffer *)&pTVar6[0x1f].SharedReferenceCount)
    ;
    FTriangleVertexFactory::FTriangleVertexFactory
              ((FTriangleVertexFactory *)&pTVar6[0x24].SharedReferenceCount,
               (FStaticMeshVertexBuffers *)(pTVar6 + 0xf),param_1);
    pTVar6[0x48]._padding_ = 0;
    pTVar6[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x48].WeakReferenceCount = (atomic<int>)0x0;
    if ((FRenderData *)(pTVar6 + 1) == (FRenderData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FCanvasTriangleRendererItem *)(*pcVar1)();
        return pFVar7;
      }
    }
    (this->Data).Object = (FRenderData *)(pTVar6 + 1);
    (this->Data).SharedReferenceCount.ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  this->bFreezeTime = param_4;
  return this;
}

// AddTriangle @ 1489181c0

int __thiscall
FCanvasTriangleRendererItem::AddTriangle
          (FCanvasTriangleRendererItem *this,FCanvasUVTri *param_1,FHitProxyId param_2)

{
  int *piVar1;
  FRenderData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TArray<FCanvasTriangleRendererItem::FRenderData::FTriangleInst,TSizedDefaultAllocator<32>_>
  *pTVar8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  int local_18;
  undefined4 uStack_14;
  
  if ((this->Data).Object == (FRenderData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  local_a8 = (param_1->V0_Pos).field0_0x0._s_0.X;
  dStack_a0 = (param_1->V0_Pos).field0_0x0._s_0.Y;
  local_98 = (param_1->V0_UV).field0_0x0._s_0.X;
  dStack_90 = (param_1->V0_UV).field0_0x0._s_0.Y;
  pFVar2 = (this->Data).Object;
  pTVar8 = &pFVar2->Triangles;
  local_88 = *(undefined8 *)&(param_1->V0_Color).field0_0x0;
  uStack_80 = *(undefined8 *)((longlong)&(param_1->V0_Color).field0_0x0 + 8);
  local_78 = (param_1->V1_Pos).field0_0x0._s_0.X;
  dStack_70 = (param_1->V1_Pos).field0_0x0._s_0.Y;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  local_68 = (param_1->V1_UV).field0_0x0._s_0.X;
  dStack_60 = (param_1->V1_UV).field0_0x0._s_0.Y;
  local_58 = *(undefined8 *)&(param_1->V1_Color).field0_0x0;
  uStack_50 = *(undefined8 *)((longlong)&(param_1->V1_Color).field0_0x0 + 8);
  local_48 = (param_1->V2_Pos).field0_0x0._s_0.X;
  dStack_40 = (param_1->V2_Pos).field0_0x0._s_0.Y;
  local_38 = (param_1->V2_UV).field0_0x0._s_0.X;
  dStack_30 = (param_1->V2_UV).field0_0x0._s_0.Y;
  local_28 = *(undefined8 *)&(param_1->V2_Color).field0_0x0;
  uStack_20 = *(undefined8 *)((longlong)&(param_1->V2_Color).field0_0x0 + 8);
  local_18 = param_2.Index;
  if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)(pFVar2->Triangles).ArrayMax * 0x98)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (pFVar2->Triangles).ArrayNum;
  piVar1 = &(pFVar2->Triangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&pTVar8->AllocatorInstance,piVar1);
  }
  (pFVar2->Triangles).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6 * 0x98;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar7) = local_a8;
  *(double *)(pFVar3 + lVar7 + 8) = dStack_a0;
  *(double *)(pFVar3 + lVar7 + 0x10) = local_98;
  *(double *)(pFVar3 + lVar7 + 0x10 + 8) = dStack_90;
  *(undefined8 *)(pFVar3 + lVar7 + 0x20) = local_88;
  *(undefined8 *)(pFVar3 + lVar7 + 0x20 + 8) = uStack_80;
  *(double *)(pFVar3 + lVar7 + 0x30) = local_78;
  *(double *)(pFVar3 + lVar7 + 0x30 + 8) = dStack_70;
  *(double *)(pFVar3 + lVar7 + 0x40) = local_68;
  *(double *)(pFVar3 + lVar7 + 0x40 + 8) = dStack_60;
  *(undefined8 *)(pFVar3 + lVar7 + 0x50) = local_58;
  *(undefined8 *)(pFVar3 + lVar7 + 0x50 + 8) = uStack_50;
  *(double *)(pFVar3 + lVar7 + 0x60) = local_48;
  *(double *)(pFVar3 + lVar7 + 0x60 + 8) = dStack_40;
  *(double *)(pFVar3 + lVar7 + 0x70) = local_38;
  *(double *)(pFVar3 + lVar7 + 0x70 + 8) = dStack_30;
  *(undefined8 *)(pFVar3 + lVar7 + 0x80) = local_28;
  *(undefined8 *)(pFVar3 + lVar7 + 0x80 + 8) = uStack_20;
  *(ulonglong *)(pFVar3 + lVar7 + 0x90) = CONCAT44(uStack_14,local_18);
  return iVar6;
}

// GetCanvasTriangleRendererItem @ 148956440

FCanvasTriangleRendererItem * __thiscall
FCanvasTriangleRendererItem::GetCanvasTriangleRendererItem(FCanvasTriangleRendererItem *this)

{
  return this;
}

// IsMatch @ 148967320

bool __thiscall
FCanvasTriangleRendererItem::IsMatch
          (FCanvasTriangleRendererItem *this,FMaterialRenderProxy *param_1,FTransformEntry *param_2)

{
  FRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->Data).Object == (FRenderData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Data).Object;
  if (pFVar1->MaterialRenderProxy == param_1) {
    if (pFVar1 == (FRenderData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((((this->Data).Object)->Transform).MatrixCRC == param_2->MatrixCRC) {
      return true;
    }
  }
  return false;
}

