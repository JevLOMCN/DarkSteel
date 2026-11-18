// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// CollectPSOInitializersForLMPolicy<FSelfShadowedCachedPointIndirectLightingPolicy> @ 144717f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FBasePassMeshProcessor::
CollectPSOInitializersForLMPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>
          (FBasePassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FPSOPrecacheParams *param_3,FMaterial *param_4,
          FMaterialShadingModelField param_5,bool param_6,bool param_7,
          FSelfShadowedCachedPointIndirectLightingPolicy *param_8,ERasterizerFillMode param_9,
          ERasterizerCullMode param_10,EPrimitiveType param_11,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_12)

{
  int iVar1;
  Type TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  EPixelFormat EVar6;
  longlong lVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  EPixelFormat EVar11;
  EShaderPlatform EVar12;
  undefined1 auStackY_268 [32];
  bool local_1f8;
  char local_1f7;
  FPSOPrecacheVertexFactoryData *local_1f0;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_1e8;
  TIntPoint<int>_u_0 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  FMeshPassProcessorRenderState local_1c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_188;
  FGraphicsPipelineRenderTargetsInfo local_138;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = param_12;
  local_188.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *)0x0;
  local_188.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *)0x0;
  local_188.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1f0 = param_2;
  bVar5 = GetBasePassShaders<FSelfShadowedCachedPointIndirectLightingPolicy>
                    (param_4,param_2->VertexFactoryType,*param_8,(Type)this->_padding_,param_6,
                     this->bRequiresExplicit128bitRT,this->bIsDebug,GBL_Default,
                     &local_188.VertexShader,&local_188.PixelShader,this->bOITBasePass);
  if (bVar5) {
    local_1c8.BlendState = (this->PassDrawRenderState).BlendState;
    local_1c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_1c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_1c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_1c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_1c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_1c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_1c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_1c8._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
    SetDepthStencilStateForBasePass
              (&local_1c8,(Type)this->_padding_,param_7,param_4,this->bEnableReceiveDecalOutput,
               false);
    if (this->bTranslucentBasePass != false) {
      SetTranslucentRenderState
                (&local_1c8,param_4,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                 this->TranslucencyPassType);
    }
    local_138.NumSamples = 1;
    local_138.MultiViewCount = '\0';
    local_138.bHasFragmentDensityAttachment = false;
    local_138.RenderTargetsEnabled = 0;
    local_138.RenderTargetFormats.Elements[0] = '\0';
    local_138.RenderTargetFormats.Elements[1] = '\0';
    local_138.RenderTargetFormats.Elements[2] = '\0';
    local_138.RenderTargetFormats.Elements[3] = '\0';
    local_138.RenderTargetFormats.Elements[4] = '\0';
    local_138.RenderTargetFormats.Elements[5] = '\0';
    local_138.RenderTargetFormats.Elements[6] = '\0';
    local_138.RenderTargetFormats.Elements[7] = '\0';
    local_138.RenderTargetFlags.Elements[0] = None;
    local_138.RenderTargetFlags.Elements[1] = None;
    local_138.RenderTargetFlags.Elements[2] = None;
    local_138.RenderTargetFlags.Elements[3] = None;
    local_138.RenderTargetFlags.Elements[4] = None;
    local_138.RenderTargetFlags.Elements[5] = None;
    local_138.RenderTargetFlags.Elements[6] = None;
    local_138.RenderTargetFlags.Elements[7] = None;
    local_138.DepthStencilTargetFormat = PF_Unknown;
    local_138.DepthStencilTargetFlag = None;
    local_138.DepthTargetLoadAction = ENoAction;
    local_138.DepthTargetStoreAction = ENoAction;
    local_138.StencilTargetLoadAction = ENoAction;
    local_138.StencilTargetStoreAction = ENoAction;
    local_138.DepthStencilAccess.Value = DepthNop;
    if (this->bTranslucentBasePass == false) {
      if ((*(byte *)&param_3->field0_0x0 & 0x80) == 0) {
        SetupGBufferRenderTargetInfo(param_1,&local_138,true,GBL_Default);
      }
      else {
        local_1c8._56_8_ = local_1c8._56_8_ & 0xffffffff00000000;
        local_1c8.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
        SetTranslucentRenderState
                  (&local_1c8,param_4,
                   GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                   TPT_AllTranslucency);
        EVar6 = (EPixelFormat)((param_3->field0_0x0).Data >> 0x1e);
        EVar11 = PF_B8G8R8A8;
        if (EVar6 != PF_Unknown) {
          EVar11 = EVar6;
        }
        AddRenderTargetInfo(EVar11,ShaderResource|RenderTargetable,&local_138);
      }
      iVar1 = (int)this->_padding_;
      local_1f0 = (FPSOPrecacheVertexFactoryData *)CONCAT44(local_1f0._4_4_,(int)this->_padding_);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_2,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,Default,
                 None,'\0',true,iVar1,param_12);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        pIVar8 = IConsoleManager::Get();
        plVar9 = (longlong *)
                 (**(code **)((longlong)*pIVar8 + 0xc0))
                           (pIVar8,L"r.PSOPrecache.PrecacheAlphaColorChannel");
        pTVar10 = (TConsoleVariableData<int> *)0x0;
        if (plVar9 != (longlong *)0x0) {
          pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
        }
        `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
        ::__l2::CVar = pTVar10;
        _Init_thread_footer(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar10 = `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::CVar;
      if (`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
          ::__l2::CVar != (TConsoleVariableData<int> *)0x0) {
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar7 = 0;
        }
        else {
          lVar7 = 4;
        }
        uVar4 = local_138._104_4_;
        uVar3 = local_138._96_8_;
        if (0 < *(int *)((longlong)pTVar10->ShadowedValue + lVar7)) {
          local_c8._12_4_ = local_138._12_4_;
          local_c8.RenderTargetFormats.Elements[4] = local_138.RenderTargetFormats.Elements[4];
          local_c8.RenderTargetFormats.Elements[5] = local_138.RenderTargetFormats.Elements[5];
          local_c8.RenderTargetFormats.Elements[6] = local_138.RenderTargetFormats.Elements[6];
          local_c8.RenderTargetFormats.Elements[7] = local_138.RenderTargetFormats.Elements[7];
          local_c8.RenderTargetsEnabled = local_138.RenderTargetsEnabled;
          local_c8.RenderTargetFormats.Elements[0] = local_138.RenderTargetFormats.Elements[0];
          local_c8.RenderTargetFormats.Elements[1] = local_138.RenderTargetFormats.Elements[1];
          local_c8.RenderTargetFormats.Elements[2] = local_138.RenderTargetFormats.Elements[2];
          local_c8.RenderTargetFormats.Elements[3] = local_138.RenderTargetFormats.Elements[3];
          local_c8.RenderTargetFlags.Elements[2] = local_138.RenderTargetFlags.Elements[2];
          local_c8.RenderTargetFlags.Elements[3] = local_138.RenderTargetFlags.Elements[3];
          local_c8.RenderTargetFlags.Elements[0] = local_138.RenderTargetFlags.Elements[0];
          local_c8.RenderTargetFlags.Elements[1] = local_138.RenderTargetFlags.Elements[1];
          local_c8.RenderTargetFlags.Elements[6] = local_138.RenderTargetFlags.Elements[6];
          local_c8.RenderTargetFlags.Elements[7] = local_138.RenderTargetFlags.Elements[7];
          local_c8.RenderTargetFlags.Elements[4] = local_138.RenderTargetFlags.Elements[4];
          local_c8.RenderTargetFlags.Elements[5] = local_138.RenderTargetFlags.Elements[5];
          local_c8._81_7_ = local_138._81_7_;
          local_c8.DepthStencilTargetFormat = local_138.DepthStencilTargetFormat;
          local_c8.DepthStencilTargetFlag = local_138.DepthStencilTargetFlag;
          local_c8.DepthTargetLoadAction = local_138.DepthTargetLoadAction;
          local_c8.DepthTargetStoreAction = local_138.DepthTargetStoreAction;
          local_c8.StencilTargetLoadAction = local_138.StencilTargetLoadAction;
          local_c8.StencilTargetStoreAction = local_138.StencilTargetStoreAction;
          local_c8.DepthStencilAccess.Value._0_2_ = (undefined2)local_138.DepthStencilAccess.Value;
          local_c8.DepthStencilAccess.Value._2_2_ = local_138.DepthStencilAccess.Value._2_2_;
          local_c8.NumSamples = local_138.NumSamples;
          local_c8.MultiViewCount = local_138.MultiViewCount;
          local_c8.bHasFragmentDensityAttachment = local_138.bHasFragmentDensityAttachment;
          local_c8._108_2_ = local_138._108_2_;
          local_c8._110_2_ = local_138._110_2_;
          local_138._96_8_ = uVar3;
          local_138._104_4_ = uVar4;
          GetSceneColorFormatAndCreateFlags
                    ((Type)local_1f0,true,None,uVar4 & 0xffff,false,&local_1f8,
                     (ETextureCreateFlags *)local_1e0.XY);
          local_c8.RenderTargetFormats.Elements[0] = local_1f8;
          local_c8.RenderTargetFlags.Elements[0] = (ETextureCreateFlags)local_1e0;
          FMeshPassProcessor::
          AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                    (param_2,param_4,&local_1c8,&local_c8,&local_188,param_9,param_10,param_11,
                     Default,None,'\0',true,iVar1,local_1e8);
        }
      }
    }
    else {
      local_1e0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      iVar1 = (int)this->_padding_;
      local_1d8 = 0x3f800000;
      local_1d4 = 1;
      if (iVar1 == 5) {
        EVar12 = SP_NumPlatforms;
      }
      else {
        EVar12 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
      }
      TVar2 = this->TranslucencyPassType;
      local_1f8 = TVar2 == TPT_TranslucencyAfterDOFModulate;
      local_1f7 = IsSeparateTranslucencyEnabled(TVar2,__real_3f800000);
      AddRenderTargetInfo(param_1->ColorFormat,param_1->ColorCreateFlags,&local_138);
      if (TVar2 != TPT_TranslucencyAfterMotionBlur) {
        SetupDepthStencilInfo
                  (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,
                   (FExclusiveDepthStencil)0x21,&local_138);
      }
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                 Default,None,'\0',true,(int)this->_padding_,param_12);
      if (local_1f7 != '\0') {
        GetPostDOFTranslucentTextureDesc
                  ((FRDGTextureDesc *)&local_c8,this->TranslucencyPassType,
                   (FSeparateTranslucencyDimensions *)&local_1e0._s_0,local_1f8,EVar12);
        local_138.RenderTargetFormats.Elements[0] = local_c8.RenderTargetFlags.Elements[4]._3_1_;
        local_138.RenderTargetFlags.Elements[0]._0_4_ = local_c8.RenderTargetsEnabled;
        local_138.RenderTargetFlags.Elements[0]._4_1_ = local_c8.RenderTargetFormats.Elements[0];
        local_138.RenderTargetFlags.Elements[0]._5_1_ = local_c8.RenderTargetFormats.Elements[1];
        local_138.RenderTargetFlags.Elements[0]._6_1_ = local_c8.RenderTargetFormats.Elements[2];
        local_138.RenderTargetFlags.Elements[0]._7_1_ = local_c8.RenderTargetFormats.Elements[3];
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                   Default,None,'\0',true,(int)this->_padding_,local_1e8);
        if ((void *)local_c8.RenderTargetFlags.Elements[6] != (void *)0x0) {
          FMemory::Free((void *)local_c8.RenderTargetFlags.Elements[6]);
        }
      }
    }
  }
  return;
}

// CollectPSOInitializersForLMPolicy<FSelfShadowedTranslucencyPolicy> @ 144718520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FBasePassMeshProcessor::CollectPSOInitializersForLMPolicy<FSelfShadowedTranslucencyPolicy>
          (FBasePassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FPSOPrecacheParams *param_3,FMaterial *param_4,
          FMaterialShadingModelField param_5,bool param_6,bool param_7,
          FSelfShadowedTranslucencyPolicy *param_8,ERasterizerFillMode param_9,
          ERasterizerCullMode param_10,EPrimitiveType param_11,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_12)

{
  int iVar1;
  Type TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  EPixelFormat EVar6;
  longlong lVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  EPixelFormat EVar11;
  EShaderPlatform EVar12;
  undefined1 auStackY_268 [32];
  bool local_1f8;
  char local_1f7;
  FPSOPrecacheVertexFactoryData *local_1f0;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_1e8;
  TIntPoint<int>_u_0 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  FMeshPassProcessorRenderState local_1c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_188;
  FGraphicsPipelineRenderTargetsInfo local_138;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = param_12;
  local_188.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0;
  local_188.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0;
  local_188.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1f0 = param_2;
  bVar5 = GetBasePassShaders<FSelfShadowedTranslucencyPolicy>
                    (param_4,param_2->VertexFactoryType,*param_8,(Type)this->_padding_,param_6,
                     this->bRequiresExplicit128bitRT,this->bIsDebug,GBL_Default,
                     &local_188.VertexShader,&local_188.PixelShader,this->bOITBasePass);
  if (bVar5) {
    local_1c8.BlendState = (this->PassDrawRenderState).BlendState;
    local_1c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_1c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_1c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_1c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_1c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_1c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_1c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_1c8._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
    SetDepthStencilStateForBasePass
              (&local_1c8,(Type)this->_padding_,param_7,param_4,this->bEnableReceiveDecalOutput,
               false);
    if (this->bTranslucentBasePass != false) {
      SetTranslucentRenderState
                (&local_1c8,param_4,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                 this->TranslucencyPassType);
    }
    local_138.NumSamples = 1;
    local_138.MultiViewCount = '\0';
    local_138.bHasFragmentDensityAttachment = false;
    local_138.RenderTargetsEnabled = 0;
    local_138.RenderTargetFormats.Elements[0] = '\0';
    local_138.RenderTargetFormats.Elements[1] = '\0';
    local_138.RenderTargetFormats.Elements[2] = '\0';
    local_138.RenderTargetFormats.Elements[3] = '\0';
    local_138.RenderTargetFormats.Elements[4] = '\0';
    local_138.RenderTargetFormats.Elements[5] = '\0';
    local_138.RenderTargetFormats.Elements[6] = '\0';
    local_138.RenderTargetFormats.Elements[7] = '\0';
    local_138.RenderTargetFlags.Elements[0] = None;
    local_138.RenderTargetFlags.Elements[1] = None;
    local_138.RenderTargetFlags.Elements[2] = None;
    local_138.RenderTargetFlags.Elements[3] = None;
    local_138.RenderTargetFlags.Elements[4] = None;
    local_138.RenderTargetFlags.Elements[5] = None;
    local_138.RenderTargetFlags.Elements[6] = None;
    local_138.RenderTargetFlags.Elements[7] = None;
    local_138.DepthStencilTargetFormat = PF_Unknown;
    local_138.DepthStencilTargetFlag = None;
    local_138.DepthTargetLoadAction = ENoAction;
    local_138.DepthTargetStoreAction = ENoAction;
    local_138.StencilTargetLoadAction = ENoAction;
    local_138.StencilTargetStoreAction = ENoAction;
    local_138.DepthStencilAccess.Value = DepthNop;
    if (this->bTranslucentBasePass == false) {
      if ((*(byte *)&param_3->field0_0x0 & 0x80) == 0) {
        SetupGBufferRenderTargetInfo(param_1,&local_138,true,GBL_Default);
      }
      else {
        local_1c8._56_8_ = local_1c8._56_8_ & 0xffffffff00000000;
        local_1c8.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
        SetTranslucentRenderState
                  (&local_1c8,param_4,
                   GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                   TPT_AllTranslucency);
        EVar6 = (EPixelFormat)((param_3->field0_0x0).Data >> 0x1e);
        EVar11 = PF_B8G8R8A8;
        if (EVar6 != PF_Unknown) {
          EVar11 = EVar6;
        }
        AddRenderTargetInfo(EVar11,ShaderResource|RenderTargetable,&local_138);
      }
      iVar1 = (int)this->_padding_;
      local_1f0 = (FPSOPrecacheVertexFactoryData *)CONCAT44(local_1f0._4_4_,(int)this->_padding_);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_2,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,Default,
                 None,'\0',true,iVar1,param_12);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        pIVar8 = IConsoleManager::Get();
        plVar9 = (longlong *)
                 (**(code **)((longlong)*pIVar8 + 0xc0))
                           (pIVar8,L"r.PSOPrecache.PrecacheAlphaColorChannel");
        pTVar10 = (TConsoleVariableData<int> *)0x0;
        if (plVar9 != (longlong *)0x0) {
          pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
        }
        `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
        ::__l2::CVar = pTVar10;
        _Init_thread_footer(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar10 = `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::CVar;
      if (`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
          ::__l2::CVar != (TConsoleVariableData<int> *)0x0) {
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar7 = 0;
        }
        else {
          lVar7 = 4;
        }
        uVar4 = local_138._104_4_;
        uVar3 = local_138._96_8_;
        if (0 < *(int *)((longlong)pTVar10->ShadowedValue + lVar7)) {
          local_c8._12_4_ = local_138._12_4_;
          local_c8.RenderTargetFormats.Elements[4] = local_138.RenderTargetFormats.Elements[4];
          local_c8.RenderTargetFormats.Elements[5] = local_138.RenderTargetFormats.Elements[5];
          local_c8.RenderTargetFormats.Elements[6] = local_138.RenderTargetFormats.Elements[6];
          local_c8.RenderTargetFormats.Elements[7] = local_138.RenderTargetFormats.Elements[7];
          local_c8.RenderTargetsEnabled = local_138.RenderTargetsEnabled;
          local_c8.RenderTargetFormats.Elements[0] = local_138.RenderTargetFormats.Elements[0];
          local_c8.RenderTargetFormats.Elements[1] = local_138.RenderTargetFormats.Elements[1];
          local_c8.RenderTargetFormats.Elements[2] = local_138.RenderTargetFormats.Elements[2];
          local_c8.RenderTargetFormats.Elements[3] = local_138.RenderTargetFormats.Elements[3];
          local_c8.RenderTargetFlags.Elements[2] = local_138.RenderTargetFlags.Elements[2];
          local_c8.RenderTargetFlags.Elements[3] = local_138.RenderTargetFlags.Elements[3];
          local_c8.RenderTargetFlags.Elements[0] = local_138.RenderTargetFlags.Elements[0];
          local_c8.RenderTargetFlags.Elements[1] = local_138.RenderTargetFlags.Elements[1];
          local_c8.RenderTargetFlags.Elements[6] = local_138.RenderTargetFlags.Elements[6];
          local_c8.RenderTargetFlags.Elements[7] = local_138.RenderTargetFlags.Elements[7];
          local_c8.RenderTargetFlags.Elements[4] = local_138.RenderTargetFlags.Elements[4];
          local_c8.RenderTargetFlags.Elements[5] = local_138.RenderTargetFlags.Elements[5];
          local_c8._81_7_ = local_138._81_7_;
          local_c8.DepthStencilTargetFormat = local_138.DepthStencilTargetFormat;
          local_c8.DepthStencilTargetFlag = local_138.DepthStencilTargetFlag;
          local_c8.DepthTargetLoadAction = local_138.DepthTargetLoadAction;
          local_c8.DepthTargetStoreAction = local_138.DepthTargetStoreAction;
          local_c8.StencilTargetLoadAction = local_138.StencilTargetLoadAction;
          local_c8.StencilTargetStoreAction = local_138.StencilTargetStoreAction;
          local_c8.DepthStencilAccess.Value._0_2_ = (undefined2)local_138.DepthStencilAccess.Value;
          local_c8.DepthStencilAccess.Value._2_2_ = local_138.DepthStencilAccess.Value._2_2_;
          local_c8.NumSamples = local_138.NumSamples;
          local_c8.MultiViewCount = local_138.MultiViewCount;
          local_c8.bHasFragmentDensityAttachment = local_138.bHasFragmentDensityAttachment;
          local_c8._108_2_ = local_138._108_2_;
          local_c8._110_2_ = local_138._110_2_;
          local_138._96_8_ = uVar3;
          local_138._104_4_ = uVar4;
          GetSceneColorFormatAndCreateFlags
                    ((Type)local_1f0,true,None,uVar4 & 0xffff,false,&local_1f8,
                     (ETextureCreateFlags *)local_1e0.XY);
          local_c8.RenderTargetFormats.Elements[0] = local_1f8;
          local_c8.RenderTargetFlags.Elements[0] = (ETextureCreateFlags)local_1e0;
          FMeshPassProcessor::
          AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                    (param_2,param_4,&local_1c8,&local_c8,&local_188,param_9,param_10,param_11,
                     Default,None,'\0',true,iVar1,local_1e8);
        }
      }
    }
    else {
      local_1e0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      iVar1 = (int)this->_padding_;
      local_1d8 = 0x3f800000;
      local_1d4 = 1;
      if (iVar1 == 5) {
        EVar12 = SP_NumPlatforms;
      }
      else {
        EVar12 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
      }
      TVar2 = this->TranslucencyPassType;
      local_1f8 = TVar2 == TPT_TranslucencyAfterDOFModulate;
      local_1f7 = IsSeparateTranslucencyEnabled(TVar2,__real_3f800000);
      AddRenderTargetInfo(param_1->ColorFormat,param_1->ColorCreateFlags,&local_138);
      if (TVar2 != TPT_TranslucencyAfterMotionBlur) {
        SetupDepthStencilInfo
                  (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,
                   (FExclusiveDepthStencil)0x21,&local_138);
      }
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                 Default,None,'\0',true,(int)this->_padding_,param_12);
      if (local_1f7 != '\0') {
        GetPostDOFTranslucentTextureDesc
                  ((FRDGTextureDesc *)&local_c8,this->TranslucencyPassType,
                   (FSeparateTranslucencyDimensions *)&local_1e0._s_0,local_1f8,EVar12);
        local_138.RenderTargetFormats.Elements[0] = local_c8.RenderTargetFlags.Elements[4]._3_1_;
        local_138.RenderTargetFlags.Elements[0]._0_4_ = local_c8.RenderTargetsEnabled;
        local_138.RenderTargetFlags.Elements[0]._4_1_ = local_c8.RenderTargetFormats.Elements[0];
        local_138.RenderTargetFlags.Elements[0]._5_1_ = local_c8.RenderTargetFormats.Elements[1];
        local_138.RenderTargetFlags.Elements[0]._6_1_ = local_c8.RenderTargetFormats.Elements[2];
        local_138.RenderTargetFlags.Elements[0]._7_1_ = local_c8.RenderTargetFormats.Elements[3];
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                   Default,None,'\0',true,(int)this->_padding_,local_1e8);
        if ((void *)local_c8.RenderTargetFlags.Elements[6] != (void *)0x0) {
          FMemory::Free((void *)local_c8.RenderTargetFlags.Elements[6]);
        }
      }
    }
  }
  return;
}

