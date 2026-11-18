// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 30

// GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp> @ 14df0c3c0

FIKRetargetPelvisMotionOp * __thiscall
FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
          (FIKRetargetProcessor *this,ERetargetOpsToSearch param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  UScriptStruct *pUVar7;
  FIKRetargetPelvisMotionOp *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 local_res10 [8];
  
  if (param_1 == AssetOps) {
    if (this->RetargeterAsset == (UIKRetargeter *)0x0) {
      return (FIKRetargetPelvisMotionOp *)0x0;
    }
    pTVar11 = &this->RetargeterAsset->RetargetOps;
  }
  else {
    pTVar11 = &this->OpStack;
  }
  iVar1 = pTVar11->ArrayNum;
  pFVar9 = (pTVar11->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  pUVar7 = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton;
  do {
    if (pTVar11->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      pUVar7 = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton;
    }
    if (pFVar9 == pFVar10) {
      return (FIKRetargetPelvisMotionOp *)0x0;
    }
    lVar3 = *(longlong *)pFVar9;
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_IKRig();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp,(UObject *)pUVar6
                               ,L"IKRetargetPelvisMotionOp");
      Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton = pUVar7;
      if (pUVar7 != (UScriptStruct *)0x0) goto LAB_14df0c462;
    }
    else {
LAB_14df0c462:
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pFVar8 = *(FIKRetargetPelvisMotionOp **)(pFVar9 + 8);
        pUVar4 = *(UScriptStruct **)pFVar9;
        if (((pFVar8 == (FIKRetargetPelvisMotionOp *)0x0) || (pUVar4 == (UScriptStruct *)0x0)) ||
           ((pUVar4 != pUVar7 &&
            (((int)pUVar4->_padding_ < iVar2 ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)))))) {
          pFVar8 = (FIKRetargetPelvisMotionOp *)0x0;
        }
        return pFVar8;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GetFirstRetargetOpOfType<FIKRetargetScaleSourceOp> @ 14df0c4e0

FIKRetargetScaleSourceOp * __thiscall
FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetScaleSourceOp>
          (FIKRetargetProcessor *this,ERetargetOpsToSearch param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  UScriptStruct *pUVar7;
  FIKRetargetScaleSourceOp *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 local_res10 [8];
  
  if (param_1 == AssetOps) {
    if (this->RetargeterAsset == (UIKRetargeter *)0x0) {
      return (FIKRetargetScaleSourceOp *)0x0;
    }
    pTVar11 = &this->RetargeterAsset->RetargetOps;
  }
  else {
    pTVar11 = &this->OpStack;
  }
  iVar1 = pTVar11->ArrayNum;
  pFVar9 = (pTVar11->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  pUVar7 = Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton;
  do {
    if (pTVar11->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      pUVar7 = Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton;
    }
    if (pFVar9 == pFVar10) {
      return (FIKRetargetScaleSourceOp *)0x0;
    }
    lVar3 = *(longlong *)pFVar9;
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_IKRig();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp,(UObject *)pUVar6,
                               L"IKRetargetScaleSourceOp");
      Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton = pUVar7;
      if (pUVar7 != (UScriptStruct *)0x0) goto LAB_14df0c582;
    }
    else {
LAB_14df0c582:
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pFVar8 = *(FIKRetargetScaleSourceOp **)(pFVar9 + 8);
        pUVar4 = *(UScriptStruct **)pFVar9;
        if (((pFVar8 == (FIKRetargetScaleSourceOp *)0x0) || (pUVar4 == (UScriptStruct *)0x0)) ||
           ((pUVar4 != pUVar7 &&
            (((int)pUVar4->_padding_ < iVar2 ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)))))) {
          pFVar8 = (FIKRetargetScaleSourceOp *)0x0;
        }
        return pFVar8;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// FIKRetargetProcessor @ 14df16e80

FIKRetargetProcessor * __thiscall
FIKRetargetProcessor::FIKRetargetProcessor(FIKRetargetProcessor *this)

{
  undefined8 uVar1;
  
  this->AssetVersionInitializedWith = -2;
  (this->Log).LogName.ComparisonIndex = 0;
  (this->Log).LogName.Number = 0;
  (this->Log).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Errors.ArrayNum = 0;
  (this->Log).Errors.ArrayMax = 0;
  (this->Log).Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Warnings.ArrayNum = 0;
  (this->Log).Warnings.ArrayMax = 0;
  (this->Log).Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Messages.ArrayNum = 0;
  (this->Log).Messages.ArrayMax = 0;
  this->bIKForcedOff = false;
  this->bIsInitialized = false;
  this->RetargeterAsset = (UIKRetargeter *)0x0;
  (this->SourceSkeleton).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceSkeleton).BoneNames.ArrayNum = 0;
  (this->SourceSkeleton).BoneNames.ArrayMax = 0;
  (this->SourceSkeleton).ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceSkeleton).ParentIndices.ArrayNum = 0;
  (this->SourceSkeleton).ParentIndices.ArrayMax = 0;
  (this->SourceSkeleton).RetargetPoses.CurrentRetargetPoseName.ComparisonIndex = 0;
  (this->SourceSkeleton).RetargetPoses.CurrentRetargetPoseName.Number = 0;
  (this->SourceSkeleton).RetargetPoses.RetargetPoses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceSkeleton).RetargetPoses.RetargetPoses.ArrayNum = 0;
  (this->SourceSkeleton).RetargetPoses.RetargetPoses.ArrayMax = 0;
  (this->SourceSkeleton).CachedEndOfBranchIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceSkeleton).CachedEndOfBranchIndices.ArrayNum = 0;
  (this->SourceSkeleton).CachedEndOfBranchIndices.ArrayMax = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton)._padding_ = 0;
  (this->TargetSkeleton).OutputGlobalPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSkeleton).OutputGlobalPose.ArrayNum = 0;
  (this->TargetSkeleton).OutputGlobalPose.ArrayMax = 0;
  (this->TargetSkeleton).InputLocalPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSkeleton).InputLocalPose.ArrayNum = 0;
  (this->TargetSkeleton).InputLocalPose.ArrayMax = 0;
  (this->TargetSkeleton).bIsMaskInitialized = false;
  (this->TargetSkeleton).IsBoneRetargeted.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSkeleton).IsBoneRetargeted.ArrayNum = 0;
  (this->TargetSkeleton).IsBoneRetargeted.ArrayMax = 0;
  (this->GoalContainer).Goals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GoalContainer).Goals.ArrayNum = 0;
  (this->GoalContainer).Goals.ArrayMax = 0;
  (this->AllBoneChains).SourceBoneChains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllBoneChains).SourceBoneChains.ArrayNum = 0;
  (this->AllBoneChains).SourceBoneChains.ArrayMax = 0;
  *(undefined8 *)&(this->AllBoneChains).TargetBoneChains = 0;
  *(undefined8 *)&(this->AllBoneChains).TargetBoneChains.field_0x8 = 0;
  *(undefined8 *)&(this->AllBoneChains).TargetBoneChains.field_0x20 = 0;
  (this->GoalContainer).bRigNeedsInitialized = true;
  *(undefined4 *)&(this->AllBoneChains).TargetBoneChains.field_0x28 = 0;
  *(undefined4 *)&(this->AllBoneChains).TargetBoneChains.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllBoneChains).TargetBoneChains.field_0x34 = 0;
  *(undefined4 *)&(this->AllBoneChains).TargetBoneChains.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AllBoneChains).TargetBoneChains.field_0x40 = 0;
  *(undefined4 *)&(this->AllBoneChains).TargetBoneChains.field_0x48 = 0;
  (this->AllBoneChains).bIsInitialized = false;
  (this->OpStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpStack).ArrayNum = 0;
  (this->OpStack).ArrayMax = 0;
  (this->CurrentSourceScale).Factor = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~FIKRetargetProcessor @ 14df1bb80

