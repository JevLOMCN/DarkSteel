// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// Serialize<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator> @ 14733cf80

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14733d07e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14733d07e:
  uVar11 = (ulonglong)uVar13;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar13 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_50.Array;
      }
      uVar13 = *puVar12;
      uVar9 = uVar7;
      while (uVar13 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar7 = (ulonglong)local_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14733d15b;
        uVar13 = puVar12[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14733d15b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        uVar8 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator> @ 14733d230

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14733d32e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14733d32e:
  uVar11 = (ulonglong)uVar13;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar13 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_50.Array;
      }
      uVar13 = *puVar12;
      uVar9 = uVar7;
      while (uVar13 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar7 = (ulonglong)local_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14733d40b;
        uVar13 = puVar12[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14733d40b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        uVar8 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator> @ 1475a15c0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned_short,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a16be;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a16be:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar6 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1475a179b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a179b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14;
        uVar7 = *piVar1 - 1U &
                (uint)*(ushort *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14);
        *(uint *)(lVar3 + 0x10) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (ulonglong)uVar7;
        *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator> @ 1475a1860

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a195e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1475a195e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1475a1a3b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1475a1a3b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[3] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[2] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> @ 1475a1b00

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a1bfe;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_1475a1bfe:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar7 = (ulonglong)local_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1475a1cdb;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_1475a1cdb:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x14);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x14;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x10) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator> @ 1475a1dc0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a1ebe;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_1475a1ebe:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar7 = (ulonglong)local_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1475a1f9b;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_1475a1f9b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x28);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x28;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x24) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator> @ 1475a2080

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a217e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a217e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1475a225b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a225b:
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
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 3) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator> @ 1475a2330

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a242e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a242e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1475a250b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a250b:
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
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x88 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x84) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator> @ 1475a25f0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a26ee;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a26ee:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1475a27cb;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a27cb:
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
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x80 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x7c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 0xf) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator> @ 14776a200

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  UObject *pUVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::
  TTransform<double>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
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
  uVar7 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14776a2fe;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14776a2fe:
  uVar11 = (ulonglong)uVar13;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar13 - 1U;
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
      uVar13 = *puVar12;
      uVar8 = uVar10;
      while (uVar13 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14776a3db;
        uVar13 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14776a3db:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar14 = (undefined8 *)((longlong)(int)uVar10 * 0x80 + *(longlong *)&param_2->Elements);
        pUVar3 = (UObject *)*puVar14;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar7 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)((longlong)puVar14 + 0x74) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar14 + 0xe) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator> @ 147a1d790

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147a1d88e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_147a1d88e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147a1d96b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_147a1d96b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[3] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[2] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator> @ 147ab9190

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FNetworkGUID,EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,EChannelCloseReason,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FNetworkGUID,enum_EChannelCloseReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ab928e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_147ab928e:
  uVar11 = (ulonglong)uVar13;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar13 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_50.Array;
      }
      uVar13 = *puVar12;
      uVar9 = uVar7;
      while (uVar13 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar7 = (ulonglong)local_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ab936b;
        uVar13 = puVar12[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_147ab936b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        uVar8 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> @ 147ab9440

FArchive * __cdecl
TSetPrivateFriend::Serialize<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ab953e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_147ab953e:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
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
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ab961b;
        uVar13 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_147ab961b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = (int)((ulonglong)*puVar11 >> 0x20) * 0x17 + (int)*puVar11 & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0xc) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator> @ 147b36cc0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147b36dbe;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_147b36dbe:
  uVar11 = (ulonglong)uVar13;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar13 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_50.Array;
      }
      uVar13 = *puVar12;
      uVar9 = uVar7;
      while (uVar13 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar7 = (ulonglong)local_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147b36e9b;
        uVar13 = puVar12[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_147b36e9b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        uVar8 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator> @ 147bb5990

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147bb5a8e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147bb5a8e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar6 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147bb5b6b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147bb5b6b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0xc;
        uVar7 = *piVar1 - 1U &
                (uint)*(ushort *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0xc);
        *(uint *)(lVar3 + 8) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (ulonglong)uVar7;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 147e4ef00

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147e4effe;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_147e4effe:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
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
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147e4f0db;
        uVar13 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_147e4f0db:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (ulonglong *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = ((uint)(*puVar11 >> 0x14) & 0xffff ^ (uint)(*puVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 147e4f1d0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint *puVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147e4f2ce;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_147e4f2ce:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
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
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147e4f3ab;
        uVar13 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_147e4f3ab:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (ulonglong *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = ((uint)(*puVar11 >> 0x14) & 0xffff ^ (uint)(*puVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator> @ 147e4f4a0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<UTexture2D_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147e4f59e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147e4f59e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar6 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147e4f67b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147e4f67b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18;
        uVar6 = *(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18);
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(lVar3 + 0x14) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator> @ 147ea16c0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea17be;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea17be:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar11 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ea189b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea189b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x20);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x18) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator> @ 147ea1970

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea1a6e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea1a6e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar11 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ea1b4b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea1b4b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x20);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x18) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator> @ 147ea1c20

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea1d1e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea1d1e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar11 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ea1dfb;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea1dfb:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0xd0);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0xc4) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0xc0) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator> @ 147ea1ee0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea1fde;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea1fde:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar11 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ea20bb;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea20bb:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x50);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x4c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x48) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator> @ 147ea2190

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea228e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea228e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar11 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ea236b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea236b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x50);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x4c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x48) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator> @ 147ea2440

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea253e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea253e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar11 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147ea261b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea261b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x1c);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x18) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x14) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator> @ 147f63690

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<UMaterialExpression_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147f6378e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147f6378e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar6 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_147f6386b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147f6386b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18;
        uVar6 = *(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18);
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(lVar3 + 0x14) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> @ 1481c5210

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *param_2
          )

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1481c530e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1481c530e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1481c53eb;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1481c53eb:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[3] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[2] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> @ 1481c54b0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1481c55ae;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1481c55ae:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar13 = *puVar11;
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1481c568b;
        uVar13 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1481c568b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        lVar3 = *(longlong *)&param_2->Elements;
        lVar12 = (longlong)(int)uVar9 * 0x10;
        uVar6 = *piVar1 - 1U & *(uint *)(lVar12 + lVar3);
        *(uint *)(lVar12 + 0xc + lVar3) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar12 + 8 + lVar3) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// SerializeStructured<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> @ 1481c5750

