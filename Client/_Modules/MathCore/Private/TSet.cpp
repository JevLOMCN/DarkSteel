// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MathCore
// Functions: 13

// Emplace<TKeyInitializer<int_const_&>_> @ 143329690

FSetElementId __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>_> *pTVar11;
  uint uVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>_> *)0x0) {
    pTVar11 = (TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>_> *)
              0x0;
  }
  else {
    uVar3 = **(undefined4 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)local_38.Pointer = uVar3;
    *(undefined2 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  uVar12 = *(uint *)pTVar11;
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,uVar12,pTVar11,local_res8,in_R9);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar12 = this->HashSize - 1U & uVar12;
      *(uint *)&pTVar11->field_0x24 = uVar12;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar12;
      *(undefined4 *)&pTVar11->field_0x20 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,int_const_&>_> @ 143329820

FSetElementId __thiscall
TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
Emplace<TPairInitializer<int_const_&,int_const_&>_>
          (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *this,
          TPairInitializer<int_const_&,int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  undefined1 *in_R9;
  uint *puVar11;
  FSparseArrayAllocationInfo local_58;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_58,iVar4);
  if (local_58.Pointer != (uint *)0x0) {
    puVar11 = *(uint **)(param_2 + 8);
    *(uint *)local_58.Pointer = **(uint **)param_2;
    *(uint *)((longlong)local_58.Pointer + 4) = *puVar11;
    *(uint *)((longlong)local_58.Pointer + 8) = 0xffffffff;
  }
  uVar10 = *(uint *)local_58.Pointer;
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar6) {
    uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
    uVar10 = this->HashSize - 1U & uVar10;
    *(uint *)((longlong)local_58.Pointer + 0xc) = uVar10;
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
    *(uint *)((longlong)local_58.Pointer + 8) = *(uint *)((longlong)FVar8 + uVar5 * 4);
    *(int *)((longlong)FVar8 + uVar5 * 4) = local_58.Index;
  }
  else {
    this->HashSize = iVar9;
    UE::Core::Private::
    Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,iVar9);
    if ((this->HashSize != 0) &&
       (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TConstIterator::TConstIterator((TConstIterator *)&local_48,&this->Elements),
       local_40.CurrentBitIndex < (local_40.Array)->NumBits)) {
      do {
        puVar11 = (uint *)((longlong)local_40.CurrentBitIndex * 0x10 + *local_48);
        uVar10 = this->HashSize - 1U & *puVar11;
        puVar11[3] = uVar10;
        FVar8 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar8;
        }
        uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
        puVar11[2] = *(uint *)((longlong)FVar7 + uVar5 * 4);
        *(int *)((longlong)FVar7 + uVar5 * 4) = local_40.CurrentBitIndex;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  *(int *)&param_1->Key = local_58.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 143329a40

FSetElementId __thiscall
TSet<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_> *pTVar11;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar4 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar4);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_> *)0x0) {
    pTVar11 = (TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_> *)0x0;
  }
  else {
    uVar3 = **(undefined4 **)param_3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)local_38.Pointer = uVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,pTVar11,local_res8,in_stack_00000028);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&pTVar11->field_0x1c = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&pTVar11->field_0x18 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 143329be0

FSetElementId __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>_> *pTVar11;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar6 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>_> *)0x0) {
    pTVar11 = (TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>_> *)0x0
    ;
  }
  else {
    uVar3 = **(undefined4 **)param_3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined4 *)local_38.Pointer = uVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0xffffffffffffffff;
    *(undefined1 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,pTVar11,local_res8,in_stack_00000028);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&pTVar11->field_0x2c = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&pTVar11->field_0x28 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// Rehash @ 14332dcd0

void __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14332ddac;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14332ddac:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28;
        *(uint *)(lVar4 + 0x24) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14332de70

void __thiscall
TSet<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14332df4c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14332df4c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14332e000

void __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14332e0dc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14332e0dc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0xb] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[10] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reset @ 14332e1a0

void __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14332e350

bool __thiscall
TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>::TryReplaceExisting
          (TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *this,
          uint param_1,TSparseSetElement<TTuple<int,int>_> *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar2 != 1) && (iVar12 != iVar2)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar12;
        if ((*(int *)(lVar3 + lVar10 * 0x10) == *(int *)param_2) &&
           (*(int *)(lVar3 + 4 + lVar10 * 0x10) == *(int *)&param_2->field_0x4)) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) =
                 *(undefined8 *)param_2;
            iVar2 = *param_3;
            lVar3 = *(longlong *)&this->Elements;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            if (((*(uint *)(puVar9 + lVar10) & uVar13) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar3 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar2;
            }
            uVar8 = 0xffffffff;
            *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 0x10) = uVar8;
            puVar9 = &(this->Elements).field_0x34;
            *(int *)puVar9 = *(int *)puVar9 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar2;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            *(uint *)(puVar9 + lVar10) = *(uint *)(puVar9 + lVar10) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar3 + 8 + lVar10 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14332e570

bool __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo>_> *param_2
          ,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar4 != 1) && (iVar14 != iVar4)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar5 + (longlong)iVar14 * 0x28) == *(int *)param_2) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            pvVar6 = *(void **)(lVar5 + 0x10 + (longlong)iVar14 * 0x28);
            if (pvVar6 != (void *)0x0) {
              FMemory::Free(pvVar6);
            }
            memmove((void *)(lVar5 + (longlong)iVar14 * 0x28),param_2,0x20);
            iVar4 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar5 = *(longlong *)&this->Elements;
            bVar8 = (byte)iVar4 & 0x1f;
            uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar3) & uVar15) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x28) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x28);
            uVar11 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar3) = *(uint *)(puVar12 + lVar3) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar5 + 0x20 + (longlong)iVar14 * 0x28);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// TryReplaceExisting @ 14332e7b0

bool __thiscall
TSet<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar13 * 0x20 + lVar4) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x20 + lVar4);
            pvVar5 = *(void **)((longlong)_Dst + 8);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,param_2,0x18);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar2) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar4) = iVar3;
            }
            uVar10 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x20 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar4) = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + lVar4);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14332e9e0

bool __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  void *_Dst;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar3 != 1) && (iVar14 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar4 + (longlong)iVar14 * 0x30) == *(int *)param_2) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            _Dst = (void *)((longlong)iVar14 * 0x30 + lVar4);
            pvVar5 = *(void **)((longlong)_Dst + 0x18);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,param_2,0x28);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar2) & uVar15) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar3;
            }
            uVar10 = 0xffffffff;
            puVar12 = (undefined4 *)((longlong)iVar3 * 0x30 + lVar4);
            *puVar12 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar12[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar4 + 0x28 + (longlong)iVar14 * 0x30);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// UnhashElements @ 14332ec20

void __thiscall
TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14332ed1b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14332ed1b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14332ee10;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14332ee10:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x2c + (longlong)local_60.CurrentBitIndex * 0x30) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

