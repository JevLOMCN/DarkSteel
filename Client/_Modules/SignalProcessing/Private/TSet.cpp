// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 14

// Emplace<TKeyInitializer<int_const_&>_> @ 14449bab0

FSetElementId __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
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
  TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>_> *pTVar11;
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
      (TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>_> *)0x0) {
    pTVar11 = (TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>_>
               *)0x0;
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

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 14449bc40

FSetElementId __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
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
  TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_> *pTVar11;
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
      (TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_> *)0x0) {
    pTVar11 = (TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_> *)
              0x0;
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

// Rehash @ 1444e0cf0

void __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1444e0dcc;
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
LAB_1444e0dcc:
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

// Rehash @ 1444e0e90

void __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1444e0f6c;
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
LAB_1444e0f6c:
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

// Reset @ 1444e14c0

void __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TryReplaceExisting @ 1444e6be0

bool __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>_>
          *param_2,int *param_3,bool *param_4)

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

// TryReplaceExisting @ 1444e6e20

bool __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_>
          *param_2,int *param_3,bool *param_4)

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

// UnhashElements @ 1444e7060

void __thiscall
TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1444e715b;
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
LAB_1444e715b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1444e7250;
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
LAB_1444e7250:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Emplace<TPairInitializer<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup_const_&,float_const_&>_> @ 1444ea340

FSetElementId __thiscall
TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup_const_&,float_const_&>_>
          (TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup_const_&,float_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int iVar12;
  char *in_R9;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar12 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar12 = iVar12 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(uint **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = *puVar3;
    *(uint *)((longlong)local_48.Pointer + 8) = *(uint *)(puVar3 + 1);
    *(uint *)((longlong)local_48.Pointer + 0xc) = *puVar4;
    *(uint *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar9 = *(uint *)local_48.Pointer;
  bVar14 = false;
  iVar12 = *(int *)puVar13;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar8 = uVar9 * 0x40 + *(uint *)((longlong)local_48.Pointer + 4) + (uVar9 >> 2) + 0x9e3779b9 ^
          uVar9;
  uVar8 = uVar8 * 0x40 + -0x61c88647 + *(uint *)((longlong)local_48.Pointer + 8) + (uVar8 >> 2) ^
          uVar8;
  if ((iVar12 - iVar5 != 1) && (iVar12 != iVar5)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
    if (iVar12 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar12;
        if (((*(uint *)(lVar2 + lVar6 * 0x18) == uVar9) &&
            (*(uint *)(lVar2 + 4 + lVar6 * 0x18) == *(uint *)((longlong)local_48.Pointer + 4))) &&
           (*(uint *)(lVar2 + 8 + lVar6 * 0x18) == *(uint *)((longlong)local_48.Pointer + 8))) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            memmove((void *)(lVar2 + (longlong)iVar12 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
      } while (iVar12 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&>_> @ 1444ea5b0

FSetElementId __thiscall
TSet<TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<enum_Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&>_>
          (void *this,
          TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0x30);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>_> *)0x0) {
    TPairInitializer<enum_Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&>::
    operator<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>_TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>
              (param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
  }
  uVar9 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar3 = TryReplaceExisting(this,uVar9,local_38.Pointer,local_res8,in_R9);
  if (!bVar3) {
    uVar6 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)((longlong)this + 0x48))) {
      uVar9 = *(int *)((longlong)this + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_38.Pointer + 0x2c) = uVar9;
      lVar7 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar7 = (longlong)this + 0x38;
      }
      uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0x28) = *(undefined4 *)(lVar7 + uVar5 * 4);
      *(int *)(lVar7 + uVar5 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup> @ 1444eda90

int __thiscall
TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
::RemoveImpl<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup>
          (TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
           *this,uint param_1,FInputTransformOutputGroup *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar7 = (this->Hash).SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar8 = *(uint *)((longlong)FVar7 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (((lVar6 = (longlong)(int)uVar8, *(int *)(lVar2 + lVar6 * 0x18) != *(int *)param_2 ||
          (*(int *)(lVar2 + 4 + lVar6 * 0x18) != *(int *)&param_2->field_0x4)) ||
         (*(int *)(lVar2 + 8 + lVar6 * 0x18) != *(int *)&param_2->field_0x8))) {
    uVar8 = *(uint *)(lVar2 + 0x10 + lVar6 * 0x18);
    if (uVar8 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Elements).field_0x28)) {
    if (*(int *)&(this->Elements).field_0x28 <= (int)uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_1444edb9c;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_1444edb9c:
  FVar7 = (this->Hash).SecondaryData;
  lVar2 = *(longlong *)&this->Elements;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar2 + 0x14 + lVar6 * 0x18) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if (uVar1 == 0xffffffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    if (uVar1 == uVar8) break;
    puVar10 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  *puVar10 = *(uint *)(lVar2 + 0x10 + lVar6 * 0x18);
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,uVar8,1);
  return 1;
}

// Rehash @ 1445162a0

void __thiscall
TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  uint *puVar9;
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
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar8 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_144516377;
        uVar8 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_144516377:
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
        lVar5 = *(longlong *)&this->Elements;
        lVar4 = (longlong)local_30.CurrentBitIndex;
        uVar8 = *(uint *)(lVar5 + lVar4 * 0x18);
        uVar8 = *(int *)(lVar5 + 4 + lVar4 * 0x18) + uVar8 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^
                uVar8;
        uVar8 = (*(int *)(lVar5 + 8 + lVar4 * 0x18) + (uVar8 >> 2) + uVar8 * 0x40 + -0x61c88647 ^
                uVar8) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14 + lVar4 * 0x18) = uVar8;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 144516470

void __thiscall
TSet<TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  uint *puVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14451654c;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14451654c:
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
        puVar7 = (uint *)((longlong)local_30.CurrentBitIndex * 0x30 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & *puVar7;
        puVar7[0xb] = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar7[10] = *(uint *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14451efc0

bool __thiscall
TSet<TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>_> *param_2,
          int *param_3,bool *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  void *_Dst;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar11 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(int *)(lVar9 + (longlong)iVar11 * 0x30) == *(int *)param_2) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar11 * 0x30 + lVar9);
            if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x18));
            }
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,param_2,0x28);
            iVar3 = *param_3;
            lVar9 = *(longlong *)this;
            bVar5 = (byte)iVar3 & 0x1f;
            uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar12 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar12 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar12 + lVar2) & uVar13) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)(lVar9 + (longlong)*(int *)((longlong)this + 0x30) * 0x30) = iVar3;
            }
            uVar8 = 0xffffffff;
            puVar10 = (undefined4 *)((longlong)iVar3 * 0x30 + lVar9);
            *puVar10 = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar8 = *(undefined4 *)((longlong)this + 0x30);
            }
            puVar10[1] = uVar8;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar3;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar9 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar9 = (longlong)this + 0x10;
            }
            puVar1 = (uint *)(lVar9 + lVar2);
            *puVar1 = *puVar1 & ~uVar13;
            *param_3 = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar9 + 0x28 + (longlong)iVar11 * 0x30);
      } while (iVar11 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

