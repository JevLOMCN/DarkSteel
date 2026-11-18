// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ApplyAttach @ 14663df50

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
UE::MovieScene::FComponentAttachParams::ApplyAttach
          (FComponentAttachParams *this,USceneComponent *param_1,USceneComponent *param_2,
          FName *param_3)

{
  USceneComponent *pUVar1;
  double dVar2;
  double *pdVar3;
  EAttachmentRule local_res10;
  EAttachmentRule local_res11;
  EAttachmentRule local_res12;
  undefined1 local_res13;
  FMovieSceneScopedPackageDirtyGuard local_28;
  
  if (((param_1->AttachParent).field0_0x0.DebugPtr != param_2) ||
     (param_1->AttachSocketName != *param_3)) {
    MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::FMovieSceneScopedPackageDirtyGuard
              (&local_28,param_1);
    local_res10 = this->AttachmentLocationRule;
    local_res11 = this->AttachmentRotationRule;
    local_res12 = this->AttachmentScaleRule;
    local_res13 = 0;
    (**(code **)(param_1->_padding_ + 0x508))(param_1,param_2,&local_res10,*param_3);
    MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::~FMovieSceneScopedPackageDirtyGuard
              (&local_28);
  }
  pUVar1 = (param_1->AttachParent).field0_0x0.DebugPtr;
  if (pUVar1 != (USceneComponent *)0x0) {
    pdVar3 = (double *)(**(code **)(pUVar1->_padding_ + 0x558))(pUVar1,&local_28);
    dVar2 = pdVar3[1];
    (param_1->ComponentVelocity).field0_0x0._s_0.X = *pdVar3;
    (param_1->ComponentVelocity).field0_0x0._s_0.Y = dVar2;
    (param_1->ComponentVelocity).field0_0x0._s_0.Z = pdVar3[2];
  }
  return;
}

