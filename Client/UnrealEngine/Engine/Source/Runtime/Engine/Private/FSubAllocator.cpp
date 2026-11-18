// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Alloc @ 147ac61c0

uint __thiscall
FLandscapeTextureAtlas::FSubAllocator::Alloc(FSubAllocator *this,uint param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  uint local_88;
  FSparseArrayAllocationInfo local_78;
  uint local_68;
  uint uStack_64;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar7 = param_2;
  if (param_2 < param_1) {
    uVar7 = param_1;
  }
  uVar7 = ((uVar7 - 1) + this->TileSize) / this->TileSize;
  if ((this->DimInTiles < uVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTiles1D <= DimInTiles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                         ,0x5da,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar11 = (this->LevelOffsets).ArrayNum;
  uVar20 = 1;
  if (uVar7 != 0) {
    uVar20 = uVar7;
  }
  uVar18 = (ulonglong)(uVar20 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar20 = uVar11 - (int)lVar3;
  uVar7 = uVar20 - 1;
  uVar14 = 0;
  if ((int)uVar7 < (int)uVar11) {
    uVar14 = ~uVar7 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  FVar12 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&this->LevelOffsets;
  }
  uVar14 = *(uint *)((longlong)FVar12 + (longlong)(int)uVar7 * 4);
  bVar10 = (byte)uVar7;
  uVar17 = ((1 << (bVar10 & 0x1f)) << (bVar10 & 0x1f)) + uVar14;
  local_88 = uVar14;
  if (uVar14 < uVar17) {
    bVar5 = (byte)uVar14 & 0x1f;
    uVar15 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    do {
      if ((((int)local_88 < 0) || ((this->MarkerQuadTree).NumBits <= (int)local_88)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      FVar12 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
      if (FVar12 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar12;
      }
      uVar8 = local_88;
      if ((int)local_88 < 0) {
        uVar8 = local_88 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar13 + (longlong)((int)uVar8 >> 5) * 4) & uVar15) == 0)
      goto LAB_147ac6351;
      local_88 = local_88 + 1;
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
    } while (local_88 < uVar17);
  }
  if (local_88 == uVar17) {
    local_78.Index = 0xffffffff;
  }
  else {
LAB_147ac6351:
    uVar14 = local_88 - uVar14;
    uVar17 = uVar14;
    for (uVar15 = uVar7; uVar15 != 0xffffffff; uVar15 = uVar15 - 1) {
      uVar8 = 0;
      if ((int)uVar15 < (this->LevelOffsets).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      FVar12 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)&this->LevelOffsets;
      if (FVar12 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar12;
      }
      iVar16 = *(int *)((longlong)FVar13 + (longlong)(int)uVar15 * 4) + uVar17;
      if (((iVar16 < 0) || ((this->MarkerQuadTree).NumBits <= iVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      FVar12 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
      if (FVar12 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar12;
      }
      iVar9 = iVar16;
      if (iVar16 < 0) {
        iVar9 = iVar16 + 0x1f;
      }
      uVar19 = 1 << ((byte)iVar16 & 0x1f);
      uVar8 = *(uint *)((longlong)FVar13 + (longlong)(iVar9 >> 5) * 4);
      if ((uVar19 & uVar8) != 0) break;
      uVar17 = uVar17 >> 2;
      *(uint *)((longlong)FVar13 + (longlong)(iVar9 >> 5) * 4) = uVar8 | uVar19;
    }
    iVar16 = uVar14 * 4;
    uVar17 = 4;
    for (; uVar20 < uVar11; uVar20 = uVar20 + 1) {
      uVar15 = 0;
      if ((int)uVar20 < (this->LevelOffsets).ArrayNum) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      FVar12 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)&this->LevelOffsets;
      if (FVar12 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar12;
      }
      if (uVar17 != 0) {
        uVar18 = (ulonglong)uVar17;
        uVar15 = *(int *)((longlong)FVar13 + (longlong)(int)uVar20 * 4) + iVar16;
        do {
          if ((((int)uVar15 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar15)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return uVar7;
          }
          FVar12 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
          if (FVar12 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = FVar12;
          }
          uVar8 = uVar15;
          if ((int)uVar15 < 0) {
            uVar8 = uVar15 + 0x1f;
          }
          if (((*(uint *)((longlong)FVar13 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar15 & 0x1f) & 1
               ) != 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!MarkerQuadTree[ChildQuadIdx + Idx]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                 ,0x605,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return uVar7;
          }
          if ((((int)uVar15 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar15)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return uVar7;
          }
          FVar12 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
          if (FVar12 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = FVar12;
          }
          uVar8 = uVar15;
          if ((int)uVar15 < 0) {
            uVar8 = uVar15 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar13 + (longlong)((int)uVar8 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
          uVar18 = uVar18 - 1;
          uVar15 = uVar15 + 1;
        } while (uVar18 != 0);
      }
      iVar16 = iVar16 << 2;
      uVar17 = uVar17 << 2;
    }
    fStack_4c = this->TexelSize;
    uVar20 = uVar14 >> 1 & 0x55555555;
    uVar11 = ((uVar14 & 0x55555555) >> 1 ^ uVar14 & 0x55555555) & 0x33333333;
    uVar11 = (uVar11 >> 2 ^ uVar11) & 0xf0f0f0f;
    uVar14 = (uVar11 >> 4 ^ uVar11) & 0xff00ff;
    uVar11 = (uVar20 >> 1 ^ uVar20) & 0x33333333;
    uVar11 = (uVar11 >> 2 ^ uVar11) & 0xf0f0f0f;
    uVar20 = (uVar11 >> 4 ^ uVar11) & 0xff00ff;
    uVar11 = this->DimInTiles >> (bVar10 & 0x1f);
    local_58 = (float)param_1 * fStack_4c;
    fStack_54 = (float)param_2 * fStack_4c;
    fVar21 = __real_3f800000 / (float)this->DimInTiles;
    fStack_4c = (float)this->BorderSize * fStack_4c;
    iVar16 = *(int *)&(this->SubAllocInfos).field_0x34;
    fStack_50 = (float)(((uVar14 >> 8 ^ uVar14) & 0xffff) * uVar11) * fVar21 + fStack_4c;
    fStack_4c = (float)(((uVar20 >> 8 ^ uVar20) & 0xffff) * uVar11) * fVar21 + fStack_4c;
    local_68 = uVar7;
    uStack_64 = local_88;
    if (iVar16 == 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,0x10,1,(ForAnyElementType *)&this->SubAllocInfos,
                         (int *)&(this->SubAllocInfos).field_0x8,
                         (int *)&(this->SubAllocInfos).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SubAllocInfos).field_0x10,false);
    }
    else {
      iVar9 = *(int *)&(this->SubAllocInfos).field_0x30;
      lVar3 = *(longlong *)&this->SubAllocInfos;
      iVar2 = *(int *)((longlong)iVar9 * 0x20 + 4 + lVar3);
      iVar16 = iVar16 + -1;
      *(int *)&(this->SubAllocInfos).field_0x30 = iVar2;
      *(int *)&(this->SubAllocInfos).field_0x34 = iVar16;
      if (iVar16 != 0) {
        *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,16,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<32,16,FDefaultSparseArrayAllocator> *)&this->SubAllocInfos,
               &local_78,iVar9);
    if (local_78.Pointer != (undefined8 *)0x0) {
      *(ulonglong *)local_78.Pointer = CONCAT44(uStack_64,local_68);
      *(undefined8 *)((longlong)local_78.Pointer + 8) = uStack_60;
      *(ulonglong *)((longlong)local_78.Pointer + 0x10) = CONCAT44(fStack_54,local_58);
      *(ulonglong *)((longlong)local_78.Pointer + 0x18) = CONCAT44(fStack_4c,fStack_50);
    }
  }
  return local_78.Index;
}

// Free @ 147ae0150

void __thiscall FLandscapeTextureAtlas::FSubAllocator::Free(FSubAllocator *this,uint param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  byte bVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *puVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar21;
  undefined8 *puVar22;
  int iVar23;
  uint local_68;
  int iStack_64;
  
  if (((int)param_1 < 0) || (*(int *)&(this->SubAllocInfos).field_0x28 <= (int)param_1)) {
    uVar9 = (int)(((int)param_1 >> 0x1f & 0x1fU) + param_1) >> 5;
  }
  else {
    if ((*(int *)&(this->SubAllocInfos).field_0x28 <= (int)param_1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar16 = *(undefined1 **)&(this->SubAllocInfos).field_0x20;
    uVar9 = param_1 >> 5;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->SubAllocInfos).field_0x10;
    }
    if ((*(uint *)(puVar16 + (ulonglong)uVar9 * 4) >> (param_1 & 0x1f) & 1) != 0)
    goto LAB_147ae0202;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubAllocInfos.IsValidIndex(Handle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                     ,0x622,L"");
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_147ae0202:
  puVar16 = &(this->SubAllocInfos).field_0x10;
  lVar3 = *(longlong *)&this->SubAllocInfos;
  puVar22 = (undefined8 *)((longlong)(int)param_1 * 0x20 + lVar3);
  bVar6 = (byte)param_1 & 0x1f;
  uVar18 = 1 << bVar6 | 1U >> 0x20 - bVar6;
  uVar7 = *puVar22;
  if ((((int)param_1 < 0) || (*(int *)&(this->SubAllocInfos).field_0x28 <= (int)param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar4 = *(undefined1 **)&(this->SubAllocInfos).field_0x20;
  puVar12 = puVar16;
  if (puVar4 != (undefined1 *)0x0) {
    puVar12 = puVar4;
  }
  if (((*(uint *)(puVar12 + (longlong)(int)uVar9 * 4) & uVar18) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)&(this->SubAllocInfos).field_0x34 != 0) {
    *(uint *)((longlong)*(int *)&(this->SubAllocInfos).field_0x30 * 0x20 + lVar3) = param_1;
  }
  uVar10 = 0xffffffff;
  *(undefined4 *)puVar22 = 0xffffffff;
  if (0 < *(int *)&(this->SubAllocInfos).field_0x34) {
    uVar10 = *(undefined4 *)&(this->SubAllocInfos).field_0x30;
  }
  *(undefined4 *)((longlong)puVar22 + 4) = uVar10;
  puVar4 = &(this->SubAllocInfos).field_0x34;
  *(int *)puVar4 = *(int *)puVar4 + 1;
  *(uint *)&(this->SubAllocInfos).field_0x30 = param_1;
  if ((((int)param_1 < 0) || (*(int *)&(this->SubAllocInfos).field_0x28 <= (int)param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar4 = *(undefined1 **)&(this->SubAllocInfos).field_0x20;
  piVar1 = &(this->LevelOffsets).ArrayNum;
  local_68 = (uint)uVar7;
  iStack_64 = (int)((ulonglong)uVar7 >> 0x20);
  if (puVar4 != (undefined1 *)0x0) {
    puVar16 = puVar4;
  }
  *(uint *)(puVar16 + (longlong)(int)uVar9 * 4) =
       *(uint *)(puVar16 + (longlong)(int)uVar9 * 4) & ~uVar18;
  uVar20 = (ulonglong)(int)local_68;
  uVar9 = 0;
  if ((int)local_68 < *piVar1) {
    uVar9 = ~local_68 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar13 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
  uVar18 = 1;
  uVar9 = *piVar1;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)&this->LevelOffsets;
  }
  iVar23 = iStack_64 - *(int *)((longlong)FVar13 + uVar20 * 4);
  uVar19 = local_68;
  while (uVar19 < uVar9) {
    uVar19 = (uint)uVar20;
    uVar17 = 0;
    if ((int)uVar19 < (this->LevelOffsets).ArrayNum) {
      uVar17 = ~uVar19 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->LevelOffsets;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    if (uVar18 != 0) {
      uVar20 = (ulonglong)uVar18;
      uVar17 = *(int *)((longlong)FVar14 + (longlong)(int)uVar19 * 4) + iVar23;
      do {
        if ((((int)uVar17 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar17)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar13 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar13;
        }
        uVar15 = uVar17;
        if ((int)uVar17 < 0) {
          uVar15 = uVar17 + 0x1f;
        }
        if (((*(uint *)((longlong)FVar14 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar17 & 0x1f) & 1)
             == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("MarkerQuadTree[ChildIdx + Idx]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                               ,0x633,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((((int)uVar17 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar17)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar13 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar13;
        }
        uVar15 = uVar17;
        if ((int)uVar17 < 0) {
          uVar15 = uVar17 + 0x1f;
        }
        puVar2 = (uint *)((longlong)FVar14 + (longlong)((int)uVar15 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << ((byte)uVar17 & 0x1f));
        uVar20 = uVar20 - 1;
        uVar17 = uVar17 + 1;
      } while (uVar20 != 0);
    }
    iVar23 = iVar23 << 2;
    uVar19 = uVar19 + 1;
    uVar20 = (ulonglong)uVar19;
    uVar18 = uVar18 << 2;
  }
  pTVar21 = &this->LevelOffsets;
  uVar9 = 0;
  if ((int)local_68 < (this->LevelOffsets).ArrayNum) {
    uVar9 = ~local_68 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar13 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)pTVar21;
  }
  uVar9 = iStack_64 - *(int *)((longlong)FVar13 + (longlong)(int)local_68 * 4);
  uVar18 = local_68;
  while( true ) {
    uVar18 = uVar18 - 1;
    if (uVar18 == 0xffffffff) {
      return;
    }
    uVar19 = 0;
    if ((int)local_68 < (this->LevelOffsets).ArrayNum) {
      uVar19 = ~local_68 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)pTVar21;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    uVar19 = *(int *)((longlong)FVar14 + (longlong)(int)local_68 * 4) + (uVar9 & 0xfffffffc);
    if ((((int)uVar19 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar19)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    uVar17 = uVar19;
    if ((int)uVar19 < 0) {
      uVar17 = uVar19 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0
       ) {
      return;
    }
    uVar17 = uVar19 + 1;
    if ((((int)uVar17 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar17)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    uVar15 = uVar17 & 0x1f;
    if ((int)uVar17 < 0) {
      uVar17 = uVar19 + 0x20;
    }
    if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar17 >> 5) * 4) >> uVar15 & 1) != 0) {
      return;
    }
    uVar17 = uVar19 + 2;
    if ((((int)uVar17 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar17)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    uVar15 = uVar17 & 0x1f;
    if ((int)uVar17 < 0) {
      uVar17 = uVar19 + 0x21;
    }
    if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar17 >> 5) * 4) >> uVar15 & 1) != 0) break;
    uVar17 = uVar19 + 3;
    if ((((int)uVar17 < 0) || ((this->MarkerQuadTree).NumBits <= (int)uVar17)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    uVar15 = uVar17 & 0x1f;
    if ((int)uVar17 < 0) {
      uVar17 = uVar19 + 0x22;
    }
    if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar17 >> 5) * 4) >> uVar15 & 1) != 0) {
      return;
    }
    uVar9 = uVar9 >> 2;
    uVar19 = 0;
    if ((int)uVar18 < (this->LevelOffsets).ArrayNum) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)pTVar21;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    iVar23 = *(int *)((longlong)FVar14 + (longlong)(int)uVar18 * 4) + uVar9;
    if (((iVar23 < 0) || ((this->MarkerQuadTree).NumBits <= iVar23)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar13 = (this->MarkerQuadTree).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->MarkerQuadTree;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar13;
    }
    iVar11 = iVar23;
    if (iVar23 < 0) {
      iVar11 = iVar23 + 0x1f;
    }
    puVar2 = (uint *)((longlong)FVar14 + (longlong)(iVar11 >> 5) * 4);
    local_68 = local_68 - 1;
    *puVar2 = *puVar2 & ~(1 << ((byte)iVar23 & 0x1f));
  }
  return;
}

// GetScaleBias @ 147aed240

TVector4<float> * __thiscall
FLandscapeTextureAtlas::FSubAllocator::GetScaleBias
          (FSubAllocator *this,TVector4<float> *__return_storage_ptr__,uint param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TVector4<float> *pTVar5;
  undefined1 *puVar6;
  
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)&(this->SubAllocInfos).field_0x28)) {
    if (*(int *)&(this->SubAllocInfos).field_0x28 <= (int)param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector4<float> *)(*pcVar2)();
        return pTVar5;
      }
    }
    puVar6 = *(undefined1 **)&(this->SubAllocInfos).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SubAllocInfos).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0)
    goto LAB_147aed2e6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubAllocInfos.IsValidIndex(Handle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                     ,0x64d,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TVector4<float> *)(*pcVar2)();
    return pTVar5;
  }
LAB_147aed2e6:
  puVar1 = (undefined8 *)((longlong)(int)param_1 * 0x20 + 0x10 + *(longlong *)&this->SubAllocInfos);
  uVar3 = puVar1[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// GetStartOffset @ 147aed3f0

TIntPoint<int> __thiscall
FLandscapeTextureAtlas::FSubAllocator::GetStartOffset(FSubAllocator *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TIntPoint<int> TVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar8;
  uint *puVar9;
  uint in_R8D;
  undefined1 *puVar10;
  uint uVar11;
  
  TVar8._s_0.Y = in_register_00000014;
  TVar8._s_0.X = param_1;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < *(int *)&(this->SubAllocInfos).field_0x28)) {
    if (*(int *)&(this->SubAllocInfos).field_0x28 <= (int)in_R8D) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
        return (TIntPoint<int>)TVar4.field0_0x0;
      }
    }
    puVar10 = *(undefined1 **)&(this->SubAllocInfos).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SubAllocInfos).field_0x10;
    }
    if ((*(uint *)(puVar10 + (ulonglong)(in_R8D >> 5) * 4) >> (in_R8D & 0x1f) & 1) != 0)
    goto LAB_147aed497;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubAllocInfos.IsValidIndex(Handle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                     ,0x653,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
    return (TIntPoint<int>)TVar4.field0_0x0;
  }
LAB_147aed497:
  puVar9 = (uint *)((longlong)(int)in_R8D * 0x20 + *(longlong *)&this->SubAllocInfos);
  uVar3 = *puVar9;
  uVar6 = 0;
  if ((int)uVar3 < (this->LevelOffsets).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar4.field0_0x0;
    }
  }
  FVar5 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->LevelOffsets;
  }
  uVar6 = puVar9[1] - *(int *)((longlong)FVar5 + (longlong)(int)uVar3 * 4);
  uVar3 = uVar6 & 0x55555555;
  uVar6 = uVar6 >> 1 & 0x55555555;
  uVar3 = (uVar3 >> 1 ^ uVar3) & 0x33333333;
  uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
  uVar11 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
  uVar3 = (uVar6 >> 1 ^ uVar6) & 0x33333333;
  uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
  uVar3 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
  iVar7 = (this->DimInTiles >> ((byte)*puVar9 & 0x1f)) * this->TileSizeWithBorder;
  *(uint *)TVar8 = ((uVar11 >> 8 ^ uVar11) & 0xffff) * iVar7;
  *(uint *)((longlong)TVar8 + 4) = ((uVar3 >> 8 ^ uVar3) & 0xffff) * iVar7;
  return (TIntPoint<int>)TVar8;
}

// Init @ 147af08f0

void __thiscall
FLandscapeTextureAtlas::FSubAllocator::Init
          (FSubAllocator *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int local_28 [4];
  
  uVar10 = param_3 - 1;
  if (((param_3 == 0) || ((param_3 & uVar10) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDimInTiles && !(InDimInTiles & (InDimInTiles - 1))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                         ,0x5bb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar12 = __real_3f800000;
  uVar9 = param_1 + param_2 * 2;
  this->TileSizeWithBorder = uVar9;
  uVar9 = uVar9 * param_3;
  uVar8 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
  this->DimInTiles = param_3;
  this->BorderSize = param_2;
  piVar1 = &(this->LevelOffsets).ArrayMax;
  this->DimInTilesMask = uVar10;
  this->TileSize = param_1;
  uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
  this->MaxNumTiles = param_3 * param_3;
  this->DimInTilesShift =
       (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  this->DimInTexels = uVar9;
  fVar12 = fVar12 / (float)uVar9;
  this->TexelSize = fVar12;
  this->TileScale = (float)param_1 * fVar12;
  (this->LevelOffsets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,0,&(this->LevelOffsets).AllocatorInstance,0,piVar1);
  }
  iVar6 = (this->MarkerQuadTree).MaxBits;
  (this->MarkerQuadTree).NumBits = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    (this->MarkerQuadTree).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->MarkerQuadTree,0);
  }
  puVar2 = &(this->SubAllocInfos).field_0xc;
  *(undefined4 *)&(this->SubAllocInfos).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)&this->SubAllocInfos,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SubAllocInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubAllocInfos).field_0x34 = 0;
  iVar6 = *(int *)&(this->SubAllocInfos).field_0x2c;
  *(undefined4 *)&(this->SubAllocInfos).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->SubAllocInfos).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SubAllocInfos).field_0x10,0);
  }
  uVar10 = 1;
  local_28[0] = 0;
  if (this->DimInTiles != 0) {
    do {
      FVar3 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)&this->LevelOffsets;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar3;
      }
      if ((ulonglong)FVar7 <= local_28) {
        FVar7 = (ForElementType<unsigned_int>)&this->LevelOffsets;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar3;
        }
        if ((local_28 < (int *)((longlong)FVar7 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->LevelOffsets).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                          (0x404,&(this->LevelOffsets).AllocatorInstance,piVar1);
      }
      (this->LevelOffsets).ArrayNum = iVar6 + 1;
      FVar3 = (this->LevelOffsets).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)&this->LevelOffsets;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar3;
      }
      iVar11 = uVar10 * uVar10;
      uVar10 = uVar10 * 2;
      *(int *)((longlong)FVar7 + (longlong)iVar6 * 4) = local_28[0];
      local_28[0] = iVar11 + local_28[0];
    } while (uVar10 <= this->DimInTiles);
    if (local_28[0] < 0) {
      return;
    }
  }
  iVar6 = local_28[0];
  iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->MarkerQuadTree,local_28[0])
  ;
  TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->MarkerQuadTree,iVar11,iVar6,false);
  return;
}

