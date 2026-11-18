// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 45

// Emplace<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*_const_&> @ 148cae500

FSetElementId __thiscall
TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
::
Emplace<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*_const_&>
          (TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
           *this,FCacheEntry **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar12 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x10);
    iVar12 = iVar12 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  iVar12 = local_48.Index;
  if (local_48.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_48.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  plVar3 = *(longlong **)local_48.Pointer;
  bVar14 = false;
  uVar11 = *(uint *)(plVar3 + 1);
  lVar2 = *plVar3;
  uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
  iVar6 = *(int *)puVar13;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  uVar11 = (uVar11 >> 0x18) +
           ((((((uVar8 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)lVar2 >> 0x30) & 0xff)) * 0x21 +
              (uint)(byte)((ulonglong)lVar2 >> 0x38)) * 0x21 + (uVar11 & 0xff)) * 0x21 +
            (uVar11 >> 8 & 0xff)) * 0x21 + (uVar11 >> 0x10 & 0xff)) * 0x21 +
           (((uint)((ulonglong)lVar2 >> 8) & 0xff) * 0x21 +
           ((uint)((ulonglong)lVar2 >> 0x10) & 0xff)) * 0x40a9121 + (uVar8 & 0xff) * -0x13be2b1f +
           ((uint)((ulonglong)lVar2 >> 0x18) & 0xff) * 0x747c7101 +
           ((uint)lVar2 & 0xff) * 0x30f35d61 + 0x58a2c485;
  local_48._0_8_ = lVar2;
  if ((iVar6 - iVar1 != 1) && (iVar6 != iVar1)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        plVar5 = *(longlong **)(lVar4 + (longlong)iVar6 * 0x10);
        local_48._0_8_ = *plVar5;
        if ((local_48._0_8_ == lVar2) && ((int)plVar5[1] == (int)plVar3[1])) {
          bVar14 = iVar6 != -1;
          if (bVar14) {
            *(longlong **)(lVar4 + (longlong)iVar6 * 0x10) = plVar3;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,iVar12,1);
            iVar12 = iVar6;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar8 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
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
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4)
      ;
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar12;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)param_1 = iVar12;
  return (FSetElementId)(int)param_1;
}

// Emplace<FIoChunkId_const_&> @ 148cae7e0

FSetElementId __thiscall
TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator>::Emplace<FIoChunkId_const_&>
          (TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> *this,
          FIoChunkId *param_1,bool *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar2 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar2 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar2 = iVar2 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar6 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<FIoChunkId> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  uVar10 = *(uint *)((longlong)local_38.Pointer + 8);
  uVar1 = *(undefined8 *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  uVar10 = ((((((SUB84(uVar1,4) >> 8 & 0xff) * 0x21 + (SUB82(uVar1,6) & 0xff)) * 0x21 +
              (uint)SUB81(uVar1,7)) * 0x21 + (uVar10 & 0xff)) * 0x21 + (uVar10 >> 8 & 0xff)) * 0x21
           + (uVar10 >> 0x10 & 0xff)) * 0x21 +
           ((SUB84(uVar1,1) & 0xff) * 0x21 + (SUB84(uVar1,2) & 0xff)) * 0x40a9121 +
           (SUB84(uVar1,4) & 0xff) * -0x13be2b1f + (SUB84(uVar1,3) & 0xff) * 0x747c7101 +
           ((uint)uVar1 & 0xff) * 0x30f35d61 + 0x58a2c485 + (uVar10 >> 0x18);
  local_38._0_8_ = uVar1;
  bVar5 = TryReplaceExisting(this,uVar10,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar10;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)param_1->Id = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FIoChunkId_const_&>_> @ 148caea20

FSetElementId __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FIoChunkId_const_&>_>
          (TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FIoChunkId_const_&> *param_1,bool *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar3 * 0x68 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x68 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer !=
      (TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>
       *)0x0) {
    TKeyInitializer<FIoChunkId_const_&>::
    operator<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>
              ((TKeyInitializer<FIoChunkId_const_&> *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x60) = 0xffffffff;
  }
  iVar11 = local_48.Index;
  uVar10 = *(uint *)((longlong)local_48.Pointer + 8);
  bVar12 = false;
  uVar1 = *(undefined8 *)local_48.Pointer;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar10 = ((uint)uVar1 & 0xff) * 0x30f35d61 + 0x58a2c485 +
           ((((((SUB84(uVar1,4) >> 8 & 0xff) * 0x21 + (SUB82(uVar1,6) & 0xff)) * 0x21 +
              (uint)SUB81(uVar1,7)) * 0x21 + (uVar10 & 0xff)) * 0x21 + (uVar10 >> 8 & 0xff)) * 0x21
           + (uVar10 >> 0x10 & 0xff)) * 0x21 +
           ((SUB84(uVar1,1) & 0xff) * 0x21 + (SUB84(uVar1,2) & 0xff)) * 0x40a9121 +
           (SUB84(uVar1,4) & 0xff) * -0x13be2b1f + (SUB84(uVar1,3) & 0xff) * 0x747c7101 +
           (uVar10 >> 0x18);
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar4 = (longlong)iVar9 * 0x68;
        if ((*(longlong *)(lVar4 + lVar2) == *(longlong *)local_48.Pointer) &&
           (*(int *)(lVar4 + 8 + lVar2) == *(int *)((longlong)local_48.Pointer + 8))) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar9 * 0x68 + lVar2);
            *(undefined4 *)((longlong)_Dst + 0x58) = 0;
            local_48._0_8_ = uVar1;
            if (*(void **)((longlong)_Dst + 0x50) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x50));
            }
            TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x60);
            TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,iVar11,1);
            iVar11 = iVar9;
            uVar1 = local_48._0_8_;
          }
          break;
        }
        iVar9 = *(int *)(lVar4 + 0x60 + lVar2);
      } while (iVar9 != -1);
    }
  }
  local_48._0_8_ = uVar1;
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
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
      *(uint *)&((TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>
                  *)((longlong)local_48.Pointer + 0x60))->field_0x4 = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_48.Pointer + 0x60) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TInterval<unsigned___int64>_&&,int_const_&>_> @ 148caed40

