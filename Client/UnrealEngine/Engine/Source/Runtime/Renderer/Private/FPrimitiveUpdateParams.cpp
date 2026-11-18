// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FPrimitiveUpdateParams @ 1453fdab0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveUpdateParams * __thiscall
FScene::FPrimitiveUpdateParams::FPrimitiveUpdateParams
          (FPrimitiveUpdateParams *this,FPrimitiveUpdateParams *param_1)

{
  bool bVar1;
  double dVar2;
  
  this->Scene = param_1->Scene;
  this->PrimitiveSceneProxy = param_1->PrimitiveSceneProxy;
  dVar2 = (param_1->WorldBounds).Origin.field0_0x0._s_0.Y;
  (this->WorldBounds).Origin.field0_0x0._s_0.X = (param_1->WorldBounds).Origin.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Z = (param_1->WorldBounds).Origin.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (this->WorldBounds).SphereRadius = (param_1->WorldBounds).SphereRadius;
  dVar2 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  dVar2 = (param_1->LocalToWorld).M[0][1];
  (this->LocalToWorld).M[0][0] = (param_1->LocalToWorld).M[0][0];
  (this->LocalToWorld).M[0][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[0][3];
  (this->LocalToWorld).M[0][2] = (param_1->LocalToWorld).M[0][2];
  (this->LocalToWorld).M[0][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][1];
  (this->LocalToWorld).M[1][0] = (param_1->LocalToWorld).M[1][0];
  (this->LocalToWorld).M[1][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][3];
  (this->LocalToWorld).M[1][2] = (param_1->LocalToWorld).M[1][2];
  (this->LocalToWorld).M[1][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][1];
  (this->LocalToWorld).M[2][0] = (param_1->LocalToWorld).M[2][0];
  (this->LocalToWorld).M[2][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][3];
  (this->LocalToWorld).M[2][2] = (param_1->LocalToWorld).M[2][2];
  (this->LocalToWorld).M[2][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][1];
  (this->LocalToWorld).M[3][0] = (param_1->LocalToWorld).M[3][0];
  (this->LocalToWorld).M[3][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][3];
  (this->LocalToWorld).M[3][2] = (param_1->LocalToWorld).M[3][2];
  (this->LocalToWorld).M[3][3] = dVar2;
  (this->PreviousTransform).bIsSet = false;
  bVar1 = (param_1->PreviousTransform).bIsSet;
  (this->PreviousTransform).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar2 = (param_1->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Translation.XY.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Translation.XY.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  dVar2 = (param_1->AttachmentRootPosition).field0_0x0._s_0.Y;
  (this->AttachmentRootPosition).field0_0x0._s_0.X =
       (param_1->AttachmentRootPosition).field0_0x0._s_0.X;
  (this->AttachmentRootPosition).field0_0x0._s_0.Y = dVar2;
  (this->AttachmentRootPosition).field0_0x0._s_0.Z =
       (param_1->AttachmentRootPosition).field0_0x0._s_0.Z;
  return this;
}

// FPrimitiveUpdateParams @ 1453fdc10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveUpdateParams * __thiscall
FScene::FPrimitiveUpdateParams::FPrimitiveUpdateParams
          (FPrimitiveUpdateParams *this,FPrimitiveUpdateParams *param_1)

{
  bool bVar1;
  double dVar2;
  
  this->Scene = param_1->Scene;
  this->PrimitiveSceneProxy = param_1->PrimitiveSceneProxy;
  dVar2 = (param_1->WorldBounds).Origin.field0_0x0._s_0.Y;
  (this->WorldBounds).Origin.field0_0x0._s_0.X = (param_1->WorldBounds).Origin.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Z = (param_1->WorldBounds).Origin.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (this->WorldBounds).SphereRadius = (param_1->WorldBounds).SphereRadius;
  dVar2 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  dVar2 = (param_1->LocalToWorld).M[0][1];
  (this->LocalToWorld).M[0][0] = (param_1->LocalToWorld).M[0][0];
  (this->LocalToWorld).M[0][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[0][3];
  (this->LocalToWorld).M[0][2] = (param_1->LocalToWorld).M[0][2];
  (this->LocalToWorld).M[0][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][1];
  (this->LocalToWorld).M[1][0] = (param_1->LocalToWorld).M[1][0];
  (this->LocalToWorld).M[1][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][3];
  (this->LocalToWorld).M[1][2] = (param_1->LocalToWorld).M[1][2];
  (this->LocalToWorld).M[1][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][1];
  (this->LocalToWorld).M[2][0] = (param_1->LocalToWorld).M[2][0];
  (this->LocalToWorld).M[2][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][3];
  (this->LocalToWorld).M[2][2] = (param_1->LocalToWorld).M[2][2];
  (this->LocalToWorld).M[2][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][1];
  (this->LocalToWorld).M[3][0] = (param_1->LocalToWorld).M[3][0];
  (this->LocalToWorld).M[3][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][3];
  (this->LocalToWorld).M[3][2] = (param_1->LocalToWorld).M[3][2];
  (this->LocalToWorld).M[3][3] = dVar2;
  (this->PreviousTransform).bIsSet = false;
  bVar1 = (param_1->PreviousTransform).bIsSet;
  (this->PreviousTransform).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar2 = (param_1->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Translation.XY.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Translation.XY.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  dVar2 = (param_1->AttachmentRootPosition).field0_0x0._s_0.Y;
  (this->AttachmentRootPosition).field0_0x0._s_0.X =
       (param_1->AttachmentRootPosition).field0_0x0._s_0.X;
  (this->AttachmentRootPosition).field0_0x0._s_0.Y = dVar2;
  (this->AttachmentRootPosition).field0_0x0._s_0.Z =
       (param_1->AttachmentRootPosition).field0_0x0._s_0.Z;
  return this;
}

// operator= @ 145407f70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveUpdateParams * __thiscall
FScene::FPrimitiveUpdateParams::operator=
          (FPrimitiveUpdateParams *this,FPrimitiveUpdateParams *param_1)

{
  double dVar1;
  
  this->Scene = param_1->Scene;
  this->PrimitiveSceneProxy = param_1->PrimitiveSceneProxy;
  dVar1 = (param_1->WorldBounds).Origin.field0_0x0._s_0.Y;
  (this->WorldBounds).Origin.field0_0x0._s_0.X = (param_1->WorldBounds).Origin.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Z = (param_1->WorldBounds).Origin.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->WorldBounds).SphereRadius = (param_1->WorldBounds).SphereRadius;
  dVar1 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  dVar1 = (param_1->LocalToWorld).M[0][1];
  (this->LocalToWorld).M[0][0] = (param_1->LocalToWorld).M[0][0];
  (this->LocalToWorld).M[0][1] = dVar1;
  dVar1 = (param_1->LocalToWorld).M[0][3];
  (this->LocalToWorld).M[0][2] = (param_1->LocalToWorld).M[0][2];
  (this->LocalToWorld).M[0][3] = dVar1;
  dVar1 = (param_1->LocalToWorld).M[1][1];
  (this->LocalToWorld).M[1][0] = (param_1->LocalToWorld).M[1][0];
  (this->LocalToWorld).M[1][1] = dVar1;
  dVar1 = (param_1->LocalToWorld).M[1][3];
  (this->LocalToWorld).M[1][2] = (param_1->LocalToWorld).M[1][2];
  (this->LocalToWorld).M[1][3] = dVar1;
  dVar1 = (param_1->LocalToWorld).M[2][1];
  (this->LocalToWorld).M[2][0] = (param_1->LocalToWorld).M[2][0];
  (this->LocalToWorld).M[2][1] = dVar1;
  dVar1 = (param_1->LocalToWorld).M[2][3];
  (this->LocalToWorld).M[2][2] = (param_1->LocalToWorld).M[2][2];
  (this->LocalToWorld).M[2][3] = dVar1;
  dVar1 = (param_1->LocalToWorld).M[3][1];
  (this->LocalToWorld).M[3][0] = (param_1->LocalToWorld).M[3][0];
  (this->LocalToWorld).M[3][1] = dVar1;
  dVar1 = (param_1->LocalToWorld).M[3][3];
  (this->LocalToWorld).M[3][2] = (param_1->LocalToWorld).M[3][2];
  (this->LocalToWorld).M[3][3] = dVar1;
  if (&param_1->PreviousTransform != &this->PreviousTransform) {
    if ((param_1->PreviousTransform).bIsSet == false) {
      if ((this->PreviousTransform).bIsSet != false) {
        (this->PreviousTransform).bIsSet = false;
      }
    }
    else {
      dVar1 = (param_1->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[1];
      (this->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           (param_1->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[0];
      (this->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[1];
      (this->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           (param_1->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[0];
      (this->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousTransform).TypedValue.Translation.XY.m128d_f64[1];
      (this->PreviousTransform).TypedValue.Translation.XY.m128d_f64[0] =
           (param_1->PreviousTransform).TypedValue.Translation.XY.m128d_f64[0];
      (this->PreviousTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[1];
      (this->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           (param_1->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[0];
      (this->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[1];
      (this->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           (param_1->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[0];
      (this->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
      (this->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           (param_1->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
      (this->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar1;
      (this->PreviousTransform).bIsSet = true;
    }
  }
  dVar1 = (param_1->AttachmentRootPosition).field0_0x0._s_0.Y;
  (this->AttachmentRootPosition).field0_0x0._s_0.X =
       (param_1->AttachmentRootPosition).field0_0x0._s_0.X;
  (this->AttachmentRootPosition).field0_0x0._s_0.Y = dVar1;
  (this->AttachmentRootPosition).field0_0x0._s_0.Z =
       (param_1->AttachmentRootPosition).field0_0x0._s_0.Z;
  return this;
}

