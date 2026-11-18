// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// FSearchResults_AssetBests @ 14a9197c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSearchResults_AssetBests * __thiscall
UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests
          (FSearchResults_AssetBests *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  FSearchResults::FSearchResults((FSearchResults *)this);
  *(undefined ***)this = &___7FSearchResults_AssetBests_PoseSearch_UE__6B_;
  *(undefined8 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbc0 = 0;
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbc8 = 0;
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbcc = 4;
  *(undefined8 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbd8 = 0;
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe0 = 0;
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe4 = 0x20;
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe8 = 0xffffffff;
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbec = 0;
  *(undefined8 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbf8 = 0;
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xc00 = 0;
  local_48 = *(longlong *)&this->field_0x10;
  uVar2 = *(undefined8 *)&this->field_0x18;
  local_38 = *(longlong *)&this->field_0x20;
  uStack_30 = *(undefined8 *)&this->field_0x28;
  uVar1 = *(undefined8 *)&this->field_0x30;
  plStack_20 = *(longlong **)&this->field_0x38;
  *(code **)&this->field_0x10 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,void,UE::PoseSearch::FSearchResult_const_&>
       ::Call;
  *(undefined8 *)&this->field_0x18 = uStack_40;
  *(undefined4 *)&this->field_0x20 = 0x52280dd0;
  *(undefined4 *)&this->field_0x24 = 1;
  *(FSearchResults_AssetBests **)&this->field_0x28 = this;
  *(undefined4 *)&this->field_0x30 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x34 = local_28._4_4_;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x3c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x40;
  uVar2 = *(undefined8 *)&this->field_0x48;
  local_38 = *(longlong *)&this->field_0x50;
  uStack_30 = *(undefined8 *)&this->field_0x58;
  uVar1 = *(undefined8 *)&this->field_0x60;
  plStack_20 = *(longlong **)&this->field_0x68;
  *(code **)&this->field_0x40 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,void>
       ::Call;
  *(undefined8 *)&this->field_0x48 = uStack_40;
  *(undefined4 *)&this->field_0x50 = 0x52280df0;
  *(undefined4 *)&this->field_0x54 = 1;
  *(FSearchResults_AssetBests **)&this->field_0x58 = this;
  *(undefined4 *)&this->field_0x60 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x64 = local_28._4_4_;
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x6c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x70;
  uVar2 = *(undefined8 *)&this->field_0x78;
  local_38 = *(longlong *)&this->field_0x80;
  uStack_30 = *(undefined8 *)&this->field_0x88;
  uVar1 = *(undefined8 *)&this->field_0x90;
  plStack_20 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,UE::PoseSearch::FSearchResult>
       ::Call;
  *(undefined8 *)&this->field_0x78 = uStack_40;
  *(undefined4 *)&this->field_0x80 = 0x52280e10;
  *(undefined4 *)&this->field_0x84 = 1;
  *(FSearchResults_AssetBests **)&this->field_0x88 = this;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x94 = local_28._4_4_;
  *(undefined4 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0x9c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xa0;
  uVar2 = *(undefined8 *)&this->field_0xa8;
  local_38 = *(longlong *)&this->field_0xb0;
  uStack_30 = *(undefined8 *)&this->field_0xb8;
  uVar1 = *(undefined8 *)&this->field_0xc0;
  plStack_20 = *(longlong **)&this->field_0xc8;
  *(code **)&this->field_0xa0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,bool,float>
       ::Call;
  *(undefined8 *)&this->field_0xa8 = uStack_40;
  *(undefined4 *)&this->field_0xb0 = 0x52280e30;
  *(undefined4 *)&this->field_0xb4 = 1;
  *(FSearchResults_AssetBests **)&this->field_0xb8 = this;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xc4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xd0;
  uVar2 = *(undefined8 *)&this->field_0xd8;
  local_38 = *(longlong *)&this->field_0xe0;
  uStack_30 = *(undefined8 *)&this->field_0xe8;
  uVar1 = *(undefined8 *)&this->field_0xf0;
  plStack_20 = *(longlong **)&this->field_0xf8;
  *(code **)&this->field_0xd0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
       ::Call;
  *(undefined8 *)&this->field_0xd8 = uStack_40;
  *(undefined4 *)&this->field_0xe0 = 0x52280e50;
  *(undefined4 *)&this->field_0xe4 = 1;
  *(FSearchResults_AssetBests **)&this->field_0xe8 = this;
  *(undefined4 *)&this->field_0xf0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xf4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xf8 = 0;
  *(undefined4 *)&this->field_0xfc = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// operator() @ 14a91ca20

void __thiscall
`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>::operator()
          (void *this,FSearchResult *param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  FPoseSearchCost FVar5;
  undefined3 uVar6;
  bool bVar7;
  uint uVar8;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  FSearchIndexAsset *pFVar9;
  TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
  *this_02;
  FSearchResult *pFVar10;
  uint local_res10 [2];
  UPoseSearchDatabase *local_res18 [2];
  
  if (((*(int *)param_1 == -1) ||
      (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                          &param_1->field_0x4,(void *)0x0), bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SearchResult.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0x160,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)param_1 != -1) &&
     (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &param_1->field_0x4,(void *)0x0), !bVar7)) {
    this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
    this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
    pFVar9 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose
                       ((FSearchIndexBase *)this_01,*(int *)param_1);
    if (pFVar9 != (FSearchIndexAsset *)0x0) {
      lVar2 = *(longlong *)this;
      local_res18[0] =
           (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
      uVar8 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      this_02 = TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                ::FindOrAddImpl<UPoseSearchDatabase_const_*>
                          ((TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                            *)(lVar2 + 0x100),uVar8 >> 0x10 ^ uVar8,local_res18);
      local_res10[0] = pFVar9->SourceAssetIdx;
      pFVar10 = TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                ::FindOrAddImpl<int>
                          ((TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                            *)this_02,local_res10[0],(int *)local_res10);
      fVar1 = (pFVar10->PoseCost).TotalCost;
      if ((param_1->PoseCost).TotalCost <= fVar1 && fVar1 != (param_1->PoseCost).TotalCost) {
        uVar4 = *(undefined4 *)&param_1->field_0x8;
        FVar5.TotalCost = (param_1->PoseCost).TotalCost;
        *(undefined8 *)pFVar10 = *(undefined8 *)param_1;
        *(undefined4 *)&pFVar10->field_0x8 = uVar4;
        pFVar10->PoseCost = (FPoseSearchCost)FVar5.TotalCost;
        fVar1 = param_1->AssetTime;
        pFVar10->EventPoseIdx = param_1->EventPoseIdx;
        pFVar10->AssetTime = fVar1;
        uVar6 = *(undefined3 *)&param_1->field_0x19;
        pFVar10->bIsContinuingPoseSearch = param_1->bIsContinuingPoseSearch;
        *(undefined3 *)&pFVar10->field_0x19 = uVar6;
      }
    }
  }
  return;
}

// operator() @ 14a91db00

void __thiscall
`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>::operator()
          (void *this)

{
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UPoseSearchDatabase *this_00;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FWeakObjectPtr *this_01;
  uint uVar17;
  int iVar18;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar19;
  int iVar20;
  longlong lVar21;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar22;
  float fVar23;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_13c;
  undefined4 uStack_f4;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_e8;
  undefined8 uStack_c8;
  longlong local_c0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  
  lVar13 = *(longlong *)this;
  iVar18 = 0;
  iVar20 = 0;
  uVar9 = 1;
  pTVar1 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)(lVar13 + 0xcd0);
  iVar4 = *(int *)(lVar13 + 0xce0);
  lVar2 = lVar13 + 0x100;
  iVar10 = 0;
  if (iVar4 != 0) {
    pTVar22 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8) ==
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar22 = pTVar1;
    }
    uVar17 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91dbc1;
      uVar17 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar9 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar10 = iVar20 + -1 + local_res18;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14a91dbc1:
  uVar17 = *(uint *)(lVar13 + 0xce0);
  uVar15 = uVar17 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar9,iVar18);
  TStack_b8.CurrentBitIndex = iVar10;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_b8._28_4_ = local_74;
  TStack_b8.BaseBitIndex = iVar20;
  uStack_98 = CONCAT44(uStack_13c,*(int *)(lVar13 + 0xcc8) - *(int *)(lVar13 + 0xcec));
  local_c0 = lVar2;
  TStack_b8.Array = pTVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar7 = __real_7f7fffff;
  uVar9 = *(uint *)(lVar13 + 0xce0);
  if (uVar17 != uVar9) {
    pTVar22 = pTVar1;
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8) !=
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar22 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8)
      ;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91dcf0;
      uVar17 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar17 = local_res20 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar17) {
      uVar17 = uVar9;
    }
  }
