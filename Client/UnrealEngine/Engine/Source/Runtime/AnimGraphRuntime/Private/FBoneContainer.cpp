// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// FillWithCompactRefPose<TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>_> @ 1463f5380

void __thiscall
FBoneContainer::FillWithCompactRefPose<TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>_>
          (FBoneContainer *this,TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *param_1
          )

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ushort uVar6;
  uint uVar7;
  FSkelMeshRefPoseOverride *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  TTransform<double> *pTVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar32;
  longlong local_res8;
  
  uVar7 = (this->BoneIndicesArray).ArrayNum;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < (int)uVar7) {
    UE::Core::Private::
    ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,uVar7,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar26 = *piVar2;
  if (iVar26 < (int)uVar7) {
    UE::Core::Private::
    ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,uVar7 - iVar26,&param_1->AllocatorInstance,piVar2,piVar1);
  }
  else if ((int)uVar7 < iVar26) {
    uVar31 = iVar26 - uVar7;
    if (((int)(uVar31 | uVar7) < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar25)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (uVar31 != 0) {
      pTVar28 = (param_1->AllocatorInstance).Data + (int)uVar7;
      iVar26 = (*piVar2 - uVar31) - uVar7;
      if (iVar26 != 0) {
        memmove(pTVar28,pTVar28 + (int)uVar31,(longlong)iVar26 * 0x60);
      }
      *piVar2 = *piVar2 - uVar31;
      UE::Core::Private::
      ReallocShrink<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                (0x60,0x10,&param_1->AllocatorInstance,*piVar2,piVar1);
    }
  }
  pFVar8 = (this->RefPoseOverride).Object;
  if (pFVar8 == (FSkelMeshRefPoseOverride *)0x0) {
    pTVar32 = &this->RefSkeleton->FinalRefBonePose;
  }
  else {
    pTVar32 = &pFVar8->RefBonePoses;
  }
  uVar31 = 0;
  if (0 < (int)uVar7) {
    lVar30 = 0;
    local_res8 = 0;
    do {
      uVar27 = 0;
      if ((int)uVar31 < (this->BoneIndicesArray).ArrayNum) {
        uVar27 = ~uVar31 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar6 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + lVar30 * 2);
      if ((pTVar32->ArrayNum <= (int)(uint)uVar6) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar32->AllocatorInstance).Data;
      lVar29 = (ulonglong)uVar6 * 0x60;
      uVar15 = *(undefined8 *)(pFVar9 + lVar29 + 0x10);
      uVar16 = *(undefined8 *)(pFVar9 + lVar29 + 0x10 + 8);
      uVar17 = *(undefined8 *)(pFVar9 + lVar29 + 0x20);
      uVar18 = *(undefined8 *)(pFVar9 + lVar29 + 0x20 + 8);
      pFVar3 = pFVar9 + lVar29;
      uVar11 = *(undefined4 *)pFVar3;
      uVar12 = *(undefined4 *)(pFVar3 + 4);
      uVar13 = *(undefined4 *)(pFVar3 + 8);
      uVar14 = *(undefined4 *)(pFVar3 + 0xc);
      uVar19 = *(undefined8 *)(pFVar9 + lVar29 + 0x30);
      uVar20 = *(undefined8 *)(pFVar9 + lVar29 + 0x30 + 8);
      uVar21 = *(undefined8 *)(pFVar9 + lVar29 + 0x50);
      uVar22 = *(undefined8 *)(pFVar9 + lVar29 + 0x50 + 8);
      uVar23 = *(undefined8 *)(pFVar9 + lVar29 + 0x40);
      uVar24 = *(undefined8 *)(pFVar9 + lVar29 + 0x40 + 8);
      uVar27 = 0;
      if ((int)uVar31 < *piVar2) {
        uVar27 = ~uVar31 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar31 = uVar31 + 1;
      pTVar28 = (param_1->AllocatorInstance).Data;
      lVar30 = lVar30 + 1;
      puVar4 = (undefined4 *)((longlong)(pTVar28->Rotation).XY.m128d_f64 + local_res8);
      *puVar4 = uVar11;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar5 = (undefined8 *)((longlong)(pTVar28->Rotation).ZW.m128d_f64 + local_res8);
      *puVar5 = uVar15;
      puVar5[1] = uVar16;
      puVar5 = (undefined8 *)((longlong)(pTVar28->Translation).XY.m128d_f64 + local_res8);
      *puVar5 = uVar17;
      puVar5[1] = uVar18;
      puVar5 = (undefined8 *)((longlong)(pTVar28->Translation).ZW.m128d_f64 + local_res8);
      *puVar5 = uVar19;
      puVar5[1] = uVar20;
      puVar5 = (undefined8 *)((longlong)(pTVar28->Scale3D).XY.m128d_f64 + local_res8);
      *puVar5 = uVar23;
      puVar5[1] = uVar24;
      puVar5 = (undefined8 *)((longlong)(pTVar28->Scale3D).ZW.m128d_f64 + local_res8);
      *puVar5 = uVar21;
      puVar5[1] = uVar22;
      local_res8 = local_res8 + 0x60;
    } while (lVar30 < (int)uVar7);
  }
  return;
}

// ~FBoneContainer @ 146409370

void __thiscall FBoneContainer::~FBoneContainer(FBoneContainer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RetargetSourceCachedDataLUT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RetargetSourceCachedDataLUT);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RefPoseOverride).SharedReferenceCount.ReferenceController);
  if (*(void **)&this->CurveFlags != (void *)0x0) {
    FMemory::Free(*(void **)&this->CurveFlags);
  }
  pvVar1 = (void *)(this->CurveFilter)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->VirtualBoneCompactPoseData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CompactPoseParentBones).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SkeletonToCompactPose).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CompactPoseToSkeletonIndex).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar2 = (this->BoneIndicesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14640caf0

FBoneContainer * __thiscall FBoneContainer::operator=(FBoneContainer *this,FBoneContainer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *pTVar3;
  FCurveFilter *pFVar4;
  FBulkCurveFlags *pFVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  void *pvVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSkelMeshRefPoseOverride *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  
  if (this != param_1) {
    iVar6 = (param_1->BoneIndicesArray).ArrayNum;
    piVar1 = &(this->BoneIndicesArray).ArrayMax;
    pFVar8 = (param_1->BoneIndicesArray).AllocatorInstance.Data;
    (this->BoneIndicesArray).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,*piVar1,(ForAnyElementType *)this,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((this->BoneIndicesArray).AllocatorInstance.Data,pFVar8,(longlong)iVar6 * 2);
      }
    }
  }
  if (&this->BoneSwitchArray != &param_1->BoneSwitchArray) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              (&this->BoneSwitchArray,&param_1->BoneSwitchArray);
  }
  (this->Asset).WeakPtr = (param_1->Asset).WeakPtr;
  (this->AssetSkeletalMesh).WeakPtr = (param_1->AssetSkeletalMesh).WeakPtr;
  (this->AssetSkeleton).WeakPtr = (param_1->AssetSkeleton).WeakPtr;
  this->RefSkeleton = param_1->RefSkeleton;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->SkeletonToPoseBoneIndexArray,&param_1->SkeletonToPoseBoneIndexArray);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->PoseToSkeletonBoneIndexArray,&param_1->PoseToSkeletonBoneIndexArray);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CompactPoseToSkeletonIndex,&param_1->CompactPoseToSkeletonIndex);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->SkeletonToCompactPose,&param_1->SkeletonToCompactPose);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->CompactPoseParentBones,&param_1->CompactPoseParentBones);
  pTVar3 = &this->VirtualBoneCompactPoseData;
  if (pTVar3 != &param_1->VirtualBoneCompactPoseData) {
    iVar6 = (param_1->VirtualBoneCompactPoseData).ArrayNum;
    piVar1 = &(this->VirtualBoneCompactPoseData).ArrayMax;
    pFVar8 = (param_1->VirtualBoneCompactPoseData).AllocatorInstance.Data;
    (this->VirtualBoneCompactPoseData).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar6 * 0xc);
      }
    }
  }
  pFVar4 = &this->CurveFilter;
  if (pFVar4 != &param_1->CurveFilter) {
    iVar6 = (int)(param_1->CurveFilter)._padding_;
    piVar1 = (int *)((longlong)&(this->CurveFilter)._padding_ + 4);
    pvVar9 = (void *)(param_1->CurveFilter)._padding_;
    iVar7 = *piVar1;
    *(int *)&(this->CurveFilter)._padding_ = iVar6;
    if ((iVar6 == 0) && (iVar7 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar6,iVar7,(ForAnyElementType *)pFVar4,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((void *)pFVar4->_padding_,pvVar9,(longlong)iVar6 * 0xc);
      }
    }
  }
  *(char *)&(this->CurveFilter)._padding_ = (char)(param_1->CurveFilter)._padding_;
  (this->CurveFilter).FilterMode = (param_1->CurveFilter).FilterMode;
  pFVar5 = &this->CurveFlags;
  if (pFVar5 != &param_1->CurveFlags) {
    iVar6 = *(int *)&(param_1->CurveFlags).field_0x8;
    puVar2 = &(this->CurveFlags).field_0xc;
    pvVar9 = *(void **)&param_1->CurveFlags;
    *(int *)&(this->CurveFlags).field_0x8 = iVar6;
    if ((iVar6 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar6,*(int *)puVar2,(ForAnyElementType *)pFVar5,iVar6,(int *)puVar2);
      if (iVar6 != 0) {
        memcpy(*(void **)pFVar5,pvVar9,(longlong)iVar6 * 0xc);
      }
    }
  }
  (this->CurveFlags).field_0x10 = (param_1->CurveFlags).field_0x10;
  pTVar10 = (param_1->RefPoseOverride).SharedReferenceCount.ReferenceController;
  pFVar11 = (param_1->RefPoseOverride).Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (this->RefPoseOverride).SharedReferenceCount.ReferenceController;
  (this->RefPoseOverride).Object = pFVar11;
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  this->SerialNumber = param_1->SerialNumber;
  this->CalculatedForLOD = param_1->CalculatedForLOD;
  this->bDisableRetargeting = param_1->bDisableRetargeting;
  this->bUseRAWData = param_1->bUseRAWData;
  this->bUseSourceData = param_1->bUseSourceData;
  if (&this->RetargetSourceCachedDataLUT != &param_1->RetargetSourceCachedDataLUT) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->RetargetSourceCachedDataLUT).field_0x38,
               (int *)&(this->RetargetSourceCachedDataLUT).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->RetargetSourceCachedDataLUT).field_0x38,
               *(int *)&(param_1->RetargetSourceCachedDataLUT).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->RetargetSourceCachedDataLUT,
                (TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->RetargetSourceCachedDataLUT);
  }
  return this;
}

