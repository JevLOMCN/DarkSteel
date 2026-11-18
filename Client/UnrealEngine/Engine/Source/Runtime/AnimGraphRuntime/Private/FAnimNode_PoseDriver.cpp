// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 13

// StaticStruct @ 1463d74d0

UScriptStruct * __cdecl FAnimNode_PoseDriver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseDriver.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseDriver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseDriver,(UObject *)pUVar1,
                         L"AnimNode_PoseDriver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_PoseDriver.OuterSingleton;
}

// FAnimNode_PoseDriver @ 146404ad0

FAnimNode_PoseDriver * __thiscall
FAnimNode_PoseDriver::FAnimNode_PoseDriver(FAnimNode_PoseDriver *this)

{
  undefined1 *puVar1;
  
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->SourcePose = 0;
  *(undefined4 *)&(this->SourcePose).field_0x8 = 0xffffffff;
  (this->SourcePose).field_0xc = 0;
  (this->SourceBones).ArrayNum = 0;
  (this->SourceBones).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FAnimNode_PoseDriver__6B_;
  this->_padding_ = 0;
  (this->SourceBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvalSpaceBone).BoneName.ComparisonIndex = 0;
  (this->EvalSpaceBone).BoneName.Number = 0;
  puVar1 = &(this->EvalSpaceBone).field_0x8;
  (this->EvalSpaceBone).BoneIndex = -1;
  (this->EvalSpaceBone).bUseSkeletonIndex = 0;
  (this->EvalSpaceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->bEvalFromRefPose = false;
  (this->OnlyDriveBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnlyDriveBones).ArrayNum = 0;
  (this->OnlyDriveBones).ArrayMax = 0;
  (this->PoseTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseTargets).ArrayNum = 0;
  (this->PoseTargets).ArrayMax = 0;
  (this->RBFParams).TargetDimensions = 3;
  (this->RBFParams).SolverType = Additive;
  (this->RBFParams).Radius = 1.0;
  (this->RBFParams).bAutomaticRadius = false;
  (this->RBFParams).Function = Gaussian;
  (this->RBFParams).DistanceMethod = SwingAngle;
  (this->RBFParams).TwistAxis = '\0';
  (this->RBFParams).WeightThreshold = 0.0001;
  (this->RBFParams).NormalizeMethod = OnlyNormalizeAboveOne;
  (this->RBFParams).MedianReference.field0_0x0._s_0.X = 0.0;
  (this->RBFParams).MedianReference.field0_0x0._s_0.Y = 0.0;
  (this->RBFParams).MedianReference.field0_0x0._s_0.Z = 0.0;
  (this->RBFParams).MedianMin = 45.0;
  (this->RBFParams).MedianMax = 60.0;
  this->DriveSource = Rotation;
  this->DriveOutput = DrivePoses;
  (this->OutputWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputWeights).ArrayNum = 0;
  (this->OutputWeights).ArrayMax = 0;
  (this->SourceBoneTMs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceBoneTMs).ArrayNum = 0;
  (this->SourceBoneTMs).ArrayMax = 0;
  this->bHasOnlyDriveBones = false;
  (this->BonesToFilter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToFilter).ArrayNum = 0;
  (this->BonesToFilter).ArrayMax = 0;
  this->LODThreshold = -1;
  (this->SolverData).Object = (FRBFSolverData *)0x0;
  (this->SolverData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RBFInput).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RBFInput).Values.ArrayNum = 0;
  (this->RBFInput).Values.ArrayMax = 0;
  (this->RBFTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RBFTargets).ArrayNum = 0;
  (this->RBFTargets).ArrayMax = 0;
  return this;
}

// ~FAnimNode_PoseDriver @ 146408c50

