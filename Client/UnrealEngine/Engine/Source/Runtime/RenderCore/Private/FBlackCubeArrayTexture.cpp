// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// InitRHI @ 145cfbaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBlackCubeArrayTexture::InitRHI(FBlackCubeArrayTexture *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  TRefCountPtr<FRHITexture> TVar8;
  FRHIResource *this_00;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStackY_2e8 [32];
  FSamplerStateInitializerRHI local_2a8;
  uint local_288 [4];
  FRHIResource *local_278;
  FName local_270;
  undefined1 local_268 [48];
  FRHITextureDesc local_238;
  wchar_t *local_1e8;
  undefined8 local_1e0;
  FResourceBulkDataInterface *local_1d8;
  FName local_1d0;
  FName local_1c8;
  undefined1 local_1b8 [32];
  uint local_198;
  TIntPoint<int>_u_0 local_194;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  ForElementType<EPixelFormat> local_178;
  int local_170;
  int local_16c;
  wchar_t *local_168;
  ERHIAccess local_160;
  ERHITextureInitAction local_15c;
  FResourceBulkDataInterface *local_158;
  FName local_150;
  FName local_148;
  undefined1 local_138 [48];
  code *local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  FRHICommandListBase *local_d8;
  FRHITexture *local_d0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar10 = 0;
  uStack_98 = 0;
  local_40 = 0;
  local_a0 = 1;
  local_90 = 0;
  local_238.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_238.ClearValue.Value.Color[3] = 0.0;
  local_238.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
  local_38 = 0;
  local_238.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_238.AliasableFormats.ArrayMax = 1;
  local_238.Dimension = TextureCubeArray;
  local_238.Format = PF_B8G8R8A8;
  local_238.UAVFormat = PF_Unknown;
  local_238.FastVRAMPercentage = 0xff;
  local_238.Flags = None;
  local_238.Depth = 1;
  local_238.ArraySize = 1;
  local_238.NumMips = '\x01';
  local_238.NumSamples = '\x01';
  local_238.ClearValue._0_8_ = 1;
  local_238.ClearValue.Value._4_8_ = 0;
  local_238.ExtData = 0;
  local_238.AliasableFormats.ArrayNum = 0;
  local_8c = local_238.GPUMask.GPUMask;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,0,1,&local_238.AliasableFormats.AllocatorInstance,0,
             &local_238.AliasableFormats.ArrayMax);
  local_1e0 = 0;
  local_1e8 = L"BlackCubeArray";
  local_1d8 = (FResourceBulkDataInterface *)0x0;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  local_238.Flags = ShaderResource;
  pFVar5 = ::FName::FName(&local_270,L"FBlackCubeArrayTexture");
  local_1d0 = *pFVar5;
  local_1b8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1e0._0_4_ = SRVMask;
  local_1e0._4_4_ = Initializer;
  local_1b8._0_8_ = None;
  local_1b8._8_8_ = 1;
  local_1b8._16_8_ = 0;
  local_1b8._24_4_ = 0.0;
  local_198 = 0;
  local_194._s_0.X = 1;
  local_194._s_0.Y = 1;
  local_18c._0_2_ = 1;
  local_18c._2_2_ = 1;
  local_188._0_1_ = '\x01';
  local_188._1_1_ = '\x01';
  local_188._2_1_ = Texture2D;
  local_188._3_1_ = PF_Unknown;
  local_184._0_1_ = PF_Unknown;
  local_184._1_1_ = 0xff;
  local_178 = (ForElementType<EPixelFormat>)0x0;
  local_170 = 0;
  local_16c = 1;
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1b8,&local_238);
  local_168 = local_1e8;
  local_160 = (ERHIAccess)local_1e0;
  local_15c = local_1e0._4_4_;
  local_158 = local_1d8;
  local_150 = local_1d0;
  local_148 = local_1c8;
  if (local_238.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_238.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_138,(FRHITextureCreateDesc *)local_1b8);
  do {
    if (local_108 == (code *)0x0) {
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
    local_288[1] = 0;
    local_288[2] = 0;
    local_288[0] = uVar10;
    UE::Core::Private::Function::CheckCallable(local_108);
    pcVar3 = local_108;
    plVar9 = local_f8;
    if (local_e0 != (longlong *)0x0) {
      plVar9 = local_e0;
    }
    uVar6 = (**(code **)(*plVar9 + 8))();
    puVar7 = (undefined8 *)(*pcVar3)(local_268,uVar6,local_288);
    uVar10 = uVar10 + 1;
    *(undefined4 *)*puVar7 = 0;
  } while (uVar10 < 6);
  TVar8 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_138);
  puVar1 = &this->field_0x20;
  if ((FRHITexture *)puVar1 != TVar8.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_278 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_278);
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
  if ((local_d8 != (FRHICommandListBase *)0x0) && (local_d0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_138);
  }
  if (local_108 != (code *)0x0) {
    plVar9 = local_f8;
    if (local_e0 != (longlong *)0x0) {
      plVar9 = local_e0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_138._0_8_ != 0) {
    plVar9 = (longlong *)(local_138 + 0x10);
    if ((longlong *)local_138._40_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_138._40_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_178 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_178);
  }
  return;
}

// GetSizeX @ 145cfbe50

uint __thiscall FBlackCubeArrayTexture::GetSizeX(FBlackCubeArrayTexture *this)

{
  return 1;
}

// GetSizeY @ 145cfbe60

uint __thiscall FBlackCubeArrayTexture::GetSizeY(FBlackCubeArrayTexture *this)

{
  return 1;
}

