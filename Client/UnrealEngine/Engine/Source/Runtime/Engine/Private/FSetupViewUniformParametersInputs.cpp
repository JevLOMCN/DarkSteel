// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Create @ 14851fb60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSetupViewUniformParametersInputs * __cdecl
FSetupViewUniformParametersInputs::Create
          (FSetupViewUniformParametersInputs *__return_storage_ptr__,FSceneView *param_1)

{
  FSceneViewFamily *pFVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  EDebugViewShaderMode EVar6;
  
  __return_storage_ptr__->EngineShowFlags = &param_1->Family->EngineShowFlags;
  (__return_storage_ptr__->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0;
  (__return_storage_ptr__->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar1 = param_1->Family;
  dVar2 = (pFVar1->Time).WorldTimeSeconds;
  (__return_storage_ptr__->Time).RealTimeSeconds = (pFVar1->Time).RealTimeSeconds;
  (__return_storage_ptr__->Time).WorldTimeSeconds = dVar2;
  fVar5 = (pFVar1->Time).DeltaWorldTimeSeconds;
  (__return_storage_ptr__->Time).DeltaRealTimeSeconds = (pFVar1->Time).DeltaRealTimeSeconds;
  (__return_storage_ptr__->Time).DeltaWorldTimeSeconds = fVar5;
  (__return_storage_ptr__->CursorPosition).field0_0x0 = (param_1->CursorPos).field0_0x0;
  lVar3 = (param_1->GlobalClippingPlane)._padding_;
  (__return_storage_ptr__->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_
  ;
  (__return_storage_ptr__->GlobalClippingPlane)._padding_ = lVar3;
  dVar2 = (param_1->GlobalClippingPlane).W;
  (__return_storage_ptr__->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_
  ;
  (__return_storage_ptr__->GlobalClippingPlane).W = dVar2;
  uVar4 = *(undefined8 *)((longlong)&(param_1->InvDeviceZToWorldZTransform).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->InvDeviceZToWorldZTransform).field0_0x0 =
       *(undefined8 *)&(param_1->InvDeviceZToWorldZTransform).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->InvDeviceZToWorldZTransform).field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->DiffuseOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->DiffuseOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->DiffuseOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->DiffuseOverrideParameter).field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->NormalOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->NormalOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->NormalOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->NormalOverrideParameter).field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->SpecularOverrideParameter).field0_0x0 =
       *(undefined8 *)&(param_1->SpecularOverrideParameter).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecularOverrideParameter).field0_0x0 + 8) =
       uVar4;
  (__return_storage_ptr__->RoughnessOverrideParameter).field0_0x0 =
       (param_1->RoughnessOverrideParameter).field0_0x0;
  (__return_storage_ptr__->AmbientOcclusionOverrideParameter).field0_0x0 =
       (param_1->AmbientOcclusionOverrideParameter).field0_0x0;
  EVar6 = FSceneViewFamily::GetDebugViewShaderMode(param_1->Family);
  __return_storage_ptr__->DebugViewShaderMode = EVar6;
  __return_storage_ptr__->FrameCounter = param_1->Family->FrameCounter;
  __return_storage_ptr__->FrameNumber = param_1->Family->FrameNumber;
  __return_storage_ptr__->FOV = param_1->FOV;
  __return_storage_ptr__->MotionBlurMax = *(float *)&(param_1->FinalPostProcessSettings).field_0x6dc
  ;
  __return_storage_ptr__->bNullifyWorldSpacePosition = false;
  __return_storage_ptr__->bReverseCulling = param_1->bReverseCulling;
  __return_storage_ptr__->bCameraCut = param_1->bCameraCut;
  __return_storage_ptr__->bWorldIsPaused = param_1->Family->bWorldIsPaused;
  return __return_storage_ptr__;
}

