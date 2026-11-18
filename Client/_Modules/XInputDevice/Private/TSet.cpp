// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XInputDevice
// Functions: 4

// Emplace<TPairInitializer<int_const_&,FInputDeviceId_const_&>_> @ 14f12c4a0

FSetElementId __thiscall
TSet<TTuple<int,FInputDeviceId>,TDefaultMapHashableKeyFuncs<int,FInputDeviceId,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,FInputDeviceId_const_&>_>
          (TSet<TTuple<int,FInputDeviceId>,TDefaultMapHashableKeyFuncs<int,FInputDeviceId,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,FInputDeviceId_const_&> *param_1,bool *param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  uint uVar8;
  char *in_R9;
  int iVar9;
  bool bVar10;
  FSparseArrayAllocationInfo local_38;
  
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_38);
  if (local_38.Pointer != (uint *)0x0) {
    puVar2 = *(uint **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(uint *)((longlong)local_38.Pointer + 4) = *puVar2;
    *(uint *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  iVar7 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  uVar8 = *(uint *)local_38.Pointer;
  if ((iVar7 - iVar1 != 1) && (iVar7 != iVar1)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x10) == uVar8) {
          bVar10 = iVar7 != -1;
          if (bVar10) {
            *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(lVar3 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar8;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(uint *)((longlong)local_38.Pointer + 8) = *(uint *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FInputDeviceId_const_&,int_const_&>_> @ 14f12c630

FSetElementId __thiscall
TSet<TTuple<FInputDeviceId,int>,TDefaultMapHashableKeyFuncs<FInputDeviceId,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FInputDeviceId_const_&,int_const_&>_>
          (TSet<TTuple<FInputDeviceId,int>,TDefaultMapHashableKeyFuncs<FInputDeviceId,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FInputDeviceId_const_&,int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  uint uVar8;
  char *in_R9;
  int iVar9;
  bool bVar10;
  FSparseArrayAllocationInfo local_38;
  
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_38);
  if (local_38.Pointer != (uint *)0x0) {
    puVar2 = *(uint **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(uint *)((longlong)local_38.Pointer + 4) = *puVar2;
    *(uint *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  iVar7 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  uVar8 = *(uint *)local_38.Pointer;
  if ((iVar7 - iVar1 != 1) && (iVar7 != iVar1)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x10) == uVar8) {
          bVar10 = iVar7 != -1;
          if (bVar10) {
            *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(lVar3 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar8;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(uint *)((longlong)local_38.Pointer + 8) = *(uint *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Rehash @ 14f12d300

void __thiscall
TSet<TTuple<int,FInputDeviceId>,TDefaultMapHashableKeyFuncs<int,FInputDeviceId,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,FInputDeviceId>,TDefaultMapHashableKeyFuncs<int,FInputDeviceId,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14f12d3dc;
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
LAB_14f12d3dc:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[3] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[2] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14f12d490

void __thiscall
TSet<TTuple<FInputDeviceId,int>,TDefaultMapHashableKeyFuncs<FInputDeviceId,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FInputDeviceId,int>,TDefaultMapHashableKeyFuncs<FInputDeviceId,int,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14f12d56c;
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
LAB_14f12d56c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[3] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[2] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

