// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetDisplayGamma @ 1488c2a40

float __thiscall
FTextureRenderTargetCubeResource::GetDisplayGamma(FTextureRenderTargetCubeResource *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001488c2a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x3e0))();
  return fVar1;
}

// GetSizeX @ 1488c4b30

uint __thiscall FTextureRenderTargetCubeResource::GetSizeX(FTextureRenderTargetCubeResource *this)

{
  return this->Owner->SizeX;
}

// GetSizeXY @ 1488c4bc0

TIntPoint<int> __thiscall
FTextureRenderTargetCubeResource::GetSizeXY(FTextureRenderTargetCubeResource *this)

{
  undefined4 uVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  uVar1 = *(undefined4 *)(this->_padding_ + 0x158);
  *(undefined4 *)in_RDX = uVar1;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar1;
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 1488c4c40

uint __thiscall FTextureRenderTargetCubeResource::GetSizeY(FTextureRenderTargetCubeResource *this)

{
  return this->Owner->SizeX;
}

// GetTextureRenderTargetCubeResource @ 1488c6470

FTextureRenderTargetCubeResource * __thiscall
FTextureRenderTargetCubeResource::GetTextureRenderTargetCubeResource
          (FTextureRenderTargetCubeResource *this)

{
  return this;
}

// InitRHI @ 1488c92c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTargetCubeResource::InitRHI
          (FTextureRenderTargetCubeResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UTextureRenderTargetCube *pUVar6;
  FRHIResource *pFVar7;
  FRHIUnorderedAccessView *this_00;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  EPixelFormat EVar12;
  bool bVar13;
  TEventRef<unsigned_int> TVar14;
  UPackage *pUVar15;
  TRefCountPtr<FRHITexture> TVar16;
  TRefCountPtr<FRHIUnorderedAccessView> TVar17;
  UDeviceProfileManager *this_01;
  UDeviceProfile *this_02;
  UTextureLODSettings *this_03;
  FRHIResource *this_04;
  FWriteBuffer *pFVar18;
  uint uVar19;
  int iVar20;
  ETextureCreateFlags EVar21;
  ETextureCreateFlags EVar22;
  undefined1 auStack_328 [40];
  FSamplerStateInitializerRHI local_300;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  int local_2b8;
  int iStack_2b4;
  int local_2b0;
  int iStack_2ac;
  longlong local_2a8;
  undefined1 local_2a0 [16];
  ETextureCreateFlags local_290;
  undefined1 local_288 [16];
  longlong lStack_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FRHITextureDesc local_258;
  wchar_t *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  FRHITextureDesc local_1d8;
  wchar_t *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 *local_158;
  longlong local_150;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_328;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar14 = (TEventRef<unsigned_int>)&local_2d8;
    local_2d8 = 0;
  }
  else {
    local_2e0 = 0;
    TVar14 = FStringTrace::GetNameRef(&local_270);
  }
  uVar3 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2c8 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_2c8;
  }
  else {
    local_2d0 = 0;
    TVar14 = FStringTrace::GetNameRef(&local_268);
  }
  uVar4 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2c0 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_2c0;
  }
  else {
    pUVar15 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Owner);
    local_2a8 = pUVar15->_padding_;
    TVar14 = FStringTrace::GetNameRef(&local_260);
  }
  uVar5 = *(undefined8 *)TVar14;
  bVar10 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_158);
    bVar10 = true;
    *local_158 = (int)uVar3;
    local_158[1] = (int)uVar4;
    local_158[2] = (int)uVar5;
    *(undefined8 *)(local_150 + 0x28) = *(undefined8 *)(local_150 + 0x20);
  }
  if (0 < this->Owner->SizeX) {
    cVar11 = (**(code **)(this->Owner->_padding_ + 0x3d8))();
    pUVar6 = this->Owner;
    uVar19 = -(uint)(cVar11 != '\0') & 0x10;
    EVar21 = (ulonglong)uVar19 | UAV;
    if ((pUVar6->_padding_ & 0x200000000) == 0) {
      EVar21 = (ulonglong)uVar19;
    }
    EVar22 = EVar21;
    if (pUVar6->bAutoGenerateMips != '\0') {
      EVar12 = (**(code **)(pUVar6->_padding_ + 0x3d0))();
      bVar13 = FGenerateMips::WillFormatSupportCompute(EVar12);
      EVar22 = EVar21 | TargetArraySlicesIndependently;
      if (bVar13) {
        EVar22 = EVar21 | UAV;
      }
    }
    pUVar6 = this->Owner;
    local_258.ExtData = 0;
    local_258.Depth = 1;
    local_258.ArraySize = 1;
    local_258.NumSamples = '\x01';
    local_258.Dimension = TextureCube;
    EVar21 = EVar22 | TargetArraySlicesIndependently;
    if ((pUVar6->_padding_ & 0x400000000) == 0) {
      EVar21 = EVar22;
    }
    local_258.UAVFormat = PF_Unknown;
    local_258.FastVRAMPercentage = 0xff;
    local_258.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_258.AliasableFormats.ArrayNum = 0;
    local_258.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_258.AliasableFormats.ArrayMax = 1;
    local_208 = L"FTextureRenderTargetCubeResource";
    local_2b8 = pUVar6->SizeX;
    local_258.Extent.field0_0x0._s_0.Y = local_2b8;
    local_258.Extent.field0_0x0._s_0.X = local_2b8;
    local_200 = 0x70;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    iStack_2b4 = local_2b8;
    local_258.Format = (**(code **)(pUVar6->_padding_ + 0x3d0))(pUVar6);
    pUVar6 = this->Owner;
    local_258.ClearValue.ColorBinding = EColorBound;
    local_258.NumMips = (uchar)pUVar6->NumMips;
    local_258.ClearValue.Value.DSValue = (DSVAlue)*(undefined8 *)&(pUVar6->ClearColor).field0_0x0;
    local_258.ClearValue.Value._8_8_ =
         *(undefined8 *)((longlong)&(pUVar6->ClearColor).field0_0x0 + 8);
    local_290 = EVar21 | (ShaderResource|RenderTargetable);
    local_258.Flags = local_290;
    FRHITextureDesc::FRHITextureDesc(&local_148,&local_258);
    local_f8 = local_208;
    local_f0 = (undefined4)local_200;
    local_ec = local_200._4_4_;
    local_e8 = local_1f8;
    local_e0 = local_1f0;
    local_d8 = local_1e8;
    if ((FName)local_258.AliasableFormats.AllocatorInstance.SecondaryData != (FName)0x0) {
      FMemory::Free((void *)local_258.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar16 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_2a0);
    plVar1 = &this->_padding_;
    if ((FRHITexture *)plVar1 != TVar16.Reference) {
      pFVar7 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    if ((FRHIResource *)local_2a0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2a0._0_8_);
    }
    if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    iVar20 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    bVar13 = IsInRenderingThread();
    if (!bVar13) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureResource.h"
                          ,0x1a4,L"");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(int *)&this->_padding_ = iVar20;
    *(int *)((longlong)&this->_padding_ + 4) = iVar20;
    if ((EVar21 >> 0x11 & 1) != 0) {
      lStack_278 = 0;
      local_288._8_8_ = &DAT_100000003;
      FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
                ((FInitializer *)(local_288 + 8),(FRHITexture *)*plVar1);
      TVar17 = FRHICommandListBase::CreateUnorderedAccessView
                         (param_1,(FRHITexture *)(local_2a0 + 8),(FInitializer *)*plVar1);
      pTVar2 = &this->UnorderedAccessViewRHI;
      if ((FRHIUnorderedAccessView *)pTVar2 != TVar17.Reference) {
        this_00 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar2->Reference = *TVar17.Reference;
        *(undefined8 *)TVar17.Reference = 0;
        if (this_00 != (FRHIUnorderedAccessView *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      if ((FRHIResource *)local_2a0._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_2a0._8_8_);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
               (FRHITexture *)*plVar1);
    local_1d8.ExtData = 0;
    local_1d8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_188 = L"FTextureRenderTargetCubeResource";
    local_1d8.Depth = 1;
    local_1d8.ArraySize = 1;
    local_2b0 = this->Owner->SizeX;
    local_1d8.Extent.field0_0x0._s_0.Y = local_2b0;
    local_1d8.Extent.field0_0x0._s_0.X = local_2b0;
    local_1d8.NumSamples = '\x01';
    local_1d8.Dimension = Texture2D;
    local_1d8.UAVFormat = PF_Unknown;
    local_1d8.FastVRAMPercentage = 0xff;
    local_1d8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_1d8.AliasableFormats.ArrayNum = 0;
    local_1d8.AliasableFormats.ArrayMax = 1;
    local_180 = 0x70;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    iStack_2ac = local_2b0;
    local_1d8.Format = (**(code **)(this->Owner->_padding_ + 0x3d0))();
    pUVar6 = this->Owner;
    local_1d8.ClearValue.ColorBinding = EColorBound;
    local_1d8.NumMips = (uchar)pUVar6->NumMips;
    local_1d8.ClearValue.Value.DSValue = (DSVAlue)*(undefined8 *)&(pUVar6->ClearColor).field0_0x0;
    local_1d8.ClearValue.Value._8_8_ =
         *(undefined8 *)((longlong)&(pUVar6->ClearColor).field0_0x0 + 8);
    local_1d8.Flags = local_290;
    FRHITextureDesc::FRHITextureDesc(&local_c8,&local_1d8);
    local_78 = local_188;
    local_70 = (undefined4)local_180;
    local_6c = local_180._4_4_;
    local_68 = local_178;
    local_60 = local_170;
    local_58 = local_168;
    if (local_1d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_1d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar16 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_288);
    plVar1 = &this->_padding_;
    if ((FRHITexture *)plVar1 != TVar16.Reference) {
      pFVar7 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    if ((FRHIResource *)local_288._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_288._0_8_);
    }
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    FDeferredUpdateResource::AddToDeferredUpdateList
              ((FDeferredUpdateResource *)&this->_padding_,true);
  }
  this_01 = UDeviceProfileManager::Get(false);
  this_02 = UDeviceProfileManager::GetActiveProfile(this_01);
  this_03 = UDeviceProfile::GetTextureLODSettings(this_02);
  local_300.Filter.Value = UTextureLODSettings::GetSamplerFilter(this_03,(UTexture *)this->Owner);
  local_300.AddressU.Value = '\x01';
  local_300.AddressV.Value = '\x01';
  local_300.AddressW.Value = '\x01';
  local_300.MipBias = 0.0;
  local_300.MinMipLevel = 0.0;
  local_300.MaxMipLevel = 3.4028235e+38;
  local_300.MaxAnisotropy = 0;
  local_300.BorderColor = 0;
  local_300.SamplerComparisonFunction.Value = '\0';
  this_04 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_300);
  pFVar7 = (FRHIResource *)this->_padding_;
  if (pFVar7 != this_04) {
    this->_padding_ = (longlong)this_04;
    if (this_04 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_04);
    }
    if (pFVar7 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar7);
    }
  }
  if (bVar10) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar8 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar18 = *(FWriteBuffer **)(lVar8 + 0x20);
    if ((int)pFVar18 - *(int *)&pFVar18->Cursor < 1) {
      pFVar18 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar18->Cursor = '\n';
    pFVar18->Cursor = pFVar18->Cursor + 1;
    pFVar18->Committed = pFVar18->Cursor;
  }
  return;
}

