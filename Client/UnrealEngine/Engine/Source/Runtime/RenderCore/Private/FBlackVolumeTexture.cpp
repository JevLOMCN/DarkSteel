// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 9

// InitRHI @ 145cf9e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FBlackVolumeTexture<2,0>::InitRHI(FBlackVolumeTexture<2,0> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  FRHITextureCreateDesc *pFVar3;
  FName *pFVar4;
  FRHIResource *this_00;
  void **ppvVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStackY_238 [32];
  FRHIResource *local_208;
  FSamplerStateInitializerRHI local_200;
  FResourceBulkDataInterface local_1e0;
  undefined4 local_1d8;
  FName local_1d0;
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
  longlong local_118;
  void *local_108 [3];
  void **local_f0;
  FRHICommandListBase *local_e8;
  FName local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d0.ComparisonIndex.Value = 0;
  bVar7 = !GRHIGlobals.SupportsTexture3D;
  local_1e0 = (FResourceBulkDataInterface)&___7FColorBulkData__6B_;
  local_1d8 = 0;
  if (bVar7) {
    pFVar3 = FRHITextureCreateDesc::Create2D(&local_b8,L"BlackVolumeTexture2D",1,1,PF_B8G8R8A8);
  }
  else {
    pFVar3 = FRHITextureCreateDesc::Create3D
                       ((FRHITextureCreateDesc *)local_148,L"BlackVolumeTexture3D",1,1,1,PF_B8G8R8A8
                       );
  }
  local_1c8._0_8_ = None;
  local_1c8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
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
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1c8,(FRHITextureDesc *)pFVar3);
  local_178 = pFVar3->DebugName;
  local_170 = pFVar3->InitialState;
  local_16c = pFVar3->InitAction;
  local_168 = pFVar3->BulkData;
  local_160 = pFVar3->ClassName;
  local_158 = pFVar3->OwnerName;
  if (bVar7) {
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  if ((!bVar7) && (local_108[0] != (void *)0x0)) {
    FMemory::Free(local_108[0]);
  }
  local_1c8._0_8_ = ShaderResource;
  pFVar4 = ::FName::FName(&local_1d0,L"FBlackVolumeTexture");
  local_160 = *pFVar4;
  local_168 = &local_1e0;
  local_16c = BulkData;
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_1c8);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FName)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != 0) {
    ppvVar5 = local_108;
    if (local_f0 != (void **)0x0) {
      ppvVar5 = local_f0;
    }
    (**(code **)((longlong)*ppvVar5 + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar6 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  puVar1 = &this->field_0x20;
  if ((FRHIResource **)puVar1 != &local_208) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(FRHIResource **)puVar1 = local_208;
    local_208 = (FRHIResource *)0x0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_145cfa087;
    FRHIResource::Release(pFVar2);
  }
  if (local_208 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_208);
  }
LAB_145cfa087:
  local_200.Filter.Value = '\0';
  local_200.AddressU.Value = '\0';
  local_200.AddressV.Value = '\0';
  local_200.AddressW.Value = '\0';
  local_200.MipBias = 0.0;
  local_200.MinMipLevel = 0.0;
  local_200.MaxMipLevel = 3.4028235e+38;
  local_200.MaxAnisotropy = 0;
  local_200.BorderColor = 0;
  local_200.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_200);
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
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cfa120

uint __thiscall FBlackVolumeTexture<2,0>::GetSizeX(FBlackVolumeTexture<2,0> *this)

{
  return 1;
}

// GetSizeY @ 145cfa130

uint __thiscall FBlackVolumeTexture<2,0>::GetSizeY(FBlackVolumeTexture<2,0> *this)

{
  return 1;
}

// InitRHI @ 145cfa1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FBlackVolumeTexture<2,255>::InitRHI(FBlackVolumeTexture<2,255> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  FRHITextureCreateDesc *pFVar3;
  FName *pFVar4;
  FRHIResource *this_00;
  void **ppvVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStackY_238 [32];
  FRHIResource *local_208;
  FSamplerStateInitializerRHI local_200;
  FResourceBulkDataInterface local_1e0;
  undefined4 local_1d8;
  FName local_1d0;
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
  longlong local_118;
  void *local_108 [3];
  void **local_f0;
  FRHICommandListBase *local_e8;
  FName local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d0.ComparisonIndex.Value = 0;
  bVar7 = !GRHIGlobals.SupportsTexture3D;
  local_1e0 = (FResourceBulkDataInterface)&___7FColorBulkData__6B_;
  local_1d8 = 0xff000000;
  if (bVar7) {
    pFVar3 = FRHITextureCreateDesc::Create2D(&local_b8,L"BlackVolumeTexture2D",1,1,PF_B8G8R8A8);
  }
  else {
    pFVar3 = FRHITextureCreateDesc::Create3D
                       ((FRHITextureCreateDesc *)local_148,L"BlackVolumeTexture3D",1,1,1,PF_B8G8R8A8
                       );
  }
  local_1c8._0_8_ = None;
  local_1c8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
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
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1c8,(FRHITextureDesc *)pFVar3);
  local_178 = pFVar3->DebugName;
  local_170 = pFVar3->InitialState;
  local_16c = pFVar3->InitAction;
  local_168 = pFVar3->BulkData;
  local_160 = pFVar3->ClassName;
  local_158 = pFVar3->OwnerName;
  if (bVar7) {
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  if ((!bVar7) && (local_108[0] != (void *)0x0)) {
    FMemory::Free(local_108[0]);
  }
  local_1c8._0_8_ = ShaderResource;
  pFVar4 = ::FName::FName(&local_1d0,L"FBlackVolumeTexture");
  local_160 = *pFVar4;
  local_168 = &local_1e0;
  local_16c = BulkData;
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_1c8);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FName)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != 0) {
    ppvVar5 = local_108;
    if (local_f0 != (void **)0x0) {
      ppvVar5 = local_f0;
    }
    (**(code **)((longlong)*ppvVar5 + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar6 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  puVar1 = &this->field_0x20;
  if ((FRHIResource **)puVar1 != &local_208) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(FRHIResource **)puVar1 = local_208;
    local_208 = (FRHIResource *)0x0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_145cfa3fa;
    FRHIResource::Release(pFVar2);
  }
  if (local_208 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_208);
  }
LAB_145cfa3fa:
  local_200.Filter.Value = '\0';
  local_200.AddressU.Value = '\0';
  local_200.AddressV.Value = '\0';
  local_200.AddressW.Value = '\0';
  local_200.MipBias = 0.0;
  local_200.MinMipLevel = 0.0;
  local_200.MaxMipLevel = 3.4028235e+38;
  local_200.MaxAnisotropy = 0;
  local_200.BorderColor = 0;
  local_200.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_200);
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
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cfa490