void __thiscall FAnimNode_PoseDriver::~FAnimNode_PoseDriver(FAnimNode_PoseDriver *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRBFTarget,int>
            ((FRBFTarget *)(this->RBFTargets).AllocatorInstance.Data,(this->RBFTargets).ArrayNum);
  pFVar1 = (this->RBFTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RBFInput).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SolverData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->BonesToFilter).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceBoneTMs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseDriverTarget,int>
            ((FPoseDriverTarget *)(this->PoseTargets).AllocatorInstance.Data,
             (this->PoseTargets).ArrayNum);
  pFVar1 = (this->PoseTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OnlyDriveBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// CacheBones_AnyThread @ 146419a80

void __thiscall
FAnimNode_PoseDriver::CacheBones_AnyThread
          (FAnimNode_PoseDriver *this,FAnimationCacheBonesContext *param_1)

{
  int *piVar1;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  float fVar4;
  FBoneContainer *pFVar5;
  FName FVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  UPoseAsset *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  void *_Dst;
  FBoneReference *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FName *pFVar19;
  uint uVar20;
  FBoneReference *pFVar21;
  FScriptContainerElement *pFVar22;
  FName *pFVar23;
  ForAnyElementType FVar24;
  ulonglong uVar25;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97 [3];
  uint local_94;
  undefined1 local_90 [16];
  FName *local_80;
  ForAnyElementType local_78;
  uint local_70;
  int local_6c [11];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseDriver::CacheBones_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FAnimNode_PoseHandler::CacheBoneBlendWeights
            ((FAnimNode_PoseHandler *)this,*(FAnimInstanceProxy **)param_1);
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->SourcePose,param_1);
  lVar17 = *(longlong *)param_1;
  if ((*(longlong *)(lVar17 + 0x660) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = *(FBoneContainer **)(lVar17 + 0x660);
  iVar12 = (this->SourceBones).ArrayNum;
  pFVar16 = (FBoneReference *)(this->SourceBones).AllocatorInstance.Data;
  pFVar21 = pFVar16 + iVar12;
  local_90._8_8_ = pFVar5;
  while( true ) {
    if ((this->SourceBones).ArrayNum != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar21) break;
    FBoneReference::Initialize(pFVar16,pFVar5);
    pFVar16 = pFVar16 + 1;
  }
  iVar12 = (this->OnlyDriveBones).ArrayNum;
  pFVar16 = (FBoneReference *)(this->OnlyDriveBones).AllocatorInstance.Data;
  pFVar21 = pFVar16 + iVar12;
  while( true ) {
    if ((this->OnlyDriveBones).ArrayNum != iVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar16 == pFVar21) break;
    FBoneReference::Initialize(pFVar16,pFVar5);
    pFVar16 = pFVar16 + 1;
  }
  FBoneReference::Initialize(&this->EvalSpaceBone,pFVar5);
  iVar12 = (this->SourceBones).ArrayNum;
  pFVar16 = (FBoneReference *)(this->SourceBones).AllocatorInstance.Data;
  pFVar21 = pFVar16 + iVar12;
  while( true ) {
    if ((this->SourceBones).ArrayNum != iVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar16 == pFVar21) break;
    FBoneReference::GetCompactPoseIndex(pFVar16,(FBoneContainer *)local_90);
    lVar17 = (longlong)(int)local_90._0_4_;
    if ((-1 < (int)local_90._0_4_) && ((int)local_90._0_4_ < (int)this->_padding_)) {
      uVar11 = 0;
      if ((int)local_90._0_4_ < (int)this->_padding_) {
        uVar11 = (uint)~local_90._0_4_ >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(this->_padding_ + lVar17 * 4) = 0;
    }
    pFVar16 = pFVar16 + 1;
  }
  this->bHasOnlyDriveBones = false;
  iVar12 = (this->OnlyDriveBones).ArrayNum;
  pFVar18 = (this->OnlyDriveBones).AllocatorInstance.Data;
  pFVar22 = pFVar18 + (longlong)iVar12 * 0x10;
  while( true ) {
    if ((this->OnlyDriveBones).ArrayNum != iVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar18 == pFVar22) goto LAB_146419cbd;
    if (*(longlong *)pFVar18 != 0) break;
    pFVar18 = pFVar18 + 0x10;
  }
  this->bHasOnlyDriveBones = true;
LAB_146419cbd:
  (this->BonesToFilter).ArrayNum = 0;
  if ((this->BonesToFilter).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BonesToFilter).AllocatorInstance,0,&(this->BonesToFilter).ArrayMax);
  }
  if ((this->bHasOnlyDriveBones == false) ||
     (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar10)) {
LAB_146419f99:
    uVar15 = 0;
    plVar3 = &this->_padding_;
    uVar11 = (uint)*plVar3;
    iVar12 = (int)this->_padding_;
    if (iVar12 < (int)uVar11) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar11 - iVar12,(ForAnyElementType *)&this->_padding_,
                          (int *)&this->_padding_,(int *)((longlong)&this->_padding_ + 4));
      memset((void *)((longlong)iVar13 + this->_padding_),0,(longlong)(int)(uVar11 - iVar12));
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if ((int)uVar11 < iVar12) {
        uVar20 = iVar12 - uVar11;
        if (((int)(uVar11 | uVar20) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar20 != 0) {
          _Dst = (void *)((longlong)(int)uVar11 + this->_padding_);
          iVar12 = ((int)this->_padding_ - uVar11) - uVar20;
          if (iVar12 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar20 + (longlong)_Dst),(longlong)iVar12);
          }
          iVar12 = (int)this->_padding_ - uVar20;
          *(int *)&this->_padding_ = iVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(ForAnyElementType *)&this->_padding_,iVar12,
                     (int *)((longlong)&this->_padding_ + 4));
        }
      }
    }
    fVar8 = __real_322bcc77;
    uVar25 = uVar15;
    if (0 < (int)*plVar3) {
      do {
        uVar20 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar4 = *(float *)(this->_padding_ + uVar25 * 4);
        uVar11 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = (ulonglong)(uVar20 + 1);
        *(bool *)(uVar25 + this->_padding_) = fVar8 < fVar4;
        uVar25 = uVar25 + 1;
      } while ((int)(uVar20 + 1) < (int)*plVar3);
    }
    FStatsHierarchical::EndMeasurement();
    return;
  }
  if (((int)this->_padding_ != (pFVar5->BoneIndicesArray).ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoneBlendWeights.Num() == BoneContainer.GetBoneIndicesArray().Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_PoseDriver.cpp"
                          ,0x6f,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (UPoseAsset *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar14 = UPoseAsset::GetTrackNames(this_00);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = pTVar14->ArrayNum;
  lVar17 = (longlong)(int)local_70;
  pFVar18 = (pTVar14->AllocatorInstance).Data;
  if (local_70 == 0) {
    local_6c[0] = 0;
    local_90._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_70,0,&local_78,local_70,local_6c);
    memcpy(local_78.Data,pFVar18,lVar17 << 3);
    local_90._4_4_ = local_70;
  }
  uVar15 = (ulonglong)(int)local_90._4_4_;
  pTVar2 = &this->BonesToFilter;
  local_80 = (FName *)(local_78.Data + uVar15 * 8);
  FVar24.Data = local_78.Data;
  uVar11 = local_90._4_4_;
LAB_146419dc4:
  pFVar19 = local_80;
  if (uVar11 != (uint)uVar15) {
    local_98 = 0;
    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_98);
  }
  if ((FName *)FVar24.Data != pFVar19) {
    iVar12 = (this->OnlyDriveBones).ArrayNum;
    pFVar19 = (FName *)(this->OnlyDriveBones).AllocatorInstance.Data;
    FVar6 = *(FName *)FVar24.Data;
    pFVar23 = pFVar19 + (longlong)iVar12 * 2;
    while( true ) {
      if ((this->OnlyDriveBones).ArrayNum != iVar12) {
        local_97[0] = 0;
        `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_97);
      }
      uVar9 = local_90._8_8_;
      if (pFVar19 == pFVar23) {
        uVar11 = FBoneContainer::GetPoseBoneIndexForBoneName
                           ((FBoneContainer *)local_90._8_8_,(FName *)FVar24.Data);
        pFVar18 = (((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)uVar9)->AllocatorInstance)
                  .Data;
        pFVar22 = pFVar18;
        goto joined_r0x000146419e46;
      }
      if (*pFVar19 == FVar6) break;
      pFVar19 = pFVar19 + 2;
    }
    goto LAB_146419e5f;
  }
  if ((FName *)local_78.Data != (FName *)0x0) {
    FMemory::Free(local_78.Data);
  }
  goto LAB_146419f99;
joined_r0x000146419e46:
  if (pFVar22 ==
      pFVar18 + (longlong)((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)uVar9)->ArrayNum *
                2) goto LAB_146419e58;
  if (*(ushort *)pFVar22 == uVar11) {
    uVar11 = (uint)((longlong)pFVar22 - (longlong)pFVar18 >> 1);
    local_94 = uVar11;
    if (uVar11 == 0xffffffff) goto LAB_146419e5f;
    uVar20 = 0;
    if ((int)uVar11 < (int)this->_padding_) {
      uVar20 = ~uVar11 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar1 = &(this->BonesToFilter).ArrayMax;
    *(undefined4 *)(this->_padding_ + (longlong)(int)uVar11 * 4) = 0;
    pFVar18 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_94) &&
        ((FScriptContainerElement *)&local_94 < pFVar18 + (longlong)*piVar1 * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (this->BonesToFilter).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->BonesToFilter).ArrayNum = iVar12 + 1;
    FVar24.Data = FVar24.Data + 8;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_94;
    uVar15 = (ulonglong)(uint)local_90._4_4_;
    uVar11 = local_70;
    goto LAB_146419dc4;
  }
  pFVar22 = pFVar22 + 2;
  goto joined_r0x000146419e46;
LAB_146419e58:
  local_94 = 0xffffffff;
LAB_146419e5f:
  FVar24.Data = FVar24.Data + 8;
  uVar15 = (ulonglong)(uint)local_90._4_4_;
  uVar11 = local_70;
  goto LAB_146419dc4;
}

// Evaluate_AnyThread @ 14643bd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_PoseDriver::Evaluate_AnyThread(FAnimNode_PoseDriver *this,FPoseContext *param_1)

{
  __m128d *p_Var1;
  FCompactPose *pFVar2;
  undefined1 *puVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TSharedPtr<FRBFSolverData_const_,1> *pTVar5;
  VectorRegister4Double *pVVar6;
  double *pdVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ForAnyElementType FVar20;
  ForElementType<UE::Math::TTransform<double>_> FVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  char cVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_PoseDriver::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_PoseDriver_Eval>
  FVar31;
  TTransform<double> *pTVar32;
  TTransform<double> *pTVar33;
  TSharedPtr<FRBFSolverData_const_,1> *pTVar34;
  UObject *pUVar35;
  ulonglong uVar36;
  TTransform<double> *this_00;
  TTransform<double> *__return_storage_ptr__;
  FName FVar37;
  UPoseAsset *this_01;
  FBoneReference *this_02;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  longlong lVar40;
  ulong64 uVar41;
  FBoneReference *pFVar42;
  int *piVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStackY_5a8 [32];
  <lambda_1> local_546;
  undefined1 local_545;
  undefined1 local_544;
  undefined1 local_543;
  undefined1 local_542 [2];
  undefined1 local_540 [16];
  FName local_530;
  UPoseAsset *local_528;
  FColor_u_0 local_520;
  FCompactPoseBoneIndex local_51c;
  uint local_518;
  undefined1 local_514 [12];
  undefined1 local_508 [8];
  FWeakObjectPtr local_500;
  FBoneContainer *local_4f8;
  ForAnyElementType FStack_4f0;
  undefined8 local_4e8;
  ForAnyElementType local_4e0;
  undefined8 local_4d8;
  ForElementType<FCompactPoseBoneIndex> local_4d0;
  undefined8 local_4c8;
  undefined1 local_4b8 [12];
  int iStack_4ac;
  bool local_4a8;
  ForAnyElementType local_4a0;
  undefined1 local_498 [32];
  TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> local_478;
  FBoneContainer *local_468;
  undefined1 auStack_460 [16];
  undefined1 local_450;
  undefined8 local_448;
  undefined1 auStack_440 [16];
  ForAnyElementType local_430;
  undefined8 local_428;
  ForAnyElementType local_420;
  undefined8 local_418;
  ForAnyElementType local_410;
  undefined8 local_408;
  bool local_400;
  FName local_3f8;
  UPoseAsset *local_3f0;
  FName local_3e8;
  undefined1 local_3d8 [88];
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_380;
  bool local_340;
  FAnimationPoseData local_338;
  TVector<double>_u_0 local_320;
  FName local_308;
  TSharedPtr<FRBFSolverData_const_,1> local_300;
  FName local_2f0;
  TQuat<double> local_2e8;
  TRotator<double> local_2c8;
  FAnimationPoseData local_2b0;
  FAnimationPoseData local_298;
  FAnimationPoseData local_280;
  undefined1 local_268 [8];
  undefined8 uStack_260;
  undefined1 local_258 [8];
  undefined8 uStack_250;
  undefined1 local_248 [8];
  undefined8 uStack_240;
  undefined1 local_238 [8];
  double dStack_230;
  double local_228 [2];
  undefined1 local_218 [8];
  undefined8 uStack_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseDriver::Evaluate_AnyThread");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_PoseDriver_Eval ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_PoseDriver::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_PoseDriver_Eval>
           )0x0) {
        pFVar30 = ::FName::FName(&local_308,"STAT_PoseDriver_Eval");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseDriver_Eval,*pFVar30,
                   L"STAT_PoseDriver_Eval","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar31 = StatPtr_STAT_PoseDriver_Eval;
  if (StatPtr_STAT_PoseDriver_Eval ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_PoseDriver::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_PoseDriver_Eval>
       )0x0) {
    pFVar30 = ::FName::FName(&local_2f0,"STAT_PoseDriver_Eval");
    FVar31 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_PoseDriver::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_PoseDriver_Eval>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseDriver_Eval,*pFVar30,
                          L"STAT_PoseDriver_Eval","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                          ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar31;
  bVar11 = false;
  bVar12 = false;
  local_3e8.ComparisonIndex.Value = 0;
  local_3e8.Number = 0;
  bVar22 = false;
  bVar23 = false;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_14643bed6:
    bVar12 = bVar23;
    bVar11 = bVar22;
    bVar22 = false;
    local_530 = local_3e8;
    FVar37 = local_3e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_520.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_520._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar22 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3f8.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_3f8.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3f8,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_PoseDriver.cpp"
                   ,0xfa);
        bVar11 = true;
        bVar12 = true;
        bVar22 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14643bed6;
    local_530 = FVar37;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar22 = true;
  }
  bVar23 = FAnimNode_Base::IsLODEnabled
                     ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  if (!bVar23) {
    FPoseLink::Evaluate(&this->SourcePose,param_1);
    goto LAB_14643cd25;
  }
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)local_498,(FAnimInstanceProxy *)param_1->_padding_,
             (FAnimationUpdateSharedContext *)0x0);
  local_400 = param_1->bExpectsAdditivePose != false;
  local_478.AllocatorInstance.Data = (TTransform<double> *)0x0;
  local_478.ArrayNum = 0;
  local_478.ArrayMax = 0;
  local_468 = (FBoneContainer *)0x0;
  auStack_460._0_8_ = 0;
  auStack_460._8_8_ = (FSkelMeshRefPoseOverride *)0x0;
  local_450 = 0;
  local_448 = 0;
  auStack_440._0_8_ = (FScriptContainerElement *)0x0;
  auStack_440._8_8_ = 0;
  local_430.Data = (FScriptContainerElement *)0x0;
  local_428 = 0;
  local_420.Data = (FScriptContainerElement *)0x0;
  local_418._0_4_ = 0;
  local_418._4_4_ = 0;
  local_410.Data = (FScriptContainerElement *)0x0;
  local_408 = 0;
  FPoseContext::InitializeImpl((FPoseContext *)local_498,(FAnimInstanceProxy *)param_1->_padding_);
  local_498._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
  local_498._24_4_ = (undefined4)param_1->_padding_;
  FPoseLink::Evaluate(&this->SourcePose,(FPoseContext *)local_498);
  if (this->bCachedDrivenIDsAreDirty != 0) {
    bVar23 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar23) {
      pcVar8 = *(code **)(this->_padding_ + 0x150);
      FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FAnimInstanceProxy::GetRequiredBones((FAnimInstanceProxy *)param_1->_padding_);
      (*pcVar8)(this);
    }
  }
  piVar43 = &(this->RBFInput).Values.ArrayMax;
  local_540._8_8_ = local_468;
  iVar27 = *piVar43;
  (this->RBFInput).Values.ArrayNum = 0;
  if (iVar27 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->RBFInput,0,piVar43);
  }
  pTVar4 = &this->SourceBoneTMs;
  (this->SourceBoneTMs).ArrayNum = 0;
  if ((this->SourceBoneTMs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&pTVar4->AllocatorInstance,0,&(this->SourceBoneTMs).ArrayMax);
  }
  local_518 = (this->SourceBones).ArrayNum;
  uVar36 = (ulonglong)(int)local_518;
  bVar23 = false;
  this_01 = (UPoseAsset *)(this->SourceBones).AllocatorInstance.Data;
  local_528 = (UPoseAsset *)(&this_01->_padding_ + uVar36 * 2);
  while( true ) {
    local_3f0 = this_01;
    if ((this->SourceBones).ArrayNum != (int)uVar36) {
      local_545 = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_545);
    }
    if (this_01 == local_528) break;
    local_268 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    uStack_260 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_258 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    uStack_250 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_248 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    uStack_240 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_238 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    dStack_230 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_228[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_228[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_218 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    uStack_210 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    FBoneReference::GetCompactPoseIndex((FBoneReference *)this_01,(FBoneContainer *)local_540);
    uVar13 = local_540._8_8_;
    if ((FCompactPoseBoneIndex)local_540._0_4_ == (FCompactPoseBoneIndex)0xffffffff) {
      uVar44 = local_268._0_4_;
      uVar45 = local_268._4_4_;
      uVar46 = (undefined4)uStack_260;
      uVar47 = uStack_260._4_4_;
      uVar48 = local_258._0_4_;
      uVar49 = local_258._4_4_;
      uVar50 = (undefined4)uStack_250;
      uVar51 = uStack_250._4_4_;
      uVar52 = local_248._0_4_;
      uVar53 = local_248._4_4_;
      uVar54 = (undefined4)uStack_240;
      uVar55 = uStack_240._4_4_;
      uVar56 = local_238._0_4_;
      uVar57 = local_238._4_4_;
    }
    else {
      bVar23 = FBoneReference::IsValidToEvaluate
                         (&this->EvalSpaceBone,(FBoneContainer *)local_540._8_8_);
      if (bVar23) {
        local_508._0_4_ = 0;
        local_508._4_4_ = 0;
        local_500.ObjectIndex = 0;
        local_500.ObjectSerialNumber = 0;
        local_4f8 = (FBoneContainer *)0x0;
        FStack_4f0.Data = (FScriptContainerElement *)0x0;
        local_4e8 = 0;
        local_4e0.Data = (FScriptContainerElement *)0x0;
        local_4d8._0_4_ = 0;
        local_4d8._4_4_ = 0;
        local_4d0.Data = (FCompactPoseBoneIndex *)0x0;
        local_4c8 = 0;
        FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
                  ((FBaseCompactPose<TMemStackAllocator<0>_> *)local_508,local_468);
        FVar21.Data = local_478.AllocatorInstance.Data;
        iVar27 = local_478.ArrayNum;
        lVar40 = (longlong)local_478.ArrayNum;
        local_500.ObjectIndex = local_478.ArrayNum;
        if ((local_478.ArrayNum == 0) && (local_500.ObjectSerialNumber == 0)) {
          local_500 = (FWeakObjectPtr)(local_478._8_8_ & 0xffffffff);
          uVar41 = 0;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                    (0x60,0x10,local_478.ArrayNum,local_500.ObjectSerialNumber,
                     (ForElementType<UE::Math::TTransform<double>_> *)local_508,local_478.ArrayNum,
                     &local_500.ObjectSerialNumber);
          if (iVar27 != 0) {
            memcpy((void *)local_508,FVar21.Data,lVar40 * 0x60);
          }
          uVar41 = (ulonglong)local_500 & 0xffffffff;
        }
        iVar27 = (int)uVar41;
        if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar41);
        }
        uVar36 = local_4e8 >> 0x20;
        local_4e8 = local_4e8 & 0xffffffff00000000;
        if ((int)uVar36 != iVar27) {
          UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                    (1,1,iVar27,(ForElementType<unsigned_char> *)&FStack_4f0,0,
                     (int *)((longlong)&local_4e8 + 4));
          iVar27 = local_500.ObjectIndex;
        }
        iVar26 = UE::Core::Private::
                 ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                           (1,1,iVar27,(ForElementType<unsigned_char> *)&FStack_4f0,
                            (int *)&local_4e8,(int *)((longlong)&local_4e8 + 4));
        FVar20.Data = FStack_4f0.Data;
        memset(FStack_4f0.Data + iVar26,0,(longlong)iVar27);
        if ((int)local_4e8 < 1) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        *FVar20.Data = (FScriptContainerElement)0x1;
        FBoneReference::GetCompactPoseIndex(&this->EvalSpaceBone,(FBoneContainer *)&local_51c);
        pTVar32 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)local_508,local_51c);
        local_208.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
        local_208.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
        local_208.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
        local_208.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
        local_208.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
        local_208.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
        local_208.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
        local_208.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
        local_208.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
        local_208.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
        local_208.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
        local_208.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
        pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)local_508,
                             (FCompactPoseBoneIndex)local_540._0_4_);
        pTVar32 = &local_208;
        __return_storage_ptr__ = &local_148;
        this_00 = &local_1a8;
        local_1a8.Rotation.XY.m128d_f64[0] = (pTVar33->Rotation).XY.m128d_f64[0];
        local_1a8.Rotation.XY.m128d_f64[1] = (pTVar33->Rotation).XY.m128d_f64[1];
        local_1a8.Rotation.ZW.m128d_f64[0] = (pTVar33->Rotation).ZW.m128d_f64[0];
        local_1a8.Rotation.ZW.m128d_f64[1] = (pTVar33->Rotation).ZW.m128d_f64[1];
        local_1a8.Translation.XY.m128d_f64[0] = (pTVar33->Translation).XY.m128d_f64[0];
        local_1a8.Translation.XY.m128d_f64[1] = (pTVar33->Translation).XY.m128d_f64[1];
        local_1a8.Translation.ZW.m128d_f64[0] = (pTVar33->Translation).ZW.m128d_f64[0];
        local_1a8.Translation.ZW.m128d_f64[1] = (pTVar33->Translation).ZW.m128d_f64[1];
        local_1a8.Scale3D.XY.m128d_f64[0] = (pTVar33->Scale3D).XY.m128d_f64[0];
        local_1a8.Scale3D.XY.m128d_f64[1] = (pTVar33->Scale3D).XY.m128d_f64[1];
        local_1a8.Scale3D.ZW.m128d_f64[0] = (pTVar33->Scale3D).ZW.m128d_f64[0];
        local_1a8.Scale3D.ZW.m128d_f64[1] = (pTVar33->Scale3D).ZW.m128d_f64[1];
LAB_14643c335:
        pTVar32 = UE::Math::TTransform<double>::GetRelativeTransform
                            (this_00,__return_storage_ptr__,pTVar32);
        uVar44 = *(undefined4 *)(pTVar32->Rotation).XY.m128d_f64;
        uVar45 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 4);
        uVar46 = *(undefined4 *)((pTVar32->Rotation).XY.m128d_f64 + 1);
        uVar47 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 0xc);
        _local_268 = *&(pTVar32->Rotation).XY.m128d_f64;
        p_Var1 = &(pTVar32->Rotation).ZW;
        uVar48 = *(undefined4 *)p_Var1->m128d_f64;
        uVar49 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 4);
        uVar50 = *(undefined4 *)((pTVar32->Rotation).ZW.m128d_f64 + 1);
        uVar51 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 0xc);
        _local_258 = *&p_Var1->m128d_f64;
        uVar52 = *(undefined4 *)(pTVar32->Translation).XY.m128d_f64;
        uVar53 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 4);
        uVar54 = *(undefined4 *)((pTVar32->Translation).XY.m128d_f64 + 1);
        uVar55 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 0xc);
        _local_248 = *&(pTVar32->Translation).XY.m128d_f64;
        p_Var1 = &(pTVar32->Translation).ZW;
        uVar56 = *(undefined4 *)p_Var1->m128d_f64;
        uVar57 = *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 4);
        _local_238 = *&p_Var1->m128d_f64;
        local_228 = *&(pTVar32->Scale3D).XY.m128d_f64;
        local_218._0_4_ = *(undefined4 *)(pTVar32->Scale3D).ZW.m128d_f64;
        local_218._4_4_ = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 4);
        uStack_210._0_4_ = *(undefined4 *)((pTVar32->Scale3D).ZW.m128d_f64 + 1);
        uStack_210._4_4_ = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        lVar40 = (longlong)(int)local_540._0_4_;
        if ((this->bEvalFromRefPose != false) &&
           ((int)local_540._0_4_ <
            ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)uVar13)->ArrayNum)) {
          uVar39 = 0;
          if ((int)local_540._0_4_ < local_478.ArrayNum) {
            uVar39 = (uint)~local_540._0_4_ >> 0x1f;
          }
          if (uVar39 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          FVar21.Data = local_478.AllocatorInstance.Data;
          pTVar32 = FBoneContainer::GetRefPoseTransform
                              ((FBoneContainer *)local_540._8_8_,(FCompactPoseBoneIndex *)local_540)
          ;
          __return_storage_ptr__ = &local_e8;
          this_00 = FVar21.Data + lVar40;
          goto LAB_14643c335;
        }
        uVar39 = 0;
        if ((int)local_540._0_4_ < local_478.ArrayNum) {
          uVar39 = (uint)~local_540._0_4_ >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pTVar32 = local_478.AllocatorInstance.Data + lVar40;
        uVar44 = *(undefined4 *)(pTVar32->Rotation).XY.m128d_f64;
        uVar45 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 4);
        uVar46 = *(undefined4 *)((pTVar32->Rotation).XY.m128d_f64 + 1);
        uVar47 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 0xc);
        _local_268 = *&(pTVar32->Rotation).XY.m128d_f64;
        p_Var1 = &local_478.AllocatorInstance.Data[lVar40].Rotation.ZW;
        uVar48 = *(undefined4 *)p_Var1->m128d_f64;
        uVar49 = *(undefined4 *)((longlong)p_Var1->m128d_f64 + 4);
        uVar50 = *(undefined4 *)(p_Var1->m128d_f64 + 1);
        uVar51 = *(undefined4 *)((longlong)p_Var1->m128d_f64 + 0xc);
        _local_258 = *&p_Var1->m128d_f64;
        pVVar6 = &local_478.AllocatorInstance.Data[lVar40].Translation;
        uVar52 = *(undefined4 *)(pVVar6->XY).m128d_f64;
        uVar53 = *(undefined4 *)((longlong)(pVVar6->XY).m128d_f64 + 4);
        uVar54 = *(undefined4 *)((pVVar6->XY).m128d_f64 + 1);
        uVar55 = *(undefined4 *)((longlong)(pVVar6->XY).m128d_f64 + 0xc);
        _local_248 = *&(pVVar6->XY).m128d_f64;
        p_Var1 = &local_478.AllocatorInstance.Data[lVar40].Translation.ZW;
        uVar56 = *(undefined4 *)p_Var1->m128d_f64;
        uVar57 = *(undefined4 *)((longlong)p_Var1->m128d_f64 + 4);
        _local_238 = *&p_Var1->m128d_f64;
        local_228 = *&local_478.AllocatorInstance.Data[lVar40].Scale3D.XY.m128d_f64;
        pVVar6 = &local_478.AllocatorInstance.Data[lVar40].Scale3D;
        local_218._0_4_ = *(undefined4 *)(pVVar6->ZW).m128d_f64;
        local_218._4_4_ = *(undefined4 *)((longlong)(pVVar6->ZW).m128d_f64 + 4);
        uStack_210._0_4_ = *(undefined4 *)((pVVar6->ZW).m128d_f64 + 1);
        uStack_210._4_4_ = *(undefined4 *)((longlong)(pVVar6->ZW).m128d_f64 + 0xc);
      }
      bVar23 = true;
      this_01 = local_3f0;
    }
    piVar43 = &(this->SourceBoneTMs).ArrayMax;
    if (this->DriveSource == Translation) {
      local_320._s_0.Z = (double)CONCAT44(uVar57,uVar56);
      local_320._0_4_ = uVar52;
      local_320._4_4_ = uVar53;
      local_320._8_4_ = uVar54;
      local_320._12_4_ = uVar55;
      FRBFEntry::AddFromVector(&this->RBFInput,(TVector<double> *)&local_320._s_0);
    }
    else {
      local_2e8.X._0_4_ = uVar44;
      local_2e8.X._4_4_ = uVar45;
      local_2e8.Y._0_4_ = uVar46;
      local_2e8.Y._4_4_ = uVar47;
      local_2e8.Z._0_4_ = uVar48;
      local_2e8.Z._4_4_ = uVar49;
      local_2e8.W._0_4_ = uVar50;
      local_2e8.W._4_4_ = uVar51;
      UE::Math::TQuat<double>::Rotator(&local_2e8,&local_2c8);
      FRBFEntry::AddFromRotator(&this->RBFInput,&local_2c8);
    }
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if ((pFVar9 <= (FScriptContainerElement *)local_268) &&
       ((FScriptContainerElement *)local_268 < pFVar9 + (longlong)*piVar43 * 0x60)) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar27 = (this->SourceBoneTMs).ArrayNum;
    if (iVar27 == *piVar43) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&pTVar4->AllocatorInstance,piVar43);
    }
    (this->SourceBoneTMs).ArrayNum = iVar27 + 1;
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    lVar40 = (longlong)iVar27 * 0x60;
    this_01 = (UPoseAsset *)&this_01->_padding_;
    *(undefined1 (*) [8])(pFVar9 + lVar40) = local_268;
    *(double *)(pFVar9 + lVar40 + 8) = uStack_260;
    *(undefined1 (*) [8])(pFVar9 + lVar40 + 0x10) = local_258;
    *(double *)(pFVar9 + lVar40 + 0x10 + 8) = uStack_250;
    *(undefined1 (*) [8])(pFVar9 + lVar40 + 0x20) = local_248;
    *(double *)(pFVar9 + lVar40 + 0x20 + 8) = uStack_240;
    *(undefined1 (*) [8])(pFVar9 + lVar40 + 0x30) = local_238;
    *(double *)(pFVar9 + lVar40 + 0x30 + 8) = dStack_230;
    *(double *)(pFVar9 + lVar40 + 0x40) = local_228[0];
    *(double *)(pFVar9 + lVar40 + 0x40 + 8) = local_228[1];
    *(undefined1 (*) [8])(pFVar9 + lVar40 + 0x50) = local_218;
    *(double *)(pFVar9 + lVar40 + 0x50 + 8) = uStack_210;
    uVar36 = (ulonglong)local_518;
  }
  if (bVar23) {
    (this->RBFParams).TargetDimensions = (this->SourceBones).ArrayNum * 3;
    piVar43 = &(this->OutputWeights).ArrayMax;
    (this->OutputWeights).ArrayNum = 0;
    if (*piVar43 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->OutputWeights).AllocatorInstance,0,piVar43);
    }
    GetRBFTargets(this,&this->RBFTargets,(FBoneContainer *)local_540._8_8_);
    pTVar5 = &this->SolverData;
    if (pTVar5->Object == (FRBFSolverData *)0x0) {
LAB_14643c6b3:
      pTVar34 = FRBFSolver::InitSolver(&local_300,&this->RBFParams,&this->RBFTargets);
      if (pTVar5 != pTVar34) {
        pTVar5->Object = pTVar34->Object;
        pTVar34->Object = (FRBFSolverData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SolverData).SharedReferenceCount,&pTVar34->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_300.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar23 = FRBFSolver::IsSolverDataValid(pTVar5->Object,&this->RBFParams,&this->RBFTargets);
      if (!bVar23) goto LAB_14643c6b3;
    }
    if (pTVar5->Object == (FRBFSolverData *)0x0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar23) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FRBFSolver::Solve(pTVar5->Object,&this->RBFParams,&this->RBFTargets,&this->RBFInput,
                      &this->OutputWeights);
    bVar23 = false;
    if ((this->OutputWeights).ArrayNum < 1) goto LAB_14643ccce;
    if (this->DriveOutput == DrivePoses) {
      local_528 = (UPoseAsset *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if ((local_528 != (UPoseAsset *)0x0) && (local_528->_padding_ != 0)) {
        iVar27 = (int)this->_padding_;
        uVar39 = 0;
        if (0 < iVar27) {
          lVar40 = 0;
          do {
            uVar28 = 0;
            if ((int)uVar39 < iVar27) {
              uVar28 = ~uVar39 >> 0x1f;
            }
            if (uVar28 == 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar39 = uVar39 + 1;
            *(undefined4 *)(lVar40 + 0xc + this->_padding_) = 0;
            lVar40 = lVar40 + 0x10;
            iVar27 = (int)this->_padding_;
          } while ((int)uVar39 < iVar27);
        }
        pFVar38 = (this->OutputWeights).AllocatorInstance.Data;
        iVar27 = (this->OutputWeights).ArrayNum;
        pFVar9 = pFVar38 + (longlong)iVar27 * 8;
        while( true ) {
          if ((this->OutputWeights).ArrayNum != iVar27) {
            local_544 = 0;
            `TCheckedPointerIterator<FRBFOutputWeight,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_544);
          }
          if (pFVar38 == pFVar9) break;
          uVar39 = *(uint *)pFVar38;
          uVar28 = 0;
          if ((int)uVar39 < (this->PoseTargets).ArrayNum) {
            uVar28 = ~uVar39 >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar24) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          uVar39 = *(uint *)((this->PoseTargets).AllocatorInstance.Data +
                            (longlong)(int)uVar39 * 0xc0 + 0xb8);
          if (uVar39 != 0xffffffff) {
            uVar28 = *(uint *)(pFVar38 + 4);
            uVar29 = 0;
            if ((int)uVar39 < (int)this->_padding_) {
              uVar29 = ~uVar39 >> 0x1f;
            }
            if (uVar29 == 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            *(uint *)(this->_padding_ + 0xc + (longlong)(int)uVar39 * 0x10) = uVar28;
          }
          pFVar38 = pFVar38 + 8;
        }
        FAnimationBaseContext::FAnimationBaseContext
                  ((FAnimationBaseContext *)local_3d8,(FAnimInstanceProxy *)param_1->_padding_,
                   (FAnimationUpdateSharedContext *)0x0);
        local_340 = param_1->bExpectsAdditivePose != false;
        local_3d8._32_8_ = 0;
        local_3d8._40_8_ = 0;
        local_3d8._48_8_ = 0;
        local_3d8._56_8_ = 0;
        local_3d8._64_8_ = 0;
        local_3d8[0x48] = 0;
        local_3d8._80_8_ = 0;
        TStack_380.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_380.UniqueTypedBoneIndices.ArrayNum = 0;
        TStack_380.UniqueTypedBoneIndices.ArrayMax = 0;
        TStack_380.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_380.AttributeIdentifiers.ArrayNum = 0;
        TStack_380.AttributeIdentifiers.ArrayMax = 0;
        TStack_380.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_380.Values.ArrayNum = 0;
        TStack_380.Values.ArrayMax = 0;
        TStack_380.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_380.UniqueTypes.ArrayNum = 0;
        TStack_380.UniqueTypes.ArrayMax = 0;
        FPoseContext::InitializeImpl
                  ((FPoseContext *)local_3d8,(FAnimInstanceProxy *)param_1->_padding_);
        local_3d8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
        local_3d8._24_4_ = (undefined4)param_1->_padding_;
        FAnimationPoseData::FAnimationPoseData(&local_338,(FPoseContext *)local_3d8);
        bVar24 = UPoseAsset::GetAnimationPose
                           (local_528,&local_338,(FAnimExtractContext *)&this->_padding_);
        if (bVar24) {
          pUVar35 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          cVar25 = (**(code **)(*(longlong *)pUVar35 + 0x2d0))(pUVar35);
          dVar19 = UE::Math::TQuat<double>::Identity.W;
          dVar18 = UE::Math::TQuat<double>::Identity.Z;
          dVar17 = UE::Math::TQuat<double>::Identity.Y;
          dVar16 = UE::Math::TQuat<double>::Identity.X;
          uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          if (cVar25 == '\0') {
            FAnimationPoseData::FAnimationPoseData(&local_280,(FPoseContext *)local_498);
            FAnimationPoseData::FAnimationPoseData(&local_298,param_1);
            FAnimationRuntime::BlendTwoPosesTogetherPerBone
                      (&local_280,&local_338,
                       (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_298);
          }
          else {
            iVar27 = (this->SourceBones).ArrayNum;
            this_02 = (FBoneReference *)(this->SourceBones).AllocatorInstance.Data;
            pFVar42 = this_02 + iVar27;
            while( true ) {
              if ((this->SourceBones).ArrayNum != iVar27) {
                local_543 = 0;
                `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_543);
              }
              FVar37 = local_530;
              if (this_02 == pFVar42) break;
              FBoneReference::GetCompactPoseIndex(this_02,(FBoneContainer *)local_514);
              lVar40 = (longlong)(int)local_514._0_4_;
              uVar39 = 0;
              if ((int)local_514._0_4_ < (int)local_3d8._40_4_) {
                uVar39 = (uint)~local_514._0_4_ >> 0x1f;
              }
              if (uVar39 == 0) {
                bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar23) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              lVar40 = lVar40 * 0x60;
              this_02 = this_02 + 1;
              *(double *)(lVar40 + local_3d8._32_8_) = dVar16;
              ((double *)(lVar40 + local_3d8._32_8_))[1] = dVar17;
              pdVar7 = (double *)(lVar40 + 0x10 + local_3d8._32_8_);
              *pdVar7 = dVar18;
              pdVar7[1] = dVar19;
              pdVar7 = (double *)(lVar40 + 0x20 + local_3d8._32_8_);
              *pdVar7 = (double)uVar13;
              pdVar7[1] = (double)uVar14;
              pdVar7 = (double *)(lVar40 + 0x30 + local_3d8._32_8_);
              *pdVar7 = (double)uVar15;
              pdVar7[1] = 0.0;
              pdVar7 = (double *)(lVar40 + 0x40 + local_3d8._32_8_);
              *pdVar7 = (double)uVar13;
              pdVar7[1] = (double)uVar14;
              pdVar7 = (double *)(lVar40 + 0x50 + local_3d8._32_8_);
              *pdVar7 = (double)uVar15;
              pdVar7[1] = 0.0;
            }
            if (this->bHasOnlyDriveBones != false) {
              pFVar38 = (this->BonesToFilter).AllocatorInstance.Data;
              iVar27 = (this->BonesToFilter).ArrayNum;
              pFVar9 = pFVar38 + (longlong)iVar27 * 4;
              while( true ) {
                if ((this->BonesToFilter).ArrayNum != iVar27) {
                  local_542[0] = 0;
                  `TCheckedPointerIterator<FCompactPoseBoneIndex,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_542);
                }
                if (pFVar38 == pFVar9) break;
                uVar39 = *(uint *)pFVar38;
                uVar28 = 0;
                if ((int)uVar39 < (int)local_3d8._40_4_) {
                  uVar28 = ~uVar39 >> 0x1f;
                }
                if (uVar28 == 0) {
                  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar23) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar40 = (longlong)(int)uVar39 * 0x60;
                pFVar38 = pFVar38 + 4;
                *(double *)(lVar40 + local_3d8._32_8_) = dVar16;
                ((double *)(lVar40 + local_3d8._32_8_))[1] = dVar17;
                pdVar7 = (double *)(lVar40 + 0x10 + local_3d8._32_8_);
                *pdVar7 = dVar18;
                pdVar7[1] = dVar19;
                pdVar7 = (double *)(lVar40 + 0x20 + local_3d8._32_8_);
                *pdVar7 = (double)uVar13;
                pdVar7[1] = (double)uVar14;
                pdVar7 = (double *)(lVar40 + 0x30 + local_3d8._32_8_);
                *pdVar7 = (double)uVar15;
                pdVar7[1] = 0.0;
                pdVar7 = (double *)(lVar40 + 0x40 + local_3d8._32_8_);
                *pdVar7 = (double)uVar13;
                pdVar7[1] = (double)uVar14;
                pdVar7 = (double *)(lVar40 + 0x50 + local_3d8._32_8_);
                *pdVar7 = (double)uVar15;
                pdVar7[1] = 0.0;
              }
            }
            if ((FAnimInstanceProxy *)param_1->_padding_ != (FAnimInstanceProxy *)local_498._0_8_) {
              FPoseContext::InitializeImpl(param_1,(FAnimInstanceProxy *)param_1->_padding_);
            }
            TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
                      ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)&param_1->Pose
                       ,&local_478);
            *(FBoneContainer **)&(param_1->Pose).field_0x10 = local_468;
            FBlendedCurve::operator=(&param_1->Curve,(FBlendedCurve *)auStack_460);
            UE::Anim::FStackAttributeContainer::operator=
                      (&param_1->CustomAttributes,(FStackAttributeContainer *)auStack_440);
            param_1->bExpectsAdditivePose = local_400;
            FAnimationPoseData::FAnimationPoseData(&local_2b0,param_1);
            FAnimationRuntime::AccumulateAdditivePose
                      (&local_2b0,&local_338,__real_3f800000,AAT_LocalSpaceBase);
          }
          bVar23 = true;
        }
        UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
        ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_380);
        if (bVar23) goto LAB_14643cd1c;
      }
      goto LAB_14643ccce;
    }
    if (this->DriveOutput != DriveCurves) goto LAB_14643ccce;
    if ((FAnimInstanceProxy *)param_1->_padding_ != (FAnimInstanceProxy *)local_498._0_8_) {
      FPoseContext::InitializeImpl(param_1,(FAnimInstanceProxy *)param_1->_padding_);
    }
    FVar21.Data = local_478.AllocatorInstance.Data;
    pFVar2 = &param_1->Pose;
    if (pFVar2 != (FCompactPose *)&local_478) {
      iVar27 = local_478.ArrayNum;
      lVar40 = (longlong)local_478.ArrayNum;
      puVar3 = &(param_1->Pose).field_0xc;
      *(int *)&(param_1->Pose).field_0x8 = local_478.ArrayNum;
      if ((local_478.ArrayNum == 0) && (*(int *)puVar3 == 0)) {
        *(undefined4 *)puVar3 = 0;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,local_478.ArrayNum,*(int *)puVar3,
                   (ForElementType<UE::Math::TTransform<double>_> *)pFVar2,local_478.ArrayNum,
                   (int *)puVar3);
        if (iVar27 != 0) {
          memcpy(*(void **)pFVar2,FVar21.Data,lVar40 * 0x60);
        }
      }
    }
    local_528 = (UPoseAsset *)&param_1->Curve;
    *(FBoneContainer **)&(param_1->Pose).field_0x10 = local_468;
    FBlendedCurve::operator=((FBlendedCurve *)local_528,(FBlendedCurve *)auStack_460);
    UE::Anim::FStackAttributeContainer::operator=
              (&param_1->CustomAttributes,(FStackAttributeContainer *)auStack_440);
    param_1->bExpectsAdditivePose = local_400;
    iVar26 = 0;
    pFVar38 = (this->OutputWeights).AllocatorInstance.Data;
    iVar27 = (this->OutputWeights).ArrayNum;
    local_4b8._0_8_ = (FCurveElement *)0x0;
    stack0xfffffffffffffb50 = (FScriptContainerElement *)0x0;
    local_4a8 = false;
    pFVar9 = pFVar38 + (longlong)iVar27 * 8;
    local_4a0.Data = (FScriptContainerElement *)0x0;
    while( true ) {
      if ((this->OutputWeights).ArrayNum != iVar27) {
        local_546 = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FRBFOutputWeight,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_546);
      }
      if (pFVar38 == pFVar9) break;
      uVar39 = *(uint *)pFVar38;
      uVar28 = 0;
      if ((int)uVar39 < (this->PoseTargets).ArrayNum) {
        uVar28 = ~uVar39 >> 0x1f;
      }
      if (uVar28 == 0) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar23) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar10 = (this->PoseTargets).AllocatorInstance.Data;
      if (*(longlong *)(pFVar10 + (longlong)(int)uVar39 * 0xc0 + 0xb0) != 0) {
        if (iVar26 == iStack_4ac) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)local_4b8,&iStack_4ac
                             );
        }
        FVar37 = *(FName *)(pFVar10 + (longlong)(int)uVar39 * 0xc0 + 0xb0);
        local_4b8._8_4_ = iVar26 + 1;
        local_4a8 = false;
        ((FCurveElement *)(local_4b8._0_8_ + (longlong)iVar26 * 0x10))->Value =
             *(float *)(pFVar38 + 4);
        ((FCurveElement *)(local_4b8._0_8_ + (longlong)iVar26 * 0x10))->Name = FVar37;
        ((FCurveElement *)(local_4b8._0_8_ + (longlong)iVar26 * 0x10))->Flags = None;
        iVar26 = iVar26 + 1;
      }
      pFVar38 = pFVar38 + 8;
    }
    UE::Anim::FNamedValueArrayUtils::
    Union<_FAnimNode_PoseDriver::Evaluate_AnyThread_::__l81::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_528,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_4b8,
               local_546);
    FVar37 = local_530;
  }
  else {
LAB_14643ccce:
    if ((FAnimInstanceProxy *)param_1->_padding_ != (FAnimInstanceProxy *)local_498._0_8_) {
      FPoseContext::InitializeImpl(param_1,(FAnimInstanceProxy *)param_1->_padding_);
    }
    TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)&param_1->Pose,
               &local_478);
    *(FBoneContainer **)&(param_1->Pose).field_0x10 = local_468;
    FBlendedCurve::operator=(&param_1->Curve,(FBlendedCurve *)auStack_460);
    UE::Anim::FStackAttributeContainer::operator=
              (&param_1->CustomAttributes,(FStackAttributeContainer *)auStack_440);
    param_1->bExpectsAdditivePose = local_400;
  }
