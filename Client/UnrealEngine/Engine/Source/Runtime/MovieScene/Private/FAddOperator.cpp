// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// operator() @ 14609d540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneEvaluationTree<FCompileOnTheFlyData>::FAddOperator::operator()
          (FAddOperator *this,FMovieSceneEvaluationTreeNode *param_1)

{
  int *piVar1;
  int iVar2;
  TMovieSceneEvaluationTree<FCompileOnTheFlyData> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FEvaluationTreeEntryHandle FVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_b8 [32];
  int *local_98;
  FScriptContainerElement *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_68;
  FName FStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FVar11.EntryIndex = (param_1->DataID).EntryIndex;
  if (FVar11.EntryIndex == -1) {
    pTVar3 = this->Tree;
    local_48 = (pTVar3->Data).Items.ArrayNum;
    pFVar4 = (pTVar3->Data).Entries.AllocatorInstance.Data;
    FVar11.EntryIndex = (pTVar3->Data).Entries.ArrayNum;
    uStack_44 = 0;
    local_40 = 1;
    if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
       (lVar10 = (longlong)(pTVar3->Data).Entries.ArrayMax,
       (FScriptContainerElement *)&local_48 < pFVar4 + lVar10 * 0xc)) {
      local_78 = 0xc;
      local_98 = &local_48;
      local_90 = pFVar4;
      local_88 = lVar10;
      local_80 = (longlong)FVar11.EntryIndex;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (pTVar3->Data).Entries.ArrayNum;
    piVar1 = &(pTVar3->Data).Entries.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)&pTVar3->Data,piVar1);
    }
    (pTVar3->Data).Entries.ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar3->Data).Entries.AllocatorInstance.Data;
    *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_40;
    TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_>::SetNum
              (&(pTVar3->Data).Items,(pTVar3->Data).Items.ArrayNum + 1,Default);
    (param_1->DataID).EntryIndex = FVar11.EntryIndex;
  }
  local_68._0_2_ = (this->DataToInsert).GroupEvaluationPriority;
  local_68._2_2_ = (this->DataToInsert).HierarchicalBias;
  local_68._4_2_ = (this->DataToInsert).EvaluationPriority;
  local_68._6_2_ = (this->DataToInsert).ChildPriority;
  FStack_60 = (this->DataToInsert).EvaluationGroup;
  pTVar3 = this->Tree;
  iVar8 = (pTVar3->Data).Entries.ArrayNum;
  local_58._0_1_ = (this->DataToInsert).bRequiresInit;
  local_58._1_1_ = (this->DataToInsert).bPriorityTearDown;
  local_58._2_2_ = *(undefined2 *)&(this->DataToInsert).field_0x12;
  local_58._4_4_ = (this->DataToInsert).Track.SequenceID;
  uStack_50 = *(undefined8 *)&(this->DataToInsert).Track.TrackIdentifier;
  iVar2 = (this->DataToInsert).Child.ForcedTime.Value;
  uVar9 = 0;
  if (FVar11.EntryIndex < iVar8) {
    uVar9 = (uint)~FVar11.EntryIndex >> 0x1f;
  }
  if (uVar9 == 0) {
    local_98 = (int *)(longlong)FVar11.EntryIndex;
    local_90 = (FScriptContainerElement *)(longlong)iVar8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (pTVar3->Data).Entries.AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)FVar11.EntryIndex * 0xc;
  if (*(int *)(pFVar4 + 8) < *(int *)(pFVar5 + (longlong)FVar11.EntryIndex * 0xc + 4) + 1) {
    iVar8 = *(int *)(pFVar4 + 8) * 2;
    iVar13 = 2;
    if (2 < iVar8) {
      iVar13 = iVar8;
    }
    TEvaluationTreeEntryContainer<FCompileOnTheFlyData>::ReserveEntry(&pTVar3->Data,FVar11,iVar13);
  }
  uVar12 = *(int *)(pFVar4 + 4) + *(int *)pFVar4;
  iVar8 = (pTVar3->Data).Items.ArrayNum;
  local_90 = (FScriptContainerElement *)(longlong)iVar8;
  uVar9 = 0;
  if ((int)uVar12 < iVar8) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    local_98 = (int *)(longlong)(int)uVar12;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar10 = (longlong)(int)uVar12;
  pFVar5 = (pTVar3->Data).Items.AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + lVar10 * 0x24) = local_68;
  *(FName *)(pFVar5 + lVar10 * 0x24 + 8) = FStack_60;
  *(undefined8 *)(pFVar5 + lVar10 * 0x24 + 0x10) = local_58;
  *(undefined8 *)(pFVar5 + lVar10 * 0x24 + 0x10 + 8) = uStack_50;
  *(int *)(pFVar5 + lVar10 * 0x24 + 0x20) = iVar2;
  *(int *)(pFVar4 + 4) = *(int *)(pFVar4 + 4) + 1;
  return;
}

