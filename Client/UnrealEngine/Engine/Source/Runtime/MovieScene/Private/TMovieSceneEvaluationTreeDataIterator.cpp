// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> @ 14608e990

TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> * __thiscall
TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>
          (TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> *this,
          TMovieSceneEvaluationTree<FCompileOnTheFlyData> *param_1,
          FMovieSceneEvaluationTreeNodeHandle param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTree<FCompileOnTheFlyData> *pTVar8;
  TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> *pTVar9;
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
  pTVar8 = (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)
           FMovieSceneEvaluationTree::GetNode((FMovieSceneEvaluationTree *)param_1,param_2);
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
  this->DataIndex = 0;
  while( true ) {
    if (pTVar8 == (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)0x0) {
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> *)(*pcVar4)();
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> *)(*pcVar4)();
        return pTVar9;
      }
      if ((iVar13 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> *)(*pcVar4)();
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
      pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> *)(*pcVar4)();
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> *)(*pcVar4)();
        return pTVar9;
      }
      pTVar8 = (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)(pTVar10->DataPtr + (int)uVar7);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
    this->DataIndex = 0;
  }
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
  this->DataIndex = 0;
  return this;
}

// TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> @ 14608ec50

TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> * __thiscall
TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
          (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *this,
          TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *param_1,
          FMovieSceneEvaluationTreeNodeHandle param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTVar8;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *pTVar9;
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
  pTVar8 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
           FMovieSceneEvaluationTree::GetNode((FMovieSceneEvaluationTree *)param_1,param_2);
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
  this->DataIndex = 0;
  while( true ) {
    if (pTVar8 == (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)0x0) {
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
        return pTVar9;
      }
      if ((iVar13 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
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
      pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)(*pcVar4)()
      ;
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
        return pTVar9;
      }
      pTVar8 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
               (pTVar10->DataPtr + (int)uVar7);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
    this->DataIndex = 0;
  }
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
  this->DataIndex = 0;
  return this;
}

// TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> @ 14608ef10

TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> * __thiscall
TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
          (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *this,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_1,
          FMovieSceneEvaluationTreeNodeHandle param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar8;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *pTVar9;
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
  pTVar8 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
           FMovieSceneEvaluationTree::GetNode((FMovieSceneEvaluationTree *)param_1,param_2);
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
  this->DataIndex = 0;
  while( true ) {
    if (pTVar8 == (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) {
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
        return pTVar9;
      }
      if ((iVar13 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
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
      pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)(*pcVar4)();
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
        return pTVar9;
      }
      pTVar8 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
               (pTVar10->DataPtr + (int)uVar7);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
    this->DataIndex = 0;
  }
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
  this->DataIndex = 0;
  return this;
}

// operator++ @ 14609b6f0

TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> * __thiscall
TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::operator++
          (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *this)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *pTVar8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar9;
  FEvaluationTreeEntryHandle FVar10;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTVar11;
  int iVar12;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_38;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  
  this->DataIndex = this->DataIndex + 1;
  pTVar11 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)this->CurrentNode;
  if (pTVar11 == (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)0x0) {
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
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
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
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
        return pTVar8;
      }
      if ((iVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
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
      pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)(*pcVar4)()
      ;
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
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                 (*pcVar4)();
        return pTVar8;
      }
      pTVar11 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                (pTVar9->DataPtr + (int)uVar7);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar11;
    this->DataIndex = 0;
    if (pTVar11 == (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)0x0) {
      return this;
    }
  }
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
  this->DataIndex = 0;
  return this;
}

// operator++ @ 14609b980

TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> * __thiscall
TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::operator++
          (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *this)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *pTVar8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar9;
  FEvaluationTreeEntryHandle FVar10;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar11;
  int iVar12;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_38;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  
  this->DataIndex = this->DataIndex + 1;
  pTVar11 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)this->CurrentNode;
  if (pTVar11 == (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) {
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
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
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
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
        return pTVar8;
      }
      if ((iVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
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
      pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)(*pcVar4)();
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
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> *)
                 (*pcVar4)();
        return pTVar8;
      }
      pTVar11 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                (pTVar9->DataPtr + (int)uVar7);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar11;
    this->DataIndex = 0;
    if (pTVar11 == (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) {
      return this;
    }
  }
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
  this->DataIndex = 0;
  return this;
}

// TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> @ 14617e020

TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
* __thiscall
TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
::
TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
          (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
           *this,TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                 *param_1,FMovieSceneEvaluationTreeNodeHandle param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *pTVar8;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *pTVar9;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar10;
  FEvaluationTreeEntryHandle FVar11;
  int iVar12;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_38;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  
  this->Tree = param_1;
  if ((param_2.ChildrenHandle.EntryIndex.EntryIndex == -1) && (param_2.Index != 0)) {
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
    this->DataIndex = 0;
    return this;
  }
  pTVar8 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
            *)FMovieSceneEvaluationTree::GetNode((FMovieSceneEvaluationTree *)param_1,param_2);
  this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
  this->DataIndex = 0;
  do {
    if (pTVar8 == (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                   *)0x0) {
      return this;
    }
    uVar7 = ((FEvaluationTreeEntryHandle *)&pTVar8->_padding_)[1].EntryIndex;
    if (uVar7 == 0xffffffff) {
      iVar12 = 0;
    }
    else {
      uVar6 = 0;
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                  *)(*pcVar4)();
        return pTVar9;
      }
      pFVar1 = (param_1->Data).Entries.AllocatorInstance.Data;
      uVar6 = *(uint *)(pFVar1 + (longlong)(int)uVar7 * 0xc);
      iVar12 = *(int *)(pFVar1 + (longlong)(int)uVar7 * 0xc + 4);
      uVar7 = 0;
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
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                  *)(*pcVar4)();
        return pTVar9;
      }
      if ((iVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                  *)(*pcVar4)();
        return pTVar9;
      }
    }
    if ((-1 < this->DataIndex) && (this->DataIndex < iVar12)) {
      return this;
    }
    pFVar2 = this->CurrentNode;
    if (((pFVar2->Parent).ChildrenHandle.EntryIndex == -1) && ((pFVar2->Parent).Index != 0)) {
      this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
      this->DataIndex = 0;
      return this;
    }
    FVar3 = pFVar2->Parent;
    FVar11 = FVar3.ChildrenHandle.EntryIndex;
    iVar12 = FVar3.Index;
    if (FVar11.EntryIndex == -1) {
      bVar5 = iVar12 == 0;
    }
    else {
      pTVar10 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                           &param_1->_padding_,&local_38,FVar11);
      if (((longlong)FVar3 < 0) || (pTVar10->ArrayNum <= iVar12)) {
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
      pTVar9 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                *)(*pcVar4)();
      return pTVar9;
    }
    pTVar8 = param_1;
    if (FVar11.EntryIndex != -1) {
      pTVar10 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                          ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                           &param_1->_padding_,&local_28,FVar11);
      pTVar8 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                *)TArrayView<FMovieSceneEvaluationTreeNode_const_,int>::operator[](pTVar10,iVar12);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar8;
    this->DataIndex = 0;
  } while( true );
}

// operator++ @ 1461881b0

TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
* __thiscall
TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
::operator++(TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
             *this)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNode *pFVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *pTVar8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar9;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *pTVar10;
  FEvaluationTreeEntryHandle FVar11;
  int iVar12;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_38;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  
  this->DataIndex = this->DataIndex + 1;
  pTVar10 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
             *)this->CurrentNode;
  if (pTVar10 ==
      (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *)
      0x0) {
    return this;
  }
  do {
    uVar7 = ((FEvaluationTreeEntryHandle *)&pTVar10->_padding_)[1].EntryIndex;
    if (uVar7 == 0xffffffff) {
      iVar12 = 0;
    }
    else {
      pTVar10 = this->Tree;
      uVar6 = 0;
      if ((int)uVar7 < (pTVar10->Data).Entries.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                  *)(*pcVar4)();
        return pTVar8;
      }
      pFVar1 = (pTVar10->Data).Entries.AllocatorInstance.Data;
      uVar6 = *(uint *)(pFVar1 + (longlong)(int)uVar7 * 0xc);
      iVar12 = *(int *)(pFVar1 + (longlong)(int)uVar7 * 0xc + 4);
      uVar7 = 0;
      if ((int)uVar6 < (pTVar10->Data).Items.ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                  *)(*pcVar4)();
        return pTVar8;
      }
      if ((iVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                  *)(*pcVar4)();
        return pTVar8;
      }
    }
    if ((-1 < this->DataIndex) && (this->DataIndex < iVar12)) {
      return this;
    }
    pFVar2 = this->CurrentNode;
    if (((pFVar2->Parent).ChildrenHandle.EntryIndex == -1) && ((pFVar2->Parent).Index != 0)) {
      this->CurrentNode = (FMovieSceneEvaluationTreeNode *)0x0;
      this->DataIndex = 0;
      return this;
    }
    FVar3 = pFVar2->Parent;
    pTVar10 = this->Tree;
    FVar11 = FVar3.ChildrenHandle.EntryIndex;
    iVar12 = FVar3.Index;
    if (FVar11.EntryIndex == -1) {
      bVar5 = iVar12 == 0;
    }
    else {
      pTVar9 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                         ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                          &pTVar10->_padding_,&local_38,FVar11);
      if (((longlong)FVar3 < 0) || (pTVar9->ArrayNum <= iVar12)) {
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
      pTVar8 = (TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                *)(*pcVar4)();
      return pTVar8;
    }
    if (FVar11.EntryIndex != -1) {
      pTVar9 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                         ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                          &pTVar10->_padding_,&local_28,FVar11);
      pTVar10 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                 *)TArrayView<FMovieSceneEvaluationTreeNode_const_,int>::operator[](pTVar9,iVar12);
    }
    this->CurrentNode = (FMovieSceneEvaluationTreeNode *)pTVar10;
    this->DataIndex = 0;
    if (pTVar10 ==
        (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *)
        0x0) {
      return this;
    }
  } while( true );
}

