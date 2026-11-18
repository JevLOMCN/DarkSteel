// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 3

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 14a76f1e0

FSetElementId __thiscall
TSet<TTuple<FName,enum_ECommonInputType>,TDefaultMapHashableKeyFuncs<FName,enum_ECommonInputType,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (void *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar3 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar3 * 0x14);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar3);
  if (local_38.Pointer != (longlong *)0x0) {
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(undefined1 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  iVar3 = *(int *)((longlong)this + 8);
  bVar8 = false;
  if ((iVar3 - *(int *)((longlong)this + 0x34) != 1) && (iVar3 != *(int *)((longlong)this + 0x34)))
  {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & (uint)param_2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)this;
      do {
        if (*(longlong *)(lVar6 + (longlong)iVar3 * 0x14) == *(longlong *)local_38.Pointer) {
          bVar8 = iVar3 != -1;
          if (bVar8) {
            memmove((void *)(lVar6 + (longlong)iVar3 * 0x14),local_38.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar3;
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0xc + (longlong)iVar3 * 0x14);
      } while (iVar3 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar8;
  }
  if (bVar8 == false) {
    uVar5 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)((longlong)this + 0x48))) {
      uVar5 = *(int *)((longlong)this + 0x48) - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar5;
      lVar6 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar6 = (longlong)this + 0x38;
      }
      uVar4 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)(lVar6 + uVar4 * 4);
      *(int *)(lVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// RemoveImpl<FName> @ 14a771520

int __thiscall
TSet<TTuple<FName,enum_ECommonInputType>,TDefaultMapHashableKeyFuncs<FName,enum_ECommonInputType,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(void *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar9 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar9 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar9 = (longlong)(int)uVar6 * 0x14, *(FName *)(lVar9 + *(longlong *)this) != *param_2) {
    uVar6 = *(uint *)(lVar9 + 0xc + *(longlong *)this);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar8 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar8 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14a771607;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14a771607:
  lVar8 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar8 + lVar9 + 0x10) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + lVar9 + 0xc);
      TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + ((longlong)(int)uVar1 * 5 + 3) * 4);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Rehash @ 14a7786a0

void __thiscall
TSet<TTuple<FName,enum_ECommonInputType>,TDefaultMapHashableKeyFuncs<FName,enum_ECommonInputType,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> *pFVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_40.Array;
      }
      uVar4 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar5 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14a778777;
        uVar4 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar5 * 4 + 4);
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_54 = (int)lVar5 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14a778777:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)(*(longlong *)this + (longlong)local_40.CurrentBitIndex * 0x14);
        lVar5 = *(longlong *)this + (longlong)local_40.CurrentBitIndex * 0x14;
        uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar4 = *piVar1 - 1U & uVar4 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar5 + 0x10) = uVar4;
        pFVar7 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar7 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(pFVar7->InlineData + uVar6 * 4);
        *(int *)(pFVar7->InlineData + uVar6 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