FSetElementId __thiscall
TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TInterval<unsigned___int64>_&&,int_const_&>_>
          (TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TInterval<unsigned___int64>_&&,int_const_&> *param_1,bool *param_2
          )

{
  longlong lVar1;
  undefined4 *puVar2;
  ulong64 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar1);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (TInterval<unsigned___int64> *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    uVar3 = (*(ulong64 **)param_2)[1];
    *(ulong64 *)local_48.Pointer = **(ulong64 **)param_2;
    *(ulong64 *)((longlong)local_48.Pointer + 8) = uVar3;
    *(undefined4 *)&((TInterval<unsigned___int64> *)((longlong)local_48.Pointer + 0x10))->Min =
         *puVar2;
    *(undefined4 *)&((TInterval<unsigned___int64> *)((longlong)local_48.Pointer + 0x10))->Max =
         0xffffffff;
  }
  uVar5 = ::GetTypeHash(local_48.Pointer);
  iVar10 = *(int *)puVar12;
  bVar14 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar10 * 0x20;
        if ((*(ulong64 *)(lVar6 + lVar1) == *(ulong64 *)local_48.Pointer) &&
           (*(ulong64 *)(lVar6 + 8 + lVar1) == *(ulong64 *)((longlong)local_48.Pointer + 8))) {
          bVar14 = iVar10 != -1;
          if (bVar14) {
            memmove((void *)((longlong)iVar10 * 0x20 + lVar1),local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar6 + 0x18 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar8 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar13 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)&((TInterval<unsigned___int64> *)((longlong)local_48.Pointer + 0x10))->Max
               + 4) = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)&((TInterval<unsigned___int64> *)((longlong)local_48.Pointer + 0x10))->Max =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TInterval<unsigned___int64>_const_&,StorageServer::FCacheEntry_const_&>_> @ 148caef80