LAB_14a91dcf0:
  lVar13 = local_c0;
  if (*(int *)(local_c0 + 0xbc8) - *(int *)(local_c0 + 0xbec) != (int)uStack_98) {
    local_res8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((TStack_b8.CurrentBitIndex == uVar17) && (TStack_b8.Array == pTVar1)) && (lVar13 == lVar2)) {
    return;
  }
  uVar9 = 1;
  if (*(longlong *)(lVar13 + 0xbc0) != 0) {
    lVar13 = *(longlong *)(lVar13 + 0xbc0);
  }
  iVar18 = 0;
  lVar21 = (longlong)TStack_b8.CurrentBitIndex * 0x2f0;
  iVar20 = 0;
  pTVar22 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
            (lVar21 + 0x298 + lVar13);
  lVar12 = lVar21 + 8 + lVar13;
  iVar4 = pTVar22->NumBits;
  iVar11 = 0;
  if (iVar4 != 0) {
    pTVar5 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (pTVar22->AllocatorInstance).SecondaryData.Data;
    pTVar19 = pTVar22;
    if (pTVar5 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar19 = pTVar5;
    }
    uVar15 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91ddd0;
      uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar9 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar11 = iVar20 + -1 + (int)lVar14;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14a91ddd0:
  uVar15 = *(uint *)(lVar21 + 0x2a8 + lVar13);
  uVar16 = uVar15 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar9,iVar18);
  TStack_e8.CurrentBitIndex = iVar11;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_e8._28_4_ = iVar10;
  TStack_e8.BaseBitIndex = iVar20;
  uStack_c8 = CONCAT44(uStack_f4,
                       *(int *)(lVar21 + 0x290 + lVar13) - *(int *)(lVar21 + 0x2b4 + lVar13));
  TStack_e8.Array = pTVar22;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = pTVar22->NumBits;
  if (uVar15 != uVar9) {
    pTVar5 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (pTVar22->AllocatorInstance).SecondaryData.Data;
    pTVar19 = pTVar22;
    if (pTVar5 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar19 = pTVar5;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91def0;
      uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_14a91def0:
  do {
    if (*(int *)(lVar12 + 0x288) - *(int *)(lVar12 + 0x2ac) != (int)uStack_c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar13 = (longlong)TStack_e8.CurrentBitIndex;
    if ((TStack_e8.CurrentBitIndex == uVar15) && (TStack_e8.Array == pTVar22)) break;
    lVar21 = lVar12;
    if (*(longlong *)(lVar12 + 0x280) != 0) {
      lVar21 = *(longlong *)(lVar12 + 0x280);
    }
    if (*(int *)(lVar21 + 4 + lVar13 * 0x28) == -1) {
LAB_14a91df5f:
      this_01 = (FWeakObjectPtr *)(lVar21 + (lVar13 * 5 + 1) * 8);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BestSearchResultForSourceAssetIdx.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0x173,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      this_01 = (FWeakObjectPtr *)(lVar21 + (lVar13 * 5 + 1) * 8);
      bVar8 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)this_01,
                         (void *)0x0);
      if (bVar8) goto LAB_14a91df5f;
    }
    if (fVar7 == *(float *)(lVar21 + 0x18 + lVar13 * 0x28)) {
      this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(this_01);
      fVar23 = UPoseSearchDatabase::GetNormalizedAssetTime
                         (this_00,*(int *)(lVar21 + 4 + lVar13 * 0x28));
      if ((fVar23 == fVar7) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsAssetTimeValid(InAssetTime)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                             ,0x4b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(float *)(lVar21 + 0x18 + lVar13 * 0x28) = fVar23;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&TStack_e8);
  } while( true );
  TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
            (&TStack_b8);
  goto LAB_14a91dcf0;
}

// operator() @ 14a91f1a0

FSearchResult * __thiscall
`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>::operator()
          (void *this,FSearchResult *__return_storage_ptr__)

{
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FSearchResult *pFVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar21;
  int iVar22;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_11c;
  undefined4 uStack_cc;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_c0;
  undefined8 uStack_a0;
  longlong local_98;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar20 = 0;
  *(undefined4 *)__return_storage_ptr__ = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x4 = 0;
  __return_storage_ptr__->bIsContinuingPoseSearch = false;
  iVar22 = 0;
  __return_storage_ptr__->EventPoseIdx = -1;
  uVar12 = 1;
  __return_storage_ptr__->AssetTime = 3.4028235e+38;
  lVar17 = *(longlong *)this;
  (__return_storage_ptr__->PoseCost).TotalCost = 3.4028235e+38;
  pTVar1 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)(lVar17 + 0xcd0);
  iVar8 = *(int *)(lVar17 + 0xce0);
  lVar2 = lVar17 + 0x100;
  iVar13 = iVar22;
  if (iVar8 != 0) {
    pTVar23 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar17 + 0xcd8);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar17 + 0xcd8) ==
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar23 = pTVar1;
    }
    uVar19 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
    iVar22 = 0;
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar20;
      iVar22 = iVar22 + 0x20;
      iVar20 = iVar20 + 1;
      iVar13 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14a91f281;
      uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uVar12 = -uVar19 & uVar19;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    iVar13 = local_res20 + -1 + iVar22;
    if (iVar8 < iVar13) {
      iVar13 = iVar8;
    }
  }
LAB_14a91f281:
  uVar19 = *(uint *)(lVar17 + 0xce0);
  uVar24 = uVar19 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar12,iVar20);
  TStack_90.CurrentBitIndex = iVar13;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar19 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar22;
  uStack_70 = CONCAT44(uStack_11c,*(int *)(lVar17 + 0xcc8) - *(int *)(lVar17 + 0xcec));
  local_res18 = uVar19;
  local_98 = lVar2;
  TStack_90.Array = pTVar1;
  if ((((int)uVar19 < 0) || (iVar8 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar15 = (FSearchResult *)(*pcVar10)();
    return pFVar15;
  }
  uVar12 = *(uint *)(lVar17 + 0xce0);
  if (uVar19 != uVar12) {
    pTVar23 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar17 + 0xcd8);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar17 + 0xcd8) ==
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar23 = pTVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) &
             *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      uVar24 = uVar24 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = uVar12;
      local_res18 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14a91f3b0;
      uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar19 = (int)lVar17 + -1 + uVar24;
    local_res18 = uVar19;
    if ((int)uVar12 < (int)uVar19) {
      uVar19 = uVar12;
      local_res18 = uVar12;
    }
  }
LAB_14a91f3b0:
  do {
    lVar17 = local_98;
    if (*(int *)(local_98 + 0xbc8) - *(int *)(local_98 + 0xbec) != (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar19) && (TStack_90.Array == pTVar1)) && (lVar17 == lVar2))
    {
      return __return_storage_ptr__;
    }
    uVar12 = 1;
    if (*(longlong *)(lVar17 + 0xbc0) != 0) {
      lVar17 = *(longlong *)(lVar17 + 0xbc0);
    }
    iVar20 = 0;
    lVar25 = (longlong)TStack_90.CurrentBitIndex * 0x2f0;
    iVar22 = 0;
    pTVar23 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
              (lVar25 + 0x298 + lVar17);
    lVar16 = lVar25 + 8 + lVar17;
    iVar8 = pTVar23->NumBits;
    iVar14 = 0;
    if (iVar8 != 0) {
      pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (pTVar23->AllocatorInstance).SecondaryData.Data;
      pTVar21 = pTVar23;
      if (pTVar9 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar21 = pTVar9;
      }
      uVar19 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      while (uVar19 == 0) {
        lVar18 = (longlong)iVar20;
        iVar22 = iVar22 + 0x20;
        iVar20 = iVar20 + 1;
        iVar14 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14a91f490;
        uVar19 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar18 * 4 + 4);
      }
      uVar12 = -uVar19 & uVar19;
      uVar3 = (ulonglong)uVar12 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar14 = iVar22 + -1 + (int)lVar18;
      if (iVar8 < iVar14) {
        iVar14 = iVar8;
      }
    }
LAB_14a91f490:
    uVar19 = *(uint *)(lVar25 + 0x2a8 + lVar17);
    uVar24 = uVar19 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uVar12,iVar20);
    TStack_c0.CurrentBitIndex = iVar14;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar19 >> 5;
    TStack_c0._28_4_ = iVar13;
    TStack_c0.BaseBitIndex = iVar22;
    uStack_a0 = CONCAT44(uStack_cc,
                         *(int *)(lVar25 + 0x290 + lVar17) - *(int *)(lVar25 + 0x2b4 + lVar17));
    TStack_c0.Array = pTVar23;
    if ((((int)uVar19 < 0) || (iVar8 < (int)uVar19)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar15 = (FSearchResult *)(*pcVar10)();
      return pFVar15;
    }
    uVar12 = pTVar23->NumBits;
    if (uVar19 != uVar12) {
      pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (pTVar23->AllocatorInstance).SecondaryData.Data;
      pTVar21 = pTVar23;
      if (pTVar9 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar21 = pTVar9;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
      while (uVar19 == 0) {
        lVar17 = (longlong)iVar20;
        uVar24 = uVar24 + 0x20;
        iVar20 = iVar20 + 1;
        uVar19 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14a91f5b0;
        uVar19 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar19 = (int)lVar17 + -1 + uVar24;
      if ((int)uVar12 < (int)uVar19) {
        uVar19 = uVar12;
      }
    }
LAB_14a91f5b0:
    while( true ) {
      if (*(int *)(lVar16 + 0x288) - *(int *)(lVar16 + 0x2ac) != (int)uStack_a0) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      lVar17 = (longlong)TStack_c0.CurrentBitIndex;
      if ((TStack_c0.CurrentBitIndex == uVar19) && (TStack_c0.Array == pTVar23)) break;
      fVar6 = (__return_storage_ptr__->PoseCost).TotalCost;
      lVar25 = lVar16;
      if (*(longlong *)(lVar16 + 0x280) != 0) {
        lVar25 = *(longlong *)(lVar16 + 0x280);
      }
      pfVar4 = (float *)(lVar25 + 0x10 + lVar17 * 0x28);
      if (*pfVar4 <= fVar6 && fVar6 != *pfVar4) {
        puVar5 = (undefined8 *)(lVar25 + 4 + lVar17 * 0x28);
        uVar7 = puVar5[1];
        *(undefined8 *)__return_storage_ptr__ = *puVar5;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar7;
        uVar7 = *(undefined8 *)(lVar25 + 0x14 + lVar17 * 0x28);
        __return_storage_ptr__->EventPoseIdx = (int)uVar7;
        __return_storage_ptr__->AssetTime = (float)(int)((ulonglong)uVar7 >> 0x20);
        *(undefined4 *)&__return_storage_ptr__->bIsContinuingPoseSearch =
             *(undefined4 *)(lVar25 + 0x1c + lVar17 * 0x28);
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                (&TStack_c0);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&TStack_90);
    uVar19 = local_res18;
  } while( true );
}

// operator() @ 14a91f820

bool __thiscall
`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>::operator()
          (void *this,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> *param_1)

{
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar17;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar18;
  int iVar19;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_10c;
  undefined4 uStack_bc;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_b0;
  undefined8 uStack_90;
  longlong local_88;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  lVar13 = *(longlong *)this;
  iVar16 = 0;
  iVar19 = 0;
  uVar9 = 1;
  pTVar1 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)(lVar13 + 0xcd0);
  iVar4 = *(int *)(lVar13 + 0xce0);
  lVar2 = lVar13 + 0x100;
  iVar10 = 0;
  if (iVar4 != 0) {
    pTVar17 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8) ==
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar15 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      iVar19 = iVar19 + 0x20;
      iVar16 = iVar16 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14a91f8df;
      uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar9 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (int)lVar12 + -1 + iVar19;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14a91f8df:
  uVar15 = *(uint *)(lVar13 + 0xce0);
  uVar14 = uVar15 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar9,iVar16);
  TStack_80.CurrentBitIndex = iVar10;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = iVar19;
  uStack_60 = CONCAT44(uStack_10c,*(int *)(lVar13 + 0xcc8) - *(int *)(lVar13 + 0xcec));
  local_res20 = uVar15;
  local_88 = lVar2;
  TStack_80.Array = pTVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = *(uint *)(lVar13 + 0xce0);
  if (uVar15 != uVar9) {
    pTVar17 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8) ==
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar9;
      local_res20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14a91fa10;
      uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    local_res20 = uVar15;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
      local_res20 = uVar9;
    }
  }
