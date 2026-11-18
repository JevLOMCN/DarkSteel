// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// ~IScreenSpaceDenoiser @ 145520ed0

void __thiscall IScreenSpaceDenoiser::~IScreenSpaceDenoiser(IScreenSpaceDenoiser *this)

{
  *this = (IScreenSpaceDenoiser)&___7IScreenSpaceDenoiser__6B_;
  return;
}

// CreateHarmonicTextures @ 14552fdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHarmonicTextures * __cdecl
IScreenSpaceDenoiser::CreateHarmonicTextures
          (FHarmonicTextures *__return_storage_ptr__,FRDGBuilder *param_1,TIntPoint<int> param_2,
          wchar_t *param_3)

{
  TRHIGlobal<int> TVar1;
  FRDGUserValidation *this;
  int iVar2;
  FRDGTexture *pFVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStackY_158 [32];
  wchar_t *local_118;
  float local_110;
  FRDGUserValidation *local_108;
  FMemStackBase *local_100;
  FRDGTrace *local_f8;
  wchar_t *local_f0;
  wchar_t **local_e8;
  undefined1 *local_e0;
  wchar_t **local_d8;
  undefined1 *local_d0;
  wchar_t **local_c8;
  undefined1 *local_c0;
  wchar_t **local_b8;
  undefined1 *local_b0;
  EClearBinding local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  float fStack_88;
  float fStack_84;
  float local_80;
  int local_7c;
  undefined4 local_78;
  TIntPoint<int>_u_0 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  ForElementType<EPixelFormat> local_60;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_110 = FClearValueBinding::None.Value.Color[3];
  fStack_9c = FClearValueBinding::None.Value.Color[2];
  fStack_a0 = FClearValueBinding::None.Value.Color[1];
  fStack_a4 = FClearValueBinding::None.Value.Color[0];
  local_a8 = FClearValueBinding::None.ColorBinding;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_108 = &param_1->UserValidation;
  bVar4 = (byte)GNumExplicitGPUsForRendering;
  local_100 = (FMemStackBase *)&param_1->_padding_;
  lVar7 = 0;
  *(undefined8 *)&__return_storage_ptr__->Harmonics = 0;
  local_f8 = &param_1->Trace;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x20 = 0;
  local_f0 = param_3;
  do {
    this = local_108;
    local_60.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_78 = 0;
    local_50 = 0;
    local_4c = 1;
    local_66 = 0xff000a00;
    local_98._0_8_ = 0x20008;
    local_6c = 0x10001;
    local_68 = 0x101;
    local_118 = local_f0;
    local_98._8_4_ = local_a8;
    local_98._12_4_ = fStack_a4;
    fStack_88 = fStack_a0;
    fStack_84 = fStack_9c;
    local_80 = local_110;
    local_7c = (1 << (bVar4 & 0x1f)) + -1;
    local_74 = param_2.field0_0x0;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,0,1,&local_60,0,&local_4c);
    if ((int)local_74._0_4_ < 1) {
      local_e8 = &local_118;
      local_e0 = local_98;
      `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_e8);
    }
    if ((int)local_74._4_4_ < 1) {
      local_d8 = &local_118;
      local_d0 = local_98;
      `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_d8);
    }
    uVar6 = local_74._s_0.Y;
    if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)local_74._0_4_) {
      local_c8 = &local_118;
      local_c0 = local_98;
      `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_c8);
      uVar6 = local_74._4_4_;
    }
    if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)uVar6) {
      local_b8 = &local_118;
      local_b0 = local_98;
      `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_b8);
      uVar6 = local_74._4_4_;
    }
    uVar5 = GRHIGlobals.MaxTextureDimensions.Value;
    if ((int)local_74._0_4_ < GRHIGlobals.MaxTextureDimensions.Value) {
      uVar5 = local_74._0_4_;
    }
    local_74._s_0.X = 1;
    if (1 < (int)uVar5) {
      local_74._s_0.X = uVar5;
    }
    TVar1.Value = GRHIGlobals.MaxTextureDimensions.Value;
    if ((int)uVar6 < GRHIGlobals.MaxTextureDimensions.Value) {
      TVar1.Value = uVar6;
    }
    local_74._s_0.Y = 1;
    if (1 < TVar1.Value) {
      local_74._s_0.Y = TVar1.Value;
    }
    FRDGUserValidation::ValidateCreateTexture(this,(FRDGTextureDesc *)local_98,local_118,None);
    pFVar3 = FMemStackBase::Alloc(local_100,0x158,8);
    pFVar3 = FRDGTexture::FRDGTexture(pFVar3,local_118,(FRDGTextureDesc *)local_98,None);
    iVar2 = (param_1->Textures).Array.ArrayNum;
    if (iVar2 == (param_1->Textures).Array.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                        (0x808,(ForElementType<FRDGTexture_*> *)&param_1->Textures,
                         &(param_1->Textures).Array.ArrayMax);
    }
    (param_1->Textures).Array.ArrayNum = iVar2 + 1;
    (param_1->Textures).Array.AllocatorInstance.Data[iVar2] = pFVar3;
    (pFVar3->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
    FRDGUserValidation::ValidateCreateTexture(local_108,pFVar3);
    FRDGTrace::AddResource(local_f8,(FRDGViewableResource *)pFVar3);
    if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
    *(FRDGTexture **)(&(__return_storage_ptr__->Harmonics).field_0x0 + lVar7 * 8) = pFVar3;
    lVar7 = lVar7 + 1;
  } while (lVar7 < 5);
  return __return_storage_ptr__;
}

