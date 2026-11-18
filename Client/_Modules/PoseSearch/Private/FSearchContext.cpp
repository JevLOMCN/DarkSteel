// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 39

// FSearchContext @ 14a8abed0

FSearchContext * __thiscall
UE::PoseSearch::FSearchContext::FSearchContext
          (FSearchContext *this,float param_1,FFloatInterval *param_2,FPoseSearchEvent *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  *this_00;
  undefined1 *puVar3;
  longlong lVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar13 = 0;
  this_00 = &this->BestPoseCandidatesMap;
  (this->AnimContexts).AllocatorInstance.SecondaryData.Data = (FChooserEvaluationContext **)0x0;
  (this->AnimContexts).ArrayNum = 0;
  (this->AnimContexts).ArrayMax = 4;
  (this->PoseHistories).AllocatorInstance.SecondaryData.Data = (IPoseHistory **)0x0;
  (this->PoseHistories).ArrayNum = 0;
  (this->PoseHistories).ArrayMax = 4;
  *(undefined8 *)&this->RoleToIndex = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x10 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x18 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x20 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x28 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x30 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x38 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x40 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x48 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x50 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x58 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x60 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x68 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x70 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x78 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x80 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x88 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x90 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x5c = 4;
  *(undefined4 *)&(this->RoleToIndex).field_0x74 = 0x20;
  *(undefined4 *)&(this->RoleToIndex).field_0x78 = 0xffffffff;
  (this->AssetsToConsider_DEPRECATED).ArrayNum = 0;
  (this->AssetsToConsider_DEPRECATED).ArrayMax = 0;
  (this->AssetsToConsider_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->AssetsToConsider =
       (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
        *)0x0;
  fVar5 = param_3->TimeToEvent;
  bVar6 = param_3->bEnablePoseFilters;
  bVar7 = param_3->bUsePlayRateRangeOverride;
  sVar8 = param_3->_padding_;
  (this->EventToSearch).EventTag.TagName = (param_3->EventTag).TagName;
  (this->EventToSearch).TimeToEvent = fVar5;
  (this->EventToSearch).bEnablePoseFilters = bVar6;
  (this->EventToSearch).bUsePlayRateRangeOverride = bVar7;
  (this->EventToSearch)._padding_ = sVar8;
  (this->EventToSearch).PlayRateRangeOverride = param_3->PlayRateRangeOverride;
  this->DesiredPermutationTimeOffset = param_1;
  *(undefined2 *)&(this->ContinuingPoseSearchResult).field_0x19 = 0;
  (this->ContinuingPoseSearchResult).field_0x1b = 0;
  *(undefined4 *)&this->ContinuingPoseSearchResult = 0xffffffff;
  *(undefined8 *)&(this->ContinuingPoseSearchResult).field_0x4 = 0;
  (this->ContinuingPoseSearchResult).EventPoseIdx = -1;
  (this->ContinuingPoseSearchResult).AssetTime = 3.4028235e+38;
  (this->ContinuingPoseSearchResult).bIsContinuingPoseSearch = false;
  (this->ContinuingPoseSearchResult).PoseCost.TotalCost = 3.4028235e+38;
  (this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx = -1;
  (this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr = (FWeakObjectPtr)0x0;
  this->PoseJumpThresholdTime = *param_2;
  (this->ContinuingPoseValues).DataPtr = (float *)0x0;
  (this->ContinuingPoseValues).ArrayNum = 0;
  (this->ContinuingPoseValuesData).AllocatorInstance.Data = (float *)0x0;
  (this->ContinuingPoseValuesData).ArrayNum = 0;
  (this->ContinuingPoseValuesData).ArrayMax = 0;
  *(undefined8 *)&(this->CachedTransforms).field_0x2000 = 0;
  this->bUseCachedChannelData = false;
  *(undefined4 *)&(this->CachedTransforms).field_0x2010 = 0;
  *(undefined4 *)&(this->CachedTransforms).field_0x2014 = 0x40;
  *(undefined8 *)&(this->CachedTransforms).field_0x2028 = 0;
  *(undefined4 *)&(this->CachedTransforms).field_0x2030 = 0;
  *(undefined4 *)&(this->CachedTransforms).field_0x2034 = 0x40;
  *(undefined4 *)&(this->CachedTransforms).field_0x2038 = 0xffffffff;
  *(undefined4 *)&(this->CachedTransforms).field_0x203c = 0;
  *(undefined8 *)&(this->CachedTransforms).field_0x20c0 = 0;
  *(undefined4 *)&(this->CachedTransforms).field_0x20c8 = 0;
  (this->CachedQueries).AllocatorInstance.SecondaryData.Data = (FCachedQuery *)0x0;
  (this->CachedQueries).ArrayNum = 0;
  (this->CachedQueries).ArrayMax = 8;
  (this->CachedPCAQueries).AllocatorInstance.SecondaryData.Data = (FCachedPCAQuery *)0x0;
  (this->CachedPCAQueries).ArrayNum = 0;
  (this->CachedPCAQueries).ArrayMax = 8;
  *(undefined8 *)&(this->CachedChannels).field_0x800 = 0;
  *(undefined4 *)&(this->CachedChannels).field_0x808 = 0;
  *(undefined4 *)&(this->CachedChannels).field_0x80c = 0x40;
  *(undefined8 *)&(this->CachedChannels).field_0x818 = 0;
  *(undefined4 *)&(this->CachedChannels).field_0x820 = 0;
  *(undefined4 *)&(this->CachedChannels).field_0x824 = 0x40;
  *(undefined4 *)&(this->CachedChannels).field_0x828 = 0xffffffff;
  *(undefined4 *)&(this->CachedChannels).field_0x82c = 0;
  *(undefined8 *)&(this->CachedChannels).field_0x8b0 = 0;
  *(undefined4 *)&(this->CachedChannels).field_0x8b8 = 0;
  this->bIsContinuingInteraction = false;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->BestPoseCandidatesMap).field_0x8 = 0;
  *(undefined8 *)&(this->BestPoseCandidatesMap).field_0x20 = 0;
  *(undefined4 *)&(this->BestPoseCandidatesMap).field_0x28 = 0;
  *(undefined4 *)&(this->BestPoseCandidatesMap).field_0x2c = 0x80;
  puVar1 = &(this->BestPoseCandidatesMap).field_0x48;
  *(undefined4 *)&(this->BestPoseCandidatesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BestPoseCandidatesMap).field_0x34 = 0;
  *(undefined8 *)&(this->BestPoseCandidatesMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0x10);
  for (lVar4 = 0x3f; 0x1fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  uVar18 = 1 << ((byte)lVar4 & 0x1f);
  if ((*(int *)puVar1 != 0) && ((int)uVar18 <= *(int *)puVar1)) {
    return this;
  }
  puVar2 = &(this->BestPoseCandidatesMap).field_0x38;
  *(uint *)puVar1 = uVar18;
  if (*(longlong *)&(this->BestPoseCandidatesMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->BestPoseCandidatesMap).field_0x40,0,0,4);
  }
  if (uVar18 == 0) goto LAB_14a8ac1e5;
  uVar14 = uVar18;
  if (uVar18 < 2) {
    if (*(longlong *)&(this->BestPoseCandidatesMap).field_0x40 != 0) {
      uVar14 = 0;
      goto LAB_14a8ac19b;
    }
  }
  else {
LAB_14a8ac19b:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->BestPoseCandidatesMap).field_0x40,0,uVar14,4);
  }
  if (0 < (int)uVar18) {
    uVar15 = (ulonglong)uVar18;
    uVar11 = uVar13;
    do {
      puVar3 = *(undefined1 **)&(this->BestPoseCandidatesMap).field_0x40;
      puVar10 = puVar2;
      if (puVar3 != (undefined1 *)0x0) {
        puVar10 = puVar3;
      }
      uVar9 = (longlong)(int)uVar18 - 1U & uVar11;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(puVar10 + uVar9 * 4) = 0xffffffff;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
LAB_14a8ac1e5:
  if (*(int *)puVar1 != 0) {
    uVar18 = *(uint *)&(this->BestPoseCandidatesMap).field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->BestPoseCandidatesMap).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar18 != 0) {
      puVar16 = *(uint **)&(this->BestPoseCandidatesMap).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)local_50.Array;
      }
      uVar14 = *puVar16;
      uVar11 = uVar13;
      while (uVar14 == 0) {
        iVar12 = (int)uVar13;
        uStack_60 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_60;
        local_78 = iVar12 + 1;
        uVar13 = (ulonglong)local_78;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14a8ac28c;
        uVar14 = puVar16[(longlong)iVar12 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar13 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar4;
      uVar13 = (ulonglong)uStack_64;
      if ((int)uVar18 < (int)uStack_64) {
LAB_14a8ac28c:
        uVar13 = (ulonglong)uVar18;
        uStack_64 = uVar18;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar13 < (int)uVar18) {
      do {
        lVar4 = *(longlong *)&this_00->field_0x0;
        lVar17 = (longlong)(int)uVar13 * 0x70;
        uVar18 = ((uint)(*(ulonglong *)(lVar17 + lVar4) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar17 + lVar4) >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = (uVar18 >> 0x10 ^ uVar18) & *(int *)puVar1 - 1U;
        *(uint *)(lVar17 + 0x6c + lVar4) = uVar18;
        puVar3 = *(undefined1 **)&(this->BestPoseCandidatesMap).field_0x40;
        puVar10 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        uVar11 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar18;
        *(undefined4 *)(lVar17 + 0x68 + lVar4) = *(undefined4 *)(puVar10 + uVar11 * 4);
        *(int *)(puVar10 + uVar11 * 4) = (int)uVar13;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar13 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// FSearchContext @ 14a8ac370

FSearchContext * __thiscall
UE::PoseSearch::FSearchContext::FSearchContext
          (FSearchContext *this,float param_1,FPoseIndicesHistory *param_2,FSearchResult *param_3,
          FFloatInterval *param_4,FPoseSearchEvent *param_5)

{
  FPoseSearchEvent local_28;
  
  local_28.EventTag.TagName.ComparisonIndex.Value = 0;
  local_28.EventTag.TagName.Number = 0;
  local_28.TimeToEvent = 0.0;
  local_28.bEnablePoseFilters = false;
  local_28.bUsePlayRateRangeOverride = true;
  local_28._padding_ = 0;
  local_28.PlayRateRangeOverride._0_4_ = 0x3f800000;
  local_28.PlayRateRangeOverride._4_4_ = 0x3f800000;
  FSearchContext(this,param_1,param_4,&local_28);
  UpdateContinuingPoseSearchResult(this,param_3,(FDatabasePoseIdx *)param_3);
  return this;
}

// FSearchContext @ 14a8ac3e0

FSearchContext * __thiscall
UE::PoseSearch::FSearchContext::FSearchContext
          (FSearchContext *this,float param_1,FPoseIndicesHistory *param_2,FSearchResult *param_3,
          FFloatInterval *param_4,bool param_5)

{
  FPoseSearchEvent local_28;
  
  local_28.EventTag.TagName.ComparisonIndex.Value = 0;
  local_28.EventTag.TagName.Number = 0;
  local_28.TimeToEvent = 0.0;
  local_28.bEnablePoseFilters = false;
  local_28.bUsePlayRateRangeOverride = true;
  local_28._padding_ = 0;
  local_28.PlayRateRangeOverride._0_4_ = 0x3f800000;
  local_28.PlayRateRangeOverride._4_4_ = 0x3f800000;
  FSearchContext(this,param_1,param_4,&local_28);
  UpdateContinuingPoseSearchResult(this,param_3,(FDatabasePoseIdx *)param_3);
  return this;
}

// ~FSearchContext @ 14a8adc50

void __thiscall UE::PoseSearch::FSearchContext::~FSearchContext(FSearchContext *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->BestPoseCandidatesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BestPoseCandidatesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BestPoseCandidatesMap);
  *(undefined4 *)&(this->CachedChannels).field_0x8b8 = 0;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              *)&this->CachedChannels);
  *(undefined4 *)&(this->CachedTransforms).field_0x20c8 = 0;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              *)&this->CachedTransforms);
  pFVar2 = (this->AssetsToConsider_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->RoleToIndex).field_0x90 = 0;
  pvVar1 = *(void **)&(this->RoleToIndex).field_0x88;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->RoleToIndex);
  return;
}

// AddRole @ 14a8b09b0

void __thiscall
UE::PoseSearch::FSearchContext::AddRole
          (FSearchContext *this,FName *param_1,FChooserEvaluationContext *param_2,
          IPoseHistory *param_3)

