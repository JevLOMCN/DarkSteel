// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// FMovieSceneEvaluationTreeRangeIterator @ 14617f2a0

FMovieSceneEvaluationTreeRangeIterator * __thiscall
FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
          (FMovieSceneEvaluationTreeRangeIterator *this,FMovieSceneEvaluationTree *param_1)

{
  FEvaluationTreeEntryHandle FVar1;
  code *pcVar2;
  FMovieSceneEvaluationTreeNode *pFVar3;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  FMovieSceneEvaluationTreeNodeHandle FVar6;
  TRangeBound<FFrameNumber> TVar7;
  bool bVar8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar9;
  FMovieSceneEvaluationTreeRangeIterator *pFVar10;
  TRangeBound<FFrameNumber> TVar11;
  int iVar12;
  undefined4 local_res8;
  uint local_res10;
  uint local_res18;
  uint local_88;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_70;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_60;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_50;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_40;
  
  local_res10 = CONCAT31(local_res10._1_3_,2);
  TVar4.Value.Value = 0;
  TVar4._0_4_ = local_res10;
  (this->CurrentRange).LowerBound = TVar4;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  TVar5.Value.Value = 0;
  TVar5._0_4_ = local_res18;
  (this->CurrentRange).UpperBound = TVar5;
  (this->CurrentNodeHandle).ChildrenHandle.EntryIndex = -1;
  (this->CurrentNodeHandle).Index = 0;
  this->Tree = param_1;
  while( true ) {
    if ((param_1->RootNode).ChildrenID.EntryIndex == -1) {
      local_70.DataPtr = (FMovieSceneEvaluationTreeNode *)0x0;
      pTVar9 = &local_70;
      local_70.ArrayNum = 0;
    }
    else {
      pTVar9 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                         (&this->Tree->ChildNodes,&local_60,
                          (FEvaluationTreeEntryHandle)(param_1->RootNode).ChildrenID.EntryIndex);
    }
    pFVar3 = pTVar9->DataPtr;
    iVar12 = (int)*(undefined8 *)&pTVar9->ArrayNum;
    if (iVar12 == 0) break;
    if (iVar12 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar2)();
        return pFVar10;
      }
    }
    if ((pFVar3->Range).LowerBound.Type.Value != '\x02') break;
    FVar1.EntryIndex = (param_1->RootNode).ChildrenID.EntryIndex;
    param_1 = this->Tree;
    FVar6.Index = 0;
    FVar6.ChildrenHandle.EntryIndex = FVar1.EntryIndex;
    this->CurrentNodeHandle = FVar6;
    if (FVar1.EntryIndex != -1) {
      pTVar9 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                         (&param_1->ChildNodes,&local_50,FVar1);
      if (pTVar9->ArrayNum < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Handle)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                           ,0x18d,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar2)();
          return pFVar10;
        }
      }
      if (FVar1.EntryIndex != -1) {
        pTVar9 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                           (&param_1->ChildNodes,&local_40,FVar1);
        param_1 = (FMovieSceneEvaluationTree *)
                  TArrayView<FMovieSceneEvaluationTreeNode_const_,int>::operator[](pTVar9,0);
      }
    }
  }
  if (iVar12 == 0) {
    TVar11 = (param_1->RootNode).Range.UpperBound;
  }
  else {
    if (iVar12 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar2)();
        return pFVar10;
      }
    }
    TVar11 = (pFVar3->Range).LowerBound;
    if (TVar11.Type.Value.Value == '\0') {
      local_res8 = CONCAT31(local_res8._1_3_,1);
      TVar11.Value.Value = TVar11.Value.Value.Value;
      TVar11._0_4_ = local_res8;
    }
    else if (TVar11.Type.Value.Value == '\x01') {
      TVar11 = (TRangeBound<FFrameNumber>)
               ((ulonglong)CONCAT43(TVar11.Value.Value.Value,local_res8._1_3_) << 8);
    }
  }
  local_88 = CONCAT31(local_88._1_3_,2);
  TVar7.Value.Value = 0;
  TVar7._0_4_ = local_88;
  (this->CurrentRange).LowerBound = TVar7;
  (this->CurrentRange).UpperBound = TVar11;
  return this;
}