// CollectPSOInitializersForLMPolicy<FSelfShadowedVolumetricLightmapPolicy> @ 144718b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FBasePassMeshProcessor::CollectPSOInitializersForLMPolicy<FSelfShadowedVolumetricLightmapPolicy>
          (FBasePassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FPSOPrecacheParams *param_3,FMaterial *param_4,
          FMaterialShadingModelField param_5,bool param_6,bool param_7,
          FSelfShadowedVolumetricLightmapPolicy *param_8,ERasterizerFillMode param_9,
          ERasterizerCullMode param_10,EPrimitiveType param_11,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_12)

{
  int iVar1;
  Type TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  EPixelFormat EVar6;
  longlong lVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  EPixelFormat EVar11;
  EShaderPlatform EVar12;
  undefined1 auStackY_268 [32];
  bool local_1f8;
  char local_1f7;
  FPSOPrecacheVertexFactoryData *local_1f0;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_1e8;
  TIntPoint<int>_u_0 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  FMeshPassProcessorRenderState local_1c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_188;
  FGraphicsPipelineRenderTargetsInfo local_138;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = param_12;
  local_188.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)0x0;
  local_188.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)0x0;
  local_188.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1f0 = param_2;
  bVar5 = GetBasePassShaders<FSelfShadowedVolumetricLightmapPolicy>
                    (param_4,param_2->VertexFactoryType,*param_8,(Type)this->_padding_,param_6,
                     this->bRequiresExplicit128bitRT,this->bIsDebug,GBL_Default,
                     &local_188.VertexShader,&local_188.PixelShader,this->bOITBasePass);
  if (bVar5) {
    local_1c8.BlendState = (this->PassDrawRenderState).BlendState;
    local_1c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_1c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_1c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_1c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_1c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_1c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_1c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_1c8._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
    SetDepthStencilStateForBasePass
              (&local_1c8,(Type)this->_padding_,param_7,param_4,this->bEnableReceiveDecalOutput,
               false);
    if (this->bTranslucentBasePass != false) {
      SetTranslucentRenderState
                (&local_1c8,param_4,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                 this->TranslucencyPassType);
    }
    local_138.NumSamples = 1;
    local_138.MultiViewCount = '\0';
    local_138.bHasFragmentDensityAttachment = false;
    local_138.RenderTargetsEnabled = 0;
    local_138.RenderTargetFormats.Elements[0] = '\0';
    local_138.RenderTargetFormats.Elements[1] = '\0';
    local_138.RenderTargetFormats.Elements[2] = '\0';
    local_138.RenderTargetFormats.Elements[3] = '\0';
    local_138.RenderTargetFormats.Elements[4] = '\0';
    local_138.RenderTargetFormats.Elements[5] = '\0';
    local_138.RenderTargetFormats.Elements[6] = '\0';
    local_138.RenderTargetFormats.Elements[7] = '\0';
    local_138.RenderTargetFlags.Elements[0] = None;
    local_138.RenderTargetFlags.Elements[1] = None;
    local_138.RenderTargetFlags.Elements[2] = None;
    local_138.RenderTargetFlags.Elements[3] = None;
    local_138.RenderTargetFlags.Elements[4] = None;
    local_138.RenderTargetFlags.Elements[5] = None;
    local_138.RenderTargetFlags.Elements[6] = None;
    local_138.RenderTargetFlags.Elements[7] = None;
    local_138.DepthStencilTargetFormat = PF_Unknown;
    local_138.DepthStencilTargetFlag = None;
    local_138.DepthTargetLoadAction = ENoAction;
    local_138.DepthTargetStoreAction = ENoAction;
    local_138.StencilTargetLoadAction = ENoAction;
    local_138.StencilTargetStoreAction = ENoAction;
    local_138.DepthStencilAccess.Value = DepthNop;
    if (this->bTranslucentBasePass == false) {
      if ((*(byte *)&param_3->field0_0x0 & 0x80) == 0) {
        SetupGBufferRenderTargetInfo(param_1,&local_138,true,GBL_Default);
      }
      else {
        local_1c8._56_8_ = local_1c8._56_8_ & 0xffffffff00000000;
        local_1c8.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
        SetTranslucentRenderState
                  (&local_1c8,param_4,
                   GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                   TPT_AllTranslucency);
        EVar6 = (EPixelFormat)((param_3->field0_0x0).Data >> 0x1e);
        EVar11 = PF_B8G8R8A8;
        if (EVar6 != PF_Unknown) {
          EVar11 = EVar6;
        }
        AddRenderTargetInfo(EVar11,ShaderResource|RenderTargetable,&local_138);
      }
      iVar1 = (int)this->_padding_;
      local_1f0 = (FPSOPrecacheVertexFactoryData *)CONCAT44(local_1f0._4_4_,(int)this->_padding_);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_2,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,Default,
                 None,'\0',true,iVar1,param_12);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        pIVar8 = IConsoleManager::Get();
        plVar9 = (longlong *)
                 (**(code **)((longlong)*pIVar8 + 0xc0))
                           (pIVar8,L"r.PSOPrecache.PrecacheAlphaColorChannel");
        pTVar10 = (TConsoleVariableData<int> *)0x0;
        if (plVar9 != (longlong *)0x0) {
          pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
        }
        `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
        ::__l2::CVar = pTVar10;
        _Init_thread_footer(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar10 = `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::CVar;
      if (`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
          ::__l2::CVar != (TConsoleVariableData<int> *)0x0) {
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar7 = 0;
        }
        else {
          lVar7 = 4;
        }
        uVar4 = local_138._104_4_;
        uVar3 = local_138._96_8_;
        if (0 < *(int *)((longlong)pTVar10->ShadowedValue + lVar7)) {
          local_c8._12_4_ = local_138._12_4_;
          local_c8.RenderTargetFormats.Elements[4] = local_138.RenderTargetFormats.Elements[4];
          local_c8.RenderTargetFormats.Elements[5] = local_138.RenderTargetFormats.Elements[5];
          local_c8.RenderTargetFormats.Elements[6] = local_138.RenderTargetFormats.Elements[6];
          local_c8.RenderTargetFormats.Elements[7] = local_138.RenderTargetFormats.Elements[7];
          local_c8.RenderTargetsEnabled = local_138.RenderTargetsEnabled;
          local_c8.RenderTargetFormats.Elements[0] = local_138.RenderTargetFormats.Elements[0];
          local_c8.RenderTargetFormats.Elements[1] = local_138.RenderTargetFormats.Elements[1];
          local_c8.RenderTargetFormats.Elements[2] = local_138.RenderTargetFormats.Elements[2];
          local_c8.RenderTargetFormats.Elements[3] = local_138.RenderTargetFormats.Elements[3];
          local_c8.RenderTargetFlags.Elements[2] = local_138.RenderTargetFlags.Elements[2];
          local_c8.RenderTargetFlags.Elements[3] = local_138.RenderTargetFlags.Elements[3];
          local_c8.RenderTargetFlags.Elements[0] = local_138.RenderTargetFlags.Elements[0];
          local_c8.RenderTargetFlags.Elements[1] = local_138.RenderTargetFlags.Elements[1];
          local_c8.RenderTargetFlags.Elements[6] = local_138.RenderTargetFlags.Elements[6];
          local_c8.RenderTargetFlags.Elements[7] = local_138.RenderTargetFlags.Elements[7];
          local_c8.RenderTargetFlags.Elements[4] = local_138.RenderTargetFlags.Elements[4];
          local_c8.RenderTargetFlags.Elements[5] = local_138.RenderTargetFlags.Elements[5];
          local_c8._81_7_ = local_138._81_7_;
          local_c8.DepthStencilTargetFormat = local_138.DepthStencilTargetFormat;
          local_c8.DepthStencilTargetFlag = local_138.DepthStencilTargetFlag;
          local_c8.DepthTargetLoadAction = local_138.DepthTargetLoadAction;
          local_c8.DepthTargetStoreAction = local_138.DepthTargetStoreAction;
          local_c8.StencilTargetLoadAction = local_138.StencilTargetLoadAction;
          local_c8.StencilTargetStoreAction = local_138.StencilTargetStoreAction;
          local_c8.DepthStencilAccess.Value._0_2_ = (undefined2)local_138.DepthStencilAccess.Value;
          local_c8.DepthStencilAccess.Value._2_2_ = local_138.DepthStencilAccess.Value._2_2_;
          local_c8.NumSamples = local_138.NumSamples;
          local_c8.MultiViewCount = local_138.MultiViewCount;
          local_c8.bHasFragmentDensityAttachment = local_138.bHasFragmentDensityAttachment;
          local_c8._108_2_ = local_138._108_2_;
          local_c8._110_2_ = local_138._110_2_;
          local_138._96_8_ = uVar3;
          local_138._104_4_ = uVar4;
          GetSceneColorFormatAndCreateFlags
                    ((Type)local_1f0,true,None,uVar4 & 0xffff,false,&local_1f8,
                     (ETextureCreateFlags *)local_1e0.XY);
          local_c8.RenderTargetFormats.Elements[0] = local_1f8;
          local_c8.RenderTargetFlags.Elements[0] = (ETextureCreateFlags)local_1e0;
          FMeshPassProcessor::
          AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                    (param_2,param_4,&local_1c8,&local_c8,&local_188,param_9,param_10,param_11,
                     Default,None,'\0',true,iVar1,local_1e8);
        }
      }
    }
    else {
      local_1e0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      iVar1 = (int)this->_padding_;
      local_1d8 = 0x3f800000;
      local_1d4 = 1;
      if (iVar1 == 5) {
        EVar12 = SP_NumPlatforms;
      }
      else {
        EVar12 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
      }
      TVar2 = this->TranslucencyPassType;
      local_1f8 = TVar2 == TPT_TranslucencyAfterDOFModulate;
      local_1f7 = IsSeparateTranslucencyEnabled(TVar2,__real_3f800000);
      AddRenderTargetInfo(param_1->ColorFormat,param_1->ColorCreateFlags,&local_138);
      if (TVar2 != TPT_TranslucencyAfterMotionBlur) {
        SetupDepthStencilInfo
                  (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,
                   (FExclusiveDepthStencil)0x21,&local_138);
      }
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                 Default,None,'\0',true,(int)this->_padding_,param_12);
      if (local_1f7 != '\0') {
        GetPostDOFTranslucentTextureDesc
                  ((FRDGTextureDesc *)&local_c8,this->TranslucencyPassType,
                   (FSeparateTranslucencyDimensions *)&local_1e0._s_0,local_1f8,EVar12);
        local_138.RenderTargetFormats.Elements[0] = local_c8.RenderTargetFlags.Elements[4]._3_1_;
        local_138.RenderTargetFlags.Elements[0]._0_4_ = local_c8.RenderTargetsEnabled;
        local_138.RenderTargetFlags.Elements[0]._4_1_ = local_c8.RenderTargetFormats.Elements[0];
        local_138.RenderTargetFlags.Elements[0]._5_1_ = local_c8.RenderTargetFormats.Elements[1];
        local_138.RenderTargetFlags.Elements[0]._6_1_ = local_c8.RenderTargetFormats.Elements[2];
        local_138.RenderTargetFlags.Elements[0]._7_1_ = local_c8.RenderTargetFormats.Elements[3];
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                   Default,None,'\0',true,(int)this->_padding_,local_1e8);
        if ((void *)local_c8.RenderTargetFlags.Elements[6] != (void *)0x0) {
          FMemory::Free((void *)local_c8.RenderTargetFlags.Elements[6]);
        }
      }
    }
  }
  return;
}

// CollectPSOInitializersForLMPolicy<FUniformLightMapPolicy> @ 144719100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FBasePassMeshProcessor::CollectPSOInitializersForLMPolicy<FUniformLightMapPolicy>
          (FBasePassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FPSOPrecacheParams *param_3,FMaterial *param_4,
          FMaterialShadingModelField param_5,bool param_6,bool param_7,
          FUniformLightMapPolicy *param_8,ERasterizerFillMode param_9,ERasterizerCullMode param_10,
          EPrimitiveType param_11,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_12)

{
  int iVar1;
  Type TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  EPixelFormat EVar6;
  longlong lVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  EPixelFormat EVar11;
  EShaderPlatform EVar12;
  undefined1 auStackY_268 [32];
  bool local_1f8;
  char local_1f7;
  FPSOPrecacheVertexFactoryData *local_1f0;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_1e8;
  TIntPoint<int>_u_0 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  FMeshPassProcessorRenderState local_1c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_188;
  FGraphicsPipelineRenderTargetsInfo local_138;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = param_12;
  local_188.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_188.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_188.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_188.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_188.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1f0 = param_2;
  bVar5 = GetBasePassShaders<FUniformLightMapPolicy>
                    (param_4,param_2->VertexFactoryType,
                     (FUniformLightMapPolicy)param_8->IndirectPolicy,(Type)this->_padding_,param_6,
                     this->bRequiresExplicit128bitRT,this->bIsDebug,GBL_Default,
                     &local_188.VertexShader,&local_188.PixelShader,this->bOITBasePass);
  if (bVar5) {
    local_1c8.BlendState = (this->PassDrawRenderState).BlendState;
    local_1c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_1c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_1c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_1c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_1c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_1c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_1c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_1c8._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
    SetDepthStencilStateForBasePass
              (&local_1c8,(Type)this->_padding_,param_7,param_4,this->bEnableReceiveDecalOutput,
               false);
    if (this->bTranslucentBasePass != false) {
      SetTranslucentRenderState
                (&local_1c8,param_4,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                 this->TranslucencyPassType);
    }
    local_138.NumSamples = 1;
    local_138.MultiViewCount = '\0';
    local_138.bHasFragmentDensityAttachment = false;
    local_138.RenderTargetsEnabled = 0;
    local_138.RenderTargetFormats.Elements[0] = '\0';
    local_138.RenderTargetFormats.Elements[1] = '\0';
    local_138.RenderTargetFormats.Elements[2] = '\0';
    local_138.RenderTargetFormats.Elements[3] = '\0';
    local_138.RenderTargetFormats.Elements[4] = '\0';
    local_138.RenderTargetFormats.Elements[5] = '\0';
    local_138.RenderTargetFormats.Elements[6] = '\0';
    local_138.RenderTargetFormats.Elements[7] = '\0';
    local_138.RenderTargetFlags.Elements[0] = None;
    local_138.RenderTargetFlags.Elements[1] = None;
    local_138.RenderTargetFlags.Elements[2] = None;
    local_138.RenderTargetFlags.Elements[3] = None;
    local_138.RenderTargetFlags.Elements[4] = None;
    local_138.RenderTargetFlags.Elements[5] = None;
    local_138.RenderTargetFlags.Elements[6] = None;
    local_138.RenderTargetFlags.Elements[7] = None;
    local_138.DepthStencilTargetFormat = PF_Unknown;
    local_138.DepthStencilTargetFlag = None;
    local_138.DepthTargetLoadAction = ENoAction;
    local_138.DepthTargetStoreAction = ENoAction;
    local_138.StencilTargetLoadAction = ENoAction;
    local_138.StencilTargetStoreAction = ENoAction;
    local_138.DepthStencilAccess.Value = DepthNop;
    if (this->bTranslucentBasePass == false) {
      if ((*(byte *)&param_3->field0_0x0 & 0x80) == 0) {
        SetupGBufferRenderTargetInfo(param_1,&local_138,true,GBL_Default);
      }
      else {
        local_1c8._56_8_ = local_1c8._56_8_ & 0xffffffff00000000;
        local_1c8.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
        SetTranslucentRenderState
                  (&local_1c8,param_4,
                   GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
                   TPT_AllTranslucency);
        EVar6 = (EPixelFormat)((param_3->field0_0x0).Data >> 0x1e);
        EVar11 = PF_B8G8R8A8;
        if (EVar6 != PF_Unknown) {
          EVar11 = EVar6;
        }
        AddRenderTargetInfo(EVar11,ShaderResource|RenderTargetable,&local_138);
      }
      iVar1 = (int)this->_padding_;
      local_1f0 = (FPSOPrecacheVertexFactoryData *)CONCAT44(local_1f0._4_4_,(int)this->_padding_);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_2,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,Default,
                 None,'\0',true,iVar1,param_12);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        pIVar8 = IConsoleManager::Get();
        plVar9 = (longlong *)
                 (**(code **)((longlong)*pIVar8 + 0xc0))
                           (pIVar8,L"r.PSOPrecache.PrecacheAlphaColorChannel");
        pTVar10 = (TConsoleVariableData<int> *)0x0;
        if (plVar9 != (longlong *)0x0) {
          pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
        }
        `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
        ::__l2::CVar = pTVar10;
        _Init_thread_footer(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar10 = `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::CVar;
      if (`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
          ::__l2::CVar != (TConsoleVariableData<int> *)0x0) {
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar7 = 0;
        }
        else {
          lVar7 = 4;
        }
        uVar4 = local_138._104_4_;
        uVar3 = local_138._96_8_;
        if (0 < *(int *)((longlong)pTVar10->ShadowedValue + lVar7)) {
          local_c8._12_4_ = local_138._12_4_;
          local_c8.RenderTargetFormats.Elements[4] = local_138.RenderTargetFormats.Elements[4];
          local_c8.RenderTargetFormats.Elements[5] = local_138.RenderTargetFormats.Elements[5];
          local_c8.RenderTargetFormats.Elements[6] = local_138.RenderTargetFormats.Elements[6];
          local_c8.RenderTargetFormats.Elements[7] = local_138.RenderTargetFormats.Elements[7];
          local_c8.RenderTargetsEnabled = local_138.RenderTargetsEnabled;
          local_c8.RenderTargetFormats.Elements[0] = local_138.RenderTargetFormats.Elements[0];
          local_c8.RenderTargetFormats.Elements[1] = local_138.RenderTargetFormats.Elements[1];
          local_c8.RenderTargetFormats.Elements[2] = local_138.RenderTargetFormats.Elements[2];
          local_c8.RenderTargetFormats.Elements[3] = local_138.RenderTargetFormats.Elements[3];
          local_c8.RenderTargetFlags.Elements[2] = local_138.RenderTargetFlags.Elements[2];
          local_c8.RenderTargetFlags.Elements[3] = local_138.RenderTargetFlags.Elements[3];
          local_c8.RenderTargetFlags.Elements[0] = local_138.RenderTargetFlags.Elements[0];
          local_c8.RenderTargetFlags.Elements[1] = local_138.RenderTargetFlags.Elements[1];
          local_c8.RenderTargetFlags.Elements[6] = local_138.RenderTargetFlags.Elements[6];
          local_c8.RenderTargetFlags.Elements[7] = local_138.RenderTargetFlags.Elements[7];
          local_c8.RenderTargetFlags.Elements[4] = local_138.RenderTargetFlags.Elements[4];
          local_c8.RenderTargetFlags.Elements[5] = local_138.RenderTargetFlags.Elements[5];
          local_c8._81_7_ = local_138._81_7_;
          local_c8.DepthStencilTargetFormat = local_138.DepthStencilTargetFormat;
          local_c8.DepthStencilTargetFlag = local_138.DepthStencilTargetFlag;
          local_c8.DepthTargetLoadAction = local_138.DepthTargetLoadAction;
          local_c8.DepthTargetStoreAction = local_138.DepthTargetStoreAction;
          local_c8.StencilTargetLoadAction = local_138.StencilTargetLoadAction;
          local_c8.StencilTargetStoreAction = local_138.StencilTargetStoreAction;
          local_c8.DepthStencilAccess.Value._0_2_ = (undefined2)local_138.DepthStencilAccess.Value;
          local_c8.DepthStencilAccess.Value._2_2_ = local_138.DepthStencilAccess.Value._2_2_;
          local_c8.NumSamples = local_138.NumSamples;
          local_c8.MultiViewCount = local_138.MultiViewCount;
          local_c8.bHasFragmentDensityAttachment = local_138.bHasFragmentDensityAttachment;
          local_c8._108_2_ = local_138._108_2_;
          local_c8._110_2_ = local_138._110_2_;
          local_138._96_8_ = uVar3;
          local_138._104_4_ = uVar4;
          GetSceneColorFormatAndCreateFlags
                    ((Type)local_1f0,true,None,uVar4 & 0xffff,false,&local_1f8,
                     (ETextureCreateFlags *)local_1e0.XY);
          local_c8.RenderTargetFormats.Elements[0] = local_1f8;
          local_c8.RenderTargetFlags.Elements[0] = (ETextureCreateFlags)local_1e0;
          FMeshPassProcessor::
          AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                    (param_2,param_4,&local_1c8,&local_c8,&local_188,param_9,param_10,param_11,
                     Default,None,'\0',true,iVar1,local_1e8);
        }
      }
    }
    else {
      local_1e0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      iVar1 = (int)this->_padding_;
      local_1d8 = 0x3f800000;
      local_1d4 = 1;
      if (iVar1 == 5) {
        EVar12 = SP_NumPlatforms;
      }
      else {
        EVar12 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
      }
      TVar2 = this->TranslucencyPassType;
      local_1f8 = TVar2 == TPT_TranslucencyAfterDOFModulate;
      local_1f7 = IsSeparateTranslucencyEnabled(TVar2,__real_3f800000);
      AddRenderTargetInfo(param_1->ColorFormat,param_1->ColorCreateFlags,&local_138);
      if (TVar2 != TPT_TranslucencyAfterMotionBlur) {
        SetupDepthStencilInfo
                  (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,
                   (FExclusiveDepthStencil)0x21,&local_138);
      }
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                 Default,None,'\0',true,(int)this->_padding_,param_12);
      if (local_1f7 != '\0') {
        GetPostDOFTranslucentTextureDesc
                  ((FRDGTextureDesc *)&local_c8,this->TranslucencyPassType,
                   (FSeparateTranslucencyDimensions *)&local_1e0._s_0,local_1f8,EVar12);
        local_138.RenderTargetFormats.Elements[0] = local_c8.RenderTargetFlags.Elements[4]._3_1_;
        local_138.RenderTargetFlags.Elements[0]._0_4_ = local_c8.RenderTargetsEnabled;
        local_138.RenderTargetFlags.Elements[0]._4_1_ = local_c8.RenderTargetFormats.Elements[0];
        local_138.RenderTargetFlags.Elements[0]._5_1_ = local_c8.RenderTargetFormats.Elements[1];
        local_138.RenderTargetFlags.Elements[0]._6_1_ = local_c8.RenderTargetFormats.Elements[2];
        local_138.RenderTargetFlags.Elements[0]._7_1_ = local_c8.RenderTargetFormats.Elements[3];
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (local_1f0,param_4,&local_1c8,&local_138,&local_188,param_9,param_10,param_11,
                   Default,None,'\0',true,(int)this->_padding_,local_1e8);
        if ((void *)local_c8.RenderTargetFlags.Elements[6] != (void *)0x0) {
          FMemory::Free((void *)local_c8.RenderTargetFlags.Elements[6]);
        }
      }
    }
  }
  return;
}

