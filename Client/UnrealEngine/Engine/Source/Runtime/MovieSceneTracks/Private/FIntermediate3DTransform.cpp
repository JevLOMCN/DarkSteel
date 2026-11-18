// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// ApplyTo @ 14663e0d0

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
UE::MovieScene::FIntermediate3DTransform::ApplyTo
          (FIntermediate3DTransform *this,USceneComponent *param_1)

{
  ApplyTransformTo(param_1,this);
  return;
}

// ApplyTransformTo @ 14663e0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::FIntermediate3DTransform::ApplyTransformTo
          (USceneComponent *param_1,FIntermediate3DTransform *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  atomic<double> aVar6;
  double dVar7;
  
  aVar6 = FApp::DeltaTime;
  if ((double)FApp::DeltaTime <= 0.0) {
    SetComponentTransform(param_1,param_2);
    return;
  }
  dVar1 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dVar2 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
  dVar3 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
  SetComponentTransform(param_1,param_2);
  dVar4 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
  dVar5 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dVar7 = __real_3ff0000000000000 / (double)aVar6;
  (param_1->ComponentVelocity).field0_0x0._s_0.X =
       ((param_1->ComponentToWorld).Translation.XY.m128d_f64[0] - dVar2) * dVar7;
  (param_1->ComponentVelocity).field0_0x0._s_0.Y = (dVar4 - dVar3) * dVar7;
  (param_1->ComponentVelocity).field0_0x0._s_0.Z = (dVar5 - dVar1) * dVar7;
  return;
}

// ApplyTranslationAndRotationTo @ 14663e1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::FIntermediate3DTransform::ApplyTranslationAndRotationTo
          (USceneComponent *param_1,FIntermediate3DTransform *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  atomic<double> aVar6;
  double dVar7;
  
  aVar6 = FApp::DeltaTime;
  if ((double)FApp::DeltaTime <= 0.0) {
    SetComponentTranslationAndRotation(param_1,param_2);
    return;
  }
  dVar1 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dVar2 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
  dVar3 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
  SetComponentTranslationAndRotation(param_1,param_2);
  dVar4 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
  dVar5 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dVar7 = __real_3ff0000000000000 / (double)aVar6;
  (param_1->ComponentVelocity).field0_0x0._s_0.X =
       ((param_1->ComponentToWorld).Translation.XY.m128d_f64[0] - dVar2) * dVar7;
  (param_1->ComponentVelocity).field0_0x0._s_0.Y = (dVar4 - dVar3) * dVar7;
  (param_1->ComponentVelocity).field0_0x0._s_0.Z = (dVar5 - dVar1) * dVar7;
  return;
}