// FMovieSceneEvaluationTreeRangeIterator @ 14617f4f0

FMovieSceneEvaluationTreeRangeIterator * __thiscall
FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
          (FMovieSceneEvaluationTreeRangeIterator *this,FMovieSceneEvaluationTree *param_1,
          TRangeBound<FFrameNumber> param_2)

{
  int iVar1;
  int iVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  TRangeBound<FFrameNumber> TVar4;
  code *pcVar5;
  bool bVar6;
  FMovieSceneEvaluationTreeNodeHandle FVar7;
  uint3 uVar8;
  bool bVar9;
  bool bVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  uint uVar12;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar13;
  FMovieSceneEvaluationTreeRangeIterator *pFVar14;
  FMovieSceneEvaluationTree *pFVar15;
  FFrameNumber *pFVar16;
  TEnumAsByte<ERangeBoundTypes::Type> TVar17;
  FFrameNumber FVar18;
  FFrameNumber FVar19;
  FFrameNumber FVar20;
  TRangeBound<FFrameNumber> TVar21;
  FEvaluationTreeEntryHandle FVar22;
  TRangeBound<FFrameNumber> *pTVar23;
  uint uVar24;
  uint uVar25;
  FMovieSceneEvaluationTreeNode *this_00;
  uint uVar26;
  TRange<FFrameNumber> local_e8;
  FMovieSceneEvaluationTreeNode *local_d8;
  undefined8 uStack_d0;
  TRangeBound<FFrameNumber> local_c8;
  int local_c0;
  int iStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int local_b0;
  uint uStack_ac;
  FMovieSceneEvaluationTree *local_a8;
  int local_a0;
  int iStack_9c;
  FMovieSceneEvaluationTreeNodeHandle local_98;
  TRangeBound<FFrameNumber> local_90;
  TRangeBound<FFrameNumber> local_88;
  TRangeBound<FFrameNumber> local_80;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_78;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_68;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_58;
  
  (this->CurrentRange).LowerBound.Type.Value = '\x02';
  (this->CurrentRange).LowerBound.Value.Value = 0;
  (this->CurrentRange).UpperBound.Type.Value = '\x02';
  (this->CurrentRange).UpperBound.Value.Value = 0;
  uStack_b4 = 0;
  local_b8 = CONCAT31(local_b8._1_3_,2);
  local_e8.UpperBound.Value.Value = 0;
  local_e8.UpperBound._0_4_ = local_b8;
  (this->CurrentNodeHandle).ChildrenHandle.EntryIndex = -1;
  (this->CurrentNodeHandle).Index = 0;
  this->Tree = param_1;
  local_e8.LowerBound = param_2;
  do {
    while( true ) {
      FVar3 = this->CurrentNodeHandle;
      pFVar15 = this->Tree;
      FVar22 = FVar3.ChildrenHandle.EntryIndex;
      local_a8 = pFVar15;
      local_98 = FVar3;
      if (FVar22.EntryIndex == -1) {
        bVar9 = FVar3.Index == 0;
      }
      else {
        pTVar13 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                            (&pFVar15->ChildNodes,&local_78,FVar22);
        if (((longlong)FVar3 < 0) || (pTVar13->ArrayNum <= FVar3.Index)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
      }
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Handle)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                             ,0x18d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      if (FVar22.EntryIndex != -1) {
        pTVar13 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                            (&pFVar15->ChildNodes,&local_68,FVar22);
        pFVar15 = (FMovieSceneEvaluationTree *)
                  TArrayView<FMovieSceneEvaluationTreeNode_const_,int>::operator[]
                            (pTVar13,local_98.Index);
        local_a8 = pFVar15;
      }
      TVar21 = (pFVar15->RootNode).Range.UpperBound;
      (this->CurrentRange).LowerBound = (pFVar15->RootNode).Range.LowerBound;
      (this->CurrentRange).UpperBound = TVar21;
      if ((pFVar15->RootNode).ChildrenID.EntryIndex == -1) goto LAB_14617fbea;
      pTVar13 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          (&this->Tree->ChildNodes,&local_58,
                           (FEvaluationTreeEntryHandle)(pFVar15->RootNode).ChildrenID.EntryIndex);
      TVar21 = local_90;
      uVar24 = 0;
      uVar26 = (uint)*(undefined8 *)&pTVar13->ArrayNum;
      local_d8 = pTVar13->DataPtr;
      uStack_d0 = *(undefined8 *)&pTVar13->ArrayNum;
      TVar11 = param_2.Type.Value;
      local_90.Value = param_2.Value.Value;
      FVar20.Value = local_90.Value.Value;
      local_90 = TVar21;
      if (0 < (int)uVar26) break;
LAB_14617f704:
      if ((int)uVar26 <= (int)uVar24) goto LAB_14617f79c;
      uVar25 = 0;
      if ((int)uVar24 < (int)uVar26) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      TVar21 = local_d8[uVar24].Range.LowerBound;
      TVar17 = TVar21.Type.Value;
      if ((TVar17.Value != TVar11.Value) ||
         ((TVar17.Value != '\x02' && (TVar21.Value.Value.Value != FVar20.Value))))
      goto LAB_14617f79c;
      local_b0 = (pFVar15->RootNode).ChildrenID.EntryIndex;
      FVar3.Index = uVar24;
      FVar3.ChildrenHandle.EntryIndex = local_b0;
      this->CurrentNodeHandle = FVar3;
      uStack_ac = uVar24;
    }
    local_90 = param_2;
    uVar25 = uVar26;
    do {
      iVar1 = (uVar25 >> 1) + uVar24;
      local_80 = local_d8[iVar1].Range.LowerBound;
      FVar18 = local_80.Value.Value;
      TVar17 = local_80.Type.Value;
      if (TVar17.Value == '\x02') {
LAB_14617f6c1:
        if (((local_80._0_4_ & 0xff) == (param_2._0_4_ & 0xff)) &&
           ((TVar17.Value == '\x02' || (FVar18.Value == FVar20.Value)))) goto LAB_14617f6df;
        bVar9 = true;
      }
      else {
        if ((TVar11.Value == '\x02') ||
           ((FVar19.Value = FVar18.Value, FVar20.Value <= FVar18.Value &&
            ((FVar20.Value < FVar18.Value || (TVar17.Value != '\x01')))))) {
          if (TVar11.Value == TVar17.Value) {
            FVar19.Value = FVar20.Value;
            if (TVar11.Value == '\x02') goto LAB_14617f6c1;
            goto LAB_14617f6b6;
          }
        }
        else {
LAB_14617f6b6:
          if (FVar19.Value == FVar18.Value) goto LAB_14617f6c1;
        }
LAB_14617f6df:
        bVar9 = false;
      }
      if (bVar9) {
        uVar24 = iVar1 + (uVar25 & 1);
      }
      uVar12 = uVar25 >> 1;
      uVar25 = uVar25 >> 1;
    } while (uVar12 != 0);
    if (-1 < (int)uVar24) goto LAB_14617f704;
LAB_14617f79c:
    uVar25 = uVar24 - 1;
    if (((int)uVar25 < 0) || (bVar9 = false, (int)uVar26 <= (int)uVar25)) {
LAB_14617fa76:
      if (((int)uVar24 < 0) || ((int)uVar26 <= (int)uVar24)) {
        pTVar23 = &local_88;
        local_88 = (this->CurrentRange).UpperBound;
      }
      else {
        uVar25 = 0;
        if ((int)uVar24 < (int)uVar26) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
          return pFVar14;
        }
        TVar21 = local_d8[(int)uVar24].Range.LowerBound;
        if (TVar21.Type.Value.Value == '\0') {
          pTVar23 = &local_c8;
          local_c8.Value.Value = TVar21.Value.Value.Value;
          local_c8.Type.Value = '\x01';
        }
        else if (TVar21.Type.Value.Value == '\x01') {
          pTVar23 = &local_c8;
          local_c8.Value.Value = TVar21.Value.Value.Value;
          local_c8 = (TRangeBound<FFrameNumber>)((ulonglong)local_c8 & 0xffffffffffffff00);
        }
        else {
          local_c8 = TVar21;
          pTVar23 = &local_c8;
        }
      }
      if (((int)(uVar24 - 1) < 0) || ((int)uVar26 <= (int)(uVar24 - 1))) {
        TVar21 = (this->CurrentRange).LowerBound;
      }
      else {
        uVar24 = uVar24 - 1;
        uVar25 = 0;
        if ((int)uVar24 < (int)uVar26) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
          return pFVar14;
        }
        TVar21 = local_d8[uVar24].Range.UpperBound;
        FVar20 = TVar21.Value.Value;
        uVar8 = local_c0._1_3_;
        if (TVar21.Type.Value.Value == '\0') {
          iStack_bc = FVar20.Value;
          local_c0 = CONCAT31(local_c0._1_3_,1);
          TVar21.Value.Value = FVar20.Value;
          TVar21._0_4_ = local_c0;
        }
        else if (TVar21.Type.Value.Value == '\x01') {
          iStack_bc = FVar20.Value;
          local_c0 = (uint)local_c0._1_3_ << 8;
          TVar21 = (TRangeBound<FFrameNumber>)((ulonglong)CONCAT43(FVar20.Value,uVar8) << 8);
        }
      }
      TVar4 = *pTVar23;
      (this->CurrentRange).LowerBound = TVar21;
      (this->CurrentRange).UpperBound = TVar4;
LAB_14617fbea:
      bVar9 = TRange<FFrameNumber>::Overlaps(&this->CurrentRange,&local_e8);
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentRange.Overlaps(CompareRange)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTree.cpp"
                             ,0x57,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      return this;
    }
    uVar12 = 0;
    if ((int)uVar25 < (int)uVar26) {
      uVar12 = ~uVar25 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
      return pFVar14;
    }
    this_00 = local_d8 + (int)uVar25;
    bVar10 = TRange<FFrameNumber>::IsEmpty(&this_00->Range);
    if (bVar10) goto LAB_14617fa76;
    TVar11 = local_e8.LowerBound.Type.Value;
    if ((TVar11.Value != '\x02') && (local_e8.UpperBound.Type.Value != '\x02')) {
      FVar20.Value = local_e8.UpperBound.Value.Value;
      if ((TVar11.Value == '\x02') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      if (FVar20.Value < local_e8.LowerBound.Value.Value) goto LAB_14617fa76;
      pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_e8.UpperBound);
      iVar1 = pFVar16->Value;
      pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_e8.LowerBound);
      TVar11 = local_e8.LowerBound.Type.Value;
      if ((pFVar16->Value == iVar1) &&
         ((TVar11.Value == '\0' || (local_e8.UpperBound.Type.Value == '\0')))) goto LAB_14617fa76;
    }
    if (((this_00->Range).UpperBound.Type.Value == '\x02') || (TVar11.Value == '\x02')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if (((this_00->Range).LowerBound.Type.Value == '\x02') ||
       (local_e8.UpperBound.Type.Value == '\x02')) {
      bVar9 = true;
    }
    bVar6 = true;
    if (!bVar10) {
      if ((TVar11.Value == '\x02') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      FVar20.Value = local_e8.LowerBound.Value.Value;
      if (((this_00->Range).UpperBound.Type.Value == '\x02') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      iVar1 = (this_00->Range).UpperBound.Value.Value;
      pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_e8.LowerBound);
      iVar2 = pFVar16->Value;
      pFVar16 = TRangeBound<FFrameNumber>::GetValue(&(this_00->Range).UpperBound);
      if (((this_00->Range).UpperBound.Type.Value == '\x01') &&
         (local_e8.LowerBound.Type.Value == '\x01')) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      bVar6 = FVar20.Value < iVar1;
      if (bVar10) {
        bVar6 = iVar2 <= pFVar16->Value;
      }
    }
    bVar10 = true;
    if (!bVar9) {
      if ((local_e8.UpperBound.Type.Value == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      FVar20.Value = local_e8.UpperBound.Value.Value;
      if (((this_00->Range).LowerBound.Type.Value == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMovieSceneEvaluationTreeRangeIterator *)(*pcVar5)();
        return pFVar14;
      }
      iVar1 = (this_00->Range).LowerBound.Value.Value;
      pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_e8.UpperBound);
      iVar2 = pFVar16->Value;
      pFVar16 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)this_00);
      if (((this_00->Range).LowerBound.Type.Value == '\x01') &&
         (local_e8.UpperBound.Type.Value == '\x01')) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      bVar10 = iVar1 < FVar20.Value;
      if (bVar9) {
        bVar10 = pFVar16->Value <= iVar2;
      }
    }
    if ((!bVar6) || (!bVar10)) goto LAB_14617fa76;
    local_a0 = (local_a8->RootNode).ChildrenID.EntryIndex;
    iStack_9c = uVar24 - 1;
    FVar7.Index = iStack_9c;
    FVar7.ChildrenHandle.EntryIndex = local_a0;
    this->CurrentNodeHandle = FVar7;
  } while( true );
}