FSetElementId __thiscall
TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TInterval<unsigned___int64>_const_&,StorageServer::FCacheEntry_const_&>_>
          (TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TInterval<unsigned___int64>_const_&,StorageServer::FCacheEntry_const_&>
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
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar5;
    uVar5 = puVar4[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = puVar4[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar5;
    uVar5 = puVar4[5];
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = puVar4[4];
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x40) = puVar4[6];
    *(undefined4 *)((longlong)local_38.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar8 = ::GetTypeHash(local_38.Pointer);
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
      *(uint *)((longlong)local_38.Pointer + 0x4c) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0x48) =
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

// Emplace<TPairInitializer<FIoHash_const_&,int_const_&>_> @ 148caf140

FSetElementId __thiscall
TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FIoHash_const_&,int_const_&>_>
          (TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FIoHash_const_&,int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar8 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar8);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FIoHash,int>_> *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    puVar5 = *(undefined4 **)(param_2 + 8);
    uVar6 = puVar4[1];
    *(undefined8 *)local_38.Pointer = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar6;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = *(undefined4 *)(puVar4 + 2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x14) = *puVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  uVar13 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar7 = TryReplaceExisting(this,uVar13,local_38.Pointer,local_res8,in_R9);
  if (!bVar7) {
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
      uVar13 = this->HashSize - 1U & uVar13;
      *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar13;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar13;
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

// Emplace<TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&&>_> @ 148caf2f0

FSetElementId __thiscall
TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&&>_>
          (TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&&>
                 *param_1,bool *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_> *pTVar9;
  int iVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if (iVar2 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                        (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar10 = *(int *)&(this->Elements).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->Elements;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar10);
  pTVar9 = (TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_> *)
      0x0) {
    puVar6 = *(undefined8 **)param_2;
    puVar7 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = *puVar6;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar6 + 1);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar7;
    *puVar7 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0x1c) = *(undefined4 *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    pTVar9 = local_38.Pointer;
  }
  uVar4 = *(uint *)&pTVar9->field_0x8;
  uVar1._0_4_ = *(int *)&pTVar9->field_0x0;
  uVar1._4_4_ = *(undefined4 *)&pTVar9->field_0x4;
  local_res8[0] = local_38.Index;
  iVar10 = (((((((uint)uVar1._4_4_ >> 8 & 0xff) * 0x21 +
               ((ushort)((uint)uVar1._4_4_ >> 0x10) & 0xff)) * 0x21 +
              (uint)(byte)((uint)uVar1._4_4_ >> 0x18)) * 0x21 + (uVar4 & 0xff)) * 0x21 +
            (uVar4 >> 8 & 0xff)) * 0x21 + (uVar4 >> 0x10 & 0xff)) * 0x21 +
           ((SUB84(uVar1,1) & 0xff) * 0x21 + (SUB84(uVar1,2) & 0xff)) * 0x40a9121 +
           (uVar1._4_4_ & 0xff) * -0x13be2b1f + (SUB84(uVar1,3) & 0xff) * 0x747c7101 +
           ((int)uVar1 & 0xffU) * 0x30f35d61 + (uVar4 >> 0x18);
  local_38._0_8_ = uVar1;
  bVar8 = TryReplaceExisting(this,iVar10 + 0x58a2c485,pTVar9,local_res8,in_R9);
  iVar2 = local_res8[0];
  if (bVar8) {
    *(int *)&param_1->Key = local_res8[0];
  }
  else {
    RehashOrLink(this,iVar10 + 0x58a2c485,pTVar9,local_res8[0]);
    *(int *)&param_1->Key = iVar2;
  }
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>_> @ 148caf500

FSetElementId __thiscall
TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>_>
          (TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>
                 *param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  char *in_R9;
  int iVar14;
  undefined1 *puVar15;
  bool bVar16;
  FSparseArrayAllocationInfo local_48;
  
  iVar14 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar14 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x40 + 4 + lVar3);
    iVar14 = iVar14 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  iVar14 = local_48.Index;
  if (local_48.Pointer != (longlong *)0x0) {
    plVar4 = *(longlong **)param_2;
    plVar5 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = *plVar4;
    *(int *)((longlong)local_48.Pointer + 8) = (int)plVar4[1];
    *(undefined1 *)((longlong)local_48.Pointer + 0x18) = 0;
    lVar3 = plVar5[1];
    *(char *)((longlong)local_48.Pointer + 0x18) = (char)lVar3;
    if ((char)lVar3 != '\0') {
      *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar5;
    }
    *(undefined1 *)((longlong)local_48.Pointer + 0x28) = 0;
    lVar3 = plVar5[3];
    *(char *)((longlong)local_48.Pointer + 0x28) = (char)lVar3;
    if ((char)lVar3 != '\0') {
      *(longlong *)((longlong)local_48.Pointer + 0x20) = plVar5[2];
    }
    *(undefined1 *)((longlong)local_48.Pointer + 0x34) = 0;
    cVar1 = *(char *)((longlong)plVar5 + 0x24);
    *(char *)((longlong)local_48.Pointer + 0x34) = cVar1;
    if (cVar1 != '\0') {
      *(int *)((longlong)local_48.Pointer + 0x30) = (int)plVar5[4];
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x38) = 0xffffffff;
  }
  puVar15 = &(this->Elements).field_0x8;
  uVar13 = *(uint *)((longlong)local_48.Pointer + 8);
  bVar16 = false;
  lVar3 = *(longlong *)local_48.Pointer;
  uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
  iVar7 = *(int *)puVar15;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  uVar13 = ((uint)lVar3 & 0xff) * 0x30f35d61 + 0x58a2c485 +
           ((((((uVar10 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)lVar3 >> 0x30) & 0xff)) * 0x21 +
              (uint)(byte)((ulonglong)lVar3 >> 0x38)) * 0x21 + (uVar13 & 0xff)) * 0x21 +
            (uVar13 >> 8 & 0xff)) * 0x21 + (uVar13 >> 0x10 & 0xff)) * 0x21 +
           (((uint)((ulonglong)lVar3 >> 8) & 0xff) * 0x21 +
           ((uint)((ulonglong)lVar3 >> 0x10) & 0xff)) * 0x40a9121 + (uVar10 & 0xff) * -0x13be2b1f +
           ((uint)((ulonglong)lVar3 >> 0x18) & 0xff) * 0x747c7101 + (uVar13 >> 0x18);
  if ((iVar7 - iVar2 != 1) && (iVar7 != iVar2)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar13) * 4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)&this->Elements;
      do {
        lVar8 = (longlong)iVar7 * 0x40;
        if ((*(longlong *)(lVar8 + lVar6) == *(longlong *)local_48.Pointer) &&
           (*(int *)(lVar8 + 8 + lVar6) == (int)*(longlong *)((longlong)local_48.Pointer + 8))) {
          bVar16 = iVar7 != -1;
          if (bVar16) {
            local_48._0_8_ = lVar3;
            memmove((void *)((longlong)iVar7 * 0x40 + lVar6),local_48.Pointer,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,iVar14,1);
            iVar14 = iVar7;
            lVar3 = local_48._0_8_;
          }
          break;
        }
        iVar7 = *(int *)(lVar8 + 0x38 + lVar6);
      } while (iVar7 != -1);
    }
  }
  local_48._0_8_ = lVar3;
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar16;
  }
  if (bVar16 == false) {
    uVar10 = *(int *)puVar15 - *(int *)&(this->Elements).field_0x34;
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
      uVar13 = this->HashSize - 1U & uVar13;
      *(uint *)((longlong)local_48.Pointer + 0x3c) = uVar13;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar13;
      *(undefined4 *)((longlong)local_48.Pointer + 0x38) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = iVar14;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar14;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>_> @ 148caf840

FSetElementId __thiscall
TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>_>
          (TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1,bool *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if (iVar2 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->Elements;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar7);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_> *)
      0x0) {
    TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>::
    operator<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
              ((TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>
                *)param_2,local_28.Pointer);
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(uint *)((longlong)local_28.Pointer + 8);
  uVar1 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  iVar7 = ((((((SUB84(uVar1,4) >> 8 & 0xff) * 0x21 + (SUB82(uVar1,6) & 0xff)) * 0x21 +
             (uint)SUB81(uVar1,7)) * 0x21 + (uVar4 & 0xff)) * 0x21 + (uVar4 >> 8 & 0xff)) * 0x21 +
          (uVar4 >> 0x10 & 0xff)) * 0x21 +
          ((SUB84(uVar1,1) & 0xff) * 0x21 + (SUB84(uVar1,2) & 0xff)) * 0x40a9121 +
          (SUB84(uVar1,4) & 0xff) * -0x13be2b1f + (SUB84(uVar1,3) & 0xff) * 0x747c7101 +
          ((uint)uVar1 & 0xff) * 0x30f35d61 + (uVar4 >> 0x18);
  local_28._0_8_ = uVar1;
  bVar6 = TryReplaceExisting(this,iVar7 + 0x58a2c485,local_28.Pointer,local_res8,in_R9);
  iVar2 = local_res8[0];
  if (bVar6) {
    *(int *)&param_1->Key = local_res8[0];
  }
  else {
    RehashOrLink(this,iVar7 + 0x58a2c485,local_28.Pointer,local_res8[0]);
    *(int *)&param_1->Key = iVar2;
  }
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FStorageServerFileSystemTOC::FDirectory_*_const_&>_> @ 148cafa20

FSetElementId __thiscall
TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FStorageServerFileSystemTOC::FDirectory_*_const_&>_>
          (TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FStorageServerFileSystemTOC::FDirectory_*_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FString *_Src;
  char *in_R9;
  undefined8 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar6 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar12 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar12;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,_Src);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      puVar12 = (undefined8 *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      pvVar3 = (void *)*puVar12;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(puVar12,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      _Src[1].Data.ArrayMax = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FPackageId_&&>_> @ 148cafc30

FSetElementId __thiscall
TSet<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FPackageId_&&>_>
          (TSet<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FPackageId_&&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_> *pTVar10;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_> *)0x0)
  {
    pTVar10 = (TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>
               *)0x0;
  }
  else {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
    pTVar10 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,pTVar10,local_res8,in_stack_00000028);
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
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&pTVar10->field_0x2c = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&pTVar10->field_0x28 = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FIoChunkId_const_&>_> @ 148cafdd0

FSetElementId __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FIoChunkId_const_&>_>
          (TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FIoChunkId_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  void *_Dst;
  int iVar9;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x68 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x68 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer !=
      (TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>
       *)0x0) {
    TKeyInitializer<FIoChunkId_const_&>::
    operator<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>
              ((TKeyInitializer<FIoChunkId_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x60) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    ((ulonglong)(this->HashSize - 1) & (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar4 = (longlong)iVar8 * 0x68;
        if ((*(longlong *)(lVar4 + lVar2) == *(longlong *)local_38.Pointer) &&
           (*(int *)(lVar4 + 8 + lVar2) == *(int *)((longlong)local_38.Pointer + 8))) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar8 * 0x68 + lVar2);
            *(undefined4 *)((longlong)_Dst + 0x58) = 0;
            if (*(void **)((longlong)_Dst + 0x50) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x50));
            }
            TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 0x10));
            memmove(_Dst,local_38.Pointer,0x60);
            TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar4 + 0x60 + lVar2);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>
                  *)((longlong)local_38.Pointer + 0x60))->field_0x4 = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x60) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>_> @ 148cb0030

