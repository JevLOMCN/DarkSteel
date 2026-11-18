// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 4

// FindNeighbors<TArrayView<float_const_,int>,UE::PoseSearch::FVPTreeDataSource,UE::PoseSearch::FVPTreeResultSet> @ 14a8a29f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FVPTree::
FindNeighbors<TArrayView<float_const_,int>,UE::PoseSearch::FVPTreeDataSource,UE::PoseSearch::FVPTreeResultSet>
          (FVPTree *this,TArrayView<float_const_,int> *param_1,FVPTreeResultSet *param_2,
          FVPTreeDataSource *param_3)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FSearchIndex *pFVar2;
  ForElementType<UE::PoseSearch::FIndexDistance> FVar3;
  code *pcVar4;
  float *pfVar5;
  undefined8 uVar6;
  FVPTree *pFVar7;
  FVPTreeDataSource *pFVar8;
  TArrayView<float_const_,int> *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ForElementType<int> FVar14;
  longlong lVar15;
  FIndexDistance *pFVar16;
  uint uVar17;
  longlong lVar18;
  ForElementType<UE::PoseSearch::FIndexDistance> this_00;
  HeapCompare *pHVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_928 [32];
  HeapCompare local_8f8;
  HeapCompare local_8f7;
  HeapCompare local_8f6 [2];
  FIndexDistance local_8f4;
  FIndexDistance local_8e8;
  FIndexDistance local_8e0;
  FVPTree *local_8d8;
  FVPTreeDataSource *local_8d0;
  TArrayView<float_const_,int> *local_8c8;
  float *local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  TArrayView<float_const_,int> local_8a8;
  TArrayView<float_const_,int> local_898;
  ForElementType<int> local_888;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_928;
  local_888.SecondaryData = (ForElementType<int>)0x0;
  local_80 = 1;
  local_888.InlineData[0] = '\0';
  local_888.InlineData[1] = '\0';
  local_888.InlineData[2] = '\0';
  local_888.InlineData[3] = '\0';
  local_7c = 0x200;
  fVar22 = __real_7f7fc99e;
  local_8d8 = this;
  local_8d0 = param_3;
  local_8c8 = param_1;
  do {
    pTVar9 = local_8c8;
    pFVar8 = local_8d0;
    pFVar7 = local_8d8;
    if ((local_80 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = local_80 + -1;
    FVar14 = (ForElementType<int>)&local_888;
    if (local_888.SecondaryData != (ForElementType<int>)0x0) {
      FVar14 = local_888.SecondaryData;
    }
    uVar13 = *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
    lVar18 = (longlong)(int)uVar13;
    FVar14 = (ForElementType<int>)&local_888;
    if (local_888.SecondaryData != (ForElementType<int>)0x0) {
      FVar14 = local_888.SecondaryData;
    }
    _Dst = (void *)((longlong)FVar14 + (longlong)iVar11 * 4);
    iVar11 = (local_80 - iVar11) + -1;
    if (iVar11 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar11 << 2);
    }
    local_80 = local_80 + -1;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_888,local_80,&local_7c);
    uVar17 = 0;
    if ((int)uVar13 < (pFVar7->Nodes).ArrayNum) {
      uVar17 = ~uVar13 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (pFVar7->Nodes).AllocatorInstance.Data;
    pfVar5 = pTVar9->DataPtr;
    uVar6._0_4_ = pTVar9->ArrayNum;
    uVar6._4_4_ = *(undefined4 *)&pTVar9->field_0xc;
    iVar11 = *(int *)(pFVar1 + lVar18 * 0x10);
    iVar12 = FSearchIndex::GetNumDimensions(pFVar8->SearchIndex);
    pFVar2 = pFVar8->SearchIndex;
    if (((int)pFVar2->_padding_ == 0) || (iVar11 < 0)) {
LAB_14a8a2bfa:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsValuesEmpty() && ValuesVectorIdx >= 0 && ValuesVectorIdx < GetNumValuesVectors(DataCardinality)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                          ,0x22f,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      if ((iVar12 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("DataCardinality > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                              ,0x212,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((int)pFVar2->_padding_ % iVar12 != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Values.Num() % DataCardinality == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                              ,0x213,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)pFVar2->_padding_ / iVar12 <= iVar11) goto LAB_14a8a2bfa;
    }
    uVar17 = iVar12 * iVar11;
    uVar13 = 0;
    if ((int)uVar17 < (int)pFVar2->_padding_) {
      uVar13 = ~uVar17 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_8b8 = (float *)(pFVar2->_padding_ + (longlong)(int)uVar17 * 4);
    iStack_8b0 = iVar12;
    if ((iVar12 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_898._12_4_ = uStack_8ac;
    local_898.ArrayNum = iStack_8b0;
    local_898.DataPtr = local_8b8;
    local_8a8.DataPtr = pfVar5;
    local_8a8._8_8_ = uVar6;
    fVar20 = FVPTreeDataSource::GetDistance(&local_898,&local_8a8);
    if (fVar20 <= fVar22) {
      this_00 = (ForElementType<UE::PoseSearch::FIndexDistance>)&param_2->Heap;
      iVar11 = *(int *)(pFVar1 + lVar18 * 0x10);
      if ((param_2->Heap).ArrayNum == param_2->NumNeighbors) {
        fVar21 = FVPTreeResultSet::GetWorstDistance(param_2);
        if (fVar20 < fVar21) {
          local_8e8.Index = -1;
          local_8e8.Distance = 0.0;
          TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
          ::HeapPop<UE::PoseSearch::FVPTreeResultSet::HeapCompare>
                    ((TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                      *)this_00,&local_8e8,&local_8f7,Default);
          pHVar19 = local_8f6;
          pFVar16 = &local_8e0;
          local_8e0.Index = iVar11;
          local_8e0.Distance = fVar20;
          goto LAB_14a8a2d43;
        }
      }
      else {
        pHVar19 = &local_8f8;
        pFVar16 = &local_8f4;
        local_8f4.Index = iVar11;
        local_8f4.Distance = fVar20;
LAB_14a8a2d43:
        TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
        ::HeapPush<UE::PoseSearch::FVPTreeResultSet::HeapCompare>
                  ((TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *)this_00,pFVar16,pHVar19);
      }
      iVar11 = (param_2->Heap).ArrayNum;
      if (iVar11 == param_2->NumNeighbors) {
        if ((iVar11 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (param_2->Heap).AllocatorInstance.SecondaryData;
        if (FVar3 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
          this_00 = FVar3;
        }
        fVar22 = *(float *)((longlong)this_00 + 4);
      }
    }
    if ((*(int *)(pFVar1 + lVar18 * 0x10 + 8) != -1) &&
       (fVar20 < fVar22 + *(float *)(pFVar1 + lVar18 * 0x10 + 4))) {
      iVar11 = local_80;
      if (local_80 == local_7c) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_888,&local_7c);
      }
      local_80 = iVar11 + 1;
      FVar14 = (ForElementType<int>)&local_888;
      if (local_888.SecondaryData != (ForElementType<int>)0x0) {
        FVar14 = local_888.SecondaryData;
      }
      *(undefined4 *)((longlong)FVar14 + (longlong)iVar11 * 4) =
           *(undefined4 *)(pFVar1 + lVar18 * 0x10 + 8);
      if ((0x200 < local_80) && (2 < (byte)LogPoseSearch._0_1_)) {
        Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_UE::PoseSearch::FVPTree::FindNeighbors<TArrayView<float_const_,int>,UE::PoseSearch::FVPTreeDataSource,UE::PoseSearch::FVPTreeResultSet>(TArrayView<float_const_,int>_const&___ptr64,UE::PoseSearch::FVPTreeResultSet&___ptr64,UE::PoseSearch::FVPTreeDataSource_const&___ptr64)const___ptr64'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      }
    }
    if ((*(int *)(pFVar1 + lVar18 * 0x10 + 0xc) != -1) &&
       (*(float *)(pFVar1 + lVar18 * 0x10 + 4) - fVar22 <= fVar20)) {
      if (local_80 == local_7c) {
        local_80 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_888,&local_7c);
      }
      lVar15 = (longlong)local_80;
      local_80 = local_80 + 1;
      FVar14 = (ForElementType<int>)&local_888;
      if (local_888.SecondaryData != (ForElementType<int>)0x0) {
        FVar14 = local_888.SecondaryData;
      }
      *(undefined4 *)((longlong)FVar14 + lVar15 * 4) = *(undefined4 *)(pFVar1 + lVar18 * 0x10 + 0xc)
      ;
      if ((0x200 < local_80) && (2 < (byte)LogPoseSearch._0_1_)) {
        Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_UE::PoseSearch::FVPTree::FindNeighbors<TArrayView<float_const_,int>,UE::PoseSearch::FVPTreeDataSource,UE::PoseSearch::FVPTreeResultSet>(TArrayView<float_const_,int>_const&___ptr64,UE::PoseSearch::FVPTreeResultSet&___ptr64,UE::PoseSearch::FVPTreeDataSource_const&___ptr64)const___ptr64'
                    ::__l33::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      }
    }
    if (local_80 == 0) {
      if (local_888.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_888.SecondaryData);
      }
      return;
    }
  } while( true );
}

// operator== @ 14a91bf10

bool __thiscall UE::PoseSearch::FVPTree::operator==(FVPTree *this,FVPTree *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->Nodes).ArrayNum;
  if (iVar1 == (param_1->Nodes).ArrayNum) {
    bVar2 = CompareItems<UE::PoseSearch::FVPTreeNode,int>
                      ((FVPTreeNode *)(this->Nodes).AllocatorInstance.Data,
                       (FVPTreeNode *)(param_1->Nodes).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// GetAllocatedSize @ 14a92ad50

ulong64 __thiscall UE::PoseSearch::FVPTree::GetAllocatedSize(FVPTree *this)

{
  return (longlong)(this->Nodes).ArrayMax << 4;
}

// Reset @ 14a93acc0

void __thiscall UE::PoseSearch::FVPTree::Reset(FVPTree *this)

{
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,&(this->Nodes).ArrayMax);
  }
  return;
}