uint __thiscall FBlackVolumeTexture<2,255>::GetSizeX(FBlackVolumeTexture<2,255> *this)

{
  return 1;
}

// GetSizeY @ 145cfa4a0

uint __thiscall FBlackVolumeTexture<2,255>::GetSizeY(FBlackVolumeTexture<2,255> *this)

{
  return 1;
}

// InitRHI @ 145cfa540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FBlackVolumeTexture<60,0>::InitRHI(FBlackVolumeTexture<60,0> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  FRHITextureCreateDesc *pFVar3;
  FName *pFVar4;
  FRHIResource *this_00;
  void **ppvVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStackY_238 [32];
  FRHIResource *local_208;
  FSamplerStateInitializerRHI local_200;
  FResourceBulkDataInterface local_1e0;
  undefined4 local_1d8;
  FName local_1d0;
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
  longlong local_118;
  void *local_108 [3];
  void **local_f0;
  FRHICommandListBase *local_e8;
  FName local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d0.ComparisonIndex.Value = 0;
  bVar7 = !GRHIGlobals.SupportsTexture3D;
  local_1e0 = (FResourceBulkDataInterface)&___7FColorBulkData__6B_;
  local_1d8 = 0;
  if (bVar7) {
    pFVar3 = FRHITextureCreateDesc::Create2D(&local_b8,L"BlackVolumeTexture2D",1,1,PF_R8G8B8A8_UINT)
    ;
  }
  else {
    pFVar3 = FRHITextureCreateDesc::Create3D
                       ((FRHITextureCreateDesc *)local_148,L"BlackVolumeTexture3D",1,1,1,
                        PF_R8G8B8A8_UINT);
  }
  local_1c8._0_8_ = None;
  local_1c8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
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
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1c8,(FRHITextureDesc *)pFVar3);
  local_178 = pFVar3->DebugName;
  local_170 = pFVar3->InitialState;
  local_16c = pFVar3->InitAction;
  local_168 = pFVar3->BulkData;
  local_160 = pFVar3->ClassName;
  local_158 = pFVar3->OwnerName;
  if (bVar7) {
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  if ((!bVar7) && (local_108[0] != (void *)0x0)) {
    FMemory::Free(local_108[0]);
  }
  local_1c8._0_8_ = ShaderResource;
  pFVar4 = ::FName::FName(&local_1d0,L"FBlackVolumeTexture");
  local_160 = *pFVar4;
  local_168 = &local_1e0;
  local_16c = BulkData;
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_1c8);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FName)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != 0) {
    ppvVar5 = local_108;
    if (local_f0 != (void **)0x0) {
      ppvVar5 = local_f0;
    }
    (**(code **)((longlong)*ppvVar5 + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar6 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  puVar1 = &this->field_0x20;
  if ((FRHIResource **)puVar1 != &local_208) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(FRHIResource **)puVar1 = local_208;
    local_208 = (FRHIResource *)0x0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_145cfa767;
    FRHIResource::Release(pFVar2);
  }
  if (local_208 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_208);
  }
LAB_145cfa767:
  local_200.Filter.Value = '\0';
  local_200.AddressU.Value = '\0';
  local_200.AddressV.Value = '\0';
  local_200.AddressW.Value = '\0';
  local_200.MipBias = 0.0;
  local_200.MinMipLevel = 0.0;
  local_200.MaxMipLevel = 3.4028235e+38;
  local_200.MaxAnisotropy = 0;
  local_200.BorderColor = 0;
  local_200.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_200);
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
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cfa800

uint __thiscall FBlackVolumeTexture<60,0>::GetSizeX(FBlackVolumeTexture<60,0> *this)

{
  return 1;
}

// GetSizeY @ 145cfa810

uint __thiscall FBlackVolumeTexture<60,0>::GetSizeY(FBlackVolumeTexture<60,0> *this)

{
  return 1;
}