FSetElementId __thiscall
TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>_>
          (TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>
          *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_3 + 8);
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(longlong *)((longlong)local_38.Pointer + 8) = *plVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar9 = *(int *)puVar10;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar9 * 0x18) == *(longlong *)local_38.Pointer) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar9 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
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
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<FIoHash> @ 148cb02e0

int __thiscall
TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>::
FindIndexByHash<FIoHash>
          (TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FIoHash *param_2)

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
        lVar2 = (longlong)iVar3 * 0x20;
        if (((*(longlong *)(lVar2 + lVar1) == *(longlong *)param_2->Hash) &&
            (*(longlong *)(lVar2 + 8 + lVar1) == *(longlong *)(param_2->Hash + 8))) &&
           (*(int *)(lVar2 + 0x10 + lVar1) == *(int *)(param_2->Hash + 0x10))) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x18 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FIoChunkId> @ 148cb0350

int __thiscall
TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
::FindIndexByHash<FIoChunkId>
          (TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
           *this,uint param_1,FIoChunkId *param_2)

{
  longlong *plVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x10);
        if ((*plVar1 == *(longlong *)param_2->Id) && ((int)plVar1[1] == *(int *)(param_2->Id + 8)))
        {
          return iVar2;
        }
        iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 148cb03e0

