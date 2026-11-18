// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FSceneView @ 1453ff9e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __thiscall FSceneView::FSceneView(FSceneView *this,FSceneView *param_1)

{
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  *this_00;
  bool bVar1;
  EPrimaryScreenPercentageMethod EVar2;
  int iVar3;
  float fVar4;
  FSceneViewStateInterface *pFVar5;
  ForElementType<UE::Math::TPlane<double>_> FVar6;
  double dVar7;
  longlong lVar8;
  AActor *pAVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined3 uVar12;
  
  *(undefined ***)this = &___7FSceneView__6B_;
  this->Family = param_1->Family;
  pFVar5 = param_1->State;
  this->ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  this->State = pFVar5;
  this->ViewUniformBuffer = param_1->ViewUniformBuffer;
  param_1->ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  this->DynamicMeshElementsShadowCullFrustum = param_1->DynamicMeshElementsShadowCullFrustum;
  dVar7 = (param_1->PreShadowTranslation).field0_0x0._s_0.Y;
  (this->PreShadowTranslation).field0_0x0._s_0.X = (param_1->PreShadowTranslation).field0_0x0._s_0.X
  ;
  (this->PreShadowTranslation).field0_0x0._s_0.Y = dVar7;
  (this->PreShadowTranslation).field0_0x0._s_0.Z = (param_1->PreShadowTranslation).field0_0x0._s_0.Z
  ;
  (this->StereoCullingFrustum).Object = (param_1->StereoCullingFrustum).Object;
  (this->StereoCullingFrustum).SharedReferenceCount.ReferenceController =
       (param_1->StereoCullingFrustum).SharedReferenceCount.ReferenceController;
  (param_1->StereoCullingFrustum).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->StereoCullingFrustum).Object = (FConvexVolume *)0x0;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  lVar8 = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = lVar8;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions)._padding_ = (param_1->SceneViewInitOptions)._padding_;
  (this->SceneViewInitOptions).ViewFamily = (param_1->SceneViewInitOptions).ViewFamily;
  (this->SceneViewInitOptions).SceneViewStateInterface =
       (param_1->SceneViewInitOptions).SceneViewStateInterface;
  (this->SceneViewInitOptions).ExposureSceneViewStateInterface =
       (param_1->SceneViewInitOptions).ExposureSceneViewStateInterface;
  uVar11 = *(undefined4 *)&(param_1->SceneViewInitOptions).ViewActor.field_0x4;
  pAVar9 = (param_1->SceneViewInitOptions).ViewActor.Actor;
  (this->SceneViewInitOptions).ViewActor.ActorUniqueId =
       (param_1->SceneViewInitOptions).ViewActor.ActorUniqueId;
  *(undefined4 *)&(this->SceneViewInitOptions).ViewActor.field_0x4 = uVar11;
  (this->SceneViewInitOptions).ViewActor.Actor = pAVar9;
  (this->SceneViewInitOptions).PlayerIndex = (param_1->SceneViewInitOptions).PlayerIndex;
  (this->SceneViewInitOptions).ViewElementDrawer = (param_1->SceneViewInitOptions).ViewElementDrawer
  ;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->SceneViewInitOptions).BackgroundColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).BackgroundColor.field0_0x0 =
       *(undefined8 *)&(param_1->SceneViewInitOptions).BackgroundColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).BackgroundColor.field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->SceneViewInitOptions).OverlayColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).OverlayColor.field0_0x0 =
       *(undefined8 *)&(param_1->SceneViewInitOptions).OverlayColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).OverlayColor.field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->SceneViewInitOptions).ColorScale.field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).ColorScale.field0_0x0 =
       *(undefined8 *)&(param_1->SceneViewInitOptions).ColorScale.field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ColorScale.field0_0x0 + 8) = uVar10;
  (this->SceneViewInitOptions).StereoPass = (param_1->SceneViewInitOptions).StereoPass;
  (this->SceneViewInitOptions).StereoViewIndex = (param_1->SceneViewInitOptions).StereoViewIndex;
  (this->SceneViewInitOptions).WorldToMetersScale =
       (param_1->SceneViewInitOptions).WorldToMetersScale;
  dVar7 = (param_1->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Y;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.X =
       (param_1->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.X;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Y = dVar7;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Z =
       (param_1->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Z;
  dVar7 = (param_1->SceneViewInitOptions).ViewRotation.Yaw;
  (this->SceneViewInitOptions).ViewRotation.Pitch =
       (param_1->SceneViewInitOptions).ViewRotation.Pitch;
  (this->SceneViewInitOptions).ViewRotation.Yaw = dVar7;
  (this->SceneViewInitOptions).ViewRotation.Roll = (param_1->SceneViewInitOptions).ViewRotation.Roll
  ;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            (&(this->SceneViewInitOptions).HiddenPrimitives,
             &(param_1->SceneViewInitOptions).HiddenPrimitives);
  this_00 = &(this->SceneViewInitOptions).ShowOnlyPrimitives;
  *(undefined8 *)&this_00->field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0xc) =
       0xffffffff;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x2c) =
       0x80;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x30) =
       0xffffffff;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x40) = 0;
  (this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.HashSize = 0;
  if (*(int *)((longlong)&(param_1->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0xc) != -1
     ) {
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
              ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)this_00,
               (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)&(param_1->SceneViewInitOptions).ShowOnlyPrimitives);
  }
  (this->SceneViewInitOptions).CursorPos.field0_0x0 =
       (param_1->SceneViewInitOptions).CursorPos.field0_0x0;
  (this->SceneViewInitOptions).LODDistanceFactor = (param_1->SceneViewInitOptions).LODDistanceFactor
  ;
  (this->SceneViewInitOptions).OverrideFarClippingPlaneDistance =
       (param_1->SceneViewInitOptions).OverrideFarClippingPlaneDistance;
  dVar7 = (param_1->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Y;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.X =
       (param_1->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.X;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Y = dVar7;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Z =
       (param_1->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Z;
  (this->SceneViewInitOptions).bInCameraCut = (param_1->SceneViewInitOptions).bInCameraCut;
  (this->SceneViewInitOptions).bUseFieldOfViewForLOD =
       (param_1->SceneViewInitOptions).bUseFieldOfViewForLOD;
  (this->SceneViewInitOptions).FOV = (param_1->SceneViewInitOptions).FOV;
  (this->SceneViewInitOptions).DesiredFOV = (param_1->SceneViewInitOptions).DesiredFOV;
  fVar4 = (param_1->SceneViewInitOptions).FirstPersonParams.Scale;
  (this->SceneViewInitOptions).FirstPersonParams.FOVCorrectionFactor =
       (param_1->SceneViewInitOptions).FirstPersonParams.FOVCorrectionFactor;
  (this->SceneViewInitOptions).FirstPersonParams.Scale = fVar4;
  uVar12 = *(undefined3 *)&(param_1->SceneViewInitOptions).FirstPersonParams.field_0x9;
  (this->SceneViewInitOptions).FirstPersonParams.bUseParameters =
       (param_1->SceneViewInitOptions).FirstPersonParams.bUseParameters;
  *(undefined3 *)&(this->SceneViewInitOptions).FirstPersonParams.field_0x9 = uVar12;
  (this->SceneViewInitOptions).bIsSceneCapture = (param_1->SceneViewInitOptions).bIsSceneCapture;
  (this->SceneViewInitOptions).bIsSceneCaptureCube =
       (param_1->SceneViewInitOptions).bIsSceneCaptureCube;
  (this->SceneViewInitOptions).bSceneCaptureUsesRayTracing =
       (param_1->SceneViewInitOptions).bSceneCaptureUsesRayTracing;
  (this->SceneViewInitOptions).bIsReflectionCapture =
       (param_1->SceneViewInitOptions).bIsReflectionCapture;
  (this->SceneViewInitOptions).bIsPlanarReflection =
       (param_1->SceneViewInitOptions).bIsPlanarReflection;
  (this->SceneViewInitOptions).bExcludeFromSceneTextureExtents =
       (param_1->SceneViewInitOptions).bExcludeFromSceneTextureExtents;
  (this->SceneViewInitOptions).OverridePrimaryResolutionFraction =
       (param_1->SceneViewInitOptions).OverridePrimaryResolutionFraction;
  (this->SceneViewInitOptions).OverscanResolutionFraction =
       (param_1->SceneViewInitOptions).OverscanResolutionFraction;
  (this->SceneViewInitOptions).CropFraction = (param_1->SceneViewInitOptions).CropFraction;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0 =
       *(undefined8 *)&(param_1->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0 + 8) =
       uVar10;
  uVar11 = *(undefined4 *)&(param_1->ViewActor).field_0x4;
  pAVar9 = (param_1->ViewActor).Actor;
  (this->ViewActor).ActorUniqueId = (param_1->ViewActor).ActorUniqueId;
  *(undefined4 *)&(this->ViewActor).field_0x4 = uVar11;
  (this->ViewActor).Actor = pAVar9;
  this->PlayerIndex = param_1->PlayerIndex;
  this->Drawer = param_1->Drawer;
  (this->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0;
  this->MaxShadowCascades = param_1->MaxShadowCascades;
  memcpy(&this->ViewMatrices,&param_1->ViewMatrices,0x880);
  dVar7 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = dVar7;
  (this->ViewLocation).field0_0x0._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  dVar7 = (param_1->ViewRotation).Yaw;
  (this->ViewRotation).Pitch = (param_1->ViewRotation).Pitch;
  (this->ViewRotation).Yaw = dVar7;
  (this->ViewRotation).Roll = (param_1->ViewRotation).Roll;
  dVar7 = (param_1->BaseHmdOrientation).Y;
  (this->BaseHmdOrientation).X = (param_1->BaseHmdOrientation).X;
  (this->BaseHmdOrientation).Y = dVar7;
  dVar7 = (param_1->BaseHmdOrientation).W;
  (this->BaseHmdOrientation).Z = (param_1->BaseHmdOrientation).Z;
  (this->BaseHmdOrientation).W = dVar7;
  dVar7 = (param_1->BaseHmdLocation).field0_0x0._s_0.Y;
  (this->BaseHmdLocation).field0_0x0._s_0.X = (param_1->BaseHmdLocation).field0_0x0._s_0.X;
  (this->BaseHmdLocation).field0_0x0._s_0.Y = dVar7;
  (this->BaseHmdLocation).field0_0x0._s_0.Z = (param_1->BaseHmdLocation).field0_0x0._s_0.Z;
  this->WorldToMetersScale = param_1->WorldToMetersScale;
  (this->PreviousViewTransform).bIsSet = false;
  bVar1 = (param_1->PreviousViewTransform).bIsSet;
  (this->PreviousViewTransform).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar7 = (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar7;
    dVar7 = (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar7;
    dVar7 = (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar7;
    dVar7 = (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar7;
    dVar7 = (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar7;
    dVar7 = (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar7;
  }
  this->ShadowViewMatrices = param_1->ShadowViewMatrices;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[0][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[0][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[0][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[0][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][3] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[1][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[1][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[1][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[1][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][3] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[2][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[2][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[2][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[2][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][3] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[3][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[3][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[3][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[3][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][3] = dVar7;
  uVar10 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->OverlayColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverlayColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverlayColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverlayColor).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->ColorScale).field0_0x0 + 8);
  *(undefined8 *)&(this->ColorScale).field0_0x0 = *(undefined8 *)&(param_1->ColorScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorScale).field0_0x0 + 8) = uVar10;
  this->StereoPass = param_1->StereoPass;
  this->StereoViewIndex = param_1->StereoViewIndex;
  this->PrimaryViewIndex = param_1->PrimaryViewIndex;
  this->bAllowCrossGPUTransfer = param_1->bAllowCrossGPUTransfer;
  this->bOverrideGPUMask = param_1->bOverrideGPUMask;
  (this->GPUMask).GPUMask = (param_1->GPUMask).GPUMask;
  this->bRenderFirstInstanceOnly = param_1->bRenderFirstInstanceOnly;
  this->bUseFieldOfViewForLOD = param_1->bUseFieldOfViewForLOD;
  this->bHMDHiddenAreaMaskActive = param_1->bHMDHiddenAreaMaskActive;
  this->FOV = param_1->FOV;
  this->DesiredFOV = param_1->DesiredFOV;
  this->DrawDynamicFlags = param_1->DrawDynamicFlags;
  this->CurrentBufferVisualizationMode = param_1->CurrentBufferVisualizationMode;
  this->CurrentNaniteVisualizationMode = param_1->CurrentNaniteVisualizationMode;
  this->CurrentLumenVisualizationMode = param_1->CurrentLumenVisualizationMode;
  this->CurrentSubstrateVisualizationMode = param_1->CurrentSubstrateVisualizationMode;
  this->CurrentGroomVisualizationMode = param_1->CurrentGroomVisualizationMode;
  this->CurrentVirtualShadowMapVisualizationMode = param_1->CurrentVirtualShadowMapVisualizationMode
  ;
  this->CurrentVirtualTextureVisualizationMode = param_1->CurrentVirtualTextureVisualizationMode;
  this->CurrentVisualizeCalibrationColorMaterialName =
       param_1->CurrentVisualizeCalibrationColorMaterialName;
  this->CurrentVisualizeCalibrationGrayscaleMaterialName =
       param_1->CurrentVisualizeCalibrationGrayscaleMaterialName;
  this->CurrentVisualizeCalibrationCustomMaterialName =
       param_1->CurrentVisualizeCalibrationCustomMaterialName;
  this->CurrentGPUSkinCacheVisualizationMode = param_1->CurrentGPUSkinCacheVisualizationMode;
  uVar10 = *(undefined8 *)((longlong)&(param_1->DiffuseOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(this->DiffuseOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->DiffuseOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(this->DiffuseOverrideParameter).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(this->SpecularOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->SpecularOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(this->SpecularOverrideParameter).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->NormalOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(this->NormalOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->NormalOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalOverrideParameter).field0_0x0 + 8) = uVar10;
  (this->RoughnessOverrideParameter).field0_0x0 = (param_1->RoughnessOverrideParameter).field0_0x0;
  (this->AmbientOcclusionOverrideParameter).field0_0x0 =
       (param_1->AmbientOcclusionOverrideParameter).field0_0x0;
  this->MaterialTextureMipBias = param_1->MaterialTextureMipBias;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            (&this->HiddenPrimitives,&param_1->HiddenPrimitives);
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
  if (*(int *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
              ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)&this->ShowOnlyPrimitives,
               (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)&param_1->ShowOnlyPrimitives);
  }
  this->bAllowTemporalJitter = param_1->bAllowTemporalJitter;
  (this->ViewFrustum).Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if ((param_1->ViewFrustum).Planes.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    memmove(&this->ViewFrustum,&param_1->ViewFrustum,0xc0);
  }
  FVar6 = (this->ViewFrustum).Planes.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->ViewFrustum).Planes.AllocatorInstance.SecondaryData =
       (param_1->ViewFrustum).Planes.AllocatorInstance.SecondaryData;
  (param_1->ViewFrustum).Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ViewFrustum).Planes.ArrayNum = (param_1->ViewFrustum).Planes.ArrayNum;
  (this->ViewFrustum).Planes.ArrayMax = (param_1->ViewFrustum).Planes.ArrayMax;
  (param_1->ViewFrustum).Planes.ArrayNum = 0;
  (param_1->ViewFrustum).Planes.ArrayMax = 6;
  (this->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if ((param_1->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    memmove(&(this->ViewFrustum).PermutedPlanes,&(param_1->ViewFrustum).PermutedPlanes,0x100);
  }
  FVar6 = (this->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData =
       (param_1->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData;
  (param_1->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ViewFrustum).PermutedPlanes.ArrayNum = (param_1->ViewFrustum).PermutedPlanes.ArrayNum;
  (this->ViewFrustum).PermutedPlanes.ArrayMax = (param_1->ViewFrustum).PermutedPlanes.ArrayMax;
  (param_1->ViewFrustum).PermutedPlanes.ArrayNum = 0;
  (param_1->ViewFrustum).PermutedPlanes.ArrayMax = 8;
  this->CullingFrustum = param_1->CullingFrustum;
  this->bHasNearClippingPlane = param_1->bHasNearClippingPlane;
  lVar8 = (param_1->NearClippingPlane)._padding_;
  (this->NearClippingPlane)._padding_ = (param_1->NearClippingPlane)._padding_;
  (this->NearClippingPlane)._padding_ = lVar8;
  dVar7 = (param_1->NearClippingPlane).W;
  (this->NearClippingPlane)._padding_ = (param_1->NearClippingPlane)._padding_;
  (this->NearClippingPlane).W = dVar7;
  this->NearClippingDistance = param_1->NearClippingDistance;
  dVar7 = (param_1->CullingOrigin).field0_0x0._s_0.Y;
  (this->CullingOrigin).field0_0x0._s_0.X = (param_1->CullingOrigin).field0_0x0._s_0.X;
  (this->CullingOrigin).field0_0x0._s_0.Y = dVar7;
  (this->CullingOrigin).field0_0x0._s_0.Z = (param_1->CullingOrigin).field0_0x0._s_0.Z;
  this->bReverseCulling = param_1->bReverseCulling;
  uVar10 = *(undefined8 *)((longlong)&(param_1->InvDeviceZToWorldZTransform).field0_0x0 + 8);
  *(undefined8 *)&(this->InvDeviceZToWorldZTransform).field0_0x0 =
       *(undefined8 *)&(param_1->InvDeviceZToWorldZTransform).field0_0x0;
  *(undefined8 *)((longlong)&(this->InvDeviceZToWorldZTransform).field0_0x0 + 8) = uVar10;
  dVar7 = (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Y;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.X =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.X;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Y = dVar7;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Z =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Z;
  this->LODDistanceFactor = param_1->LODDistanceFactor;
  this->bCameraCut = param_1->bCameraCut;
  (this->CursorPos).field0_0x0 = (param_1->CursorPos).field0_0x0;
  this->bIsGameView = param_1->bIsGameView;
  this->bIsViewInfo = param_1->bIsViewInfo;
  this->CustomRenderPass = param_1->CustomRenderPass;
  this->bIsSceneCapture = param_1->bIsSceneCapture;
  this->bIsSceneCaptureCube = param_1->bIsSceneCaptureCube;
  this->bEyeAdaptationAllViewPixels = param_1->bEyeAdaptationAllViewPixels;
  this->bSceneCaptureUsesRayTracing = param_1->bSceneCaptureUsesRayTracing;
  this->bIsReflectionCapture = param_1->bIsReflectionCapture;
  this->bIsPlanarReflection = param_1->bIsPlanarReflection;
  this->bIsVirtualTexture = param_1->bIsVirtualTexture;
  this->bIsOfflineRender = param_1->bIsOfflineRender;
  this->bRenderSceneTwoSided = param_1->bRenderSceneTwoSided;
  this->bIsLocked = param_1->bIsLocked;
  this->bStaticSceneOnly = param_1->bStaticSceneOnly;
  this->bIsInstancedStereoEnabled = param_1->bIsInstancedStereoEnabled;
  this->bIsMultiViewportEnabled = param_1->bIsMultiViewportEnabled;
  this->bIsMobileMultiViewEnabled = param_1->bIsMobileMultiViewEnabled;
  this->bShouldBindInstancedViewUB = param_1->bShouldBindInstancedViewUB;
  this->bIsSinglePassStereo = param_1->bIsSinglePassStereo;
  this->bForceCameraVisibilityReset = param_1->bForceCameraVisibilityReset;
  this->bDisableDistanceBasedFadeTransitions = param_1->bDisableDistanceBasedFadeTransitions;
  this->bExcludeFromSceneTextureExtents = param_1->bExcludeFromSceneTextureExtents;
  this->bForcePathTracerReset = param_1->bForcePathTracerReset;
  this->PathTracerSeedOffset = param_1->PathTracerSeedOffset;
  this->UnderwaterDepth = param_1->UnderwaterDepth;
  this->WaterIntersection = param_1->WaterIntersection;
  lVar8 = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane)._padding_ = lVar8;
  dVar7 = (param_1->GlobalClippingPlane).W;
  (this->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane).W = dVar7;
  (this->CameraConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CameraConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->CameraConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CameraConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0;
  dVar7 = (param_1->TranslucentSortAxis).field0_0x0._s_0.Y;
  (this->TranslucentSortAxis).field0_0x0._s_0.X = (param_1->TranslucentSortAxis).field0_0x0._s_0.X;
  (this->TranslucentSortAxis).field0_0x0._s_0.Y = dVar7;
  (this->TranslucentSortAxis).field0_0x0._s_0.Z = (param_1->TranslucentSortAxis).field0_0x0._s_0.Z;
  (this->TranslucentSortPolicy).Value = (param_1->TranslucentSortPolicy).Value;
  (this->OverrideFrameIndexValue).bIsSet = false;
  bVar1 = (param_1->OverrideFrameIndexValue).bIsSet;
  (this->OverrideFrameIndexValue).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->OverrideFrameIndexValue).TypedValue = (param_1->OverrideFrameIndexValue).TypedValue;
  }
  (this->OverrideOutputFrameIndexValue).bIsSet = false;
  bVar1 = (param_1->OverrideOutputFrameIndexValue).bIsSet;
  (this->OverrideOutputFrameIndexValue).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->OverrideOutputFrameIndexValue).TypedValue =
         (param_1->OverrideOutputFrameIndexValue).TypedValue;
  }
  uVar10 = *(undefined8 *)((longlong)&(param_1->LensPrincipalPointOffsetScale).field0_0x0 + 8);
  *(undefined8 *)&(this->LensPrincipalPointOffsetScale).field0_0x0 =
       *(undefined8 *)&(param_1->LensPrincipalPointOffsetScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->LensPrincipalPointOffsetScale).field0_0x0 + 8) = uVar10;
  (this->bCameraMotionBlur).bIsSet = false;
  bVar1 = (param_1->bCameraMotionBlur).bIsSet;
  (this->bCameraMotionBlur).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->bCameraMotionBlur).TypedValue = (param_1->bCameraMotionBlur).TypedValue;
  }
  (this->ClipToPrevClipOverride).bIsSet = false;
  bVar1 = (param_1->ClipToPrevClipOverride).bIsSet;
  (this->ClipToPrevClipOverride).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[0][1];
    (this->ClipToPrevClipOverride).TypedValue.M[0][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[0][0];
    (this->ClipToPrevClipOverride).TypedValue.M[0][1] = dVar7;
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[0][3];
    (this->ClipToPrevClipOverride).TypedValue.M[0][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[0][2];
    (this->ClipToPrevClipOverride).TypedValue.M[0][3] = dVar7;
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[1][1];
    (this->ClipToPrevClipOverride).TypedValue.M[1][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[1][0];
    (this->ClipToPrevClipOverride).TypedValue.M[1][1] = dVar7;
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[1][3];
    (this->ClipToPrevClipOverride).TypedValue.M[1][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[1][2];
    (this->ClipToPrevClipOverride).TypedValue.M[1][3] = dVar7;
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[2][1];
    (this->ClipToPrevClipOverride).TypedValue.M[2][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[2][0];
    (this->ClipToPrevClipOverride).TypedValue.M[2][1] = dVar7;
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[2][3];
    (this->ClipToPrevClipOverride).TypedValue.M[2][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[2][2];
    (this->ClipToPrevClipOverride).TypedValue.M[2][3] = dVar7;
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[3][1];
    (this->ClipToPrevClipOverride).TypedValue.M[3][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[3][0];
    (this->ClipToPrevClipOverride).TypedValue.M[3][1] = dVar7;
    dVar7 = (param_1->ClipToPrevClipOverride).TypedValue.M[3][3];
    (this->ClipToPrevClipOverride).TypedValue.M[3][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[3][2];
    (this->ClipToPrevClipOverride).TypedValue.M[3][3] = dVar7;
  }
  FPostProcessSettings::FPostProcessSettings
            ((FPostProcessSettings *)&this->FinalPostProcessSettings,
             (FPostProcessSettings *)&param_1->FinalPostProcessSettings);
  (this->FinalPostProcessSettings).ContributingCubemaps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).ContributingCubemaps.AllocatorInstance.Data =
       (param_1->FinalPostProcessSettings).ContributingCubemaps.AllocatorInstance.Data;
  (param_1->FinalPostProcessSettings).ContributingCubemaps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).ContributingCubemaps.ArrayNum =
       (param_1->FinalPostProcessSettings).ContributingCubemaps.ArrayNum;
  (this->FinalPostProcessSettings).ContributingCubemaps.ArrayMax =
       (param_1->FinalPostProcessSettings).ContributingCubemaps.ArrayMax;
  (param_1->FinalPostProcessSettings).ContributingCubemaps.ArrayNum = 0;
  (param_1->FinalPostProcessSettings).ContributingCubemaps.ArrayMax = 0;
  (this->FinalPostProcessSettings).ContributingLUTs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).ContributingLUTs.AllocatorInstance.Data =
       (param_1->FinalPostProcessSettings).ContributingLUTs.AllocatorInstance.Data;
  (param_1->FinalPostProcessSettings).ContributingLUTs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).ContributingLUTs.ArrayNum =
       (param_1->FinalPostProcessSettings).ContributingLUTs.ArrayNum;
  (this->FinalPostProcessSettings).ContributingLUTs.ArrayMax =
       (param_1->FinalPostProcessSettings).ContributingLUTs.ArrayMax;
  (param_1->FinalPostProcessSettings).ContributingLUTs.ArrayNum = 0;
  (param_1->FinalPostProcessSettings).ContributingLUTs.ArrayMax = 0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.AllocatorInstance.Data =
       (param_1->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.AllocatorInstance.
       Data;
  (param_1->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum =
       (param_1->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax =
       (param_1->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax;
  (param_1->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum = 0;
  (param_1->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax = 0;
  (this->FinalPostProcessSettings).VisualizeCalibrationColorMaterial =
       (param_1->FinalPostProcessSettings).VisualizeCalibrationColorMaterial;
  (this->FinalPostProcessSettings).VisualizeCalibrationGrayscaleMaterial =
       (param_1->FinalPostProcessSettings).VisualizeCalibrationGrayscaleMaterial;
  (this->FinalPostProcessSettings).VisualizeCalibrationCustomMaterial =
       (param_1->FinalPostProcessSettings).VisualizeCalibrationCustomMaterial;
  (this->FinalPostProcessSettings).HighResScreenshotMaterial =
       (param_1->FinalPostProcessSettings).HighResScreenshotMaterial;
  (this->FinalPostProcessSettings).HighResScreenshotMaskMaterial =
       (param_1->FinalPostProcessSettings).HighResScreenshotMaskMaterial;
  (this->FinalPostProcessSettings).HighResScreenshotCaptureRegionMaterial =
       (param_1->FinalPostProcessSettings).HighResScreenshotCaptureRegionMaterial;
  bVar1 = (param_1->FinalPostProcessSettings).bBufferVisualizationDumpRequired;
  (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).bBufferVisualizationDumpRequired = bVar1;
  (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.AllocatorInstance.Data =
       (param_1->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.
       AllocatorInstance.Data;
  (param_1->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayNum =
       (param_1->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayNum;
  (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayMax =
       (param_1->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayMax;
  (param_1->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayNum = 0;
  (param_1->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayMax = 0;
  bVar1 = (param_1->FinalPostProcessSettings).bBufferVisualizationOverviewTargetIsSelected;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).bBufferVisualizationOverviewTargetIsSelected = bVar1;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  AllocatorInstance.Data =
       (param_1->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.
       Data.AllocatorInstance.Data;
  (param_1->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  ArrayNum = (param_1->FinalPostProcessSettings).
             BufferVisualizationOverviewSelectedTargetMaterialName.Data.ArrayNum;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  ArrayMax = (param_1->FinalPostProcessSettings).
             BufferVisualizationOverviewSelectedTargetMaterialName.Data.ArrayMax;
  (param_1->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  ArrayNum = 0;
  (param_1->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  ArrayMax = 0;
  TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
              *)&(this->FinalPostProcessSettings).BufferVisualizationPipes,
             (TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
              *)&(param_1->FinalPostProcessSettings).BufferVisualizationPipes);
  (this->FinalPostProcessSettings).BlendableManager.Scratch.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BlendableManager.Scratch.AllocatorInstance.Data =
       (param_1->FinalPostProcessSettings).BlendableManager.Scratch.AllocatorInstance.Data;
  (param_1->FinalPostProcessSettings).BlendableManager.Scratch.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BlendableManager.Scratch.ArrayNum =
       (param_1->FinalPostProcessSettings).BlendableManager.Scratch.ArrayNum;
  (this->FinalPostProcessSettings).BlendableManager.Scratch.ArrayMax =
       (param_1->FinalPostProcessSettings).BlendableManager.Scratch.ArrayMax;
  (param_1->FinalPostProcessSettings).BlendableManager.Scratch.ArrayNum = 0;
  (param_1->FinalPostProcessSettings).BlendableManager.Scratch.ArrayMax = 0;
  (this->FinalPostProcessDebugInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessDebugInfo).AllocatorInstance.Data =
       (param_1->FinalPostProcessDebugInfo).AllocatorInstance.Data;
  (param_1->FinalPostProcessDebugInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessDebugInfo).ArrayNum = (param_1->FinalPostProcessDebugInfo).ArrayNum;
  (this->FinalPostProcessDebugInfo).ArrayMax = (param_1->FinalPostProcessDebugInfo).ArrayMax;
  (param_1->FinalPostProcessDebugInfo).ArrayNum = 0;
  (param_1->FinalPostProcessDebugInfo).ArrayMax = 0;
  this->AntiAliasingMethod = param_1->AntiAliasingMethod;
  EVar2 = param_1->PrimaryScreenPercentageMethod;
  (this->AtmosphereTransmittanceTexture).Reference = (FRHITexture *)0x0;
  this->PrimaryScreenPercentageMethod = EVar2;
  (this->AtmosphereTransmittanceTexture).Reference =
       (param_1->AtmosphereTransmittanceTexture).Reference;
  (param_1->AtmosphereTransmittanceTexture).Reference = (FRHITexture *)0x0;
  (this->AtmosphereIrradianceTexture).Reference = (FRHITexture *)0x0;
  (this->AtmosphereIrradianceTexture).Reference = (param_1->AtmosphereIrradianceTexture).Reference;
  (param_1->AtmosphereIrradianceTexture).Reference = (FRHITexture *)0x0;
  (this->AtmosphereInscatterTexture).Reference = (FRHITexture *)0x0;
  (this->AtmosphereInscatterTexture).Reference = (param_1->AtmosphereInscatterTexture).Reference;
  (param_1->AtmosphereInscatterTexture).Reference = (FRHITexture *)0x0;
  (this->WaterIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->WaterIndirectionBuffer).Reference = (param_1->WaterIndirectionBuffer).Reference;
  (param_1->WaterIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->WaterDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->WaterDataBuffer).Reference = (param_1->WaterDataBuffer).Reference;
  (param_1->WaterDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  iVar3 = param_1->WaterInfoTextureViewIndex;
  (this->WaterInfoTextureRenderingParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->WaterInfoTextureViewIndex = iVar3;
  (this->WaterInfoTextureRenderingParams).AllocatorInstance.Data =
       (param_1->WaterInfoTextureRenderingParams).AllocatorInstance.Data;
  (param_1->WaterInfoTextureRenderingParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->WaterInfoTextureRenderingParams).ArrayNum =
       (param_1->WaterInfoTextureRenderingParams).ArrayNum;
  (this->WaterInfoTextureRenderingParams).ArrayMax =
       (param_1->WaterInfoTextureRenderingParams).ArrayMax;
  (param_1->WaterInfoTextureRenderingParams).ArrayNum = 0;
  (param_1->WaterInfoTextureRenderingParams).ArrayMax = 0;
  (this->LandscapeIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->LandscapeIndirectionBuffer).Reference = (param_1->LandscapeIndirectionBuffer).Reference;
  (param_1->LandscapeIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->LandscapePerComponentDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->LandscapePerComponentDataBuffer).Reference =
       (param_1->LandscapePerComponentDataBuffer).Reference;
  (param_1->LandscapePerComponentDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  this->bEnableDynamicCocOffset = param_1->bEnableDynamicCocOffset;
  fVar4 = param_1->InFocusDistance;
  (this->DynamicCocOffsetLUT).Reference = (FRHITexture *)0x0;
  this->InFocusDistance = fVar4;
  (this->DynamicCocOffsetLUT).Reference = (param_1->DynamicCocOffsetLUT).Reference;
  (param_1->DynamicCocOffsetLUT).Reference = (FRHITexture *)0x0;
  this->FeatureLevel = param_1->FeatureLevel;
  this->InstanceFactor = param_1->InstanceFactor;
  this->bAllowRayTracing = param_1->bAllowRayTracing;
  this->ViewLightingChannelMask = param_1->ViewLightingChannelMask;
  this->Aspects = param_1->Aspects;
  this->SnapshotOriginView = param_1->SnapshotOriginView;
  this->CurrentRayTracingDebugVisualizationMode = param_1->CurrentRayTracingDebugVisualizationMode;
  this->EyeAdaptationViewState = param_1->EyeAdaptationViewState;
  this->InstancedViewUniformBuffer = (TUniformBufferRef<FInstancedViewUniformShaderParameters>)0x0;
  this->InstancedViewUniformBuffer = param_1->InstancedViewUniformBuffer;
  param_1->InstancedViewUniformBuffer =
       (TUniformBufferRef<FInstancedViewUniformShaderParameters>)0x0;
  return this;
}

// FSceneView @ 145400b20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __thiscall FSceneView::FSceneView(FSceneView *this,FSceneView *param_1)

{
  int *piVar1;
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  *this_00;
  TArray<FPostProcessSettingsDebugInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSceneView::FWaterInfoTextureRenderingParams,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  TUniformBufferRef<FViewUniformShaderParameters> this_01;
  TReferenceControllerBase<1> *pTVar7;
  FPostProcessSettingsDebugInfo *pFVar8;
  FRHITexture *pFVar9;
  FRHIShaderResourceView *pFVar10;
  FWaterInfoTextureRenderingParams *pFVar11;
  TUniformBufferRef<FInstancedViewUniformShaderParameters> this_02;
  double dVar12;
  AActor *pAVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 uVar16;
  
  *(undefined ***)this = &___7FSceneView__6B_;
  this->Family = param_1->Family;
  this->State = param_1->State;
  this->ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  this_01 = param_1->ViewUniformBuffer;
  this->ViewUniformBuffer = this_01;
  if (this_01 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  this->DynamicMeshElementsShadowCullFrustum = param_1->DynamicMeshElementsShadowCullFrustum;
  dVar12 = (param_1->PreShadowTranslation).field0_0x0._s_0.Y;
  (this->PreShadowTranslation).field0_0x0._s_0.X = (param_1->PreShadowTranslation).field0_0x0._s_0.X
  ;
  (this->PreShadowTranslation).field0_0x0._s_0.Y = dVar12;
  (this->PreShadowTranslation).field0_0x0._s_0.Z = (param_1->PreShadowTranslation).field0_0x0._s_0.Z
  ;
  (this->StereoCullingFrustum).Object = (param_1->StereoCullingFrustum).Object;
  pTVar7 = (param_1->StereoCullingFrustum).SharedReferenceCount.ReferenceController;
  (this->StereoCullingFrustum).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewInitOptions::FSceneViewInitOptions
            (&this->SceneViewInitOptions,&param_1->SceneViewInitOptions);
  uVar16 = *(undefined4 *)&(param_1->ViewActor).field_0x4;
  pAVar13 = (param_1->ViewActor).Actor;
  (this->ViewActor).ActorUniqueId = (param_1->ViewActor).ActorUniqueId;
  *(undefined4 *)&(this->ViewActor).field_0x4 = uVar16;
  (this->ViewActor).Actor = pAVar13;
  this->PlayerIndex = param_1->PlayerIndex;
  this->Drawer = param_1->Drawer;
  (this->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0;
  this->MaxShadowCascades = param_1->MaxShadowCascades;
  memcpy(&this->ViewMatrices,&param_1->ViewMatrices,0x880);
  dVar12 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = dVar12;
  (this->ViewLocation).field0_0x0._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  dVar12 = (param_1->ViewRotation).Yaw;
  (this->ViewRotation).Pitch = (param_1->ViewRotation).Pitch;
  (this->ViewRotation).Yaw = dVar12;
  (this->ViewRotation).Roll = (param_1->ViewRotation).Roll;
  dVar12 = (param_1->BaseHmdOrientation).Y;
  (this->BaseHmdOrientation).X = (param_1->BaseHmdOrientation).X;
  (this->BaseHmdOrientation).Y = dVar12;
  dVar12 = (param_1->BaseHmdOrientation).W;
  (this->BaseHmdOrientation).Z = (param_1->BaseHmdOrientation).Z;
  (this->BaseHmdOrientation).W = dVar12;
  dVar12 = (param_1->BaseHmdLocation).field0_0x0._s_0.Y;
  (this->BaseHmdLocation).field0_0x0._s_0.X = (param_1->BaseHmdLocation).field0_0x0._s_0.X;
  (this->BaseHmdLocation).field0_0x0._s_0.Y = dVar12;
  (this->BaseHmdLocation).field0_0x0._s_0.Z = (param_1->BaseHmdLocation).field0_0x0._s_0.Z;
  fVar5 = param_1->WorldToMetersScale;
  (this->PreviousViewTransform).bIsSet = false;
  this->WorldToMetersScale = fVar5;
  bVar4 = (param_1->PreviousViewTransform).bIsSet;
  (this->PreviousViewTransform).bIsSet = bVar4;
  if (bVar4 != false) {
    dVar12 = (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar12;
    dVar12 = (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar12;
    dVar12 = (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar12;
  }
  this->ShadowViewMatrices = param_1->ShadowViewMatrices;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[0][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[0][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][1] = dVar12;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[0][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[0][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][3] = dVar12;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[1][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[1][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][1] = dVar12;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[1][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[1][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][3] = dVar12;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[2][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[2][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][1] = dVar12;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[2][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[2][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][3] = dVar12;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[3][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[3][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][1] = dVar12;
  dVar12 = (param_1->ProjectionMatrixUnadjustedForRHI).M[3][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[3][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][3] = dVar12;
  uVar14 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&(param_1->OverlayColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverlayColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverlayColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverlayColor).field0_0x0 + 8) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&(param_1->ColorScale).field0_0x0 + 8);
  *(undefined8 *)&(this->ColorScale).field0_0x0 = *(undefined8 *)&(param_1->ColorScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorScale).field0_0x0 + 8) = uVar14;
  this->StereoPass = param_1->StereoPass;
  this->StereoViewIndex = param_1->StereoViewIndex;
  this->PrimaryViewIndex = param_1->PrimaryViewIndex;
  this->bAllowCrossGPUTransfer = param_1->bAllowCrossGPUTransfer;
  this->bOverrideGPUMask = param_1->bOverrideGPUMask;
  (this->GPUMask).GPUMask = (param_1->GPUMask).GPUMask;
  this->bRenderFirstInstanceOnly = param_1->bRenderFirstInstanceOnly;
  this->bUseFieldOfViewForLOD = param_1->bUseFieldOfViewForLOD;
  this->bHMDHiddenAreaMaskActive = param_1->bHMDHiddenAreaMaskActive;
  this->FOV = param_1->FOV;
  this->DesiredFOV = param_1->DesiredFOV;
  this->DrawDynamicFlags = param_1->DrawDynamicFlags;
  this->CurrentBufferVisualizationMode = param_1->CurrentBufferVisualizationMode;
  this->CurrentNaniteVisualizationMode = param_1->CurrentNaniteVisualizationMode;
  this->CurrentLumenVisualizationMode = param_1->CurrentLumenVisualizationMode;
  this->CurrentSubstrateVisualizationMode = param_1->CurrentSubstrateVisualizationMode;
  this->CurrentGroomVisualizationMode = param_1->CurrentGroomVisualizationMode;
  this->CurrentVirtualShadowMapVisualizationMode = param_1->CurrentVirtualShadowMapVisualizationMode
  ;
  this->CurrentVirtualTextureVisualizationMode = param_1->CurrentVirtualTextureVisualizationMode;
  this->CurrentVisualizeCalibrationColorMaterialName =
       param_1->CurrentVisualizeCalibrationColorMaterialName;
  this->CurrentVisualizeCalibrationGrayscaleMaterialName =
       param_1->CurrentVisualizeCalibrationGrayscaleMaterialName;
  this->CurrentVisualizeCalibrationCustomMaterialName =
       param_1->CurrentVisualizeCalibrationCustomMaterialName;
  this->CurrentGPUSkinCacheVisualizationMode = param_1->CurrentGPUSkinCacheVisualizationMode;
  uVar14 = *(undefined8 *)((longlong)&(param_1->DiffuseOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(this->DiffuseOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->DiffuseOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(this->DiffuseOverrideParameter).field0_0x0 + 8) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(this->SpecularOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->SpecularOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(this->SpecularOverrideParameter).field0_0x0 + 8) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&(param_1->NormalOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(this->NormalOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->NormalOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalOverrideParameter).field0_0x0 + 8) = uVar14;
  (this->RoughnessOverrideParameter).field0_0x0 = (param_1->RoughnessOverrideParameter).field0_0x0;
  (this->AmbientOcclusionOverrideParameter).field0_0x0 =
       (param_1->AmbientOcclusionOverrideParameter).field0_0x0;
  this->MaterialTextureMipBias = param_1->MaterialTextureMipBias;
  *(undefined8 *)&(this->HiddenPrimitives).Elements = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x34 = 0;
  (this->HiddenPrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HiddenPrimitives).HashSize = 0;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  operator=(&this->HiddenPrimitives,&param_1->HiddenPrimitives);
  this_00 = &this->ShowOnlyPrimitives;
  *(undefined8 *)&this_00->field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
  (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
  if (*(int *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
    *(undefined8 *)&this_00->field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
    (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    operator=((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
               *)&param_1->ShowOnlyPrimitives);
  }
  this->bAllowTemporalJitter = param_1->bAllowTemporalJitter;
  FConvexVolume::FConvexVolume(&this->ViewFrustum,&param_1->ViewFrustum);
  this->CullingFrustum = param_1->CullingFrustum;
  this->bHasNearClippingPlane = param_1->bHasNearClippingPlane;
  lVar15 = (param_1->NearClippingPlane)._padding_;
  (this->NearClippingPlane)._padding_ = (param_1->NearClippingPlane)._padding_;
  (this->NearClippingPlane)._padding_ = lVar15;
  dVar12 = (param_1->NearClippingPlane).W;
  (this->NearClippingPlane)._padding_ = (param_1->NearClippingPlane)._padding_;
  (this->NearClippingPlane).W = dVar12;
  this->NearClippingDistance = param_1->NearClippingDistance;
  dVar12 = (param_1->CullingOrigin).field0_0x0._s_0.Y;
  (this->CullingOrigin).field0_0x0._s_0.X = (param_1->CullingOrigin).field0_0x0._s_0.X;
  (this->CullingOrigin).field0_0x0._s_0.Y = dVar12;
  (this->CullingOrigin).field0_0x0._s_0.Z = (param_1->CullingOrigin).field0_0x0._s_0.Z;
  this->bReverseCulling = param_1->bReverseCulling;
  uVar14 = *(undefined8 *)((longlong)&(param_1->InvDeviceZToWorldZTransform).field0_0x0 + 8);
  *(undefined8 *)&(this->InvDeviceZToWorldZTransform).field0_0x0 =
       *(undefined8 *)&(param_1->InvDeviceZToWorldZTransform).field0_0x0;
  *(undefined8 *)((longlong)&(this->InvDeviceZToWorldZTransform).field0_0x0 + 8) = uVar14;
  dVar12 = (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Y;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.X =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.X;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Y = dVar12;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Z =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Z;
  this->LODDistanceFactor = param_1->LODDistanceFactor;
  this->bCameraCut = param_1->bCameraCut;
  (this->CursorPos).field0_0x0 = (param_1->CursorPos).field0_0x0;
  this->bIsGameView = param_1->bIsGameView;
  this->bIsViewInfo = param_1->bIsViewInfo;
  this->CustomRenderPass = param_1->CustomRenderPass;
  this->bIsSceneCapture = param_1->bIsSceneCapture;
  this->bIsSceneCaptureCube = param_1->bIsSceneCaptureCube;
  this->bEyeAdaptationAllViewPixels = param_1->bEyeAdaptationAllViewPixels;
  this->bSceneCaptureUsesRayTracing = param_1->bSceneCaptureUsesRayTracing;
  this->bIsReflectionCapture = param_1->bIsReflectionCapture;
  this->bIsPlanarReflection = param_1->bIsPlanarReflection;
  this->bIsVirtualTexture = param_1->bIsVirtualTexture;
  this->bIsOfflineRender = param_1->bIsOfflineRender;
  this->bRenderSceneTwoSided = param_1->bRenderSceneTwoSided;
  this->bIsLocked = param_1->bIsLocked;
  this->bStaticSceneOnly = param_1->bStaticSceneOnly;
  this->bIsInstancedStereoEnabled = param_1->bIsInstancedStereoEnabled;
  this->bIsMultiViewportEnabled = param_1->bIsMultiViewportEnabled;
  this->bIsMobileMultiViewEnabled = param_1->bIsMobileMultiViewEnabled;
  this->bShouldBindInstancedViewUB = param_1->bShouldBindInstancedViewUB;
  this->bIsSinglePassStereo = param_1->bIsSinglePassStereo;
  this->bForceCameraVisibilityReset = param_1->bForceCameraVisibilityReset;
  this->bDisableDistanceBasedFadeTransitions = param_1->bDisableDistanceBasedFadeTransitions;
  this->bExcludeFromSceneTextureExtents = param_1->bExcludeFromSceneTextureExtents;
  this->bForcePathTracerReset = param_1->bForcePathTracerReset;
  this->PathTracerSeedOffset = param_1->PathTracerSeedOffset;
  this->UnderwaterDepth = param_1->UnderwaterDepth;
  this->WaterIntersection = param_1->WaterIntersection;
  lVar15 = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane)._padding_ = lVar15;
  dVar12 = (param_1->GlobalClippingPlane).W;
  (this->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane).W = dVar12;
  (this->CameraConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CameraConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->CameraConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CameraConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0;
  dVar12 = (param_1->TranslucentSortAxis).field0_0x0._s_0.Y;
  (this->TranslucentSortAxis).field0_0x0._s_0.X = (param_1->TranslucentSortAxis).field0_0x0._s_0.X;
  (this->TranslucentSortAxis).field0_0x0._s_0.Y = dVar12;
  (this->TranslucentSortAxis).field0_0x0._s_0.Z = (param_1->TranslucentSortAxis).field0_0x0._s_0.Z;
  (this->TranslucentSortPolicy).Value = (param_1->TranslucentSortPolicy).Value;
  (this->OverrideFrameIndexValue).bIsSet = false;
  bVar4 = (param_1->OverrideFrameIndexValue).bIsSet;
  (this->OverrideFrameIndexValue).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->OverrideFrameIndexValue).TypedValue = (param_1->OverrideFrameIndexValue).TypedValue;
  }
  (this->OverrideOutputFrameIndexValue).bIsSet = false;
  bVar4 = (param_1->OverrideOutputFrameIndexValue).bIsSet;
  (this->OverrideOutputFrameIndexValue).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->OverrideOutputFrameIndexValue).TypedValue =
         (param_1->OverrideOutputFrameIndexValue).TypedValue;
  }
  uVar14 = *(undefined8 *)((longlong)&(param_1->LensPrincipalPointOffsetScale).field0_0x0 + 8);
  *(undefined8 *)&(this->LensPrincipalPointOffsetScale).field0_0x0 =
       *(undefined8 *)&(param_1->LensPrincipalPointOffsetScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->LensPrincipalPointOffsetScale).field0_0x0 + 8) = uVar14;
  (this->bCameraMotionBlur).bIsSet = false;
  bVar4 = (param_1->bCameraMotionBlur).bIsSet;
  (this->bCameraMotionBlur).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->bCameraMotionBlur).TypedValue = (param_1->bCameraMotionBlur).TypedValue;
  }
  (this->ClipToPrevClipOverride).bIsSet = false;
  bVar4 = (param_1->ClipToPrevClipOverride).bIsSet;
  (this->ClipToPrevClipOverride).bIsSet = bVar4;
  if (bVar4 != false) {
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[0][1];
    (this->ClipToPrevClipOverride).TypedValue.M[0][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[0][0];
    (this->ClipToPrevClipOverride).TypedValue.M[0][1] = dVar12;
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[0][3];
    (this->ClipToPrevClipOverride).TypedValue.M[0][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[0][2];
    (this->ClipToPrevClipOverride).TypedValue.M[0][3] = dVar12;
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[1][1];
    (this->ClipToPrevClipOverride).TypedValue.M[1][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[1][0];
    (this->ClipToPrevClipOverride).TypedValue.M[1][1] = dVar12;
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[1][3];
    (this->ClipToPrevClipOverride).TypedValue.M[1][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[1][2];
    (this->ClipToPrevClipOverride).TypedValue.M[1][3] = dVar12;
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[2][1];
    (this->ClipToPrevClipOverride).TypedValue.M[2][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[2][0];
    (this->ClipToPrevClipOverride).TypedValue.M[2][1] = dVar12;
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[2][3];
    (this->ClipToPrevClipOverride).TypedValue.M[2][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[2][2];
    (this->ClipToPrevClipOverride).TypedValue.M[2][3] = dVar12;
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[3][1];
    (this->ClipToPrevClipOverride).TypedValue.M[3][0] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[3][0];
    (this->ClipToPrevClipOverride).TypedValue.M[3][1] = dVar12;
    dVar12 = (param_1->ClipToPrevClipOverride).TypedValue.M[3][3];
    (this->ClipToPrevClipOverride).TypedValue.M[3][2] =
         (param_1->ClipToPrevClipOverride).TypedValue.M[3][2];
    (this->ClipToPrevClipOverride).TypedValue.M[3][3] = dVar12;
  }
  FFinalPostProcessSettings::FFinalPostProcessSettings
            (&this->FinalPostProcessSettings,&param_1->FinalPostProcessSettings);
  pTVar2 = &this->FinalPostProcessDebugInfo;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FinalPostProcessDebugInfo).ArrayMax;
  iVar6 = (param_1->FinalPostProcessDebugInfo).ArrayNum;
  pFVar8 = (FPostProcessSettingsDebugInfo *)
           (param_1->FinalPostProcessDebugInfo).AllocatorInstance.Data;
  (this->FinalPostProcessDebugInfo).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FPostProcessSettingsDebugInfo,FPostProcessSettingsDebugInfo,int>
              ((pTVar2->AllocatorInstance).Data,pFVar8,iVar6);
  }
  this->AntiAliasingMethod = param_1->AntiAliasingMethod;
  this->PrimaryScreenPercentageMethod = param_1->PrimaryScreenPercentageMethod;
  (this->AtmosphereTransmittanceTexture).Reference = (FRHITexture *)0x0;
  pFVar9 = (param_1->AtmosphereTransmittanceTexture).Reference;
  (this->AtmosphereTransmittanceTexture).Reference = pFVar9;
  if (pFVar9 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar9);
  }
  (this->AtmosphereIrradianceTexture).Reference = (FRHITexture *)0x0;
  pFVar9 = (param_1->AtmosphereIrradianceTexture).Reference;
  (this->AtmosphereIrradianceTexture).Reference = pFVar9;
  if (pFVar9 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar9);
  }
  (this->AtmosphereInscatterTexture).Reference = (FRHITexture *)0x0;
  pFVar9 = (param_1->AtmosphereInscatterTexture).Reference;
  (this->AtmosphereInscatterTexture).Reference = pFVar9;
  if (pFVar9 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar9);
  }
  (this->WaterIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  pFVar10 = (param_1->WaterIndirectionBuffer).Reference;
  (this->WaterIndirectionBuffer).Reference = pFVar10;
  if (pFVar10 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar10);
  }
  (this->WaterDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  pFVar10 = (param_1->WaterDataBuffer).Reference;
  (this->WaterDataBuffer).Reference = pFVar10;
  if (pFVar10 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar10);
  }
  pTVar3 = &this->WaterInfoTextureRenderingParams;
  this->WaterInfoTextureViewIndex = param_1->WaterInfoTextureViewIndex;
  piVar1 = &(this->WaterInfoTextureRenderingParams).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->WaterInfoTextureRenderingParams).ArrayNum;
  pFVar11 = (FWaterInfoTextureRenderingParams *)
            (param_1->WaterInfoTextureRenderingParams).AllocatorInstance.Data;
  (this->WaterInfoTextureRenderingParams).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x240,0x10,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FSceneView::FWaterInfoTextureRenderingParams,FSceneView::FWaterInfoTextureRenderingParams,int>
              ((pTVar3->AllocatorInstance).Data,pFVar11,iVar6);
  }
  (this->LandscapeIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  pFVar10 = (param_1->LandscapeIndirectionBuffer).Reference;
  (this->LandscapeIndirectionBuffer).Reference = pFVar10;
  if (pFVar10 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar10);
  }
  (this->LandscapePerComponentDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  pFVar10 = (param_1->LandscapePerComponentDataBuffer).Reference;
  (this->LandscapePerComponentDataBuffer).Reference = pFVar10;
  if (pFVar10 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar10);
  }
  this->bEnableDynamicCocOffset = param_1->bEnableDynamicCocOffset;
  this->InFocusDistance = param_1->InFocusDistance;
  (this->DynamicCocOffsetLUT).Reference = (FRHITexture *)0x0;
  pFVar9 = (param_1->DynamicCocOffsetLUT).Reference;
  (this->DynamicCocOffsetLUT).Reference = pFVar9;
  if (pFVar9 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar9);
  }
  this->FeatureLevel = param_1->FeatureLevel;
  this->InstanceFactor = param_1->InstanceFactor;
  this->bAllowRayTracing = param_1->bAllowRayTracing;
  this->ViewLightingChannelMask = param_1->ViewLightingChannelMask;
  this->Aspects = param_1->Aspects;
  this->SnapshotOriginView = param_1->SnapshotOriginView;
  this->CurrentRayTracingDebugVisualizationMode = param_1->CurrentRayTracingDebugVisualizationMode;
  this->EyeAdaptationViewState = param_1->EyeAdaptationViewState;
  this->InstancedViewUniformBuffer = (TUniformBufferRef<FInstancedViewUniformShaderParameters>)0x0;
  this_02 = param_1->InstancedViewUniformBuffer;
  this->InstancedViewUniformBuffer = this_02;
  if (this_02 != (TUniformBufferRef<FInstancedViewUniformShaderParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_02);
  }
  return this;
}

