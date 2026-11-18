// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// GetChunkIndex @ 1489e6e30

int __thiscall FVirtualTextureBuiltData::GetChunkIndex(FVirtualTextureBuiltData *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->ChunkIndexPerMip).ArrayNum <= (int)(uint)param_1) {
    return -1;
  }
  if ((this->ChunkIndexPerMip).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->ChunkIndexPerMip).AllocatorInstance.Data + (ulonglong)param_1 * 4);
}

// GetDiskMemoryFootprint @ 1489e8150

ulong64 __thiscall FVirtualTextureBuiltData::GetDiskMemoryFootprint(FVirtualTextureBuiltData *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar5 = 0;
  uVar6 = 0;
  if (0 < (this->Chunks).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      uVar6 = uVar6 + 1;
      lVar2 = lVar7 + 0x5c;
      lVar7 = lVar7 + 0x90;
      uVar5 = uVar5 + *(uint *)((this->Chunks).AllocatorInstance.Data + lVar2);
    } while ((int)uVar6 < (this->Chunks).ArrayNum);
  }
  return uVar5;
}

// GetMemoryFootprint @ 1489ea7f0

uint __thiscall FVirtualTextureBuiltData::GetMemoryFootprint(FVirtualTextureBuiltData *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar3 = (this->Chunks).ArrayNum;
  pFVar7 = (this->Chunks).AllocatorInstance.Data;
  iVar10 = (this->Chunks).ArrayMax * 0x90 + 0x128;
  pFVar8 = pFVar7 + (longlong)iVar3 * 0x90;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVirtualTextureDataChunk_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    iVar10 = iVar10 + 0x58;
    pFVar7 = pFVar7 + 0x90;
  }
  iVar3 = (this->TileOffsetData).ArrayNum;
  pFVar7 = (this->TileOffsetData).AllocatorInstance.Data;
  uVar9 = ((longlong)(this->TileOffsetInChunk).ArrayMax + (longlong)(this->TileIndexPerMip).ArrayMax
           + (longlong)(this->TileIndexPerChunk).ArrayMax +
           (longlong)(this->BaseOffsetPerMip).ArrayMax + (longlong)(this->ChunkIndexPerMip).ArrayMax
          ) * 4;
  pFVar8 = pFVar7 + (longlong)iVar3 * 0x30;
  while( true ) {
    if ((this->TileOffsetData).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FVirtualTextureTileOffsetData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    pFVar1 = pFVar7 + 0x2c;
    pFVar2 = pFVar7 + 0x1c;
    pFVar7 = pFVar7 + 0x30;
    uVar9 = uVar9 + ((longlong)*(int *)pFVar1 + (longlong)*(int *)pFVar2) * 4;
  }
  if (uVar9 != (uVar9 & 0xffffffff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  return (int)uVar9 + iVar10;
}

// GetNumTileHeaders @ 1489ead80

uint __thiscall FVirtualTextureBuiltData::GetNumTileHeaders(FVirtualTextureBuiltData *this)

{
  return (this->TileOffsetInChunk).ArrayNum;
}

// GetTileIndex_Legacy @ 1489ee4d0

uint __thiscall
FVirtualTextureBuiltData::GetTileIndex_Legacy
          (FVirtualTextureBuiltData *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->NumMips <= (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("vLevel < NumMips",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if ((this->TileIndexPerMip).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = param_2 * this->NumLayers +
          *(int *)((this->TileIndexPerMip).AllocatorInstance.Data + (ulonglong)param_1 * 4);
  if ((this->TileIndexPerMip).ArrayNum <= (int)(param_1 + 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (*(uint *)((this->TileIndexPerMip).AllocatorInstance.Data + (ulonglong)param_1 * 4 + 4) <=
      uVar3) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

// GetTileMemoryFootprint @ 1489ee5e0

uint __thiscall FVirtualTextureBuiltData::GetTileMemoryFootprint(FVirtualTextureBuiltData *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  iVar3 = (this->TileOffsetData).ArrayNum;
  pFVar7 = (this->TileOffsetData).AllocatorInstance.Data;
  uVar9 = ((longlong)(this->TileOffsetInChunk).ArrayMax + (longlong)(this->TileIndexPerMip).ArrayMax
           + (longlong)(this->TileIndexPerChunk).ArrayMax +
           (longlong)(this->BaseOffsetPerMip).ArrayMax + (longlong)(this->ChunkIndexPerMip).ArrayMax
          ) * 4;
  pFVar8 = pFVar7 + (longlong)iVar3 * 0x30;
  while( true ) {
    if ((this->TileOffsetData).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVirtualTextureTileOffsetData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pFVar1 = pFVar7 + 0x2c;
    pFVar2 = pFVar7 + 0x1c;
    pFVar7 = pFVar7 + 0x30;
    uVar9 = uVar9 + ((longlong)*(int *)pFVar1 + (longlong)*(int *)pFVar2) * 4;
  }
  if (uVar9 != (uVar9 & 0xffffffff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  return (uint)uVar9;
}

// GetTileOffset @ 1489ee6c0

uint __thiscall
FVirtualTextureBuiltData::GetTileOffset
          (FVirtualTextureBuiltData *this,uint param_1,uint param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  lVar10 = (longlong)(int)param_1;
  uVar5 = 0xffffffff;
  if ((this->TileOffsetInChunk).ArrayNum < 1) {
    if (((-1 < (int)param_1) && ((int)param_1 < (this->BaseOffsetPerMip).ArrayNum)) &&
       ((int)param_1 < (this->TileOffsetData).ArrayNum)) {
      uVar4 = 0;
      uVar9 = 0;
      if ((int)param_1 < (this->BaseOffsetPerMip).ArrayNum) {
        uVar9 = ~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      uVar9 = *(uint *)((this->BaseOffsetPerMip).AllocatorInstance.Data + lVar10 * 4);
      uVar6 = 0;
      if ((int)param_1 < (this->TileOffsetData).ArrayNum) {
        uVar6 = ~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      iVar12 = 0;
      iVar11 = 0;
      pFVar1 = (this->TileOffsetData).AllocatorInstance.Data;
      uVar6 = *(uint *)(pFVar1 + lVar10 * 0x30 + 0x18);
      if (0 < (int)uVar6) {
        do {
          uVar7 = uVar6 >> 1;
          iVar11 = iVar12;
          if (*(uint *)(*(longlong *)(pFVar1 + lVar10 * 0x30 + 0x10) +
                       (longlong)(int)(uVar7 + iVar12) * 4) <= param_2) {
            iVar11 = uVar7 + iVar12 + (uVar6 & 1);
          }
          iVar12 = iVar11;
          uVar6 = uVar7;
        } while (uVar7 != 0);
      }
      uVar7 = iVar11 - 1;
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(pFVar1 + lVar10 * 0x30 + 0x28)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      iVar12 = *(int *)(*(longlong *)(pFVar1 + lVar10 * 0x30 + 0x20) + (longlong)(int)uVar7 * 4);
      uVar6 = 0xffffffff;
      if (iVar12 != -1) {
        uVar6 = 0;
        if ((int)uVar7 < *(int *)(pFVar1 + lVar10 * 0x30 + 0x18)) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        uVar6 = (iVar12 - *(int *)(*(longlong *)(pFVar1 + lVar10 * 0x30 + 0x10) +
                                  (longlong)(int)uVar7 * 4)) + param_2;
      }
      if ((uVar9 != 0xffffffff) && (uVar6 != 0xffffffff)) {
        iVar12 = (this->TileDataOffsetPerLayer).ArrayNum;
        uVar7 = iVar12 - 1;
        uVar5 = 0;
        if ((int)uVar7 < iVar12) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        iVar12 = (this->TileDataOffsetPerLayer).ArrayNum;
        uVar5 = *(uint *)((this->TileDataOffsetPerLayer).AllocatorInstance.Data +
                         (longlong)iVar12 * 4 + -4);
        if (param_3 != 0) {
          uVar7 = param_3 - 1;
          uVar4 = 0;
          if ((int)uVar7 < iVar12) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          }
          uVar4 = *(uint *)((this->TileDataOffsetPerLayer).AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 4);
        }
        uVar8 = (ulonglong)uVar6 * (ulonglong)uVar5 + (ulonglong)uVar4 + (ulonglong)uVar9;
        uVar5 = (uint)uVar8;
        if (((uVar8 != (uVar8 & 0xffffffff)) || ((longlong)uVar8 < 0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
    }
  }
  else {
    uVar4 = GetTileIndex_Legacy(this,(uchar)param_1,param_2);
    if (uVar4 != 0xffffffff) {
      uVar9 = param_1 & 0xff;
      if ((int)uVar9 < (this->ChunkIndexPerMip).ArrayNum) {
        if (((this->ChunkIndexPerMip).ArrayNum <= (int)uVar9) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        uVar9 = *(uint *)((this->ChunkIndexPerMip).AllocatorInstance.Data + (ulonglong)uVar9 * 4);
      }
      else {
        uVar9 = 0xffffffff;
      }
      uVar6 = GetTileOffset_Legacy(this,uVar9,uVar4);
      uVar7 = GetTileOffset_Legacy(this,uVar9,this->NumLayers + uVar4);
      if (uVar6 != uVar7) {
        uVar5 = GetTileOffset_Legacy(this,uVar9,uVar4 + param_3);
      }
    }
  }
  return uVar5;
}

// GetTileOffset_Legacy @ 1489eebf0

uint __thiscall
FVirtualTextureBuiltData::GetTileOffset_Legacy
          (FVirtualTextureBuiltData *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->TileIndexPerChunk).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_2 < *(uint *)((this->TileIndexPerChunk).AllocatorInstance.Data +
                         (longlong)(int)param_1 * 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TileIndex >= TileIndexPerChunk[ChunkIndex]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                       ,0x91,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar4 = param_1 + 1;
  uVar3 = 0;
  if ((int)uVar4 < (this->TileIndexPerChunk).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_2 < *(uint *)((this->TileIndexPerChunk).AllocatorInstance.Data +
                         (longlong)(int)uVar4 * 4)) {
    uVar3 = 0;
    if ((int)param_2 < (this->TileOffsetInChunk).ArrayNum) {
      uVar3 = ~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    uVar3 = *(uint *)((this->TileOffsetInChunk).AllocatorInstance.Data + (longlong)(int)param_2 * 4)
    ;
  }
  else {
    uVar3 = 0;
    if ((int)param_1 < (this->Chunks).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    uVar3 = *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)param_1 * 0x90 + 0x5c);
  }
  return uVar3;
}

// IsLegacyData @ 1489f8d30

bool __thiscall FVirtualTextureBuiltData::IsLegacyData(FVirtualTextureBuiltData *this)

{
  return 0 < (this->TileOffsetInChunk).ArrayNum;
}

// IsValidAddress @ 1489fa180

bool __thiscall
FVirtualTextureBuiltData::IsValidAddress(FVirtualTextureBuiltData *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (0 < (this->TileOffsetInChunk).ArrayNum) {
    uVar4 = GetTileIndex_Legacy(this,(uchar)param_1,param_2);
    return uVar4 != 0xffffffff;
  }
  if ((-1 < (int)param_1) && ((int)param_1 < (this->TileOffsetData).ArrayNum)) {
    uVar6 = param_2 >> 1 & 0x55555555;
    uVar4 = ((param_2 & 0x55555555) >> 1 ^ param_2 & 0x55555555) & 0x33333333;
    uVar4 = (uVar4 >> 2 ^ uVar4) & 0xf0f0f0f;
    uVar5 = (uVar4 >> 4 ^ uVar4) & 0xff00ff;
    uVar4 = (uVar6 >> 1 ^ uVar6) & 0x33333333;
    uVar4 = (uVar4 >> 2 ^ uVar4) & 0xf0f0f0f;
    uVar6 = (uVar4 >> 4 ^ uVar4) & 0xff00ff;
    uVar4 = 0;
    if ((int)param_1 < (this->TileOffsetData).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (((uVar5 >> 8 ^ uVar5) & 0xffff) <
        *(uint *)((this->TileOffsetData).AllocatorInstance.Data + (longlong)(int)param_1 * 0x30)) {
      uVar4 = 0;
      if ((int)param_1 < (this->TileOffsetData).ArrayNum) {
        uVar4 = ~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (((uVar6 >> 8 ^ uVar6) & 0xffff) <
          *(uint *)((this->TileOffsetData).AllocatorInstance.Data +
                   (longlong)(int)param_1 * 0x30 + 4)) {
        return true;
      }
    }
    return false;
  }
  return false;
}

// Serialize @ 148a112c0

void __thiscall
FVirtualTextureBuiltData::Serialize
          (FVirtualTextureBuiltData *this,FArchive *param_1,UObject *param_2,int param_3)

{
  int *piVar1;
  TArray<FVirtualTextureDataChunk,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong *puVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined4 *puVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  UEnum *this_01;
  FName *pFVar15;
  long64 lVar16;
  FName this_02;
  longlong lVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulong64 uVar21;
  uint uVar22;
  byte *pbVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  FVirtualTextureTileOffsetData *pFVar27;
  bool bVar28;
  uint local_118;
  uint local_114;
  TArray<FVirtualTextureTileOffsetData,TSizedDefaultAllocator<32>_> local_110;
  int local_100;
  int local_fc;
  int local_f8;
  uint local_f4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_f0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_e0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_d0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_c0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b0;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  longlong local_90;
  FString local_88;
  byte *local_78;
  FString local_70;
  FName local_60;
  undefined1 local_58 [24];
  
  uVar26 = (ulonglong)param_3;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId224,"FVirtualTextureDataChunk::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
               ,0xe0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId224);
  }
  if (((param_3 != 0) && ((param_1->field_0x28 & 4) == 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("FirstMipToSerialize == 0 || Ar.IsSaving()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                          ,0xe2,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_118 = 0;
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (uVar20 = 1, *(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar20 = 0;
  }
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  if (puVar2[1] < *puVar2 + 4) {
    local_a0 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_a0 = uVar20;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a0,4);
    if (1 < local_a0) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->NumLayers);
    }
  }
  else {
    this->NumLayers = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &this->WidthInBlocks;
  pbVar23 = &param_1->field_0x2a;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  local_78 = pbVar23;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*pbVar23 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &this->HeightInBlocks;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*pbVar23 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &this->TileSize;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*pbVar23 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &this->TileBorderSize;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*pbVar23 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->TileDataOffsetPerLayer);
  if (param_3 < 1) {
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((*pbVar23 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumMips,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->NumMips);
      }
    }
    else {
      this->NumMips = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar3 = &this->Width;
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((*pbVar23 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((*pbVar23 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->Height);
      }
    }
    else {
      this->Height = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&this->ChunkIndexPerMip);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&this->BaseOffsetPerMip);
    TArrayPrivateFriend::Serialize<FVirtualTextureTileOffsetData,TSizedDefaultAllocator<32>_>
              (param_1,&this->TileOffsetData);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&this->TileIndexPerChunk);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&this->TileIndexPerMip);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&this->TileOffsetInChunk);
  }
  else {
    if ((this->NumMips <= (uint)param_3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)FirstMipToSerialize < NumMips",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_f4 = (uint)~param_3 >> 0x1f;
    uVar20 = 0;
    if (param_3 < (this->ChunkIndexPerMip).ArrayNum) {
      uVar20 = local_f4;
    }
    if ((uVar20 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar24 = uVar26 * 4;
    local_118 = *(uint *)((this->ChunkIndexPerMip).AllocatorInstance.Data + lVar24);
    local_9c = this->NumMips - param_3;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98 = this->Width >> ((byte)param_3 & 0x1f);
    local_94 = this->Height >> ((byte)param_3 & 0x1f);
    uVar20 = (this->ChunkIndexPerMip).ArrayNum - param_3;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = 0;
    local_110.ArrayMax = 0;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    local_90 = lVar24;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if (0 < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar20,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
    }
    lVar17 = lVar24;
    uVar20 = param_3;
    if (param_3 < (this->ChunkIndexPerMip).ArrayNum) {
      do {
        uVar22 = 0;
        if ((int)uVar20 < (this->ChunkIndexPerMip).ArrayNum) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((*(uint *)((this->ChunkIndexPerMip).AllocatorInstance.Data + lVar24) < local_118) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ChunkIndexPerMip[i] >= NumChunksToStrip",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                                ,0x10f,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar22 = 0;
        if ((int)uVar20 < (this->ChunkIndexPerMip).ArrayNum) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_100 = *(int *)((this->ChunkIndexPerMip).AllocatorInstance.Data + lVar24) - local_118;
        if (((local_b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 <
             local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_b0.ArrayNum == local_b0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
          local_b0.ArrayNum = iVar12;
        }
        lVar17 = (longlong)local_b0.ArrayNum;
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 4;
        local_b0.ArrayNum = local_b0.ArrayNum + 1;
        *(int *)(local_b0.AllocatorInstance.Data + lVar17 * 4) = local_100;
        lVar17 = local_90;
      } while ((int)uVar20 < (this->ChunkIndexPerMip).ArrayNum);
    }
    uVar20 = (this->BaseOffsetPerMip).ArrayNum - param_3;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if (local_c0.ArrayMax < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar20,&local_c0.AllocatorInstance,local_c0.ArrayNum,&local_c0.ArrayMax);
    }
    uVar20 = param_3;
    if (param_3 < (this->BaseOffsetPerMip).ArrayNum) {
      do {
        uVar22 = 0;
        if ((int)uVar20 < (this->BaseOffsetPerMip).ArrayNum) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar19 = (this->BaseOffsetPerMip).AllocatorInstance.Data + lVar17;
        if (((local_c0.AllocatorInstance.Data <= pFVar19) &&
            (pFVar19 < local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_c0.ArrayNum == local_c0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
          local_c0.ArrayNum = iVar12;
        }
        lVar24 = (longlong)local_c0.ArrayNum;
        uVar20 = uVar20 + 1;
        lVar17 = lVar17 + 4;
        local_c0.ArrayNum = local_c0.ArrayNum + 1;
        *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar24 * 4) = *(undefined4 *)pFVar19;
      } while ((int)uVar20 < (this->BaseOffsetPerMip).ArrayNum);
    }
    uVar20 = (this->TileOffsetData).ArrayNum - param_3;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if (local_110.ArrayMax < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar20,&local_110.AllocatorInstance,local_110.ArrayNum,&local_110.ArrayMax);
    }
    uVar20 = param_3;
    if (param_3 < (this->TileOffsetData).ArrayNum) {
      do {
        uVar22 = 0;
        if ((int)uVar20 < (this->TileOffsetData).ArrayNum) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar27 = (FVirtualTextureTileOffsetData *)
                  ((this->TileOffsetData).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x30);
        if (((local_110.AllocatorInstance.Data <= pFVar27) &&
            (pFVar27 < (FVirtualTextureTileOffsetData *)
                       (local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 0x30))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_110.ArrayNum == local_110.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_110.AllocatorInstance,&local_110.ArrayMax);
          local_110.ArrayNum = iVar12;
        }
        lVar24 = (longlong)local_110.ArrayNum;
        local_110.ArrayNum = local_110.ArrayNum + 1;
        FVirtualTextureTileOffsetData::FVirtualTextureTileOffsetData
                  ((FVirtualTextureTileOffsetData *)
                   (local_110.AllocatorInstance.Data + lVar24 * 0x30),pFVar27);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (this->TileOffsetData).ArrayNum);
    }
    if (0 < (this->TileOffsetInChunk).ArrayNum) {
      uVar20 = 0;
      if (param_3 < (this->TileIndexPerMip).ArrayNum) {
        uVar20 = local_f4;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar20 = *(uint *)((this->TileIndexPerMip).AllocatorInstance.Data + local_90);
      local_f4 = uVar20;
      if (((uint)(this->TileOffsetInChunk).ArrayNum <= uVar20) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumTilesToStrip < (uint32)TileOffsetInChunk.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                              ,0x123,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar22 = (this->TileIndexPerChunk).ArrayNum - local_118;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (local_d0.ArrayMax < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar22,&local_d0.AllocatorInstance,local_d0.ArrayNum,&local_d0.ArrayMax);
      }
      if ((int)local_118 < (this->TileIndexPerChunk).ArrayNum) {
        lVar24 = (longlong)(int)local_118 * 4;
        uVar22 = local_118;
        do {
          uVar25 = 0;
          if ((int)uVar22 < (this->TileIndexPerChunk).ArrayNum) {
            uVar25 = ~uVar22 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar25 = *(uint *)((this->TileIndexPerChunk).AllocatorInstance.Data + lVar24);
          if (uVar20 < uVar25) {
            uVar25 = uVar20;
          }
          uVar13 = 0;
          if ((int)uVar22 < (this->TileIndexPerChunk).ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_fc = *(int *)((this->TileIndexPerChunk).AllocatorInstance.Data + lVar24) - uVar25;
          if (((local_d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_fc) &&
              ((FScriptContainerElement *)&local_fc <
               local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_d0.ArrayNum == local_d0.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
            local_d0.ArrayNum = iVar12;
          }
          lVar17 = (longlong)local_d0.ArrayNum;
          uVar22 = uVar22 + 1;
          lVar24 = lVar24 + 4;
          local_d0.ArrayNum = local_d0.ArrayNum + 1;
          *(int *)(local_d0.AllocatorInstance.Data + lVar17 * 4) = local_fc;
        } while ((int)uVar22 < (this->TileIndexPerChunk).ArrayNum);
        uVar26 = (ulonglong)(uint)param_3;
        uVar20 = local_f4;
      }
      uVar22 = (this->TileIndexPerMip).ArrayNum - (int)uVar26;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (local_e0.ArrayMax < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar22,&local_e0.AllocatorInstance,local_e0.ArrayNum,&local_e0.ArrayMax);
      }
      lVar24 = local_90;
      if ((int)uVar26 < (this->TileIndexPerMip).ArrayNum) {
        do {
          uVar25 = (uint)uVar26;
          uVar22 = 0;
          if ((int)uVar25 < (this->TileIndexPerMip).ArrayNum) {
            uVar22 = ~uVar25 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((*(uint *)((this->TileIndexPerMip).AllocatorInstance.Data + lVar24) < uVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TileIndexPerMip[i] >= NumTilesToStrip",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                                  ,0x12f,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar22 = 0;
          if ((int)uVar25 < (this->TileIndexPerMip).ArrayNum) {
            uVar22 = ~uVar25 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_f8 = *(int *)((this->TileIndexPerMip).AllocatorInstance.Data + lVar24) - uVar20;
          if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 <
               local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_e0.ArrayNum == local_e0.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
            local_e0.ArrayNum = iVar12;
          }
          lVar17 = (longlong)local_e0.ArrayNum;
          uVar26 = (ulonglong)(uVar25 + 1);
          local_e0.ArrayNum = local_e0.ArrayNum + 1;
          *(int *)(local_e0.AllocatorInstance.Data + lVar17 * 4) = local_f8;
          lVar24 = lVar24 + 4;
        } while ((int)(uVar25 + 1) < (this->TileIndexPerMip).ArrayNum);
      }
      uVar22 = (this->TileOffsetInChunk).ArrayNum - uVar20;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (local_f0.ArrayMax < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar22,&local_f0.AllocatorInstance,local_f0.ArrayNum,&local_f0.ArrayMax);
      }
      if ((int)uVar20 < (this->TileOffsetInChunk).ArrayNum) {
        lVar24 = (longlong)(int)uVar20 * 4;
        do {
          uVar22 = 0;
          if ((int)uVar20 < (this->TileOffsetInChunk).ArrayNum) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar19 = (this->TileOffsetInChunk).AllocatorInstance.Data + lVar24;
          if (((local_f0.AllocatorInstance.Data <= pFVar19) &&
              (pFVar19 < local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
            local_f0.ArrayNum = iVar12;
          }
          lVar17 = (longlong)local_f0.ArrayNum;
          uVar20 = uVar20 + 1;
          lVar24 = lVar24 + 4;
          local_f0.ArrayNum = local_f0.ArrayNum + 1;
          *(undefined4 *)(local_f0.AllocatorInstance.Data + lVar17 * 4) = *(undefined4 *)pFVar19;
        } while ((int)uVar20 < (this->TileOffsetInChunk).ArrayNum);
      }
    }
    pbVar23 = local_78;
    plVar7 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
      if ((*local_78 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_9c);
      }
    }
    else {
      local_9c = *(uint *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    plVar7 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
      if ((*pbVar23 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    plVar7 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
      if ((*pbVar23 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>(param_1,&local_b0);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>(param_1,&local_c0);
    TArrayPrivateFriend::Serialize<FVirtualTextureTileOffsetData,TSizedDefaultAllocator<32>_>
              (param_1,&local_110);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>(param_1,&local_d0);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>(param_1,&local_e0);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>(param_1,&local_f0);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    DestructItems<FVirtualTextureTileOffsetData,int>
              ((FVirtualTextureTileOffsetData *)local_110.AllocatorInstance.Data,local_110.ArrayNum)
    ;
    if ((FVirtualTextureTileOffsetData *)local_110.AllocatorInstance.Data !=
        (FVirtualTextureTileOffsetData *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
  }
  this_01 = UTexture::GetPixelFormatEnum();
  if ((param_1->field_0x28 & 1) == 0) {
    uVar20 = 0;
    if (((param_1->field_0x28 & 4) != 0) && (this->NumLayers != 0)) {
      do {
        this_02 = UEnum::GetNameByValue(this_01,(long64)local_58);
        ::FName::GetPlainNameString((FName *)this_02,&local_70);
        ::operator<<(param_1,&local_70);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < this->NumLayers);
    }
  }
  else {
    if ((8 < this->NumLayers) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumLayers <= 8u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                            ,0x14c,
                            L"Trying to load FVirtualTextureBuiltData with %d layers, only %d layers supported"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar26 = 0;
    if (this->NumLayers != 0) {
      do {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        ::operator<<(param_1,&local_88);
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar18.Data = local_88.Data.AllocatorInstance.Data;
        }
        pFVar15 = ::FName::FName(&local_60,(wchar_t *)FVar18.Data);
        lVar16 = UEnum::GetValueByName(this_01,*pFVar15,None);
        this->LayerTypes[uVar26].Value = (uchar)lVar16;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        uVar20 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar20;
      } while (uVar20 < this->NumLayers);
    }
  }
  uVar26 = 0;
  if (this->NumLayers != 0) {
    do {
      pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
        if ((*pbVar23 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this->LayerFallbackColors + uVar26,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)(this->LayerFallbackColors + uVar26));
        }
      }
      else {
        this->LayerFallbackColors[uVar26].field0_0x0._s_0.R = *pfVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pfVar5 = &this->LayerFallbackColors[uVar26].field0_0x0._s_0.G;
      pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
        if ((*pbVar23 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
        }
      }
      else {
        *pfVar5 = *pfVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pfVar5 = &this->LayerFallbackColors[uVar26].field0_0x0._s_0.B;
      pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
        if ((*pbVar23 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
        }
      }
      else {
        *pfVar5 = *pfVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pfVar5 = &this->LayerFallbackColors[uVar26].field0_0x0._s_0.A;
      pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
        if ((*pbVar23 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
        }
      }
      else {
        *pfVar5 = *pfVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar20 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar20;
    } while (uVar20 < this->NumLayers);
  }
  local_114 = (this->Chunks).ArrayNum - local_118;
  plVar7 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
    if ((*pbVar23 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_114,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_114);
    }
  }
  else {
    local_114 = *(uint *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    uVar21 = (ulong64)local_114;
    this_00 = &this->Chunks;
    if ((int)local_114 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar21);
    }
    piVar1 = &(this->Chunks).ArrayMax;
    if ((this->Chunks).ArrayMax < (int)local_114) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,local_114,&this_00->AllocatorInstance,(this->Chunks).ArrayNum,piVar1);
      uVar21 = (ulong64)local_114;
    }
    iVar12 = (this->Chunks).ArrayNum;
    uVar20 = (uint)uVar21;
    if (iVar12 < (int)uVar20) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x90,8,uVar20 - iVar12,&this_00->AllocatorInstance,
                          &(this->Chunks).ArrayNum,piVar1);
      DefaultConstructItems<FVirtualTextureDataChunk,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar14 * 0x90,uVar20 - iVar12);
    }
    else {
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar21);
      }
      if ((int)uVar20 < iVar12) {
        uVar22 = iVar12 - uVar20;
        if (((int)(uVar22 | uVar20) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar22 != 0) {
          TArray<FVirtualTextureDataChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,uVar20,uVar22);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,&this_00->AllocatorInstance,(this->Chunks).ArrayNum,piVar1);
        }
      }
    }
  }
  uVar26 = (ulonglong)(int)local_118;
  if ((int)local_118 < (this->Chunks).ArrayNum) {
    lVar24 = uVar26 * 0x90;
    do {
      uVar22 = (uint)uVar26;
      uVar20 = 0;
      if ((int)uVar22 < (this->Chunks).ArrayNum) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (this->Chunks).AllocatorInstance.Data;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar8 + lVar24 + 0x48,0x14);
      pFVar19 = pFVar8 + lVar24 + 0x5c;
      puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar19,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar19);
        }
      }
      else {
        *(uint *)pFVar19 = *puVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pFVar19 = pFVar8 + lVar24 + 0x60;
      puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar19,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar19);
        }
      }
      else {
        *(uint *)pFVar19 = *puVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar26 = 0;
      if (this->NumLayers != 0) {
        do {
          pFVar19 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
          if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar19 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar8 + uVar26 + 0x84 + lVar24,1);
          }
          else {
            pFVar8[uVar26 + 0x84 + lVar24] = *pFVar19;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
          }
          pFVar19 = pFVar8 + uVar26 * 4 + 100 + lVar24;
          puVar9 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
          if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar19,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar19);
            }
          }
          else {
            *(undefined4 *)pFVar19 = *puVar9;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          uVar20 = (int)uVar26 + 1;
          uVar26 = (ulonglong)uVar20;
        } while (uVar20 < this->NumLayers);
      }
      FBulkData::Serialize((FBulkData *)(pFVar8 + lVar24 + 0x20),param_1,param_2,false,1,None);
      uVar26 = (ulonglong)(uVar22 + 1);
      lVar24 = lVar24 + 0x90;
    } while ((int)(uVar22 + 1) < (this->Chunks).ArrayNum);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ValidateData @ 148a20980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVirtualTextureBuiltData::ValidateData
          (FVirtualTextureBuiltData *this,TStringView<wchar_t> *param_1,bool param_2)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FNameEntryId FVar11;
  FString *pFVar12;
  long64 lVar13;
  ulonglong uVar14;
  undefined4 extraout_var;
  int iVar15;
  FBulkData *this_00;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  FBulkData *this_01;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  undefined1 auStackY_148 [32];
  bool local_108;
  uint local_104;
  uint local_f4;
  ForAnyElementType local_f0;
  int local_e8 [2];
  FScriptContainerElement *local_e0;
  longlong local_d8;
  FScriptContainerElement *local_d0;
  FVirtualTextureBuiltData *local_c8;
  uint local_c0;
  longlong local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  void *local_a8;
  undefined1 local_a0 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_98;
  FString local_90;
  wchar_t *local_78;
  undefined8 uStack_70;
  FString local_68;
  longlong local_58;
  longlong lStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar20 = -1 < CpuChannel->Enabled;
  local_c8 = this;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId419,"FVirtualTextureBuiltData::ValidateCompression",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
               ,0x1a3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId419);
  }
  local_78 = param_1->DataPtr;
  uStack_70 = *(undefined8 *)&param_1->Size;
  local_f0.Data = (FScriptContainerElement *)0x0;
  iVar1 = this->TileSize + this->TileBorderSize * 2;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_98.Owner = (FBufferOwner *)0x0;
  local_d0 = (FScriptContainerElement *)0x0;
  pFVar12 = ::FString::ConstructFromPtrSize
                      (&local_90,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_68 != pFVar12) {
    local_d0 = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  local_104 = 0;
  local_108 = true;
  local_b8 = 0;
  local_d8 = 0;
  while (lVar17 = local_b8, (int)local_104 < (this->Chunks).ArrayNum) {
    if (((int)local_104 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    local_e0 = (this->Chunks).AllocatorInstance.Data;
    this_01 = (FBulkData *)(local_e0 + local_b8 + 0x20);
    local_e0 = local_e0 + lVar17;
    lVar13 = FBulkData::GetBulkDataSize(this_01);
    this_00 = (FBulkData *)0x0;
    if (lVar13 < 1) {
LAB_148a20f57:
      if (1 < (byte)LogTexture._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      }
LAB_148a20f89:
      local_108 = false;
      if (this_00 != (FBulkData *)0x0) {
        FBulkData::Unlock(this_00);
      }
      break;
    }
    uVar14 = FBulkData::GetBulkDataSize(this_01);
    local_a8 = FBulkData::LockReadOnly(this_01);
    this_00 = this_01;
    if ((local_a8 == (void *)0x0) || (uVar14 < 4)) goto LAB_148a20f57;
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    FSHA1::HashBuffer(local_a8,uVar14,(uchar *)&local_58);
    this = local_c8;
    lVar17 = local_d8;
    pFVar19 = local_e0;
    if (((local_58 != *(longlong *)(local_e0 + 0x48)) ||
        (lStack_50 != *(longlong *)(local_e0 + 0x50))) || (local_48 != *(int *)(local_e0 + 0x58))) {
      if (1 < (byte)LogTexture._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      }
      goto LAB_148a20f89;
    }
    if ((param_2) && (0 < (local_c8->TileOffsetInChunk).ArrayNum)) {
      uVar16 = 0;
      if ((int)local_104 < (local_c8->TileIndexPerChunk).ArrayNum) {
        uVar16 = ~local_104 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      local_c0 = ~(local_104 + 1) >> 0x1f;
      uVar16 = *(uint *)((this->TileIndexPerChunk).AllocatorInstance.Data + lVar17 * 4);
      local_f4 = uVar16;
      do {
        uVar8 = 0;
        if ((int)(local_104 + 1) < (this->TileIndexPerChunk).ArrayNum) {
          uVar8 = local_c0;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        if (*(uint *)((this->TileIndexPerChunk).AllocatorInstance.Data + lVar17 * 4 + 4) <= uVar16)
        break;
        uVar14 = 0;
        if (this->NumLayers != 0) {
          do {
            bVar2 = this->LayerTypes[uVar14].Value;
            uVar16 = ((uint)(iVar1 + -1 + GPixelFormats[bVar2].BlockSizeY) /
                     (uint)GPixelFormats[bVar2].BlockSizeY) *
                     ((uint)(iVar1 + -1 + GPixelFormats[bVar2].BlockSizeX) /
                     (uint)GPixelFormats[bVar2].BlockSizeX) * GPixelFormats[bVar2].BlockBytes;
            if (pFVar19[uVar14 + 0x84] == (FScriptContainerElement)0x5) {
              uVar8 = GetTileOffset_Legacy(this,local_104,local_f4);
              uVar9 = GetTileOffset_Legacy(this,local_104,local_f4 + 1);
              if (uVar9 < uVar8) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextTileOffset >= TileOffset",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureBuiltData.cpp"
                                   ,499,L"");
                pFVar19 = local_e0;
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
              else {
                pFVar19 = local_e0;
                if (uVar8 < uVar9) {
                  if (local_e8[0] < (int)uVar16) {
                    UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,uVar16 - local_e8[0],&local_f0,local_e8,local_e8 + 1);
                  }
                  else {
                    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
                    }
                    if ((int)uVar16 < local_e8[0]) {
                      uVar18 = local_e8[0] - uVar16;
                      if ((int)(uVar16 | uVar18) < 0) {
                        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x458,
                                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                          );
                        if (bVar6) {
                          pcVar3 = (code *)swi(3);
                          uVar7 = (*pcVar3)();
                          return (bool)uVar7;
                        }
                      }
                      if (uVar18 != 0) {
                        iVar10 = (local_e8[0] - uVar18) - uVar16;
                        iVar15 = local_e8[0];
                        if (iVar10 != 0) {
                          memmove(local_f0.Data + (int)uVar16,
                                  local_f0.Data + (int)uVar16 + (int)uVar18,(longlong)iVar10);
                          iVar15 = local_e8[0];
                        }
                        local_e8[0] = iVar15 - uVar18;
                      }
                    }
                  }
                  FVar5.Data = local_f0.Data;
                  FVar11 = FNameEntryId::FromValidEName((EName)local_a0);
                  local_b0 = *(uint *)CONCAT44(extraout_var,FVar11.Value);
                  uStack_ac = 0;
                  FVar4.Number = 0;
                  FVar4.ComparisonIndex.Value = local_b0;
                  bVar6 = FCompression::UncompressMemory
                                    (FVar4,FVar5.Data,(ulonglong)uVar16,
                                     (void *)((ulonglong)uVar8 + (longlong)local_a8),
                                     (ulonglong)(uVar9 - uVar8),COMPRESS_NoFlags,0);
                  this = local_c8;
                  pFVar19 = local_e0;
                  if (!bVar6) {
                    if (1 < (byte)LogTexture._0_1_) {
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogTexture);
                    }
                    local_108 = false;
                    this = local_c8;
                    goto LAB_148a20ee5;
                  }
                }
              }
            }
            uVar8 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar8;
            uVar16 = local_f4 + 1;
            local_f4 = uVar16;
          } while (uVar8 < this->NumLayers);
        }
        lVar17 = local_d8;
      } while (local_108 != false);
    }
LAB_148a20ee5:
    if (this_01 != (FBulkData *)0x0) {
      FBulkData::Unlock(this_01);
    }
    local_104 = local_104 + 1;
    local_d8 = local_d8 + 1;
    local_b8 = local_b8 + 0x90;
    if (local_108 == false) break;
  }
  if (local_d0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98);
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_108;
}

