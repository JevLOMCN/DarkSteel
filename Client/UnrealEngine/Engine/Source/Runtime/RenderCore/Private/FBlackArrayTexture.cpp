// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// InitRHI @ 145cfa8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FBlackArrayTexture::InitRHI(FBlackArrayTexture *this,FRHICommandListBase *param_1)

{
  FRHIResource *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  TRefCountPtr<FRHITexture> TVar8;
  FRHIResource *this_00;
  undefined1 *puVar9;
  longlong *plVar10;
  size_t _Size;
  ForElementType<EPixelFormat> _Src;
  undefined1 auStackY_308 [32];
  FSamplerStateInitializerRHI local_2c0;
  undefined8 local_298;
  undefined4 local_290;
  FRHIResource *local_288;
  FName local_280 [2];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  int local_25c;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_1f8 [48];
  longlong local_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  undefined4 local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  undefined1 *local_1a4;
  undefined4 local_19c;
  undefined2 local_198;
  undefined4 local_196;
  ForElementType<EPixelFormat> local_190;
  int local_180;
  int local_17c;
  wchar_t *local_178;
  undefined8 local_170;
  FResourceBulkDataInterface *local_168;
  FName local_160;
  FName local_158;
  undefined1 local_148 [64];
  undefined1 *local_108;
  int local_100;
  int local_fc;
  wchar_t *local_f8;
  ERHIAccess local_f0;
  ERHITextureInitAction local_ec;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  undefined1 local_c8 [48];
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  FRHICommandListBase *local_68;
  FRHITexture *local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  uStack_268 = 0;
  local_210 = 0;
  local_270 = 1;
  local_260 = 0;
  local_25c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1b0 = 0;
  local_1a4 = &DAT_100000001;
  local_208 = 0;
  local_190.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_17c = 1;
  local_196 = 0xff000201;
  local_1c8 = 0;
  local_19c = 0x10001;
  local_198 = 0x101;
  local_1c0 = 1;
  lStack_1b8 = 0;
  local_1a8 = 0;
  local_180 = 0;
  local_1ac = local_25c;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,0,1,&local_190,0,&local_17c);
  local_170 = 0;
  local_178 = L"BlackArrayTexture";
  local_168 = (FResourceBulkDataInterface *)0x0;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_1c8 = 8;
  pFVar5 = ::FName::FName(local_280,L"FBlackArrayTexture");
  iVar3 = local_180;
  local_160 = *pFVar5;
  local_148[0x32] = (undefined1)local_196;
  local_148._0_8_ = local_1c8;
  local_148[0x33] = local_196._1_1_;
  local_148[0x34] = local_196._2_1_;
  local_148._36_8_ = local_1a4;
  local_148._44_2_ = (undefined2)local_19c;
  local_148._46_2_ = local_19c._2_2_;
  local_148[0x30] = (undefined1)local_198;
  local_148[0x31] = local_198._1_1_;
  local_148._24_4_ = local_1b0;
  local_148._32_4_ = local_1a8;
  local_148[0x35] = local_196._3_1_;
  local_170 = CONCAT44(2,(ERHIAccess)local_170);
  local_108 = (undefined1 *)0x0;
  local_fc = 1;
  local_148._8_8_ = local_1c0;
  local_148._16_8_ = lStack_1b8;
  _Size = (size_t)local_180;
  local_148._28_4_ = local_1ac;
  local_100 = local_180;
  _Src = (ForElementType<EPixelFormat>)&local_190;
  if (local_190.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    _Src = local_190.SecondaryData;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,local_180,1,(ForElementType<EPixelFormat> *)(local_148 + 0x38),local_180,&local_fc)
  ;
  puVar9 = local_148 + 0x38;
  if (local_108 != (undefined1 *)0x0) {
    puVar9 = local_108;
  }
  if (iVar3 != 0) {
    memcpy(puVar9,(void *)_Src,_Size);
  }
  local_f8 = local_178;
  local_f0 = (ERHIAccess)local_170;
  local_ec = local_170._4_4_;
  local_e8 = local_168;
  local_e0 = local_160;
  local_d8 = local_158;
  if (local_190.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_190.SecondaryData);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_c8,(FRHITextureCreateDesc *)local_148);
  if (local_98 == (code *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_298 = 0;
  local_290 = 0;
  UE::Core::Private::Function::CheckCallable(local_98);
  pcVar2 = local_98;
  plVar10 = local_88;
  if (local_70 != (longlong *)0x0) {
    plVar10 = local_70;
  }
  uVar6 = (**(code **)(*plVar10 + 8))();
  puVar7 = (undefined8 *)(*pcVar2)(local_1f8,uVar6,&local_298);
  *(undefined4 *)*puVar7 = 0;
  TVar8 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_c8);
  puVar9 = &this->field_0x20;
  if ((FRHITexture *)puVar9 != TVar8.Reference) {
    pFVar1 = *(FRHIResource **)puVar9;
    *(longlong *)puVar9 = (TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  if (local_288 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_288);
  }
  local_2c0.Filter.Value = '\0';
  local_2c0.AddressU.Value = '\0';
  local_2c0.AddressV.Value = '\0';
  local_2c0.AddressW.Value = '\0';
  local_2c0.MipBias = 0.0;
  local_2c0.MinMipLevel = 0.0;
  local_2c0.MaxMipLevel = 3.4028235e+38;
  local_2c0.MaxAnisotropy = 0;
  local_2c0.BorderColor = 0;
  local_2c0.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_2c0);
  pFVar1 = *(FRHIResource **)&this->field_0x28;
  if (pFVar1 != this_00) {
    *(FRHIResource **)&this->field_0x28 = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_c8);
  }
  if (local_98 != (code *)0x0) {
    plVar10 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar10 = local_70;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_c8._0_8_ != 0) {
    plVar10 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_108 != (undefined1 *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}

// GetSizeX @ 145cfad30

uint __thiscall FBlackArrayTexture::GetSizeX(FBlackArrayTexture *this)

{
  return 1;
}

// GetSizeY @ 145cfad40

uint __thiscall FBlackArrayTexture::GetSizeY(FBlackArrayTexture *this)

{
  return 1;
}

