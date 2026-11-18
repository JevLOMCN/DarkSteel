// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineRHI
// Functions: 3

// Emplace<enum_sl::Result_const_&> @ 14de59020

FSetElementId __thiscall
TSet<enum_sl::Result,DefaultKeyFuncs<enum_sl::Result,0>,FDefaultSetAllocator>::
Emplace<enum_sl::Result_const_&>(void *this,Result *param_1,bool *param_2)

{
  uchar *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  bool *in_R9;
  Result local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),1);
    uVar10 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar10;
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    }
    puVar1 = (pTVar11->AllocatorInstance).InlineData + (longlong)(iVar5 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar10 & 0x1f));
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar5 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0xc);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<sl::Result> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  uVar10 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar3 = TryReplaceExisting(this,uVar10,local_38.Pointer,(int *)local_res8,in_R9);
  if (!bVar3) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 8) = uVar10;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 4) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(Result *)(lVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *param_1 = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Rehash @ 14de603c0

void __thiscall
TSet<enum_sl::Result,DefaultKeyFuncs<enum_sl::Result,0>,FDefaultSetAllocator>::Rehash(void *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uchar *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> *pFVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
  uVar10 = *(uint *)((longlong)this + 0x48);
  uVar11 = (ulonglong)uVar10;
  piVar1 = (int *)((longlong)this + 0x48);
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  uVar9 = 0;
  if ((uVar10 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar10,4), 0 < (int)uVar10)) {
    uVar7 = uVar9;
    do {
      pFVar6 = this_00;
      if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
          (ForElementType<FSetElementId> *)0x0) {
        pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
      }
      uVar5 = uVar7 & (longlong)(int)uVar10 - 1U;
      uVar7 = uVar7 + 1;
      puVar2 = pFVar6->InlineData + uVar5 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*piVar1 != 0) {
    uVar10 = *(uint *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar10 != 0) {
      pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar12 = local_40.Array;
      }
      uVar3 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
      uVar11 = uVar9;
      while (uVar3 == 0) {
        iVar8 = (int)uVar9;
        uStack_50 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_50;
        local_68 = iVar8 + 1;
        uVar9 = (ulonglong)local_68;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14de604fb;
        uVar3 = *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      uStack_64 = -uVar3 & uVar3;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_54 = (int)lVar4 + -1 + uStack_50;
      uVar9 = (ulonglong)uStack_54;
      if ((int)uVar10 < (int)uStack_54) {
LAB_14de604fb:
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
        uVar10 = *piVar1 - 1U & *(uint *)(*(longlong *)this + (longlong)iVar8 * 0xc);
        lVar4 = *(longlong *)this + (longlong)iVar8 * 0xc;
        *(uint *)(lVar4 + 8) = uVar10;
        pFVar6 = this_00;
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar11 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(pFVar6->InlineData + uVar11 * 4);
        *(int *)(pFVar6->InlineData + uVar11 * 4) = iVar8;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar9 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14de63fc0

bool __thiscall
TSet<enum_sl::Result,DefaultKeyFuncs<enum_sl::Result,0>,FDefaultSetAllocator>::TryReplaceExisting
          (void *this,uint param_1,TSparseSetElement<sl::Result> *param_2,int *param_3,bool *param_4
          )

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar10 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar10 = (longlong)this + 0x38;
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar11 != -1) {
      lVar10 = *(longlong *)this;
      do {
        if (*(int *)(lVar10 + (longlong)iVar11 * 0xc) == *(int *)param_2) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            *(int *)(lVar10 + (longlong)iVar11 * 0xc) = *(int *)param_2;
            iVar4 = *param_3;
            lVar10 = *(longlong *)this;
            bVar6 = (byte)iVar4 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar4 < 0) || (*(int *)((longlong)this + 0x28) <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar12 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar12 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar12 + lVar3) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)(lVar10 + (longlong)*(int *)((longlong)this + 0x30) * 0xc) = iVar4;
            }
            puVar1 = (undefined4 *)(lVar10 + (longlong)iVar4 * 0xc);
            uVar9 = 0xffffffff;
            *puVar1 = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar9 = *(undefined4 *)((longlong)this + 0x30);
            }
            puVar1[1] = uVar9;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar4;
            if (((iVar4 < 0) || (*(int *)((longlong)this + 0x28) <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar10 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar10 = (longlong)this + 0x10;
            }
            puVar2 = (uint *)(lVar10 + lVar3);
            *puVar2 = *puVar2 & ~uVar13;
            *param_3 = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar10 + 4 + (longlong)iVar11 * 0xc);
      } while (iVar11 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

