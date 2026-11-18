// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// InitRHI @ 145cfade0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMipColorTexture::InitRHI(FMipColorTexture *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  longlong lVar4;
  FMipColorTexture *pFVar5;
  bool bVar6;
  FRHITextureCreateDesc *pFVar7;
  FName *pFVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  TRefCountPtr<FRHITexture> TVar11;
  FRHIResource *this_00;
  longlong *plVar12;
  FColor_u_0 *pFVar13;
  FColor_u_0 *pFVar14;
  ulonglong uVar15;
  FColor_u_0 *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_298 [32];
  uint local_268;
  int local_264;
  FSamplerStateInitializerRHI local_260;
  ulonglong local_240;
  undefined8 local_238;
  int local_230;
  FMipColorTexture *local_228;
  FRHIResource *local_220;
  FColor_u_0 *local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  FName local_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  uint local_1b8;
  TIntPoint<int>_u_0 local_1b4;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined2 local_1a4;
  ForElementType<EPixelFormat> local_198;
  int local_190;
  int local_18c;
  wchar_t *local_188;
  ERHIAccess local_180;
  ERHITextureInitAction local_17c;
  FResourceBulkDataInterface *local_178;
  FName local_170;
  FName local_168;
  undefined1 local_158 [48];
  code *local_128;
  longlong local_118 [3];
  longlong *local_100;
  FRHICommandListBase *local_f8;
  FRHITexture *local_f0;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  uVar20 = 0x800;
  local_268 = 0x800;
  local_228 = this;
  pFVar7 = FRHITextureCreateDesc::Create2D(&local_c8,L"FMipColorTexture",0x800,0x800,PF_B8G8R8A8);
  *(undefined1 *)&pFVar7->_padding_ = 0xc;
  pFVar7->_padding_ = 8;
  pFVar8 = ::FName::FName(&local_200,L"FMipColorTexture");
  pFVar7->ClassName = *pFVar8;
  pFVar7->InitAction = Initializer;
  local_1d8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1d8._8_8_ = 1;
  local_1b4._s_0.X = 1;
  local_1b4._s_0.Y = 1;
  local_18c = 1;
  local_1d8._0_8_ = None;
  local_1d8._16_8_ = 0;
  local_1d8._24_4_ = 0.0;
  local_1b8 = 0;
  local_1ac._0_2_ = 1;
  local_1ac._2_2_ = 1;
  local_1a8._0_1_ = '\x01';
  local_1a8._1_1_ = '\x01';
  local_1a8._2_1_ = Texture2D;
  local_1a8._3_1_ = PF_Unknown;
  local_1a4._0_1_ = PF_Unknown;
  local_1a4._1_1_ = 0xff;
  local_198 = (ForElementType<EPixelFormat>)0x0;
  local_190 = 0;
  FRHITextureDesc::operator=((FRHITextureDesc *)local_1d8,(FRHITextureDesc *)pFVar7);
  local_188 = pFVar7->DebugName;
  local_180 = pFVar7->InitialState;
  local_17c = pFVar7->InitAction;
  local_178 = pFVar7->BulkData;
  local_170 = pFVar7->ClassName;
  local_168 = pFVar7->OwnerName;
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_158,(FRHITextureCreateDesc *)local_1d8);
  pFVar16 = &MipColors[0xb].field0_0x0;
  local_264 = 0;
  do {
    uVar15 = 0;
    if ((local_128 == (code *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetSubresourceCallback",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                           ,0x56,
                           L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_238 = 0;
    local_230 = local_264;
    UE::Core::Private::Function::CheckCallable(local_128);
    pcVar3 = local_128;
    plVar12 = local_118;
    if (local_100 != (longlong *)0x0) {
      plVar12 = local_100;
    }
    uVar9 = (**(code **)(*plVar12 + 8))();
    puVar10 = (undefined8 *)(*pcVar3)(local_1f8,uVar9,&local_238);
    iVar19 = (int)uVar20;
    local_208 = puVar10[2];
    local_218 = (FColor_u_0 *)*puVar10;
    uStack_210 = puVar10[1];
    if (iVar19 != 0) {
      uVar18 = local_208 >> 2;
      lVar4 = (longlong)iVar19;
      pFVar14 = local_218;
      local_240 = uStack_210;
      uVar17 = uStack_210;
      pFVar13 = local_218;
      do {
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *pFVar14 = *pFVar16;
          pFVar14 = pFVar14 + 1;
        }
        uVar15 = uVar15 + uVar18;
        pFVar14 = pFVar13 + uVar18;
        if ((uVar17 < uVar15) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestBufferOffset <= Subresource.Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                               ,0x1bf,L""), uVar17 = local_240, bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar20 = uVar20 - 1;
        lVar4 = (longlong)iVar19;
        pFVar13 = pFVar14;
      } while (uVar20 != 0);
      uVar20 = (ulonglong)local_268;
    }
    pFVar16 = pFVar16 + -1;
    local_264 = local_264 + 1;
    local_268 = (int)uVar20 >> 1;
    uVar20 = (ulonglong)local_268;
    if (0xb < local_264) {
      TVar11 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_158);
      pFVar5 = local_228;
      puVar1 = &local_228->field_0x20;
      if ((FRHITexture *)puVar1 != TVar11.Reference) {
        pFVar2 = *(FRHIResource **)puVar1;
        *(longlong *)puVar1 = (TVar11.Reference)->_padding_;
        (TVar11.Reference)->_padding_ = 0;
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar2);
        }
      }
      if (local_220 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_220);
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
      pFVar2 = *(FRHIResource **)&pFVar5->field_0x28;
      if (pFVar2 != this_00) {
        *(FRHIResource **)&pFVar5->field_0x28 = this_00;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_00);
        }
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar2);
        }
      }
      if ((local_f8 != (FRHICommandListBase *)0x0) && (local_f0 != (FRHITexture *)0x0)) {
        FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_158);
      }
      if (local_128 != (code *)0x0) {
        plVar12 = local_118;
        if (local_100 != (longlong *)0x0) {
          plVar12 = local_100;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_158._0_8_ != 0) {
        plVar12 = (longlong *)(local_158 + 0x10);
        if ((longlong *)local_158._40_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_158._40_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_198 != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_198);
      }
      return;
    }
  } while( true );
}

// GetSizeX @ 145cfb180

uint __thiscall FMipColorTexture::GetSizeX(FMipColorTexture *this)

{
  return 0x800;
}

// GetSizeY @ 145cfb190

uint __thiscall FMipColorTexture::GetSizeY(FMipColorTexture *this)

{
  return 0x800;
}

