// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// GetVirtualTexture2DResource @ 147ec8930

FVirtualTexture2DResource * __thiscall
FVirtualTexture2DResource::GetVirtualTexture2DResource(FVirtualTexture2DResource *this)

{
  return this;
}

// GetVirtualTexture2DResource @ 147ec8940

FVirtualTexture2DResource * __thiscall
FVirtualTexture2DResource::GetVirtualTexture2DResource(FVirtualTexture2DResource *this)

{
  return this;
}

// FVirtualTexture2DResource @ 14887d500

FVirtualTexture2DResource * __thiscall
FVirtualTexture2DResource::FVirtualTexture2DResource
          (FVirtualTexture2DResource *this,UTexture2D *param_1,FVirtualTextureBuiltData *param_2,
          int param_3)

{
  ulonglong uVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  FRHIResource *this_00;
  FRHIResource *this_01;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  ETextureSamplerFilter EVar10;
  EVTProducerPriority EVar11;
  uint uVar12;
  FVirtualTexture2DResource *pFVar13;
  UPackage *pUVar14;
  FString *pFVar15;
  UDeviceProfileManager *this_02;
  UDeviceProfile *this_03;
  UTextureLODSettings *this_04;
  FTextureLODGroup *pFVar16;
  ETextureCreateFlags EVar17;
  wchar_t *pwVar18;
  uchar uVar19;
  uchar uVar20;
  int iVar21;
  uint uVar22;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  FTexture::FTexture((FTexture *)this);
  uVar20 = '\0';
  this->_padding_ = 0;
  (this->TextureName).ComparisonIndex = 0;
  (this->TextureName).Number = 0;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  iVar21 = 0;
  this->FullNameHash = 0;
  this->Filter = '\0';
  this->AddressU = '\0';
  uVar19 = '\0';
  (this->AddressV).Value = '\0';
  this->TexCreateFlags = None;
  this->bSinglePhysicalSpace = false;
  this->bRequiresSinglePhysicalPool = false;
  this->FirstMipToUse = 0;
  this->VTData = (FVirtualTextureBuiltData *)0x0;
  (this->ProducerHandle).PackedValue = 0;
  this->_padding_ = (longlong)&___7FVirtualTexture2DResource__6B_;
  this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  if ((param_1 == (UTexture2D *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                         ,0x60c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FVirtualTexture2DResource *)(*pcVar6)();
    return pFVar13;
  }
  *(byte *)((longlong)&this->_padding_ + 6) = *(byte *)((longlong)&param_1->_padding_ + 6) & 1;
  cVar2 = (char)param_1->_padding_;
  if (((byte)(cVar2 - 3U) < 2) || ((byte)(cVar2 - 8U) < 2)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = uVar9;
  this_00 = (FRHIResource *)this->_padding_;
  this_01 = *(FRHIResource **)(param_1->_padding_ + 0x20);
  if (this_00 != this_01) {
    this->_padding_ = (longlong)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  uVar7 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->TextureName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->TextureName).Number = uVar7;
  pUVar14 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  uVar7 = *(undefined4 *)((longlong)&pUVar14->_padding_ + 4);
  (this->PackageName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar14->_padding_;
  (this->PackageName).Number = uVar7;
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_38);
  pFVar15 = ::FString::ToLower(&local_38,&local_28);
  iVar4 = (pFVar15->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    iVar21 = iVar4 + -1;
  }
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar21,pwVar18);
  this->FullNameHash = uVar12;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this_02 = UDeviceProfileManager::Get(false);
  this_03 = UDeviceProfileManager::GetActiveProfile(this_02);
  this_04 = UDeviceProfile::GetTextureLODSettings(this_03);
  EVar10 = UTextureLODSettings::GetSamplerFilter(this_04,(UTexture *)param_1);
  (this->Filter).Value = EVar10;
  uVar3 = (param_1->AddressX).Value;
  if (uVar3 != '\0') {
    uVar19 = (uVar3 != '\x01') + '\x01';
  }
  (this->AddressU).Value = uVar19;
  uVar19 = (param_1->AddressY).Value;
  if (uVar19 != '\0') {
    uVar20 = (uVar19 != '\x01') + '\x01';
  }
  (this->AddressV).Value = uVar20;
  EVar17 = (ulonglong)(*(byte *)((longlong)&param_1->_padding_ + 6) & 1) << 4;
  this->TexCreateFlags = EVar17;
  EVar17 = (ulonglong)(~(uint)(*(byte *)((longlong)&param_1->_padding_ + 4) >> 1) & 1) << 0x14 |
           EVar17;
  this->TexCreateFlags = EVar17;
  this->TexCreateFlags = (ulonglong)(*(byte *)((longlong)&param_1->_padding_ + 6) & 2) << 5 | EVar17
  ;
  bVar8 = (bool)(**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  this->bSinglePhysicalSpace = bVar8;
  bVar8 = (bool)(**(code **)(param_1->_padding_ + 0x3d8))(param_1);
  this->bRequiresSinglePhysicalPool = bVar8;
  if ((param_1->_padding_ & 1) == 0) {
    pFVar16 = UTextureLODSettings::GetTextureLODGroup
                        (this_04,(uint)*(byte *)((longlong)&param_1->_padding_ + 7));
    EVar11 = pFVar16->VirtualTextureStreamingPriority;
  }
  else {
    EVar11 = *(EVTProducerPriority *)((longlong)&param_1->_padding_ + 3);
  }
  this->VirtualTextureStreamingPriority = EVar11;
  if ((param_2 == (FVirtualTextureBuiltData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InVTData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                         ,0x62a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FVirtualTexture2DResource *)(*pcVar6)();
    return pFVar13;
  }
  this->VTData = param_2;
  uVar12 = param_2->TileSize;
  uVar22 = ((param_2->Height - 1) + uVar12) / uVar12;
  uVar12 = ((param_2->Width - 1) + uVar12) / uVar12;
  if (uVar22 < uVar12) {
    uVar22 = uVar12;
  }
  uVar12 = 1;
  if (uVar22 != 0) {
    uVar12 = uVar22;
  }
  uVar1 = (ulonglong)(uVar12 - 1) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  if ((int)lVar5 < param_3) {
    param_3 = (int)lVar5;
  }
  this->FirstMipToUse = param_3;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = (undefined1)GMaxRHIFeatureLevel;
  return this;
}

// FVirtualTexture2DResource @ 14887d810

FVirtualTexture2DResource * __thiscall
FVirtualTexture2DResource::FVirtualTexture2DResource(FVirtualTexture2DResource *this)

{
  FTexture::FTexture((FTexture *)this);
  this->_padding_ = 0;
  (this->TextureName).ComparisonIndex = 0;
  (this->TextureName).Number = 0;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  this->Filter = '\0';
  this->AddressU = '\0';
  (this->AddressV).Value = '\0';
  (this->ProducerHandle).PackedValue = 0;
  this->_padding_ = (longlong)&___7FVirtualTexture2DResource__6B_;
  this->FullNameHash = 0;
  this->TexCreateFlags = None;
  this->bSinglePhysicalSpace = false;
  this->bRequiresSinglePhysicalPool = false;
  this->FirstMipToUse = 0;
  this->VTData = (FVirtualTextureBuiltData *)0x0;
  this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = (undefined1)GMaxRHIFeatureLevel;
  this->VirtualTextureStreamingPriority = Normal;
  return this;
}

// ~FVirtualTexture2DResource @ 14887ed60

void __thiscall
FVirtualTexture2DResource::~FVirtualTexture2DResource(FVirtualTexture2DResource *this)

{
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  return;
}

// AcquireAllocatedVT @ 1488831d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IAllocatedVirtualTexture * __thiscall
FVirtualTexture2DResource::AcquireAllocatedVT(FVirtualTexture2DResource *this)

{
  FVirtualTextureProducerHandle FVar1;
  code *pcVar2;
  bool bVar3;
  IAllocatedVirtualTexture *pIVar4;
  IRendererModule *this_00;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  FAllocatedVTDescription local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                       ,0x723,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IAllocatedVirtualTexture *)(*pcVar2)();
      return pIVar4;
    }
  }
  local_68.ProducerLayerIndex = (uchar  [8])this->AllocatedVT;
  if (local_68.ProducerLayerIndex == (uchar  [8])0x0) {
    local_68.field11_0x44.PackedFlags = 0;
    uVar6 = 0;
    local_68.Name.ComparisonIndex.Value = 0;
    local_68.Name.Number = 0;
    local_68.MaxSpaceSize = 0;
    local_68.IndirectionTextureSize = 0;
    local_68.ForceSpaceID = 0xff;
    local_68.AdaptiveLevelBias = '\0';
    local_68.ProducerHandle[0] = (FVirtualTextureProducerHandle)0x0;
    local_68.ProducerHandle[1] = (FVirtualTextureProducerHandle)0x0;
    local_68.ProducerHandle[2] = (FVirtualTextureProducerHandle)0x0;
    local_68.ProducerHandle[3] = (FVirtualTextureProducerHandle)0x0;
    local_68.ProducerHandle[4] = (FVirtualTextureProducerHandle)0x0;
    local_68.ProducerHandle[5] = (FVirtualTextureProducerHandle)0x0;
    local_68.ProducerHandle[6] = (FVirtualTextureProducerHandle)0x0;
    local_68.ProducerHandle[7] = (FVirtualTextureProducerHandle)0x0;
    local_68.Dimensions = '\x02';
    local_68.TileSize = (**(code **)(this->_padding_ + 0xd0))(this);
    local_68.TileBorderSize = (**(code **)(this->_padding_ + 0xd8))(this);
    local_68.NumTextureLayers = (**(code **)(this->_padding_ + 200))(this);
    local_68.field11_0x44.PackedFlags =
         (this->bSinglePhysicalSpace & 1U) * '\x02' | local_68.field11_0x44.PackedFlags & 0xfd;
    if (local_68.NumTextureLayers != 0) {
      FVar1 = this->ProducerHandle;
      do {
        local_68.ProducerHandle[uVar6] = FVar1;
        local_68.ProducerLayerIndex[uVar6] = (uchar)uVar6;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < local_68.NumTextureLayers);
    }
    this_00 = GetRendererModule();
    local_68.ProducerLayerIndex =
         (uchar  [8])IRendererModule::AllocateVirtualTexture(this_00,&local_68);
    this->AllocatedVT = (IAllocatedVirtualTexture *)local_68.ProducerLayerIndex;
  }
  return (IAllocatedVirtualTexture *)local_68.ProducerLayerIndex;
}

