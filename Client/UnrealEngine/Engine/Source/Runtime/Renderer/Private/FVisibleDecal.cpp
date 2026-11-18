// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FVisibleDecal @ 1447f5bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVisibleDecal * __thiscall
FVisibleDecal::FVisibleDecal
          (FVisibleDecal *this,FDeferredDecalProxy *param_1,float param_2,float param_3,
          EShaderPlatform param_4,Type param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  undefined8 uVar8;
  FDecalBlendDesc FVar9;
  FMaterialRenderProxy *pFVar10;
  FMaterial *pFVar11;
  
  pFVar10 = (FMaterialRenderProxy *)(**(code **)(param_1->DecalMaterial->_padding_ + 0x310))();
  this->MaterialProxy = pFVar10;
  this->Component = (ulong64)param_1->Component;
  uVar7 = param_1->SortOrder;
  (this->BlendDesc).Packed = 0;
  this->FadeAlpha = param_3;
  this->ConservativeRadius = param_2;
  this->SortOrder = uVar7;
  this->InvFadeDuration = param_1->InvFadeDuration;
  this->InvFadeInDuration = param_1->InvFadeInDuration;
  this->FadeStartDelayNormalized = param_1->FadeStartDelayNormalized;
  this->FadeInStartDelayNormalized = param_1->FadeInStartDelayNormalized;
  uVar8 = *(undefined8 *)((longlong)&(param_1->DecalColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DecalColor).field0_0x0 = *(undefined8 *)&(param_1->DecalColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DecalColor).field0_0x0 + 8) = uVar8;
  dVar1 = (param_1->ComponentTrans).Rotation.XY.m128d_f64[1];
  (this->ComponentTrans).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentTrans).Rotation.XY.m128d_f64[0];
  (this->ComponentTrans).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTrans).Rotation.ZW.m128d_f64[1];
  (this->ComponentTrans).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentTrans).Rotation.ZW.m128d_f64[0];
  (this->ComponentTrans).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTrans).Translation.XY.m128d_f64[1];
  (this->ComponentTrans).Translation.XY.m128d_f64[0] =
       (param_1->ComponentTrans).Translation.XY.m128d_f64[0];
  (this->ComponentTrans).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTrans).Translation.ZW.m128d_f64[1];
  (this->ComponentTrans).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentTrans).Translation.ZW.m128d_f64[0];
  (this->ComponentTrans).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTrans).Scale3D.XY.m128d_f64[1];
  (this->ComponentTrans).Scale3D.XY.m128d_f64[0] = (param_1->ComponentTrans).Scale3D.XY.m128d_f64[0]
  ;
  (this->ComponentTrans).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTrans).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[0] = (param_1->ComponentTrans).Scale3D.ZW.m128d_f64[0]
  ;
  (this->ComponentTrans).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  dVar2 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  dVar3 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  dVar4 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar6 = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->BoxBounds).Min.field0_0x0._s_0.X = dVar1 - dVar2;
  (this->BoxBounds).Min.field0_0x0._s_0.Y = dVar3 - dVar4;
  (this->BoxBounds).Min.field0_0x0._s_0.Z = dVar6 - dVar5;
  (this->BoxBounds).Max.field0_0x0._s_0.X = dVar1 + dVar2;
  (this->BoxBounds).Max.field0_0x0._s_0.Y = dVar3 + dVar4;
  (this->BoxBounds).Max.field0_0x0._s_0.Z = dVar6 + dVar5;
  (this->BoxBounds).IsValid = '\x01';
  pFVar11 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this->MaterialProxy,param_5);
  FVar9 = DecalRendering::ComputeDecalBlendDesc(param_4,pFVar11);
  this->BlendDesc = FVar9;
  return this;
}

