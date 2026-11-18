// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// InitRHI @ 145cf8360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDummyTransitionTexture::InitRHI(FDummyTransitionTexture *this,FRHICommandListBase *param_1)

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
  longlong *plVar10;
  undefined1 auStack_278 [32];
  FSamplerStateInitializerRHI local_240;
  undefined8 local_218;
  undefined4 local_210;
  FRHIResource *local_208;
  FName local_200;
  undefined1 local_1f8 [48];
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
  longlong *local_f0;
  FRHICommandListBase *local_e8;
  FRHITexture *local_e0;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  pFVar5 = FRHITextureCreateDesc::Create2D(&local_b8,L"DummyTransitionTexture",1,1,PF_R8G8B8A8);
  pFVar5->_padding_ = 8;
  pFVar6 = ::FName::FName(&local_200,L"FDummyTransitionTexture");
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
  local_218 = 0;
  local_210 = 0;
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar3 = local_118;
  plVar10 = local_108;
  if (local_f0 != (longlong *)0x0) {
    plVar10 = local_f0;
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  puVar8 = (undefined8 *)(*pcVar3)(local_1f8,uVar7,&local_218);
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
  if (local_208 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_208);
  }
  local_240.Filter.Value = '\0';
  local_240.AddressU.Value = '\0';
  local_240.AddressV.Value = '\0';
  local_240.AddressW.Value = '\0';
  local_240.MipBias = 0.0;
  local_240.MinMipLevel = 0.0;
  local_240.MaxMipLevel = 3.4028235e+38;
  local_240.MaxAnisotropy = 0;
  local_240.BorderColor = 0;
  local_240.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_240);
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
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_148);
  }
  if (local_118 != (code *)0x0) {
    plVar10 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar10 = local_f0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_148._0_8_ != 0) {
    plVar10 = (longlong *)(local_148 + 0x10);
    if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_148._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  return;
}

// GetSizeX @ 145cf8620

uint __thiscall FDummyTransitionTexture::GetSizeX(FDummyTransitionTexture *this)

{
  return 1;
}

// GetSizeY @ 145cf8630

uint __thiscall FDummyTransitionTexture::GetSizeY(FDummyTransitionTexture *this)

{
  return 1;
}

