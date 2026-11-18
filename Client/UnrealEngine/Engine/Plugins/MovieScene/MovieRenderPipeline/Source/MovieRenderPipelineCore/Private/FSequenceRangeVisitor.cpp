// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// ~FSequenceRangeVisitor @ 14dd0d610

void __thiscall
`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::FSequenceRangeVisitor::
~FSequenceRangeVisitor(void *this)

{
  if (*(void **)((longlong)this + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb8));
  }
  if (*(void **)((longlong)this + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa8));
  }
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  if (*(void **)((longlong)this + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x88));
  }
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  *(undefined ***)this = &___7ISequenceVisitor_MovieScene_UE__6B_;
  return;
}

// operator() @ 14dd0f490

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
``UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::FSequenceRangeVisitor::
GatherFromSection'::__l6::<lambda_1>::operator()(void *this,TRange<FFrameTime> *param_1)

{
  int iVar1;
  FFrameTime FVar2;
  UMovieSceneSubSection *this_00;
  longlong lVar3;
  FMovieSceneEvaluationTree *this_01;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  FMovieSceneSequenceID FVar6;
  FFrameTime FVar7;
  FFrameNumber *pFVar8;
  UClass *pUVar9;
  undefined4 extraout_var;
  TRangeBound<FFrameNumber> local_res8;
  undefined1 local_68 [8];
  TRangeBound<FFrameNumber> TStack_60;
  TRange<FFrameNumber> local_58;
  IMovieSceneEvaluationTreeNodeOperator local_48;
  FMovieSceneEvaluationTree *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  
  local_58.LowerBound.Type.Value = '\x02';
  local_58.LowerBound = (TRangeBound<FFrameNumber>)((ulonglong)local_58.LowerBound & 0xffffffff);
  local_58.UpperBound.Type.Value = '\x02';
  local_58.UpperBound = (TRangeBound<FFrameNumber>)((ulonglong)local_58.UpperBound & 0xffffffff);
  if ((param_1->LowerBound).Type.Value != '\x02') {
    FVar2 = (param_1->LowerBound).Value;
    TStack_60._0_4_ = (param_1->LowerBound).Value.SubFrame;
    local_68[0] = (param_1->LowerBound).Type.Value;
    local_68._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    local_68._4_4_ = (param_1->LowerBound).Value.FrameNumber;
    if ((local_68[0] != '\x01') ||
       (local_res8.Value.Value = (int)FVar2.SubFrame, FVar7 = FVar2,
       (float)local_res8.Value.Value != 0.0)) {
      FVar7.FrameNumber.Value = FVar2.FrameNumber.Value.Value + 1;
      FVar7.SubFrame = 0.0;
    }
    local_res8._1_7_ = FVar2._1_7_;
    local_res8.Type.Value = 1;
    local_res8.Value.Value = FVar7.FrameNumber.Value.Value;
    local_58.LowerBound = local_res8;
  }
  if ((param_1->UpperBound).Type.Value != '\x02') {
    local_res8.Value.Value = (param_1->UpperBound).Value.FrameNumber.Value;
    local_res8 = (TRangeBound<FFrameNumber>)((ulonglong)local_res8 & 0xffffffffffffff00);
    local_58.UpperBound = local_res8;
  }
  TRange<FFrameNumber>::Intersection
            ((TRange<FFrameNumber> *)local_68,(TRange<FFrameNumber> *)(*(longlong *)this + 0x54),
             &local_58);
  if ((local_68[0] != '\x02') && (TStack_60.Type.Value != '\x02')) {
    if (TStack_60.Value.Value < (int)local_68._4_4_) {
      return true;
    }
    pFVar8 = TRangeBound<FFrameNumber>::GetValue(&TStack_60);
    iVar1 = pFVar8->Value;
    pFVar8 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)local_68);
    if (pFVar8->Value == iVar1) {
      if (local_68[0] == '\0') {
        return true;
      }
      if (TStack_60.Type.Value == '\0') {
        return true;
      }
    }
  }
  this_00 = *(UMovieSceneSubSection **)((longlong)this + 8);
  if (this_00 != (UMovieSceneSubSection *)0x0) {
    pUVar9 = Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) {
      lVar3 = *(longlong *)this;
      this_01 = *(FMovieSceneEvaluationTree **)((longlong)this + 0x10);
      FVar6 = UMovieSceneSubSection::GetSequenceID(this_00);
      local_38 = *(undefined8 *)((longlong)this + 8);
      TVar4.Value.Value = TStack_60.Value.Value;
      TVar4.Type.Value = TStack_60.Type.Value;
      TVar4._1_3_ = TStack_60._1_3_;
      local_48 = (IMovieSceneEvaluationTreeNodeOperator)
                 &
                 ___7FAddOperator___TMovieSceneEvaluationTree_U__TTuple_PEAVUMovieSceneSection__UFMovieSceneSequenceID__F____6B_
      ;
      local_30 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
      local_2c = *(undefined2 *)(lVar3 + 0x74);
      local_2a = local_58.UpperBound.Value.Value._2_2_;
      local_58.LowerBound.Type.Value = local_68[0];
      local_58.LowerBound._1_3_ = local_68._1_3_;
      local_58.LowerBound.Value.Value = local_68._4_4_;
      local_58.UpperBound = TVar4;
      local_40 = this_01;
      FMovieSceneEvaluationTree::AddTimeRange
                (this_01,&local_58,&local_48,(FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                 (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
      return true;
    }
  }
  local_38 = *(undefined8 *)((longlong)this + 8);
  local_40 = *(FMovieSceneEvaluationTree **)((longlong)this + 0x10);
  TVar5.Value.Value = TStack_60.Value.Value;
  TVar5.Type.Value = TStack_60.Type.Value;
  TVar5._1_3_ = TStack_60._1_3_;
  local_30 = *(undefined4 *)(*(longlong *)this + 0x50);
  local_2c = *(undefined2 *)(*(longlong *)this + 0x74);
  local_48 = (IMovieSceneEvaluationTreeNodeOperator)
             &
             ___7FAddOperator___TMovieSceneEvaluationTree_U__TTuple_PEAVUMovieSceneSection__UFMovieSceneSequenceID__F____6B_
  ;
  local_2a = local_58.UpperBound.Value.Value._2_2_;
  local_58.LowerBound.Type.Value = local_68[0];
  local_58.LowerBound._1_3_ = local_68._1_3_;
  local_58.LowerBound.Value.Value = local_68._4_4_;
  local_58.UpperBound = TVar5;
  FMovieSceneEvaluationTree::AddTimeRange
            (local_40,&local_58,&local_48,(FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return true;
}

// GatherFromSection @ 14dd20250

/* WARNING: Removing unreachable block (ram,0x00014dd2033b) */
/* WARNING: Removing unreachable block (ram,0x00014dd20360) */

void __thiscall
`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::FSequenceRangeVisitor::
GatherFromSection(void *this,UMovieSceneTrack *param_1,FSubSequenceSpace *param_2,
                 TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                 *param_3)

