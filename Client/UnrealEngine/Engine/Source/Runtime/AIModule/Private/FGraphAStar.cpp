// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// FindPath<FGridHelpers::FGridPathFilter,TArray<int,TSizedDefaultAllocator<32>_>_> @ 146f89ff0

EGraphAStarResult __thiscall
FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
::FindPath<FGridHelpers::FGridPathFilter,TArray<int,TSizedDefaultAllocator<32>_>_>
          (FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
           *this,FGraphAStarDefaultNode<FNavLocalGridData> *param_1,
          FGraphAStarDefaultNode<FNavLocalGridData> *param_2,FGridPathFilter *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  FNodePool *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  FGraphAStarDefaultNode<FNavLocalGridData> *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  FGraphAStarDefaultNode<FNavLocalGridData> *pFVar8;
  bool bVar9;
  EGraphAStarResult EVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint local_res8 [2];
  FGraphAStarDefaultNode<FNavLocalGridData> *local_res10;
  double local_78 [3];
  double local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  iVar11 = param_1->NodeRef;
  if ((((iVar11 < 0) || (iVar14 = (int)this->Graph->_padding_, iVar14 <= iVar11)) ||
      (iVar12 = param_2->NodeRef, iVar12 < 0)) || (iVar14 <= iVar12)) {
    return SearchFail;
  }
  uVar18 = 0;
  local_res10 = param_1;
  if (iVar11 == iVar12) {
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
    EVar10 = SearchSuccess;
    TArray<int,TSizedDefaultAllocator<32>_>::AddZeroed(param_4,1);
    local_60 = param_1->TotalCost;
    uStack_58._0_4_ = param_1->SearchNodeIndex;
    uStack_58._4_4_ = param_1->ParentNodeIndex;
    local_50 = *(undefined8 *)&param_1->field_0x20;
    iVar11 = param_1->NodeRef;
    if ((param_4->ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      EVar10 = (*pcVar6)();
      return EVar10;
    }
    *(int *)(param_4->AllocatorInstance).Data = iVar11;
  }
  else {
    pFVar1 = &this->NodePool;
    iVar11 = *(int *)((longlong)&(this->NodePool)._padding_ + 4);
    piVar2 = (int *)((longlong)&(this->NodePool)._padding_ + 4);
    *(undefined4 *)&(this->NodePool)._padding_ = 0;
    if (iVar11 < 0x40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0x40,(ForAnyElementType *)pFVar1,0,piVar2);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
    ::Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
             *)&(this->NodePool).NodeMap);
    iVar11 = *(int *)((longlong)&(this->OpenList)._padding_ + 4);
    *(undefined4 *)&(this->OpenList)._padding_ = 0;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->OpenList,0,
                 (int *)((longlong)&(this->OpenList)._padding_ + 4));
    }
    iVar11 = (int)(this->NodePool)._padding_;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,(ForAnyElementType *)pFVar1,piVar2);
    }
    pFVar8 = local_res10;
    *(int *)&(this->NodePool)._padding_ = iVar11 + 1;
    dVar7 = param_1->TraversalCost;
    lVar5 = pFVar1->_padding_;
    puVar3 = (undefined8 *)(lVar5 + (longlong)iVar11 * 0x28);
    *puVar3 = *(undefined8 *)param_1;
    puVar3[1] = dVar7;
    iVar14 = param_1->SearchNodeIndex;
    iVar12 = param_1->ParentNodeIndex;
    pFVar4 = (FGraphAStarDefaultNode<FNavLocalGridData> *)(lVar5 + (longlong)iVar11 * 0x28);
    pFVar4->TotalCost = param_1->TotalCost;
    pFVar4->SearchNodeIndex = iVar14;
    pFVar4->ParentNodeIndex = iVar12;
    *(undefined8 *)&pFVar4->field_0x20 = *(undefined8 *)&param_1->field_0x20;
    pFVar4->SearchNodeIndex = (int)(((longlong)pFVar4 - pFVar1->_padding_) / 0x28);
    TMapBase<int,int,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<int,int,0>_>
    ::Emplace<int_const_&,int_const_&>
              ((TMapBase<int,int,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<int,int,0>_>
                *)&(this->NodePool).NodeMap,&local_res10->NodeRef,&pFVar4->SearchNodeIndex);
    pFVar4->TraversalCost = 0.0;
    uVar19 = *(uint *)((longlong)&param_3->GridRef->_padding_ + 4);
    iVar14 = (uint)pFVar8->NodeRef % uVar19 - (uint)param_2->NodeRef % uVar19;
    iVar11 = -iVar14;
    if (iVar11 < 0) {
      iVar11 = iVar14;
    }
    iVar12 = (uint)pFVar8->NodeRef / uVar19 - (uint)param_2->NodeRef / uVar19;
    iVar14 = -iVar12;
    if (iVar14 < 0) {
      iVar14 = iVar12;
    }
    pFVar4->TotalCost = (double)(iVar11 + iVar14);
    FOpenList::Push(&this->OpenList,pFVar4);
    EVar10 = SearchSuccess;
    local_res8[0] = pFVar4->SearchNodeIndex;
    uVar15 = (ulonglong)(int)local_res8[0];
    local_78[0] = pFVar4->TotalCost;
    uVar20 = SUB84(local_78[0],0);
    uVar21 = (undefined4)((ulonglong)local_78[0] >> 0x20);
    iVar11 = *(int *)(pFVar1->_padding_ + uVar15 * 0x28);
    bVar9 = true;
    local_res10 = (FGraphAStarDefaultNode<FNavLocalGridData> *)CONCAT44(local_res10._4_4_,iVar11);
    if (0 < (int)(this->OpenList)._padding_) {
      do {
        if (bVar9 == false) break;
        bVar9 = ProcessSingleNode<FGridHelpers::FGridPathFilter>
                          (this,param_2,true,param_3,(int *)local_res8,local_78);
      } while (0 < (int)(this->OpenList)._padding_);
      uVar15 = (ulonglong)local_res8[0];
      uVar20 = SUB84(local_78[0],0);
      uVar21 = (undefined4)((ulonglong)local_78[0] >> 0x20);
      iVar11 = (int)local_res10;
    }
    if ((double)CONCAT44(uVar21,uVar20) != 0.0) {
      EVar10 = GoalUnreachable;
    }
    do {
      uVar17 = (ulonglong)(int)uVar18;
      uVar19 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar19;
      iVar14 = *(int *)(pFVar1->_padding_ + (longlong)(int)uVar15 * 0x28 + 0x1c);
      uVar15 = (ulonglong)iVar14;
      if (((iVar14 < 0) || ((int)(this->NodePool)._padding_ <= iVar14)) ||
         (*(int *)(pFVar1->_padding_ + uVar15 * 0x28) == iVar11)) goto LAB_146f8a36a;
    } while ((int)uVar19 < 10000);
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3061432669746233926>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\GraphAStar.h"
                       ,0x246,"PathLength < Policy::FatalPathLength");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      EVar10 = (*pcVar6)();
      return EVar10;
    }
