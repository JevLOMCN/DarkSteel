// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ApplyDetach @ 14663e020

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
UE::MovieScene::FComponentDetachParams::ApplyDetach
          (FComponentDetachParams *this,USceneComponent *param_1,USceneComponent *param_2,
          FName *param_3)

{
  EDetachmentRule local_res18;
  EDetachmentRule local_res19;
  EDetachmentRule local_res1a;
  undefined1 local_res1b;
  FMovieSceneScopedPackageDirtyGuard local_28;
  
  if (param_2 == (USceneComponent *)0x0) {
    MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::FMovieSceneScopedPackageDirtyGuard
              (&local_28,param_1);
    local_res18 = this->DetachmentLocationRule;
    local_res19 = this->DetachmentRotationRule;
    local_res1a = this->DetachmentScaleRule;
    local_res1b = 0;
    (**(code **)(param_1->_padding_ + 0x518))(param_1,&local_res18);
  }
  else {
    MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::FMovieSceneScopedPackageDirtyGuard
              (&local_28,param_1);
    (**(code **)(param_1->_padding_ + 0x508))
              (param_1,param_2,&FAttachmentTransformRules::KeepRelativeTransform,*param_3);
  }
  MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::~FMovieSceneScopedPackageDirtyGuard
            (&local_28);
  return;
}