// Process<FSelfShadowedCachedPointIndirectLightingPolicy> @ 144722cb0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>
          (FBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          bool param_7,bool param_8,FMaterialShadingModelField param_9,
          FSelfShadowedCachedPointIndirectLightingPolicy *param_10,
          FSelfShadowLightCacheElementData *param_11,ERasterizerFillMode param_12,
          ERasterizerCullMode param_13)

{
  bool bVar1;
  bool bVar2;
  FSelfShadowedCachedPointIndirectLightingPolicy FVar3;
  FVertexFactory *pFVar4;
  FPrimitiveSceneProxy *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  FVertexFactoryType *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  TBasePassShaderElementData<FSelfShadowedCachedPointIndirectLightingPolicy> local_e8;
  FMeshPassProcessorRenderState local_c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar4 = param_1->VertexFactory;
  if ((((FScene *)this->_padding_ == (FScene *)0x0) ||
      (bVar8 = FScene::ShouldRenderSkylightInBasePass((FScene *)this->_padding_,param_8), !bVar8))
     || ((param_9.ShadingModelField & 1) != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  bVar20 = this->bOITBasePass;
  bVar1 = this->bIsDebug;
  bVar2 = this->bRequiresExplicit128bitRT;
  lVar7 = this->_padding_;
  FVar3 = *param_10;
  local_88.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar15 = (FVertexFactoryType *)(**(code **)(pFVar4->_padding_ + 0x30))();
  bVar8 = GetBasePassShaders<FSelfShadowedCachedPointIndirectLightingPolicy>
                    (param_6,pFVar15,FVar3,(Type)lVar7,bVar8,bVar2,bVar1,GBL_Default,
                     &local_88.VertexShader,&local_88.PixelShader,bVar20);
  if (!bVar8) {
    return bVar8;
  }
  local_c8.BlendState = (this->PassDrawRenderState).BlendState;
  local_c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
  lVar7 = this->_padding_;
  bVar20 = false;
  local_c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
  local_c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
  local_c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
  local_c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
  local_c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
  local_c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
  local_c8.StencilRef = (this->PassDrawRenderState).StencilRef;
  local_c8._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
  bVar8 = false;
  if (((lVar7 != 0) && (bVar8 = bVar20, -1 < param_3)) &&
     ((param_1->bDitheredLODTransition != 0 && (*(char *)(lVar7 + 0x26c9) != '\0')))) {
    if ((*(int *)(lVar7 + 0x1d58) <= param_3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar21 = 1 << ((byte)param_3 & 0x1f);
    lVar16 = *(longlong *)(lVar7 + 0x1d50);
    if (*(longlong *)(lVar7 + 0x1d50) == 0) {
      lVar16 = lVar7 + 0x1d40;
    }
    if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0) {
      if ((*(int *)(lVar7 + 0x1d78) <= param_3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar16 = *(longlong *)(lVar7 + 0x1d70);
      if (*(longlong *)(lVar7 + 0x1d70) == 0) {
        lVar16 = lVar7 + 0x1d60;
      }
      bVar8 = false;
      if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0)
      goto LAB_144722eed;
    }
    bVar8 = true;
  }
LAB_144722eed:
  SetDepthStencilStateForBasePass
            (&local_c8,(Type)this->_padding_,param_1->bDitheredLODTransition,param_6,
             this->bEnableReceiveDecalOutput,bVar8);
  if (this->bEnableReceiveDecalOutput == false) goto LAB_1447230da;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedCachedPointIndirectLightingPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l18::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedCachedPointIndirectLightingPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l18::_thread_safe_static_guard_0__),
     `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedCachedPointIndirectLightingPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
     ::__l18::_thread_safe_static_guard_0__ == -1)) {
    bVar8 = Substrate::IsSubstrateEnabled();
    if ((bVar8) &&
       (bVar8 = Substrate::IsDBufferPassEnabled
                          (GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_]), bVar8))
    {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedCachedPointIndirectLightingPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = true;
    }
    else {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedCachedPointIndirectLightingPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = false;
    }
    _Init_thread_footer(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedCachedPointIndirectLightingPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                         ::__l18::_thread_safe_static_guard_0__);
  }
  bVar11 = 0;
  if (param_4 != (FPrimitiveSceneProxy *)0x0) {
    bVar8 = IsRayTracingEnabled();
    if (bVar8) {
      cVar10 = (**(code **)(param_4->_padding_ + 0x68))();
      if ((cVar10 != '\0') && (param_4->bVisibleInRayTracing != '\0')) {
        bVar11 = 1;
      }
    }
    else {
      bVar11 = (**(code **)(param_4->_padding_ + 0x198))();
    }
  }
  if (`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedCachedPointIndirectLightingPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedCachedPointIndirectLightingPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled == false) {
    if (param_4 == (FPrimitiveSceneProxy *)0x0) {
      local_c8.StencilRef = (uint)(byte)((bVar11 & 1) << 2);
    }
    else {
      local_c8.StencilRef =
           (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4
                       | ((param_4->field_0x78 & 0xf8) << 2 | bVar11 & 1) << 2);
    }
    goto LAB_1447230da;
  }
  bVar12 = FMaterial::MaterialGetSubstrateMaterialType_RenderThread(param_6);
  uVar21 = (**(code **)(param_6->_padding_ + 0x3b0))(param_6);
  if (bVar12 < 2) {
    bVar8 = true;
    if ((uVar21 < 8) && ((0xd2U >> (uVar21 & 0x1f) & 1) != 0)) {
      bVar12 = 0x80;
      if (uVar21 != 1) goto LAB_144723053;
    }
    else {
      bVar12 = 0;
LAB_144723053:
      bVar20 = true;
      if (2 < uVar21 - 2) goto LAB_144722fd5;
    }
    bVar19 = 8;
  }
  else {
    bVar12 = 0;
    bVar20 = false;
LAB_144722fd5:
    bVar8 = bVar20;
    bVar19 = 0;
  }
  if (((!bVar8) || (6 < uVar21)) || (bVar13 = 2, (0x6aU >> (uVar21 & 0x1f) & 1) == 0)) {
    bVar13 = 0;
  }
  bVar19 = -(bVar11 != 0) & 4U | bVar12 | bVar13 | bVar19;
  if (param_4 == (FPrimitiveSceneProxy *)0x0) {
    local_c8.StencilRef = (uint)bVar19;
  }
  else {
    local_c8.StencilRef =
         (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4 |
                     bVar19);
  }
LAB_1447230da:
  if (this->bTranslucentBasePass != false) {
    SetTranslucentRenderState
              (&local_c8,param_6,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
               this->TranslucencyPassType);
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8.LightMapPolicyElementData.LCI = param_11->LCI;
  local_e8.LightMapPolicyElementData.SelfShadowTranslucencyUniformBuffer =
       param_11->SelfShadowTranslucencyUniformBuffer;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_e8,(FSceneView *)this->_padding_,param_4,
             param_1,param_3,true);
  if (this->bTranslucentBasePass == false) {
    if (local_88.VertexShader.ShaderContent ==
        (TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *)0x0)
    {
      uVar21 = 0;
    }
    else {
      uVar21 = (uint)(local_88.VertexShader.ShaderContent)->_padding_;
    }
    if (local_88.PixelShader.ShaderContent ==
        (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *)0x0)
    {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint)(local_88.PixelShader.ShaderContent)->_padding_;
    }
    uVar17 = (ulonglong)uVar22 << 0x10 |
             ((ulonglong)param_10 & 0xffffffffffff0000 | (ulonglong)uVar21) & 0x100000000ffff;
    uVar18 = (ulonglong)param_7 << 0x31 ^ 0x2000000000000;
    if (this->EarlyZPassMode == DDM_None) {
      uVar18 = (ulonglong)param_7 << 0x31;
    }
  }
  else {
    sVar14 = 0;
    fVar23 = 0.0;
    if (param_4 != (FPrimitiveSceneProxy *)0x0) {
      pFVar5 = param_4->PrimitiveSceneInfo->Proxy;
      sVar14 = pFVar5->TranslucencySortPriority + -0x8000;
      fVar23 = pFVar5->TranslucencySortDistanceOffset;
    }
    uVar17 = (ulonglong)CONCAT24(sVar14,fVar23) << 0x10;
    uVar18 = (ulonglong)param_1->MeshIdInPrimitive;
  }
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FSelfShadowedCachedPointIndirectLightingPolicy>_>
            ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,&local_c8,&local_88,
             param_12,param_13,(FMeshDrawCommandSortKey)(uVar17 | uVar18),Default,&local_e8);
  return true;
}

