// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// FNodePool @ 146f92df0

FNodePool * __thiscall
FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
::FNodePool::FNodePool(FNodePool *this)

{
  TMap<int,int,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<int,int,0>_>
  *this_00;
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_> local_50;
  
  uVar10 = 0;
  this_00 = &this->NodeMap;
  this->_padding_ = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = 0;
  puVar2 = &(this->NodeMap).field_0x48;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->NodeMap).field_0x8 = 0;
  *(undefined8 *)&(this->NodeMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeMap).field_0x34 = 0;
  *(undefined8 *)&(this->NodeMap).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (*piVar1 < 0x40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0x40,(ForAnyElementType *)this,(int)this->_padding_,piVar1);
  }
  for (lVar5 = 0x3f; 0x1fUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  uVar11 = 1 << ((byte)lVar5 & 0x1f);
  if (uVar11 <= (uint)(*(int *)&(this->NodeMap).field_0x8 - *(int *)&(this->NodeMap).field_0x34)) {
    return this;
  }
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
             *)this_00,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*(int *)puVar2 != 0) && ((int)uVar11 <= *(int *)puVar2)) {
    return this;
  }
  puVar3 = &(this->NodeMap).field_0x38;
  *(uint *)puVar2 = uVar11;
  if (*(longlong *)&(this->NodeMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->NodeMap).field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_146f92f64;
  uVar12 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&(this->NodeMap).field_0x40 != 0) {
      uVar12 = 0;
      goto LAB_146f92f1a;
    }
  }
  else {
LAB_146f92f1a:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->NodeMap).field_0x40,0,uVar12,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    uVar8 = uVar10;
    do {
      puVar4 = *(undefined1 **)&(this->NodeMap).field_0x40;
      puVar7 = puVar3;
      if (puVar4 != (undefined1 *)0x0) {
        puVar7 = puVar4;
      }
      uVar6 = uVar8 & (longlong)(int)uVar11 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(puVar7 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_146f92f64:
  if (*(int *)puVar2 != 0) {
    uVar11 = *(uint *)&(this->NodeMap).field_0x28;
    local_50.Array =
         (TBitArray<TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_> *)
         &(this->NodeMap).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar14 = *(uint **)&(this->NodeMap).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar12 = *puVar14;
      uVar8 = uVar10;
      while (uVar12 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_146f9300b;
        uVar12 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_146f9300b:
        uVar10 = (ulonglong)uVar11;
        uStack_64 = uVar11;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar11) {
      do {
        puVar14 = (uint *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&this_00->field_0x0);
        uVar11 = *(int *)puVar2 - 1U & *puVar14;
        puVar14[3] = uVar11;
        puVar4 = *(undefined1 **)&(this->NodeMap).field_0x40;
        puVar7 = puVar3;
        if (puVar4 != (undefined1 *)0x0) {
          puVar7 = puVar4;
        }
        uVar8 = (longlong)*(int *)puVar2 - 1U & (longlong)(int)uVar11;
        puVar14[2] = *(uint *)(puVar7 + uVar8 * 4);
        *(int *)(puVar7 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>::
        FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// FindOrAdd @ 146fa8f80

FGraphAStarDefaultNode<FNavLocalGridData> * __thiscall
FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
::FNodePool::FindOrAdd(FNodePool *this,int param_1)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FGraphAStarDefaultNode<FNavLocalGridData> *pFVar7;
  int *piVar8;
  undefined1 *puVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&(this->NodeMap).field_0x8 != *(int *)&(this->NodeMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->NodeMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->NodeMap).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->NodeMap).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar5 * 0x10 + *(longlong *)&this->NodeMap);
        if (*piVar8 == param_1) {
          if (piVar8 != (int *)0x0) goto LAB_146fa9057;
          break;
        }
        iVar5 = piVar8[2];
      } while (iVar5 != -1);
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
  ::AddUninitialized((TSparseArrayBase<16,4,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
                      *)&this->NodeMap,&local_18);
  if (local_18.Pointer != (TSparseSetElement<TTuple<int,int>_> *)0x0) {
    *(int *)local_18.Pointer = param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 4) = 0xffffffffffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
          ::TryReplaceExisting
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
                      *)&this->NodeMap,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
    ::RehashOrLink((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
                    *)&this->NodeMap,param_1,local_18.Pointer,local_res8[0]);
  }
  piVar8 = (int *)((longlong)local_res8[0] * 0x10 + *(longlong *)&this->NodeMap);
LAB_146fa9057:
  if (piVar8[1] == -1) {
    iVar5 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,(ForAnyElementType *)this,piVar1);
    }
    lVar6 = (longlong)iVar5;
    *(int *)&this->_padding_ = iVar5 + 1;
    lVar3 = this->_padding_;
    pbVar2 = (byte *)(lVar3 + 0x20 + lVar6 * 0x28);
    *pbVar2 = *pbVar2 & 0xfc;
    *(undefined8 *)(lVar3 + 0x18 + lVar6 * 0x28) = 0xffffffffffffffff;
    *(int *)(lVar3 + lVar6 * 0x28) = param_1;
    pFVar7 = (FGraphAStarDefaultNode<FNavLocalGridData> *)(lVar3 + lVar6 * 0x28);
    pFVar7->ParentRef = -1;
    pFVar7->TraversalCost = 1.7976931348623157e+308;
    pFVar7->TotalCost = 1.7976931348623157e+308;
    iVar5 = (int)(((longlong)pFVar7 - this->_padding_) / 0x28);
    pFVar7->SearchNodeIndex = iVar5;
    piVar8[1] = iVar5;
  }
  else {
    pFVar7 = (FGraphAStarDefaultNode<FNavLocalGridData> *)
             (this->_padding_ + (longlong)piVar8[1] * 0x28);
  }
  return pFVar7;
}

