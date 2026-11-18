// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 11

// FindOrAddImpl<unsigned_int_const_&> @ 14a8a4ce0

FCachedChannel * __thiscall
TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
           *this,uint param_1,uint *param_2)

{
  TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
  *pTVar4;
  int local_res8 [2];
  uint *local_res20;
  
  iVar2 = TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<unsigned_int>(&this->Pairs,param_1,param_2);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
               **)&(this->Pairs).Elements.field_0x800;
    pTVar4 = this;
    if (pTVar1 != (TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
                   *)0x0) {
      pTVar4 = pTVar1;
    }
    puVar3 = &(pTVar4->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x20;
    if (puVar3 != (undefined1 *)0x0) {
      return (FCachedChannel *)(puVar3 + 8);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  pTVar1 = *(TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
             **)&(this->Pairs).Elements.field_0x800;
  if (pTVar1 != (TMapBase<unsigned_int,UE::PoseSearch::FCachedChannel,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (FCachedChannel *)(&(this->Pairs).Elements.field_0x8 + (longlong)local_res8[0] * 0x20);
}

// FindOrAddImpl<UPoseSearchDatabase_const_*_const_&> @ 14a8a4d90

FBestPoseCandidates * __thiscall
TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
          (TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
           *this,uint param_1,UPoseSearchDatabase **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UPoseSearchDatabase **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements);
        if ((UPoseSearchDatabase *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FBestPoseCandidates *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xd];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FBestPoseCandidates *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 8);
}

// Find @ 14a8b8cd0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14a8f7c50

int * __thiscall
TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
::Find(TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar2;
  uint uVar3;
  TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x58 != *(int *)&(this->Pairs).Elements.field_0x7c) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar7 != -1) {
      pTVar2 = *(TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 **)&(this->Pairs).Elements.field_0x50;
      do {
        pTVar4 = this;
        if (pTVar2 != (TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)0x0) {
          pTVar4 = pTVar2;
        }
        lVar1 = (longlong)iVar7 * 0x14;
        if (*(FName *)((longlong)&(pTVar4->Pairs).Hash + lVar1 + -0x80) == param_1) {
          if (iVar7 == -1) {
            return (int *)0x0;
          }
          if (pTVar2 != (TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)0x0) {
            this = pTVar2;
          }
          lVar1 = (longlong)&(this->Pairs).Hash + lVar1 + -0x80;
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 8);
          }
          return piVar5;
        }
        pTVar4 = this;
        if (pTVar2 != (TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)0x0) {
          pTVar4 = pTVar2;
        }
        iVar7 = *(int *)((longlong)&(pTVar4->Pairs).Hash + lVar1 + -0x74);
      } while (iVar7 != -1);
    }
  }
  return (int *)0x0;
}

// OrderIndependentCompareEqual @ 14a9037f0

bool __thiscall
TMapBase<UE::PoseSearch::FHistoricalPoseIndex,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>_>
::OrderIndependentCompareEqual
          (TMapBase<UE::PoseSearch::FHistoricalPoseIndex,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>_>
           *this,TMapBase<UE::PoseSearch::FHistoricalPoseIndex,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>_>
                 *param_1)

{
  FHistoricalPoseIndex *pFVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  uint *puVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<UE::PoseSearch::FHistoricalPoseIndex,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>_>
  *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    uVar7 = *(uint *)&(this->Pairs).Elements.field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    pfVar13 = (float *)0x0;
    uStack_48 = 0;
    uStack_44 = 1;
    pfVar11 = pfVar13;
    local_30 = uStack_48;
    if (uVar7 != 0) {
      puVar10 = *(uint **)&(this->Pairs).Elements.field_0x20;
      pfVar11 = (float *)(ulonglong)uVar7;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)TStack_70.Array;
      }
      uVar6 = *puVar10;
      pfVar9 = pfVar13;
      pfVar12 = pfVar13;
      local_30 = 0;
      uStack_48 = 0;
      while (uVar6 == 0) {
        iVar8 = (int)pfVar9;
        local_30 = (int)pfVar12 + 0x20;
        pfVar12 = (float *)(ulonglong)local_30;
        uStack_48 = iVar8 + 1;
        pfVar9 = (float *)(ulonglong)uStack_48;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_48)
        goto LAB_14a9038a9;
        uVar6 = puVar10[(longlong)iVar8 + 1];
      }
      uStack_44 = -uVar6 & uVar6;
      uVar3 = (ulonglong)uStack_44 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar6 = (local_30 - 1) + (int)lVar4;
      if ((int)uVar7 < (int)uVar6) {
        uVar6 = uVar7;
      }
      pfVar11 = (float *)(ulonglong)uVar6;
    }
