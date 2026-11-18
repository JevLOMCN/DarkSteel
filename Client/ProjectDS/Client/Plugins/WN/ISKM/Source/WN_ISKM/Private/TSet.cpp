// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 3

// Emplace<TPairInitializer<FWN_ISKM_Key_const_&,int_const_&>_> @ 14a83a000

FSetElementId __thiscall
TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FWN_ISKM_Key_const_&,int_const_&>_>
          (TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FWN_ISKM_Key_const_&,int_const_&> *param_1,bool *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  char *in_R9;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  bool bVar17;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar16 = 1;
  if (iVar13 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar14 = *(int *)((longlong)iVar7 * 0x20 + 4 + lVar1);
    iVar13 = iVar13 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar14;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar14 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  puVar15 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (longlong *)0x0) {
    puVar2 = *(undefined4 **)param_2;
    puVar3 = *(undefined4 **)(param_2 + 8);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)local_48.Pointer = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 4) = uVar4;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = uVar5;
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = uVar6;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *puVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar8 = (*FCrc::MemCrc32Func)(local_48.Pointer,0x10,0);
  iVar13 = *(int *)puVar15;
  bVar17 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar14 = local_48.Index;
  if ((iVar13 - iVar7 != 1) && (iVar13 != iVar7)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
    if (iVar13 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar9 = (longlong)iVar13 * 0x20;
        if ((*(longlong *)(lVar9 + lVar1) == *(longlong *)local_48.Pointer) &&
           (*(longlong *)(lVar9 + 8 + lVar1) == *(longlong *)((longlong)local_48.Pointer + 8))) {
          bVar17 = iVar13 != -1;
          if (bVar17) {
            memmove((void *)((longlong)iVar13 * 0x20 + lVar1),local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar14 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar9 + 0x18 + lVar1);
      } while (iVar13 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar17;
  }
  if (bVar17 == false) {
    uVar11 = *(int *)puVar15 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar16 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar8;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = iVar14;
    }
    else {
      this->HashSize = iVar16;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar14;
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<FWN_ISKM_Key> @ 14a83d860

int __thiscall
TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
::RemoveImpl<FWN_ISKM_Key>
          (TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FWN_ISKM_Key *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar9 = (longlong)(int)uVar7 * 0x20, *(USkeletalMesh **)(lVar9 + lVar2) != param_2->SKM ||
         (*(UWN_ISKM_Profile **)(lVar9 + 8 + lVar2) != param_2->Profile))) {
    uVar7 = *(uint *)(lVar9 + 0x18 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14a83d949;
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
LAB_14a83d949:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// Rehash @ 14a851c20

void __thiscall
TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
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
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a851cf7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a851cf7:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pvVar8 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = (*FCrc::MemCrc32Func)(pvVar8,0x10,0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pvVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar8 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

