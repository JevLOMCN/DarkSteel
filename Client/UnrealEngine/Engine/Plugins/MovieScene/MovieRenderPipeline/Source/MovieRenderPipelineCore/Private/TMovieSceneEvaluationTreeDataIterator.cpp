// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> @ 14dd09070

TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *
__thiscall
TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
          (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
           *this,TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                 *param_1,FMovieSceneEvaluationTreeNodeHandle param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *pTVar8;
  TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
  *pTVar9;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar10;
  uint uVar11;
  FEvaluationTreeEntryHandle FVar12;
  int iVar13;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_38;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  
  this->Tree = param_1;
  if ((param_2.ChildrenHandle.EntryIndex.EntryIndex == -1) && (param_2.Index != 0)) {
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
    this->DataIndex = 0;
    return this;
  }
  pTVar8 = (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *)
           FMovieSceneEvaluationTree::GetNode((FMovieSceneEvaluationTree *)param_1,param_2);
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
  this->DataIndex = 0;
  while( true ) {
    if (pTVar8 == (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                   *)0x0) {
      return this;
    }
    uVar7 = ((FEvaluationTreeEntryHandle *)&pTVar8->_padding_)[1].EntryIndex;
    uVar11 = 0;
    if (uVar7 == 0xffffffff) {
      iVar13 = 0;
    }
    else {
      uVar6 = uVar11;
      if ((int)uVar7 < (param_1->Data).Entries.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      pFVar1 = (param_1->Data).Entries.AllocatorInstance.Data;
      uVar6 = *(uint *)(pFVar1 + (longlong)(int)uVar7 * 0xc);
      iVar13 = *(int *)(pFVar1 + (longlong)(int)uVar7 * 0xc + 4);
      uVar7 = uVar11;
      if ((int)uVar6 < (param_1->Data).Items.ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      if ((iVar13 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
    }
    if ((-1 < this->DataIndex) && (this->DataIndex < iVar13)) {
      return this;
    }
    pFVar2 = this->CurrentNode;
    if (((pFVar2->Parent).ChildrenHandle.EntryIndex == -1) && ((pFVar2->Parent).Index != 0)) break;
    FVar3 = pFVar2->Parent;
    FVar12 = FVar3.ChildrenHandle.EntryIndex;
    uVar7 = FVar3.Index;
    if (FVar12.EntryIndex == -1) {
      bVar5 = uVar7 == 0;
    }
    else {
      pTVar10 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                           &param_1->_padding_,&local_38,FVar12);
      if (((longlong)FVar3 < 0) || (pTVar10->ArrayNum <= (int)uVar7)) {
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
      pcVar4 = (code *)swi(3);
      pTVar9 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                *)(*pcVar4)();
      return pTVar9;
    }
    pTVar8 = param_1;
    if (FVar12.EntryIndex != -1) {
      pTVar10 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                           &param_1->_padding_,&local_28,FVar12);
      if ((int)uVar7 < pTVar10->ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      pTVar8 = (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                *)(pTVar10->DataPtr + (int)uVar7);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
    this->DataIndex = 0;
  }
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
  this->DataIndex = 0;
  return this;
}

// operator++ @ 14dd0eb60

TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *
__thiscall
TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
operator++(TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
  *pTVar8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar9;
  FEvaluationTreeEntryHandle FVar10;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *pTVar11;
  int iVar12;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_38;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  
  this->DataIndex = this->DataIndex + 1;
  pTVar11 = (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *)
            this->CurrentNode;
  if (pTVar11 ==
      (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *)0x0) {
    return this;
  }
  while( true ) {
    uVar7 = ((FEvaluationTreeEntryHandle *)&pTVar11->_padding_)[1].EntryIndex;
    if (uVar7 == 0xffffffff) {
      iVar12 = 0;
    }
    else {
      pTVar11 = this->Tree;
      uVar6 = 0;
      if ((int)uVar7 < (pTVar11->Data).Entries.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      pFVar1 = (pTVar11->Data).Entries.AllocatorInstance.Data;
      uVar6 = *(uint *)(pFVar1 + (longlong)(int)uVar7 * 0xc);
      iVar12 = *(int *)(pFVar1 + (longlong)(int)uVar7 * 0xc + 4);
      uVar7 = 0;
      if ((int)uVar6 < (pTVar11->Data).Items.ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      if ((iVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
    }
    if ((-1 < this->DataIndex) && (this->DataIndex < iVar12)) {
      return this;
    }
    pFVar2 = this->CurrentNode;
    if (((pFVar2->Parent).ChildrenHandle.EntryIndex == -1) && ((pFVar2->Parent).Index != 0)) break;
    FVar3 = pFVar2->Parent;
    pTVar11 = this->Tree;
    FVar10 = FVar3.ChildrenHandle.EntryIndex;
    uVar7 = FVar3.Index;
    if (FVar10.EntryIndex == -1) {
      bVar5 = uVar7 == 0;
    }
    else {
      pTVar9 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                         ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                          &pTVar11->_padding_,&local_38,FVar10);
      if (((longlong)FVar3 < 0) || (pTVar9->ArrayNum <= (int)uVar7)) {
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
      pcVar4 = (code *)swi(3);
      pTVar8 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                *)(*pcVar4)();
      return pTVar8;
    }
    if (FVar10.EntryIndex != -1) {
      pTVar9 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                         ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                          &pTVar11->_padding_,&local_28,FVar10);
      uVar6 = 0;
      if ((int)uVar7 < pTVar9->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      pTVar11 = (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                 *)(pTVar9->DataPtr + (int)uVar7);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar11;
    this->DataIndex = 0;
    if (pTVar11 ==
        (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *)0x0)
    {
      return this;
    }
  }
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
  this->DataIndex = 0;
  return this;
}

