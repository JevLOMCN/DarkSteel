// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// operator() @ 144016950

int __thiscall
`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2
::<lambda_1>::operator()(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UnionFindInfo *pUVar4;
  UnionFindInfo *pUVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  pUVar4 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
           ::FindChecked(*(void **)this,param_1);
  if (pUVar4->GroupId != param_1) {
    do {
      if ((9 < iVar3) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7317719928365121392>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConnectionGraphUtility.cpp"
                             ,0x90,"findIters++ < 10"), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      pUVar4 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
               ::FindChecked(*(void **)this,param_1);
      pUVar5 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
               ::FindChecked(*(void **)this,pUVar4->GroupId);
      pUVar4->GroupId = pUVar5->GroupId;
      param_1 = pUVar5->GroupId;
    } while ((param_1 != 0) &&
            (pUVar4 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                      ::FindChecked(*(void **)this,param_1), iVar3 = iVar3 + 1,
            pUVar4->GroupId != param_1));
    return param_1;
  }
  return param_1;
}

// CommitToCollection @ 144027670

void __cdecl
FGeometryCollectionConnectionGraphGenerator::CommitToCollection
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *param_1,FGeometryCollection *param_2,int param_3)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_1ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  undefined4 local_14c;
  undefined4 local_12c;
  FCollectionConnectionGraphFacade local_128;
  
  GeometryCollection::Facades::FCollectionConnectionGraphFacade::FCollectionConnectionGraphFacade
            (&local_128,(FManagedArrayCollection *)param_2);
  GeometryCollection::Facades::FCollectionConnectionGraphFacade::DefineSchema(&local_128);
  uVar7 = 0;
  if (param_3 < (int)param_2->_padding_) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = 0;
  plVar17 = (longlong *)((longlong)param_3 * 0x50 + param_2->_padding_);
  iVar16 = 0;
  iVar3 = (int)plVar17[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2);
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar2;
    }
    uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14402778e;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar16 + -1 + (int)lVar9;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14402778e:
  uVar12 = *(uint *)(plVar17 + 5);
  uVar10 = uVar12 & 0xffffffe0;
  TStack_190._padding_ = CONCAT44(uVar7,iVar13);
  TStack_190.CurrentBitIndex = iVar8;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_190._28_4_ = local_14c;
  TStack_190.BaseBitIndex = iVar16;
  uStack_170 = CONCAT44(uStack_1ec,(int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34));
  local_res20 = uVar12;
  local_198 = plVar17;
  TStack_190.Array = pTVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)(plVar17 + 5);
  if (uVar12 != uVar7) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      local_res20 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1440278c0;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar10;
    local_res20 = uVar12;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
      local_res20 = uVar7;
    }
  }
LAB_1440278c0:
  do {
    plVar5 = local_198;
    if ((int)local_198[1] - *(int *)((longlong)local_198 + 0x34) != (int)uStack_170) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_190.CurrentBitIndex == uVar12) && (TStack_190.Array == pTVar2)) &&
       (plVar5 == plVar17)) {
      return;
    }
    uVar7 = *(uint *)(*plVar5 + (longlong)TStack_190.CurrentBitIndex * 0xc);
    uVar12 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar18 = (param_1->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar7 * 0x50;
    GeometryCollection::Facades::FCollectionConnectionGraphFacade::ReserveAdditionalConnections
              (&local_128,*(int *)(pFVar18 + lVar9 + 8) - *(int *)(pFVar18 + lVar9 + 0x34));
    uVar12 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = 0;
    pFVar18 = (param_1->AllocatorInstance).Data + lVar9;
    iVar3 = *(int *)(pFVar18 + 0x28);
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar18 + 0x10);
    iVar16 = 0;
    uVar12 = 1;
    iVar8 = 0;
    if (iVar3 != 0) {
      pTVar15 = pTVar14;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar18 + 0x20) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar18 + 0x20);
      }
      uVar10 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar13;
        iVar16 = iVar16 + 0x20;
        iVar13 = iVar13 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144027a2e;
        uVar10 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar12 = -uVar10 & uVar10;
      uVar1 = (ulonglong)uVar12 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = iVar16 + -1 + (int)lVar9;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_144027a2e:
    uVar10 = *(uint *)(pFVar18 + 0x28);
    uVar11 = uVar10 & 0xffffffe0;
    TStack_1c0._padding_ = CONCAT44(uVar12,iVar13);
    TStack_1c0.CurrentBitIndex = iVar8;
    TStack_1c0.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar10 >> 5;
    TStack_1c0._28_4_ = local_12c;
    TStack_1c0.BaseBitIndex = iVar16;
    uStack_1a0 = CONCAT44(uStack_1ec,*(int *)(pFVar18 + 8) - *(int *)(pFVar18 + 0x34));
    TStack_1c0.Array = pTVar14;
    if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = *(uint *)(pFVar18 + 0x28);
    if (uVar10 != uVar12) {
      pTVar15 = pTVar14;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar18 + 0x20) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar18 + 0x20);
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar13;
        uVar11 = uVar11 + 0x20;
        iVar13 = iVar13 + 1;
        uVar10 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_144027b40;
        uVar10 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar11;
      if ((int)uVar12 < (int)uVar10) {
        uVar10 = uVar12;
      }
    }
LAB_144027b40:
    while( true ) {
      if (*(int *)(pFVar18 + 8) - *(int *)(pFVar18 + 0x34) != (int)uStack_1a0) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_1c0.CurrentBitIndex == uVar10) && (TStack_1c0.Array == pTVar14)) break;
      GeometryCollection::Facades::FCollectionConnectionGraphFacade::Connect
                (&local_128,uVar7,
                 *(int *)(*(longlong *)pFVar18 + (longlong)TStack_1c0.CurrentBitIndex * 0xc));
      TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
    uVar12 = local_res20;
  } while( true );
}

// ComputeConnectivityGraph @ 144028240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> * __cdecl
FGeometryCollectionConnectionGraphGenerator::ComputeConnectivityGraph
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FGeometryCollection *param_1,int param_2,
          EClusterUnionMethod param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar4 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
              *)(*pcVar1)();
    return pTVar3;
  }
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,
             *(int *)((longlong)param_2 * 0x50 + 8 + param_1->_padding_) -
             *(int *)((longlong)param_2 * 0x50 + 0x34 + param_1->_padding_),Default);
  if ((param_3 != None) && (param_3 != PointImplicit)) {
    if (param_3 == PointImplicitAugmentedWithMinimalDelaunay) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConnectionGraphUtility.cpp"
                         ,0x26,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
      FixConnectivityGraphUsingDelaunayTriangulation(__return_storage_ptr__,param_1,param_2);
    }
    else {
      if (param_3 == DelaunayTriangulation) {
        ComputeConnectivityGraphUsingDelaunayTriangulation(__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
      if (param_3 != MinimalSpanningSubsetDelaunayTriangulation) {
        return __return_storage_ptr__;
      }
    }
  }
  FixConnectivityGraphUsingDelaunayTriangulation(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ComputeConnectivityGraphUsingDelaunayTriangulation @ 144028370

void __cdecl
FGeometryCollectionConnectionGraphGenerator::ComputeConnectivityGraphUsingDelaunayTriangulation
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *param_1,FGeometryCollection *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  FVoronoiNeighbors local_48;
  
  ComputeVoronoiNeighbors(&local_48,param_2,param_3);
  uVar6 = 0;
  if (param_3 < (int)param_2->_padding_) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             ((longlong)param_3 * 0x50 + param_2->_padding_),&local_58);
  uVar6 = 0;
  iVar4 = local_48.Neighbors.ArrayNum;
  local_48.Neighbors.ArrayNum = iVar4;
  if (0 < iVar4) {
    lVar8 = 0;
    uVar5 = local_48.Neighbors._8_8_;
    do {
      uVar7 = 0;
      lVar10 = 0;
      while( true ) {
        uVar3 = 0;
        if ((int)uVar6 < (int)uVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar5 = local_48.Neighbors._8_8_, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (int)uVar5;
        if (*(int *)(local_48.Neighbors.AllocatorInstance.Data + lVar8 + 8) <= (int)uVar7) break;
        uVar3 = 0;
        if ((int)uVar6 < iVar4) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar9 = local_48.Neighbors.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
        uVar3 = 0;
        if ((int)uVar7 < *(int *)(pFVar9 + 8)) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ConnectChildren(param_1,&local_58,uVar6,*(int *)(lVar10 + *(longlong *)&pFVar9->field_0x0));
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 4;
        uVar5 = local_48.Neighbors._8_8_;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar6 < iVar4);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
    iVar4 = local_48.Neighbors.ArrayNum;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.Neighbors.AllocatorInstance.Data,
             iVar4);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.Neighbors.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48.Neighbors.AllocatorInstance.Data);
  }
  if (local_48.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Points.AllocatorInstance.Data);
  }
  return;
}

// ComputeVoronoiNeighbors @ 14402ac90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVoronoiNeighbors * __cdecl
FGeometryCollectionConnectionGraphGenerator::ComputeVoronoiNeighbors
          (FVoronoiNeighbors *__return_storage_ptr__,FGeometryCollection *param_1,int param_2)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  float *pfVar3;
  ulonglong uVar4;
  float *pfVar5;
  float *pfVar6;
  FName FVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  FName FVar12;
  FGeometryCollection *pFVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  FName *pFVar18;
  FVoronoiNeighbors *pFVar19;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint uVar26;
  longlong *plVar27;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  longlong local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  int local_1d0;
  int local_1cc;
  longlong *local_1c8;
  FGeometryCollection *local_1c0;
  longlong *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FName local_158;
  FName local_150;
  TArrayView<UE::Math::TVector<double>_const_,int> local_148;
  FName local_138 [4];
  undefined4 local_114;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  piVar1 = &(__return_storage_ptr__->Points).ArrayMax;
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Neighbors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Neighbors).ArrayNum = 0;
  (__return_storage_ptr__->Neighbors).ArrayMax = 0;
  *piVar1 = 0;
  FVar12 = FTransformCollection::TransformGroup;
  local_1c0 = param_1;
  pFVar18 = ::FName::FName(local_138,"MassToLocal");
  FVar7 = *pFVar18;
  bVar14 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,FVar7,FVar12);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasAttribute(Name, Group)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x185,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
    return pFVar19;
  }
  local_150 = FVar12;
  local_158 = FVar7;
  pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,(TTuple<FName,FName> *)&local_158);
  if ((pTVar20 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
    return pFVar19;
  }
  if ((pTVar20->field_0x10 != '\a') &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSameType<T>()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x303,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
    return pFVar19;
  }
  local_1f0 = *(longlong *)&pTVar20->field_0x30;
  if ((local_1f0 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
    return pFVar19;
  }
  uVar24 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar24 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
    return pFVar19;
  }
  plVar27 = (longlong *)((longlong)param_2 * 0x50 + param_1->_padding_);
  uVar24 = (int)plVar27[1] - *(int *)((longlong)plVar27 + 0x34);
  local_1c8 = plVar27;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (*piVar1 < (int)uVar24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar24,(ForAnyElementType *)__return_storage_ptr__,
               (__return_storage_ptr__->Points).ArrayNum,piVar1);
  }
  iVar17 = (int)plVar27[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar27 + 2);
  iStack_1b0 = 0;
  uStack_1ac = 1;
  iStack_19c = iStack_1b0;
  local_198 = iStack_1b0;
  if (iVar17 != 0) {
    pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)plVar27[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar27[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar25 = pTVar2;
    }
    uVar24 = *(uint *)(pTVar25->AllocatorInstance).InlineData;
    local_198 = 0;
    iStack_1b0 = 0;
    while (uVar24 == 0) {
      lVar21 = (longlong)iStack_1b0;
      local_198 = local_198 + 0x20;
      iStack_1b0 = iStack_1b0 + 1;
      iStack_19c = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_14402aeee;
      uVar24 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar21 * 4 + 4);
    }
    uStack_1ac = -uVar24 & uVar24;
    uVar4 = (ulonglong)uStack_1ac * 2 + 1;
    lVar21 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_1d0 = (int)lVar21;
    iStack_19c = local_1d0 + -1 + local_198;
    if (iVar17 < iStack_19c) {
      iStack_19c = iVar17;
    }
  }
LAB_14402aeee:
  uVar24 = *(uint *)(plVar27 + 5);
  uStack_194 = local_114;
  iStack_190 = (int)plVar27[1] - *(int *)((longlong)plVar27 + 0x34);
  uVar26 = uVar24 & 0xffffffe0;
  uStack_1a0 = 0xffffffff;
  TStack_180._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  TStack_180.CurrentBitIndex = iStack_19c;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar24 >> 5;
  TStack_180._28_4_ = local_114;
  TStack_180.BaseBitIndex = local_198;
  uStack_160 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = plVar27;
  local_1a8 = pTVar2;
  local_188 = plVar27;
  TStack_180.Array = pTVar2;
  if ((((int)uVar24 < 0) || (iVar17 < (int)uVar24)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
    return pFVar19;
  }
  uVar15 = *(uint *)(plVar27 + 5);
  if (uVar24 != uVar15) {
    pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)plVar27[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar27[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar25 = pTVar2;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) &
             *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
    while (uVar24 == 0) {
      lVar21 = (longlong)iVar22;
      uVar26 = uVar26 + 0x20;
      iVar22 = iVar22 + 1;
      uVar24 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14402aff0;
      uVar24 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar21 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_1cc = (int)lVar21;
    uVar24 = local_1cc + -1 + uVar26;
    if ((int)uVar15 < (int)uVar24) {
      uVar24 = uVar15;
    }
  }
LAB_14402aff0:
  while( true ) {
    plVar27 = local_188;
    if ((int)local_188[1] - *(int *)((longlong)local_188 + 0x34) != (int)uStack_160) {
      local_1f8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    lVar21 = (longlong)TStack_180.CurrentBitIndex;
    if (((TStack_180.CurrentBitIndex == uVar24) && (TStack_180.Array == pTVar2)) &&
       (plVar27 == local_1c8)) {
      local_148.DataPtr = (TVector<double> *)(__return_storage_ptr__->Points).AllocatorInstance.Data
      ;
      iVar17 = (__return_storage_ptr__->Points).ArrayNum;
      if ((iVar17 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
        return pFVar19;
      }
      local_148.ArrayNum = iVar17;
      VoronoiNeighbors(&local_148,&__return_storage_ptr__->Neighbors,true,__real_3f1a36e2e0000000);
      return __return_storage_ptr__;
    }
    lVar23 = *plVar27;
    uVar26 = *(uint *)(lVar23 + lVar21 * 0xc);
    uVar15 = 0;
    if ((int)uVar26 < *(int *)(local_1f0 + 0x18)) {
      uVar15 = ~uVar26 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
      return pFVar19;
    }
    pFVar13 = local_1c0;
    uVar15 = *(uint *)(lVar23 + lVar21 * 0xc);
    lVar23 = (longlong)(int)uVar15;
    lVar21 = *(longlong *)(local_1f0 + 0x10);
    uVar16 = 0;
    if ((int)uVar15 < (int)local_1c0->_padding_) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) break;
    lVar8 = pFVar13->_padding_;
    pfVar3 = (float *)(lVar8 + lVar23 * 0x30);
    pfVar5 = (float *)(lVar8 + 0x20 + lVar23 * 0x30);
    pfVar6 = (float *)(lVar8 + 0x10 + lVar23 * 0x30);
    local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar3[1],0);
    local_a8.Rotation.XY.m128d_f64[0] = (double)*pfVar3;
    local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar3[1] >> 0x20);
    local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)pfVar3[3],0);
    local_a8.Rotation.ZW.m128d_f64[0] = (double)pfVar3[2];
    local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar3[3] >> 0x20);
    local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar6[1],0);
    local_a8.Translation.XY.m128d_f64[0] = (double)*pfVar6;
    local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar6[1] >> 0x20);
    local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)pfVar6[3],0);
    local_a8.Translation.ZW.m128d_f64[0] = (double)pfVar6[2];
    local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar6[3] >> 0x20);
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar5[1],0);
    local_a8.Scale3D.XY.m128d_f64[0] = (double)*pfVar5;
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar5[1] >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)pfVar5[3],0);
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)pfVar5[2];
    local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar5[3] >> 0x20);
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_108,(TTransform<double> *)((longlong)(int)uVar26 * 0x60 + lVar21),&local_a8);
    pFVar9 = (__return_storage_ptr__->Points).AllocatorInstance.Data;
    local_1d8 = local_108.Translation.ZW.m128d_f64[0];
    local_1e8 = local_108.Translation.XY.m128d_f64[0];
    dStack_1e0 = local_108.Translation.XY.m128d_f64[1];
    if (((pFVar9 <= (FScriptContainerElement *)&local_1e8) &&
        ((FScriptContainerElement *)&local_1e8 < pFVar9 + (longlong)*piVar1 * 0x18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar11 = (code *)swi(3);
      pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
      return pFVar19;
    }
    iVar17 = (__return_storage_ptr__->Points).ArrayNum;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)__return_storage_ptr__,piVar1);
    }
    (__return_storage_ptr__->Points).ArrayNum = iVar17 + 1;
    pFVar10 = (__return_storage_ptr__->Points).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar17 * 0x18;
    *(double *)pFVar9 = local_1e8;
    *(double *)(pFVar9 + 8) = dStack_1e0;
    *(double *)(pFVar10 + (longlong)iVar17 * 0x18 + 0x10) = local_1d8;
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  pcVar11 = (code *)swi(3);
  pFVar19 = (FVoronoiNeighbors *)(*pcVar11)();
  return pFVar19;
}

// ConnectChildren @ 14402b880

void __cdecl
FGeometryCollectionConnectionGraphGenerator::ConnectChildren
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int local_res8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  int local_58 [6];
  
  uVar3 = 0;
  if (param_3 < param_2->ArrayNum) {
    uVar3 = (uint)~param_3 >> 0x1f;
  }
  local_res10 = param_2;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20[0] = *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)param_3 * 4);
  uVar3 = 0;
  if (param_4 < param_2->ArrayNum) {
    uVar3 = (uint)~param_4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0] = *(undefined4 *)((local_res10->AllocatorInstance).Data + (longlong)param_4 * 4);
  uVar3 = 0;
  if (param_3 < param_1->ArrayNum) {
    uVar3 = (uint)~param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             ((param_1->AllocatorInstance).Data + (longlong)param_3 * 0x50),local_res8,
             (bool *)local_res18);
  uVar3 = 0;
  if (param_4 < param_1->ArrayNum) {
    uVar3 = (uint)~param_4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             ((param_1->AllocatorInstance).Data + (longlong)param_4 * 0x50),local_58,
             (bool *)local_res20);
  return;
}

// FixConnectivityGraphUsingDelaunayTriangulation @ 144036fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *param_1,FGeometryCollection *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  LinkCandidate *pLVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  UnionFindInfo *pUVar12;
  UnionFindInfo *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  ulonglong uVar24;
  ForElementType<unsigned_int> FVar25;
  FScriptContainerElement *pFVar26;
  uint *puVar27;
  int iVar28;
  undefined1 auStackY_2b8 [32];
  uint local_268;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  FIdentityFunctor local_254 [4];
  int local_250;
  ForAnyElementType local_248;
  uint local_240;
  uint uStack_23c;
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  uint local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  uint local_204;
  LinkCandidate *local_200;
  uint *local_1f8;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *local_1f0;
  int local_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e0;
  undefined4 local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FVoronoiNeighbors local_1c8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  int local_19c;
  int local_198;
  undefined1 local_194 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  FScriptContainerElement *local_160;
  int iStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  FScriptContainerElement *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined4 local_d4;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c8;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  LinkCandidate local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar15 = 0;
  if (param_3 < (int)param_2->_padding_) {
    uVar15 = (uint)~param_3 >> 0x1f;
  }
  local_1f0 = param_1;
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             ((longlong)param_3 * 0x50 + param_2->_padding_),&local_238);
  ComputeVoronoiNeighbors(&local_1c8,param_2,param_3);
  iVar10 = local_238.ArrayNum;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.AllocationFlags.NumBits = 0;
  local_c8.AllocationFlags.MaxBits = 0x80;
  local_c8.FirstFreeIndex = -1;
  local_c8.NumFreeIndices = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if (local_238.ArrayNum == 0) goto LAB_144037302;
  if (local_238.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)local_238.ArrayNum);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_c8,local_238.ArrayNum);
  if ((uint)iVar10 < 4) {
    uVar15 = 1;
  }
  else {
    uVar22 = (ulonglong)(((uint)iVar10 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a0 = (undefined4)lVar14;
    uVar15 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_80 != 0) && ((int)uVar15 <= (int)local_80)) goto LAB_144037302;
  local_80 = uVar15;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
  }
  if (uVar15 != 0) {
    uVar18 = uVar15;
    if (uVar15 < 2) {
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_144037141;
      }
    }
    else {
LAB_144037141:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar18,4);
    }
    if (0 < (int)uVar15) {
      uVar24 = (ulonglong)uVar15;
      uVar22 = 0;
      do {
        FVar17.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_88.Data;
        }
        uVar11 = uVar22 & (longlong)(int)uVar15 - 1U;
        uVar22 = uVar22 + 1;
        *(undefined4 *)(FVar17.Data + uVar11 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_80 != 0) {
    pTStack_1e0 = &local_c8.AllocationFlags;
    uStack_1e4 = 1;
    local_1e8 = 0;
    iStack_1d4 = 0;
    iStack_1d0 = 0;
    if (local_c8.AllocationFlags.NumBits != 0) {
      FVar25 = (ForElementType<unsigned_int>)&local_c8.AllocationFlags;
      if (local_c8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_c8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar15 = *(uint *)FVar25;
      local_1e8 = 0;
      iStack_1d0 = 0;
      while (uVar15 == 0) {
        iStack_1d0 = iStack_1d0 + 0x20;
        lVar14 = (longlong)local_1e8;
        local_1e8 = local_1e8 + 1;
        if ((int)(local_c8.AllocationFlags.NumBits + -1 +
                 (local_c8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1e8)
        goto LAB_14403725d;
        uVar15 = *(uint *)((uchar *)((longlong)FVar25 + 4) + lVar14 * 4);
      }
      uStack_1e4 = -uVar15 & uVar15;
      uVar22 = (ulonglong)uStack_1e4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_194._4_4_ = (undefined4)lVar14;
      iStack_1d4 = local_194._4_4_ + -1 + iStack_1d0;
      if (local_c8.AllocationFlags.NumBits < iStack_1d4) {
LAB_14403725d:
        iStack_1d4 = local_c8.AllocationFlags.NumBits;
      }
    }
    local_1d8 = 0xffffffff;
    local_194._12_8_ = &local_c8;
    local_180._padding_ = CONCAT44(uStack_1e4,local_1e8);
    local_180.CurrentBitIndex = iStack_1d4;
    local_180.UnvisitedBitMask = 0xffffffff;
    local_180._28_4_ = uStack_1cc;
    local_180.BaseBitIndex = iStack_1d0;
    iVar10 = iStack_1d4;
    local_180.Array = pTStack_1e0;
    if (iStack_1d4 < local_c8.AllocationFlags.NumBits) {
      do {
        pFVar26 = (((TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,TSizedDefaultAllocator<32>_>
                     *)local_194._12_8_)->AllocatorInstance).Data;
        lVar14 = (longlong)iVar10;
        uVar15 = local_80 - 1 & *(uint *)(pFVar26 + lVar14 * 0x14);
        *(uint *)(pFVar26 + lVar14 * 0x14 + 0x10) = uVar15;
        FVar17.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_88.Data;
        }
        uVar22 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pFVar26 + lVar14 * 0x14 + 0xc) = *(undefined4 *)(FVar17.Data + uVar22 * 4);
        *(int *)(FVar17.Data + uVar22 * 4) = iVar10;
        local_180.UnvisitedBitMask = local_180.UnvisitedBitMask & ~local_180._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
        iVar10 = local_180.CurrentBitIndex;
      } while (local_180.CurrentBitIndex < (local_180.Array)->NumBits);
    }
  }
LAB_144037302:
  iVar10 = local_238.ArrayNum;
  pFVar26 = local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 4;
  FVar17.Data = local_238.AllocatorInstance.Data;
  while( true ) {
    if (local_238.ArrayNum != iVar10) {
      local_258 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_258);
    }
    if (FVar17.Data == pFVar26) break;
    local_208 = *(undefined4 *)FVar17.Data;
    local_100 = &local_208;
    local_1a4 = 1;
    local_f8 = &local_1a8;
    local_1a8 = local_208;
    TSet<TTuple<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo>,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<int_const_&,_FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::UnionFindInfo_&&>_>
              (&local_c8,
               (TPairInitializer<int_const_&,_private:_static_void___cdecl_FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation(TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>_&,FGeometryCollection_const_&,int)_::_2_::UnionFindInfo_&&>
                *)local_194,(bool *)&local_100);
    FVar17.Data = FVar17.Data + 4;
  }
  local_260 = &local_c8;
  local_268 = 0;
  if (0 < local_238.ArrayNum) {
    local_220 = 0;
    local_218 = 0;
    do {
      lVar19 = local_218;
      lVar14 = local_220;
      uVar15 = 0;
      if ((int)local_268 < local_238.ArrayNum) {
        uVar15 = ~local_268 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_250 = *(int *)(local_238.AllocatorInstance.Data + lVar19);
      uVar15 = 0;
      if ((int)local_268 < param_1->ArrayNum) {
        uVar15 = ~local_268 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_158 = 0;
      pFVar26 = (param_1->AllocatorInstance).Data + lVar14;
      iVar10 = *(int *)(pFVar26 + 0x28);
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar26 + 0x10);
      local_140 = 0;
      uStack_154 = 1;
      iStack_144 = 0;
      if (iVar10 != 0) {
        pTVar23 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar26 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar26 + 0x20);
        }
        uVar15 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
        while (uVar15 == 0) {
          lVar14 = (longlong)iStack_158;
          local_140 = local_140 + 0x20;
          iStack_158 = iStack_158 + 1;
          iStack_144 = iVar10;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
          goto LAB_1440374ed;
          uVar15 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uStack_154 = -uVar15 & uVar15;
        uVar22 = (ulonglong)uStack_154 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_198 = (int)lVar14;
        iStack_144 = local_140 + -1 + local_198;
        if (iVar10 < iStack_144) {
          iStack_144 = iVar10;
        }
      }
LAB_1440374ed:
      uVar15 = *(uint *)(pFVar26 + 0x28);
      uStack_13c = local_d4;
      uVar18 = uVar15 & 0xffffffe0;
      iStack_138 = *(int *)(pFVar26 + 8) - *(int *)(pFVar26 + 0x34);
      TStack_128._padding_ = CONCAT44(uStack_154,iStack_158);
      uStack_148 = 0xffffffff;
      TStack_128.CurrentBitIndex = iStack_144;
      TStack_128.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar15 >> 5;
      TStack_128._28_4_ = local_d4;
      TStack_128.BaseBitIndex = local_140;
      uStack_108 = CONCAT44(uStack_134,iStack_138);
      local_160 = pFVar26;
      local_150 = pTVar1;
      local_130 = pFVar26;
      TStack_128.Array = pTVar1;
      if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = local_250;
      uVar2 = *(uint *)(pFVar26 + 0x28);
      if (uVar15 != uVar2) {
        pTVar23 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar26 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar26 + 0x20);
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                 *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
        while (uVar15 == 0) {
          lVar14 = (longlong)iVar16;
          uVar18 = uVar18 + 0x20;
          iVar16 = iVar16 + 1;
          uVar15 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_144037602;
          uVar15 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uVar22 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_19c = (int)lVar14;
        uVar15 = (uVar18 - 1) + local_19c;
        if ((int)uVar2 < (int)uVar15) {
          uVar15 = uVar2;
        }
      }
LAB_144037602:
      while( true ) {
        pFVar7 = local_130;
        if (*(int *)(local_130 + 8) - *(int *)(local_130 + 0x34) != (int)uStack_108) {
          local_257 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_257);
        }
        if (((TStack_128.CurrentBitIndex == uVar15) && (TStack_128.Array == pTVar1)) &&
           (pFVar7 == pFVar26)) break;
        uVar18 = *(uint *)(*(longlong *)pFVar7 + (longlong)TStack_128.CurrentBitIndex * 0xc);
        if (local_c8.Data.ArrayNum != local_c8.NumFreeIndices) {
          FVar17.Data = local_90;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_88.Data;
          }
          for (iVar16 = *(int *)(FVar17.Data + (ulonglong)(local_80 - 1 & uVar18) * 4); iVar16 != -1
              ; iVar16 = *(int *)(local_c8.Data.AllocatorInstance.Data +
                                 (longlong)iVar16 * 0x14 + 0xc)) {
            if (*(uint *)(local_c8.Data.AllocatorInstance.Data + (longlong)iVar16 * 0x14) == uVar18)
            {
              iVar9 = `FGeometryCollectionConnectionGraphGenerator::
                      FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_1>::operator()
                                (&local_260,iVar10);
              iVar16 = `FGeometryCollectionConnectionGraphGenerator::
                       FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_1>::operator()
                                 (&local_260,uVar18);
              if (iVar9 != iVar16) {
                pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_c8,iVar16);
                pUVar13 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_c8,iVar9);
                iVar20 = iVar9;
                if (pUVar12->Size < pUVar13->Size) {
                  iVar20 = iVar16;
                  iVar16 = iVar9;
                }
                pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_c8,iVar20);
                pUVar12->GroupId = iVar16;
                pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_c8,iVar20);
                iVar9 = pUVar12->Size;
                pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_c8,iVar16);
                pUVar12->Size = pUVar12->Size + iVar9;
                pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_c8,iVar20);
                pUVar12->Size = 0;
              }
              break;
            }
          }
        }
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      }
      local_268 = local_268 + 1;
      local_218 = local_218 + 4;
      local_220 = local_220 + 0x50;
      param_1 = local_1f0;
    } while ((int)local_268 < local_238.ArrayNum);
  }
  this = local_260;
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240 = 0;
  uStack_23c = 0;
  if (local_1c8.Neighbors.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1c8.Neighbors.ArrayNum);
  }
  if (0 < local_1c8.Neighbors.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_1c8.Neighbors.ArrayNum,&local_248,0,(int *)&uStack_23c);
  }
  dVar5 = __real_410e848000000000;
  local_268 = 0;
  if (0 < local_1c8.Neighbors.ArrayNum) {
    local_210 = 0;
    local_220 = 0;
    local_218 = 0;
    do {
      lVar19 = local_210;
      lVar14 = local_220;
      uVar18 = ~local_268 >> 0x1f;
      uVar15 = 0;
      if ((int)local_268 < local_238.ArrayNum) {
        uVar15 = uVar18;
      }
      local_204 = uVar18;
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_250 = *(int *)(local_238.AllocatorInstance.Data + lVar14 * 4);
      uVar15 = 0;
      if ((int)local_268 < local_1c8.Neighbors.ArrayNum) {
        uVar15 = uVar18;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_200 = (LinkCandidate *)local_1c8.Neighbors.AllocatorInstance.Data;
      local_228 = *(uint *)(local_1c8.Neighbors.AllocatorInstance.Data + lVar19 + 8);
      uVar22 = (ulonglong)(int)local_228;
      puVar27 = *(uint **)(local_1c8.Neighbors.AllocatorInstance.Data + lVar19);
      puVar21 = puVar27 + uVar22;
      local_1f8 = puVar21;
      while( true ) {
        if (*(int *)((longlong)&local_200->DistSq + lVar19) != (int)uVar22) {
          local_256 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_256);
        }
        if (puVar27 == puVar21) break;
        uVar15 = *puVar27;
        lVar14 = (longlong)(int)uVar15;
        if ((int)local_268 <= (int)uVar15) {
          uVar18 = 0;
          if ((int)uVar15 < local_238.ArrayNum) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar10 = *(int *)(local_238.AllocatorInstance.Data + lVar14 * 4);
          uVar18 = 0;
          if ((int)uVar15 < local_1c8.Points.ArrayNum) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar17.Data = local_1c8.Points.AllocatorInstance.Data;
          uVar18 = 0;
          if ((int)local_268 < local_1c8.Points.ArrayNum) {
            uVar18 = local_204;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar4 = (*(double *)(FVar17.Data + lVar14 * 0x18 + 8) -
                  *(double *)(local_1c8.Points.AllocatorInstance.Data + local_218 + 8)) *
                  (*(double *)(FVar17.Data + lVar14 * 0x18 + 8) -
                  *(double *)(local_1c8.Points.AllocatorInstance.Data + local_218 + 8)) +
                  (*(double *)(FVar17.Data + lVar14 * 0x18) -
                  *(double *)(local_1c8.Points.AllocatorInstance.Data + local_218)) *
                  (*(double *)(FVar17.Data + lVar14 * 0x18) -
                  *(double *)(local_1c8.Points.AllocatorInstance.Data + local_218)) +
                  (*(double *)(FVar17.Data + lVar14 * 0x18 + 0x10) -
                  *(double *)(local_1c8.Points.AllocatorInstance.Data + local_218 + 0x10)) *
                  (*(double *)(FVar17.Data + lVar14 * 0x18 + 0x10) -
                  *(double *)(local_1c8.Points.AllocatorInstance.Data + local_218 + 0x10));
          if (dVar5 <= dVar4) {
            if (iVar10 != 0) {
              iVar16 = 0;
              pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(this,iVar10);
              if (pUVar12->GroupId != iVar10) {
                do {
                  if ((9 < iVar16) &&
                     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_7317719928365121392>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConnectionGraphUtility.cpp"
                                         ,0x90,"findIters++ < 10"), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this,iVar10);
                  pUVar13 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this,pUVar12->GroupId);
                  pUVar12->GroupId = pUVar13->GroupId;
                  iVar10 = pUVar13->GroupId;
                } while ((iVar10 != 0) &&
                        (pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                                   ::FindChecked(this,iVar10), iVar16 = iVar16 + 1,
                        pUVar12->GroupId != iVar10));
              }
            }
            iVar16 = local_250;
            if (local_250 != 0) {
              iVar9 = 0;
              pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(this,local_250);
              if (pUVar12->GroupId != iVar16) {
                do {
                  if ((9 < iVar9) &&
                     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_7317719928365121392>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConnectionGraphUtility.cpp"
                                         ,0x90,"findIters++ < 10"), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this,iVar16);
                  pUVar13 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this,pUVar12->GroupId);
                  pUVar12->GroupId = pUVar13->GroupId;
                  iVar16 = pUVar13->GroupId;
                } while ((iVar16 != 0) &&
                        (pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                                   ::FindChecked(this,iVar16), iVar9 = iVar9 + 1,
                        pUVar12->GroupId != iVar16));
              }
            }
            lVar19 = local_210;
            puVar21 = local_1f8;
            if (iVar16 != iVar10) {
              local_78.A = local_268;
              local_78.B = uVar15;
              local_78.DistSq = dVar4;
              if (((local_248.Data <= &local_78) &&
                  (&local_78 < (LinkCandidate *)(local_248.Data + (longlong)(int)uStack_23c * 0x10))
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (local_240 == uStack_23c) {
                local_240 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_248,(int *)&uStack_23c);
              }
              lVar14 = (longlong)(int)local_240;
              local_240 = local_240 + 1;
              *(ulonglong *)(local_248.Data + lVar14 * 0x10) = CONCAT44(local_78.B,local_78.A);
              *(double *)(local_248.Data + lVar14 * 0x10 + 8) = local_78.DistSq;
              lVar19 = local_210;
              puVar21 = local_1f8;
            }
          }
          else {
            iVar16 = `FGeometryCollectionConnectionGraphGenerator::
                     FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_1>::operator()
                               (&local_260,local_250);
            iVar10 = `FGeometryCollectionConnectionGraphGenerator::
                     FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_1>::operator()
                               (&local_260,iVar10);
            if (iVar16 != iVar10) {
              pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_c8,iVar10);
              pUVar13 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_c8,iVar16);
              iVar9 = iVar16;
              if (pUVar12->Size < pUVar13->Size) {
                iVar9 = iVar10;
                iVar10 = iVar16;
              }
              pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_c8,iVar9);
              pUVar12->GroupId = iVar10;
              pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_c8,iVar9);
              iVar16 = pUVar12->Size;
              pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_c8,iVar10);
              pUVar12->Size = pUVar12->Size + iVar16;
              pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_c8,iVar9);
              pUVar12->Size = 0;
            }
            ConnectChildren(local_1f0,&local_238,local_268,uVar15);
            lVar19 = local_210;
            puVar21 = local_1f8;
          }
        }
        puVar27 = puVar27 + 1;
        uVar22 = (ulonglong)local_228;
      }
      local_268 = local_268 + 1;
      local_218 = local_218 + 0x18;
      local_220 = local_220 + 1;
      local_210 = lVar19 + 0x10;
    } while ((int)local_268 < local_1c8.Neighbors.ArrayNum);
  }
  AlgoImpl::
  IntroSortInternal<_FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,int,FIdentityFunctor,TDereferenceWrapper<_FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,_FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::<lambda_3>_>_>
            ((LinkCandidate *)local_248.Data,local_240,local_254[0],(<lambda_3> *)local_254);
  uVar22 = (ulonglong)(int)local_240;
  local_200 = (LinkCandidate *)(local_248.Data + uVar22 * 0x10);
  local_228 = local_240;
  FVar17.Data = local_248.Data;
  while( true ) {
    pLVar6 = local_200;
    if (local_240 != (uint)uVar22) {
      local_255 = 0;
      `TCheckedPointerIterator<`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::LinkCandidate,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_255);
    }
    if ((LinkCandidate *)FVar17.Data == pLVar6) {
      if ((LinkCandidate *)local_248.Data != (LinkCandidate *)0x0) {
        FMemory::Free(local_248.Data);
      }
      local_80 = 0;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,_FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::UnionFindInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_c8);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_1c8.Neighbors.AllocatorInstance.Data,local_1c8.Neighbors.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1c8.Neighbors.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1c8.Neighbors.AllocatorInstance.Data);
      }
      if (local_1c8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Points.AllocatorInstance.Data);
      }
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
      return;
    }
    uVar15 = ((LinkCandidate *)FVar17.Data)->A;
    uVar18 = 0;
    if ((int)uVar15 < local_238.ArrayNum) {
      uVar18 = ~uVar15 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = *(int *)(local_238.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
    uVar15 = ((LinkCandidate *)FVar17.Data)->B;
    uVar18 = 0;
    if ((int)uVar15 < local_238.ArrayNum) {
      uVar18 = ~uVar15 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    iVar16 = *(int *)(local_238.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
    iVar9 = iVar16;
    if (iVar16 != 0) {
      iVar20 = 0;
      pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(this,iVar16);
      if (pUVar12->GroupId != iVar16) {
        do {
          if ((9 < iVar20) &&
             (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7317719928365121392>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConnectionGraphUtility.cpp"
                                 ,0x90,"findIters++ < 10"), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                    ::FindChecked(this,iVar9);
          pUVar13 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                    ::FindChecked(this,pUVar12->GroupId);
          pUVar12->GroupId = pUVar13->GroupId;
          iVar9 = pUVar13->GroupId;
        } while ((iVar9 != 0) &&
                (pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                           ::FindChecked(this,iVar9), iVar20 = iVar20 + 1, pUVar12->GroupId != iVar9
                ));
      }
    }
    iVar20 = iVar10;
    if (iVar10 != 0) {
      iVar28 = 0;
      pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(this,iVar10);
      if (pUVar12->GroupId != iVar10) {
        do {
          if ((9 < iVar28) &&
             (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7317719928365121392>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConnectionGraphUtility.cpp"
                                 ,0x90,"findIters++ < 10"), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                    ::FindChecked(this,iVar20);
          pUVar13 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                    ::FindChecked(this,pUVar12->GroupId);
          pUVar12->GroupId = pUVar13->GroupId;
          iVar20 = pUVar13->GroupId;
        } while ((iVar20 != 0) &&
                (pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                           ::FindChecked(this,iVar20), iVar28 = iVar28 + 1,
                pUVar12->GroupId != iVar20));
      }
    }
    if (iVar20 != iVar9) {
      iVar9 = `FGeometryCollectionConnectionGraphGenerator::
              FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_1>::operator()
                        (&local_260,iVar10);
      iVar10 = `FGeometryCollectionConnectionGraphGenerator::
               FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_1>::operator()
                         (&local_260,iVar16);
      if (iVar9 != iVar10) {
        pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                  ::FindChecked(&local_c8,iVar10);
        pUVar13 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                  ::FindChecked(&local_c8,iVar9);
        iVar16 = iVar9;
        if (pUVar12->Size < pUVar13->Size) {
          iVar16 = iVar10;
          iVar10 = iVar9;
        }
        pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                  ::FindChecked(&local_c8,iVar16);
        pUVar12->GroupId = iVar10;
        pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                  ::FindChecked(&local_c8,iVar16);
        iVar9 = pUVar12->Size;
        pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                  ::FindChecked(&local_c8,iVar10);
        pUVar12->Size = pUVar12->Size + iVar9;
        pUVar12 = TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                  ::FindChecked(&local_c8,iVar16);
        pUVar12->Size = 0;
      }
      ConnectChildren(local_1f0,&local_238,((LinkCandidate *)FVar17.Data)->A,
                      ((LinkCandidate *)FVar17.Data)->B);
    }
    FVar17.Data = FVar17.Data + 0x10;
    uVar22 = (ulonglong)local_228;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// UpdateConnectivityGraph @ 1440537e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGeometryCollectionConnectionGraphGenerator::UpdateConnectivityGraph
          (FGeometryCollection *param_1,int param_2,EClusterUnionMethod param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> local_18
  ;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  uVar3 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_18,
             *(int *)((longlong)param_2 * 0x50 + 8 + param_1->_padding_) -
             *(int *)((longlong)param_2 * 0x50 + 0x34 + param_1->_padding_),Default);
  if ((param_3 != None) && (param_3 != PointImplicit)) {
    if (param_3 == PointImplicitAugmentedWithMinimalDelaunay) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConnectionGraphUtility.cpp"
                         ,0x26,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FixConnectivityGraphUsingDelaunayTriangulation(&local_18,param_1,param_2);
    }
    else {
      if (param_3 == DelaunayTriangulation) {
        ComputeConnectivityGraphUsingDelaunayTriangulation(&local_18,param_1,param_2);
        goto LAB_1440538ea;
      }
      if (param_3 != MinimalSpanningSubsetDelaunayTriangulation) goto LAB_1440538ea;
    }
  }
  FixConnectivityGraphUsingDelaunayTriangulation(&local_18,param_1,param_2);
LAB_1440538ea:
  CommitToCollection(&local_18,param_1,param_2);
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_18.AllocatorInstance.Data !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UpdateConnectivityGraphUsingPointImplicit @ 144053930

void __cdecl
FGeometryCollectionConnectionGraphGenerator::UpdateConnectivityGraphUsingPointImplicit
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *param_1,FGeometryCollection *param_2,int param_3)

{
  return;
}