LAB_14a9038a9:
    uStack_38 = 0xffffffff;
    uStack_34 = (uint)pfVar11;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    local_50 = this;
    local_40 = (undefined1 *)TStack_70.Array;
    TStack_70._padding_._0_4_ = uStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = uStack_34;
    if ((int)uStack_34 < (int)uVar7) {
      do {
        lVar4 = *(longlong *)&(this->Pairs).Elements;
        pFVar1 = (FHistoricalPoseIndex *)(lVar4 + (longlong)(int)pfVar11 * 0x18);
        uVar7 = UE::PoseSearch::GetTypeHash(pFVar1);
        iVar8 = TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                ::FindIndexByHash<UE::PoseSearch::FHistoricalPoseIndex>
                          (&param_1->Pairs,uVar7,pFVar1);
        if (iVar8 == -1) goto LAB_14a90399b;
        lVar2 = *(longlong *)&(param_1->Pairs).Elements + (longlong)iVar8 * 0x18;
        pfVar9 = (float *)(lVar2 + 0xc);
        if (lVar2 == 0) {
          pfVar9 = pfVar13;
        }
        if ((pfVar9 == (float *)0x0) ||
           (*(float *)(lVar4 + 0xc + (longlong)(int)pfVar11 * 0x18) != *pfVar9)) goto LAB_14a90399b;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        pfVar11 = (float *)(ulonglong)(uint)TStack_70.CurrentBitIndex;
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
    bVar5 = true;
  }
  else {
LAB_14a90399b:
    bVar5 = false;
  }
  return bVar5;
}

// Emplace<FName> @ 14a9111e0

int * __thiscall
TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
::Emplace<FName>(TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 *this,FName *param_1)

{
  undefined8 uVar1;
  TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_18);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,int>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined4 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0xc) = 0xffffffff;
  }
  uVar1 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  bVar3 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::TryReplaceExisting(&this->Pairs,uVar4,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::RehashOrLink(&this->Pairs,uVar4,local_18.Pointer,local_res8[0]);
  }
  pTVar2 = *(TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
             **)&(this->Pairs).Elements.field_0x50;
  if (pTVar2 != (TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 *)0x0) {
    this = pTVar2;
  }
  return (int *)((longlong)&(this->Pairs).Hash + lVar5 * 0x14 + -0x78);
}

// FindOrAddImpl<FName_const_&> @ 14a912550

TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_> *
__thiscall
TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
  *pTVar4;
  int local_res8 [2];
  FName *local_res20;
  
  iVar2 = TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<FName>(&this->Pairs,param_1,param_2);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
               **)&(this->Pairs).Elements.field_0x900;
    pTVar4 = this;
    if (pTVar1 != (TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
                   *)0x0) {
      pTVar4 = pTVar1;
    }
    puVar3 = &(pTVar4->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x120;
    if (puVar3 != (undefined1 *)0x0) {
      return (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
              *)(puVar3 + 8);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  pTVar1 = *(TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
             **)&(this->Pairs).Elements.field_0x900;
  if (pTVar1 != (TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_> *
         )(&(this->Pairs).Elements.field_0x8 + (longlong)local_res8[0] * 0x120);
}

// FindOrAddImpl<int> @ 14a912600

FSearchResult * __thiscall
TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
::FindOrAddImpl<int>
          (TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
           *this,uint param_1,int *param_2)

{
  undefined1 *puVar1;
  TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
  *pTVar2;
  int iVar3;
  TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
  *pTVar4;
  int local_res8 [2];
  int *local_res20;
  
  iVar3 = TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<int>(&this->Pairs,param_1,param_2);
  if (iVar3 != -1) {
    pTVar2 = *(TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
               **)&(this->Pairs).Elements.field_0x280;
    pTVar4 = this;
    if (pTVar2 != (TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                   *)0x0) {
      pTVar4 = pTVar2;
    }
    puVar1 = &(pTVar4->Pairs).Elements.field_0x0 + (longlong)iVar3 * 0x28;
    if (puVar1 != (undefined1 *)0x0) {
      return (FSearchResult *)(puVar1 + 4);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  pTVar2 = *(TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
             **)&(this->Pairs).Elements.field_0x280;
  if (pTVar2 != (TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                 *)0x0) {
    this = pTVar2;
  }
  return (FSearchResult *)(&(this->Pairs).Elements.field_0x4 + (longlong)local_res8[0] * 0x28);
}

// FindOrAddImpl<UPoseSearchDatabase_const_*> @ 14a9126b0

TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
* __thiscall
TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
::FindOrAddImpl<UPoseSearchDatabase_const_*>
          (TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
           *this,uint param_1,UPoseSearchDatabase **param_2)

{
  TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
  *pTVar4;
  int local_res8 [2];
  UPoseSearchDatabase **local_res20;
  
  iVar2 = TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<UPoseSearchDatabase_const_*>(&this->Pairs,param_1,param_2);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
               **)&(this->Pairs).Elements.field_0xbc0;
    pTVar4 = this;
    if (pTVar1 != (TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                   *)0x0) {
      pTVar4 = pTVar1;
    }
    puVar3 = &(pTVar4->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x2f0;
    if (puVar3 != (undefined1 *)0x0) {
      return (TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
              *)(puVar3 + 8);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  ::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UPoseSearchDatabase_const_*_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  pTVar1 = *(TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
             **)&(this->Pairs).Elements.field_0xbc0;
  if (pTVar1 != (TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
          *)(&(this->Pairs).Elements.field_0x8 + (longlong)local_res8[0] * 0x2f0);
}

// Find @ 14a928bd0

int * __thiscall
TMapBase<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
::Find(TMapBase<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
       *this,UObject *param_1)

{
  undefined1 *puVar1;
  TMapBase<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
  *pTVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  UObject *local_res8 [4];
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_res8[0] = param_1;
  iVar3 = TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<UObject_const_*>(&this->Pairs,uVar5 >> 0x10 ^ uVar5,local_res8);
  if (iVar3 != -1) {
    pTVar2 = *(TMapBase<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
               **)&(this->Pairs).Elements.field_0x180;
    if (pTVar2 != (TMapBase<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = &(this->Pairs).Elements.field_0x0 + (longlong)iVar3 * 0x18;
    piVar4 = (int *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      piVar4 = (int *)(puVar1 + 8);
    }
    return piVar4;
  }
  return (int *)0x0;
}

// Find @ 14a928c50

TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
* __thiscall
TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
::Find(TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
       *this,UPoseSearchDatabase *param_1)

{
  TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
  *pTVar1;
  int iVar2;
  TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
  *pTVar3;
  undefined1 *puVar4;
  uint uVar5;
  UPoseSearchDatabase *local_res8 [4];
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_res8[0] = param_1;
  iVar2 = TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::FindIndexByHash<UPoseSearchDatabase_const_*>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,local_res8);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
               **)&(this->Pairs).Elements.field_0xbc0;
    if (pTVar1 != (TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                   *)0x0) {
      this = pTVar1;
    }
    puVar4 = &(this->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x2f0;
    pTVar3 = (TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
              *)0x0;
    if (puVar4 != (undefined1 *)0x0) {
      pTVar3 = (TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                *)(puVar4 + 8);
    }
    return pTVar3;
  }
  return (TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
          *)0x0;
}