LAB_14a91fa10:
  do {
    lVar13 = local_88;
    if (*(int *)(local_88 + 0xbc8) - *(int *)(local_88 + 0xbec) != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar15) && (TStack_80.Array == pTVar1)) && (lVar13 == lVar2))
    {
      return false;
    }
    uVar9 = 1;
    if (*(longlong *)(lVar13 + 0xbc0) != 0) {
      lVar13 = *(longlong *)(lVar13 + 0xbc0);
    }
    iVar16 = 0;
    iVar19 = 0;
    lVar13 = (longlong)TStack_80.CurrentBitIndex * 0x2f0 + lVar13;
    pTVar17 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)(lVar13 + 0x298);
    iVar4 = *(int *)(lVar13 + 0x2a8);
    iVar11 = 0;
    if (iVar4 != 0) {
      pTVar18 = pTVar17;
      if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0x2a0) !=
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar18 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)
                   (lVar13 + 0x2a0);
      }
      uVar15 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
      while (uVar15 == 0) {
        lVar12 = (longlong)iVar16;
        iVar19 = iVar19 + 0x20;
        iVar16 = iVar16 + 1;
        iVar11 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14a91faee;
        uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar9 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = iVar19 + -1 + (int)lVar12;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
    }
LAB_14a91faee:
    uVar15 = *(uint *)(lVar13 + 0x2a8);
    uVar14 = uVar15 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uVar9,iVar16);
    TStack_b0.CurrentBitIndex = iVar11;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar15 >> 5;
    TStack_b0._28_4_ = iVar10;
    TStack_b0.BaseBitIndex = iVar19;
    uStack_90 = CONCAT44(uStack_bc,*(int *)(lVar13 + 0x290) - *(int *)(lVar13 + 0x2b4));
    TStack_b0.Array = pTVar17;
    if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar9 = *(uint *)(lVar13 + 0x2a8);
    if (uVar15 != uVar9) {
      pTVar18 = pTVar17;
      if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0x2a0) !=
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar18 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)
                   (lVar13 + 0x2a0);
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar15 == 0) {
        lVar12 = (longlong)iVar16;
        uVar14 = uVar14 + 0x20;
        iVar16 = iVar16 + 1;
        uVar15 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14a91fc00;
        uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar15 = (int)lVar12 + -1 + uVar14;
      if ((int)uVar9 < (int)uVar15) {
        uVar15 = uVar9;
      }
    }
