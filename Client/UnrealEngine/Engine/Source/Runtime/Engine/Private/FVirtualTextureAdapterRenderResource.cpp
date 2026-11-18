// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FVirtualTextureAdapterRenderResource @ 1489b4810

FVirtualTextureAdapterRenderResource * __thiscall
FVirtualTextureAdapterRenderResource::FVirtualTextureAdapterRenderResource
          (FVirtualTextureAdapterRenderResource *this,UVirtualTextureAdapter *param_1,
          UTexture *param_2,int param_3,int param_4,EPixelFormat param_5,bool param_6)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  EPixelFormat EVar4;
  bool bVar5;
  uint uVar6;
  UPackage *pUVar7;
  FTextureResource *pFVar8;
  UClass *pUVar9;
  EPixelFormat EVar10;
  uint uVar11;
  float fVar12;
  
  FVirtualTexture2DResource::FVirtualTexture2DResource((FVirtualTexture2DResource *)this);
  this->_padding_ = (longlong)&___7FVirtualTextureAdapterRenderResource__6B_;
  this->NumSourceMips = 1;
  this->SourceResource = (FTextureResource *)0x0;
  this->Format = PF_Unknown;
  this->TileSize = 0;
  this->TileBorderSize = 0;
  this->NumTilesX = 0;
  this->NumTilesY = 0;
  this->MaxLevel = 0;
  this->_padding_ = param_1->_padding_;
  pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  this->_padding_ = pUVar7->_padding_;
  pFVar8 = UTexture::GetResource(param_2);
  EVar10 = PF_Unknown;
  this->SourceResource = pFVar8;
  EVar4 = PF_Unknown;
  if (param_2 != (UTexture *)0x0) {
    pUVar9 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) {
      EVar4 = EVar10;
      if (param_2 != (UTexture *)0x0) {
        pUVar9 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) {
          EVar4 = (**(code **)(param_2->_padding_ + 0x3d0))(param_2);
          *(byte *)((longlong)&this->_padding_ + 6) = param_2->SRGB;
        }
      }
    }
    else {
      EVar4 = UTexture2D::GetPixelFormat((UTexture2D *)param_2,0);
      uVar6 = UTexture2D::GetNumMips((UTexture2D *)param_2);
      this->NumSourceMips = uVar6;
      *(byte *)((longlong)&this->_padding_ + 6) = param_2->SRGB;
    }
  }
  EVar10 = EVar4;
  if (param_5 != PF_Unknown) {
    EVar10 = param_5;
  }
  bVar5 = IsBlockCompressedFormat(EVar4);
  if (!bVar5) {
    bVar5 = IsInteger(EVar4);
    if (!bVar5) {
      bVar5 = IsInteger(EVar10);
      if (!bVar5) goto LAB_1489b4971;
    }
  }
  EVar10 = EVar4;
LAB_1489b4971:
  *(bool *)((longlong)&this->_padding_ + 1) = param_6;
  this->TileBorderSize = param_4;
  this->Format = EVar10;
  this->TileSize = param_3;
  fVar12 = (float)(**(code **)(param_2->_padding_ + 0x368))(param_2);
  uVar6 = this->TileSize;
  this->NumTilesX = (uint)((int)(longlong)fVar12 + -1 + param_3) / (uint)param_3;
  fVar12 = (float)(**(code **)(param_2->_padding_ + 0x370))(param_2);
  uVar6 = ((int)(longlong)fVar12 + -1 + uVar6) / uVar6;
  this->NumTilesY = uVar6;
  if (uVar6 < this->NumTilesX) {
    uVar6 = this->NumTilesX;
  }
  uVar11 = 1;
  if (uVar6 != 0) {
    uVar11 = uVar6;
  }
  uVar1 = (ulonglong)(uVar11 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  this->MaxLevel = (uint)lVar3;
  return this;
}

// GetBorderSize @ 1489e6770

uint __thiscall
FVirtualTextureAdapterRenderResource::GetBorderSize(FVirtualTextureAdapterRenderResource *this)

{
  return this->TileBorderSize;
}

// GetFormat @ 1489e9560

EPixelFormat __thiscall
FVirtualTextureAdapterRenderResource::GetFormat
          (FVirtualTextureAdapterRenderResource *this,uint param_1)

{
  return this->Format;
}

// GetNumLayers @ 1489ead20

uint __thiscall
FVirtualTextureAdapterRenderResource::GetNumLayers(FVirtualTextureAdapterRenderResource *this)

{
  return 1;
}

// GetNumMips @ 1489ead40

uint __thiscall
FVirtualTextureAdapterRenderResource::GetNumMips(FVirtualTextureAdapterRenderResource *this)

{
  return this->MaxLevel + 1;
}

// GetNumTilesX @ 1489ead90