{
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *this_00;
  int *piVar1;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar2;
  int iVar3;
  FSearchContext *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSearchContext *pFVar8;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar9;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar10;
  TKeyInitializer<FName_const_&> local_res8;
  FName *local_res10;
  FChooserEvaluationContext *local_res18;
  IPoseHistory *local_res20;
  
  this_00 = &this->RoleToIndex;
  iVar7 = *(int *)&(this->RoleToIndex).field_0x58 - *(int *)&(this->RoleToIndex).field_0x7c;
  local_res18 = param_2;
  local_res20 = param_3;
  if (((iVar7 != (this->AnimContexts).ArrayNum) || (iVar7 != (this->PoseHistories).ArrayNum)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RoleToIndex.Num() == AnimContexts.Num() && RoleToIndex.Num() == PoseHistories.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x385,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_res18 == (FChooserEvaluationContext *)0x0) || (local_res20 == (IPoseHistory *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimContext && PoseHistory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x386,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (FSearchContext *)(this->AnimContexts).AllocatorInstance.SecondaryData.Data;
  pFVar8 = this;
  if (pFVar4 != (FSearchContext *)0x0) {
    pFVar8 = pFVar4;
  }
  if (pFVar8 <= (FSearchContext *)&local_res18) {
    pFVar8 = this;
    if (pFVar4 != (FSearchContext *)0x0) {
      pFVar8 = pFVar4;
    }
    if ((&local_res18 <
         (pFVar8->AnimContexts).AllocatorInstance.InlineData +
         (longlong)(this->AnimContexts).ArrayMax * 8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->AnimContexts).ArrayNum;
  piVar1 = &(this->AnimContexts).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FChooserEvaluationContext_*>_>
                      (0x808,(ForElementType<FChooserEvaluationContext_*> *)this,piVar1);
  }
  (this->AnimContexts).ArrayNum = iVar7 + 1;
  pTVar2 = &this->PoseHistories;
  pFVar4 = (FSearchContext *)(this->AnimContexts).AllocatorInstance.SecondaryData.Data;
  pFVar8 = this;
  if (pFVar4 != (FSearchContext *)0x0) {
    pFVar8 = pFVar4;
  }
  *(FChooserEvaluationContext **)
   ((pFVar8->AnimContexts).AllocatorInstance.InlineData + (longlong)iVar7 * 8) = local_res18;
  pTVar9 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->PoseHistories).AllocatorInstance.SecondaryData.Data;
  if (pTVar9 == (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar9 = pTVar2;
  }
  if (((pTVar9 <= &local_res20) &&
      (&local_res20 <
       (pTVar9->AllocatorInstance).InlineData + (longlong)(this->PoseHistories).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->PoseHistories).ArrayNum;
  piVar1 = &(this->PoseHistories).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PoseHistories).ArrayNum = iVar7 + 1;
  pTVar9 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->PoseHistories).AllocatorInstance.SecondaryData.Data;
  if (pTVar9 == (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar9 = pTVar2;
  }
  *(IPoseHistory **)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 8) = local_res20;
  iVar7 = *(int *)&(this->RoleToIndex).field_0x58;
  iVar3 = *(int *)&(this->RoleToIndex).field_0x7c;
  local_res10 = param_1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)this_00,&local_res8,(bool *)&local_res10);
  pTVar10 = *(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
              **)&(this->RoleToIndex).field_0x50;
  if (pTVar10 ==
      (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
       *)0x0) {
    pTVar10 = this_00;
  }
  *(int *)(&pTVar10->field_0x80 + (longlong)(int)local_res8.Key * 0x14 + -0x78) = iVar7 - iVar3;
  bVar6 = PoseSearch::IsValid(this_00);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(RoleToIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x38c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// ArePoseHistoriesValid @ 14a8b1820

bool __thiscall UE::PoseSearch::FSearchContext::ArePoseHistoriesValid(FSearchContext *this)

{
  int iVar1;
  ForElementType<UE::PoseSearch::IPoseHistory_const_*> *pFVar2;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar3;
  undefined1 local_res8 [8];
  
  pTVar3 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->PoseHistories).AllocatorInstance.SecondaryData.Data;
  iVar1 = (this->PoseHistories).ArrayNum;
  if (pTVar3 == (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar3 = &this->PoseHistories;
  }
  pFVar2 = &pTVar3->AllocatorInstance;
  while( true ) {
    if ((this->PoseHistories).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::PoseSearch::IPoseHistory_const_*_const,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pTVar3 == (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                   *)(pFVar2->InlineData + (longlong)iVar1 * 8)) break;
    if (*(IPoseHistory **)(pTVar3->AllocatorInstance).InlineData == (IPoseHistory *)0x0) {
      return false;
    }
    pTVar3 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
              *)((pTVar3->AllocatorInstance).InlineData + 8);
  }
  return true;
}

// CanUseContinuingPoseValues @ 14a8b1bb0

bool __thiscall UE::PoseSearch::FSearchContext::CanUseContinuingPoseValues(FSearchContext *this)

{
  int iVar1;
  UPoseSearchSchema *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UObject *pUVar7;
  uint uVar8;
  FCachedQuery *pFVar9;
  
  if ((this->CachedQueries).ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CachedQueries.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x54d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (*(int *)&this->ContinuingPoseSearchResult != -1) {
    bVar4 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       &(this->ContinuingPoseSearchResult).field_0x4,(void *)0x0);
    if (!bVar4) {
      iVar1 = (this->CachedQueries).ArrayNum;
      uVar8 = iVar1 - 1;
      uVar6 = 0;
      if ((int)uVar8 < iVar1) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar9 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
      if (pFVar9 == (FCachedQuery *)0x0) {
        pFVar9 = (FCachedQuery *)&this->CachedQueries;
      }
      pUVar2 = pFVar9[(longlong)(this->CachedQueries).ArrayNum + -1].Schema;
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ContinuingPoseSearchResult).field_0x4);
      if (*(UPoseSearchSchema **)&pUVar7[1].field_0x8 == (UPoseSearchSchema *)0x0) {
        bVar4 = pUVar2 == (UPoseSearchSchema *)0x0;
      }
      else {
        bVar4 = *(UPoseSearchSchema **)&pUVar7[1].field_0x8 == pUVar2;
      }
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ContinuingPoseSearchResult).field_0x4
                                    );
        if ((this->ContinuingPoseValues).ArrayNum !=
            *(int *)(*(longlong *)&pUVar7[1].field_0x8 + 0x68)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bCanUseContinuingPoseValues || ContinuingPoseValues.Num() == ContinuingPoseSearchResult.Database->Schema->SchemaCardinality"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                             ,0x54f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// CanUseCurrentResult @ 14a8b1d20

bool __thiscall UE::PoseSearch::FSearchContext::CanUseCurrentResult(FSearchContext *this)

{
  int iVar1;
  UPoseSearchSchema *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UObject *pUVar7;
  uint uVar8;
  FCachedQuery *pFVar9;
  
  if ((this->CachedQueries).ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CachedQueries.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x54d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (*(int *)&this->ContinuingPoseSearchResult != -1) {
    bVar4 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       &(this->ContinuingPoseSearchResult).field_0x4,(void *)0x0);
    if (!bVar4) {
      iVar1 = (this->CachedQueries).ArrayNum;
      uVar8 = iVar1 - 1;
      uVar6 = 0;
      if ((int)uVar8 < iVar1) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar9 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
      if (pFVar9 == (FCachedQuery *)0x0) {
        pFVar9 = (FCachedQuery *)&this->CachedQueries;
      }
      pUVar2 = pFVar9[(longlong)(this->CachedQueries).ArrayNum + -1].Schema;
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ContinuingPoseSearchResult).field_0x4);
      if (*(UPoseSearchSchema **)&pUVar7[1].field_0x8 == (UPoseSearchSchema *)0x0) {
        bVar4 = pUVar2 == (UPoseSearchSchema *)0x0;
      }
      else {
        bVar4 = *(UPoseSearchSchema **)&pUVar7[1].field_0x8 == pUVar2;
      }
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ContinuingPoseSearchResult).field_0x4
                                    );
        if ((this->ContinuingPoseValues).ArrayNum !=
            *(int *)(*(longlong *)&pUVar7[1].field_0x8 + 0x68)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bCanUseContinuingPoseValues || ContinuingPoseValues.Num() == ContinuingPoseSearchResult.Database->Schema->SchemaCardinality"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                             ,0x54f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// EditFeatureVector @ 14a8b4550

TArrayView<float,int> * __thiscall
UE::PoseSearch::FSearchContext::EditFeatureVector
          (FSearchContext *this,TArrayView<float,int> *__return_storage_ptr__)

{
  int iVar1;
  UPoseSearchSchema *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<float,int> *pTVar6;
  longlong lVar7;
  uint uVar8;
  FCachedQuery *pFVar9;
  
  if ((this->CachedQueries).ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CachedQueries.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x4e1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar1 = (this->CachedQueries).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar8 < iVar1) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar9 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  lVar7 = (longlong)(this->CachedQueries).ArrayNum;
  if (pFVar9 == (FCachedQuery *)0x0) {
    pFVar9 = (FCachedQuery *)&this->CachedQueries;
  }
  iVar1 = pFVar9[lVar7 + -1].Values.ArrayNum;
  __return_storage_ptr__->DataPtr = pFVar9[lVar7 + -1].Values.AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pUVar2 = pFVar9[lVar7 + -1].Schema;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (pUVar2 == (UPoseSearchSchema *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedQuery.GetSchema()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x4e4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (__return_storage_ptr__->DataPtr == (float *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FeatureVector.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x4e5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if ((pFVar9[lVar7 + -1].Schema)->SchemaCardinality != __return_storage_ptr__->ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedQuery.GetSchema()->SchemaCardinality == FeatureVector.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x4e6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimContext @ 14a8b9430

UObject * __thiscall
UE::PoseSearch::FSearchContext::GetAnimContext(FSearchContext *this,FName *param_1)

{
  uint uVar1;
  FSearchContext *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TTuple<FName,int> *pTVar7;
  UObject *pUVar8;
  
  pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->RoleToIndex,*param_1);
  if (pTVar7 == (TTuple<FName,int> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UObject *)(*pcVar4)();
      return pUVar8;
    }
  }
  uVar1 = *(uint *)&pTVar7->field_0x8;
  uVar6 = 0;
  if ((int)uVar1 < (this->AnimContexts).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UObject *)(*pcVar4)();
      return pUVar8;
    }
  }
  pFVar2 = (FSearchContext *)(this->AnimContexts).AllocatorInstance.SecondaryData.Data;
  if (pFVar2 != (FSearchContext *)0x0) {
    this = pFVar2;
  }
  lVar3 = *(longlong *)
           ((this->AnimContexts).AllocatorInstance.InlineData + (longlong)(int)uVar1 * 8);
  if (0 < *(int *)(lVar3 + 0x80)) {
    pUVar8 = *(UObject **)(lVar3 + 0x60);
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar8);
    }
    return pUVar8;
  }
  return (UObject *)0x0;
}

// GetAnimInstance @ 14a8b9520

UAnimInstance * __thiscall
UE::PoseSearch::FSearchContext::GetAnimInstance(FSearchContext *this,FName *param_1)

{
  uint uVar1;
  int iVar2;
  FSearchContext *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<FName,int> *pTVar7;
  UAnimInstance *pUVar8;
  UClass *pUVar9;
  uint uVar10;
  
  pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->RoleToIndex,*param_1);
  if ((pTVar7 == (TTuple<FName,int> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UAnimInstance *)(*pcVar5)();
    return pUVar8;
  }
  uVar1 = *(uint *)&pTVar7->field_0x8;
  uVar10 = 0;
  if ((int)uVar1 < (this->AnimContexts).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UAnimInstance *)(*pcVar5)();
    return pUVar8;
  }
  pFVar3 = (FSearchContext *)(this->AnimContexts).AllocatorInstance.SecondaryData.Data;
  if (pFVar3 != (FSearchContext *)0x0) {
    this = pFVar3;
  }
  lVar4 = *(longlong *)
           ((this->AnimContexts).AllocatorInstance.InlineData + (longlong)(int)uVar1 * 8);
  if (0 < *(int *)(lVar4 + 0x80)) {
    if ((*(int *)(lVar4 + 0x80) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UAnimInstance *)(*pcVar5)();
      return pUVar8;
    }
    pUVar8 = *(UAnimInstance **)(lVar4 + 0x60);
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 == (UAnimInstance *)0x0) {
        return (UAnimInstance *)0x0;
      }
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    if (pUVar8 != (UAnimInstance *)0x0) {
      pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar9->_padding_)) {
        return pUVar8;
      }
    }
  }
  return (UAnimInstance *)0x0;
}

// GetAssetsToConsiderSet @ 14a8b99c0

TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
* __thiscall UE::PoseSearch::FSearchContext::GetAssetsToConsiderSet(FSearchContext *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar3;
  
  if ((this->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
    return this->AssetsToConsider;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AssetsToConsider_DEPRECATED.IsEmpty()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchContext.h"
                     ,0x155,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
              *)(*pcVar1)();
    return pTVar3;
  }
  return this->AssetsToConsider;
}

// GetCachedChannelData @ 14a8ba0a0

UPoseSearchFeatureChannel * __thiscall
UE::PoseSearch::FSearchContext::GetCachedChannelData
          (FSearchContext *this,uint param_1,UPoseSearchFeatureChannel *param_2,
          TArrayView<float_const_,int> *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  FCachedChannel *pFVar8;
  UPoseSearchFeatureChannel *pUVar9;
  uint uVar10;
  FCachedQuery *pFVar11;
  uint local_res10 [2];
  undefined4 uStack_2c;
  uint uStack_1c;
  
  local_res10[0] = param_1;
  pFVar8 = TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
                       *)&this->CachedChannels,param_1,local_res10);
  if (pFVar8->Channel == (UPoseSearchFeatureChannel *)0x0) {
    pFVar8->CachedQueryIndex = (this->CachedQueries).ArrayNum + -1;
    pFVar8->Channel = param_2;
    param_3->DataPtr = (float *)0x0;
    *(ulonglong *)&param_3->ArrayNum = (ulonglong)uStack_1c << 0x20;
    return (UPoseSearchFeatureChannel *)0x0;
  }
  uVar1 = pFVar8->CachedQueryIndex;
  uVar10 = 0;
  if ((int)uVar1 < (this->CachedQueries).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel *)(*pcVar6)();
      return pUVar9;
    }
  }
  pFVar11 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (pFVar11 == (FCachedQuery *)0x0) {
    pFVar11 = (FCachedQuery *)&this->CachedQueries;
  }
  iVar2 = pFVar11[(int)uVar1].Values.ArrayNum;
  pfVar5 = pFVar11[(int)uVar1].Values.AllocatorInstance.Data;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar3 = pFVar8->Channel->ChannelDataOffset;
  iVar4 = pFVar8->Channel->ChannelCardinality;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel *)(*pcVar6)();
      return pUVar9;
    }
  }
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel *)(*pcVar6)();
      return pUVar9;
    }
  }
  if (iVar2 < iVar4 + iVar3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel *)(*pcVar6)();
      return pUVar9;
    }
  }
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel *)(*pcVar6)();
      return pUVar9;
    }
  }
  param_3->DataPtr = pfVar5 + iVar3;
  *(ulonglong *)&param_3->ArrayNum = CONCAT44(uStack_2c,iVar4);
  return pFVar8->Channel;
}

// GetCachedQuery @ 14a8ba2d0

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchContext::GetCachedQuery
          (FSearchContext *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          UPoseSearchSchema *param_1)