// Contains @ 146420190

bool __thiscall FBoneContainer::Contains(FBoneContainer *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((this->BoneSwitchArray).NumBits <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->BoneSwitchArray;
  }
  return (*(uint *)((longlong)FVar4 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

// GetRefPoseTransform @ 14644e560

TTransform<double> * __thiscall
FBoneContainer::GetRefPoseTransform(FBoneContainer *this,FCompactPoseBoneIndex *param_1)

{
  ushort uVar1;
  FCompactPoseBoneIndex FVar2;
  FSkelMeshRefPoseOverride *pFVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  uint uVar7;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  pFVar3 = (this->RefPoseOverride).Object;
  if (pFVar3 == (FSkelMeshRefPoseOverride *)0x0) {
    pTVar8 = &this->RefSkeleton->FinalRefBonePose;
  }
  else {
    pTVar8 = &pFVar3->RefBonePoses;
  }
  FVar2 = *param_1;
  uVar7 = 0;
  if ((int)FVar2 < (this->BoneIndicesArray).ArrayNum) {
    uVar7 = ~(uint)FVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar4)();
      return pTVar6;
    }
  }
  uVar1 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + (longlong)(int)FVar2 * 2);
  if (pTVar8->ArrayNum <= (int)(uint)uVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar4)();
      return pTVar6;
    }
  }
  return (TTransform<double> *)((pTVar8->AllocatorInstance).Data + (ulonglong)uVar1 * 0x60);
}

// MakeCompactPoseIndex @ 14645e1b0

FCompactPoseBoneIndex __thiscall
FBoneContainer::MakeCompactPoseIndex(FBoneContainer *this,FMeshPoseBoneIndex *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint *in_R8;
  
  pFVar1 = (this->BoneIndicesArray).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->BoneIndicesArray).ArrayNum * 2) {
      *param_1 = (FMeshPoseBoneIndex)0xffffffff;
      return SUB84(param_1,0);
    }
    if ((uint)*(ushort *)pFVar2 == *in_R8) break;
    pFVar2 = pFVar2 + 2;
  }
  *param_1 = SUB84((longlong)pFVar2 - (longlong)pFVar1 >> 1,0);
  return SUB84(param_1,0);
}