uint __thiscall
FVirtualTextureAdapterRenderResource::GetNumTilesX(FVirtualTextureAdapterRenderResource *this)

{
  return this->NumTilesX;
}

// GetNumTilesY @ 1489eada0

uint __thiscall
FVirtualTextureAdapterRenderResource::GetNumTilesY(FVirtualTextureAdapterRenderResource *this)

{
  return this->NumTilesY;
}

// GetSizeInBlocks @ 1489ed0b0

TIntPoint<int> __thiscall
FVirtualTextureAdapterRenderResource::GetSizeInBlocks(FVirtualTextureAdapterRenderResource *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined4 *)in_RDX = 1;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return (TIntPoint<int>)in_RDX;
}

// GetTileSize @ 1489eedd0

uint __thiscall
FVirtualTextureAdapterRenderResource::GetTileSize(FVirtualTextureAdapterRenderResource *this)

{
  return this->TileSize;
}

// InitRHI @ 1489f33c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureAdapterRenderResource::InitRHI
          (FVirtualTextureAdapterRenderResource *this,FRHICommandListBase *param_1)

{
  uint uVar1;
  FRHIResource *this_00;
  longlong *plVar2;
  FName FVar3;
  FRHITexture *pFVar4;
  FRHIResource *this_01;
  longlong lVar5;
  FRHITexture *pFVar6;
  IRendererModule *pIVar7;
  undefined4 *puVar8;
  uint uVar9;
  FRHITexture *pFVar10;
  bool bVar11;
  undefined1 auStack_168 [32];
  FRHITexture *local_148;
  FSamplerStateInitializerRHI local_138;
  undefined1 local_118 [16];
  FVTProducerDescription local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FVirtualTextureAdapterRenderResource::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId487,"FVirtualTextureAdapterRenderResource::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureAdapter.cpp"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FVirtualTextureAdapterRenderResource::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId487);
  }
  pFVar10 = (FRHITexture *)0x0;
  local_138.AddressU.Value = '\0';
  local_138.AddressV.Value = '\0';
  uVar9 = 0;
  local_138.BorderColor = 0;
  local_138.SamplerComparisonFunction.Value = '\0';
  local_138.AddressW.Value = '\0';
  local_138.MipBias = 0.0;
  local_138.MinMipLevel = 0.0;
  local_138.MaxMipLevel = 3.4028235e+38;
  local_138.MaxAnisotropy = 0;
  local_138.Filter.Value = '\x01';
  this_01 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_138);
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
  plVar2 = (longlong *)this->SourceResource->_padding_;
  if (plVar2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar2 + 0x20))();
    uVar9 = (uint)*(byte *)(lVar5 + 0x30);
  }
  uVar1 = this->NumSourceMips;
  FVTProducerDescription::FVTProducerDescription(&local_108);
  FVar3 = (FName)this->_padding_;
  local_108.Name = FVar3;
  local_108.FullNameHash = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  local_108.FullNameHash = local_108.FullNameHash + FVar3.Number;
  local_108.bContinuousUpdate = false;
  local_108.bRequiresSinglePhysicalPool = *(bool *)((longlong)&this->_padding_ + 1);
  local_108.TileSize = this->TileSize;
  local_108.TileBorderSize = this->TileBorderSize;
  local_108.BlockWidthInTiles = this->NumTilesX;
  local_108.BlockHeightInTiles = this->NumTilesY;
  local_108.MaxLevel = (uchar)this->MaxLevel;
  local_108.LayerFormat[0].Value = this->Format;
  local_108.Dimensions = '\x02';
  local_108.DepthInTiles = 1;
  local_108.NumTextureLayers = '\x01';
  local_108.NumPhysicalGroups = '\x01';
  local_108.Priority = Normal;
  pFVar6 = ::operator_new(0x110);
  if (pFVar6 != (FRHITexture *)0x0) {
    pFVar4 = (FRHITexture *)this->SourceResource->_padding_;
    if ((pFVar4 != (FRHITexture *)0x0) && ((pFVar4->TextureDesc).Dimension == Texture2D)) {
      pFVar10 = pFVar4;
    }
    pFVar6->_padding_ = (longlong)&___7FVirtualTextureAdapterProducer__6B_;
    FVirtualTextureAdapterFinalizer::FVirtualTextureAdapterFinalizer
              ((FVirtualTextureAdapterFinalizer *)&pFVar6->_padding_,param_1,pFVar10,&local_108);
    (pFVar6->TextureDesc).Extent.field0_0x0._s_0.Y = uVar1 - uVar9;
    pFVar10 = pFVar6;
  }
  pIVar7 = GetRendererModule();
  local_148 = pFVar10;
  puVar8 = (undefined4 *)
           (**(code **)((longlong)*pIVar7 + 0x160))(pIVar7,local_118,param_1,&local_108);
  *(undefined4 *)&this->_padding_ = *puVar8;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

