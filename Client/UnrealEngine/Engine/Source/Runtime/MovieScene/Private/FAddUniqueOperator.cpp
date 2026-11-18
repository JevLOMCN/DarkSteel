// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// operator() @ 146189010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::
FAddUniqueOperator::operator()(FAddUniqueOperator *this,FMovieSceneEvaluationTreeNode *param_1)

{
  FEvaluationTreeEntryHandle FVar1;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *pTVar2;
  FEntityAndMetaDataIndex FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  int iVar13;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar8 = (param_1->DataID).EntryIndex;
  if (uVar8 == 0xffffffff) {
    pTVar2 = this->Tree;
    local_48 = (pTVar2->Data).Items.ArrayNum;
    pFVar11 = (pTVar2->Data).Entries.AllocatorInstance.Data;
    uVar8 = (pTVar2->Data).Entries.ArrayNum;
    uStack_44 = 0;
    local_40 = 1;
    if ((pFVar11 <= (FScriptContainerElement *)&local_48) &&
       (lVar9 = (longlong)(pTVar2->Data).Entries.ArrayMax,
       (FScriptContainerElement *)&local_48 < pFVar11 + lVar9 * 0xc)) {
      local_58 = 0xc;
      local_78 = &local_48;
      local_70 = pFVar11;
      local_68 = lVar9;
      local_60 = (longlong)(int)uVar8;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (pTVar2->Data).Entries.ArrayNum;
    piVar12 = &(pTVar2->Data).Entries.ArrayMax;
    if (iVar7 == *piVar12) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)&pTVar2->Data,piVar12);
    }
    (pTVar2->Data).Entries.ArrayNum = iVar7 + 1;
    pFVar11 = (pTVar2->Data).Entries.AllocatorInstance.Data;
    *(ulonglong *)(pFVar11 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(pFVar11 + (longlong)iVar7 * 0xc + 8) = local_40;
    TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
    ::SetNum(&(pTVar2->Data).Items,(pTVar2->Data).Items.ArrayNum + 1,Default);
    (param_1->DataID).EntryIndex = uVar8;
  }
  pTVar2 = this->Tree;
  iVar7 = (pTVar2->Data).Entries.ArrayNum;
  uVar10 = 0;
  if ((int)uVar8 < iVar7) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_78 = (int *)(longlong)(int)uVar8;
    local_70 = (FScriptContainerElement *)(longlong)iVar7;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (pTVar2->Data).Items.ArrayNum;
  pFVar11 = (pTVar2->Data).Entries.AllocatorInstance.Data;
  uVar10 = *(uint *)(pFVar11 + (longlong)(int)uVar8 * 0xc);
  iVar13 = *(int *)(pFVar11 + (longlong)(int)uVar8 * 0xc + 4);
  uVar8 = 0;
  if ((int)uVar10 < iVar7) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_78 = (int *)(longlong)(int)uVar10, local_70 = (FScriptContainerElement *)(longlong)iVar7
     , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar11 = (pTVar2->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
  if ((iVar13 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = pFVar11 + (longlong)iVar13 * 8;
  if (pFVar11 != pFVar4) {
    do {
      if ((*(int *)pFVar11 == (this->DataToInsert).EntityIndex) &&
         (*(int *)(pFVar11 + 4) == (this->DataToInsert).MetaDataIndex)) {
        return;
      }
      pFVar11 = pFVar11 + 8;
    } while (pFVar11 != pFVar4);
  }
  FVar1.EntryIndex = (param_1->DataID).EntryIndex;
  piVar12 = (int *)(longlong)FVar1.EntryIndex;
  pTVar2 = this->Tree;
  FVar3 = this->DataToInsert;
  iVar7 = (pTVar2->Data).Entries.ArrayNum;
  uVar8 = 0;
  if (FVar1.EntryIndex < iVar7) {
    uVar8 = (uint)~FVar1.EntryIndex >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_78 = piVar12, local_70 = (FScriptContainerElement *)(longlong)iVar7,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (pTVar2->Data).Entries.AllocatorInstance.Data;
  pFVar11 = pFVar4 + (longlong)piVar12 * 0xc;
  if (*(int *)(pFVar11 + 8) < *(int *)(pFVar4 + (longlong)piVar12 * 0xc + 4) + 1) {
    iVar7 = *(int *)(pFVar11 + 8) * 2;
    iVar13 = 2;
    if (2 < iVar7) {
      iVar13 = iVar7;
    }
    TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::
    ReserveEntry(&pTVar2->Data,FVar1,iVar13);
  }
  uVar10 = *(int *)pFVar11 + *(int *)(pFVar11 + 4);
  iVar7 = (pTVar2->Data).Items.ArrayNum;
  local_70 = (FScriptContainerElement *)(longlong)iVar7;
  uVar8 = 0;
  if ((int)uVar10 < iVar7) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_78 = (int *)(longlong)(int)uVar10;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(FEntityAndMetaDataIndex *)
   ((pTVar2->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar10 * 8) = FVar3;
  *(int *)(pFVar11 + 4) = *(int *)(pFVar11 + 4) + 1;
  return;
}

// operator() @ 146189340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::FAddUniqueOperator::operator()
          (FAddUniqueOperator *this,FMovieSceneEvaluationTreeNode *param_1)

{
  FEvaluationTreeEntryHandle FVar1;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_c8 [32];
  int *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  uint local_78;
  FScriptContainerElement local_74;
  FMovieSceneWarpCounter local_70;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar6 = (param_1->DataID).EntryIndex;
  if (uVar6 == 0xffffffff) {
    pTVar2 = this->Tree;
    uStack_44 = 0;
    local_40 = 1;
    local_48 = (pTVar2->Data).Items.ArrayNum;
    pFVar9 = (pTVar2->Data).Entries.AllocatorInstance.Data;
    uVar6 = (pTVar2->Data).Entries.ArrayNum;
    if ((pFVar9 <= (FScriptContainerElement *)&local_48) &&
       (lVar8 = (longlong)(pTVar2->Data).Entries.ArrayMax,
       (FScriptContainerElement *)&local_48 < pFVar9 + lVar8 * 0xc)) {
      local_88 = 0xc;
      local_a8 = &local_48;
      local_a0 = pFVar9;
      local_98 = lVar8;
      local_90 = (longlong)(int)uVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (pTVar2->Data).Entries.ArrayNum;
    piVar11 = &(pTVar2->Data).Entries.ArrayMax;
    if (iVar5 == *piVar11) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)&pTVar2->Data,piVar11);
    }
    (pTVar2->Data).Entries.ArrayNum = iVar5 + 1;
    pFVar9 = (pTVar2->Data).Entries.AllocatorInstance.Data;
    *(ulonglong *)(pFVar9 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(pFVar9 + (longlong)iVar5 * 0xc + 8) = local_40;
    TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>::SetNum
              (&(pTVar2->Data).Items,(pTVar2->Data).Items.ArrayNum + 1,Default);
    (param_1->DataID).EntryIndex = uVar6;
  }
  pTVar2 = this->Tree;
  iVar5 = (pTVar2->Data).Entries.ArrayNum;
  uVar10 = 0;
  if ((int)uVar6 < iVar5) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_a8 = (int *)(longlong)(int)uVar6;
    local_a0 = (FScriptContainerElement *)(longlong)iVar5;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pTVar2->Data).Items.ArrayNum;
  pFVar9 = (pTVar2->Data).Entries.AllocatorInstance.Data;
  uVar10 = *(uint *)(pFVar9 + (longlong)(int)uVar6 * 0xc);
  iVar12 = *(int *)(pFVar9 + (longlong)(int)uVar6 * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar10 < iVar5) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_a8 = (int *)(longlong)(int)uVar10, local_a0 = (FScriptContainerElement *)(longlong)iVar5
     , bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (pTVar2->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30;
  if ((iVar12 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = pFVar9 + (longlong)iVar12 * 0x30;
  if (pFVar9 != pFVar7) {
    do {
      if ((*(uint *)pFVar9 == (this->DataToInsert).SequenceID.Value) &&
         (pFVar9[4] == (FScriptContainerElement)(this->DataToInsert).Flags)) {
        return;
      }
      pFVar9 = pFVar9 + 0x30;
    } while (pFVar9 != pFVar7);
  }
  local_78 = (this->DataToInsert).SequenceID.Value;
  pTVar2 = this->Tree;
  local_74 = (FScriptContainerElement)(this->DataToInsert).Flags;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter
            (&local_70,&(this->DataToInsert).RootToSequenceWarpCounter);
  FVar1.EntryIndex = (param_1->DataID).EntryIndex;
  piVar11 = (int *)(longlong)FVar1.EntryIndex;
  iVar5 = (pTVar2->Data).Entries.ArrayNum;
  uVar6 = 0;
  if (FVar1.EntryIndex < iVar5) {
    uVar6 = (uint)~FVar1.EntryIndex >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_a8 = piVar11, local_a0 = (FScriptContainerElement *)(longlong)iVar5,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = (pTVar2->Data).Entries.AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)piVar11 * 0xc;
  if (*(int *)(pFVar9 + 8) < *(int *)(pFVar7 + (longlong)piVar11 * 0xc + 4) + 1) {
    iVar5 = *(int *)(pFVar9 + 8) * 2;
    iVar12 = 2;
    if (2 < iVar5) {
      iVar12 = iVar5;
    }
    TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::ReserveEntry
              (&pTVar2->Data,FVar1,iVar12);
  }
  uVar10 = *(int *)(pFVar9 + 4) + *(int *)pFVar9;
  iVar5 = (pTVar2->Data).Items.ArrayNum;
  uVar6 = 0;
  if ((int)uVar10 < iVar5) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_a8 = (int *)(longlong)(int)uVar10;
    local_a0 = (FScriptContainerElement *)(longlong)iVar5;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = (pTVar2->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30;
  *(uint *)pFVar7 = local_78;
  pFVar7[4] = local_74;
  FMovieSceneWarpCounter::operator=((FMovieSceneWarpCounter *)(pFVar7 + 8),&local_70);
  *(int *)(pFVar9 + 4) = *(int *)(pFVar9 + 4) + 1;
  if (local_70.WarpCounts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.WarpCounts.AllocatorInstance.Data);
  }
  if ((void *)local_70._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_70._padding_);
  }
  return;
}

