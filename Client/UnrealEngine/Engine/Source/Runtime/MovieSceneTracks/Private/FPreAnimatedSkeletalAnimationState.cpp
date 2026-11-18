// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// operator= @ 146810220

FPreAnimatedSkeletalAnimationState * __thiscall
UE::MovieScene::FPreAnimatedSkeletalAnimationState::operator=
          (FPreAnimatedSkeletalAnimationState *this,FPreAnimatedSkeletalAnimationState *param_1)

{
  FSkeletalMeshRestoreState *pFVar1;
  FSkeletalMeshRestoreState *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->SkeletalMeshRestoreState;
  this->AnimationMode = param_1->AnimationMode;
  pFVar2 = &this->SkeletalMeshRestoreState;
  (this->CachedAnimInstance).WeakPtr = (param_1->CachedAnimInstance).WeakPtr;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->SkeletalMeshCompEditorParams).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->SkeletalMeshCompEditorParams).AllocatorInstance.Data =
         (pFVar1->SkeletalMeshCompEditorParams).AllocatorInstance.Data;
    (pFVar1->SkeletalMeshCompEditorParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum =
         (param_1->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum;
    (this->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax =
         (param_1->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax;
    (param_1->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum = 0;
    (param_1->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax = 0;
  }
  return this;
}

