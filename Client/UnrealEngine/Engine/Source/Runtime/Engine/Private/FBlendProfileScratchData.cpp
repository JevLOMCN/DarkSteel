// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// IsEmpty @ 147467390

bool __thiscall FBlendProfileScratchData::IsEmpty(FBlendProfileScratchData *this)

{
  if ((((((this->PerBoneWeights).ArrayNum == 0) && ((this->PerBoneWeightTotals).ArrayNum == 0)) &&
       ((this->PerBoneWeightTotalsAdditive).ArrayNum == 0)) &&
      (((((this->BoneBlendProfileScales).ArrayNum == 0 && ((this->Poses).ArrayNum == 0)) &&
        (((this->AdditivePoses).ArrayNum == 0 &&
         (((this->PoseIndices).ArrayNum == 0 && ((this->AdditivePoseIndices).ArrayNum == 0)))))) &&
       ((this->BlendingWeights).ArrayNum == 0)))) &&
     ((((this->BlendingPoses).ArrayNum == 0 && ((this->BlendingCurves).ArrayNum == 0)) &&
      ((this->BlendingAttributes).ArrayNum == 0)))) {
    return true;
  }
  return false;
}

// Reset @ 147475110

void __thiscall FBlendProfileScratchData::Reset(FBlendProfileScratchData *this)

{
  int *piVar1;
  int iVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FSlotEvaluationPose *pFVar4;
  
  piVar1 = &(this->PerBoneWeights).ArrayMax;
  pTVar3 = (TArray<float,TSizedDefaultAllocator<32>_> *)
           (this->PerBoneWeights).AllocatorInstance.Data;
  iVar2 = (this->PerBoneWeights).ArrayNum;
  if ((this->PerBoneWeights).ArrayMax < 0) {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->PerBoneWeights).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PerBoneWeights).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->PerBoneWeights).ArrayNum = 0;
  }
  (this->PerBoneWeightTotals).ArrayNum = 0;
  if ((this->PerBoneWeightTotals).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PerBoneWeightTotals).AllocatorInstance,0,
               &(this->PerBoneWeightTotals).ArrayMax);
  }
  (this->PerBoneWeightTotalsAdditive).ArrayNum = 0;
  if ((this->PerBoneWeightTotalsAdditive).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PerBoneWeightTotalsAdditive).AllocatorInstance,0,
               &(this->PerBoneWeightTotalsAdditive).ArrayMax);
  }
  (this->BoneBlendProfileScales).ArrayNum = 0;
  if ((this->BoneBlendProfileScales).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneBlendProfileScales).AllocatorInstance,0,
               &(this->BoneBlendProfileScales).ArrayMax);
  }
  piVar1 = &(this->Poses).ArrayMax;
  pFVar4 = (FSlotEvaluationPose *)(this->Poses).AllocatorInstance.Data;
  iVar2 = (this->Poses).ArrayNum;
  if ((this->Poses).ArrayMax < 0) {
    DestructItems<FSlotEvaluationPose,int>(pFVar4,iVar2);
    (this->Poses).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,0,&(this->Poses).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSlotEvaluationPose,int>(pFVar4,iVar2);
    (this->Poses).ArrayNum = 0;
  }
  piVar1 = &(this->AdditivePoses).ArrayMax;
  pFVar4 = (FSlotEvaluationPose *)(this->AdditivePoses).AllocatorInstance.Data;
  iVar2 = (this->AdditivePoses).ArrayNum;
  if ((this->AdditivePoses).ArrayMax < 0) {
    DestructItems<FSlotEvaluationPose,int>(pFVar4,iVar2);
    (this->AdditivePoses).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,0,&(this->AdditivePoses).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSlotEvaluationPose,int>(pFVar4,iVar2);
    (this->AdditivePoses).ArrayNum = 0;
  }
  (this->PoseIndices).ArrayNum = 0;
  if ((this->PoseIndices).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,0,&(this->PoseIndices).AllocatorInstance,0,&(this->PoseIndices).ArrayMax);
  }
  (this->AdditivePoseIndices).ArrayNum = 0;
  if ((this->AdditivePoseIndices).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,0,&(this->AdditivePoseIndices).AllocatorInstance,0,
               &(this->AdditivePoseIndices).ArrayMax);
  }
  (this->BlendingWeights).ArrayNum = 0;
  if ((this->BlendingWeights).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,0,&(this->BlendingWeights).AllocatorInstance,0,&(this->BlendingWeights).ArrayMax)
    ;
  }
  (this->BlendingPoses).ArrayNum = 0;
  if ((this->BlendingPoses).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose_const_*>_>
              (8,8,0,&(this->BlendingPoses).AllocatorInstance,0,&(this->BlendingPoses).ArrayMax);
  }
  (this->BlendingCurves).ArrayNum = 0;
  if ((this->BlendingCurves).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve_const_*>_>
              (8,8,0,&(this->BlendingCurves).AllocatorInstance,0,&(this->BlendingCurves).ArrayMax);
  }
  (this->BlendingAttributes).ArrayNum = 0;
  if ((this->BlendingAttributes).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FStackAttributeContainer_const_*>_>
              (8,8,0,&(this->BlendingAttributes).AllocatorInstance,0,
               &(this->BlendingAttributes).ArrayMax);
  }
  return;
}