// FindNextChild @ 1461a8ba0

FMovieSceneEvaluationTreeNodeHandle __thiscall
FMovieSceneEvaluationTreeRangeIterator::FindNextChild
          (FMovieSceneEvaluationTreeRangeIterator *this,FMovieSceneEvaluationTreeNodeHandle param_1,
          TRangeBound<FFrameNumber> param_2,bool param_3)

{
  TRangeBound<FFrameNumber> TVar1;
  bool bVar2;
  FMovieSceneEvaluationTreeNode *pFVar3;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar4;
  int iVar5;
  FFrameNumber FVar6;
  FFrameNumber FVar7;
  FFrameNumber *pFVar8;
  int iVar9;
  int iVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  undefined7 in_register_00000089;
  uint uVar12;
  uint uVar13;
  char in_stack_00000028;
  FFrameNumber FStack_44;
  TRangeBound<FFrameNumber> local_40;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_38;
  
  pFVar3 = FMovieSceneEvaluationTree::GetNode
                     (this->Tree,(FMovieSceneEvaluationTreeNodeHandle)param_2);
  iVar9 = 0;
  iVar10 = 0;
  if ((pFVar3->ChildrenID).EntryIndex == -1) {
    local_38.DataPtr = (FMovieSceneEvaluationTreeNode *)0x0;
    pTVar4 = &local_38;
    local_38.ArrayNum = 0;
  }
  else {
    pTVar4 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                       (&this->Tree->ChildNodes,&local_38,
                        (FEvaluationTreeEntryHandle)(pFVar3->ChildrenID).EntryIndex);
  }
  local_38.DataPtr = pTVar4->DataPtr;
  local_38.ArrayNum = pTVar4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
  if (local_38.ArrayNum != 0) {
    iVar5 = (int)((uint7)in_register_00000089 >> 0x18);
    if (in_stack_00000028 == '\0') {
      if (0 < local_38.ArrayNum) {
        uVar12 = local_38.ArrayNum;
        iVar10 = iVar9;
        do {
          uVar13 = uVar12 >> 1;
          local_40 = local_38.DataPtr[(int)(uVar13 + iVar10)].Range.UpperBound;
          TVar11 = local_40.Type.Value;
          FVar6 = local_40.Value.Value;
          if (param_3 == true) {
LAB_1461a8d64:
            pFVar8 = &local_40.Value;
            if ((bool)TVar11.Value == param_3) goto LAB_1461a8d74;
LAB_1461a8da5:
            bVar2 = false;
          }
          else {
            if (TVar11.Value == '\x02') {
              pFVar8 = &FStack_44;
              TVar11.Value = param_3;
LAB_1461a8d74:
              if (TVar11.Value != '\x02') goto LAB_1461a8d79;
            }
            else {
              if (iVar5 < FVar6.Value) {
                pFVar8 = &FStack_44;
                TVar11.Value = param_3;
                goto LAB_1461a8d74;
              }
              if ((FVar6.Value < iVar5) || (param_3)) goto LAB_1461a8d64;
              pFVar8 = &FStack_44;
LAB_1461a8d79:
              if (pFVar8->Value != iVar5) goto LAB_1461a8da5;
            }
            if (((uint)param_3 == (local_40._0_4_ & 0xff)) &&
               ((param_3 == 2 || (iVar5 == FVar6.Value)))) goto LAB_1461a8da5;
            bVar2 = true;
          }
          if (!bVar2) {
            iVar10 = uVar13 + iVar10 + (uVar12 & 1);
          }
          uVar12 = uVar13;
        } while (uVar13 != 0);
      }
      iVar10 = iVar10 + -1;
    }
    else {
      uVar12 = local_38.ArrayNum;
      if (0 < local_38.ArrayNum) {
        do {
          uVar13 = uVar12 >> 1;
          TVar1 = local_38.DataPtr[(int)(uVar13 + iVar9)].Range.LowerBound;
          FVar6 = TVar1.Value.Value;
          TVar11 = TVar1.Type.Value;
          if (TVar11.Value == '\x02') {
LAB_1461a8ca6:
            if (((TVar1._0_4_ & 0xff) == (uint)param_3) &&
               ((TVar11.Value == '\x02' || (FVar6.Value == iVar5)))) goto LAB_1461a8cc3;
            bVar2 = true;
          }
          else {
            if ((param_3 == true) ||
               ((FVar7.Value = FVar6.Value, iVar5 <= FVar6.Value &&
                ((iVar5 < FVar6.Value || (TVar11.Value != '\x01')))))) {
              if (param_3 == (bool)TVar11.Value) {
                FVar7.Value = iVar5;
                if (param_3 == true) goto LAB_1461a8ca6;
                goto LAB_1461a8c9b;
              }
            }
            else {
LAB_1461a8c9b:
              if (FVar7.Value == FVar6.Value) goto LAB_1461a8ca6;
            }
LAB_1461a8cc3:
            bVar2 = false;
          }
          iVar10 = iVar9;
          if (bVar2) {
            iVar10 = uVar13 + iVar9 + (uVar12 & 1);
          }
          uVar12 = uVar13;
          iVar9 = iVar10;
        } while (uVar13 != 0);
      }
    }
    if ((-1 < iVar10) && (iVar10 < local_38.ArrayNum)) {
      *(int *)param_1 = (pFVar3->ChildrenID).EntryIndex;
      *(int *)((longlong)param_1 + 4) = iVar10;
      return param_1;
    }
  }
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  return param_1;
}

