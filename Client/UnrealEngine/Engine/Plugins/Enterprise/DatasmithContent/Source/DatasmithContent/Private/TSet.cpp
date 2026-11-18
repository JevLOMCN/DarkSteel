// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 10

// Emplace<TKeyInitializer<unsigned_int_const_&>_> @ 14e2ef180

FSetElementId __thiscall
TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<unsigned_int_const_&>_>
          (TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<unsigned_int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  bool *in_R9;
  int local_res8 [2];
  uint local_40;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<TTuple<unsigned_int,FMeshSectionInfo>_> *)0x0) {
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 4) = 0x101010100000000;
    local_40 = local_40 & 0xffffff00;
    *(uint *)((longlong)local_38.Pointer + 0xc) = local_40;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar10 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,uVar10,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned_int_const_&,FDatasmithMeshSectionInfoTemplate_&&>_> @ 14e2ef350

FSetElementId __thiscall
TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_const_&,FDatasmithMeshSectionInfoTemplate_&&>_>
          (TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_const_&,FDatasmithMeshSectionInfoTemplate_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (uint *)0x0) {
    puVar3 = *(uint **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(uint *)((longlong)local_38.Pointer + 4) = *puVar3;
    *(uint *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *(uint *)local_38.Pointer;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar9 * 0x10) == uVar10) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(uint *)((longlong)local_38.Pointer + 8) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Sort<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_> @ 14e2f36a0

void __thiscall
TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
Sort<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>
          (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           *this,FKeyComparisonClass<FNameLexicalLess> *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<FNameLexicalLess> *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// operator= @ 14e2f6600

/* WARNING: Type propagation algorithm not settling */

TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  bool bVar6;
  int iVar7;
  TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
  *pTVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar7 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar7;
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar7,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar4 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar4 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar4,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  puVar3 = *(undefined8 **)&this->Elements;
  iVar12 = 0;
  if (0 < iVar7) {
    uVar10 = 1;
    lVar13 = *(longlong *)&param_1->Elements - (longlong)puVar3;
    do {
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(puVar3 + 1);
      if (((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
                  *)(*pcVar5)();
        return pTVar8;
      }
      puVar4 = *(undefined1 **)&(param_1->Elements).field_0x20;
      pTVar2 = (TPersistentObjectPtr<FSoftObjectPath> *)(lVar13 + (longlong)this_00);
      puVar9 = puVar1;
      if (puVar4 != (undefined1 *)0x0) {
        puVar9 = puVar4;
      }
      iVar7 = iVar12;
      if (iVar12 < 0) {
        iVar7 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)puVar3 = *(undefined4 *)((longlong)this_00 + lVar13 + -8);
        *(int *)((longlong)puVar3 + 4) = pTVar2[-1].ObjectID.SubPathString.Data.ArrayMax;
      }
      else {
        *puVar3 = *(undefined8 *)((longlong)this_00 + lVar13 + -8);
        TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>(this_00,pTVar2)
        ;
        *(int *)(puVar3 + 6) = pTVar2[1].WeakPtr.ObjectIndex;
        *(int *)((longlong)puVar3 + 0x34) = pTVar2[1].WeakPtr.ObjectSerialNumber;
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar3 = puVar3 + 7;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Includes @ 14e2fda10

bool __thiscall
TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Includes
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  ForElementType<FSetElementId> FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 <
      *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) {
    return false;
  }
  iStack_38 = 0;
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar4 != 0) {
    puVar7 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar5 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_38) goto LAB_14e2fdacb;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = local_20 + -1 + (int)lVar5;
    if (iVar4 < iStack_24) {
      iStack_24 = iVar4;
    }
  }
LAB_14e2fdacb:
  uStack_28 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = param_1;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < *(int *)&(param_1->Elements).field_0x28) {
    do {
      lVar5 = *(longlong *)
               (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
      uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
      if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
        return false;
      }
      FVar2 = (this->Hash).SecondaryData;
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar6 = FVar2;
      }
      iVar4 = *(int *)((longlong)FVar6 +
                      (ulonglong)(this->HashSize - 1U & uVar3 + (int)((ulonglong)lVar5 >> 0x20)) * 4
                      );
      if (iVar4 == -1) {
        return false;
      }
      while (*(longlong *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x10) != lVar5) {
        iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar4 * 0x10);
        if (iVar4 == -1) {
          return false;
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return true;
}

// Rehash @ 14e2fe290

void __thiscall
TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e2fe36c;
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
LAB_14e2fe36c:
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

// Rehash @ 14e2fe420

void __thiscall
TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e2fe4fc;
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
LAB_14e2fe4fc:
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
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14e2fefc0

bool __thiscall
TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<unsigned_int,FMeshSectionInfo>_> *param_2,
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

// UnhashElements @ 14e2ff1f0

void __thiscall
TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e2ff2eb;
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
LAB_14e2ff2eb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e2ff3e0;
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
LAB_14e2ff3e0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Union @ 14e2ff480

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Union
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  ForElementType<FSetElementId> FVar1;
  undefined8 uVar2;
  longlong lVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  FName local_res8;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  ulonglong uVar15;
  
  uVar15 = 0;
  uVar13 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  uVar6 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar14 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar11 = ((*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) -
           *(int *)&(this->Elements).field_0x34) + *(int *)&(this->Elements).field_0x8;
  uVar12 = 1;
  uVar19 = 0;
  local_res8 = (FName)this;
  if (uVar11 == 0) goto LAB_14e2ff6e4;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar11);
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar12 <= __return_storage_ptr__->HashSize))
  goto LAB_14e2ff6e4;
  __return_storage_ptr__->HashSize = uVar12;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_14e2ff560;
      }
    }
    else {
LAB_14e2ff560:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar18 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar7 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar9 + uVar7 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar11 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uVar10 = uVar15;
    if (uVar11 != 0) {
      puVar21 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)TStack_60.Array;
      }
      uVar12 = *puVar21;
      uVar18 = uVar15;
      while (uVar12 == 0) {
        uStack_80 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_80;
        iVar8 = (int)uVar10;
        local_98 = iVar8 + 1;
        uVar10 = (ulonglong)local_98;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_98)
        goto LAB_14e2ff649;
        uVar12 = puVar21[(longlong)iVar8 + 1];
      }
      uStack_94 = -uVar12 & uVar12;
      uVar10 = (ulonglong)uStack_94 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_84 = (int)lVar3 + -1 + uStack_80;
      uVar10 = (ulonglong)uStack_84;
      if ((int)uVar11 < (int)uStack_84) {
LAB_14e2ff649:
        uVar10 = (ulonglong)uVar11;
        uStack_84 = uVar11;
      }
    }
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = uStack_84;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = local_98;
    TStack_60._padding_._4_4_ = uStack_94;
    if ((int)uVar10 < (int)uVar11) {
      do {
        puVar16 = (undefined8 *)
                  ((longlong)(int)uVar10 * 0x10 + *(longlong *)&__return_storage_ptr__->Elements);
        uVar2 = *puVar16;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar11 = __return_storage_ptr__->HashSize - 1U & uVar11 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar16 + 0xc) = uVar11;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)((longlong)FVar9 + uVar18 * 4);
        *(int *)((longlong)FVar9 + uVar18 * 4) = (int)uVar10;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14e2ff6e4:
  FVar4 = local_res8;
  uVar11 = *(uint *)((longlong)local_res8 + 0x28);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_res8 + 0x10);
  uVar10 = uVar15;
  uVar12 = 1;
  uVar17 = uVar19;
  uVar20 = uVar19;
  if (uVar11 != 0) {
    uVar10 = (ulonglong)uVar11;
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_res8 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_res8 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = TStack_60.Array;
    }
    uVar12 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    uVar18 = uVar15;
    uVar7 = uVar15;
    uVar20 = uVar13;
    uVar17 = uVar13;
    while (uVar12 == 0) {
      iVar8 = (int)uVar18;
      uVar20 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uVar20;
      uVar17 = iVar8 + 1;
      uVar18 = (ulonglong)uVar17;
      uVar12 = 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14e2ff76b;
      uVar12 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
    }
    uVar12 = -uVar12 & uVar12;
    uVar10 = (ulonglong)uVar12 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar5 = (uVar20 - 1) + (int)lVar3;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
    uVar10 = (ulonglong)uVar5;
  }
LAB_14e2ff76b:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar12,uVar17);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar20;
  if (TStack_60.CurrentBitIndex < (int)uVar11) {
    do {
      Emplace<FName_const_&>
                (__return_storage_ptr__,&local_res8,
                 (bool *)((longlong)(int)uVar10 * 0x10 + *(longlong *)FVar4));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uVar10 = uVar15;
  if (uVar11 != 0) {
    puVar21 = *(uint **)&(param_1->Elements).field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)TStack_60.Array;
    }
    uVar12 = *puVar21;
    uVar18 = uVar15;
    uVar19 = uVar13;
    uVar14 = uVar13;
    while (uVar12 == 0) {
      iVar8 = (int)uVar15;
      uVar19 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uVar19;
      uVar14 = iVar8 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14e2ff85b;
      uVar12 = puVar21[(longlong)iVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = (uVar19 - 1) + (int)lVar3;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14e2ff85b:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar6,uVar14);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar19;
  if (TStack_60.CurrentBitIndex < (int)uVar11) {
    do {
      Emplace<FName_const_&>
                (__return_storage_ptr__,&local_res8,
                 (bool *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&param_1->Elements));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