// Process<FSelfShadowedTranslucencyPolicy> @ 144723310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>
          (FBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          bool param_7,bool param_8,FMaterialShadingModelField param_9,
          FSelfShadowedTranslucencyPolicy *param_10,FRHIUniformBuffer **param_11,
          ERasterizerFillMode param_12,ERasterizerCullMode param_13)

{
  bool bVar1;
  bool bVar2;
  FSelfShadowedTranslucencyPolicy FVar3;
  FVertexFactory *pFVar4;
  FPrimitiveSceneProxy *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  FVertexFactoryType *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  TBasePassShaderElementData<FSelfShadowedTranslucencyPolicy> local_e8;
  FMeshPassProcessorRenderState local_c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar4 = param_1->VertexFactory;
  if ((((FScene *)this->_padding_ == (FScene *)0x0) ||
      (bVar8 = FScene::ShouldRenderSkylightInBasePass((FScene *)this->_padding_,param_8), !bVar8))
     || ((param_9.ShadingModelField & 1) != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  bVar20 = this->bOITBasePass;
  bVar1 = this->bIsDebug;
  bVar2 = this->bRequiresExplicit128bitRT;
  lVar7 = this->_padding_;
  FVar3 = *param_10;
  local_88.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar15 = (FVertexFactoryType *)(**(code **)(pFVar4->_padding_ + 0x30))();
  bVar8 = GetBasePassShaders<FSelfShadowedTranslucencyPolicy>
                    (param_6,pFVar15,FVar3,(Type)lVar7,bVar8,bVar2,bVar1,GBL_Default,
                     &local_88.VertexShader,&local_88.PixelShader,bVar20);
  if (!bVar8) {
    return bVar8;
  }
  local_c8.BlendState = (this->PassDrawRenderState).BlendState;
  local_c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
  lVar7 = this->_padding_;
  bVar20 = false;
  local_c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
  local_c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
  local_c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
  local_c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
  local_c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
  local_c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
  local_c8.StencilRef = (this->PassDrawRenderState).StencilRef;
  local_c8._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
  bVar8 = false;
  if (((lVar7 != 0) && (bVar8 = bVar20, -1 < param_3)) &&
     ((param_1->bDitheredLODTransition != 0 && (*(char *)(lVar7 + 0x26c9) != '\0')))) {
    if ((*(int *)(lVar7 + 0x1d58) <= param_3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar21 = 1 << ((byte)param_3 & 0x1f);
    lVar16 = *(longlong *)(lVar7 + 0x1d50);
    if (*(longlong *)(lVar7 + 0x1d50) == 0) {
      lVar16 = lVar7 + 0x1d40;
    }
    if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0) {
      if ((*(int *)(lVar7 + 0x1d78) <= param_3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar16 = *(longlong *)(lVar7 + 0x1d70);
      if (*(longlong *)(lVar7 + 0x1d70) == 0) {
        lVar16 = lVar7 + 0x1d60;
      }
      bVar8 = false;
      if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0)
      goto LAB_14472354d;
    }
    bVar8 = true;
  }
LAB_14472354d:
  SetDepthStencilStateForBasePass
            (&local_c8,(Type)this->_padding_,param_1->bDitheredLODTransition,param_6,
             this->bEnableReceiveDecalOutput,bVar8);
  if (this->bEnableReceiveDecalOutput == false) goto LAB_14472373a;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedTranslucencyPolicy_const&___ptr64___restrict,FRHIUniformBuffer*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l18::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedTranslucencyPolicy_const&___ptr64___restrict,FRHIUniformBuffer*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l18::_thread_safe_static_guard_0__),
     `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedTranslucencyPolicy_const&___ptr64___restrict,FRHIUniformBuffer*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
     ::__l18::_thread_safe_static_guard_0__ == -1)) {
    bVar8 = Substrate::IsSubstrateEnabled();
    if ((bVar8) &&
       (bVar8 = Substrate::IsDBufferPassEnabled
                          (GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_]), bVar8))
    {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedTranslucencyPolicy_const&___ptr64___restrict,FRHIUniformBuffer*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = true;
    }
    else {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedTranslucencyPolicy_const&___ptr64___restrict,FRHIUniformBuffer*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = false;
    }
    _Init_thread_footer(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedTranslucencyPolicy_const&___ptr64___restrict,FRHIUniformBuffer*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                         ::__l18::_thread_safe_static_guard_0__);
  }
  bVar11 = 0;
  if (param_4 != (FPrimitiveSceneProxy *)0x0) {
    bVar8 = IsRayTracingEnabled();
    if (bVar8) {
      cVar10 = (**(code **)(param_4->_padding_ + 0x68))();
      if ((cVar10 != '\0') && (param_4->bVisibleInRayTracing != '\0')) {
        bVar11 = 1;
      }
    }
    else {
      bVar11 = (**(code **)(param_4->_padding_ + 0x198))();
    }
  }
  if (`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedTranslucencyPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedTranslucencyPolicy_const&___ptr64___restrict,FRHIUniformBuffer*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled == false) {
    if (param_4 == (FPrimitiveSceneProxy *)0x0) {
      local_c8.StencilRef = (uint)(byte)((bVar11 & 1) << 2);
    }
    else {
      local_c8.StencilRef =
           (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4
                       | ((param_4->field_0x78 & 0xf8) << 2 | bVar11 & 1) << 2);
    }
    goto LAB_14472373a;
  }
  bVar12 = FMaterial::MaterialGetSubstrateMaterialType_RenderThread(param_6);
  uVar21 = (**(code **)(param_6->_padding_ + 0x3b0))(param_6);
  if (bVar12 < 2) {
    bVar8 = true;
    if ((uVar21 < 8) && ((0xd2U >> (uVar21 & 0x1f) & 1) != 0)) {
      bVar12 = 0x80;
      if (uVar21 != 1) goto LAB_1447236b3;
    }
    else {
      bVar12 = 0;
LAB_1447236b3:
      bVar20 = true;
      if (2 < uVar21 - 2) goto LAB_144723635;
    }
    bVar19 = 8;
  }
  else {
    bVar12 = 0;
    bVar20 = false;
LAB_144723635:
    bVar8 = bVar20;
    bVar19 = 0;
  }
  if (((!bVar8) || (6 < uVar21)) || (bVar13 = 2, (0x6aU >> (uVar21 & 0x1f) & 1) == 0)) {
    bVar13 = 0;
  }
  bVar19 = -(bVar11 != 0) & 4U | bVar12 | bVar13 | bVar19;
  if (param_4 == (FPrimitiveSceneProxy *)0x0) {
    local_c8.StencilRef = (uint)bVar19;
  }
  else {
    local_c8.StencilRef =
         (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4 |
                     bVar19);
  }
LAB_14472373a:
  if (this->bTranslucentBasePass != false) {
    SetTranslucentRenderState
              (&local_c8,param_6,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
               this->TranslucencyPassType);
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8.LightMapPolicyElementData = *param_11;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_e8,(FSceneView *)this->_padding_,param_4,
             param_1,param_3,true);
  if (this->bTranslucentBasePass == false) {
    if (local_88.VertexShader.ShaderContent ==
        (TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (uint)(local_88.VertexShader.ShaderContent)->_padding_;
    }
    if (local_88.PixelShader.ShaderContent ==
        (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint)(local_88.PixelShader.ShaderContent)->_padding_;
    }
    uVar17 = (ulonglong)uVar22 << 0x10 |
             ((ulonglong)param_10 & 0xffffffffffff0000 | (ulonglong)uVar21) & 0x100000000ffff;
    uVar18 = (ulonglong)param_7 << 0x31 ^ 0x2000000000000;
    if (this->EarlyZPassMode == DDM_None) {
      uVar18 = (ulonglong)param_7 << 0x31;
    }
  }
  else {
    sVar14 = 0;
    fVar23 = 0.0;
    if (param_4 != (FPrimitiveSceneProxy *)0x0) {
      pFVar5 = param_4->PrimitiveSceneInfo->Proxy;
      sVar14 = pFVar5->TranslucencySortPriority + -0x8000;
      fVar23 = pFVar5->TranslucencySortDistanceOffset;
    }
    uVar17 = (ulonglong)CONCAT24(sVar14,fVar23) << 0x10;
    uVar18 = (ulonglong)param_1->MeshIdInPrimitive;
  }
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FSelfShadowedTranslucencyPolicy>_>
            ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,&local_c8,&local_88,
             param_12,param_13,(FMeshDrawCommandSortKey)(uVar17 | uVar18),Default,&local_e8);
  return true;
}

// Process<FSelfShadowedVolumetricLightmapPolicy> @ 144723970

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>
          (FBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          bool param_7,bool param_8,FMaterialShadingModelField param_9,
          FSelfShadowedVolumetricLightmapPolicy *param_10,FSelfShadowLightCacheElementData *param_11
          ,ERasterizerFillMode param_12,ERasterizerCullMode param_13)

{
  bool bVar1;
  bool bVar2;
  FSelfShadowedVolumetricLightmapPolicy FVar3;
  FVertexFactory *pFVar4;
  FPrimitiveSceneProxy *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  FVertexFactoryType *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  TBasePassShaderElementData<FSelfShadowedVolumetricLightmapPolicy> local_e8;
  FMeshPassProcessorRenderState local_c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar4 = param_1->VertexFactory;
  if ((((FScene *)this->_padding_ == (FScene *)0x0) ||
      (bVar8 = FScene::ShouldRenderSkylightInBasePass((FScene *)this->_padding_,param_8), !bVar8))
     || ((param_9.ShadingModelField & 1) != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  bVar20 = this->bOITBasePass;
  bVar1 = this->bIsDebug;
  bVar2 = this->bRequiresExplicit128bitRT;
  lVar7 = this->_padding_;
  FVar3 = *param_10;
  local_88.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar15 = (FVertexFactoryType *)(**(code **)(pFVar4->_padding_ + 0x30))();
  bVar8 = GetBasePassShaders<FSelfShadowedVolumetricLightmapPolicy>
                    (param_6,pFVar15,FVar3,(Type)lVar7,bVar8,bVar2,bVar1,GBL_Default,
                     &local_88.VertexShader,&local_88.PixelShader,bVar20);
  if (!bVar8) {
    return bVar8;
  }
  local_c8.BlendState = (this->PassDrawRenderState).BlendState;
  local_c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
  lVar7 = this->_padding_;
  bVar20 = false;
  local_c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
  local_c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
  local_c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
  local_c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
  local_c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
  local_c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
  local_c8.StencilRef = (this->PassDrawRenderState).StencilRef;
  local_c8._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
  bVar8 = false;
  if (((lVar7 != 0) && (bVar8 = bVar20, -1 < param_3)) &&
     ((param_1->bDitheredLODTransition != 0 && (*(char *)(lVar7 + 0x26c9) != '\0')))) {
    if ((*(int *)(lVar7 + 0x1d58) <= param_3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar21 = 1 << ((byte)param_3 & 0x1f);
    lVar16 = *(longlong *)(lVar7 + 0x1d50);
    if (*(longlong *)(lVar7 + 0x1d50) == 0) {
      lVar16 = lVar7 + 0x1d40;
    }
    if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0) {
      if ((*(int *)(lVar7 + 0x1d78) <= param_3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar16 = *(longlong *)(lVar7 + 0x1d70);
      if (*(longlong *)(lVar7 + 0x1d70) == 0) {
        lVar16 = lVar7 + 0x1d60;
      }
      bVar8 = false;
      if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0)
      goto LAB_144723bad;
    }
    bVar8 = true;
  }
LAB_144723bad:
  SetDepthStencilStateForBasePass
            (&local_c8,(Type)this->_padding_,param_1->bDitheredLODTransition,param_6,
             this->bEnableReceiveDecalOutput,bVar8);
  if (this->bEnableReceiveDecalOutput == false) goto LAB_144723d9a;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedVolumetricLightmapPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l18::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedVolumetricLightmapPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l18::_thread_safe_static_guard_0__),
     `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedVolumetricLightmapPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
     ::__l18::_thread_safe_static_guard_0__ == -1)) {
    bVar8 = Substrate::IsSubstrateEnabled();
    if ((bVar8) &&
       (bVar8 = Substrate::IsDBufferPassEnabled
                          (GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_]), bVar8))
    {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedVolumetricLightmapPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = true;
    }
    else {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedVolumetricLightmapPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = false;
    }
    _Init_thread_footer(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedVolumetricLightmapPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                         ::__l18::_thread_safe_static_guard_0__);
  }
  bVar11 = 0;
  if (param_4 != (FPrimitiveSceneProxy *)0x0) {
    bVar8 = IsRayTracingEnabled();
    if (bVar8) {
      cVar10 = (**(code **)(param_4->_padding_ + 0x68))();
      if ((cVar10 != '\0') && (param_4->bVisibleInRayTracing != '\0')) {
        bVar11 = 1;
      }
    }
    else {
      bVar11 = (**(code **)(param_4->_padding_ + 0x198))();
    }
  }
  if (`private:_bool___cdecl_FBasePassMeshProcessor::Process<FSelfShadowedVolumetricLightmapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FSelfShadowedVolumetricLightmapPolicy_const&___ptr64___restrict,FSelfShadowLightCacheElementData_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled == false) {
    if (param_4 == (FPrimitiveSceneProxy *)0x0) {
      local_c8.StencilRef = (uint)(byte)((bVar11 & 1) << 2);
    }
    else {
      local_c8.StencilRef =
           (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4
                       | ((param_4->field_0x78 & 0xf8) << 2 | bVar11 & 1) << 2);
    }
    goto LAB_144723d9a;
  }
  bVar12 = FMaterial::MaterialGetSubstrateMaterialType_RenderThread(param_6);
  uVar21 = (**(code **)(param_6->_padding_ + 0x3b0))(param_6);
  if (bVar12 < 2) {
    bVar8 = true;
    if ((uVar21 < 8) && ((0xd2U >> (uVar21 & 0x1f) & 1) != 0)) {
      bVar12 = 0x80;
      if (uVar21 != 1) goto LAB_144723d13;
    }
    else {
      bVar12 = 0;
LAB_144723d13:
      bVar20 = true;
      if (2 < uVar21 - 2) goto LAB_144723c95;
    }
    bVar19 = 8;
  }
  else {
    bVar12 = 0;
    bVar20 = false;
LAB_144723c95:
    bVar8 = bVar20;
    bVar19 = 0;
  }
  if (((!bVar8) || (6 < uVar21)) || (bVar13 = 2, (0x6aU >> (uVar21 & 0x1f) & 1) == 0)) {
    bVar13 = 0;
  }
  bVar19 = -(bVar11 != 0) & 4U | bVar12 | bVar13 | bVar19;
  if (param_4 == (FPrimitiveSceneProxy *)0x0) {
    local_c8.StencilRef = (uint)bVar19;
  }
  else {
    local_c8.StencilRef =
         (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4 |
                     bVar19);
  }
LAB_144723d9a:
  if (this->bTranslucentBasePass != false) {
    SetTranslucentRenderState
              (&local_c8,param_6,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
               this->TranslucencyPassType);
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8.LightMapPolicyElementData.LCI = param_11->LCI;
  local_e8.LightMapPolicyElementData.SelfShadowTranslucencyUniformBuffer =
       param_11->SelfShadowTranslucencyUniformBuffer;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_e8,(FSceneView *)this->_padding_,param_4,
             param_1,param_3,true);
  if (this->bTranslucentBasePass == false) {
    if (local_88.VertexShader.ShaderContent ==
        (TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (uint)(local_88.VertexShader.ShaderContent)->_padding_;
    }
    if (local_88.PixelShader.ShaderContent ==
        (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint)(local_88.PixelShader.ShaderContent)->_padding_;
    }
    uVar17 = (ulonglong)uVar22 << 0x10 |
             ((ulonglong)param_10 & 0xffffffffffff0000 | (ulonglong)uVar21) & 0x100000000ffff;
    uVar18 = (ulonglong)param_7 << 0x31 ^ 0x2000000000000;
    if (this->EarlyZPassMode == DDM_None) {
      uVar18 = (ulonglong)param_7 << 0x31;
    }
  }
  else {
    sVar14 = 0;
    fVar23 = 0.0;
    if (param_4 != (FPrimitiveSceneProxy *)0x0) {
      pFVar5 = param_4->PrimitiveSceneInfo->Proxy;
      sVar14 = pFVar5->TranslucencySortPriority + -0x8000;
      fVar23 = pFVar5->TranslucencySortDistanceOffset;
    }
    uVar17 = (ulonglong)CONCAT24(sVar14,fVar23) << 0x10;
    uVar18 = (ulonglong)param_1->MeshIdInPrimitive;
  }
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FSelfShadowedVolumetricLightmapPolicy>_>
            ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,&local_c8,&local_88,
             param_12,param_13,(FMeshDrawCommandSortKey)(uVar17 | uVar18),Default,&local_e8);
  return true;
}

// Process<FUniformLightMapPolicy> @ 144723fd0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FBasePassMeshProcessor::Process<FUniformLightMapPolicy>
          (FBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          bool param_7,bool param_8,FMaterialShadingModelField param_9,
          FUniformLightMapPolicy *param_10,FLightCacheInterface **param_11,
          ERasterizerFillMode param_12,ERasterizerCullMode param_13)

{
  bool bVar1;
  bool bVar2;
  FUniformLightMapPolicy FVar3;
  FVertexFactory *pFVar4;
  FPrimitiveSceneProxy *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  FVertexFactoryType *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_e8;
  FMeshPassProcessorRenderState local_c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar4 = param_1->VertexFactory;
  if ((((FScene *)this->_padding_ == (FScene *)0x0) ||
      (bVar8 = FScene::ShouldRenderSkylightInBasePass((FScene *)this->_padding_,param_8), !bVar8))
     || ((param_9.ShadingModelField & 1) != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  bVar20 = this->bOITBasePass;
  bVar1 = this->bIsDebug;
  bVar2 = this->bRequiresExplicit128bitRT;
  lVar7 = this->_padding_;
  FVar3 = (FUniformLightMapPolicy)param_10->IndirectPolicy;
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
  pFVar15 = (FVertexFactoryType *)(**(code **)(pFVar4->_padding_ + 0x30))();
  bVar8 = GetBasePassShaders<FUniformLightMapPolicy>
                    (param_6,pFVar15,FVar3,(Type)lVar7,bVar8,bVar2,bVar1,GBL_Default,
                     &local_88.VertexShader,&local_88.PixelShader,bVar20);
  if (!bVar8) {
    return bVar8;
  }
  local_c8.BlendState = (this->PassDrawRenderState).BlendState;
  local_c8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
  lVar7 = this->_padding_;
  bVar20 = false;
  local_c8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
  local_c8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
  local_c8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
  local_c8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
  local_c8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
  local_c8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
  local_c8.StencilRef = (this->PassDrawRenderState).StencilRef;
  local_c8._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
  bVar8 = false;
  if (((lVar7 != 0) && (bVar8 = bVar20, -1 < param_3)) &&
     ((param_1->bDitheredLODTransition != 0 && (*(char *)(lVar7 + 0x26c9) != '\0')))) {
    if ((*(int *)(lVar7 + 0x1d58) <= param_3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar21 = 1 << ((byte)param_3 & 0x1f);
    lVar16 = *(longlong *)(lVar7 + 0x1d50);
    if (*(longlong *)(lVar7 + 0x1d50) == 0) {
      lVar16 = lVar7 + 0x1d40;
    }
    if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0) {
      if ((*(int *)(lVar7 + 0x1d78) <= param_3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar16 = *(longlong *)(lVar7 + 0x1d70);
      if (*(longlong *)(lVar7 + 0x1d70) == 0) {
        lVar16 = lVar7 + 0x1d60;
      }
      bVar8 = false;
      if ((*(uint *)(lVar16 + (ulonglong)((uint)param_3 >> 5) * 4) & uVar21) == 0)
      goto LAB_14472420b;
    }
    bVar8 = true;
  }
LAB_14472420b:
  SetDepthStencilStateForBasePass
            (&local_c8,(Type)this->_padding_,param_1->bDitheredLODTransition,param_6,
             this->bEnableReceiveDecalOutput,bVar8);
  if (this->bEnableReceiveDecalOutput == false) goto LAB_1447243f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_bool___cdecl_FBasePassMeshProcessor::Process<FUniformLightMapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FUniformLightMapPolicy_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l18::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FUniformLightMapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FUniformLightMapPolicy_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l18::_thread_safe_static_guard_0__),
     `private:_bool___cdecl_FBasePassMeshProcessor::Process<FUniformLightMapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FUniformLightMapPolicy_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
     ::__l18::_thread_safe_static_guard_0__ == -1)) {
    bVar8 = Substrate::IsSubstrateEnabled();
    if ((bVar8) &&
       (bVar8 = Substrate::IsDBufferPassEnabled
                          (GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_]), bVar8))
    {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FUniformLightMapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FUniformLightMapPolicy_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = true;
    }
    else {
      `private:_bool___cdecl_FBasePassMeshProcessor::Process<FUniformLightMapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FUniformLightMapPolicy_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled = false;
    }
    _Init_thread_footer(&`private:_bool___cdecl_FBasePassMeshProcessor::Process<FUniformLightMapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FUniformLightMapPolicy_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                         ::__l18::_thread_safe_static_guard_0__);
  }
  bVar11 = 0;
  if (param_4 != (FPrimitiveSceneProxy *)0x0) {
    bVar8 = IsRayTracingEnabled();
    if (bVar8) {
      cVar10 = (**(code **)(param_4->_padding_ + 0x68))();
      if ((cVar10 != '\0') && (param_4->bVisibleInRayTracing != '\0')) {
        bVar11 = 1;
      }
    }
    else {
      bVar11 = (**(code **)(param_4->_padding_ + 0x198))();
    }
  }
  if (`private:_bool___cdecl_FBasePassMeshProcessor::Process<FUniformLightMapPolicy>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,int,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,bool,bool,FMaterialShadingModelField,FUniformLightMapPolicy_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l18::bSubstrateDufferPassEnabled == false) {
    if (param_4 == (FPrimitiveSceneProxy *)0x0) {
      local_c8.StencilRef = (uint)(byte)((bVar11 & 1) << 2);
    }
    else {
      local_c8.StencilRef =
           (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4
                       | ((param_4->field_0x78 & 0xf8) << 2 | bVar11 & 1) << 2);
    }
    goto LAB_1447243f8;
  }
  bVar12 = FMaterial::MaterialGetSubstrateMaterialType_RenderThread(param_6);
  uVar21 = (**(code **)(param_6->_padding_ + 0x3b0))(param_6);
  if (bVar12 < 2) {
    bVar8 = true;
    if ((uVar21 < 8) && ((0xd2U >> (uVar21 & 0x1f) & 1) != 0)) {
      bVar12 = 0x80;
      if (uVar21 != 1) goto LAB_144724371;
    }
    else {
      bVar12 = 0;
LAB_144724371:
      bVar20 = true;
      if (2 < uVar21 - 2) goto LAB_1447242f3;
    }
    bVar19 = 8;
  }
  else {
    bVar12 = 0;
    bVar20 = false;
LAB_1447242f3:
    bVar8 = bVar20;
    bVar19 = 0;
  }
  if (((!bVar8) || (6 < uVar21)) || (bVar13 = 2, (0x6aU >> (uVar21 & 0x1f) & 1) == 0)) {
    bVar13 = 0;
  }
  bVar19 = -(bVar11 != 0) & 4U | bVar12 | bVar13 | bVar19;
  if (param_4 == (FPrimitiveSceneProxy *)0x0) {
    local_c8.StencilRef = (uint)bVar19;
  }
  else {
    local_c8.StencilRef =
         (uint)(byte)((~param_4->LightingChannelMask & 1 | param_4->LightingChannelMask & 6) << 4 |
                     bVar19);
  }
LAB_1447243f8:
  if (this->bTranslucentBasePass != false) {
    SetTranslucentRenderState
              (&local_c8,param_6,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_],
               this->TranslucencyPassType);
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8.LightMapPolicyElementData = *param_11;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_e8,(FSceneView *)this->_padding_,param_4,
             param_1,param_3,true);
  if (this->bTranslucentBasePass == false) {
    if (local_88.VertexShader.ShaderContent ==
        (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(uint *)&(local_88.VertexShader.ShaderContent)->field_0xd8;
    }
    if (local_88.PixelShader.ShaderContent ==
        (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(uint *)&(local_88.PixelShader.ShaderContent)->field_0xd8;
    }
    uVar17 = (ulonglong)uVar22 << 0x10 |
             ((ulonglong)param_10 & 0xffffffffffff0000 | (ulonglong)uVar21) & 0x100000000ffff;
    uVar18 = (ulonglong)param_7 << 0x31 ^ 0x2000000000000;
    if (this->EarlyZPassMode == DDM_None) {
      uVar18 = (ulonglong)param_7 << 0x31;
    }
  }
  else {
    sVar14 = 0;
    fVar23 = 0.0;
    if (param_4 != (FPrimitiveSceneProxy *)0x0) {
      pFVar5 = param_4->PrimitiveSceneInfo->Proxy;
      sVar14 = pFVar5->TranslucencySortPriority + -0x8000;
      fVar23 = pFVar5->TranslucencySortDistanceOffset;
    }
    uVar17 = (ulonglong)CONCAT24(sVar14,fVar23) << 0x10;
    uVar18 = (ulonglong)param_1->MeshIdInPrimitive;
  }
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
            ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,&local_c8,&local_88,
             param_12,param_13,(FMeshDrawCommandSortKey)(uVar17 | uVar18),Default,&local_e8);
  return true;
}

// FBasePassMeshProcessor @ 14472d870

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

FBasePassMeshProcessor * __thiscall
FBasePassMeshProcessor::FBasePassMeshProcessor
          (FBasePassMeshProcessor *this,Type param_1,FScene *param_2,Type param_3,
          FSceneView *param_4,FMeshPassProcessorRenderState *param_5,
          FMeshPassDrawListContext *param_6,EFlags param_7,Type param_8)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  EDepthDrawingMode EVar5;
  EShaderPlatform EVar6;
  bool bVar7;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_6);
  this->_padding_ = (longlong)&___7FBasePassMeshProcessor__6B_;
  pFVar1 = param_5->DepthStencilState;
  (this->PassDrawRenderState).BlendState = param_5->BlendState;
  (this->PassDrawRenderState).DepthStencilState = pFVar1;
  uVar3 = *(undefined4 *)&param_5->field_0x14;
  pFVar2 = param_5->ViewUniformBuffer;
  (this->PassDrawRenderState).DepthStencilAccess = param_5->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x14 = uVar3;
  (this->PassDrawRenderState).ViewUniformBuffer = pFVar2;
  pFVar2 = param_5->PassUniformBuffer;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = param_5->InstancedViewUniformBuffer;
  (this->PassDrawRenderState).PassUniformBuffer = pFVar2;
  uVar4 = param_5->StencilRef;
  uVar3 = *(undefined4 *)&param_5->field_0x3c;
  (this->PassDrawRenderState).NaniteUniformBuffer = param_5->NaniteUniformBuffer;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  if (param_2 == (FScene *)0x0) {
    bVar7 = false;
  }
  else {
    bVar7 = param_2->PersistentViewStateDebugFlags != 0;
  }
  this->bIsDebug = bVar7;
  this->TranslucencyPassType = param_8;
  this->bTranslucentBasePass = param_8 != TPT_MAX;
  if (param_8 != TPT_MAX) {
    if (param_3 == Num) {
      EVar6 = SP_NumPlatforms;
    }
    else {
      EVar6 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3];
    }
    bVar7 = OIT::IsSortedPixelsEnabled(EVar6);
    if (bVar7) {
      bVar7 = true;
      goto LAB_14472d932;
    }
  }
  bVar7 = false;
LAB_14472d932:
  this->bOITBasePass = bVar7;
  this->bEnableReceiveDecalOutput = (bool)((byte)param_7 & 1);
  if (param_2 == (FScene *)0x0) {
    EVar5 = DDM_None;
  }
  else {
    EVar5 = param_2->EarlyZPassMode;
  }
  this->EarlyZPassMode = EVar5;
  this->bRequiresExplicit128bitRT = (bool)((byte)(param_7 >> 1) & 1);
  this->AutoBeforeDOFTranslucencyBoundary = 0.0;
  if ((((param_8 != TPT_MAX) && (param_4 != (FSceneView *)0x0)) &&
      (*(char *)(this->_padding_ + 0x11d9) != '\0')) &&
     (((param_8 & ~TPT_TranslucencyAfterDOFModulate) == TPT_TranslucencyStandard &&
      (param_8 != TPT_TranslucencyStandardModulate)))) {
    this->AutoBeforeDOFTranslucencyBoundary = *(float *)(this->_padding_ + 0x24bc);
  }
  return this;
}

// AddMeshBatch @ 14473e190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FBasePassMeshProcessor::AddMeshBatch
          (FBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar2;
  FMaterialRenderProxy *pFVar3;
  
  if (param_1->bUseForMaterial != 0) {
    pFVar3 = param_1->MaterialRenderProxy;
    while ((pFVar3 != (FMaterialRenderProxy *)0x0 &&
           (((this_00 = (FMaterial *)
                        (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,(int)this->_padding_),
             this_00 == (FMaterial *)0x0 ||
             (pFVar2 = FMaterial::GetRenderingThreadShaderMap(this_00),
             pFVar2 == (FMaterialShaderMap *)0x0)) ||
            (bVar1 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar3,this_00), !bVar1)))
           )) {
      pFVar3 = (FMaterialRenderProxy *)
               (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,(int)this->_padding_);
    }
  }
  return;
}

// CollectPSOInitializers @ 144741ae0

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

void __thiscall
FBasePassMeshProcessor::CollectPSOInitializers
          (FBasePassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ERasterizerFillMode EVar5;
  ERasterizerCullMode EVar6;
  ushort *puVar7;
  longlong lVar8;
  undefined1 local_38 [8];
  FMeshDrawingPolicyOverrideSettings local_30;
  
  bVar2 = ShouldDraw(this,param_2);
  if ((((!bVar2) || (iVar4 = (**(code **)(param_2->_padding_ + 0x40))(param_2), iVar4 == 3)) ||
      (cVar3 = (**(code **)(param_2->_padding_ + 0x368))(param_2), cVar3 != '\0')) ||
     (puVar7 = (ushort *)(**(code **)(param_2->_padding_ + 0x280))(param_2,local_38),
     (*puVar7 & 0x400) != 0)) {
    if ((*(byte *)&param_4->field0_0x0 & 0x80) == 0) {
      return;
    }
    if ((char)this->_padding_ != '\x02') {
      return;
    }
  }
  pTVar1 = CVarPSOPrecacheTranslucencyAllPass.Ref;
  if ((*(uint *)&param_4->field0_0x0 & 0x400) == 0) {
    return;
  }
  if ((char)this->_padding_ == '\x14') {
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar8 = 0;
    }
    else {
      lVar8 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar8) == 0) {
      return;
    }
  }
  local_30 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
  EVar5 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_30);
  EVar6 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_30);
  if (((((ulonglong)(*(uint *)&param_4->field0_0x0 & 0x1e00000) - 0x200000 & 0xffffffffffdfffff) ==
        0) || (cVar3 = (**(code **)(param_2->_padding_ + 0x58))(param_2), cVar3 == '\0')) ||
     ((*(uint *)&param_4->field0_0x0 >> 0x14 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  CollectPSOInitializersForSkyLight
            (this,param_1,param_3,param_4,param_2,true,bVar2,EVar5,EVar6,
             *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,param_5);
  CollectPSOInitializersForSkyLight
            (this,param_1,param_3,param_4,param_2,false,bVar2,EVar5,EVar6,
             *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,param_5);
  return;
}

// CollectPSOInitializersForSkyLight @ 144742140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */

void __thiscall
FBasePassMeshProcessor::CollectPSOInitializersForSkyLight
          (FBasePassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FPSOPrecacheParams *param_3,FMaterial *param_4,
          bool param_5,bool param_6,ERasterizerFillMode param_7,ERasterizerCullMode param_8,
          EPrimitiveType param_9,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_10)

{
  bool bVar1;
  FSelfShadowedVolumetricLightmapPolicy *pFVar2;
  FSelfShadowedTranslucencyPolicy *pFVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  FSceneTexturesConfig *pFVar8;
  ForElementType<ELightMapPolicyType> FVar9;
  ulonglong uVar10;
  undefined1 auStackY_118 [32];
  FSelfShadowedVolumetricLightmapPolicy local_a8 [4];
  FMaterialShadingModelField local_a4 [2];
  byte local_a0;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_98;
  FPSOPrecacheParams *local_90;
  FPSOPrecacheVertexFactoryData *local_88;
  ForElementType<ELightMapPolicyType> local_80;
  FUniformLightMapPolicy local_78;
  uint local_74;
  FSceneTexturesConfig *local_70;
  TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_98 = param_10;
  local_90 = param_3;
  local_88 = param_2;
  local_70 = param_1;
  (**(code **)(param_4->_padding_ + 0x280))(param_4,local_a4);
  local_a8[0] = (FSelfShadowedVolumetricLightmapPolicy)IsTranslucentBlendMode(param_4);
  pTVar7 = (TConsoleVariableData<int> *)0x0;
  local_a0 = (byte)local_a4[0].ShadingModelField & 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)
             (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.PSOPrecache.LightMapPolicyMode",1);
    pTVar6 = pTVar7;
    if (plVar5 != (longlong *)0x0) {
      pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
    }
    CVarSupportLightMapPolicyMode = pTVar6;
    _Init_thread_footer(&::_TSS0);
  }
  local_80 = (ForElementType<ELightMapPolicyType>)CVarSupportLightMapPolicyMode;
  if (CVarSupportLightMapPolicyMode != (TConsoleVariableData<int> *)0x0) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar7 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar7->ShadowedValue + (longlong)(int *)local_80) == 1)
    goto LAB_1447423a9;
  }
  if ((local_a0 == 0) && (local_a8[0] != (FSelfShadowedVolumetricLightmapPolicy)0x0)) {
    pFVar8 = local_70;
    if (FReadOnlyCVARCache::bAllowStaticLighting != false) {
      pFVar2 = FSelfShadowedVolumetricLightmapPolicy::FSelfShadowedVolumetricLightmapPolicy
                         (local_a8);
      pFVar8 = local_70;
      CollectPSOInitializersForLMPolicy<FSelfShadowedVolumetricLightmapPolicy>
                (this,local_70,local_88,local_90,param_4,local_a4[0],param_5,param_6,pFVar2,param_7,
                 param_8,param_9,local_98);
    }
    bVar1 = IsIndirectLightingCacheAllowed((Type)this->_padding_);
    if (bVar1) {
      FSelfShadowedTranslucencyPolicy::FSelfShadowedTranslucencyPolicy
                ((FSelfShadowedTranslucencyPolicy *)local_a8);
      CollectPSOInitializersForLMPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>
                (this,pFVar8,local_88,local_90,param_4,local_a4[0],param_5,param_6,
                 (FSelfShadowedCachedPointIndirectLightingPolicy *)local_a8,param_7,param_8,param_9,
                 local_98);
    }
    pFVar3 = FSelfShadowedTranslucencyPolicy::FSelfShadowedTranslucencyPolicy
                       ((FSelfShadowedTranslucencyPolicy *)local_a8);
    CollectPSOInitializersForLMPolicy<FSelfShadowedTranslucencyPolicy>
              (this,pFVar8,local_88,local_90,param_4,local_a4[0],param_5,param_6,pFVar3,param_7,
               param_8,param_9,local_98);
  }
