// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// CreateTextureDesc @ 1458e8610

FRDGTextureDesc * __cdecl
RuntimeVirtualTexture::FRenderGraphSetup::CreateTextureDesc
          (FRDGTextureDesc *__return_storage_ptr__,TIntPoint<int> param_1,EPixelFormat param_2,
          FClearValueBinding *param_3,ETextureCreateFlags param_4,ushort param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_3->Value + 4);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)param_3;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar1;
  if (param_5 < 2) {
    *(ETextureCreateFlags *)__return_storage_ptr__ = param_4;
    *(float *)&__return_storage_ptr__->field_0x18 = (param_3->Value).Color[3];
    *(int *)&__return_storage_ptr__->field_0x1c =
         (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    __return_storage_ptr__->field_0x32 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x10001;
  }
  else {
    *(ETextureCreateFlags *)__return_storage_ptr__ = param_4 | TargetArraySlicesIndependently;
    *(float *)&__return_storage_ptr__->field_0x18 = (param_3->Value).Color[3];
    *(int *)&__return_storage_ptr__->field_0x1c =
         (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    *(undefined2 *)&__return_storage_ptr__->field_0x2c = 1;
    *(ushort *)&__return_storage_ptr__->field_0x2e = param_5;
    __return_storage_ptr__->field_0x32 = 1;
  }
  *(TIntPoint<int>_u_0 *)&__return_storage_ptr__->field_0x24 =
       (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = 0x101;
  __return_storage_ptr__->field_0x33 = param_2;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  return __return_storage_ptr__;
}

// CreateTextureSRV @ 1458e86e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTextureSRV * __cdecl
RuntimeVirtualTexture::FRenderGraphSetup::CreateTextureSRV
          (FRDGBuilder *param_1,FRDGTexture *param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTextureSRV *pFVar4;
  FRDGTextureSRVDesc *pFVar5;
  FRDGTextureSRVDesc local_38;
  FRDGTextureSRVDesc local_20;
  
  if (param_2 == (FRDGTexture *)0x0) {
    return (FRDGTextureSRV *)0x0;
  }
  if (param_3 < 0) {
    local_20._padding_._0_2_ = 0;
    local_20._padding_._4_4_ = 0;
    local_20._padding_._0_1_ = 0;
    local_20._padding_._2_1_ = 0;
    local_20._padding_._2_1_ = (param_2->Desc).field_0x30;
    cVar1 = (param_2->Desc).field_0x32;
    local_20._padding_._3_1_ = 0;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_20._padding_._4_4_ = (uint)*(ushort *)&(param_2->Desc).field_0x2e << 0x10;
    }
    pFVar5 = &local_20;
    local_20.Texture = param_2;
  }
  else {
    if ((param_2->Desc).field_0x32 != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->Desc.Dimension == ETextureDimension::Texture2DArray",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x30d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRDGTextureSRV *)(*pcVar2)();
        return pFVar4;
      }
    }
    if ((int)(uint)*(ushort *)&(param_2->Desc).field_0x2e <= param_3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SliceIndex >= 0 && SliceIndex < Texture->Desc.ArraySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x30e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRDGTextureSRV *)(*pcVar2)();
        return pFVar4;
      }
    }
    local_38._padding_._2_1_ = (param_2->Desc).field_0x30;
    pFVar5 = &local_38;
    local_38._padding_._0_2_ = 0;
    local_38._padding_._3_1_ = 0;
    local_38._6_4_ = 1;
    local_38._padding_._2_1_ = 1;
    local_38._padding_._4_2_ = (short)param_3;
    local_38.Texture = param_2;
  }
  pFVar4 = FRDGBuilder::CreateSRV(param_1,pFVar5);
  return pFVar4;
}

// Init @ 145909400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FRenderGraphSetup::Init
          (FRenderGraphSetup *this,FRDGBuilder *param_1,FInitDesc *param_2)

