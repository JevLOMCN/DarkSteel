// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FDeferredDecalProxy @ 1478a64a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDeferredDecalProxy * __thiscall
FDeferredDecalProxy::FDeferredDecalProxy
          (FDeferredDecalProxy *this,FDeferredDecalSceneProxyDesc *param_1)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  double dVar11;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Scale3D.ZW.m128d_f64 = auVar9;
  this->DrawInGame = param_1->bDrawInGame;
  this->InvFadeDuration = -1.0;
  this->InvFadeInDuration = 1.0;
  this->FadeStartDelayNormalized = 1.0;
  this->FadeInStartDelayNormalized = 0.0;
  this->DrawInEditor = param_1->bDrawInEditor;
  this->FadeScreenSize = param_1->FadeScreenSize;
  uVar10 = *(undefined8 *)((longlong)&(param_1->DecalColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DecalColor).field0_0x0 = *(undefined8 *)&(param_1->DecalColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DecalColor).field0_0x0 + 8) = uVar10;
  this->Component = (USceneComponent *)param_1->Component;
  this->DecalMaterial = param_1->DecalMaterial;
  dVar11 = (param_1->TransformWithDecalScale).Rotation.XY.m128d_f64[1];
  (this->ComponentTrans).Rotation.XY.m128d_f64[0] =
       (param_1->TransformWithDecalScale).Rotation.XY.m128d_f64[0];
  (this->ComponentTrans).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->TransformWithDecalScale).Rotation.ZW.m128d_f64[1];
  (this->ComponentTrans).Rotation.ZW.m128d_f64[0] =
       (param_1->TransformWithDecalScale).Rotation.ZW.m128d_f64[0];
  (this->ComponentTrans).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->TransformWithDecalScale).Translation.XY.m128d_f64[1];
  (this->ComponentTrans).Translation.XY.m128d_f64[0] =
       (param_1->TransformWithDecalScale).Translation.XY.m128d_f64[0];
  (this->ComponentTrans).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->TransformWithDecalScale).Translation.ZW.m128d_f64[1];
  (this->ComponentTrans).Translation.ZW.m128d_f64[0] =
       (param_1->TransformWithDecalScale).Translation.ZW.m128d_f64[0];
  (this->ComponentTrans).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->TransformWithDecalScale).Scale3D.XY.m128d_f64[1];
  (this->ComponentTrans).Scale3D.XY.m128d_f64[0] =
       (param_1->TransformWithDecalScale).Scale3D.XY.m128d_f64[0];
  (this->ComponentTrans).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->TransformWithDecalScale).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[0] =
       (param_1->TransformWithDecalScale).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar11;
  dVar11 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar11;
  dVar11 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar11;
  (this->Bounds).SphereRadius = (param_1->Bounds).SphereRadius;
  this->SortOrder = param_1->SortOrder;
  if (param_1->bShouldFade != '\0') {
    InitializeFadingParameters
              (this,param_1->InitializationWorldTimeSeconds,param_1->FadeDuration,
               param_1->FadeStartDelay,param_1->FadeInDuration,param_1->FadeInStartDelay);
  }
  return this;
}

