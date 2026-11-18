// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 16

// FDLSSDenoiser @ 14de20c90

FDLSSDenoiser * __thiscall
FDLSSDenoiser::FDLSSDenoiser
          (FDLSSDenoiser *this,IScreenSpaceDenoiser *param_1,FDLSSUpscaler *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDLSSDenoiser *pFVar3;
  
  this->WrappedDenoiser = param_1;
  this->_padding_ = (longlong)&___7FDLSSDenoiser__6B_;
  this->Upscaler = param_2;
  if (param_2 == (FDLSSUpscaler *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Upscaler",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSDenoiser.cpp"
                       ,0x3c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDLSSDenoiser *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->WrappedDenoiser == (IScreenSpaceDenoiser *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WrappedDenoiser",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSDenoiser.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDLSSDenoiser *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// DenoiseAmbientOcclusion @ 14de25280

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

FAmbientOcclusionOutputs * __thiscall
FDLSSDenoiser::DenoiseAmbientOcclusion
          (FDLSSDenoiser *this,FAmbientOcclusionOutputs *__return_storage_ptr__,FRDGBuilder *param_1
          ,FViewInfo *param_2,FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          FAmbientOcclusionInputs *param_5,FAmbientOcclusionRayTracingConfig param_6)

{
  bool bVar1;
  undefined8 uStack_10;
  
  bVar1 = SkipDenoiser(this,param_2);
  if (bVar1) {
    __return_storage_ptr__->AmbientOcclusionMask = param_5->Mask;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uStack_10;
  }
  else {
    (**(code **)((longlong)*this->WrappedDenoiser + 0x38))
              (this->WrappedDenoiser,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,
               param_6);
  }
  return __return_storage_ptr__;
}

// DenoiseDiffuseIndirect @ 14de25340

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

FSSDSignalTextures * __thiscall
FDLSSDenoiser::DenoiseDiffuseIndirect
          (FDLSSDenoiser *this,FSSDSignalTextures *__return_storage_ptr__,FRDGBuilder *param_1,
          FViewInfo *param_2,FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          FDiffuseIndirectInputs *param_5,FAmbientOcclusionRayTracingConfig param_6)

{
  (**(code **)((longlong)*this->WrappedDenoiser + 0x40))();
  return __return_storage_ptr__;
}

// DenoiseDiffuseIndirectHarmonic @ 14de253a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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

FSSDSignalTextures * __thiscall
FDLSSDenoiser::DenoiseDiffuseIndirectHarmonic
          (FDLSSDenoiser *this,FSSDSignalTextures *__return_storage_ptr__,FRDGBuilder *param_1,
          FViewInfo *param_2,FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          FDiffuseIndirectHarmonic *param_5,FCommonParameters *param_6)

{
  (**(code **)((longlong)*this->WrappedDenoiser + 0x50))();
  return __return_storage_ptr__;
}

// DenoisePolychromaticPenumbraHarmonics @ 14de25400

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

FPolychromaticPenumbraOutputs * __thiscall
FDLSSDenoiser::DenoisePolychromaticPenumbraHarmonics
          (FDLSSDenoiser *this,FPolychromaticPenumbraOutputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FPolychromaticPenumbraHarmonics *param_5)

{
  FRDGTexture *pFVar1;
  bool bVar2;
  
  bVar2 = SkipDenoiser(this,param_2);
  if (bVar2) {
    pFVar1 = *(FRDGTexture **)&(param_5->Specular).Harmonics;
    __return_storage_ptr__->Diffuse = *(FRDGTexture **)&(param_5->Diffuse).Harmonics;
    __return_storage_ptr__->Specular = pFVar1;
  }
  else {
    (**(code **)((longlong)*this->WrappedDenoiser + 0x20))
              (this->WrappedDenoiser,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5)
    ;
  }
  return __return_storage_ptr__;
}

// DenoiseReflections @ 14de254a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FReflectionsOutputs * __thiscall
FDLSSDenoiser::DenoiseReflections
          (FDLSSDenoiser *this,FReflectionsOutputs *__return_storage_ptr__,FRDGBuilder *param_1,
          FViewInfo *param_2,FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          FReflectionsInputs *param_5,FReflectionsRayTracingConfig param_6)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  wchar_t *pwVar6;
  FReflectionsOutputs *pFVar7;
  FTAAOutputs *pFVar8;
  FTAAOutputs local_88;
  FTAAPassParameters local_68;
  
  bVar5 = SkipDenoiser(this,param_2);
  if (bVar5) {
    __return_storage_ptr__->Color = (FRDGTexture *)0x0;
    __return_storage_ptr__->Color = param_5->Color;
  }
  else {
    (**(code **)((longlong)*this->WrappedDenoiser + 0x28))
              (this->WrappedDenoiser,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,
               param_6);
    bVar5 = FDLSSUpscaler::IsDLSSActive(this->Upscaler);
    if ((((bVar5) && (param_2->_padding_ != 0)) &&
        (plVar2 = *(longlong **)(param_2->_padding_ + 0x188), plVar2 != (longlong *)0x0)) &&
       ((pwVar6 = (wchar_t *)(**(code **)(*plVar2 + 8))(),
        pTVar4 = CVarNGXDLSSReflectionsTemporalAA.Ref, pwVar6 == L"FDLSSSceneViewFamilyUpscaler" ||
        (pwVar6 == L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)")))) {
      bVar5 = IsInParallelRenderingThread();
      if ((!bVar5) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FReflectionsOutputs *)(*pcVar3)();
        return pFVar7;
      }
      if (((pTVar4->ShadowedValue[1] != 0) && (param_2->ViewState != (FSceneViewState *)0x0)) &&
         ((iVar1 = (int)param_2->_padding_, iVar1 == 2 || (iVar1 == 4)))) {
        local_68.InputViewRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
        local_68.InputViewRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        local_68.SceneDepthTexture = param_4->SceneDepthTexture;
        local_68.SceneVelocityTexture = param_4->GBufferVelocityTexture;
        local_68.SceneColorInput = __return_storage_ptr__->Color;
        local_68.Quality = High;
        local_68.bOutputRenderTargetable = true;
        local_68.bDownsample = false;
        local_68.DownsampleOverrideFormat = PF_Unknown;
        local_68.ResolutionDivisor = 1;
        local_68.SceneMetadataInput = (FRDGTexture *)0x0;
        local_68.CoCBilateralFilterStrength = 1.0;
        local_68.Pass = ScreenSpaceReflections;
        local_68.OutputViewRect.field0_0x0._s_0.Min.field0_0x0 =
             local_68.InputViewRect.field0_0x0._s_0.Min.field0_0x0;
        local_68.OutputViewRect.field0_0x0._s_0.Max.field0_0x0 =
             local_68.InputViewRect.field0_0x0._s_0.Max.field0_0x0;
        pFVar8 = AddTemporalAAPass(&local_88,param_1,param_2,&local_68,
                                   &param_2->PrevViewInfo->SSRHistory,
                                   &(param_2->ViewState->PrevFrameViewInfo).SSRHistory);
        __return_storage_ptr__->Color = pFVar8->SceneColor;
      }
    }
  }
  return __return_storage_ptr__;
}

// DenoiseScreenSpaceDiffuseIndirect @ 14de256e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSSDSignalTextures * __thiscall
FDLSSDenoiser::DenoiseScreenSpaceDiffuseIndirect
          (FDLSSDenoiser *this,FSSDSignalTextures *__return_storage_ptr__,FRDGBuilder *param_1,
          FViewInfo *param_2,FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          FDiffuseIndirectInputs *param_5,FAmbientOcclusionRayTracingConfig param_6)

{
  (**(code **)((longlong)*this->WrappedDenoiser + 0x60))();
  return __return_storage_ptr__;
}

// DenoiseShadowVisibilityMasks @ 14de25740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDLSSDenoiser::DenoiseShadowVisibilityMasks
          (FDLSSDenoiser *this,FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,
          TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295> *param_5,
          int param_6,
          TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295> *param_7)

{
  FRDGTexture **ppFVar1;
  bool bVar2;
  FShadowVisibilityInputs *pFVar3;
  longlong lVar4;
  
  bVar2 = SkipDenoiser(this,param_2);
  if (bVar2) {
    lVar4 = (longlong)param_6;
    if (0 < lVar4) {
      pFVar3 = &param_5->Elements[0].InputTextures;
      do {
        ppFVar1 = &pFVar3->Mask;
        pFVar3 = pFVar3 + 2;
        ((FShadowVisibilityOutputs *)&param_7->Elements[0].Mask)->Mask = *ppFVar1;
        param_7 = (TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295> *)
                  ((longlong)param_7 + 0x10);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  else {
    (**(code **)((longlong)*this->WrappedDenoiser + 0x18))
              (this->WrappedDenoiser,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// DenoiseSkyLight @ 14de25810

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

FDiffuseIndirectOutputs * __thiscall
FDLSSDenoiser::DenoiseSkyLight
          (FDLSSDenoiser *this,FDiffuseIndirectOutputs *__return_storage_ptr__,FRDGBuilder *param_1,
          FViewInfo *param_2,FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          FDiffuseIndirectInputs *param_5,FAmbientOcclusionRayTracingConfig param_6)

{
  FRDGTexture *pFVar1;
  bool bVar2;
  
  bVar2 = SkipDenoiser(this,param_2);
  if (bVar2) {
    pFVar1 = param_5->AmbientOcclusionMask;
    __return_storage_ptr__->Color = param_5->Color;
    __return_storage_ptr__->AmbientOcclusionMask = pFVar1;
  }
  else {
    (**(code **)((longlong)*this->WrappedDenoiser + 0x48))
              (this->WrappedDenoiser,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,
               param_6);
  }
  return __return_storage_ptr__;
}

// DenoiseWaterReflections @ 14de258c0

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

FReflectionsOutputs * __thiscall
FDLSSDenoiser::DenoiseWaterReflections
          (FDLSSDenoiser *this,FReflectionsOutputs *__return_storage_ptr__,FRDGBuilder *param_1,
          FViewInfo *param_2,FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          FReflectionsInputs *param_5,FReflectionsRayTracingConfig param_6)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  wchar_t *pwVar6;
  FReflectionsOutputs *pFVar7;
  FTAAOutputs *pFVar8;
  FTAAOutputs local_88;
  FTAAPassParameters local_68;
  
  bVar5 = SkipDenoiser(this,param_2);
  if (bVar5) {
    __return_storage_ptr__->Color = (FRDGTexture *)0x0;
    __return_storage_ptr__->Color = param_5->Color;
  }
  else {
    (**(code **)((longlong)*this->WrappedDenoiser + 0x30))
              (this->WrappedDenoiser,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,
               param_6);
    bVar5 = FDLSSUpscaler::IsDLSSActive(this->Upscaler);
    if ((((bVar5) && (param_2->_padding_ != 0)) &&
        (plVar2 = *(longlong **)(param_2->_padding_ + 0x188), plVar2 != (longlong *)0x0)) &&
       ((pwVar6 = (wchar_t *)(**(code **)(*plVar2 + 8))(),
        pTVar4 = CVarNGXDLSSWaterReflectionsTemporalAA.Ref,
        pwVar6 == L"FDLSSSceneViewFamilyUpscaler" ||
        (pwVar6 == L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)")))) {
      bVar5 = IsInParallelRenderingThread();
      if ((!bVar5) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FReflectionsOutputs *)(*pcVar3)();
        return pFVar7;
      }
      if (((pTVar4->ShadowedValue[1] != 0) && (param_2->ViewState != (FSceneViewState *)0x0)) &&
         ((iVar1 = (int)param_2->_padding_, iVar1 == 2 || (iVar1 == 4)))) {
        local_68.InputViewRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
        local_68.InputViewRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        local_68.SceneDepthTexture = param_4->SceneDepthTexture;
        local_68.SceneVelocityTexture = param_4->GBufferVelocityTexture;
        local_68.SceneColorInput = __return_storage_ptr__->Color;
        local_68.Quality = High;
        local_68.bOutputRenderTargetable = true;
        local_68.bDownsample = false;
        local_68.DownsampleOverrideFormat = PF_Unknown;
        local_68.ResolutionDivisor = 1;
        local_68.SceneMetadataInput = (FRDGTexture *)0x0;
        local_68.CoCBilateralFilterStrength = 1.0;
        local_68.Pass = ScreenSpaceReflections;
        local_68.OutputViewRect.field0_0x0._s_0.Min.field0_0x0 =
             local_68.InputViewRect.field0_0x0._s_0.Min.field0_0x0;
        local_68.OutputViewRect.field0_0x0._s_0.Max.field0_0x0 =
             local_68.InputViewRect.field0_0x0._s_0.Max.field0_0x0;
        pFVar8 = AddTemporalAAPass(&local_88,param_1,param_2,&local_68,
                                   &param_2->PrevViewInfo->WaterSSRHistory,
                                   &(param_2->ViewState->PrevFrameViewInfo).WaterSSRHistory);
        __return_storage_ptr__->Color = pFVar8->SceneColor;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDebugName @ 14de26b90

wchar_t * __thiscall FDLSSDenoiser::GetDebugName(FDLSSDenoiser *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = FDLSSUpscaler::IsDLSSActive(this->Upscaler);
  pwVar2 = L"FDLSSDenoiserWrapper(Inactive)";
  if (bVar1) {
    pwVar2 = L"FDLSSDenoiserWrapper(Active)";
  }
  return pwVar2;
}

// GetShadowRequirements @ 14de278f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

EShadowRequirements __thiscall
FDLSSDenoiser::GetShadowRequirements
          (FDLSSDenoiser *this,FViewInfo *param_1,FLightSceneInfo *param_2,
          FShadowRayTracingConfig *param_3)

{
  bool bVar1;
  EShadowRequirements EVar2;
  
  bVar1 = SkipDenoiser(this,param_1);
  if (bVar1) {
    EVar2 = Bailout;
  }
  else {
    EVar2 = (**(code **)((longlong)*this->WrappedDenoiser + 0x10))
                      (this->WrappedDenoiser,param_1,param_2,param_3);
  }
  return EVar2;
}

// GetWrappedDenoiser @ 14de27a90

IScreenSpaceDenoiser * __thiscall FDLSSDenoiser::GetWrappedDenoiser(FDLSSDenoiser *this)

{
  return this->WrappedDenoiser;
}

// IsDLSSActive @ 14de27d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall FDLSSDenoiser::IsDLSSActive(FDLSSDenoiser *this,FViewInfo *param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  bVar2 = FDLSSUpscaler::IsDLSSActive(this->Upscaler);
  if (((bVar2) && (param_1->_padding_ != 0)) &&
     (plVar1 = *(longlong **)(param_1->_padding_ + 0x188), plVar1 != (longlong *)0x0)) {
    pwVar3 = (wchar_t *)(**(code **)(*plVar1 + 8))();
    if ((pwVar3 == L"FDLSSSceneViewFamilyUpscaler") ||
       (pwVar3 == L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)")) {
      return true;
    }
  }
  return false;
}

// SkipDenoiser @ 14de29b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall FDLSSDenoiser::SkipDenoiser(FDLSSDenoiser *this,FViewInfo *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  IConsoleManager *pIVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar9 = IConsoleManager::Get();
      CVarDLSSDenoiserMode =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.NGX.DLSS.DenoiserMode",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (CVarDLSSDenoiserMode != (IConsoleVariable *)0x0) {
    iVar7 = (**(code **)(*(longlong *)CVarDLSSDenoiserMode + 200))();
    if (iVar7 != 0) {
      bVar3 = true;
      goto LAB_14de29bc1;
    }
  }
  bVar3 = false;
LAB_14de29bc1:
  pTVar4 = CVarNGXDLSSBuiltInDenoiserOverride.Ref;
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  iVar7 = pTVar4->ShadowedValue[1];
  bVar5 = FDLSSUpscaler::IsDLSSActive(this->Upscaler);
  if (((bVar5) && (param_1->_padding_ != 0)) &&
     (plVar1 = *(longlong **)(param_1->_padding_ + 0x188), plVar1 != (longlong *)0x0)) {
    pwVar8 = (wchar_t *)(**(code **)(*plVar1 + 8))();
    if (((pwVar8 == L"FDLSSSceneViewFamilyUpscaler") ||
        (pwVar8 == L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)")) && ((bVar3 && (iVar7 != 1)))) {
      return true;
    }
  }
  return false;
}

// SupportsScreenSpaceDiffuseIndirectDenoiser @ 14de29cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FDLSSDenoiser::SupportsScreenSpaceDiffuseIndirectDenoiser
          (FDLSSDenoiser *this,EShaderPlatform param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014de29cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->WrappedDenoiser + 0x58))();
  return (bool)uVar1;
}

