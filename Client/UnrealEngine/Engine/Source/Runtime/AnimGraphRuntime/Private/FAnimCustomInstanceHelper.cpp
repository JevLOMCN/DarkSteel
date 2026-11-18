// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// ShouldCreateCustomInstancePlayer @ 14646b630

bool __cdecl
FAnimCustomInstanceHelper::ShouldCreateCustomInstancePlayer(USkeletalMeshComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  Type TVar4;
  USkeletalMesh *pUVar5;
  UClass *pUVar6;
  UAnimInstance *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  
  pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  pUVar9 = (UClass *)0x0;
  pUVar6 = pUVar9;
  if (pUVar5 != (USkeletalMesh *)0x0) {
    pUVar6 = (UClass *)(**(code **)(pUVar5->_padding_ + 0x400))(pUVar5);
  }
  pUVar7 = USkeletalMeshComponent::GetAnimInstance(param_1);
  if ((pUVar7 != (UAnimInstance *)0x0) &&
     (TVar4 = USkeletalMeshComponent::GetAnimationMode(param_1), TVar4 == AnimationBlueprint)) {
    pUVar2 = (param_1->AnimClass).Class.field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar8 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar9 = (param_1->AnimClass).Class.field0_0x0.DebugPtr;
      }
    }
    if (((*(UClass **)&pUVar7->field_0x10 == pUVar9) && (pUVar6 != (UClass *)0x0)) &&
       ((pUVar7->CurrentSkeleton).field0_0x0.DebugPtr != (USkeleton *)0x0)) {
      return false;
    }
  }
  return true;
}

