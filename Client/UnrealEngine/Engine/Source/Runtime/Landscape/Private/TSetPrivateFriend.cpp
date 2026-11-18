// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 5

// Serialize<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator> @ 145f00940

FArchive * __cdecl
TSetPrivateFriend::
Serialize<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
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
  
  operator<<<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145f00a3e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_145f00a3e:
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
        goto LAB_145f00b1b;
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
LAB_145f00b1b:
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
        puVar11 = (ulonglong *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = ((uint)(*puVar11 >> 0x14) & 0xffff ^ (uint)(*puVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
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

// Serialize<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator> @ 145f00c10

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<UE::Math::
  TIntPoint<int>_float>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  uVar15 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar15 < 1) {
    return param_1;
  }
  *piVar1 = uVar15;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar15;
  if (uVar15 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145f00d0e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_145f00d0e:
  uVar13 = (ulonglong)uVar15;
  uVar9 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar7 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar15 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar15 = *puVar14;
      uVar9 = uVar11;
      while (uVar15 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar11 = (ulonglong)local_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_145f00deb;
        uVar15 = puVar14[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar15 & uVar15;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_145f00deb:
        uVar11 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar8) {
      do {
        lVar4 = *(longlong *)&param_2->Elements;
        lVar6 = (longlong)(int)uVar11;
        uVar3 = *(undefined8 *)(lVar4 + lVar6 * 0x14);
        uVar12 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar15 = (int)uVar3 - uVar12 ^ uVar12 >> 0xd;
        uVar8 = (-0x61c88647 - uVar15) - uVar12 ^ uVar15 << 8;
        uVar12 = (uVar12 - uVar8) - uVar15 ^ uVar8 >> 0xd;
        uVar15 = (uVar15 - uVar12) - uVar8 ^ uVar12 >> 0xc;
        uVar8 = (uVar8 - uVar15) - uVar12 ^ uVar15 << 0x10;
        uVar12 = (uVar12 - uVar8) - uVar15 ^ uVar8 >> 5;
        uVar15 = (uVar15 - uVar12) - uVar8 ^ uVar12 >> 3;
        uVar8 = (uVar8 - uVar15) - uVar12 ^ uVar15 << 10;
        uVar8 = ((uVar12 - uVar8) - uVar15 ^ uVar8 >> 0xf) & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x10 + lVar6 * 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0xc + lVar6 * 0x14) = *(undefined4 *)((longlong)FVar7 + uVar9 * 4);
        *(int *)((longlong)FVar7 + uVar9 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator> @ 145f00f30

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  operator<<<TSparseSetElement<TTuple<UE::Math::
  TIntPoint<int>_ULandscapeComponent__>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145f0102e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_145f0102e:
  uVar12 = (ulonglong)uVar14;
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
      uVar8 = uVar10;
      while (uVar14 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_145f0110b;
        uVar14 = puVar13[(longlong)iVar9 + 1];
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
LAB_145f0110b:
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
        puVar2 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar10 * 0x18);
        uVar11 = (uint)((ulonglong)*puVar2 >> 0x20);
        uVar14 = (int)*puVar2 - uVar11 ^ uVar11 >> 0xd;
        uVar7 = (-0x61c88647 - uVar14) - uVar11 ^ uVar14 << 8;
        uVar11 = (uVar11 - uVar7) - uVar14 ^ uVar7 >> 0xd;
        uVar14 = (uVar14 - uVar11) - uVar7 ^ uVar11 >> 0xc;
        uVar7 = (uVar7 - uVar14) - uVar11 ^ uVar14 << 0x10;
        uVar11 = (uVar11 - uVar7) - uVar14 ^ uVar7 >> 5;
        uVar14 = (uVar14 - uVar11) - uVar7 ^ uVar11 >> 3;
        uVar7 = (uVar7 - uVar14) - uVar11 ^ uVar14 << 10;
        uVar7 = ((uVar11 - uVar7) - uVar14 ^ uVar7 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x14) = uVar7;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return param_1;
}

// Serialize<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator> @ 145f3f9b0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  UObject *pUVar3;
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
  
  operator<<<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145f3faae;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_145f3faae:
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
        goto LAB_145f3fb8b;
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
LAB_145f3fb8b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        pUVar3 = *(UObject **)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar8 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
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

// Serialize<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator> @ 145f761a0

FArchive * __cdecl
TSetPrivateFriend::
Serialize<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
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
  
  operator<<<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145f7629e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_145f7629e:
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
        goto LAB_145f7637b;
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
LAB_145f7637b:
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

