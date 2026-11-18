// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CUDA
// Functions: 3

// Emplace<TPairInitializer<unsigned_int_&&,CUctx_st_*_const_&>_> @ 148cfbdb0

FSetElementId __thiscall
TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_&&,CUctx_st_*_const_&>_>
          (TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_&&,CUctx_st_*_const_&> *param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar11 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar11;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = this_00;
    }
    *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) &
         ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar11 & 0x1f));
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<TTuple<unsigned_int,CUctx_st_*>_> *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar11 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,uVar11,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
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
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
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

// Rehash @ 148cfd130

void __thiscall
TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = &this->Hash;
  uVar10 = this->HashSize;
  uVar11 = (ulonglong)uVar10;
  piVar1 = &this->HashSize;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  if ((uVar10 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar10,4), 0 < (int)uVar10)) {
    uVar7 = uVar9;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar6 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar6 = FVar3;
      }
      uVar5 = uVar7 & (longlong)(int)uVar10 - 1U;
      uVar7 = uVar7 + 1;
      *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*piVar1 != 0) {
    uVar10 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar10 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar2 = *puVar12;
      uVar11 = uVar9;
      while (uVar2 == 0) {
        iVar8 = (int)uVar9;
        uStack_50 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_50;
        local_68 = iVar8 + 1;
        uVar9 = (ulonglong)local_68;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_148cfd26b;
        uVar2 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_54 = (int)lVar4 + -1 + uStack_50;
      uVar9 = (ulonglong)uStack_54;
      if ((int)uVar10 < (int)uStack_54) {
LAB_148cfd26b:
        uVar9 = (ulonglong)uVar10;
        uStack_54 = uVar10;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar9 < (int)uVar10) {
      do {
        iVar8 = (int)uVar9;
        uVar10 = *piVar1 - 1U & *(uint *)(*(longlong *)&this->Elements + (longlong)iVar8 * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)iVar8 * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar10;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar11 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar11 * 4);
        *(int *)((longlong)FVar6 + uVar11 * 4) = iVar8;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar9 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 148cfd330

bool __thiscall
TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<unsigned_int,CUctx_st_*>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar4 != 1) && (iVar13 != iVar4)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar5 + (longlong)iVar13 * 0x18) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)(lVar5 + (longlong)iVar13 * 0x18),param_2,0x10);
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
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
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar5 + 0x10 + (longlong)iVar13 * 0x18);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

