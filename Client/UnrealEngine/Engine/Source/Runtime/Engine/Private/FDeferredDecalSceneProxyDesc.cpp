// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FDeferredDecalSceneProxyDesc @ 1478a6ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDeferredDecalSceneProxyDesc * __thiscall
FDeferredDecalSceneProxyDesc::FDeferredDecalSceneProxyDesc
          (FDeferredDecalSceneProxyDesc *this,UDecalComponent *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FLinearColor FVar17;
  byte bVar18;
  double *pdVar19;
  longlong lVar20;
  UMaterial *pUVar21;
  double dVar22;
  undefined1 local_60 [88];
  
  this->Component = (UDecalComponent *)0x0;
  this->DecalMaterial = (UMaterialInterface *)0x0;
  *&(this->TransformWithDecalScale).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TransformWithDecalScale).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TransformWithDecalScale).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TransformWithDecalScale).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TransformWithDecalScale).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TransformWithDecalScale).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  FVar17 = FLinearColor::White;
  this->bDrawInGame = '\0';
  this->bDrawInEditor = '\0';
  this->bShouldFade = '\x01';
  this->InitializationWorldTimeSeconds = 0.0;
  this->FadeScreenSize = 0.0;
  this->FadeDuration = 0.0;
  this->FadeStartDelay = 0.0;
  this->FadeInDuration = 0.0;
  this->FadeInStartDelay = 0.0;
  this->Component = param_1;
  (this->DecalColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar17.field0_0x0;
  this->SortOrder = -1;
  pdVar19 = (double *)
            (**(code **)(*(longlong *)param_1 + 0x598))(param_1,local_60,&param_1->field_0x1f0);
  dVar2 = pdVar19[1];
  (this->Bounds).Origin.field0_0x0._s_0.X = *pdVar19;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = pdVar19[3];
  (this->Bounds).Origin.field0_0x0._s_0.Z = pdVar19[2];
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = pdVar19[5];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = pdVar19[4];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (this->Bounds).SphereRadius = pdVar19[6];
  dVar5 = *(double *)&param_1->field_0x230;
  dVar6 = *(double *)&param_1->field_0x240;
  dVar2 = (param_1->DecalSize).field0_0x0._s_0.X;
  dVar3 = (param_1->DecalSize).field0_0x0._s_0.Z;
  dVar10 = *(double *)&param_1->field_0x1f8;
  dVar11 = *(double *)&param_1->field_0x200;
  dVar12 = *(double *)&param_1->field_0x208;
  dVar13 = *(double *)&param_1->field_0x210;
  dVar14 = *(double *)&param_1->field_0x218;
  dVar15 = *(double *)&param_1->field_0x220;
  dVar16 = *(double *)&param_1->field_0x228;
  dVar22 = *(double *)&param_1->field_0x238 * (param_1->DecalSize).field0_0x0._s_0.Y;
  (this->TransformWithDecalScale).Rotation.XY.m128d_f64[0] = *(double *)&param_1->field_0x1f0;
  (this->TransformWithDecalScale).Rotation.XY.m128d_f64[1] = dVar10;
  (this->TransformWithDecalScale).Rotation.ZW.m128d_f64[0] = dVar11;
  (this->TransformWithDecalScale).Rotation.ZW.m128d_f64[1] = dVar12;
  (this->TransformWithDecalScale).Translation.XY.m128d_f64[0] = dVar13;
  (this->TransformWithDecalScale).Translation.XY.m128d_f64[1] = dVar14;
  (this->TransformWithDecalScale).Translation.ZW.m128d_f64[0] = dVar15;
  (this->TransformWithDecalScale).Translation.ZW.m128d_f64[1] = dVar16;
  auVar4._8_4_ = SUB84(dVar22,0);
  auVar4._0_8_ = dVar5 * dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(this->TransformWithDecalScale).Scale3D.XY.m128d_f64 = auVar4;
  (this->TransformWithDecalScale).Scale3D.ZW.m128d_f64[0] = dVar6 * dVar3;
  (this->TransformWithDecalScale).Scale3D.ZW.m128d_f64[1] = 0.0;
  fVar7 = (param_1->DecalColor).field0_0x0._s_0.G;
  fVar8 = (param_1->DecalColor).field0_0x0._s_0.B;
  fVar9 = (param_1->DecalColor).field0_0x0._s_0.A;
  (this->DecalColor).field0_0x0._s_0.R = (param_1->DecalColor).field0_0x0._s_0.R;
  (this->DecalColor).field0_0x0._s_0.G = fVar7;
  (this->DecalColor).field0_0x0._s_0.B = fVar8;
  (this->DecalColor).field0_0x0._s_0.A = fVar9;
  this->FadeScreenSize = param_1->FadeScreenSize;
  this->FadeDuration = param_1->FadeDuration;
  this->FadeStartDelay = param_1->FadeStartDelay;
  this->FadeInDuration = param_1->FadeInDuration;
  this->FadeInStartDelay = param_1->FadeInStartDelay;
  this->SortOrder = param_1->SortOrder;
  if (((param_1->field_0x1a8 & 0x20) == 0) || ((param_1->field_0x1a9 & 8) != 0)) {
    bVar18 = 0;
  }
  else {
    bVar18 = 1;
  }
  this->bDrawInGame = '\0';
  this->field_0xd4 = this->field_0xd4 | bVar18;
  this->field_0xd4 = ((byte)param_1->field_0x1a8 >> 4 ^ this->field_0xd4) & 2 ^ this->field_0xd4;
  pUVar21 = (UMaterial *)(param_1->DecalMaterial).field0_0x0.DebugPtr;
  if (pUVar21 != (UMaterial *)0x0) {
    lVar20 = (**(code **)(pUVar21->_padding_ + 0x2d8))(pUVar21);
    if (*(char *)(lVar20 + 0x148) == '\x01') goto LAB_1478a6d0e;
  }
  pUVar21 = UMaterial::GetDefaultMaterial(MD_DeferredDecal);
LAB_1478a6d0e:
  this->DecalMaterial = (UMaterialInterface *)pUVar21;
  if (*(longlong *)&param_1->field_0xa8 != 0) {
    this->field_0xd4 =
         this->field_0xd4 & ~(*(byte *)(*(longlong *)&param_1->field_0xa8 + 0x58) >> 7);
  }
  return this;
}

