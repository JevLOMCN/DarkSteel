// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 2

// FBoneContainer @ 14a862100

FBoneContainer * __thiscall
FBoneContainer::FBoneContainer(FBoneContainer *this,FBoneContainer *param_1)

{
  ForElementType<unsigned_int> FVar1;
  FReferenceSkeleton *pFVar2;
  
  (this->BoneIndicesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndicesArray).AllocatorInstance.Data =
       (param_1->BoneIndicesArray).AllocatorInstance.Data;
  (param_1->BoneIndicesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndicesArray).ArrayNum = (param_1->BoneIndicesArray).ArrayNum;
  (this->BoneIndicesArray).ArrayMax = (param_1->BoneIndicesArray).ArrayMax;
  (param_1->BoneIndicesArray).ArrayNum = 0;
  (param_1->BoneIndicesArray).ArrayMax = 0;
  (this->BoneSwitchArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->BoneSwitchArray).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    memmove(&this->BoneSwitchArray,&param_1->BoneSwitchArray,0x10);
  }
  FVar1 = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->BoneSwitchArray).AllocatorInstance.SecondaryData =
       (param_1->BoneSwitchArray).AllocatorInstance.SecondaryData;
  (param_1->BoneSwitchArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->BoneSwitchArray).NumBits = (param_1->BoneSwitchArray).NumBits;
  (this->BoneSwitchArray).MaxBits = (param_1->BoneSwitchArray).MaxBits;
  (param_1->BoneSwitchArray).NumBits = 0;
  (param_1->BoneSwitchArray).MaxBits = 0;
  (this->Asset).WeakPtr = (param_1->Asset).WeakPtr;
  (this->AssetSkeletalMesh).WeakPtr = (param_1->AssetSkeletalMesh).WeakPtr;
  (this->AssetSkeleton).WeakPtr = (param_1->AssetSkeleton).WeakPtr;
  pFVar2 = param_1->RefSkeleton;
  (this->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RefSkeleton = pFVar2;
  (this->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data =
       (param_1->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data;
  (param_1->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = (param_1->SkeletonToPoseBoneIndexArray).ArrayNum;
  (this->SkeletonToPoseBoneIndexArray).ArrayMax = (param_1->SkeletonToPoseBoneIndexArray).ArrayMax;
  (param_1->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
  (param_1->SkeletonToPoseBoneIndexArray).ArrayMax = 0;
  (this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data =
       (param_1->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data;
  (param_1->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseToSkeletonBoneIndexArray).ArrayNum = (param_1->PoseToSkeletonBoneIndexArray).ArrayNum;
  (this->PoseToSkeletonBoneIndexArray).ArrayMax = (param_1->PoseToSkeletonBoneIndexArray).ArrayMax;
  (param_1->PoseToSkeletonBoneIndexArray).ArrayNum = 0;
  (param_1->PoseToSkeletonBoneIndexArray).ArrayMax = 0;
  (this->CompactPoseToSkeletonIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseToSkeletonIndex).AllocatorInstance.Data =
       (param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data;
  (param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseToSkeletonIndex).ArrayNum = (param_1->CompactPoseToSkeletonIndex).ArrayNum;
  (this->CompactPoseToSkeletonIndex).ArrayMax = (param_1->CompactPoseToSkeletonIndex).ArrayMax;
  (param_1->CompactPoseToSkeletonIndex).ArrayNum = 0;
  (param_1->CompactPoseToSkeletonIndex).ArrayMax = 0;
  (this->SkeletonToCompactPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToCompactPose).AllocatorInstance.Data =
       (param_1->SkeletonToCompactPose).AllocatorInstance.Data;
  (param_1->SkeletonToCompactPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToCompactPose).ArrayNum = (param_1->SkeletonToCompactPose).ArrayNum;
  (this->SkeletonToCompactPose).ArrayMax = (param_1->SkeletonToCompactPose).ArrayMax;
  (param_1->SkeletonToCompactPose).ArrayNum = 0;
  (param_1->SkeletonToCompactPose).ArrayMax = 0;
  (this->CompactPoseParentBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseParentBones).AllocatorInstance.Data =
       (param_1->CompactPoseParentBones).AllocatorInstance.Data;
  (param_1->CompactPoseParentBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseParentBones).ArrayNum = (param_1->CompactPoseParentBones).ArrayNum;
  (this->CompactPoseParentBones).ArrayMax = (param_1->CompactPoseParentBones).ArrayMax;
  (param_1->CompactPoseParentBones).ArrayNum = 0;
  (param_1->CompactPoseParentBones).ArrayMax = 0;
  (this->VirtualBoneCompactPoseData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualBoneCompactPoseData).AllocatorInstance.Data =
       (param_1->VirtualBoneCompactPoseData).AllocatorInstance.Data;
  (param_1->VirtualBoneCompactPoseData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualBoneCompactPoseData).ArrayNum = (param_1->VirtualBoneCompactPoseData).ArrayNum;
  (this->VirtualBoneCompactPoseData).ArrayMax = (param_1->VirtualBoneCompactPoseData).ArrayMax;
  (param_1->VirtualBoneCompactPoseData).ArrayNum = 0;
  (param_1->VirtualBoneCompactPoseData).ArrayMax = 0;
  (this->CurveFilter)._padding_ = 0;
  (this->CurveFilter)._padding_ = (param_1->CurveFilter)._padding_;
  (param_1->CurveFilter)._padding_ = 0;
  *(int *)&(this->CurveFilter)._padding_ = (int)(param_1->CurveFilter)._padding_;
  *(undefined4 *)((longlong)&(this->CurveFilter)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->CurveFilter)._padding_ + 4);
  (param_1->CurveFilter)._padding_ = 0;
  *(char *)&(this->CurveFilter)._padding_ = (char)(param_1->CurveFilter)._padding_;
  (this->CurveFilter).FilterMode = (param_1->CurveFilter).FilterMode;
  *(undefined8 *)&this->CurveFlags = 0;
  *(undefined8 *)&this->CurveFlags = *(undefined8 *)&param_1->CurveFlags;
  *(undefined8 *)&param_1->CurveFlags = 0;
  *(undefined4 *)&(this->CurveFlags).field_0x8 = *(undefined4 *)&(param_1->CurveFlags).field_0x8;
  *(undefined4 *)&(this->CurveFlags).field_0xc = *(undefined4 *)&(param_1->CurveFlags).field_0xc;
  *(undefined8 *)&(param_1->CurveFlags).field_0x8 = 0;
  (this->CurveFlags).field_0x10 = (param_1->CurveFlags).field_0x10;
  (this->RefPoseOverride).Object = (param_1->RefPoseOverride).Object;
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController =
       (param_1->RefPoseOverride).SharedReferenceCount.ReferenceController;
  (param_1->RefPoseOverride).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->RefPoseOverride).Object = (FSkelMeshRefPoseOverride *)0x0;
  this->SerialNumber = param_1->SerialNumber;
  this->CalculatedForLOD = param_1->CalculatedForLOD;
  this->bDisableRetargeting = param_1->bDisableRetargeting;
  this->bUseRAWData = param_1->bUseRAWData;
  this->bUseSourceData = param_1->bUseSourceData;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x0 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x8 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x20 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x28 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x2c = 0x80;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x34 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x40 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x48 = 0;
  TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
              *)&this->RetargetSourceCachedDataLUT,
             (TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
              *)&param_1->RetargetSourceCachedDataLUT);
  return this;
}

// operator= @ 14a863150

FBoneContainer * __thiscall FBoneContainer::operator=(FBoneContainer *this,FBoneContainer *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *pTVar6;
  FCurveFilter *pFVar7;
  FCurveFilter *pFVar8;
  FBulkCurveFlags *pFVar9;
  FBulkCurveFlags *pFVar10;
  TSharedPtr<FSkelMeshRefPoseOverride,1> *pTVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<unsigned_int> FVar13;
  
  if (this != param_1) {
    pFVar12 = (this->BoneIndicesArray).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (this->BoneIndicesArray).AllocatorInstance.Data =
         (param_1->BoneIndicesArray).AllocatorInstance.Data;
    (param_1->BoneIndicesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BoneIndicesArray).ArrayNum = (param_1->BoneIndicesArray).ArrayNum;
    (this->BoneIndicesArray).ArrayMax = (param_1->BoneIndicesArray).ArrayMax;
    (param_1->BoneIndicesArray).ArrayNum = 0;
    (param_1->BoneIndicesArray).ArrayMax = 0;
  }
  if (&this->BoneSwitchArray != &param_1->BoneSwitchArray) {
    if ((param_1->BoneSwitchArray).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(&this->BoneSwitchArray,&param_1->BoneSwitchArray,0x10);
    }
    FVar13 = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar13);
    }
    (this->BoneSwitchArray).AllocatorInstance.SecondaryData =
         (param_1->BoneSwitchArray).AllocatorInstance.SecondaryData;
    (param_1->BoneSwitchArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (this->BoneSwitchArray).NumBits = (param_1->BoneSwitchArray).NumBits;
    (this->BoneSwitchArray).MaxBits = (param_1->BoneSwitchArray).MaxBits;
    (param_1->BoneSwitchArray).NumBits = 0;
    (param_1->BoneSwitchArray).MaxBits = 0;
  }
  pTVar1 = &param_1->SkeletonToPoseBoneIndexArray;
  (this->Asset).WeakPtr = (param_1->Asset).WeakPtr;
  pTVar2 = &this->SkeletonToPoseBoneIndexArray;
  (this->AssetSkeletalMesh).WeakPtr = (param_1->AssetSkeletalMesh).WeakPtr;
  (this->AssetSkeleton).WeakPtr = (param_1->AssetSkeleton).WeakPtr;
  this->RefSkeleton = param_1->RefSkeleton;
  if (pTVar2 != pTVar1) {
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SkeletonToPoseBoneIndexArray).ArrayNum = (param_1->SkeletonToPoseBoneIndexArray).ArrayNum
    ;
    (this->SkeletonToPoseBoneIndexArray).ArrayMax = (param_1->SkeletonToPoseBoneIndexArray).ArrayMax
    ;
    (param_1->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
    (param_1->SkeletonToPoseBoneIndexArray).ArrayMax = 0;
  }
  pTVar1 = &param_1->PoseToSkeletonBoneIndexArray;
  pTVar2 = &this->PoseToSkeletonBoneIndexArray;
  if (pTVar2 != pTVar1) {
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PoseToSkeletonBoneIndexArray).ArrayNum = (param_1->PoseToSkeletonBoneIndexArray).ArrayNum
    ;
    (this->PoseToSkeletonBoneIndexArray).ArrayMax = (param_1->PoseToSkeletonBoneIndexArray).ArrayMax
    ;
    (param_1->PoseToSkeletonBoneIndexArray).ArrayNum = 0;
    (param_1->PoseToSkeletonBoneIndexArray).ArrayMax = 0;
  }
  pTVar1 = &param_1->CompactPoseToSkeletonIndex;
  pTVar2 = &this->CompactPoseToSkeletonIndex;
  if (pTVar2 != pTVar1) {
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CompactPoseToSkeletonIndex).ArrayNum = (param_1->CompactPoseToSkeletonIndex).ArrayNum;
    (this->CompactPoseToSkeletonIndex).ArrayMax = (param_1->CompactPoseToSkeletonIndex).ArrayMax;
    (param_1->CompactPoseToSkeletonIndex).ArrayNum = 0;
    (param_1->CompactPoseToSkeletonIndex).ArrayMax = 0;
  }
  pTVar3 = &param_1->SkeletonToCompactPose;
  pTVar4 = &this->SkeletonToCompactPose;
  if (pTVar4 != pTVar3) {
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SkeletonToCompactPose).ArrayNum = (param_1->SkeletonToCompactPose).ArrayNum;
    (this->SkeletonToCompactPose).ArrayMax = (param_1->SkeletonToCompactPose).ArrayMax;
    (param_1->SkeletonToCompactPose).ArrayNum = 0;
    (param_1->SkeletonToCompactPose).ArrayMax = 0;
  }
  pTVar3 = &param_1->CompactPoseParentBones;
  pTVar4 = &this->CompactPoseParentBones;
  if (pTVar4 != pTVar3) {
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CompactPoseParentBones).ArrayNum = (param_1->CompactPoseParentBones).ArrayNum;
    (this->CompactPoseParentBones).ArrayMax = (param_1->CompactPoseParentBones).ArrayMax;
    (param_1->CompactPoseParentBones).ArrayNum = 0;
    (param_1->CompactPoseParentBones).ArrayMax = 0;
  }
  pTVar5 = &param_1->VirtualBoneCompactPoseData;
  pTVar6 = &this->VirtualBoneCompactPoseData;
  if (pTVar6 != pTVar5) {
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VirtualBoneCompactPoseData).ArrayNum = (param_1->VirtualBoneCompactPoseData).ArrayNum;
    (this->VirtualBoneCompactPoseData).ArrayMax = (param_1->VirtualBoneCompactPoseData).ArrayMax;
    (param_1->VirtualBoneCompactPoseData).ArrayNum = 0;
    (param_1->VirtualBoneCompactPoseData).ArrayMax = 0;
  }
  pFVar7 = &param_1->CurveFilter;
  pFVar8 = &this->CurveFilter;
  if (pFVar8 != pFVar7) {
    if ((void *)pFVar8->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar8->_padding_);
    }
    pFVar8->_padding_ = pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    *(int *)&(this->CurveFilter)._padding_ = (int)(param_1->CurveFilter)._padding_;
    *(undefined4 *)((longlong)&(this->CurveFilter)._padding_ + 4) =
         *(undefined4 *)((longlong)&(param_1->CurveFilter)._padding_ + 4);
    (param_1->CurveFilter)._padding_ = 0;
  }
  *(char *)&(this->CurveFilter)._padding_ = (char)(param_1->CurveFilter)._padding_;
  pFVar9 = &param_1->CurveFlags;
  (this->CurveFilter).FilterMode = (param_1->CurveFilter).FilterMode;
  pFVar10 = &this->CurveFlags;
  if (pFVar10 != pFVar9) {
    if (*(void **)pFVar10 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar10);
    }
    *(undefined8 *)pFVar10 = *(undefined8 *)pFVar9;
    *(undefined8 *)pFVar9 = 0;
    *(undefined4 *)&(this->CurveFlags).field_0x8 = *(undefined4 *)&(param_1->CurveFlags).field_0x8;
    *(undefined4 *)&(this->CurveFlags).field_0xc = *(undefined4 *)&(param_1->CurveFlags).field_0xc;
    *(undefined8 *)&(param_1->CurveFlags).field_0x8 = 0;
  }
  pTVar11 = &param_1->RefPoseOverride;
  (this->CurveFlags).field_0x10 = (param_1->CurveFlags).field_0x10;
  if (&this->RefPoseOverride != pTVar11) {
    (this->RefPoseOverride).Object = pTVar11->Object;
    pTVar11->Object = (FSkelMeshRefPoseOverride *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RefPoseOverride).SharedReferenceCount,
               &(param_1->RefPoseOverride).SharedReferenceCount);
  }
  this->SerialNumber = param_1->SerialNumber;
  this->CalculatedForLOD = param_1->CalculatedForLOD;
  this->bDisableRetargeting = param_1->bDisableRetargeting;
  this->bUseRAWData = param_1->bUseRAWData;
  this->bUseSourceData = param_1->bUseSourceData;
  if (&this->RetargetSourceCachedDataLUT != &param_1->RetargetSourceCachedDataLUT) {
    TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
                *)&this->RetargetSourceCachedDataLUT,
               (TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
                *)&param_1->RetargetSourceCachedDataLUT);
  }
  return this;
}