// FDeferredDecalProxy @ 1478a6620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDeferredDecalProxy * __thiscall
FDeferredDecalProxy::FDeferredDecalProxy(FDeferredDecalProxy *this,UDecalComponent *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  UMaterial *pUVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  UMaterial *pUVar27;
  longlong lVar28;
  double *pdVar29;
  UWorld *pUVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  undefined1 local_90 [120];
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Scale3D.ZW.m128d_f64 = auVar14;
  if (((param_1->field_0x1a8 & 0x20) == 0) || ((param_1->field_0x1a9 & 8) != 0)) {
    bVar26 = false;
  }
  else {
    bVar26 = true;
  }
  this->DrawInGame = bVar26;
  bVar7 = param_1->field_0x1a8;
  this->InvFadeDuration = -1.0;
  this->InvFadeInDuration = 1.0;
  this->FadeStartDelayNormalized = 1.0;
  this->FadeInStartDelayNormalized = 0.0;
  this->DrawInEditor = (bool)(bVar7 >> 5 & 1);
  this->FadeScreenSize = param_1->FadeScreenSize;
  uVar18 = *(undefined8 *)((longlong)&(param_1->DecalColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DecalColor).field0_0x0 = *(undefined8 *)&(param_1->DecalColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DecalColor).field0_0x0 + 8) = uVar18;
  pUVar27 = UMaterial::GetDefaultMaterial(MD_DeferredDecal);
  pUVar8 = (UMaterial *)(param_1->DecalMaterial).field0_0x0.DebugPtr;
  if (pUVar8 != (UMaterial *)0x0) {
    lVar28 = (**(code **)(pUVar8->_padding_ + 0x2d8))(pUVar8);
    if (*(char *)(lVar28 + 0x148) == '\x01') {
      pUVar27 = pUVar8;
    }
  }
  this->DecalMaterial = (UMaterialInterface *)pUVar27;
  this->Component = (USceneComponent *)param_1;
  pdVar29 = (double *)
            (**(code **)(*(longlong *)param_1 + 0x598))(param_1,local_90,&param_1->field_0x1f0);
  dVar16 = *(double *)&param_1->field_0x230;
  dVar17 = *(double *)&param_1->field_0x240;
  dVar5 = (param_1->DecalSize).field0_0x0._s_0.X;
  dVar6 = (param_1->DecalSize).field0_0x0._s_0.Z;
  dVar19 = *(double *)&param_1->field_0x210;
  dVar20 = *(double *)&param_1->field_0x218;
  dVar21 = *(double *)&param_1->field_0x220;
  dVar22 = *(double *)&param_1->field_0x228;
  dVar23 = *(double *)&param_1->field_0x1f8;
  dVar24 = *(double *)&param_1->field_0x200;
  dVar25 = *(double *)&param_1->field_0x208;
  dVar33 = *(double *)&param_1->field_0x238 * (param_1->DecalSize).field0_0x0._s_0.Y;
  (this->ComponentTrans).Rotation.XY.m128d_f64[0] = *(double *)&param_1->field_0x1f0;
  (this->ComponentTrans).Rotation.XY.m128d_f64[1] = dVar23;
  (this->ComponentTrans).Rotation.ZW.m128d_f64[0] = dVar24;
  (this->ComponentTrans).Rotation.ZW.m128d_f64[1] = dVar25;
  (this->ComponentTrans).Translation.XY.m128d_f64[0] = dVar19;
  (this->ComponentTrans).Translation.XY.m128d_f64[1] = dVar20;
  (this->ComponentTrans).Translation.ZW.m128d_f64[0] = dVar21;
  (this->ComponentTrans).Translation.ZW.m128d_f64[1] = dVar22;
  auVar15._8_4_ = SUB84(dVar33,0);
  auVar15._0_8_ = dVar16 * dVar5;
  auVar15._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Scale3D.XY.m128d_f64 = auVar15;
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[0] = dVar17 * dVar6;
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[1] = 0.0;
  dVar5 = pdVar29[1];
  (this->Bounds).Origin.field0_0x0._s_0.X = *pdVar29;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar5;
  dVar5 = pdVar29[3];
  (this->Bounds).Origin.field0_0x0._s_0.Z = pdVar29[2];
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar5;
  dVar5 = pdVar29[5];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = pdVar29[4];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar5;
  (this->Bounds).SphereRadius = pdVar29[6];
  this->SortOrder = param_1->SortOrder;
  pUVar30 = *(UWorld **)&param_1->field_0xb0;
  fVar1 = param_1->FadeInStartDelay;
  fVar2 = param_1->FadeInDuration;
  fVar3 = param_1->FadeStartDelay;
  fVar4 = param_1->FadeDuration;
  if (pUVar30 == (UWorld *)0x0) {
    pUVar30 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  fVar32 = __real_3f800000;
  dVar5 = pUVar30->TimeSeconds;
  if (0.0 < fVar4) {
    fVar31 = __real_3f800000 / fVar4;
    this->InvFadeDuration = fVar31;
    this->FadeStartDelayNormalized = (fVar3 + (float)dVar5 + fVar4) * fVar31;
  }
  if (0.0 < fVar2) {
    fVar32 = fVar32 / fVar2;
    this->InvFadeInDuration = fVar32;
    this->FadeInStartDelayNormalized =
         (float)((uint)((fVar1 + (float)dVar5) * fVar32) ^ __xmm_80000000800000008000000080000000);
  }
  if (*(longlong *)&param_1->field_0xa8 != 0) {
    this->DrawInGame =
         (bool)(this->DrawInGame & (byte)~*(byte *)(*(longlong *)&param_1->field_0xa8 + 0x58) >> 7);
  }
  return this;
}

// FDeferredDecalProxy @ 1478a68d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDeferredDecalProxy * __thiscall
FDeferredDecalProxy::FDeferredDecalProxy
          (FDeferredDecalProxy *this,USceneComponent *param_1,UMaterialInterface *param_2)

{
  double dVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  FLinearColor FVar11;
  bool bVar12;
  longlong lVar13;
  UMaterial *pUVar14;
  double *pdVar15;
  UWorld *pUVar16;
  undefined1 local_48 [64];
  
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTrans).Scale3D.ZW.m128d_f64 = auVar10;
  if ((param_1->bVisible == '\0') || (param_1->bHiddenInGame != '\0')) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  this->DrawInGame = bVar12;
  this->InvFadeDuration = -1.0;
  this->DrawInEditor = param_1->bVisible;
  this->InvFadeInDuration = 1.0;
  this->FadeStartDelayNormalized = 1.0;
  this->FadeInStartDelayNormalized = 0.0;
  this->FadeScreenSize = 0.1;
  FVar11 = FLinearColor::White;
  this->Component = param_1;
  this->DecalMaterial = param_2;
  (this->DecalColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar11.field0_0x0;
  if ((param_2 == (UMaterialInterface *)0x0) ||
     (lVar13 = (**(code **)(param_2->_padding_ + 0x2d8))(param_2),
     *(char *)(lVar13 + 0x148) != '\x01')) {
    pUVar14 = UMaterial::GetDefaultMaterial(MD_DeferredDecal);
    this->DecalMaterial = (UMaterialInterface *)pUVar14;
  }
  pdVar15 = (double *)
            (**(code **)(param_1->_padding_ + 0x598))(param_1,local_48,&param_1->ComponentToWorld);
  *&(this->ComponentTrans).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ComponentTrans).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ComponentTrans).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ComponentTrans).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ComponentTrans).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ComponentTrans).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  dVar1 = pdVar15[1];
  (this->Bounds).Origin.field0_0x0._s_0.X = *pdVar15;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = pdVar15[3];
  (this->Bounds).Origin.field0_0x0._s_0.Z = pdVar15[2];
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = pdVar15[5];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = pdVar15[4];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->Bounds).SphereRadius = pdVar15[6];
  this->SortOrder = 0;
  pUVar16 = (UWorld *)param_1->_padding_;
  if (pUVar16 == (UWorld *)0x0) {
    pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  dVar1 = pUVar16->TimeSeconds;
  this->InvFadeDuration = 1.0;
  this->FadeStartDelayNormalized = (float)dVar1 + __real_40000000;
  if (param_1->_padding_ != 0) {
    this->DrawInGame = (bool)((byte)~*(byte *)(param_1->_padding_ + 0x58) >> 7 & this->DrawInGame);
  }
  return this;
}

