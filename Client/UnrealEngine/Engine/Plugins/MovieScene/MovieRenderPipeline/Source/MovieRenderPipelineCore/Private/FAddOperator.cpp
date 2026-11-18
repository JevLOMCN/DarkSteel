// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// operator() @ 14dd10cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::FAddOperator::
operator()(FAddOperator *this,FMovieSceneEvaluationTreeNode *param_1)

{
  int *piVar1;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FEvaluationTreeEntryHandle FVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [32];
  int *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FVar10.EntryIndex = (param_1->DataID).EntryIndex;
  if (FVar10.EntryIndex == -1) {
    pTVar2 = this->Tree;
    uStack_44 = 0;
    local_40 = 1;
    local_48 = (pTVar2->Data).Items.ArrayNum;
    pFVar3 = (pTVar2->Data).Entries.AllocatorInstance.Data;
    FVar10.EntryIndex = (pTVar2->Data).Entries.ArrayNum;
    if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
       (lVar9 = (longlong)(pTVar2->Data).Entries.ArrayMax,
       (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0xc)) {
      local_68 = 0xc;
      local_88 = &local_48;
      local_80 = pFVar3;
      local_78 = lVar9;
      local_70 = (longlong)FVar10.EntryIndex;
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
    piVar1 = &(pTVar2->Data).Entries.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)&pTVar2->Data,piVar1);
    }
    (pTVar2->Data).Entries.ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->Data).Entries.AllocatorInstance.Data;
    *(ulonglong *)(pFVar3 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = local_40;
    TArray<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>,TSizedDefaultAllocator<32>_>::
    SetNum(&(pTVar2->Data).Items,(pTVar2->Data).Items.ArrayNum + 1,Default);
    (param_1->DataID).EntryIndex = FVar10.EntryIndex;
  }
  pTVar2 = this->Tree;
  local_58 = *(undefined8 *)&this->DataToInsert;
  uStack_50 = *(undefined8 *)&(this->DataToInsert).field_0x8;
  iVar7 = (pTVar2->Data).Entries.ArrayNum;
  uVar8 = 0;
  if (FVar10.EntryIndex < iVar7) {
    uVar8 = (uint)~FVar10.EntryIndex >> 0x1f;
  }
  if (uVar8 == 0) {
    local_88 = (int *)(longlong)FVar10.EntryIndex;
    local_80 = (FScriptContainerElement *)(longlong)iVar7;
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
  pFVar4 = (pTVar2->Data).Entries.AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)FVar10.EntryIndex * 0xc;
  if (*(int *)(pFVar3 + 8) < *(int *)(pFVar4 + (longlong)FVar10.EntryIndex * 0xc + 4) + 1) {
    iVar7 = *(int *)(pFVar3 + 8) * 2;
    iVar12 = 2;
    if (2 < iVar7) {
      iVar12 = iVar7;
    }
    TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
    ReserveEntry(&pTVar2->Data,FVar10,iVar12);
  }
  uVar11 = *(int *)(pFVar3 + 4) + *(int *)pFVar3;
  iVar7 = (pTVar2->Data).Items.ArrayNum;
  local_80 = (FScriptContainerElement *)(longlong)iVar7;
  uVar8 = 0;
  if ((int)uVar11 < iVar7) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_88 = (int *)(longlong)(int)uVar11;
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
  pFVar4 = (pTVar2->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
  *(undefined8 *)pFVar4 = local_58;
  *(undefined8 *)(pFVar4 + 8) = uStack_50;
  *(int *)(pFVar3 + 4) = *(int *)(pFVar3 + 4) + 1;
  return;
}