// GetAllocatedvAddress @ 14888c9b0

uint __thiscall FVirtualTexture2DResource::GetAllocatedvAddress(FVirtualTexture2DResource *this)

{
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    return this->AllocatedVT->VirtualAddress;
  }
  return 0xffffffff;
}

// GetBorderSize @ 14888d0f0

uint __thiscall FVirtualTexture2DResource::GetBorderSize(FVirtualTexture2DResource *this)

{
  return this->VTData->TileBorderSize;
}

// GetFormat @ 14888db80

EPixelFormat __thiscall
FVirtualTexture2DResource::GetFormat(FVirtualTexture2DResource *this,uint param_1)

{
  return this->VTData->LayerTypes[param_1].Value;
}

// GetNumLayers @ 14888ea80

uint __thiscall FVirtualTexture2DResource::GetNumLayers(FVirtualTexture2DResource *this)

{
  return this->VTData->NumLayers;
}

// GetNumMips @ 14888ea90

uint __thiscall FVirtualTexture2DResource::GetNumMips(FVirtualTexture2DResource *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((int)this->VTData->NumMips <= this->FirstMipToUse) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7259708857365035163>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                       ,0x765,"(int32)VTData->GetNumMips() > FirstMipToUse");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->VTData->NumMips - this->FirstMipToUse;
}

