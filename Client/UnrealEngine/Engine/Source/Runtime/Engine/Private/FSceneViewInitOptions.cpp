// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSceneViewInitOptions @ 1488ae7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneViewInitOptions * __thiscall
FSceneViewInitOptions::FSceneViewInitOptions(FSceneViewInitOptions *this)

{
  FLinearColor FVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar2;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][2];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][2];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][2];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][2];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[0][2];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[1][2];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[2][2];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][1];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][0];
  this->_padding_ = (longlong)dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  this->_padding_ = (longlong)UE::Math::TMatrix<double>::Identity.M[3][2];
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar2;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ViewFamily = (FSceneViewFamily *)0x0;
  this->SceneViewStateInterface = (FSceneViewStateInterface *)0x0;
  this->ExposureSceneViewStateInterface = (FSceneViewStateInterface *)0x0;
  FSceneViewOwner::FSceneViewOwner(&this->ViewActor,(AActor *)0x0);
  this->PlayerIndex = -1;
  this->ViewElementDrawer = (FViewElementDrawer *)0x0;
  (this->BackgroundColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (this->OverlayColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  FVar1 = FLinearColor::White;
  this->StereoPass = eSSP_FULL;
  this->StereoViewIndex = -1;
  (this->ColorScale).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x20 = 0;
  this->WorldToMetersScale = 100.0;
  (this->ViewLocation).field0_0x0._s_0.X = 0.0;
  (this->ViewLocation).field0_0x0._s_0.Y = 0.0;
  (this->ViewLocation).field0_0x0._s_0.Z = 0.0;
  (this->ViewRotation).Pitch = 0.0;
  (this->ViewRotation).Yaw = 0.0;
  (this->ViewRotation).Roll = 0.0;
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
  (this->CursorPos).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.X = 0.0;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Y = 0.0;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Z = 0.0;
  this->LODDistanceFactor = 1.0;
  this->OverrideFarClippingPlaneDistance = -1.0;
  this->bInCameraCut = false;
  this->bUseFieldOfViewForLOD = true;
  this->FOV = 90.0;
  this->DesiredFOV = 90.0;
  (this->FirstPersonParams).FOVCorrectionFactor = 0.0;
  (this->FirstPersonParams).Scale = 0.0;
  this->bIsSceneCapture = false;
  this->bIsSceneCaptureCube = false;
  this->bSceneCaptureUsesRayTracing = false;
  this->bIsReflectionCapture = false;
  this->bIsPlanarReflection = false;
  this->bExcludeFromSceneTextureExtents = false;
  (this->FirstPersonParams).Scale = 1.0;
  (this->FirstPersonParams).bUseParameters = false;
  *(undefined3 *)&(this->FirstPersonParams).field_0x9 = 0;
  (this->FirstPersonParams).FOVCorrectionFactor = 1.0;
  this->OverridePrimaryResolutionFraction = -1.0;
  this->OverscanResolutionFraction = 1.0;
  this->CropFraction = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.X = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.Y = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.Z = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.W = 1.0;
  return this;
}

