// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 4

// GetAspectRatioAxisConstraintOverride @ 146c53670

TOptional<EAspectRatioAxisConstraint> __thiscall
UE::MovieScene::FCameraCutPlaybackCapability::GetAspectRatioAxisConstraintOverride
          (FCameraCutPlaybackCapability *this)

{
  TOptional<EAspectRatioAxisConstraint> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetCameraBlendPlayRate @ 146c53f90

float __thiscall
UE::MovieScene::FCameraCutPlaybackCapability::GetCameraBlendPlayRate
          (FCameraCutPlaybackCapability *this)

{
  return __real_3f800000;
}

// OnCameraCutUpdated @ 146c57cc0

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
UE::MovieScene::FCameraCutPlaybackCapability::OnCameraCutUpdated
          (FCameraCutPlaybackCapability *this,FOnCameraCutUpdatedParams *param_1)

{
  return;
}

// ShouldUpdateCameraCut @ 146c5b720

bool __thiscall
UE::MovieScene::FCameraCutPlaybackCapability::ShouldUpdateCameraCut
          (FCameraCutPlaybackCapability *this)

{
  return true;
}