int __thiscall
TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<FIoChunkId> @ 148cb1340

int __thiscall
TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
::RemoveImpl<FIoChunkId>
          (TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
           *this,uint param_1,FIoChunkId *param_2)

{
  uint uVar1;
  longlong *plVar2;
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
  while( true ) {
    lVar7 = (longlong)(int)uVar9 * 0x10;
    plVar2 = *(longlong **)(lVar7 + *(longlong *)&this->Elements);
    if ((*plVar2 == *(longlong *)param_2->Id) && ((int)plVar2[1] == *(int *)(param_2->Id + 8)))
    break;
    uVar9 = *(uint *)(lVar7 + 8 + *(longlong *)&this->Elements);
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
         (uVar9 & 0x1f) & 1) != 0) goto LAB_148cb1449;
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
LAB_148cb1449:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0xc) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 8);
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FIoChunkId> @ 148cb14f0

int __thiscall
TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
::RemoveImpl<FIoChunkId>
          (TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,FIoChunkId *param_2)

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
  while ((lVar9 = (longlong)(int)uVar7 * 0x40,
         *(longlong *)(lVar9 + lVar2) != *(longlong *)param_2->Id ||
         (*(int *)(lVar9 + 8 + lVar2) != *(int *)(param_2->Id + 8)))) {
    uVar7 = *(uint *)(lVar9 + 0x38 + lVar2);
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
         (uVar7 & 0x1f) & 1) != 0) goto LAB_148cb15db;
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
LAB_148cb15db:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x38);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FIoChunkId> @ 148cb1680

