// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 2

// Emplace<TPairInitializer<void_*_&,unsigned_int_&>_> @ 148cffb80

FSetElementId __thiscall
TSet<TTuple<void_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<void_*_&,unsigned_int_&>_>
          (TSet<TTuple<void_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<void_*_&,unsigned_int_&> *param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined1 *puVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar6 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar6;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = this_00;
    }
    *(uint *)(puVar11 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x1f));
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (ulonglong *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 8);
    *(ulonglong *)local_38.Pointer = **(ulonglong **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar7 = *(ulonglong *)local_38.Pointer;
  bVar12 = false;
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar5 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar5 - iVar4 != 1) && (iVar5 != iVar4)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar5 * 0x18) == uVar7) {
          bVar12 = iVar5 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar5 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Rehash @ 148d115f0

void __thiscall
TSet<TTuple<void_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<void_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>,FDefaultSetAllocator>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = &this->Hash;
  uVar6 = this->HashSize;
  uVar11 = (ulonglong)uVar6;
  piVar1 = &this->HashSize;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  if ((uVar6 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar6,4), 0 < (int)uVar6)) {
    uVar8 = uVar10;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar3;
      }
      uVar5 = uVar8 & (longlong)(int)uVar6 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar6 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar2 = *puVar12;
      uVar11 = uVar10;
      while (uVar2 == 0) {
        iVar9 = (int)uVar10;
        uStack_50 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_50;
        local_68 = iVar9 + 1;
        uVar10 = (ulonglong)local_68;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_148d1172b;
        uVar2 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_54 = (int)lVar4 + -1 + uStack_50;
      uVar10 = (ulonglong)uStack_54;
      if ((int)uVar6 < (int)uStack_54) {
LAB_148d1172b:
        uVar10 = (ulonglong)uVar6;
        uStack_54 = uVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar10 < (int)uVar6) {
      do {
        iVar9 = (int)uVar10;
        lVar4 = *(longlong *)&this->Elements + (longlong)iVar9 * 0x18;
        uVar11 = *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x18);
        uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar6;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar11 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar11 * 4);
        *(int *)((longlong)FVar7 + uVar11 * 4) = iVar9;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar10 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