// ReadPixels @ 1488d47a0

bool __thiscall
FTextureRenderTargetCubeResource::ReadPixels
          (FTextureRenderTargetCubeResource *this,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_1,FReadSurfaceDataFlags *param_2,
          TIntRect<int> *param_3)

{
  bool bVar1;
  TIntRect<int>_u_0 local_38;
  FReadSurfaceDataFlags local_28;
  
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_28.CubeFace = param_2->CubeFace;
  local_28.CompressionMode = param_2->CompressionMode;
  local_28.bLinearToGamma = param_2->bLinearToGamma;
  local_28._9_3_ = *(undefined3 *)&param_2->field_0x9;
  local_28.MaxDepthRange = param_2->MaxDepthRange;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_28.bOutputStencil = param_2->bOutputStencil;
  local_28.MipLevel = param_2->MipLevel;
  local_28._18_2_ = *(undefined2 *)&param_2->field_0x12;
  local_28.ArrayIndex = param_2->ArrayIndex;
  local_28.GPUIndex = param_2->GPUIndex;
  bVar1 = FRenderTarget::ReadFloat16Pixels
                    ((FRenderTarget *)&this->_padding_,param_1,&local_28,
                     (TIntRect<int> *)&local_38._s_0);
  return bVar1;
}

// ReadPixels @ 1488d47f0