LAB_146f8a36a:
    if (9999 < (int)uVar19) {
      EVar10 = InfiniteLoop;
    }
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18);
    }
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar19,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddZeroed(param_4,uVar19);
    uVar18 = uVar17;
    uVar19 = local_res8[0];
    do {
      uVar16 = (uint)uVar17;
      uVar17 = (ulonglong)(uVar16 - 1);
      local_res10 = (FGraphAStarDefaultNode<FNavLocalGridData> *)
                    CONCAT44(local_res10._4_4_,
                             *(undefined4 *)(pFVar1->_padding_ + (longlong)(int)uVar19 * 0x28));
      uVar13 = 0;
      if ((int)uVar16 < param_4->ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        EVar10 = (*pcVar6)();
        return EVar10;
      }
      *(int *)((param_4->AllocatorInstance).Data + uVar18 * 4) = (int)local_res10;
      uVar19 = *(uint *)(pFVar1->_padding_ + (longlong)(int)uVar19 * 0x28 + 0x1c);
      uVar18 = uVar18 - 1;
    } while (-1 < (int)(uVar16 - 1));
  }
  return EVar10;
}

// ProcessSingleNode<FGridHelpers::FGridPathFilter> @ 146f8dce0

bool __thiscall
FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
::ProcessSingleNode<FGridHelpers::FGridPathFilter>
          (FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
           *this,FGraphAStarDefaultNode<FNavLocalGridData> *param_1,bool param_2,
          FGridPathFilter *param_3,int *param_4,double *param_5)