// Iter @ 1461bbeb0

void __thiscall
FMovieSceneEvaluationTreeRangeIterator::Iter
          (FMovieSceneEvaluationTreeRangeIterator *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  FMovieSceneEvaluationTreeNodeHandle FVar4;
  bool bVar5;
  TEnumAsByte<ERangeBoundTypes::Type> TVar6;
  FFrameNumber FVar7;
  FMovieSceneEvaluationTreeNode *pFVar8;
  FFrameNumber *pFVar9;
  TRangeBound<FFrameNumber> TVar10;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar11;
  FMovieSceneEvaluationTree *pFVar12;
  FMovieSceneEvaluationTreeNode *pFVar13;
  TRangeBound<FFrameNumber> TVar14;
  TRangeBound<FFrameNumber> TVar15;
  FEvaluationTreeEntryHandle FVar16;
  TEnumAsByte<ERangeBoundTypes::Type> TVar17;
  int iVar18;
  FMovieSceneEvaluationTreeNodeHandle local_res8;
  char local_res10;
  TRangeBound<FFrameNumber> local_res18;
  int local_res20;
  uint local_98;
  TRangeBound<FFrameNumber> local_78;
  TRangeBound<FFrameNumber> TStack_70;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_68;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_58;
  
  local_res10 = param_1;
  while( true ) {
    if (((this->CurrentNodeHandle).ChildrenHandle.EntryIndex == -1) &&
       ((this->CurrentNodeHandle).Index != 0)) {
      return;
    }
    pFVar8 = FMovieSceneEvaluationTree::GetNode(this->Tree,this->CurrentNodeHandle);
    local_78 = (this->CurrentRange).LowerBound;
    TStack_70 = (this->CurrentRange).UpperBound;
    TVar10 = local_78;
    pFVar13 = pFVar8;
    if (param_1) {
      TVar10 = TStack_70;
      pFVar13 = (FMovieSceneEvaluationTreeNode *)&(pFVar8->Range).UpperBound;
    }
    TVar14 = (pFVar13->Range).LowerBound;
    TVar17 = TVar14.Type.Value;
    if ((TVar17.Value != TVar10.Type.Value.Value) ||
       ((TVar17.Value != '\x02' && (TVar14.Value.Value.Value != TVar10.Value.Value.Value)))) break;
    this->CurrentNodeHandle = pFVar8->Parent;
  }
  if (((this->CurrentRange).LowerBound.Type.Value == '\x02') ||
     ((this->CurrentRange).UpperBound.Type.Value == '\x02')) {
LAB_1461bbfa1:
    local_78 = (this->CurrentRange).LowerBound;
    TStack_70 = (this->CurrentRange).UpperBound;
    TVar10 = local_78;
    if (param_1) {
      TVar10 = TStack_70;
    }
    if (TVar10.Type.Value.Value == '\0') {
      local_res18.Value.Value = TVar10.Value.Value.Value;
      local_res18.Type.Value = '\x01';
      TVar10 = local_res18;
      TVar14 = local_res18;
    }
    else {
      TVar14 = TVar10;
      if (TVar10.Type.Value.Value == '\x01') {
        local_res18.Value.Value = TVar10.Value.Value.Value;
        local_res18 = (TRangeBound<FFrameNumber>)((ulonglong)local_res18 & 0xffffffffffffff00);
        TVar10 = local_res18;
        TVar14 = local_res18;
      }
    }
  }
  else {
    if ((this->CurrentRange).LowerBound.Value.Value <= (this->CurrentRange).UpperBound.Value.Value)
    {
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&(this->CurrentRange).UpperBound);
      iVar1 = pFVar9->Value;
      pFVar9 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)this);
      if ((pFVar9->Value != iVar1) ||
         (((this->CurrentRange).LowerBound.Type.Value != '\0' &&
          ((this->CurrentRange).UpperBound.Type.Value != '\0')))) goto LAB_1461bbfa1;
    }
    local_98 = CONCAT31(local_98._1_3_,2);
    TVar10.Value.Value = 0;
    TVar10._0_4_ = local_98;
    TVar14 = local_res18;
  }
  local_res18 = TVar14;
  TVar17 = TVar10.Type.Value;
  FindNextChild(this,(FMovieSceneEvaluationTreeNodeHandle)&local_res8,
                (TRangeBound<FFrameNumber>)this->CurrentNodeHandle,(bool)TVar17.Value);
  while( true ) {
    FVar4 = local_res8;
    FVar16 = local_res8.ChildrenHandle.EntryIndex;
    iVar1 = local_res8.Index;
    iVar18 = local_res8.Index;
    if ((FVar16.EntryIndex == -1) && (local_res8.Index != 0)) break;
    pFVar12 = this->Tree;
    if (FVar16.EntryIndex == -1) {
      bVar5 = local_res8.Index == 0;
    }
    else {
      pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          (&pFVar12->ChildNodes,&local_68,FVar16);
      iVar18 = local_res8.Index;
      if (((longlong)local_res8 < 0) || (pTVar11->ArrayNum <= local_res8.Index)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Handle)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                           ,0x18d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (FVar16.EntryIndex != -1) {
      pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          (&pFVar12->ChildNodes,&local_58,FVar16);
      pFVar12 = (FMovieSceneEvaluationTree *)
                TArrayView<FMovieSceneEvaluationTreeNode_const_,int>::operator[](pTVar11,iVar1);
    }
    param_1 = (bool)local_res10;
    if (local_res10 == '\0') {
      pFVar12 = (FMovieSceneEvaluationTree *)&(pFVar12->RootNode).Range.UpperBound;
    }
    TVar14 = (pFVar12->RootNode).Range.LowerBound;
    TVar6 = TVar14.Type.Value;
    if ((TVar6.Value == TVar17.Value) &&
       ((TVar6.Value == '\x02' || (TVar14.Value.Value.Value == TVar10.Value.Value.Value)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) break;
    this->CurrentNodeHandle = FVar4;
    local_res8 = FindNextChild(this,(FMovieSceneEvaluationTreeNodeHandle)&local_78,
                               (TRangeBound<FFrameNumber>)FVar4,(bool)TVar17.Value);
    local_res8 = *(FMovieSceneEvaluationTreeNodeHandle *)local_res8;
  }
  pFVar13 = FMovieSceneEvaluationTree::GetNode(this->Tree,this->CurrentNodeHandle);
  local_78 = (pFVar13->Range).LowerBound;
  TStack_70 = (pFVar13->Range).UpperBound;
  TVar14 = local_78;
  if (param_1 != false) {
    TVar14 = TStack_70;
  }
  if ((FVar16.EntryIndex == -1) && (iVar18 != 0)) goto LAB_1461bc1dd;
  pFVar13 = FMovieSceneEvaluationTree::GetNode(this->Tree,FVar4);
  TVar15 = (pFVar13->Range).LowerBound;
  TVar3 = (pFVar13->Range).UpperBound;
  if (param_1 == false) {
    if (TVar3.Type.Value.Value == TVar17.Value) {
      if (TVar3.Type.Value.Value != '\x02') {
        FVar7 = TVar3.Value.Value;
        goto LAB_1461bc1a0;
      }
      goto LAB_1461bc1a2;
    }
LAB_1461bc1a6:
    bVar5 = false;
  }
  else {
    if (TVar15.Type.Value.Value != TVar17.Value) goto LAB_1461bc1a6;
    if (TVar15.Type.Value.Value != '\x02') {
      FVar7 = TVar15.Value.Value;
LAB_1461bc1a0:
      if (FVar7.Value != TVar10.Value.Value.Value) goto LAB_1461bc1a6;
    }
LAB_1461bc1a2:
    bVar5 = true;
  }
  if (!bVar5) {
    TVar14 = TVar3;
    if (param_1 != false) {
      TVar14 = TVar15;
    }
    if (TVar14.Type.Value.Value == '\0') {
      local_res20 = CONCAT31(local_res20._1_3_,1);
    }
    else {
      if (TVar14.Type.Value.Value != '\x01') goto LAB_1461bc1dd;
      local_res20 = (uint)local_res20._1_3_ << 8;
    }
    TVar14.Value.Value = TVar14.Value.Value.Value;
    TVar14._0_4_ = local_res20;
  }
LAB_1461bc1dd:
  TVar15 = TVar10;
  if (param_1 != false) {
    TVar15 = TVar14;
    TVar14 = TVar10;
  }
  (this->CurrentRange).LowerBound = TVar14;
  (this->CurrentRange).UpperBound = TVar15;
  return;
}

