// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FMobileSingleLayerWaterPassMeshProcessor @ 144f6b770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMobileSingleLayerWaterPassMeshProcessor * __thiscall
FMobileSingleLayerWaterPassMeshProcessor::FMobileSingleLayerWaterPassMeshProcessor
          (FMobileSingleLayerWaterPassMeshProcessor *this,FScene *param_1,Type param_2,
          FSceneView *param_3,FMeshPassProcessorRenderState *param_4,
          FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,SingleLayerWaterPass,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7FMobileSingleLayerWaterPassMeshProcessor__6B_;
  pFVar1 = param_4->DepthStencilState;
  (this->PassDrawRenderState).BlendState = param_4->BlendState;
  (this->PassDrawRenderState).DepthStencilState = pFVar1;
  uVar3 = *(undefined4 *)&param_4->field_0x14;
  pFVar2 = param_4->ViewUniformBuffer;
  (this->PassDrawRenderState).DepthStencilAccess = param_4->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x14 = uVar3;
  (this->PassDrawRenderState).ViewUniformBuffer = pFVar2;
  pFVar2 = param_4->PassUniformBuffer;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = param_4->InstancedViewUniformBuffer;
  (this->PassDrawRenderState).PassUniformBuffer = pFVar2;
  uVar4 = param_4->StencilRef;
  uVar3 = *(undefined4 *)&param_4->field_0x3c;
  (this->PassDrawRenderState).NaniteUniformBuffer = param_4->NaniteUniformBuffer;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  return this;
}