{
  ERuntimeVirtualTextureMaterialType EVar1;
  code *pcVar2;
  bool bVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  EPixelFormat EVar6;
  longlong lVar7;
  FRDGTexture *pFVar8;
  FRDGTextureDesc *pFVar9;
  FRDGTextureUAV *pFVar10;
  TIntPoint<int> TVar11;
  TIntPoint<int> TVar12;
  TIntPoint<int> TVar13;
  TIntPoint<int> TVar14;
  TIntPoint<int> TVar15;
  TIntPoint<int> TVar16;
  TIntPoint<int> TVar17;
  TIntPoint<int> TVar18;
  TIntPoint<int> TVar19;
  TIntPoint<int> TVar20;
  TIntPoint<int> TVar21;
  TIntPoint<int> TVar22;
  TIntPoint<int> TVar23;
  EPixelFormat EVar24;
  bool *pbVar25;
  byte bVar26;
  ETextureCreateFlags EVar27;
  ushort uVar28;
  ulonglong uVar29;
  undefined1 auStackY_1698 [32];
  FRDGTextureUAVDesc local_15f0;
  FRDGTextureUAVDesc local_15d8;
  FRDGTextureUAVDesc local_15c0;
  FRDGTextureUAVDesc local_15a8;
  FRDGTextureUAVDesc local_1590;
  FRDGTextureUAVDesc local_1578;
  FRDGTextureUAVDesc local_1560;
  FRDGTextureUAVDesc local_1548;
  FRDGTextureUAVDesc local_1530;
  FRDGTextureUAVDesc local_1518;
  FRDGTextureUAVDesc local_1500;
  FRDGTextureUAVDesc local_14e8;
  FRDGTextureUAVDesc local_14d0;
  FRDGTextureUAVDesc local_14b8;
  FRDGTextureUAVDesc local_14a0;
  FRDGTextureUAVDesc local_1488;
  FRDGTextureUAVDesc local_1470;
  FRDGTextureUAVDesc local_1458;
  FRDGTextureUAVDesc local_1440;
  FRDGTextureUAVDesc local_1428;
  FRDGTextureUAVDesc local_1410;
  FRDGTextureUAVDesc local_13f8;
  FRDGTextureUAVDesc local_13e0;
  FRDGTextureUAVDesc local_13c8;
  FRDGTextureUAVDesc local_13b0;
  FRDGTextureUAVDesc local_1398;
  TIntPoint<int>_u_0_s_0 local_1380;
  TIntPoint<int>_u_0_s_0 local_1378;
  TIntPoint<int>_u_0_s_0 local_1370;
  TIntPoint<int>_u_0_s_0 local_1368;
  TIntPoint<int>_u_0_s_0 local_1360;
  TIntPoint<int>_u_0_s_0 local_1358;
  TIntPoint<int>_u_0_s_0 local_1350;
  TIntPoint<int>_u_0_s_0 local_1348;
  TIntPoint<int>_u_0_s_0 local_1340;
  TIntPoint<int>_u_0_s_0 local_1338;
  TIntPoint<int>_u_0_s_0 local_1330;
  TIntPoint<int>_u_0_s_0 local_1328;
  TIntPoint<int>_u_0_s_0 local_1320;
  FClearValueBinding local_1318;
  FClearValueBinding local_12f8;
  FClearValueBinding local_12d8;
  FClearValueBinding local_12b8;
  FClearValueBinding local_1298;
  FClearValueBinding local_1278;
  FClearValueBinding local_1258;
  FClearValueBinding local_1238;
  FClearValueBinding local_1218;
  FClearValueBinding local_11f8;
  FClearValueBinding local_11d8;
  FClearValueBinding local_11b8;
  FClearValueBinding local_1198;
  FClearValueBinding local_1178;
  FClearValueBinding local_1158;
  FClearValueBinding local_1138;
  FClearValueBinding local_1118;
  FClearValueBinding local_10f8;
  FClearValueBinding local_10d8;
  FClearValueBinding local_10b8;
  FClearValueBinding local_1098;
  FClearValueBinding local_1078;
  FClearValueBinding local_1058;
  FClearValueBinding local_1038;
  FClearValueBinding local_1018;
  FClearValueBinding local_ff8;
  FClearValueBinding local_fd8;
  FClearValueBinding local_fb8;
  FClearValueBinding local_f98;
  FClearValueBinding local_f78;
  FClearValueBinding local_f58;
  FClearValueBinding local_f38;
  FClearValueBinding local_f18;
  FClearValueBinding local_ef8;
  FClearValueBinding local_ed8;
  FClearValueBinding local_eb8;
  FClearValueBinding local_e98;
  FClearValueBinding local_e78;
  undefined1 local_e58 [24];
  float local_e40;
  int local_e3c;
  undefined4 local_e38;
  TIntPoint<int>_u_0 local_e34;
  undefined4 local_e2c;
  undefined4 local_e28;
  undefined2 local_e24;
  void *local_e18;
  undefined4 local_e10;
  undefined4 local_e0c;
  undefined1 local_e08 [24];
  float local_df0;
  int local_dec;
  undefined4 local_de8;
  TIntPoint<int>_u_0 local_de4;
  undefined4 local_ddc;
  undefined4 local_dd8;
  undefined2 local_dd4;
  void *local_dc8;
  undefined4 local_dc0;
  undefined4 local_dbc;
  undefined1 local_db8 [24];
  float local_da0;
  int local_d9c;
  undefined4 local_d98;
  TIntPoint<int>_u_0 local_d94;
  undefined4 local_d8c;
  undefined4 local_d88;
  undefined2 local_d84;
  void *local_d78;
  undefined4 local_d70;
  undefined4 local_d6c;
  undefined1 local_d68 [24];
  float local_d50;
  int local_d4c;
  undefined4 local_d48;
  TIntPoint<int>_u_0 local_d44;
  undefined4 local_d3c;
  undefined4 local_d38;
  undefined2 local_d34;
  void *local_d28;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined1 local_d18 [24];
  float local_d00;
  int local_cfc;
  undefined4 local_cf8;
  TIntPoint<int>_u_0 local_cf4;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined2 local_ce4;
  void *local_cd8;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined1 local_cc8 [24];
  float local_cb0;
  int local_cac;
  undefined4 local_ca8;
  TIntPoint<int>_u_0 local_ca4;
  undefined4 local_c9c;
  undefined4 local_c98;
  undefined2 local_c94;
  void *local_c88;
  undefined4 local_c80;
  undefined4 local_c7c;
  undefined1 local_c78 [24];
  float local_c60;
  int local_c5c;
  undefined4 local_c58;
  TIntPoint<int>_u_0 local_c54;
  undefined4 local_c4c;
  undefined4 local_c48;
  undefined2 local_c44;
  void *local_c38;
  undefined4 local_c30;
  undefined4 local_c2c;
  undefined1 local_c28 [80];
  undefined1 local_bd8 [80];
  undefined1 local_b88 [80];
  undefined1 local_b38 [80];
  undefined1 local_ae8 [80];
  undefined1 local_a98 [80];
  undefined1 local_a48 [80];
  undefined1 local_9f8 [80];
  undefined1 local_9a8 [80];
  undefined1 local_958 [80];
  undefined1 local_908 [80];
  undefined1 local_8b8 [80];
  undefined1 local_868 [80];
  undefined1 local_818 [80];
  undefined1 local_7c8 [80];
  undefined1 local_778 [80];
  undefined1 local_728 [80];
  undefined1 local_6d8 [80];
  undefined1 local_688 [80];
  undefined1 local_638 [80];
  undefined1 local_5e8 [80];
  undefined1 local_598 [80];
  undefined1 local_548 [80];
  undefined1 local_4f8 [80];
  undefined1 local_4a8 [80];
  undefined1 local_458 [80];
  undefined1 local_408 [80];
  undefined1 local_3b8 [80];
  undefined1 local_368 [80];
  undefined1 local_318 [80];
  undefined1 local_2c8 [80];
  undefined1 local_278 [80];
  undefined1 local_228 [80];
  undefined1 local_1d8 [80];
  undefined1 local_188 [80];
  undefined1 local_138 [80];
  undefined1 local_e8 [80];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1698;
  if (((param_2->OutputTargets).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(longlong *)(param_2->OutputTargets).AllocatorInstance.Data == 0) {
    bVar26 = 0;
    this->bRenderPass = false;
LAB_1459094fe:
    bVar5 = false;
  }
  else {
    if (((param_2->OutputTargets).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = (**(code **)(**(longlong **)
                           (*(longlong *)(param_2->OutputTargets).AllocatorInstance.Data + 8) + 0x20
                        ))();
    bVar26 = *(byte *)(lVar7 + 0x33);
    this->bRenderPass = bVar26 != 0;
    if ((bVar26 == 0) || (param_2->bIsThumbnails == false)) goto LAB_1459094fe;
    bVar5 = true;
  }
  this->bCopyThumbnailPass = bVar5;
  if ((GPixelFormats[bVar26].BlockSizeX == 4) && (GPixelFormats[bVar26].BlockSizeY == 4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((bVar26 == 0) || (bVar5 != false)) || (!bVar3)) {
    this->bCompressPass = false;
    if (((bVar26 == 0) || (bVar5 != false)) ||
       ((EVar1 = param_2->MaterialType, EVar1 != BaseColor_Normal_Specular &&
        ((1 < (byte)(EVar1 - BaseColor_Normal_Specular_YCoCg) && (EVar1 != Mask4))))))
    goto LAB_145909550;
    bVar5 = true;
  }
  else {
    this->bCompressPass = true;
LAB_145909550:
    bVar5 = false;
  }
  pbVar25 = &this->bCompressPass;
  this->bCopyPass = bVar5;
  pTVar4 = CVarVTDirectCompress.Ref;
  if ((bVar3) && (GRHIGlobals.SupportsUAVFormatAliasing != false)) {
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar4->ShadowedValue[1] == 0) goto LAB_1459095e0;
    bVar5 = true;
  }
  else {
LAB_1459095e0:
    bVar5 = false;
  }
  this->bDirectAliasing = bVar5;
  uVar29 = (ulonglong)GMaxRHIShaderPlatform;
  EVar27 = NoFastClear|Shared|ShaderResource|RenderTargetable;
  if (param_2->bClearTextures != false) {
    EVar27 = ShaderResource|RenderTargetable;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar29].bContainsValidPlatformInfo == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xc1,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar24 = PF_R32G32_UINT;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar29].Language == LANGUAGE_OpenGL) {
    EVar24 = PF_R16G16B16A16_UINT;
  }
  uVar28 = (ushort)param_2->PageCount;
  switch(param_2->MaterialType) {
  case BaseColor:
    if (this->bRenderPass != false) {
      local_e34 = (param_2->TextureSize).field0_0x0;
      local_e24 = 0xff00;
      local_e58._0_8_ = EVar27 | SRGB;
      local_e0c = 1;
      local_e58._8_8_ = FClearValueBinding::Black._0_8_;
      local_e58._16_8_ = FClearValueBinding::Black.Value._4_8_;
      if (uVar28 < 2) {
        local_e2c = 0x10001;
        local_e28 = 0x2000101;
      }
      else {
        local_e58._0_8_ = EVar27 | (TargetArraySlicesIndependently|SRGB);
        local_e2c._2_2_ = uVar28;
        local_e2c._0_2_ = 1;
        local_e28 = 0x2010101;
      }
      local_e3c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_e40 = FClearValueBinding::Black.Value.Color[3];
      local_e10 = 0;
      local_e18 = (void *)0x0;
      local_e38 = 0;
      pFVar8 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_e58,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if (local_e18 != (void *)0x0) {
        FMemory::Free(local_e18);
      }
    }
    if (*pbVar25 != false) {
      if (this->bDirectAliasing == false) {
        local_1380 = (param_2->TextureSize).field0_0x0._s_0;
        local_1318.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_1318._0_8_ = FClearValueBinding::None._0_8_;
        local_1318.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar11.field0_0x0._0_4_ = (int)((local_1380.X >> 0x1f & 3U) + local_1380.X) >> 2;
        TVar11.field0_0x0._s_0.Y = (int)((local_1380.Y >> 0x1f & 3U) + local_1380.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_c28,TVar11,EVar24,&local_1318,UAV,uVar28
                                  );
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture0",None);
        this->CompressTexture0 = pFVar8;
        this->OutputAlias0 = pFVar8;
        if ((void *)local_c28._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_c28._64_8_);
        }
        local_15c0.Texture = this->CompressTexture0;
        local_15c0._padding_._0_1_ = ((local_15c0.Texture)->Desc).field_0x34;
        local_15c0._padding_._1_1_ = 0;
        local_15c0._padding_._2_4_ = 0;
        local_15c0._padding_._6_1_ = 0;
        local_15c0._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_15c0,None);
        this->CompressTextureUAV0_64bit = pFVar10;
      }
      else {
        if (((param_2->OutputTargets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_15f0.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                (param_2->OutputTargets).AllocatorInstance.Data,
                        ForceImmediateFirstBarrier);
        this->CompressTexture0 = local_15f0.Texture;
        local_15f0._padding_._1_1_ = 0;
        local_15f0._padding_._2_4_ = 0;
        local_15f0._padding_._6_1_ = 0;
        local_15f0._padding_._0_1_ = 0;
        local_15f0._padding_._0_1_ = EVar24;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_15f0,None);
        this->CompressTextureUAV0_64bit = pFVar10;
        this->OutputAlias0 = (FRDGTexture *)0x0;
      }
    }
    if (this->bCopyThumbnailPass == false) break;
    local_de4 = (param_2->TextureSize).field0_0x0;
    local_e08._0_8_ = EVar27 | SRGB;
    local_de8 = 0;
    local_dd4 = 0xff00;
    local_dc8 = (void *)0x0;
    local_dc0 = 0;
    local_e08._8_8_ = FClearValueBinding::Black._0_8_;
    local_e08._16_8_ = FClearValueBinding::Black.Value._4_8_;
    if (uVar28 < 2) {
      local_ddc = 0x10001;
      local_dd8 = 0x2000101;
    }
    else {
      local_e08._0_8_ = EVar27 | (TargetArraySlicesIndependently|SRGB);
      local_ddc._2_2_ = uVar28;
      local_ddc._0_2_ = 1;
      local_dd8 = 0x2010101;
    }
    local_dec = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_dbc = 1;
    local_df0 = FClearValueBinding::Black.Value.Color[3];
    pFVar8 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_e08,L"CopyTexture0",None);
    this->CopyTexture0 = pFVar8;
    this->OutputAlias0 = pFVar8;
    local_188._64_8_ = local_dc8;
    goto LAB_145909a66;
  case Mask4:
    if (this->bRenderPass != false) {
      local_1058._0_8_ = FClearValueBinding::Black._0_8_;
      local_1058.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1058.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_2c8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1058,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_2c8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2c8._64_8_);
      }
      local_1078._0_8_ = FClearValueBinding::Black._0_8_;
      local_1078.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1078.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_278,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1078,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture1",None);
      this->RenderTexture1 = pFVar8;
      this->OutputAlias1 = pFVar8;
      if ((void *)local_278._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_278._64_8_);
      }
    }
    if (*pbVar25 != false) {
      if (this->bDirectAliasing == false) {
        local_1330 = (param_2->TextureSize).field0_0x0._s_0;
        local_1098.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_1098._0_8_ = FClearValueBinding::None._0_8_;
        local_1098.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar22.field0_0x0._0_4_ = (int)((local_1330.X >> 0x1f & 3U) + local_1330.X) >> 2;
        TVar22.field0_0x0._s_0.Y = (int)((local_1330.Y >> 0x1f & 3U) + local_1330.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_228,TVar22,PF_R32G32B32A32_UINT,
                                   &local_1098,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture0",None);
        this->CompressTexture0 = pFVar8;
        this->OutputAlias0 = pFVar8;
        if ((void *)local_228._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_228._64_8_);
        }
        local_1578.Texture = this->CompressTexture0;
        local_1578._padding_._0_1_ = ((local_1578.Texture)->Desc).field_0x34;
        local_1578._padding_._1_1_ = 0;
        local_1578._padding_._2_4_ = 0;
        local_1578._padding_._6_1_ = 0;
        local_1578._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1578,None);
        this->CompressTextureUAV0_128bit = pFVar10;
      }
      else {
        if (((param_2->OutputTargets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1560.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                (param_2->OutputTargets).AllocatorInstance.Data,
                        ForceImmediateFirstBarrier);
        this->CompressTexture0 = local_1560.Texture;
        local_1560._padding_._0_4_ = 0x30;
        local_1560._padding_._4_2_ = 0;
        local_1560._padding_._6_1_ = 0;
        local_1560._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1560,None);
        this->CompressTextureUAV0_128bit = pFVar10;
        this->OutputAlias0 = (FRDGTexture *)0x0;
      }
    }
    if ((this->bCopyPass != false) || (this->bCopyThumbnailPass != false)) {
      local_c54 = (param_2->TextureSize).field0_0x0;
      local_c58 = 0;
      local_c44 = 0xff00;
      local_c38 = (void *)0x0;
      local_c30 = 0;
      local_c78._8_8_ = FClearValueBinding::Black._0_8_;
      local_c78._16_8_ = FClearValueBinding::Black.Value._4_8_;
      if (uVar28 < 2) {
        local_c4c = 0x10001;
        local_c48 = 0x2000101;
        local_c78._0_8_ = EVar27;
      }
      else {
        local_c4c._2_2_ = uVar28;
        local_c4c._0_2_ = 1;
        local_c48 = 0x2010101;
        local_c78._0_8_ = EVar27 | TargetArraySlicesIndependently;
      }
      local_c5c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_c2c = 1;
      local_c60 = FClearValueBinding::Black.Value.Color[3];
      pFVar8 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_c78,L"CopyTexture0",None)
      ;
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if (local_c38 != (void *)0x0) {
        FMemory::Free(local_c38);
      }
    }
    break;
  case BaseColor_Normal_Roughness:
    if (this->bRenderPass != false) {
      local_12f8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      EVar6 = PF_B8G8R8A8;
      if (bVar26 == 0x24) {
        EVar6 = PF_R5G6B5_UNORM;
      }
      local_12f8._0_8_ = FClearValueBinding::Black._0_8_;
      local_12f8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_bd8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,EVar6,
                                 &local_12f8,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_bd8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_bd8._64_8_);
      }
      local_12d8._0_8_ = FClearValueBinding::Black._0_8_;
      local_12d8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_12d8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_b88,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,EVar6,
                                 &local_12d8,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture1",None);
      this->RenderTexture1 = pFVar8;
      this->OutputAlias1 = pFVar8;
      if ((void *)local_b88._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b88._64_8_);
      }
    }
    if (*pbVar25 != false) {
      if (this->bDirectAliasing == false) {
        local_1320 = (param_2->TextureSize).field0_0x0._s_0;
        local_12b8.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_12b8._0_8_ = FClearValueBinding::None._0_8_;
        local_12b8.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar12.field0_0x0._0_4_ = (int)((local_1320.X >> 0x1f & 3U) + local_1320.X) >> 2;
        TVar12.field0_0x0._s_0.Y = (int)((local_1320.Y >> 0x1f & 3U) + local_1320.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_b38,TVar12,EVar24,&local_12b8,UAV,uVar28
                                  );
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture0",None);
        this->CompressTexture0 = pFVar8;
        this->OutputAlias0 = pFVar8;
        if ((void *)local_b38._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_b38._64_8_);
        }
        local_13b0.Texture = this->CompressTexture0;
        local_13b0._padding_._0_1_ = ((local_13b0.Texture)->Desc).field_0x34;
        local_13b0._padding_._1_1_ = 0;
        local_13b0._padding_._2_4_ = 0;
        local_13b0._padding_._6_1_ = 0;
        local_13b0._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_13b0,None);
        this->CompressTextureUAV0_64bit = pFVar10;
        local_1378 = (param_2->TextureSize).field0_0x0._s_0;
        local_1298.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_1298._0_8_ = FClearValueBinding::None._0_8_;
        local_1298.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar13.field0_0x0._0_4_ = (int)((local_1378.X >> 0x1f & 3U) + local_1378.X) >> 2;
        TVar13.field0_0x0._s_0.Y = (int)((local_1378.Y >> 0x1f & 3U) + local_1378.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_ae8,TVar13,PF_R32G32B32A32_UINT,
                                   &local_1298,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture1",None);
        this->CompressTexture1 = pFVar8;
        this->OutputAlias1 = pFVar8;
        if ((void *)local_ae8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_ae8._64_8_);
        }
        local_13c8.Texture = this->CompressTexture1;
        local_13c8._padding_._0_1_ = ((local_13c8.Texture)->Desc).field_0x34;
        local_13c8._padding_._1_1_ = 0;
        local_13c8._padding_._2_4_ = 0;
        local_13c8._padding_._6_1_ = 0;
        local_13c8._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_13c8,None);
      }
      else {
        if (((param_2->OutputTargets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_14e8.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                (param_2->OutputTargets).AllocatorInstance.Data,
                        ForceImmediateFirstBarrier);
        this->CompressTexture0 = local_14e8.Texture;
        local_14e8._padding_._1_1_ = 0;
        local_14e8._padding_._2_4_ = 0;
        local_14e8._padding_._6_1_ = 0;
        local_14e8._padding_._0_1_ = 0;
        local_14e8._padding_._0_1_ = EVar24;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_14e8,None);
        this->CompressTextureUAV0_64bit = pFVar10;
        if (((param_2->OutputTargets).ArrayNum < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1398.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                ((param_2->OutputTargets).AllocatorInstance.Data + 8),
                        ForceImmediateFirstBarrier);
        this->CompressTexture1 = local_1398.Texture;
        local_1398._padding_._0_4_ = 0x30;
        local_1398._padding_._4_2_ = 0;
        local_1398._padding_._6_1_ = 0;
        local_1398._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1398,None);
        this->OutputAlias1 = (FRDGTexture *)0x0;
        this->OutputAlias0 = (FRDGTexture *)0x0;
      }
      this->CompressTextureUAV1_128bit = pFVar10;
    }
    if (this->bCopyThumbnailPass != false) {
      local_1278.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      local_1278._0_8_ = FClearValueBinding::Black._0_8_;
      local_1278.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      EVar24 = PF_B8G8R8A8;
      if (bVar26 == 0x24) {
        EVar24 = PF_R5G6B5_UNORM;
      }
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_a98,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,EVar24,
                                 &local_1278,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_a98._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a98._64_8_);
      }
      this->OutputAlias1 = (FRDGTexture *)0x0;
    }
    break;
  case BaseColor_Normal_Specular:
    if (this->bRenderPass != false) {
      local_1258.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      local_1258._0_8_ = FClearValueBinding::Black._0_8_;
      local_1258.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_a48,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1258,EVar27 | SRGB,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_a48._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a48._64_8_);
      }
      local_1238._0_8_ = FClearValueBinding::DefaultNormal8Bit._0_8_;
      local_1238.Value._4_8_ = FClearValueBinding::DefaultNormal8Bit.Value._4_8_;
      local_1238.Value.Color[3] = FClearValueBinding::DefaultNormal8Bit.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_9f8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1238,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture1",None);
      this->RenderTexture1 = pFVar8;
      if ((void *)local_9f8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_9f8._64_8_);
      }
      local_1218._0_8_ = FClearValueBinding::DefaultNormal8Bit._0_8_;
      local_1218.Value._4_8_ = FClearValueBinding::DefaultNormal8Bit.Value._4_8_;
      local_1218.Value.Color[3] = FClearValueBinding::DefaultNormal8Bit.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_9a8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1218,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture2",None);
      this->RenderTexture2 = pFVar8;
      if ((void *)local_9a8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_9a8._64_8_);
      }
    }
    if (*pbVar25 != false) {
      if (this->bDirectAliasing == false) {
        local_1370 = (param_2->TextureSize).field0_0x0._s_0;
        local_11f8.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_11f8._0_8_ = FClearValueBinding::None._0_8_;
        local_11f8.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar14.field0_0x0._0_4_ = (int)((local_1370.X >> 0x1f & 3U) + local_1370.X) >> 2;
        TVar14.field0_0x0._s_0.Y = (int)((local_1370.Y >> 0x1f & 3U) + local_1370.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_958,TVar14,PF_R32G32B32A32_UINT,
                                   &local_11f8,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture0",None);
        this->CompressTexture0 = pFVar8;
        this->OutputAlias0 = pFVar8;
        if ((void *)local_958._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_958._64_8_);
        }
        local_1410.Texture = this->CompressTexture0;
        local_1410._padding_._0_1_ = ((local_1410.Texture)->Desc).field_0x34;
        local_1410._padding_._1_1_ = 0;
        local_1410._padding_._2_4_ = 0;
        local_1410._padding_._6_1_ = 0;
        local_1410._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1410,None);
        this->CompressTextureUAV0_128bit = pFVar10;
        local_1368 = (param_2->TextureSize).field0_0x0._s_0;
        local_11d8.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_11d8._0_8_ = FClearValueBinding::None._0_8_;
        local_11d8.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar15.field0_0x0._0_4_ = (int)((local_1368.X >> 0x1f & 3U) + local_1368.X) >> 2;
        TVar15.field0_0x0._s_0.Y = (int)((local_1368.Y >> 0x1f & 3U) + local_1368.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_908,TVar15,PF_R32G32B32A32_UINT,
                                   &local_11d8,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture1",None);
        this->CompressTexture1 = pFVar8;
        this->OutputAlias1 = pFVar8;
        if ((void *)local_908._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_908._64_8_);
        }
        local_1428.Texture = this->CompressTexture1;
        local_1428._padding_._0_1_ = ((local_1428.Texture)->Desc).field_0x34;
        local_1428._padding_._1_1_ = 0;
        local_1428._padding_._2_4_ = 0;
        local_1428._padding_._6_1_ = 0;
        local_1428._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1428,None);
        this->CompressTextureUAV1_128bit = pFVar10;
      }
      else {
        if (((param_2->OutputTargets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_13e0.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                (param_2->OutputTargets).AllocatorInstance.Data,
                        ForceImmediateFirstBarrier);
        this->CompressTexture0 = local_13e0.Texture;
        local_13e0._padding_._0_4_ = 0x30;
        local_13e0._padding_._4_2_ = 0;
        local_13e0._padding_._6_1_ = 0;
        local_13e0._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_13e0,None);
        this->CompressTextureUAV0_128bit = pFVar10;
        if (((param_2->OutputTargets).ArrayNum < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_13f8.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                ((param_2->OutputTargets).AllocatorInstance.Data + 8),
                        ForceImmediateFirstBarrier);
        this->CompressTexture1 = local_13f8.Texture;
        local_13f8._padding_._0_4_ = 0x30;
        local_13f8._padding_._4_2_ = 0;
        local_13f8._padding_._6_1_ = 0;
        local_13f8._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_13f8,None);
        this->CompressTextureUAV1_128bit = pFVar10;
        this->OutputAlias1 = (FRDGTexture *)0x0;
        this->OutputAlias0 = (FRDGTexture *)0x0;
      }
    }
    if (this->bCopyPass != false) {
      local_11b8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      local_11b8._0_8_ = FClearValueBinding::Black._0_8_;
      local_11b8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_8b8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_11b8,EVar27 | SRGB,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_8b8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_8b8._64_8_);
      }
      local_1198._0_8_ = FClearValueBinding::Black._0_8_;
      local_1198.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1198.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_868,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1198,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture1",None);
      this->CopyTexture1 = pFVar8;
      this->OutputAlias1 = pFVar8;
      if ((void *)local_868._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_868._64_8_);
      }
    }
    if (this->bCopyThumbnailPass != false) {
      local_1178._0_8_ = FClearValueBinding::Black._0_8_;
      local_1178.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1178.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_818,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1178,EVar27 | SRGB,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_818._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_818._64_8_);
      }
    }
    break;
  case BaseColor_Normal_Specular_YCoCg:
    if (this->bRenderPass != false) {
      local_1158.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      local_1158._0_8_ = FClearValueBinding::Black._0_8_;
      local_1158.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_7c8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1158,EVar27 | SRGB,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_7c8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_7c8._64_8_);
      }
      local_e78._0_8_ = FClearValueBinding::DefaultNormal8Bit._0_8_;
      local_e78.Value._4_8_ = FClearValueBinding::DefaultNormal8Bit.Value._4_8_;
      local_e78.Value.Color[3] = FClearValueBinding::DefaultNormal8Bit.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_778,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_e78,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture1",None);
      this->RenderTexture1 = pFVar8;
      if ((void *)local_778._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_778._64_8_);
      }
      local_e98._0_8_ = FClearValueBinding::DefaultNormal8Bit._0_8_;
      local_e98.Value._4_8_ = FClearValueBinding::DefaultNormal8Bit.Value._4_8_;
      local_e98.Value.Color[3] = FClearValueBinding::DefaultNormal8Bit.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_728,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_e98,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture2",None);
      this->RenderTexture2 = pFVar8;
      if ((void *)local_728._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_728._64_8_);
      }
    }
    if (*pbVar25 != false) {
      if (this->bDirectAliasing == false) {
        local_1360 = (param_2->TextureSize).field0_0x0._s_0;
        local_eb8.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_eb8._0_8_ = FClearValueBinding::None._0_8_;
        local_eb8.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar16.field0_0x0._0_4_ = (int)((local_1360.X >> 0x1f & 3U) + local_1360.X) >> 2;
        TVar16.field0_0x0._s_0.Y = (int)((local_1360.Y >> 0x1f & 3U) + local_1360.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_6d8,TVar16,PF_R32G32B32A32_UINT,
                                   &local_eb8,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture0",None);
        this->CompressTexture0 = pFVar8;
        this->OutputAlias0 = pFVar8;
        if ((void *)local_6d8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_6d8._64_8_);
        }
        local_1488.Texture = this->CompressTexture0;
        local_1488._padding_._0_1_ = ((local_1488.Texture)->Desc).field_0x34;
        local_1488._padding_._1_1_ = 0;
        local_1488._padding_._2_4_ = 0;
        local_1488._padding_._6_1_ = 0;
        local_1488._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1488,None);
        this->CompressTextureUAV0_128bit = pFVar10;
        local_1358 = (param_2->TextureSize).field0_0x0._s_0;
        local_ed8.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_ed8._0_8_ = FClearValueBinding::None._0_8_;
        local_ed8.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar17.field0_0x0._0_4_ = (int)((local_1358.X >> 0x1f & 3U) + local_1358.X) >> 2;
        TVar17.field0_0x0._s_0.Y = (int)((local_1358.Y >> 0x1f & 3U) + local_1358.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_688,TVar17,PF_R32G32B32A32_UINT,
                                   &local_ed8,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture1",None);
        this->CompressTexture1 = pFVar8;
        this->OutputAlias1 = pFVar8;
        if ((void *)local_688._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_688._64_8_);
        }
        local_14a0.Texture = this->CompressTexture1;
        local_14a0._padding_._0_1_ = ((local_14a0.Texture)->Desc).field_0x34;
        local_14a0._padding_._1_1_ = 0;
        local_14a0._padding_._2_4_ = 0;
        local_14a0._padding_._6_1_ = 0;
        local_14a0._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_14a0,None);
        this->CompressTextureUAV1_128bit = pFVar10;
        local_1350 = (param_2->TextureSize).field0_0x0._s_0;
        local_ef8.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_ef8._0_8_ = FClearValueBinding::None._0_8_;
        local_ef8.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar18.field0_0x0._0_4_ = (int)((local_1350.X >> 0x1f & 3U) + local_1350.X) >> 2;
        TVar18.field0_0x0._s_0.Y = (int)((local_1350.Y >> 0x1f & 3U) + local_1350.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_638,TVar18,EVar24,&local_ef8,UAV,uVar28)
        ;
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture2",None);
        this->CompressTexture2 = pFVar8;
        this->OutputAlias2 = pFVar8;
        if ((void *)local_638._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_638._64_8_);
        }
        local_14b8.Texture = this->CompressTexture2;
        local_14b8._padding_._0_1_ = ((local_14b8.Texture)->Desc).field_0x34;
        local_14b8._padding_._1_1_ = 0;
        local_14b8._padding_._2_4_ = 0;
        local_14b8._padding_._6_1_ = 0;
        local_14b8._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_14b8,None);
        this->CompressTextureUAV2_64bit = pFVar10;
      }
      else {
        if (((param_2->OutputTargets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1440.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                (param_2->OutputTargets).AllocatorInstance.Data,
                        ForceImmediateFirstBarrier);
        this->CompressTexture0 = local_1440.Texture;
        local_1440._padding_._0_4_ = 0x30;
        local_1440._padding_._4_2_ = 0;
        local_1440._padding_._6_1_ = 0;
        local_1440._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1440,None);
        this->CompressTextureUAV0_128bit = pFVar10;
        if (((param_2->OutputTargets).ArrayNum < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1458.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                ((param_2->OutputTargets).AllocatorInstance.Data + 8),
                        ForceImmediateFirstBarrier);
        this->CompressTexture1 = local_1458.Texture;
        local_1458._padding_._0_4_ = 0x30;
        local_1458._padding_._4_2_ = 0;
        local_1458._padding_._6_1_ = 0;
        local_1458._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1458,None);
        this->CompressTextureUAV1_128bit = pFVar10;
        if (((param_2->OutputTargets).ArrayNum < 3) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1470.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                ((param_2->OutputTargets).AllocatorInstance.Data + 0x10),
                        ForceImmediateFirstBarrier);
        this->CompressTexture2 = local_1470.Texture;
        local_1470._padding_._1_1_ = 0;
        local_1470._padding_._2_4_ = 0;
        local_1470._padding_._6_1_ = 0;
        local_1470._padding_._0_1_ = 0;
        local_1470._padding_._0_1_ = EVar24;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1470,None);
        this->CompressTextureUAV2_64bit = pFVar10;
        this->OutputAlias2 = (FRDGTexture *)0x0;
        this->OutputAlias1 = (FRDGTexture *)0x0;
        this->OutputAlias0 = (FRDGTexture *)0x0;
      }
    }
    if (this->bCopyPass != false) {
      local_f18._0_8_ = FClearValueBinding::Black._0_8_;
      local_f18.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_f18.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_5e8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_f18,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_5e8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._64_8_);
      }
      local_d94 = (param_2->TextureSize).field0_0x0;
      local_d98 = 0;
      local_d84 = 0xff00;
      local_d78 = (void *)0x0;
      local_d70 = 0;
      local_d6c = 1;
      local_db8._8_8_ = FClearValueBinding::Black._0_8_;
      local_db8._16_8_ = FClearValueBinding::Black.Value._4_8_;
      if (uVar28 < 2) {
        local_d8c = 0x10001;
        local_d88 = 0x2000101;
        local_db8._0_8_ = EVar27;
      }
      else {
        local_d8c._2_2_ = uVar28;
        local_d8c._0_2_ = 1;
        local_d88 = 0x2010101;
        local_db8._0_8_ = EVar27 | TargetArraySlicesIndependently;
      }
      local_d9c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_da0 = FClearValueBinding::Black.Value.Color[3];
      pFVar8 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_db8,L"CopyTexture1",None)
      ;
      this->CopyTexture1 = pFVar8;
      this->OutputAlias1 = pFVar8;
      if (local_d78 != (void *)0x0) {
        FMemory::Free(local_d78);
      }
      local_d44 = (param_2->TextureSize).field0_0x0;
      local_d48 = 0;
      local_d34 = 0xff00;
      local_d28 = (void *)0x0;
      local_d20 = 0;
      local_d68._8_8_ = FClearValueBinding::Black._0_8_;
      local_d68._16_8_ = FClearValueBinding::Black.Value._4_8_;
      if (uVar28 < 2) {
        local_d3c = 0x10001;
        local_d38 = 0x2000101;
        local_d68._0_8_ = EVar27;
      }
      else {
        local_d3c._2_2_ = uVar28;
        local_d3c._0_2_ = 1;
        local_d38 = 0x2010101;
        local_d68._0_8_ = EVar27 | TargetArraySlicesIndependently;
      }
      local_d4c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_d1c = 1;
      local_d50 = FClearValueBinding::Black.Value.Color[3];
      pFVar8 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_d68,L"CopyTexture2",None)
      ;
      this->CopyTexture2 = pFVar8;
      this->OutputAlias2 = pFVar8;
      if (local_d28 != (void *)0x0) {
        FMemory::Free(local_d28);
      }
    }
    if (this->bCopyThumbnailPass != false) {
      local_cf4 = (param_2->TextureSize).field0_0x0;
      local_d18._0_8_ = EVar27 | SRGB;
      local_cf8 = 0;
      local_ce4 = 0xff00;
      local_cd8 = (void *)0x0;
      local_cd0 = 0;
      local_d18._8_8_ = FClearValueBinding::Black._0_8_;
      local_d18._16_8_ = FClearValueBinding::Black.Value._4_8_;
      if (uVar28 < 2) {
        local_cec = 0x10001;
        local_ce8 = 0x2000101;
      }
      else {
        local_d18._0_8_ = EVar27 | (TargetArraySlicesIndependently|SRGB);
        local_cec._2_2_ = uVar28;
        local_cec._0_2_ = 1;
        local_ce8 = 0x2010101;
      }
      local_cfc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_ccc = 1;
      local_d00 = FClearValueBinding::Black.Value.Color[3];
      pFVar8 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_d18,L"CopyTexture0",None)
      ;
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if (local_cd8 != (void *)0x0) {
        FMemory::Free(local_cd8);
      }
    }
    break;
  case BaseColor_Normal_Specular_Mask_YCoCg:
    if (this->bRenderPass != false) {
      local_ca4 = (param_2->TextureSize).field0_0x0;
      local_c94 = 0xff00;
      local_cc8._0_8_ = EVar27 | SRGB;
      local_c7c = 1;
      local_cc8._8_8_ = FClearValueBinding::Black._0_8_;
      local_cc8._16_8_ = FClearValueBinding::Black.Value._4_8_;
      if (uVar28 < 2) {
        local_c9c = 0x10001;
        local_c98 = 0x2000101;
      }
      else {
        local_cc8._0_8_ = EVar27 | (TargetArraySlicesIndependently|SRGB);
        local_c9c._2_2_ = uVar28;
        local_c9c._0_2_ = 1;
        local_c98 = 0x2010101;
      }
      local_cac = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_cb0 = FClearValueBinding::Black.Value.Color[3];
      local_c80 = 0;
      local_c88 = (void *)0x0;
      local_ca8 = 0;
      pFVar8 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_cc8,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if (local_c88 != (void *)0x0) {
        FMemory::Free(local_c88);
      }
      local_f58._0_8_ = FClearValueBinding::DefaultNormal8Bit._0_8_;
      local_f58.Value._4_8_ = FClearValueBinding::DefaultNormal8Bit.Value._4_8_;
      local_f58.Value.Color[3] = FClearValueBinding::DefaultNormal8Bit.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_598,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_f58,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture1",None);
      this->RenderTexture1 = pFVar8;
      if ((void *)local_598._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_598._64_8_);
      }
      local_f78._0_8_ = FClearValueBinding::DefaultNormal8Bit._0_8_;
      local_f78.Value._4_8_ = FClearValueBinding::DefaultNormal8Bit.Value._4_8_;
      local_f78.Value.Color[3] = FClearValueBinding::DefaultNormal8Bit.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_548,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_f78,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture2",None);
      this->RenderTexture2 = pFVar8;
      if ((void *)local_548._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_548._64_8_);
      }
    }
    if (*pbVar25 != false) {
      if (this->bDirectAliasing == false) {
        local_1348 = (param_2->TextureSize).field0_0x0._s_0;
        local_f38.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_f38._0_8_ = FClearValueBinding::None._0_8_;
        local_f38.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar19.field0_0x0._0_4_ = (int)((local_1348.X >> 0x1f & 3U) + local_1348.X) >> 2;
        TVar19.field0_0x0._s_0.Y = (int)((local_1348.Y >> 0x1f & 3U) + local_1348.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_4f8,TVar19,PF_R32G32B32A32_UINT,
                                   &local_f38,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture0",None);
        this->CompressTexture0 = pFVar8;
        this->OutputAlias0 = pFVar8;
        if ((void *)local_4f8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_4f8._64_8_);
        }
        local_15d8.Texture = this->CompressTexture0;
        local_15d8._padding_._0_1_ = ((local_15d8.Texture)->Desc).field_0x34;
        local_15d8._padding_._1_1_ = 0;
        local_15d8._padding_._2_4_ = 0;
        local_15d8._padding_._6_1_ = 0;
        local_15d8._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_15d8,None);
        this->CompressTextureUAV0_128bit = pFVar10;
        local_1340 = (param_2->TextureSize).field0_0x0._s_0;
        local_f98.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_f98._0_8_ = FClearValueBinding::None._0_8_;
        local_f98.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar20.field0_0x0._0_4_ = (int)((local_1340.X >> 0x1f & 3U) + local_1340.X) >> 2;
        TVar20.field0_0x0._s_0.Y = (int)((local_1340.Y >> 0x1f & 3U) + local_1340.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_4a8,TVar20,PF_R32G32B32A32_UINT,
                                   &local_f98,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture1",None);
        this->CompressTexture1 = pFVar8;
        this->OutputAlias1 = pFVar8;
        if ((void *)local_4a8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_4a8._64_8_);
        }
        local_1530.Texture = this->CompressTexture1;
        local_1530._padding_._0_1_ = ((local_1530.Texture)->Desc).field_0x34;
        local_1530._padding_._1_1_ = 0;
        local_1530._padding_._2_4_ = 0;
        local_1530._padding_._6_1_ = 0;
        local_1530._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1530,None);
        this->CompressTextureUAV1_128bit = pFVar10;
        local_1338 = (param_2->TextureSize).field0_0x0._s_0;
        local_fb8.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_fb8._0_8_ = FClearValueBinding::None._0_8_;
        local_fb8.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar21.field0_0x0._0_4_ = (int)((local_1338.X >> 0x1f & 3U) + local_1338.X) >> 2;
        TVar21.field0_0x0._s_0.Y = (int)((local_1338.Y >> 0x1f & 3U) + local_1338.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_458,TVar21,PF_R32G32B32A32_UINT,
                                   &local_fb8,UAV,uVar28);
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture2",None);
        this->CompressTexture2 = pFVar8;
        this->OutputAlias2 = pFVar8;
        if ((void *)local_458._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_458._64_8_);
        }
        local_1548.Texture = this->CompressTexture2;
        local_1548._padding_._0_1_ = ((local_1548.Texture)->Desc).field_0x34;
        local_1548._padding_._1_1_ = 0;
        local_1548._padding_._2_4_ = 0;
        local_1548._padding_._6_1_ = 0;
        local_1548._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1548,None);
        this->CompressTextureUAV2_128bit = pFVar10;
      }
      else {
        if (((param_2->OutputTargets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_14d0.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                (param_2->OutputTargets).AllocatorInstance.Data,
                        ForceImmediateFirstBarrier);
        this->CompressTexture0 = local_14d0.Texture;
        local_14d0._padding_._0_4_ = 0x30;
        local_14d0._padding_._4_2_ = 0;
        local_14d0._padding_._6_1_ = 0;
        local_14d0._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_14d0,None);
        this->CompressTextureUAV0_128bit = pFVar10;
        if (((param_2->OutputTargets).ArrayNum < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1500.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                ((param_2->OutputTargets).AllocatorInstance.Data + 8),
                        ForceImmediateFirstBarrier);
        this->CompressTexture1 = local_1500.Texture;
        local_1500._padding_._0_4_ = 0x30;
        local_1500._padding_._4_2_ = 0;
        local_1500._padding_._6_1_ = 0;
        local_1500._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1500,None);
        this->CompressTextureUAV1_128bit = pFVar10;
        if (((param_2->OutputTargets).ArrayNum < 3) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1518.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                ((param_2->OutputTargets).AllocatorInstance.Data + 0x10),
                        ForceImmediateFirstBarrier);
        this->CompressTexture2 = local_1518.Texture;
        local_1518._padding_._0_4_ = 0x30;
        local_1518._padding_._4_2_ = 0;
        local_1518._padding_._6_1_ = 0;
        local_1518._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1518,None);
        this->CompressTextureUAV2_128bit = pFVar10;
        this->OutputAlias2 = (FRDGTexture *)0x0;
        this->OutputAlias1 = (FRDGTexture *)0x0;
        this->OutputAlias0 = (FRDGTexture *)0x0;
      }
    }
    if (this->bCopyPass != false) {
      local_fd8._0_8_ = FClearValueBinding::Black._0_8_;
      local_fd8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_fd8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_408,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_fd8,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_408._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_408._64_8_);
      }
      local_ff8._0_8_ = FClearValueBinding::Black._0_8_;
      local_ff8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_ff8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_3b8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_ff8,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture1",None);
      this->CopyTexture1 = pFVar8;
      this->OutputAlias1 = pFVar8;
      if ((void *)local_3b8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._64_8_);
      }
      local_1018._0_8_ = FClearValueBinding::Black._0_8_;
      local_1018.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1018.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_368,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1018,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture2",None);
      this->CopyTexture2 = pFVar8;
      this->OutputAlias2 = pFVar8;
      if ((void *)local_368._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_368._64_8_);
      }
    }
    if (this->bCopyThumbnailPass != false) {
      local_1038._0_8_ = FClearValueBinding::Black._0_8_;
      local_1038.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1038.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_318,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1038,EVar27 | SRGB,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_318._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_318._64_8_);
      }
    }
    break;
  case WorldHeight:
    if (this->bRenderPass != false) {
      local_10b8._0_8_ = FClearValueBinding::Black._0_8_;
      local_10b8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_10b8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_1d8,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_G16,
                                 &local_10b8,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_1d8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._64_8_);
      }
    }
    if (this->bCopyThumbnailPass == false) break;
    local_10d8._0_8_ = FClearValueBinding::Black._0_8_;
    local_10d8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
    local_10d8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
    pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_188,
                               (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                               &local_10d8,EVar27,uVar28);
    pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
    this->CopyTexture0 = pFVar8;
    this->OutputAlias0 = pFVar8;
