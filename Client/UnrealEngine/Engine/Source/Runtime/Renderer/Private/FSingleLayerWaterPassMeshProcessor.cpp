// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FSingleLayerWaterPassMeshProcessor @ 145665db0

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

FSingleLayerWaterPassMeshProcessor * __thiscall
FSingleLayerWaterPassMeshProcessor::FSingleLayerWaterPassMeshProcessor
          (FSingleLayerWaterPassMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3
          ,FMeshPassProcessorRenderState *param_4,FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  EShaderPlatform EVar6;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,SingleLayerWaterPass,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7FSingleLayerWaterPassMeshProcessor__6B_;
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
  if (param_2 == Num) {
    EVar6 = SP_NumPlatforms;
  }
  else {
    EVar6 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2];
  }
  bVar5 = SingleLayerWaterUsesSimpleShading(EVar6);
  if (bVar5) {
    (this->PassDrawRenderState).BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  return this;
}

// AddMeshBatch @ 1456721e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FSingleLayerWaterPassMeshProcessor::AddMeshBatch
          (FSingleLayerWaterPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  int iVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  longlong lVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FMaterial *pFVar9;
  ushort *puVar10;
  FVertexFactoryType *pFVar11;
  FMaterialRenderProxy *pFVar12;
  FMeshDrawCommandSortKey FVar13;
  undefined1 local_res10 [8];
  ulong64 local_res18;
  FPrimitiveSceneProxy *local_res20;
  FMeshDrawingPolicyOverrideSettings local_b0;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_a8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar12 = param_1->MaterialRenderProxy;
  local_res18 = param_2;
  local_res20 = param_3;
  do {
    if (pFVar12 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar9 = (FMaterial *)(**(code **)(pFVar12->_padding_ + 0x30))(pFVar12,(int)this->_padding_);
    if (pFVar9 != (FMaterial *)0x0) {
      puVar10 = (ushort *)(**(code **)(pFVar9->_padding_ + 0x280))(pFVar9,local_res10);
      if ((*puVar10 & 0x400) == 0) {
        return;
      }
      local_b0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
      EVar7 = FMeshPassProcessor::ComputeMeshFillMode(pFVar9,&local_b0);
      EVar8 = FMeshPassProcessor::ComputeMeshCullMode(pFVar9,&local_b0);
      pTVar5 = CVarWaterSingleLayerForceVelocity.Ref;
      pFVar2 = param_1->VertexFactory;
      local_88.VertexShader.ShaderContent =
           (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.PixelShader.ShaderContent =
           (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      bVar6 = IsInParallelRenderingThread();
      if ((!bVar6) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = pTVar5->ShadowedValue[1];
      lVar4 = this->_padding_;
      pFVar11 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
      bVar6 = GetBasePassShaders<FUniformLightMapPolicy>
                        (pFVar9,pFVar11,(FUniformLightMapPolicy)0x0,(Type)lVar4,true,false,false,
                         (uint)(iVar1 != 0),&local_88.VertexShader,&local_88.PixelShader,false);
      if (bVar6) {
        local_a8._padding_ = 0;
        local_a8._padding_ = 0;
        local_a8.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
        FMeshMaterialShaderElementData::InitializeMeshMaterialData
                  ((FMeshMaterialShaderElementData *)&local_a8,(FSceneView *)this->_padding_,
                   local_res20,param_1,param_4,false);
        FVar13 = CalculateMeshStaticSortKey
                           ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                            (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
                  ((FMeshPassProcessor *)this,param_1,local_res18,local_res20,pFVar12,pFVar9,
                   &this->PassDrawRenderState,&local_88,EVar7,EVar8,FVar13,Default,&local_a8);
        return;
      }
    }
    pFVar12 = (FMaterialRenderProxy *)
              (**(code **)(pFVar12->_padding_ + 0x38))(pFVar12,(int)this->_padding_);
  } while( true );
}

// CollectPSOInitializers @ 145677010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSingleLayerWaterPassMeshProcessor::CollectPSOInitializers
          (FSingleLayerWaterPassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2
          ,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  FGenericStaticFeatureLevel FVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  ushort *puVar6;
  FStaticShaderPlatform FVar7;
  uint uVar8;
  FExclusiveDepthStencil FVar9;
  bool bVar10;
  undefined1 auStackY_198 [32];
  undefined1 local_138 [4];
  ERasterizerCullMode local_134;
  ERasterizerFillMode local_130;
  FMeshDrawingPolicyOverrideSettings local_128;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_120;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_118;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_120 = param_5;
  puVar6 = (ushort *)(**(code **)(param_2->_padding_ + 0x280))(param_2,local_138);
  if ((*puVar6 & 0x400) != 0) {
    local_128 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    local_130 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_128);
    local_134 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_128);
    pTVar4 = CVarWaterSingleLayerForceVelocity.Ref;
    local_118.VertexShader.ShaderContent =
         (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
    local_118.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.PixelShader.ShaderContent =
         (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
    local_118.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_118.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_118.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_118.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar10 = pTVar4->ShadowedValue[0] != 0;
    bVar5 = GetBasePassShaders<FUniformLightMapPolicy>
                      (param_2,param_3->VertexFactoryType,(FUniformLightMapPolicy)0x0,
                       (Type)this->_padding_,true,false,false,(uint)bVar10,&local_118.VertexShader,
                       &local_118.PixelShader,false);
    if (bVar5) {
      local_c8.RenderTargetsEnabled = 0;
      local_c8.RenderTargetFormats.Elements[0] = '\0';
      local_c8.RenderTargetFormats.Elements[1] = '\0';
      local_c8.RenderTargetFormats.Elements[2] = '\0';
      local_c8.RenderTargetFormats.Elements[3] = '\0';
      local_c8.RenderTargetFlags.Elements[0] = None;
      local_c8.RenderTargetFlags.Elements[1] = None;
      local_c8.RenderTargetFlags.Elements[2] = None;
      local_c8.RenderTargetFlags.Elements[3] = None;
      local_c8.RenderTargetFlags.Elements[4] = None;
      local_c8.RenderTargetFlags.Elements[5] = None;
      local_c8.RenderTargetFlags.Elements[6] = None;
      local_c8.RenderTargetFlags.Elements[7] = None;
      local_c8.RenderTargetFormats.Elements[4] = '\0';
      local_c8.RenderTargetFormats.Elements[5] = '\0';
      local_c8.RenderTargetFormats.Elements[6] = '\0';
      local_c8.RenderTargetFormats.Elements[7] = '\0';
      local_c8.DepthStencilTargetFormat = PF_Unknown;
      local_c8.DepthStencilTargetFlag = None;
      local_c8.DepthTargetLoadAction = ENoAction;
      local_c8.DepthTargetStoreAction = ENoAction;
      local_c8.StencilTargetLoadAction = ENoAction;
      local_c8.StencilTargetStoreAction = ENoAction;
      local_c8.DepthStencilAccess.Value = DepthNop;
      local_c8.NumSamples = 0;
      local_c8.MultiViewCount = '\0';
      local_c8.bHasFragmentDensityAttachment = false;
      SetupGBufferRenderTargetInfo(param_1,&local_c8,true,(uint)bVar10);
      bVar5 = IsWaterSeparateMainDirLightEnabled((FStaticShaderPlatform)GMaxRHIShaderPlatform);
      if (bVar5) {
        bVar5 = Substrate::IsSubstrateEnabled();
        if ((!bVar5) ||
           (bVar5 = Substrate::IsSubstrateBlendableGBufferEnabled(GMaxRHIShaderPlatform), bVar5)) {
          iVar1 = param_1->GBufferBindings[bVar10].GBufferD.Index;
          if (((iVar1 < 0) || (7 < iVar1)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("GBufferBindings.GBufferD.Index >= 0 && GBufferBindings.GBufferD.Index < MaxSimultaneousRenderTargets"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SingleLayerWaterRendering.cpp"
                                 ,0x820,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = param_1->GBufferBindings[bVar10].GBufferD.Index;
        }
        else {
          uVar8 = local_c8.RenderTargetsEnabled;
          local_c8.RenderTargetsEnabled = local_c8.RenderTargetsEnabled + 1;
        }
        local_c8.RenderTargetFormats.Elements[uVar8] = '\x1a';
        local_c8.RenderTargetFlags.Elements[uVar8] = ShaderResource|RenderTargetable;
      }
      FVar2.FeatureLevel = (Type)this->_padding_;
      if (FVar2.FeatureLevel == Num) {
        FVar7.Platform = SP_NumPlatforms;
      }
      else {
        FVar7.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)FVar2.FeatureLevel];
      }
      bVar5 = IsSingleLayerWaterDepthPrepassEnabled(FVar7,FVar2);
      FVar9.Value = DepthWrite;
      if (bVar5) {
        FVar9.Value = DepthRead_StencilWrite;
      }
      local_c8.DepthStencilAccess.Value = FVar9.Value;
      FBasePassMeshProcessor::
      AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                ((Type)this->_padding_,param_3,param_2,&this->PassDrawRenderState,&local_c8,
                 &local_118,local_130,local_134,*(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,true,
                 (int)this->_padding_,local_120);
    }
  }
  return;
}

// Process @ 14568fb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
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

bool __thiscall
FSingleLayerWaterPassMeshProcessor::Process
          (FSingleLayerWaterPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  int iVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  longlong lVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  FVertexFactoryType *pFVar8;
  FMeshDrawCommandSortKey FVar9;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_88;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_68;
  
  pTVar5 = CVarWaterSingleLayerForceVelocity.Ref;
  pFVar2 = param_1->VertexFactory;
  local_68.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_68.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_68.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  iVar1 = pTVar5->ShadowedValue[1];
  lVar4 = this->_padding_;
  pFVar8 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = GetBasePassShaders<FUniformLightMapPolicy>
                    (param_6,pFVar8,(FUniformLightMapPolicy)0x0,(Type)lVar4,true,false,false,
                     (uint)(iVar1 != 0),&local_68.VertexShader,&local_68.PixelShader,false);
  if (bVar6) {
    local_88.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
    local_88._padding_ = 0;
    local_88._padding_ = 0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_88,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
               &this->PassDrawRenderState,&local_68,param_7,param_8,FVar9,Default,&local_88);
  }
  return bVar6;
}

// TryAddMeshBatch @ 1456a4d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FSingleLayerWaterPassMeshProcessor::TryAddMeshBatch
          (FSingleLayerWaterPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  int iVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  longlong lVar4;
  TConsoleVariableData<int> *pTVar5;
  FMaterial *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  ERasterizerFillMode EVar9;
  ERasterizerCullMode EVar10;
  ushort *puVar11;
  FVertexFactoryType *pFVar12;
  FMeshDrawCommandSortKey FVar13;
  FMeshDrawingPolicyOverrideSettings local_a0;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_98;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  pFVar6 = param_6;
  puVar11 = (ushort *)(**(code **)(param_6->_padding_ + 0x280))(param_6,&param_6);
  if ((*puVar11 & 0x400) == 0) {
    return true;
  }
  local_a0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar9 = FMeshPassProcessor::ComputeMeshFillMode(pFVar6,&local_a0);
  EVar10 = FMeshPassProcessor::ComputeMeshCullMode(pFVar6,&local_a0);
  pTVar5 = CVarWaterSingleLayerForceVelocity.Ref;
  pFVar2 = param_1->VertexFactory;
  local_78.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
  }
  iVar1 = pTVar5->ShadowedValue[1];
  lVar4 = this->_padding_;
  pFVar12 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar7 = GetBasePassShaders<FUniformLightMapPolicy>
                    (pFVar6,pFVar12,(FUniformLightMapPolicy)0x0,(Type)lVar4,true,false,false,
                     (uint)(iVar1 != 0),&local_78.VertexShader,&local_78.PixelShader,false);
  if (!bVar7) {
    return false;
  }
  local_98.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
  local_98._padding_ = 0;
  local_98._padding_ = 0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_98,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,false);
  FVar13 = CalculateMeshStaticSortKey
                     ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                      (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
            ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,pFVar6,
             &this->PassDrawRenderState,&local_78,EVar9,EVar10,FVar13,Default,&local_98);
  return true;
}

