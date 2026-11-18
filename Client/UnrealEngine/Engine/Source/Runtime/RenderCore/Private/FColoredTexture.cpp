// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 9

// InitRHI @ 145cf86c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FColoredTexture<0,0,0,255>::InitRHI(FColoredTexture<0,0,0,255> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHITextureCreateDesc *pFVar5;
  FName *pFVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  TRefCountPtr<FRHITexture> TVar9;
  FRHIResource *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar10;
  FLastRenderTimeContainer FVar11;
  longlong *plVar12;
  undefined1 auStack_298 [32];
  FSamplerStateInitializerRHI local_260;
  undefined8 local_238;
  undefined4 local_230;
  FRHIResource *local_228;
  undefined1 local_220 [16];
  longlong lStack_210;
  FName local_208;
  undefined1 local_200 [56];
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
  undefined1 local_148 [48];
  code *local_118;
  longlong local_108 [3];
  FLastRenderTimeContainer local_f0;
  FRHICommandListBase *local_e8;
  FRHITexture *local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  pFVar5 = FRHITextureCreateDesc::Create2D(&local_b8,L"ColoredTexture",1,1,PF_R8G8B8A8);
  pFVar5->_padding_ = 8;
  pFVar6 = ::FName::FName(&local_208,L"FColoredTexture");
  pFVar5->ClassName = *pFVar6;
  pFVar5->InitAction = Initializer;
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
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1c8,(FRHITextureDesc *)pFVar5);
  local_178 = pFVar5->DebugName;
  local_170 = pFVar5->InitialState;
  local_16c = pFVar5->InitAction;
  local_168 = pFVar5->BulkData;
  local_160 = pFVar5->ClassName;
  local_158 = pFVar5->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_1c8);
  if (local_118 == (code *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_238 = 0;
  local_230 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar3 = local_118;
  FVar11.LastRenderTime = (double)local_108;
  if ((longlong *)local_f0.LastRenderTime != (longlong *)0x0) {
    FVar11.LastRenderTime = local_f0.LastRenderTime;
  }
  uVar7 = (**(code **)(*(longlong *)FVar11.LastRenderTime + 8))();
  puVar8 = (undefined8 *)(*pcVar3)(local_200,uVar7,&local_238);
  *(undefined4 *)*puVar8 = 0xff000000;
  TVar9 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  puVar1 = &this->field_0x20;
  if ((FRHITexture *)puVar1 != TVar9.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_228 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_228);
  }
  local_260.Filter.Value = '\0';
  local_260.AddressU.Value = '\0';
  local_260.AddressV.Value = '\0';
  local_260.AddressW.Value = '\0';
  local_260.MipBias = 0.0;
  local_260.MinMipLevel = 0.0;
  local_260.MaxMipLevel = 3.4028235e+38;
  local_260.MaxAnisotropy = 0;
  local_260.BorderColor = 0;
  local_260.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_260);
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
  lStack_210 = 0;
  local_220._8_8_ = 2;
  FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
            ((FInitializer *)(local_220 + 8),*(FRHITexture **)puVar1);
  TVar10 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHITexture *)local_220,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x58;
  if ((FRHIShaderResourceView *)puVar1 != TVar10.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar10.Reference;
    *(undefined8 *)TVar10.Reference = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if ((FRHIResource *)local_220._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_220._0_8_);
  }
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != (code *)0x0) {
    FVar11.LastRenderTime = (double)local_108;
    if ((longlong *)local_f0.LastRenderTime != (longlong *)0x0) {
      FVar11.LastRenderTime = local_f0.LastRenderTime;
    }
    (**(code **)(*(longlong *)FVar11.LastRenderTime + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar12 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cf89e0

uint __thiscall FColoredTexture<0,0,0,255>::GetSizeX(FColoredTexture<0,0,0,255> *this)

{
  return 1;
}

// GetSizeY @ 145cf89f0

uint __thiscall FColoredTexture<0,0,0,255>::GetSizeY(FColoredTexture<0,0,0,255> *this)

{
  return 1;
}

// InitRHI @ 145cf8b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FColoredTexture<255,255,255,255>::InitRHI
          (FColoredTexture<255,255,255,255> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHITextureCreateDesc *pFVar5;
  FName *pFVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  TRefCountPtr<FRHITexture> TVar9;
  FRHIResource *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar10;
  FLastRenderTimeContainer FVar11;
  longlong *plVar12;
  undefined1 auStack_298 [32];
  FSamplerStateInitializerRHI local_260;
  undefined8 local_238;
  undefined4 local_230;
  FRHIResource *local_228;
  undefined1 local_220 [16];
  longlong lStack_210;
  FName local_208;
  undefined1 local_200 [56];
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
  undefined1 local_148 [48];
  code *local_118;
  longlong local_108 [3];
  FLastRenderTimeContainer local_f0;
  FRHICommandListBase *local_e8;
  FRHITexture *local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  pFVar5 = FRHITextureCreateDesc::Create2D(&local_b8,L"ColoredTexture",1,1,PF_R8G8B8A8);
  pFVar5->_padding_ = 8;
  pFVar6 = ::FName::FName(&local_208,L"FColoredTexture");
  pFVar5->ClassName = *pFVar6;
  pFVar5->InitAction = Initializer;
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
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1c8,(FRHITextureDesc *)pFVar5);
  local_178 = pFVar5->DebugName;
  local_170 = pFVar5->InitialState;
  local_16c = pFVar5->InitAction;
  local_168 = pFVar5->BulkData;
  local_160 = pFVar5->ClassName;
  local_158 = pFVar5->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_1c8);
  if (local_118 == (code *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_238 = 0;
  local_230 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar3 = local_118;
  FVar11.LastRenderTime = (double)local_108;
  if ((longlong *)local_f0.LastRenderTime != (longlong *)0x0) {
    FVar11.LastRenderTime = local_f0.LastRenderTime;
  }
  uVar7 = (**(code **)(*(longlong *)FVar11.LastRenderTime + 8))();
  puVar8 = (undefined8 *)(*pcVar3)(local_200,uVar7,&local_238);
  *(undefined4 *)*puVar8 = 0xffffffff;
  TVar9 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  puVar1 = &this->field_0x20;
  if ((FRHITexture *)puVar1 != TVar9.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_228 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_228);
  }
  local_260.Filter.Value = '\0';
  local_260.AddressU.Value = '\0';
  local_260.AddressV.Value = '\0';
  local_260.AddressW.Value = '\0';
  local_260.MipBias = 0.0;
  local_260.MinMipLevel = 0.0;
  local_260.MaxMipLevel = 3.4028235e+38;
  local_260.MaxAnisotropy = 0;
  local_260.BorderColor = 0;
  local_260.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_260);
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
  lStack_210 = 0;
  local_220._8_8_ = 2;
  FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
            ((FInitializer *)(local_220 + 8),*(FRHITexture **)puVar1);
  TVar10 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHITexture *)local_220,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x58;
  if ((FRHIShaderResourceView *)puVar1 != TVar10.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar10.Reference;
    *(undefined8 *)TVar10.Reference = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if ((FRHIResource *)local_220._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_220._0_8_);
  }
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != (code *)0x0) {
    FVar11.LastRenderTime = (double)local_108;
    if ((longlong *)local_f0.LastRenderTime != (longlong *)0x0) {
      FVar11.LastRenderTime = local_f0.LastRenderTime;
    }
    (**(code **)(*(longlong *)FVar11.LastRenderTime + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar12 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cf8e30

uint __thiscall FColoredTexture<255,255,255,255>::GetSizeX(FColoredTexture<255,255,255,255> *this)

{
  return 1;
}

// GetSizeY @ 145cf8e40

uint __thiscall FColoredTexture<255,255,255,255>::GetSizeY(FColoredTexture<255,255,255,255> *this)

{
  return 1;
}

// InitRHI @ 145cf8f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FColoredTexture<0,0,0,0>::InitRHI(FColoredTexture<0,0,0,0> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHITextureCreateDesc *pFVar5;
  FName *pFVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  TRefCountPtr<FRHITexture> TVar9;
  FRHIResource *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar10;
  FLastRenderTimeContainer FVar11;
  longlong *plVar12;
  undefined1 auStack_298 [32];
  FSamplerStateInitializerRHI local_260;
  undefined8 local_238;
  undefined4 local_230;
  FRHIResource *local_228;
  undefined1 local_220 [16];
  longlong lStack_210;
  FName local_208;
  undefined1 local_200 [56];
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
  undefined1 local_148 [48];
  code *local_118;
  longlong local_108 [3];
  FLastRenderTimeContainer local_f0;
  FRHICommandListBase *local_e8;
  FRHITexture *local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  pFVar5 = FRHITextureCreateDesc::Create2D(&local_b8,L"ColoredTexture",1,1,PF_R8G8B8A8);
  pFVar5->_padding_ = 8;
  pFVar6 = ::FName::FName(&local_208,L"FColoredTexture");
  pFVar5->ClassName = *pFVar6;
  pFVar5->InitAction = Initializer;
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
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1c8,(FRHITextureDesc *)pFVar5);
  local_178 = pFVar5->DebugName;
  local_170 = pFVar5->InitialState;
  local_16c = pFVar5->InitAction;
  local_168 = pFVar5->BulkData;
  local_160 = pFVar5->ClassName;
  local_158 = pFVar5->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_1c8);
  if (local_118 == (code *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_238 = 0;
  local_230 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar3 = local_118;
  FVar11.LastRenderTime = (double)local_108;
  if ((longlong *)local_f0.LastRenderTime != (longlong *)0x0) {
    FVar11.LastRenderTime = local_f0.LastRenderTime;
  }
  uVar7 = (**(code **)(*(longlong *)FVar11.LastRenderTime + 8))();
  puVar8 = (undefined8 *)(*pcVar3)(local_200,uVar7,&local_238);
  *(undefined4 *)*puVar8 = 0;
  TVar9 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  puVar1 = &this->field_0x20;
  if ((FRHITexture *)puVar1 != TVar9.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_228 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_228);
  }
  local_260.Filter.Value = '\0';
  local_260.AddressU.Value = '\0';
  local_260.AddressV.Value = '\0';
  local_260.AddressW.Value = '\0';
  local_260.MipBias = 0.0;
  local_260.MinMipLevel = 0.0;
  local_260.MaxMipLevel = 3.4028235e+38;
  local_260.MaxAnisotropy = 0;
  local_260.BorderColor = 0;
  local_260.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_260);
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
  lStack_210 = 0;
  local_220._8_8_ = 2;
  FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
            ((FInitializer *)(local_220 + 8),*(FRHITexture **)puVar1);
  TVar10 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHITexture *)local_220,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x58;
  if ((FRHIShaderResourceView *)puVar1 != TVar10.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar10.Reference;
    *(undefined8 *)TVar10.Reference = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if ((FRHIResource *)local_220._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_220._0_8_);
  }
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != (code *)0x0) {
    FVar11.LastRenderTime = (double)local_108;
    if ((longlong *)local_f0.LastRenderTime != (longlong *)0x0) {
      FVar11.LastRenderTime = local_f0.LastRenderTime;
    }
    (**(code **)(*(longlong *)FVar11.LastRenderTime + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar12 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cf9250

uint __thiscall FColoredTexture<0,0,0,0>::GetSizeX(FColoredTexture<0,0,0,0> *this)

{
  return 1;
}

// GetSizeY @ 145cf9260

uint __thiscall FColoredTexture<0,0,0,0>::GetSizeY(FColoredTexture<0,0,0,0> *this)

{
  return 1;
}