// CreateUAVs @ 145530950

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDiffuseIndirectHarmonicUAVs * __cdecl
IScreenSpaceDenoiser::CreateUAVs
          (FDiffuseIndirectHarmonicUAVs *__return_storage_ptr__,FRDGBuilder *param_1,
          FDiffuseIndirectHarmonic *param_2)

{
  FRDGTextureUAV *pFVar1;
  FRDGTextureUAVDesc local_28;
  
  *(undefined8 *)&__return_storage_ptr__->SphericalHarmonic = 0;
  *(undefined8 *)&(__return_storage_ptr__->SphericalHarmonic).field_0x8 = 0;
  local_28.Texture = *(FRDGTexture **)&param_2->SphericalHarmonic;
  local_28._padding_._1_1_ = 0;
  local_28._padding_._2_4_ = 0;
  local_28._padding_._6_1_ = 0;
  local_28._padding_._0_1_ = ((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._0_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  *(FRDGTextureUAV **)&__return_storage_ptr__->SphericalHarmonic = pFVar1;
  local_28.Texture = *(FRDGTexture **)&(param_2->SphericalHarmonic).field_0x8;
  local_28._padding_._1_1_ = 0;
  local_28._padding_._2_4_ = 0;
  local_28._padding_._0_1_ = ((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._6_1_ = 0;
  local_28._padding_._0_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  *(FRDGTextureUAV **)&(__return_storage_ptr__->SphericalHarmonic).field_0x8 = pFVar1;
  return __return_storage_ptr__;
}

// CreateUAVs @ 145530a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FHarmonicUAVs * __cdecl
IScreenSpaceDenoiser::CreateUAVs
          (FHarmonicUAVs *__return_storage_ptr__,FRDGBuilder *param_1,FHarmonicTextures *param_2)

{
  FRDGTextureUAV *pFVar1;
  FRDGTextureUAVDesc local_28;
  
  *(undefined8 *)&__return_storage_ptr__->Harmonics = 0;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Harmonics).field_0x20 = 0;
  local_28.Texture = *(FRDGTexture **)&param_2->Harmonics;
  local_28._padding_._1_1_ = 0;
  local_28._padding_._2_4_ = 0;
  local_28._padding_._0_1_ = ((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._6_1_ = 0;
  local_28._padding_._0_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  *(FRDGTextureUAV **)&__return_storage_ptr__->Harmonics = pFVar1;
  local_28.Texture = *(FRDGTexture **)&(param_2->Harmonics).field_0x8;
  local_28._padding_._1_1_ = 0;
  local_28._padding_._2_4_ = 0;
  local_28._padding_._0_1_ = ((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._6_1_ = 0;
  local_28._padding_._0_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  *(FRDGTextureUAV **)&(__return_storage_ptr__->Harmonics).field_0x8 = pFVar1;
  local_28.Texture = *(FRDGTexture **)&(param_2->Harmonics).field_0x10;
  local_28._padding_._1_1_ = 0;
  local_28._padding_._2_4_ = 0;
  local_28._padding_._0_1_ = ((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._6_1_ = 0;
  local_28._padding_._0_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  *(FRDGTextureUAV **)&(__return_storage_ptr__->Harmonics).field_0x10 = pFVar1;
  local_28.Texture = *(FRDGTexture **)&(param_2->Harmonics).field_0x18;
  local_28._padding_._1_1_ = 0;
  local_28._padding_._2_4_ = 0;
  local_28._padding_._0_1_ = ((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._6_1_ = 0;
  local_28._padding_._0_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  *(FRDGTextureUAV **)&(__return_storage_ptr__->Harmonics).field_0x18 = pFVar1;
  local_28.Texture = *(FRDGTexture **)&(param_2->Harmonics).field_0x20;
  local_28._padding_._1_1_ = 0;
  local_28._padding_._2_4_ = 0;
  local_28._padding_._0_1_ = ((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._6_1_ = 0;
  local_28._padding_._0_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  *(FRDGTextureUAV **)&(__return_storage_ptr__->Harmonics).field_0x20 = pFVar1;
  return __return_storage_ptr__;
}

// DenoiseIndirectProbeHierarchy @ 1455320c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FSSDSignalTextures * __cdecl
IScreenSpaceDenoiser::DenoiseIndirectProbeHierarchy
          (FSSDSignalTextures *__return_storage_ptr__,FRDGBuilder *param_1,FViewInfo *param_2,
          FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,FSSDSignalTextures *param_5,
          FRDGTexture *param_6,FRDGTexture *param_7)

{
  FSceneViewState *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FSSDSignalTextures *pFVar5;
  undefined1 auStackY_328 [32];
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  TArrayView<FViewInfo_const_,int> local_2a8;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  ESignalProcessing local_288;
  int iStack_284;
  float fStack_280;
  int iStack_27c;
  float local_278;
  float fStack_274;
  uint uStack_270;
  int iStack_26c;
  int iStack_268;
  float fStack_264;
  undefined4 uStack_260;
  int iStack_25c;
  float local_258;
  undefined4 uStack_254;
  FLightSceneInfo *pFStack_250;
  FLightSceneInfo *local_248;
  FLightSceneInfo *pFStack_240;
  FLightSceneInfo *local_238;
  FRDGTexture *pFStack_230;
  FRDGTexture *local_228;
  TIntRect<int>_u_0 *pTStack_220;
  int iStack_218;
  undefined4 uStack_214;
  FViewInfo *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  FViewInfoPooledRenderTargets local_1f8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1b8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_198;
  FSSDConstantPixelDensitySettings local_178;
  FScreenSpaceDenoiserHistory *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  FScreenSpaceDenoiserHistory *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  TIntRect<int>_u_0 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  pTVar3 = CVarGITemporalAccumulation.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_b8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_b8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  iStack_284 = 1;
  fStack_280 = 1.0;
  local_278 = 1.0;
  fStack_274 = 1.0;
  iStack_26c = 1;
  iStack_268 = 0;
  fStack_264 = 8.0;
  iStack_25c = 1;
  local_258 = 1.0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_288 = IndirectProbeHierarchy;
  uStack_270 = uStack_270 & 0xffffff00;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSSDSignalTextures *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFStack_230 = param_6;
  pFVar1 = param_2->ViewState;
  local_228 = param_7;
  uStack_260 = CONCAT31(uStack_260._1_3_,pTVar3->ShadowedValue[1] != 0);
  pTStack_220 = &local_b8;
  iStack_27c = 8;
  local_1f8.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_1f8.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  iStack_218 = 1;
  uStack_214 = uStack_2bc;
  local_1f8.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_1f8.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_1f8);
  *(undefined8 *)&__return_storage_ptr__->Textures = 0;
  local_1b8.Elements[0] = &(pFVar1->PrevFrameViewInfo).DiffuseIndirectHistory;
  if (pFVar1 == (FSceneViewState *)0x0) {
    local_1b8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  }
  uStack_298 = (undefined4)uStack_e8;
  uStack_294 = (undefined4)((ulonglong)uStack_e8 >> 0x20);
  local_198.Elements[0] = &param_3->DiffuseIndirectHistory;
  uStack_290 = (undefined4)local_e0;
  uStack_28c = (undefined4)((ulonglong)local_e0 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x8 = 0;
  local_1b8.Elements[2]._0_4_ = uStack_298;
  local_1b8.Elements[2]._4_4_ = uStack_294;
  local_2b8 = (undefined4)uStack_c8;
  uStack_2b4 = (undefined4)((ulonglong)uStack_c8 >> 0x20);
  local_1b8.Elements[1] = local_f0;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x10 = 0;
  local_198.Elements[3]._0_4_ = (undefined4)local_c0;
  local_198.Elements[3]._4_4_ = (undefined4)((ulonglong)local_c0 >> 0x20);
  local_198.Elements[1] = local_d0;
  local_178.SignalBatchSize = iStack_284;
  local_178.SignalProcessing = local_288;
  local_178.MaxInputSPP = iStack_27c;
  local_178.HarmonicPeriode = fStack_280;
  local_198.Elements[2]._0_4_ = local_2b8;
  local_198.Elements[2]._4_4_ = uStack_2b4;
  local_178.DenoisingResolutionFraction = fStack_274;
  local_178.InputResolutionFraction = local_278;
  local_178.ReconstructionSamples = iStack_26c;
  local_178._24_4_ = uStack_270;
  local_178.KernelSpreadFactor = fStack_264;
  local_178.PreConvolutionCount = iStack_268;
  local_178.HistoryConvolutionSampleCount = iStack_25c;
  local_178._40_4_ = uStack_260;
  local_178._52_4_ = uStack_254;
  local_178.HistoryConvolutionKernelSpreadFactor = local_258;
  local_178.LightSceneInfo.Elements[0] = pFStack_250;
  local_178.LightSceneInfo.Elements[1] = local_248;
  local_178.LightSceneInfo.Elements[2] = pFStack_240;
  local_178.LightSceneInfo.Elements[3] = local_238;
  local_178.CompressedDepthTexture = pFStack_230;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x18 = 0;
  uStack_200 = 1;
  local_2a8._12_4_ = uStack_1fc;
  local_2a8.ArrayNum = 1;
  local_178.CompressedShadingModelTexture = local_228;
  local_178.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_220;
  local_178.ViewSettingsArray.ArrayNum = 1;
  local_178.ViewSettingsArray._12_4_ = uStack_2bc;
  local_2a8.DataPtr = param_2;
  local_208 = param_2;
  local_1b8.Elements[3]._0_4_ = uStack_290;
  local_1b8.Elements[3]._4_4_ = uStack_28c;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_2a8,param_4,&local_1f8,param_5,&local_178,&local_198,&local_1b8,
             __return_storage_ptr__);
  if (local_1f8.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1f8.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_1f8.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1f8.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_1f8.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1f8.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_1f8.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1f8.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  return __return_storage_ptr__;
}

// DenoiseSkyLight @ 14553a2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FDiffuseIndirectOutputs * __cdecl
IScreenSpaceDenoiser::DenoiseSkyLight
          (FDiffuseIndirectOutputs *__return_storage_ptr__,FRDGBuilder *param_1,
          TArrayView<FViewInfo_const_,int> *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FDiffuseIndirectInputs *param_5,
          FAmbientOcclusionRayTracingConfig param_6)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  FViewInfo *pFVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FRDGScope *this;
  FDiffuseIndirectOutputs *pFVar12;
  ForElementType<FSSDConstantPixelDensityViewSettings> FVar13;
  FScreenSpaceDenoiserHistory *pFVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_578 [32];
  longlong local_520;
  undefined4 uStack_50c;
  TRDGEventScopeGuard<FRDGScope_RHI> local_4f0;
  char local_4e0;
  ESignalProcessing local_4d8;
  int iStack_4d4;
  float fStack_4d0;
  int iStack_4cc;
  float local_4c8;
  float fStack_4c4;
  undefined4 uStack_4c0;
  int iStack_4bc;
  int local_4b8;
  float fStack_4b4;
  undefined4 uStack_4b0;
  int iStack_4ac;
  float local_4a8;
  undefined4 uStack_4a4;
  FLightSceneInfo *pFStack_4a0;
  FLightSceneInfo *local_498;
  FLightSceneInfo *pFStack_490;
  FLightSceneInfo *local_488;
  FRDGTexture *pFStack_480;
  FRDGTexture *local_478;
  ForElementType<FSSDConstantPixelDensityViewSettings> FStack_470;
  int iStack_468;
  undefined4 uStack_464;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_> local_458;
  TArrayView<FViewInfo_const_,int> local_448;
  FRDGTexture *local_438;
  FRDGTexture *local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  FRDGTexture *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  FViewInfoPooledRenderTargets local_3f8;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  FScreenSpaceDenoiserHistory *local_398;
  FScreenSpaceDenoiserHistory *pFStack_390;
  FScreenSpaceDenoiserHistory *local_388;
  FScreenSpaceDenoiserHistory *pFStack_380;
  FScreenSpaceDenoiserHistory *local_378;
  FScreenSpaceDenoiserHistory *pFStack_370;
  FScreenSpaceDenoiserHistory *local_368;
  FScreenSpaceDenoiserHistory *pFStack_360;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_358;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_338;
  FSSDConstantPixelDensitySettings local_318;
  ForElementType<FSSDConstantPixelDensityViewSettings> local_298;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_578;
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_4e0 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xbf5;
      local_3a8 = 0x54bd6210;
      uStack_3a4 = 1;
      ::Desc._padding_._0_4_ = 0x54bd6210;
      ::Desc._padding_._4_4_ = uStack_3ac;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_DenoiseSkyLight;
      ::Desc._padding_ = (longlong)u_DenoiseSkyLight;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```IScreenSpaceDenoiser::DenoiseSkyLight'::__l7::Desc::operator()<>'::__l3::<lambda_1>
             ::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_458._Myfirst._Val = &::Desc;
    local_4f0.State = (FRDGScopeState *)param_1;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this;
    local_4f0.Scope = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)param_1,&local_458);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_4e0 = '\x01';
  }
  local_3f8.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_3f8.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_3f8.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_3f8.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  if ((param_2->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  SetupSceneViewInfoPooledRenderTargets(param_2->DataPtr,&local_3f8);
  pTVar6 = CVarGIReconstructionSampleCount.Ref;
  local_428 = 0;
  uStack_420 = 0;
  pFStack_480 = (FRDGTexture *)0x0;
  local_438 = param_5->Color;
  local_430 = param_5->RayHitDistance;
  local_478 = (FRDGTexture *)0x0;
  local_4c8 = param_6.ResolutionFraction;
  iStack_4d4 = 1;
  fStack_4d0 = 1.0;
  fStack_4c4 = 1.0;
  uStack_4c0 = CONCAT31(uStack_4c0._1_3_,1);
  fStack_4b4 = 8.0;
  local_4d8 = DiffuseAndAmbientOcclusion;
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  pTVar7 = CVarGIPreConvolutionCount.Ref;
  iVar10 = 0x38;
  if (pTVar6->ShadowedValue[1] < 0x38) {
    iVar10 = pTVar6->ShadowedValue[1];
  }
  iStack_4bc = 1;
  if (1 < iVar10) {
    iStack_4bc = iVar10;
  }
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  pTVar6 = CVarGITemporalAccumulation.Ref;
  local_4b8 = pTVar7->ShadowedValue[1];
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  pTVar7 = CVarGIHistoryConvolutionSampleCount.Ref;
  uStack_4b0 = CONCAT31(uStack_4b0._1_3_,pTVar6->ShadowedValue[1] != 0);
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  pTVar8 = CVarGIHistoryConvolutionKernelSpreadFactor.Ref;
  iStack_4ac = pTVar7->ShadowedValue[1];
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  local_4a8 = pTVar8->ShadowedValue[1];
  iStack_4cc = (int)param_6.RayCountPerPixel;
  uVar3 = param_2->ArrayNum;
  uVar15 = 0;
  local_298.SecondaryData = (ForElementType<FSSDConstantPixelDensityViewSettings>)0x0;
  local_50[0] = 0;
  local_50[1] = 6;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    iVar10 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FSSDConstantPixelDensityViewSettings>_>
                       (0x60,4,uVar3,&local_298,local_50,local_50 + 1);
    FVar13 = (ForElementType<FSSDConstantPixelDensityViewSettings>)&local_298;
    if (local_298.SecondaryData != (ForElementType<FSSDConstantPixelDensityViewSettings>)0x0) {
      FVar13 = local_298.SecondaryData;
    }
    DefaultConstructItems<FSSDConstantPixelDensityViewSettings,int>
              ((void *)((longlong)iVar10 * 0x60 + (longlong)FVar13),uVar3);
    lVar16 = 0;
    local_520 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (int)uVar3) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
        return pFVar12;
      }
      pFVar4 = param_2->DataPtr;
      uVar11 = 0;
      if ((int)uVar15 < local_50[0]) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
        return pFVar12;
      }
      FVar13 = (ForElementType<FSSDConstantPixelDensityViewSettings>)&local_298;
      if (local_298.SecondaryData != (ForElementType<FSSDConstantPixelDensityViewSettings>)0x0) {
        FVar13 = local_298.SecondaryData;
      }
      uVar15 = uVar15 + 1;
      *(undefined8 *)((longlong)FVar13 + lVar16) =
           *(undefined8 *)
            ((longlong)&((TIntRect<int> *)(&pFVar4->PrimitiveVisibilityMap + -1))->field0_0x0 +
            local_520);
      puVar1 = (undefined8 *)
               ((longlong)(&(pFVar4->PrimitiveVisibilityMap).AllocatorInstance + -1) + local_520);
      local_520 = local_520 + 0x2970;
      *(undefined8 *)((uchar *)((longlong)FVar13 + 8) + lVar16) = *puVar1;
      lVar16 = lVar16 + 0x60;
    } while ((int)uVar15 < (int)uVar3);
  }
  iVar10 = local_50[0];
  FVar13 = (ForElementType<FSSDConstantPixelDensityViewSettings>)&local_298;
  if (local_298.SecondaryData != (ForElementType<FSSDConstantPixelDensityViewSettings>)0x0) {
    FVar13 = local_298.SecondaryData;
  }
  if ((local_50[0] < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  local_378 = &param_3->SkyLightHistory;
  uStack_464 = uStack_50c;
  iStack_468 = iVar10;
  pFVar14 = (FScreenSpaceDenoiserHistory *)0x0;
  FStack_470 = FVar13;
  if ((param_2->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
    return pFVar12;
  }
  if (param_2->DataPtr->ViewState != (FSceneViewState *)0x0) {
    if ((param_2->ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FDiffuseIndirectOutputs *)(*pcVar5)();
      return pFVar12;
    }
    pFVar14 = &(param_2->DataPtr->ViewState->PrevFrameViewInfo).SkyLightHistory;
  }
  local_418 = (FRDGTexture *)0x0;
  uStack_410 = 0;
  local_358.Elements[1] = pFStack_390;
  local_408 = 0;
  uStack_400 = 0;
  local_338.Elements[0] = local_378;
  local_338.Elements[1] = pFStack_370;
  local_318.SignalBatchSize = iStack_4d4;
  local_318.SignalProcessing = local_4d8;
  local_318.MaxInputSPP = iStack_4cc;
  local_318.HarmonicPeriode = fStack_4d0;
  local_358.Elements[2] = local_388;
  local_358.Elements[3] = pFStack_380;
  local_318.KernelSpreadFactor = fStack_4b4;
  local_318.PreConvolutionCount = local_4b8;
  local_318.HistoryConvolutionSampleCount = iStack_4ac;
  local_318._40_4_ = uStack_4b0;
  local_338.Elements[2] = local_368;
  local_338.Elements[3] = pFStack_360;
  local_318.DenoisingResolutionFraction = fStack_4c4;
  local_318.InputResolutionFraction = local_4c8;
  local_318.ReconstructionSamples = iStack_4bc;
  local_318._24_4_ = uStack_4c0;
  local_318._52_4_ = uStack_4a4;
  local_318.HistoryConvolutionKernelSpreadFactor = local_4a8;
  local_318.LightSceneInfo.Elements[1] = local_498;
  local_318.LightSceneInfo.Elements[2] = pFStack_490;
  local_318.LightSceneInfo.Elements[0] = pFStack_4a0;
  local_318.CompressedShadingModelTexture = local_478;
  local_318.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)FStack_470;
  local_448.DataPtr = param_2->DataPtr;
  local_448.ArrayNum = param_2->ArrayNum;
  local_448._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_318.LightSceneInfo.Elements[3] = local_488;
  local_318.CompressedDepthTexture = pFStack_480;
  local_318.ViewSettingsArray.ArrayNum = iStack_468;
  local_318.ViewSettingsArray._12_4_ = uStack_464;
  local_398 = pFVar14;
  local_358.Elements[0] = pFVar14;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_448,param_4,&local_3f8,(FSSDSignalTextures *)&local_438,&local_318,
             &local_338,&local_358,(FSSDSignalTextures *)&local_418);
  __return_storage_ptr__->AmbientOcclusionMask = (FRDGTexture *)0x0;
  __return_storage_ptr__->Color = local_418;
  if (local_298.SecondaryData != (ForElementType<FSSDConstantPixelDensityViewSettings>)0x0) {
    FMemory::Free((void *)local_298.SecondaryData);
  }
  if (local_3f8.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_3f8.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_3f8.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_3f8.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_3f8.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_3f8.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_3f8.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_3f8.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_4e0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_4f0);
  }
  return __return_storage_ptr__;
}

// GetDefaultDenoiser @ 145543cd0

IScreenSpaceDenoiser * __cdecl IScreenSpaceDenoiser::GetDefaultDenoiser(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      GDefaultDenoiser = ::operator_new(8);
      if (GDefaultDenoiser != (IScreenSpaceDenoiser *)0x0) {
        *GDefaultDenoiser = (IScreenSpaceDenoiser)&___7FDefaultScreenSpaceDenoiser__6B_;
      }
      _Init_thread_footer(&::_TSS0);
      return GDefaultDenoiser;
    }
  }
  return GDefaultDenoiser;
}

// GetDenoiserMode @ 145543d60

EMode __cdecl IScreenSpaceDenoiser::GetDenoiserMode(TAutoConsoleVariable<int> *param_1)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  EMode EVar5;
  IScreenSpaceDenoiser *pIVar6;
  IScreenSpaceDenoiser *pIVar7;
  
  pTVar2 = param_1->Ref;
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  iVar1 = pTVar2->ShadowedValue[1];
  if (iVar1 == 0) {
    return Disabled;
  }
  if (iVar1 == 1) {
    return DefaultDenoiser;
  }
  pIVar6 = (IScreenSpaceDenoiser *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar7 = ::operator_new(8);
    if (pIVar7 != (IScreenSpaceDenoiser *)0x0) {
      *pIVar7 = (IScreenSpaceDenoiser)&___7FDefaultScreenSpaceDenoiser__6B_;
      pIVar6 = pIVar7;
    }
    GDefaultDenoiser = pIVar6;
    _Init_thread_footer(&::_TSS0);
  }
  return (GScreenSpaceDenoiser != GDefaultDenoiser) + DefaultDenoiser;
}

