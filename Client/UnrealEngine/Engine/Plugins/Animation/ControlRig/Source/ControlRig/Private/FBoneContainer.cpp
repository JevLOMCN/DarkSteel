// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FBoneContainer @ 14a21dc40

FBoneContainer * __thiscall
FBoneContainer::FBoneContainer(FBoneContainer *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *pTVar5;
  FCurveFilter *pFVar6;
  FBulkCurveFlags *pFVar7;
  TMap<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>_>
  *this_00;
  int iVar8;
  FScriptContainerElement *pFVar9;
  void *pvVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  
  piVar1 = &(this->BoneIndicesArray).ArrayMax;
  (this->BoneIndicesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->BoneIndicesArray).ArrayNum;
  pFVar9 = (param_1->BoneIndicesArray).AllocatorInstance.Data;
  (this->BoneIndicesArray).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)this,iVar8,piVar1);
    memcpy((this->BoneIndicesArray).AllocatorInstance.Data,pFVar9,(longlong)iVar8 * 2);
  }
  (this->BoneSwitchArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->BoneSwitchArray).NumBits = 0;
  (this->BoneSwitchArray).MaxBits = 0;
  uVar13 = (param_1->BoneSwitchArray).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar13) {
    uVar12 = 0x80;
    if (0x80 < (int)uVar13) {
      uVar12 = uVar13;
    }
    (this->BoneSwitchArray).MaxBits = uVar12;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->BoneSwitchArray,0);
  }
  iVar8 = (param_1->BoneSwitchArray).NumBits;
  (this->BoneSwitchArray).NumBits = iVar8;
  if (iVar8 != 0) {
    _Src = (param_1->BoneSwitchArray).AllocatorInstance.SecondaryData;
    _Dst = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      _Src = (ForElementType<unsigned_int>)&param_1->BoneSwitchArray;
    }
    if (_Dst == (ForElementType<unsigned_int>)0x0) {
      _Dst = (ForElementType<unsigned_int>)&this->BoneSwitchArray;
    }
    memcpy((void *)_Dst,(void *)_Src,(ulonglong)(iVar8 + 0x1fU >> 5) << 2);
  }
  pTVar2 = &this->SkeletonToPoseBoneIndexArray;
  (this->Asset).WeakPtr = (param_1->Asset).WeakPtr;
  (this->AssetSkeletalMesh).WeakPtr = (param_1->AssetSkeletalMesh).WeakPtr;
  (this->AssetSkeleton).WeakPtr = (param_1->AssetSkeleton).WeakPtr;
  this->RefSkeleton = param_1->RefSkeleton;
  piVar1 = &(this->SkeletonToPoseBoneIndexArray).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->SkeletonToPoseBoneIndexArray).ArrayNum;
  pFVar9 = (param_1->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data;
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar2 = &this->PoseToSkeletonBoneIndexArray;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PoseToSkeletonBoneIndexArray).ArrayMax;
  iVar8 = (param_1->PoseToSkeletonBoneIndexArray).ArrayNum;
  pFVar9 = (param_1->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data;
  (this->PoseToSkeletonBoneIndexArray).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar2 = &this->CompactPoseToSkeletonIndex;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CompactPoseToSkeletonIndex).ArrayMax;
  iVar8 = (param_1->CompactPoseToSkeletonIndex).ArrayNum;
  pFVar9 = (param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data;
  (this->CompactPoseToSkeletonIndex).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar4 = &this->SkeletonToCompactPose;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SkeletonToCompactPose).ArrayMax;
  iVar8 = (param_1->SkeletonToCompactPose).ArrayNum;
  pFVar9 = (param_1->SkeletonToCompactPose).AllocatorInstance.Data;
  (this->SkeletonToCompactPose).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar4 = &this->CompactPoseParentBones;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CompactPoseParentBones).ArrayMax;
  iVar8 = (param_1->CompactPoseParentBones).ArrayNum;
  pFVar9 = (param_1->CompactPoseParentBones).AllocatorInstance.Data;
  (this->CompactPoseParentBones).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar5 = &this->VirtualBoneCompactPoseData;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VirtualBoneCompactPoseData).ArrayMax;
  iVar8 = (param_1->VirtualBoneCompactPoseData).ArrayNum;
  pFVar9 = (param_1->VirtualBoneCompactPoseData).AllocatorInstance.Data;
  (this->VirtualBoneCompactPoseData).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar8 * 0xc);
  }
  pFVar6 = &this->CurveFilter;
  pFVar6->_padding_ = 0;
  piVar1 = (int *)((longlong)&(this->CurveFilter)._padding_ + 4);
  iVar8 = (int)(param_1->CurveFilter)._padding_;
  pvVar10 = (void *)(param_1->CurveFilter)._padding_;
  *(int *)&(this->CurveFilter)._padding_ = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,(ForAnyElementType *)pFVar6,iVar8,piVar1);
    memcpy((void *)pFVar6->_padding_,pvVar10,(longlong)iVar8 * 0xc);
  }
  *(char *)&(this->CurveFilter)._padding_ = (char)(param_1->CurveFilter)._padding_;
  (this->CurveFilter).FilterMode = (param_1->CurveFilter).FilterMode;
  pFVar7 = &this->CurveFlags;
  *(undefined8 *)pFVar7 = 0;
  puVar3 = &(this->CurveFlags).field_0xc;
  iVar8 = *(int *)&(param_1->CurveFlags).field_0x8;
  pvVar10 = *(void **)&param_1->CurveFlags;
  *(int *)&(this->CurveFlags).field_0x8 = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)puVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,(ForAnyElementType *)pFVar7,iVar8,(int *)puVar3);
    memcpy(*(void **)pFVar7,pvVar10,(longlong)iVar8 * 0xc);
  }
  (this->CurveFlags).field_0x10 = (param_1->CurveFlags).field_0x10;
  (this->RefPoseOverride).Object = (param_1->RefPoseOverride).Object;
  pTVar11 = (param_1->RefPoseOverride).SharedReferenceCount.ReferenceController;
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->RetargetSourceCachedDataLUT;
  this->SerialNumber = param_1->SerialNumber;
  puVar3 = &(this->RetargetSourceCachedDataLUT).field_0x48;
  this->CalculatedForLOD = param_1->CalculatedForLOD;
  this->bDisableRetargeting = param_1->bDisableRetargeting;
  this->bUseRAWData = param_1->bUseRAWData;
  this->bUseSourceData = param_1->bUseSourceData;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x8 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x20 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x28 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x2c = 0x80;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x34 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x40 = 0;
  *(undefined4 *)puVar3 = 0;
  if (this_00 != &param_1->RetargetSourceCachedDataLUT) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->RetargetSourceCachedDataLUT).field_0x38,
               (int *)puVar3,
               (ForElementType<FSetElementId> *)&(param_1->RetargetSourceCachedDataLUT).field_0x38,
               *(int *)&(param_1->RetargetSourceCachedDataLUT).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->RetargetSourceCachedDataLUT);
  }
  return this;
}

