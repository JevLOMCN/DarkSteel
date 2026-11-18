// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FTextureRenderTarget2DResource @ 1488aef70

FTextureRenderTarget2DResource * __thiscall
FTextureRenderTarget2DResource::FTextureRenderTarget2DResource
          (FTextureRenderTarget2DResource *this,UTextureRenderTarget2D *param_1)

{
  UTextureRenderTarget2D *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EPixelFormat EVar5;
  
  FTextureRenderTargetResource::FTextureRenderTargetResource((FTextureRenderTargetResource *)this);
  this->Owner = param_1;
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  (this->Texture2DRHI).Reference = (FRHITexture *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  (this->UnorderedAccessViewRHI).Reference = (FRHIUnorderedAccessView *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDeferredUpdateResource__;
  fVar2 = (param_1->ClearColor).field0_0x0._s_0.G;
  fVar3 = (param_1->ClearColor).field0_0x0._s_0.B;
  fVar4 = (param_1->ClearColor).field0_0x0._s_0.A;
  (this->ClearColor).field0_0x0._s_0.R = (param_1->ClearColor).field0_0x0._s_0.R;
  (this->ClearColor).field0_0x0._s_0.G = fVar2;
  (this->ClearColor).field0_0x0._s_0.B = fVar3;
  (this->ClearColor).field0_0x0._s_0.A = fVar4;
  EVar5 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  pUVar1 = this->Owner;
  this->Format = EVar5;
  this->TargetSizeX = pUVar1->SizeX;
  this->TargetSizeY = pUVar1->SizeY;
  this->TargetNumMips = pUVar1->NumMips;
  (this->MipGenerationCache).Reference = (IPooledRenderTarget *)0x0;
  return this;
}

// ~FTextureRenderTarget2DResource @ 1488b2310

void __thiscall
FTextureRenderTarget2DResource::~FTextureRenderTarget2DResource
          (FTextureRenderTarget2DResource *this)

{
  IPooledRenderTarget *pIVar1;
  FRHIUnorderedAccessView *this_00;
  FRHITexture *this_01;
  
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredUpdateResource__;
  pIVar1 = (this->MipGenerationCache).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  this_00 = (this->UnorderedAccessViewRHI).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Texture2DRHI).Reference;
  if (this_01 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderTarget::~FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ClampSize @ 1488baa20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTarget2DResource::ClampSize
          (FTextureRenderTarget2DResource *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = this->Owner->SizeX;
  if (iVar1 < param_1) {
    param_1 = iVar1;
  }
  iVar1 = this->Owner->SizeY;
  if (iVar1 < param_2) {
    param_2 = iVar1;
  }
  if ((param_1 == this->TargetSizeX) && (param_2 == this->TargetSizeY)) {
    return;
  }
  this->TargetSizeX = param_1;
  this->TargetSizeY = param_2;
  if ((param_1 < 0) || (param_2 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetSizeX >= 0 && TargetSizeY >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2D.cpp"
                       ,0x1e6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
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
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// GetCreateFlags @ 1488c2580

ETextureCreateFlags __thiscall
FTextureRenderTarget2DResource::GetCreateFlags(FTextureRenderTarget2DResource *this)

{
  char cVar1;
  bool bVar2;
  ETextureCreateFlags EVar3;
  ETextureCreateFlags EVar4;
  
  cVar1 = (**(code **)(this->Owner->_padding_ + 0x3d8))();
  EVar4 = (ulonglong)((byte)this->Owner->field_0x172 & 8) << 0x16 |
          (ulonglong)(-(uint)(cVar1 != '\0') & 0x10);
  if (this->Owner->bAutoGenerateMips != '\0') {
    bVar2 = FGenerateMips::WillFormatSupportCompute(this->Format);
    if (bVar2) {
      EVar4 = EVar4 | UAV;
    }
  }
  EVar3 = EVar4 | UAV;
  if ((this->Owner->_padding_ & 0x200000000) == 0) {
    EVar3 = EVar4;
  }
  EVar4 = EVar3 | NoFastClear;
  if (this->Owner->bNoFastClear == '\0') {
    EVar4 = EVar3;
  }
  return EVar4 | (ShaderResource|RenderTargetable);
}

// GetDisplayGamma @ 1488c2a20

float __thiscall
FTextureRenderTarget2DResource::GetDisplayGamma(FTextureRenderTarget2DResource *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001488c2a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x3e0))();
  return fVar1;
}

// GetSizeX @ 1488c4b20

uint __thiscall FTextureRenderTarget2DResource::GetSizeX(FTextureRenderTarget2DResource *this)

{
  return this->TargetSizeX;
}

// GetSizeXY @ 1488c4ba0

TIntPoint<int> __thiscall
FTextureRenderTarget2DResource::GetSizeXY(FTextureRenderTarget2DResource *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined4 *)in_RDX = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)((longlong)in_RDX + 4) = (int)this->_padding_;
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 1488c4c30

uint __thiscall FTextureRenderTarget2DResource::GetSizeY(FTextureRenderTarget2DResource *this)

{
  return this->TargetSizeY;
}

// GetTextureRenderTarget2DResource @ 1488c6460

FTextureRenderTarget2DResource * __thiscall
FTextureRenderTarget2DResource::GetTextureRenderTarget2DResource
          (FTextureRenderTarget2DResource *this)

{
  return this;
}

// InitRHI @ 1488c8c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTarget2DResource::InitRHI
          (FTextureRenderTarget2DResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  uchar uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UTextureRenderTarget2D *pUVar7;
  FRHIResource *pFVar8;
  TIntPoint<int>_u_0 this_00;
  FRHIUnorderedAccessView *this_01;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  TEventRef<unsigned_int> TVar13;
  UPackage *pUVar14;
  TRefCountPtr<FRHITexture> TVar15;
  TRefCountPtr<FRHIUnorderedAccessView> TVar16;
  UDeviceProfileManager *this_02;
  UDeviceProfile *this_03;
  UTextureLODSettings *this_04;
  FTextureLODGroup *pFVar17;
  FRHIResource *this_05;
  FWriteBuffer *pFVar18;
  ETextureCreateFlags EVar19;
  ETextureCreateFlags EVar20;
  byte bVar21;
  undefined1 auStack_1c8 [32];
  char local_1a8 [8];
  TIntPoint<int>_u_0 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190 [24];
  FSamplerStateInitializerRHI local_178;
  FString local_158;
  FRHITextureDesc local_148;
  FScriptContainerElement *local_f8;
  ForElementType<EPixelFormat> local_f0;
  longlong local_e8;
  TIntPoint<int>_u_0 local_e0;
  longlong local_d8;
  FRHITextureDesc local_c8;
  FScriptContainerElement *local_78;
  ForElementType<EPixelFormat> local_70;
  longlong local_68;
  TIntPoint<int>_u_0 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_190._16_8_ = param_1;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar13 = (TEventRef<unsigned_int>)&local_1a0;
    local_1a0 = (TIntPoint<int>_u_0)0x0;
  }
  else {
    local_1a0 = (TIntPoint<int>_u_0)0x0;
    TVar13 = FStringTrace::GetNameRef((FName *)local_190);
  }
  uVar4 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_1a0 = (TIntPoint<int>_u_0)0x0;
    TVar13 = (TEventRef<unsigned_int>)&local_1a0;
  }
  else {
    local_1a0 = (TIntPoint<int>_u_0)0x0;
    TVar13 = FStringTrace::GetNameRef((FName *)local_190);
  }
  uVar5 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_1a0 = (TIntPoint<int>_u_0)0x0;
    TVar13 = (TEventRef<unsigned_int>)&local_1a0;
  }
  else {
    pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Owner);
    local_1a0 = (TIntPoint<int>_u_0)pUVar14->_padding_;
    TVar13 = FStringTrace::GetNameRef((FName *)local_190);
  }
  uVar6 = *(undefined8 *)TVar13;
  bVar10 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_158);
    bVar10 = true;
    *(int *)local_158.Data.AllocatorInstance.Data = (int)uVar4;
    *(int *)(local_158.Data.AllocatorInstance.Data + 4) = (int)uVar5;
    *(int *)(local_158.Data.AllocatorInstance.Data + 8) = (int)uVar6;
    *(undefined8 *)(CONCAT44(local_158.Data.ArrayMax,local_158.Data.ArrayNum) + 0x28) =
         *(undefined8 *)(CONCAT44(local_158.Data.ArrayMax,local_158.Data.ArrayNum) + 0x20);
  }
  if ((this->TargetSizeX < 1) || (this->TargetSizeY < 1)) goto LAB_1488c9164;
  local_1a0 = (TIntPoint<int>_u_0)this->Owner->_padding_;
  ::FName::ToString((FName *)&local_1a0._s_0,&local_158);
  cVar11 = (**(code **)(this->Owner->_padding_ + 0x3d8))();
  EVar19 = (ulonglong)((byte)this->Owner->field_0x172 & 8) << 0x16 |
           (ulonglong)(-(uint)(cVar11 != '\0') & 0x10);
  if (this->Owner->bAutoGenerateMips != '\0') {
    bVar12 = FGenerateMips::WillFormatSupportCompute(this->Format);
    if (bVar12) {
      EVar19 = EVar19 | UAV;
    }
  }
  pUVar7 = this->Owner;
  EVar20 = EVar19 | UAV;
  if ((pUVar7->_padding_ & 0x200000000) == 0) {
    EVar20 = EVar19;
  }
  if (pUVar7->bNoFastClear != '\0') {
    EVar20 = EVar20 | NoFastClear;
  }
  local_1a8[0] = (**(code **)(pUVar7->_padding_ + 1000))();
  if (local_1a8[0] == '\0') {
LAB_1488c8e74:
    bVar21 = 1;
  }
  else if (local_1a8[0] == '\x01') {
    bVar21 = 2;
  }
  else if (local_1a8[0] == '\x02') {
    bVar21 = 4;
  }
  else {
    if (local_1a8[0] != '\x03') {
      local_1a0 = (TIntPoint<int>_u_0)local_1a8;
      `GetNumFromRenderTargetSampleCount'::__l4::<lambda_1>::operator()(&local_1a0);
      goto LAB_1488c8e74;
    }
    bVar21 = 8;
  }
  local_148.ClearValue.Value.DSValue = (DSVAlue)*(undefined8 *)&(this->ClearColor).field0_0x0;
  local_148.ClearValue.Value._8_8_ = *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8);
  local_f8 = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    local_f8 = local_158.Data.AllocatorInstance.Data;
  }
  local_148.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1a0 = *(TIntPoint<int>_u_0 *)&this->TargetSizeX;
  local_148.Format = this->Format;
  local_148.NumMips = (uchar)this->TargetNumMips;
  local_148.ExtData = 0;
  local_148.Depth = 1;
  local_148.ArraySize = 1;
  local_148.Dimension = Texture2D;
  local_148.UAVFormat = PF_Unknown;
  local_148.FastVRAMPercentage = 0xff;
  local_148.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_148.AliasableFormats.ArrayNum = 0;
  local_148.AliasableFormats.ArrayMax = 1;
  local_f0 = (ForElementType<EPixelFormat>)0x70;
  local_e8 = 0;
  local_148.ClearValue.ColorBinding = EColorBound;
  local_148.Flags = EVar20 | (ShaderResource|RenderTargetable);
  local_148.Extent.field0_0x0 = local_1a0;
  local_148.NumSamples = bVar21;
  FLazyName::Resolve(&::ClassName);
  local_e0 = local_1a0;
  local_d8 = this->_padding_;
  FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
  local_78 = local_f8;
  local_70._0_4_ = local_f0._0_4_;
  local_70._4_4_ = local_f0._4_4_;
  local_68 = local_e8;
  local_60 = local_e0;
  local_58 = local_d8;
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar15 = FRHICommandListBase::CreateTexture
                     ((FRHICommandListBase *)local_190._16_8_,(FRHITextureCreateDesc *)local_190);
  plVar1 = &this->_padding_;
  if ((FRHITexture *)plVar1 != TVar15.Reference) {
    pFVar8 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar15.Reference)->_padding_;
    (TVar15.Reference)->_padding_ = 0;
    if (pFVar8 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar8);
    }
  }
  this_00 = (TIntPoint<int>_u_0)this->_padding_;
  plVar1 = &this->_padding_;
  local_1a0 = (TIntPoint<int>_u_0)*plVar1;
  if (local_1a0 != this_00) {
    *plVar1 = (longlong)this_00;
    if (this_00 != (TIntPoint<int>_u_0)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (local_1a0 != (TIntPoint<int>_u_0)0x0) {
      FRHIResource::Release((FRHIResource *)local_1a0);
    }
  }
  if ((FName)local_190._0_8_ != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_190._0_8_);
  }
  uVar4 = local_190._16_8_;
  if (bVar21 < 2) {
    if ((this->Owner->_padding_ & 0x100000000) != 0) {
      local_c8.Flags = EVar20 | (ShaderResource|RenderTargetable);
      TVar15 = FRHICommandListBase::CreateTexture
                         ((FRHICommandListBase *)local_190._16_8_,(FRHITextureCreateDesc *)local_190
                         );
      TRefCountPtr<FRHITexture>::operator=
                ((TRefCountPtr<FRHITexture> *)plVar1,(TRefCountPtr<FRHITexture> *)TVar15.Reference);
      goto LAB_1488c9092;
    }
  }
  else {
    local_c8.NumSamples = '\x01';
    local_c8.Flags = EVar20 | (ShaderResource|ResolveTargetable);
    TVar15 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)local_190._16_8_,(FRHITextureCreateDesc *)local_190);
    if ((FRHITexture *)plVar1 != TVar15.Reference) {
      pFVar8 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar15.Reference)->_padding_;
      (TVar15.Reference)->_padding_ = 0;
      if (pFVar8 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar8);
      }
    }
LAB_1488c9092:
    if ((FName)local_190._0_8_ != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)local_190._0_8_);
    }
  }
  if ((EVar20 & UAV) != None) {
    uStack_198 = 0;
    local_1a0 = (TIntPoint<int>_u_0)&DAT_100000003;
    FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
              ((FInitializer *)&local_1a0._s_0,(FRHITexture *)this->_padding_);
    TVar16 = FRHICommandListBase::CreateUnorderedAccessView
                       ((FRHICommandListBase *)uVar4,(FRHITexture *)local_190,
                        (FInitializer *)this->_padding_);
    pTVar2 = &this->UnorderedAccessViewRHI;
    if ((FRHIUnorderedAccessView *)pTVar2 != TVar16.Reference) {
      this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (this_01 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if ((FName)local_190._0_8_ != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)local_190._0_8_);
    }
  }
  FTextureRenderTargetResource::SetGPUMask
            ((FTextureRenderTargetResource *)this,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)uVar4,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
             (FRHITexture *)*plVar1);
  FDeferredUpdateResource::AddToDeferredUpdateList((FDeferredUpdateResource *)&this->_padding_,true)
  ;
  if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
LAB_1488c9164:
  this_02 = UDeviceProfileManager::Get(false);
  this_03 = UDeviceProfileManager::GetActiveProfile(this_02);
  this_04 = UDeviceProfile::GetTextureLODSettings(this_03);
  pFVar17 = UTextureLODSettings::GetTextureLODGroup
                      (this_04,(uint)*(byte *)((longlong)&this->Owner->_padding_ + 7));
  pUVar7 = this->Owner;
  local_178.AddressU.Value = '\0';
  local_178.MaxAnisotropy = pFVar17->MaxAniso;
  uVar3 = (pUVar7->AddressY).Value;
  local_178.AddressV.Value = local_178.AddressU.Value;
  if (uVar3 != '\0') {
    local_178.AddressV.Value = (uVar3 != '\x01') + '\x01';
  }
  uVar3 = (pUVar7->AddressX).Value;
  if (uVar3 != '\0') {
    local_178.AddressU.Value = (uVar3 != '\x01') + '\x01';
  }
  local_178.Filter.Value = UTextureLODSettings::GetSamplerFilter(this_04,(UTexture *)pUVar7);
  local_178.AddressW.Value = '\0';
  local_178.MipBias = 0.0;
  local_178.MinMipLevel = 0.0;
  local_178.MaxMipLevel = 3.4028235e+38;
  local_178.BorderColor = 0;
  local_178.SamplerComparisonFunction.Value = '\0';
  this_05 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_178);
  pFVar8 = (FRHIResource *)this->_padding_;
  if (pFVar8 != this_05) {
    this->_padding_ = (longlong)this_05;
    if (this_05 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_05);
    }
    if (pFVar8 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar8);
    }
  }
  if (bVar10) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar9 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar18 = *(FWriteBuffer **)(lVar9 + 0x20);
    if ((int)pFVar18 - *(int *)&pFVar18->Cursor < 1) {
      pFVar18 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar18->Cursor = '\n';
    pFVar18->Cursor = pFVar18->Cursor + 1;
    pFVar18->Committed = pFVar18->Cursor;
  }
  return;
}

// ReleaseRHI @ 1488d5e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTextureRenderTarget2DResource::ReleaseRHI(FTextureRenderTarget2DResource *this)

{
  FRHITextureReference *pFVar1;
  FRHIResource *this_00;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  FTexture::ReleaseRHI((FTexture *)this);
  pFVar1 = *(FRHITextureReference **)(this->Owner->_padding_ + 0x20);
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
  pIVar2 = (this->MipGenerationCache).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->MipGenerationCache).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
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

// Resize @ 1488daee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTarget2DResource::Resize
          (FTextureRenderTarget2DResource *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->TargetSizeX == param_1) && (this->TargetSizeY == param_2)) &&
     (this->TargetNumMips == param_3)) {
    return;
  }
  this->TargetSizeX = param_1;
  this->TargetSizeY = param_2;
  this->TargetNumMips = param_3;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// UpdateDeferredResource @ 1488ea930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
FTextureRenderTarget2DResource::UpdateDeferredResource
          (FTextureRenderTarget2DResource *this,FRHICommandListImmediate *param_1,bool param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IPooledRenderTarget *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  atomic<unsigned_int> aVar10;
  TEventRef<unsigned_int> TVar11;
  UPackage *pUVar12;
  FRHIBreadcrumbAllocator *pFVar13;
  FRHIBreadcrumbNode *pFVar14;
  FRDGTexture *pFVar15;
  TRefCountPtr<IPooledRenderTarget> TVar16;
  FRDGTexture *pFVar17;
  longlong lVar18;
  FWriteBuffer *pFVar19;
  int iVar20;
  Type TVar21;
  undefined1 auStackY_958 [32];
  undefined1 local_920 [60];
  int local_8e4;
  int local_8e0;
  undefined4 local_8dc;
  longlong local_8d8;
  TIntVector3<int>_u_0 local_8d0;
  undefined8 local_8c4;
  int local_8bc;
  longlong local_8b8;
  int local_8b0;
  undefined8 local_8ac;
  undefined8 local_8a4;
  undefined4 local_89c;
  undefined4 local_898;
  FRDGEventName local_890;
  char *local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  longlong local_868;
  wchar_t *pwStack_860;
  FRHIBreadcrumbScope local_858;
  char local_848;
  FName local_840;
  FName local_838;
  FName local_830;
  undefined4 *local_828;
  longlong local_820;
  FRDGBuilder local_818;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_958;
  local_920._0_8_ = param_1;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar11 = (TEventRef<unsigned_int>)((longlong)local_920 + 0x10);
    local_920._16_8_ = 0;
  }
  else {
    local_920._8_8_ = 0;
    TVar11 = FStringTrace::GetNameRef(&local_840);
  }
  uVar2 = *(undefined8 *)TVar11;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_920._32_8_ = 0;
    TVar11 = (TEventRef<unsigned_int>)((longlong)local_920 + 0x20);
  }
  else {
    local_920._24_8_ = 0;
    TVar11 = FStringTrace::GetNameRef(&local_838);
  }
  uVar3 = *(undefined8 *)TVar11;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_920._40_8_ = 0;
    TVar11 = (TEventRef<unsigned_int>)((longlong)local_920 + 0x28);
  }
  else {
    pUVar12 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->_padding_);
    local_8d8 = pUVar12->_padding_;
    TVar11 = FStringTrace::GetNameRef(&local_830);
  }
  uVar4 = *(undefined8 *)TVar11;
  bVar7 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_828);
    bVar7 = true;
    *local_828 = (int)uVar2;
    local_828[1] = (int)uVar3;
    local_828[2] = (int)uVar4;
    *(undefined8 *)(local_820 + 0x28) = *(undefined8 *)(local_820 + 0x20);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_878 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2D.cpp"
      ;
      pwStack_860 = L"GPUResourceUpdate";
      uStack_870 = 0x270;
      local_868 = 0;
      ::Desc._padding_._0_4_ = 0x51bc4830;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x270;
      ::Desc._padding_._4_4_ = uStack_86c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51bc4ba0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FTextureRenderTarget2DResource::UpdateDeferredResource'::__l13::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar2 = local_920._0_8_;
  pFVar13 = FRHIComputeCommandList::GetBreadcrumbAllocator
                      ((FRHIComputeCommandList *)local_920._0_8_);
  pFVar14 = FMemStackBase::Alloc(&pFVar13->Inner,0x50,8);
  pFVar14->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar14->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar14->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar14->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar14->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar14->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar14->Allocator = pFVar13;
  pFVar14->TraceCpuSpecId = 0;
  pFVar14->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar14->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar14->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar14->ID = uVar9;
  pFVar14->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar14[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar8) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar10 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar10;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar14->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_858,(FRHIComputeCommandList *)uVar2,pFVar14);
  local_848 = '\x01';
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((((IPooledRenderTarget *)this[-1]._padding_ != this[-1].MipGenerationCache.Reference) ||
      (param_2)) || ((*(byte *)(this->_padding_ + 0x174) & 2) != 0)) {
    local_890.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_890.EventFormat = L"";
    local_890.FormattedEventName.Data.ArrayNum = 0;
    local_890.FormattedEventName.Data.ArrayMax = 0;
    FRDGBuilder::FRDGBuilder
              (&local_818,(FRHICommandListImmediate *)uVar2,&local_890,None,GMaxRHIShaderPlatform);
    CacheRenderTarget((FRHITexture *)this[-1].MipGenerationCache.Reference,L"MipGeneration",
                      (TRefCountPtr<IPooledRenderTarget> *)&this->_padding_);
    pFVar15 = FRDGBuilder::RegisterExternalTexture
                        (&local_818,(TRefCountPtr<IPooledRenderTarget> *)&this->_padding_,None);
    TVar16 = CreateRenderTarget((FRHITexture *)local_920,(wchar_t *)this[-1]._padding_);
    pFVar17 = FRDGBuilder::RegisterExternalTexture
                        (&local_818,(TRefCountPtr<IPooledRenderTarget> *)TVar16.Reference,None);
    if ((FRHIComputeCommandList *)local_920._0_8_ != (FRHIComputeCommandList *)0x0) {
      (**(code **)(*(longlong *)local_920._0_8_ + 0x38))();
    }
    if (param_2) {
      pIVar5 = this[-1].MipGenerationCache.Reference;
      if (pIVar5 == (IPooledRenderTarget *)0x0) {
LAB_1488ead28:
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4037342337108540798>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2D.cpp"
                           ,0x282,
                           "RenderTargetTextureRHI.IsValid() && (RenderTargetTextureRHI->GetClearColor() == ClearColor)"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        lVar18 = (**(code **)(pIVar5->_padding_ + 0x20))();
        if (*(int *)(lVar18 + 8) != 1) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<456935519012520230>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x126,"ColorBinding == EClearBinding::EColorBound");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((*(float *)&this->_padding_ != *(float *)(lVar18 + 0xc)) ||
            (*(float *)(lVar18 + 0x10) != *(float *)((longlong)&this->_padding_ + 4))) ||
           ((*(float *)(lVar18 + 0x14) != *(float *)&this->_padding_ ||
            (*(float *)(lVar18 + 0x18) != *(float *)((longlong)&this->_padding_ + 4)))))
        goto LAB_1488ead28;
      }
      AddClearRenderTargetPass(&local_818,pFVar15,(FLinearColor *)&this->_padding_);
    }
    lVar18 = this->_padding_;
    iVar20 = 0;
    if ((*(byte *)(lVar18 + 0x174) & 2) != 0) {
      if (*(char *)(lVar18 + 0x175) != '\0') {
        iVar20 = (*(char *)(lVar18 + 0x175) == '\x02') + 1;
      }
      local_8e0 = 0;
      local_8e4 = local_8e0;
      if (*(char *)(lVar18 + 0x176) != '\0') {
        local_8e4 = (*(char *)(lVar18 + 0x176) == '\x02') + 1;
      }
      if (*(char *)(lVar18 + 0x177) != '\0') {
        local_8e0 = (*(char *)(lVar18 + 0x177) == '\x02') + 1;
      }
      bVar1 = *(byte *)((longlong)&this[-1]._padding_ + 4);
      TVar21 = (uint)bVar1;
      if (bVar1 == 5) {
        TVar21 = GMaxRHIFeatureLevel;
      }
      local_8dc = 1;
      local_920._56_4_ = iVar20;
      FGenerateMips::Execute
                (&local_818,TVar21,pFVar15,(FGenerateMipsParams *)(local_920 + 0x38),AutoDetect);
    }
    local_8d0._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_8c4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_8b8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_8d0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_8bc = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_8b0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_8ac = 0;
    local_8a4 = 1;
    local_89c = 0;
    local_898 = 1;
    AddCopyTexturePass(&local_818,pFVar15,pFVar17,(FRHICopyTextureInfo *)&local_8d0._s_0);
    FRDGBuilder::Execute(&local_818);
    FRDGBuilder::~FRDGBuilder(&local_818);
    if (local_848 == '\0') goto LAB_1488eae65;
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_858);
LAB_1488eae65:
  if (bVar7) {
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar18 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar19 = *(FWriteBuffer **)(lVar18 + 0x20);
    if ((int)pFVar19 - *(int *)&pFVar19->Cursor < 1) {
      pFVar19 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar19->Cursor = '\n';
    pFVar19->Cursor = pFVar19->Cursor + 1;
    pFVar19->Committed = pFVar19->Cursor;
  }
  return;
}

