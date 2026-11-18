// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 146863e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits::RestorePreAnimatedValue
          (FPreAnimatedSkeletalAnimationMontageTraits *this,FObjectKey *param_1,
          FPreAnimatedSkeletalAnimationMontageState *param_2,FRestoreStateParams *param_3)

{
  UAnimInstance *this_00;
  FAnimMontageInstance *this_01;
  FAlphaBlend *pFVar1;
  FAlphaBlend local_38;
  
  this_00 = (UAnimInstance *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
  if (this_00 != (UAnimInstance *)0x0) {
    this_01 = UAnimInstance::GetMontageInstanceForID(this_00,param_2->MontageInstanceId);
    if (this_01 != (FAnimMontageInstance *)0x0) {
      pFVar1 = FAlphaBlend::FAlphaBlend(&local_38,0.0);
      FAnimMontageInstance::Stop(this_01,pFVar1,false);
    }
  }
  return;
}

