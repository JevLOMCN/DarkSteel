// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// InitRHI @ 145cfb250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSolidColorTextureCube::InitRHI(FSolidColorTextureCube *this,FRHICommandListBase *param_1)

{
  FRHIResource *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  TRefCountPtr<FRHITexture> TVar7;
  FRHIResource *this_00;
  longlong *plVar8;
  undefined1 auStackY_2f8 [32];
  undefined8 local_2b8;
  undefined4 local_2b0;
  FSamplerStateInitializerRHI local_2a8;
  FRHIResource *local_288;
  undefined1 local_280 [40];
  undefined8 local_258;
  FName local_250 [2];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  uint local_22c;
  EPixelFormat local_215;
  undefined8 local_1e0;
  undefined8 local_1d8;
  FRHITextureDesc local_1c8;
  wchar_t *local_178;
  undefined8 local_170;
  FResourceBulkDataInterface *local_168;
  FName local_160;
  FName local_158;
  undefined1 local_148 [48];
  code *local_118;
  longlong local_108 [3];
  longlong *local_f0;
  FRHICommandListBase *local_e8;
  FRHITexture *local_e0;
  undefined1 local_b8 [32];
  uint local_98;
  TIntPoint<int>_u_0 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  ForElementType<EPixelFormat> local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  ERHIAccess local_60;
  ERHITextureInitAction local_5c;
  FResourceBulkDataInterface *local_58;
  FName local_50;
  FName local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  uStack_238 = 0;
  local_240 = 1;
  local_1e0 = 0;
  local_1d8 = 0;
  local_230 = 0;
  local_215 = this->PixelFormat;
  local_22c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1c8.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
  local_1c8.ClearValue.Value.Color[3] = 0.0;
  local_1c8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_1c8.AliasableFormats.ArrayMax = 1;
  local_1c8.NumSamples = '\x01';
  local_1c8.Dimension = TextureCube;
  local_1c8.Flags = None;
  local_1c8.UAVFormat = PF_Unknown;
  local_1c8.FastVRAMPercentage = 0xff;
  local_1c8.Depth = 1;
  local_1c8.ArraySize = 1;
  local_1c8.NumMips = '\x01';
  local_1c8.ClearValue._0_8_ = 1;
  local_1c8.ClearValue.Value._4_8_ = 0;
  local_1c8.ExtData = 0;
  local_1c8.AliasableFormats.ArrayNum = 0;
  local_1c8.GPUMask.GPUMask = local_22c;
  local_1c8.Format = local_215;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,0,1,&local_1c8.AliasableFormats.AllocatorInstance,0,
             &local_1c8.AliasableFormats.ArrayMax);
  local_170 = 0;
  local_178 = L"SolidColorCube";
  local_168 = (FResourceBulkDataInterface *)0x0;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_1c8.Flags = ShaderResource;
  pFVar4 = ::FName::FName(local_250,L"FSolidColorTextureCube");
  local_160 = *pFVar4;
  local_b8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_170._0_4_ = SRVMask;
  local_170._4_4_ = Initializer;
  local_b8._0_8_ = None;
  local_b8._8_8_ = 1;
  local_b8._16_8_ = 0;
  local_b8._24_4_ = 0.0;
  local_98 = 0;
  local_94._s_0.X = 1;
  local_94._s_0.Y = 1;
  local_8c._0_2_ = 1;
  local_8c._2_2_ = 1;
  local_88._0_1_ = '\x01';
  local_88._1_1_ = '\x01';
  local_88._2_1_ = Texture2D;
  local_88._3_1_ = PF_Unknown;
  local_84._0_1_ = PF_Unknown;
  local_84._1_1_ = 0xff;
  local_78 = (ForElementType<EPixelFormat>)0x0;
  local_70 = 0;
  local_6c = 1;
  FRHITextureDesc::operator=((FRHITextureDesc *)local_b8,&local_1c8);
  local_68 = local_178;
  local_60 = (ERHIAccess)local_170;
  local_5c = local_170._4_4_;
  local_58 = local_168;
  local_50 = local_160;
  local_48 = local_158;
  if (local_1c8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_148,(FRHITextureCreateDesc *)local_b8);
  if (local_118 == (code *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2b8 = 0;
  local_2b0 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar2 = local_118;
  plVar8 = local_108;
  if (local_f0 != (longlong *)0x0) {
    plVar8 = local_f0;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  puVar6 = (undefined8 *)(*pcVar2)(local_280,uVar5,&local_2b8);
  local_258 = puVar6[2];
  if (this->bInitToZero == false) {
    *(uint *)*puVar6 = this->ColorData;
  }
  else {
    memset((uint *)*puVar6,0,(longlong)GPixelFormats[this->PixelFormat].BlockBytes);
  }
  if (local_118 == (code *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2b8 = 1;
  local_2b0 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar2 = local_118;
  plVar8 = local_108;
  if (local_f0 != (longlong *)0x0) {
    plVar8 = local_f0;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  puVar6 = (undefined8 *)(*pcVar2)(local_280,uVar5,&local_2b8);
  local_258 = puVar6[2];
  if (this->bInitToZero == false) {
    *(uint *)*puVar6 = this->ColorData;
  }
  else {
    memset((uint *)*puVar6,0,(longlong)GPixelFormats[this->PixelFormat].BlockBytes);
  }
  if (local_118 == (code *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2b8 = 2;
  local_2b0 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar2 = local_118;
  plVar8 = local_108;
  if (local_f0 != (longlong *)0x0) {
    plVar8 = local_f0;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  puVar6 = (undefined8 *)(*pcVar2)(local_280,uVar5,&local_2b8);
  local_258 = puVar6[2];
  if (this->bInitToZero == false) {
    *(uint *)*puVar6 = this->ColorData;
  }
  else {
    memset((uint *)*puVar6,0,(longlong)GPixelFormats[this->PixelFormat].BlockBytes);
  }
  if (local_118 == (code *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2b8 = 3;
  local_2b0 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar2 = local_118;
  plVar8 = local_108;
  if (local_f0 != (longlong *)0x0) {
    plVar8 = local_f0;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  puVar6 = (undefined8 *)(*pcVar2)(local_280,uVar5,&local_2b8);
  local_258 = puVar6[2];
  if (this->bInitToZero == false) {
    *(uint *)*puVar6 = this->ColorData;
  }
  else {
    memset((uint *)*puVar6,0,(longlong)GPixelFormats[this->PixelFormat].BlockBytes);
  }
  if (local_118 == (code *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2b8 = 4;
  local_2b0 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar2 = local_118;
  plVar8 = local_108;
  if (local_f0 != (longlong *)0x0) {
    plVar8 = local_f0;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  puVar6 = (undefined8 *)(*pcVar2)(local_280,uVar5,&local_2b8);
  local_258 = puVar6[2];
  if (this->bInitToZero == false) {
    *(uint *)*puVar6 = this->ColorData;
  }
  else {
    memset((uint *)*puVar6,0,(longlong)GPixelFormats[this->PixelFormat].BlockBytes);
  }
  if (local_118 == (code *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2b8 = 5;
  local_2b0 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar2 = local_118;
  plVar8 = local_108;
  if (local_f0 != (longlong *)0x0) {
    plVar8 = local_f0;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  puVar6 = (undefined8 *)(*pcVar2)(local_280,uVar5,&local_2b8);
  if (this->bInitToZero == false) {
    *(uint *)*puVar6 = this->ColorData;
  }
  else {
    memset((uint *)*puVar6,0,(longlong)GPixelFormats[this->PixelFormat].BlockBytes);
  }
  TVar7 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_148);
  plVar8 = &this->_padding_;
  if ((FRHITexture *)plVar8 != TVar7.Reference) {
    pFVar1 = (FRHIResource *)*plVar8;
    *plVar8 = (TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  if (local_288 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_288);
  }
  local_2a8.Filter.Value = '\0';
  local_2a8.AddressU.Value = '\0';
  local_2a8.AddressV.Value = '\0';
  local_2a8.AddressW.Value = '\0';
  local_2a8.MipBias = 0.0;
  local_2a8.MinMipLevel = 0.0;
  local_2a8.MaxMipLevel = 3.4028235e+38;
  local_2a8.MaxAnisotropy = 0;
  local_2a8.BorderColor = 0;
  local_2a8.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_2a8);
  pFVar1 = (FRHIResource *)this->_padding_;
  if (pFVar1 != this_00) {
    this->_padding_ = (longlong)this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != (code *)0x0) {
    plVar8 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar8 = local_f0;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar8 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_78 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_78);
  }
  return;
}

// GetSizeX @ 145cfb9f0

uint __thiscall FSolidColorTextureCube::GetSizeX(FSolidColorTextureCube *this)

{
  return 1;
}

// GetSizeY @ 145cfba00

uint __thiscall FSolidColorTextureCube::GetSizeY(FSolidColorTextureCube *this)

{
  return 1;
}

