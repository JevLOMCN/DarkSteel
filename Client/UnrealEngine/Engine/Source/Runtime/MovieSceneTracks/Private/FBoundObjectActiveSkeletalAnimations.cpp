// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FBoundObjectActiveSkeletalAnimations @ 1468079d0

/* WARNING: Type propagation algorithm not settling */

FBoundObjectActiveSkeletalAnimations * __thiscall
UE::MovieScene::FBoundObjectActiveSkeletalAnimations::FBoundObjectActiveSkeletalAnimations
          (FBoundObjectActiveSkeletalAnimations *this,FBoundObjectActiveSkeletalAnimations *param_1)

{
  bool bVar1;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar2;
  double dVar3;
  
  (this->Animations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0;
  if ((param_1->Animations).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    memmove(this,param_1,0x160);
  }
  FVar2 = (this->Animations).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Animations).AllocatorInstance.SecondaryData =
       (param_1->Animations).AllocatorInstance.SecondaryData;
  (param_1->Animations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0;
  (this->Animations).ArrayNum = (param_1->Animations).ArrayNum;
  (this->Animations).ArrayMax = (param_1->Animations).ArrayMax;
  (param_1->Animations).ArrayNum = 0;
  (param_1->Animations).ArrayMax = 2;
  (this->SimulatedAnimations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0;
  if ((param_1->SimulatedAnimations).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    memmove(&this->SimulatedAnimations,&param_1->SimulatedAnimations,0x160);
  }
  FVar2 = (this->SimulatedAnimations).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->SimulatedAnimations).AllocatorInstance.SecondaryData =
       (param_1->SimulatedAnimations).AllocatorInstance.SecondaryData;
  (param_1->SimulatedAnimations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0;
  (this->SimulatedAnimations).ArrayNum = (param_1->SimulatedAnimations).ArrayNum;
  (this->SimulatedAnimations).ArrayMax = (param_1->SimulatedAnimations).ArrayMax;
  (param_1->SimulatedAnimations).ArrayNum = 0;
  (param_1->SimulatedAnimations).ArrayMax = 2;
  (this->BoneTransformFinalizeData).SkeletalMeshComponent.WeakPtr =
       (param_1->BoneTransformFinalizeData).SkeletalMeshComponent.WeakPtr;
  (this->BoneTransformFinalizeData).SwapRootBone = (param_1->BoneTransformFinalizeData).SwapRootBone
  ;
  dVar3 = (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.XY.m128d_f64
          [1];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.XY.m128d_f64[0] =
       (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.XY.m128d_f64[0]
  ;
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.XY.m128d_f64[1] = dVar3
  ;
  dVar3 = (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.ZW.m128d_f64
          [1];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.ZW.m128d_f64[0]
  ;
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Rotation.ZW.m128d_f64[1] = dVar3
  ;
  dVar3 = (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.XY.
          m128d_f64[1];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.XY.m128d_f64[0] =
       (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.XY.m128d_f64
       [0];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.XY.m128d_f64[1] =
       dVar3;
  dVar3 = (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.ZW.
          m128d_f64[1];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.ZW.m128d_f64[0] =
       (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.ZW.m128d_f64
       [0];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Translation.ZW.m128d_f64[1] =
       dVar3;
  dVar3 = (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.XY.m128d_f64
          [1];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.XY.m128d_f64[0];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.ZW.m128d_f64
          [1];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (this->BoneTransformFinalizeData).MeshRelativeRootMotionTransform.Scale3D.ZW.m128d_f64[1] = dVar3;
  (this->BoneTransformFinalizeData).InitialActorTransform.bIsSet = false;
  bVar1 = (param_1->BoneTransformFinalizeData).InitialActorTransform.bIsSet;
  (this->BoneTransformFinalizeData).InitialActorTransform.bIsSet = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.XY.
            m128d_f64[1];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.XY.m128d_f64
         [0];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.XY.m128d_f64[1] =
         dVar3;
    dVar3 = (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.ZW.
            m128d_f64[1];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.ZW.m128d_f64
         [0];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Rotation.ZW.m128d_f64[1] =
         dVar3;
    dVar3 = (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.XY.
            m128d_f64[1];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.XY.
         m128d_f64[0];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.XY.m128d_f64[1] =
         dVar3;
    dVar3 = (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.ZW.
            m128d_f64[1];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.ZW.
         m128d_f64[0];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Translation.ZW.m128d_f64[1] =
         dVar3;
    dVar3 = (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.XY.
            m128d_f64[1];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.XY.m128d_f64
         [0];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.XY.m128d_f64[1] =
         dVar3;
    dVar3 = (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.ZW.
            m128d_f64[1];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.ZW.m128d_f64
         [0];
    (this->BoneTransformFinalizeData).InitialActorTransform.TypedValue.Scale3D.ZW.m128d_f64[1] =
         dVar3;
  }
  (this->BoneTransformFinalizeData).InverseMeshToActorRotation.bIsSet = false;
  bVar1 = (param_1->BoneTransformFinalizeData).InverseMeshToActorRotation.bIsSet;
  (this->BoneTransformFinalizeData).InverseMeshToActorRotation.bIsSet = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_1->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.Y;
    (this->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.X =
         (param_1->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.X;
    (this->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.Y = dVar3;
    dVar3 = (param_1->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.W;
    (this->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.Z =
         (param_1->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.Z;
    (this->BoneTransformFinalizeData).InverseMeshToActorRotation.TypedValue.W = dVar3;
  }
  (this->BoneTransformFinalizeData).OnBoneTransformsFinalizedHandle.ID =
       (param_1->BoneTransformFinalizeData).OnBoneTransformsFinalizedHandle.ID;
  return this;
}

// ~FBoundObjectActiveSkeletalAnimations @ 14680f2b0

void __thiscall
UE::MovieScene::FBoundObjectActiveSkeletalAnimations::~FBoundObjectActiveSkeletalAnimations
          (FBoundObjectActiveSkeletalAnimations *this)

{
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *pFVar1;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar2;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar3;
  
  FVar2 = (this->SimulatedAnimations).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FVar2 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)&this->SimulatedAnimations;
  }
  DestructItems<UE::MovieScene::FActiveSkeletalAnimation,int>
            ((FActiveSkeletalAnimation *)FVar2,(this->SimulatedAnimations).ArrayNum);
  FVar2 = (this->SimulatedAnimations).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = &(this->Animations).AllocatorInstance.SecondaryData;
  FVar2 = *pFVar1;
  FVar3 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)this;
  if (FVar2 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FVar3 = FVar2;
  }
  DestructItems<UE::MovieScene::FActiveSkeletalAnimation,int>
            ((FActiveSkeletalAnimation *)FVar3,(this->Animations).ArrayNum);
  FVar2 = *pFVar1;
  if (FVar2 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

