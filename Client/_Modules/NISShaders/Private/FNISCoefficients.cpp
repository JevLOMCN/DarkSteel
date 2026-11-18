// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISShaders
// Functions: 2

// InitRHI @ 14de4a6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FNISCoefficients::InitRHI(FNISCoefficients *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined **local_488;
  float (*local_480) [8];
  undefined4 local_478;
  undefined **local_470;
  float (*local_468) [8];
  FNameEntryId local_460;
  undefined **local_458;
  ushort (*local_450) [8];
  FNameEntryId local_448;
  undefined **local_440;
  ushort (*local_438) [8];
  undefined4 local_430;
  FRHITextureDesc local_428;
  wchar_t *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined ***local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  FRHITextureDesc local_3a8;
  wchar_t *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined ***local_348;
  undefined8 local_340;
  undefined8 local_338;
  FRHITextureDesc local_328;
  wchar_t *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined ***local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  FRHITextureDesc local_2a8;
  wchar_t *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined ***local_248;
  undefined8 local_240;
  undefined8 local_238;
  FRHITextureDesc local_228;
  wchar_t *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined ***local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  FRHITextureDesc local_1a8;
  wchar_t *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined ***local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined ***local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined ***local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  local_4a8 = 2;
  uStack_4a4 = 0x40;
  local_478 = 0x800;
  local_480 = coef_scale;
  local_488 = &___7FNISCoefficientsResourceBulkData_FNISCoefficients__6B_;
  local_428.ClearValue._0_8_ = 1;
  local_428.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_428.ClearValue.Value._4_8_ = 0;
  local_3d8 = L"FNISCoefficients::Scaler";
  local_428.Extent.field0_0x0 = (TIntPoint<int>_u_0)0x4000000002;
  local_3c8 = &local_488;
  local_428.ClearValue.Value.Color[3] = 0.0;
  local_428.ExtData = 0;
  local_428.Depth = 1;
  local_428.ArraySize = 1;
  local_428.Dimension = Texture2D;
  local_428.Format = PF_A32B32G32R32F;
  local_428.UAVFormat = PF_Unknown;
  local_428.FastVRAMPercentage = 0xff;
  local_428.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_428.AliasableFormats.ArrayNum = 0;
  local_428.AliasableFormats.ArrayMax = 1;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_428.NumMips = '\x01';
  local_428.NumSamples = '\x01';
  local_428.Flags = None;
  local_3cc = 1;
  FRHITextureDesc::FRHITextureDesc(&local_228,&local_428);
  local_1d8 = local_3d8;
  local_1d0 = local_3d0;
  local_1cc = local_3cc;
  local_1c8 = local_3c8;
  local_1c0 = local_3c0;
  local_1b8 = local_3b8;
  if (local_428.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_428.AliasableFormats.AllocatorInstance.SecondaryData);
  }
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
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)local_4c8);
  pTVar1 = &this->ScalerRHI;
  if (pTVar1 == (TRefCountPtr<FRHITexture> *)local_4c8) {
LAB_14de4a84b:
    if ((FRHITexture *)local_4c8._0_8_ != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_4c8._0_8_);
    }
  }
  else {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)local_4c8._0_8_;
    local_4c8._0_8_ = (FRHITexture *)0x0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
      goto LAB_14de4a84b;
    }
  }
  if (local_228.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_228.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_468 = coef_usm;
  local_4a0 = 2;
  local_3a8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_49c = 0x40;
  local_488 = &___7FResourceBulkDataInterface__6B_;
  local_358 = L"FNISCoefficients::Usm";
  local_3a8.Extent.field0_0x0 = (TIntPoint<int>_u_0)0x4000000002;
  local_348 = &local_470;
  local_470 = &___7FNISCoefficientsResourceBulkData_FNISCoefficients__6B_;
  local_460.Value = 0x800;
  local_3a8.ClearValue._0_8_ = 1;
  local_3a8.ClearValue.Value._4_8_ = 0;
  local_3a8.ClearValue.Value.Color[3] = 0.0;
  local_3a8.ExtData = 0;
  local_3a8.Depth = 1;
  local_3a8.ArraySize = 1;
  local_3a8.Dimension = Texture2D;
  local_3a8.Format = PF_A32B32G32R32F;
  local_3a8.UAVFormat = PF_Unknown;
  local_3a8.FastVRAMPercentage = 0xff;
  local_3a8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_3a8.AliasableFormats.ArrayNum = 0;
  local_3a8.AliasableFormats.ArrayMax = 1;
  local_350 = 0;
  local_340 = 0;
  local_338 = 0;
  local_3a8.NumMips = '\x01';
  local_3a8.NumSamples = '\x01';
  local_3a8.Flags = None;
  local_34c = 1;
  FRHITextureDesc::FRHITextureDesc(&local_1a8,&local_3a8);
  local_158 = local_358;
  local_150 = local_350;
  local_14c = local_34c;
  local_148 = local_348;
  local_140 = local_340;
  local_138 = local_338;
  if (local_3a8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_3a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
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
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)(local_4c8 + 8));
  pTVar1 = &this->UsmRHI;
  if (pTVar1 == (TRefCountPtr<FRHITexture> *)(local_4c8 + 8)) {
LAB_14de4aa03:
    if ((FRHITexture *)local_4c8._8_8_ != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_4c8._8_8_);
    }
  }
  else {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)local_4c8._8_8_;
    local_4c8._8_8_ = (FRHITexture *)0x0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
      goto LAB_14de4aa03;
    }
  }
  if (local_1a8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_450 = coef_scale_fp16;
  local_498 = 2;
  local_328.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_494 = 0x40;
  local_2d8 = L"FNISCoefficients::ScalerHalfPrecision";
  local_328.Extent.field0_0x0 = (TIntPoint<int>_u_0)0x4000000002;
  local_2c8 = &local_458;
  local_470 = &___7FResourceBulkDataInterface__6B_;
  local_458 = &___7FNISCoefficientsResourceBulkData_FNISCoefficients__6B_;
  local_448.Value = 0x400;
  local_328.ClearValue._0_8_ = 1;
  local_328.ClearValue.Value._4_8_ = 0;
  local_328.ClearValue.Value.Color[3] = 0.0;
  local_328.ExtData = 0;
  local_328.Depth = 1;
  local_328.ArraySize = 1;
  local_328.Dimension = Texture2D;
  local_328.Format = PF_FloatRGBA;
  local_328.UAVFormat = PF_Unknown;
  local_328.FastVRAMPercentage = 0xff;
  local_328.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_328.AliasableFormats.ArrayNum = 0;
  local_328.AliasableFormats.ArrayMax = 1;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_328.NumMips = '\x01';
  local_328.NumSamples = '\x01';
  local_328.Flags = None;
  local_2cc = 1;
  FRHITextureDesc::FRHITextureDesc(&local_128,&local_328);
  local_d8 = local_2d8;
  local_d0 = local_2d0;
  local_cc = local_2cc;
  local_c8 = local_2c8;
  local_c0 = local_2c0;
  local_b8 = local_2b8;
  if (local_328.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_328.AliasableFormats.AllocatorInstance.SecondaryData);
  }
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
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)local_4b8);
  pTVar1 = &this->ScalerHalfPrecisionRHI;
  if (pTVar1 == (TRefCountPtr<FRHITexture> *)local_4b8) {
LAB_14de4abd3:
    if ((FRHITexture *)local_4b8._0_8_ != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_4b8._0_8_);
    }
  }
  else {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)local_4b8._0_8_;
    local_4b8._0_8_ = (FRHITexture *)0x0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
      goto LAB_14de4abd3;
    }
  }
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_438 = coef_usm_fp16;
  local_490 = 2;
  local_2a8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_48c = 0x40;
  local_258 = L"FNISCoefficients::UsmHalfPrecision";
  local_2a8.Extent.field0_0x0 = (TIntPoint<int>_u_0)0x4000000002;
  local_248 = &local_440;
  local_458 = &___7FResourceBulkDataInterface__6B_;
  local_440 = &___7FNISCoefficientsResourceBulkData_FNISCoefficients__6B_;
  local_430 = 0x400;
  local_2a8.ClearValue._0_8_ = 1;
  local_2a8.ClearValue.Value._4_8_ = 0;
  local_2a8.ClearValue.Value.Color[3] = 0.0;
  local_2a8.ExtData = 0;
  local_2a8.Depth = 1;
  local_2a8.ArraySize = 1;
  local_2a8.Dimension = Texture2D;
  local_2a8.Format = PF_FloatRGBA;
  local_2a8.UAVFormat = PF_Unknown;
  local_2a8.FastVRAMPercentage = 0xff;
  local_2a8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_2a8.AliasableFormats.ArrayNum = 0;
  local_2a8.AliasableFormats.ArrayMax = 1;
  local_250 = 0;
  local_240 = 0;
  local_238 = 0;
  local_2a8.NumMips = '\x01';
  local_2a8.NumSamples = '\x01';
  local_2a8.Flags = None;
  local_24c = 1;
  FRHITextureDesc::FRHITextureDesc(&local_a8,&local_2a8);
  local_58 = local_258;
  local_50 = local_250;
  local_4c = local_24c;
  local_48 = local_248;
  local_40 = local_240;
  local_38 = local_238;
  if (local_2a8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_2a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
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
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)(local_4b8 + 8));
  pTVar1 = &this->UsmHalfPrecisionRHI;
  if (pTVar1 != (TRefCountPtr<FRHITexture> *)(local_4b8 + 8)) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)local_4b8._8_8_;
    local_4b8._8_8_ = (FRHITexture *)0x0;
    if (pFVar2 == (FRHITexture *)0x0) goto LAB_14de4adb1;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  if ((FRHITexture *)local_4b8._8_8_ != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_4b8._8_8_);
  }
LAB_14de4adb1:
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// ReleaseRHI @ 14de4ae00

void __thiscall FNISCoefficients::ReleaseRHI(FNISCoefficients *this)

{
  FRHITexture *pFVar1;
  
  pFVar1 = (this->ScalerRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->ScalerRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->UsmRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->UsmRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ScalerHalfPrecisionRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->ScalerHalfPrecisionRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->UsmHalfPrecisionRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->UsmHalfPrecisionRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