int __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
::RemoveImpl<FIoChunkId>
          (TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FIoChunkId *param_2)

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
  while ((lVar9 = (longlong)(int)uVar7 * 0x68,
         *(longlong *)(lVar9 + lVar2) != *(longlong *)param_2->Id ||
         (*(int *)(lVar9 + 8 + lVar2) != *(int *)(param_2->Id + 8)))) {
    uVar7 = *(uint *)(lVar9 + 0x60 + lVar2);
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
         (uVar7 & 0x1f) & 1) != 0) goto LAB_148cb176b;
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
LAB_148cb176b:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 100) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x60);
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x60 + (longlong)(int)uVar1 * 0x68);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FIoChunkId> @ 148cb1820

int __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
::RemoveImpl<FIoChunkId>
          (TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FIoChunkId *param_2)

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
  while ((lVar9 = (longlong)(int)uVar7 * 0x68,
         *(longlong *)(lVar9 + lVar2) != *(longlong *)param_2->Id ||
         (*(int *)(lVar9 + 8 + lVar2) != *(int *)(param_2->Id + 8)))) {
    uVar7 = *(uint *)(lVar9 + 0x60 + lVar2);
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
         (uVar7 & 0x1f) & 1) != 0) goto LAB_148cb190b;
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
LAB_148cb190b:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 100) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x60);
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x60 + (longlong)(int)uVar1 * 0x68);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator> @ 148cb2c30

TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
::
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
          (TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// Find @ 148cc3f40

FCacheEntry ** __thiscall
TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
::Find(TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
       *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1->Id + 8);
  uVar1 = *(undefined8 *)param_1->Id;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  iVar4 = FindIndexByHash<FIoChunkId>
                    (this,(uVar2 >> 0x18) + 0x58a2c485 +
                          ((((((uVar3 >> 8 & 0xff) * 0x21 +
                              ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) * 0x21 +
                             (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar2 & 0xff)) * 0x21
                           + (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) * 0x21 +
                          (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
                          ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 +
                          (uVar3 & 0xff) * -0x13be2b1f +
                          ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
                          ((uint)uVar1 & 0xff) * 0x30f35d61,param_1);
  if (iVar4 != -1) {
    return (FCacheEntry **)((longlong)iVar4 * 0x10 + *(longlong *)&this->Elements);
  }
  return (FCacheEntry **)0x0;
}

// Rehash @ 148cd7fc0

void __thiscall
TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
::Rehash(TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar10 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd809c;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_148cd809c:
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
        puVar9 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x10);
        uVar2 = *(undefined8 *)*puVar9;
        uVar10 = *(uint *)((undefined8 *)*puVar9 + 1);
        uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar10 = ((((((uVar5 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar10 & 0xff)) * 0x21
                  + (uVar10 >> 8 & 0xff)) * 0x21 + (uVar10 >> 0x10 & 0xff)) * 0x21 +
                 (uVar5 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                 + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                 ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar10 >> 0x18) +
                 ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0xc) = uVar10;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd8220

void __thiscall
TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  TInterval<unsigned___int64> *pTVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd82f7;
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
LAB_148cd82f7:
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
        pTVar8 = (TInterval<unsigned___int64> *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = ::GetTypeHash(pTVar8);
        uVar4 = uVar4 & *piVar1 - 1U;
        *(uint *)((longlong)&pTVar8[1].Max + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pTVar8[1].Max = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd83b0

void __thiscall
TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  TInterval<unsigned___int64> *pTVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd8487;
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
LAB_148cd8487:
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
        pTVar8 = (TInterval<unsigned___int64> *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x50);
        uVar4 = ::GetTypeHash(pTVar8);
        uVar4 = uVar4 & *piVar1 - 1U;
        *(uint *)((longlong)&pTVar8[4].Max + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pTVar8[4].Max = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd8540

void __thiscall
TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>::Rehash
          (TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd861c;
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
LAB_148cd861c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd86d0

void __thiscall
TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar10 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd87ac;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_148cd87ac:
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
        puVar9 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x40);
        uVar10 = *(uint *)(puVar9 + 1);
        uVar2 = *puVar9;
        uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar10 = ((((((uVar5 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar10 & 0xff)) * 0x21
                  + (uVar10 >> 8 & 0xff)) * 0x21 + (uVar10 >> 0x10 & 0xff)) * 0x21 +
                 (uVar5 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                 + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                 ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar10 >> 0x18) +
                 ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x3c) = uVar10;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar9 + 7) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd8930

void __thiscall
TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
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
    iVar4 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar10 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar7 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd8a0c;
        uVar10 = puVar11[lVar7 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      uVar8 = (ulonglong)uStack_54 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_44 = (int)lVar7 + -1 + iStack_40;
      if (iVar4 < iStack_44) {
LAB_148cd8a0c:
        iStack_44 = iVar4;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar10 = *(uint *)(puVar2 + 1);
        uVar3 = *puVar2;
        uVar6 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar10 = ((((((uVar6 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar3 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar3 >> 0x38)) * 0x21 + (uVar10 & 0xff)) * 0x21
                  + (uVar10 >> 8 & 0xff)) * 0x21 + (uVar10 >> 0x10 & 0xff)) * 0x21 +
                 (uVar6 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar3 >> 8) & 0xff) * -0x7aa34abf
                 + ((uint)((ulonglong)uVar3 >> 0x10) & 0xff) * 0x40a9121 +
                 ((uint)((ulonglong)uVar3 >> 0x18) & 0xff) * 0x747c7101 + (uVar10 >> 0x18) +
                 ((uint)uVar3 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x24) = uVar10;
        FVar5 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd8b90

void __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar10 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd8c6c;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_148cd8c6c:
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
        puVar9 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x68);
        uVar10 = *(uint *)(puVar9 + 1);
        uVar2 = *puVar9;
        uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar10 = ((((((uVar5 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar10 & 0xff)) * 0x21
                  + (uVar10 >> 8 & 0xff)) * 0x21 + (uVar10 >> 0x10 & 0xff)) * 0x21 +
                 (uVar5 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                 + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                 ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar10 >> 0x18) +
                 ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 100) = uVar10;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd8df0

void __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar10 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd8ecc;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_148cd8ecc:
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
        puVar9 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x68);
        uVar10 = *(uint *)(puVar9 + 1);
        uVar2 = *puVar9;
        uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar10 = ((((((uVar5 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar10 & 0xff)) * 0x21
                  + (uVar10 >> 8 & 0xff)) * 0x21 + (uVar10 >> 0x10 & 0xff)) * 0x21 +
                 (uVar5 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                 + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                 ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar10 >> 0x18) +
                 ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 100) = uVar10;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd9050

void __thiscall
TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd912c;
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
LAB_148cd912c:
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

// Rehash @ 148cd91f0

void __thiscall
TSet<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd92cc;
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
LAB_148cd92cc:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0xb] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[10] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd9390

void __thiscall
TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
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
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148cd9467;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_148cd9467:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148cd9540

void __thiscall
TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator>::Rehash
          (TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
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
    iVar4 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar10 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar7 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148cd961c;
        uVar10 = puVar11[lVar7 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      uVar8 = (ulonglong)uStack_54 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_44 = (int)lVar7 + -1 + iStack_40;
      if (iVar4 < iStack_44) {
LAB_148cd961c:
        iStack_44 = iVar4;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14);
        uVar10 = *(uint *)(puVar2 + 1);
        uVar3 = *puVar2;
        uVar6 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar10 = ((((((uVar6 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar3 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar3 >> 0x38)) * 0x21 + (uVar10 & 0xff)) * 0x21
                  + (uVar10 >> 8 & 0xff)) * 0x21 + (uVar10 >> 0x10 & 0xff)) * 0x21 +
                 (uVar6 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar3 >> 8) & 0xff) * -0x7aa34abf
                 + ((uint)((ulonglong)uVar3 >> 0x10) & 0xff) * 0x40a9121 +
                 ((uint)((ulonglong)uVar3 >> 0x18) & 0xff) * 0x747c7101 + (uVar10 >> 0x18) +
                 ((uint)uVar3 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)(puVar2 + 2) = uVar10;
        FVar5 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 148cd97a0

void __thiscall
TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
              *param_2,int param_3)

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
  *(uint *)&param_2->field_0x24 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x20 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// TryReplaceExisting @ 148ce1a90

bool __thiscall
TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>
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
  longlong lVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar2 != 1) && (iVar13 != iVar2)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar9 = (longlong)iVar13;
        if ((*(longlong *)(lVar3 + lVar9 * 0x50) == *(longlong *)param_2) &&
           (*(longlong *)(lVar3 + 8 + lVar9 * 0x50) == *(longlong *)&param_2->field_0x8)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)((longlong)iVar13 * 0x50 + lVar3),param_2,0x48);
            iVar2 = *param_3;
            lVar3 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar14 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar9 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar9) & uVar14) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar3 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x50) = iVar2;
            }
            uVar8 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar2 * 0x50 + lVar3);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar8;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
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
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar9) = *(uint *)(puVar10 + lVar9) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar3 + 0x48 + lVar9 * 0x50);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 148ce1cd0

bool __thiscall
TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<TTuple<FIoHash,int>_> *param_2,int *param_3,
                  bool *param_4)

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
  longlong *plVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar13 * 0x20 + *(longlong *)&this->Elements);
        if (((*plVar11 == *(longlong *)param_2) && (plVar11[1] == *(longlong *)&param_2->field_0x8))
           && ((int)plVar11[2] == *(int *)&param_2->field_0x10)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)((longlong)iVar13 * 0x20 + *(longlong *)&this->Elements),param_2,0x18);
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
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
            if (((*(uint *)(puVar10 + lVar2) & uVar14) == 0) &&
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
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = (int)plVar11[3];
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 148ce1f10

bool __thiscall
TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar3 != 1) && (iVar14 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar11 = (longlong)iVar14;
        if ((*(longlong *)(lVar4 + lVar11 * 0x28) == *(longlong *)param_2) &&
           (*(int *)(lVar4 + 8 + lVar11 * 0x28) == *(int *)&param_2->field_0x8)) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            pvVar5 = *(void **)(lVar4 + 0x10 + (longlong)iVar14 * 0x28);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove((void *)(lVar4 + (longlong)iVar14 * 0x28),param_2,0x20);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar11 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar11) & uVar15) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x28) = iVar3;
            }
            puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x28);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar11) = *(uint *)(puVar12 + lVar11) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar4 + 0x20 + lVar11 * 0x28);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// TryReplaceExisting @ 148ce2150

