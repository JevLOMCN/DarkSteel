// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// FSceneView @ 14850b7c0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FSceneView * __thiscall FSceneView::FSceneView(FSceneView *this,FSceneViewInitOptions *param_1)

{
  int *piVar1;
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  *pTVar2;
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  *this_00;
  TArray<FFinalPostProcessSettings::FLUTBlenderEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  FBlendableManager *pFVar4;
  int *piVar5;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *pTVar6;
  double *pdVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  FStereoShaderAspects FVar20;
  int iVar21;
  FSceneInterface *pFVar22;
  void *pvVar23;
  UObject *pUVar24;
  FSceneViewFamily *pFVar25;
  code *pcVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  AActor *pAVar31;
  undefined8 uVar32;
  bool bVar33;
  bool bVar34;
  undefined4 uVar35;
  undefined3 uVar36;
  FStereoShaderAspects FVar37;
  FStereoShaderAspects FVar38;
  bool bVar39;
  Type TVar40;
  uint uVar41;
  FSceneViewInitOptions *pFVar42;
  FSceneView *pFVar43;
  FStereoShaderAspects *pFVar44;
  TVector4<float> *pTVar45;
  TConsoleVariableData<int> *pTVar46;
  UClass *this_01;
  longlong lVar47;
  UWorld *this_02;
  IConsoleManager *pIVar48;
  longlong *plVar49;
  TConsoleVariableData<int> *pTVar50;
  ulonglong uVar51;
  uint uVar52;
  TConsoleVariableData<int> *pTVar53;
  float fVar54;
  undefined1 auStackY_428 [32];
  FStereoShaderAspects local_3f8 [16];
  TVector4<float> local_3e8;
  undefined1 local_3d8 [784];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  *(undefined ***)this = &___7FSceneView__6B_;
  this->Family = param_1->ViewFamily;
  this->State = param_1->SceneViewStateInterface;
  this->ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  this->DynamicMeshElementsShadowCullFrustum = (FConvexVolume *)0x0;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreShadowTranslation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreShadowTranslation).field0_0x0._s_0.Y = (double)uVar32;
  (this->PreShadowTranslation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StereoCullingFrustum).Object = (FConvexVolume *)0x0;
  (this->StereoCullingFrustum).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SceneViewInitOptions)._padding_ =
       (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SceneViewInitOptions)._padding_ = uVar32;
  (this->SceneViewInitOptions)._padding_ =
       (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar9;
  (this->SceneViewInitOptions)._padding_ = 0;
  (this->SceneViewInitOptions)._padding_ = 0;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SceneViewInitOptions)._padding_ =
       (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SceneViewInitOptions)._padding_ = uVar32;
  (this->SceneViewInitOptions)._padding_ =
       (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SceneViewInitOptions)._padding_ = 0;
  (this->SceneViewInitOptions)._padding_ = 0;
  (this->SceneViewInitOptions).ViewFamily = (FSceneViewFamily *)0x0;
  (this->SceneViewInitOptions).SceneViewStateInterface = (FSceneViewStateInterface *)0x0;
  (this->SceneViewInitOptions).ExposureSceneViewStateInterface = (FSceneViewStateInterface *)0x0;
  (this->SceneViewInitOptions).ViewActor.ActorUniqueId = 0;
  (this->SceneViewInitOptions).ViewActor.Actor = (AActor *)0x0;
  (this->SceneViewInitOptions).PlayerIndex = -1;
  (this->SceneViewInitOptions).ViewElementDrawer = (FViewElementDrawer *)0x0;
  (this->SceneViewInitOptions).BackgroundColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (this->SceneViewInitOptions).OverlayColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (this->SceneViewInitOptions).ColorScale.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.X = 0.0;
  *(undefined8 *)&(this->SceneViewInitOptions).HiddenPrimitives.Elements.field_0x8 = 0;
  pTVar2 = &(this->SceneViewInitOptions).ShowOnlyPrimitives;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Y = 0.0;
  piVar8 = (int *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0xc);
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Z = 0.0;
  (this->SceneViewInitOptions).ViewRotation.Pitch = 0.0;
  (this->SceneViewInitOptions).ViewRotation.Yaw = 0.0;
  (this->SceneViewInitOptions).ViewRotation.Roll = 0.0;
  *(undefined8 *)&(this->SceneViewInitOptions).HiddenPrimitives.Elements = 0;
  *(undefined8 *)&(this->SceneViewInitOptions).HiddenPrimitives.Elements.field_0x20 = 0;
  (this->SceneViewInitOptions).StereoPass = eSSP_FULL;
  (this->SceneViewInitOptions).StereoViewIndex = -1;
  (this->SceneViewInitOptions).WorldToMetersScale = 100.0;
  *(undefined4 *)&(this->SceneViewInitOptions).HiddenPrimitives.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SceneViewInitOptions).HiddenPrimitives.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneViewInitOptions).HiddenPrimitives.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SceneViewInitOptions).HiddenPrimitives.Elements.field_0x34 = 0;
  (this->SceneViewInitOptions).HiddenPrimitives.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SceneViewInitOptions).HiddenPrimitives.HashSize = 0;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 8) = 0;
  *piVar8 = -1;
  *(undefined8 *)&pTVar2->field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x2c) =
       0x80;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x30) =
       0xffffffff;
  *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x40) = 0;
  (this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.HashSize = 0;
  (this->SceneViewInitOptions).CursorPos.field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.X = 0.0;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Y = 0.0;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Z = 0.0;
  (this->SceneViewInitOptions).LODDistanceFactor = 1.0;
  (this->SceneViewInitOptions).OverrideFarClippingPlaneDistance = -1.0;
  (this->SceneViewInitOptions).bInCameraCut = false;
  (this->SceneViewInitOptions).bUseFieldOfViewForLOD = true;
  (this->SceneViewInitOptions).FOV = 90.0;
  (this->SceneViewInitOptions).DesiredFOV = 90.0;
  (this->SceneViewInitOptions).FirstPersonParams.FOVCorrectionFactor = 0.0;
  (this->SceneViewInitOptions).FirstPersonParams.Scale = 0.0;
  (this->SceneViewInitOptions).FirstPersonParams.Scale = 1.0;
  (this->SceneViewInitOptions).FirstPersonParams.bUseParameters = false;
  *(undefined3 *)&(this->SceneViewInitOptions).FirstPersonParams.field_0x9 = 0;
  (this->SceneViewInitOptions).FirstPersonParams.FOVCorrectionFactor = 1.0;
  (this->SceneViewInitOptions).bIsSceneCapture = false;
  (this->SceneViewInitOptions).bIsSceneCaptureCube = false;
  (this->SceneViewInitOptions).bSceneCaptureUsesRayTracing = false;
  (this->SceneViewInitOptions).bIsReflectionCapture = false;
  (this->SceneViewInitOptions).bIsPlanarReflection = false;
  (this->SceneViewInitOptions).bExcludeFromSceneTextureExtents = false;
  (this->SceneViewInitOptions).OverridePrimaryResolutionFraction = -1.0;
  (this->SceneViewInitOptions).OverscanResolutionFraction = 1.0;
  (this->SceneViewInitOptions).CropFraction = 1.0;
  (this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0._s_0.X = 1.0;
  (this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0._s_0.Y = 1.0;
  (this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0._s_0.Z = 1.0;
  (this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0._s_0.W = 1.0;
  uVar35 = *(undefined4 *)&(param_1->ViewActor).field_0x4;
  pAVar31 = (param_1->ViewActor).Actor;
  (this->ViewActor).ActorUniqueId = (param_1->ViewActor).ActorUniqueId;
  *(undefined4 *)&(this->ViewActor).field_0x4 = uVar35;
  (this->ViewActor).Actor = pAVar31;
  this->PlayerIndex = param_1->PlayerIndex;
  this->Drawer = param_1->ViewElementDrawer;
  (this->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)param_1->_padding_;
  (this->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)param_1->_padding_;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)param_1->_padding_;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)param_1->_padding_;
  this->MaxShadowCascades = 10;
  FViewMatrices::FViewMatrices(&this->ViewMatrices,param_1);
  dVar9 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = dVar9;
  (this->ViewLocation).field0_0x0._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  dVar9 = (param_1->ViewRotation).Yaw;
  (this->ViewRotation).Pitch = (param_1->ViewRotation).Pitch;
  (this->ViewRotation).Yaw = dVar9;
  (this->ViewRotation).Roll = (param_1->ViewRotation).Roll;
  (this->BaseHmdOrientation).X = 0.0;
  (this->BaseHmdOrientation).Y = 0.0;
  (this->BaseHmdOrientation).Z = 0.0;
  (this->BaseHmdOrientation).W = 1.0;
  (this->BaseHmdLocation).field0_0x0._s_0.X = 0.0;
  (this->BaseHmdLocation).field0_0x0._s_0.Y = 0.0;
  (this->BaseHmdLocation).field0_0x0._s_0.Z = 0.0;
  fVar54 = param_1->WorldToMetersScale;
  (this->PreviousViewTransform).bIsSet = false;
  this->WorldToMetersScale = fVar54;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[0][0] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[0][1] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[0][2] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[0][3] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][0] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][1] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][2] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][3] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][0] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][1] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][2] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][3] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][0] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][1] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][2] = (double)param_1->_padding_;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][3] = dVar9;
  uVar32 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = uVar32;
  uVar32 = *(undefined8 *)((longlong)&(param_1->OverlayColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverlayColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverlayColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverlayColor).field0_0x0 + 8) = uVar32;
  uVar32 = *(undefined8 *)((longlong)&(param_1->ColorScale).field0_0x0 + 8);
  *(undefined8 *)&(this->ColorScale).field0_0x0 = *(undefined8 *)&(param_1->ColorScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorScale).field0_0x0 + 8) = uVar32;
  this->StereoPass = param_1->StereoPass;
  iVar21 = param_1->StereoViewIndex;
  this->PrimaryViewIndex = -1;
  (this->GPUMask).GPUMask = 1;
  (this->CurrentBufferVisualizationMode).ComparisonIndex = 0;
  (this->CurrentBufferVisualizationMode).Number = 0;
  (this->CurrentNaniteVisualizationMode).ComparisonIndex = 0;
  (this->CurrentNaniteVisualizationMode).Number = 0;
  (this->CurrentLumenVisualizationMode).ComparisonIndex = 0;
  (this->CurrentLumenVisualizationMode).Number = 0;
  (this->CurrentSubstrateVisualizationMode).ComparisonIndex = 0;
  (this->CurrentSubstrateVisualizationMode).Number = 0;
  (this->CurrentGroomVisualizationMode).ComparisonIndex = 0;
  (this->CurrentGroomVisualizationMode).Number = 0;
  (this->CurrentVirtualShadowMapVisualizationMode).ComparisonIndex = 0;
  (this->CurrentVirtualShadowMapVisualizationMode).Number = 0;
  (this->CurrentVirtualTextureVisualizationMode).ComparisonIndex = 0;
  (this->CurrentVirtualTextureVisualizationMode).Number = 0;
  (this->CurrentVisualizeCalibrationColorMaterialName).ComparisonIndex = 0;
  (this->CurrentVisualizeCalibrationColorMaterialName).Number = 0;
  (this->CurrentVisualizeCalibrationGrayscaleMaterialName).ComparisonIndex = 0;
  (this->CurrentVisualizeCalibrationGrayscaleMaterialName).Number = 0;
  (this->CurrentVisualizeCalibrationCustomMaterialName).ComparisonIndex = 0;
  (this->CurrentVisualizeCalibrationCustomMaterialName).Number = 0;
  (this->CurrentGPUSkinCacheVisualizationMode).ComparisonIndex = 0;
  (this->CurrentGPUSkinCacheVisualizationMode).Number = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x20 = 0;
  this->StereoViewIndex = iVar21;
  this->bAllowCrossGPUTransfer = true;
  this->bOverrideGPUMask = false;
  this->bRenderFirstInstanceOnly = false;
  this->bHMDHiddenAreaMaskActive = false;
  *(undefined8 *)&(this->DiffuseOverrideParameter).field0_0x0 = 0;
  (this->DiffuseOverrideParameter).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->DiffuseOverrideParameter).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->SpecularOverrideParameter).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->SpecularOverrideParameter).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->NormalOverrideParameter).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->NormalOverrideParameter).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->RoughnessOverrideParameter).field0_0x0 + 4) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->AmbientOcclusionOverrideParameter).field0_0x0 + 4) = 0x3f800000;
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
  (this->ViewFrustum).Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ViewFrustum).Planes.ArrayNum = 0;
  (this->ViewFrustum).Planes.ArrayMax = 6;
  (this->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ViewFrustum).PermutedPlanes.ArrayNum = 0;
  (this->ViewFrustum).PermutedPlanes.ArrayMax = 8;
  *(undefined8 *)&(this->InvDeviceZToWorldZTransform).field0_0x0 = 0;
  (this->InvDeviceZToWorldZTransform).field0_0x0._s_0.Z = 0.0;
  (this->InvDeviceZToWorldZTransform).field0_0x0._s_0.W = 1.0;
  dVar9 = (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Y;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.X =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.X;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Y = dVar9;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Z =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Z;
  this->LODDistanceFactor = param_1->LODDistanceFactor;
  this->bCameraCut = param_1->bInCameraCut;
  (this->CursorPos).field0_0x0 = (param_1->CursorPos).field0_0x0;
  this->bIsGameView = false;
  this->bIsViewInfo = false;
  this->CustomRenderPass = (FCustomRenderPassBase *)0x0;
  this->bIsSceneCapture = param_1->bIsSceneCapture;
  this->bIsSceneCaptureCube = param_1->bIsSceneCaptureCube;
  this->bEyeAdaptationAllViewPixels = false;
  this->bSceneCaptureUsesRayTracing = param_1->bSceneCaptureUsesRayTracing;
  this->bIsReflectionCapture = param_1->bIsReflectionCapture;
  this->bIsPlanarReflection = param_1->bIsPlanarReflection;
  this->bShouldBindInstancedViewUB = false;
  this->bIsSinglePassStereo = false;
  this->bForceCameraVisibilityReset = false;
  this->bDisableDistanceBasedFadeTransitions = false;
  this->bIsVirtualTexture = false;
  this->bIsOfflineRender = false;
  this->bRenderSceneTwoSided = false;
  this->bIsLocked = false;
  this->bStaticSceneOnly = false;
  this->bIsInstancedStereoEnabled = false;
  this->bIsMultiViewportEnabled = false;
  this->bIsMobileMultiViewEnabled = false;
  this->bExcludeFromSceneTextureExtents = param_1->bExcludeFromSceneTextureExtents;
  this->bForcePathTracerReset = false;
  this->PathTracerSeedOffset = 0;
  this->UnderwaterDepth = -1.0;
  this->WaterIntersection = OutsideWater;
  (this->GlobalClippingPlane)._padding_ = 0;
  (this->GlobalClippingPlane)._padding_ = 0;
  (this->GlobalClippingPlane)._padding_ = 0;
  (this->GlobalClippingPlane).W = 0.0;
  (this->CameraConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CameraConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->OverrideFrameIndexValue).bIsSet = false;
  (this->OverrideOutputFrameIndexValue).bIsSet = false;
  *(undefined8 *)&(this->LensPrincipalPointOffsetScale).field0_0x0 = 0;
  (this->LensPrincipalPointOffsetScale).field0_0x0._s_0.Z = 1.0;
  (this->LensPrincipalPointOffsetScale).field0_0x0._s_0.W = 1.0;
  (this->bCameraMotionBlur).bIsSet = false;
  (this->ClipToPrevClipOverride).bIsSet = false;
  FPostProcessSettings::FPostProcessSettings
            ((FPostProcessSettings *)&this->FinalPostProcessSettings);
  (this->FinalPostProcessSettings).ContributingCubemaps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar3 = &(this->FinalPostProcessSettings).ContributingLUTs;
  (this->FinalPostProcessSettings).ContributingCubemaps.ArrayNum = 0;
  (this->FinalPostProcessSettings).ContributingCubemaps.ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).ContributingLUTs.ArrayNum = 0;
  piVar1 = &(this->FinalPostProcessSettings).ContributingLUTs.ArrayMax;
  *piVar1 = 0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum = 0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax = 0;
  (this->FinalPostProcessSettings).VisualizeCalibrationColorMaterial = (UMaterialInterface *)0x0;
  (this->FinalPostProcessSettings).VisualizeCalibrationGrayscaleMaterial = (UMaterialInterface *)0x0
  ;
  (this->FinalPostProcessSettings).VisualizeCalibrationCustomMaterial = (UMaterialInterface *)0x0;
  (this->FinalPostProcessSettings).HighResScreenshotMaterial = (UMaterialInterface *)0x0;
  (this->FinalPostProcessSettings).HighResScreenshotMaskMaterial = (UMaterialInterface *)0x0;
  (this->FinalPostProcessSettings).HighResScreenshotCaptureRegionMaterial =
       (UMaterialInstanceDynamic *)0x0;
  (this->FinalPostProcessSettings).bBufferVisualizationDumpRequired = false;
  (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayNum = 0;
  (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayMax = 0;
  (this->FinalPostProcessSettings).bBufferVisualizationOverviewTargetIsSelected = false;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  ArrayNum = 0;
  (this->FinalPostProcessSettings).BufferVisualizationOverviewSelectedTargetMaterialName.Data.
  ArrayMax = 0;
  *(undefined8 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes = 0;
  *(undefined8 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x8 = 0;
  *(undefined8 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x20 = 0;
  *(undefined4 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x28 = 0;
  pFVar4 = &(this->FinalPostProcessSettings).BlendableManager;
  *(undefined4 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x2c = 0x80;
  piVar5 = &(this->FinalPostProcessSettings).BlendableManager.Scratch.ArrayMax;
  *(undefined4 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x34 = 0;
  *(undefined4 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x40 = 0;
  *(undefined4 *)&(this->FinalPostProcessSettings).BufferVisualizationPipes.field_0x48 = 0;
  (pFVar4->Scratch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessSettings).BlendableManager.Scratch.ArrayNum = 0;
  *piVar5 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x2800,(ForAnyElementType *)pFVar4,0,piVar5);
  piVar5 = &(this->FinalPostProcessSettings).ContributingCubemaps.ArrayMax;
  if (*piVar5 < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,8,&(this->FinalPostProcessSettings).ContributingCubemaps.AllocatorInstance,
               (this->FinalPostProcessSettings).ContributingCubemaps.ArrayNum,piVar5);
  }
  if (*piVar1 < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,8,&pTVar3->AllocatorInstance,
               (this->FinalPostProcessSettings).ContributingLUTs.ArrayNum,piVar1);
  }
  iVar21 = *piVar1;
  (this->FinalPostProcessSettings).ContributingLUTs.ArrayNum = 0;
  if (iVar21 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  FFinalPostProcessSettings::PushLUT
            (&this->FinalPostProcessSettings,(UTexture *)0x0,__real_3f800000);
  (this->FinalPostProcessDebugInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalPostProcessDebugInfo).ArrayNum = 0;
  (this->FinalPostProcessDebugInfo).ArrayMax = 0;
  this->AntiAliasingMethod = AAM_None;
  this->PrimaryScreenPercentageMethod = SpatialUpscale;
  (this->AtmosphereTransmittanceTexture).Reference = (FRHITexture *)0x0;
  (this->AtmosphereIrradianceTexture).Reference = (FRHITexture *)0x0;
  (this->AtmosphereInscatterTexture).Reference = (FRHITexture *)0x0;
  (this->WaterIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->WaterDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->WaterInfoTextureRenderingParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaterInfoTextureRenderingParams).ArrayNum = 0;
  (this->WaterInfoTextureRenderingParams).ArrayMax = 0;
  (this->LandscapeIndirectionBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->LandscapePerComponentDataBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->DynamicCocOffsetLUT).Reference = (FRHITexture *)0x0;
  this->WaterInfoTextureViewIndex = -1;
  this->bEnableDynamicCocOffset = false;
  this->InFocusDistance = 0.0;
  TVar40 = GMaxRHIFeatureLevel;
  if ((param_1->ViewFamily != (FSceneViewFamily *)0x0) &&
     (pFVar22 = param_1->ViewFamily->Scene, pFVar22 != (FSceneInterface *)0x0)) {
    TVar40 = pFVar22->FeatureLevel;
  }
  this->FeatureLevel = TVar40;
  this->InstanceFactor = 1;
  this->bAllowRayTracing = true;
  this->ViewLightingChannelMask = '\x01';
  UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(&this->Aspects);
  (this->CurrentRayTracingDebugVisualizationMode).ComparisonIndex = 0;
  (this->CurrentRayTracingDebugVisualizationMode).Number = 0;
  this->EyeAdaptationViewState = (FSceneViewStateInterface *)0x0;
  this->InstancedViewUniformBuffer = (TUniformBufferRef<FInstancedViewUniformShaderParameters>)0x0;
  this->SnapshotOriginView = (FSceneView *)0x0;
  pFVar42 = FSceneViewInitOptions::FSceneViewInitOptions((FSceneViewInitOptions *)local_3d8,param_1)
  ;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  lVar47 = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = lVar47;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions)._padding_ = pFVar42->_padding_;
  (this->SceneViewInitOptions).ViewFamily = pFVar42->ViewFamily;
  (this->SceneViewInitOptions).SceneViewStateInterface = pFVar42->SceneViewStateInterface;
  (this->SceneViewInitOptions).ExposureSceneViewStateInterface =
       pFVar42->ExposureSceneViewStateInterface;
  uVar35 = *(undefined4 *)&(pFVar42->ViewActor).field_0x4;
  pAVar31 = (pFVar42->ViewActor).Actor;
  (this->SceneViewInitOptions).ViewActor.ActorUniqueId = (pFVar42->ViewActor).ActorUniqueId;
  *(undefined4 *)&(this->SceneViewInitOptions).ViewActor.field_0x4 = uVar35;
  (this->SceneViewInitOptions).ViewActor.Actor = pAVar31;
  (this->SceneViewInitOptions).PlayerIndex = pFVar42->PlayerIndex;
  (this->SceneViewInitOptions).ViewElementDrawer = pFVar42->ViewElementDrawer;
  uVar32 = *(undefined8 *)((longlong)&(pFVar42->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).BackgroundColor.field0_0x0 =
       *(undefined8 *)&(pFVar42->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).BackgroundColor.field0_0x0 + 8) = uVar32;
  uVar32 = *(undefined8 *)((longlong)&(pFVar42->OverlayColor).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).OverlayColor.field0_0x0 =
       *(undefined8 *)&(pFVar42->OverlayColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).OverlayColor.field0_0x0 + 8) = uVar32;
  uVar32 = *(undefined8 *)((longlong)&(pFVar42->ColorScale).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).ColorScale.field0_0x0 =
       *(undefined8 *)&(pFVar42->ColorScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ColorScale.field0_0x0 + 8) = uVar32;
  (this->SceneViewInitOptions).StereoPass = pFVar42->StereoPass;
  (this->SceneViewInitOptions).StereoViewIndex = pFVar42->StereoViewIndex;
  pTVar6 = &(this->SceneViewInitOptions).HiddenPrimitives;
  (this->SceneViewInitOptions).WorldToMetersScale = pFVar42->WorldToMetersScale;
  dVar9 = (pFVar42->ViewLocation).field0_0x0._s_0.Y;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.X =
       (pFVar42->ViewLocation).field0_0x0._s_0.X;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Y = dVar9;
  (this->SceneViewInitOptions).ViewLocation.field0_0x0._s_0.Z =
       (pFVar42->ViewLocation).field0_0x0._s_0.Z;
  dVar9 = (pFVar42->ViewRotation).Yaw;
  (this->SceneViewInitOptions).ViewRotation.Pitch = (pFVar42->ViewRotation).Pitch;
  (this->SceneViewInitOptions).ViewRotation.Yaw = dVar9;
  (this->SceneViewInitOptions).ViewRotation.Roll = (pFVar42->ViewRotation).Roll;
  if (pTVar6 != &pFVar42->HiddenPrimitives) {
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Move<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
              (pTVar6,&pFVar42->HiddenPrimitives);
  }
  if (&pFVar42->ShowOnlyPrimitives != pTVar2) {
    if (*(int *)((longlong)&(pFVar42->ShowOnlyPrimitives).field0_0x0 + 0xc) == -1) {
      if (*piVar8 != -1) {
        (this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.HashSize = 0;
        pvVar23 = *(void **)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 +
                            0x40);
        if (pvVar23 != (void *)0x0) {
          FMemory::Free(pvVar23);
        }
        *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 8) =
             0;
        if (*piVar8 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)pTVar2,0,piVar8);
        }
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x30) = 0xffffffff
        ;
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x34) = 0;
        iVar21 = *(int *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 +
                         0x2c);
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x28) = 0;
        if ((iVar21 < 0) || (0x80 < iVar21)) {
          *(undefined4 *)
           ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x2c) = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.Elements
                      .field_0x10,0);
        }
        pvVar23 = *(void **)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 +
                            0x20);
        if (pvVar23 != (void *)0x0) {
          FMemory::Free(pvVar23);
        }
        if (*(void **)&pTVar2->field0_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar2->field0_0x0);
        }
        *(undefined8 *)&pTVar2->field0_0x0 = 0;
        *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 8) =
             0;
        *piVar8 = -1;
        *(undefined8 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x20) = 0;
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x28) = 0;
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x30) = 0xffffffff
        ;
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x34) = 0;
        *(undefined8 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x40) = 0;
        (this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.HashSize = 0;
      }
    }
    else {
      (this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.HashSize = 0;
      pvVar23 = *(void **)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 +
                          0x40);
      if (pvVar23 != (void *)0x0) {
        FMemory::Free(pvVar23);
      }
      iVar21 = *piVar8;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 8) = 0
      ;
      if (iVar21 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)pTVar2,0,piVar8);
      }
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x30)
           = 0xffffffff;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x28)
           = 0;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x34)
           = 0;
      iVar21 = *(int *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x2c
                       );
      if ((iVar21 < 0) || (0x80 < iVar21)) {
        *(undefined4 *)
         ((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x2c) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.Elements.
                    field_0x10,0);
      }
      pvVar23 = *(void **)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 +
                          0x20);
      if (pvVar23 != (void *)0x0) {
        FMemory::Free(pvVar23);
      }
      if (*(void **)&pTVar2->field0_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar2->field0_0x0);
      }
      *(undefined8 *)&pTVar2->field0_0x0 = 0;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 8) = 0
      ;
      *piVar8 = 0;
      *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x20)
           = 0;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x28)
           = 0;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x2c)
           = 0x80;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x30)
           = 0xffffffff;
      *(undefined4 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x34)
           = 0;
      *(undefined8 *)((longlong)&(this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0 + 0x40)
           = 0;
      (this->SceneViewInitOptions).ShowOnlyPrimitives.field0_0x0.TypedValue.HashSize = 0;
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Move<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                  *)pTVar2,
                 (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                  *)&pFVar42->ShowOnlyPrimitives);
      if ((*piVar8 == -1) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             ), bVar39)) {
        pcVar26 = (code *)swi(3);
        pFVar43 = (FSceneView *)(*pcVar26)();
        return pFVar43;
      }
    }
  }
  pTVar53 = (TConsoleVariableData<int> *)0x0;
  (this->SceneViewInitOptions).CursorPos.field0_0x0 = (pFVar42->CursorPos).field0_0x0;
  (this->SceneViewInitOptions).LODDistanceFactor = pFVar42->LODDistanceFactor;
  (this->SceneViewInitOptions).OverrideFarClippingPlaneDistance =
       pFVar42->OverrideFarClippingPlaneDistance;
  dVar9 = (pFVar42->OriginOffsetThisFrame).field0_0x0._s_0.Y;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.X =
       (pFVar42->OriginOffsetThisFrame).field0_0x0._s_0.X;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Y = dVar9;
  (this->SceneViewInitOptions).OriginOffsetThisFrame.field0_0x0._s_0.Z =
       (pFVar42->OriginOffsetThisFrame).field0_0x0._s_0.Z;
  (this->SceneViewInitOptions).bInCameraCut = pFVar42->bInCameraCut;
  (this->SceneViewInitOptions).bUseFieldOfViewForLOD = pFVar42->bUseFieldOfViewForLOD;
  (this->SceneViewInitOptions).FOV = pFVar42->FOV;
  (this->SceneViewInitOptions).DesiredFOV = pFVar42->DesiredFOV;
  fVar54 = (pFVar42->FirstPersonParams).Scale;
  (this->SceneViewInitOptions).FirstPersonParams.FOVCorrectionFactor =
       (pFVar42->FirstPersonParams).FOVCorrectionFactor;
  (this->SceneViewInitOptions).FirstPersonParams.Scale = fVar54;
  uVar36 = *(undefined3 *)&(pFVar42->FirstPersonParams).field_0x9;
  (this->SceneViewInitOptions).FirstPersonParams.bUseParameters =
       (pFVar42->FirstPersonParams).bUseParameters;
  *(undefined3 *)&(this->SceneViewInitOptions).FirstPersonParams.field_0x9 = uVar36;
  (this->SceneViewInitOptions).bIsSceneCapture = pFVar42->bIsSceneCapture;
  (this->SceneViewInitOptions).bIsSceneCaptureCube = pFVar42->bIsSceneCaptureCube;
  (this->SceneViewInitOptions).bSceneCaptureUsesRayTracing = pFVar42->bSceneCaptureUsesRayTracing;
  (this->SceneViewInitOptions).bIsReflectionCapture = pFVar42->bIsReflectionCapture;
  (this->SceneViewInitOptions).bIsPlanarReflection = pFVar42->bIsPlanarReflection;
  (this->SceneViewInitOptions).bExcludeFromSceneTextureExtents =
       pFVar42->bExcludeFromSceneTextureExtents;
  (this->SceneViewInitOptions).OverridePrimaryResolutionFraction =
       pFVar42->OverridePrimaryResolutionFraction;
  (this->SceneViewInitOptions).OverscanResolutionFraction = pFVar42->OverscanResolutionFraction;
  (this->SceneViewInitOptions).CropFraction = pFVar42->CropFraction;
  uVar32 = *(undefined8 *)((longlong)&(pFVar42->AsymmetricCropFraction).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0 =
       *(undefined8 *)&(pFVar42->AsymmetricCropFraction).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneViewInitOptions).AsymmetricCropFraction.field0_0x0 + 8) =
       uVar32;
  if (local_3d8._604_4_ != -1) {
    local_3d8._664_4_ = 0;
    if ((ForElementType<FSetElementId>)local_3d8._656_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3d8._656_8_);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_3d8 + 0x250));
  }
  local_3d8._584_4_ = 0;
  if ((ForElementType<FSetElementId>)local_3d8._576_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d8._576_8_);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_3d8 + 0x200));
  pTVar50 = CVarShadowFreezeCamera.Ref;
  bVar39 = IsInParallelGameThread();
  if (bVar39) {
LAB_14850c737:
    pTVar46 = pTVar53;
  }
  else {
    bVar39 = IsInGameThread();
    pTVar46 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar39) goto LAB_14850c737;
  }
  if (*(int *)((longlong)pTVar50->ShadowedValue + (longlong)pTVar46->ShadowedValue) == 0) {
    if (ShadowFreezeCamera::Backup.bIsSet != false) {
      ShadowFreezeCamera::Backup.bIsSet = false;
    }
  }
  else if (ShadowFreezeCamera::Backup.bIsSet == false) {
    memcpy(&ShadowFreezeCamera::Backup,&this->ViewMatrices,0x880);
    ShadowFreezeCamera::Backup.bIsSet = true;
  }
  pFVar44 = UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
                      (local_3f8,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel])
  ;
  FVar20 = *pFVar44;
  this->Aspects = FVar20;
  if ((pFVar44->bInstancedStereoEnabled) || (pFVar44->bMobileMultiViewEnabled)) {
    bVar39 = true;
  }
  else {
    bVar39 = false;
  }
  this->bShouldBindInstancedViewUB = bVar39;
  if (((this->Family != (FSceneViewFamily *)0x0) && (this->Family->bRequireMultiView != false)) &&
     (!pFVar44->bMobileMultiViewEnabled)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMultiView);
  }
  if (((this->bIsSceneCapture == false) && (this->bIsReflectionCapture == false)) ||
     (this->bIsPlanarReflection != false)) {
    bVar39 = false;
    if (!(this->Aspects).bInstancedStereoEnabled) goto LAB_14850c8cc;
    bVar33 = true;
    this->bIsInstancedStereoEnabled = true;
LAB_14850c8d9:
    if (!(this->Aspects).bInstancedMultiViewportEnabled) goto LAB_14850c901;
    bVar34 = true;
    this->bIsMultiViewportEnabled = true;
LAB_14850c90e:
    if (((this->Family == (FSceneViewFamily *)0x0) || (this->Family->bRequireMultiView == false)) ||
       (!(this->Aspects).bMobileMultiViewEnabled)) goto LAB_14850c92d;
    bVar39 = true;
  }
  else {
    bVar39 = true;
LAB_14850c8cc:
    bVar33 = false;
    this->bIsInstancedStereoEnabled = false;
    if (!bVar39) goto LAB_14850c8d9;
LAB_14850c901:
    bVar34 = false;
    this->bIsMultiViewportEnabled = false;
    if (!bVar39) goto LAB_14850c90e;
LAB_14850c92d:
    bVar39 = false;
  }
  this->bIsMobileMultiViewEnabled = bVar39;
  if ((bVar33) || (bVar39 != false)) {
    this->bIsSinglePassStereo = true;
    if ((bVar33) &&
       (((!bVar34 && (!(this->Aspects).bMobileMultiViewEnabled)) &&
        (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsInstancedStereoEnabled || (bIsMultiViewportEnabled || Aspects.IsMobileMultiViewEnabled())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                             ,0x3c6,
                             L"If instanced stereo is enabled, either multi-viewport or mobile multi-view needs to be enabled as well."
                            ), bVar39)))) {
      pcVar26 = (code *)swi(3);
      pFVar43 = (FSceneView *)(*pcVar26)();
      return pFVar43;
    }
  }
  else {
    this->bIsSinglePassStereo = false;
  }
  SetupViewFrustum(this);
  if ((this->Family == (FSceneViewFamily *)0x0) || (this->Family->Scene == (FSceneInterface *)0x0))
  {
    bVar39 = false;
  }
  else {
    dVar9 = (this->ViewMatrices).ViewMatrix.M[0][2];
    dVar10 = (this->ViewMatrices).ViewMatrix.M[0][3];
    dVar11 = (this->ViewMatrices).ViewMatrix.M[1][2];
    dVar12 = (this->ViewMatrices).ViewMatrix.M[2][2];
    dVar13 = (this->ViewMatrices).ViewMatrix.M[3][2];
    dVar14 = (this->ViewMatrices).ViewMatrix.M[2][3];
    dVar15 = (this->ViewMatrices).ViewMatrix.M[1][3];
    dVar16 = (this->ViewMatrices).ViewMatrix.M[3][3];
    dVar17 = (this->ViewMatrices).ViewMatrix.M[2][1];
    dVar30 = dVar9 * dVar15 - dVar10 * dVar11;
    dVar29 = dVar14 * dVar9 - dVar12 * dVar10;
    dVar18 = (this->ViewMatrices).ViewMatrix.M[1][1];
    dVar28 = dVar14 * dVar11 - dVar12 * dVar15;
    dVar19 = (this->ViewMatrices).ViewMatrix.M[3][1];
    dVar27 = dVar16 * dVar9 - dVar13 * dVar10;
    dVar9 = (this->ViewMatrices).ViewMatrix.M[0][1];
    dVar11 = dVar16 * dVar11 - dVar13 * dVar15;
    dVar10 = dVar16 * dVar12 - dVar13 * dVar14;
    bVar39 = ((((dVar18 * dVar10 - dVar17 * dVar11) + dVar19 * dVar28) *
               (this->ViewMatrices).ViewMatrix.M[0][0] -
              ((dVar9 * dVar10 - dVar17 * dVar27) + dVar19 * dVar29) *
              (this->ViewMatrices).ViewMatrix.M[1][0]) +
             ((dVar9 * dVar11 - dVar18 * dVar27) + dVar19 * dVar30) *
             (this->ViewMatrices).ViewMatrix.M[2][0]) -
             ((dVar9 * dVar28 - dVar18 * dVar29) + dVar17 * dVar30) *
             (this->ViewMatrices).ViewMatrix.M[3][0] < 0.0;
  }
  this->bReverseCulling = bVar39;
  pTVar45 = CreateInvDeviceZToWorldZTransform(&local_3e8,&this->ProjectionMatrixUnadjustedForRHI);
  pvVar23 = ThreadLocalStoragePointer;
  uVar51 = (ulonglong)_tls_index;
  uVar32 = *(undefined8 *)((longlong)&pTVar45->field0_0x0 + 8);
  *(undefined8 *)&(this->InvDeviceZToWorldZTransform).field0_0x0 =
       *(undefined8 *)&pTVar45->field0_0x0;
  *(undefined8 *)((longlong)&(this->InvDeviceZToWorldZTransform).field0_0x0 + 8) = uVar32;
  if ((*(int *)(*(longlong *)((longlong)pvVar23 + uVar51 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar48 = IConsoleManager::Get();
    plVar49 = (longlong *)
              (**(code **)((longlong)*pIVar48 + 0xc0))(pIVar48,L"r.TranslucentSortPolicy",1);
    pTVar50 = pTVar53;
    if (plVar49 != (longlong *)0x0) {
      pTVar50 = (TConsoleVariableData<int> *)(**(code **)(*plVar49 + 0x68))(plVar49);
    }
    SortPolicyCvar = pTVar50;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar50 = SortPolicyCvar;
  bVar39 = IsInParallelGameThread();
  if (bVar39) {
LAB_14850cc22:
    pTVar46 = pTVar53;
  }
  else {
    bVar39 = IsInGameThread();
    pTVar46 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar39) goto LAB_14850cc22;
  }
  (this->TranslucentSortPolicy).Value =
       *(uchar *)((longlong)pTVar50->ShadowedValue + (longlong)pTVar46->ShadowedValue);
  this_01 = Z_Construct_UClass_URendererSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  pUVar24 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  dVar9 = *(double *)&pUVar24[6].field_0x10;
  (this->TranslucentSortAxis).field0_0x0._s_0.X = *(double *)&pUVar24[6].field_0x8;
  (this->TranslucentSortAxis).field0_0x0._s_0.Y = dVar9;
  (this->TranslucentSortAxis).field0_0x0._s_0.Z = *(double *)&pUVar24[6].field_0x18;
  bVar39 = IsInGameThread();
  if (bVar39) {
    if (((this->Family == (FSceneViewFamily *)0x0) ||
        (pFVar22 = this->Family->Scene, pFVar22 == (FSceneInterface *)0x0)) ||
       (lVar47 = (**(code **)(pFVar22->_padding_ + 0x410))(), lVar47 == 0)) {
      bVar39 = false;
    }
    else {
      this_02 = (UWorld *)(**(code **)(this->Family->Scene->_padding_ + 0x410))();
      bVar39 = UWorld::IsGameWorld(this_02);
    }
    this->bIsGameView = bVar39;
  }
  pdVar7 = (this->ViewMatrices).ProjectionMatrix.M[3] + 3;
  if (__real_3ff0000000000000 < *pdVar7 || __real_3ff0000000000000 == *pdVar7) {
    this->bUseFieldOfViewForLOD = false;
    fVar54 = 0.0;
    this->FOV = 0.0;
  }
  else {
    this->bUseFieldOfViewForLOD = param_1->bUseFieldOfViewForLOD;
    this->FOV = param_1->FOV;
    fVar54 = param_1->DesiredFOV;
  }
  this->DesiredFOV = fVar54;
  this->DrawDynamicFlags = None;
  this->bAllowTemporalJitter = true;
  SetupAntiAliasingMethod(this);
  pTVar50 = CVarEnableTemporalUpsample.Ref;
  if (this->AntiAliasingMethod != AAM_TSR) {
    if (this->AntiAliasingMethod != AAM_TemporalAA) goto LAB_14850cd5b;
    bVar39 = IsInParallelGameThread();
    if ((bVar39) ||
       (bVar39 = IsInGameThread(), pTVar46 = (TConsoleVariableData<int> *)&DAT_00000004, bVar39)) {
      pTVar46 = pTVar53;
    }
    if (*(int *)((longlong)pTVar46->ShadowedValue + (longlong)pTVar50->ShadowedValue) == 0)
    goto LAB_14850cd5b;
  }
  this->PrimaryScreenPercentageMethod = TemporalUpscale;
LAB_14850cd5b:
  if (this->Family != (FSceneViewFamily *)0x0) {
    this->PrimaryViewIndex = (this->Family->Views).ArrayNum;
    bVar39 = IStereoRendering::IsASecondaryView(this);
    if (bVar39) {
      if (((this->Family->Views).ArrayNum < 1) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("Family->Views.Num() >= 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                              ,0x408,L""), bVar39)) {
        pcVar26 = (code *)swi(3);
        pFVar43 = (FSceneView *)(*pcVar26)();
        return pFVar43;
      }
      uVar52 = this->PrimaryViewIndex - 1;
      this->PrimaryViewIndex = uVar52;
      uVar41 = uVar52;
      while (-1 < (int)uVar41) {
        pFVar25 = this->Family;
        uVar41 = 0;
        if ((int)uVar52 < (pFVar25->Views).ArrayNum) {
          uVar41 = ~uVar52 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar26 = (code *)swi(3);
          pFVar43 = (FSceneView *)(*pcVar26)();
          return pFVar43;
        }
        bVar39 = IStereoRendering::IsAPrimaryView
                           (*(FSceneView **)
                             ((pFVar25->Views).AllocatorInstance.Data + (ulonglong)uVar52 * 8));
        if (bVar39) break;
        piVar8 = &this->PrimaryViewIndex;
        *piVar8 = *piVar8 + -1;
        uVar52 = this->PrimaryViewIndex;
        uVar41 = *piVar8;
      }
    }
    if ((this->Family->bResolveScene != false) &&
       ((this->Family->EngineShowFlags).PostProcessing != 0)) {
      this->EyeAdaptationViewState = this->State;
      bVar39 = IStereoRendering::IsASecondaryView(this);
      if (bVar39) {
        if (((this->Family->Views).ArrayNum < 1) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("Family->Views.Num() >= 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                                ,0x41a,L""), bVar39)) {
          pcVar26 = (code *)swi(3);
          pFVar43 = (FSceneView *)(*pcVar26)();
          return pFVar43;
        }
        uVar41 = this->PrimaryViewIndex;
        pFVar25 = this->Family;
        uVar52 = 0;
        if ((int)uVar41 < (pFVar25->Views).ArrayNum) {
          uVar52 = ~uVar41 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar26 = (code *)swi(3);
          pFVar43 = (FSceneView *)(*pcVar26)();
          return pFVar43;
        }
        pFVar43 = *(FSceneView **)
                   ((pFVar25->Views).AllocatorInstance.Data + (longlong)(int)uVar41 * 8);
        bVar39 = IStereoRendering::IsAPrimaryView(pFVar43);
        if (bVar39) {
          this->EyeAdaptationViewState = pFVar43->State;
        }
      }
    }
    if (((this->bIsSceneCaptureCube != false) &&
        (pFVar25 = this->Family, (pFVar25->EngineShowFlags).PostProcessing != 0)) &&
       (iVar21 = (pFVar25->Views).ArrayNum, iVar21 != 0)) {
      if ((iVar21 < 1) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar26 = (code *)swi(3);
        pFVar43 = (FSceneView *)(*pcVar26)();
        return pFVar43;
      }
      this->EyeAdaptationViewState =
           *(FSceneViewStateInterface **)
            (*(longlong *)(pFVar25->Views).AllocatorInstance.Data + 0x10);
    }
    if (param_1->ExposureSceneViewStateInterface != (FSceneViewStateInterface *)0x0) {
      this->EyeAdaptationViewState = param_1->ExposureSceneViewStateInterface;
    }
  }
  bVar39 = VerifyMembersChecks(this);
  if ((!bVar39) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("VerifyMembersChecks()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                          ,0x431,L""), bVar39)) {
    pcVar26 = (code *)swi(3);
    pFVar43 = (FSceneView *)(*pcVar26)();
    return pFVar43;
  }
  return this;
}

// ~FSceneView @ 148510b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSceneView::~FSceneView(FSceneView *this)

{
  FRHITexture *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<UE::Math::TPlane<double>_> FVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  
  *(undefined ***)this = &___7FSceneView__6B_;
  if (this->InstancedViewUniformBuffer !=
      (TUniformBufferRef<FInstancedViewUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->InstancedViewUniformBuffer);
  }
  pFVar1 = (this->DynamicCocOffsetLUT).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->LandscapePerComponentDataBuffer).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->LandscapeIndirectionBuffer).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  DestructItems<FSceneView::FWaterInfoTextureRenderingParams,int>
            ((FWaterInfoTextureRenderingParams *)
             (this->WaterInfoTextureRenderingParams).AllocatorInstance.Data,
             (this->WaterInfoTextureRenderingParams).ArrayNum);
  pFVar3 = (this->WaterInfoTextureRenderingParams).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar2 = (this->WaterDataBuffer).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->WaterIndirectionBuffer).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->AtmosphereInscatterTexture).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->AtmosphereIrradianceTexture).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->AtmosphereTransmittanceTexture).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  DestructItems<FPostProcessSettingsDebugInfo,int>
            ((FPostProcessSettingsDebugInfo *)
             (this->FinalPostProcessDebugInfo).AllocatorInstance.Data,
             (this->FinalPostProcessDebugInfo).ArrayNum);
  pFVar3 = (this->FinalPostProcessDebugInfo).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FFinalPostProcessSettings::~FFinalPostProcessSettings(&this->FinalPostProcessSettings);
  FVar4 = (this->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->ViewFrustum).Planes.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  if (*(int *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
    (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
    pvVar5 = *(void **)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40);
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->ShowOnlyPrimitives);
  }
  (this->HiddenPrimitives).HashSize = 0;
  FVar6 = (this->HiddenPrimitives).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HiddenPrimitives).Elements);
  FSceneViewInitOptions::~FSceneViewInitOptions(&this->SceneViewInitOptions);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StereoCullingFrustum).SharedReferenceCount.ReferenceController);
  if (this->ViewUniformBuffer != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->ViewUniformBuffer);
  }
  return;
}