LAB_1447423a9:
  GetUniformLightMapPolicyTypeForPSOCollection(&local_68,(Type)this->_padding_,param_4);
  local_74 = local_68.ArrayNum;
  uVar10 = (ulonglong)(int)local_74;
  FVar9 = (ForElementType<ELightMapPolicyType>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<ELightMapPolicyType>)0x0) {
    FVar9 = local_68.AllocatorInstance.SecondaryData;
  }
  local_80 = (ForElementType<ELightMapPolicyType>)((longlong)FVar9 + uVar10 * 4);
  while( true ) {
    if (local_68.ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<enum_ELightMapPolicyType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a8);
    }
    if (FVar9 == local_80) break;
    local_78.IndirectPolicy = *(ELightMapPolicyType *)FVar9;
    CollectPSOInitializersForLMPolicy<FUniformLightMapPolicy>
              (this,local_70,local_88,local_90,param_4,local_a4[0],param_5,param_6,&local_78,param_7
               ,param_8,param_9,local_98);
    FVar9 = (ForElementType<ELightMapPolicyType>)((longlong)FVar9 + 4);
    uVar10 = (ulonglong)local_74;
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<ELightMapPolicyType>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetUniformLightMapPolicyType @ 144778790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ELightMapPolicyType __cdecl
FBasePassMeshProcessor::GetUniformLightMapPolicyType
          (Type param_1,FScene *param_2,FLightCacheInterface *param_3,FPrimitiveSceneProxy *param_4,
          FMaterial *param_5)