// operator() @ 14609d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::FAddOperator::operator()
          (FAddOperator *this,FMovieSceneEvaluationTreeNode *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FEvaluationTreeEntryHandle FVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_a8 [32];
  int *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  FWeakObjectPtr local_58;
  FWeakObjectPtr FStack_50;
  undefined8 local_48;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FVar11.EntryIndex = (param_1->DataID).EntryIndex;
  if (FVar11.EntryIndex == -1) {
    pTVar3 = this->Tree;
    uStack_3c = 0;
    local_38 = 1;
    local_40 = (pTVar3->Data).Items.ArrayNum;
    pFVar4 = (pTVar3->Data).Entries.AllocatorInstance.Data;
    FVar11.EntryIndex = (pTVar3->Data).Entries.ArrayNum;
    if ((pFVar4 <= (FScriptContainerElement *)&local_40) &&
       (lVar10 = (longlong)(pTVar3->Data).Entries.ArrayMax,
       (FScriptContainerElement *)&local_40 < pFVar4 + lVar10 * 0xc)) {
      local_68 = 0xc;
      local_88 = &local_40;
      local_80 = pFVar4;
      local_78 = lVar10;
      local_70 = (longlong)FVar11.EntryIndex;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (pTVar3->Data).Entries.ArrayNum;
    piVar1 = &(pTVar3->Data).Entries.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)&pTVar3->Data,piVar1);
    }
    (pTVar3->Data).Entries.ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar3->Data).Entries.AllocatorInstance.Data;
    *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_3c,local_40);
    *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_38;
    TArray<FMovieSceneTrackEvaluationData,TSizedDefaultAllocator<32>_>::SetNum
              (&(pTVar3->Data).Items,(pTVar3->Data).Items.ArrayNum + 1,Default);
    (param_1->DataID).EntryIndex = FVar11.EntryIndex;
  }
  pTVar3 = this->Tree;
  local_58 = (this->DataToInsert).Track.WeakPtr;
  FStack_50 = (this->DataToInsert).Section.WeakPtr;
  local_48._0_4_ = (this->DataToInsert).ForcedTime;
  local_48._4_2_ = (this->DataToInsert).SortOrder;
  local_48._6_1_ = (this->DataToInsert).Flags;
  local_48._7_1_ = (this->DataToInsert).field_0x17;
  iVar8 = (pTVar3->Data).Entries.ArrayNum;
  uVar9 = 0;
  if (FVar11.EntryIndex < iVar8) {
    uVar9 = (uint)~FVar11.EntryIndex >> 0x1f;
  }
  if (uVar9 == 0) {
    local_88 = (int *)(longlong)FVar11.EntryIndex;
    local_80 = (FScriptContainerElement *)(longlong)iVar8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (pTVar3->Data).Entries.AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)FVar11.EntryIndex * 0xc;
  if (*(int *)(pFVar4 + 8) < *(int *)(pFVar5 + (longlong)FVar11.EntryIndex * 0xc + 4) + 1) {
    iVar8 = *(int *)(pFVar4 + 8) * 2;
    iVar13 = 2;
    if (2 < iVar8) {
      iVar13 = iVar8;
    }
    TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData>::ReserveEntry
              (&pTVar3->Data,FVar11,iVar13);
  }
  uVar12 = *(int *)(pFVar4 + 4) + *(int *)pFVar4;
  iVar8 = (pTVar3->Data).Items.ArrayNum;
  local_80 = (FScriptContainerElement *)(longlong)iVar8;
  uVar9 = 0;
  if ((int)uVar12 < iVar8) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    local_88 = (int *)(longlong)(int)uVar12;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (pTVar3->Data).Items.AllocatorInstance.Data;
  pFVar2 = (FWeakObjectPtr *)(pFVar5 + (longlong)(int)uVar12 * 0x18);
  *pFVar2 = local_58;
  pFVar2[1] = FStack_50;
  *(undefined8 *)(pFVar5 + (longlong)(int)uVar12 * 0x18 + 0x10) = local_48;
  *(int *)(pFVar4 + 4) = *(int *)(pFVar4 + 4) + 1;
  return;
}