LAB_14a91fc00:
    while( true ) {
      if (*(int *)(lVar13 + 0x290) - *(int *)(lVar13 + 0x2b4) != (int)uStack_90) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_b0.CurrentBitIndex == uVar15) && (TStack_b0.Array == pTVar17)) break;
      lVar12 = lVar13 + 8;
      if (*(longlong *)(lVar13 + 0x288) != 0) {
        lVar12 = *(longlong *)(lVar13 + 0x288);
      }
      cVar8 = (**(code **)param_1)
                        (*(undefined8 *)&param_1->field_0x8,
                         (longlong)TStack_b0.CurrentBitIndex * 0x28 + 4 + lVar12);
      if (cVar8 != '\0') {
        return true;
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                (&TStack_b0);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&TStack_80);
    uVar15 = local_res20;
  } while( true );
}

// FindSearchResultFor @ 14a929360

FSearchResult * __thiscall
UE::PoseSearch::FSearchResults_AssetBests::FindSearchResultFor
          (FSearchResults_AssetBests *this,UPoseSearchDatabase *param_1,int param_2)

{
  undefined1 *puVar1;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  int iVar3;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *this_00;
  FSearchResult *pFVar4;
  int local_res8 [2];
  
  this_00 = (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
             *)TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
               ::Find((TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                       *)&this->PerDatabaseSourceAssetIdxToBestSearchResult,param_1);
  if (this_00 ==
      (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
       *)0x0) {
    return (FSearchResult *)0x0;
  }
  local_res8[0] = param_2;
  iVar3 = TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<int>(this_00,param_2,local_res8);
  if (iVar3 == -1) {
    return (FSearchResult *)0x0;
  }
  pTVar2 = *(TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
             **)&(this_00->Elements).field_0x280;
  if (pTVar2 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 *)0x0) {
    this_00 = pTVar2;
  }
  puVar1 = &(this_00->Elements).field_0x0 + (longlong)iVar3 * 0x28;
  pFVar4 = (FSearchResult *)(puVar1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    pFVar4 = (FSearchResult *)0x0;
  }
  return pFVar4;
}

// Shrink @ 14a93de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::FSearchResults_AssetBests::Shrink(FSearchResults_AssetBests *this,int param_1)

