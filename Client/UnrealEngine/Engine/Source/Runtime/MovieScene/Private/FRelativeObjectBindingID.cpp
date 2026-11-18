// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FRelativeObjectBindingID @ 1461fcc30

/* WARNING: Enum "Type": Some values do not have unique names */

FRelativeObjectBindingID * __thiscall
UE::MovieScene::FRelativeObjectBindingID::FRelativeObjectBindingID
          (FRelativeObjectBindingID *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceID param_2,FGuid *param_3,IMovieScenePlayer *param_4)

{
  FSharedPlaybackState *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneRootEvaluationTemplateInstance *this_01;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar4;
  FRelativeObjectBindingID *pFVar5;
  FMovieSceneSequenceHierarchy *pFVar6;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  (this->SequenceID).Value = 0xffffffff;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this_01 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(param_4->_padding_ + 0x18))();
  pTVar4 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_01,&local_38);
  if (pTVar4->Object == (FSharedPlaybackState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRelativeObjectBindingID *)(*pcVar2)();
      return pFVar5;
    }
  }
  this_00 = pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4->Object = (FSharedPlaybackState *)0x0;
  if (this_00 == (FSharedPlaybackState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRelativeObjectBindingID *)(*pcVar2)();
      return pFVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pFVar6 = FSharedPlaybackState::GetHierarchy(this_00);
  ConstructInternal(this,param_1,param_2,param_3,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return this;
}

// FRelativeObjectBindingID @ 1461fcd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FRelativeObjectBindingID * __thiscall
UE::MovieScene::FRelativeObjectBindingID::FRelativeObjectBindingID
          (FRelativeObjectBindingID *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceID param_2,FGuid *param_3,UMovieSceneSequence *param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_1c8 [32];
  uint local_198;
  uint local_190;
  undefined1 local_178 [152];
  undefined1 local_e0 [32];
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a0;
  undefined4 local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  EMovieSceneServerClientMask local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->SequenceID).Value = 0xffffffff;
  UMovieSceneCompiledDataManager::GetPrecompiledData();
  local_198 = CONCAT31(local_198._1_3_,2);
  local_178._24_8_ = ZEXT48(local_198);
  local_190 = CONCAT31(local_190._1_3_,2);
  local_178._32_8_ = ZEXT48(local_190);
  local_178._40_8_ = -1;
  local_178._0_4_ = 0xffffffff;
  local_178._8_8_ = (FScriptContainerElement *)0x0;
  local_178._16_4_ = 0;
  local_178._20_4_ = 0;
  local_178._48_8_ = -1;
  local_178._56_8_ = (void *)0x0;
  local_178._64_8_ = 0;
  local_178._72_8_ = (void *)0x0;
  local_178._80_8_ = 0;
  local_178._88_8_ = (FScriptContainerElement *)0x0;
  local_178._96_4_ = 0;
  local_178._100_4_ = 0;
  local_178._104_8_ = (FMovieSceneSubSequenceTreeEntry *)0x0;
  local_178._112_4_ = 0;
  local_178._116_4_ = 0;
  local_178._120_4_ = 1.0;
  local_178._124_4_ = 0;
  local_178._128_4_ = 0.0;
  local_178._136_8_ = (FMovieSceneNestedSequenceTransform *)0x0;
  local_178._144_4_ = 0;
  local_178._148_4_ = 0;
  local_e0._0_8_ = (FScriptContainerElement *)0x0;
  local_e0._8_8_ = 0;
  local_c0 = (void *)0x0;
  local_b8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_b0 = _UNK_150631d98;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = All;
  UMovieSceneCompiledDataManager::CompileHierarchy
            (param_4,(FMovieSceneSequenceHierarchy *)local_178,All);
  ConstructInternal(this,param_1,param_2,param_3,(FMovieSceneSequenceHierarchy *)local_178);
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar1 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar2 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  local_98 = 0;
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e0,0,local_e0._8_4_);
  iVar1 = SUB84(local_e0._8_8_,4);
  local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x120,8,0,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
  }
  uVar2 = local_b8._4_4_;
  uStack_b0 = 0xffffffff;
  local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_b8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e0._0_8_);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_178._136_8_,local_178._144_4_);
  if ((FMovieSceneNestedSequenceTransform *)local_178._136_8_ !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free((void *)local_178._136_8_);
  }
  DestructItems<FMovieSceneSubSequenceTreeEntry,int>
            ((FMovieSceneSubSequenceTreeEntry *)local_178._104_8_,local_178._112_4_);
  if ((FMovieSceneSubSequenceTreeEntry *)local_178._104_8_ != (FMovieSceneSubSequenceTreeEntry *)0x0
     ) {
    FMemory::Free((void *)local_178._104_8_);
  }
  if ((FScriptContainerElement *)local_178._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._88_8_);
  }
  if ((void *)local_178._72_8_ != (void *)0x0) {
    FMemory::Free((void *)local_178._72_8_);
  }
  if ((void *)local_178._56_8_ != (void *)0x0) {
    FMemory::Free((void *)local_178._56_8_);
  }
  if ((FScriptContainerElement *)local_178._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._8_8_);
  }
  return this;
}