void __cdecl
TSetPrivateFriend::
SerializeStructured<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
          (FStructuredArchiveSlot param_1,
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *param_2
          )

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  FArchive *pFVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  FSlotBase local_res8;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  operator<<<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar4->field_0x28 & 1) == 0) {
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    if ((pFVar4->field_0x2b & 2) == 0) {
      return;
    }
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    if ((pFVar4->field_0x28 & 4) != 0) {
      return;
    }
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return;
  }
  if ((int)uVar11 < 1) {
    return;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1481c5861;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1481c5861:
  uVar12 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar11 = *puVar13;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1481c593b;
        uVar11 = puVar13[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1481c593b:
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
        puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&param_2->Elements);
        uVar7 = *piVar1 - 1U & *puVar13;
        puVar13[3] = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar13[2] = *(uint *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return;
}

// SerializeStructured<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> @ 1481c5a00

void __cdecl
TSetPrivateFriend::
SerializeStructured<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          (FStructuredArchiveSlot param_1,
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  FArchive *pFVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  FSlotBase local_res8;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  operator<<<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar4->field_0x28 & 1) == 0) {
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    if ((pFVar4->field_0x2b & 2) == 0) {
      return;
    }
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    if ((pFVar4->field_0x28 & 4) != 0) {
      return;
    }
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return;
  }
  if ((int)uVar11 < 1) {
    return;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1481c5b11;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1481c5b11:
  uVar12 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar11 = *puVar13;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1481c5beb;
        uVar11 = puVar13[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1481c5beb:
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
        lVar3 = *(longlong *)&param_2->Elements;
        lVar14 = (longlong)(int)uVar10 * 0x10;
        uVar7 = *piVar1 - 1U & *(uint *)(lVar14 + lVar3);
        *(uint *)(lVar14 + 0xc + lVar3) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar14 + 8 + lVar3) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return;
}

// Serialize<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator> @ 14868ec60

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<USoundClass_*,FSoundClassEditorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14868ed5e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14868ed5e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar6 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14868ee3b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14868ee3b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18;
        uVar6 = *(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18);
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(lVar3 + 0x14) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