// operator() @ 148513d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FSceneView::ConfigureVisualizeCalibrationSettings'::__l2::<lambda_1>::operator()
          (void *this,FSoftObjectPath *param_1,UMaterialInterface **param_2,FName *param_3)

{
  int iVar1;
  UMaterialInterface *this_00;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res10;
  FString local_18;
  
  if ((param_1->AssetPath).PackageName != (FName)0x0) {
    this_00 = (UMaterialInterface *)
              FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
    if (this_00 != (UMaterialInterface *)0x0) {
      pUVar2 = Z_Construct_UClass_UMaterial_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        *param_2 = this_00;
        pFVar3 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
        if ((pFVar3->Data).ArrayNum == 0) {
          pwVar4 = L"";
        }
        else {
          pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_res10,pwVar4);
        *param_3 = local_res10;
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
    if (2 < (byte)LogBufferVisualization._0_1_) {
      FSoftObjectPath::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBufferVisualization);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    *param_2 = (UMaterialInterface *)0x0;
    param_3->ComparisonIndex = 0;
    param_3->Number = 0;
  }
  return;
}

// ConfigureBufferVisualizationSettings @ 14851de60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSceneView::ConfigureBufferVisualizationSettings(FSceneView *this)

{
  int *piVar1;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  FBufferVisualizationData *this_00;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FName *pFVar10;
  IConsoleManager *pIVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FString *pFVar14;
  bool bVar15;
  FName local_res8;
  UMaterialInterface *local_88;
  UMaterialInterface *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((FScreenshotRequest::bIsScreenshotRequested) || (GIsHighResScreenshot)) ||
     (GIsDumpingMovie != 0)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if (((&this->Family->EngineShowFlags)->VisualizeBuffer != 0) || (bVar15 != false)) {
    iVar13 = 0;
    pTVar2 = &(this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials;
    (this->FinalPostProcessSettings).bBufferVisualizationDumpRequired = bVar15;
    piVar1 = &(this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax;
    (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (bVar15 != false) {
      pFVar8 = FPaths::GetBaseFilename(&local_38,&FScreenshotRequest::Filename,false);
      pFVar14 = &(this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename;
      if (pFVar14 != pFVar8) {
        pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar14->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayNum =
             (pFVar8->Data).ArrayNum;
        (this->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayMax =
             (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar11 = IConsoleManager::Get();
      ::CVar = (IConsoleVariable *)
               (**(code **)((longlong)*pIVar11 + 0xc0))
                         (pIVar11,L"r.BufferVisualizationOverviewTargets");
      _Init_thread_footer(&::_TSS0);
    }
    (**(code **)(*(longlong *)::CVar + 0xd8))(::CVar,&local_58);
    this_00 = GetBufferVisualizationData();
    bVar5 = FBufferVisualizationData::IsDifferentToCurrentOverviewMaterialNames(this_00,&local_58);
    if (bVar5) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      FBufferVisualizationData::SetCurrentOverviewMaterialNames(this_00,&local_58);
      pTVar9 = FBufferVisualizationData::GetOverviewMaterials(this_00);
      pTVar9->ArrayNum = 0;
      if (pTVar9->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
      }
      while( true ) {
        iVar7 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        if (iVar7 == 0) break;
        ::FString::FString(&local_48,L",");
        bVar5 = ::FString::Split(&local_58,&local_48,&local_68,&local_78);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        iVar7 = 0;
        if (!bVar5) {
          iVar6 = local_58.Data.ArrayNum + -1;
          if (local_58.Data.ArrayNum == 0) {
            iVar6 = iVar7;
          }
          ::FString::AssignRange(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
        }
        ::FString::TrimStartInline(&local_68);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar12.Data = local_68.Data.AllocatorInstance.Data;
        }
        pFVar10 = ::FName::FName(&local_res8,(wchar_t *)FVar12.Data);
        local_88 = FBufferVisualizationData::GetMaterial(this_00,*pFVar10);
        if (local_88 == (UMaterialInterface *)0x0) {
          iVar6 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar6 = iVar7;
          }
          if ((0 < iVar6) && (2 < (byte)LogBufferVisualization._0_1_)) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBufferVisualization);
          }
        }
        pTVar9 = FBufferVisualizationData::GetOverviewMaterials(this_00);
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)pTVar9->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar9->ArrayNum;
        if (iVar6 == pTVar9->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        pTVar9->ArrayNum = iVar6 + 1;
        *(UMaterialInterface **)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_88;
        iVar6 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar6 = iVar7;
        }
        ::FString::AssignRange(&local_58,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar6);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pTVar9 = FBufferVisualizationData::GetOverviewMaterials(this_00);
    for (; (-1 < iVar13 && (iVar13 < pTVar9->ArrayNum)); iVar13 = iVar13 + 1) {
      if ((iVar13 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_80 = *(UMaterialInterface **)((pTVar9->AllocatorInstance).Data + (longlong)iVar13 * 8);
      if ((local_80 != (UMaterialInterface *)0x0) && (bVar15 != false)) {
        UMaterialInterface::EnsureIsComplete(local_80);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum = iVar7 + 1;
      *(UMaterialInterface **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_80;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ConfigureVisualizeCalibrationSettings @ 14851e380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSceneView::ConfigureVisualizeCalibrationSettings(FSceneView *this)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *this_00;
  FSoftObjectPath *pFVar5;
  UMaterialInterface **ppUVar6;
  FName *pFVar7;
  undefined1 local_res8 [8];
  
  this_00 = Z_Construct_UClass_URendererSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar2 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                         ,0x99a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->Family->EngineShowFlags).VisualizeCalibrationColor == 0) {
    if ((this->Family->EngineShowFlags).VisualizeCalibrationGrayscale == 0) {
      if ((this->Family->EngineShowFlags).VisualizeCalibrationCustom == 0) {
        return;
      }
      pFVar7 = &this->CurrentVisualizeCalibrationCustomMaterialName;
      ppUVar6 = &(this->FinalPostProcessSettings).VisualizeCalibrationCustomMaterial;
      pFVar5 = (FSoftObjectPath *)&pUVar2[0xc].field_0x18;
    }
    else {
      pFVar7 = &this->CurrentVisualizeCalibrationGrayscaleMaterialName;
      ppUVar6 = &(this->FinalPostProcessSettings).VisualizeCalibrationGrayscaleMaterial;
      pFVar5 = (FSoftObjectPath *)&pUVar2[0xd].field_0x10;
    }
  }
  else {
    pFVar7 = &this->CurrentVisualizeCalibrationColorMaterialName;
    ppUVar6 = &(this->FinalPostProcessSettings).VisualizeCalibrationColorMaterial;
    pFVar5 = (FSoftObjectPath *)&pUVar2[0xb].field_0x20;
  }
  `FSceneView::ConfigureVisualizeCalibrationSettings'::__l2::<lambda_1>::operator()
            (local_res8,pFVar5,ppUVar6,pFVar7);
  return;
}

// CursorToScreen @ 1485208c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector4<double> * __thiscall
FSceneView::CursorToScreen
          (FSceneView *this,TVector4<double> *__return_storage_ptr__,float param_1,float param_2,
          float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)&(this->UnscaledViewRect).field0_0x0;
  iVar2 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 4);
  fVar5 = (float)(*(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 8) - iVar1);
  fVar6 = param_1 - (float)iVar1;
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  fVar4 = param_2 - (float)iVar2;
  fVar3 = (float)(*(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 0xc) - iVar2);
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = __real_3f800000 - (fVar4 + fVar4) / fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)((fVar6 + fVar6) / fVar5 - __real_3f800000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)param_3;
  return __return_storage_ptr__;
}

// Deproject @ 148520980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FSceneView::Deproject
          (FSceneView *this,TVector<double> *__return_storage_ptr__,TPlane<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar8 = __real_3ff0000000000000;
  dVar11 = param_1->W;
  dVar1 = (this->ViewMatrices).InvViewProjectionMatrix.M[1][1];
  dVar12 = dVar11 * (double)param_1->_padding_;
  dVar9 = dVar11 * (double)param_1->_padding_;
  dVar11 = dVar11 * (double)param_1->_padding_;
  dVar2 = (this->ViewMatrices).InvViewProjectionMatrix.M[0][1];
  dVar3 = (this->ViewMatrices).InvViewProjectionMatrix.M[1][2];
  dVar4 = (this->ViewMatrices).InvViewProjectionMatrix.M[2][1];
  dVar10 = __real_3ff0000000000000 * (this->ViewMatrices).InvViewProjectionMatrix.M[3][1];
  dVar5 = (this->ViewMatrices).InvViewProjectionMatrix.M[0][2];
  dVar6 = (this->ViewMatrices).InvViewProjectionMatrix.M[2][2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar12 * (this->ViewMatrices).InvViewProjectionMatrix.M[0][0] +
       dVar9 * (this->ViewMatrices).InvViewProjectionMatrix.M[1][0] +
       dVar11 * (this->ViewMatrices).InvViewProjectionMatrix.M[2][0] +
       __real_3ff0000000000000 * (this->ViewMatrices).InvViewProjectionMatrix.M[3][0];
  dVar7 = (this->ViewMatrices).InvViewProjectionMatrix.M[3][2];
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar12 * dVar2 + dVar9 * dVar1 + dVar11 * dVar4 + dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar3 * dVar9 + dVar5 * dVar12 + dVar6 * dVar11 + dVar7 * dVar8;
  return __return_storage_ptr__;
}

// DeprojectFVector2D @ 148520a80

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
FSceneView::DeprojectFVector2D
          (FSceneView *this,TVector2<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined1 auStackY_c8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98.M[0][0] = (this->ViewMatrices).InvViewProjectionMatrix.M[0][0];
  local_98.M[0][1] = (this->ViewMatrices).InvViewProjectionMatrix.M[0][1];
  local_98.M[0][2] = (this->ViewMatrices).InvViewProjectionMatrix.M[0][2];
  local_98.M[0][3] = (this->ViewMatrices).InvViewProjectionMatrix.M[0][3];
  local_98.M[1][0] = (this->ViewMatrices).InvViewProjectionMatrix.M[1][0];
  local_98.M[1][1] = (this->ViewMatrices).InvViewProjectionMatrix.M[1][1];
  local_98.M[1][2] = (this->ViewMatrices).InvViewProjectionMatrix.M[1][2];
  local_98.M[1][3] = (this->ViewMatrices).InvViewProjectionMatrix.M[1][3];
  local_98.M[2][0] = (this->ViewMatrices).InvViewProjectionMatrix.M[2][0];
  local_98.M[2][1] = (this->ViewMatrices).InvViewProjectionMatrix.M[2][1];
  local_98.M[2][2] = (this->ViewMatrices).InvViewProjectionMatrix.M[2][2];
  local_98.M[2][3] = (this->ViewMatrices).InvViewProjectionMatrix.M[2][3];
  local_98.M[3][0] = (this->ViewMatrices).InvViewProjectionMatrix.M[3][0];
  local_98.M[3][1] = (this->ViewMatrices).InvViewProjectionMatrix.M[3][1];
  local_98.M[3][2] = (this->ViewMatrices).InvViewProjectionMatrix.M[3][2];
  local_98.M[3][3] = (this->ViewMatrices).InvViewProjectionMatrix.M[3][3];
  DeprojectScreenToWorld(param_1,&this->UnscaledViewRect,&local_98,param_2,param_3);
  return;
}

// DeprojectScreenToWorld @ 148520b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FSceneView::DeprojectScreenToWorld
          (TVector2<double> *param_1,TIntRect<int> *param_2,TMatrix<double> *param_3,
          TMatrix<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined8 uVar33;
  double dStack_100;
  double dStack_f0;
  double local_e8;
  
  dVar10 = param_4->M[0][0];
  dVar32 = param_4->M[0][1];
  dVar16 = param_4->M[2][0];
  dVar17 = param_4->M[2][1];
  dVar18 = param_4->M[3][0];
  dVar19 = param_4->M[3][1];
  dVar20 = param_4->M[0][2];
  dVar21 = param_4->M[0][3];
  dVar22 = param_4->M[2][2];
  dVar23 = param_4->M[2][3];
  dVar24 = param_4->M[3][2];
  dVar25 = param_4->M[3][3];
  dVar26 = param_4->M[1][2];
  dVar27 = param_4->M[1][3];
  fVar29 = (float)((int)(longlong)(param_1->field0_0x0)._s_0.X - *(int *)&param_2->field0_0x0) /
           (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0);
  fVar28 = __real_3f000000 -
           (float)((int)(longlong)(param_1->field0_0x0)._s_0.Y -
                  *(int *)((longlong)&param_2->field0_0x0 + 4)) /
           (float)(*(int *)((longlong)&param_2->field0_0x0 + 0xc) -
                  *(int *)((longlong)&param_2->field0_0x0 + 4));
  dVar30 = (double)(fVar28 + fVar28);
  dVar11 = (double)(((fVar29 - __real_3f000000) + fVar29) - __real_3f000000);
  dVar6 = param_4->M[1][0] * dVar30 + dVar10 * dVar11;
  dVar7 = param_4->M[1][1] * dVar30 + dVar32 * dVar11;
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar6;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dStack_100 = auVar2._8_8_;
  dVar6 = dVar6 + dVar16 * ___xmm_3ff00000000000003ff0000000000000;
  dStack_100 = dStack_100 + dVar17 * ___xmm_3ff00000000000003ff0000000000000;
  auVar1._8_4_ = SUB84(dStack_100,0);
  auVar1._0_8_ = dVar6;
  auVar1._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
  dStack_100 = auVar1._8_8_;
  dVar6 = dVar6 + dVar18 * _UNK_150689688;
  dStack_100 = dStack_100 + dVar19 * _UNK_150689688;
  auVar3._8_4_ = SUB84(dStack_100,0);
  auVar3._0_8_ = dVar6;
  auVar3._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
  dVar7 = dVar26 * dVar30 + dVar20 * dVar11;
  dVar8 = dVar27 * dVar30 + dVar21 * dVar11;
  auVar4._8_4_ = SUB84(dVar8,0);
  auVar4._0_8_ = dVar7;
  auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dStack_f0 = auVar4._8_8_;
  dVar12 = auVar3._8_8_;
  dVar7 = dVar7 + dVar22 * ___xmm_3ff00000000000003ff0000000000000 + dVar24 * _UNK_150689688;
  dVar8 = dStack_f0 + dVar23 * ___xmm_3ff00000000000003ff0000000000000 + dVar25 * _UNK_150689688;
  auVar9._8_4_ = SUB84(dVar8,0);
  auVar9._0_8_ = dVar7;
  auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar10 = param_4->M[1][0] * dVar30 + dVar10 * dVar11 +
           dVar16 * ___xmm_3ff00000000000003f847ae140000000 + dVar18 * _UNK_151b112b8;
  dVar8 = param_4->M[1][1] * dVar30 + dVar32 * dVar11 +
          dVar17 * ___xmm_3ff00000000000003f847ae140000000 + dVar19 * _UNK_151b112b8;
  auVar14._4_8_ = _UNK_150689688;
  auVar14._0_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar31._0_8_ = auVar14._0_8_ << 0x20;
  auVar31._8_4_ = SUB84(dVar8,0);
  auVar31._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_e8 = auVar31._8_8_;
  dVar32 = dVar26 * dVar30 + dVar20 * dVar11 + dVar22 * ___xmm_3ff00000000000003f847ae140000000 +
           dVar24 * _UNK_151b112b8;
  dVar8 = dVar27 * dVar30 + dVar21 * dVar11 + dVar23 * ___xmm_3ff00000000000003f847ae140000000 +
          dVar25 * _UNK_151b112b8;
  if (auVar9._8_8_ != 0.0) {
    dVar30 = __real_3ff0000000000000 / auVar9._8_8_;
    dVar6 = dVar6 * dVar30;
    dVar12 = dVar12 * dVar30;
    dVar7 = dVar7 * dVar30;
  }
  if (dVar8 != 0.0) {
    dVar8 = __real_3ff0000000000000 / dVar8;
    dVar10 = dVar10 * dVar8;
    local_e8 = local_e8 * dVar8;
    dVar32 = dVar32 * dVar8;
  }
  uVar33 = dVar10 - dVar6;
  local_e8 = local_e8 - dVar12;
  uVar13 = dVar32 - dVar7;
  dVar8 = local_e8 * local_e8 + (double)uVar33 * (double)uVar33 + (double)uVar13 * (double)uVar13;
  if (dVar8 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar13 = (double)uVar13 * dVar8;
      local_e8 = dVar8 * local_e8;
      uVar33 = dVar8 * (double)uVar33;
    }
    else {
      local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  dVar30 = param_3->M[1][0];
  dVar11 = param_3->M[1][1];
  dVar32 = param_3->M[0][0];
  dVar16 = param_3->M[0][1];
  dVar17 = param_3->M[2][0];
  dVar18 = param_3->M[2][1];
  dVar19 = param_3->M[3][0];
  dVar20 = param_3->M[3][1];
  dVar21 = param_3->M[0][2];
  dVar22 = param_3->M[1][2];
  dVar23 = param_3->M[2][2];
  dVar24 = param_3->M[3][2];
  dVar10 = dVar20 * __real_3ff0000000000000;
  dVar8 = dVar24 * __real_3ff0000000000000;
  (param_5->field0_0x0)._s_0.X =
       dVar30 * dVar12 + dVar32 * dVar6 + dVar17 * dVar7 + dVar19 * __real_3ff0000000000000;
  dVar30 = dVar30 * local_e8 + dVar32 * (double)uVar33 + dVar17 * (double)uVar13 + dVar19 * 0.0;
  dVar32 = dVar11 * local_e8 + dVar16 * (double)uVar33 + dVar18 * (double)uVar13 + dVar20 * 0.0;
  (param_5->field0_0x0)._s_0.Y = dVar11 * dVar12 + dVar16 * dVar6 + dVar18 * dVar7 + dVar10;
  (param_5->field0_0x0)._s_0.Z = dVar22 * dVar12 + dVar21 * dVar6 + dVar23 * dVar7 + dVar8;
  dVar7 = dVar22 * local_e8 + dVar21 * (double)uVar33 + dVar23 * (double)uVar13 + dVar24 * 0.0;
  dVar6 = dVar32 * dVar32 + dVar30 * dVar30 + dVar7 * dVar7;
  uVar33 = dVar30;
  uVar13 = dVar32;
  uVar15 = dVar7;
  if ((dVar6 != __real_3ff0000000000000) &&
     (uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar6)) {
    dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
    uVar33 = dVar6 * dVar30;
    uVar13 = dVar6 * dVar32;
    uVar15 = dVar6 * dVar7;
  }
  auVar5._8_4_ = (int)uVar13;
  auVar5._0_8_ = uVar33;
  auVar5._12_4_ = (int)((ulonglong)uVar13 >> 0x20);
  *(undefined1 (*) [16])&param_6->field0_0x0 = auVar5;
  (param_6->field0_0x0)._s_0.Z = (double)uVar15;
  return;
}

// DeprojectScreenToWorld @ 148521080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FSceneView::DeprojectScreenToWorld
          (TVector2<double> *param_1,TIntRect<int> *param_2,TMatrix<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dStack_e0;
  
  auVar22._8_8_ = 0;
  auVar22._0_8_ = (param_1->field0_0x0)._s_0.X;
  iVar1 = *(int *)((longlong)&param_2->field0_0x0 + 4);
  auVar23 = roundpd(auVar22,auVar22,3);
  dVar41 = param_3->M[1][0];
  dVar34 = param_3->M[1][1];
  dVar44 = param_3->M[0][0];
  dVar9 = param_3->M[0][1];
  dVar10 = param_3->M[2][0];
  dVar11 = param_3->M[2][1];
  dVar12 = param_3->M[3][0];
  dVar32 = param_3->M[3][1];
  dVar13 = param_3->M[0][2];
  dVar14 = param_3->M[0][3];
  dVar15 = param_3->M[1][2];
  dVar16 = param_3->M[1][3];
  dVar17 = param_3->M[2][2];
  dVar18 = param_3->M[2][3];
  dVar19 = param_3->M[3][2];
  dVar20 = param_3->M[3][3];
  fVar40 = ((float)auVar23._0_8_ - (float)*(int *)&param_2->field0_0x0) /
           (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = (param_1->field0_0x0)._s_0.Y;
  auVar23 = roundpd(auVar24,auVar24,3);
  fVar38 = __real_3f000000 -
           ((float)auVar23._0_8_ - (float)iVar1) /
           (float)(*(int *)((longlong)&param_2->field0_0x0 + 0xc) - iVar1);
  dVar31 = (double)__xmm_3ff00000000000003ff0000000000000;
  dVar36 = __xmm_3ff00000000000003ff0000000000000._8_8_;
  dVar43 = (double)(fVar38 + fVar38);
  dVar42 = (double)(((fVar40 - __real_3f000000) + fVar40) - __real_3f000000);
  auVar25._8_4_ = SUB84(dVar42,0);
  auVar25._0_8_ = dVar42;
  uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
  auVar25._12_4_ = uVar39;
  dVar4 = dVar43 * dVar41 + dVar42 * dVar44;
  dVar45 = dVar43 * dVar34 + auVar25._8_8_ * dVar9;
  auVar23._8_4_ = SUB84(dVar45,0);
  auVar23._0_8_ = dVar4;
  auVar23._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
  dStack_e0 = auVar23._8_8_;
  auVar26._8_4_ = __xmm_3ff00000000000003ff0000000000000._8_4_;
  auVar26._0_8_ = dVar36;
  auVar26._12_4_ = __xmm_3ff00000000000003ff0000000000000._12_4_;
  dVar4 = dVar4 + dVar31 * dVar10 + dVar36 * dVar12;
  dVar45 = dStack_e0 + dVar31 * dVar11 + auVar26._8_8_ * dVar32;
  auVar2._8_4_ = SUB84(dVar45,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
  dVar33 = (double)__xmm_3ff00000000000003f847ae140000000;
  dVar37 = __xmm_3ff00000000000003f847ae140000000._8_8_;
  dVar21 = dVar43 * dVar15 + dVar42 * dVar13 + dVar31 * dVar17 + dVar36 * dVar19;
  dVar31 = dVar43 * dVar16 + dVar42 * dVar14 + dVar31 * dVar18 + dVar36 * dVar20;
  auVar27._8_4_ = SUB84(dVar42,0);
  auVar27._0_8_ = dVar42;
  auVar27._12_4_ = uVar39;
  dStack_e0 = auVar2._8_8_;
  auVar28._8_4_ = __xmm_3ff00000000000003f847ae140000000._8_4_;
  auVar28._0_8_ = dVar37;
  auVar28._12_4_ = __xmm_3ff00000000000003f847ae140000000._12_4_;
  dVar32 = auVar28._8_8_ * dVar32;
  dVar44 = dVar43 * dVar41 + dVar42 * dVar44 + dVar33 * dVar10 + dVar37 * dVar12;
  dVar45 = dVar43 * dVar34 + auVar27._8_8_ * dVar9 + dVar33 * dVar11 + dVar32;
  auVar5._4_8_ = dVar32;
  auVar5._0_4_ = (int)((ulonglong)dVar21 >> 0x20);
  auVar29._0_8_ = auVar5._0_8_ << 0x20;
  auVar29._8_4_ = SUB84(dVar31,0);
  auVar29._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  dVar41 = dVar43 * dVar15 + dVar42 * dVar13 + dVar33 * dVar17 + dVar37 * dVar19;
  dVar42 = dVar43 * dVar16 + dVar42 * dVar14 + dVar33 * dVar18 + dVar37 * dVar20;
  if (auVar29._8_8_ != 0.0) {
    dVar34 = __real_3ff0000000000000 / auVar29._8_8_;
    dVar4 = dVar4 * dVar34;
    dStack_e0 = dStack_e0 * dVar34;
    dVar21 = dVar34 * dVar21;
  }
  auVar6._4_8_ = dVar31;
  auVar6._0_4_ = (int)((ulonglong)dVar41 >> 0x20);
  auVar30._0_8_ = auVar6._0_8_ << 0x20;
  auVar30._8_4_ = SUB84(dVar42,0);
  auVar30._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  if (auVar30._8_8_ != 0.0) {
    dVar42 = __real_3ff0000000000000 / auVar30._8_8_;
    dVar44 = dVar44 * dVar42;
    dVar45 = dVar45 * dVar42;
    dVar41 = dVar41 * dVar42;
  }
  dVar44 = dVar44 - dVar4;
  dVar45 = dVar45 - dStack_e0;
  dVar41 = dVar41 - dVar21;
  dVar42 = dVar45 * dVar45 + dVar44 * dVar44 + dVar41 * dVar41;
  uVar35 = dVar41;
  uVar7 = dVar45;
  uVar8 = dVar44;
  if ((dVar42 != __real_3ff0000000000000) &&
     (uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar42)) {
    dVar42 = __real_3ff0000000000000 / SQRT(dVar42);
    uVar35 = dVar42 * dVar41;
    uVar7 = dVar42 * dVar45;
    uVar8 = dVar42 * dVar44;
  }
  (param_4->field0_0x0)._s_0.X = dVar4;
  (param_4->field0_0x0)._s_0.Y = dStack_e0;
  (param_4->field0_0x0)._s_0.Z = dVar21;
  auVar3._8_4_ = (int)uVar7;
  auVar3._0_8_ = uVar8;
  auVar3._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 (*) [16])&param_5->field0_0x0 = auVar3;
  (param_5->field0_0x0)._s_0.Z = (double)uVar35;
  return;
}

// EndFinalPostprocessSettings @ 148523940

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
FSceneView::EndFinalPostprocessSettings(FSceneView *this,FSceneViewInitOptions *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FSceneViewFamily *pFVar3;
  IStereoRendering *pIVar4;
  UObject *pUVar5;
  FSceneViewStateInterface *pFVar6;
  code *pcVar7;
  uint uVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  IConsoleManager *pIVar11;
  longlong *plVar12;
  TConsoleVariableData<float> *pTVar13;
  TConsoleVariableData<float> *pTVar14;
  UClass *this_00;
  FSoftObjectPath *pFVar15;
  UMaterialInterface **ppUVar16;
  FName *pFVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  
  pTVar14 = (TConsoleVariableData<float> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar11 = IConsoleManager::Get();
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11);
    pTVar13 = pTVar14;
    if (plVar12 != (longlong *)0x0) {
      pTVar13 = (TConsoleVariableData<float> *)(**(code **)(*plVar12 + 0x68))(plVar12);
    }
    SceneColorFringeQualityCVar = (TConsoleVariableData<int> *)pTVar13;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar9 = SceneColorFringeQualityCVar;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar9->ShadowedValue[0] < 1) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x2fc = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar11 = IConsoleManager::Get();
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11);
    pTVar13 = pTVar14;
    if (plVar12 != (longlong *)0x0) {
      pTVar13 = (TConsoleVariableData<float> *)(**(code **)(*plVar12 + 0x68))(plVar12);
    }
    LocalExposureCVar = (TConsoleVariableData<int> *)pTVar13;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar9 = LocalExposureCVar;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pTVar9->ShadowedValue[0] < 1) || ((this->Family->EngineShowFlags).LocalExposure == 0)) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x4e4 = 0x3f800000;
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x4e8 = 0x3f800000;
    *(undefined8 *)&(this->FinalPostProcessSettings).field_0x4f0 = 0;
    *(undefined8 *)&(this->FinalPostProcessSettings).field_0x4f8 = 0;
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x508 = 0x3f800000;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar11 = IConsoleManager::Get();
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11);
    pTVar13 = pTVar14;
    if (plVar12 != (longlong *)0x0) {
      pTVar13 = (TConsoleVariableData<float> *)(**(code **)(*plVar12 + 0x68))(plVar12);
    }
    BloomQualityCVar = (TConsoleVariableData<int> *)pTVar13;
    _Init_thread_footer(&::_TSS2);
  }
  pTVar9 = BloomQualityCVar;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar1 = &(this->FinalPostProcessSettings).field_0x304;
  if (pTVar9->ShadowedValue[0] < 1) {
    *(undefined4 *)puVar1 = 0;
  }
  if ((this->Family->EngineShowFlags).Bloom == 0) {
    *(undefined4 *)puVar1 = 0;
  }
  pTVar9 = CVarTonemapperQuality.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar9->ShadowedValue[0] < 2) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x5c8 = 0;
LAB_148523c55:
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x5d8 = 0;
  }
  else if (pTVar9->ShadowedValue[0] < 4) goto LAB_148523c55;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pIVar11 = IConsoleManager::Get();
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11);
    pTVar13 = pTVar14;
    if (plVar12 != (longlong *)0x0) {
      pTVar13 = (TConsoleVariableData<float> *)(**(code **)(*plVar12 + 0x68))(plVar12);
    }
    DepthOfFieldQualityCVar = (TConsoleVariableData<int> *)pTVar13;
    _Init_thread_footer(&::_TSS3);
  }
  pTVar9 = DepthOfFieldQualityCVar;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar1 = &(this->FinalPostProcessSettings).field_0x6c0;
  if (pTVar9->ShadowedValue[0] < 1) {
    *(undefined4 *)puVar1 = 0;
  }
  pFVar3 = this->Family;
  if ((pFVar3->EngineShowFlags).DepthOfField == 0) {
    *(undefined4 *)puVar1 = 0;
  }
  if ((&pFVar3->EngineShowFlags)->Vignette == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x5c8 = 0;
  }
  if ((&pFVar3->EngineShowFlags)->Grain == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x5d8 = 0;
  }
  if ((&pFVar3->EngineShowFlags)->CameraImperfections == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x3c8 = 0;
  }
  if ((pFVar3->EngineShowFlags).AmbientCubemap == 0) {
    iVar2 = (this->FinalPostProcessSettings).ContributingCubemaps.ArrayMax;
    (this->FinalPostProcessSettings).ContributingCubemaps.ArrayNum = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->FinalPostProcessSettings).ContributingCubemaps.AllocatorInstance,0
                 ,&(this->FinalPostProcessSettings).ContributingCubemaps.ArrayMax);
    }
  }
  pFVar3 = this->Family;
  if ((&pFVar3->EngineShowFlags)->LensFlares == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x520 = 0;
  }
  if ((pFVar3->EngineShowFlags).ToneCurve == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x2d4 = 0;
  }
  pTVar13 = CVarExposureOffset.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x494 =
       *(float *)&(this->FinalPostProcessSettings).field_0x494 + pTVar13->ShadowedValue[0];
  pTVar13 = CVarDepthOfFieldDepthBlurAmount.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar8 = __xmm_80000000800000008000000080000000;
  fVar18 = pTVar13->ShadowedValue[0];
  if (fVar18 <= 0.0) {
    fVar18 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
  }
  else {
    fVar18 = fVar18 * *(float *)&(this->FinalPostProcessSettings).field_0x664;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x664 = fVar18;
  pTVar13 = CVarDepthOfFieldDepthBlurResolutionScale.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar18 = pTVar13->ShadowedValue[0];
  if (pTVar13->ShadowedValue[0] <= __real_3f800000) {
    fVar18 = __real_3f800000;
  }
  fVar19 = (float)(*(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 8) -
                  *(int *)&(this->UnscaledViewRect).field0_0x0) * __real_3a088889 - __real_3f800000;
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x668 =
       (fVar19 * (fVar18 - __real_3f800000) + __real_3f800000) *
       *(float *)&(this->FinalPostProcessSettings).field_0x668;
  pTVar13 = CVarDepthOfFieldDepthBlurScale.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar18 = pTVar13->ShadowedValue[0];
  if (fVar18 <= 0.0) {
    fVar18 = (float)((uint)fVar18 ^ uVar8);
  }
  else {
    fVar18 = fVar18 * *(float *)&(this->FinalPostProcessSettings).field_0x668;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x668 = fVar18;
  pIVar4 = (GEngine->StereoRenderingDevice).Object;
  if (pIVar4 != (IStereoRendering *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0xa0))
              (pIVar4,&this->FinalPostProcessSettings,this->StereoPass,this->StereoViewIndex);
  }
  pTVar13 = CVarSSRMaxRoughness.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (0.0 <= pTVar13->ShadowedValue[0]) {
    *(float *)&(this->FinalPostProcessSettings).field_0x458 = pTVar13->ShadowedValue[0];
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    pIVar11 = IConsoleManager::Get();
    plVar12 = (longlong *)
              (**(code **)((longlong)*pIVar11 + 0xc0))
                        (pIVar11,L"r.AmbientOcclusionStaticFraction",1);
    pTVar13 = pTVar14;
    if (plVar12 != (longlong *)0x0) {
      pTVar13 = (TConsoleVariableData<float> *)(**(code **)(*plVar12 + 0x70))(plVar12);
    }
    AmbientOcclusionStaticFractionCVar = pTVar13;
    _Init_thread_footer(&::_TSS4);
  }
  pTVar13 = AmbientOcclusionStaticFractionCVar;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (0.0 <= pTVar13->ShadowedValue[0]) {
    *(float *)&(this->FinalPostProcessSettings).field_0x604 = pTVar13->ShadowedValue[0];
  }
  if (((&this->Family->EngineShowFlags)->AmbientOcclusion == 0) ||
     ((this->Family->EngineShowFlags).ScreenSpaceAO == 0)) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x600 = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    pIVar11 = IConsoleManager::Get();
    plVar12 = (longlong *)
              (**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.AmbientOcclusionRadiusScale",1);
    if (plVar12 != (longlong *)0x0) {
      pTVar14 = (TConsoleVariableData<float> *)(**(code **)(*plVar12 + 0x70))(plVar12);
    }
    AmbientOcclusionRadiusScaleCVar = pTVar14;
    _Init_thread_footer(&::_TSS5);
  }
  pTVar14 = AmbientOcclusionRadiusScaleCVar;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar18 = pTVar14->ShadowedValue[0];
  if (__real_41700000 <= pTVar14->ShadowedValue[0]) {
    fVar18 = __real_41700000;
  }
  if (fVar18 <= __real_3dcccccd) {
    fVar18 = __real_3dcccccd;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x608 =
       fVar18 * *(float *)&(this->FinalPostProcessSettings).field_0x608;
  pTVar14 = CVarSSAOFadeRadiusScale.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar18 = __real_42480000;
  fVar19 = pTVar14->ShadowedValue[0];
  if (__real_42480000 <= pTVar14->ShadowedValue[0]) {
    fVar19 = __real_42480000;
  }
  if (fVar19 <= __real_3c23d70a) {
    fVar19 = __real_3c23d70a;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x618 =
       fVar19 * *(float *)&(this->FinalPostProcessSettings).field_0x618;
  pTVar14 = CVarMotionBlurScale.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar19 = pTVar14->ShadowedValue[0];
  if (fVar18 <= pTVar14->ShadowedValue[0]) {
    fVar19 = fVar18;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x6d8 =
       fVar19 * *(float *)&(this->FinalPostProcessSettings).field_0x6d8;
  pTVar14 = CVarMotionBlurAmount.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (0.0 <= pTVar14->ShadowedValue[0]) {
    *(float *)&(this->FinalPostProcessSettings).field_0x6d8 = pTVar14->ShadowedValue[0];
  }
  pTVar14 = CVarMotionBlurMax.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (0.0 <= pTVar14->ShadowedValue[0]) {
    *(float *)&(this->FinalPostProcessSettings).field_0x6dc = pTVar14->ShadowedValue[0];
  }
  pTVar9 = CVarMotionBlurTargetFPS.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (-1 < pTVar9->ShadowedValue[0]) {
    *(int *)&(this->FinalPostProcessSettings).field_0x6e0 = pTVar9->ShadowedValue[0];
  }
  pTVar14 = CVarSceneColorFringeMax.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar18 = pTVar14->ShadowedValue[0];
  if (fVar18 < 0.0) {
    if (fVar18 == __real_c0000000) {
      *(undefined4 *)&(this->FinalPostProcessSettings).field_0x2fc = 0x40a00000;
    }
  }
  else {
    fVar19 = *(float *)&(this->FinalPostProcessSettings).field_0x2fc;
    if (fVar18 <= fVar19) {
      fVar19 = fVar18;
    }
    *(float *)&(this->FinalPostProcessSettings).field_0x2fc = fVar19;
  }
  pFVar3 = this->Family;
  if (((pFVar3->EngineShowFlags).SceneColorFringe == 0) ||
     ((&pFVar3->EngineShowFlags)->CameraImperfections == 0)) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x2fc = 0;
  }
  if (((pFVar3->EngineShowFlags).Lighting == 0) ||
     ((&pFVar3->EngineShowFlags)->GlobalIllumination == 0)) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x3f0 = 0;
    *(undefined8 *)&(this->FinalPostProcessSettings).field_0x3e0 = 0;
    *(undefined8 *)&(this->FinalPostProcessSettings).field_0x3e8 = 0;
  }
  bVar10 = AllowDebugViewmodes();
  if (bVar10) {
    ConfigureBufferVisualizationSettings(this);
  }
  if ((this->Family->EngineShowFlags).VisualizeCalibrationColor != 0 ||
      ((this->Family->EngineShowFlags).VisualizeCalibrationGrayscale != 0 ||
      (this->Family->EngineShowFlags).VisualizeCalibrationCustom != 0)) {
    this_00 = Z_Construct_UClass_URendererSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((pUVar5 == (UObject *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Settings",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                            ,0x99a,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this->Family->EngineShowFlags).VisualizeCalibrationColor == 0) {
      if ((this->Family->EngineShowFlags).VisualizeCalibrationGrayscale == 0) {
        if ((this->Family->EngineShowFlags).VisualizeCalibrationCustom == 0) goto LAB_1485244d2;
        pFVar17 = &this->CurrentVisualizeCalibrationCustomMaterialName;
        ppUVar16 = &(this->FinalPostProcessSettings).VisualizeCalibrationCustomMaterial;
        pFVar15 = (FSoftObjectPath *)&pUVar5[0xc].field_0x18;
      }
      else {
        pFVar17 = &this->CurrentVisualizeCalibrationGrayscaleMaterialName;
        ppUVar16 = &(this->FinalPostProcessSettings).VisualizeCalibrationGrayscaleMaterial;
        pFVar15 = (FSoftObjectPath *)&pUVar5[0xd].field_0x10;
      }
    }
    else {
      pFVar17 = &this->CurrentVisualizeCalibrationColorMaterialName;
      ppUVar16 = &(this->FinalPostProcessSettings).VisualizeCalibrationColorMaterial;
      pFVar15 = (FSoftObjectPath *)&pUVar5[0xb].field_0x20;
    }
    `FSceneView::ConfigureVisualizeCalibrationSettings'::__l2::<lambda_1>::operator()
              (local_res8,pFVar15,ppUVar16,pFVar17);
  }
LAB_1485244d2:
  pFVar6 = this->State;
  if (pFVar6 != (FSceneViewStateInterface *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0xb8))
              (pFVar6,*(undefined8 *)&(this->FinalPostProcessSettings).field_0x4a8);
  }
  bVar10 = VerifyMembersChecks(this);
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("VerifyMembersChecks()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                          ,0x94c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// GetDistanceFieldTemporalSampleIndex @ 14852a390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FSceneView::GetDistanceFieldTemporalSampleIndex(FSceneView *this)

{
  uint uVar1;
  
  if (this->State != (FSceneViewStateInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852a39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->State->_padding_ + 0x98))();
    return uVar1;
  }
  return 0;
}

// GetEyeAdaptationBuffer @ 14852a6f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRDGPooledBuffer * __thiscall FSceneView::GetEyeAdaptationBuffer(FSceneView *this)

{
  FRDGPooledBuffer *pFVar1;
  
  if (this->EyeAdaptationViewState != (FSceneViewStateInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852a6ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FRDGPooledBuffer *)(**(code **)(this->EyeAdaptationViewState->_padding_ + 0xa0))();
    return pFVar1;
  }
  return (FRDGPooledBuffer *)0x0;
}

// GetInstancedSceneView @ 14852b500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __thiscall FSceneView::GetInstancedSceneView(FSceneView *this)

{
  FSceneViewFamily *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSceneView *pFVar5;
  uint uVar6;
  FSceneView *pFVar7;
  
  if ((((this->bIsSinglePassStereo != false) && (this->StereoPass != eSSP_FULL)) &&
      (pFVar1 = this->Family, pFVar1 != (FSceneViewFamily *)0x0)) &&
     ((uVar6 = this->PrimaryViewIndex + 1, -1 < (int)uVar6 &&
      ((int)uVar6 < (pFVar1->Views).ArrayNum)))) {
    uVar4 = 0;
    if ((int)uVar6 < (pFVar1->Views).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSceneView *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = *(FSceneView **)((pFVar1->Views).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    bVar3 = IStereoRendering::IsASecondaryView(pFVar5);
    pFVar7 = (FSceneView *)0x0;
    if (bVar3) {
      pFVar7 = pFVar5;
    }
    return pFVar7;
  }
  return (FSceneView *)0x0;
}

// GetLastAverageSceneLuminance @ 14852b5e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FSceneView::GetLastAverageSceneLuminance(FSceneView *this)

{
  float fVar1;
  
  if (this->EyeAdaptationViewState != (FSceneViewStateInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852b5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(this->EyeAdaptationViewState->_padding_ + 0xb0))();
    return fVar1;
  }
  return 0.0;
}

// GetLastEyeAdaptationExposure @ 14852b600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FSceneView::GetLastEyeAdaptationExposure(FSceneView *this)

{
  float fVar1;
  
  if (this->EyeAdaptationViewState != (FSceneViewStateInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852b60f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(this->EyeAdaptationViewState->_padding_ + 0xa8))();
    return fVar1;
  }
  return 0.0;
}

// GetOcclusionFrameCounter @ 14852bde0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FSceneView::GetOcclusionFrameCounter(FSceneView *this)

{
  uint uVar1;
  
  if (this->State != (FSceneViewStateInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852bdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->State->_padding_ + 0xd8))();
    return uVar1;
  }
  return 0xffffffff;
}

// GetPrimarySceneView @ 14852c3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __thiscall FSceneView::GetPrimarySceneView(FSceneView *this)

{
  uint uVar1;
  FSceneViewFamily *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSceneView *pFVar6;
  
  pFVar2 = this->Family;
  if (pFVar2 != (FSceneViewFamily *)0x0) {
    uVar1 = this->PrimaryViewIndex;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar2->Views).ArrayNum)) {
      uVar5 = 0;
      if ((int)uVar1 < (pFVar2->Views).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FSceneView *)(*pcVar3)();
          return pFVar6;
        }
      }
      return *(FSceneView **)((pFVar2->Views).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    }
  }
  return this;
}

// GetScreenPositionScaleBias @ 14852cc10

TVector4<float> * __cdecl
FSceneView::GetScreenPositionScaleBias
          (TVector4<float> *__return_storage_ptr__,TIntPoint<int> *param_1,TIntRect<int> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = __real_3f000000;
  fVar8 = __real_3f800000 / (float)(param_1->field0_0x0)._s_0.X;
  iVar1 = *(int *)&param_2->field0_0x0;
  iVar2 = *(int *)((longlong)&param_2->field0_0x0 + 0xc);
  fVar7 = __real_3f800000 / (float)(param_1->field0_0x0)._s_0.Y;
  fVar5 = (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) - iVar1);
  fVar6 = fVar5 * __real_3f000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar5 * fVar8 * __real_3f000000;
  iVar3 = *(int *)((longlong)&param_2->field0_0x0 + 4);
  fVar5 = (float)(iVar2 - iVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * fVar7 * __real_bf000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (fVar5 * fVar4 + (float)iVar3) * fVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.W = (fVar6 + (float)iVar1) * fVar8;
  return __return_storage_ptr__;
}

// GetSecondaryViews @ 14852ccc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FSceneView::GetSecondaryViews
          (FSceneView *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FSceneViewFamily *pFVar9;
  uint uVar10;
  longlong lVar11;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar10 = (this->Family->Views).ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar9 = this->Family;
  uVar10 = this->PrimaryViewIndex + 1;
  if ((int)uVar10 < (pFVar9->Views).ArrayNum) {
    lVar11 = (longlong)(int)uVar10;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (pFVar9->Views).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      bVar5 = IStereoRendering::IsASecondaryView
                        (*(FSceneView **)((pFVar9->Views).AllocatorInstance.Data + lVar11 * 8));
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      pFVar9 = this->Family;
      uVar6 = 0;
      if ((int)uVar10 < (pFVar9->Views).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar2 = (pFVar9->Views).AllocatorInstance.Data + lVar11 * 8;
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar2;
      pFVar9 = this->Family;
    } while ((int)uVar10 < (pFVar9->Views).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetShaderPlatform @ 14852cf10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

EShaderPlatform __thiscall FSceneView::GetShaderPlatform(FSceneView *this)

{
  return GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel];
}

// GetShadowViewMatrices @ 14852cf30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FViewMatrices * __thiscall FSceneView::GetShadowViewMatrices(FSceneView *this)

{
  TOptional<FViewMatrices> *pTVar1;
  
  pTVar1 = &ShadowFreezeCamera::Backup;
  if (!ShadowFreezeCamera::Backup.bIsSet) {
    pTVar1 = (TOptional<FViewMatrices> *)&this->ViewMatrices;
  }
  return &pTVar1->TypedValue;
}

// GetTemporalLODOrigin @ 14852eea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FSceneView::GetTemporalLODOrigin
          (FSceneView *this,TVector<double> *__return_storage_ptr__,int param_1,bool param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  
  if ((param_2) && (this->State != (FSceneViewStateInterface *)0x0)) {
    lVar2 = (**(code **)(this->State->_padding_ + 0x60))();
    if (*(float *)(lVar2 + 0x38) != 0.0) {
      puVar1 = (undefined4 *)(lVar2 + (longlong)param_1 * 0x18);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      dVar7 = *(double *)(lVar2 + 0x10 + (longlong)param_1 * 0x18);
      goto LAB_14852eef4;
    }
  }
  uVar3 = *(undefined4 *)&(this->ViewMatrices).ViewOrigin.field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(this->ViewMatrices).ViewOrigin.field0_0x0 + 4);
  uVar5 = *(undefined4 *)((longlong)&(this->ViewMatrices).ViewOrigin.field0_0x0 + 8);
  uVar6 = *(undefined4 *)((longlong)&(this->ViewMatrices).ViewOrigin.field0_0x0 + 0xc);
  dVar7 = (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
LAB_14852eef4:
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7;
  return __return_storage_ptr__;
}

// GetTemporalLODTransition @ 14852ef20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FSceneView::GetTemporalLODTransition(FSceneView *this)

{
  float fVar1;
  
  if (this->State != (FSceneViewStateInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852ef2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(this->State->_padding_ + 0x68))();
    return fVar1;
  }
  return 0.0;
}

// GetViewKey @ 14852f3a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FSceneView::GetViewKey(FSceneView *this)

{
  uint uVar1;
  
  if (this->State != (FSceneViewStateInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852f3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->State->_padding_ + 0x70))();
    return uVar1;
  }
  return 0;
}

// HasValidEyeAdaptationBuffer @ 14852f700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSceneView::HasValidEyeAdaptationBuffer(FSceneView *this)

{
  if (this->EyeAdaptationViewState != (FSceneViewStateInterface *)0x0) {
    return this->EyeAdaptationViewState->bValidEyeAdaptationBuffer;
  }
  return false;
}

// IsInstancedStereoPass @ 148532830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSceneView::IsInstancedStereoPass(FSceneView *this)

{
  bool bVar1;
  
  if (this->bIsInstancedStereoEnabled != false) {
    bVar1 = IStereoRendering::IsStereoEyeView(this);
    if (bVar1) {
      bVar1 = IStereoRendering::IsAPrimaryView(this);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// OverridePostProcessSettings @ 148534a10

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
FSceneView::OverridePostProcessSettings
          (FSceneView *this,FPostProcessSettings *param_1,float param_2)

{
  FFinalPostProcessSettings *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  uint uVar12;
  UTextureCube *pUVar13;
  UTexture *pUVar14;
  UTexture2D *pUVar15;
  UCurveFloat *pUVar16;
  UObjectBase *this_01;
  code *pcVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  double dVar36;
  double dVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  uint uVar42;
  FName *pFVar43;
  FThreadSafeStaticStat<FStat_STAT_OverridePostProcessSettings> FVar44;
  float *pfVar45;
  UClass *pUVar46;
  longlong *plVar47;
  float fVar48;
  undefined1 *puVar49;
  longlong lVar50;
  FNameEntryId FVar51;
  FName FVar52;
  uint uVar53;
  undefined1 *puVar54;
  longlong lVar55;
  double dVar56;
  double dVar57;
  float fVar58;
  FColor_u_0 local_res20 [2];
  FName local_c8;
  float local_c0;
  float fStack_bc;
  FName local_b8;
  FName local_b0;
  FLinearColor_u_0 local_a0;
  UTextureCube *local_90;
  
  lVar55 = 2;
  FVar44 = StatPtr_STAT_OverridePostProcessSettings;
  if (StatPtr_STAT_OverridePostProcessSettings ==
      (FThreadSafeStaticStat<FStat_STAT_OverridePostProcessSettings>)0x0) {
    pFVar43 = ::FName::FName(&local_b8,"STAT_OverridePostProcessSettings");
    FVar44 = (FThreadSafeStaticStat<FStat_STAT_OverridePostProcessSettings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OverridePostProcessSettings,
                        *pFVar43,L"OverridePostProcessSettings","STATGROUP_Engine",
                        "STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar52 = *(FName *)FVar44;
  bVar38 = false;
  bVar39 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  bVar40 = false;
  bVar41 = false;
  FVar51 = FVar52.ComparisonIndex.Value;
  fVar48 = (float)FVar52.Number;
  if ((FVar51.Value != 0) || (fVar48 != 0.0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar44 + 0x10));
      bVar38 = false;
      bVar39 = true;
      bVar40 = false;
      bVar41 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar51.Value;
        local_c8.Number = (uint)fVar48;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar44 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                   ,0x625);
        bVar38 = true;
        bVar39 = true;
        bVar40 = true;
        bVar41 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = (float)FVar51.Value;
      fStack_bc = fVar48;
      FThreadStats::AddMessage(FVar52,CycleScopeStart);
      bVar40 = true;
      goto LAB_148534b99;
    }
  }
  bVar39 = bVar41;
  bVar38 = bVar40;
  bVar40 = false;
  FVar52 = local_b0;
LAB_148534b99:
  fVar48 = __real_3f800000;
  if (0.0 < param_2) {
    this_00 = &this->FinalPostProcessSettings;
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_1->bOverride_TemperatureType != 0) {
      (this->FinalPostProcessSettings).field_0x37 = (param_1->TemperatureType).Value;
    }
    if (param_1->bOverride_WhiteTemp != '\0') {
      *(float *)&(this->FinalPostProcessSettings).field_0x38 =
           (param_1->WhiteTemp - *(float *)&(this->FinalPostProcessSettings).field_0x38) * param_2 +
           *(float *)&(this->FinalPostProcessSettings).field_0x38;
    }
    if (param_1->bOverride_WhiteTint != '\0') {
      *(float *)&(this->FinalPostProcessSettings).field_0x3c =
           (param_1->WhiteTint - *(float *)&(this->FinalPostProcessSettings).field_0x3c) * param_2 +
           *(float *)&(this->FinalPostProcessSettings).field_0x3c;
    }
    if (param_1->bOverride_ColorSaturation != '\0') {
      dVar8 = *(double *)&(this->FinalPostProcessSettings).field_0x48;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x50;
      dVar7 = (param_1->ColorSaturation).field0_0x0._s_0.W;
      dVar37 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
      dVar9 = (param_1->ColorSaturation).field0_0x0._s_0.Z;
      dVar56 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x40 =
           ((param_1->ColorSaturation).field0_0x0._s_0.X -
           *(double *)&(this->FinalPostProcessSettings).field_0x40) * dVar56 +
           *(double *)&(this->FinalPostProcessSettings).field_0x40;
      dVar36 = (dVar9 - dVar36) * dVar56 + dVar36;
      auVar18._8_4_ = SUB84(dVar36,0);
      auVar18._0_8_ = (dVar37 - dVar8) * dVar56 + dVar8;
      auVar18._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x48 = auVar18;
      *(double *)&(this->FinalPostProcessSettings).field_0x58 =
           (dVar7 - *(double *)&(this->FinalPostProcessSettings).field_0x58) * dVar56 +
           *(double *)&(this->FinalPostProcessSettings).field_0x58;
    }
    if (param_1->bOverride_ColorContrast != '\0') {
      dVar8 = *(double *)&(this->FinalPostProcessSettings).field_0x68;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x70;
      dVar7 = (param_1->ColorContrast).field0_0x0._s_0.W;
      dVar37 = (param_1->ColorContrast).field0_0x0._s_0.Y;
      dVar9 = (param_1->ColorContrast).field0_0x0._s_0.Z;
      dVar56 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x60 =
           ((param_1->ColorContrast).field0_0x0._s_0.X -
           *(double *)&(this->FinalPostProcessSettings).field_0x60) * dVar56 +
           *(double *)&(this->FinalPostProcessSettings).field_0x60;
      dVar36 = (dVar9 - dVar36) * dVar56 + dVar36;
      auVar19._8_4_ = SUB84(dVar36,0);
      auVar19._0_8_ = (dVar37 - dVar8) * dVar56 + dVar8;
      auVar19._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x68 = auVar19;
      *(double *)&(this->FinalPostProcessSettings).field_0x78 =
           (dVar7 - *(double *)&(this->FinalPostProcessSettings).field_0x78) * dVar56 +
           *(double *)&(this->FinalPostProcessSettings).field_0x78;
    }
    if (param_1->bOverride_ColorGamma != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x98;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x80;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x88;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x90;
      dVar8 = (param_1->ColorGamma).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorGamma).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorGamma).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x80 =
           ((param_1->ColorGamma).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar20._8_4_ = SUB84(dVar37,0);
      auVar20._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar20._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x88 = auVar20;
      *(double *)&(this->FinalPostProcessSettings).field_0x98 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorGain != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0xb8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0xa0;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0xa8;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0xb0;
      dVar8 = (param_1->ColorGain).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorGain).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorGain).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0xa0 =
           ((param_1->ColorGain).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar21._8_4_ = SUB84(dVar37,0);
      auVar21._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar21._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0xa8 = auVar21;
      *(double *)&(this->FinalPostProcessSettings).field_0xb8 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if ((bool)param_1->bOverride_ColorOffset) {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0xd8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0xc0;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0xc8;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0xd0;
      dVar8 = (param_1->ColorOffset).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorOffset).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorOffset).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0xc0 =
           ((param_1->ColorOffset).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar22._8_4_ = SUB84(dVar37,0);
      auVar22._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar22._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0xc8 = auVar22;
      *(double *)&(this->FinalPostProcessSettings).field_0xd8 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorSaturationShadows != 0) {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0xf8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0xe0;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0xe8;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0xf0;
      dVar8 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0xe0 =
           ((param_1->ColorSaturationShadows).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar23._8_4_ = SUB84(dVar37,0);
      auVar23._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar23._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0xe8 = auVar23;
      *(double *)&(this->FinalPostProcessSettings).field_0xf8 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorContrastShadows != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x118;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x100;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x108;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x110;
      dVar8 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorContrastShadows).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x100 =
           ((param_1->ColorContrastShadows).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar24._8_4_ = SUB84(dVar37,0);
      auVar24._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar24._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x108 = auVar24;
      *(double *)&(this->FinalPostProcessSettings).field_0x118 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorGammaShadows != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x138;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x120;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x128;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x130;
      dVar8 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x120 =
           ((param_1->ColorGammaShadows).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar25._8_4_ = SUB84(dVar37,0);
      auVar25._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar25._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x128 = auVar25;
      *(double *)&(this->FinalPostProcessSettings).field_0x138 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorGainShadows != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x148;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x140;
      dVar8 = *(double *)&(this->FinalPostProcessSettings).field_0x150;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x158;
      dVar9 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
      dVar56 = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
      dVar10 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x140 =
           ((param_1->ColorGainShadows).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      *(double *)&(this->FinalPostProcessSettings).field_0x148 = (dVar9 - dVar7) * dVar57 + dVar7;
      *(double *)&(this->FinalPostProcessSettings).field_0x150 = (dVar56 - dVar8) * dVar57 + dVar8;
      *(double *)&(this->FinalPostProcessSettings).field_0x158 = (dVar10 - dVar37) * dVar57 + dVar37
      ;
    }
    if (param_1->bOverride_ColorOffsetShadows != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x178;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x160;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x168;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x170;
      dVar8 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x160 =
           ((param_1->ColorOffsetShadows).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar26._8_4_ = SUB84(dVar37,0);
      auVar26._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar26._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x168 = auVar26;
      *(double *)&(this->FinalPostProcessSettings).field_0x178 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorSaturationMidtones != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x198;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x180;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x188;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x190;
      dVar8 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x180 =
           ((param_1->ColorSaturationMidtones).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar27._8_4_ = SUB84(dVar37,0);
      auVar27._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar27._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x188 = auVar27;
      *(double *)&(this->FinalPostProcessSettings).field_0x198 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorContrastMidtones != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x1b8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x1a0;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x1a8;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x1b0;
      dVar8 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x1a0 =
           ((param_1->ColorContrastMidtones).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar28._8_4_ = SUB84(dVar37,0);
      auVar28._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar28._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x1a8 = auVar28;
      *(double *)&(this->FinalPostProcessSettings).field_0x1b8 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if ((bool)param_1->bOverride_ColorGammaMidtones) {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x1d8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x1c0;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x1c8;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x1d0;
      dVar8 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x1c0 =
           ((param_1->ColorGammaMidtones).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar29._8_4_ = SUB84(dVar37,0);
      auVar29._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar29._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x1c8 = auVar29;
      *(double *)&(this->FinalPostProcessSettings).field_0x1d8 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorGainMidtones != 0) {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x1f8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x1e0;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x1e8;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x1f0;
      dVar8 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x1e0 =
           ((param_1->ColorGainMidtones).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar30._8_4_ = SUB84(dVar37,0);
      auVar30._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar30._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x1e8 = auVar30;
      *(double *)&(this->FinalPostProcessSettings).field_0x1f8 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorOffsetMidtones != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x218;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x200;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x208;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x210;
      dVar8 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x200 =
           ((param_1->ColorOffsetMidtones).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar31._8_4_ = SUB84(dVar37,0);
      auVar31._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar31._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x208 = auVar31;
      *(double *)&(this->FinalPostProcessSettings).field_0x218 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorSaturationHighlights != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x238;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x220;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x228;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x230;
      dVar8 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x220 =
           ((param_1->ColorSaturationHighlights).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar32._8_4_ = SUB84(dVar37,0);
      auVar32._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar32._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x228 = auVar32;
      *(double *)&(this->FinalPostProcessSettings).field_0x238 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorContrastHighlights != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x248;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x240;
      dVar8 = *(double *)&(this->FinalPostProcessSettings).field_0x250;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x258;
      dVar9 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
      dVar56 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
      dVar10 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x240 =
           ((param_1->ColorContrastHighlights).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      *(double *)&(this->FinalPostProcessSettings).field_0x248 = (dVar9 - dVar7) * dVar57 + dVar7;
      *(double *)&(this->FinalPostProcessSettings).field_0x250 = (dVar56 - dVar8) * dVar57 + dVar8;
      *(double *)&(this->FinalPostProcessSettings).field_0x258 = (dVar10 - dVar37) * dVar57 + dVar37
      ;
    }
    if (param_1->bOverride_ColorGammaHighlights != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x278;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x260;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x268;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x270;
      dVar8 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x260 =
           ((param_1->ColorGammaHighlights).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar33._8_4_ = SUB84(dVar37,0);
      auVar33._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar33._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x268 = auVar33;
      *(double *)&(this->FinalPostProcessSettings).field_0x278 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorGainHighlights != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x298;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x280;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x288;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x290;
      dVar8 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x280 =
           ((param_1->ColorGainHighlights).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar34._8_4_ = SUB84(dVar37,0);
      auVar34._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar34._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x288 = auVar34;
      *(double *)&(this->FinalPostProcessSettings).field_0x298 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if (param_1->bOverride_ColorOffsetHighlights != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x2b8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x2a0;
      dVar9 = *(double *)&(this->FinalPostProcessSettings).field_0x2a8;
      dVar37 = *(double *)&(this->FinalPostProcessSettings).field_0x2b0;
      dVar8 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
      dVar56 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
      dVar10 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
      dVar57 = (double)param_2;
      *(double *)&(this->FinalPostProcessSettings).field_0x2a0 =
           ((param_1->ColorOffsetHighlights).field0_0x0._s_0.X - dVar36) * dVar57 + dVar36;
      dVar37 = (dVar10 - dVar37) * dVar57 + dVar37;
      auVar35._8_4_ = SUB84(dVar37,0);
      auVar35._0_8_ = (dVar56 - dVar9) * dVar57 + dVar9;
      auVar35._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      *(undefined1 (*) [16])&(this->FinalPostProcessSettings).field_0x2a8 = auVar35;
      *(double *)&(this->FinalPostProcessSettings).field_0x2b8 = (dVar8 - dVar7) * dVar57 + dVar7;
    }
    if ((bool)param_1->bOverride_ColorCorrectionShadowsMax) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2c8;
      *(float *)&(this->FinalPostProcessSettings).field_0x2c8 =
           (param_1->ColorCorrectionShadowsMax - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_ColorCorrectionHighlightsMin != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2c0;
      *(float *)&(this->FinalPostProcessSettings).field_0x2c0 =
           (param_1->ColorCorrectionHighlightsMin - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_ColorCorrectionHighlightsMax != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2c4;
      *(float *)&(this->FinalPostProcessSettings).field_0x2c4 =
           (param_1->ColorCorrectionHighlightsMax - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BlueCorrection != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2cc;
      *(float *)&(this->FinalPostProcessSettings).field_0x2cc =
           (param_1->BlueCorrection - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_ExpandGamut != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2d0;
      *(float *)&(this->FinalPostProcessSettings).field_0x2d0 =
           (param_1->ExpandGamut - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_ToneCurveAmount != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2d4;
      *(float *)&(this->FinalPostProcessSettings).field_0x2d4 =
           (param_1->ToneCurveAmount - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmSlope != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2d8;
      *(float *)&(this->FinalPostProcessSettings).field_0x2d8 =
           (param_1->FilmSlope - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmToe != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2dc;
      *(float *)&(this->FinalPostProcessSettings).field_0x2dc =
           (param_1->FilmToe - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_FilmShoulder) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2e0;
      *(float *)&(this->FinalPostProcessSettings).field_0x2e0 =
           (param_1->FilmShoulder - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmBlackClip != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2e4;
      *(float *)&(this->FinalPostProcessSettings).field_0x2e4 =
           (param_1->FilmBlackClip - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmWhiteClip != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2e8;
      *(float *)&(this->FinalPostProcessSettings).field_0x2e8 =
           (param_1->FilmWhiteClip - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_SceneColorTint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2f0;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x2ec;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x2f4;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x2f8;
      fVar4 = (param_1->SceneColorTint).field0_0x0._s_0.G;
      fVar5 = (param_1->SceneColorTint).field0_0x0._s_0.B;
      fVar6 = (param_1->SceneColorTint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x2ec =
           ((param_1->SceneColorTint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x2f0 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x2f4 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x2f8 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_SceneFringeIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x2fc;
      *(float *)&(this->FinalPostProcessSettings).field_0x2fc =
           (param_1->SceneFringeIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_ChromaticAberrationStartOffset != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x300;
      *(float *)&(this->FinalPostProcessSettings).field_0x300 =
           (param_1->ChromaticAberrationStartOffset - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x304;
      *(float *)&(this->FinalPostProcessSettings).field_0x304 =
           (param_1->BloomIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomGaussianIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x308;
      *(float *)&(this->FinalPostProcessSettings).field_0x308 =
           (param_1->BloomGaussianIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomThreshold != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x30c;
      *(float *)&(this->FinalPostProcessSettings).field_0x30c =
           (param_1->BloomThreshold - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_Bloom1Tint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x330;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x32c;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x334;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x338;
      fVar4 = (param_1->Bloom1Tint).field0_0x0._s_0.G;
      fVar5 = (param_1->Bloom1Tint).field0_0x0._s_0.B;
      fVar6 = (param_1->Bloom1Tint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x32c =
           ((param_1->Bloom1Tint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x330 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x334 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x338 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_BloomSizeScale != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x310;
      *(float *)&(this->FinalPostProcessSettings).field_0x310 =
           (param_1->BloomSizeScale - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_Bloom1Size != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x314;
      *(float *)&(this->FinalPostProcessSettings).field_0x314 =
           (param_1->Bloom1Size - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_Bloom2Tint) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x340;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x33c;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x344;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x348;
      fVar4 = (param_1->Bloom2Tint).field0_0x0._s_0.G;
      fVar5 = (param_1->Bloom2Tint).field0_0x0._s_0.B;
      fVar6 = (param_1->Bloom2Tint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x33c =
           ((param_1->Bloom2Tint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x340 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x344 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x348 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_Bloom2Size != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x318;
      *(float *)&(this->FinalPostProcessSettings).field_0x318 =
           (param_1->Bloom2Size - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_Bloom3Tint != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x350;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x34c;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x354;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x358;
      fVar4 = (param_1->Bloom3Tint).field0_0x0._s_0.G;
      fVar5 = (param_1->Bloom3Tint).field0_0x0._s_0.B;
      fVar6 = (param_1->Bloom3Tint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x34c =
           ((param_1->Bloom3Tint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x350 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x354 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x358 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_Bloom3Size != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x31c;
      *(float *)&(this->FinalPostProcessSettings).field_0x31c =
           (param_1->Bloom3Size - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_Bloom4Tint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x360;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x35c;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x364;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x368;
      fVar4 = (param_1->Bloom4Tint).field0_0x0._s_0.G;
      fVar5 = (param_1->Bloom4Tint).field0_0x0._s_0.B;
      fVar6 = (param_1->Bloom4Tint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x35c =
           ((param_1->Bloom4Tint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x360 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x364 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x368 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_Bloom4Size != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x320;
      *(float *)&(this->FinalPostProcessSettings).field_0x320 =
           (param_1->Bloom4Size - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_Bloom5Tint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x370;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x36c;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x374;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x378;
      fVar4 = (param_1->Bloom5Tint).field0_0x0._s_0.G;
      fVar5 = (param_1->Bloom5Tint).field0_0x0._s_0.B;
      fVar6 = (param_1->Bloom5Tint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x36c =
           ((param_1->Bloom5Tint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x370 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x374 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x378 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_Bloom5Size != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x324;
      *(float *)&(this->FinalPostProcessSettings).field_0x324 =
           (param_1->Bloom5Size - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_Bloom6Tint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x380;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x37c;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x384;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x388;
      fVar4 = (param_1->Bloom6Tint).field0_0x0._s_0.G;
      fVar5 = (param_1->Bloom6Tint).field0_0x0._s_0.B;
      fVar6 = (param_1->Bloom6Tint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x37c =
           ((param_1->Bloom6Tint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x380 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x384 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x388 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if ((bool)param_1->bOverride_Bloom6Size) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x328;
      *(float *)&(this->FinalPostProcessSettings).field_0x328 =
           (param_1->Bloom6Size - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomDirtMaskIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x3c8;
      *(float *)&(this->FinalPostProcessSettings).field_0x3c8 =
           (param_1->BloomDirtMaskIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomDirtMaskTint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x3d0;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x3cc;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x3d4;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x3d8;
      fVar4 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.G;
      fVar5 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.B;
      fVar6 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x3cc =
           ((param_1->BloomDirtMaskTint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x3d0 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x3d4 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x3d8 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_BloomConvolutionIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x38c;
      *(float *)&(this->FinalPostProcessSettings).field_0x38c =
           (param_1->BloomConvolutionIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomConvolutionScatterDispersion != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x390;
      *(float *)&(this->FinalPostProcessSettings).field_0x390 =
           (param_1->BloomConvolutionScatterDispersion - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomConvolutionSize != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x394;
      *(float *)&(this->FinalPostProcessSettings).field_0x394 =
           (param_1->BloomConvolutionSize - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomConvolutionCenterUV != '\0') {
      dVar7 = *(double *)&(this->FinalPostProcessSettings).field_0x3a8;
      dVar36 = *(double *)&(this->FinalPostProcessSettings).field_0x3a0;
      dVar8 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
      *(double *)&(this->FinalPostProcessSettings).field_0x3a0 =
           ((param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X - dVar36) * (double)param_2 +
           dVar36;
      *(double *)&(this->FinalPostProcessSettings).field_0x3a8 =
           (dVar8 - dVar7) * (double)param_2 + dVar7;
    }
    if ((bool)param_1->bOverride_BloomConvolutionPreFilterMin) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x3b0;
      *(float *)&(this->FinalPostProcessSettings).field_0x3b0 =
           (param_1->BloomConvolutionPreFilterMin - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomConvolutionPreFilterMax != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x3b4;
      *(float *)&(this->FinalPostProcessSettings).field_0x3b4 =
           (param_1->BloomConvolutionPreFilterMax - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_BloomConvolutionPreFilterMult != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x3b8;
      *(float *)&(this->FinalPostProcessSettings).field_0x3b8 =
           (param_1->BloomConvolutionPreFilterMult - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_bMegaLights != '\0') {
      bVar11 = (this->FinalPostProcessSettings).field_0x45c;
      (this->FinalPostProcessSettings).field_0x45c = (bVar11 ^ param_1->bMegaLights) & 1 ^ bVar11;
    }
    if ((bool)param_1->bOverride_AmbientCubemapIntensity) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x470;
      *(float *)&(this->FinalPostProcessSettings).field_0x470 =
           (param_1->AmbientCubemapIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientCubemapTint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x464;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x460;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x468;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x46c;
      fVar4 = (param_1->AmbientCubemapTint).field0_0x0._s_0.G;
      fVar5 = (param_1->AmbientCubemapTint).field0_0x0._s_0.B;
      fVar6 = (param_1->AmbientCubemapTint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x460 =
           ((param_1->AmbientCubemapTint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x464 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x468 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x46c = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_CameraShutterSpeed != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x480;
      *(float *)&(this->FinalPostProcessSettings).field_0x480 =
           (param_1->CameraShutterSpeed - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_CameraISO) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x484;
      *(float *)&(this->FinalPostProcessSettings).field_0x484 =
           (param_1->CameraISO - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AutoExposureLowPercent != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4b8;
      *(float *)&(this->FinalPostProcessSettings).field_0x4b8 =
           (param_1->AutoExposureLowPercent - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AutoExposureHighPercent != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4bc;
      *(float *)&(this->FinalPostProcessSettings).field_0x4bc =
           (param_1->AutoExposureHighPercent - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AutoExposureMinBrightness != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4c0;
      *(float *)&(this->FinalPostProcessSettings).field_0x4c0 =
           (param_1->AutoExposureMinBrightness - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AutoExposureMaxBrightness != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4c4;
      *(float *)&(this->FinalPostProcessSettings).field_0x4c4 =
           (param_1->AutoExposureMaxBrightness - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AutoExposureSpeedUp != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4c8;
      *(float *)&(this->FinalPostProcessSettings).field_0x4c8 =
           (param_1->AutoExposureSpeedUp - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_AutoExposureSpeedDown) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4cc;
      *(float *)&(this->FinalPostProcessSettings).field_0x4cc =
           (param_1->AutoExposureSpeedDown - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AutoExposureBias != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x494;
      *(float *)&(this->FinalPostProcessSettings).field_0x494 =
           (param_1->AutoExposureBias - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_HistogramLogMin != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4d0;
      *(float *)&(this->FinalPostProcessSettings).field_0x4d0 =
           (param_1->HistogramLogMin - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_HistogramLogMax != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4d4;
      *(float *)&(this->FinalPostProcessSettings).field_0x4d4 =
           (param_1->HistogramLogMax - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureMethod != '\0') {
      (this->FinalPostProcessSettings).field_0x4dc = param_1->LocalExposureMethod;
    }
    if ((bool)param_1->bOverride_LocalExposureContrastScale_DEPRECATED) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4e0;
      *(float *)&(this->FinalPostProcessSettings).field_0x4e0 =
           (param_1->LocalExposureContrastScale_DEPRECATED - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureHighlightContrastScale != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4e4;
      *(float *)&(this->FinalPostProcessSettings).field_0x4e4 =
           (param_1->LocalExposureHighlightContrastScale - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureShadowContrastScale != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x4e8;
      *(float *)&(this->FinalPostProcessSettings).field_0x4e8 =
           (param_1->LocalExposureShadowContrastScale - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureHighlightThreshold != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x500;
      *(float *)&(this->FinalPostProcessSettings).field_0x500 =
           (param_1->LocalExposureHighlightThreshold - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureShadowThreshold != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x504;
      *(float *)&(this->FinalPostProcessSettings).field_0x504 =
           (param_1->LocalExposureShadowThreshold - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureDetailStrength != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x508;
      *(float *)&(this->FinalPostProcessSettings).field_0x508 =
           (param_1->LocalExposureDetailStrength - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_LocalExposureBlurredLuminanceBlend) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x50c;
      *(float *)&(this->FinalPostProcessSettings).field_0x50c =
           (param_1->LocalExposureBlurredLuminanceBlend - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x510;
      *(float *)&(this->FinalPostProcessSettings).field_0x510 =
           (param_1->LocalExposureBlurredLuminanceKernelSizePercent - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureHighlightThresholdStrength != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x514;
      *(float *)&(this->FinalPostProcessSettings).field_0x514 =
           (param_1->LocalExposureHighlightThresholdStrength - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureShadowThresholdStrength != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x518;
      *(float *)&(this->FinalPostProcessSettings).field_0x518 =
           (param_1->LocalExposureShadowThresholdStrength - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LocalExposureMiddleGreyBias != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x51c;
      *(float *)&(this->FinalPostProcessSettings).field_0x51c =
           (param_1->LocalExposureMiddleGreyBias - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LensFlareIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x520;
      *(float *)&(this->FinalPostProcessSettings).field_0x520 =
           (param_1->LensFlareIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LensFlareTint != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x528;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x524;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x52c;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x530;
      fVar4 = (param_1->LensFlareTint).field0_0x0._s_0.G;
      fVar5 = (param_1->LensFlareTint).field0_0x0._s_0.B;
      fVar6 = (param_1->LensFlareTint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x524 =
           ((param_1->LensFlareTint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x528 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x52c = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x530 = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if ((bool)param_1->bOverride_LensFlareBokehSize) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x534;
      *(float *)&(this->FinalPostProcessSettings).field_0x534 =
           (param_1->LensFlareBokehSize - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LensFlareThreshold != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x538;
      *(float *)&(this->FinalPostProcessSettings).field_0x538 =
           (param_1->LensFlareThreshold - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_VignetteIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5c8;
      *(float *)&(this->FinalPostProcessSettings).field_0x5c8 =
           (param_1->VignetteIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_Sharpen != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5cc;
      *(float *)&(this->FinalPostProcessSettings).field_0x5cc =
           (param_1->Sharpen - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmGrainIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5d8;
      *(float *)&(this->FinalPostProcessSettings).field_0x5d8 =
           (param_1->FilmGrainIntensity - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_FilmGrainIntensityShadows) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5dc;
      *(float *)&(this->FinalPostProcessSettings).field_0x5dc =
           (param_1->FilmGrainIntensityShadows - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmGrainIntensityMidtones != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5e0;
      *(float *)&(this->FinalPostProcessSettings).field_0x5e0 =
           (param_1->FilmGrainIntensityMidtones - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmGrainIntensityHighlights != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5e4;
      *(float *)&(this->FinalPostProcessSettings).field_0x5e4 =
           (param_1->FilmGrainIntensityHighlights - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmGrainShadowsMax != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5e8;
      *(float *)&(this->FinalPostProcessSettings).field_0x5e8 =
           (param_1->FilmGrainShadowsMax - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmGrainHighlightsMin != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5ec;
      *(float *)&(this->FinalPostProcessSettings).field_0x5ec =
           (param_1->FilmGrainHighlightsMin - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmGrainHighlightsMax != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5f0;
      *(float *)&(this->FinalPostProcessSettings).field_0x5f0 =
           (param_1->FilmGrainHighlightsMax - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_FilmGrainTexelSize != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x5f4;
      *(float *)&(this->FinalPostProcessSettings).field_0x5f4 =
           (param_1->FilmGrainTexelSize - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_AmbientOcclusionIntensity) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x600;
      *(float *)&(this->FinalPostProcessSettings).field_0x600 =
           (param_1->AmbientOcclusionIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionStaticFraction != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x604;
      *(float *)&(this->FinalPostProcessSettings).field_0x604 =
           (param_1->AmbientOcclusionStaticFraction - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionRadius != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x608;
      *(float *)&(this->FinalPostProcessSettings).field_0x608 =
           (param_1->AmbientOcclusionRadius - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionFadeDistance != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x610;
      *(float *)&(this->FinalPostProcessSettings).field_0x610 =
           (param_1->AmbientOcclusionFadeDistance - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionFadeRadius != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x614;
      *(float *)&(this->FinalPostProcessSettings).field_0x614 =
           (param_1->AmbientOcclusionFadeRadius - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionDistance_DEPRECATED != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x618;
      *(float *)&(this->FinalPostProcessSettings).field_0x618 =
           (param_1->AmbientOcclusionDistance_DEPRECATED - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionPower != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x61c;
      *(float *)&(this->FinalPostProcessSettings).field_0x61c =
           (param_1->AmbientOcclusionPower - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_AmbientOcclusionBias) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x620;
      *(float *)&(this->FinalPostProcessSettings).field_0x620 =
           (param_1->AmbientOcclusionBias - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionQuality != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x624;
      *(float *)&(this->FinalPostProcessSettings).field_0x624 =
           (param_1->AmbientOcclusionQuality - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionMipBlend != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x628;
      *(float *)&(this->FinalPostProcessSettings).field_0x628 =
           (param_1->AmbientOcclusionMipBlend - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionMipScale != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x62c;
      *(float *)&(this->FinalPostProcessSettings).field_0x62c =
           (param_1->AmbientOcclusionMipScale - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionMipThreshold != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x630;
      *(float *)&(this->FinalPostProcessSettings).field_0x630 =
           (param_1->AmbientOcclusionMipThreshold - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_AmbientOcclusionTemporalBlendWeight != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x634;
      *(float *)&(this->FinalPostProcessSettings).field_0x634 =
           (param_1->AmbientOcclusionTemporalBlendWeight - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_IndirectLightingColor) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x3e4;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x3e0;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x3e8;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x3ec;
      fVar4 = (param_1->IndirectLightingColor).field0_0x0._s_0.G;
      fVar5 = (param_1->IndirectLightingColor).field0_0x0._s_0.B;
      fVar6 = (param_1->IndirectLightingColor).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x3e0 =
           ((param_1->IndirectLightingColor).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x3e4 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x3e8 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x3ec = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_IndirectLightingIntensity != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x3f0;
      *(float *)&(this->FinalPostProcessSettings).field_0x3f0 =
           (param_1->IndirectLightingIntensity - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldFocalDistance != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x660;
      if ((fVar58 == 0.0) || (param_1->DepthOfFieldFocalDistance == 0.0)) {
        *(float *)&(this->FinalPostProcessSettings).field_0x660 = param_1->DepthOfFieldFocalDistance
        ;
      }
      else {
        *(float *)&(this->FinalPostProcessSettings).field_0x660 =
             (param_1->DepthOfFieldFocalDistance - fVar58) * param_2 + fVar58;
      }
    }
    if (param_1->bOverride_DepthOfFieldFstop != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x488;
      *(float *)&(this->FinalPostProcessSettings).field_0x488 =
           (param_1->DepthOfFieldFstop - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldMinFstop != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x48c;
      *(float *)&(this->FinalPostProcessSettings).field_0x48c =
           (param_1->DepthOfFieldMinFstop - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_DepthOfFieldSensorWidth) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x658;
      *(float *)&(this->FinalPostProcessSettings).field_0x658 =
           (param_1->DepthOfFieldSensorWidth - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldSqueezeFactor != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x65c;
      *(float *)&(this->FinalPostProcessSettings).field_0x65c =
           (param_1->DepthOfFieldSqueezeFactor - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldDepthBlurRadius != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x668;
      *(float *)&(this->FinalPostProcessSettings).field_0x668 =
           (param_1->DepthOfFieldDepthBlurRadius - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldUseHairDepth != '\0') {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x66c;
      *(uint *)&(this->FinalPostProcessSettings).field_0x66c =
           (uVar12 ^ param_1->DepthOfFieldUseHairDepth) & 1 ^ uVar12;
    }
    if (param_1->bOverride_DepthOfFieldPetzvalBokeh != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x670;
      *(float *)&(this->FinalPostProcessSettings).field_0x670 =
           (param_1->DepthOfFieldPetzvalBokeh - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldPetzvalBokehFalloff != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x674;
      *(float *)&(this->FinalPostProcessSettings).field_0x674 =
           (param_1->DepthOfFieldPetzvalBokehFalloff - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x678;
      fStack_bc = *(float *)&(this->FinalPostProcessSettings).field_0x67c;
      local_c0 = ((param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.X - fVar58) *
                 param_2 + fVar58;
      fStack_bc = ((param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.Y - fStack_bc)
                  * param_2 + fStack_bc;
      *(ulonglong *)&(this->FinalPostProcessSettings).field_0x678 = CONCAT44(fStack_bc,local_c0);
    }
    if (param_1->bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x680;
      *(float *)&(this->FinalPostProcessSettings).field_0x680 =
           (param_1->DepthOfFieldPetzvalExclusionBoxRadius - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldBarrelRadius != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x688;
      *(float *)&(this->FinalPostProcessSettings).field_0x688 =
           (param_1->DepthOfFieldBarrelRadius - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldBarrelLength != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x68c;
      *(float *)&(this->FinalPostProcessSettings).field_0x68c =
           (param_1->DepthOfFieldBarrelLength - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldMatteBoxFlags != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x690;
      *(float *)&(this->FinalPostProcessSettings).field_0x690 =
           (param_1->DepthOfFieldMatteBoxFlags[0].Pitch - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x694;
      *(float *)&(this->FinalPostProcessSettings).field_0x694 =
           (param_1->DepthOfFieldMatteBoxFlags[0].Roll - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x698;
      *(float *)&(this->FinalPostProcessSettings).field_0x698 =
           (param_1->DepthOfFieldMatteBoxFlags[0].Length - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x69c;
      *(float *)&(this->FinalPostProcessSettings).field_0x69c =
           (param_1->DepthOfFieldMatteBoxFlags[1].Pitch - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6a0;
      *(float *)&(this->FinalPostProcessSettings).field_0x6a0 =
           (param_1->DepthOfFieldMatteBoxFlags[1].Roll - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6a4;
      *(float *)&(this->FinalPostProcessSettings).field_0x6a4 =
           (param_1->DepthOfFieldMatteBoxFlags[1].Length - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6a8;
      *(float *)&(this->FinalPostProcessSettings).field_0x6a8 =
           (param_1->DepthOfFieldMatteBoxFlags[2].Pitch - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6ac;
      *(float *)&(this->FinalPostProcessSettings).field_0x6ac =
           (param_1->DepthOfFieldMatteBoxFlags[2].Roll - fVar58) * param_2 + fVar58;
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6b0;
      *(float *)&(this->FinalPostProcessSettings).field_0x6b0 =
           (param_1->DepthOfFieldMatteBoxFlags[2].Length - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldDepthBlurAmount != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x664;
      *(float *)&(this->FinalPostProcessSettings).field_0x664 =
           (param_1->DepthOfFieldDepthBlurAmount - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldFocalRegion != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6b4;
      *(float *)&(this->FinalPostProcessSettings).field_0x6b4 =
           (param_1->DepthOfFieldFocalRegion - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldNearTransitionRegion != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6b8;
      *(float *)&(this->FinalPostProcessSettings).field_0x6b8 =
           (param_1->DepthOfFieldNearTransitionRegion - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldFarTransitionRegion != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6bc;
      *(float *)&(this->FinalPostProcessSettings).field_0x6bc =
           (param_1->DepthOfFieldFarTransitionRegion - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_DepthOfFieldScale) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6c0;
      *(float *)&(this->FinalPostProcessSettings).field_0x6c0 =
           (param_1->DepthOfFieldScale - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldNearBlurSize != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6c4;
      *(float *)&(this->FinalPostProcessSettings).field_0x6c4 =
           (param_1->DepthOfFieldNearBlurSize - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldFarBlurSize != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6c8;
      *(float *)&(this->FinalPostProcessSettings).field_0x6c8 =
           (param_1->DepthOfFieldFarBlurSize - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldOcclusion != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6cc;
      *(float *)&(this->FinalPostProcessSettings).field_0x6cc =
           (param_1->DepthOfFieldOcclusion - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldSkyFocusDistance != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6d0;
      *(float *)&(this->FinalPostProcessSettings).field_0x6d0 =
           (param_1->DepthOfFieldSkyFocusDistance - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_DepthOfFieldVignetteSize != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6d4;
      *(float *)&(this->FinalPostProcessSettings).field_0x6d4 =
           (param_1->DepthOfFieldVignetteSize - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_DepthOfFieldAspectRatioScalar) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x684;
      *(float *)&(this->FinalPostProcessSettings).field_0x684 =
           (param_1->DepthOfFieldAspectRatioScalar - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_MotionBlurAmount != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6d8;
      *(float *)&(this->FinalPostProcessSettings).field_0x6d8 =
           (param_1->MotionBlurAmount - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_MotionBlurMax) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6dc;
      *(float *)&(this->FinalPostProcessSettings).field_0x6dc =
           (param_1->MotionBlurMax - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_MotionBlurPerObjectSize != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x6e4;
      *(float *)&(this->FinalPostProcessSettings).field_0x6e4 =
           (param_1->MotionBlurPerObjectSize - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_ScreenSpaceReflectionQuality != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x454;
      *(float *)&(this->FinalPostProcessSettings).field_0x454 =
           (param_1->ScreenSpaceReflectionQuality - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_ScreenSpaceReflectionIntensity != '\0') {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x450;
      *(float *)&(this->FinalPostProcessSettings).field_0x450 =
           (param_1->ScreenSpaceReflectionIntensity - fVar58) * param_2 + fVar58;
    }
    if ((bool)param_1->bOverride_ScreenSpaceReflectionMaxRoughness) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x458;
      *(float *)&(this->FinalPostProcessSettings).field_0x458 =
           (param_1->ScreenSpaceReflectionMaxRoughness - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_TranslucencyType != 0) {
      (this->FinalPostProcessSettings).field_0x71c = param_1->TranslucencyType;
    }
    if (param_1->bOverride_RayTracingTranslucencyMaxRoughness != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x720 =
           param_1->RayTracingTranslucencyMaxRoughness;
    }
    if (param_1->bOverride_RayTracingTranslucencyRefractionRays != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x724 =
           param_1->RayTracingTranslucencyRefractionRays;
    }
    if (param_1->bOverride_RayTracingTranslucencySamplesPerPixel != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x728 =
           param_1->RayTracingTranslucencySamplesPerPixel;
    }
    if (param_1->bOverride_RayTracingTranslucencyShadows != 0) {
      (this->FinalPostProcessSettings).field_0x734 = param_1->RayTracingTranslucencyShadows;
    }
    if (param_1->bOverride_RayTracingTranslucencyRefraction != 0) {
      bVar11 = (this->FinalPostProcessSettings).field_0x735;
      (this->FinalPostProcessSettings).field_0x735 =
           (bVar11 ^ param_1->RayTracingTranslucencyRefraction) & 1 ^ bVar11;
    }
    if (param_1->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x72c =
           param_1->RayTracingTranslucencyMaxPrimaryHitEvents;
    }
    if (param_1->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x730 =
           param_1->RayTracingTranslucencyMaxSecondaryHitEvents;
    }
    if (param_1->bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0) {
      bVar11 = (this->FinalPostProcessSettings).field_0x735;
      (this->FinalPostProcessSettings).field_0x735 = (bVar11 ^ param_1->field_0x735) & 2 ^ bVar11;
    }
    if (param_1->bOverride_DynamicGlobalIlluminationMethod != 0) {
      (this->FinalPostProcessSettings).field_0x3dc =
           (param_1->DynamicGlobalIlluminationMethod).Value;
    }
    if (param_1->bOverride_LumenSurfaceCacheResolution != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x434 = param_1->LumenSurfaceCacheResolution
      ;
    }
    if (param_1->bOverride_LumenSceneLightingQuality != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x3f8 = param_1->LumenSceneLightingQuality;
    }
    if (param_1->bOverride_LumenSceneDetail != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x3fc = param_1->LumenSceneDetail;
    }
    if (param_1->bOverride_LumenSceneViewDistance != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x400 = param_1->LumenSceneViewDistance;
    }
    if (param_1->bOverride_LumenSceneLightingUpdateSpeed != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x404 =
           param_1->LumenSceneLightingUpdateSpeed;
    }
    if (param_1->bOverride_LumenFinalGatherQuality != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x408 = param_1->LumenFinalGatherQuality;
    }
    if (param_1->bOverride_LumenFinalGatherLightingUpdateSpeed != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x40c =
           param_1->LumenFinalGatherLightingUpdateSpeed;
    }
    if (param_1->bOverride_LumenFinalGatherScreenTraces != 0) {
      bVar11 = (this->FinalPostProcessSettings).field_0x410;
      (this->FinalPostProcessSettings).field_0x410 =
           (bVar11 ^ param_1->LumenFinalGatherScreenTraces) & 1 ^ bVar11;
    }
    if (param_1->bOverride_LumenMaxTraceDistance != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x414 = param_1->LumenMaxTraceDistance;
    }
    if (param_1->bOverride_LumenDiffuseColorBoost != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x418;
      *(float *)&(this->FinalPostProcessSettings).field_0x418 =
           (param_1->LumenDiffuseColorBoost - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LumenSkylightLeaking != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x41c;
      *(float *)&(this->FinalPostProcessSettings).field_0x41c =
           (param_1->LumenSkylightLeaking - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LumenSkylightLeakingTint != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x424;
      fVar1 = *(float *)&(this->FinalPostProcessSettings).field_0x420;
      fVar2 = *(float *)&(this->FinalPostProcessSettings).field_0x428;
      fVar3 = *(float *)&(this->FinalPostProcessSettings).field_0x42c;
      fVar4 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.G;
      fVar5 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.B;
      fVar6 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.A;
      *(float *)&(this->FinalPostProcessSettings).field_0x420 =
           ((param_1->LumenSkylightLeakingTint).field0_0x0._s_0.R - fVar1) * param_2 + fVar1;
      *(float *)&(this->FinalPostProcessSettings).field_0x424 = (fVar4 - fVar58) * param_2 + fVar58;
      *(float *)&(this->FinalPostProcessSettings).field_0x428 = (fVar5 - fVar2) * param_2 + fVar2;
      *(float *)&(this->FinalPostProcessSettings).field_0x42c = (fVar6 - fVar3) * param_2 + fVar3;
    }
    if (param_1->bOverride_LumenFullSkylightLeakingDistance != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x430;
      *(float *)&(this->FinalPostProcessSettings).field_0x430 =
           (param_1->LumenFullSkylightLeakingDistance - fVar58) * param_2 + fVar58;
    }
    if (param_1->bOverride_LumenRayLightingMode != 0) {
      (this->FinalPostProcessSettings).field_0x3f4 = param_1->LumenRayLightingMode;
    }
    if (param_1->bOverride_LumenReflectionsScreenTraces != '\0') {
      bVar11 = (this->FinalPostProcessSettings).field_0x440;
      (this->FinalPostProcessSettings).field_0x440 =
           (bVar11 ^ param_1->LumenReflectionsScreenTraces) & 1 ^ bVar11;
    }
    if (param_1->bOverride_LumenFrontLayerTranslucencyReflections != '\0') {
      bVar11 = (this->FinalPostProcessSettings).field_0x440;
      (this->FinalPostProcessSettings).field_0x440 = (bVar11 ^ param_1->field_0x440) & 2 ^ bVar11;
    }
    if (param_1->bOverride_LumenMaxRoughnessToTraceReflections != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x444 =
           param_1->LumenMaxRoughnessToTraceReflections;
    }
    if (param_1->bOverride_LumenMaxReflectionBounces != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x448 = param_1->LumenMaxReflectionBounces;
    }
    if (param_1->bOverride_LumenMaxRefractionBounces != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x44c = param_1->LumenMaxRefractionBounces;
    }
    if (param_1->bOverride_ReflectionMethod != '\0') {
      (this->FinalPostProcessSettings).field_0x438 = (param_1->ReflectionMethod).Value;
    }
    if (param_1->bOverride_LumenReflectionQuality != '\0') {
      *(float *)&(this->FinalPostProcessSettings).field_0x43c = param_1->LumenReflectionQuality;
    }
    if (param_1->bOverride_RayTracingAO != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x638;
      *(uint *)&(this->FinalPostProcessSettings).field_0x638 =
           (uVar12 ^ param_1->RayTracingAO) & 1 ^ uVar12;
    }
    if (param_1->bOverride_RayTracingAOSamplesPerPixel != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x63c = param_1->RayTracingAOSamplesPerPixel;
    }
    if (param_1->bOverride_RayTracingAOIntensity != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x640 = param_1->RayTracingAOIntensity;
    }
    if (param_1->bOverride_RayTracingAORadius != 0) {
      *(float *)&(this->FinalPostProcessSettings).field_0x644 = param_1->RayTracingAORadius;
    }
    if (param_1->bOverride_PathTracingMaxBounces != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x738 = param_1->PathTracingMaxBounces;
    }
    if (param_1->bOverride_PathTracingSamplesPerPixel != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x73c = param_1->PathTracingSamplesPerPixel;
    }
    if (param_1->bOverride_PathTracingMaxPathIntensity != 0) {
      fVar58 = *(float *)&(this->FinalPostProcessSettings).field_0x740;
      *(float *)&(this->FinalPostProcessSettings).field_0x740 =
           (param_1->PathTracingMaxPathIntensity - fVar58) * param_2 + fVar58;
    }
    puVar54 = &param_1->field_0x744;
    if (param_1->bOverride_PathTracingEnableEmissiveMaterials != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ param_1->PathTracingEnableEmissiveMaterials) & 1 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingEnableReferenceDOF != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)puVar54) & 2 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingEnableReferenceAtmosphere != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)puVar54) & 4 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingEnableDenoiser != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 8 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingIncludeEmissive != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 0x10 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingIncludeDiffuse != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 0x20 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingIncludeIndirectDiffuse != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 0x40 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingIncludeSpecular != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 0x80 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingIncludeIndirectSpecular != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 0x100 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingIncludeVolume != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 0x200 ^ uVar12;
    }
    if (param_1->bOverride_PathTracingIncludeIndirectVolume != 0) {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x744;
      *(uint *)&(this->FinalPostProcessSettings).field_0x744 =
           (uVar12 ^ *(uint *)&param_1->field_0x744) & 0x400 ^ uVar12;
    }
    if (param_1->bOverride_DepthOfFieldBladeCount != '\0') {
      *(int *)&(this->FinalPostProcessSettings).field_0x490 = param_1->DepthOfFieldBladeCount;
    }
    pUVar13 = (param_1->AmbientCubemap).field0_0x0.DebugPtr;
    if ((pUVar13 != (UTextureCube *)0x0) && ((bool)param_1->bOverride_AmbientCubemapIntensity)) {
      local_a0._s_0.A = param_1->AmbientCubemapIntensity;
      local_a0._s_0.R = local_a0._s_0.A;
      local_a0._s_0.G = local_a0._s_0.A;
      local_a0._s_0.B = local_a0._s_0.A;
      if (param_1->bOverride_AmbientCubemapTint != '\0') {
        local_a0._s_0.R = (param_1->AmbientCubemapTint).field0_0x0._s_0.R * local_a0._s_0.A;
        local_a0._s_0.G = (param_1->AmbientCubemapTint).field0_0x0._s_0.G * local_a0._s_0.A;
        local_a0._s_0.B = (param_1->AmbientCubemapTint).field0_0x0._s_0.B * local_a0._s_0.A;
        local_a0._s_0.A = (param_1->AmbientCubemapTint).field0_0x0._s_0.A * local_a0._s_0.A;
      }
      local_90 = pUVar13;
      FFinalPostProcessSettings::UpdateEntry(this_00,(FCubemapEntry *)&local_a0._s_0,param_2);
    }
    if ((param_1->bOverride_ColorGradingLUT != '\0') &&
       (pUVar14 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr, pUVar14 != (UTexture *)0x0)) {
      fVar58 = param_1->ColorGradingIntensity;
      if (fVar48 <= param_1->ColorGradingIntensity) {
        fVar58 = fVar48;
      }
      if (fVar58 <= 0.0) {
        fVar58 = 0.0;
      }
      FFinalPostProcessSettings::LerpTo(this_00,pUVar14,fVar58 * param_2);
    }
    if ((param_1->bOverride_BloomDirtMask != '\0') &&
       (pUVar14 = (param_1->BloomDirtMask).field0_0x0.DebugPtr, pUVar14 != (UTexture *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      *(TObjectPtr<UTexture>_u_0 *)&(this->FinalPostProcessSettings).field_0x3c0 =
           (param_1->BloomDirtMask).field0_0x0;
    }
    if (param_1->bOverride_BloomMethod != 0) {
      (this->FinalPostProcessSettings).field_0x35 = (param_1->BloomMethod).Value;
    }
    if ((param_1->bOverride_BloomConvolutionTexture != '\0') &&
       (pUVar15 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr,
       pUVar15 != (UTexture2D *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      *(TObjectPtr<UTexture2D>_u_0 *)&(this->FinalPostProcessSettings).field_0x398 =
           (param_1->BloomConvolutionTexture).field0_0x0;
    }
    if ((param_1->bOverride_FilmGrainTexture != '\0') &&
       (pUVar15 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr, pUVar15 != (UTexture2D *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      *(TObjectPtr<UTexture2D>_u_0 *)&(this->FinalPostProcessSettings).field_0x5f8 =
           (param_1->FilmGrainTexture).field0_0x0;
    }
    if ((param_1->bOverride_BloomConvolutionBufferScale != '\0') &&
       (param_1->BloomConvolutionBufferScale != 0.0)) {
      *(float *)&(this->FinalPostProcessSettings).field_0x3bc = param_1->BloomConvolutionBufferScale
      ;
    }
    if ((param_1->bOverride_AutoExposureBiasCurve != '\0') &&
       (pUVar16 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr,
       pUVar16 != (UCurveFloat *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      *(TObjectPtr<UCurveFloat>_u_0 *)&(this->FinalPostProcessSettings).field_0x4a8 =
           (param_1->AutoExposureBiasCurve).field0_0x0;
    }
    if ((param_1->bOverride_AutoExposureMeterMask != '\0') &&
       (pUVar14 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar14 != (UTexture *)0x0))
    {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      *(TObjectPtr<UTexture>_u_0 *)&(this->FinalPostProcessSettings).field_0x4b0 =
           (param_1->AutoExposureMeterMask).field0_0x0;
    }
    if ((param_1->bOverride_LocalExposureHighlightContrastCurve != '\0') &&
       (pUVar16 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
       pUVar16 != (UCurveFloat *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      *(TObjectPtr<UCurveFloat>_u_0 *)&(this->FinalPostProcessSettings).field_0x4f0 =
           (param_1->LocalExposureHighlightContrastCurve).field0_0x0;
    }
    if ((param_1->bOverride_LocalExposureShadowContrastCurve != '\0') &&
       (pUVar16 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
       pUVar16 != (UCurveFloat *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      *(TObjectPtr<UCurveFloat>_u_0 *)&(this->FinalPostProcessSettings).field_0x4f8 =
           (param_1->LocalExposureShadowContrastCurve).field0_0x0;
    }
    if ((param_1->bOverride_LensFlareBokehShape != 0) &&
       (pUVar14 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar14 != (UTexture *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      *(TObjectPtr<UTexture>_u_0 *)&(this->FinalPostProcessSettings).field_0x540 =
           (param_1->LensFlareBokehShape).field0_0x0;
    }
    if (param_1->bOverride_LensFlareTints != '\0') {
      pfVar45 = &param_1->LensFlareTints[1].field0_0x0._s_0.G;
      lVar50 = (longlong)this_00 - (longlong)param_1;
      do {
        fVar58 = pfVar45[-4];
        fVar1 = pfVar45[-3];
        fVar2 = pfVar45[-2];
        *(float *)((longlong)pfVar45 + lVar50 + -0x14) =
             (pfVar45[-5] - *(float *)((longlong)pfVar45 + lVar50 + -0x14)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + -0x14);
        *(float *)((longlong)pfVar45 + lVar50 + -0x10) =
             (fVar58 - *(float *)((longlong)pfVar45 + lVar50 + -0x10)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + -0x10);
        *(float *)((longlong)pfVar45 + lVar50 + -0xc) =
             (fVar1 - *(float *)((longlong)pfVar45 + lVar50 + -0xc)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + -0xc);
        *(float *)((longlong)pfVar45 + lVar50 + -8) =
             (fVar2 - *(float *)((longlong)pfVar45 + lVar50 + -8)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + -8);
        fVar58 = *pfVar45;
        fVar1 = pfVar45[1];
        fVar2 = pfVar45[2];
        *(float *)(lVar50 + -4 + (longlong)pfVar45) =
             (((FLinearColor_u_0_s_0 *)(pfVar45 + -1))->R -
             *(float *)(lVar50 + -4 + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + -4 + (longlong)pfVar45);
        *(float *)(lVar50 + (longlong)pfVar45) =
             (fVar58 - *(float *)(lVar50 + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + (longlong)pfVar45);
        *(float *)(lVar50 + 4 + (longlong)pfVar45) =
             (fVar1 - *(float *)(lVar50 + 4 + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + 4 + (longlong)pfVar45);
        *(float *)(lVar50 + 8 + (longlong)pfVar45) =
             (fVar2 - *(float *)(lVar50 + 8 + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + 8 + (longlong)pfVar45);
        fVar58 = pfVar45[4];
        fVar1 = pfVar45[5];
        fVar2 = pfVar45[6];
        *(float *)(lVar50 + 0xc + (longlong)pfVar45) =
             (pfVar45[3] - *(float *)(lVar50 + 0xc + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + 0xc + (longlong)pfVar45);
        *(float *)(lVar50 + 0x10 + (longlong)pfVar45) =
             (fVar58 - *(float *)(lVar50 + 0x10 + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + 0x10 + (longlong)pfVar45);
        *(float *)(lVar50 + 0x14 + (longlong)pfVar45) =
             (fVar1 - *(float *)(lVar50 + 0x14 + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + 0x14 + (longlong)pfVar45);
        *(float *)(lVar50 + 0x18 + (longlong)pfVar45) =
             (fVar2 - *(float *)(lVar50 + 0x18 + (longlong)pfVar45)) * param_2 +
             *(float *)(lVar50 + 0x18 + (longlong)pfVar45);
        fVar58 = pfVar45[8];
        fVar1 = pfVar45[9];
        fVar2 = pfVar45[10];
        *(float *)((longlong)pfVar45 + lVar50 + 0x1c) =
             (pfVar45[7] - *(float *)((longlong)pfVar45 + lVar50 + 0x1c)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + 0x1c);
        *(float *)((longlong)pfVar45 + lVar50 + 0x20) =
             (fVar58 - *(float *)((longlong)pfVar45 + lVar50 + 0x20)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + 0x20);
        *(float *)((longlong)pfVar45 + lVar50 + 0x24) =
             (fVar1 - *(float *)((longlong)pfVar45 + lVar50 + 0x24)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + 0x24);
        *(float *)((longlong)pfVar45 + lVar50 + 0x28) =
             (fVar2 - *(float *)((longlong)pfVar45 + lVar50 + 0x28)) * param_2 +
             *(float *)((longlong)pfVar45 + lVar50 + 0x28);
        pfVar45 = pfVar45 + 0x10;
        lVar55 = lVar55 + -1;
      } while (lVar55 != 0);
    }
    if (param_1->bOverride_MobileHQGaussian != '\0') {
      puVar49 = &(this->FinalPostProcessSettings).field_0x34;
      *puVar49 = *puVar49 ^
                 ((this->FinalPostProcessSettings).field_0x34 ^ param_1->bMobileHQGaussian) & 1;
    }
    if (param_1->bOverride_AutoExposureMethod != 0) {
      (this->FinalPostProcessSettings).field_0x36 = (param_1->AutoExposureMethod).Value;
    }
    if (param_1->bOverride_AmbientOcclusionRadiusInWS != '\0') {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x60c;
      *(uint *)&(this->FinalPostProcessSettings).field_0x60c =
           (uVar12 ^ param_1->AmbientOcclusionRadiusInWS) & 1 ^ uVar12;
    }
    if (param_1->bOverride_MotionBlurTargetFPS != 0) {
      *(int *)&(this->FinalPostProcessSettings).field_0x6e0 = param_1->MotionBlurTargetFPS;
    }
    if (param_1->bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') {
      uVar12 = *(uint *)&(this->FinalPostProcessSettings).field_0x4a0;
      *(uint *)&(this->FinalPostProcessSettings).field_0x4a0 =
           (uVar12 ^ param_1->AutoExposureApplyPhysicalCameraExposure) & 1 ^ uVar12;
    }
    if (param_1->bOverride_UserFlags != '\0') {
      *(int *)&(this->FinalPostProcessSettings).field_0x754 = param_1->UserFlags;
    }
    uVar12 = (param_1->WeightedBlendables).Array.ArrayNum;
    uVar53 = 0;
    if (uVar12 != 0) {
      do {
        uVar42 = 0;
        if ((int)uVar53 < (param_1->WeightedBlendables).Array.ArrayNum) {
          uVar42 = ~uVar53 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        this_01 = *(UObjectBase **)
                   ((param_1->WeightedBlendables).Array.AllocatorInstance.Data +
                   (longlong)(int)uVar53 * 0x10 + 8);
        if ((this_01 != (UObjectBase *)0x0) &&
           (bVar41 = UObjectBase::IsValidLowLevel(this_01), bVar41)) {
          pUVar46 = Z_Construct_UClass_UBlendableInterface_NoRegister();
          plVar47 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar46);
          if (plVar47 != (longlong *)0x0) {
            uVar42 = 0;
            if ((int)uVar53 < (param_1->WeightedBlendables).Array.ArrayNum) {
              uVar42 = ~uVar53 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar41)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            fVar58 = *(float *)((param_1->WeightedBlendables).Array.AllocatorInstance.Data +
                               (longlong)(int)uVar53 * 0x10);
            if (fVar48 <= fVar58) {
              fVar58 = fVar48;
            }
            if (0.0 < fVar58 * param_2) {
              (**(code **)(*plVar47 + 0x10))(plVar47,this);
            }
          }
        }
        uVar53 = uVar53 + 1;
      } while (uVar53 < uVar12);
    }
  }
  if (bVar39) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar40) {
    FThreadStats::AddMessage(FVar52,CycleScopeEnd);
  }
  return;
}

// PixelToScreen @ 148539240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector4<double> * __thiscall
FSceneView::PixelToScreen
          (FSceneView *this,TVector4<double> *__return_storage_ptr__,float param_1,float param_2,
          float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = __real_3f800000;
  iVar1 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 0xc);
  iVar2 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 4);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((param_1 + param_1) /
                (float)(*(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 8) -
                       *(int *)&(this->UnscaledViewRect).field0_0x0) - __real_3f800000);
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(fVar3 - (param_2 + param_2) / (float)(iVar1 - iVar2));
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)param_3;
  return __return_storage_ptr__;
}

// PixelToWorld @ 1485392c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector4<double> * __thiscall
FSceneView::PixelToWorld
          (FSceneView *this,TVector4<double> *__return_storage_ptr__,float param_1,float param_2,
          float param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  
  fVar10 = __real_3f800000;
  iVar1 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 0xc);
  iVar2 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 4);
  fVar14 = (param_1 + param_1) /
           (float)(*(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 8) -
                  *(int *)&(this->UnscaledViewRect).field0_0x0) - __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  dVar15 = (double)fVar14;
  dVar3 = (double)param_3;
  dVar4 = (this->ViewMatrices).InvViewProjectionMatrix.M[1][2];
  dVar11 = (double)(fVar10 - (param_2 + param_2) / (float)(iVar1 - iVar2));
  dVar5 = (this->ViewMatrices).InvViewProjectionMatrix.M[0][1];
  dVar6 = (this->ViewMatrices).InvViewProjectionMatrix.M[1][1];
  dVar7 = (this->ViewMatrices).InvViewProjectionMatrix.M[2][1];
  dVar13 = __real_3ff0000000000000 * (this->ViewMatrices).InvViewProjectionMatrix.M[3][1];
  dVar8 = (this->ViewMatrices).InvViewProjectionMatrix.M[0][2];
  dVar9 = (this->ViewMatrices).InvViewProjectionMatrix.M[2][2];
  dVar12 = (this->ViewMatrices).InvViewProjectionMatrix.M[3][2] * __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar11 * (this->ViewMatrices).InvViewProjectionMatrix.M[1][0] +
       dVar15 * (this->ViewMatrices).InvViewProjectionMatrix.M[0][0] +
       dVar3 * (this->ViewMatrices).InvViewProjectionMatrix.M[2][0] +
       __real_3ff0000000000000 * (this->ViewMatrices).InvViewProjectionMatrix.M[3][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar4 * dVar11 + dVar8 * dVar15 + dVar9 * dVar3 + dVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar11 * dVar6 + dVar15 * dVar5 + dVar3 * dVar7 + dVar13;
  return __return_storage_ptr__;
}

// Project @ 14853b6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TPlane<double> * __thiscall
FSceneView::Project(FSceneView *this,TPlane<double> *__return_storage_ptr__,TVector<double> *param_1
                   )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (this->ViewMatrices).ViewProjectionMatrix.M[1][0];
  dVar6 = (this->ViewMatrices).ViewProjectionMatrix.M[1][1];
  dVar7 = (this->ViewMatrices).ViewProjectionMatrix.M[0][0];
  dVar8 = (this->ViewMatrices).ViewProjectionMatrix.M[0][1];
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = (this->ViewMatrices).ViewProjectionMatrix.M[1][2];
  dVar10 = (this->ViewMatrices).ViewProjectionMatrix.M[2][0];
  dVar11 = (this->ViewMatrices).ViewProjectionMatrix.M[2][1];
  dVar15 = __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[3][0];
  dVar16 = __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[3][1];
  dVar12 = (this->ViewMatrices).ViewProjectionMatrix.M[0][2];
  dVar13 = (this->ViewMatrices).ViewProjectionMatrix.M[2][2];
  dVar14 = (this->ViewMatrices).ViewProjectionMatrix.M[3][2] * __real_3ff0000000000000;
  dVar17 = (this->ViewMatrices).ViewProjectionMatrix.M[1][3] * dVar4 +
           (this->ViewMatrices).ViewProjectionMatrix.M[0][3] * dVar3 +
           (this->ViewMatrices).ViewProjectionMatrix.M[2][3] * dVar1 +
           (this->ViewMatrices).ViewProjectionMatrix.M[3][3] * __real_3ff0000000000000;
  if (dVar17 == 0.0) {
    dVar17 = __real_3f1a36e2e0000000;
  }
  dVar2 = __real_3ff0000000000000 / dVar17;
  __return_storage_ptr__->W = dVar17;
  dVar17 = (double)(float)dVar2;
  __return_storage_ptr__->_padding_ =
       (longlong)(dVar17 * (dVar4 * dVar6 + dVar3 * dVar8 + dVar1 * dVar11 + dVar16));
  __return_storage_ptr__->_padding_ =
       (longlong)(dVar17 * (dVar4 * dVar5 + dVar3 * dVar7 + dVar1 * dVar10 + dVar15));
  __return_storage_ptr__->_padding_ =
       (longlong)(dVar17 * (dVar9 * dVar4 + dVar12 * dVar3 + dVar13 * dVar1 + dVar14));
  return __return_storage_ptr__;
}

// ProjectWorldToScreen @ 14853b800

bool __cdecl
FSceneView::ProjectWorldToScreen
          (TVector<double> *param_1,TIntRect<int> *param_2,TMatrix<double> *param_3,
          TVector2<double> *param_4,bool param_5)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = param_3->M[1][3] * dVar7 + param_3->M[0][3] * dVar6 + param_3->M[2][3] * dVar1 +
          param_3->M[3][3] * __real_3ff0000000000000;
  bVar5 = 0.0 < dVar4;
  if (0.0 < dVar4) {
    if (!param_5) goto LAB_14853b8e5;
  }
  else if (!param_5) {
    return false;
  }
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
LAB_14853b8e5:
  iVar2 = *(int *)((longlong)&param_2->field0_0x0 + 4);
  iVar3 = *(int *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar8 = __real_3fe0000000000000 -
          (double)(float)(__real_3ff0000000000000 / dVar4) *
          (param_3->M[0][1] * dVar6 + dVar7 * param_3->M[1][1] + param_3->M[2][1] * dVar1 +
          param_3->M[3][1] * __real_3ff0000000000000) * __real_3fe0000000000000;
  (param_4->field0_0x0)._s_0.X =
       (double)((float)(((double)(float)(__real_3ff0000000000000 / dVar4) *
                         (param_3->M[0][0] * dVar6 + dVar7 * param_3->M[1][0] +
                          param_3->M[2][0] * dVar1 + param_3->M[3][0] * __real_3ff0000000000000) +
                        __real_3ff0000000000000) * __real_3fe0000000000000) *
               (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0))
       + (double)*(int *)&param_2->field0_0x0;
  (param_4->field0_0x0)._s_0.Y = (double)((float)dVar8 * (float)(iVar3 - iVar2)) + (double)iVar2;
  return bVar5;
}

// ScreenToPixel @ 148542150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FSceneView::ScreenToPixel(FSceneView *this,TVector4<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.W;
  if (dVar1 == 0.0) {
    return false;
  }
  dVar5 = __real_bff0000000000000;
  if (0.0 < dVar1) {
    dVar5 = __real_3ff0000000000000;
  }
  iVar2 = *(int *)&(this->UnscaledViewRect).field0_0x0;
  iVar3 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 4);
  iVar4 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 0xc);
  fVar6 = __real_3f000000 -
          (float)(param_1->field0_0x0)._s_0.Y * __real_3f000000 * (float)(dVar5 / dVar1);
  (param_2->field0_0x0)._s_0.X =
       ((param_1->field0_0x0)._s_0.X * __real_3fe0000000000000 * (double)(float)(dVar5 / dVar1) +
       __real_3fe0000000000000) *
       (double)(*(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 8) - iVar2) +
       (double)iVar2;
  (param_2->field0_0x0)._s_0.Y = (double)(fVar6 * (float)(iVar4 - iVar3) + (float)iVar3);
  return true;
}

// ScreenToWorld @ 148542230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FSceneView::ScreenToWorld
          (FSceneView *this,TVector<double> *__return_storage_ptr__,TVector4<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (this->ViewMatrices).InvViewProjectionMatrix.M[0][1];
  dVar4 = (this->ViewMatrices).InvViewProjectionMatrix.M[1][1];
  dVar5 = (this->ViewMatrices).InvViewProjectionMatrix.M[1][2];
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (param_1->field0_0x0)._s_0.W;
  dVar8 = (this->ViewMatrices).InvViewProjectionMatrix.M[2][1];
  dVar9 = (this->ViewMatrices).InvViewProjectionMatrix.M[3][1];
  dVar10 = (this->ViewMatrices).InvViewProjectionMatrix.M[0][2];
  dVar11 = (this->ViewMatrices).InvViewProjectionMatrix.M[2][2];
  dVar12 = (this->ViewMatrices).InvViewProjectionMatrix.M[3][2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * (this->ViewMatrices).InvViewProjectionMatrix.M[0][0] +
       (this->ViewMatrices).InvViewProjectionMatrix.M[1][0] * dVar2 +
       (this->ViewMatrices).InvViewProjectionMatrix.M[2][0] * dVar6 +
       (this->ViewMatrices).InvViewProjectionMatrix.M[3][0] * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar1 * dVar3 + dVar4 * dVar2 + dVar8 * dVar6 + dVar9 * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar5 * dVar2 + dVar10 * dVar1 + dVar11 * dVar6 + dVar12 * dVar7;
  return __return_storage_ptr__;
}

// SetupAntiAliasingMethod @ 1485428a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FSceneView::SetupAntiAliasingMethod(FSceneView *this)

{
  FSceneViewFamily *pFVar1;
  code *pcVar2;
  bool bVar3;
  EAntiAliasingMethod EVar4;
  
  EVar4 = GetDefaultAntiAliasingMethod((FGenericStaticFeatureLevel)this->FeatureLevel);
  if (EVar4 < AAM_MAX) {
    this->AntiAliasingMethod = EVar4;
  }
  pFVar1 = this->Family;
  if (pFVar1 == (FSceneViewFamily *)0x0) goto LAB_1485429ac;
  if ((((pFVar1->EngineShowFlags).PostProcessing == 0) && (this->bIsPlanarReflection == false)) ||
     ((pFVar1->EngineShowFlags).AntiAliasing == 0)) {
    this->AntiAliasingMethod = AAM_None;
  }
  EVar4 = this->AntiAliasingMethod;
  if (EVar4 == AAM_TemporalAA) {
    if (((pFVar1->EngineShowFlags).TemporalAA != 0) && (pFVar1->bRealtimeUpdate != false)) {
      bVar3 = SupportsGen4TAA((FStaticShaderPlatform)
                              GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel]);
joined_r0x00014854296b:
      if (bVar3) goto LAB_148542973;
    }
LAB_14854296d:
    this->AntiAliasingMethod = AAM_FXAA;
  }
  else if (EVar4 == AAM_TSR) {
    if (((pFVar1->EngineShowFlags).TemporalAA != 0) && (pFVar1->bRealtimeUpdate != false)) {
      bVar3 = SupportsTSR((FStaticShaderPlatform)
                          GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel]);
      goto joined_r0x00014854296b;
    }
    goto LAB_14854296d;
  }
LAB_148542973:
  if ((this->Family->TemporalUpscalerInterface != (ITemporalUpscaler *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Family->GetTemporalUpscalerInterface() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                         ,0x475,
                         L"ITemporalUpscaler should be set up in FSceneViewExtensionBase::BeginRenderViewFamily()"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1485429ac:
  if (((this->AntiAliasingMethod == AAM_TemporalAA) || (this->AntiAliasingMethod == AAM_TSR)) &&
     (this->State == (FSceneViewStateInterface *)0x0)) {
    this->AntiAliasingMethod = AAM_None;
  }
  return;
}

// SetupCommonViewUniformBufferParameters @ 148545100

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
FSceneView::SetupCommonViewUniformBufferParameters
          (FSceneView *this,FViewUniformShaderParameters *param_1,TIntPoint<int> *param_2,
          int param_3,TIntRect<int> *param_4,FViewMatrices *param_5,FViewMatrices *param_6)

{
  FSetupViewUniformParametersInputs *pFVar1;
  FSetupViewUniformParametersInputs local_d8;
  
  pFVar1 = FSetupViewUniformParametersInputs::Create(&local_d8,this);
  ::SetupCommonViewUniformBufferParameters(param_1,param_2,param_3,param_4,param_5,param_6,pFVar1);
  return;
}

// SetupViewFrustum @ 148545330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall FSceneView::SetupViewFrustum(FSceneView *this)

{
  TSharedPtr<FConvexVolume,1> *pTVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  UEngine *pUVar11;
  bool bVar12;
  TInverseRotationMatrix<double> *pTVar13;
  IStereoRendering *pIVar14;
  TMatrix<double> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  FConvexVolume *pFVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_4a8 [32];
  FConvexVolume *local_478;
  FSharedReferencer<1> FStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  double local_458;
  undefined8 local_450;
  FSharedReferencer<1> FStack_448;
  TRotator<double> local_440;
  TPlane<double> local_428;
  TPlane<double> local_408;
  TMatrix<double> local_3d8;
  TMatrix<double> local_358;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TInverseRotationMatrix<double> local_158;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  fVar2 = (this->SceneViewInitOptions).OverrideFarClippingPlaneDistance;
  pTVar15 = &(this->ViewMatrices).ViewProjectionMatrix;
  if (fVar2 <= 0.0) {
    GetViewFrustumBounds(&this->ViewFrustum,pTVar15,false);
  }
  else {
    local_428._padding_ = (longlong)(this->ViewMatrices).ViewMatrix.M[1][2];
    local_428._padding_ = (longlong)(this->ViewMatrices).ViewMatrix.M[0][2];
    local_428._padding_ = (longlong)(this->ViewMatrices).ViewMatrix.M[2][2];
    dVar19 = (double)fVar2;
    local_428.W = (dVar19 * (double)local_428._padding_ +
                  (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y) * (double)local_428._padding_ +
                  (dVar19 * (double)local_428._padding_ +
                  (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.X) * (double)local_428._padding_ +
                  (dVar19 * (double)local_428._padding_ +
                  (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z) * (double)local_428._padding_;
    GetViewFrustumBounds(&this->ViewFrustum,pTVar15,&local_428,true,false);
  }
  uVar9 = _UNK_15066df7c;
  uVar8 = _UNK_15066df78;
  uVar7 = __xmm_80000000000000008000000000000000._4_4_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  dVar19 = __real_3ff0000000000000;
  if (((this->bIsSinglePassStereo == false) ||
      (bVar12 = IStereoRendering::IsStereoEyeView(this), !bVar12)) ||
     ((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0)) {
    local_450 = 0;
    FStack_448.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->StereoCullingFrustum != (TSharedPtr<FConvexVolume,1> *)&local_450) {
      (this->StereoCullingFrustum).Object = (FConvexVolume *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StereoCullingFrustum).SharedReferenceCount,&FStack_448);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_448.ReferenceController);
    local_468 = (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
    uStack_460 = (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
    local_458 = (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
  }
  else {
    FStack_470.ReferenceController = ::operator_new(0x210);
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
    if (FStack_470.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_478 = ___xmm_00000000000000000000000000000010;
      pFVar17 = (FConvexVolume *)&DAT_00000010;
      FStack_470.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_470.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar17 = (FConvexVolume *)(FStack_470.ReferenceController + 1);
      (FStack_470.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_470.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFConvexVolume___00_SharedPointerInternals__6B_;
      FStack_470.ReferenceController[0xd]._padding_ = 0;
      *(undefined4 *)&FStack_470.ReferenceController[0xe]._padding_ = 0;
      *(undefined4 *)((longlong)&FStack_470.ReferenceController[0xe]._padding_ + 4) = 6;
      FStack_470.ReferenceController[0x1f]._padding_ = 0;
      *(undefined4 *)&FStack_470.ReferenceController[0x20]._padding_ = 0;
      *(undefined4 *)((longlong)&FStack_470.ReferenceController[0x20]._padding_ + 4) = 8;
      if ((pFVar17 == (FConvexVolume *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      (FStack_470.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_470.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar16 = FStack_470.ReferenceController;
      local_478 = pFVar17;
    }
    pTVar1 = &this->StereoCullingFrustum;
    if (pTVar1 != (TSharedPtr<FConvexVolume,1> *)&local_478) {
      pTVar1->Object = pFVar17;
      local_478 = (FConvexVolume *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StereoCullingFrustum).SharedReferenceCount,&FStack_470);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_470.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    pUVar11 = GEngine;
    local_468 = *(double *)&(this->ViewLocation).field0_0x0;
    uStack_460 = (this->ViewLocation).field0_0x0._s_0.Y;
    local_458 = (this->ViewLocation).field0_0x0._s_0.Z;
    local_440.Pitch = (this->ViewRotation).Pitch;
    local_440.Yaw = (this->ViewRotation).Yaw;
    local_440.Roll = (this->ViewRotation).Roll;
    if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar14 = (pUVar11->StereoRenderingDevice).Object;
    (**(code **)((longlong)*pIVar14 + 0x58))(pIVar14,0xffffffff,&local_440,this->WorldToMetersScale)
    ;
    pTVar13 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                        (&local_158,&local_440);
    local_358.M[0][2] = ___xmm_00000000000000003ff0000000000000;
    local_358.M[0][3] = _UNK_150689518;
    local_358.M[1][0] = ___xmm_00000000000000003ff0000000000000;
    local_358.M[1][1] = _UNK_150689518;
    local_358.M[0][0] = 0.0;
    local_358.M[0][1] = 0.0;
    local_358.M[3][0] = 0.0;
    local_358.M[3][1] = 0.0;
    local_358.M[1][2] = 0.0;
    local_358.M[1][3] = 0.0;
    local_358.M[2][0] = ___xmm_3ff00000000000000000000000000000;
    local_358.M[2][1] = _UNK_15061cbc8;
    local_358.M[2][2] = 0.0;
    local_358.M[2][3] = 0.0;
    local_358.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_358.M[3][3] = _UNK_15061cbc8;
    VectorMatrixMultiply(&local_258,(TMatrix<double> *)pTVar13,&local_358);
    local_3d8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_3d8.M[1][1] = _UNK_15061cbc8;
    local_3d8.M[0][2] = 0.0;
    local_3d8.M[0][3] = 0.0;
    local_3d8.M[1][2] = 0.0;
    local_3d8.M[1][3] = 0.0;
    local_3d8.M[3][3] = dVar19;
    local_3d8.M[3][0]._0_4_ = (uint)local_468 ^ uVar6;
    local_3d8.M[3][0]._4_4_ = local_468._4_4_ ^ uVar7;
    local_3d8.M[3][1]._0_4_ = (uint)uStack_460 ^ uVar8;
    local_3d8.M[3][1]._4_4_ = uStack_460._4_4_ ^ uVar9;
    local_3d8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
    local_3d8.M[0][1] = _UNK_150689518;
    local_3d8.M[3][2] =
         (double)CONCAT44((uint)((ulonglong)local_458 >> 0x20) ^ uVar7,SUB84(local_458,0) ^ uVar6);
    local_3d8.M[2][0] = 0.0;
    local_3d8.M[2][1] = 0.0;
    local_3d8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_3d8.M[2][3] = _UNK_150689518;
    VectorMatrixMultiply(&local_1d8,&local_3d8,&local_258);
    pIVar14 = TSharedPtr<IStereoRendering,1>::operator->(&GEngine->StereoRenderingDevice);
    pTVar15 = (TMatrix<double> *)
              (**(code **)((longlong)*pIVar14 + 0x60))(pIVar14,local_d8,0xffffffff);
    VectorMatrixMultiply(&local_2d8,&local_1d8,pTVar15);
    fVar2 = (this->SceneViewInitOptions).OverrideFarClippingPlaneDistance;
    if (fVar2 <= 0.0) {
      if ((pTVar1->Object == (FConvexVolume *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      GetViewFrustumBounds(pTVar1->Object,&local_2d8,false);
    }
    else {
      local_408._padding_ = (longlong)(this->ViewMatrices).ViewMatrix.M[1][2];
      local_408._padding_ = (longlong)(this->ViewMatrices).ViewMatrix.M[0][2];
      local_408._padding_ = (longlong)(this->ViewMatrices).ViewMatrix.M[2][2];
      dVar20 = (double)fVar2;
      local_408.W = (dVar20 * (double)local_408._padding_ +
                    (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y) * (double)local_408._padding_
                    + (dVar20 * (double)local_408._padding_ +
                      (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.X) *
                      (double)local_408._padding_ +
                    (dVar20 * (double)local_408._padding_ +
                    (this->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z) * (double)local_408._padding_
      ;
      if ((pTVar1->Object == (FConvexVolume *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      GetViewFrustumBounds(pTVar1->Object,&local_2d8,&local_408,true,false);
    }
  }
  (this->CullingOrigin).field0_0x0._s_0.X = local_468;
  (this->CullingOrigin).field0_0x0._s_0.Y = uStack_460;
  (this->CullingOrigin).field0_0x0._s_0.Z = local_458;
  dVar10 = __real_3ddb7cdfc28ae400;
  dVar22 = (this->ViewMatrices).ViewProjectionMatrix.M[1][3] -
           (this->ViewMatrices).ViewProjectionMatrix.M[1][2];
  dVar20 = (this->ViewMatrices).ViewProjectionMatrix.M[0][3] -
           (this->ViewMatrices).ViewProjectionMatrix.M[0][2];
  dVar21 = (this->ViewMatrices).ViewProjectionMatrix.M[2][3] -
           (this->ViewMatrices).ViewProjectionMatrix.M[2][2];
  dVar18 = dVar20 * dVar20 + dVar22 * dVar22 + dVar21 * dVar21;
  if (__real_3ddb7cdfc28ae400 < dVar18) {
    dVar3 = (this->ViewMatrices).ViewProjectionMatrix.M[3][3];
    dVar4 = (this->ViewMatrices).ViewProjectionMatrix.M[3][2];
    dVar19 = dVar19 / SQRT(dVar18);
    (this->NearClippingPlane)._padding_ =
         CONCAT44((uint)((ulonglong)(dVar19 * dVar20) >> 0x20) ^ uVar7,
                  SUB84(dVar19 * dVar20,0) ^ uVar6);
    (this->NearClippingPlane)._padding_ =
         CONCAT44((uint)((ulonglong)(dVar19 * dVar22) >> 0x20) ^ uVar7,
                  SUB84(dVar19 * dVar22,0) ^ uVar6);
    (this->NearClippingPlane)._padding_ =
         CONCAT44((uint)((ulonglong)(dVar19 * dVar21) >> 0x20) ^ uVar7,
                  SUB84(dVar19 * dVar21,0) ^ uVar6);
    (this->NearClippingPlane).W = (dVar3 - dVar4) * dVar19;
  }
  this->bHasNearClippingPlane = dVar10 < dVar18;
  this->NearClippingDistance =
       (float)(((this->ViewMatrices).ProjectionMatrix.M[3][3] -
               (this->ViewMatrices).ProjectionMatrix.M[3][2]) /
              ((this->ViewMatrices).ProjectionMatrix.M[2][2] -
              (this->ViewMatrices).ProjectionMatrix.M[2][3]));
  return;
}

// SetupViewRectUniformBufferParameters @ 148546100

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
FSceneView::SetupViewRectUniformBufferParameters
          (FSceneView *this,FViewUniformShaderParameters *param_1,TIntPoint<int> *param_2,
          TIntRect<int> *param_3,FViewMatrices *param_4,FViewMatrices *param_5)

{
  FSetupViewUniformParametersInputs *pFVar1;
  FSetupViewUniformParametersInputs local_d8;
  
  pFVar1 = FSetupViewUniformParametersInputs::Create(&local_d8,this);
  ::SetupViewRectUniformBufferParameters(param_1,param_2,param_3,param_4,param_5,pFVar1);
  return;
}

// StartFinalPostprocessSettings @ 148546600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall FSceneView::StartFinalPostprocessSettings(FSceneView *this,TVector<double> *param_1)

{
  int *piVar1;
  IStereoRendering *pIVar2;
  FSceneViewStateInterface *pFVar3;
  FSceneInterface *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<int> *pTVar9;
  TConsoleVariableData<float> *pTVar10;
  ulong uVar11;
  void *pvVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_StartFinalPostprocessSettings> FVar16;
  FPostProcessSettings *pFVar17;
  IConsoleManager *pIVar18;
  longlong *plVar19;
  TConsoleVariableData<int> *pTVar20;
  TConsoleVariableData<int> *pTVar21;
  UWorld *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar22;
  FName FVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_898 [32];
  FColor_u_0 local_838 [2];
  LARGE_INTEGER local_830;
  FName local_828;
  FName local_820;
  FStatMessage local_810;
  FName local_800;
  TVector<double>_u_0 local_7f8;
  FPostProcessSettings local_7d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_898;
  pTVar21 = (TConsoleVariableData<int> *)0x0;
  FVar16 = StatPtr_STAT_StartFinalPostprocessSettings;
  if (StatPtr_STAT_StartFinalPostprocessSettings ==
      (FThreadSafeStaticStat<FStat_STAT_StartFinalPostprocessSettings>)0x0) {
    pFVar15 = ::FName::FName(&local_800,"STAT_StartFinalPostprocessSettings");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_StartFinalPostprocessSettings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartFinalPostprocessSettings,
                        *pFVar15,L"StartFinalPostprocessSettings","STATGROUP_Engine",
                        "STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar6 = false;
  bVar8 = false;
  local_820.ComparisonIndex.Value = 0;
  local_820.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar14 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_838[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_838[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_828.ComparisonIndex.Value = FVar22.Value;
        local_828.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_828,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                   ,0x7b5);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_830.s.LowPart = FVar22.Value;
      local_830.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar7 = true;
      goto LAB_14854675e;
    }
  }
  bVar7 = false;
  FVar23 = local_820;
LAB_14854675e:
  bVar13 = IsInGameThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                          ,0x7b7,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar17 = FPostProcessSettings::FPostProcessSettings(&local_7d8);
  FPostProcessSettings::operator=((FPostProcessSettings *)&this->FinalPostProcessSettings,pFVar17);
  if (local_7d8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d8.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  *(undefined4 *)&(this->FinalPostProcessSettings).field_0x470 = 0;
  *(undefined4 *)&(this->FinalPostProcessSettings).field_0x648 = 0;
  pTVar20 = CVarDefaultBloom.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar20->ShadowedValue[0] == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x304 = 0;
  }
  pTVar20 = CVarDefaultAmbientOcclusion.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar20->ShadowedValue[0] == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x600 = 0;
  }
  pTVar20 = CVarDefaultAutoExposure.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar9 = CVarDefaultAutoExposureMethod.Ref;
  if (pTVar20->ShadowedValue[0] == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x4c0 = 0x3f800000;
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x4c4 = 0x3f800000;
    pTVar20 = CVarDefaultAutoExposureExtendDefaultLuminanceRange.Ref;
    bVar13 = IsInParallelGameThread();
    if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pTVar20->ShadowedValue[0] != 0) {
      fVar25 = logf(*(float *)&(this->FinalPostProcessSettings).field_0x4c0 * ___real_3f555555);
      *(float *)&(this->FinalPostProcessSettings).field_0x4c0 = fVar25 * __real_3fb8aa3b;
      fVar25 = logf(*(float *)&(this->FinalPostProcessSettings).field_0x4c4 * ___real_3f555555);
      *(float *)&(this->FinalPostProcessSettings).field_0x4c4 = fVar25 * __real_3fb8aa3b;
    }
  }
  else {
    bVar13 = IsInParallelGameThread();
    if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((uint)pTVar9->ShadowedValue[0] < 3) {
      (this->FinalPostProcessSettings).field_0x36 = (char)pTVar9->ShadowedValue[0];
    }
  }
  pTVar10 = CVarDefaultLocalExposureHighlightContrast.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar25 = __real_3f800000;
  fVar26 = pTVar10->ShadowedValue[0];
  if (__real_3f800000 <= pTVar10->ShadowedValue[0]) {
    fVar26 = __real_3f800000;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x4e4 = fVar26;
  pTVar10 = CVarDefaultLocalExposureShadowContrast.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar26 = pTVar10->ShadowedValue[0];
  if (fVar25 <= pTVar10->ShadowedValue[0]) {
    fVar26 = fVar25;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  *(float *)&(this->FinalPostProcessSettings).field_0x4e8 = fVar26;
  pTVar20 = CVarDefaultMotionBlur.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar20->ShadowedValue[0] == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x6d8 = 0;
  }
  pTVar20 = CVarDefaultLensFlare.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar20->ShadowedValue[0] == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x520 = 0;
  }
  pTVar20 = CVarDefaultAmbientOcclusionStaticFraction.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar20->ShadowedValue[0] == 0) {
    *(undefined4 *)&(this->FinalPostProcessSettings).field_0x604 = 0;
  }
  uVar11 = _tls_index;
  uVar24 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar18 = IConsoleManager::Get();
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar18 + 0xc0))(pIVar18);
    pTVar20 = pTVar21;
    if (plVar19 != (longlong *)0x0) {
      pTVar20 = (TConsoleVariableData<int> *)(**(code **)(*plVar19 + 0x68))(plVar19);
    }
    ::CVar = pTVar20;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar20 = ::CVar;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar12 = ThreadLocalStoragePointer;
  (this->FinalPostProcessSettings).field_0x45c =
       pTVar20->ShadowedValue[0] != 0 | (this->FinalPostProcessSettings).field_0x45c & 0xfe;
  if ((*(int *)(*(longlong *)((longlong)pvVar12 + uVar24 * 8) + 0x9d4c) < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar18 = IConsoleManager::Get();
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar18 + 0xc0))(pIVar18);
    pTVar20 = pTVar21;
    if (plVar19 != (longlong *)0x0) {
      pTVar20 = (TConsoleVariableData<int> *)(**(code **)(*plVar19 + 0x68))(plVar19);
    }
    ::CVar = pTVar20;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar20 = ::CVar;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (this->FinalPostProcessSettings).field_0x3dc = (char)pTVar20->ShadowedValue[0];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar11 * 8) + 0x9d4c)
       < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar18 = IConsoleManager::Get();
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar18 + 0xc0))(pIVar18);
    pTVar20 = pTVar21;
    if (plVar19 != (longlong *)0x0) {
      pTVar20 = (TConsoleVariableData<int> *)(**(code **)(*plVar19 + 0x68))(plVar19);
    }
    ::CVar = pTVar20;
    _Init_thread_footer(&::_TSS2);
  }
  pTVar20 = ::CVar;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (this->FinalPostProcessSettings).field_0x438 = (char)pTVar20->ShadowedValue[0];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS3)
     && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pIVar18 = IConsoleManager::Get();
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar18 + 0xc0))(pIVar18);
    if (plVar19 != (longlong *)0x0) {
      pTVar21 = (TConsoleVariableData<int> *)(**(code **)(*plVar19 + 0x68))(plVar19);
    }
    ::CVar = pTVar21;
    _Init_thread_footer(&::_TSS3);
  }
  pTVar21 = ::CVar;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (this->FinalPostProcessSettings).field_0x440 =
       -(pTVar21->ShadowedValue[0] != 0) & 2U | (this->FinalPostProcessSettings).field_0x440 & 0xfd;
  *(uint *)&(this->FinalPostProcessSettings).field_0x66c =
       (uint)(0 < GHairStrandsComposeDOFDepth) |
       *(uint *)&(this->FinalPostProcessSettings).field_0x66c & 0xfffffffe;
  pIVar2 = (GEngine->StereoRenderingDevice).Object;
  if (pIVar2 != (IStereoRendering *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x90))
              (pIVar2,&this->FinalPostProcessSettings,this->StereoPass,this->StereoViewIndex);
  }
  pFVar3 = this->State;
  if (pFVar3 != (FSceneViewStateInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,this);
  }
  if (((this->Family != (FSceneViewFamily *)0x0) &&
      (pFVar4 = this->Family->Scene, pFVar4 != (FSceneInterface *)0x0)) &&
     (this_00 = (UWorld *)(**(code **)(pFVar4->_padding_ + 0x410))(), this_00 != (UWorld *)0x0)) {
    local_7f8._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_7f8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_7f8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    UWorld::AddPostProcessingSettings(this_00,(TVector<double> *)&local_7f8._s_0,this);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_810.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_810.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_830);
      local_810.StatData.Pad[4] = '\0';
      local_810.StatData.Pad[5] = '\0';
      local_810.StatData.Pad[6] = '\0';
      local_810.StatData.Pad[7] = '\0';
      local_810.StatData.Pad[0] = local_830.s.LowPart._0_1_;
      local_810.StatData.Pad[1] = local_830.s.LowPart._1_1_;
      local_810.StatData.Pad[2] = local_830.s.LowPart._2_1_;
      local_810.StatData.Pad[3] = local_830.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_810);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// UpdatePlanarReflectionViewMatrix @ 14854c020

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
FSceneView::UpdatePlanarReflectionViewMatrix
          (FSceneView *this,FSceneView *param_1,TMirrorMatrix<double> *param_2)

{
  FViewMatrices::UpdatePlanarReflectionViewMatrix(&this->ViewMatrices,param_1,param_2);
  GetViewFrustumBounds(&this->ViewFrustum,&(this->ViewMatrices).ViewProjectionMatrix,false);
  return;
}

// UpdateProjectionMatrix @ 14854c900

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

void __thiscall FSceneView::UpdateProjectionMatrix(FSceneView *this,TMatrix<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_8d8 [32];
  undefined8 local_8b8;
  float fStack_8b0;
  float fStack_8ac;
  FViewMatrices local_8a8;
  ulonglong local_28;
  
  fStack_8ac = __real_322bcc77;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8d8;
  dVar2 = param_1->M[0][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][0] = param_1->M[0][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][1] = dVar2;
  dVar2 = param_1->M[0][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][2] = param_1->M[0][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][3] = dVar2;
  dVar2 = param_1->M[1][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][0] = param_1->M[1][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][1] = dVar2;
  dVar2 = param_1->M[1][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][2] = param_1->M[1][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][3] = dVar2;
  dVar2 = param_1->M[2][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][0] = param_1->M[2][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][1] = dVar2;
  dVar2 = param_1->M[2][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][2] = param_1->M[2][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][3] = dVar2;
  dVar2 = param_1->M[3][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][0] = param_1->M[3][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][1] = dVar2;
  dVar2 = param_1->M[3][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][2] = param_1->M[3][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][3] = dVar2;
  dVar2 = (this->ProjectionMatrixUnadjustedForRHI).M[3][2];
  dVar3 = (this->ProjectionMatrixUnadjustedForRHI).M[2][2];
  fStack_8b0 = (float)dVar2;
  if (fStack_8b0 == 0.0) {
    fStack_8b0 = fStack_8ac;
  }
  pdVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[3] + 3;
  if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
    fStack_8b0 = 0.0;
    dVar3 = __real_3ff0000000000000 / dVar3;
    fStack_8ac = 1.0;
    local_8b8 = CONCAT44((float)(__real_3ff0000000000000 - dVar3 * dVar2),(float)dVar3);
  }
  else {
    fStack_8b0 = __real_3f800000 / fStack_8b0;
    local_8b8 = 0;
    fStack_8ac = fStack_8b0 * (float)dVar3 - fStack_8ac;
  }
  *(undefined8 *)&(this->InvDeviceZToWorldZTransform).field0_0x0 = local_8b8;
  *(ulonglong *)((longlong)&(this->InvDeviceZToWorldZTransform).field0_0x0 + 8) =
       CONCAT44(fStack_8ac,fStack_8b0);
  dVar2 = param_1->M[0][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[0][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  dVar2 = param_1->M[0][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[0][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  dVar2 = param_1->M[1][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[1][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  dVar2 = param_1->M[1][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[1][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  dVar2 = param_1->M[2][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[2][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  dVar2 = param_1->M[2][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[2][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  dVar2 = param_1->M[3][1];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[3][0];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  dVar2 = param_1->M[3][3];
  (this->SceneViewInitOptions)._padding_ = (longlong)param_1->M[3][2];
  (this->SceneViewInitOptions)._padding_ = (longlong)dVar2;
  FViewMatrices::FViewMatrices(&local_8a8,&this->SceneViewInitOptions);
  memcpy(&this->ViewMatrices,&local_8a8,0x880);
  SetupViewFrustum(this);
  return;
}

// UpdateViewMatrix @ 14854cb40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSceneView::UpdateViewMatrix(FSceneView *this)

{
  IStereoRendering *pIVar1;
  TRotator<double> local_38;
  TVector<double>_u_0 local_20;
  
  local_20._s_0.X = (this->ViewLocation).field0_0x0._s_0.X;
  local_20._s_0.Y = (this->ViewLocation).field0_0x0._s_0.Y;
  local_20._s_0.Z = (this->ViewLocation).field0_0x0._s_0.Z;
  local_38.Pitch._0_4_ = *(undefined4 *)&(this->ViewRotation).Pitch;
  local_38.Pitch._4_4_ = *(undefined4 *)((longlong)&(this->ViewRotation).Pitch + 4);
  local_38.Yaw._0_4_ = *(undefined4 *)&(this->ViewRotation).Yaw;
  local_38.Yaw._4_4_ = *(undefined4 *)((longlong)&(this->ViewRotation).Yaw + 4);
  local_38.Roll = (this->ViewRotation).Roll;
  pIVar1 = (GEngine->StereoRenderingDevice).Object;
  if ((pIVar1 != (IStereoRendering *)0x0) && (this->StereoPass != eSSP_FULL)) {
    (**(code **)((longlong)*pIVar1 + 0x58))
              (pIVar1,this->StereoViewIndex,&local_38,this->WorldToMetersScale,&local_20);
    (this->ViewLocation).field0_0x0._s_0.X = local_20._s_0.X;
    (this->ViewLocation).field0_0x0._s_0.Y = local_20._s_0.Y;
    (this->ViewLocation).field0_0x0._s_0.Z = local_20._s_0.Z;
    (this->ViewRotation).Pitch = (double)CONCAT44(local_38.Pitch._4_4_,local_38.Pitch._0_4_);
    (this->ViewRotation).Yaw = (double)CONCAT44(local_38.Yaw._4_4_,local_38.Yaw._0_4_);
    (this->ViewRotation).Roll = local_38.Roll;
  }
  FViewMatrices::UpdateViewMatrix(&this->ViewMatrices,(TVector<double> *)&local_20._s_0,&local_38);
  GetViewFrustumBounds(&this->ViewFrustum,&(this->ViewMatrices).ViewProjectionMatrix,false);
  return;
}

// VerifyMembersChecks @ 14854daa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSceneView::VerifyMembersChecks(FSceneView *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->AntiAliasingMethod == AAM_TemporalAA) || (this->AntiAliasingMethod == AAM_TSR)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (this->PrimaryScreenPercentageMethod == TemporalUpscale) {
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsTemporalAccumulation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                         ,0x445,
                         L"ScreenPercentageMethod == EPrimaryScreenPercentageMethod::TemporalUpscale requires TAA, TSR or custom Temporal Upscaler"
                        );
      if (!bVar2) {
        return true;
      }
      goto code_r0x00014854db22;
    }
  }
  else if (!bVar2) {
    return true;
  }
  if ((this->State != (FSceneViewStateInterface *)0x0) ||
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                         ,0x44a,L"TemporalAA requires the view to have a valid state."), !bVar2)) {
    return true;
  }
code_r0x00014854db22:
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// WorldToPixel @ 14854e230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FSceneView::WorldToPixel(FSceneView *this,TVector<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar10 = SUB84(__real_3ff0000000000000,0);
  uVar11 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar5 = (this->ViewMatrices).ViewProjectionMatrix.M[1][3] * dVar7 +
          (this->ViewMatrices).ViewProjectionMatrix.M[0][3] * dVar6 +
          (this->ViewMatrices).ViewProjectionMatrix.M[2][3] * dVar1 +
          (this->ViewMatrices).ViewProjectionMatrix.M[3][3] * __real_3ff0000000000000;
  if (dVar5 != 0.0) {
    if (dVar5 <= 0.0) {
      uVar10 = (undefined4)__real_bff0000000000000;
      uVar11 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    iVar2 = *(int *)&(this->UnscaledViewRect).field0_0x0;
    iVar3 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 4);
    iVar4 = *(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 0xc);
    fVar9 = (float)((double)CONCAT44(uVar11,uVar10) / dVar5);
    fVar8 = __real_3f000000 -
            (float)(dVar7 * (this->ViewMatrices).ViewProjectionMatrix.M[1][1] +
                    dVar6 * (this->ViewMatrices).ViewProjectionMatrix.M[0][1] +
                    dVar1 * (this->ViewMatrices).ViewProjectionMatrix.M[2][1] +
                   __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[3][1]) *
            __real_3f000000 * fVar9;
    (param_2->field0_0x0)._s_0.X =
         ((dVar7 * (this->ViewMatrices).ViewProjectionMatrix.M[1][0] +
           dVar6 * (this->ViewMatrices).ViewProjectionMatrix.M[0][0] +
           dVar1 * (this->ViewMatrices).ViewProjectionMatrix.M[2][0] +
          __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[3][0]) *
          __real_3fe0000000000000 * (double)fVar9 + __real_3fe0000000000000) *
         (double)(*(int *)((longlong)&(this->UnscaledViewRect).field0_0x0 + 8) - iVar2) +
         (double)iVar2;
    (param_2->field0_0x0)._s_0.Y = (double)(fVar8 * (float)(iVar4 - iVar3) + (float)iVar3);
    return true;
  }
  return false;
}

// WorldToScreen @ 14854e3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector4<double> * __thiscall
FSceneView::WorldToScreen
          (FSceneView *this,TVector4<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar13 = __real_3ff0000000000000;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar7 = (this->ViewMatrices).ViewProjectionMatrix.M[1][2];
  dVar8 = (this->ViewMatrices).ViewProjectionMatrix.M[1][3];
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = (this->ViewMatrices).ViewProjectionMatrix.M[0][2];
  dVar10 = (this->ViewMatrices).ViewProjectionMatrix.M[0][3];
  dVar4 = dVar6 * (this->ViewMatrices).ViewProjectionMatrix.M[1][1] +
          (this->ViewMatrices).ViewProjectionMatrix.M[0][1] * dVar5 +
          dVar1 * (this->ViewMatrices).ViewProjectionMatrix.M[2][1] +
          __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[3][1];
  dVar11 = (this->ViewMatrices).ViewProjectionMatrix.M[2][2];
  dVar12 = (this->ViewMatrices).ViewProjectionMatrix.M[2][3];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar6 * (this->ViewMatrices).ViewProjectionMatrix.M[1][0] +
                 (this->ViewMatrices).ViewProjectionMatrix.M[0][0] * dVar5 +
                 dVar1 * (this->ViewMatrices).ViewProjectionMatrix.M[2][0] +
                 __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[3][0];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  dVar4 = dVar8 * dVar6 + dVar10 * dVar5 + dVar12 * dVar1 +
          (this->ViewMatrices).ViewProjectionMatrix.M[3][3] * dVar13;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar7 * dVar6 + dVar9 * dVar5 + dVar11 * dVar1 +
                 (this->ViewMatrices).ViewProjectionMatrix.M[3][2] * dVar13;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar2;
  return __return_storage_ptr__;
}