{
  uchar uVar1;
  FIndirectLightingCacheAllocation *pFVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ELightMapPolicyType EVar6;
  TVector4<float>_u_0 *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  FShadowMapInteraction *pFVar9;
  IConsoleManager *pIVar10;
  longlong *plVar11;
  TConsoleVariableData<int> *pTVar12;
  byte bVar13;
  undefined1 auStack_3d8 [32];
  char local_3b8;
  char local_3b7;
  char local_3b6;
  char local_3b5;
  byte local_3b4 [108];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  ULightMapTexture2D *local_308;
  ULightMapTexture2D *pUStack_300;
  ULightMapTexture2D *local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  ULightMapTexture2D *local_2a8;
  undefined8 uStack_2a0;
  ULightMapVirtualTexture2D *local_298;
  undefined8 uStack_290;
  double local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 uStack_270;
  FShadowMapInteraction local_268;
  TVector4<float>_u_0 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  local_3b5 = IsTranslucentBlendMode(param_5);
  (**(code **)(param_5->_padding_ + 0x280))(param_5,local_3b4);
  local_3b6 = FReadOnlyCVARCache::bAllowStaticLighting;
  bVar13 = local_3b4[0] & 1;
  EVar6 = LMP_NO_LIGHTMAP;
  if (((FReadOnlyCVARCache::bAllowStaticLighting == false) ||
      (param_3 == (FLightCacheInterface *)0x0)) || (bVar13 != 0)) {
    pTVar7 = &local_208;
    local_208._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_208._8_8_ = _UNK_150689648;
    local_1f8 = ___xmm_3f800000000000000000000000000000;
    uStack_1f0 = _UNK_150689648;
    local_1e8 = ___xmm_3f800000000000000000000000000000;
    uStack_1e0 = _UNK_150689648;
    local_1d8 = ___xmm_3f800000000000000000000000000000;
    uStack_1d0 = _UNK_150689648;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1a8 = ___xmm_3f800000000000000000000000000000;
    uStack_1a0 = _UNK_150689648;
    local_198 = ___xmm_3f800000000000000000000000000000;
    uStack_190 = _UNK_150689648;
    local_188 = ___xmm_3f800000000000000000000000000000;
    uStack_180 = _UNK_150689648;
    local_178 = ___xmm_3f800000000000000000000000000000;
    uStack_170 = _UNK_150689648;
    local_1b8 = 0;
    local_168 = 0;
    local_158 = 0;
    local_150 = 0;
  }
  else {
    pTVar7 = (TVector4<float>_u_0 *)
             FLightCacheInterface::GetLightMapInteraction(param_3,&local_128,param_1);
  }
  local_348 = *(undefined8 *)&((TVector4<float> *)&(pTVar7->_s_0).X)->field0_0x0;
  uStack_340._0_4_ = *(float *)((longlong)pTVar7 + 8);
  uStack_340._4_4_ = *(float *)((longlong)pTVar7 + 0xc);
  local_338 = *(undefined8 *)&(&pTVar7->_s_0)[1].X;
  uStack_330._0_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar7 + 1))->Z;
  uStack_330._4_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar7 + 1))->W;
  local_328 = *(undefined8 *)&((TVector4<float> *)(pTVar7->XYZW + 8))->field0_0x0;
  uStack_320 = *(undefined8 *)(pTVar7->XYZW + 10);
  local_318 = *(undefined8 *)&((TVector4<float> *)(pTVar7->XYZW + 0xc))->field0_0x0;
  uStack_310 = *(undefined8 *)(pTVar7->XYZW + 0xe);
  local_308 = *(ULightMapTexture2D **)(pTVar7->XYZW + 0x10);
  pUStack_300 = *(ULightMapTexture2D **)(pTVar7->XYZW + 0x12);
  local_2f8 = *(ULightMapTexture2D **)(pTVar7->XYZW + 0x14);
  lStack_2f0 = *(longlong *)(pTVar7->XYZW + 0x16);
  local_2e8 = *(undefined8 *)&((TVector4<float> *)(pTVar7->XYZW + 0x18))->field0_0x0;
  uStack_2e0 = *(undefined8 *)(pTVar7->XYZW + 0x1a);
  local_2c8 = *(undefined8 *)&((TVector4<float> *)(pTVar7->XYZW + 0x20))->field0_0x0;
  uStack_2c0 = *(undefined8 *)(pTVar7->XYZW + 0x22);
  local_2d8 = *(undefined8 *)&((TVector4<float> *)(pTVar7->XYZW + 0x1c))->field0_0x0;
  uStack_2d0 = *(undefined8 *)(pTVar7->XYZW + 0x1e);
  local_2b8 = *(undefined8 *)&((TVector4<float> *)(pTVar7->XYZW + 0x24))->field0_0x0;
  uStack_2b0 = *(undefined8 *)(pTVar7->XYZW + 0x26);
  local_2a8 = *(ULightMapTexture2D **)(pTVar7->XYZW + 0x28);
  uStack_2a0 = *(undefined8 *)(pTVar7->XYZW + 0x2a);
  local_298 = *(ULightMapVirtualTexture2D **)(pTVar7->XYZW + 0x2c);
  uStack_290 = *(undefined8 *)(pTVar7->XYZW + 0x2e);
  local_288 = (((TVector2<double> *)(pTVar7->XYZW + 0x30))->field0_0x0)._s_0.X;
  uStack_280 = *(undefined8 *)(pTVar7->XYZW + 0x32);
  local_278 = (((TVector2<double> *)(pTVar7->XYZW + 0x34))->field0_0x0)._s_0.X;
  uStack_270 = *(undefined8 *)(pTVar7->XYZW + 0x36);
  bVar4 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)param_1);
  if (bVar4) {
    local_3b7 = '\x01';
    if ((char)uStack_2a0 == '\0') goto LAB_14477892f;
  }
  else {
LAB_14477892f:
    local_3b7 = '\0';
  }
  if (param_2 == (FScene *)0x0) {
LAB_14477894e:
    local_3b8 = '\0';
  }
  else {
    bVar4 = FVolumetricLightmapSceneData::HasData(&param_2->VolumetricLightmapSceneData);
    local_3b8 = '\x01';
    if (!bVar4) goto LAB_14477894e;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar10 = IConsoleManager::Get();
    plVar11 = (longlong *)
              (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.SupportLowQualityLightmaps",1);
    pTVar12 = (TConsoleVariableData<int> *)0x0;
    if (plVar11 != (longlong *)0x0) {
      pTVar12 = (TConsoleVariableData<int> *)(**(code **)(*plVar11 + 0x68))(plVar11);
    }
    CVarSupportLowQualityLightmap = pTVar12;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar12 = CVarSupportLowQualityLightmap;
  if (CVarSupportLowQualityLightmap != (TConsoleVariableData<int> *)0x0) {
    bVar4 = IsInParallelGameThread();
    if (bVar4) {
LAB_14477899d:
      pTVar8 = (TConsoleVariableData<int> *)0x0;
    }
    else {
      bVar4 = IsInGameThread();
      pTVar8 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar4) goto LAB_14477899d;
    }
    if (*(int *)((longlong)pTVar12->ShadowedValue + (longlong)pTVar8->ShadowedValue) == 0) {
      bVar3 = 0;
      goto LAB_1447789ac;
    }
  }
  bVar3 = 1;
LAB_1447789ac:
  if ((int)uStack_290 == 2) {
    if (local_3b7 == '\0') {
      EVar6 = -(uint)bVar3 & LMP_LQ_LIGHTMAP;
    }
    else if (((local_3b6 == '\0') || (param_3 == (FLightCacheInterface *)0x0)) || (bVar13 != 0)) {
      EVar6 = LMP_HQ_LIGHTMAP;
    }
    else {
      pFVar9 = FLightCacheInterface::GetShadowMapInteraction(param_3,&local_268,param_1);
      EVar6 = ((int)*(undefined8 *)&pFVar9->Type == 2) + LMP_HQ_LIGHTMAP;
    }
  }
  else if (bVar13 == 0) {
    if ((((local_3b6 == '\0') || (local_3b8 == '\0')) || (param_4 == (FPrimitiveSceneProxy *)0x0))
       || (((uVar1 = (param_4->Mobility).Value, uVar1 != '\x02' && (uVar1 != '\x01')) &&
           ((param_4->bNeedsUnbuiltPreviewLighting == '\0' &&
            (param_4->LightmapType != ForceVolumetric)))))) {
      bVar4 = IsIndirectLightingCacheAllowed(param_1);
      if (((bVar4) && (param_2 != (FScene *)0x0)) &&
         ((0 < (param_2->PrecomputedLightVolumes).ArrayNum &&
          (param_4 != (FPrimitiveSceneProxy *)0x0)))) {
        pFVar2 = param_4->PrimitiveSceneInfo->IndirectLightingCacheAllocation;
        uVar1 = (param_4->Mobility).Value;
        if ((uVar1 == '\x02') || (uVar1 == '\x01')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((param_4->IndirectLightingCacheQuality).Value != '\0') &&
           (((((pFVar2 != (FIndirectLightingCacheAllocation *)0x0 &&
               (-1 < (pFVar2->MinTexel).field0_0x0._s_0.X)) &&
              (-1 < (pFVar2->MinTexel).field0_0x0._s_0.Y)) &&
             ((-1 < (pFVar2->MinTexel).field0_0x0._s_0.Z && (0 < pFVar2->AllocationTexelSize)))) ||
            (bVar4)))) {
          bVar5 = CanIndirectLightingCacheUseVolumeTexture(param_1);
          if (((bVar5) && (local_3b5 == '\0')) &&
             (((pFVar2 != (FIndirectLightingCacheAllocation *)0x0 && (pFVar2->bPointSample == false)
               ) || ((bVar4 && ((param_4->IndirectLightingCacheQuality).Value == '\x02')))))) {
            EVar6 = LMP_CACHED_VOLUME_INDIRECT_LIGHTING;
          }
          else {
            EVar6 = LMP_CACHED_POINT_INDIRECT_LIGHTING;
          }
        }
      }
    }
    else {
      EVar6 = LMP_PRECOMPUTED_IRRADIANCE_VOLUME_INDIRECT_LIGHTING;
    }
  }
  return EVar6;
}