void __thiscall FIKRetargetProcessor::~FIKRetargetProcessor(FIKRetargetProcessor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->OpStack).AllocatorInstance.Data,(this->OpStack).ArrayNum);
  pFVar1 = (this->OpStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AllBoneChains).TargetBoneChains.field_0x48 = 0;
  pvVar2 = *(void **)&(this->AllBoneChains).TargetBoneChains.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AllBoneChains).TargetBoneChains);
  DestructItems<FResolvedBoneChain,int>
            ((FResolvedBoneChain *)(this->AllBoneChains).SourceBoneChains.AllocatorInstance.Data,
             (this->AllBoneChains).SourceBoneChains.ArrayNum);
  pFVar1 = (this->AllBoneChains).SourceBoneChains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GoalContainer).Goals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTargetSkeleton::~FTargetSkeleton(&this->TargetSkeleton);
  pFVar1 = (this->SourceSkeleton).CachedEndOfBranchIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FResolvedRetargetPose,int>
            ((FResolvedRetargetPose *)
             (this->SourceSkeleton).RetargetPoses.RetargetPoses.AllocatorInstance.Data,
             (this->SourceSkeleton).RetargetPoses.RetargetPoses.ArrayNum);
  pFVar1 = (this->SourceSkeleton).RetargetPoses.RetargetPoses.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceSkeleton).ParentIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceSkeleton).BoneNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIKRigLogger::~FIKRigLogger(&this->Log);
  return;
}

// operator= @ 14df1ddb0

FIKRetargetProcessor * __thiscall
FIKRetargetProcessor::operator=(FIKRetargetProcessor *this,FIKRetargetProcessor *param_1)

{
  int *piVar1;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  FRetargeterBoneChains *pFVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *_Src;
  FResolvedBoneChain *pFVar7;
  double dVar8;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar9;
  
  (this->Log).LogName = (param_1->Log).LogName;
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=(&(this->Log).Errors,&(param_1->Log).Errors);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Log).Warnings,&(param_1->Log).Warnings);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Log).Messages,&(param_1->Log).Messages);
  this->bIKForcedOff = param_1->bIKForcedOff;
  this->bIsInitialized = param_1->bIsInitialized;
  this->AssetVersionInitializedWith = param_1->AssetVersionInitializedWith;
  this->RetargeterAsset = param_1->RetargeterAsset;
  FRetargetSkeleton::operator=(&this->SourceSkeleton,&param_1->SourceSkeleton);
  FRetargetSkeleton::operator=
            ((FRetargetSkeleton *)&this->TargetSkeleton,
             (FRetargetSkeleton *)&param_1->TargetSkeleton);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->TargetSkeleton).OutputGlobalPose,&(param_1->TargetSkeleton).OutputGlobalPose);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->TargetSkeleton).InputLocalPose,&(param_1->TargetSkeleton).InputLocalPose);
  pTVar3 = &(param_1->TargetSkeleton).IsBoneRetargeted;
  (this->TargetSkeleton).bIsMaskInitialized = (param_1->TargetSkeleton).bIsMaskInitialized;
  pTVar9 = &(this->TargetSkeleton).IsBoneRetargeted;
  if (pTVar9 != pTVar3) {
    iVar5 = (param_1->TargetSkeleton).IsBoneRetargeted.ArrayNum;
    piVar1 = &(this->TargetSkeleton).IsBoneRetargeted.ArrayMax;
    _Src = (pTVar3->AllocatorInstance).Data;
    iVar6 = *piVar1;
    (this->TargetSkeleton).IsBoneRetargeted.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,iVar6,&pTVar9->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,_Src,(longlong)iVar5);
      }
    }
  }
  (this->GoalContainer).bRigNeedsInitialized = (param_1->GoalContainer).bRigNeedsInitialized;
  TArray<FIKRigGoal,TSizedDefaultAllocator<32>_>::operator=
            (&(this->GoalContainer).Goals,&(param_1->GoalContainer).Goals);
  pFVar4 = &this->AllBoneChains;
  if (pFVar4 != &param_1->AllBoneChains) {
    DestructItems<FResolvedBoneChain,int>
              ((FResolvedBoneChain *)(pFVar4->SourceBoneChains).AllocatorInstance.Data,
               (this->AllBoneChains).SourceBoneChains.ArrayNum);
    iVar5 = (param_1->AllBoneChains).SourceBoneChains.ArrayNum;
    piVar1 = &(this->AllBoneChains).SourceBoneChains.ArrayMax;
    pFVar7 = (FResolvedBoneChain *)(param_1->AllBoneChains).SourceBoneChains.AllocatorInstance.Data;
    iVar6 = *piVar1;
    (this->AllBoneChains).SourceBoneChains.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,iVar5,iVar6,(ForAnyElementType *)pFVar4,iVar5,piVar1);
      ConstructItems<FResolvedBoneChain,FResolvedBoneChain,int>
                ((pFVar4->SourceBoneChains).AllocatorInstance.Data,pFVar7,iVar5);
    }
  }
  pTVar2 = &(param_1->AllBoneChains).TargetBoneChains;
  this_00 = &(this->AllBoneChains).TargetBoneChains;
  if (this_00 != pTVar2) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->AllBoneChains).TargetBoneChains.field_0x38,
               (int *)&(this->AllBoneChains).TargetBoneChains.field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->AllBoneChains).TargetBoneChains.field_0x38,
               *(int *)&(param_1->AllBoneChains).TargetBoneChains.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar2);
  }
  (this->AllBoneChains).DefaultTargetIKRig = (param_1->AllBoneChains).DefaultTargetIKRig;
  (this->AllBoneChains).bIsInitialized = (param_1->AllBoneChains).bIsInitialized;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=(&this->OpStack,&param_1->OpStack);
  dVar8 = (param_1->CurrentSourceScale).Pivot.field0_0x0._s_0.X;
  (this->CurrentSourceScale).Factor = (param_1->CurrentSourceScale).Factor;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.X = dVar8;
  dVar8 = (param_1->CurrentSourceScale).Pivot.field0_0x0._s_0.Z;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Y =
       (param_1->CurrentSourceScale).Pivot.field0_0x0._s_0.Y;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Z = dVar8;
  return this;
}

