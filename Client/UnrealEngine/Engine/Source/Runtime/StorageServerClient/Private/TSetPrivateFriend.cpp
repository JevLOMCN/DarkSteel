// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// Serialize<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator> @ 148cb1a00

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  TInterval<unsigned___int64> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::
  FCacheEntry>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_148cb1afe;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_148cb1afe:
  uVar11 = (ulonglong)uVar13;
  uVar7 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_50.Array;
      }
      uVar13 = *puVar12;
      uVar7 = uVar10;
      while (uVar13 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_148cb1bdb;
        uVar13 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_148cb1bdb:
        uVar10 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar6) {
      do {
        pTVar8 = (TInterval<unsigned___int64> *)
                 (*(longlong *)&param_2->Elements + (longlong)(int)uVar10 * 0x50);
        uVar6 = ::GetTypeHash(pTVar8);
        uVar6 = uVar6 & *piVar1 - 1U;
        *(uint *)((longlong)&pTVar8[4].Max + 4) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)&pTVar8[4].Max = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator> @ 148cb1cb0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FIoChunkId,StorageServer::
  FCacheChunkInfo>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_148cb1db6;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_148cb1db6:
  uVar11 = (ulonglong)uVar14;
  uVar8 = uVar10;
  do {
    FVar3 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar3;
    }
    uVar5 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_50.Array;
      }
      uVar14 = *puVar12;
      uVar8 = uVar10;
      while (uVar14 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_148cb1e8b;
        uVar14 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_148cb1e8b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar13 = (undefined8 *)((longlong)(int)uVar10 * 0x40 + *(longlong *)&param_2->Elements);
        uVar7 = *(uint *)(puVar13 + 1);
        uVar2 = *puVar13;
        uVar14 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar7 = ((((((uVar14 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                    0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar7 & 0xff)) * 0x21 +
                 (uVar7 >> 8 & 0xff)) * 0x21 + (uVar7 >> 0x10 & 0xff)) * 0x21 +
                (uVar14 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar7 >> 0x18) +
                ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar13 + 0x3c) = uVar7;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar13 + 7) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator> @ 148cb2020

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::
  FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer
  ::
  FCacheEntry_0>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_148cb2126;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_148cb2126:
  uVar11 = (ulonglong)uVar14;
  uVar8 = uVar10;
  do {
    FVar3 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar3;
    }
    uVar5 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_50.Array;
      }
      uVar14 = *puVar12;
      uVar8 = uVar10;
      while (uVar14 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_148cb21fb;
        uVar14 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_148cb21fb:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar13 = (undefined8 *)((longlong)(int)uVar10 * 0x68 + *(longlong *)&param_2->Elements);
        uVar7 = *(uint *)(puVar13 + 1);
        uVar2 = *puVar13;
        uVar14 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar7 = ((((((uVar14 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                    0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar7 & 0xff)) * 0x21 +
                 (uVar7 >> 8 & 0xff)) * 0x21 + (uVar7 >> 0x10 & 0xff)) * 0x21 +
                (uVar14 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar7 >> 0x18) +
                ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar13 + 100) = uVar7;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