{
  TMap<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  FSearchResults_AssetBests *pFVar6;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uchar *puVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar *puVar20;
  bool bVar21;
  uint *puVar22;
  FTlsAutoCleanup *pFVar23;
  ForElementType<UE::PoseSearch::FSearchResult> FVar24;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  FSearchIndexAsset *pFVar25;
  TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
  *this_02;
  FSearchResult *pFVar26;
  byte bVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  FSearchResults_AssetBests *pFVar32;
  FSearchResults_AssetBests *pFVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar38;
  ForElementType<UE::PoseSearch::FSearchResult> *pFVar39;
  undefined1 *puVar40;
  int iVar41;
  int iVar42;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar43;
  undefined1 auStackY_388 [32];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336;
  undefined1 local_335;
  undefined1 local_334 [4];
  FSearchResults_AssetBests *local_330;
  undefined8 uStack_328;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *local_320;
  uint uStack_318;
  int iStack_314;
  int local_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  FSearchResults_AssetBests *local_300;
  int local_2f8;
  uint local_2f4;
  FSearchResults_AssetBests *local_2f0;
  int local_2e8;
  uint uStack_2e4;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTStack_2e0;
  uint local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  FMemMark local_2c8;
  FSearchResults_AssetBests *local_2a0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_298;
  undefined8 local_278;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_270;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  UPoseSearchDatabase *local_238;
  FSearchResults_AssetBests *local_230;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_228;
  undefined8 uStack_208;
  FSearchResults_AssetBests *local_200;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_1f8;
  undefined8 uStack_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  FSearchResults_AssetBests *local_1c0;
  longlong lStack_1b8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *local_1b0;
  undefined8 uStack_1a8;
  int iStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_174;
  undefined4 local_154;
  ForElementType<UE::PoseSearch::FSearchResult> local_148;
  uint local_60;
  uint local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pTVar1 = &this->PerDatabaseSourceAssetIdxToBestSearchResult;
  iVar41 = 0;
  puVar2 = &(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbd0;
  local_270._padding_._0_4_ = 0;
  local_270._padding_._4_4_ = 1;
  local_270.UnvisitedBitMask = 0xffffffff;
  local_270.CurrentBitIndex = 0;
  local_270.BaseBitIndex = 0;
  local_300 = this;
  local_2f8 = param_1;
  local_2f0 = (FSearchResults_AssetBests *)pTVar1;
  local_270.Array = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar2;
  if (*(int *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe0 != 0) {
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&local_270);
  }
  uVar36 = *(uint *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe0;
  TStack_298._padding_ = CONCAT44(local_270._padding_._4_4_,(undefined4)local_270._padding_);
  TStack_298.CurrentBitIndex = local_270.CurrentBitIndex;
  TStack_298.UnvisitedBitMask = local_270.UnvisitedBitMask;
  TStack_298._28_4_ = local_270._28_4_;
  TStack_298.BaseBitIndex = local_270.BaseBitIndex;
  local_278 = CONCAT44(local_278._4_4_,
                       *(int *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbc8 -
                       *(int *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbec);
  uVar34 = uVar36 & 0xffffffe0;
  TStack_298.Array = local_270.Array;
  iVar31 = (int)uVar36 >> 5;
  TStack_228.Array = local_270.Array;
  uStack_208 = local_278;
  local_2a0 = (FSearchResults_AssetBests *)pTVar1;
  local_230 = (FSearchResults_AssetBests *)pTVar1;
  TStack_228._padding_ = TStack_298._padding_;
  TStack_228._16_8_ = TStack_298._16_8_;
  TStack_228._24_8_ = TStack_298._24_8_;
  if (((int)uVar36 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar33 = local_2f0;
  uVar35 = *(uint *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe0;
  if (uVar36 != uVar35) {
    puVar40 = *(undefined1 **)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbd8;
    if (puVar40 == (undefined1 *)0x0) {
      puVar40 = puVar2;
    }
    uVar36 = -1 << ((byte)uVar36 & 0x1f) & *(uint *)(puVar40 + (longlong)iVar31 * 4);
    while (uVar36 == 0) {
      lVar28 = (longlong)iVar31;
      uVar34 = uVar34 + 0x20;
      iVar31 = iVar31 + 1;
      uVar36 = uVar35;
      if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
      goto LAB_14a93e000;
      uVar36 = *(uint *)(puVar40 + lVar28 * 4 + 4);
    }
    uVar30 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_250 = (int)lVar28;
    uVar36 = local_250 + -1 + uVar34;
    if ((int)uVar35 < (int)uVar36) {
      uVar36 = uVar35;
    }
  }
LAB_14a93e000:
  while( true ) {
    pFVar32 = local_230;
    if (*(int *)&(local_230->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xac8 -
        *(int *)&(local_230->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xaec !=
        (int)uStack_208) {
      local_338 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_338);
    }
    if (((TStack_228.CurrentBitIndex == uVar36) &&
        (TStack_228.Array ==
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar2)) &&
       (pFVar32 == pFVar33)) break;
    pFVar6 = *(FSearchResults_AssetBests **)
              &(pFVar32->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xac0;
    if (pFVar6 != (FSearchResults_AssetBests *)0x0) {
      pFVar32 = pFVar6;
    }
    iVar41 = iVar41 + (*(int *)(&(pFVar32->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x190
                               + (longlong)TStack_228.CurrentBitIndex * 0x2f0) -
                      *(int *)(&(pFVar32->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x1b4 +
                              (longlong)TStack_228.CurrentBitIndex * 0x2f0));
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&TStack_228);
  }
  if (param_1 < iVar41) {
    puVar22 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_1c8 = local_334;
    local_1d0 = Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar23 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1d0,puVar22);
    local_2c8.Mem = (FMemStackBase *)(pFVar23 + 2);
    local_2c8.Top = (local_2c8.Mem)->Top;
    local_2c8.SavedChunk = *(FTaggedMemory **)(pFVar23 + 4);
    local_2c8.bPopped = false;
    local_2c8.NextTopmostMark = *(FMemMark **)(pFVar23 + 5);
    pFVar23[5] = (FTlsAutoCleanup)&local_2c8;
    *(int *)(pFVar23 + 6) = *(int *)(pFVar23 + 6) + 1;
    local_148.SecondaryData.Data = (FSearchResult *)0x0;
    local_60 = 0;
    local_5c = 8;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (8 < param_1) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
                (0x1c,4,param_1,&local_148,0,(int *)&local_5c);
    }
    pFVar33 = local_300;
    iVar31 = 0;
    local_310 = 0;
    uVar36 = 1;
    puVar2 = &(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbd0;
    iVar41 = *(int *)&(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe0;
    iStack_314 = 0;
    if (iVar41 != 0) {
      puVar22 = *(uint **)&(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbd8;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar2;
      }
      uVar34 = *puVar22;
      while (uVar34 == 0) {
        lVar28 = (longlong)iVar31;
        local_310 = local_310 + 0x20;
        iVar31 = iVar31 + 1;
        iStack_314 = iVar41;
        if ((int)(iVar41 + -1 + (iVar41 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31) goto LAB_14a93e1cd;
        uVar34 = puVar22[lVar28 + 1];
      }
      uVar36 = -uVar34 & uVar34;
      uVar30 = (ulonglong)uVar36 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_24c = (int)lVar28;
      iStack_314 = local_24c + -1 + local_310;
      if (iVar41 < iStack_314) {
        iStack_314 = iVar41;
      }
    }
LAB_14a93e1cd:
    local_330 = (FSearchResults_AssetBests *)&local_300->PerDatabaseSourceAssetIdxToBestSearchResult
    ;
    iStack_308 = *(int *)&(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbc8 -
                 *(int *)&(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbec;
    uVar34 = *(uint *)&(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe0;
    bVar27 = (byte)uVar34 & 0x1f;
    iVar42 = (int)uVar34 >> 5;
    uStack_2e4 = 1 << bVar27;
    uVar35 = -1 << bVar27;
    uVar37 = uVar34 & 0xffffffe0;
    uStack_328 = CONCAT44(uVar36,iVar31);
    uStack_318 = 0xffffffff;
    uStack_30c = local_174;
    TStack_298._padding_ = uStack_328;
    local_278 = CONCAT44(uStack_304,iStack_308);
    TStack_298.UnvisitedBitMask = 0xffffffff;
    TStack_298.CurrentBitIndex = iStack_314;
    TStack_298.BaseBitIndex = local_310;
    TStack_298._28_4_ = local_174;
    local_2e8 = iVar42;
    pTStack_2e0 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar2;
    local_2d8 = uVar35;
    uStack_2d4 = uVar34;
    uStack_2d0 = uVar37;
    local_2a0 = local_330;
    TStack_298.Array = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar2;
    if ((((int)uVar34 < 0) || (iVar41 < (int)uVar34)) &&
       (local_320 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar2,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar36 = *(uint *)&(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbe0;
    if (uVar34 != uVar36) {
      puVar40 = *(undefined1 **)&(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbd8;
      if (puVar40 == (undefined1 *)0x0) {
        puVar40 = puVar2;
      }
      uVar35 = uVar35 & *(uint *)(puVar40 + (longlong)iVar42 * 4);
      while (uVar35 == 0) {
        uStack_2d0 = uVar37 + 0x20;
        local_2e8 = iVar42 + 1;
        if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2e8)
        goto LAB_14a93e328;
        uVar35 = *(uint *)(puVar40 + (longlong)iVar42 * 4 + 4);
        local_2d8 = 0xffffffff;
        iVar42 = local_2e8;
        uVar37 = uStack_2d0;
      }
      uStack_2e4 = -uVar35 & uVar35;
      uVar30 = (ulonglong)uStack_2e4 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_248 = (int)lVar28;
      uStack_2d4 = local_248 + -1 + uVar37;
      if ((int)uVar36 < (int)uStack_2d4) {
LAB_14a93e328:
        uStack_2d4 = uVar36;
      }
    }
    uStack_328 = CONCAT44(uStack_2e4,local_2e8);
    iStack_314 = uStack_2d4;
    uStack_318 = local_2d8;
    uStack_30c = uStack_2cc;
    local_310 = uStack_2d0;
    local_330 = local_2f0;
    iStack_308 = *(int *)&(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbc8 -
                 *(int *)&(local_300->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xbec;
    local_320 = pTStack_2e0;
    local_1c0 = local_2f0;
    uStack_198 = CONCAT44(uStack_304,iStack_308);
    local_1b0 = pTStack_2e0;
    lStack_1b8 = uStack_328;
    uStack_1a8 = _uStack_318;
    local_1a0 = _local_310;
    while( true ) {
      pFVar33 = local_2a0;
      if (*(int *)&(local_2a0->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xac8 -
          *(int *)&(local_2a0->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xaec !=
          (int)local_278) {
        local_337 = 0;
        `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_337);
      }
      pFVar32 = local_2f0;
      if (((TStack_298.CurrentBitIndex == iStack_1a4) && (TStack_298.Array == local_1b0)) &&
         (pFVar33 == local_1c0)) break;
      pFVar32 = *(FSearchResults_AssetBests **)
                 &(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xac0;
      uVar36 = 1;
      if (pFVar32 != (FSearchResults_AssetBests *)0x0) {
        pFVar33 = pFVar32;
      }
      lVar28 = (longlong)TStack_298.CurrentBitIndex * 0x2f0;
      local_310 = 0;
      pTVar43 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                (&(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x198 + lVar28);
      local_300 = (FSearchResults_AssetBests *)(&pFVar33->field_0x8 + lVar28);
      iVar31 = 0;
      iVar41 = pTVar43->NumBits;
      iStack_314 = 0;
      if (iVar41 != 0) {
        pTVar7 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                 (pTVar43->AllocatorInstance).SecondaryData.Data;
        pTVar38 = pTVar43;
        if (pTVar7 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
          pTVar38 = pTVar7;
        }
        uVar34 = *(uint *)(pTVar38->AllocatorInstance).InlineData;
        while (uVar34 == 0) {
          lVar29 = (longlong)iVar31;
          local_310 = local_310 + 0x20;
          iVar31 = iVar31 + 1;
          iStack_314 = iVar41;
          if ((int)(iVar41 + -1 + (iVar41 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31) goto LAB_14a93e47e;
          uVar34 = *(uint *)((pTVar38->AllocatorInstance).InlineData + lVar29 * 4 + 4);
        }
        uVar36 = -uVar34 & uVar34;
        uVar30 = (ulonglong)uVar36 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_244 = (int)lVar29;
        iStack_314 = local_310 + -1 + local_244;
        if (iVar41 < iStack_314) {
          iStack_314 = iVar41;
        }
      }
LAB_14a93e47e:
      local_330 = (FSearchResults_AssetBests *)(&pFVar33->field_0x8 + lVar28);
      uVar34 = *(uint *)(&(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x1a8 +
                        lVar28);
      uVar35 = uVar34 & 0xffffffe0;
      iStack_308 = *(int *)(&(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x190 +
                           lVar28) -
                   *(int *)(&(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x1b4 +
                           lVar28);
      uStack_328 = CONCAT44(uVar36,iVar31);
      uStack_318 = 0xffffffff;
      uStack_30c = local_154;
      TStack_1f8._padding_ = uStack_328;
      iVar31 = (int)uVar34 >> 5;
      uStack_1d8 = CONCAT44(uStack_304,iStack_308);
      TStack_1f8.UnvisitedBitMask = 0xffffffff;
      TStack_1f8.CurrentBitIndex = iStack_314;
      TStack_1f8.BaseBitIndex = local_310;
      TStack_1f8._28_4_ = local_154;
      local_320 = pTVar43;
      local_200 = local_330;
      TStack_1f8.Array = pTVar43;
      if ((((int)uVar34 < 0) || (iVar41 < (int)uVar34)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar36 = pTVar43->NumBits;
      if (uVar34 != uVar36) {
        pTVar7 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                 (pTVar43->AllocatorInstance).SecondaryData.Data;
        pTVar38 = pTVar43;
        if (pTVar7 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
          pTVar38 = pTVar7;
        }
        uVar34 = -1 << ((byte)uVar34 & 0x1f) &
                 *(uint *)((pTVar38->AllocatorInstance).InlineData + (longlong)iVar31 * 4);
        while (uVar34 == 0) {
          lVar28 = (longlong)iVar31;
          uVar35 = uVar35 + 0x20;
          iVar31 = iVar31 + 1;
          uVar34 = uVar36;
          if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
          goto LAB_14a93e5c0;
          uVar34 = *(uint *)((pTVar38->AllocatorInstance).InlineData + lVar28 * 4 + 4);
        }
        uVar30 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
        lVar28 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_240 = (int)lVar28;
        uVar34 = (uVar35 - 1) + local_240;
        if ((int)uVar36 < (int)uVar34) {
          uVar34 = uVar36;
        }
      }
LAB_14a93e5c0:
      while( true ) {
        pFVar33 = local_200;
        if (*(int *)&(local_200->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x188 -
            *(int *)&(local_200->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x1ac !=
            (int)uStack_1d8) {
          local_336 = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_336);
        }
        if (((TStack_1f8.CurrentBitIndex == uVar34) && (TStack_1f8.Array == pTVar43)) &&
           (pFVar33 == local_300)) break;
        pFVar32 = *(FSearchResults_AssetBests **)
                   &(pFVar33->PerDatabaseSourceAssetIdxToBestSearchResult).field_0x180;
        if (pFVar32 != (FSearchResults_AssetBests *)0x0) {
          pFVar33 = pFVar32;
        }
        pFVar39 = (ForElementType<UE::PoseSearch::FSearchResult> *)
                  (&pFVar33->field_0x4 + (longlong)TStack_1f8.CurrentBitIndex * 0x28);
        if ((int)local_60 < local_2f8) {
          FVar24.Data = (FSearchResult *)&local_148;
          if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
              (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
            FVar24.Data = local_148.SecondaryData.Data;
          }
          if (FVar24.Data <= pFVar39) {
            FVar24.Data = (FSearchResult *)&local_148;
            if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
                (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
              FVar24.Data = local_148.SecondaryData.Data;
            }
            if ((pFVar39 < (ForElementType<UE::PoseSearch::FSearchResult> *)
                           (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                            InlineData + (longlong)(int)local_5c * 0x1c)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (local_60 == local_5c) {
            local_60 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
                                 (0x41c,&local_148,(int *)&local_5c);
          }
          lVar28 = (longlong)(int)local_60;
          local_60 = local_60 + 1;
          uVar4 = *(undefined8 *)(pFVar39->InlineData + 8);
          FVar24.Data = (FSearchResult *)&local_148;
          if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
              (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
            FVar24.Data = local_148.SecondaryData.Data;
          }
          *(undefined8 *)
           (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
           lVar28 * 0x1c) = *(undefined8 *)pFVar39->InlineData;
          *(undefined8 *)
           (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
            lVar28 * 0x1c + 8) = uVar4;
          *(undefined8 *)
           (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
           lVar28 * 0x1c + 0x10) = *(undefined8 *)(pFVar39->InlineData + 0x10);
          *(undefined4 *)
           (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
           lVar28 * 0x1c + 0x18) = *(undefined4 *)(pFVar39->InlineData + 0x18);
          FVar24.Data = (FSearchResult *)&local_148;
          if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
              (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
            FVar24.Data = local_148.SecondaryData.Data;
          }
          uVar36 = local_60 - 1;
          while (0 < (int)uVar36) {
            uVar30 = (ulonglong)uVar36;
            uVar36 = (int)(uVar36 - 1) / 2;
            lVar28 = (longlong)(int)uVar36;
            if (*(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                           InlineData + uVar30 * 0x1c + 0xc) <=
                *(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                           InlineData + lVar28 * 0x1c + 0xc)) break;
            uVar5 = *(undefined4 *)
                     (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                     uVar30 * 0x1c + 0x18);
            uVar4 = *(undefined8 *)
                     (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                     uVar30 * 0x1c + 0x10);
            uVar9 = *(undefined8 *)
                     (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                      lVar28 * 0x1c + 8);
            uVar10 = *(undefined8 *)
                      (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                      uVar30 * 0x1c);
            uVar11 = *(undefined8 *)
                      (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                       uVar30 * 0x1c + 8);
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             uVar30 * 0x1c) =
                 *(undefined8 *)
                  (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                  lVar28 * 0x1c);
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
              uVar30 * 0x1c + 8) = uVar9;
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             uVar30 * 0x1c + 0x10) =
                 *(undefined8 *)
                  (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                  lVar28 * 0x1c + 0x10);
            *(undefined4 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             uVar30 * 0x1c + 0x18) =
                 *(undefined4 *)
                  (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                  lVar28 * 0x1c + 0x18);
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             lVar28 * 0x1c) = uVar10;
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
              lVar28 * 0x1c + 8) = uVar11;
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             lVar28 * 0x1c + 0x10) = uVar4;
            *(undefined4 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             lVar28 * 0x1c + 0x18) = uVar5;
          }
        }
        else {
          fVar3 = *(float *)(pFVar39->InlineData + 0xc);
          if (((int)local_60 < 1) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar24.Data = (FSearchResult *)&local_148;
          if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
              (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
            FVar24.Data = local_148.SecondaryData.Data;
          }
          if (fVar3 < *(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                                 InlineData + 0xc)) {
            if (((int)local_60 < 1) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (((int)local_60 < 1) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar41 = local_60 - 1;
            FVar24.Data = (FSearchResult *)&local_148;
            if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
                (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
              FVar24.Data = local_148.SecondaryData.Data;
            }
            if (1 < iVar41) {
              iVar41 = 1;
            }
            if (iVar41 != 0) {
              memmove(FVar24.Data,
                      ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                      (longlong)(int)(local_60 - iVar41) * 0x1c,(longlong)iVar41 * 0x1c);
            }
            uVar36 = local_60 - 1;
            local_60 = uVar36;
            FVar24.Data = (FSearchResult *)&local_148;
            if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
                (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
              FVar24.Data = local_148.SecondaryData.Data;
            }
            iVar41 = 0;
            if (1 < (int)uVar36) {
              do {
                iVar42 = iVar41 * 2;
                iVar31 = iVar42 + 1;
                if (iVar42 + 2 < (int)uVar36) {
                  if (*(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                                 InlineData + (longlong)iVar42 * 0x1c + 0x44) <=
                      *(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                                 InlineData + (longlong)iVar31 * 0x1c + 0xc) &&
                      *(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                                 InlineData + (longlong)iVar31 * 0x1c + 0xc) !=
                      *(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                                 InlineData + (longlong)iVar42 * 0x1c + 0x44)) {
                    iVar31 = iVar42;
                  }
                  iVar31 = iVar31 + 1;
                }
                lVar28 = (longlong)iVar31;
                lVar29 = (longlong)iVar41;
                if (*(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                               InlineData + lVar28 * 0x1c + 0xc) <=
                    *(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                               InlineData + lVar29 * 0x1c + 0xc)) break;
                uVar9 = *(undefined8 *)
                         (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData
                          + lVar28 * 0x1c + 8);
                uVar5 = *(undefined4 *)
                         (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData
                         + lVar29 * 0x1c + 0x18);
                uVar10 = *(undefined8 *)
                          (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                           InlineData + lVar29 * 0x1c);
                uVar11 = *(undefined8 *)
                          (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                           InlineData + lVar29 * 0x1c + 8);
                uVar4 = *(undefined8 *)
                         (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData
                         + lVar29 * 0x1c + 0x10);
                *(undefined8 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                 lVar29 * 0x1c) =
                     *(undefined8 *)
                      (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                      lVar28 * 0x1c);
                *(undefined8 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                  lVar29 * 0x1c + 8) = uVar9;
                *(undefined8 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                 lVar29 * 0x1c + 0x10) =
                     *(undefined8 *)
                      (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                      lVar28 * 0x1c + 0x10);
                *(undefined4 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                 lVar29 * 0x1c + 0x18) =
                     *(undefined4 *)
                      (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                      lVar28 * 0x1c + 0x18);
                *(undefined8 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                 lVar28 * 0x1c) = uVar10;
                *(undefined8 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                  lVar28 * 0x1c + 8) = uVar11;
                *(undefined8 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                 lVar28 * 0x1c + 0x10) = uVar4;
                *(undefined4 *)
                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                 lVar28 * 0x1c + 0x18) = uVar5;
                iVar41 = iVar31;
              } while (iVar31 * 2 + 1 < (int)uVar36);
            }
            FVar24.Data = (FSearchResult *)&local_148;
            if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
                (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
              FVar24.Data = local_148.SecondaryData.Data;
            }
            if (FVar24.Data <= pFVar39) {
              FVar24.Data = (FSearchResult *)&local_148;
              if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
                  (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
                FVar24.Data = local_148.SecondaryData.Data;
              }
              if ((pFVar39 < (ForElementType<UE::PoseSearch::FSearchResult> *)
                             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                              InlineData + (longlong)(int)local_5c * 0x1c)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if (local_60 == local_5c) {
              local_60 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
                                   (0x41c,&local_148,(int *)&local_5c);
            }
            lVar28 = (longlong)(int)local_60;
            local_60 = local_60 + 1;
            uVar4 = *(undefined8 *)(pFVar39->InlineData + 8);
            FVar24.Data = (FSearchResult *)&local_148;
            if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
                (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
              FVar24.Data = local_148.SecondaryData.Data;
            }
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             lVar28 * 0x1c) = *(undefined8 *)pFVar39->InlineData;
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
              lVar28 * 0x1c + 8) = uVar4;
            *(undefined8 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             lVar28 * 0x1c + 0x10) = *(undefined8 *)(pFVar39->InlineData + 0x10);
            *(undefined4 *)
             (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
             lVar28 * 0x1c + 0x18) = *(undefined4 *)(pFVar39->InlineData + 0x18);
            FVar24.Data = (FSearchResult *)&local_148;
            if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
                (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
              FVar24.Data = local_148.SecondaryData.Data;
            }
            uVar36 = local_60 - 1;
            while (0 < (int)uVar36) {
              uVar30 = (ulonglong)uVar36;
              uVar36 = (int)(uVar36 - 1) / 2;
              lVar28 = (longlong)(int)uVar36;
              if (*(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                             InlineData + uVar30 * 0x1c + 0xc) <=
                  *(float *)(((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                             InlineData + lVar28 * 0x1c + 0xc)) break;
              uVar5 = *(undefined4 *)
                       (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                       uVar30 * 0x1c + 0x18);
              uVar4 = *(undefined8 *)
                       (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                       uVar30 * 0x1c + 0x10);
              uVar9 = *(undefined8 *)
                       (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                        lVar28 * 0x1c + 8);
              uVar10 = *(undefined8 *)
                        (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData
                        + uVar30 * 0x1c);
              uVar11 = *(undefined8 *)
                        (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData
                         + uVar30 * 0x1c + 8);
              *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
               uVar30 * 0x1c) =
                   *(undefined8 *)
                    (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                    lVar28 * 0x1c);
              *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                uVar30 * 0x1c + 8) = uVar9;
              *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
               uVar30 * 0x1c + 0x10) =
                   *(undefined8 *)
                    (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                    lVar28 * 0x1c + 0x10);
              *(undefined4 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
               uVar30 * 0x1c + 0x18) =
                   *(undefined4 *)
                    (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                    lVar28 * 0x1c + 0x18);
              *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
               lVar28 * 0x1c) = uVar10;
              *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                lVar28 * 0x1c + 8) = uVar11;
              *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
               lVar28 * 0x1c + 0x10) = uVar4;
              *(undefined4 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
               lVar28 * 0x1c + 0x18) = uVar5;
            }
          }
        }
        TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&TStack_1f8);
      }
      TStack_298.UnvisitedBitMask = TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                (&TStack_298);
    }
    TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
    ::Reset((TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
             *)local_2f0);
    uVar36 = local_60;
    uVar30 = (ulonglong)(int)local_60;
    FVar24.Data = (FSearchResult *)&local_148;
    if ((ForElementType<UE::PoseSearch::FSearchResult> *)local_148.SecondaryData.Data !=
        (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
      FVar24.Data = local_148.SecondaryData.Data;
    }
    lVar28 = uVar30 * 0x1c;
    puVar12 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData;
    while( true ) {
      if ((uint)uVar30 != uVar36) {
        local_335 = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FSearchResult,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_335);
      }
      if ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data ==
          (ForElementType<UE::PoseSearch::FSearchResult> *)(puVar12 + lVar28)) break;
      if ((*(int *)((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData == -1)
         || (bVar21 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                                 (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->
                                  InlineData + 4),(void *)0x0), bVar21)) {
        pFVar25 = (FSearchIndexAsset *)0x0;
LAB_14a93ec70:
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("SearchIndexAsset",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                            ,0x1dc,L"");
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        this_00 = (UPoseSearchDatabase *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data
                                       )->InlineData + 4));
        this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
        pFVar25 = FSearchIndexBase::GetAssetForPose
                            ((FSearchIndexBase *)this_01,
                             *(int *)((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)
                                     ->InlineData);
        if (pFVar25 == (FSearchIndexAsset *)0x0) goto LAB_14a93ec70;
      }
      local_238 = (UPoseSearchDatabase *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data
                                       )->InlineData + 4));
      uVar34 = ((uint)((ulonglong)local_238 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_238 >> 4)) *
               -0x7a143595;
      uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
      this_02 = TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                ::FindOrAddImpl<UPoseSearchDatabase_const_*>
                          ((TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                            *)pFVar32,uVar34 >> 0x10 ^ uVar34,&local_238);
      local_2f4 = pFVar25->SourceAssetIdx;
      pFVar26 = TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                ::FindOrAddImpl<int>
                          ((TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                            *)this_02,local_2f4,(int *)&local_2f4);
      uVar13 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[1];
      uVar14 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[2];
      uVar15 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[3];
      uVar16 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[4];
      uVar17 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[5];
      uVar18 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[6];
      uVar19 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[7];
      uVar4 = *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData + 8);
      pFVar26->field_0x0 =
           ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[0];
      pFVar26->field_0x1 = uVar13;
      pFVar26->field_0x2 = uVar14;
      pFVar26->field_0x3 = uVar15;
      pFVar26->field_0x4 = uVar16;
      pFVar26->field_0x5 = uVar17;
      pFVar26->field_0x6 = uVar18;
      pFVar26->field_0x7 = uVar19;
      *(undefined8 *)&pFVar26->field_0x8 = uVar4;
      uVar4 = *(undefined8 *)
               (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData + 0x10);
      pFVar26->EventPoseIdx = (int)uVar4;
      pFVar26->AssetTime = (float)(int)((ulonglong)uVar4 >> 0x20);
      puVar20 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData;
      uVar13 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[0x19];
      uVar14 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[0x1a];
      uVar15 = ((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData[0x1b];
      FVar24.Data = (FSearchResult *)
                    (((ForElementType<UE::PoseSearch::FSearchResult> *)FVar24.Data)->InlineData +
                    0x1c);
      pFVar26->bIsContinuingPoseSearch = (bool)puVar20[0x18];
      pFVar26->field_0x19 = uVar13;
      pFVar26->field_0x1a = uVar14;
      pFVar26->field_0x1b = uVar15;
      uVar30 = (ulonglong)local_60;
    }
    if (local_2c8.bPopped == false) {
      if (((local_2c8.Mem)->TopMark != &local_2c8) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mem.TopMark == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                              ,0x215,L""), bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_2c8.bPopped = true;
      (local_2c8.Mem)->NumMarks = (local_2c8.Mem)->NumMarks + -1;
      if (local_2c8.SavedChunk != (local_2c8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_2c8.Mem,local_2c8.SavedChunk);
      }
      (local_2c8.Mem)->Top = local_2c8.Top;
      (local_2c8.Mem)->TopMark = local_2c8.NextTopmostMark;
    }
  }
  return;
}

