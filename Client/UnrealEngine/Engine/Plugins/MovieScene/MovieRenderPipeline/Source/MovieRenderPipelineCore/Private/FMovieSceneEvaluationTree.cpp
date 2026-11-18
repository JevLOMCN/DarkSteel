// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FMovieSceneEvaluationTree @ 14dd09e20

FMovieSceneEvaluationTree * __thiscall
FMovieSceneEvaluationTree::FMovieSceneEvaluationTree(FMovieSceneEvaluationTree *this)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  uint local_res8;
  uint local_res10;
  
  local_res8 = CONCAT31(local_res8._1_3_,2);
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->RootNode).Range.LowerBound = TVar1;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res10;
  (this->RootNode).Range.UpperBound = TVar2;
  (this->RootNode).Parent.ChildrenHandle = -1;
  (this->RootNode).Parent.Index = -1;
  (this->RootNode).ChildrenID = -1;
  (this->RootNode).DataID = -1;
  (this->ChildNodes).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).Entries.ArrayNum = 0;
  (this->ChildNodes).Entries.ArrayMax = 0;
  (this->ChildNodes).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).Items.ArrayNum = 0;
  (this->ChildNodes).Items.ArrayMax = 0;
  return this;
}