// AddMeshBatch @ 144f7c4e0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMobileSingleLayerWaterPassMeshProcessor::AddMeshBatch
          (FMobileSingleLayerWaterPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  ELightMapPolicyType EVar5;
  EMobileLocalLightSetting EVar6;
  FMaterial *pFVar7;
  FMaterialRenderProxy *pFVar8;
  FStaticShaderPlatform FVar9;
  FMaterialShadingModelField local_res8 [4];
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 5) {
    FVar9.Platform = SP_NumPlatforms;
  }
  else {
    FVar9.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
  }
  bVar2 = MobileSupportsSM5MaterialNodes(FVar9);
  if (bVar2) {
    for (pFVar8 = param_1->MaterialRenderProxy; pFVar8 != (FMaterialRenderProxy *)0x0;
        pFVar8 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar8->_padding_ + 0x38))(pFVar8,(int)this->_padding_)) {
      pFVar7 = (FMaterial *)(**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,(int)this->_padding_);
      if (pFVar7 != (FMaterial *)0x0) {
        (**(code **)(pFVar7->_padding_ + 0x280))(pFVar7,local_res8);
        if ((local_res8[0].ShadingModelField & 0x400) == 0) {
          return;
        }
        bVar2 = IsOpaqueOrMaskedBlendMode(pFVar7);
        if (!bVar2) {
          return;
        }
        bVar2 = IsMaskedBlendMode(pFVar7);
        EVar5 = MobileBasePass::SelectMeshLightmapPolicy
                          ((FScene *)this->_padding_,param_1,param_3,true,false,true,true);
        EVar6 = LOCAL_LIGHTS_DISABLED;
        if (((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0) &&
           (EVar6 = LOCAL_LIGHTS_DISABLED, param_3 != (FPrimitiveSceneProxy *)0x0)) {
          EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
          bVar3 = MobileLocalLightsUseSinglePermutation(EVar4);
          if ((bVar3) || (0 < param_3->PrimitiveSceneInfo->NumMobileDynamicLocalLights)) {
            EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
            EVar6 = GetMobileForwardLocalLightSetting(EVar4);
          }
        }
        bVar2 = Process(this,param_1,param_2,param_3,param_4,pFVar8,pFVar7,bVar2,local_res8[0],EVar5
                        ,EVar6,&param_1->LCI);
        if (bVar2) {
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 144f85e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMobileSingleLayerWaterPassMeshProcessor::CollectPSOInitializers
          (FMobileSingleLayerWaterPassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  ELightMapPolicyType EVar2;
  EPrimitiveType EVar3;
  ForElementType<ELightMapPolicyType> FVar4;
  bool bVar5;
  bool bVar6;
  ESubpassHint EVar7;
  EMobileLocalLightSetting EVar8;
  FStaticShaderPlatform FVar9;
  ForElementType<ELightMapPolicyType> FVar10;
  ulonglong uVar11;
  undefined1 auStackY_228 [32];
  ushort local_1b8 [2];
  undefined1 local_1b4 [4];
  ERasterizerCullMode local_1b0;
  ERasterizerFillMode local_1ac;
  uint local_1a8;
  FMeshDrawingPolicyOverrideSettings local_1a0;
  FPSOPrecacheParams *local_198;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_190;
  ForElementType<ELightMapPolicyType> local_188;
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_178;
  FMeshPassProcessorRenderState local_128;
  FGraphicsPipelineRenderTargetsInfo local_e8;
  TArray<ELightMapPolicyType,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_190 = param_5;
  iVar1 = (int)this->_padding_;
  local_198 = param_4;
  if (iVar1 == 5) {
    FVar9.Platform = SP_NumPlatforms;
  }
  else {
    FVar9.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
  }
  bVar5 = MobileSupportsSM5MaterialNodes(FVar9);
  if ((bVar5) &&
     ((**(code **)(param_2->_padding_ + 0x280))(param_2,local_1b8), (local_1b8[0] & 0x400) != 0)) {
    bVar5 = IsOpaqueOrMaskedBlendMode(param_2);
    if (bVar5) {
      local_1a0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
      local_1ac = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_1a0);
      local_1b0 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_1a0);
      (**(code **)(param_2->_padding_ + 0x268))(param_2);
      if ((((ulonglong)((uint)(param_4->field0_0x0).Data & 0x1e00000) - 0x200000 &
           0xffffffffffdfffff) == 0) || (((param_4->field0_0x0).Data >> 0xf & 1) != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      local_128.BlendState = (this->PassDrawRenderState).BlendState;
      local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
      local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
      local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
      local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
      local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
      local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
      local_e8.RenderTargetsEnabled = 0;
      local_e8.RenderTargetFormats.Elements[0] = '\0';
      local_e8.RenderTargetFormats.Elements[1] = '\0';
      local_e8.RenderTargetFormats.Elements[2] = '\0';
      local_e8.RenderTargetFormats.Elements[3] = '\0';
      local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
      local_128._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
      local_e8.RenderTargetFormats.Elements[4] = '\0';
      local_e8.RenderTargetFormats.Elements[5] = '\0';
      local_e8.RenderTargetFormats.Elements[6] = '\0';
      local_e8.RenderTargetFormats.Elements[7] = '\0';
      local_e8.RenderTargetFlags.Elements[0] = None;
      local_e8.RenderTargetFlags.Elements[1] = None;
      local_e8.RenderTargetFlags.Elements[2] = None;
      local_e8.RenderTargetFlags.Elements[3] = None;
      local_e8.RenderTargetFlags.Elements[4] = None;
      local_e8.RenderTargetFlags.Elements[5] = None;
      local_e8.RenderTargetFlags.Elements[6] = None;
      local_e8.RenderTargetFlags.Elements[7] = None;
      local_e8.DepthStencilTargetFormat = PF_Unknown;
      local_e8.DepthStencilTargetFlag = None;
      local_e8.DepthTargetLoadAction = ENoAction;
      local_e8.DepthTargetStoreAction = ENoAction;
      local_e8.StencilTargetLoadAction = ENoAction;
      local_e8.StencilTargetStoreAction = ENoAction;
      local_e8.DepthStencilAccess.Value = DepthNop;
      local_e8.NumSamples = 0;
      local_e8.MultiViewCount = '\0';
      local_e8.bHasFragmentDensityAttachment = false;
      FSceneTexturesConfig::GetGBufferRenderTargetsInfo(param_1,&local_e8,GBL_Default);
      SetupDepthStencilInfo
                (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x2,
                 &local_e8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
                  (&Aspects,GMaxRHIShaderPlatform);
        _Init_thread_footer(&::_TSS0);
      }
      if (Aspects.bMobileMultiViewEnabled) {
        local_e8.MultiViewCount = (GRHIGlobals.SupportsMobileMultiView != false) + '\x01';
      }
      else {
        local_e8.MultiViewCount = '\0';
      }
      local_e8.NumSamples = (short)local_e8._104_3_;
      local_e8.MultiViewCount = (char)((uint3)local_e8._104_3_ >> 0x10);
      bVar6 = FVariableRateShadingImageManager::IsAttachmentVRSEnabled
                        ((FVariableRateShadingImageManager *)&GVRSImageManager);
      local_e8.bHasFragmentDensityAttachment = bVar6;
      local_128.BlendState =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      local_128.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      local_128.DepthStencilAccess = DepthWrite;
      local_128._56_8_ = local_128._56_8_ & 0xffffffff00000000;
      EVar8 = GetMobileForwardLocalLightSetting(FVar9.Platform);
      MobileBasePass::GetUniformLightMapPolicyTypeForPSOCollection
                (&local_78,(bool)(~(byte)local_1b8[0] & 1),true,false,true,bVar5);
      local_1a8 = local_78.ArrayNum;
      uVar11 = (ulonglong)(int)local_1a8;
      FVar10 = (ForElementType<ELightMapPolicyType>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar10 = local_78.AllocatorInstance.SecondaryData;
      }
      local_188 = (ForElementType<ELightMapPolicyType>)((longlong)FVar10 + uVar11 * 4);
      while( true ) {
        FVar4 = local_188;
        if (local_78.ArrayNum != (int)uVar11) {
          `TCheckedPointerIterator<enum_ELightMapPolicyType,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1b4);
        }
        if (FVar10 == FVar4) break;
        EVar2 = *(ELightMapPolicyType *)FVar10;
        local_178.VertexShader.ShaderContent =
             (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
        local_178.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        EVar3 = *(EPrimitiveType *)&local_198->field0_0x0;
        local_178.PixelShader.ShaderContent =
             (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
        local_178.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_178.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_178.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_178.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_178.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_178.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_178.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        bVar5 = MobileBasePass::GetShaders
                          (EVar2,LOCAL_LIGHTS_DISABLED,param_2,param_3->VertexFactoryType,
                           &local_178.VertexShader,&local_178.PixelShader);
        if (bVar5) {
          EVar7 = GetSubpassHint((FStaticShaderPlatform)GMaxRHIShaderPlatform,false,
                                 1 < local_e8.MultiViewCount,local_e8._104_4_ & 0xffff);
          FMeshPassProcessor::
          AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                    (param_3,param_2,&local_128,&local_e8,&local_178,local_1ac,local_1b0,
                     EVar3 & 0x3f,Default,EVar7,'\0',true,(int)this->_padding_,local_190);
        }
        if (EVar8 != LOCAL_LIGHTS_DISABLED) {
          local_178.VertexShader.ShaderContent =
               (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
          local_178.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
          local_178.PixelShader.ShaderContent =
               (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
          local_178.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
          EVar3 = *(EPrimitiveType *)&local_198->field0_0x0;
          local_178.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
          local_178.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
          local_178.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
          local_178.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
          local_178.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
          local_178.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
          bVar5 = MobileBasePass::GetShaders
                            (EVar2,EVar8,param_2,param_3->VertexFactoryType,&local_178.VertexShader,
                             &local_178.PixelShader);
          if (bVar5) {
            EVar7 = GetSubpassHint((FStaticShaderPlatform)GMaxRHIShaderPlatform,false,
                                   1 < local_e8.MultiViewCount,local_e8._104_4_ & 0xffff);
            FMeshPassProcessor::
            AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                      (param_3,param_2,&local_128,&local_e8,&local_178,local_1ac,local_1b0,
                       EVar3 & 0x3f,Default,EVar7,'\0',true,(int)this->_padding_,local_190);
          }
        }
        FVar10 = (ForElementType<ELightMapPolicyType>)((longlong)FVar10 + 4);
        uVar11 = (ulonglong)local_1a8;
      }
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<ELightMapPolicyType>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// CollectPSOInitializersForLMPolicy @ 144f86560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSingleLayerWaterPassMeshProcessor::CollectPSOInitializersForLMPolicy
          (FMobileSingleLayerWaterPassMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMeshPassProcessorRenderState *param_2,FGraphicsPipelineRenderTargetsInfo *param_3,
          FMaterial *param_4,EMobileLocalLightSetting param_5,ELightMapPolicyType param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8,EPrimitiveType param_9,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_10)

{
  bool bVar1;
  ESubpassHint EVar2;
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_58;
  
  local_58.VertexShader.ShaderContent =
       (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_58.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.PixelShader.ShaderContent =
       (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_58.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_58.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_58.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_58.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar1 = MobileBasePass::GetShaders
                    (param_6,param_5,param_4,param_1->VertexFactoryType,&local_58.VertexShader,
                     &local_58.PixelShader);
  if (bVar1) {
    EVar2 = GetSubpassHint((FStaticShaderPlatform)GMaxRHIShaderPlatform,false,
                           1 < param_3->MultiViewCount,(uint)param_3->NumSamples);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_1,param_4,param_2,param_3,&local_58,param_7,param_8,param_9,Default,EVar2,'\0',
               true,(int)this->_padding_,param_10);
  }
  return;
}

// Process @ 144fcebe0

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FMobileSingleLayerWaterPassMeshProcessor::Process
          (FMobileSingleLayerWaterPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,bool param_7,FMaterialShadingModelField param_8,ELightMapPolicyType param_9,
          EMobileLocalLightSetting param_10,FLightCacheInterface **param_11)

{
  bool bVar1;
  byte bVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FVertexFactoryType *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  FMeshDrawingPolicyOverrideSettings local_res10;
  ulong64 local_res18;
  TMobileBasePassShaderElementData<FUniformLightMapPolicy> local_e8;
  FMeshPassProcessorRenderState local_c8;
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  local_88.VertexShader.ShaderContent =
       (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent =
       (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_res18 = param_2;
  pFVar5 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar1 = MobileBasePass::GetShaders
                    (param_9,param_10,param_6,pFVar5,&local_88.VertexShader,&local_88.PixelShader);
  if (!bVar1) {
    return false;
  }
  local_c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
  local_c8.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_c8._20_4_ =
       SUB84((ulonglong)*(undefined8 *)&(this->PassDrawRenderState).DepthStencilAccess >> 0x20,0);
  local_c8.DepthStencilAccess = DepthWrite;
  local_c8.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
  local_c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
  local_c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
  local_c8._56_8_ = *(ulonglong *)&(this->PassDrawRenderState).StencilRef & 0xffffffff00000000;
  if (param_3 == (FPrimitiveSceneProxy *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = param_3->bTreatAsBackgroundForOcclusion;
  }
  uVar6 = 0;
  if (local_88.VertexShader.ShaderContent !=
      (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
    uVar6 = (ulonglong)*(uint *)&(local_88.VertexShader.ShaderContent)->field_0xd8;
  }
  if (local_88.PixelShader.ShaderContent ==
      (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)&(local_88.PixelShader.ShaderContent)->field_0xd8;
  }
  local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar3 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_res10);
  EVar4 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_res10);
  local_e8.LightMapPolicyElementData = param_1->LCI;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8.bCanReceiveCSM = true;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_e8,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,false);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TMobileBasePassShaderElementData<FUniformLightMapPolicy>_>
            ((FMeshPassProcessor *)this,param_1,local_res18,param_3,param_5,param_6,&local_c8,
             &local_88,EVar3,EVar4,
             (FMeshDrawCommandSortKey)
             ((ulonglong)uVar7 << 0x10 |
             uVar6 & 0xffff | ((ulonglong)param_7 * 2 | (ulonglong)bVar2) << 0x30),Default,&local_e8
            );
  return true;
}

// TryAddMeshBatch @ 144ff6070

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

bool __thiscall
FMobileSingleLayerWaterPassMeshProcessor::TryAddMeshBatch
          (FMobileSingleLayerWaterPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  FMaterial *pFVar1;
  bool bVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  ELightMapPolicyType EVar5;
  EMobileLocalLightSetting EVar6;
  
  pFVar1 = param_6;
  (**(code **)(param_6->_padding_ + 0x280))(param_6,&param_6);
  if ((param_6._0_2_ & 0x400) != 0) {
    bVar2 = IsOpaqueOrMaskedBlendMode(pFVar1);
    if (bVar2) {
      bVar2 = IsMaskedBlendMode(pFVar1);
      EVar5 = MobileBasePass::SelectMeshLightmapPolicy
                        ((FScene *)this->_padding_,param_1,param_3,true,false,true,true);
      EVar6 = LOCAL_LIGHTS_DISABLED;
      if (((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0) &&
         (EVar6 = LOCAL_LIGHTS_DISABLED, param_3 != (FPrimitiveSceneProxy *)0x0)) {
        EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
        bVar3 = MobileLocalLightsUseSinglePermutation(EVar4);
        if ((bVar3) || (0 < param_3->PrimitiveSceneInfo->NumMobileDynamicLocalLights)) {
          EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
          EVar6 = GetMobileForwardLocalLightSetting(EVar4);
        }
      }
      bVar2 = Process(this,param_1,param_2,param_3,param_4,param_5,pFVar1,bVar2,param_6._0_2_,EVar5,
                      EVar6,&param_1->LCI);
      return bVar2;
    }
  }
  return true;
}