bool __thiscall
TSet<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>
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
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar13 * 0x30) == *(longlong *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x30 + lVar4);
            if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x18));
            }
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,param_2,0x28);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
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
            if (((*(uint *)(puVar10 + lVar2) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0x30 + lVar4);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar9;
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
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar4 + 0x28 + (longlong)iVar13 * 0x30);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 148ce23a0

bool __thiscall
TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator>::TryReplaceExisting
          (TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> *this,uint param_1,
          TSparseSetElement<FIoChunkId> *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar13;
        if ((*(longlong *)(lVar4 + lVar10 * 0x14) == *(longlong *)param_2) &&
           (*(int *)(lVar4 + 8 + lVar10 * 0x14) == *(int *)&param_2->field_0x8)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)(lVar4 + (longlong)iVar13 * 0x14),param_2,0xc);
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar10) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x14) = iVar3;
            }
            puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x14);
            uVar9 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar9;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
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
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar10) = *(uint *)(puVar11 + lVar10) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar4 + 0xc + lVar10 * 0x14);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 148ce25e0

void __thiscall
TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
::UnhashElements(TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148ce26db;
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
LAB_148ce26db:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148ce27d0;
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
LAB_148ce27d0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 148ce2870

void __thiscall
TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148ce296b;
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
LAB_148ce296b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148ce2a60;
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
LAB_148ce2a60:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 148ce2b00

void __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148ce2bfb;
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
LAB_148ce2bfb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148ce2cf0;
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
LAB_148ce2cf0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x68 + 100 + *(longlong *)&this->Elements) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 148ce2d90

void __thiscall
TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148ce2e8b;
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
LAB_148ce2e8b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148ce2f80;
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
LAB_148ce2f80:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x68 + 100 + *(longlong *)&this->Elements) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 148ce3020

void __thiscall
TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148ce311b;
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
LAB_148ce311b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148ce3210;
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
LAB_148ce3210:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

