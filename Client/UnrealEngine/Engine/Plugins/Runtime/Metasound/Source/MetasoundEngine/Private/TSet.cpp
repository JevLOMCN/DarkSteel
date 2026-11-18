// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 35

// Emplace<FMetasoundAssetBase_*_const_&> @ 14b30f390

FSetElementId __thiscall
TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>::
Emplace<FMetasoundAssetBase_*_const_&>
          (TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>
           *this,FMetasoundAssetBase **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<FMetasoundAssetBase_*> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) = uVar3;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FMetaSoundAssetKey_const_&> @ 14b30f560

FSetElementId __thiscall
TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator>::
Emplace<FMetaSoundAssetKey_const_&>
          (TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator> *this
          ,FMetaSoundAssetKey *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FName FVar4;
  FMetasoundFrontendVersionNumber FVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  char *in_R9;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FMetaSoundAssetKey *)0x0) {
    FVar4 = *(FName *)(param_2 + 8);
    (local_48.Pointer)->Namespace = *(FName *)param_2;
    (local_48.Pointer)->Name = FVar4;
    FVar5 = *(FMetasoundFrontendVersionNumber *)(param_2 + 0x18);
    (local_48.Pointer)->Variant = *(FName *)(param_2 + 0x10);
    *(FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x18) = FVar5;
    (((FMetaSoundAssetKey *)((longlong)local_48.Pointer + 0x20))->ClassName).Namespace.
    ComparisonIndex.Value = 0xffffffff;
  }
  uVar7 = ::GetTypeHash(local_48.Pointer);
  iVar1 = *(int *)puVar13;
  bVar15 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar12 = local_48.Index;
  if ((iVar1 - iVar6 != 1) && (iVar1 != iVar6)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar10 = *(uint *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (uVar10 != 0xffffffff) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar8 = (longlong)(int)uVar10;
        if ((((*(FName *)(lVar3 + lVar8 * 0x28) == (local_48.Pointer)->Namespace) &&
             (*(FName *)(lVar3 + 8 + lVar8 * 0x28) == (local_48.Pointer)->Name)) &&
            (*(FName *)(lVar3 + 0x10 + lVar8 * 0x28) == (local_48.Pointer)->Variant)) &&
           ((*(int *)(lVar3 + 0x18 + lVar8 * 0x28) ==
             ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x18))->Major &&
            (*(int *)(lVar3 + 0x1c + lVar8 * 0x28) ==
             ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x18))->Minor)))) {
          bVar15 = uVar10 != 0xffffffff;
          if (bVar15) {
            memmove((void *)(lVar3 + (longlong)(int)uVar10 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            uVar12 = uVar10;
          }
          break;
        }
        uVar10 = *(uint *)(lVar3 + 0x20 + lVar8 * 0x28);
      } while (uVar10 != 0xffffffff);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar10 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar14 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      (((FMetaSoundAssetKey *)((longlong)local_48.Pointer + 0x20))->ClassName).Namespace.Number =
           uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      (((FMetaSoundAssetKey *)((longlong)local_48.Pointer + 0x20))->ClassName).Namespace.
      ComparisonIndex.Value = *(uint *)((longlong)FVar11 + uVar9 * 4);
      *(uint *)((longlong)FVar11 + uVar9 * 4) = uVar12;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  (param_1->ClassName).Namespace.ComparisonIndex.Value = uVar12;
  return (FSetElementId)(int)param_1;
}

// Emplace<FMetasoundAssetBase_*> @ 14b30fed0

FSetElementId __thiscall
TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>::
Emplace<FMetasoundAssetBase_*>
          (TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>
           *this,FMetasoundAssetBase **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<FMetasoundAssetBase_*> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) = uVar3;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<void_const_*,unsigned_int>_> @ 14b3100a0