bool __thiscall
FTextureRenderTargetCubeResource::ReadPixels
          (FTextureRenderTargetCubeResource *this,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,FReadSurfaceDataFlags *param_2,
          TIntRect<int> *param_3)

{
  bool bVar1;
  TIntRect<int>_u_0 local_38;
  FReadSurfaceDataFlags local_28;
  
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_28.CubeFace = param_2->CubeFace;
  local_28.CompressionMode = param_2->CompressionMode;
  local_28.bLinearToGamma = param_2->bLinearToGamma;
  local_28._9_3_ = *(undefined3 *)&param_2->field_0x9;
  local_28.MaxDepthRange = param_2->MaxDepthRange;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_28.bOutputStencil = param_2->bOutputStencil;
  local_28.MipLevel = param_2->MipLevel;
  local_28._18_2_ = *(undefined2 *)&param_2->field_0x12;
  local_28.ArrayIndex = param_2->ArrayIndex;
  local_28.GPUIndex = param_2->GPUIndex;
  bVar1 = FRenderTarget::ReadPixels
                    ((FRenderTarget *)this,param_1,&local_28,(TIntRect<int> *)&local_38._s_0);
  return bVar1;
}

// ReleaseRHI @ 1488d5f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTextureRenderTargetCubeResource::ReleaseRHI(FTextureRenderTargetCubeResource *this)

