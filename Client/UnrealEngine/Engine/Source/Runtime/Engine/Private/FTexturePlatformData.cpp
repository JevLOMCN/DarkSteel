// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticStruct @ 148876800

UScriptStruct * __cdecl FTexturePlatformData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTexturePlatformData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTexturePlatformData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTexturePlatformData,(UObject *)pUVar1,
                         L"TexturePlatformData");
  }
  return Z_Registration_Info_UScriptStruct_FTexturePlatformData.OuterSingleton;
}

// FTexturePlatformData @ 14887d400

FTexturePlatformData * __thiscall
FTexturePlatformData::FTexturePlatformData(FTexturePlatformData *this)

{
  this->SizeX = 0;
  this->SizeY = 0;
  this->PackedData = 0;
  this->PixelFormat = PF_Unknown;
  (this->OptData).ExtData = 0;
  (this->OptData).NumMipsInTail = 0;
  (this->Mips).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mips).Array.ArrayNum = 0;
  (this->Mips).Array.ArrayMax = 0;
  this->VTData = (FVirtualTextureBuiltData *)0x0;
  (this->CPUCopy).Reference = (FSharedImage *)0x0;
  return this;
}

// ~FTexturePlatformData @ 14887ec10

void __thiscall FTexturePlatformData::~FTexturePlatformData(FTexturePlatformData *this)

