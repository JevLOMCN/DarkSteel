// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// FChainPairFK @ 14df15cf0

/* WARNING: Type propagation algorithm not settling */

FChainPairFK * __thiscall FChainPairFK::FChainPairFK(FChainPairFK *this,FChainPairFK *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  piVar1 = &(this->FKEncoder).CurrentGlobalTransforms.ArrayMax;
  (this->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->FKEncoder).CurrentGlobalTransforms.ArrayNum;
  pFVar5 = (param_1->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
  (this->FKEncoder).CurrentGlobalTransforms.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data,pFVar5,
           (longlong)iVar4 * 0x60);
  }
  dVar6 = (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
       (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
       (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
       (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
  (this->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar6;
  (this->FKEncoder).BoneChain = (param_1->FKEncoder).BoneChain;
  FChainDecoderCachedData::FChainDecoderCachedData
            (&(this->FKDecoder).CachedData,&(param_1->FKDecoder).CachedData);
  pTVar2 = &(this->FKDecoder).IntermediateParentIndices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FKDecoder).IntermediateParentIndices.ArrayMax;
  iVar4 = (param_1->FKDecoder).IntermediateParentIndices.ArrayNum;
  pFVar5 = (param_1->FKDecoder).IntermediateParentIndices.AllocatorInstance.Data;
  (this->FKDecoder).IntermediateParentIndices.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->FKDecoder).IntermediateLocalTransforms;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FKDecoder).IntermediateLocalTransforms.ArrayMax;
  iVar4 = (param_1->FKDecoder).IntermediateLocalTransforms.ArrayNum;
  pFVar5 = (param_1->FKDecoder).IntermediateLocalTransforms.AllocatorInstance.Data;
  (this->FKDecoder).IntermediateLocalTransforms.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x60);
  }
  (this->FKDecoder).BoneChain = (param_1->FKDecoder).BoneChain;
  this->SourceBoneChain = param_1->SourceBoneChain;
  this->TargetBoneChain = param_1->TargetBoneChain;
  this->Settings = param_1->Settings;
  return this;
}

// Initialize @ 14df42540

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FChainPairFK::Initialize
          (FChainPairFK *this,FResolvedBoneChain *param_1,FResolvedBoneChain *param_2,
          FRetargetSkeleton *param_3,FTargetSkeleton *param_4,FRetargetFKChainSettings *param_5,
          FIKRigLogger *param_6)

{
  int iVar1;
  FResolvedBoneChain *pFVar2;
  FResolvedBoneChain *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if ((((((param_1->bFoundStartBone == false) || (param_1->bFoundEndBone == false)) ||
        (param_1->bEndIsStartOrChildOfStart == false)) ||
       ((iVar1 = (param_1->BoneIndices).ArrayNum,
        iVar1 != (param_1->RefPoseGlobalTransforms).ArrayNum ||
        (iVar1 != (param_1->RefPoseLocalTransforms).ArrayNum)))) ||
      ((param_2->bFoundStartBone == false ||
       ((param_2->bFoundEndBone == false || (param_2->bEndIsStartOrChildOfStart == false)))))) ||
     ((iVar1 = (param_2->BoneIndices).ArrayNum, iVar1 != (param_2->RefPoseGlobalTransforms).ArrayNum
      || (iVar1 != (param_2->RefPoseLocalTransforms).ArrayNum)))) {
    pFVar7 = FText::FromName(&local_38,&param_2->ChainName);
    pFVar8 = FText::FromName(&local_28,&param_1->ChainName);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"FKChainsOp",L"FKChainInvalid",
                        L"FK Chain Op unable to retarget source chain, {0} to target chain, {1}.\'")
    ;
    pFVar10 = FTextFormat::FTextFormat(&local_18,pFVar9,Default);
    pFVar7 = FText::Format<FText,FText>(&local_58,pFVar10,pFVar8,pFVar7);
    FIKRigLogger::LogWarning(param_6,pFVar7);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    bVar5 = false;
  }
  else {
    this->SourceBoneChain = param_1;
    this->Settings = param_5;
    this->TargetBoneChain = param_2;
    (this->FKEncoder).BoneChain = param_1;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this,
               &param_1->RefPoseGlobalTransforms);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&param_1->CurrentLocalTransforms,
               &((this->FKEncoder).BoneChain)->RefPoseLocalTransforms);
    pFVar2 = this->TargetBoneChain;
    pFVar3 = this->SourceBoneChain;
    if ((pFVar3 == (FResolvedBoneChain *)0x0) || (pFVar2 == (FResolvedBoneChain *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceBoneChain && InTargetBoneChain",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                         ,0x6c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    (this->FKDecoder).BoneChain = pFVar2;
    FChainDecoderCachedData::Initialize(&(this->FKDecoder).CachedData,pFVar3,pFVar2,param_3,param_4)
    ;
    bVar5 = true;
  }
  return bVar5;
}