{
  FRHITextureReference *pFVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  
  FTexture::ReleaseRHI((FTexture *)this);
  pFVar1 = *(FRHITextureReference **)(this->Owner->_padding_ + 0x20);
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,(FRHITexture *)0x0)
  ;
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// UpdateDeferredResource @ 1488eaf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTargetCubeResource::UpdateDeferredResource
          (FTextureRenderTargetCubeResource *this,FRHICommandListImmediate *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TEventRef<unsigned_int> TVar9;
  UPackage *pUVar10;
  IRHICommandContext *pIVar11;
  undefined8 *puVar12;
  FWriteBuffer *pFVar13;
  undefined1 auStackY_268 [32];
  uint local_234;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  FRHITransitionInfo *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e4;
  undefined8 uStack_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  longlong local_1b8;
  FRHITransitionInfo local_1b0;
  FRHITransitionInfo local_178;
  undefined4 local_148;
  undefined2 local_144;
  longlong local_140;
  undefined1 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_120;
  FRHITransitionInfo local_118;
  undefined4 local_e8;
  undefined2 local_e4;
  longlong local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_c0;
  FRHITransitionInfo *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  FName local_a0;
  FName local_98 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar9 = (TEventRef<unsigned_int>)&local_228;
    local_228 = 0;
  }
  else {
    TVar9 = FStringTrace::GetNameRef(&local_a8);
  }
  uVar1 = *(undefined8 *)TVar9;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_218 = 0;
    TVar9 = (TEventRef<unsigned_int>)&local_218;
  }
  else {
    local_220 = 0;
    TVar9 = FStringTrace::GetNameRef(&local_a0);
  }
  uVar2 = *(undefined8 *)TVar9;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_210 = 0;
    TVar9 = (TEventRef<unsigned_int>)&local_210;
  }
  else {
    pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->_padding_);
    local_1b8 = pUVar10->_padding_;
    TVar9 = FStringTrace::GetNameRef(local_98);
  }
  uVar3 = *(undefined8 *)TVar9;
  bVar8 = false;
  bVar7 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_58);
    bVar8 = true;
    bVar7 = true;
    *local_58 = (int)uVar1;
    local_58[1] = (int)uVar2;
    local_58[2] = (int)uVar3;
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (param_2) {
    local_1b0.field1_0x8 = *(FRHITransitionInfo_u_8 *)&this[-1].CurrentTargetFace;
    local_208 = &local_1b0;
    uStack_200 = 1;
    local_88._12_4_ = uStack_1fc;
    local_88.ArrayNum = 1;
    local_1b0._padding_._0_4_ = 0xffffffff;
    local_1b0._padding_._4_2_ = 0xffff;
    local_1b0.Type = Texture;
    local_1b0.AccessBefore = None;
    local_1b0.AccessAfter = RTV;
    local_1b0.Flags = None;
    local_1b0.CommitInfo.bIsSet = false;
    local_88.DataPtr = local_208;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
    ClearRenderTarget((FRHICommandList *)param_1,*(FRHITexture **)&this[-1].CurrentTargetFace,0,0);
    local_178.field1_0x8 = *(FRHITransitionInfo_u_8 *)&this[-1].CurrentTargetFace;
    local_140 = this[-1]._padding_;
    local_208 = &local_178;
    uStack_200 = 2;
    local_78._12_4_ = uStack_1fc;
    local_78.ArrayNum = 2;
    local_178._padding_._0_4_ = 0xffffffff;
    local_178._padding_._4_2_ = 0xffff;
    local_178.Type = Texture;
    local_178.AccessBefore = RTV;
    local_178.AccessAfter = CopySrc;
    local_178.Flags = None;
    local_178.CommitInfo.bIsSet = false;
    local_148 = 0xffffffff;
    local_144 = 0xffff;
    local_138 = 1;
    local_134 = 0;
    local_130 = 0x2000;
    local_12c = 0;
    local_120 = 0;
    local_78.DataPtr = local_208;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_78,None);
    iStack_1f0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    iStack_1e4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_1d8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_234 = 0;
    local_1f8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uStack_1ec = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uStack_1e8 = (undefined4)
                 ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
    uStack_1e0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uStack_1d4 = 0;
    uStack_1cc = 1;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    local_1c0 = 1;
    do {
      lVar4 = *(longlong *)&this[-1].CurrentTargetFace;
      lVar5 = this[-1]._padding_;
      uStack_1d0 = local_234;
      if ((lVar4 == 0) || (lVar5 == 0)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceTextureRHI && DestTextureRHI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1077,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (lVar4 == lVar5) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceTextureRHI != DestTextureRHI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1078,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((param_1->field_0x29b & 2) != 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOutsideRenderPass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1079,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar12 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar12;
        *(undefined8 **)&param_1->field_0x30 = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &___7FRHICommandCopyTexture__6B_;
        puVar12[2] = local_1f8;
        puVar12[3] = CONCAT44(uStack_1ec,iStack_1f0);
        puVar12[4] = CONCAT44(iStack_1e4,uStack_1e8);
        puVar12[5] = uStack_1e0;
        puVar12[6] = CONCAT44(uStack_1d4,local_1d8);
        puVar12[7] = CONCAT44(uStack_1cc,uStack_1d0);
        puVar12[8] = CONCAT44(uStack_1c4,uStack_1c8);
        *(undefined4 *)(puVar12 + 9) = local_1c0;
        puVar12[10] = lVar4;
        puVar12[0xb] = lVar5;
        if (lVar4 == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6604847226579585294>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x90e,"SourceTexture");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (puVar12[0xb] == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6604847226579585295>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x90f,"DestTexture");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      else {
        pIVar11 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar11->_padding_ + 0x260))(pIVar11,lVar4,lVar5,&local_1f8);
      }
      local_234 = local_234 + 1;
    } while (local_234 < 6);
    local_118.field1_0x8 = *(FRHITransitionInfo_u_8 *)&this[-1].CurrentTargetFace;
    local_e0 = this[-1]._padding_;
    local_b8 = &local_118;
    local_118._padding_._4_2_ = 0xffff;
    local_e4 = 0xffff;
    uStack_b0 = 2;
    local_68._12_4_ = uStack_ac;
    local_68.ArrayNum = 2;
    local_118._padding_._0_4_ = 0xffffffff;
    local_118.Type = Texture;
    local_118.AccessBefore = CopySrc;
    local_118.AccessAfter = SRVMask;
    local_118.Flags = None;
    local_118.CommitInfo.bIsSet = false;
    local_e8 = 0xffffffff;
    local_d8 = 1;
    local_d4 = 0x2000;
    local_d0 = 0x70;
    local_cc = 0;
    local_c0 = 0;
    local_68.DataPtr = local_b8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_68,None);
    bVar8 = bVar7;
  }
  if (bVar8) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar13 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
      pFVar13 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar13->Cursor = '\n';
    pFVar13->Cursor = pFVar13->Cursor + 1;
    pFVar13->Committed = pFVar13->Cursor;
  }
  return;
}

