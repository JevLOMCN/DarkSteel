// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e4a50

FGLTFJsonAnimation * __thiscall
FGLTFAnimationDataConverter::Convert
          (FGLTFAnimationDataConverter *this,FGLTFJsonNode *param_1,USkeletalMeshComponent *param_2)

{
  TObjectPtr<UAnimationAsset>_u_0 TVar1;
  longlong lVar2;
  bool bVar3;
  Type TVar4;
  USkeletalMesh *pUVar5;
  UClass *pUVar6;
  FGLTFJsonAnimation *pFVar7;
  UAnimSequence *local_res20;
  TObjectPtr<UAnimationAsset>_u_0 local_28 [2];
  
  pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
  if ((pUVar5 != (USkeletalMesh *)0x0) &&
     ((param_2->AnimationData).AnimToPlay.field0_0x0.DebugPtr != (UAnimationAsset *)0x0)) {
    pUVar6 = Z_Construct_UClass_UAnimSequence_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_2->AnimationData,pUVar6);
    if ((bVar3) &&
       (((TVar1 = (TObjectPtr<UAnimationAsset>_u_0)
                  (param_2->AnimationData).AnimToPlay.field0_0x0.DebugPtr,
         (UAnimSequence *)TVar1.DebugPtr != (UAnimSequence *)0x0 &&
         (TVar4 = USkeletalMeshComponent::GetAnimationMode(param_2), TVar4 == AnimationSingleNode))
        && (lVar2 = *(longlong *)&this->field_0x58, param_1 != (FGLTFJsonNode *)0x0)))) {
      local_28[0] = TVar1;
      TSet<UAnimSequence_const_*,DefaultKeyFuncs<UAnimSequence_const_*,0>,FDefaultSetAllocator>::
      Emplace<UAnimSequence_const_*_const_&>
                ((TSet<UAnimSequence_const_*,DefaultKeyFuncs<UAnimSequence_const_*,0>,FDefaultSetAllocator>
                  *)(lVar2 + 0x5f8),&local_res20,(bool *)local_28);
      pFVar7 = TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
               ::GetOrAdd(*(TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
                            **)(lVar2 + 0x8c8),param_1,pUVar5,(UAnimSequence *)TVar1.DebugPtr);
      return pFVar7;
    }
  }
  return (FGLTFJsonAnimation *)0x0;
}

