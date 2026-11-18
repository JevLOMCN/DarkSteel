// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// GetDataForSingleNode @ 1460c9b80

TArrayView<FCompileOnTheFlyData_const_,int> * __thiscall
TMovieSceneEvaluationTree<FCompileOnTheFlyData>::GetDataForSingleNode
          (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *this,
          TArrayView<FCompileOnTheFlyData_const_,int> *__return_storage_ptr__,
          FMovieSceneEvaluationTreeNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FCompileOnTheFlyData_const_,int> *pTVar5;
  FScriptContainerElement **ppFVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *local_28;
  int iStack_20;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  uVar8 = (param_1->DataID).EntryIndex;
  if (uVar8 == 0xffffffff) {
    local_18 = (FScriptContainerElement *)0x0;
    ppFVar6 = &local_18;
    local_10 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar8 < (this->Data).Entries.ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FCompileOnTheFlyData_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar2 = (this->Data).Entries.AllocatorInstance.Data;
    uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar8 * 0xc);
    iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar8 * 0xc + 4);
    uVar8 = 0;
    if ((int)uVar7 < (this->Data).Items.ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FCompileOnTheFlyData_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    iStack_20 = iVar1;
    local_28 = (this->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x24;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FCompileOnTheFlyData_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    ppFVar6 = &local_28;
  }
  pFVar2 = ppFVar6[1];
  __return_storage_ptr__->DataPtr = (FCompileOnTheFlyData *)*ppFVar6;
  *(FScriptContainerElement **)&__return_storage_ptr__->ArrayNum = pFVar2;
  return __return_storage_ptr__;
}

// GetDataForSingleNode @ 1460c9cd0

TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> * __thiscall
TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
          (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *this,
          TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *__return_storage_ptr__,
          FMovieSceneEvaluationTreeNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *pTVar5;
  FScriptContainerElement **ppFVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *local_28;
  int iStack_20;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  uVar8 = (param_1->DataID).EntryIndex;
  if (uVar8 == 0xffffffff) {
    local_18 = (FScriptContainerElement *)0x0;
    ppFVar6 = &local_18;
    local_10 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar8 < (this->Data).Entries.ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar2 = (this->Data).Entries.AllocatorInstance.Data;
    uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar8 * 0xc);
    iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar8 * 0xc + 4);
    uVar8 = 0;
    if ((int)uVar7 < (this->Data).Items.ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    iStack_20 = iVar1;
    local_28 = (this->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    ppFVar6 = &local_28;
  }
  pFVar2 = ppFVar6[1];
  __return_storage_ptr__->DataPtr = (FMovieSceneSubSequenceTreeEntry *)*ppFVar6;
  *(FScriptContainerElement **)&__return_storage_ptr__->ArrayNum = pFVar2;
  return __return_storage_ptr__;
}

// GetDataForSingleNode @ 1460c9e20

TArrayView<FMovieSceneTrackEvaluationData_const_,int> * __thiscall
TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
          (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *this,
          TArrayView<FMovieSceneTrackEvaluationData_const_,int> *__return_storage_ptr__,
          FMovieSceneEvaluationTreeNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar5;
  FScriptContainerElement **ppFVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *local_28;
  int iStack_20;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  uVar8 = (param_1->DataID).EntryIndex;
  if (uVar8 == 0xffffffff) {
    local_18 = (FScriptContainerElement *)0x0;
    ppFVar6 = &local_18;
    local_10 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar8 < (this->Data).Entries.ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneTrackEvaluationData_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar2 = (this->Data).Entries.AllocatorInstance.Data;
    uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar8 * 0xc);
    iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar8 * 0xc + 4);
    uVar8 = 0;
    if ((int)uVar7 < (this->Data).Items.ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneTrackEvaluationData_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    iStack_20 = iVar1;
    local_28 = (this->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneTrackEvaluationData_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    ppFVar6 = &local_28;
  }
  pFVar2 = ppFVar6[1];
  __return_storage_ptr__->DataPtr = (FMovieSceneTrackEvaluationData *)*ppFVar6;
  *(FScriptContainerElement **)&__return_storage_ptr__->ArrayNum = pFVar2;
  return __return_storage_ptr__;
}

// GetDataForSingleNode @ 1461b09d0

TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> * __thiscall
TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::
GetDataForSingleNode
          (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
           *this,TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                 *__return_storage_ptr__,FMovieSceneEvaluationTreeNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> *pTVar5;
  FScriptContainerElement **ppFVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *local_28;
  int iStack_20;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  uVar8 = (param_1->DataID).EntryIndex;
  if (uVar8 == 0xffffffff) {
    local_18 = (FScriptContainerElement *)0x0;
    ppFVar6 = &local_18;
    local_10 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar8 < (this->Data).Entries.ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                  *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar2 = (this->Data).Entries.AllocatorInstance.Data;
    uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar8 * 0xc);
    iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar8 * 0xc + 4);
    uVar8 = 0;
    if ((int)uVar7 < (this->Data).Items.ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                  *)(*pcVar3)();
        return pTVar5;
      }
    }
    iStack_20 = iVar1;
    local_28 = (this->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                  *)(*pcVar3)();
        return pTVar5;
      }
    }
    ppFVar6 = &local_28;
  }
  pFVar2 = ppFVar6[1];
  __return_storage_ptr__->DataPtr = (FEntityAndMetaDataIndex *)*ppFVar6;
  *(FScriptContainerElement **)&__return_storage_ptr__->ArrayNum = pFVar2;
  return __return_storage_ptr__;
}

