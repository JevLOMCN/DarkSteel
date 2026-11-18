// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 4

// TMap<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_> @ 142d5d240

TMap<FName_const_,EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,EActionButtonType,0>_>
* __thiscall
TMap<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
::
TMap<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
          (void *this,
          initializer_list<TPairInitializer<FName_const_&,EActionButtonType_const_&>_> *param_1)

{
  TPairInitializer<FName_const_&,EActionButtonType_const_&> *pTVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  TPairInitializer<FName_const_&,EActionButtonType_const_&> *pTVar13;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar6 = 0;
  pTVar13 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar13 >> 4);
  if (uVar10 == 0) goto joined_r0x000142d5d4b1;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar10 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x000142d5d4b1;
  *(uint *)((longlong)this + 0x48) = uVar10;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar10 != 0) {
    uVar4 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar4 = 0;
        goto LAB_142d5d31b;
      }
    }
    else {
LAB_142d5d31b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar4,4);
    }
    if (0 < (int)uVar10) {
      uVar11 = (ulonglong)uVar10;
      uVar7 = uVar6;
      do {
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar3 = uVar7 & (longlong)(int)uVar10 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar5 + uVar3 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar10 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (FName *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar12 = pTStack_70;
      }
      uVar4 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
      uVar7 = uVar6;
      while (uVar4 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uVar4 = iVar9 + 1;
        uVar6 = (ulonglong)local_78 >> 0x20;
        local_78 = (FName *)CONCAT44((int)uVar6,uVar4);
        uVar6 = (ulonglong)uVar4;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_142d5d40b;
        uVar4 = *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar9 * 4 + 4);
      }
      local_78 = (FName *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar6 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_142d5d40b:
        uVar6 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar6 < (int)uVar10) {
      do {
        iVar9 = (int)uVar6;
        uVar2 = *(undefined8 *)(*local_58 + (longlong)iVar9 * 0x14);
        lVar5 = *local_58 + (longlong)iVar9 * 0x14;
        uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(lVar5 + 0x10) = uVar10;
        lVar8 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar8 = *(longlong *)((longlong)this + 0x40);
        }
        uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(lVar8 + uVar6 * 4);
        *(int *)(lVar8 + uVar6 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000142d5d4b1:
  for (; pTVar13 != pTVar1; pTVar13 = pTVar13 + 1) {
    local_78 = pTVar13->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar13->Value;
    TSet<TTuple<FName_const_,enum_EActionButtonType>,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,enum_EActionButtonType_const_&>_>
              (this,(TPairInitializer<FName_const_&,EActionButtonType_const_&> *)&stack0x00000008,
               (bool *)&local_78);
  }
  return this;
}

// TMap<enum_EActionButtonStyle,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>_> @ 142d5d520

TMap<EActionButtonStyle,EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EActionButtonStyle,EActionButtonType,0>_>
* __thiscall
TMap<enum_EActionButtonStyle,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>_>
::
TMap<enum_EActionButtonStyle,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>_>
          (void *this,
          initializer_list<TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&>_>
          *param_1)

{
  TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&> *pTVar8;
  ulonglong uVar9;
  uint *puVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar8 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar8 >> 4);
  if (uVar12 == 0) goto joined_r0x000142d5d78c;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar5 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x000142d5d78c;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_142d5d605;
      }
    }
    else {
LAB_142d5d605:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar9 = (ulonglong)uVar12;
      uVar5 = uVar7;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar5 & (longlong)(int)uVar12 - 1U;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (EActionButtonStyle *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar5 = uVar7;
      while (uVar3 == 0) {
        iVar6 = (int)uVar7;
        uStack_60 = (int)uVar5 + 0x20;
        uVar5 = (ulonglong)uStack_60;
        uVar3 = iVar6 + 1;
        uVar7 = (ulonglong)local_78 >> 0x20;
        local_78 = (EActionButtonStyle *)CONCAT44((int)uVar7,uVar3);
        uVar7 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_142d5d6fb;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar6 * 4 + 4);
      }
      local_78 = (EActionButtonStyle *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar7 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_142d5d6fb:
        uVar7 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar7 < (int)uVar12) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar7 * 0x10 + *local_58);
        uVar12 = *(int *)((longlong)this + 0x48) - 1U & *puVar10;
        puVar10[3] = uVar12;
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar12;
        puVar10[2] = *(uint *)(lVar4 + uVar5 * 4);
        *(int *)(lVar4 + uVar5 * 4) = (int)uVar7;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000142d5d78c:
  for (; pTVar8 != pTVar1; pTVar8 = pTVar8 + 1) {
    local_78 = pTVar8->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar8->Value;
    TSet<TTuple<enum_EActionButtonStyle,enum_EActionButtonType>,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EActionButtonStyle_const_&,enum_EActionButtonType_const_&>_>
              (this,(TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&> *)
                    &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<enum_EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>_> @ 142d5d7f0

TMap<EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EActionButtonType,FName_const_,0>_>
* __thiscall
TMap<enum_EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>_>
::
TMap<enum_EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>_>
          (void *this,
          initializer_list<TPairInitializer<EActionButtonType_const_&,FName_const_&>_> *param_1)

{
  TPairInitializer<EActionButtonType_const_&,FName_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  TPairInitializer<EActionButtonType_const_&,FName_const_&> *pTVar9;
  ulonglong uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar5 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar12 == 0) goto joined_r0x000142d5da61;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x000142d5da61;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_142d5d8d5;
      }
    }
    else {
LAB_142d5d8d5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar10 = (ulonglong)uVar12;
      uVar6 = uVar5;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar6 & (longlong)(int)uVar12 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (EActionButtonType *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar6 = uVar5;
      while (uVar3 == 0) {
        iVar8 = (int)uVar5;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar3 = iVar8 + 1;
        uVar5 = (ulonglong)local_78 >> 0x20;
        local_78 = (EActionButtonType *)CONCAT44((int)uVar5,uVar3);
        uVar5 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_142d5d9cb;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      local_78 = (EActionButtonType *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar5 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar5 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_142d5d9cb:
        uVar5 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar5 < (int)uVar12) {
      do {
        iVar8 = (int)uVar5;
        lVar4 = *local_58 + (longlong)iVar8 * 0x14;
        uVar12 = *(int *)((longlong)this + 0x48) - 1U &
                 (uint)*(byte *)(*local_58 + (longlong)iVar8 * 0x14);
        *(uint *)(lVar4 + 0x10) = uVar12;
        lVar7 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar12;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(lVar7 + uVar5 * 4);
        *(int *)(lVar7 + uVar5 * 4) = iVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar5 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000142d5da61:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<enum_EActionButtonType,FName_const_>,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EActionButtonType_const_&,FName_const_&>_>
              (this,(TPairInitializer<EActionButtonType_const_&,FName_const_&> *)&stack0x00000008,
               (bool *)&local_78);
  }
  return this;
}

// RemoveAndCopyValue @ 142dd48d0

bool __thiscall
TMap<FName,TWeakPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SWidget,1>,0>_>
::RemoveAndCopyValue
          (TMap<FName,TWeakPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SWidget,1>,0>_>
           *this,FName param_1,TWeakPtr<SWidget,1> *param_2)

{
  TWeakPtr<SWidget,1> *pTVar1;
  atomic<int> *paVar2;
  longlong lVar3;
  atomic<int> aVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  longlong lVar14;
  
  uVar11 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar12 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar12 = &this->field_0x38;
    }
    uVar11 = *(uint *)(puVar12 +
                      (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1.Number + uVar11) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        lVar14 = (longlong)(int)uVar11 * 0x20;
        lVar3 = lVar14 + *(longlong *)this;
        if (*(FName *)(lVar14 + *(longlong *)this) == param_1) {
          pTVar1 = (TWeakPtr<SWidget,1> *)(lVar3 + 8);
          if (param_2 != pTVar1) {
            param_2->Object = pTVar1->Object;
            pTVar6 = *(TReferenceControllerBase<1> **)(lVar3 + 0x10);
            pTVar1->Object = (SWidget *)0x0;
            pTVar7 = (param_2->WeakReferenceCount).ReferenceController;
            (param_2->WeakReferenceCount).ReferenceController = pTVar6;
            *(undefined8 *)(lVar3 + 0x10) = 0;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &pTVar7->WeakReferenceCount;
              aVar4 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar4 == (atomic<int>)0x1) {
                (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
              }
            }
          }
          if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&this->field_0x28)) {
            puVar12 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar12 = &this->field_0x10;
            }
            if ((*(uint *)(puVar12 +
                          (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                 (uVar11 & 0x1f) & 1) != 0) goto LAB_142dd4a13;
          }
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
LAB_142dd4a13:
          lVar3 = *(longlong *)this;
          puVar12 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar12 = &this->field_0x38;
          }
          puVar13 = (uint *)(puVar12 + (longlong)*(int *)(lVar14 + lVar3 + 0x1c) * 4);
          do {
            uVar5 = *puVar13;
            if (uVar5 == 0xffffffff) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                uVar10 = (*pcVar8)();
                return (bool)uVar10;
              }
            }
            else if (uVar5 == uVar11) {
              *puVar13 = *(uint *)(lVar14 + lVar3 + 0x18);
              TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar11,1);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar11,1);
              return true;
            }
            puVar13 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar5 * 0x20);
          } while( true );
        }
        uVar11 = *(uint *)(lVar3 + 0x18);
      } while (uVar11 != 0xffffffff);
    }
  }
  return false;
}