// InitializeFadingParameters @ 1478dff20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDeferredDecalProxy::InitializeFadingParameters
          (FDeferredDecalProxy *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  if (0.0 < param_2) {
    fVar2 = __real_3f800000 / param_2;
    this->InvFadeDuration = fVar2;
    this->FadeStartDelayNormalized = (param_1 + param_3 + param_2) * fVar2;
  }
  if (0.0 < param_4) {
    this->InvFadeInDuration = fVar1 / param_4;
    this->FadeInStartDelayNormalized =
         (float)((uint)((param_1 + param_5) * (fVar1 / param_4)) ^
                __xmm_80000000800000008000000080000000);
  }
  return;
}

// IsShown @ 1478e1a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FDeferredDecalProxy::IsShown(FDeferredDecalProxy *this,FSceneView *param_1)

{
  return this->DrawInGame != false;
}

// SetTransformIncludingDecalSize @ 1478f5970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDeferredDecalProxy::SetTransformIncludingDecalSize
          (FDeferredDecalProxy *this,TTransform<double> *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->ComponentTrans).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->ComponentTrans).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->ComponentTrans).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->ComponentTrans).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->ComponentTrans).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->ComponentTrans).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->ComponentTrans).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->ComponentTrans).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->ComponentTrans).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->ComponentTrans).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_2->BoxExtent).field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->Bounds).SphereRadius = param_2->SphereRadius;
  return;
}