// GetUniformLightMapPolicyTypeForPSOCollection @ 144778bc0

TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __cdecl
FBasePassMeshProcessor::GetUniformLightMapPolicyTypeForPSOCollection
          (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,Type param_1,FMaterial *param_2)

{
  ForElementType<ELightMapPolicyType> *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar12;
  ForElementType<ELightMapPolicyType> FVar13;
  IConsoleManager *pIVar14;
  longlong *plVar15;
  TConsoleVariableData<int> *pTVar16;
  ForElementType<ELightMapPolicyType> FVar17;
  int *piVar18;
  TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_74;
  undefined4 local_5c;
  byte local_58 [24];
  
  (**(code **)(param_2->_padding_ + 0x280))(param_2,local_58);
  bVar4 = IsTranslucentBlendMode(param_2);
  bVar9 = FReadOnlyCVARCache::bAllowStaticLighting;
  bVar5 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)param_1);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar14 = IConsoleManager::Get();
    plVar15 = (longlong *)
              (**(code **)((longlong)*pIVar14 + 0xc0))(pIVar14,L"r.SupportLowQualityLightmaps");
    pTVar16 = (TConsoleVariableData<int> *)0x0;
    if (plVar15 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar15 + 0x68))(plVar15);
    }
    CVarSupportLowQualityLightmap = pTVar16;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar16 = CVarSupportLowQualityLightmap;
  if (CVarSupportLowQualityLightmap == (TConsoleVariableData<int> *)0x0) {
LAB_144778c7b:
    bVar6 = true;
  }
  else {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 4;
    }
    if (*(int *)((longlong)pTVar16->ShadowedValue + lVar11) != 0) goto LAB_144778c7b;
    bVar6 = false;
  }
  if ((*piVar18 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar14 = IConsoleManager::Get();
    plVar15 = (longlong *)
              (**(code **)((longlong)*pIVar14 + 0xc0))(pIVar14,L"r.PSOPrecache.LightMapPolicyMode");
    pTVar16 = (TConsoleVariableData<int> *)0x0;
    if (plVar15 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar15 + 0x68))(plVar15);
    }
    CVarSupportLightMapPolicyMode = pTVar16;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar16 = CVarSupportLightMapPolicyMode;
  if (CVarSupportLightMapPolicyMode != (TConsoleVariableData<int> *)0x0) {
    bVar7 = IsInParallelGameThread();
    if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 4;
    }
    if (*(int *)((longlong)pTVar16->ShadowedValue + lVar11) == 1) {
      bVar7 = true;
      goto LAB_144778cc9;
    }
  }
  bVar7 = false;
LAB_144778cc9:
  piVar18 = &__return_storage_ptr__->ArrayMax;
  pFVar1 = &(__return_storage_ptr__->AllocatorInstance).SecondaryData;
  *pFVar1 = (ForElementType<ELightMapPolicyType>)0x0;
  piVar2 = &__return_storage_ptr__->ArrayNum;
  *piVar2 = 0;
  *piVar18 = 2;
  local_74.AllocatorInstance.InlineData[0] = '\0';
  local_74.AllocatorInstance.InlineData[1] = '\0';
  local_74.AllocatorInstance.InlineData[2] = '\0';
  local_74.AllocatorInstance.InlineData[3] = '\0';
  if (((__return_storage_ptr__ <= &local_74) &&
      (&local_74 < &(__return_storage_ptr__->AllocatorInstance).SecondaryData)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar12 = (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *)(*pcVar3)();
    return pTVar12;
  }
  iVar10 = *piVar2;
  if (iVar10 == *piVar18) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
                       (0x404,&__return_storage_ptr__->AllocatorInstance,piVar18);
    *piVar2 = iVar10;
  }
  *piVar2 = iVar10 + 1;
  FVar17 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
  if (*pFVar1 != (ForElementType<ELightMapPolicyType>)0x0) {
    FVar17 = *pFVar1;
  }
  *(undefined4 *)((longlong)FVar17 + (longlong)iVar10 * 4) =
       local_74.AllocatorInstance.InlineData._0_4_;
  if (!bVar7) {
    if (bVar5) {
      if ((bVar9 != false) && ((local_58[0] & 1) == 0)) {
        FVar17 = *pFVar1;
        local_74.AllocatorInstance.InlineData[4] = '\x06';
        local_74.AllocatorInstance.InlineData[5] = '\0';
        local_74.AllocatorInstance.InlineData[6] = '\0';
        local_74.AllocatorInstance.InlineData[7] = '\0';
        FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar13 = FVar17;
        }
        if ((ulonglong)FVar13 <= (longlong)local_74.AllocatorInstance.InlineData + 4U) {
          FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
          if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
            FVar13 = FVar17;
          }
          if ((local_74.AllocatorInstance.InlineData + 4 <
               (undefined1 *)((longlong)FVar13 + (longlong)*piVar18 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar3)();
            return pTVar12;
          }
        }
        iVar10 = *piVar2;
        if (iVar10 == *piVar18) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
                             (0x404,&__return_storage_ptr__->AllocatorInstance,piVar18);
          *piVar2 = iVar10;
        }
        *piVar2 = iVar10 + 1;
        FVar17 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (*pFVar1 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar17 = *pFVar1;
        }
        *(undefined4 *)((longlong)FVar17 + (longlong)iVar10 * 4) =
             local_74.AllocatorInstance.InlineData._4_4_;
      }
      FVar17 = *pFVar1;
      local_74.AllocatorInstance.SecondaryData._0_4_ = 5;
      FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar13 = FVar17;
      }
      if ((ulonglong)FVar13 <= &local_74.AllocatorInstance.SecondaryData) {
        FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar13 = FVar17;
        }
        if ((&local_74.AllocatorInstance.SecondaryData <
             (undefined1 *)((longlong)FVar13 + (longlong)*piVar18 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar3)();
          return pTVar12;
        }
      }
      iVar10 = *piVar2;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
                           (0x404,&__return_storage_ptr__->AllocatorInstance,piVar18);
        *piVar2 = iVar10;
      }
      *piVar2 = iVar10 + 1;
      FVar17 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (*pFVar1 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar17 = *pFVar1;
      }
      *(undefined4 *)((longlong)FVar17 + (longlong)iVar10 * 4) =
           local_74.AllocatorInstance.SecondaryData._0_4_;
    }
    if (bVar6) {
      FVar17 = *pFVar1;
      local_74.AllocatorInstance.SecondaryData._4_4_ = 4;
      FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar13 = FVar17;
      }
      if ((ulonglong)FVar13 <= &local_74.AllocatorInstance.SecondaryData.field_0x4) {
        FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar13 = FVar17;
        }
        if ((&local_74.AllocatorInstance.SecondaryData.field_0x4 <
             (undefined1 *)((longlong)FVar13 + (longlong)*piVar18 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar3)();
          return pTVar12;
        }
      }
      iVar10 = *piVar2;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
                           (0x404,&__return_storage_ptr__->AllocatorInstance,piVar18);
        *piVar2 = iVar10;
      }
      *piVar2 = iVar10 + 1;
      FVar17 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (*pFVar1 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar17 = *pFVar1;
      }
      *(undefined4 *)((longlong)FVar17 + (longlong)iVar10 * 4) =
           local_74.AllocatorInstance.SecondaryData._4_4_;
    }
    if (((local_58[0] & 1) == 0) && (bVar9 != false)) {
      FVar17 = *pFVar1;
      local_74.ArrayNum = 1;
      FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar13 = FVar17;
      }
      if ((ulonglong)FVar13 <= &local_74.ArrayNum) {
        FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar13 = FVar17;
        }
        if ((&local_74.ArrayNum < (undefined1 *)((longlong)FVar13 + (longlong)*piVar18 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar3)();
          return pTVar12;
        }
      }
      iVar10 = *piVar2;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
                           (0x404,&__return_storage_ptr__->AllocatorInstance,piVar18);
        *piVar2 = iVar10;
      }
      *piVar2 = iVar10 + 1;
      FVar17 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (*pFVar1 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar17 = *pFVar1;
      }
      *(int *)((longlong)FVar17 + (longlong)iVar10 * 4) = local_74.ArrayNum;
    }
    bVar9 = IsIndirectLightingCacheAllowed(param_1);
    if (bVar9) {
      bVar9 = CanIndirectLightingCacheUseVolumeTexture(param_1);
      if ((bVar9) && (!bVar4)) {
        FVar17 = *pFVar1;
        local_74.ArrayMax = 2;
        FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar13 = FVar17;
        }
        if ((ulonglong)FVar13 <= &local_74.ArrayMax) {
          FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
          if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
            FVar13 = FVar17;
          }
          if ((&local_74.ArrayMax < (undefined1 *)((longlong)FVar13 + (longlong)*piVar18 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar3)();
            return pTVar12;
          }
        }
        iVar10 = *piVar2;
        if (iVar10 == *piVar18) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
                             (0x404,&__return_storage_ptr__->AllocatorInstance,piVar18);
          *piVar2 = iVar10;
        }
        *piVar2 = iVar10 + 1;
        FVar17 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (*pFVar1 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar17 = *pFVar1;
        }
        *(int *)((longlong)FVar17 + (longlong)iVar10 * 4) = local_74.ArrayMax;
      }
      FVar17 = *pFVar1;
      local_5c = 3;
      FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar13 = FVar17;
      }
      if ((ulonglong)FVar13 <= &local_5c) {
        FVar13 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
        if (FVar17 != (ForElementType<ELightMapPolicyType>)0x0) {
          FVar13 = FVar17;
        }
        if ((&local_5c < (undefined4 *)((longlong)FVar13 + (longlong)*piVar18 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar3)();
          return pTVar12;
        }
      }
      iVar10 = *piVar2;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
                           (0x404,&__return_storage_ptr__->AllocatorInstance,piVar18);
        *piVar2 = iVar10;
      }
      *piVar2 = iVar10 + 1;
      FVar17 = (ForElementType<ELightMapPolicyType>)__return_storage_ptr__;
      if (*pFVar1 != (ForElementType<ELightMapPolicyType>)0x0) {
        FVar17 = *pFVar1;
      }
      *(undefined4 *)((longlong)FVar17 + (longlong)iVar10 * 4) = local_5c;
    }
  }
  return __return_storage_ptr__;
}

// ShouldDraw @ 1447a7090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall FBasePassMeshProcessor::ShouldDraw(FBasePassMeshProcessor *this,FMaterial *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  EBlendMode EVar4;
  
  EVar4 = (**(code **)(param_1->_padding_ + 0x268))(param_1);
  bVar1 = IsTranslucentBlendMode(EVar4);
  uVar3 = false;
  if (this->bTranslucentBasePass == false) {
    return !bVar1;
  }
  if (!bVar1) {
    return false;
  }
  cVar2 = (**(code **)(param_1->_padding_ + 0xe0))(param_1);
  if (cVar2 != '\0') {
    return false;
  }
  switch(this->TranslucencyPassType) {
  case TPT_TranslucencyStandard:
    cVar2 = (**(code **)(param_1->_padding_ + 0x308))(param_1);
    if ((cVar2 == '\0') &&
       (cVar2 = (**(code **)(param_1->_padding_ + 0x310))(param_1), cVar2 == '\0')) {
      uVar3 = true;
    }
    if (this->AutoBeforeDOFTranslucencyBoundary <= 0.0) {
      return (bool)uVar3;
    }
    if ((((bool)uVar3 == false) &&
        ((cVar2 = (**(code **)(param_1->_padding_ + 0x308))(param_1), cVar2 == '\0' ||
         (EVar4 == BLEND_ColoredTransmittanceOnly)))) &&
       ((cVar2 = (**(code **)(param_1->_padding_ + 0x308))(param_1), cVar2 == '\0' ||
        ((cVar2 = (**(code **)(param_1->_padding_ + 0x318))(param_1), cVar2 == '\0' &&
         (bVar1 = IsModulateBlendMode(EVar4), !bVar1)))))) {
      return false;
    }
    break;
  case TPT_TranslucencyStandardModulate:
    cVar2 = (**(code **)(param_1->_padding_ + 0x308))(param_1);
    if (cVar2 != '\0') {
      return false;
    }
    cVar2 = (**(code **)(param_1->_padding_ + 0x310))(param_1);
    if (cVar2 != '\0') {
      return false;
    }
    cVar2 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
    if (cVar2 == '\0') {
      bVar1 = IsModulateBlendMode(EVar4);
      if (!bVar1) {
        return false;
      }
      return true;
    }
    break;
  case TPT_TranslucencyAfterDOF:
    cVar2 = (**(code **)(param_1->_padding_ + 0x308))(param_1);
    if (cVar2 == '\0') {
      return false;
    }
    if (EVar4 == BLEND_ColoredTransmittanceOnly) {
      return false;
    }
    return true;
  case TPT_TranslucencyAfterDOFModulate:
    cVar2 = (**(code **)(param_1->_padding_ + 0x308))(param_1);
    if (cVar2 == '\0') {
      return false;
    }
    cVar2 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
    if ((cVar2 == '\0') && (bVar1 = IsModulateBlendMode(EVar4), !bVar1)) {
      return false;
    }
    break;
  case TPT_TranslucencyAfterMotionBlur:
    uVar3 = (**(code **)(param_1->_padding_ + 0x310))(param_1);
    goto switchD_1447a710a_default;
  case TPT_TranslucencyHoldout:
  case TPT_AllTranslucency:
    break;
  default:
    goto switchD_1447a710a_default;
  }
  uVar3 = 1;
