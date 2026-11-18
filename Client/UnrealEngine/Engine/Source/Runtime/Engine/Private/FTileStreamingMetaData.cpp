// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetNumVoxelsInTileRange @ 14873d2e0

void __thiscall
UE::SVT::FTileStreamingMetaData::GetNumVoxelsInTileRange
          (FTileStreamingMetaData *this,uint param_1,uint param_2,uint param_3,uint param_4,
          TBitArray<FDefaultBitArrayAllocator> *param_5,uint *param_6,uint *param_7)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_res10;
  
  if (param_3 == 0) {
    if ((param_4 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FormatSizeA > 0 || FormatSizeB > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                           ,0x3b7,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_res10 = 0x5b8;
    if (param_4 != 0) goto LAB_14873d346;
  }
  local_res10 = 0x2dc;
LAB_14873d346:
  *param_6 = 0;
  *param_7 = 0;
  uVar6 = param_1 + param_2;
  if (param_1 < uVar6) {
    bVar4 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    do {
      if (param_5 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
LAB_14873d3fa:
        uVar10 = 0;
        if ((int)param_1 < (this->NumVoxelsA).ArrayNum) {
          uVar10 = ~param_1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = (uint)*(ushort *)
                        ((this->NumVoxelsA).AllocatorInstance.Data + (longlong)(int)param_1 * 2);
        *param_6 = *param_6 + uVar10;
        if (param_4 != 0) {
          uVar11 = 0;
          if ((int)param_1 < (this->TileDataOffsets).ArrayNum) {
            uVar11 = ~param_1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->TileDataOffsets).AllocatorInstance.Data;
          uVar11 = param_1 + 1;
          uVar7 = 0;
          if ((int)uVar11 < (this->TileDataOffsets).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar11 = *(int *)((this->TileDataOffsets).AllocatorInstance.Data +
                           (longlong)(int)uVar11 * 4) -
                   *(int *)(pFVar2 + (longlong)(int)param_1 * 4);
          uVar10 = local_res10 + uVar10 * param_3;
          if ((uVar11 < uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TileSize >= VoxelsDataOffsetB",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                                 ,0x3c9,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *param_7 = *param_7 + (uVar11 - uVar10) / param_4;
        }
      }
      else {
        if ((((int)param_1 < 0) || (param_5->NumBits <= (int)param_1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (param_5->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<unsigned_int>)param_5;
        if (FVar1 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = FVar1;
        }
        uVar10 = param_1;
        if ((int)param_1 < 0) {
          uVar10 = param_1 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar10 >> 5) * 4) & uVar9) != 0)
        goto LAB_14873d3fa;
      }
      param_1 = param_1 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    } while (param_1 < uVar6);
  }
  return;
}

// GetRootTileSize @ 14873f460

uint __thiscall UE::SVT::FTileStreamingMetaData::GetRootTileSize(FTileStreamingMetaData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->TileDataOffsets).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = this->FirstStreamingTileIndex;
  pFVar1 = (this->TileDataOffsets).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)uVar4 < (this->TileDataOffsets).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(int *)((this->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) -
         *(int *)pFVar1;
}

// GetTileInfo @ 148740750

FTileInfo * __thiscall
UE::SVT::FTileStreamingMetaData::GetTileInfo
          (FTileStreamingMetaData *this,FTileInfo *__return_storage_ptr__,uint param_1,uint param_2,
          uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTileInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = 0;
  if ((int)param_1 < (this->NumVoxelsA).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar1 = *(ushort *)((this->NumVoxelsA).AllocatorInstance.Data + (longlong)(int)param_1 * 2);
  uVar7 = uVar1 * param_2;
  uVar4 = 0;
  if ((int)param_1 < (this->TileDataOffsets).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar8 = param_1 + 1;
  __return_storage_ptr__->Offset =
       *(uint *)((this->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  uVar4 = 0;
  if ((int)uVar8 < (this->TileDataOffsets).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar8 = *(int *)((this->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) -
          __return_storage_ptr__->Offset;
  uVar4 = 0;
  __return_storage_ptr__->Size = uVar8;
  (__return_storage_ptr__->OccupancyBitsOffsets).Elements[0] = 0;
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = 0x2dc;
  }
  (__return_storage_ptr__->OccupancyBitsOffsets).Elements[1] = uVar6;
  (__return_storage_ptr__->OccupancyBitsSizes).Elements[0] = uVar6;
  if (param_3 != 0) {
    uVar4 = 0x2dc;
  }
  (__return_storage_ptr__->OccupancyBitsSizes).Elements[1] = uVar4;
  (__return_storage_ptr__->VoxelDataOffsets).Elements[0] = uVar4 + uVar6;
  uVar4 = uVar4 + uVar6 + uVar7;
  (__return_storage_ptr__->VoxelDataOffsets).Elements[1] = uVar4;
  uVar8 = uVar8 - uVar4;
  (__return_storage_ptr__->VoxelDataSizes).Elements[0] = uVar7;
  (__return_storage_ptr__->VoxelDataSizes).Elements[1] = uVar8;
  (__return_storage_ptr__->NumVoxels).Elements[0] = (uint)uVar1;
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar8 / param_3;
  }
  (__return_storage_ptr__->NumVoxels).Elements[1] = uVar8;
  uVar4 = this->FirstStreamingTileIndex;
  if (uVar4 <= param_1) {
    uVar7 = 0;
    if ((int)uVar4 < (this->TileDataOffsets).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTileInfo *)(*pcVar2)();
        return pFVar5;
      }
    }
    __return_storage_ptr__->Offset =
         __return_storage_ptr__->Offset -
         *(int *)((this->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
  }
  if ((__return_storage_ptr__->VoxelDataSizes).Elements[0] +
      (__return_storage_ptr__->OccupancyBitsSizes).Elements[1] +
      (__return_storage_ptr__->OccupancyBitsSizes).Elements[0] +
      (__return_storage_ptr__->VoxelDataSizes).Elements[1] != __return_storage_ptr__->Size) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Result.OccupancyBitsSizes[0] + Result.OccupancyBitsSizes[1] + Result.VoxelDataSizes[0] + Result.VoxelDataSizes[1]) == Result.Size"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x3ac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((__return_storage_ptr__->OccupancyBitsOffsets).Elements[0] +
      (__return_storage_ptr__->OccupancyBitsSizes).Elements[0] !=
      (__return_storage_ptr__->OccupancyBitsOffsets).Elements[1]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Result.OccupancyBitsOffsets[0] + Result.OccupancyBitsSizes[0]) == Result.OccupancyBitsOffsets[1]"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x3ad,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((__return_storage_ptr__->OccupancyBitsSizes).Elements[1] +
      (__return_storage_ptr__->OccupancyBitsOffsets).Elements[1] !=
      (__return_storage_ptr__->VoxelDataOffsets).Elements[0]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Result.OccupancyBitsOffsets[1] + Result.OccupancyBitsSizes[1]) == Result.VoxelDataOffsets[0]"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x3ae,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((__return_storage_ptr__->VoxelDataSizes).Elements[0] +
      (__return_storage_ptr__->VoxelDataOffsets).Elements[0] !=
      (__return_storage_ptr__->VoxelDataOffsets).Elements[1]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Result.VoxelDataOffsets[0] + Result.VoxelDataSizes[0]) == Result.VoxelDataOffsets[1]"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x3af,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((__return_storage_ptr__->VoxelDataOffsets).Elements[1] +
      (__return_storage_ptr__->VoxelDataSizes).Elements[1] != __return_storage_ptr__->Size) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Result.VoxelDataOffsets[1] + Result.VoxelDataSizes[1]) == Result.Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x3b0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTileInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetTileRangeMemoryOffsetSize @ 148740b80

void __thiscall
UE::SVT::FTileStreamingMetaData::GetTileRangeMemoryOffsetSize
          (FTileStreamingMetaData *this,uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 < this->FirstStreamingTileIndex) &&
     (this->FirstStreamingTileIndex < param_1 + param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(TileOffset < FirstStreamingTileIndex && (TileOffset + TileCount) > FirstStreamingTileIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                       ,0xaf,L"Tile range must not straddle the root tile and streaming tiles!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 < this->FirstStreamingTileIndex) {
    uVar3 = 0;
  }
  else {
    uVar3 = GetRootTileSize(this);
  }
  uVar4 = 0;
  if ((int)param_1 < (this->TileDataOffsets).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = param_1 + param_2;
  *param_3 = *(int *)((this->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)param_1 * 4) -
             uVar3;
  uVar4 = 0;
  if ((int)uVar5 < (this->TileDataOffsets).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_4 = (*(int *)((this->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) -
             *param_3) - uVar3;
  return;
}