{
  undefined8 *puVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  longlong *plVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStackX_1c;
  TRange<FFrameTime> local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  uint local_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int iStack_9c;
  undefined4 uStack_98;
  uint local_94;
  int iStack_90;
  undefined4 uStack_8c;
  code *local_88;
  FSubSequenceSpace **local_80;
  FSubSequenceSpace *local_78;
  UObjectBaseUtility *local_70;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *local_68;
  FMovieSceneInverseSequenceTransform local_60;
  
  FMovieSceneSequenceTransform::Inverse(&param_2->RootToSequenceTransform,&local_60);
  plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x360))(param_1);
  puVar8 = (undefined8 *)*plVar6;
  lVar3 = plVar6[1];
  puVar1 = puVar8 + (int)lVar3;
  while( true ) {
    if ((int)plVar6[1] != (int)lVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar8 == puVar1) break;
    this_00 = (UObjectBaseUtility *)*puVar8;
    if ((this_00 != (UObjectBaseUtility *)0x0) && ((this_00[5].field_0x10 & 1) != 0)) {
      pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
      UObjectBaseUtility::GetTypedOuter(this_00,pUVar7);
      local_e0 = *(undefined8 *)&this_00[4].field_0x10;
      uStack_d8 = *(undefined8 *)&this_00[4].field_0x18;
      local_80 = &local_78;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::FSequenceRangeVisitor::GatherFromSection'::__l6::<lambda_1>,bool,TRange<FFrameTime>_>
                 ::Call;
      local_f8.LowerBound.Type.Value = 2;
      local_f8.LowerBound.Value.FrameNumber.Value = 0;
      local_f8.LowerBound.Value.SubFrame = 0.0;
      local_f8.UpperBound.Type.Value = 2;
      local_f8.UpperBound.Value.FrameNumber.Value = 0;
      local_f8.UpperBound.Value.SubFrame = 0.0;
      cVar4 = (char)local_e0;
      local_78 = param_2;
      local_70 = this_00;
      local_68 = param_3;
      if (cVar4 != '\x02') {
        if (cVar4 == '\x01') {
          local_88 = UE::Core::Private::Function::
                     TFunctionRefCaller<``UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::FSequenceRangeVisitor::GatherFromSection'::__l6::<lambda_1>,bool,TRange<FFrameTime>_>
                     ::Call;
          local_f8.UpperBound.Value.SubFrame = 0.0;
          local_f8.UpperBound.Value.FrameNumber.Value = 0;
          local_e0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
          local_res18 = local_e0._4_4_;
          uStackX_1c = 0;
          iStack_b4 = local_e0._4_4_;
          uStack_b0 = 0;
          local_b8 = CONCAT31(local_b8._1_3_,1);
          local_f8.LowerBound._0_4_ = local_b8;
          local_f8.LowerBound.Value.FrameNumber.Value = local_e0._4_4_;
        }
        else {
          if ((cVar4 == '\x02') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_d0 = local_e0._4_4_;
          uStack_cc = 0;
          iStack_a8 = local_e0._4_4_;
          uStack_a4 = 0;
          local_ac = local_ac & 0xffffff00;
          local_f8.LowerBound._0_4_ = local_ac;
          local_f8.LowerBound.Value.FrameNumber.Value = local_e0._4_4_;
        }
      }
      local_f8.LowerBound.Value.SubFrame = 0.0;
      if ((char)uStack_d8 != '\x02') {
        if ((char)uStack_d8 == '\x01') {
          local_c8 = uStack_d8._4_4_;
          uStack_c4 = 0;
          iStack_9c = uStack_d8._4_4_;
          uStack_98 = 0;
          local_a0 = CONCAT31(local_a0._1_3_,1);
          local_f8.UpperBound._0_4_ = local_a0;
        }
        else {
          local_c0 = uStack_d8._4_4_;
          uStack_bc = 0;
          iStack_90 = uStack_d8._4_4_;
          uStack_8c = 0;
          local_94 = local_94 & 0xffffff00;
          local_f8.UpperBound._0_4_ = local_94;
        }
        local_f8.UpperBound.Value.SubFrame = 0.0;
        local_f8.UpperBound.Value.FrameNumber.Value = uStack_d8._4_4_;
      }
      FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange
                (&local_60,&local_f8,(TFunctionRef<bool___cdecl(TRange<FFrameTime>)> *)&local_88,
                 &param_2->StartBreadcrumbs,&param_2->EndBreadcrumbs);
    }
    puVar8 = puVar8 + 1;
  }
  if (local_60.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.NestedTransforms.AllocatorInstance.Data);
  }
  return;
}

// VisitTrack @ 14dd4c0a0

void __thiscall
`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::FSequenceRangeVisitor::
VisitTrack(void *this,UMovieSceneTrack *param_1,FGuid *param_2,FSubSequenceSpace *param_3)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMovieSceneTrack *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      GatherFromSection(this,param_1,param_3,
                        (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                         *)((longlong)this + 8));
      goto LAB_14dd4c0fe;
    }
  }
  if (param_1 == (UMovieSceneTrack *)0x0) {
    return;
  }
LAB_14dd4c0fe:
  pUVar2 = Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    GatherFromSection(this,param_1,param_3,
                      (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                       *)((longlong)this + 0x68));
  }
  return;
}