LAB_14643cd1c:
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
            ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)auStack_440);
LAB_14643cd25:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1464450e0

void __thiscall
FAnimNode_PoseDriver::GatherDebugData(FAnimNode_PoseDriver *this,FNodeDebugData *param_1)

{
  FNodeDebugData *pFVar1;
  FString local_18;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseDriver::GatherDebugData");
  FAnimNode_PoseHandler::GatherDebugData((FAnimNode_PoseHandler *)this,param_1);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pFVar1 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_18);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->SourcePose,pFVar1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLODThreshold @ 14644b460

int __thiscall FAnimNode_PoseDriver::GetLODThreshold(FAnimNode_PoseDriver *this)

{
  return this->LODThreshold;
}

// GetRBFTargets @ 14644dad0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_PoseDriver::GetRBFTargets
          (FAnimNode_PoseDriver *this,TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *param_1,
          FBoneContainer *param_2)

{
  int *piVar1;
  int *piVar2;
  FRBFTarget *pFVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  TTransform<double> *pTVar28;
  TQuat<double> *pTVar29;
  TRotator<double> *pTVar30;
  uint uVar31;
  char *pcVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  TVector<double> *pTVar37;
  FBoneContainer *this_00;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar85;
  uint uVar94;
  uint uVar95;
  __m128d _Var86;
  uint uVar96;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar97;
  uint uVar98;
  uint uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  undefined4 uVar116;
  undefined4 uVar117;
  undefined4 uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  undefined4 uVar123;
  undefined4 uVar124;
  undefined4 uVar125;
  uint local_268;
  longlong local_260;
  FCompactPoseBoneIndex local_240 [2];
  FBoneContainer *local_238;
  longlong local_230;
  double local_228 [2];
  TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *local_218;
  TVector<double>_u_0 local_210;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  TQuat<double> local_198;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  TRotator<double> local_f8 [7];
  
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  pFVar3 = (FRBFTarget *)(param_1->AllocatorInstance).Data;
  local_238 = param_2;
  local_218 = param_1;
  if (param_1->ArrayMax < 0) {
    DestructItems<FRBFTarget,int>(pFVar3,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRBFTarget,int>(pFVar3,*piVar2);
    *piVar2 = 0;
  }
  uVar36 = 0;
  iVar27 = (this->PoseTargets).ArrayNum;
  iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0xa0,8,iVar27,&param_1->AllocatorInstance,piVar2,piVar1);
  memset((param_1->AllocatorInstance).Data + (longlong)iVar26 * 0xa0,0,(longlong)iVar27 * 0xa0);
  uVar24 = _UNK_15061cc8c;
  uVar23 = _UNK_15061cc88;
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_268 = 0;
  if (0 < (this->PoseTargets).ArrayNum) {
    local_230 = 0;
    uVar38 = uVar36;
    do {
      lVar39 = local_230;
      uVar35 = 0;
      uVar112 = (uint)uVar36;
      uVar34 = 0;
      if ((int)uVar112 < param_1->ArrayNum) {
        uVar34 = ~uVar112 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FBoneContainer *)((param_1->AllocatorInstance).Data + lVar39);
      iVar27 = (this->PoseTargets).ArrayNum;
      pcVar32 = (char *)(longlong)iVar27;
      uVar34 = 0;
      if ((int)uVar112 < iVar27) {
        uVar34 = ~uVar112 >> 0x1f;
      }
      if (uVar34 == 0) {
        pcVar32 = "(Index >= 0) & (Index < ArrayNum)";
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar25) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (this->PoseTargets).AllocatorInstance.Data;
      if (0 < (this->SourceBones).ArrayNum) {
        local_260 = 0;
        uVar36 = uVar35;
        do {
          uVar34 = (uint)uVar35;
          if (((int)uVar34 < 0) || (*(int *)(pFVar4 + uVar38 + 8) <= (int)uVar34)) {
            pcVar32 = (char *)this_00;
            FRBFEntry::AddFromVector((FRBFEntry *)this_00,&UE::Math::TVector<double>::ZeroVector);
          }
          else {
            if (-((int)~uVar34 >> 0x1f) == 0) {
              pcVar32 = "(Index >= 0) & (Index < ArrayNum)";
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar25) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            _Var86.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            uVar76 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar108 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar109 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar110 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            pTVar37 = (TVector<double> *)(local_260 + *(longlong *)(pFVar4 + uVar38));
            uVar78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar104 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar105 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar106 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar100 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar101 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar102 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar103 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar107 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar116 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar117 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar118 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar112 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar113 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar114 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar115 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar97 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar98 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar99 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
            local_228[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
            local_228[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
            uVar73 = uVar76;
            uVar74 = uVar108;
            uVar75 = uVar109;
            uVar77 = uVar110;
            uVar79 = uVar78;
            uVar80 = uVar104;
            uVar81 = uVar105;
            uVar82 = uVar106;
            uVar119 = uVar97;
            uVar120 = uVar98;
            uVar121 = uVar31;
            uVar122 = uVar99;
            uVar111 = uVar100;
            uVar123 = uVar101;
            uVar124 = uVar102;
            uVar125 = uVar103;
            if ((this->bEvalFromRefPose != false) && (local_238 != (FBoneContainer *)0x0)) {
              iVar27 = 0;
              if ((int)uVar34 < (this->SourceBones).ArrayNum) {
                iVar27 = -((int)~uVar34 >> 0x1f);
              }
              if (iVar27 == 0) {
                bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar25) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar73 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar74 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar75 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar77 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                uVar79 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar80 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar81 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar82 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar111 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar123 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar124 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar125 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar107 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar116 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar117 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar118 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar112 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar113 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar114 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar115 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar119 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar120 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar121 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar122 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
              }
              pcVar32 = (char *)(this->SourceBones).AllocatorInstance.Data;
              if (((*(uint *)((((FBoneContainer *)pcVar32)->BoneSwitchArray).AllocatorInstance.
                              InlineData + (uVar36 - 8)) & 0x7fffffff) != 0x7fffffff) &&
                 (local_240[0] = *(FCompactPoseBoneIndex *)
                                  ((((FBoneContainer *)pcVar32)->BoneSwitchArray).AllocatorInstance.
                                   InlineData + (uVar36 - 4)),
                 (int)local_240[0] < (local_238->BoneIndicesArray).ArrayNum)) {
                pcVar32 = (char *)local_238;
                pTVar28 = FBoneContainer::GetRefPoseTransform(local_238,local_240);
                uVar119 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar120 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar121 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar122 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                uVar112 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar113 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar114 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar115 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar107 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar116 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar117 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar118 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                local_228 = *&(pTVar28->Translation).ZW.m128d_f64;
                uVar76 = *(undefined4 *)(pTVar28->Rotation).XY.m128d_f64;
                uVar108 = *(undefined4 *)((longlong)(pTVar28->Rotation).XY.m128d_f64 + 4);
                uVar109 = *(undefined4 *)((pTVar28->Rotation).XY.m128d_f64 + 1);
                uVar110 = *(undefined4 *)((longlong)(pTVar28->Rotation).XY.m128d_f64 + 0xc);
                uVar78 = *(undefined4 *)(pTVar28->Rotation).ZW.m128d_f64;
                uVar104 = *(undefined4 *)((longlong)(pTVar28->Rotation).ZW.m128d_f64 + 4);
                uVar105 = *(undefined4 *)((pTVar28->Rotation).ZW.m128d_f64 + 1);
                uVar106 = *(undefined4 *)((longlong)(pTVar28->Rotation).ZW.m128d_f64 + 0xc);
                uVar100 = *(undefined4 *)(pTVar28->Translation).XY.m128d_f64;
                uVar101 = *(undefined4 *)((longlong)(pTVar28->Translation).XY.m128d_f64 + 4);
                uVar102 = *(undefined4 *)((pTVar28->Translation).XY.m128d_f64 + 1);
                uVar103 = *(undefined4 *)((longlong)(pTVar28->Translation).XY.m128d_f64 + 0xc);
                _Var86.m128d_f64 = *&(pTVar28->Scale3D).XY.m128d_f64;
                uVar97 = *(uint *)(pTVar28->Scale3D).ZW.m128d_f64;
                uVar98 = *(uint *)((longlong)(pTVar28->Scale3D).ZW.m128d_f64 + 4);
                uVar31 = *(uint *)((pTVar28->Scale3D).ZW.m128d_f64 + 1);
                uVar99 = *(uint *)((longlong)(pTVar28->Scale3D).ZW.m128d_f64 + 0xc);
                uVar111 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar123 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar124 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar125 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar79 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar80 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar81 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar82 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar73 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar74 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar75 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar77 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
              }
            }
            dVar43 = (double)CONCAT44(uVar116,uVar107);
            dVar6 = (double)CONCAT44(uVar125,uVar124);
            dVar10 = (double)CONCAT44(uVar123,uVar111);
            dVar18 = (double)CONCAT44(uVar77,uVar75);
            dVar17 = (double)CONCAT44(uVar74,uVar73);
            dVar16 = (double)CONCAT44(uVar82,uVar81);
            dVar15 = (double)CONCAT44(uVar80,uVar79);
            bVar25 = this->bEvalFromRefPose;
            uVar85 = _Var86.m128d_f64[0]._0_4_;
            uVar96 = _Var86.m128d_f64[1]._4_4_;
            uVar94 = _Var86.m128d_f64[0]._4_4_;
            uVar95 = _Var86.m128d_f64[1]._0_4_;
            if (this->DriveSource == Translation) {
              if (bVar25 == false) {
                pcVar32 = (char *)this_00;
                FRBFEntry::AddFromVector((FRBFEntry *)this_00,pTVar37);
              }
              else {
                auVar66._0_8_ = (double)CONCAT44(uVar98 & uVar22,uVar97 & uVar21);
                auVar66._8_4_ = uVar31 & uVar23;
                auVar66._12_4_ = uVar99 & uVar24;
                auVar55._8_8_ =
                     -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar66._8_8_);
                auVar55._0_8_ =
                     -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar66._0_8_);
                uVar31 = movmskpd((int)pcVar32,auVar55);
                auVar67._0_8_ = (double)CONCAT44(uVar94 & uVar22,uVar85 & uVar21);
                auVar67._8_4_ = uVar95 & uVar23;
                auVar67._12_4_ = uVar96 & uVar24;
                auVar44._8_8_ =
                     -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar67._8_8_);
                auVar44._0_8_ =
                     -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar67._0_8_);
                iVar27 = movmskpd((uint)bVar25,auVar44);
                if ((uVar31 & 0x3fffffff) == 0 && iVar27 == 0) {
                  local_1f8._4_4_ = uVar74;
                  local_1f8._0_4_ = uVar73;
                  local_1f8._8_4_ = uVar75;
                  local_1f8._12_4_ = uVar77;
                  local_1e8._4_4_ = uVar80;
                  local_1e8._0_4_ = uVar79;
                  local_1e8._8_4_ = uVar81;
                  local_1e8._12_4_ = uVar82;
                }
                else {
                  dVar15 = (double)CONCAT44(uVar104,uVar78) *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  dVar16 = (double)CONCAT44(uVar106,uVar105) *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  uVar107 = (undefined4)((ulonglong)dVar16 >> 0x20);
                  dVar17 = (double)CONCAT44(uVar108,uVar76) *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar18 = (double)CONCAT44(uVar110,uVar109) *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  uVar111 = (undefined4)((ulonglong)dVar18 >> 0x20);
                  uVar121 = 0;
                  uVar122 = 0;
                  lVar39 = -(ulonglong)
                            ((double)CONCAT44(uVar94 & uVar22,uVar85 & uVar21) <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                  lVar41 = -(ulonglong)
                            ((double)CONCAT44(uVar96 & uVar24,uVar95 & uVar23) <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                  lVar40 = -(ulonglong)
                            ((double)CONCAT44(uVar22 & uVar98,uVar21 & uVar97) <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                  lVar42 = -(ulonglong)
                            ((double)CONCAT44(uVar24 & GlobalVectorConstants::DoubleOne2d.m128d_f64
                                                       [1]._4_4_,
                                              uVar23 & GlobalVectorConstants::DoubleOne2d.m128d_f64
                                                       [1]._0_4_) <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
                  auVar83._8_4_ = SUB84(dVar18,0);
                  auVar83._0_8_ = dVar17;
                  auVar83._12_4_ = uVar111;
                  auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  (undefined1  [16])_Var86.m128d_f64);
                  auVar8._4_4_ = uVar98;
                  auVar8._0_4_ = uVar97;
                  auVar8._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                  auVar8._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                  auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar8);
                  uVar112 = ~(uint)lVar39 & auVar56._0_4_;
                  uVar113 = ~(uint)((ulonglong)lVar39 >> 0x20) & auVar56._4_4_;
                  uVar114 = ~(uint)lVar41 & auVar56._8_4_;
                  uVar115 = ~(uint)((ulonglong)lVar41 >> 0x20) & auVar56._12_4_;
                  auVar57._4_4_ = ~(uint)((ulonglong)lVar40 >> 0x20) & auVar45._4_4_;
                  auVar57._0_4_ = ~(uint)lVar40 & auVar45._0_4_;
                  auVar57._8_4_ = ~(uint)lVar42 & auVar45._8_4_;
                  auVar57._12_4_ = ~(uint)((ulonglong)lVar42 >> 0x20) & auVar45._12_4_;
                  auVar57 = ZEXT816(0) | auVar57;
                  auVar46._8_4_ = SUB84(dVar15,0);
                  auVar46._0_8_ = dVar18;
                  auVar46._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                  uVar119 = auVar57._0_4_;
                  uVar120 = auVar57._4_4_;
                  uVar117 = 0;
                  uVar118 = 0;
                  local_228[0] = local_228[0] * auVar57._0_8_;
                  local_228[1] = local_228[1] * 0.0;
                  dVar10 = (double)CONCAT44(uVar101,uVar100) * (double)CONCAT44(uVar113,uVar112);
                  dVar12 = (double)CONCAT44(uVar103,uVar102) * (double)CONCAT44(uVar115,uVar114);
                  uVar76 = (undefined4)((ulonglong)dVar12 >> 0x20);
                  auVar13._8_4_ = SUB84(dVar16,0);
                  auVar13._0_8_ = dVar15;
                  auVar13._12_4_ = uVar107;
                  auVar56 = blendpd(auVar83,auVar13,2);
                  auVar87._8_4_ = SUB84(dVar12,0);
                  auVar87._0_8_ = dVar10;
                  auVar87._12_4_ = uVar76;
                  auVar58._8_4_ = SUB84(dVar12,0);
                  auVar58._0_8_ = dVar10;
                  auVar58._12_4_ = uVar76;
                  auVar45 = blendpd(auVar58,(undefined1  [16])local_228,2);
                  auVar88._0_8_ = auVar87._8_8_ * dVar17 - dVar18 * dVar10;
                  auVar88._8_8_ = local_228[0] * dVar18 - auVar46._8_8_ * dVar12;
                  auVar59._0_8_ = auVar45._0_8_ * dVar15 - auVar56._0_8_ * local_228[0];
                  auVar59._8_8_ = auVar45._8_8_ * dVar16 - auVar56._8_8_ * local_228[1];
                  auVar45 = blendpd(auVar88,auVar59,2);
                  dVar6 = auVar88._8_8_ + auVar88._8_8_;
                  dVar7 = auVar59._0_8_ + auVar59._0_8_;
                  uVar76 = SUB84(dVar7,0);
                  uVar78 = (undefined4)((ulonglong)dVar7 >> 0x20);
                  auVar89._0_8_ = auVar45._0_8_ + auVar45._0_8_;
                  auVar89._8_8_ = auVar45._8_8_ + auVar45._8_8_;
                  auVar68._8_4_ = uVar76;
                  auVar68._0_8_ = dVar6;
                  auVar68._12_4_ = uVar78;
                  auVar47._8_4_ = uVar76;
                  auVar47._0_8_ = dVar6;
                  auVar47._12_4_ = uVar78;
                  auVar60._8_4_ = uVar76;
                  auVar60._0_8_ = dVar6;
                  auVar60._12_4_ = uVar78;
                  auVar45 = blendpd(auVar60,auVar89,2);
                  auVar69._0_8_ = auVar68._8_8_ * dVar17 - dVar6 * dVar18;
                  auVar69._8_8_ = auVar89._0_8_ * dVar18 - auVar47._8_8_ * dVar15;
                  auVar48._8_4_ = SUB84(auVar89._8_8_,0);
                  auVar48._0_8_ = auVar89._0_8_;
                  auVar48._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
                  auVar61._0_8_ = auVar45._0_8_ * dVar15 - auVar89._0_8_ * auVar56._0_8_;
                  auVar61._8_8_ = auVar45._8_8_ * dVar16 - auVar48._8_8_ * auVar56._8_8_;
                  auVar49._8_4_ = SUB84(auVar69._8_8_,0);
                  auVar49._0_8_ = auVar69._0_8_;
                  auVar49._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
                  auVar45 = blendpd(auVar69,auVar61,2);
                  dVar43 = 0.0 - (auVar89._0_8_ * dVar16 + local_228[0] + auVar45._0_8_);
                  dVar10 = 0.0 - (dVar6 * dVar16 + dVar10 + auVar49._8_8_);
                  dVar6 = 0.0 - (dVar7 * dVar16 + dVar12 + auVar61._0_8_);
                  local_1f8._8_4_ = SUB84(dVar18,0);
                  local_1f8._0_8_ = dVar17;
                  local_1f8._12_4_ = uVar111;
                  local_1e8._8_4_ = SUB84(dVar16,0);
                  local_1e8._0_8_ = dVar15;
                  local_1e8._12_4_ = uVar107;
                }
                dVar11 = (pTVar37->field0_0x0)._s_0.Z * (double)CONCAT44(uVar120,uVar119);
                dVar7 = (double)CONCAT44(uVar122,uVar121) * 0.0;
                auVar84._8_4_ = SUB84(dVar18,0);
                auVar84._0_8_ = dVar17;
                auVar84._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                auVar14._8_4_ = SUB84(dVar16,0);
                auVar14._0_8_ = dVar15;
                auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
                auVar56 = blendpd(auVar84,auVar14,2);
                dVar19 = (double)CONCAT44(uVar113,uVar112) * (pTVar37->field0_0x0)._s_0.X;
                dVar20 = (double)CONCAT44(uVar115,uVar114) * (pTVar37->field0_0x0)._s_0.Y;
                uVar76 = (undefined4)((ulonglong)dVar20 >> 0x20);
                auVar50._8_4_ = SUB84(dVar15,0);
                auVar50._0_8_ = dVar18;
                auVar50._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                auVar90._8_4_ = SUB84(dVar20,0);
                auVar90._0_8_ = dVar19;
                auVar90._12_4_ = uVar76;
                auVar62._8_4_ = SUB84(dVar20,0);
                auVar62._0_8_ = dVar19;
                auVar62._12_4_ = uVar76;
                auVar9._8_4_ = SUB84(dVar7,0);
                auVar9._0_8_ = dVar11;
                auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                auVar45 = blendpd(auVar62,auVar9,2);
                auVar91._0_8_ = auVar90._8_8_ * dVar17 - dVar18 * dVar19;
                auVar91._8_8_ = dVar11 * dVar18 - auVar50._8_8_ * dVar20;
                local_1c8._8_4_ = uVar117;
                local_1c8._0_8_ = dVar43;
                local_1c8._12_4_ = uVar118;
                local_1d8._8_4_ = SUB84(dVar6,0);
                local_1d8._0_8_ = dVar10;
                local_1d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                auVar63._0_8_ = auVar45._0_8_ * dVar15 - auVar56._0_8_ * dVar11;
                auVar63._8_8_ = auVar45._8_8_ * dVar16 - auVar56._8_8_ * dVar7;
                auVar45 = blendpd(auVar91,auVar63,2);
                dVar7 = auVar91._8_8_ + auVar91._8_8_;
                dVar12 = auVar63._0_8_ + auVar63._0_8_;
                uVar76 = SUB84(dVar12,0);
                uVar78 = (undefined4)((ulonglong)dVar12 >> 0x20);
                auVar92._0_8_ = auVar45._0_8_ + auVar45._0_8_;
                auVar92._8_8_ = auVar45._8_8_ + auVar45._8_8_;
                auVar70._8_4_ = uVar76;
                auVar70._0_8_ = dVar7;
                auVar70._12_4_ = uVar78;
                auVar51._8_4_ = uVar76;
                auVar51._0_8_ = dVar7;
                auVar51._12_4_ = uVar78;
                auVar64._8_4_ = uVar76;
                auVar64._0_8_ = dVar7;
                auVar64._12_4_ = uVar78;
                auVar45 = blendpd(auVar64,auVar92,2);
                auVar71._0_8_ = auVar70._8_8_ * dVar17 - dVar7 * dVar18;
                auVar71._8_8_ = auVar92._0_8_ * dVar18 - auVar51._8_8_ * dVar15;
                auVar52._8_4_ = SUB84(auVar92._8_8_,0);
                auVar52._0_8_ = auVar92._0_8_;
                auVar52._12_4_ = (int)((ulonglong)auVar92._8_8_ >> 0x20);
                auVar65._0_8_ = auVar45._0_8_ * dVar15 - auVar92._0_8_ * auVar56._0_8_;
                auVar65._8_8_ = auVar45._8_8_ * dVar16 - auVar52._8_8_ * auVar56._8_8_;
                auVar53._8_4_ = SUB84(auVar71._8_8_,0);
                auVar53._0_8_ = auVar71._0_8_;
                auVar53._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
                auVar45 = blendpd(auVar71,auVar65,2);
                dVar6 = dVar12 * dVar16 + dVar20 + auVar65._0_8_ + dVar6;
                local_210._s_0.Z = auVar92._0_8_ * dVar16 + dVar11 + auVar45._0_8_ + dVar43;
                local_210._8_4_ = SUB84(dVar6,0);
                local_210._0_8_ = dVar7 * dVar16 + dVar19 + auVar53._8_8_ + dVar10;
                local_210._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                pcVar32 = (char *)this_00;
                local_1b8 = uVar112;
                uStack_1b4 = uVar113;
                uStack_1b0 = uVar114;
                uStack_1ac = uVar115;
                local_1a8 = uVar119;
                uStack_1a4 = uVar120;
                uStack_1a0 = uVar121;
                uStack_19c = uVar122;
                FRBFEntry::AddFromVector((FRBFEntry *)this_00,(TVector<double> *)&local_210._s_0);
              }
            }
            else if (bVar25 == false) {
              pcVar32 = (char *)this_00;
              FRBFEntry::AddFromRotator((FRBFEntry *)this_00,(TRotator<double> *)(pTVar37 + 1));
            }
            else {
              pTVar30 = (TRotator<double> *)(pTVar37 + 1);
              pTVar29 = UE::Math::TRotator<double>::Quaternion(pTVar30,&local_198);
              auVar93._0_8_ = (double)CONCAT44(uVar94 & uVar22,uVar85 & uVar21);
              auVar93._8_4_ = uVar95 & uVar23;
              auVar93._12_4_ = uVar96 & uVar24;
              auVar56._8_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(uVar99 & uVar24,uVar31 & uVar23));
              auVar56._0_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(uVar98 & uVar22,uVar97 & uVar21));
              uVar112 = movmskpd((int)pTVar30,auVar56);
              auVar45._8_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar93._8_8_);
              auVar45._0_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar93._0_8_);
              iVar27 = movmskpd((int)pTVar29,auVar45);
              if ((uVar112 & 0x3fffffff) == 0 && iVar27 == 0) {
                dVar16 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
                dVar17 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
                dVar6 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
                dVar15 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
                local_138[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
                local_138[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
                local_128[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
                local_128[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
                local_118[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
                local_118[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
                local_108[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
                local_108[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
              }
              else {
                dVar16 = (double)CONCAT44(uVar108,uVar76) *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar17 = (double)CONCAT44(uVar110,uVar109) *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                dVar6 = (double)CONCAT44(uVar104,uVar78) *
                        GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                dVar15 = (double)CONCAT44(uVar106,uVar105) *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              }
              local_148._8_4_ = SUB84(dVar15,0);
              local_148._0_8_ = dVar6;
              local_148._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              auVar72._8_4_ = SUB84(dVar16,0);
              auVar72._0_8_ = dVar16;
              auVar72._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              auVar54._8_4_ = SUB84(dVar6,0);
              auVar54._0_8_ = dVar6;
              auVar54._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
              local_158._8_4_ = SUB84(dVar17,0);
              local_158._0_8_ = dVar16;
              local_158._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
              local_178._0_8_ =
                   dVar16 * local_198.W *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   local_198.X * dVar15 +
                   local_198.Z * dVar17 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dVar6 * local_198.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              local_178._8_8_ =
                   auVar72._8_8_ * local_198.Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   local_198.Y * dVar15 +
                   local_198.W * dVar17 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar54._8_8_ * local_198.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar18 = dVar16 * local_198.X *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       local_198.W * dVar15 +
                       local_198.Y * dVar17 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       dVar6 * local_198.Z *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              local_168._8_4_ = SUB84(dVar18,0);
              local_168._0_8_ =
                   dVar16 * local_198.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                   local_198.Z * dVar15 +
                   local_198.X * dVar17 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                   dVar6 * local_198.W *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              local_168._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              pTVar30 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_178,local_f8);
              pcVar32 = (char *)this_00;
              FRBFEntry::AddFromRotator((FRBFEntry *)this_00,pTVar30);
            }
          }
          uVar35 = (ulonglong)(uVar34 + 1);
          local_260 = local_260 + 0x30;
          uVar36 = uVar36 + 0x10;
        } while ((int)(uVar34 + 1) < (this->SourceBones).ArrayNum);
      }
      *(undefined4 *)(this_00->BoneSwitchArray).AllocatorInstance.InlineData =
           *(undefined4 *)(pFVar4 + uVar38 + 0x28);
      piVar1 = &(this_00->SkeletonToCompactPose).ArrayNum;
      pFVar33 = pFVar4 + uVar38 + 0xa0;
      *(FScriptContainerElement *)((this_00->BoneSwitchArray).AllocatorInstance.InlineData + 4) =
           pFVar4[uVar38 + 0x2e];
      *(undefined4 *)&(this_00->SkeletonToCompactPose).AllocatorInstance.Data =
           *(undefined4 *)(pFVar4 + uVar38 + 0x98);
      *(FScriptContainerElement *)
       ((longlong)&(this_00->SkeletonToCompactPose).AllocatorInstance.Data + 4) =
           pFVar4[uVar38 + 0x9c];
      *(FScriptContainerElement *)
       ((longlong)&(this_00->SkeletonToCompactPose).AllocatorInstance.Data + 5) =
           pFVar4[uVar38 + 0x9d];
      if ((FScriptContainerElement *)piVar1 != pFVar33) {
        iVar27 = *(int *)&pFVar33[8].field_0x0;
        piVar2 = (int *)((longlong)&(this_00->CompactPoseParentBones).AllocatorInstance.Data + 4);
        _Src = *(void **)&pFVar33->field_0x0;
        iVar26 = *piVar2;
        *(int *)&(this_00->CompactPoseParentBones).AllocatorInstance.Data = iVar27;
        if ((iVar27 == 0) && (iVar26 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar27,iVar26,(ForAnyElementType *)piVar1,iVar27,piVar2);
          if (iVar27 != 0) {
            memcpy(*(void **)piVar1,_Src,(longlong)iVar27 * 0x1c);
          }
        }
      }
      local_268 = local_268 + 1;
      uVar36 = (ulonglong)local_268;
      *(FScriptContainerElement *)&(this_00->CompactPoseParentBones).ArrayNum =
           pFVar4[uVar38 + 0x2c];
      lVar39 = uVar38 + 0x2d;
      uVar38 = uVar38 + 0xc0;
      *(FScriptContainerElement *)((longlong)&(this_00->CompactPoseParentBones).ArrayNum + 1) =
           pFVar4[lVar39];
      local_230 = local_230 + 0xa0;
      param_1 = local_218;
    } while ((int)local_268 < (this->PoseTargets).ArrayNum);
  }
  return;
}

// GetRadiusForTarget @ 14644e510

float __thiscall
FAnimNode_PoseDriver::GetRadiusForTarget(FAnimNode_PoseDriver *this,FRBFTarget *param_1)

{
  float fVar1;
  
  fVar1 = (this->RBFParams).Radius;
  if ((this->RBFParams).SolverType == Additive) {
    fVar1 = fVar1 * param_1->ScaleFactor;
  }
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  return fVar1;
}

// Initialize_AnyThread @ 146459d90

void __thiscall
FAnimNode_PoseDriver::Initialize_AnyThread
          (FAnimNode_PoseDriver *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseDriver::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::Initialize_AnyThread");
  FAnimNode_AssetPlayerBase::Initialize_AnyThread((FAnimNode_AssetPlayerBase *)this,param_1);
  FAnimNode_PoseHandler::UpdatePoseAssetProperty
            ((FAnimNode_PoseHandler *)this,*(FAnimInstanceProxy **)param_1);
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->SourcePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsBoneDriven @ 14645acd0

bool __thiscall FAnimNode_PoseDriver::IsBoneDriven(FAnimNode_PoseDriver *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OnlyDriveBones).ArrayNum;
  pFVar3 = (FName *)(this->OnlyDriveBones).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->OnlyDriveBones).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 2;
  }
  return false;
}