// operator() @ 14df1f3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
`FIKRetargetProcessor::ApplySourceScaleToPose'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  lVar3 = *(longlong *)((longlong)this + 0x10);
  if (*(char *)(lVar3 + 0x40) != '\0') {
    if (*(char *)(lVar3 + 0x40) == '\x01') {
      lVar4 = *(longlong *)(lVar3 + 0x44);
      if (*(longlong *)(lVar3 + 0x5c) != lVar4) {
        plVar5 = *(longlong **)(*(longlong *)this + 0x48);
        for (plVar11 = plVar5; plVar11 != plVar5 + *(int *)(*(longlong *)this + 0x50);
            plVar11 = plVar11 + 1) {
          if (*plVar11 == lVar4) {
            uVar14 = (undefined4)((longlong)plVar11 - (longlong)plVar5 >> 3);
            goto LAB_14df1f493;
          }
        }
        uVar14 = 0xffffffff;
LAB_14df1f493:
        *(undefined4 *)(lVar3 + 0x58) = uVar14;
        *(longlong *)(lVar3 + 0x5c) = lVar4;
      }
      iVar2 = *(int *)(lVar3 + 0x58);
      if ((-1 < iVar2) && (plVar5 = *(longlong **)((longlong)this + 8), iVar2 < (int)plVar5[1])) {
        if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x54) == '\0') {
          uVar14 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
          uVar15 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
          uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        }
        else {
          uVar14 = 0;
          uVar15 = 0;
          uVar12 = ___xmm_3ff00000000000003ff0000000000000;
          uVar13 = _UNK_150689688;
        }
        if ((iVar2 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar6)();
          return pTVar10;
        }
        lVar3 = *plVar5;
        pdVar1 = (double *)((longlong)iVar2 * 0x60 + 0x20 + lVar3);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             (double)CONCAT44(uVar15,uVar14) * *(double *)((longlong)iVar2 * 0x60 + 0x30 + lVar3);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar12 * dVar7;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar13 * dVar8;
        return __return_storage_ptr__;
      }
    }
    else {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x775,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar6)();
        return pTVar10;
      }
    }
  }
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// operator() @ 14df200f0

FResolvedRetargetPose * __thiscall
`FIKRetargetProcessor::UpdateRetargetPoseAtRuntime'::__l2::<lambda_1>::operator()
          (void *this,FIKRetargetPose *param_1)

{
  ERetargetSourceOrTarget EVar1;
  FIKRetargetProcessor *this_00;
  UIKRetargeter *this_01;
  FIKRetargetPelvisMotionOp *pFVar2;
  UIKRigDefinition *pUVar3;
  FRetargetPoseScaleWithPivot *pFVar4;
  FResolvedRetargetPose *pFVar5;
  FName FVar6;
  longlong lVar7;
  FRetargetSkeleton *pFVar8;
  FName FVar9;
  FRetargetPoseScaleWithPivot local_38;
  
  this_00 = *(FIKRetargetProcessor **)this;
  EVar1 = *(ERetargetSourceOrTarget *)((longlong)this + 0x10);
  pFVar2 = FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
                     (this_00,ProcessorOps);
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  if (pFVar2 != (FIKRetargetPelvisMotionOp *)0x0) {
    FVar6 = FVar9;
    if (pFVar2->field_0x1d != '\0') {
      lVar7 = 0x170;
      if (EVar1 != Source) {
        lVar7 = 0x210;
      }
      FVar6 = *(FName *)(&pFVar2->field_0x0 + lVar7);
    }
    if (FVar6 != (FName)0x0) goto LAB_14df20178;
  }
  this_01 = this_00->RetargeterAsset;
  FVar6 = FVar9;
  if ((this_01 != (UIKRetargeter *)0x0) &&
     (pUVar3 = UIKRetargeter::GetIKRig(this_01,EVar1), pUVar3 != (UIKRigDefinition *)0x0)) {
    FVar6 = (pUVar3->RetargetDefinition).RootBone;
  }
LAB_14df20178:
  EVar1 = *(ERetargetSourceOrTarget *)((longlong)this + 0x10);
  pFVar4 = FIKRetargetProcessor::GetPoseScale(*(FIKRetargetProcessor **)this,EVar1);
  local_38.Factor = pFVar4->Factor;
  local_38.Pivot.field0_0x0._s_0.X = (pFVar4->Pivot).field0_0x0._s_0.X;
  local_38.Pivot.field0_0x0._s_0.Y = (pFVar4->Pivot).field0_0x0._s_0.Y;
  local_38.Pivot.field0_0x0._s_0.Z = (pFVar4->Pivot).field0_0x0._s_0.Z;
  lVar7 = 0x48;
  if (EVar1 != Source) {
    lVar7 = 0x98;
  }
  pFVar8 = (FRetargetSkeleton *)(lVar7 + *(longlong *)this);
  pFVar5 = FResolvedRetargetPoseSet::AddOrUpdateRetargetPose
                     (&pFVar8->RetargetPoses,pFVar8,*(FName *)((longlong)this + 8),param_1,FVar6,
                      &local_38);
  (pFVar8->RetargetPoses).CurrentRetargetPoseName = *(FName *)((longlong)this + 8);
  FRetargeterBoneChains::UpdatePoseFromSkeleton
            ((FRetargeterBoneChains *)(*(longlong *)this + 0x138),pFVar8,
             *(ERetargetSourceOrTarget *)((longlong)this + 0x10));
  FIKRetargetProcessor::InitializeRetargetOps(*(FIKRetargetProcessor **)this);
  return pFVar5;
}

// ApplyProfileAtRuntime @ 14df26200

void __thiscall
FIKRetargetProcessor::ApplyProfileAtRuntime(FIKRetargetProcessor *this,FRetargetProfile *param_1)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  TTuple<FName,FIKRetargetPose> *pTVar5;
  FResolvedRetargetPose *pFVar6;
  FResolvedRetargetPose *pFVar7;
  FInstancedStruct *pFVar8;
  FInstancedStruct *pFVar9;
  FIKRetargetPose *pFVar10;
  double dVar11;
  undefined1 local_res8 [8];
  FIKRetargetProcessor *local_38;
  FName local_30;
  undefined1 local_28;
  
  iVar1 = (this->OpStack).ArrayNum;
  pFVar8 = (FInstancedStruct *)(this->OpStack).AllocatorInstance.Data;
  pFVar9 = pFVar8 + iVar1;
  while( true ) {
    if ((this->OpStack).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) break;
    FRetargetProfile::ApplyOpProfilesToOpStruct(param_1,pFVar8,Runtime);
    pFVar8 = pFVar8 + 1;
  }
  this->bIKForcedOff = param_1->bForceAllIKOff;
  UpdateRetargetPoseAtRuntime(this,param_1->SourceRetargetPoseName,Source);
  FVar3 = param_1->TargetRetargetPoseName;
  local_28 = 1;
  local_38 = this;
  local_30 = FVar3;
  pTVar5 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
                   *)&this->RetargeterAsset->TargetRetargetPoses,FVar3);
  pFVar10 = (FIKRetargetPose *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FIKRetargetPose> *)0x0) {
    pFVar10 = (FIKRetargetPose *)0x0;
  }
  if (pFVar10 != (FIKRetargetPose *)0x0) {
    pFVar6 = FResolvedRetargetPoseSet::FindRetargetPoseByName
                       ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_,FVar3);
    if (pFVar6 == (FResolvedRetargetPose *)0x0) {
      pFVar6 = `FIKRetargetProcessor::UpdateRetargetPoseAtRuntime'::__l2::<lambda_1>::operator()
                         (&local_38,pFVar10);
    }
    pFVar7 = FResolvedRetargetPoseSet::FindOrAddRetargetPose
                       ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_,
                        (FName)(this->TargetSkeleton)._padding_);
    FVar3 = pFVar6->Name;
    FVar4 = pFVar7->Name;
    iVar1 = pFVar7->Version;
    iVar2 = pFVar10->Version;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        TargetPoseScale.Factor = __real_3ff0000000000000;
        TargetPoseScale.Pivot.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        TargetPoseScale.Pivot.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        TargetPoseScale.Pivot.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (((FVar4 != FVar3) || (iVar1 != iVar2)) ||
       (dVar11 = TargetPoseScale.Factor - (pFVar7->PoseScale).Factor,
       __real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      `FIKRetargetProcessor::UpdateRetargetPoseAtRuntime'::__l2::<lambda_1>::operator()
                (&local_38,pFVar10);
    }
  }
  return;
}

// ApplySourceScaleToPose @ 14df263d0

