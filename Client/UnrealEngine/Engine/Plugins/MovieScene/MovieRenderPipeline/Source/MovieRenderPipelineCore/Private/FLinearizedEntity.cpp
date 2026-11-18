// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FLinearizedEntity @ 14dd09920

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FLinearizedEntity * __thiscall
`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l6::FLinearizedEntity::
FLinearizedEntity(void *this,FLinearizedEntity *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FMoviePipelineSidecarCamera *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRangeBound<FFrameNumber> TVar5;
  
  TVar5 = (param_1->Range).UpperBound;
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x20);
  *(TRangeBound<FFrameNumber> *)this = (param_1->Range).LowerBound;
  *(TRangeBound<FFrameNumber> *)((longlong)this + 8) = TVar5;
  *(UMovieSceneCameraCutSection **)((longlong)this + 0x10) = param_1->CameraCut;
  *(uint *)((longlong)this + 0x18) = (param_1->SequenceID).Value;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->SidecarCameras).ArrayNum;
  pFVar3 = (FMoviePipelineSidecarCamera *)(param_1->SidecarCameras).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x28) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x2c));
    ConstructItems<FMoviePipelineSidecarCamera,FMoviePipelineSidecarCamera,int>
              (pFVar1->Data,pFVar3,iVar2);
  }
  ::FString::FString((FString *)((longlong)this + 0x30),(FString *)&param_1->Name);
  ::FString::FString((FString *)((longlong)this + 0x40),(FString *)&(param_1->Name).field_0x10);
  *(FCameraCutSubSectionHierarchyNode **)((longlong)this + 0x50) = (param_1->LeafNode).Object;
  pTVar4 = (param_1->LeafNode).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x58) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar5 = (param_1->CameraCutWarmUpRange).UpperBound;
  *(TRangeBound<FFrameNumber> *)((longlong)this + 0x60) = (param_1->CameraCutWarmUpRange).LowerBound
  ;
  *(TRangeBound<FFrameNumber> *)((longlong)this + 0x68) = TVar5;
  FMovieSceneSequenceTransform::FMovieSceneSequenceTransform
            ((FMovieSceneSequenceTransform *)((longlong)this + 0x70),&param_1->RootToInnerTransform)
  ;
  return this;
}