{
  FOpenList *this_00;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  FNodeSorter *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FNavLocalGridData *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uchar *puVar14;
  FGraphAStarDefaultNode<FNavLocalGridData> *pFVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  TIntPoint<int> *pTVar23;
  FNodePool *this_01;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 local_78 [8];
  FNodePool *local_70;
  
  iVar17 = (int)(this->OpenList)._padding_;
  this_00 = &this->OpenList;
  piVar5 = (int *)(this->OpenList)._padding_;
  pFVar6 = (this->OpenList).NodeSorter;
  iVar13 = iVar17 + -1;
  lVar22 = (longlong)*piVar5;
  if (1 < iVar13) {
    iVar13 = 1;
  }
  if (iVar13 != 0) {
    memmove(piVar5,piVar5 + (iVar17 - iVar13),(longlong)iVar13 << 2);
  }
  iVar17 = 0;
  lVar7 = this_00->_padding_;
  iVar13 = (int)(this->OpenList)._padding_ + -1;
  *(int *)&(this->OpenList)._padding_ = iVar13;
  if (1 < iVar13) {
    iVar16 = 0;
    do {
      iVar21 = iVar16;
      if ((iVar16 + 2 < iVar13) &&
         (pFVar8 = (pFVar6->NodePool->AllocatorInstance).Data,
         dVar25 = *(double *)
                   (pFVar8 + (longlong)*(int *)(lVar7 + 8 + (longlong)iVar16 * 4) * 0x28 + 0x10),
         pFVar8 = pFVar8 + (longlong)*(int *)(lVar7 + (longlong)(iVar16 + 1) * 4) * 0x28 + 0x10,
         iVar21 = iVar16 + 1, *(double *)pFVar8 <= dVar25 && dVar25 != *(double *)pFVar8)) {
        iVar21 = iVar16;
      }
      pFVar8 = (pFVar6->NodePool->AllocatorInstance).Data;
      iVar16 = *(int *)(lVar7 + (longlong)iVar17 * 4);
      iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar21 * 4);
      dVar25 = *(double *)(pFVar8 + (longlong)iVar16 * 0x28 + 0x10);
      pFVar8 = pFVar8 + (longlong)iVar2 * 0x28 + 0x10;
      if (dVar25 < *(double *)pFVar8 || dVar25 == *(double *)pFVar8) break;
      *(int *)(lVar7 + (longlong)iVar17 * 4) = iVar2;
      iVar17 = iVar21 + 1;
      *(int *)(lVar7 + 4 + (longlong)iVar21 * 4) = iVar16;
      iVar16 = iVar17 * 2;
    } while (iVar16 + 1 < iVar13);
  }
  this_01 = &this->NodePool;
  pFVar8 = (((this->OpenList).NodePool)->AllocatorInstance).Data + lVar22 * 0x28 + 0x20;
  *pFVar8 = (FScriptContainerElement)((byte)*pFVar8 & 0xfe);
  lVar7 = this_01->_padding_;
  pbVar1 = (byte *)(lVar7 + 0x20 + lVar22 * 0x28);
  *pbVar1 = *pbVar1 | 2;
  if ((param_2) && (*(int *)(lVar7 + lVar22 * 0x28) == param_1->NodeRef)) {
    *param_4 = *(int *)(lVar7 + 0x18 + lVar22 * 0x28);
    *param_5 = 0.0;
    bVar11 = false;
  }
  else {
    pTVar23 = FGridHelpers::Directions;
    local_70 = this_01;
    do {
      pFVar9 = this->Graph;
      uVar18 = *(uint *)((longlong)&pFVar9->_padding_ + 4);
      uVar3 = *(uint *)(this_01->_padding_ + lVar22 * 0x28);
      iVar13 = uVar3 % uVar18 + (pTVar23->field0_0x0)._s_0.Y;
      iVar17 = (pTVar23->field0_0x0)._s_0.X + uVar3 / uVar18;
      if ((((((-1 < iVar17) && (iVar17 < (int)pFVar9->_padding_)) && (-1 < iVar13)) &&
           ((iVar13 < (int)uVar18 && (uVar18 = iVar17 * uVar18 + iVar13, -1 < (int)uVar18)))) &&
          (((int)uVar18 < (int)pFVar9->_padding_ &&
           ((uVar18 != *(uint *)(this_01->_padding_ + 4 + lVar22 * 0x28) && (uVar18 != uVar3))))))
         && (puVar14 = TSimpleCellGrid<unsigned_char,255>::operator[]
                                 ((TSimpleCellGrid<unsigned_char,255> *)param_3->GridRef,uVar18),
            *puVar14 == '\0')) {
        pFVar15 = FNodePool::FindOrAdd(this_01,uVar18);
        lVar7 = this_01->_padding_;
        uVar18 = pFVar15->NodeRef;
        uVar3 = *(uint *)((longlong)&param_3->GridRef->_padding_ + 4);
        iVar13 = *(uint *)(lVar7 + lVar22 * 0x28) / uVar3 - uVar18 / uVar3;
        iVar17 = -iVar13;
        if (iVar17 < 0) {
          iVar17 = iVar13;
        }
        iVar16 = *(uint *)(lVar7 + lVar22 * 0x28) % uVar3 - uVar18 % uVar3;
        iVar13 = -iVar16;
        if (iVar13 < 0) {
          iVar13 = iVar16;
        }
        dVar25 = (double)(iVar17 + iVar13) + *(double *)(lVar7 + 8 + lVar22 * 0x28);
        if ((param_2) && (uVar4 = param_1->NodeRef, uVar18 != uVar4)) {
          iVar13 = uVar18 / uVar3 - uVar4 / uVar3;
          iVar17 = -iVar13;
          if (iVar17 < 0) {
            iVar17 = iVar13;
          }
          iVar16 = uVar18 % uVar3 - uVar4 % uVar3;
          iVar13 = -iVar16;
          if (iVar13 < 0) {
            iVar13 = iVar16;
          }
          dVar26 = (double)(iVar17 + iVar13);
        }
        else {
          dVar26 = 0.0;
        }
        dVar24 = dVar26 + dVar25;
        if (dVar24 < pFVar15->TotalCost) {
          pFVar15->TraversalCost = dVar25;
          pFVar15->TotalCost = dVar24;
          pFVar15->ParentRef = *(int *)(this_01->_padding_ + lVar22 * 0x28);
          iVar17 = *(int *)(this_01->_padding_ + 0x18 + lVar22 * 0x28);
          pFVar15->bIsClosed = '\0';
          pFVar15->ParentNodeIndex = iVar17;
          if (pFVar15->bIsOpened == 0) {
            FOpenList::Push(this_00,pFVar15);
          }
          else {
            piVar19 = (int *)this_00->_padding_;
            iVar17 = (int)(this->OpenList)._padding_;
            piVar5 = piVar19 + iVar17;
            while( true ) {
              if ((int)(this->OpenList)._padding_ != iVar17) {
                local_78[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_78);
              }
              if (piVar19 == piVar5) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\GraphAStar.h"
                                    ,300,L"");
                if (bVar11) {
                  pcVar10 = (code *)swi(3);
                  uVar12 = (*pcVar10)();
                  return (bool)uVar12;
                }
                goto LAB_146f8e0a8;
              }
              if (*piVar19 == pFVar15->SearchNodeIndex) break;
              piVar19 = piVar19 + 1;
            }
            lVar7 = this_00->_padding_;
            pFVar6 = (this->OpenList).NodeSorter;
            uVar20 = (longlong)piVar19 - lVar7 >> 2;
            uVar18 = (uint)uVar20;
            while (this_01 = local_70, 0 < (int)uVar18) {
              uVar18 = ((int)uVar20 + -1) / 2;
              pFVar8 = (pFVar6->NodePool->AllocatorInstance).Data;
              iVar17 = *(int *)(lVar7 + (uVar20 & 0xffffffff) * 4);
              iVar13 = *(int *)(lVar7 + (longlong)(int)uVar18 * 4);
              dVar25 = *(double *)(pFVar8 + (longlong)iVar13 * 0x28 + 0x10);
              pFVar8 = pFVar8 + (longlong)iVar17 * 0x28 + 0x10;
              if (dVar25 < *(double *)pFVar8 || dVar25 == *(double *)pFVar8) break;
              *(int *)(lVar7 + (uVar20 & 0xffffffff) * 4) = iVar13;
              *(int *)(lVar7 + (longlong)(int)uVar18 * 4) = iVar17;
              uVar20 = (ulonglong)uVar18;
            }
          }
LAB_146f8e0a8:
          if (dVar26 < *param_5) {
            *param_5 = dVar26;
            *param_4 = pFVar15->SearchNodeIndex;
          }
        }
      }
      pTVar23 = pTVar23 + 1;
    } while ((longlong)pTVar23 < 0x154c15040);
    bVar11 = true;
  }
  return bVar11;
}