{
  undefined1 *puVar1;
  int iVar2;
  FVirtualTextureBuiltData *pFVar3;
  FScriptContainerElement *pFVar4;
  FSharedImage *pFVar5;
  
  pFVar3 = this->VTData;
  if (pFVar3 != (FVirtualTextureBuiltData *)0x0) {
    pFVar4 = (pFVar3->TileOffsetInChunk).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->TileIndexPerMip).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->TileIndexPerChunk).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    DestructItems<FVirtualTextureTileOffsetData,int>
              ((FVirtualTextureTileOffsetData *)(pFVar3->TileOffsetData).AllocatorInstance.Data,
               (pFVar3->TileOffsetData).ArrayNum);
    pFVar4 = (pFVar3->TileOffsetData).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->BaseOffsetPerMip).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->ChunkIndexPerMip).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->TileDataOffsetPerLayer).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    DestructItems<FVirtualTextureDataChunk,int>
              ((FVirtualTextureDataChunk *)(pFVar3->Chunks).AllocatorInstance.Data,
               (pFVar3->Chunks).ArrayNum);
    pFVar4 = (pFVar3->Chunks).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x128);
  }
  pFVar5 = (this->CPUCopy).Reference;
  if (pFVar5 != (FSharedImage *)0x0) {
    (this->CPUCopy).Reference = (FSharedImage *)0x0;
    puVar1 = &pFVar5->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar5 = (this->CPUCopy).Reference;
  if (pFVar5 != (FSharedImage *)0x0) {
    puVar1 = &pFVar5->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>(&this->Mips);
  return;
}

// CanBeLoaded @ 148884820

bool __thiscall FTexturePlatformData::CanBeLoaded(FTexturePlatformData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Mips).Array.AllocatorInstance.Data;
  iVar2 = (this->Mips).Array.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Mips).Array.ArrayNum != iVar2) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(char *)(*(longlong *)pFVar4 + 0x1b) != '\0') ||
       (bVar3 = FBulkData::CanLoadFromDisk((FBulkData *)(*(longlong *)pFVar4 + 0x20)), bVar3)) {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// CanUseCookedDataPath @ 1488848e0

bool __thiscall FTexturePlatformData::CanUseCookedDataPath(FTexturePlatformData *this)

{
  return true;
}

// GetLayerPixelFormat @ 14888df00

EPixelFormat __thiscall
FTexturePlatformData::GetLayerPixelFormat(FTexturePlatformData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  
  if (this->VTData == (FVirtualTextureBuiltData *)0x0) {
    if (param_1 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayerIndex == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                         ,0xab9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return this->PixelFormat;
  }
  if (this->VTData->NumLayers <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LayerIndex < VTData->NumLayers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                       ,0xab6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return this->VTData->LayerTypes[param_1].Value;
}

// GetNumNonOptionalMips @ 14888ec60

int __thiscall FTexturePlatformData::GetNumNonOptionalMips(FTexturePlatformData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar7 = (this->Mips).Array.AllocatorInstance.Data;
  iVar2 = (this->Mips).Array.ArrayNum;
  uVar6 = (ulonglong)iVar2;
  pFVar1 = pFVar7 + uVar6 * 8;
  while( true ) {
    iVar5 = (int)uVar6;
    if ((this->Mips).Array.ArrayNum != iVar2) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar1) break;
    lVar3 = *(longlong *)pFVar7;
    if ((*(char *)(lVar3 + 0x1b) == '\0') || ((*(byte *)(lVar3 + 0x1c) & 1) != 0)) {
      uVar4 = FBulkData::GetBulkDataFlags((FBulkData *)(lVar3 + 0x20));
      if ((uVar4 >> 0xb & 1) == 0) break;
    }
    uVar6 = (ulonglong)(iVar5 - 1);
    pFVar7 = pFVar7 + 8;
  }
  if ((iVar5 == 0) && ((this->Mips).Array.ArrayNum != 0)) {
    iVar5 = 1;
  }
  return iVar5;
}

// GetNumNonStreamingMips @ 14888ed40

int __thiscall FTexturePlatformData::GetNumNonStreamingMips(FTexturePlatformData *this,bool param_1)

{
  FBulkData *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_res18 [16];
  
  pFVar6 = (this->Mips).Array.AllocatorInstance.Data;
  iVar5 = (this->Mips).Array.ArrayNum;
  uVar8 = (ulonglong)iVar5;
  pFVar1 = pFVar6 + uVar8 * 8;
  while( true ) {
    if ((this->Mips).Array.ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    iVar7 = (int)uVar8;
    if (pFVar6 == pFVar1) break;
    if (*(char *)(*(longlong *)pFVar6 + 0x1b) == '\0') {
      this_00 = (FBulkData *)(*(longlong *)pFVar6 + 0x20);
      uVar4 = FBulkData::GetBulkDataFlags(this_00);
      if (((uVar4 >> 8 & 1) == 0) &&
         (uVar4 = FBulkData::GetBulkDataFlags(this_00), (uVar4 & 1) == 0)) break;
    }
    uVar8 = (ulonglong)(iVar7 - 1);
    pFVar6 = pFVar6 + 8;
  }
  if ((iVar7 == 0) && ((this->Mips).Array.ArrayNum != 0)) {
    iVar7 = 1;
  }
  else if (((!param_1) && (iVar7 != (this->Mips).Array.ArrayNum)) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumNonStreamingMips == Mips.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                              ,0xa68,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  return iVar7;
}

// GetNumVTMips @ 14888ef90

int __thiscall FTexturePlatformData::GetNumVTMips(FTexturePlatformData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->VTData != (FVirtualTextureBuiltData *)0x0) {
    return this->VTData->NumMips;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("VTData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                     ,0xaae,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return this->VTData->NumMips;
}

// GetPayloadSize @ 14888f190

long64 __thiscall FTexturePlatformData::GetPayloadSize(FTexturePlatformData *this,int param_1)

{
  TArray<FVirtualTextureTileOffsetData,TSizedDefaultAllocator<32>_> *pTVar1;
  EPixelFormat EVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  long64 lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  FVirtualTextureBuiltData *pFVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  
  pFVar13 = this->VTData;
  uVar10 = 0;
  uVar16 = 0;
  uVar12 = (ulonglong)param_1;
  if (pFVar13 == (FVirtualTextureBuiltData *)0x0) {
    if (param_1 < (this->Mips).Array.ArrayNum) {
      lVar15 = uVar12 * 8;
      do {
        uVar11 = (uint)uVar12;
        iVar4 = GPixelFormats[this->PixelFormat].BlockSizeX;
        uVar16 = 0;
        if ((int)uVar11 < (this->Mips).Array.ArrayNum) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          lVar9 = (*pcVar7)();
          return lVar9;
        }
        uVar3 = *(ushort *)
                 (*(longlong *)((this->Mips).Array.AllocatorInstance.Data + lVar15) + 0x48);
        iVar5 = GPixelFormats[this->PixelFormat].BlockSizeY;
        uVar16 = 0;
        if ((int)uVar11 < (this->Mips).Array.ArrayNum) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          lVar9 = (*pcVar7)();
          return lVar9;
        }
        EVar2 = this->PixelFormat;
        uVar14 = this->PackedData & 0x1fffffff;
        pFVar6 = (this->Mips).Array.AllocatorInstance.Data + lVar15;
        uVar16 = 1;
        if (1 < uVar14) {
          uVar16 = uVar14;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        lVar15 = lVar15 + 8;
        uVar10 = uVar10 + (longlong)
                          ((int)((*(ushort *)(*(longlong *)pFVar6 + 0x4a) - 1) + iVar5) / iVar5) *
                          (longlong)
                          ((int)((uVar16 - 1) + GPixelFormats[EVar2].BlockSizeZ) /
                          GPixelFormats[EVar2].BlockSizeZ) *
                          (longlong)GPixelFormats[EVar2].BlockBytes *
                          (longlong)((int)((uVar3 - 1) + iVar4) / iVar4);
      } while ((int)(uVar11 + 1) < (this->Mips).Array.ArrayNum);
    }
  }
  else {
    if ((uint)param_1 < pFVar13->NumMips) {
      do {
        uVar11 = (uint)uVar12;
        uVar16 = 0;
        if ((int)uVar11 < (pFVar13->TileOffsetData).ArrayNum) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          lVar9 = (*pcVar7)();
          return lVar9;
        }
        pFVar6 = (pFVar13->TileOffsetData).AllocatorInstance.Data;
        uVar16 = 0;
        if ((int)uVar11 < (pFVar13->TileOffsetData).ArrayNum) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          lVar9 = (*pcVar7)();
          return lVar9;
        }
        pTVar1 = &pFVar13->TileOffsetData;
        uVar12 = (ulonglong)(uVar11 + 1);
        pFVar13 = this->VTData;
        uVar16 = (int)uVar10 +
                 *(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x30) *
                 *(int *)(pFVar6 + (longlong)(int)uVar11 * 0x30 + 4);
        uVar10 = (ulonglong)uVar16;
      } while (uVar11 + 1 < pFVar13->NumMips);
    }
    iVar4 = pFVar13->TileSize + pFVar13->TileBorderSize * 2;
    EVar2 = this->PixelFormat;
    uVar10 = (longlong)
             ((GPixelFormats[EVar2].BlockSizeX + -1 + iVar4) / GPixelFormats[EVar2].BlockSizeX) *
             (longlong)
             ((GPixelFormats[EVar2].BlockSizeY + -1 + iVar4) / GPixelFormats[EVar2].BlockSizeY) *
             (longlong)GPixelFormats[EVar2].BlockBytes * (ulonglong)pFVar13->NumLayers *
             (longlong)(int)uVar16;
  }
  return uVar10;
}

// IsReadyForAsyncPostLoad @ 148895d00

bool __thiscall FTexturePlatformData::IsReadyForAsyncPostLoad(FTexturePlatformData *this)

{
  return true;
}

// Serialize @ 148898210

void __thiscall
FTexturePlatformData::Serialize(FTexturePlatformData *this,FArchive *param_1,UTexture *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(longlong *)&param_1->field_0x68 != 0) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsCooking()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                       ,0xd5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SerializePlatformData(param_1,this,param_2,None,true);
  return;
}

// SerializeCooked @ 148899040

void __thiscall
FTexturePlatformData::SerializeCooked
          (FTexturePlatformData *this,FArchive *param_1,UTexture *param_2,bool param_3,bool param_4)

{
  int iVar1;
  FVirtualTextureBuiltData *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  SerializePlatformData(param_1,this,param_2,param_3 * '\x02' + Cooked,param_4);
  if ((param_1->field_0x28 & 1) != 0) {
    if ((this->Mips).Array.ArrayNum < 1) {
      pFVar2 = this->VTData;
      if (pFVar2 != (FVirtualTextureBuiltData *)0x0) {
        this->SizeX = pFVar2->Width;
        this->SizeY = pFVar2->Height;
      }
    }
    else {
      if ((this->Mips).Array.ArrayNum < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this->SizeX = (uint)*(ushort *)(*(longlong *)(this->Mips).Array.AllocatorInstance.Data + 0x48)
      ;
      if ((this->Mips).Array.ArrayNum < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this->SizeY = (uint)*(ushort *)(*(longlong *)(this->Mips).Array.AllocatorInstance.Data + 0x4a)
      ;
      if (param_2 != (UTexture *)0x0) {
        pUVar5 = Z_Construct_UClass_UVolumeTexture_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          if ((this->Mips).Array.ArrayNum < 1) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          this->PackedData =
               (uint)*(ushort *)(*(longlong *)(this->Mips).Array.AllocatorInstance.Data + 0x4c) |
               this->PackedData & 0xe0000000;
          return;
        }
      }
    }
  }
  return;
}

// SetOptData @ 14889b5a0

void __thiscall
FTexturePlatformData::SetOptData(FTexturePlatformData *this,FOptTexturePlatformData param_1)

{
  if ((param_1.ExtData == 0) && (param_1.NumMipsInTail == 0)) {
    this->PackedData = this->PackedData & 0xbfffffff;
    this->PackedData = this->PackedData;
    this->OptData = param_1;
    return;
  }
  this->PackedData = this->PackedData & 0xbfffffff;
  this->PackedData = this->PackedData | 0x40000000;
  this->OptData = param_1;
  return;
}

// TryLoadMips @ 14889e040

bool __thiscall
FTexturePlatformData::TryLoadMips
          (FTexturePlatformData *this,int param_1,void **param_2,TStringView<wchar_t> *param_3)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.Size = param_3->Size;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  bVar1 = TryLoadMipsWithSizes(this,param_1,param_2,(long64 *)0x0,&local_18);
  return bVar1;
}

// TryLoadMipsWithSizes @ 14889e070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTexturePlatformData::TryLoadMipsWithSizes
          (FTexturePlatformData *this,int param_1,void **param_2,long64 *param_3,
          TStringView<wchar_t> *param_4)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  long64 lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  void **ppvVar10;
  longlong lVar11;
  int iVar12;
  FBulkData *pFVar13;
  ulonglong uVar14;
  bool bVar15;
  int local_res8;
  FString local_60 [2];
  
  uVar8 = (ulonglong)param_1;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2535,"FTexturePlatformData::TryLoadMips",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
               ,0x9e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2535);
  }
  uVar9 = (this->OptData).NumMipsInTail;
  lVar7 = 0;
  iVar12 = uVar9 - 1;
  if ((int)uVar9 < 1) {
    iVar12 = 0;
  }
  iVar12 = (this->Mips).Array.ArrayNum - iVar12;
  if ((iVar12 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadableMips >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                         ,0x9eb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar9 = 0;
  lVar11 = (longlong)iVar12;
  if (0 < param_1) {
    do {
      if (lVar11 <= lVar7) break;
      uVar5 = 0;
      if ((int)uVar9 < (this->Mips).Array.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar13 = (FBulkData *)
                (*(longlong *)((this->Mips).Array.AllocatorInstance.Data + lVar7 * 8) + 0x20);
      bVar3 = FBulkData::IsBulkDataLoaded(pFVar13);
      if (bVar3) {
        FBulkData::Lock(pFVar13,1);
        FBulkData::Unlock(pFVar13);
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar9 < param_1);
  }
  local_res8 = 0;
  uVar9 = param_1;
  for (uVar14 = uVar8; (longlong)uVar14 < lVar11; uVar14 = uVar14 + 1) {
    uVar5 = 0;
    if ((int)uVar9 < (this->Mips).Array.ArrayNum) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar13 = (FBulkData *)
              (*(longlong *)((this->Mips).Array.AllocatorInstance.Data + uVar14 * 8) + 0x20);
    lVar6 = FBulkData::GetBulkDataSize(pFVar13);
    pTVar2 = CVarSetTextureStreaming.Ref;
    if (0 < lVar6) {
      if (param_2 != (void **)0x0) {
        bVar3 = IsInParallelGameThread();
        if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
          lVar7 = 0;
        }
        else {
          lVar7 = 4;
        }
        if (((*(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0) &&
            (1 < (byte)LogTexture._0_1_)) &&
           (uVar5 = FBulkData::GetBulkDataFlags(pFVar13), (uVar5 >> 8 & 1) != 0)) {
          FBulkData::GetDebugName(pFVar13,local_60);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        FBulkData::GetCopy(pFVar13,param_2 + (int)(uVar9 - param_1),true);
      }
      if (param_3 != (long64 *)0x0) {
        param_3[uVar14 - uVar8] = lVar6;
      }
      local_res8 = local_res8 + 1;
    }
    uVar9 = uVar9 + 1;
  }
  if (local_res8 == iVar12 - param_1) {
    bVar3 = true;
  }
  else {
    if (5 < (byte)LogTexture._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    }
    if ((longlong)uVar8 < lVar11) {
      lVar7 = uVar8 * 8;
      lVar11 = lVar11 - uVar8;
      ppvVar10 = param_2;
      do {
        uVar5 = (uint)uVar8;
        uVar9 = 0;
        if ((int)uVar5 < (this->Mips).Array.ArrayNum) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (5 < (byte)LogTexture._0_1_) {
          FBulkData::GetBulkDataSize
                    ((FBulkData *)
                     (*(longlong *)
                       ((this->Mips).Array.AllocatorInstance.Data + (lVar7 - (longlong)param_2) +
                       (longlong)ppvVar10) + 0x20));
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
        }
        if ((param_2 != (void **)0x0) && (*ppvVar10 != (void *)0x0)) {
          FMemory::Free(*ppvVar10);
          *ppvVar10 = (void *)0x0;
        }
        uVar8 = (ulonglong)(uVar5 + 1);
        ppvVar10 = ppvVar10 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    bVar3 = false;
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