// RebuildPoseList @ 146462670

void __thiscall
FAnimNode_PoseDriver::RebuildPoseList
          (FAnimNode_PoseDriver *this,FBoneContainer *param_1,UPoseAsset *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  if (param_2->_padding_ != 0) {
    pTVar8 = UPoseAsset::GetPoseFNames(param_2);
    pFVar11 = (this->PoseTargets).AllocatorInstance.Data;
    uVar3 = (this->PoseTargets).ArrayNum;
    uVar9 = (ulonglong)(int)uVar3;
    pFVar12 = pFVar11 + uVar9 * 0xc0;
    while( true ) {
      if ((this->PoseTargets).ArrayNum != (int)uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPoseDriverTarget,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar12) break;
      uVar6 = UPoseAsset::GetPoseIndexByName(param_2,(FName *)(pFVar11 + 0xb0));
      if (uVar6 == 0xffffffff) {
        iVar7 = -1;
      }
      else {
        uVar10 = 0;
        if ((int)uVar6 < pTVar8->ArrayNum) {
          uVar10 = ~uVar6 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_48 = *(undefined8 *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar6 * 8);
        uStack_3c = 0;
        uStack_40 = uVar6;
        if ((((undefined8 *)this->_padding_ <= &local_48) &&
            (&local_48 < (undefined8 *)this->_padding_ + (longlong)*piVar1 * 2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (int)this->_padding_;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,(ForAnyElementType *)&this->_padding_,piVar1);
        }
        *(int *)&this->_padding_ = iVar7 + 1;
        puVar2 = (undefined8 *)(this->_padding_ + (longlong)iVar7 * 0x10);
        *puVar2 = local_48;
        puVar2[1] = CONCAT44(uStack_3c,uStack_40);
      }
      *(int *)(pFVar11 + 0xb8) = iVar7;
      pFVar11 = pFVar11 + 0xc0;
      uVar9 = (ulonglong)uVar3;
    }
  }
  return;
}

// UpdateAssetPlayer @ 146471bf0

void __thiscall
FAnimNode_PoseDriver::UpdateAssetPlayer(FAnimNode_PoseDriver *this,FAnimationUpdateContext *param_1)

{
  FAnimNode_PoseHandler::UpdateAssetPlayer((FAnimNode_PoseHandler *)this,param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->SourcePose,param_1);
  return;
}

