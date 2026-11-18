// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// AccumulateWidths @ 14618bc60

void __thiscall
TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::AccumulateWidths
          (TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  longlong local_res20;
  
  local_res18 = (this->LogRows).ArrayNum;
  uVar12 = local_res18 - 1;
  if (-1 < (int)uVar12) {
    local_res18 = local_res18 + -2;
    lVar8 = (longlong)(int)uVar12 << 4;
    do {
      uVar6 = 0;
      if ((int)uVar12 < (this->LogRows).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      local_res20 = lVar8;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this->LogRows).AllocatorInstance.Data + lVar8;
      if (uVar12 == 0) {
        iVar2 = *(int *)(pFVar13 + 8);
        lVar8 = *(longlong *)pFVar13;
        lVar11 = (longlong)iVar2 * 0x20 + lVar8;
        while( true ) {
          if (*(int *)(pFVar13 + 8) != iVar2) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (lVar8 == lVar11) break;
          if (0 < *(int *)(lVar8 + 0x14)) {
            iVar7 = *(int *)(lVar8 + 0x14) + this->ParentItemMargin;
            if (iVar7 < *(int *)(lVar8 + 0x10)) {
              iVar7 = *(int *)(lVar8 + 0x10);
            }
            *(int *)(lVar8 + 0x10) = iVar7;
          }
          lVar8 = lVar8 + 0x20;
        }
      }
      else {
        uVar6 = 0;
        if (local_res18 < (this->LogRows).ArrayNum) {
          uVar6 = -uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = *(int *)(pFVar13 + 8);
        pFVar3 = (this->LogRows).AllocatorInstance.Data;
        piVar9 = *(int **)pFVar13;
        piVar10 = piVar9 + (longlong)iVar2 * 8;
        while( true ) {
          if (*(int *)(pFVar13 + 8) != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (piVar9 == piVar10) break;
          if (0 < piVar9[5]) {
            iVar7 = piVar9[5] + this->ParentItemMargin;
            if (iVar7 < piVar9[4]) {
              iVar7 = piVar9[4];
            }
            piVar9[4] = iVar7;
          }
          iVar7 = *piVar9;
          if ((iVar7 < 0) || (*(int *)(pFVar3 + lVar8 + -8) <= iVar7)) {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1662972261398741093>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTreeFormatter.h"
                               ,0x65,"ParentLogRow.IsValidIndex(RowItem.ParentRowItemIndex)");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            piVar9 = piVar9 + 8;
          }
          else {
            if ((iVar7 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            piVar1 = (int *)((longlong)iVar7 * 0x20 + *(longlong *)(pFVar3 + lVar8 + -0x10) + 0x14);
            *piVar1 = *piVar1 + piVar9[4];
            piVar9 = piVar9 + 8;
          }
        }
      }
      local_res18 = local_res18 + -1;
      lVar8 = local_res20 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// BuildLogRows @ 146195960

void __thiscall
TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::BuildLogRows
          (TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *this,int param_1,
          FMovieSceneEvaluationTreeNode *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FMovieSceneEvaluationTreeNode *pFVar10;
  uint uVar11;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_58;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_48;
  int local_38;
  undefined4 uStack_34;
  FMovieSceneEvaluationTreeNode *pFStack_30;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = &(this->LogRows).ArrayNum;
  iVar7 = *piVar1;
  if (iVar7 <= param_3) {
    uVar8 = param_3 + 1;
    if (iVar7 < (int)uVar8) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar8 - iVar7,&(this->LogRows).AllocatorInstance,piVar1,
                         &(this->LogRows).ArrayMax);
      memset((this->LogRows).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
             (longlong)(int)(uVar8 - iVar7) << 4);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar7) {
        uVar11 = iVar7 - uVar8;
        if (((int)(uVar11 | uVar8) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar11 != 0) {
          TArray<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(&this->LogRows,uVar8,uVar11);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->LogRows).AllocatorInstance,(this->LogRows).ArrayNum,
                     &(this->LogRows).ArrayMax);
        }
      }
    }
  }
  uVar8 = 0;
  if (param_3 < (this->LogRows).ArrayNum) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (this->LogRows).AllocatorInstance.Data + (longlong)param_3 * 0x10;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
            (this->Tree,&local_48,param_2);
  if (local_48.ArrayNum < 1) {
    local_28 = 9;
  }
  else {
    iVar7 = local_48.ArrayNum + -9;
    uVar8 = local_48.ArrayNum - 99U;
    if ((int)(local_48.ArrayNum - 99U) < 0) {
      uVar8 = 0;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    local_28 = local_48.ArrayNum * 2 + 5 + uVar8 + iVar7;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  local_38 = param_1;
  pFStack_30 = param_2;
  if (((*(int **)&pFVar9->field_0x0 <= &local_38) &&
      (&local_38 < *(int **)&pFVar9->field_0x0 + (longlong)*(int *)(pFVar9 + 0xc) * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)&pFVar9[8].field_0x0;
  if (iVar7 == *(int *)(pFVar9 + 0xc)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
  }
  *(int *)&pFVar9[8].field_0x0 = iVar7 + 1;
  lVar3 = *(longlong *)&pFVar9->field_0x0;
  puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x20);
  *puVar2 = CONCAT44(uStack_34,local_38);
  puVar2[1] = pFStack_30;
  puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x20 + 0x10);
  *puVar2 = CONCAT44(uStack_24,local_28);
  puVar2[1] = CONCAT44(uStack_1c,uStack_20);
  if ((param_2->ChildrenID).EntryIndex != -1) {
    TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
              ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
               &this->Tree->_padding_,&local_58,
               (FEvaluationTreeEntryHandle)(param_2->ChildrenID).EntryIndex);
    for (pFVar10 = local_58.DataPtr; pFVar10 != local_58.DataPtr + local_58.ArrayNum;
        pFVar10 = pFVar10 + 1) {
      BuildLogRows(this,iVar7,pFVar10,param_3 + 1);
    }
  }
  return;
}

// OutputData @ 1461c1530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::OutputData
          (TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *pTVar12;
  TMap<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>_>
  *pTVar13;
  char cVar14;
  bool bVar15;
  byte bVar16;
  longlong lVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  undefined1 auStackY_418 [32];
  undefined1 local_3e8 [4];
  int local_3e4;
  int local_3e0;
  uint uStack_3dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3d8;
  uint local_3d0;
  uint uStack_3cc;
  uint uStack_3c8;
  undefined4 uStack_3c4;
  uint local_3c0;
  uint uStack_3bc;
  uint uStack_3b8;
  uint uStack_3b4;
  undefined8 local_3b0;
  undefined4 local_3a8;
  TBitArray<FDefaultBitArrayAllocator> *local_3a0;
  TMap<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>_>
  *local_398;
  int iStack_390;
  uint uStack_38c;
  undefined1 *local_388;
  undefined4 uStack_380;
  int iStack_37c;
  int local_378;
  int iStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  int local_368;
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *local_360;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  TMap<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>_>
  *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  FReadAccessScope local_2b8;
  FReadAccessScope local_2a0;
  undefined8 local_280;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_3e4 = 0;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  local_360 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->DataFormatter,
             &local_2b8);
  if (((*(int *)&(this->DataFormatter).field_0x10 == 0) ||
      (plVar18 = *(longlong **)&(this->DataFormatter).field_0x8, plVar18 == (longlong *)0x0)) ||
     (cVar14 = (**(code **)(*plVar18 + 0x38))(), cVar14 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2b8);
    if (4 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`private:_void___cdecl_TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::OutputData(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2b8);
    local_258.Base = local_238;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    puVar1 = &(this->DataIndices).field_0x10;
    local_258.CurPos = local_238;
    iStack_390 = 0;
    local_398 = &this->DataIndices;
    local_258.End = (wchar_t *)local_38;
    uStack_38c = 1;
    iVar26 = *(int *)&(this->DataIndices).field_0x28;
    local_378 = 0;
    iStack_37c = 0;
    if (iVar26 != 0) {
      puVar24 = *(uint **)&(this->DataIndices).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar1;
      }
      uVar3 = *puVar24;
      while (uVar3 == 0) {
        lVar17 = (longlong)iStack_390;
        local_378 = local_378 + 0x20;
        iStack_390 = iStack_390 + 1;
        iStack_37c = iVar26;
        if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_390)
        goto LAB_1461c167e;
        uVar3 = puVar24[lVar17 + 1];
      }
      uStack_38c = -uVar3 & uVar3;
      uVar2 = (ulonglong)uStack_38c * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_3e4 = (int)lVar17;
      iStack_37c = local_378 + -1 + local_3e4;
      if (iVar26 < iStack_37c) {
        iStack_37c = iVar26;
      }
    }
LAB_1461c167e:
    iStack_370 = *(int *)&(this->DataIndices).field_0x8 - *(int *)&(this->DataIndices).field_0x34;
    uVar3 = *(uint *)&(this->DataIndices).field_0x28;
    iVar25 = (int)uVar3 >> 5;
    bVar16 = (byte)uVar3 & 0x1f;
    TStack_2e0._padding_ = CONCAT44(uStack_38c,iStack_390);
    uStack_3dc = 1 << bVar16;
    uVar20 = -1 << bVar16;
    uVar22 = uVar3 & 0xffffffe0;
    uStack_380 = 0xffffffff;
    TStack_2e0.CurrentBitIndex = iStack_37c;
    TStack_2e0.UnvisitedBitMask = 0xffffffff;
    TStack_2e0._28_4_ = iStack_37c;
    TStack_2e0.BaseBitIndex = local_378;
    uStack_2c0 = CONCAT44(uStack_36c,iStack_370);
    local_3e0 = iVar25;
    pTStack_3d8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_3d0 = uVar20;
    uStack_3cc = uVar3;
    uStack_3c8 = uVar22;
    local_388 = puVar1;
    iStack_374 = iStack_37c;
    local_2e8 = local_398;
    TStack_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar3 < 0) || (iVar26 < (int)uVar3)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar12 = local_360;
    uVar4 = *(uint *)&(this->DataIndices).field_0x28;
    if (uVar3 != uVar4) {
      puVar23 = *(undefined1 **)&(this->DataIndices).field_0x20;
      if (puVar23 == (undefined1 *)0x0) {
        puVar23 = puVar1;
      }
      uVar20 = uVar20 & *(uint *)(puVar23 + (longlong)iVar25 * 4);
      while (uVar20 == 0) {
        uStack_3c8 = uVar22 + 0x20;
        local_3e0 = iVar25 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_3e0)
        goto LAB_1461c17bd;
        uVar20 = *(uint *)(puVar23 + (longlong)iVar25 * 4 + 4);
        local_3d0 = 0xffffffff;
        iVar25 = local_3e0;
        uVar22 = uStack_3c8;
      }
      uStack_3dc = -uVar20 & uVar20;
      uVar2 = (ulonglong)uStack_3dc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_368 = (int)lVar17;
      uStack_3cc = local_368 + -1 + uVar22;
      if ((int)uVar4 < (int)uStack_3cc) {
LAB_1461c17bd:
        uStack_3cc = uVar4;
      }
    }
    uVar3 = uStack_3cc;
    local_280 = CONCAT44(uStack_3dc,local_3e0);
    local_270 = CONCAT44(uStack_3cc,local_3d0);
    uStack_268 = CONCAT44(uStack_3c4,uStack_3c8);
    pTStack_278 = pTStack_3d8;
    local_3a0 = pTStack_3d8;
    while( true ) {
      pTVar13 = local_2e8;
      if (*(int *)&local_2e8->field_0x8 - *(int *)&local_2e8->field_0x34 != (int)uStack_2c0) {
        local_3e8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e8);
      }
      lVar17 = (longlong)TStack_2e0.CurrentBitIndex;
      if (((TStack_2e0.CurrentBitIndex == uVar3) && (TStack_2e0.Array == local_3a0)) &&
         (pTVar13 == &pTVar12->DataIndices)) break;
      lVar5 = *(longlong *)pTVar13;
      puVar24 = (uint *)(lVar5 + lVar17 * 0x24);
      uVar20 = *puVar24;
      uStack_3bc = puVar24[1];
      uStack_3b8 = puVar24[2];
      uStack_3b4 = puVar24[3];
      local_3b0 = *(undefined8 *)(lVar5 + 0x10 + lVar17 * 0x24);
      local_3a8 = *(undefined4 *)(lVar5 + 0x18 + lVar17 * 0x24);
      local_258.CurPos = local_258.Base;
      local_3c0 = uVar20;
      if (uVar20 == 0xffffffff) {
        pFVar21 = (FScriptContainerElement *)0x0;
        iVar26 = 0;
      }
      else {
        pTVar6 = pTVar12->Tree;
        uVar22 = 0;
        if ((int)uVar20 < (pTVar6->Data).Entries.ArrayNum) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar21 = (pTVar6->Data).Entries.AllocatorInstance.Data;
        uVar22 = *(uint *)(pFVar21 + (longlong)(int)uVar20 * 0xc);
        iVar26 = *(int *)(pFVar21 + (longlong)(int)uVar20 * 0xc + 4);
        uVar20 = 0;
        if ((int)uVar22 < (pTVar6->Data).Items.ArrayNum) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar21 = (pTVar6->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x30;
        if ((iVar26 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar20 = uStack_3bc;
      if (((int)uStack_3bc < 0) || (iVar26 <= (int)uStack_3bc)) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1662972261398741208>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTreeFormatter.h"
                            ,0xd8,"DataView.IsValidIndex(DataIndex)");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"%d: ");
        if (local_3b0._4_1_ != '\x02') {
          if (local_3b0._4_1_ == '\x01') {
            bVar11 = true;
            ::FString::PrintfImpl(&local_318,L"%i]");
          }
          else {
            bVar10 = true;
            ::FString::PrintfImpl(&local_328,L"%i)");
          }
        }
        if ((uStack_3b4 & 0xff) != 2) {
          if ((uStack_3b4 & 0xff) == 1) {
            bVar9 = true;
            ::FString::PrintfImpl(&local_338,L"[%i");
          }
          else {
            bVar8 = true;
            ::FString::PrintfImpl(&local_348,L"(%i");
          }
        }
        ::FString::PrintfImpl(&local_358,L"%s,%s");
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_358.Data.ArrayNum != 0) {
          FVar19.Data = local_358.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_308,(wchar_t *)FVar19.Data);
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        if ((bVar8) &&
           (bVar8 = false, local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        if ((bVar9) &&
           (bVar9 = false, local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        if ((bVar10) &&
           (bVar10 = false, local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if ((bVar11) &&
           (bVar11 = false, local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"%s ");
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        uVar22 = 0;
        if ((int)uVar20 < iVar26) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pTVar12->DataFormatter
                   ,&local_2a0);
        plVar18 = (longlong *)0x0;
        if (*(int *)&(pTVar12->DataFormatter).field_0x10 != 0) {
          plVar18 = *(longlong **)&(pTVar12->DataFormatter).field_0x8;
        }
        (**(code **)(*plVar18 + 0x60))(plVar18,pFVar21 + (longlong)(int)uVar20 * 0x30,&local_258);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_2a0);
        if (local_258.End < local_258.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,1);
        }
        *local_258.CurPos = L'\0';
        ::FString::FString(&local_2f8,local_258.Base);
        if (4 < (byte)LogMovieScene._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`private:_void___cdecl_TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::OutputData(void)___ptr64'
                      ::__l30::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        }
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
      }
      TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  }
  return;
}

// OutputLogRows @ 1461c1cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::OutputLogRows
          (TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *this)

{
  TMap<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>_>
  *this_00;
  FMovieSceneEvaluationTreeNode *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  void *pvVar11;
  undefined1 *puVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  int iVar16;
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *pTVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_9e8 [32];
  undefined1 local_9b8;
  undefined1 local_9b7 [3];
  int local_9b4;
  uint local_9b0;
  uint local_9ac;
  uint local_9a8;
  uint local_9a4;
  longlong local_9a0;
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *local_998;
  FScriptContainerElement *local_990;
  FString local_988;
  FString local_978;
  longlong local_968;
  FScriptContainerElement *local_960;
  FString local_958;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_948;
  uint *local_938;
  int *local_930;
  int local_928;
  TRangeBound<FFrameNumber> local_924;
  TRangeBound<FFrameNumber> TStack_91c;
  undefined4 local_900;
  TStringBuilderBase<wchar_t> local_8f8;
  wchar_t local_8d8 [64];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  pFVar14 = (this->LogRows).AllocatorInstance.Data;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_9ac = (this->LogRows).ArrayNum;
  uVar10 = (ulonglong)(int)local_9ac;
  local_960 = pFVar14 + uVar10 * 0x10;
  local_998 = this;
  do {
    pFVar6 = local_960;
    local_990 = pFVar14;
    if ((this->LogRows).ArrayNum != (int)uVar10) {
      local_9b8 = 0;
      `TCheckedPointerIterator<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_9b8);
    }
    if (pFVar14 == pFVar6) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
      return;
    }
    local_858.CurPos = local_858.Base;
    local_9b0 = *(uint *)(pFVar14 + 8);
    uVar10 = (ulonglong)(int)local_9b0;
    lVar19 = *(longlong *)pFVar14;
    local_968 = uVar10 * 0x20 + lVar19;
    while( true ) {
      lVar5 = local_968;
      local_9a0 = lVar19;
      if (*(int *)(pFVar14 + 8) != (int)uVar10) {
        local_9b7[0] = 0;
        `TCheckedPointerIterator<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_9b7);
      }
      if (lVar19 == lVar5) break;
      iVar9 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
      if ((*(int *)(lVar19 + 0x18) < iVar9) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1662972261398741155>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTreeFormatter.h"
                             ,0xa3,"RowItem.LeftOffset >= CurLeftOffset"), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = *(int *)(lVar19 + 0x18) - iVar9;
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      if (0 < (int)uVar8) {
        uVar10 = (ulonglong)uVar8;
        do {
          if (local_858.End < local_858.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_858,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,&::u__,2);
          local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      pFVar1 = *(FMovieSceneEvaluationTreeNode **)(lVar19 + 8);
      local_8f8.Base = local_8d8;
      local_8f8.CurPos = local_8d8;
      local_8f8.bIsDynamic = false;
      local_8f8.bIsExternal = false;
      local_8f8.End = (wchar_t *)&local_858;
      TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                (this->Tree,&local_948,pFVar1);
      uVar8 = 0;
      iVar9 = local_948.ArrayNum;
      if (0 < iVar9) {
        this_00 = &this->DataIndices;
        pTVar17 = this;
        do {
          if (0 < (int)uVar8) {
            if (local_8f8.End < (TStringBuilderBase<wchar_t> *)(local_8f8.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_8f8,1);
            }
            pvVar11 = FGenericPlatformString::Memcpy(local_8f8.CurPos,L",",2);
            local_8f8.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          }
          uVar18 = 0;
          if ((int)uVar8 < iVar9) {
            uVar18 = ~uVar8 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_9a8 = (pFVar1->DataID).EntryIndex;
          local_928 = *(int *)&(pTVar17->DataIndices).field_0x8 -
                      *(int *)&(pTVar17->DataIndices).field_0x34;
          local_924 = (pFVar1->Range).LowerBound;
          TStack_91c = (pFVar1->Range).UpperBound;
          uVar18 = local_9a8 * 0x40 + -0x61c88647 + uVar8 + (local_9a8 >> 2) ^ local_9a8;
          local_9a4 = uVar8;
          if (local_928 != 0) {
            puVar2 = *(undefined1 **)&(this->DataIndices).field_0x40;
            puVar12 = &(this->DataIndices).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar12 = puVar2;
            }
            iVar16 = *(int *)(puVar12 +
                             (ulonglong)(*(int *)&(this->DataIndices).field_0x48 - 1U & uVar18) * 4)
            ;
            if (iVar16 != -1) {
              do {
                lVar19 = *(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x24;
                if ((*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x24) ==
                     local_9a8) && (*(uint *)(lVar19 + 4) == uVar8)) {
                  if ((iVar16 != -1) && (lVar19 != 0)) goto LAB_1461c2048;
                  break;
                }
                iVar16 = *(int *)(lVar19 + 0x1c);
              } while (iVar16 != -1);
            }
          }
          local_938 = &local_9a8;
          local_930 = &local_928;
          TSet<TTuple<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>_>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TPairInitializer<TTuple<int,int>_const_&,TTuple<int,TRange<FFrameNumber>_>_const_&>_>
                    ((TSet<TTuple<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>_>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)&local_9b4,
                     (TPairInitializer<TTuple<int,int>_const_&,TTuple<int,TRange<FFrameNumber>_>_const_&>
                      *)(ulonglong)uVar18,(bool *)&local_938);
          lVar19 = *(longlong *)&this_00->field_0x0 + (longlong)local_9b4 * 0x24;
LAB_1461c2048:
          local_900 = *(undefined4 *)(lVar19 + 0x18);
          ::FString::PrintfImpl(&local_988,L"%d");
          FVar4.Data = local_988.Data.AllocatorInstance.Data;
          iVar16 = local_988.Data.ArrayNum + -1;
          if (local_988.Data.ArrayNum == 0) {
            iVar16 = 0;
          }
          uVar13 = (ulong64)iVar16;
          if (local_8f8.End < (TStringBuilderBase<wchar_t> *)(local_8f8.CurPos + uVar13)) {
            TStringBuilderBase<wchar_t>::Extend(&local_8f8,uVar13);
          }
          if (iVar16 != 0) {
            pvVar11 = FGenericPlatformString::Memcpy(local_8f8.CurPos,FVar4.Data,uVar13 * 2);
            local_8f8.CurPos = (wchar_t *)((longlong)pvVar11 + uVar13 * 2);
          }
          if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_988.Data.AllocatorInstance.Data);
          }
          uVar8 = uVar8 + 1;
          pTVar17 = local_998;
          lVar19 = local_9a0;
        } while ((int)uVar8 < iVar9);
      }
      if (iVar9 == 0) {
        if (local_8f8.End < (TStringBuilderBase<wchar_t> *)(local_8f8.CurPos + 3)) {
          TStringBuilderBase<wchar_t>::Extend(&local_8f8,3);
        }
        pvVar11 = FGenericPlatformString::Memcpy(local_8f8.CurPos,L"nil",6);
        local_8f8.CurPos = (wchar_t *)((longlong)pvVar11 + 6);
      }
      if (local_8f8.End < (TStringBuilderBase<wchar_t> *)(local_8f8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_8f8,1);
      }
      *local_8f8.CurPos = L'\0';
      ::FString::FString(&local_978,local_8f8.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8f8);
      iVar9 = (*(int *)(lVar19 + 0x10) - local_978.Data.ArrayNum) + 1;
      if (local_978.Data.ArrayNum == 0) {
        iVar9 = *(int *)(lVar19 + 0x10);
      }
      iVar9 = iVar9 + -4;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      uVar8 = iVar9 / 2;
      uVar10 = (ulonglong)uVar8;
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,L"[",2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
      uVar15 = uVar10;
      if (0 < (int)uVar8) {
        do {
          if (local_858.End < local_858.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_858,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,L"=",2);
          local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,&::u__,2);
      FVar4.Data = local_978.Data.AllocatorInstance.Data;
      local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
      iVar9 = local_978.Data.ArrayNum + -1;
      if (local_978.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      uVar13 = (ulong64)iVar9;
      if (local_858.End < local_858.CurPos + uVar13) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,uVar13);
      }
      if (iVar9 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,FVar4.Data,uVar13 * 2);
        local_858.CurPos = (wchar_t *)((longlong)pvVar11 + uVar13 * 2);
      }
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,&::u__,2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
      if (0 < (int)uVar8) {
        do {
          if (local_858.End < local_858.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_858,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,L"=",2);
          local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,L"]",2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
      if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.Data.AllocatorInstance.Data);
      }
      lVar19 = lVar19 + 0x20;
      uVar10 = (ulonglong)local_9b0;
      pFVar14 = local_990;
      this = local_998;
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString(&local_958,local_858.Base);
    if (4 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`private:_void___cdecl_TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::OutputLogRows(void)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
    pFVar14 = pFVar14 + 0x10;
    uVar10 = (ulonglong)local_9ac;
  } while( true );
}

