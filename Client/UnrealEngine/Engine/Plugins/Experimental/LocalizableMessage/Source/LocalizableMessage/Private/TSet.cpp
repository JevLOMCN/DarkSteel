// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 3

// Emplace<TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>_> @ 14e9bd570

FSetElementId __thiscall
TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>_>
          (TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>
                 *param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined1 *puVar11;
  char *in_R9;
  void *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar4 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar5 = iVar4 >> 0x1f & 0x1f;
    iVar4 = iVar4 + uVar5;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = this_00;
    }
    *(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) &
         ~(1 << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x1f));
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar4 = iVar4 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar6;
    *(longlong *)((longlong)local_48.Pointer + 0x38) = plVar6[5];
    plVar6[5] = 0;
    lVar2 = plVar6[3];
    *(longlong *)((longlong)local_48.Pointer + 0x20) = plVar6[2];
    *(longlong *)((longlong)local_48.Pointer + 0x28) = lVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x30) = plVar6[4];
    if (*(longlong *)((longlong)local_48.Pointer + 0x10) != 0) {
      *plVar6 = 0;
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
  if ((iVar4 - iVar3 != 1) && (iVar4 != iVar3)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x50) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar4 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar4 * 0x50 + lVar2);
            if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
              plVar6 = (longlong *)((longlong)_Dst + 0x20);
              if (*(longlong **)((longlong)_Dst + 0x38) != (longlong *)0x0) {
                plVar6 = *(longlong **)((longlong)_Dst + 0x38);
              }
              (**(code **)(*plVar6 + 0x10))();
            }
            memmove(_Dst,local_48.Pointer,0x40);
            TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar4;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x40 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
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
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x44) = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x40) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<FName> @ 14e9be800

int __thiscall
TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x50;
    if (*(FName *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x40);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e9be8e5;
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
LAB_14e9be8e5:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x44) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x40);
      TSparseArray<TSparseSetElement<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x40 + (longlong)(int)uVar1 * 0x50);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Rehash @ 14e9c08e0

void __thiscall
TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = &this->Hash;
  uVar6 = this->HashSize;
  uVar13 = (ulonglong)uVar6;
  piVar1 = &this->HashSize;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  if ((uVar6 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar6,4), 0 < (int)uVar6)) {
    uVar9 = uVar11;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar3;
      }
      uVar7 = uVar9 & (longlong)(int)uVar6 - 1U;
      uVar9 = uVar9 + 1;
      *(undefined4 *)((longlong)FVar8 + uVar7 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar6 != 0) {
      puVar14 = *(uint **)&(this->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_40.Array;
      }
      uVar2 = *puVar14;
      uVar13 = uVar11;
      while (uVar2 == 0) {
        iVar10 = (int)uVar11;
        uStack_50 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_50;
        local_68 = iVar10 + 1;
        uVar11 = (ulonglong)local_68;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14e9c0a1b;
        uVar2 = puVar14[(longlong)iVar10 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar13 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_54 = (int)lVar5 + -1 + uStack_50;
      uVar11 = (ulonglong)uStack_54;
      if ((int)uVar6 < (int)uStack_54) {
LAB_14e9c0a1b:
        uVar11 = (ulonglong)uVar6;
        uStack_54 = uVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar11 < (int)uVar6) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar11 * 0x50 + *(longlong *)&this->Elements);
        uVar4 = *puVar12;
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar6 = *piVar1 - 1U & uVar6 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x44) = uVar6;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar13 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar12 + 8) = *(undefined4 *)((longlong)FVar8 + uVar13 * 4);
        *(int *)((longlong)FVar8 + uVar13 * 4) = (int)uVar11;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar11 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