{
  FCachedQuery *pFVar1;
  FCachedQuery *this_00;
  
  this_00 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (this_00 == (FCachedQuery *)0x0) {
    this_00 = (FCachedQuery *)&this->CachedQueries;
  }
  pFVar1 = this_00 + (this->CachedQueries).ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      __return_storage_ptr__->DataPtr = (float *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      return __return_storage_ptr__;
    }
    if (this_00->Schema == param_1) break;
    this_00 = this_00 + 1;
  }
  FCachedQuery::GetValues(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetContext @ 14a8ba340

FChooserEvaluationContext * __thiscall
UE::PoseSearch::FSearchContext::GetContext(FSearchContext *this,FName *param_1)

{
  uint uVar1;
  FSearchContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<FName,int> *pTVar6;
  FChooserEvaluationContext *pFVar7;
  
  pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->RoleToIndex,*param_1);
  if (pTVar6 == (TTuple<FName,int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FChooserEvaluationContext *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < (this->AnimContexts).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FChooserEvaluationContext *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (FSearchContext *)(this->AnimContexts).AllocatorInstance.SecondaryData.Data;
  if (pFVar2 != (FSearchContext *)0x0) {
    this = pFVar2;
  }
  return *(FChooserEvaluationContext **)
          ((this->AnimContexts).AllocatorInstance.InlineData + (longlong)(int)uVar1 * 8);
}

// GetContext @ 14a8ba400

FChooserEvaluationContext * __thiscall
UE::PoseSearch::FSearchContext::GetContext(FSearchContext *this,FName *param_1)

{
  uint uVar1;
  FSearchContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<FName,int> *pTVar6;
  FChooserEvaluationContext *pFVar7;
  
  pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->RoleToIndex,*param_1);
  if (pTVar6 == (TTuple<FName,int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FChooserEvaluationContext *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < (this->AnimContexts).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FChooserEvaluationContext *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (FSearchContext *)(this->AnimContexts).AllocatorInstance.SecondaryData.Data;
  if (pFVar2 != (FSearchContext *)0x0) {
    this = pFVar2;
  }
  return *(FChooserEvaluationContext **)
          ((this->AnimContexts).AllocatorInstance.InlineData + (longlong)(int)uVar1 * 8);
}

// GetOrBuildPCAQuery @ 14a8bb4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchContext::GetOrBuildPCAQuery
          (FSearchContext *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          UPoseSearchDatabase *param_1)

{
  int *piVar1;
  TArray<UE::PoseSearch::FCachedPCAQuery,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
  *pTVar2;
  FCachedPCAQuery *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildPCAQuery(UPoseSearchDatabase_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildPCAQuery>
  FVar11;
  TArrayView<float_const_,int> *pTVar12;
  FSearchIndex *pFVar13;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar14;
  uint uVar15;
  FCachedPCAQuery *pFVar16;
  FStatMessage *pFVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  float *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FName local_78;
  FName local_70;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_GetOrBuildPCAQuery ==
        (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildPCAQuery(UPoseSearchDatabase_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildPCAQuery>
         )0x0) {
      pFVar10 = ::FName::FName(&local_78,"STAT_PoseSearch_GetOrBuildPCAQuery");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_GetOrBuildPCAQuery,*pFVar10,
                 L"STAT_PoseSearch_GetOrBuildPCAQuery","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_PoseSearch_GetOrBuildPCAQuery;
  if (StatPtr_STAT_PoseSearch_GetOrBuildPCAQuery ==
      (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildPCAQuery(UPoseSearchDatabase_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildPCAQuery>
       )0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_PoseSearch_GetOrBuildPCAQuery");
    FVar11 = (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildPCAQuery(UPoseSearchDatabase_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildPCAQuery>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_GetOrBuildPCAQuery,
                          *pFVar10,L"STAT_PoseSearch_GetOrBuildPCAQuery","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar15 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar18.Value;
        local_res18.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                   ,0x527);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar18.Value;
      local_res20.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar6 = true;
      goto LAB_14a8bb65b;
    }
  }
  bVar6 = false;
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
LAB_14a8bb65b:
  if ((param_1 == (UPoseSearchDatabase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Database",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x529,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TArrayView<float_const_,int> *)(*pcVar4)();
    return pTVar12;
  }
  pFVar16 = (this->CachedPCAQueries).AllocatorInstance.SecondaryData.Data;
  pTVar2 = &this->CachedPCAQueries;
  if (pFVar16 == (FCachedPCAQuery *)0x0) {
    pFVar16 = (FCachedPCAQuery *)pTVar2;
  }
  pFVar3 = pFVar16 + (this->CachedPCAQueries).ArrayNum;
  do {
    if (pFVar16 == pFVar3) {
      GetOrBuildQuery(this,&local_68,(param_1->Schema).field0_0x0.DebugPtr);
      iVar9 = (this->CachedPCAQueries).ArrayNum;
      piVar1 = &(this->CachedPCAQueries).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedPCAQuery>_>
                          (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CachedPCAQueries).ArrayNum = iVar9 + 1;
      pFVar16 = (this->CachedPCAQueries).AllocatorInstance.SecondaryData.Data;
      if (pFVar16 == (FCachedPCAQuery *)0x0) {
        pFVar16 = (FCachedPCAQuery *)pTVar2;
      }
      pFVar16 = pFVar16 + iVar9;
      (pFVar16->Values).AllocatorInstance.Data = (float *)0x0;
      (pFVar16->Values).ArrayNum = 0;
      (pFVar16->Values).ArrayMax = 0;
      pFVar16->Database = param_1;
      pFVar13 = UPoseSearchDatabase::GetSearchIndex(param_1);
      iVar9 = FSearchIndex::GetNumberOfPrincipalComponents(pFVar13);
      TArray<float,TMemStackAllocator<16>_>::SetNumZeroed(&pFVar16->Values,iVar9,Default);
      pFVar13 = UPoseSearchDatabase::GetSearchIndex(param_1);
      local_88 = (pFVar16->Values).AllocatorInstance.Data;
      iStack_80 = (pFVar16->Values).ArrayNum;
      if ((iStack_80 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArrayView<float_const_,int> *)(*pcVar4)();
        return pTVar12;
      }
      local_58._12_4_ = uStack_7c;
      local_58.ArrayNum = iStack_80;
      local_58.DataPtr = local_88;
      local_48.DataPtr = local_68.DataPtr;
      local_48.ArrayNum = local_68.ArrayNum;
      local_48._12_4_ = local_68._12_4_;
      FSearchIndex::PCAProject(pFVar13,__return_storage_ptr__,&local_48,&local_58);
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar6) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_a0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
          local_a0.NameAndInfo.Index.Value = FVar19.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_b8);
          local_a0.StatData.Pad[4] = '\0';
          local_a0.StatData.Pad[5] = '\0';
          local_a0.StatData.Pad[6] = '\0';
          local_a0.StatData.Pad[7] = '\0';
          local_a0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
          local_a0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
          local_a0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
          local_a0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
          pFVar17 = &local_a0;
LAB_14a8bb83e:
          FThreadStats::AddStatMessage(this_00,pFVar17);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      return __return_storage_ptr__;
    }
    if (pFVar16->Database == param_1) {
      __return_storage_ptr__->DataPtr = (pFVar16->Values).AllocatorInstance.Data;
      iVar9 = (pFVar16->Values).ArrayNum;
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArrayView<float_const_,int> *)(*pcVar4)();
        return pTVar12;
      }
      __return_storage_ptr__->ArrayNum = iVar9;
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_b0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar19.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_res20);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      pFVar17 = &local_b0;
      goto LAB_14a8bb83e;
    }
    pFVar16 = pFVar16 + 1;
  } while( true );
}

// GetOrBuildQuery @ 14a8bba00

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchContext::GetOrBuildQuery
          (FSearchContext *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          UPoseSearchSchema *param_1)

{
  int *piVar1;
  FCachedQuery *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildQuery(UPoseSearchSchema_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildQuery>
  FVar9;
  TArrayView<float_const_,int> *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar11;
  uint uVar12;
  FStatMessage *pFVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FCachedQuery *this_01;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FStatMessage local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_GetOrBuildQuery ==
        (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildQuery(UPoseSearchSchema_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildQuery>
         )0x0) {
      pFVar8 = ::FName::FName(&local_80,"STAT_PoseSearch_GetOrBuildQuery");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_GetOrBuildQuery,*pFVar8,
                 L"STAT_PoseSearch_GetOrBuildQuery","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_PoseSearch_GetOrBuildQuery;
  if (StatPtr_STAT_PoseSearch_GetOrBuildQuery ==
      (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildQuery(UPoseSearchSchema_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildQuery>
       )0x0) {
    pFVar8 = ::FName::FName(&local_78,"STAT_PoseSearch_GetOrBuildQuery");
    FVar9 = (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchContext::GetOrBuildQuery(UPoseSearchSchema_const_*)_::_2_::FStat_STAT_PoseSearch_GetOrBuildQuery>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_GetOrBuildQuery,
                         *pFVar8,L"STAT_PoseSearch_GetOrBuildQuery","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                   ,0x516);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar14.Value;
      local_res20.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_14a8bbb81;
    }
  }
  bVar5 = false;
  FVar15 = local_70;
LAB_14a8bbb81:
  if ((param_1 == (UPoseSearchSchema *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Schema",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x518,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TArrayView<float_const_,int> *)(*pcVar3)();
    return pTVar10;
  }
  this_01 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (this_01 == (FCachedQuery *)0x0) {
    this_01 = (FCachedQuery *)&this->CachedQueries;
  }
  pFVar2 = this_01 + (this->CachedQueries).ArrayNum;
  do {
    if (this_01 == pFVar2) {
      UPoseSearchSchema::BuildQuery(param_1,__return_storage_ptr__,this);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          pFVar11 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(pFVar11);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
          local_50.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_88);
          local_50.StatData.Pad[4] = '\0';
          local_50.StatData.Pad[5] = '\0';
          local_50.StatData.Pad[6] = '\0';
          local_50.StatData.Pad[7] = '\0';
          local_50.StatData.Pad[0] = local_88.s.LowPart._0_1_;
          local_50.StatData.Pad[1] = local_88.s.LowPart._1_1_;
          local_50.StatData.Pad[2] = local_88.s.LowPart._2_1_;
          local_50.StatData.Pad[3] = local_88.s.LowPart._3_1_;
          pFVar13 = &local_50;
LAB_14a8bbca2:
          FThreadStats::AddStatMessage(this_00,pFVar13);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      return __return_storage_ptr__;
    }
    if (this_01->Schema == param_1) {
      FCachedQuery::GetValues(this_01,__return_storage_ptr__);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      if (FVar15 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_60.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_res20);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      pFVar13 = &local_60;
      goto LAB_14a8bbca2;
    }
    this_01 = this_01 + 1;
  } while( true );
}

// GetPoseHistory @ 14a8bc1d0

IPoseHistory * __thiscall
UE::PoseSearch::FSearchContext::GetPoseHistory(FSearchContext *this,FName *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,int> *pTVar5;
  IPoseHistory *pIVar6;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar7;
  
  pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->RoleToIndex,*param_1);
  if (pTVar5 == (TTuple<FName,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (IPoseHistory *)(*pcVar2)();
      return pIVar6;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  uVar4 = 0;
  if ((int)uVar1 < (this->PoseHistories).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (IPoseHistory *)(*pcVar2)();
      return pIVar6;
    }
  }
  pTVar7 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->PoseHistories).AllocatorInstance.SecondaryData.Data;
  if (pTVar7 == (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar7 = &this->PoseHistories;
  }
  return *(IPoseHistory **)((pTVar7->AllocatorInstance).InlineData + (longlong)(int)uVar1 * 8);
}

// GetPoseIndicesHistory @ 14a8bc650

FPoseIndicesHistory * __thiscall
UE::PoseSearch::FSearchContext::GetPoseIndicesHistory(FSearchContext *this)

{
  IPoseHistory *pIVar1;
  code *pcVar2;
  bool bVar3;
  FPoseIndicesHistory *pFVar4;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar5;
  
  pTVar5 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->PoseHistories).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar5 = &this->PoseHistories;
  }
  if (pTVar5 != (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)((pTVar5->AllocatorInstance).InlineData +
                   (longlong)(this->PoseHistories).ArrayNum * 8)) {
    pIVar1 = *(IPoseHistory **)(pTVar5->AllocatorInstance).InlineData;
    if (pIVar1 == (IPoseHistory *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x43f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPoseIndicesHistory *)(*pcVar2)();
        return pFVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014a8bc6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar4 = (FPoseIndicesHistory *)(**(code **)(*(longlong *)pIVar1 + 0x60))(pIVar1);
    return pFVar4;
  }
  return (FPoseIndicesHistory *)0x0;
}

// GetSampleCurveValue @ 14a8bd890

float __thiscall
UE::PoseSearch::FSearchContext::GetSampleCurveValue
          (FSearchContext *this,float param_1,FName *param_2,FName *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IPoseHistory *pIVar5;
  uint uVar6;
  FCachedQuery *pFVar7;
  float fVar8;
  float local_res10 [2];
  ulonglong in_stack_ffffffffffffffd8;
  
  if ((this->CachedQueries).ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CachedQueries.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x3cd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  iVar1 = (this->CachedQueries).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    in_stack_ffffffffffffffd8 = (ulonglong)(int)uVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  pFVar7 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (pFVar7 == (FCachedQuery *)0x0) {
    pFVar7 = (FCachedQuery *)&this->CachedQueries;
  }
  if (pFVar7[(longlong)(this->CachedQueries).ArrayNum + -1].Schema == (UPoseSearchSchema *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Schema",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x3cf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  local_res10[0] = 0.0;
  pIVar5 = GetPoseHistory(this,param_3);
  if (pIVar5 == (IPoseHistory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x3d3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  (**(code **)(*(longlong *)pIVar5 + 0x10))
            (pIVar5,param_1,param_2,local_res10,in_stack_ffffffffffffffd8 & 0xffffffffffffff00);
  return local_res10[0];
}

// GetSampleCurveValueInternal @ 14a8bda10

float __thiscall
UE::PoseSearch::FSearchContext::GetSampleCurveValueInternal
          (FSearchContext *this,float param_1,FName *param_2,FName *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IPoseHistory *pIVar5;
  uint uVar6;
  FCachedQuery *pFVar7;
  float fVar8;
  float local_res8 [2];
  ulonglong in_stack_ffffffffffffffd8;
  
  if ((this->CachedQueries).ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CachedQueries.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x3cd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  iVar1 = (this->CachedQueries).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    in_stack_ffffffffffffffd8 = (ulonglong)(int)uVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  pFVar7 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (pFVar7 == (FCachedQuery *)0x0) {
    pFVar7 = (FCachedQuery *)&this->CachedQueries;
  }
  if (pFVar7[(longlong)(this->CachedQueries).ArrayNum + -1].Schema == (UPoseSearchSchema *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Schema",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x3cf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  local_res8[0] = 0.0;
  pIVar5 = GetPoseHistory(this,param_3);
  if (pIVar5 == (IPoseHistory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x3d3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  (**(code **)(*(longlong *)pIVar5 + 0x10))
            (pIVar5,param_1,param_2,local_res8,in_stack_ffffffffffffffd8 & 0xffffffffffffff00);
  return local_res8[0];
}

// GetSamplePosition @ 14a8bdb90

TVector<double> * __thiscall
UE::PoseSearch::FSearchContext::GetSamplePosition
          (FSearchContext *this,TVector<double> *__return_storage_ptr__,float param_1,float param_2,
          schar param_3,schar param_4,FName *param_5,FName *param_6,EPermutationTimeType param_7,
          TVector<double> *param_8)

{
  float local_res18 [2];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  local_res18[0] = 0.0;
  UPoseSearchFeatureChannel::GetPermutationTimeOffsets
            (param_7,this->DesiredPermutationTimeOffset,local_res20,local_res18);
  GetSamplePositionInternal
            (this,__return_storage_ptr__,local_res20[0] + param_1,local_res18[0] + param_2,param_3,
             param_4,param_5,param_6,param_8);
  return __return_storage_ptr__;
}

// GetSamplePositionInternal @ 14a8bdc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::PoseSearch::FSearchContext::GetSamplePositionInternal
          (FSearchContext *this,TVector<double> *__return_storage_ptr__,float param_1,float param_2,
          schar param_3,schar param_4,FName *param_5,FName *param_6,TVector<double> *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar63;
  undefined1 auVar64 [16];
  double dVar69;
  undefined4 uVar70;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  TVector<double>_u_0 local_228;
  TTransform<double> local_208;
  TTransform<double> local_188;
  TTransform<double> local_128 [2];
  
  GetWorldBoneTransformAtTime(this,&local_208,param_2,param_6,'\0');
  if (param_7 == (TVector<double> *)0x0) {
    GetWorldBoneTransformAtTime(this,&local_188,param_1,param_5,param_3);
    if (param_4 != '\0') {
      GetWorldBoneTransformAtTime(this,local_128,param_2,param_6,param_4);
      local_228._s_0.X =
           local_188.Translation.XY.m128d_f64[0] - local_128[0].Translation.XY.m128d_f64[0];
      local_228._s_0.Z =
           local_188.Translation.ZW.m128d_f64[0] - local_128[0].Translation.ZW.m128d_f64[0];
      local_228._s_0.Y =
           local_188.Translation.XY.m128d_f64[1] - local_128[0].Translation.XY.m128d_f64[1];
      UE::Math::TTransform<double>::InverseTransformVector
                (&local_208,__return_storage_ptr__,(TVector<double> *)&local_228._s_0);
      return __return_storage_ptr__;
    }
    local_208.Rotation.XY.m128d_f64[0] =
         local_208.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_208.Rotation.XY.m128d_f64[1] =
         local_208.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar45._0_8_ =
         local_208.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar45._8_8_ =
         local_208.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar40._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
    auVar40._0_8_ = local_208.Rotation.XY.m128d_f64[0];
    uVar42 = (undefined4)((ulonglong)local_208.Rotation.XY.m128d_f64[1] >> 0x20);
    auVar40._12_4_ = uVar42;
    local_208.Translation.XY.m128d_f64[0] =
         local_188.Translation.XY.m128d_f64[0] - local_208.Translation.XY.m128d_f64[0];
    local_208.Translation.XY.m128d_f64[1] =
         local_188.Translation.XY.m128d_f64[1] - local_208.Translation.XY.m128d_f64[1];
    uVar70 = (undefined4)((ulonglong)local_208.Translation.XY.m128d_f64[1] >> 0x20);
    auVar39._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
    auVar39._0_8_ = local_208.Rotation.XY.m128d_f64[0];
    auVar39._12_4_ = uVar42;
    local_208.Translation.ZW.m128d_f64[0] =
         local_188.Translation.ZW.m128d_f64[0] - local_208.Translation.ZW.m128d_f64[0];
    auVar57._0_8_ = auVar40._8_8_;
    auVar59._8_4_ = SUB84(local_208.Translation.XY.m128d_f64[1],0);
    auVar59._0_8_ = local_208.Translation.XY.m128d_f64[0];
    auVar59._12_4_ = uVar70;
    auVar25._8_4_ = SUB84(local_208.Translation.XY.m128d_f64[1],0);
    auVar25._0_8_ = local_208.Translation.XY.m128d_f64[0];
    auVar25._12_4_ = uVar70;
    auVar34._8_4_ = SUB84(auVar45._0_8_,0);
    auVar34._0_8_ = auVar57._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar45._0_8_ >> 0x20);
    auVar40 = blendpd(auVar39,auVar45,2);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = local_208.Translation.ZW.m128d_f64[0];
    auVar21 = blendpd(auVar25,auVar21,2);
    auVar60._0_8_ =
         auVar59._8_8_ * local_208.Rotation.XY.m128d_f64[0] -
         auVar57._0_8_ * local_208.Translation.XY.m128d_f64[0];
    auVar60._8_8_ =
         local_208.Translation.ZW.m128d_f64[0] * local_208.Rotation.XY.m128d_f64[1] -
         auVar34._8_8_ * local_208.Translation.XY.m128d_f64[1];
    auVar43._8_8_ = auVar40._8_8_;
    auVar68._8_4_ = SUB84(auVar60._8_8_,0);
    auVar68._0_8_ = auVar60._0_8_;
    auVar68._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
    auVar26._0_8_ =
         auVar21._0_8_ * auVar45._0_8_ - auVar40._0_8_ * local_208.Translation.ZW.m128d_f64[0];
    auVar26._8_8_ = auVar21._8_8_ * auVar45._8_8_ - auVar43._8_8_ * 0.0;
    dVar63 = auVar68._8_8_ + auVar68._8_8_;
    dVar69 = auVar26._0_8_ + auVar26._0_8_;
    auVar21 = blendpd(auVar60,auVar26,2);
    auVar61._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar61._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    uVar42 = SUB84(dVar69,0);
    auVar54._8_4_ = uVar42;
    auVar54._0_8_ = dVar63;
    uVar70 = (undefined4)((ulonglong)dVar69 >> 0x20);
    auVar54._12_4_ = uVar70;
    auVar14._8_4_ = uVar42;
    auVar14._0_8_ = dVar63;
    auVar14._12_4_ = uVar70;
    auVar49._8_4_ = uVar42;
    auVar49._0_8_ = dVar63;
    auVar49._12_4_ = uVar70;
    auVar21 = blendpd(auVar49,auVar61,2);
    auVar51._0_8_ = auVar54._8_8_ * local_208.Rotation.XY.m128d_f64[0] - dVar63 * auVar57._0_8_;
    auVar51._8_8_ =
         auVar61._0_8_ * local_208.Rotation.XY.m128d_f64[1] - auVar14._8_8_ * auVar45._0_8_;
    auVar19._8_4_ = SUB84(auVar61._8_8_,0);
    auVar19._0_8_ = auVar61._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar5._4_8_ = auVar43._8_8_;
    auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar41._0_8_ = auVar5._0_8_ << 0x20;
    auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar47._0_8_ = auVar21._0_8_ * auVar45._0_8_ - auVar61._0_8_ * auVar40._0_8_;
    auVar47._8_8_ = auVar21._8_8_ * auVar45._8_8_ - auVar19._8_8_ * auVar43._8_8_;
    auVar36._8_8_ = auVar41._8_8_;
    auVar36._0_8_ = local_208.Scale3D.ZW.m128d_f64[0];
    dVar62 = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              local_208.Scale3D.ZW.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              local_208.Scale3D.ZW.m128d_f64[0]._0_4_);
    auVar43._8_8_ = auVar45._8_8_;
    auVar57._0_8_ = auVar61._0_8_;
  }
  else {
    if (param_4 != '\0') {
      GetWorldBoneTransformAtTime(this,&local_188,param_2,param_6,param_4);
      local_188.Translation.XY.m128d_f64[0] =
           (param_7->field0_0x0)._s_0.X - local_188.Translation.XY.m128d_f64[0];
      local_208.Rotation.XY.m128d_f64[0] =
           local_208.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_208.Rotation.XY.m128d_f64[1] =
           local_208.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar48._0_8_ =
           local_208.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar48._8_8_ =
           local_208.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar4._4_8_ = in_register_000012c4._4_8_;
      auVar4._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar37._0_8_ = auVar4._0_8_ << 0x20;
      auVar37._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar37._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar44._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
      auVar44._0_8_ = local_208.Rotation.XY.m128d_f64[0];
      auVar44._12_4_ = (int)((ulonglong)local_208.Rotation.XY.m128d_f64[1] >> 0x20);
      local_188.Translation.XY.m128d_f64[1] =
           (param_7->field0_0x0)._s_0.Y - local_188.Translation.XY.m128d_f64[1];
      local_188.Translation.ZW.m128d_f64[0] =
           (param_7->field0_0x0)._s_0.Z - local_188.Translation.ZW.m128d_f64[0];
      auVar34 = blendpd(auVar44,auVar48,2);
      uVar42 = (undefined4)((ulonglong)local_188.Translation.XY.m128d_f64[1] >> 0x20);
      auVar65._8_4_ = SUB84(local_188.Translation.XY.m128d_f64[1],0);
      auVar65._0_8_ = local_188.Translation.XY.m128d_f64[0];
      auVar65._12_4_ = uVar42;
      auVar23._8_4_ = SUB84(local_188.Translation.XY.m128d_f64[1],0);
      auVar23._0_8_ = local_188.Translation.XY.m128d_f64[0];
      auVar23._12_4_ = uVar42;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_188.Translation.ZW.m128d_f64[0];
      auVar21 = blendpd(auVar23,auVar2,2);
      auVar15._8_4_ = SUB84(auVar48._0_8_,0);
      auVar15._0_8_ = local_208.Rotation.XY.m128d_f64[1];
      auVar15._12_4_ = (int)((ulonglong)auVar48._0_8_ >> 0x20);
      auVar66._0_8_ =
           auVar65._8_8_ * local_208.Rotation.XY.m128d_f64[0] -
           local_208.Rotation.XY.m128d_f64[1] * local_188.Translation.XY.m128d_f64[0];
      auVar66._8_8_ =
           local_188.Translation.ZW.m128d_f64[0] * local_208.Rotation.XY.m128d_f64[1] -
           auVar15._8_8_ * local_188.Translation.XY.m128d_f64[1];
      auVar24._0_8_ =
           auVar21._0_8_ * auVar48._0_8_ - auVar34._0_8_ * local_188.Translation.ZW.m128d_f64[0];
      auVar24._8_8_ = auVar21._8_8_ * auVar48._8_8_ - auVar34._8_8_ * 0.0;
      auVar21 = blendpd(auVar66,auVar24,2);
      auVar67._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar67._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar43._8_8_ = auVar66._8_8_ + auVar66._8_8_;
      auVar57._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      uVar42 = SUB84(auVar57._0_8_,0);
      uVar70 = (undefined4)((ulonglong)auVar57._0_8_ >> 0x20);
      auVar58._8_4_ = uVar42;
      auVar58._0_8_ = auVar43._8_8_;
      auVar58._12_4_ = uVar70;
      auVar16._8_4_ = uVar42;
      auVar16._0_8_ = auVar43._8_8_;
      auVar16._12_4_ = uVar70;
      auVar52._8_4_ = uVar42;
      auVar52._0_8_ = auVar43._8_8_;
      auVar52._12_4_ = uVar70;
      auVar21 = blendpd(auVar52,auVar67,2);
      dVar62 = auVar67._0_8_ * local_208.Rotation.XY.m128d_f64[1] - auVar16._8_8_ * auVar48._0_8_;
      auVar17._8_4_ = SUB84(auVar67._8_8_,0);
      auVar17._0_8_ = auVar67._0_8_;
      auVar17._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
      auVar53._0_8_ = auVar21._0_8_ * auVar48._0_8_ - auVar67._0_8_ * auVar34._0_8_;
      auVar53._8_8_ = auVar21._8_8_ * auVar48._8_8_ - auVar17._8_8_ * auVar34._8_8_;
      auVar38._8_8_ = auVar37._8_8_;
      auVar38._0_8_ = local_208.Scale3D.ZW.m128d_f64[0];
      auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
      lVar8 = -(ulonglong)
               ((double)CONCAT44(local_208.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 local_208.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
               (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar18._8_4_ = SUB84(dVar62,0);
      auVar18._0_8_ =
           auVar58._8_8_ * local_208.Rotation.XY.m128d_f64[0] -
           auVar43._8_8_ * local_208.Rotation.XY.m128d_f64[1];
      auVar18._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
      auVar34 = blendpd(auVar18,auVar53,2);
      auVar30._0_8_ =
           (double)CONCAT44(local_208.Scale3D.XY.m128d_f64[0]._4_4_ &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_208.Scale3D.XY.m128d_f64[0]._0_4_ &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar30._8_4_ = local_208.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
      auVar30._12_4_ = local_208.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
      lVar9 = -(ulonglong)(auVar30._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar10 = -(ulonglong)(auVar30._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar7._4_4_ = local_208.Scale3D.XY.m128d_f64[0]._4_4_;
      auVar7._0_4_ = local_208.Scale3D.XY.m128d_f64[0]._0_4_;
      auVar7._8_4_ = local_208.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar7._12_4_ = local_208.Scale3D.XY.m128d_f64[1]._4_4_;
      auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar7);
      auVar31._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar14._4_4_,
                            ~(uint)lVar9 & auVar14._0_4_);
      auVar31._8_4_ = ~(uint)lVar10 & auVar14._8_4_;
      auVar31._12_4_ = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar14._12_4_;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           auVar31._0_8_ *
           (auVar43._8_8_ * auVar48._8_8_ + local_188.Translation.XY.m128d_f64[0] + dVar62);
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           auVar31._8_8_ *
           (auVar57._0_8_ * auVar48._8_8_ + local_188.Translation.XY.m128d_f64[1] + auVar53._0_8_);
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar8 >> 0x20) & auVar21._4_4_,
                            ~(uint)lVar8 & auVar21._0_4_) *
           (auVar67._0_8_ * auVar48._8_8_ + local_188.Translation.ZW.m128d_f64[0] + auVar34._0_8_);
      return __return_storage_ptr__;
    }
    local_208.Rotation.XY.m128d_f64[0] =
         local_208.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_208.Rotation.XY.m128d_f64[1] =
         local_208.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar43._0_8_ =
         local_208.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar43._8_8_ =
         local_208.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar27._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
    auVar27._0_8_ = local_208.Rotation.XY.m128d_f64[0];
    uVar42 = (undefined4)((ulonglong)local_208.Rotation.XY.m128d_f64[1] >> 0x20);
    auVar27._12_4_ = uVar42;
    local_208.Translation.ZW.m128d_f64[0] =
         (param_7->field0_0x0)._s_0.Z - local_208.Translation.ZW.m128d_f64[0];
    local_208.Translation.XY.m128d_f64[0] =
         (param_7->field0_0x0)._s_0.X - local_208.Translation.XY.m128d_f64[0];
    local_208.Translation.XY.m128d_f64[1] =
         (param_7->field0_0x0)._s_0.Y - local_208.Translation.XY.m128d_f64[1];
    uVar70 = (undefined4)((ulonglong)local_208.Translation.XY.m128d_f64[1] >> 0x20);
    dVar32 = auVar27._8_8_;
    auVar11._8_4_ = SUB84(auVar43._0_8_,0);
    auVar11._0_8_ = dVar32;
    auVar11._12_4_ = (int)((ulonglong)auVar43._0_8_ >> 0x20);
    auVar55._8_4_ = SUB84(local_208.Translation.XY.m128d_f64[1],0);
    auVar55._0_8_ = local_208.Translation.XY.m128d_f64[0];
    auVar55._12_4_ = uVar70;
    auVar33._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
    auVar33._0_8_ = local_208.Rotation.XY.m128d_f64[0];
    auVar33._12_4_ = uVar42;
    auVar34 = blendpd(auVar33,auVar43,2);
    auVar20._8_4_ = SUB84(local_208.Translation.XY.m128d_f64[1],0);
    auVar20._0_8_ = local_208.Translation.XY.m128d_f64[0];
    auVar20._12_4_ = uVar70;
    auVar56._0_8_ =
         auVar55._8_8_ * local_208.Rotation.XY.m128d_f64[0] -
         dVar32 * local_208.Translation.XY.m128d_f64[0];
    auVar56._8_8_ =
         local_208.Translation.ZW.m128d_f64[0] * local_208.Rotation.XY.m128d_f64[1] -
         auVar11._8_8_ * local_208.Translation.XY.m128d_f64[1];
    dVar62 = auVar34._8_8_;
    auVar64._8_4_ = SUB84(auVar56._8_8_,0);
    auVar64._0_8_ = auVar56._0_8_;
    auVar64._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_208.Translation.ZW.m128d_f64[0];
    auVar21 = blendpd(auVar20,auVar1,2);
    auVar22._0_8_ =
         auVar21._0_8_ * auVar43._0_8_ - auVar34._0_8_ * local_208.Translation.ZW.m128d_f64[0];
    auVar22._8_8_ = auVar21._8_8_ * auVar43._8_8_ - dVar62 * 0.0;
    dVar63 = auVar64._8_8_ + auVar64._8_8_;
    dVar69 = auVar22._0_8_ + auVar22._0_8_;
    auVar21 = blendpd(auVar56,auVar22,2);
    auVar57._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar57._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    uVar42 = SUB84(dVar69,0);
    auVar50._8_4_ = uVar42;
    auVar50._0_8_ = dVar63;
    uVar70 = (undefined4)((ulonglong)dVar69 >> 0x20);
    auVar50._12_4_ = uVar70;
    auVar12._8_4_ = uVar42;
    auVar12._0_8_ = dVar63;
    auVar12._12_4_ = uVar70;
    auVar46._8_4_ = uVar42;
    auVar46._0_8_ = dVar63;
    auVar46._12_4_ = uVar70;
    auVar21 = blendpd(auVar46,auVar57,2);
    auVar51._0_8_ = auVar50._8_8_ * local_208.Rotation.XY.m128d_f64[0] - dVar63 * dVar32;
    auVar51._8_8_ =
         auVar57._0_8_ * local_208.Rotation.XY.m128d_f64[1] - auVar12._8_8_ * auVar43._0_8_;
    auVar13._8_4_ = SUB84(auVar57._8_8_,0);
    auVar13._0_8_ = auVar57._0_8_;
    auVar13._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
    auVar3._4_8_ = dVar62;
    auVar3._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar35._0_8_ = auVar3._0_8_ << 0x20;
    auVar35._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar35._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar47._0_8_ = auVar21._0_8_ * auVar43._0_8_ - auVar57._0_8_ * auVar34._0_8_;
    auVar47._8_8_ = auVar21._8_8_ * auVar43._8_8_ - auVar13._8_8_ * dVar62;
    auVar36._8_8_ = auVar35._8_8_;
    auVar36._0_8_ = local_208.Scale3D.ZW.m128d_f64[0];
    dVar62 = (double)CONCAT44(local_208.Scale3D.ZW.m128d_f64[0]._4_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_208.Scale3D.ZW.m128d_f64[0]._0_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
  lVar8 = -(ulonglong)(dVar62 <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar28._0_8_ =
       (double)CONCAT44(local_208.Scale3D.XY.m128d_f64[0]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_208.Scale3D.XY.m128d_f64[0]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar28._8_4_ = local_208.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  auVar28._12_4_ = local_208.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  auVar34 = blendpd(auVar51,auVar47,2);
  lVar9 = -(ulonglong)(auVar28._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar10 = -(ulonglong)(auVar28._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar6._4_4_ = local_208.Scale3D.XY.m128d_f64[0]._4_4_;
  auVar6._0_4_ = local_208.Scale3D.XY.m128d_f64[0]._0_4_;
  auVar6._8_4_ = local_208.Scale3D.XY.m128d_f64[1]._0_4_;
  auVar6._12_4_ = local_208.Scale3D.XY.m128d_f64[1]._4_4_;
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar6);
  auVar29._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar14._4_4_,
                        ~(uint)lVar9 & auVar14._0_4_);
  auVar29._8_4_ = ~(uint)lVar10 & auVar14._8_4_;
  auVar29._12_4_ = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar14._12_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       auVar29._0_8_ *
       (dVar63 * auVar43._8_8_ + local_208.Translation.XY.m128d_f64[0] + auVar51._8_8_);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       auVar29._8_8_ *
       (dVar69 * auVar43._8_8_ + local_208.Translation.XY.m128d_f64[1] + auVar47._0_8_);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar8 >> 0x20) & auVar21._4_4_,
                        ~(uint)lVar8 & auVar21._0_4_) *
       (auVar57._0_8_ * auVar43._8_8_ + local_208.Translation.ZW.m128d_f64[0] + auVar34._0_8_);
  return __return_storage_ptr__;
}

// GetSampleRotation @ 14a8be230

TQuat<double> * __thiscall
UE::PoseSearch::FSearchContext::GetSampleRotation
          (FSearchContext *this,TQuat<double> *__return_storage_ptr__,float param_1,float param_2,
          schar param_3,schar param_4,FName *param_5,FName *param_6,EPermutationTimeType param_7,
          TQuat<double> *param_8)

{
  float local_res18 [2];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  local_res18[0] = 0.0;
  UPoseSearchFeatureChannel::GetPermutationTimeOffsets
            (param_7,this->DesiredPermutationTimeOffset,local_res20,local_res18);
  GetSampleRotationInternal
            (this,__return_storage_ptr__,local_res20[0] + param_1,local_res18[0] + param_2,param_3,
             param_4,param_5,param_6,param_8);
  return __return_storage_ptr__;
}

// GetSampleRotationInternal @ 14a8be300

TQuat<double> * __thiscall
UE::PoseSearch::FSearchContext::GetSampleRotationInternal
          (FSearchContext *this,TQuat<double> *__return_storage_ptr__,float param_1,float param_2,
          schar param_3,schar param_4,FName *param_5,FName *param_6,TQuat<double> *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dStack_150;
  TTransform<double> local_138;
  TTransform<double> local_d8 [2];
  
  if (param_7 == (TQuat<double> *)0x0) {
    GetWorldBoneTransformAtTime(this,local_d8,param_2,param_6,param_4);
    GetWorldBoneTransformAtTime(this,&local_138,param_1,param_5,param_3);
    uVar22 = SUB84(local_138.Rotation.XY.m128d_f64[0],0);
    uVar23 = (undefined4)((ulonglong)local_138.Rotation.XY.m128d_f64[0] >> 0x20);
    uVar24 = SUB84(local_138.Rotation.XY.m128d_f64[1],0);
    uVar25 = (undefined4)((ulonglong)local_138.Rotation.XY.m128d_f64[1] >> 0x20);
    local_d8[0].Rotation.XY.m128d_f64[0] =
         local_d8[0].Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_d8[0].Rotation.XY.m128d_f64[1] =
         local_d8[0].Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_d8[0].Rotation.ZW.m128d_f64[0] =
         local_d8[0].Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_d8[0].Rotation.ZW.m128d_f64[1] =
         local_d8[0].Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar20 = local_138.Rotation.ZW.m128d_f64[1] * local_d8[0].Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_d8[0].Rotation.ZW.m128d_f64[1] * local_138.Rotation.XY.m128d_f64[0] +
             local_d8[0].Rotation.XY.m128d_f64[1] * local_138.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             local_d8[0].Rotation.ZW.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar11 = local_138.Rotation.ZW.m128d_f64[0] * local_d8[0].Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_d8[0].Rotation.ZW.m128d_f64[1] * local_138.Rotation.XY.m128d_f64[1] +
             local_d8[0].Rotation.XY.m128d_f64[1] * local_138.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_d8[0].Rotation.ZW.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar16 = local_d8[0].Rotation.XY.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             local_d8[0].Rotation.ZW.m128d_f64[1] * local_138.Rotation.ZW.m128d_f64[0];
    dVar17 = local_d8[0].Rotation.XY.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             local_d8[0].Rotation.ZW.m128d_f64[1] * local_138.Rotation.ZW.m128d_f64[1];
    auVar13._8_4_ = SUB84(dVar11,0);
    auVar13._0_8_ = dVar20;
    auVar13._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    __return_storage_ptr__->X = dVar20;
    __return_storage_ptr__->Y = (double)auVar13._8_8_;
    dVar20 = local_d8[0].Rotation.ZW.m128d_f64[0] * local_138.Rotation.ZW.m128d_f64[1];
    local_138.Rotation.ZW.m128d_f64[0] =
         local_d8[0].Rotation.ZW.m128d_f64[0] * local_138.Rotation.ZW.m128d_f64[0];
  }
  else {
    GetWorldBoneTransformAtTime(this,&local_138,param_2,param_6,'\0');
    if (param_4 != '\0') {
      GetWorldBoneTransformAtTime(this,local_d8,param_2,param_6,param_4);
      dVar6 = param_7->Z;
      dVar8 = param_7->W;
      dVar9 = param_7->X;
      dVar21 = param_7->Y;
      local_d8[0].Rotation.XY.m128d_f64[0] =
           local_d8[0].Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_d8[0].Rotation.XY.m128d_f64[1] =
           local_d8[0].Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_d8[0].Rotation.ZW.m128d_f64[0] =
           local_d8[0].Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_d8[0].Rotation.ZW.m128d_f64[1] =
           local_d8[0].Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar18 = local_d8[0].Rotation.XY.m128d_f64[0] * dVar8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_d8[0].Rotation.ZW.m128d_f64[1] * dVar9 +
               local_d8[0].Rotation.XY.m128d_f64[1] * dVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               local_d8[0].Rotation.ZW.m128d_f64[0] * dVar21 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar19 = local_d8[0].Rotation.XY.m128d_f64[0] * dVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               local_d8[0].Rotation.ZW.m128d_f64[1] * dVar21 +
               local_d8[0].Rotation.XY.m128d_f64[1] * dVar8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               local_d8[0].Rotation.ZW.m128d_f64[0] * dVar9 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      local_138.Rotation.XY.m128d_f64[0] =
           local_138.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_138.Rotation.XY.m128d_f64[1] =
           local_138.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar5 = local_d8[0].Rotation.XY.m128d_f64[0] * dVar21 * dVar16 +
              local_d8[0].Rotation.ZW.m128d_f64[1] * dVar6 +
              local_d8[0].Rotation.XY.m128d_f64[1] * dVar9 * dVar20 +
              local_d8[0].Rotation.ZW.m128d_f64[0] * dVar8 * dVar11;
      dVar6 = local_d8[0].Rotation.XY.m128d_f64[0] * dVar9 * dVar3 +
              local_d8[0].Rotation.ZW.m128d_f64[1] * dVar8 +
              local_d8[0].Rotation.XY.m128d_f64[1] * dVar21 * dVar17 +
              local_d8[0].Rotation.ZW.m128d_f64[0] * dVar6 * dVar12;
      local_138.Rotation.ZW.m128d_f64[0] =
           local_138.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_138.Rotation.ZW.m128d_f64[1] =
           local_138.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dStack_150 = auVar4._8_8_;
      dVar8 = local_138.Rotation.XY.m128d_f64[0] * dVar6 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              local_138.Rotation.ZW.m128d_f64[1] * dVar18 +
              local_138.Rotation.XY.m128d_f64[1] * dVar5 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              local_138.Rotation.ZW.m128d_f64[0] * dVar19 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar9 = local_138.Rotation.XY.m128d_f64[0] * dVar5 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              local_138.Rotation.ZW.m128d_f64[1] * dVar19 +
              local_138.Rotation.XY.m128d_f64[1] * dStack_150 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              local_138.Rotation.ZW.m128d_f64[0] * dVar18 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      __return_storage_ptr__->X = dVar8;
      __return_storage_ptr__->Y = (double)auVar7._8_8_;
      dVar20 = local_138.Rotation.XY.m128d_f64[0] * dVar19 * dVar16 +
               local_138.Rotation.ZW.m128d_f64[1] * dVar5 +
               local_138.Rotation.XY.m128d_f64[1] * dVar18 * dVar20 +
               local_138.Rotation.ZW.m128d_f64[0] * dVar6 * dVar11;
      dVar11 = local_138.Rotation.XY.m128d_f64[0] * dVar18 * dVar3 +
               local_138.Rotation.ZW.m128d_f64[1] * dStack_150 +
               local_138.Rotation.XY.m128d_f64[1] * dVar19 * dVar17 +
               local_138.Rotation.ZW.m128d_f64[0] * dVar5 * dVar12;
      auVar14._8_4_ = SUB84(dVar11,0);
      auVar14._0_8_ = dVar20;
      auVar14._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      __return_storage_ptr__->Z = dVar20;
      __return_storage_ptr__->W = (double)auVar14._8_8_;
      return __return_storage_ptr__;
    }
    dVar3 = param_7->Z;
    dVar20 = param_7->W;
    uVar1 = param_7->X;
    uVar2 = param_7->Y;
    uVar22 = (undefined4)uVar1;
    uVar23 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar24 = (undefined4)uVar2;
    uVar25 = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_138.Rotation.XY.m128d_f64[0] =
         local_138.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_d8[0].Rotation.XY.m128d_f64[1] =
         local_138.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_138.Rotation.ZW.m128d_f64[0] =
         local_138.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_138.Rotation.ZW.m128d_f64[1] =
         local_138.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar11 = local_138.Rotation.XY.m128d_f64[0] * dVar20 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_138.Rotation.ZW.m128d_f64[1] * (double)uVar1 +
             local_d8[0].Rotation.XY.m128d_f64[1] * dVar3 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             local_138.Rotation.ZW.m128d_f64[0] * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar12 = local_138.Rotation.XY.m128d_f64[0] * dVar3 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_138.Rotation.ZW.m128d_f64[1] * (double)uVar2 +
             local_d8[0].Rotation.XY.m128d_f64[1] * dVar20 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_138.Rotation.ZW.m128d_f64[0] * (double)uVar1 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar16 = local_138.Rotation.XY.m128d_f64[0] * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             local_138.Rotation.ZW.m128d_f64[1] * dVar3;
    dVar17 = local_138.Rotation.XY.m128d_f64[0] * (double)uVar1 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             local_138.Rotation.ZW.m128d_f64[1] * dVar20;
    auVar10._8_4_ = SUB84(dVar12,0);
    auVar10._0_8_ = dVar11;
    auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    __return_storage_ptr__->X = dVar11;
    __return_storage_ptr__->Y = (double)auVar10._8_8_;
    dVar20 = local_138.Rotation.ZW.m128d_f64[0] * dVar20;
    local_138.Rotation.ZW.m128d_f64[0] = local_138.Rotation.ZW.m128d_f64[0] * dVar3;
  }
  dVar20 = dVar16 + local_d8[0].Rotation.XY.m128d_f64[1] * (double)CONCAT44(uVar23,uVar22) *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = dVar17 + local_d8[0].Rotation.XY.m128d_f64[1] * (double)CONCAT44(uVar25,uVar24) *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           local_138.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar20;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  __return_storage_ptr__->Z = dVar20;
  __return_storage_ptr__->W = (double)auVar15._8_8_;
  return __return_storage_ptr__;
}

// GetSampleVelocity @ 14a8be790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::PoseSearch::FSearchContext::GetSampleVelocity
          (FSearchContext *this,TVector<double> *__return_storage_ptr__,float param_1,float param_2,
          schar param_3,schar param_4,FName *param_5,FName *param_6,bool param_7,
          EPermutationTimeType param_8,TVector<double> *param_9)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  double dVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar31;
  float local_158;
  float local_154;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TTransform<double> local_118 [2];
  
  local_158 = 0.0;
  local_154 = 0.0;
  UPoseSearchFeatureChannel::GetPermutationTimeOffsets
            (param_8,this->DesiredPermutationTimeOffset,&local_158,&local_154);
  fVar25 = param_1 + local_158;
  fVar24 = param_2 + local_154;
  if (param_9 == (TVector<double> *)0x0) {
    fVar18 = fVar24;
    if (param_7) {
      fVar18 = fVar24 - __real_3c888889;
    }
    GetSamplePositionInternal
              (this,(TVector<double> *)&local_138._s_0,fVar25 - __real_3c888889,fVar18,param_3,
               param_4,param_5,param_6,(TVector<double> *)0x0);
    GetSamplePositionInternal
              (this,(TVector<double> *)&local_150._s_0,fVar25,fVar24,param_3,param_4,param_5,param_6
               ,(TVector<double> *)0x0);
    dVar19 = (local_150._s_0.Y - local_138._s_0.Y) * __real_404dffffe5c00017;
    dVar1 = (local_150._s_0.Z - local_138._s_0.Z) * __real_404dffffe5c00017;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (local_150._s_0.X - local_138._s_0.X) * __real_404dffffe5c00017;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar19;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  else {
    GetWorldBoneTransformAtTime(this,local_118,fVar24,param_6,'\0');
    dVar1 = (param_9->field0_0x0)._s_0.Z;
    auVar2 = *(undefined1 (*) [16])&param_9->field0_0x0;
    local_118[0].Rotation.XY.m128d_f64[0] =
         local_118[0].Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_118[0].Rotation.XY.m128d_f64[1] =
         local_118[0].Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_118[0].Rotation.ZW.m128d_f64[0] =
         local_118[0].Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_118[0].Rotation.ZW.m128d_f64[1] =
         local_118[0].Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar30 = auVar2._8_8_;
    auVar20._8_4_ = SUB84(local_118[0].Rotation.XY.m128d_f64[1],0);
    auVar20._0_8_ = local_118[0].Rotation.XY.m128d_f64[0];
    auVar20._12_4_ = (int)((ulonglong)local_118[0].Rotation.XY.m128d_f64[1] >> 0x20);
    auVar9._8_4_ = SUB84(local_118[0].Rotation.ZW.m128d_f64[0],0);
    auVar9._0_8_ = local_118[0].Rotation.XY.m128d_f64[1];
    auVar9._12_4_ = (int)((ulonglong)local_118[0].Rotation.ZW.m128d_f64[0] >> 0x20);
    auVar21._8_4_ = SUB84(local_118[0].Rotation.ZW.m128d_f64[1],0);
    auVar21._0_8_ = local_118[0].Rotation.ZW.m128d_f64[0];
    auVar21._12_4_ = (int)((ulonglong)local_118[0].Rotation.ZW.m128d_f64[1] >> 0x20);
    auVar21 = blendpd(auVar20,auVar21,2);
    auVar28._0_8_ =
         dVar30 * local_118[0].Rotation.XY.m128d_f64[0] -
         local_118[0].Rotation.XY.m128d_f64[1] * auVar2._0_8_;
    auVar28._8_8_ = dVar1 * local_118[0].Rotation.XY.m128d_f64[1] - auVar9._8_8_ * dVar30;
    dVar15 = auVar21._8_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar1;
    auVar16 = blendpd(auVar2,auVar13,2);
    auVar17._0_8_ = auVar16._0_8_ * local_118[0].Rotation.ZW.m128d_f64[0] - auVar21._0_8_ * dVar1;
    auVar17._8_8_ = auVar16._8_8_ * local_118[0].Rotation.ZW.m128d_f64[1] - dVar15 * 0.0;
    auVar16 = blendpd(auVar28,auVar17,2);
    auVar29._0_8_ = auVar16._0_8_ + auVar16._0_8_;
    auVar29._8_8_ = auVar16._8_8_ + auVar16._8_8_;
    dVar4 = auVar28._8_8_ + auVar28._8_8_;
    dVar19 = auVar17._0_8_ + auVar17._0_8_;
    uVar31 = (undefined4)((ulonglong)dVar19 >> 0x20);
    auVar10._8_4_ = SUB84(dVar19,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = uVar31;
    auVar26._8_4_ = SUB84(dVar19,0);
    auVar26._0_8_ = dVar4;
    auVar26._12_4_ = uVar31;
    auVar16 = blendpd(auVar26,auVar29,2);
    dVar3 = auVar29._0_8_ * local_118[0].Rotation.XY.m128d_f64[1] -
            auVar10._8_8_ * local_118[0].Rotation.ZW.m128d_f64[0];
    auVar11._8_4_ = SUB84(auVar29._8_8_,0);
    auVar11._0_8_ = auVar29._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
    auVar5._4_8_ = dVar15;
    auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar22._0_8_ = auVar5._0_8_ << 0x20;
    auVar22._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar22._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar27._0_8_ =
         auVar16._0_8_ * local_118[0].Rotation.ZW.m128d_f64[0] - auVar29._0_8_ * auVar21._0_8_;
    auVar27._8_8_ = auVar16._8_8_ * local_118[0].Rotation.ZW.m128d_f64[1] - auVar11._8_8_ * dVar15;
    auVar23._8_8_ = auVar22._8_8_;
    auVar23._0_8_ = local_118[0].Scale3D.ZW.m128d_f64[0];
    auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
    lVar6 = -(ulonglong)
             ((double)CONCAT44(local_118[0].Scale3D.ZW.m128d_f64[0]._4_4_ &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_118[0].Scale3D.ZW.m128d_f64[0]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar12._8_4_ = SUB84(dVar3,0);
    auVar12._0_8_ =
         dVar19 * local_118[0].Rotation.XY.m128d_f64[0] -
         dVar4 * local_118[0].Rotation.XY.m128d_f64[1];
    auVar12._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar13 = blendpd(auVar12,auVar27,2);
    lVar7 = -(ulonglong)
             ((double)CONCAT44(local_118[0].Scale3D.XY.m128d_f64[0]._4_4_ &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_118[0].Scale3D.XY.m128d_f64[0]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar8 = -(ulonglong)
             ((double)CONCAT44(local_118[0].Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                               local_118[0].Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88) <=
             (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar14._4_4_ = local_118[0].Scale3D.XY.m128d_f64[0]._4_4_;
    auVar14._0_4_ = local_118[0].Scale3D.XY.m128d_f64[0]._0_4_;
    auVar14._8_4_ = local_118[0].Scale3D.XY.m128d_f64[1]._0_4_;
    auVar14._12_4_ = local_118[0].Scale3D.XY.m128d_f64[1]._4_4_;
    auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
    dVar19 = (double)CONCAT44(~(uint)((ulonglong)lVar8 >> 0x20) & auVar14._12_4_,
                              ~(uint)lVar8 & auVar14._8_4_) *
             (dVar19 * local_118[0].Rotation.ZW.m128d_f64[1] + dVar30 + auVar27._0_8_);
    auVar16._8_4_ = SUB84(dVar19,0);
    auVar16._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar14._4_4_,
                          ~(uint)lVar7 & auVar14._0_4_) *
         (dVar4 * local_118[0].Rotation.ZW.m128d_f64[1] + auVar2._0_8_ + dVar3);
    auVar16._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar16;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar21._4_4_,
                          ~(uint)lVar6 & auVar21._0_4_) *
         (auVar29._0_8_ * local_118[0].Rotation.ZW.m128d_f64[1] + dVar1 + auVar13._0_8_);
  }
  return __return_storage_ptr__;
}

// GetWorldBoneTransformAtTime @ 14a8bf6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UE::PoseSearch::FSearchContext::GetWorldBoneTransformAtTime
          (FSearchContext *this,TTransform<double> *__return_storage_ptr__,float param_1,
          FName *param_2,schar param_3)

{
  __m128d *p_Var1;
  undefined4 *puVar2;
  UPoseSearchSchema *this_00;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  TArrayView<FBoneReference_const_,int> *this_01;
  FBoneReference *pFVar10;
  IPoseHistory *pIVar11;
  USkeleton *pUVar12;
  longlong lVar13;
  TMap<unsigned_int,UE::Math::TTransform<double>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>_>
  *pTVar14;
  uint uVar15;
  FCachedQuery *pFVar16;
  double *pdVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_378 [32];
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  undefined1 local_348;
  uint local_338;
  uint local_330 [2];
  uint local_328 [2];
  int local_320;
  uint local_31c;
  undefined1 local_318 [4];
  FName local_314;
  FName local_30c;
  FName local_304;
  FName local_2fc;
  uint *local_2f0;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  TArrayView<FBoneReference_const_,int> local_2a8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (((this->CachedQueries).ArrayNum == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CachedQueries.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x46d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TTransform<double> *)(*pcVar4)();
    return pTVar9;
  }
  iVar8 = (this->CachedQueries).ArrayNum;
  uVar15 = iVar8 - 1;
  uVar19 = 0;
  if ((int)uVar15 < iVar8) {
    uVar19 = ~uVar15 >> 0x1f;
  }
  if (uVar19 == 0) {
    local_358 = (FScriptContainerElement *)(longlong)(int)uVar15;
    local_350 = (FScriptContainerElement *)(longlong)iVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TTransform<double> *)(*pcVar4)();
      return pTVar9;
    }
  }
  pFVar16 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (pFVar16 == (FCachedQuery *)0x0) {
    pFVar16 = (FCachedQuery *)&this->CachedQueries;
  }
  this_00 = pFVar16[(longlong)(this->CachedQueries).ArrayNum + -1].Schema;
  if ((this_00 == (UPoseSearchSchema *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Schema",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x46f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TTransform<double> *)(*pcVar4)();
    return pTVar9;
  }
  if (param_3 == -1) {
    uVar19 = 0xffff;
  }
  else {
    this_01 = UPoseSearchSchema::GetBoneReferences(this_00,&local_2a8,param_2);
    pFVar10 = TArrayView<FBoneReference_const_,int>::operator[](this_01,(int)param_3);
    uVar19 = pFVar10->BoneIndex;
  }
  FVar3 = *param_2;
  local_338 = uVar19;
  uVar15 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar19 = uVar19 & 0xffff;
  local_330[0] = (int)param_1 * 0x40 + FVar3.Number + ((uint)param_1 >> 2) + 0x9e3779b9 + uVar15 ^
                 (uint)param_1;
  local_320 = (local_330[0] >> 2) + local_330[0] * 0x40;
  local_328[0] = local_320 + -0x61c88647 + uVar19 ^ local_330[0];
  local_31c = local_328[0];
  iVar8 = TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<unsigned_int>
                    ((TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                      *)&this->CachedTransforms,local_328[0],local_328);
  if (iVar8 != -1) {
    pTVar14 = *(TMap<unsigned_int,UE::Math::TTransform<double>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>_>
                **)&(this->CachedTransforms).field_0x2000;
    if (pTVar14 ==
        (TMap<unsigned_int,UE::Math::TTransform<double>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>_>
         *)0x0) {
      pTVar14 = &this->CachedTransforms;
    }
    pdVar17 = (double *)(&pTVar14->field_0x0 + (longlong)iVar8 * 0x80 + 0x10);
    if (&pTVar14->field_0x0 + (longlong)iVar8 * 0x80 == (undefined1 *)0x0) {
      pdVar17 = (double *)0x0;
    }
    if (pdVar17 != (double *)0x0) {
      dVar5 = pdVar17[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar17;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar5;
      dVar5 = pdVar17[3];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar17[2];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
      dVar5 = pdVar17[5];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar17[4];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
      dVar5 = pdVar17[7];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar17[6];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
      dVar5 = pdVar17[9];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar17[8];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
      local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pdVar17 + 10);
      local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)pdVar17 + 0x54);
      local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)(pdVar17 + 0xb);
      local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)pdVar17 + 0x5c);
      goto LAB_14a8bfe63;
    }
  }
  local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  if ((short)local_338 == 0) {
    pTVar9 = GetWorldRootBoneTransformAtTime(this,&local_298,param_1,param_2);
    uVar21 = *(undefined4 *)(pTVar9->Rotation).XY.m128d_f64;
    uVar22 = *(undefined4 *)((longlong)(pTVar9->Rotation).XY.m128d_f64 + 4);
    uVar23 = *(undefined4 *)((pTVar9->Rotation).XY.m128d_f64 + 1);
    uVar24 = *(undefined4 *)((longlong)(pTVar9->Rotation).XY.m128d_f64 + 0xc);
    local_1d8.Rotation.XY.m128d_f64 = *&(pTVar9->Rotation).XY.m128d_f64;
    p_Var1 = &(pTVar9->Rotation).ZW;
    uVar25 = *(undefined4 *)p_Var1->m128d_f64;
    uVar26 = *(undefined4 *)((longlong)(pTVar9->Rotation).ZW.m128d_f64 + 4);
    uVar27 = *(undefined4 *)((pTVar9->Rotation).ZW.m128d_f64 + 1);
    uVar28 = *(undefined4 *)((longlong)(pTVar9->Rotation).ZW.m128d_f64 + 0xc);
    local_1d8.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
    uVar29 = *(undefined4 *)(pTVar9->Translation).XY.m128d_f64;
    uVar30 = *(undefined4 *)((longlong)(pTVar9->Translation).XY.m128d_f64 + 4);
    uVar31 = *(undefined4 *)((pTVar9->Translation).XY.m128d_f64 + 1);
    uVar32 = *(undefined4 *)((longlong)(pTVar9->Translation).XY.m128d_f64 + 0xc);
    local_1d8.Translation.XY.m128d_f64 = *&(pTVar9->Translation).XY.m128d_f64;
    p_Var1 = &(pTVar9->Translation).ZW;
    uVar33 = *(undefined4 *)p_Var1->m128d_f64;
    uVar34 = *(undefined4 *)((longlong)(pTVar9->Translation).ZW.m128d_f64 + 4);
    uVar35 = *(undefined4 *)((pTVar9->Translation).ZW.m128d_f64 + 1);
    uVar36 = *(undefined4 *)((longlong)(pTVar9->Translation).ZW.m128d_f64 + 0xc);
    local_1d8.Translation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
    uVar37 = *(undefined4 *)(pTVar9->Scale3D).XY.m128d_f64;
    uVar38 = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 4);
    uVar39 = *(undefined4 *)((pTVar9->Scale3D).XY.m128d_f64 + 1);
    uVar40 = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 0xc);
    local_1d8.Scale3D.XY.m128d_f64 = *&(pTVar9->Scale3D).XY.m128d_f64;
    uVar41 = *(undefined4 *)(pTVar9->Scale3D).ZW.m128d_f64;
    uVar42 = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 4);
    uVar43 = *(undefined4 *)((pTVar9->Scale3D).ZW.m128d_f64 + 1);
    uVar44 = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 0xc);
  }
  else {
    local_330[0] = RootBoneIndexTypeHash + local_320 + -0x61c88647 ^ local_330[0];
    iVar8 = TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
            ::FindIndexByHash<unsigned_int>
                      ((TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                        *)&this->CachedTransforms,local_330[0],local_330);
    if (iVar8 == -1) {
LAB_14a8bfa47:
      pTVar9 = GetWorldRootBoneTransformAtTime(this,&local_238,param_1,param_2);
    }
    else {
      pTVar14 = *(TMap<unsigned_int,UE::Math::TTransform<double>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>_>
                  **)&(this->CachedTransforms).field_0x2000;
      if (pTVar14 ==
          (TMap<unsigned_int,UE::Math::TTransform<double>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>_>
           *)0x0) {
        pTVar14 = &this->CachedTransforms;
      }
      pTVar9 = (TTransform<double> *)(&pTVar14->field_0x0 + (longlong)iVar8 * 0x80 + 0x10);
      if (&pTVar14->field_0x0 + (longlong)iVar8 * 0x80 == (undefined1 *)0x0) {
        pTVar9 = (TTransform<double> *)0x0;
      }
      if (pTVar9 == (TTransform<double> *)0x0) goto LAB_14a8bfa47;
    }
    local_1d8.Rotation.XY.m128d_f64 = *&(pTVar9->Rotation).XY.m128d_f64;
    local_1d8.Rotation.ZW.m128d_f64 = *&(pTVar9->Rotation).ZW.m128d_f64;
    local_1d8.Translation.XY.m128d_f64 = *&(pTVar9->Translation).XY.m128d_f64;
    local_1d8.Translation.ZW.m128d_f64 = *&(pTVar9->Translation).ZW.m128d_f64;
    local_1d8.Scale3D.XY.m128d_f64 = *&(pTVar9->Scale3D).XY.m128d_f64;
    local_1d8.Scale3D.ZW.m128d_f64 = *&(pTVar9->Scale3D).ZW.m128d_f64;
    pIVar11 = GetPoseHistory(this,param_2);
    if ((pIVar11 == (IPoseHistory *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoseHistory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                           ,0x494,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TTransform<double> *)(*pcVar4)();
      return pTVar9;
    }
    pUVar12 = UPoseSearchSchema::GetSkeleton(this_00,param_2);
    local_348 = 0;
    local_350 = (FScriptContainerElement *)((ulonglong)local_350 & 0xffffffffffff0000);
    local_358 = (FScriptContainerElement *)CONCAT62(local_358._2_6_,(short)local_338);
    local_118.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_118.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_118.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_118.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_118.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_118.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    cVar7 = (**(code **)(*(longlong *)pIVar11 + 8))(pIVar11,param_1,&local_118,pUVar12);
    if (cVar7 == '\0') {
      if (pUVar12 == (USkeleton *)0x0) {
        if (2 < (byte)LogPoseSearch._0_1_) {
          local_2fc = (FName)this_00->_padding_;
          ::FName::ToString(&local_2fc,&local_2c8);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          goto LAB_14a8bfcc3;
        }
      }
      else {
        cVar7 = (**(code **)(*(longlong *)pIVar11 + 0x38))(pIVar11);
        if ((cVar7 == '\0') && (2 < (byte)LogPoseSearch._0_1_)) {
          local_314 = (FName)this_00->_padding_;
          ::FName::ToString(&local_314,&local_2d8);
          local_30c = (FName)pUVar12->_padding_;
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_2d8.Data.ArrayNum != 0) {
            FVar18.Data = local_2d8.Data.AllocatorInstance.Data;
          }
          ::FName::ToString(&local_30c,&local_2e8);
          iVar8 = (pUVar12->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_2e8.Data.ArrayNum != 0) {
            FVar20.Data = local_2e8.Data.AllocatorInstance.Data;
          }
          if (iVar8 <= (int)uVar19) {
            local_358 = (FScriptContainerElement *)(longlong)(int)uVar19;
            local_350 = (FScriptContainerElement *)(longlong)iVar8;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TTransform<double> *)(*pcVar4)();
              return pTVar9;
            }
          }
          local_304 = *(FName *)((pUVar12->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.
                                 Data + (ulonglong)uVar19 * 0xc);
          ::FName::ToString(&local_304,&local_2b8);
          local_358 = FVar20.Data;
          local_350 = FVar18.Data;
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          local_2c8.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
            local_2c8.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
          }
LAB_14a8bfcc3:
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    local_178.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_178.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_178.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_178.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_178.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_178.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_178,&local_118,&local_1d8);
    uVar21 = local_178.Rotation.XY.m128d_f64[0]._0_4_;
    uVar22 = local_178.Rotation.XY.m128d_f64[0]._4_4_;
    uVar23 = local_178.Rotation.XY.m128d_f64[1]._0_4_;
    uVar24 = local_178.Rotation.XY.m128d_f64[1]._4_4_;
    uVar25 = local_178.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar26 = local_178.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar27 = local_178.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar28 = local_178.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar29 = local_178.Translation.XY.m128d_f64[0]._0_4_;
    uVar30 = local_178.Translation.XY.m128d_f64[0]._4_4_;
    uVar31 = local_178.Translation.XY.m128d_f64[1]._0_4_;
    uVar32 = local_178.Translation.XY.m128d_f64[1]._4_4_;
    uVar33 = local_178.Translation.ZW.m128d_f64[0]._0_4_;
    uVar34 = local_178.Translation.ZW.m128d_f64[0]._4_4_;
    uVar35 = local_178.Translation.ZW.m128d_f64[1]._0_4_;
    uVar36 = local_178.Translation.ZW.m128d_f64[1]._4_4_;
    uVar37 = local_178.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar38 = local_178.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar39 = local_178.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar40 = local_178.Scale3D.XY.m128d_f64[1]._4_4_;
    local_1d8.Rotation.XY.m128d_f64[0] = local_178.Rotation.XY.m128d_f64[0];
    local_1d8.Rotation.XY.m128d_f64[1] = local_178.Rotation.XY.m128d_f64[1];
    local_1d8.Rotation.ZW.m128d_f64[0] = local_178.Rotation.ZW.m128d_f64[0];
    local_1d8.Rotation.ZW.m128d_f64[1] = local_178.Rotation.ZW.m128d_f64[1];
    local_1d8.Translation.XY.m128d_f64[0] = local_178.Translation.XY.m128d_f64[0];
    local_1d8.Translation.XY.m128d_f64[1] = local_178.Translation.XY.m128d_f64[1];
    local_1d8.Translation.ZW.m128d_f64[0] = local_178.Translation.ZW.m128d_f64[0];
    local_1d8.Translation.ZW.m128d_f64[1] = local_178.Translation.ZW.m128d_f64[1];
    local_1d8.Scale3D.XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
    local_1d8.Scale3D.XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
    uVar41 = local_178.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar42 = local_178.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar43 = local_178.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar44 = local_178.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  local_2f0 = &local_31c;
  local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar42;
  local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar41;
  local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar43;
  local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar44;
  TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
              *)&this->CachedTransforms,(TKeyInitializer<unsigned_int_const_&> *)local_318,
             (bool *)&local_2f0);
  pTVar14 = *(TMap<unsigned_int,UE::Math::TTransform<double>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>_>
              **)&(this->CachedTransforms).field_0x2000;
  if (pTVar14 ==
      (TMap<unsigned_int,UE::Math::TTransform<double>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>_>
       *)0x0) {
    pTVar14 = &this->CachedTransforms;
  }
  lVar13 = (longlong)(int)local_318 * 0x80;
  puVar2 = (undefined4 *)(&pTVar14->field_0x0 + lVar13 + 0x10);
  *puVar2 = uVar21;
  puVar2[1] = uVar22;
  puVar2[2] = uVar23;
  puVar2[3] = uVar24;
  puVar2 = (undefined4 *)(&pTVar14->field_0x0 + lVar13 + 0x20);
  *puVar2 = uVar25;
  puVar2[1] = uVar26;
  puVar2[2] = uVar27;
  puVar2[3] = uVar28;
  puVar2 = (undefined4 *)(&pTVar14->field_0x0 + lVar13 + 0x30);
  *puVar2 = uVar29;
  puVar2[1] = uVar30;
  puVar2[2] = uVar31;
  puVar2[3] = uVar32;
  puVar2 = (undefined4 *)(&pTVar14->field_0x0 + lVar13 + 0x40);
  *puVar2 = uVar33;
  puVar2[1] = uVar34;
  puVar2[2] = uVar35;
  puVar2[3] = uVar36;
  puVar2 = (undefined4 *)(&pTVar14->field_0x0 + lVar13 + 0x50);
  *puVar2 = uVar37;
  puVar2[1] = uVar38;
  puVar2[2] = uVar39;
  puVar2[3] = uVar40;
  puVar2 = (undefined4 *)(&pTVar14->field_0x0 + lVar13 + 0x60);
  *puVar2 = uVar41;
  puVar2[1] = uVar42;
  puVar2[2] = uVar43;
  puVar2[3] = uVar44;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_1d8.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_1d8.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_1d8.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_1d8.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_1d8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_1d8.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_1d8.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_1d8.Scale3D.XY.m128d_f64[1];
LAB_14a8bfe63:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetWorldRootBoneTransformAtTime @ 14a8bfea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UE::PoseSearch::FSearchContext::GetWorldRootBoneTransformAtTime
          (FSearchContext *this,TTransform<double> *__return_storage_ptr__,float param_1,
          FName *param_2)

{
  int iVar1;
  UPoseSearchSchema *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TTransform<double> *pTVar6;
  IPoseHistory *pIVar7;
  USkeleton *pUVar8;
  uint uVar9;
  FCachedQuery *pFVar10;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->CachedQueries).ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CachedQueries.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x40b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar1 = (this->CachedQueries).ArrayNum;
  uVar9 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar9 < iVar1) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if (uVar5 == 0) {
    local_d8 = (ulonglong)(int)uVar9;
    local_d0 = (longlong)iVar1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pFVar10 = (this->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (pFVar10 == (FCachedQuery *)0x0) {
    pFVar10 = (FCachedQuery *)&this->CachedQueries;
  }
  this_00 = pFVar10[(longlong)(this->CachedQueries).ArrayNum + -1].Schema;
  if (this_00 == (UPoseSearchSchema *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Schema",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x40d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pIVar7 = GetPoseHistory(this,param_2);
  if (pIVar7 == (IPoseHistory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x411,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pcVar2 = *(code **)(*(longlong *)pIVar7 + 8);
  pUVar8 = UPoseSearchSchema::GetSkeleton(this_00,param_2);
  local_c8 = 0;
  local_d0 = CONCAT62(local_d0._2_6_,0xfffe);
  local_d8 = local_d8 & 0xffffffffffff0000;
  cVar4 = (*pcVar2)(pIVar7,param_1,local_b8,pUVar8);
  if (cVar4 == '\0') {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_68._0_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_68._4_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_68._8_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_68._12_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_b8._0_8_;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)local_b8._8_8_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_a8._0_8_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_a8._8_8_;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)local_98._0_8_;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)local_98._8_8_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)local_88._0_8_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)local_88._8_8_;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)local_78._0_8_;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)local_78._8_8_;
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = local_68._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = local_68._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = local_68._8_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = local_68._12_4_;
  return __return_storage_ptr__;
}

// IsContinuingPoseDatabase @ 14a8c0aa0

bool __thiscall
UE::PoseSearch::FSearchContext::IsContinuingPoseDatabase
          (FSearchContext *this,UPoseSearchDatabase *param_1)

{
  undefined1 *this_00;
  bool bVar1;
  
  this_00 = &(this->ContinuingPoseSearchResult).field_0x4;
  if (*(int *)&this->ContinuingPoseSearchResult != -1) {
    bVar1 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)this_00,
                       (void *)0x0);
    if (!bVar1) {
      bVar1 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
              UEOpEquals<UPoseSearchDatabase,bool>
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)this_00,
                         param_1);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// IsCurrentResultFromDatabase @ 14a8c0b00

bool __thiscall
UE::PoseSearch::FSearchContext::IsCurrentResultFromDatabase
          (FSearchContext *this,UPoseSearchDatabase *param_1)

{
  undefined1 *this_00;
  bool bVar1;
  
  this_00 = &(this->ContinuingPoseSearchResult).field_0x4;
  if (*(int *)&this->ContinuingPoseSearchResult != -1) {
    bVar1 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)this_00,
                       (void *)0x0);
    if (!bVar1) {
      bVar1 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
              UEOpEquals<UPoseSearchDatabase,bool>
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)this_00,
                         param_1);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// ResetCurrentBestCost @ 14a8c54f0

void __thiscall UE::PoseSearch::FSearchContext::ResetCurrentBestCost(FSearchContext *this)

{
  return;
}

// Track @ 14a8ce670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FSearchContext::Track
          (FSearchContext *this,UPoseSearchDatabase *param_1,int param_2,EPoseCandidateFlags param_3
          ,FPoseSearchCost *param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FBestPoseCandidates *this_00;
  FPoseCandidate *pFVar4;
  uint uVar5;
  FPoseCandidateHeapCompare *pFVar6;
  FPoseCandidateHeapCompare local_res8 [8];
  UPoseSearchDatabase *local_res10;
  bool local_res18 [8];
  FPoseCandidateHeapCompare local_68;
  FPoseCandidateHeapCompare local_67 [7];
  FPoseCandidate local_60;
  FPoseCandidate local_50;
  FPoseCandidate local_40;
  FPoseCandidate local_30 [2];
  
  local_res10 = param_1;
  if ((param_1 == (UPoseSearchDatabase *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Database",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x556,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  this_00 = TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
            ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
                      ((TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
                        *)&this->BestPoseCandidatesMap,uVar5 >> 0x10 ^ uVar5,&local_res10);
  if (param_2 != -1) {
    if ((param_3 & (Valid_CurrentPose|Valid_ContinuingPose)) == None) {
      if ((this_00->TransientPoseCandidates).ArrayNum < 0x100) {
        pFVar6 = local_res8;
        pFVar4 = &local_50;
        local_50.Cost = (FPoseSearchCost)param_4->TotalCost;
        local_50.PoseIdx = param_2;
        local_50.PoseCandidateFlags = param_3;
      }
      else {
        fVar1 = *(float *)((this_00->TransientPoseCandidates).AllocatorInstance.Data + 4);
        if (fVar1 < param_4->TotalCost || fVar1 == param_4->TotalCost) {
          return;
        }
        TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_>::
        HeapPop<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare>
                  (&this_00->TransientPoseCandidates,local_30,&local_68,No);
        local_40.Cost = (FPoseSearchCost)param_4->TotalCost;
        pFVar6 = local_67;
        pFVar4 = &local_40;
        local_40.PoseIdx = param_2;
        local_40.PoseCandidateFlags = param_3;
      }
      TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_>::
      HeapPush<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare>
                (&this_00->TransientPoseCandidates,pFVar4,pFVar6);
    }
    else {
      local_res18[0] = false;
      local_60.Cost = (FPoseSearchCost)param_4->TotalCost;
      local_60.PoseIdx = param_2;
      local_60.PoseCandidateFlags = param_3;
      pFVar4 = TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
               ::FindOrAddByHash<UE::PoseSearch::FSearchContext::FPoseCandidate_const_&>
                         (&this_00->PermanentPoseCandidates,param_2,&local_60,local_res18);
      if (local_res18[0] != false) {
        fVar1 = (pFVar4->Cost).TotalCost;
        if (param_4->TotalCost <= fVar1 && fVar1 != param_4->TotalCost) {
          (pFVar4->Cost).TotalCost = param_4->TotalCost;
        }
        pFVar4->PoseCandidateFlags = pFVar4->PoseCandidateFlags | param_3;
        return;
      }
    }
  }
  return;
}

// Track @ 14a8ce820

void __thiscall
UE::PoseSearch::FSearchContext::Track
          (FSearchContext *this,UPoseSearchDatabase *param_1,int param_2,EPoseCandidateFlags param_3
          ,TArrayView<float_const_,int> *param_4,float param_5,float param_6)

{
  FSearchIndex *this_00;
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  TArrayView<float_const_,int> *pTVar7;
  float fVar8;
  float fVar9;
  FPoseSearchCost local_res18 [2];
  EPoseCandidateFlags local_res20;
  TArrayView<float_const_,int> local_1b8;
  TArrayView<float_const_,int> local_1a8;
  TArrayView<float_const_,int> local_198;
  TArrayView<float_const_,int> local_188;
  float *local_178;
  longlong lStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined8 local_148;
  float *local_138;
  longlong lStack_130;
  undefined8 local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float_const_,int> local_108;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_f8 [24];
  float *local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  longlong lStack_b8;
  undefined8 local_b0;
  float *local_98;
  longlong lStack_90;
  undefined8 local_88;
  
  local_res20 = param_3;
  if ((((param_2 < 0) || (param_1 == (UPoseSearchDatabase *)0x0)) ||
      ((param_1->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseIdx >= 0 && Database && Database->Schema",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x560,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((((param_1->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) ||
       (bVar3 = FSearchIndexBase::IsEmpty((FSearchIndexBase *)&param_1->SearchIndexPrivate), bVar3))
      || (iVar5 = ((param_1->Schema).field0_0x0.DebugPtr)->SchemaCardinality,
         iVar4 = FSearchIndex::GetNumDimensions(&param_1->SearchIndexPrivate), iVar4 != iVar5)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Schema && !SearchIndexPrivate.IsEmpty() && SearchIndexPrivate.GetNumDimensions() == Schema->SchemaCardinality"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                         ,0x46f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = &param_1->SearchIndexPrivate;
  if (param_2 < (int)(param_1->SearchIndexPrivate)._padding_) {
    if ((int)(param_1->SearchIndexPrivate)._padding_ == 0) {
      iVar5 = FSearchIndex::GetPCAValueIndex(this_00,param_2);
      fVar8 = __real_42c80000;
      if (iVar5 != -1) {
        GetOrBuildPCAQuery(this,&local_1b8,param_1);
        local_1a8.DataPtr = local_1b8.DataPtr;
        local_1a8.ArrayNum = local_1b8.ArrayNum;
        local_1a8._12_4_ = local_1b8._12_4_;
        pTVar7 = FSearchIndex::GetPCAPoseValues(this_00,&local_118,iVar5);
        local_198.DataPtr = pTVar7->DataPtr;
        local_198.ArrayNum = pTVar7->ArrayNum;
        local_198._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
        fVar8 = CompareFeatureVectors(&local_198,&local_1a8);
      }
    }
    else {
      GetOrBuildQuery(this,&local_188,(param_1->Schema).field0_0x0.DebugPtr);
      pfVar2 = param_4->DataPtr;
      iVar5 = param_4->ArrayNum;
      pTVar7 = FSearchIndex::GetPoseValues(this_00,&local_108,param_2);
      local_178 = pTVar7->DataPtr;
      iVar4 = (int)*(undefined8 *)&pTVar7->ArrayNum;
      if (((iVar4 != local_188.ArrayNum) || (iVar4 != iVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                             ,0x3d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_d0 = local_168;
      lStack_170 = (longlong)iVar4;
      lStack_150 = (longlong)local_188.ArrayNum;
      local_158 = local_188.DataPtr._0_4_;
      uStack_154 = local_188.DataPtr._4_4_;
      lStack_130 = (longlong)iVar5;
      local_b0 = local_148;
      local_88 = local_128;
      local_138 = pfVar2;
      local_e0 = local_178;
      lStack_d8 = lStack_170;
      lStack_b8 = lStack_150;
      local_98 = pfVar2;
      lStack_90 = lStack_130;
      fVar8 = Eigen::
              DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
              ::sum(local_f8);
      param_3 = local_res20;
    }
    uVar6 = 0;
    if (param_2 < (int)(param_1->SearchIndexPrivate)._padding_) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar9 = FGenericPlatformMath::LoadHalf
                      ((ushort *)
                       ((longlong)param_2 * 0xc + 10 + (param_1->SearchIndexPrivate)._padding_));
    local_res18[0].TotalCost = fVar9 + fVar8 + param_5 + param_6;
    Track(this,param_1,param_2,param_3,local_res18);
  }
  return;
}

// UpdateContinuingPoseSearchResult @ 14a8cf6d0

void __thiscall
UE::PoseSearch::FSearchContext::UpdateContinuingPoseSearchResult
          (FSearchContext *this,FSearchResult *param_1,FDatabasePoseIdx *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  FPoseSearchCost FVar3;
  float fVar4;
  undefined3 uVar5;
  int iVar6;
  bool bVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  
  if ((*(int *)param_1 != -1) &&
     (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &param_1->field_0x4,(void *)0x0), !bVar7)) {
    if (((param_2->PoseIdx == -1) ||
        (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                           (&param_2->Database,(void *)0x0), bVar7)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContinuingPoseValuesDatabasePoseIdx.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                           ,0x3b1,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar8 = FWeakObjectPtr::Get(&(param_2->Database).WeakPtr);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
    if ((*(longlong *)&pUVar9[1].field_0x8 != *(longlong *)&pUVar8[1].field_0x8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContinuingPoseSearchResult.Database->Schema == InContinuingPoseValuesDatabasePoseIdx.Database->Schema"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                           ,0x3b2,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx == param_2->PoseIdx) &&
     (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
              UEOpEquals<UPoseSearchDatabase_const_,bool>
                        (&(this->ContinuingPoseValuesDatabasePoseIdx).Database,&param_2->Database),
     bVar7)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  uVar2 = *(undefined4 *)&param_1->field_0x8;
  FVar3.TotalCost = (param_1->PoseCost).TotalCost;
  *(undefined8 *)&this->ContinuingPoseSearchResult = *(undefined8 *)param_1;
  *(undefined4 *)&(this->ContinuingPoseSearchResult).field_0x8 = uVar2;
  (this->ContinuingPoseSearchResult).PoseCost = (FPoseSearchCost)FVar3.TotalCost;
  fVar4 = param_1->AssetTime;
  (this->ContinuingPoseSearchResult).EventPoseIdx = param_1->EventPoseIdx;
  (this->ContinuingPoseSearchResult).AssetTime = fVar4;
  uVar5 = *(undefined3 *)&param_1->field_0x19;
  (this->ContinuingPoseSearchResult).bIsContinuingPoseSearch = param_1->bIsContinuingPoseSearch;
  *(undefined3 *)&(this->ContinuingPoseSearchResult).field_0x19 = uVar5;
  iVar6 = (param_2->Database).WeakPtr.ObjectIndex;
  (this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx = param_2->PoseIdx;
  (this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr.ObjectIndex = iVar6;
  (this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr.ObjectSerialNumber =
       (param_2->Database).WeakPtr.ObjectSerialNumber;
  if (bVar7) {
    UpdateContinuingPoseValues(this);
  }
  if (((((this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx != -1) &&
       (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                          (&(this->ContinuingPoseValuesDatabasePoseIdx).Database,(void *)0x0),
       !bVar7)) &&
      (pUVar8 = FWeakObjectPtr::Get(&(this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr),
      (this->ContinuingPoseValues).ArrayNum != *(int *)(*(longlong *)&pUVar8[1].field_0x8 + 0x68)))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ContinuingPoseValuesDatabasePoseIdx.IsValid() || ContinuingPoseValues.Num() == ContinuingPoseValuesDatabasePoseIdx.Database->Schema->SchemaCardinality"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                            ,0x3c2,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UpdateContinuingPoseValues @ 14a8cf890

void __thiscall UE::PoseSearch::FSearchContext::UpdateContinuingPoseValues(FSearchContext *this)

{
  int *piVar1;
  float *_Dst;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  UObject *pUVar7;
  TArrayView<float,int> *pTVar8;
  TArrayView<float_const_,int> *pTVar9;
  uint uVar10;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  if (((this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx == -1) ||
     (bVar5 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        (&(this->ContinuingPoseValuesDatabasePoseIdx).Database,(void *)0x0), bVar5))
  {
    local_58._8_8_ = (ulonglong)(uint)local_58._12_4_ << 0x20;
    (this->ContinuingPoseValues).DataPtr = (float *)0x0;
    (this->ContinuingPoseValues).ArrayNum = local_58.ArrayNum;
    *(undefined4 *)&(this->ContinuingPoseValues).field_0xc = local_58._12_4_;
    return;
  }
  this_00 = (UPoseSearchDatabase *)
            FWeakObjectPtr::Get(&(this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr);
  this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
  if ((int)this_01->_padding_ != 0) {
    pTVar9 = FSearchIndex::GetPoseValues
                       (this_01,&local_28,(this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx);
    iVar6 = pTVar9->ArrayNum;
    uVar4 = *(undefined4 *)&pTVar9->field_0xc;
    (this->ContinuingPoseValues).DataPtr = pTVar9->DataPtr;
    (this->ContinuingPoseValues).ArrayNum = iVar6;
    *(undefined4 *)&(this->ContinuingPoseValues).field_0xc = uVar4;
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&(this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr);
  piVar1 = &(this->ContinuingPoseValuesData).ArrayNum;
  uVar2 = *(uint *)(*(longlong *)&pUVar7[1].field_0x8 + 0x68);
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar2) {
    Core::Private::ReallocGrow<0,TMemStackAllocator<16>::ForElementType<float>_>
              (4,4,uVar2 - iVar6,&(this->ContinuingPoseValuesData).AllocatorInstance,piVar1,
               &(this->ContinuingPoseValuesData).ArrayMax);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar6) {
      uVar10 = iVar6 - uVar2;
      if (((int)(uVar10 | uVar2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (this->ContinuingPoseValuesData).AllocatorInstance.Data + (int)uVar2;
        iVar6 = (*piVar1 - uVar2) - uVar10;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (int)uVar10,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar10;
      }
    }
  }
  pTVar8 = TArrayView<float,int>::
           TArrayView<float,int><TArray<float,TMemStackAllocator<16>_>_&,TArray<float,TMemStackAllocator<16>_>_>
                     (&local_48,&this->ContinuingPoseValuesData);
  local_58.DataPtr = pTVar8->DataPtr;
  local_58.ArrayNum = pTVar8->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
  pTVar9 = FSearchIndex::GetReconstructedPoseValues
                     (this_01,&local_38,(this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx,
                      &local_58);
  iVar6 = pTVar9->ArrayNum;
  uVar4 = *(undefined4 *)&pTVar9->field_0xc;
  (this->ContinuingPoseValues).DataPtr = pTVar9->DataPtr;
  (this->ContinuingPoseValues).ArrayNum = iVar6;
  *(undefined4 *)&(this->ContinuingPoseValues).field_0xc = uVar4;
  return;
}

// UpdateCurrentBestCost @ 14a8cfaa0

void __thiscall
UE::PoseSearch::FSearchContext::UpdateCurrentBestCost(FSearchContext *this,FPoseSearchCost *param_1)

{
  return;
}

// UpdateCurrentResultPoseVector @ 14a8cfab0

void __thiscall UE::PoseSearch::FSearchContext::UpdateCurrentResultPoseVector(FSearchContext *this)

{
  int *piVar1;
  float *_Dst;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  UObject *pUVar7;
  TArrayView<float,int> *pTVar8;
  TArrayView<float_const_,int> *pTVar9;
  uint uVar10;
  TArrayView<float,int> TStack_58;
  TArrayView<float,int> TStack_48;
  TArrayView<float_const_,int> TStack_38;
  TArrayView<float_const_,int> TStack_28;
  
  if (((this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx == -1) ||
     (bVar5 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        (&(this->ContinuingPoseValuesDatabasePoseIdx).Database,(void *)0x0), bVar5))
  {
    TStack_58._8_8_ = (ulonglong)(uint)TStack_58._12_4_ << 0x20;
    (this->ContinuingPoseValues).DataPtr = (float *)0x0;
    (this->ContinuingPoseValues).ArrayNum = TStack_58.ArrayNum;
    *(undefined4 *)&(this->ContinuingPoseValues).field_0xc = TStack_58._12_4_;
    return;
  }
  this_00 = (UPoseSearchDatabase *)
            FWeakObjectPtr::Get(&(this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr);
  this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
  if ((int)this_01->_padding_ != 0) {
    pTVar9 = FSearchIndex::GetPoseValues
                       (this_01,&TStack_28,(this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx);
    iVar6 = pTVar9->ArrayNum;
    uVar4 = *(undefined4 *)&pTVar9->field_0xc;
    (this->ContinuingPoseValues).DataPtr = pTVar9->DataPtr;
    (this->ContinuingPoseValues).ArrayNum = iVar6;
    *(undefined4 *)&(this->ContinuingPoseValues).field_0xc = uVar4;
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&(this->ContinuingPoseValuesDatabasePoseIdx).Database.WeakPtr);
  piVar1 = &(this->ContinuingPoseValuesData).ArrayNum;
  uVar2 = *(uint *)(*(longlong *)&pUVar7[1].field_0x8 + 0x68);
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar2) {
    Core::Private::ReallocGrow<0,TMemStackAllocator<16>::ForElementType<float>_>
              (4,4,uVar2 - iVar6,&(this->ContinuingPoseValuesData).AllocatorInstance,piVar1,
               &(this->ContinuingPoseValuesData).ArrayMax);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar6) {
      uVar10 = iVar6 - uVar2;
      if (((int)(uVar10 | uVar2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (this->ContinuingPoseValuesData).AllocatorInstance.Data + (int)uVar2;
        iVar6 = (*piVar1 - uVar2) - uVar10;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (int)uVar10,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar10;
      }
    }
  }
  pTVar8 = TArrayView<float,int>::
           TArrayView<float,int><TArray<float,TMemStackAllocator<16>_>_&,TArray<float,TMemStackAllocator<16>_>_>
                     (&TStack_48,&this->ContinuingPoseValuesData);
  TStack_58.DataPtr = pTVar8->DataPtr;
  TStack_58.ArrayNum = pTVar8->ArrayNum;
  TStack_58._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
  pTVar9 = FSearchIndex::GetReconstructedPoseValues
                     (this_01,&TStack_38,(this->ContinuingPoseValuesDatabasePoseIdx).PoseIdx,
                      &TStack_58);
  iVar6 = pTVar9->ArrayNum;
  uVar4 = *(undefined4 *)&pTVar9->field_0xc;
  (this->ContinuingPoseValues).DataPtr = pTVar9->DataPtr;
  (this->ContinuingPoseValues).ArrayNum = iVar6;
  *(undefined4 *)&(this->ContinuingPoseValues).field_0xc = uVar4;
  return;
}

// GetContexts @ 14a92b400

TArrayView<FChooserEvaluationContext_*,int> * __thiscall
UE::PoseSearch::FSearchContext::GetContexts
          (FSearchContext *this,TArrayView<FChooserEvaluationContext_*,int> *__return_storage_ptr__)

{
  int iVar1;
  FSearchContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FChooserEvaluationContext_*,int> *pTVar5;
  
  pFVar2 = (FSearchContext *)(this->AnimContexts).AllocatorInstance.SecondaryData.Data;
  iVar1 = (this->AnimContexts).ArrayNum;
  if (pFVar2 != (FSearchContext *)0x0) {
    this = pFVar2;
  }
  __return_storage_ptr__->DataPtr = (FChooserEvaluationContext **)this;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FChooserEvaluationContext_*,int> *)(*pcVar3)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