LAB_145909a66:
    if ((void *)local_188._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_188._64_8_);
    }
    break;
  case Displacement:
    if (this->bRenderPass != false) {
      local_10f8._0_8_ = FClearValueBinding::Black._0_8_;
      local_10f8.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_10f8.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_138,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_G16,
                                 &local_10f8,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"RenderTexture0",None);
      this->RenderTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_138._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_138._64_8_);
      }
    }
    if (*pbVar25 != false) {
      if (this->bDirectAliasing == false) {
        local_1328 = (param_2->TextureSize).field0_0x0._s_0;
        local_1118.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
        local_1118._0_8_ = FClearValueBinding::None._0_8_;
        local_1118.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
        TVar23.field0_0x0._0_4_ = (int)((local_1328.X >> 0x1f & 3U) + local_1328.X) >> 2;
        TVar23.field0_0x0._s_0.Y = (int)((local_1328.Y >> 0x1f & 3U) + local_1328.Y) >> 2;
        pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_e8,TVar23,EVar24,&local_1118,UAV,uVar28)
        ;
        pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CompressTexture0",None);
        this->CompressTexture0 = pFVar8;
        this->OutputAlias0 = pFVar8;
        if ((void *)local_e8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_e8._64_8_);
        }
        local_15a8.Texture = this->CompressTexture0;
        local_15a8._padding_._0_1_ = ((local_15a8.Texture)->Desc).field_0x34;
        local_15a8._padding_._1_1_ = 0;
        local_15a8._padding_._2_4_ = 0;
        local_15a8._padding_._6_1_ = 0;
        local_15a8._padding_._0_1_ = 0;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_15a8,None);
        this->CompressTextureUAV0_64bit = pFVar10;
      }
      else {
        if (((param_2->OutputTargets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1590.Texture =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                (param_2->OutputTargets).AllocatorInstance.Data,
                        ForceImmediateFirstBarrier);
        this->CompressTexture0 = local_1590.Texture;
        local_1590._padding_._1_1_ = 0;
        local_1590._padding_._2_4_ = 0;
        local_1590._padding_._6_1_ = 0;
        local_1590._padding_._0_1_ = 0;
        local_1590._padding_._0_1_ = EVar24;
        pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_1590,None);
        this->CompressTextureUAV0_64bit = pFVar10;
        this->OutputAlias0 = (FRDGTexture *)0x0;
      }
    }
    if (this->bCopyThumbnailPass != false) {
      local_1138._0_8_ = FClearValueBinding::Black._0_8_;
      local_1138.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1138.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
      pFVar9 = CreateTextureDesc((FRDGTextureDesc *)local_98,
                                 (TIntPoint<int>)(param_2->TextureSize).field0_0x0._s_0,PF_B8G8R8A8,
                                 &local_1138,EVar27,uVar28);
      pFVar8 = FRDGBuilder::CreateTexture(param_1,pFVar9,L"CopyTexture0",None);
      this->CopyTexture0 = pFVar8;
      this->OutputAlias0 = pFVar8;
      if ((void *)local_98._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._64_8_);
      }
    }
  }
  if (this->OutputAlias0 != (FRDGTexture *)0x0) {
    if (((param_2->OutputTargets).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)(param_2->OutputTargets).AllocatorInstance.Data != 0) {
      if (((param_2->OutputTargets).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = FRDGBuilder::RegisterExternalTexture
                         (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                  (param_2->OutputTargets).AllocatorInstance.Data,
                          ForceImmediateFirstBarrier);
      this->TargetTexture0 = pFVar8;
    }
  }
  if (this->OutputAlias1 != (FRDGTexture *)0x0) {
    if (((param_2->OutputTargets).ArrayNum < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)((param_2->OutputTargets).AllocatorInstance.Data + 8) != 0) {
      if (((param_2->OutputTargets).ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = FRDGBuilder::RegisterExternalTexture
                         (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                  ((param_2->OutputTargets).AllocatorInstance.Data + 8),
                          ForceImmediateFirstBarrier);
      this->TargetTexture1 = pFVar8;
    }
  }
  if (this->OutputAlias2 != (FRDGTexture *)0x0) {
    if (((param_2->OutputTargets).ArrayNum < 3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)((param_2->OutputTargets).AllocatorInstance.Data + 0x10) != 0) {
      if (((param_2->OutputTargets).ArrayNum < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = FRDGBuilder::RegisterExternalTexture
                         (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                  ((param_2->OutputTargets).AllocatorInstance.Data + 0x10),
                          ForceImmediateFirstBarrier);
      this->TargetTexture2 = pFVar8;
    }
  }
  return;
}

