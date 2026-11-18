// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FSubSequenceSpace @ 1461fd180

FSubSequenceSpace * __thiscall
UE::MovieScene::FSubSequenceSpace::FSubSequenceSpace(FSubSequenceSpace *this)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  uint local_res8;
  uint local_res10;
  
  (this->RootToSequenceTransform).LinearTransform.TimeScale = 1.0;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = 0;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame = 0.0;
  (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  (this->StartBreadcrumbs).Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartBreadcrumbs).Breadcrumbs.ArrayNum = 0;
  (this->StartBreadcrumbs).Breadcrumbs.ArrayMax = 0;
  (this->StartBreadcrumbs).Mode = Sparse;
  (this->EndBreadcrumbs).Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndBreadcrumbs).Breadcrumbs.ArrayNum = 0;
  (this->EndBreadcrumbs).Breadcrumbs.ArrayMax = 0;
  (this->EndBreadcrumbs).Mode = Sparse;
  (this->SequenceID).Value = 0;
  local_res8 = CONCAT31(local_res8._1_3_,2);
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->RootClampRange).LowerBound = TVar1;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  TVar3.Value.Value = 0;
  TVar3._0_4_ = local_res10;
  (this->RootClampRange).UpperBound = TVar3;
  local_res8 = CONCAT31(local_res8._1_3_,2);
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res8;
  (this->LocalClampRange).LowerBound = TVar2;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  TVar4.Value.Value = 0;
  TVar4._0_4_ = local_res10;
  (this->LocalClampRange).UpperBound = TVar4;
  this->HierarchicalBias = 0;
  return this;
}

