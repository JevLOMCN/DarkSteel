// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// InitRHI @ 145cfbf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FBlackUintTexture::InitRHI(FBlackUintTexture *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FRHITextureCreateDesc *pFVar6;
  FName *pFVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  TRefCountPtr<FRHITexture> TVar10;
  FRHIResource *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar11;
  ForElementType<EPixelFormat> FVar12;
  longlong *plVar13;
  undefined1 auStack_278 [32];
  FSamplerStateInitializerRHI local_248;
  undefined8 local_228;
  undefined4 local_220;
  FRHIResource *local_218;
  undefined1 local_210 [16];
  longlong lStack_200;
  longlong local_1f8;
  FName local_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  uint local_1a8;
  TIntPoint<int>_u_0 local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined2 local_194;
  ForElementType<EPixelFormat> local_188;
  int local_180;
  int local_17c;
  wchar_t *local_178;
  ERHIAccess local_170;
  ERHITextureInitAction local_16c;
  FResourceBulkDataInterface *local_168;
  FName local_160;
  FName local_158;
  undefined1 local_148 [64];
  undefined1 local_108 [24];
  ForElementType<EPixelFormat> local_f0;
  FRHICommandListBase *local_e8;
  FLastRenderTimeContainer local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  pFVar6 = FRHITextureCreateDesc::Create2D(&local_b8,L"BlackUintTexture",1,1,PF_R32G32B32A32_UINT);
  pFVar6->_padding_ = 8;
  pFVar7 = ::FName::FName(&local_1f0,L"FBlackUintTexture");
  pFVar6->ClassName = *pFVar7;
  pFVar6->InitAction = Initializer;
  local_1c8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1c8._0_8_ = None;
  local_1c8._8_8_ = 1;
  local_1c8._16_8_ = 0;
  local_1c8._24_4_ = 0.0;
  local_1a8 = 0;
  local_1a4._s_0.X = 1;
  local_1a4._s_0.Y = 1;
  local_19c._0_2_ = 1;
  local_19c._2_2_ = 1;
  local_198._0_1_ = '\x01';
  local_198._1_1_ = '\x01';
  local_198._2_1_ = Texture2D;
  local_198._3_1_ = PF_Unknown;
  local_194._0_1_ = PF_Unknown;
  local_194._1_1_ = 0xff;
  local_188 = (ForElementType<EPixelFormat>)0x0;
  local_180 = 0;
  local_17c = 1;
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1c8,(FRHITextureDesc *)pFVar6);
  local_178 = pFVar6->DebugName;
  local_170 = pFVar6->InitialState;
  local_16c = pFVar6->InitAction;
  local_168 = pFVar6->BulkData;
  local_160 = pFVar6->ClassName;
  local_158 = pFVar6->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_1c8);
  if ((code *)local_148._48_8_ == (code *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_228 = 0;
  local_220 = 0;
  UE::Core::Private::Function::CheckCallable((void *)local_148._48_8_);
  uVar4 = local_148._48_8_;
  FVar12 = (ForElementType<EPixelFormat>)local_108;
  if (local_f0 != (ForElementType<EPixelFormat>)0x0) {
    FVar12 = local_f0;
  }
  uVar8 = (**(code **)(*(longlong *)FVar12 + 8))();
  puVar9 = (undefined8 *)(*(code *)uVar4)(local_1e8,uVar8,&local_228);
  local_1f8 = puVar9[2];
  memset((void *)*puVar9,0,puVar9[1]);
  TVar10 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  puVar1 = &this->field_0x20;
  if ((FRHITexture *)puVar1 != TVar10.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar10.Reference)->_padding_;
    (TVar10.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_218 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_218);
  }
  local_248.Filter.Value = '\0';
  local_248.AddressU.Value = '\0';
  local_248.AddressV.Value = '\0';
  local_248.AddressW.Value = '\0';
  local_248.MipBias = 0.0;
  local_248.MinMipLevel = 0.0;
  local_248.MaxMipLevel = 3.4028235e+38;
  local_248.MaxAnisotropy = 0;
  local_248.BorderColor = 0;
  local_248.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_248);
  pFVar2 = *(FRHIResource **)&this->field_0x28;
  if (pFVar2 != this_00) {
    *(FRHIResource **)&this->field_0x28 = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  lStack_200 = 0;
  local_210._8_8_ = 2;
  FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
            ((FInitializer *)(local_210 + 8),*(FRHITexture **)puVar1);
  TVar11 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHITexture *)local_210,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x58;
  if ((FRHIShaderResourceView *)puVar1 != TVar11.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar11.Reference;
    *(undefined8 *)TVar11.Reference = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if ((FRHIResource *)local_210._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_210._0_8_);
  }
  if ((local_e8 != (FRHICommandListBase *)0x0) &&
     ((FRHITexture *)local_e0.LastRenderTime != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if ((code *)local_148._48_8_ != (code *)0x0) {
    FVar12 = (ForElementType<EPixelFormat>)local_108;
    if (local_f0 != (ForElementType<EPixelFormat>)0x0) {
      FVar12 = local_f0;
    }
    (**(code **)(*(longlong *)FVar12 + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar13 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cfc220

uint __thiscall FBlackUintTexture::GetSizeX(FBlackUintTexture *this)

{
  return 1;
}

// GetSizeY @ 145cfc230

uint __thiscall FBlackUintTexture::GetSizeY(FBlackUintTexture *this)

{
  return 1;
}