void __thiscall
FIKRetargetProcessor::ApplySourceScaleToPose
          (FIKRetargetProcessor *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  undefined8 uVar2;
  TVector<double> *pTVar3;
  FIKRetargetProcessor *local_38;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_30;
  FIKRetargetScaleSourceOp *local_28;
  TVector<double> local_20;
  
  local_28 = GetFirstRetargetOpOfType<FIKRetargetScaleSourceOp>(this,ProcessorOps);
  if ((local_28 != (FIKRetargetScaleSourceOp *)0x0) && ((char)local_28->_padding_ != '\0')) {
    (this->CurrentSourceScale).Factor = (local_28->Settings).SourceScaleFactor;
    local_38 = this;
    local_30 = param_1;
    pTVar3 = `FIKRetargetProcessor::ApplySourceScaleToPose'::__l2::<lambda_1>::operator()
                       (&local_38,&local_20);
    dVar1 = (pTVar3->field0_0x0)._s_0.Y;
    (this->CurrentSourceScale).Pivot.field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Y = dVar1;
    (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
    FRetargetPoseScaleWithPivot::ScalePose(&this->CurrentSourceScale,param_1);
    return;
  }
  (this->CurrentSourceScale).Factor = 1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Y = (double)uVar2;
  (this->CurrentSourceScale).Pivot.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GenerateBasePoses @ 14df346c0

void __thiscall
FIKRetargetProcessor::GenerateBasePoses
          (FIKRetargetProcessor *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                     ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->TargetSkeleton).OutputGlobalPose,pTVar1);
  pTVar1 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                     ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->TargetSkeleton).InputLocalPose,pTVar1);
  return;
}

// GetPelvisBone @ 14df3b420

FName __thiscall
FIKRetargetProcessor::GetPelvisBone
          (FIKRetargetProcessor *this,ERetargetSourceOrTarget param_1,ERetargetOpsToSearch param_2)

{
  FIKRetargetPelvisMotionOp *pFVar1;
  longlong lVar2;
  UIKRigDefinition *pUVar3;
  FName FVar4;
  undefined7 in_register_00000011;
  FName FVar5;
  ERetargetOpsToSearch in_R9B;
  
  FVar5._1_7_ = in_register_00000011;
  FVar5.ComparisonIndex.Value._0_1_ = param_1;
  pFVar1 = GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>(this,in_R9B);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (pFVar1 != (FIKRetargetPelvisMotionOp *)0x0) {
    if (pFVar1->field_0x1d != '\0') {
      lVar2 = 0x170;
      if (param_2 != ProcessorOps) {
        lVar2 = 0x210;
      }
      FVar4 = *(FName *)(&pFVar1->field_0x0 + lVar2);
    }
    if (FVar4 != (FName)0x0) goto LAB_14df3b497;
  }
  if ((this->RetargeterAsset == (UIKRetargeter *)0x0) ||
     (pUVar3 = UIKRetargeter::GetIKRig(this->RetargeterAsset,param_2),
     pUVar3 == (UIKRigDefinition *)0x0)) {
    *(FName *)FVar5 = (FName)0x0;
    return FVar5;
  }
  FVar4 = (pUVar3->RetargetDefinition).RootBone;
LAB_14df3b497:
  *(FName *)FVar5 = FVar4;
  return FVar5;
}

// GetPoseScale @ 14df3bda0

FRetargetPoseScaleWithPivot * __thiscall
FIKRetargetProcessor::GetPoseScale(FIKRetargetProcessor *this,ERetargetSourceOrTarget param_1)

{
  FRetargetPoseScaleWithPivot *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TargetPoseScale.Pivot.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      TargetPoseScale.Pivot.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      TargetPoseScale.Pivot.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = &this->CurrentSourceScale;
  if (param_1 != Source) {
    pFVar1 = &TargetPoseScale;
  }
  return pFVar1;
}

// GetRetargetOpByName @ 14df3e9c0

FIKRetargetOpBase * __thiscall
FIKRetargetProcessor::GetRetargetOpByName(FIKRetargetProcessor *this,FName param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UPackage *pUVar5;
  UScriptStruct *pUVar6;
  FIKRetargetOpBase *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OpStack).ArrayNum;
  pFVar8 = (this->OpStack).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  pUVar6 = Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton;
  do {
    if ((this->OpStack).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar6 = Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton;
    }
    if (pFVar8 == pFVar9) {
      return (FIKRetargetOpBase *)0x0;
    }
    pFVar7 = *(FIKRetargetOpBase **)(pFVar8 + 8);
    if ((pFVar7 == (FIKRetargetOpBase *)0x0) || (lVar3 = *(longlong *)pFVar8, lVar3 == 0)) {
LAB_14df3ea83:
      pFVar7 = (FIKRetargetOpBase *)0x0;
    }
    else {
      if (pUVar6 == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_IKRig();
        pUVar6 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar5,
                                 L"IKRetargetOpBase");
        Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton = pUVar6;
        if (pUVar6 == (UScriptStruct *)0x0) goto LAB_14df3ea83;
      }
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14df3ea83;
    }
    if (pFVar7->Name == param_1) {
      return pFVar7;
    }
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// GetRetargetOpsByType @ 14df3eb40

TArray<FIKRetargetOpBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FIKRetargetProcessor::GetRetargetOpsByType
          (FIKRetargetProcessor *this,
          TArray<FIKRetargetOpBase_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UScriptStruct *param_1)

{
  int iVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  TArray<FIKRetargetOpBase_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TArray<FIKRetargetOpBase_const_*,TSizedDefaultAllocator<32>_> *local_res10;
  longlong local_58;
  ForAnyElementType local_50;
  int local_48;
  int aiStack_44 [3];
  
  iVar1 = (this->OpStack).ArrayNum;
  pFVar9 = (this->OpStack).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  aiStack_44[0] = 0;
  local_res10 = __return_storage_ptr__;
  do {
    if ((this->OpStack).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      (local_res10->AllocatorInstance).Data = local_50.Data;
      local_res10->ArrayNum = local_48;
      local_res10->ArrayMax = aiStack_44[0];
      return local_res10;
    }
    if (param_1 != (UScriptStruct *)0x0) {
      pUVar3 = *(UScriptStruct **)pFVar9;
      iVar2 = (int)param_1->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &param_1->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar8 = *(longlong *)(pFVar9 + 8);
        if ((lVar8 == 0) || (pUVar3 == (UScriptStruct *)0x0)) {
LAB_14df3ec7c:
          lVar8 = 0;
        }
        else {
          if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar6 = Z_Construct_UPackage__Script_IKRig();
            Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar6,
                                 L"IKRetargetOpBase");
          }
          if (pUVar3 != Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton) {
            if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar6 = Z_Construct_UPackage__Script_IKRig();
              Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar6,
                                   L"IKRetargetOpBase");
              if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
                  (UScriptStruct *)0x0) goto LAB_14df3ec7c;
            }
            iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->
                         _padding_;
            if (((int)pUVar3->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
                &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_14df3ec7c;
          }
        }
        local_58 = lVar8;
        if ((local_50.Data <= (FScriptContainerElement *)&local_58) &&
           ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)aiStack_44[0] * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<FIKRetargetOpBase_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar7;
          }
        }
        if (local_48 == aiStack_44[0]) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_50,aiStack_44);
        }
        lVar8 = (longlong)local_48;
        local_48 = local_48 + 1;
        *(longlong *)(local_50.Data + lVar8 * 8) = local_58;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GetSkeleton @ 14df400b0

FRetargetSkeleton * __thiscall
FIKRetargetProcessor::GetSkeleton(FIKRetargetProcessor *this,ERetargetSourceOrTarget param_1)

{
  longlong lVar1;
  
  lVar1 = 0x48;
  if (param_1 != Source) {
    lVar1 = 0x98;
  }
  return (FRetargetSkeleton *)((longlong)&(this->Log).LogName.ComparisonIndex.Value + lVar1);
}

// GetSourceScaleFactor @ 14df404e0

double __thiscall FIKRetargetProcessor::GetSourceScaleFactor(FIKRetargetProcessor *this)

{
  FIKRetargetScaleSourceOp *pFVar1;
  
  pFVar1 = GetFirstRetargetOpOfType<FIKRetargetScaleSourceOp>(this,ProcessorOps);
  if ((pFVar1 == (FIKRetargetScaleSourceOp *)0x0) &&
     (pFVar1 = GetFirstRetargetOpOfType<FIKRetargetScaleSourceOp>(this,AssetOps),
     pFVar1 == (FIKRetargetScaleSourceOp *)0x0)) {
    return __real_3ff0000000000000;
  }
  if ((char)pFVar1->_padding_ == '\0') {
    return __real_3ff0000000000000;
  }
  return (pFVar1->Settings).SourceScaleFactor;
}

// GetTargetSkeleton @ 14df40ad0

FTargetSkeleton * __thiscall FIKRetargetProcessor::GetTargetSkeleton(FIKRetargetProcessor *this)

{
  return &this->TargetSkeleton;
}

// GetTargetSkeleton @ 14df40ae0

FTargetSkeleton * __thiscall FIKRetargetProcessor::GetTargetSkeleton(FIKRetargetProcessor *this)

{
  return &this->TargetSkeleton;
}

// InitialOpStackSetup @ 14df41560

void __thiscall
FIKRetargetProcessor::InitialOpStackSetup
          (FIKRetargetProcessor *this,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *param_1,
          FRetargetProfile *param_2)

{
  int *piVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  FText *pFVar12;
  UPackage *pUVar13;
  FInstancedStruct *this_01;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  FRetargetProfile *local_res18;
  undefined1 local_res20 [8];
  UIKRigDefinition *local_80;
  UIKRigDefinition *local_78;
  TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_> local_70;
  FText local_60 [2];
  
  this_00 = &this->OpStack;
  local_res18 = param_2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::Reset(this_00,param_1->ArrayNum);
  uVar2 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)uVar2;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar15 = pFVar14 + uVar11 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar14 == pFVar15) break;
    if ((*(longlong *)(pFVar14 + 8) == 0) || (*(longlong *)pFVar14 == 0)) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4490890690292614294>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x496,"AssetOpStruct.IsValid()");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (local_60,L"IKRetargetProcessor",L"UnknownOP",
                           L"IK Retargeter, \'{0}\' has null/unknown op in it. Please reload the asset to remove it."
                          );
      FIKRigLogger::LogWarning(&this->Log,pFVar12);
      if (local_60[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
      }
      uVar11 = (ulonglong)uVar2;
      pFVar14 = pFVar14 + 0x10;
    }
    else {
      uVar8 = (this->OpStack).ArrayNum;
      piVar1 = &(this->OpStack).ArrayMax;
      if (uVar8 == *piVar1) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&this_00->AllocatorInstance,piVar1);
      }
      (this->OpStack).ArrayNum = uVar8 + 1;
      this_01 = (FInstancedStruct *)
                ((this_00->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10);
      (this_01->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      this_01->StructMemory = (uchar *)0x0;
      FInstancedStruct::InitializeAs(this_01,*(UScriptStruct **)pFVar14,*(uchar **)(pFVar14 + 8));
      uVar9 = 0;
      if ((int)uVar8 < (this->OpStack).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FRetargetProfile::ApplyOpProfilesToOpStruct
                (local_res18,
                 (FInstancedStruct *)
                 ((this_00->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),PreInitialize);
      uVar11 = (ulonglong)uVar2;
      pFVar14 = pFVar14 + 0x10;
    }
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_80 = UIKRetargeter::GetIKRig(this->RetargeterAsset,Target);
  if (local_80 != (UIKRigDefinition *)0x0) {
    if (((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = local_70.ArrayNum;
    if (local_70.ArrayNum == local_70.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
    }
    local_70.ArrayNum = iVar10 + 1;
    *(UIKRigDefinition **)(local_70.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_80;
  }
  iVar10 = (this->OpStack).ArrayNum;
  pFVar14 = (this_00->AllocatorInstance).Data;
  pFVar15 = pFVar14 + (longlong)iVar10 * 0x10;
  do {
    if ((this->OpStack).ArrayNum != iVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar14 == pFVar15) {
      FRetargeterBoneChains::Initialize
                (&this->AllBoneChains,this->RetargeterAsset,&local_70,&this->SourceSkeleton,
                 (FRetargetSkeleton *)&this->TargetSkeleton,&this->Log);
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      return;
    }
    plVar4 = *(longlong **)(pFVar14 + 8);
    lVar5 = *(longlong *)pFVar14;
    if ((plVar4 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((lVar5 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd2,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar13 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar13,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df418a0;
LAB_14df418c4:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
LAB_14df418a0:
      iVar3 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) goto LAB_14df418c4;
    }
    local_78 = (UIKRigDefinition *)(**(code **)(*plVar4 + 0xb0))(plVar4);
    if (local_78 != (UIKRigDefinition *)0x0) {
      TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UIKRigDefinition_const_*_const_&>(&local_70,&local_78);
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// Initialize @ 14df42cd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FIKRetargetProcessor::Initialize
          (FIKRetargetProcessor *this,USkeletalMesh *param_1,USkeletalMesh *param_2,
          UIKRetargeter *param_3,FRetargetProfile *param_4,bool param_5)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  UIKRetargeter *pUVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  FText *pFVar7;
  FRetargetPoseScaleWithPivot *pFVar8;
  FIKRetargetPelvisMotionOp *pFVar9;
  UIKRigDefinition *pUVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FName FVar15;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  FName FVar17;
  FResolvedRetargetPoseSet *local_res20;
  FName local_e0;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  if ((((param_3 == (UIKRetargeter *)0x0) || (param_1 == (USkeletalMesh *)0x0)) ||
      (param_2 == (USkeletalMesh *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRetargeterAsset && SourceSkeletalMesh && TargetSkeletalMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x44d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar6 = WasInitializedWithTheseAssets(this,param_1,param_2,param_3);
  if (bVar6) {
    return;
  }
  this->bIsInitialized = false;
  this->RetargeterAsset = param_3;
  if (param_3 == (UIKRetargeter *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_b0,L"IKRetargetProcessor",L"MissingRetargetAsset",
                        L"IK Retargeter unable to initialize because no IK Retargeter asset was supplied."
                       );
    FIKRigLogger::LogError(&this->Log,pFVar7);
    if (local_b0.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    return;
  }
  if (param_1 == (USkeletalMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_a0,L"IKRetargetProcessor",L"MissingSourceMesh",
                        L"IK Retargeter unable to initialize. Missing source Skeletal Mesh asset.");
    FIKRigLogger::LogError(&this->Log,pFVar7);
    if (local_a0.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    return;
  }
  if (param_2 == (USkeletalMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"IKRetargetProcessor",L"MissingTargetMesh",
                        L"IK Retargeter unable to initialize. Missing target Skeletal Mesh asset.");
    FIKRigLogger::LogError(&this->Log,pFVar7);
    if (local_90.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    return;
  }
  pFVar8 = GetPoseScale(this,Source);
  pFVar9 = GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>(this,AssetOps);
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  if (pFVar9 == (FIKRetargetPelvisMotionOp *)0x0) {
LAB_14df42e88:
    FVar15 = FVar17;
    if ((this->RetargeterAsset != (UIKRetargeter *)0x0) &&
       (pUVar10 = UIKRetargeter::GetIKRig(this->RetargeterAsset,Source),
       pUVar10 != (UIKRigDefinition *)0x0)) {
      FVar15 = (pUVar10->RetargetDefinition).RootBone;
    }
  }
  else {
    FVar15 = FVar17;
    if (pFVar9->field_0x1d != '\0') {
      FVar15 = (pFVar9->Source).BoneName;
    }
    if (FVar15 == (FName)0x0) goto LAB_14df42e88;
  }
  FRetargetSkeleton::Initialize
            (&this->SourceSkeleton,param_1,Source,this->RetargeterAsset,FVar15,pFVar8);
  pFVar8 = GetPoseScale(this,Target);
  pFVar9 = GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>(this,AssetOps);
  if (pFVar9 != (FIKRetargetPelvisMotionOp *)0x0) {
    FVar15 = FVar17;
    if (pFVar9->field_0x1d != '\0') {
      FVar15 = (pFVar9->Target).BoneName;
    }
    if (FVar15 != (FName)0x0) goto LAB_14df42f2e;
  }
  FVar15 = FVar17;
  if ((this->RetargeterAsset != (UIKRetargeter *)0x0) &&
     (pUVar10 = UIKRetargeter::GetIKRig(this->RetargeterAsset,Target),
     pUVar10 != (UIKRigDefinition *)0x0)) {
    FVar15 = (pUVar10->RetargetDefinition).RootBone;
  }
LAB_14df42f2e:
  pUVar4 = this->RetargeterAsset;
  FRetargetSkeleton::Reset((FRetargetSkeleton *)&this->TargetSkeleton);
  this_00 = &(this->TargetSkeleton).OutputGlobalPose;
  iVar2 = (this->TargetSkeleton).OutputGlobalPose.ArrayMax;
  (this->TargetSkeleton).OutputGlobalPose.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&this_00->AllocatorInstance,0,
               &(this->TargetSkeleton).OutputGlobalPose.ArrayMax);
  }
  FRetargetSkeleton::Initialize
            ((FRetargetSkeleton *)&this->TargetSkeleton,param_2,Target,pUVar4,FVar15,pFVar8);
  (this->TargetSkeleton).bIsMaskInitialized = false;
  local_res20 = (FResolvedRetargetPoseSet *)((ulonglong)local_res20 & 0xffffffffffffff00);
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&(this->TargetSkeleton).IsBoneRetargeted,(bool *)&local_res20,
             (int)(this->TargetSkeleton)._padding_);
  local_res20 = (FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_;
  pTVar11 = FResolvedRetargetPoseSet::GetLocalRetargetPose(local_res20);
  pTVar16 = &(this->TargetSkeleton).InputLocalPose;
  if (pTVar16 != pTVar11) {
    iVar2 = pTVar11->ArrayNum;
    piVar1 = &(this->TargetSkeleton).InputLocalPose.ArrayMax;
    _Src = (pTVar11->AllocatorInstance).Data;
    iVar3 = *piVar1;
    (this->TargetSkeleton).InputLocalPose.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar2,iVar3,&pTVar16->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((pTVar16->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x60);
      }
    }
  }
  pTVar11 = FResolvedRetargetPoseSet::GetGlobalRetargetPose(local_res20);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar11);
  InitialOpStackSetup(this,&this->RetargeterAsset->RetargetOps,param_4);
  InitializeRetargetOps(this);
  local_e0 = (FName)param_2->_padding_;
  ::FName::ToString(&local_e0,&local_c0);
  pFVar7 = FText::FromString(&local_60,&local_c0);
  local_d8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_d8,&local_d0);
  pFVar12 = FText::FromString(&local_50,&local_d0);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_70,L"IKRetargetProcessor",L"SuccessfulInit",
                       L"Success! The IK Retargeter is ready to transfer animation from the source, {0} to the target, {1}"
                      );
  pFVar14 = FTextFormat::FTextFormat(&local_40,pFVar13,Default);
  pFVar7 = FText::Format<FText,FText>(&local_80,pFVar14,pFVar12,pFVar7);
  FIKRigLogger::LogInfo(&this->Log,pFVar7);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  this->bIsInitialized = true;
  this->AssetVersionInitializedWith = this->RetargeterAsset->Version;
  return;
}

// InitializeRetargetOps @ 14df46d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FIKRetargetProcessor::InitializeRetargetOps(FIKRetargetProcessor *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_f8 [32];
  FName local_d8;
  FIKRetargetProcessor *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6 [6];
  ForAnyElementType local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  ForAnyElementType local_48;
  int local_40;
  ForAnyElementType local_38;
  
  local_38.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_f8);
  iVar1 = (this->OpStack).ArrayNum;
  pFVar9 = (this->OpStack).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  while( true ) {
    if ((this->OpStack).ArrayNum != iVar1) {
      local_a8 = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_a8);
    }
    if (pFVar9 == pFVar10) break;
    plVar2 = *(longlong **)(pFVar9 + 8);
    lVar3 = *(longlong *)pFVar9;
    if ((plVar2 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((lVar3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar7 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df46e36;
LAB_14df46e5a:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
LAB_14df46e36:
      iVar6 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14df46e5a;
    }
    local_90._0_8_ = GetRetargetOpByName(this,*(FName *)((longlong)plVar2 + 0x14));
    if ((FName)local_90._0_8_ != (FName)0x0) {
      for (FVar8.Data = local_a0.Data;
          (FIKRetargetProcessor *)FVar8.Data !=
          (FIKRetargetProcessor *)(local_a0.Data + (longlong)(int)local_98 * 8);
          FVar8.Data = (FScriptContainerElement *)
                       &(((FIKRetargetProcessor *)FVar8.Data)->Log).Errors) {
        if ((((FIKRetargetProcessor *)FVar8.Data)->Log).LogName == (FName)local_90._0_8_)
        goto LAB_14df46f7e;
      }
      local_d8 = (FName)this;
      (**(code **)(*(longlong *)local_90._0_8_ + 0x98))
                (local_90._0_8_,this,&this->SourceSkeleton,&this->TargetSkeleton);
      if (local_a0.Data <= (FIKRetargetProcessor *)local_90) {
        if ((FScriptContainerElement *)local_90 < local_a0.Data + (longlong)local_98._4_4_ * 8) {
          local_c0 = (longlong)(int)local_98;
          local_b8 = 8;
          local_d8 = (FName)local_90;
          local_d0 = (FIKRetargetProcessor *)local_a0.Data;
          local_c8 = (longlong)local_98._4_4_;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      iVar6 = (int)local_98;
      if ((int)local_98 == local_98._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_a0,(int *)((longlong)&local_98 + 4));
      }
      local_98 = CONCAT44(local_98._4_4_,iVar6 + 1);
      ((FName *)(local_a0.Data + (longlong)iVar6 * 8))->ComparisonIndex =
           (FNameEntryId)local_90._0_4_;
      ((FName *)(local_a0.Data + (longlong)iVar6 * 8))->Number = local_90._4_4_;
    }
LAB_14df46f7e:
    local_d8 = (FName)local_90._0_8_;
    local_d0 = this;
    (**(code **)(*plVar2 + 8))(plVar2,this,&this->SourceSkeleton,&this->TargetSkeleton);
    pFVar9 = pFVar9 + 0x10;
  }
  iVar1 = (this->OpStack).ArrayNum;
  pFVar9 = (this->OpStack).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  local_90._8_8_ = (FScriptContainerElement *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58._0_1_ = true;
  local_58._1_1_ = true;
  local_58._2_2_ = 0xffff;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  while( true ) {
    if ((this->OpStack).ArrayNum != iVar1) {
      local_a7 = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_a7);
    }
    if (pFVar9 == pFVar10) break;
    plVar2 = *(longlong **)(pFVar9 + 8);
    lVar3 = *(longlong *)pFVar9;
    if ((plVar2 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((lVar3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar7 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7,
                           L"IKRetargetOpBase");
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
LAB_14df470c8:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      iVar6 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14df470c8;
    }
    if (((char)plVar2[1] != '\0') && (*(char *)((longlong)plVar2 + 0x1d) != '\0')) {
      (**(code **)(*plVar2 + 0x80))(plVar2,local_90 + 8);
    }
    pFVar9 = pFVar9 + 0x10;
  }
  FTargetSkeleton::SetRetargetedBones
            (&this->TargetSkeleton,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_90 + 8));
  iVar1 = (this->OpStack).ArrayNum;
  pFVar9 = (this->OpStack).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  do {
    if ((this->OpStack).ArrayNum != iVar1) {
      local_a6[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a6);
    }
    if (pFVar9 == pFVar10) {
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_90 + 8));
      if ((FIKRetargetProcessor *)local_a0.Data != (FIKRetargetProcessor *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      return;
    }
    plVar2 = *(longlong **)(pFVar9 + 8);
    lVar3 = *(longlong *)pFVar9;
    if ((plVar2 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((lVar3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar7 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7,
                           L"IKRetargetOpBase");
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
LAB_14df47218:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      iVar6 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14df47218;
    }
    if (((char)plVar2[1] != '\0') && (*(char *)((longlong)plVar2 + 0x1d) != '\0')) {
      local_d8 = (FName)this;
      (**(code **)(*plVar2 + 0x18))(plVar2,this,&this->SourceSkeleton,&this->TargetSkeleton);
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// IsInitialized @ 14df489c0

bool __thiscall FIKRetargetProcessor::IsInitialized(FIKRetargetProcessor *this)

{
  return this->bIsInitialized;
}

// OnAnimGraphEvaluateAnyThread @ 14df4b780

void __thiscall
FIKRetargetProcessor::OnAnimGraphEvaluateAnyThread(FIKRetargetProcessor *this,FPoseContext *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UPackage *pUVar8;
  undefined1 uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OpStack).ArrayNum;
  pFVar10 = (this->OpStack).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  uVar9 = 1;
  do {
    if ((this->OpStack).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar11) {
      return;
    }
    plVar3 = *(longlong **)(pFVar10 + 8);
    lVar4 = *(longlong *)pFVar10;
    if (plVar3 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar8 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar8,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df4b871;
LAB_14df4b895:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
LAB_14df4b871:
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14df4b895;
    }
    *(undefined1 *)((longlong)plVar3 + 0x1c) = uVar9;
    (**(code **)(*plVar3 + 0x78))(plVar3,param_1);
    if ((char)plVar3[1] != '\0') {
      cVar7 = (**(code **)(*plVar3 + 0x30))(plVar3);
      if (cVar7 != '\0') {
        uVar9 = 0;
      }
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// OnAnimGraphPreUpdateMainThread @ 14df4b920

void __thiscall
FIKRetargetProcessor::OnAnimGraphPreUpdateMainThread
          (FIKRetargetProcessor *this,USkeletalMeshComponent *param_1,
          USkeletalMeshComponent *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UPackage *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OpStack).ArrayNum;
  pFVar9 = (this->OpStack).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  do {
    if ((this->OpStack).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar8) {
      return;
    }
    plVar3 = *(longlong **)(pFVar9 + 8);
    lVar4 = *(longlong *)pFVar9;
    if (plVar3 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar7 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df4ba11;
LAB_14df4ba35:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
LAB_14df4ba11:
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14df4ba35;
    }
    (**(code **)(*plVar3 + 0x70))(plVar3,param_1,param_2);
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// OnPlaybackReset @ 14df4baf0

void __thiscall FIKRetargetProcessor::OnPlaybackReset(FIKRetargetProcessor *this)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UPackage *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OpStack).ArrayNum;
  pFVar9 = (this->OpStack).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  do {
    if ((this->OpStack).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar8) {
      return;
    }
    plVar3 = *(longlong **)(pFVar9 + 8);
    lVar4 = *(longlong *)pFVar9;
    if (plVar3 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar7 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df4bbd4;
LAB_14df4bbf8:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
LAB_14df4bbd4:
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14df4bbf8;
    }
    (**(code **)(*plVar3 + 0x68))(plVar3);
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// RunRetargetOps @ 14df52ec0

void __thiscall
FIKRetargetProcessor::RunRetargetOps
          (FIKRetargetProcessor *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,double param_3,
          int param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  UPackage *pUVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FIKRetargetOpBase *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  pFVar10 = (this->OpStack).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar1 = (this->OpStack).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar11 = pFVar10 + uVar6 * 0x10;
  do {
    if ((this->OpStack).ArrayNum != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar11) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return;
    }
    plVar2 = *(longlong **)(pFVar10 + 8);
    lVar8 = *(longlong *)pFVar10;
    if ((plVar2 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((lVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar7 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df52fd0;
LAB_14df52ff4:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
LAB_14df52fd0:
      iVar5 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14df52ff4;
    }
    local_50 = GetRetargetOpByName(this,*(FName *)((longlong)plVar2 + 0x14));
    if (local_50 != (FIKRetargetOpBase *)0x0) {
      for (FVar9.Data = local_48.Data; FVar9.Data != local_48.Data + (longlong)(int)local_40 * 8;
          FVar9.Data = FVar9.Data + 8) {
        if (*(FIKRetargetOpBase **)FVar9.Data == local_50) goto LAB_14df5310c;
      }
      (**(code **)(local_50->_padding_ + 0xa0))(local_50,this,SUB84(param_3,0),param_1,param_2);
      if (((local_48.Data <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_40 = CONCAT44(local_40._4_4_,iVar5 + 1);
      *(FIKRetargetOpBase **)(local_48.Data + (longlong)iVar5 * 8) = local_50;
    }
LAB_14df5310c:
    if (((char)plVar2[1] != '\0') && (*(char *)((longlong)plVar2 + 0x1d) != '\0')) {
      lVar8 = (**(code **)(*plVar2 + 0x48))(plVar2);
      if ((*(int *)(lVar8 + 8) == -1) || (param_4 <= *(int *)(lVar8 + 8))) {
        (**(code **)(*plVar2 + 0x10))(plVar2,this,SUB84(param_3,0),param_1,param_2);
      }
    }
    uVar6 = (ulonglong)uVar1;
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// RunRetargeter @ 14df531b0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FIKRetargetProcessor::RunRetargeter
          (FIKRetargetProcessor *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FRetargetProfile *param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  TTuple<FName,FIKRetargetPose> *pTVar8;
  FResolvedRetargetPose *pFVar9;
  FResolvedRetargetPose *pFVar10;
  FInstancedStruct *pFVar11;
  FInstancedStruct *pFVar12;
  FIKRetargetPose *pFVar13;
  double dVar14;
  undefined1 local_res8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_res10;
  FIKRetargetProcessor *local_68;
  FName local_60;
  undefined1 local_58;
  
  local_res10 = param_1;
  if (this->bIsInitialized != false) {
    pFVar11 = (FInstancedStruct *)(this->OpStack).AllocatorInstance.Data;
    iVar1 = (this->OpStack).ArrayNum;
    pFVar12 = pFVar11 + iVar1;
    while( true ) {
      if ((this->OpStack).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar12) break;
      FRetargetProfile::ApplyOpProfilesToOpStruct(param_2,pFVar11,Runtime);
      pFVar11 = pFVar11 + 1;
    }
    this->bIKForcedOff = param_2->bForceAllIKOff;
    UpdateRetargetPoseAtRuntime(this,param_2->SourceRetargetPoseName,Source);
    FVar3 = param_2->TargetRetargetPoseName;
    local_58 = 1;
    local_68 = this;
    local_60 = FVar3;
    pTVar8 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
                     *)&this->RetargeterAsset->TargetRetargetPoses,FVar3);
    pFVar13 = (FIKRetargetPose *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FIKRetargetPose> *)0x0) {
      pFVar13 = (FIKRetargetPose *)0x0;
    }
    if (pFVar13 != (FIKRetargetPose *)0x0) {
      pFVar9 = FResolvedRetargetPoseSet::FindRetargetPoseByName
                         ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_,FVar3);
      if (pFVar9 == (FResolvedRetargetPose *)0x0) {
        pFVar9 = `FIKRetargetProcessor::UpdateRetargetPoseAtRuntime'::__l2::<lambda_1>::operator()
                           (&local_68,pFVar13);
      }
      pFVar10 = FResolvedRetargetPoseSet::FindOrAddRetargetPose
                          ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_,
                           (FName)(this->TargetSkeleton)._padding_);
      FVar3 = pFVar9->Name;
      FVar4 = pFVar10->Name;
      iVar1 = pFVar10->Version;
      iVar2 = pFVar13->Version;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        TargetPoseScale.Factor = __real_3ff0000000000000;
        TargetPoseScale.Pivot.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        TargetPoseScale.Pivot.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        TargetPoseScale.Pivot.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        _Init_thread_footer(&::_TSS0);
      }
      if (((FVar4 != FVar3) || (iVar1 != iVar2)) ||
         (dVar14 = TargetPoseScale.Factor - (pFVar10->PoseScale).Factor, param_1 = local_res10,
         __real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        `FIKRetargetProcessor::UpdateRetargetPoseAtRuntime'::__l2::<lambda_1>::operator()
                  (&local_68,pFVar13);
        param_1 = local_res10;
      }
    }
    if ((this->bIsInitialized != false) ||
       (Initialize(this,(this->SourceSkeleton).SkeletalMesh,
                   (USkeletalMesh *)(this->TargetSkeleton)._padding_,this->RetargeterAsset,param_2,
                   false), this->bIsInitialized != false)) {
      pTVar7 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                         ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                (&(this->TargetSkeleton).OutputGlobalPose,pTVar7);
      pTVar7 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                         ((FResolvedRetargetPoseSet *)&(this->TargetSkeleton)._padding_);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                (&(this->TargetSkeleton).InputLocalPose,pTVar7);
      RunRetargetOps(this,param_1,&(this->TargetSkeleton).OutputGlobalPose,(double)param_3,param_4);
    }
    return &(this->TargetSkeleton).OutputGlobalPose;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4490890690292614394>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                     ,0x4fa,"bIsInitialized");
  if (!bVar6) {
    return param_1;
  }
  pcVar5 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar7;
}

// SetNeedsInitialized @ 14df556e0

void __thiscall FIKRetargetProcessor::SetNeedsInitialized(FIKRetargetProcessor *this)

{
  int *piVar1;
  
  this->bIsInitialized = false;
  if (this->RetargeterAsset != (UIKRetargeter *)0x0) {
    piVar1 = &this->RetargeterAsset->Version;
    *piVar1 = *piVar1 + 1;
  }
  return;
}

// UpdateRetargetPoseAtRuntime @ 14df5f1e0

void __thiscall
FIKRetargetProcessor::UpdateRetargetPoseAtRuntime
          (FIKRetargetProcessor *this,FName param_1,ERetargetSourceOrTarget param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  TTuple<FName,FIKRetargetPose> *pTVar5;
  FResolvedRetargetPose *pFVar6;
  FResolvedRetargetPose *pFVar7;
  FRetargetPoseScaleWithPivot *pFVar8;
  TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
  *this_00;
  FIKRetargetPose *pFVar9;
  longlong lVar10;
  FResolvedRetargetPoseSet *this_01;
  double dVar11;
  FIKRetargetProcessor *local_48;
  FName local_40;
  ERetargetSourceOrTarget local_38;
  
  if (param_2 == Source) {
    this_00 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
               *)&this->RetargeterAsset->SourceRetargetPoses;
  }
  else {
    this_00 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
               *)&this->RetargeterAsset->TargetRetargetPoses;
  }
  local_48 = this;
  local_40 = param_1;
  local_38 = param_2;
  pTVar5 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
           ::Find(this_00,param_1);
  pFVar9 = (FIKRetargetPose *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FIKRetargetPose> *)0x0) {
    pFVar9 = (FIKRetargetPose *)0x0;
  }
  if (pFVar9 != (FIKRetargetPose *)0x0) {
    lVar10 = 0x68;
    if (param_2 != Source) {
      lVar10 = 0xb8;
    }
    this_01 = (FResolvedRetargetPoseSet *)
              ((longlong)&(this->Log).LogName.ComparisonIndex.Value + lVar10);
    pFVar6 = FResolvedRetargetPoseSet::FindRetargetPoseByName(this_01,param_1);
    if (pFVar6 == (FResolvedRetargetPose *)0x0) {
      pFVar6 = `FIKRetargetProcessor::UpdateRetargetPoseAtRuntime'::__l2::<lambda_1>::operator()
                         (&local_48,pFVar9);
    }
    pFVar7 = FResolvedRetargetPoseSet::FindOrAddRetargetPose
                       (this_01,this_01->CurrentRetargetPoseName);
    FVar3 = pFVar6->Name;
    iVar1 = pFVar9->Version;
    FVar4 = pFVar7->Name;
    iVar2 = pFVar7->Version;
    pFVar8 = GetPoseScale(this,param_2);
    if (((FVar4 != FVar3) || (iVar2 != iVar1)) ||
       (dVar11 = pFVar8->Factor - (pFVar7->PoseScale).Factor,
       __real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      `FIKRetargetProcessor::UpdateRetargetPoseAtRuntime'::__l2::<lambda_1>::operator()
                (&local_48,pFVar9);
    }
  }
  return;
}

// WasInitializedWithTheseAssets @ 14df5fdf0

bool __thiscall
FIKRetargetProcessor::WasInitializedWithTheseAssets
          (FIKRetargetProcessor *this,USkeletalMesh *param_1,USkeletalMesh *param_2,
          UIKRetargeter *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((this->bIsInitialized != false) && (param_3 == this->RetargeterAsset)) &&
      (this->AssetVersionInitializedWith == param_3->Version)) &&
     ((param_1 == (this->SourceSkeleton).SkeletalMesh &&
      (param_2 == (USkeletalMesh *)(this->TargetSkeleton)._padding_)))) {
    lVar3 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
    iVar1 = (this->SourceSkeleton).BoneNames.ArrayNum;
    iVar2 = *(int *)(lVar3 + 0x28);
    lVar3 = (**(code **)(param_2->_padding_ + 0x318))(param_2);
    if ((iVar2 == iVar1) && (*(int *)(lVar3 + 0x28) == (int)(this->TargetSkeleton)._padding_)) {
      return true;
    }
  }
  return false;
}

