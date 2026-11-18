// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetBorderSize @ 147ebeec0

uint __thiscall
FMaterialCacheVirtualTextureResource::GetBorderSize(FMaterialCacheVirtualTextureResource *this)

{
  return this->TileBorderSize;
}

// GetFormat @ 147ec0210

EPixelFormat __thiscall
FMaterialCacheVirtualTextureResource::GetFormat
          (FMaterialCacheVirtualTextureResource *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  uint uVar4;
  ForElementType<FMaterialCacheLayer> FVar5;
  
  uVar4 = 0;
  if ((int)param_1 < (this->TagLayout).Layers.ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  FVar5 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FMaterialCacheLayer>)0x0) {
    FVar5 = (ForElementType<FMaterialCacheLayer>)&(this->TagLayout).Layers;
  }
  return ((uchar *)((longlong)FVar5 + 1))[(longlong)(int)param_1 * 0x18];
}

// GetNumLayers @ 147ec2520

uint __thiscall
FMaterialCacheVirtualTextureResource::GetNumLayers(FMaterialCacheVirtualTextureResource *this)

{
  return (this->TagLayout).Layers.ArrayNum;
}

// GetNumMips @ 147ec2550

uint __thiscall
FMaterialCacheVirtualTextureResource::GetNumMips(FMaterialCacheVirtualTextureResource *this)

{
  return this->MaxLevel + 1;
}

// GetNumTilesX @ 147ec2560

uint __thiscall
FMaterialCacheVirtualTextureResource::GetNumTilesX(FMaterialCacheVirtualTextureResource *this)

{
  return (this->TileCount).field0_0x0._s_0.X;
}

// GetNumTilesY @ 147ec2570

uint __thiscall
FMaterialCacheVirtualTextureResource::GetNumTilesY(FMaterialCacheVirtualTextureResource *this)

{
  return (this->TileCount).field0_0x0._s_0.Y;
}

// GetSizeInBlocks @ 147ec61c0

TIntPoint<int> __thiscall
FMaterialCacheVirtualTextureResource::GetSizeInBlocks(FMaterialCacheVirtualTextureResource *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined4 *)in_RDX = 1;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return (TIntPoint<int>)in_RDX;
}

// GetTileSize @ 147ec6d00

uint __thiscall
FMaterialCacheVirtualTextureResource::GetTileSize(FMaterialCacheVirtualTextureResource *this)

{
  return this->TileSize;
}

// InitRHI @ 147ecbd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheVirtualTextureResource::InitRHI
          (FMaterialCacheVirtualTextureResource *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  FRHIResource *this_00;
  FName FVar2;
  ForElementType<FMaterialCacheLayer> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRHIResource *this_01;
  IRendererModule *pIVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  ForElementType<FMaterialCacheLayer> FVar12;
  uint uVar13;
  bool *pbVar14;
  longlong lVar15;
  undefined1 auStack_178 [32];
  FVTProducerDescription *local_158;
  longlong local_150;
  FSamplerStateInitializerRHI local_148;
  undefined1 local_128 [16];
  FVTProducerDescription local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148.AddressU.Value = '\0';
  local_148.AddressV.Value = '\0';
  local_148.AddressW.Value = '\0';
  local_148.MipBias = 0.0;
  local_148.MinMipLevel = 0.0;
  local_148.MaxMipLevel = 3.4028235e+38;
  local_148.MaxAnisotropy = 0;
  local_148.BorderColor = 0;
  local_148.SamplerComparisonFunction.Value = '\0';
  local_148.Filter.Value = '\x01';
  this_01 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_148);
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != this_01) {
    this->_padding_ = (longlong)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  FVTProducerDescription::FVTProducerDescription(&local_118);
  FVar2 = (FName)this->_padding_;
  local_118.Name = FVar2;
  local_118.FullNameHash = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar11 = (this->TagLayout).Layers.ArrayNum;
  local_118.FullNameHash = local_118.FullNameHash + FVar2.Number;
  local_118.bContinuousUpdate = false;
  uVar13 = 0;
  local_118.TileSize = this->TileSize;
  local_118.TileBorderSize = this->TileBorderSize;
  local_118.BlockWidthInTiles = (this->TileCount).field0_0x0._s_0.X;
  local_118.BlockHeightInTiles = (this->TileCount).field0_0x0._s_0.Y;
  local_118.MaxLevel = (uchar)this->MaxLevel;
  local_118.NumTextureLayers = (uchar)(this->TagLayout).Layers.ArrayNum;
  local_118.Dimensions = '\x02';
  local_118.DepthInTiles = 1;
  local_118.NumPhysicalGroups = '\x01';
  local_118.Priority = Normal;
  if (0 < iVar11) {
    pbVar14 = local_118.bIsLayerSRGB;
    lVar15 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar13 < iVar11) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_150 = (longlong)iVar11;
        local_158 = (FVTProducerDescription *)(longlong)(int)uVar13;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar3 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMaterialCacheLayer>)&(this->TagLayout).Layers;
      if (FVar3 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar12 = FVar3;
      }
      iVar11 = (this->TagLayout).Layers.ArrayNum;
      ((TEnumAsByte<EPixelFormat> *)(pbVar14 + -0x89))->Value =
           *(uchar *)(lVar15 + 1 + (longlong)FVar12);
      uVar6 = 0;
      if ((int)uVar13 < iVar11) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_158 = (FVTProducerDescription *)(longlong)(int)uVar13;
        local_150 = (longlong)iVar11;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar3 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMaterialCacheLayer>)&(this->TagLayout).Layers;
      if (FVar3 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar12 = FVar3;
      }
      uVar13 = uVar13 + 1;
      lVar1 = lVar15 + 3;
      lVar15 = lVar15 + 0x18;
      iVar11 = (this->TagLayout).Layers.ArrayNum;
      *pbVar14 = *(bool *)(lVar1 + (longlong)FVar12);
      pbVar14[9] = false;
      pbVar14 = pbVar14 + 1;
    } while ((int)uVar13 < iVar11);
  }
  pIVar7 = GetRendererModule();
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x138))(pIVar7);
  local_158 = &local_118;
  uVar9 = (**(code **)(*plVar8 + 0x40))
                    (plVar8,this->Scene,(this->PrimitiveComponentId).PrimIDValue,&this->TagLayout);
  pIVar7 = GetRendererModule();
  local_158 = (FVTProducerDescription *)uVar9;
  puVar10 = (undefined4 *)
            (**(code **)((longlong)*pIVar7 + 0x160))(pIVar7,local_128,param_1,&local_118);
  *(undefined4 *)&this->_padding_ = *puVar10;
  return;
}