switchD_1447a710a_default:
  return (bool)uVar3;
}

// TryAddMeshBatch @ 1447b90e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FBasePassMeshProcessor::TryAddMeshBatch
          (FBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  FLightCacheInterface **ppFVar1;
  Type TVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  FMeshBatch *pFVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  EBlendMode EVar17;
  int iVar18;
  ushort *puVar19;
  TRefCountPtr<FRHIUniformBuffer> *pTVar20;
  FSelfShadowedVolumetricLightmapPolicy *pFVar21;
  FSelfShadowedTranslucencyPolicy *pFVar22;
  float fVar23;
  undefined1 auStackY_208 [32];
  FMaterialShadingModelField local_194 [2];
  char local_190;
  FSelfShadowedTranslucencyPolicy local_18f [3];
  ERasterizerCullMode local_18c;
  ERasterizerFillMode local_188;
  FSelfShadowedVolumetricLightmapPolicy local_183;
  FSelfShadowedTranslucencyPolicy local_182 [2];
  EBlendMode local_180;
  FMeshBatch *local_178;
  FMaterialRenderProxy *local_170;
  ulong64 local_168;
  undefined1 local_160 [4];
  FUniformLightMapPolicy local_15c;
  FMeshDrawingPolicyOverrideSettings local_158;
  FSelfShadowLightCacheElementData local_150;
  FMeshMaterialShaderElementData local_140;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_170 = param_5;
  local_178 = param_1;
  local_168 = param_2;
  EVar17 = (**(code **)(param_6->_padding_ + 0x268))(param_6);
  local_180 = EVar17;
  (**(code **)(param_6->_padding_ + 0x280))(param_6,local_194);
  bVar10 = IsMaskedBlendMode(EVar17);
  bVar11 = IsTranslucentBlendMode(EVar17);
  local_158 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  local_188 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_158);
  local_18c = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_158);
  if (((param_3 == (FPrimitiveSceneProxy *)0x0) || (!bVar11)) ||
     (cVar12 = (**(code **)(param_6->_padding_ + 0xe0))(param_6), cVar12 != '\0')) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((this->AutoBeforeDOFTranslucencyBoundary <= 0.0) || (!bVar13)) {
    bVar15 = ShouldDraw(this,param_6);
    if (this->TranslucencyPassType == TPT_TranslucencyHoldout) {
      bVar15 = bVar13;
    }
LAB_1447b93b6:
    if (bVar15 == false) {
      return true;
    }
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewIfDynamicMeshCommand",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.cpp"
                            ,0x86a,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    if ((this->TranslucencyPassType == TPT_MAX) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TranslucencyPassType != ETranslucencyPass::TPT_MAX",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.cpp"
                            ,0x86b,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    lVar3 = this->_padding_;
    fVar23 = (float)(((param_3->Bounds).Origin.field0_0x0._s_0.Y - *(double *)(lVar3 + 0xbd0)) *
                     *(double *)(lVar3 + 0x8e0) +
                     ((param_3->Bounds).Origin.field0_0x0._s_0.X - *(double *)(lVar3 + 0xbc8)) *
                     *(double *)(lVar3 + 0x8c0) +
                    ((param_3->Bounds).Origin.field0_0x0._s_0.Z - *(double *)(lVar3 + 0xbd8)) *
                    *(double *)(lVar3 + 0x900));
    bVar13 = fVar23 != this->AutoBeforeDOFTranslucencyBoundary;
    bVar16 = this->AutoBeforeDOFTranslucencyBoundary <= fVar23;
    cVar12 = (**(code **)(param_6->_padding_ + 0x308))(param_6);
    if ((cVar12 == '\0') &&
       (cVar12 = (**(code **)(param_6->_padding_ + 0x310))(param_6), cVar12 == '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    cVar12 = (**(code **)(param_6->_padding_ + 0x308))(param_6);
    if (((cVar12 == '\0') ||
        (cVar12 = (**(code **)(param_6->_padding_ + 0x310))(param_6), cVar12 != '\0')) ||
       (local_180 == BLEND_ColoredTransmittanceOnly)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    cVar12 = (**(code **)(param_6->_padding_ + 0x308))();
    if ((cVar12 == '\0') ||
       ((cVar12 = (**(code **)(param_6->_padding_ + 0x318))(param_6), cVar12 == '\0' &&
        (bVar15 = IsModulateBlendMode(local_180), !bVar15)))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TVar2 = this->TranslucencyPassType;
    bVar15 = false;
    if (TVar2 == TPT_TranslucencyStandard) {
      if (!bVar5) {
        if (bVar16 && bVar13) {
          if ((!bVar6) && (!bVar7)) {
            return true;
          }
          bVar15 = true;
        }
        goto LAB_1447b93b6;
      }
    }
    else if ((TVar2 == TPT_TranslucencyAfterDOF) ||
            (bVar6 = bVar7, TVar2 == TPT_TranslucencyAfterDOFModulate)) {
      if ((!bVar6) || (bVar16 && bVar13)) {
        return true;
      }
    }
    else if (TVar2 != TPT_TranslucencyHoldout) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Unimplemented function called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.cpp"
                          ,0x895,L"");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      goto LAB_1447b93b6;
    }
  }
  if ((param_3 != (FPrimitiveSceneProxy *)0x0) && (param_3->bRenderInMainPass == '\0')) {
    return true;
  }
  iVar18 = (**(code **)(param_6->_padding_ + 0x40))(param_6);
  if (iVar18 == 3) {
    return true;
  }
  cVar12 = (**(code **)(param_6->_padding_ + 0x368))(param_6);
  if (cVar12 != '\0') {
    return true;
  }
  puVar19 = (ushort *)(**(code **)(param_6->_padding_ + 0x280))(param_6,local_160);
  if ((*puVar19 & 0x400) != 0) {
    return true;
  }
  local_190 = FReadOnlyCVARCache::bAllowStaticLighting;
  uVar8 = local_194[0].ShadingModelField & 1;
  if (((FReadOnlyCVARCache::bAllowStaticLighting != false) &&
      (local_178->LCI != (FLightCacheInterface *)0x0)) &&
     ((local_194[0].ShadingModelField & 1) == 0)) {
    FLightCacheInterface::GetLightMapInteraction(local_178->LCI,&local_128,(Type)this->_padding_);
  }
  lVar3 = this->_padding_;
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x2ef8) < 1)) {
    bVar13 = false;
    if (lVar3 != 0) goto LAB_1447b946c;
  }
  else {
    bVar13 = true;
LAB_1447b946c:
    bVar15 = FVolumetricLightmapSceneData::HasData((FVolumetricLightmapSceneData *)(lVar3 + 0x3118))
    ;
    if (bVar15) {
      bVar15 = true;
      goto LAB_1447b9484;
    }
  }
  bVar15 = false;
LAB_1447b9484:
  local_140.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_140.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            (&local_140,(FSceneView *)this->_padding_,param_3,local_178,param_4,true);
  pFVar9 = local_178;
  if (((uVar8 == 0) && (bVar11)) &&
     ((param_3 != (FPrimitiveSceneProxy *)0x0 && (param_3->bCastVolumetricTranslucentShadow != 0))))
  {
    pTVar20 = TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
              ::Find((TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
                      *)(this->_padding_ + 0x1e60),param_3->PrimitiveSceneInfo->PackedIndex);
    pFVar9 = local_178;
    local_150.LCI = local_178->LCI;
    if (pTVar20 == (TRefCountPtr<FRHIUniformBuffer> *)0x0) {
      local_150.SelfShadowTranslucencyUniformBuffer =
           (FRHIUniformBuffer *)GEmptyTranslucentSelfShadowUniformBuffer._40_8_;
      if (GEmptyTranslucentSelfShadowUniformBuffer._40_8_ == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("UniformBufferRHI.GetReference()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                            ,0x65,
                            L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                           );
        if (bVar16) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_150.SelfShadowTranslucencyUniformBuffer =
             (FRHIUniformBuffer *)GEmptyTranslucentSelfShadowUniformBuffer._40_8_;
        if ((GEmptyTranslucentSelfShadowUniformBuffer._40_8_ == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("UniformBufferRHI.GetReference()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                                ,0x66,L""),
           local_150.SelfShadowTranslucencyUniformBuffer =
                (FRHIUniformBuffer *)GEmptyTranslucentSelfShadowUniformBuffer._40_8_, bVar16)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
      }
    }
    else {
      local_150.SelfShadowTranslucencyUniformBuffer = pTVar20->Reference;
    }
    if ((local_190 == '\0') || (!bVar15)) {
      bVar15 = IsIndirectLightingCacheAllowed((Type)this->_padding_);
      if ((bVar15) && (bVar13)) {
        FSelfShadowedTranslucencyPolicy::FSelfShadowedTranslucencyPolicy(local_18f);
        bVar10 = Process<FSelfShadowedCachedPointIndirectLightingPolicy>
                           (this,pFVar9,local_168,param_4,param_3,local_170,param_6,bVar10,bVar11,
                            local_194[0],(FSelfShadowedCachedPointIndirectLightingPolicy *)local_18f
                            ,&local_150,local_188,local_18c);
      }
      else {
        pFVar22 = FSelfShadowedTranslucencyPolicy::FSelfShadowedTranslucencyPolicy(local_182);
        bVar10 = Process<FSelfShadowedTranslucencyPolicy>
                           (this,pFVar9,local_168,param_4,param_3,local_170,param_6,bVar10,bVar11,
                            local_194[0],pFVar22,&local_150.SelfShadowTranslucencyUniformBuffer,
                            local_188,local_18c);
      }
    }
    else {
      pFVar21 = FSelfShadowedVolumetricLightmapPolicy::FSelfShadowedVolumetricLightmapPolicy
                          (&local_183);
      bVar10 = Process<FSelfShadowedVolumetricLightmapPolicy>
                         (this,pFVar9,local_168,param_4,param_3,local_170,param_6,bVar10,bVar11,
                          local_194[0],pFVar21,&local_150,local_188,local_18c);
    }
  }
  else {
    ppFVar1 = &local_178->LCI;
    local_15c.IndirectPolicy =
         GetUniformLightMapPolicyType
                   ((Type)this->_padding_,(FScene *)this->_padding_,*ppFVar1,param_3,param_6);
    bVar10 = Process<FUniformLightMapPolicy>
                       (this,pFVar9,local_168,param_4,param_3,local_170,param_6,bVar10,bVar11,
                        local_194[0],&local_15c,ppFVar1,local_188,local_18c);
  }
  return bVar10;
}

// AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_> @ 145652ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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

void __cdecl
FBasePassMeshProcessor::
AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
          (Type param_1,FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,
          FMeshPassProcessorRenderState *param_4,FGraphicsPipelineRenderTargetsInfo *param_5,
          TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
          *param_6,ERasterizerFillMode param_7,ERasterizerCullMode param_8,EPrimitiveType param_9,
          bool param_10,int param_11,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_12)

{
  bool bVar1;
  longlong lVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  undefined1 auStackY_148 [32];
  EPixelFormat local_d8 [4];
  Type local_d4;
  ETextureCreateFlags local_d0;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_d4 = param_1;
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,Default,None,'\0',true,
             param_11,param_12);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar3 = IConsoleManager::Get();
    plVar4 = (longlong *)
             (**(code **)((longlong)*pIVar3 + 0xc0))
                       (pIVar3,L"r.PSOPrecache.PrecacheAlphaColorChannel");
    pTVar5 = (TConsoleVariableData<int> *)0x0;
    if (plVar4 != (longlong *)0x0) {
      pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*plVar4 + 0x68))(plVar4);
    }
    `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
    ::__l2::CVar = pTVar5;
    _Init_thread_footer(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar5 = `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
           ::__l2::CVar;
  if ((param_10) &&
     (`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
      ::__l2::CVar != (TConsoleVariableData<int> *)0x0)) {
    bVar1 = IsInParallelGameThread();
    if ((bVar1) || (bVar1 = IsInGameThread(), bVar1)) {
      lVar2 = 0;
    }
    else {
      lVar2 = 4;
    }
    if (0 < *(int *)((longlong)pTVar5->ShadowedValue + lVar2)) {
      local_c8.RenderTargetsEnabled = param_5->RenderTargetsEnabled;
      local_c8.RenderTargetFormats.Elements[0] = (param_5->RenderTargetFormats).Elements[0];
      local_c8.RenderTargetFormats.Elements[1] = (param_5->RenderTargetFormats).Elements[1];
      local_c8.RenderTargetFormats.Elements[2] = (param_5->RenderTargetFormats).Elements[2];
      local_c8.RenderTargetFormats.Elements[3] = (param_5->RenderTargetFormats).Elements[3];
      local_c8._8_8_ = *(undefined8 *)((param_5->RenderTargetFormats).Elements + 4);
      local_c8.RenderTargetFlags.Elements[0] = (param_5->RenderTargetFlags).Elements[0];
      local_c8.RenderTargetFlags.Elements[1] = (param_5->RenderTargetFlags).Elements[1];
      local_c8.RenderTargetFlags.Elements[2] = (param_5->RenderTargetFlags).Elements[2];
      local_c8.RenderTargetFlags.Elements[3] = (param_5->RenderTargetFlags).Elements[3];
      local_c8.RenderTargetFlags.Elements[4] = (param_5->RenderTargetFlags).Elements[4];
      local_c8.RenderTargetFlags.Elements[5] = (param_5->RenderTargetFlags).Elements[5];
      local_c8.RenderTargetFlags.Elements[6] = (param_5->RenderTargetFlags).Elements[6];
      local_c8.RenderTargetFlags.Elements[7] = (param_5->RenderTargetFlags).Elements[7];
      local_c8.DepthStencilTargetFormat = param_5->DepthStencilTargetFormat;
      local_c8._81_7_ = *(undefined7 *)&param_5->field_0x51;
      local_c8.DepthStencilTargetFlag = param_5->DepthStencilTargetFlag;
      local_c8.DepthTargetLoadAction = param_5->DepthTargetLoadAction;
      local_c8.DepthTargetStoreAction = param_5->DepthTargetStoreAction;
      local_c8.StencilTargetLoadAction = param_5->StencilTargetLoadAction;
      local_c8.StencilTargetStoreAction = param_5->StencilTargetStoreAction;
      local_c8.DepthStencilAccess.Value = (param_5->DepthStencilAccess).Value;
      local_c8.NumSamples = param_5->NumSamples;
      local_c8.MultiViewCount = param_5->MultiViewCount;
      local_c8.bHasFragmentDensityAttachment = param_5->bHasFragmentDensityAttachment;
      local_c8._108_4_ = *(undefined4 *)&param_5->field_0x6c;
      GetSceneColorFormatAndCreateFlags
                (local_d4,true,None,(uint)param_5->NumSamples,false,local_d8,&local_d0);
      local_c8.RenderTargetFormats.Elements[0] = local_d8[0];
      local_c8.RenderTargetFlags.Elements[0] = local_d0;
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_2,param_3,param_4,&local_c8,param_6,param_7,param_8,param_9,Default,None,'\0'
                 ,true,param_11,param_12);
    }
  }
  return;
}