// GetNumTilesX @ 14888ef10

uint __thiscall FVirtualTexture2DResource::GetNumTilesX(FVirtualTexture2DResource *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->VTData->TileSize;
  uVar2 = ((this->VTData->Width - 1) + uVar1) / uVar1 >> ((byte)this->FirstMipToUse & 0x1f);
  uVar1 = 1;
  if (1 < uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// GetNumTilesY @ 14888ef50

uint __thiscall FVirtualTexture2DResource::GetNumTilesY(FVirtualTexture2DResource *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->VTData->TileSize;
  uVar2 = ((this->VTData->Height - 1) + uVar1) / uVar1 >> ((byte)this->FirstMipToUse & 0x1f);
  uVar1 = 1;
  if (1 < uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// GetPhysicalTextureSize @ 14888f470

TIntPoint<int> __thiscall
FVirtualTexture2DResource::GetPhysicalTextureSize(FVirtualTexture2DResource *this,uint param_1)

{
  IAllocatedVirtualTexture *pIVar1;
  undefined4 uVar2;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar3;
  undefined4 in_R8D;
  
  TVar3._s_0.Y = in_register_00000014;
  TVar3._s_0.X = param_1;
  pIVar1 = this->AllocatedVT;
  if (pIVar1 != (IAllocatedVirtualTexture *)0x0) {
    uVar2 = (**(code **)(pIVar1->_padding_ + 0x20))(pIVar1,in_R8D);
    *(undefined4 *)TVar3 = uVar2;
    *(undefined4 *)((longlong)TVar3 + 4) = uVar2;
    return (TIntPoint<int>)TVar3;
  }
  *(undefined8 *)TVar3 = 0;
  return (TIntPoint<int>)TVar3;
}

// GetSizeInBlocks @ 148890750

TIntPoint<int> __thiscall
FVirtualTexture2DResource::GetSizeInBlocks(FVirtualTexture2DResource *this)

{
  FVirtualTextureBuiltData *pFVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  pFVar1 = this->VTData;
  *(uint *)in_RDX = pFVar1->WidthInBlocks;
  *(uint *)((longlong)in_RDX + 4) = pFVar1->HeightInBlocks;
  return (TIntPoint<int>)in_RDX;
}

// GetSizeX @ 148890810

uint __thiscall FVirtualTexture2DResource::GetSizeX(FVirtualTexture2DResource *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = this->VTData->Width >> ((byte)this->FirstMipToUse & 0x1f);
  uVar1 = 1;
  if (1 < uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// GetSizeY @ 148890940

uint __thiscall FVirtualTexture2DResource::GetSizeY(FVirtualTexture2DResource *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = this->VTData->Height >> ((byte)this->FirstMipToUse & 0x1f);
  uVar1 = 1;
  if (1 < uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// GetTileSize @ 1488935c0

uint __thiscall FVirtualTexture2DResource::GetTileSize(FVirtualTexture2DResource *this)

{
  return this->VTData->TileSize;
}

// InitRHI @ 148895360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTexture2DResource::InitRHI(FVirtualTexture2DResource *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FRHIResource *this_00;
  FVirtualTextureBuiltData *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uchar uVar10;
  uint uVar11;
  int iVar12;
  TEventRef<unsigned_int> TVar13;
  FRHIResource *this_01;
  FUploadingVirtualTexture *pFVar14;
  FUploadingVirtualTexture *pFVar15;
  IRendererModule *pIVar16;
  FVirtualTextureProducerHandle *pFVar17;
  FWriteBuffer *pFVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_1d8 [32];
  FUploadingVirtualTexture *local_1b8;
  FSamplerStateInitializerRHI local_1a0;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [8];
  FRHICommandListBase *local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  undefined4 *local_130;
  longlong local_128;
  FVTProducerDescription local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_150 = param_1;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1596,"FVirtualTexture2DResource::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
               ,0x63c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1596);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar13 = (TEventRef<unsigned_int>)&local_178;
    local_178 = 0;
  }
  else {
    local_180 = 0;
    TVar13 = FStringTrace::GetNameRef(&local_148);
  }
  pFVar15 = (FUploadingVirtualTexture *)0x0;
  uVar2 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_168 = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_168;
  }
  else {
    local_170 = 0;
    TVar13 = FStringTrace::GetNameRef(&local_140);
  }
  uVar3 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_160 = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_160;
  }
  else {
    TVar13 = FStringTrace::GetNameRef(&local_138);
  }
  uVar4 = *(undefined8 *)TVar13;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_130);
    bVar8 = true;
    *local_130 = (int)uVar2;
    local_130[1] = (int)uVar3;
    local_130[2] = (int)uVar4;
    *(undefined8 *)(local_128 + 0x28) = *(undefined8 *)(local_128 + 0x20);
  }
  bVar9 = VirtualTextureScalability::IsAnisotropicFilteringEnabled();
  local_1a0.MaxAnisotropy = 0;
  if (bVar9) {
    uVar19 = this->VTData->TileBorderSize;
    uVar11 = VirtualTextureScalability::GetMaxAnisotropy();
    local_1a0.MaxAnisotropy = uVar19;
    if ((int)uVar11 < (int)uVar19) {
      local_1a0.MaxAnisotropy = uVar11;
    }
  }
  local_1a0.AddressU.Value = (this->AddressU).Value;
  local_1a0.Filter.Value = (this->Filter).Value;
  local_1a0.AddressV.Value = (this->AddressV).Value;
  local_1a0.AddressW.Value = '\0';
  local_1a0.MipBias = 0.0;
  local_1a0.MinMipLevel = 0.0;
  local_1a0.MaxMipLevel = 3.4028235e+38;
  local_1a0.BorderColor = 0;
  local_1a0.SamplerComparisonFunction.Value = '\0';
  if ((local_1a0.MaxAnisotropy == 0) && ((byte)(local_1a0.Filter.Value - 3) < 2)) {
    local_1a0.Filter.Value = '\x01';
  }
  this_01 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_1a0);
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
  iVar20 = ~this->FirstMipToUse + this->VTData->NumMips;
  if ((iVar20 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxLevel >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                         ,0x663,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVTProducerDescription::FVTProducerDescription(&local_118);
  pFVar5 = this->VTData;
  local_118.Name = this->TextureName;
  local_118.FullNameHash = this->FullNameHash;
  local_118.Dimensions = '\x02';
  local_118.TileSize = pFVar5->TileSize;
  local_118.TileBorderSize = pFVar5->TileBorderSize;
  uVar19 = pFVar5->WidthInBlocks;
  iVar12 = (**(code **)(this->_padding_ + 0xb0))(this);
  local_118.BlockWidthInTiles = (iVar12 + -1 + uVar19) / uVar19;
  uVar19 = this->VTData->HeightInBlocks;
  iVar12 = (**(code **)(this->_padding_ + 0xb8))(this);
  pFVar5 = this->VTData;
  bVar9 = this->bSinglePhysicalSpace;
  local_118.BlockHeightInTiles = (iVar12 + -1 + uVar19) / uVar19;
  local_118.WidthInBlocks = (ushort)pFVar5->WidthInBlocks;
  local_118.HeightInBlocks = (ushort)pFVar5->HeightInBlocks;
  local_118.DepthInTiles = 1;
  local_118.MaxLevel = (uchar)iVar20;
  local_118.NumTextureLayers = (uchar)pFVar5->NumLayers;
  if (bVar9 == false) {
    local_118.NumPhysicalGroups = (uchar)pFVar5->NumLayers;
  }
  else {
    local_118.NumPhysicalGroups = '\x01';
  }
  if (pFVar5->NumLayers != 0) {
    bVar1 = *(bool *)((longlong)&this->_padding_ + 6);
    pFVar14 = pFVar15;
    do {
      local_118.LayerFormat[(longlong)pFVar14].Value = pFVar5->LayerTypes[(longlong)pFVar14].Value;
      uVar2 = *(undefined8 *)
               ((longlong)&pFVar5->LayerFallbackColors[(longlong)pFVar14].field0_0x0 + 8);
      *(undefined8 *)&local_118.LayerFallbackColor[(longlong)pFVar14].field0_0x0 =
           *(undefined8 *)&pFVar5->LayerFallbackColors[(longlong)pFVar14].field0_0x0;
      *(undefined8 *)((longlong)&local_118.LayerFallbackColor[(longlong)pFVar14].field0_0x0 + 8) =
           uVar2;
      uVar10 = (uchar)pFVar14;
      if (bVar9 != false) {
        uVar10 = '\0';
      }
      uVar19 = (int)pFVar14 + 1;
      local_118.PhysicalGroupIndex[(longlong)pFVar14] = uVar10;
      local_118.bIsLayerSRGB[(longlong)pFVar14] = bVar1;
      pFVar14 = (FUploadingVirtualTexture *)(ulonglong)uVar19;
    } while (uVar19 < pFVar5->NumLayers);
  }
  local_118.bRequiresSinglePhysicalPool = this->bRequiresSinglePhysicalPool;
  local_118.Priority = this->VirtualTextureStreamingPriority;
  pFVar14 = ::operator_new(0x68);
  if (pFVar14 != (FUploadingVirtualTexture *)0x0) {
    pFVar15 = FUploadingVirtualTexture::FUploadingVirtualTexture
                        (pFVar14,&local_118.Name,this->VTData,this->FirstMipToUse);
  }
  pIVar16 = GetRendererModule();
  local_1b8 = pFVar15;
  pFVar17 = (FVirtualTextureProducerHandle *)
            (**(code **)((longlong)*pIVar16 + 0x160))(pIVar16,local_158,local_150,&local_118);
  this->ProducerHandle = *pFVar17;
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  }
  if (bVar8) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar18 = *(FWriteBuffer **)(lVar6 + 0x20);
    if ((int)pFVar18 - *(int *)&pFVar18->Cursor < 1) {
      pFVar18 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar18->Cursor = '\n';
    pFVar18->Cursor = pFVar18->Cursor + 1;
    pFVar18->Committed = pFVar18->Cursor;
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReleaseAllocatedVT @ 148896c10

void __thiscall FVirtualTexture2DResource::ReleaseAllocatedVT(FVirtualTexture2DResource *this)

{
  IRendererModule *pIVar1;
  
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1,this->AllocatedVT);
    this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  }
  return;
}

// ReleaseRHI @ 1488972c0

void __thiscall FVirtualTexture2DResource::ReleaseRHI(FVirtualTexture2DResource *this)

{
  IRendererModule *pIVar1;
  
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1,this->AllocatedVT);
    this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  }
  pIVar1 = GetRendererModule();
  (**(code **)((longlong)*pIVar1 + 0x168))(pIVar1,&this->ProducerHandle);
  (this->ProducerHandle).PackedValue = 0;
  return;
}