FSetElementId __thiscall
TSet<TTuple<void_const_*,unsigned_int>,DefaultKeyFuncs<TTuple<void_const_*,unsigned_int>,0>,FDefaultSetAllocator>
::Emplace<TTuple<void_const_*,unsigned_int>_>
          (TSet<TTuple<void_const_*,unsigned_int>,DefaultKeyFuncs<TTuple<void_const_*,unsigned_int>,0>,FDefaultSetAllocator>
           *this,TTuple<void_const_*,unsigned_int> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    uVar6 = *(ulonglong *)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = uVar6;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)puVar11;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar5 = uVar5 * 0x40 + -0x61c88647 + (int)*(ulonglong *)((longlong)local_48.Pointer + 8) +
          (uVar5 >> 2) ^ uVar5;
  if ((iVar10 - iVar3 != 1) && (iVar10 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar4 = (longlong)iVar10;
        if ((*(ulonglong *)(lVar2 + lVar4 * 0x18) == uVar6) &&
           (*(int *)(lVar2 + 8 + lVar4 * 0x18) ==
            (int)*(ulonglong *)((longlong)local_48.Pointer + 8))) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>_> @ 14b310300

FSetElementId __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>_>
          (TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
           *this,TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName FVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar7);
  if (local_28.Pointer != (FMetasoundFrontendClassName *)0x0) {
    pFVar4 = *(FName **)param_2;
    pFVar5 = *(FName **)(param_2 + 8);
    FVar6 = pFVar4[1];
    *local_28.Pointer = *pFVar4;
    *(FName *)((longlong)local_28.Pointer + 8) = FVar6;
    *(FName *)((longlong)local_28.Pointer + 0x10) = pFVar4[2];
    ((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Namespace = *pFVar5;
    (((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Name).ComparisonIndex.
    Value = 0xffffffff;
  }
  uVar8 = ::GetTypeHash(local_28.Pointer);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
    uVar8 = this->HashSize - 1U & uVar8;
    (((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Name).Number = uVar8;
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
    (((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Name).ComparisonIndex.
    Value = *(uint *)((longlong)FVar11 + uVar9 * 4);
    *(int *)((longlong)FVar11 + uVar9 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar12;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey_const_&,Metasound::FMetasoundGeneratorHandle::FOutputWatcher_&&>_> @ 14b310490

FSetElementId __thiscall
TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey_const_&,Metasound::FMetasoundGeneratorHandle::FOutputWatcher_&&>_>
          (TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey_const_&,Metasound::FMetasoundGeneratorHandle::FOutputWatcher_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FOutputWatcher *pFVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ForElementType<FSetElementId> FVar15;
  bool *in_R9;
  int iVar16;
  int local_res8 [2];
  undefined1 local_58 [8];
  TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>
  *pTStack_50;
  FSparseArrayAllocationInfo local_48;
  undefined8 local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar16 = 1;
  if (iVar1 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xb0,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                        (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar10 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar10 * 0xb0 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xb0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<176,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<176,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)local_58,iVar10);
  pTVar8 = pTStack_50;
  if (pTStack_50 !=
      (TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>
       *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    pFVar5 = *(FOutputWatcher **)(param_2 + 8);
    uVar6 = puVar4[1];
    *(undefined8 *)pTStack_50 = *puVar4;
    *(undefined8 *)&pTStack_50->field_0x8 = uVar6;
    *(undefined8 *)&pTStack_50->field_0x10 = puVar4[2];
    Metasound::FMetasoundGeneratorHandle::FOutputWatcher::FOutputWatcher
              ((FOutputWatcher *)&pTStack_50->field_0x18,pFVar5);
    *(undefined4 *)&pTStack_50->field_0xa8 = 0xffffffff;
  }
  local_48.Index = *(int *)&pTStack_50->field_0x0;
  local_48._4_4_ = *(undefined4 *)&pTStack_50->field_0x4;
  local_48.Pointer = *(void **)&pTStack_50->field_0x8;
  local_res8[0] = local_58._0_4_;
  local_38 = *(undefined8 *)&pTStack_50->field_0x10;
  local_58 = (undefined1  [8])local_48._0_8_;
  pTStack_50 = local_48.Pointer;
  uVar11 = ::GetTypeHash(local_38._0_4_);
  uVar14 = (ulonglong)local_38 >> 0x20;
  uVar12 = ::GetTypeHash(pTStack_50._0_4_);
  uVar7 = (ulonglong)local_48.Pointer >> 0x20;
  uVar13 = ::GetTypeHash((FNameEntryId)local_58._0_4_);
  uVar13 = local_48._4_4_ + uVar13;
  uVar13 = uVar13 * 0x40 + (int)uVar7 + uVar12 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar13;
  uVar13 = uVar13 * 0x40 + (int)uVar14 + uVar11 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar13;
  bVar9 = TryReplaceExisting(this,uVar13,pTVar8,local_res8,in_R9);
  if (!bVar9) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar14 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar16 <= this->HashSize)) {
      uVar13 = this->HashSize - 1U & uVar13;
      *(uint *)&pTVar8->field_0xac = uVar13;
      FVar15 = (this->Hash).SecondaryData;
      if (FVar15 == (ForElementType<FSetElementId>)0x0) {
        FVar15 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar14 = (longlong)this->HashSize - 1U & (longlong)(int)uVar13;
      *(undefined4 *)&pTVar8->field_0xa8 = *(undefined4 *)((longlong)FVar15 + uVar14 * 4);
      *(int *)((longlong)FVar15 + uVar14 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar16;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo_&&>_> @ 14b3106f0

FSetElementId __thiscall
TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_const_&,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo_&&>_>
          (TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>_>
       *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = uVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  uVar5 = *(undefined8 *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
  uVar8 = (int)((ulonglong)uVar5 >> 0x20) + uVar8;
  bVar6 = TryReplaceExisting(this,uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_EMetaSoundOutputAudioFormat_const_&,Metasound::Engine::FOutputAudioFormatInfo_const_&>_> @ 14b3108a0

FSetElementId __thiscall
TSet<TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<enum_EMetaSoundOutputAudioFormat_const_&,Metasound::Engine::FOutputAudioFormatInfo_const_&>_>
          (void *this,
          TPairInitializer<EMetaSoundOutputAudioFormat_const_&,Metasound::Engine::FOutputAudioFormatInfo_const_&>
          *param_1,bool *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar3 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x30);
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar3 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>_>
       *)0x0) {
    TPairInitializer<enum_EMetaSoundOutputAudioFormat_const_&,Metasound::Engine::FOutputAudioFormatInfo_const_&>
    ::
    operator<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>_TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>
              (param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
  }
  bVar2 = *(byte *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)bVar2,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
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
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & (uint)bVar2;
      *(uint *)((longlong)local_38.Pointer + 0x2c) = uVar7;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x28) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FMetaSoundAssetKey_const_&>_> @ 14b310a30

FSetElementId __thiscall
TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMetaSoundAssetKey_const_&>_>
          (TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMetaSoundAssetKey_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  longlong *plVar10;
  void *_Dst;
  int iVar11;
  bool bVar12;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)param_3;
    lVar2 = plVar10[1];
    *(longlong *)local_38.Pointer = *plVar10;
    *(longlong *)((longlong)local_38.Pointer + 8) = lVar2;
    lVar2 = plVar10[3];
    *(longlong *)((longlong)local_38.Pointer + 0x10) = plVar10[2];
    *(longlong *)((longlong)local_38.Pointer + 0x18) = lVar2;
    *(longlong *)((longlong)local_38.Pointer + 0x20) = 0;
    *(longlong *)((longlong)local_38.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
    plVar10 = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar9 * 0x38;
        if ((((*(longlong *)(lVar5 + lVar2) == *plVar10) &&
             (*(longlong *)(lVar5 + 8 + lVar2) == plVar10[1])) &&
            (*(longlong *)(lVar5 + 0x10 + lVar2) == plVar10[2])) &&
           ((*(int *)(lVar5 + 0x18 + lVar2) == (int)plVar10[3] &&
            (*(int *)(lVar5 + 0x1c + lVar2) == *(int *)((longlong)plVar10 + 0x1c))))) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar9 * 0x38 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 0x20);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,plVar10,0x30);
            TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar5 + 0x30 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)plVar10 + 0x34) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)(plVar10 + 6) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 14b310ca0

FSetElementId __thiscall
TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar9 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (longlong *)0x0) {
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(longlong *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar8 = *(int *)puVar9;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar8 * 0x18) == *(longlong *)local_38.Pointer) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            memmove((void *)(lVar2 + (longlong)iVar8 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)puVar9 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<FMetaSoundAssetKey> @ 14b311a10

int __thiscall
TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FMetaSoundAssetKey>
          (TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FMetaSoundAssetKey *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0x38;
        if ((((*(FName *)(lVar2 + lVar1) == (param_2->ClassName).Namespace) &&
             (*(FName *)(lVar2 + 8 + lVar1) == (param_2->ClassName).Name)) &&
            (*(FName *)(lVar2 + 0x10 + lVar1) == (param_2->ClassName).Variant)) &&
           ((*(int *)(lVar2 + 0x18 + lVar1) == (param_2->Version).Major &&
            (*(int *)(lVar2 + 0x1c + lVar1) == (param_2->Version).Minor)))) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x30 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey> @ 14b311aa0

int __thiscall
TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey>
          (TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
           *this,uint param_1,FOutputWatcherKey *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0xb0;
        if (((*(FName *)(lVar2 + lVar1) == param_2->OutputName) &&
            (*(FName *)(lVar2 + 8 + lVar1) == param_2->AnalyzerName)) &&
           (*(FName *)(lVar2 + 0x10 + lVar1) == param_2->AnalyzerMemberName)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0xa8 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// RemoveImpl<FMetaSoundAssetKey> @ 14b333650

int __thiscall
TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<FMetaSoundAssetKey>
          (TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FMetaSoundAssetKey *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((((lVar7 = (longlong)(int)uVar9 * 0x38,
           *(FName *)(lVar7 + lVar2) != (param_2->ClassName).Namespace ||
           (*(FName *)(lVar7 + 8 + lVar2) != (param_2->ClassName).Name)) ||
          (*(FName *)(lVar7 + 0x10 + lVar2) != (param_2->ClassName).Variant)) ||
         ((*(int *)(lVar7 + 0x18 + lVar2) != (param_2->Version).Major ||
          (*(int *)(lVar7 + 0x1c + lVar2) != (param_2->Version).Minor))))) {
    uVar9 = *(uint *)(lVar7 + 0x30 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14b333758;
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
LAB_14b333758:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar9,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FMetasoundFrontendClassName> @ 14b333800

int __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::RemoveImpl<FMetasoundFrontendClassName>
          (TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendClassName *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  ForElementType<FSetElementId> FVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  FName *pFVar13;
  
  iVar5 = 0;
  FVar12 = (this->Hash).SecondaryData;
  lVar11 = (longlong)(int)(this->HashSize - 1U & param_1);
  if (FVar12 == (ForElementType<FSetElementId>)0x0) {
    FVar12 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar1 = *(uint *)((longlong)FVar12 + lVar11 * 4);
  pFVar13 = (FName *)((longlong)FVar12 + lVar11 * 4);
  do {
    if (uVar1 == 0xffffffff) {
      return iVar5;
    }
    pFVar7 = (FName *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28);
    if (((*pFVar7 == param_2->Namespace) && (pFVar7[1] == param_2->Name)) &&
       (pFVar7[2] == param_2->Variant)) {
      if (((int)uVar1 < 0) || (*(int *)&(this->Elements).field_0x28 <= (int)uVar1)) {
LAB_14b3338f3:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
      }
      else {
        if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        puVar2 = *(undefined1 **)&(this->Elements).field_0x20;
        puVar9 = &(this->Elements).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar9 = puVar2;
        }
        uVar6 = uVar1;
        if ((int)uVar1 < 0) {
          uVar6 = uVar1 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
        goto LAB_14b3338f3;
      }
      FVar12 = (this->Hash).SecondaryData;
      lVar11 = *(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28;
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar12 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar12;
      }
      puVar10 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar11 + 0x24) * 4);
      while( true ) {
        uVar6 = *puVar10;
        if ((uVar6 == 0xffffffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        if (uVar6 == uVar1) break;
        puVar10 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x28 + 0x20);
      }
      *puVar10 = *(uint *)(lVar11 + 0x20);
      TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar1,1);
      iVar5 = iVar5 + 1;
    }
    else {
      pFVar13 = pFVar7 + 4;
    }
    uVar1 = (pFVar13->ComparisonIndex).Value;
  } while( true );
}

// RemoveImpl<FSoftObjectPath> @ 14b3339d0

int __thiscall
TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
RemoveImpl<FSoftObjectPath>
          (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *this,
          uint param_1,FSoftObjectPath *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FSoftObjectPath *this_00;
  undefined1 *puVar8;
  uint *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    this_00 = (FSoftObjectPath *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x28);
    bVar3 = FSoftObjectPath::operator==(this_00,param_2);
    if (bVar3) break;
    uVar6 = this_00[1].AssetPath.PackageName.ComparisonIndex.Value;
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14b333ac0;
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
LAB_14b333ac0:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x28;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar9 = *(uint *)(lVar7 + 0x20);
      TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FName> @ 14b333b70

int __thiscall
TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar7 = (longlong)(int)uVar6 * 0x18,
        *(FName *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0x10 + *(longlong *)&this->Elements);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14b333c57;
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
LAB_14b333c57:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Array @ 14b365740

TArray<FMetaSoundAssetKey,TSizedDefaultAllocator<32>_> * __thiscall
TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator>::Array
          (TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator> *this
          ,TArray<FMetaSoundAssetKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  TArray<FMetaSoundAssetKey,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar14 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,uVar14,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar14 = 1;
  iVar15 = iVar13;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar16;
    iVar15 = 0;
    iVar13 = 0;
    while (uVar5 == 0) {
      lVar12 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14b365822;
      uVar5 = puVar16[lVar12 + 1];
    }
    uVar14 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar12 + -1 + iVar15;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14b365822:
  TStack_40._padding_ = CONCAT44(uVar14,iVar13);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar15;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&this->Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x20)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TArray<FMetaSoundAssetKey,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar11;
      }
      iVar13 = __return_storage_ptr__->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x420,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar13 + 1;
      uVar9 = *(undefined8 *)(pFVar2 + 8);
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar13 * 0x20;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar6 + 8) = uVar9;
      uVar9 = *(undefined8 *)(pFVar2 + 0x18);
      pFVar7 = pFVar7 + (longlong)iVar13 * 0x20 + 0x10;
      *(undefined8 *)pFVar7 = *(undefined8 *)(pFVar2 + 0x10);
      *(undefined8 *)(pFVar7 + 8) = uVar9;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Find @ 14b3a5d30

TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> * __thiscall
TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
       *this,FName param_1)

{
  TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *pTVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1.Number + uVar2) * 4
                    );
    if (iVar3 != -1) {
      do {
        pTVar1 = (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)
                 (*(longlong *)&this->Elements + (longlong)iVar3 * 0x18);
        if (*(FName *)(*(longlong *)&this->Elements + (longlong)iVar3 * 0x18) == param_1) {
          return pTVar1;
        }
        iVar3 = *(int *)(pTVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)0x0;
}

// Rehash @ 14b3d2510

void __thiscall
TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b3d25ec;
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
LAB_14b3d25ec:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d26d0

void __thiscall
TSet<TTuple<void_const_*,unsigned_int>,DefaultKeyFuncs<TTuple<void_const_*,unsigned_int>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<void_const_*,unsigned_int>,DefaultKeyFuncs<TTuple<void_const_*,unsigned_int>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar6 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar7 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b3d27ac;
        uVar6 = puVar10[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_54 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_44 = (int)lVar7 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14b3d27ac:
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
        lVar5 = (longlong)local_30.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        lVar7 = lVar3 + lVar5 * 0x18;
        uVar8 = *(ulonglong *)(lVar3 + lVar5 * 0x18);
        uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        uVar6 = (*(int *)(lVar3 + 8 + lVar5 * 0x18) + (uVar6 >> 2) + uVar6 * 0x40 + -0x61c88647 ^
                uVar6) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x14) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d28b0

void __thiscall
TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FMetaSoundAssetKey *pFVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b3d2987;
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
LAB_14b3d2987:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FMetaSoundAssetKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].ClassName.Variant.Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].ClassName.Variant.ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d2a40

void __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  FMetasoundFrontendClassName *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
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
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b3d2b17;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14b3d2b17:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pFVar2 = (FMetasoundFrontendClassName *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = ::GetTypeHash(pFVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        pFVar2[1].Name.Number = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        pFVar2[1].Name.ComparisonIndex.Value = *(uint *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d2bd0

void __thiscall
TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  uint *puVar13;
  undefined8 *puVar14;
  FNameEntryId local_78;
  FNameEntryId FStack_70;
  int local_68;
  uint uStack_64;
  FNameEntryId local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)&(this->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_40.Array;
      }
      uVar7 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar10 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b3d2ca7;
        uVar7 = puVar13[lVar10 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_54 = (int)lVar10 + -1 + iStack_50;
      if (iVar3 < iStack_54) {
LAB_14b3d2ca7:
        iStack_54 = iVar3;
      }
    }
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar14 = (undefined8 *)
                  ((longlong)local_40.CurrentBitIndex * 0xb0 + *(longlong *)&this->Elements);
        uVar5 = *puVar14;
        uVar6 = puVar14[1];
        uVar2 = puVar14[2];
        local_58.Value = (uint)uVar2;
        uVar7 = ::GetTypeHash(local_58);
        FStack_70.Value = (uint)uVar6;
        uVar8 = ::GetTypeHash(FStack_70);
        local_78.Value = (uint)uVar5;
        uVar9 = ::GetTypeHash(local_78);
        uVar9 = (int)((ulonglong)uVar5 >> 0x20) + uVar9;
        uVar9 = uVar9 * 0x40 + (int)((ulonglong)uVar6 >> 0x20) + uVar8 + (uVar9 >> 2) + 0x9e3779b9 ^
                uVar9;
        uVar7 = ((uVar9 >> 2) + (int)((ulonglong)uVar2 >> 0x20) + uVar7 + uVar9 * 0x40 + -0x61c88647
                ^ uVar9) & *piVar1 - 1U;
        *(uint *)((longlong)puVar14 + 0xac) = uVar7;
        FVar4 = (this->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar4;
        }
        uVar11 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar14 + 0x15) = *(undefined4 *)((longlong)FVar12 + uVar11 * 4);
        *(int *)((longlong)FVar12 + uVar11 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d2e10

void __thiscall
TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b3d2ee7;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14b3d2ee7:
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
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d2fc0

void __thiscall
TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b3d3097;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14b3d3097:
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
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d3160

void __thiscall
TSet<TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b3d323c;
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
LAB_14b3d323c:
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
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x30 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0x2c) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0x28) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b3d3300

void __thiscall
TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator>::Rehash
          (TSet<FMetaSoundAssetKey,DefaultKeyFuncs<FMetaSoundAssetKey,0>,FDefaultSetAllocator> *this
          )

{
  int *piVar1;
  FMetaSoundAssetKey *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
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
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b3d33d7;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14b3d33d7:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pFVar2 = (FMetaSoundAssetKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = ::GetTypeHash(pFVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        pFVar2[1].ClassName.Namespace.Number = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        pFVar2[1].ClassName.Namespace.ComparisonIndex.Value = *(uint *)((longlong)FVar8 + uVar7 * 4)
        ;
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14b3d3490

void __thiscall
TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>::
RehashOrLink(TSet<FMetasoundAssetBase_*,DefaultKeyFuncs<FMetasoundAssetBase_*,0>,FDefaultSetAllocator>
             *this,uint param_1,TSparseSetElement<FMetasoundAssetBase_*> *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0xc = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RemoveByIndex @ 14b3d49d0

void __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14b3d4a42;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14b3d4a42:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x28;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x24) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
  }
  *piVar7 = *(int *)(lVar1 + 0x20);
  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reset @ 14b3da860

void __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14b3e3ab0

bool __thiscall
TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar2 != 1) && (iVar12 != iVar2)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar12 * 0xb0;
        if (((*(longlong *)(lVar10 + lVar3) == *(longlong *)param_2) &&
            (*(longlong *)(lVar10 + 8 + lVar3) == *(longlong *)&param_2->field_0x8)) &&
           (*(longlong *)(lVar10 + 0x10 + lVar3) == *(longlong *)&param_2->field_0x10)) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar12 * 0xb0 + lVar3);
            DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                      (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                        ((longlong)_Dst + 0x90),*(int *)((longlong)_Dst + 0x98));
            if (*(void **)((longlong)_Dst + 0x90) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x90));
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)((longlong)_Dst + 0x88));
            if (*(void **)((longlong)_Dst + 0x78) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x78));
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)((longlong)_Dst + 0x70));
            memmove(_Dst,param_2,0xa8);
            iVar2 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar3 = *(longlong *)&this->Elements;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            if (((*(uint *)(puVar9 + lVar10) & uVar13) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xb0 + lVar3) = iVar2;
            }
            uVar8 = 0xffffffff;
            *(undefined4 *)((longlong)iVar2 * 0xb0 + lVar3) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar2 * 0xb0 + 4 + lVar3) = uVar8;
            puVar9 = &(this->Elements).field_0x34;
            *(int *)puVar9 = *(int *)puVar9 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar2;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            *(uint *)(puVar9 + lVar10) = *(uint *)(puVar9 + lVar10) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar10 + 0xa8 + lVar3);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14b3e3d30

bool __thiscall
TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  iVar11 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar11 - iVar3 != 1) && (iVar11 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar11 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar11 * 0x20 + lVar4) == *(longlong *)param_2) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            memmove((void *)((longlong)iVar11 * 0x20 + lVar4),param_2,0x18);
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x20 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar4) = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar11;
          }
          break;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar4);
      } while (iVar11 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14b3e3f60

bool __thiscall
TSet<TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>_>
          *param_2,int *param_3,bool *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  void *_Dst;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar10 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar10 = (longlong)this + 0x38;
    }
    iVar12 = *(int *)(lVar10 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar10 = *(longlong *)this;
      do {
        if (*(char *)(lVar10 + (longlong)iVar12 * 0x30) == *(char *)param_2) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar12 * 0x30 + lVar10);
            pvVar4 = *(void **)((longlong)_Dst + 0x18);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,param_2,0x28);
            iVar3 = *param_3;
            lVar10 = *(longlong *)this;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar13 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar13 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar13 + lVar2) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)(lVar10 + (longlong)*(int *)((longlong)this + 0x30) * 0x30) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0x30 + lVar10);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar9 = *(undefined4 *)((longlong)this + 0x30);
            }
            puVar11[1] = uVar9;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar3;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
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
            puVar1 = (uint *)(lVar10 + lVar2);
            *puVar1 = *puVar1 & ~uVar14;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar10 + 0x28 + (longlong)iVar12 * 0x30);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14b3e4220

void __thiscall
TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14b3e431b;
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
LAB_14b3e431b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14b3e4410;
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
LAB_14b3e4410:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x38 + 0x34 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14b3e44b0

void __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14b3e45ab;
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
LAB_14b3e45ab:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14b3e46a0;
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
LAB_14b3e46a0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x24 + (longlong)local_60.CurrentBitIndex * 0x28) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

