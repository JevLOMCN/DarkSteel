// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// GetDisplayGamma @ 1450d0af0

float __thiscall FPlanarReflectionRenderTarget::GetDisplayGamma(FPlanarReflectionRenderTarget *this)

{
  return __real_3f800000;
}

// GetFriendlyName @ 1450d0ba0

FString * __thiscall
FPlanarReflectionRenderTarget::GetFriendlyName
          (FPlanarReflectionRenderTarget *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPlanarReflectionRenderTarget");
  return __return_storage_ptr__;
}

// GetGPUMask @ 1450d0f90

FRHIGPUMask __thiscall
FPlanarReflectionRenderTarget::GetGPUMask
          (FPlanarReflectionRenderTarget *this,FRHICommandListImmediate *param_1)

{
  *(int *)param_1 = (int)this->_padding_;
  return (FRHIGPUMask)(uint)param_1;
}

// GetSizeX @ 1450d1e70

uint __thiscall FPlanarReflectionRenderTarget::GetSizeX(FPlanarReflectionRenderTarget *this)

{
  return (this->Size).field0_0x0._s_0.X;
}

// GetSizeXY @ 1450d1e80

TIntPoint<int> __thiscall
FPlanarReflectionRenderTarget::GetSizeXY(FPlanarReflectionRenderTarget *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)((longlong)&this->_padding_ + 4);
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 1450d1ea0

uint __thiscall FPlanarReflectionRenderTarget::GetSizeY(FPlanarReflectionRenderTarget *this)

{
  return (this->Size).field0_0x0._s_0.Y;
}

// InitRHI @ 1450de160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPlanarReflectionRenderTarget::InitRHI
          (FPlanarReflectionRenderTarget *this,FRHICommandListBase *param_1)

{
  FRHIResource *pFVar1;
  FRHIResource *pFVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong *plVar5;
  undefined1 auStackY_1b8 [32];
  FRHIResource *local_178;
  FSamplerStateInitializerRHI local_170;
  undefined1 local_150 [8];
  undefined1 local_148 [28];
  int local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined2 local_118;
  undefined4 local_116;
  ForElementType<EPixelFormat> local_110;
  undefined4 local_100;
  int local_fc;
  wchar_t *local_f8;
  undefined8 local_f0;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  undefined1 local_c8 [48];
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  FRHICommandListBase *local_68;
  FRHITexture *local_60;
  void *local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_170.Filter.Value = '\x01';
  local_170.AddressU.Value = '\x01';
  local_170.AddressV.Value = '\x01';
  local_170.AddressW.Value = '\x01';
  local_170.MipBias = 0.0;
  local_170.MinMipLevel = 0.0;
  local_170.BorderColor = 0;
  local_170.SamplerComparisonFunction.Value = '\0';
  local_170.MaxMipLevel = 3.4028235e+38;
  local_170.MaxAnisotropy = 0;
  pFVar2 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_170);
  pFVar1 = (FRHIResource *)this->_padding_;
  if (pFVar1 != pFVar2) {
    this->_padding_ = (longlong)pFVar2;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar2);
    }
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  local_60 = (FRHITexture *)0x0;
  bVar4 = (byte)GNumExplicitGPUsForRendering;
  local_58 = (void *)0x0;
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_,local_150);
  local_124 = *puVar3;
  local_148._24_4_ = FClearValueBinding::Black.Value.Color[3];
  local_110.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_fc = 1;
  local_116 = 0xff000a00;
  local_148._0_8_ = 9;
  local_11c = 0x10001;
  local_118 = 0x101;
  local_148._8_8_ = FClearValueBinding::Black._0_8_;
  local_148._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_128 = 0;
  local_100 = 0;
  local_12c = (1 << (bVar4 & 0x1f)) + -1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,0,1,&local_110,0,&local_fc);
  local_f0._0_4_ = SRVMask;
  local_f0._4_4_ = Default;
  local_f8 = L"FPlanarReflectionRenderTarget";
  local_e8 = (FResourceBulkDataInterface *)0x0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_c8,(FRHITextureCreateDesc *)local_148);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_c8);
  if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_c8);
  }
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar5 = local_70;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_c8._0_8_ != 0) {
    plVar5 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  plVar5 = &this->_padding_;
  if ((FRHIResource **)plVar5 != &local_178) {
    pFVar1 = (FRHIResource *)*plVar5;
    *plVar5 = (longlong)local_178;
    local_178 = (FRHIResource *)0x0;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  pFVar1 = (FRHIResource *)*plVar5;
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != pFVar1) {
    this->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar1);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_178 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_178);
  }
  if (local_110.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_110.SecondaryData);
  }
  return;
}