// FRelativeObjectBindingID @ 1461fd070

FRelativeObjectBindingID * __thiscall
UE::MovieScene::FRelativeObjectBindingID::FRelativeObjectBindingID
          (FRelativeObjectBindingID *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceID param_2,FGuid *param_3,FMovieSceneSequenceHierarchy *param_4)

{
  (this->SequenceID).Value = 0xffffffff;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  ConstructInternal(this,param_1,param_2,param_3,param_4);
  return this;
}

// FRelativeObjectBindingID @ 1461fd0b0

FRelativeObjectBindingID * __thiscall
UE::MovieScene::FRelativeObjectBindingID::FRelativeObjectBindingID
          (FRelativeObjectBindingID *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceID param_2,FGuid *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  FMovieSceneSequenceHierarchy *pFVar1;
  
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->SequenceID).Value = 0xffffffff;
  pFVar1 = FSharedPlaybackState::GetHierarchy(param_4->Object);
  ConstructInternal(this,param_1,param_2,param_3,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// ConstructInternal @ 14620bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FRelativeObjectBindingID::ConstructInternal
          (FRelativeObjectBindingID *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceID param_2,FGuid *param_3,FMovieSceneSequenceHierarchy *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FMovieSceneSequenceID FVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined1 auStack_e8 [32];
  FMovieSceneSequenceID local_c8;
  undefined1 local_c4 [12];
  FSubSequencePath local_b8;
  FSubSequencePath local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FSubSequencePath::FSubSequencePath(&local_68,param_1,param_4);
  FSubSequencePath::FSubSequencePath(&local_b8,param_2,param_4);
  FSubSequencePath::FindCommonParent((FSubSequencePath *)&local_c8,&local_68);
  uVar1 = param_3->B;
  uVar2 = param_3->C;
  uVar3 = param_3->D;
  (this->Guid).A = param_3->A;
  (this->Guid).B = uVar1;
  (this->Guid).C = uVar2;
  (this->Guid).D = uVar3;
  FVar4 = FSubSequencePath::MakeLocalSequenceID(&local_b8,(uint)local_c4);
  (this->SequenceID).Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  iVar5 = FSubSequencePath::NumGenerationsFromLeaf(&local_68,local_c8);
  this->ResolveParentIndex = iVar5;
  if (local_b8.PathToRoot.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    FMemory::Free((void *)local_b8.PathToRoot.AllocatorInstance.SecondaryData);
  }
  if (local_68.PathToRoot.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    FMemory::Free((void *)local_68.PathToRoot.AllocatorInstance.SecondaryData);
  }
  return;
}

