// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> @ 14dd09000

TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> * __thiscall
TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
          (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
           *this)

{
  uint local_res8;
  uint local_res10;
  
  local_res8 = CONCAT31(local_res8._1_3_,2);
  this->_padding_ = (ulonglong)local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  this->_padding_ = (ulonglong)local_res10;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Data).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Entries.ArrayNum = 0;
  (this->Data).Entries.ArrayMax = 0;
  (this->Data).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Items.ArrayNum = 0;
  (this->Data).Items.ArrayMax = 0;
  return this;
}

// GetDataForSingleNode @ 14dd24ce0

TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> * __thiscall
TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
GetDataForSingleNode
          (TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
           *this,TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int>
                 *__return_storage_ptr__,FMovieSceneEvaluationTreeNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *pTVar5;
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
        pTVar5 = (TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *)
                 (*pcVar3)();
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
        pTVar5 = (TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *)
                 (*pcVar3)();
        return pTVar5;
      }
    }
    iStack_20 = iVar1;
    local_28 = (this->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *)
                 (*pcVar3)();
        return pTVar5;
      }
    }
    ppFVar6 = &local_28;
  }
  pFVar2 = ppFVar6[1];
  __return_storage_ptr__->DataPtr =
       (TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> *)*ppFVar6;
  *(FScriptContainerElement **)&__return_storage_ptr__->ArrayNum = pFVar2;
  return __return_storage_ptr__;
}

