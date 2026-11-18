// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FRenderTargetTexture @ 144eef3f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRenderTargetTexture * __thiscall
FRenderTargetTexture::FRenderTargetTexture
          (FRenderTargetTexture *this,FRHITextureCreateDesc *param_1)

{
  FTexture::FTexture((FTexture *)this);
  FRenderTarget::FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FTexture__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&this->Desc,(FRHITextureDesc *)param_1);
  (this->Desc).DebugName = param_1->DebugName;
  (this->Desc).InitialState = param_1->InitialState;
  (this->Desc).InitAction = param_1->InitAction;
  (this->Desc).BulkData = param_1->BulkData;
  (this->Desc).ClassName = param_1->ClassName;
  (this->Desc).OwnerName = param_1->OwnerName;
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
  }
  return this;
}

// GetDisplayGamma @ 144f11f30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

float __thiscall FRenderTargetTexture::GetDisplayGamma(FRenderTargetTexture *this)

{
  return __real_3f800000;
}

// GetFriendlyName @ 144f125c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FString * __thiscall
FRenderTargetTexture::GetFriendlyName(FRenderTargetTexture *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(this->Desc).DebugName);
  return __return_storage_ptr__;
}

// GetSizeX @ 144f13f60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

uint __thiscall FRenderTargetTexture::GetSizeX(FRenderTargetTexture *this)

{
  return *(uint *)((longlong)&(this->Desc)._padding_ + 4);
}

// GetSizeXY @ 144f13f70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TIntPoint<int> __thiscall FRenderTargetTexture::GetSizeXY(FRenderTargetTexture *this)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  plVar1 = &this[-1].Desc._padding_;
  uVar2 = (**(code **)(this[-1].Desc._padding_ + 0x38))(plVar1);
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  *(undefined4 *)in_RDX = uVar3;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar2;
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 144f13fc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

uint __thiscall FRenderTargetTexture::GetSizeY(FRenderTargetTexture *this)

{
  return (uint)(this->Desc)._padding_;
}

// InitRHI @ 144f1aa20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRenderTargetTexture::InitRHI(FRenderTargetTexture *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *pFVar2;
  FRHIResource *pFVar3;
  TRefCountPtr<FRHITexture> TVar4;
  FRHIResource *local_res8;
  FSamplerStateInitializerRHI local_28;
  
  local_28.Filter.Value = '\x01';
  local_28.AddressU.Value = '\x01';
  local_28.AddressV.Value = '\x01';
  local_28.AddressW.Value = '\x01';
  local_28.MipBias = 0.0;
  local_28.MinMipLevel = 0.0;
  local_28.MaxMipLevel = 3.4028235e+38;
  local_28.MaxAnisotropy = 0;
  local_28.BorderColor = 0;
  local_28.SamplerComparisonFunction.Value = '\0';
  pFVar3 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_28);
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != pFVar3) {
    this->_padding_ = (longlong)pFVar3;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar3);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  TVar4 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)&local_res8);
  plVar1 = &this->_padding_;
  if ((FRHITexture *)plVar1 != TVar4.Reference) {
    pFVar2 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  pFVar2 = (FRHIResource *)*plVar1;
  pFVar3 = (FRHIResource *)this->_padding_;
  if (pFVar3 != pFVar2) {
    this->_padding_ = (longlong)pFVar2;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar2);
    }
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

