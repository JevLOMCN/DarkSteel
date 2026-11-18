// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// CollectPSOInitializersInternal<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_> @ 14565f1f0

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

void __thiscall
FSkyPassMeshProcessor::
CollectPSOInitializersInternal<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
          (FSkyPassMeshProcessor *this,
          TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
          *param_1,FSceneTexturesConfig *param_2,FMaterial *param_3,
          FPSOPrecacheVertexFactoryData *param_4,FPSOPrecacheParams *param_5,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  Type TVar1;
  ESubpassHint EVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  Type TVar5;
  bool bVar6;
  undefined1 auStackY_208 [32];
  FMeshDrawingPolicyOverrideSettings local_190;
  FSceneTexturesConfig *local_188;
  FMeshPassProcessorRenderState local_178;
  FGraphicsPipelineRenderTargetsInfo local_138;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_188 = param_2;
  local_190 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_5);
  EVar3 = FMeshPassProcessor::ComputeMeshFillMode(param_3,&local_190);
  EVar4 = FMeshPassProcessor::ComputeMeshCullMode(param_3,&local_190);
  local_138.RenderTargetFlags.Elements[0] = None;
  local_138.RenderTargetFlags.Elements[1] = None;
  local_138.RenderTargetsEnabled = 0;
  local_138.RenderTargetFormats.Elements[0] = '\0';
  local_138.RenderTargetFormats.Elements[1] = '\0';
  local_138.RenderTargetFormats.Elements[2] = '\0';
  local_138.RenderTargetFormats.Elements[3] = '\0';
  local_138.RenderTargetFormats.Elements[4] = '\0';
  local_138.RenderTargetFormats.Elements[5] = '\0';
  local_138.RenderTargetFormats.Elements[6] = '\0';
  local_138.RenderTargetFormats.Elements[7] = '\0';
  local_138.DepthStencilTargetFormat = PF_Unknown;
  local_138.DepthStencilTargetFlag = None;
  local_138.DepthTargetLoadAction = ENoAction;
  local_138.DepthTargetStoreAction = ENoAction;
  local_138.StencilTargetLoadAction = ENoAction;
  local_138.StencilTargetStoreAction = ENoAction;
  local_138.DepthStencilAccess.Value = DepthNop;
  local_138.NumSamples = 0;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.RenderTargetFlags.Elements[2] = None;
  local_138.RenderTargetFlags.Elements[3] = None;
  local_138.RenderTargetFlags.Elements[4] = None;
  local_138.RenderTargetFlags.Elements[5] = None;
  local_138.RenderTargetFlags.Elements[6] = None;
  local_138.RenderTargetFlags.Elements[7] = None;
  SetupGBufferRenderTargetInfo(local_188,&local_138,true,GBL_Default);
  TVar1 = (Type)this->_padding_;
  if ((int)TVar1 < 3) {
    if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
       (FReadOnlyCVARCache::bMobileHDR == false)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    EVar2 = GetSubpassHint((FStaticShaderPlatform)GMaxRHIShaderPlatform,bVar6,
                           1 < local_138.MultiViewCount,local_138._104_4_ & 0xffff);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_4,param_3,&this->PassDrawRenderState,&local_138,param_1,EVar3,EVar4,
               *(EPrimitiveType *)&param_5->field0_0x0 & 0x3f,Default,EVar2,'\0',true,
               (int)this->_padding_,param_6);
  }
  else {
    local_138.RenderTargetsEnabled = 1;
    local_138.RenderTargetFormats.Elements._0_4_ =
         local_138.RenderTargetFormats.Elements._0_4_ & 0xff;
    local_138.RenderTargetFormats.Elements[4] = '\0';
    local_138.RenderTargetFlags.Elements[1] = None;
    local_138.RenderTargetFlags.Elements[2] = None;
    local_138.RenderTargetFlags.Elements[3] = None;
    local_138.RenderTargetFlags.Elements[4] = None;
    local_138.RenderTargetFormats.Elements[5] = '\0';
    local_138.RenderTargetFormats.Elements[6] = '\0';
    local_138.RenderTargetFlags.Elements[5] = None;
    local_138.RenderTargetFlags.Elements[6] = None;
    local_138.RenderTargetFormats.Elements[7] = '\0';
    local_138.RenderTargetFlags.Elements[7] = None;
    FBasePassMeshProcessor::
    AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (TVar1,param_4,param_3,&this->PassDrawRenderState,&local_138,param_1,EVar3,EVar4,
               *(EPrimitiveType *)&param_5->field0_0x0 & 0x3f,true,(int)this->_padding_,param_6);
  }
  TVar5 = FScene::GetDefaultBasePassDepthStencilAccess((Type)this->_padding_);
  local_178.DepthStencilAccess = DepthRead_StencilRead;
  local_178.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.StencilRef = 0;
  local_178.BlendState = (FRHIBlendState *)0x0;
  local_178.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_178.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  SetupBasePassState(TVar5 | DepthWrite,false,&local_178);
  local_c8.NumSamples = 1;
  local_c8.MultiViewCount = '\0';
  local_c8.bHasFragmentDensityAttachment = false;
  local_c8.RenderTargetsEnabled = 0;
  local_c8.RenderTargetFormats.Elements[0] = '\0';
  local_c8.RenderTargetFormats.Elements[1] = '\0';
  local_c8.RenderTargetFormats.Elements[2] = '\0';
  local_c8.RenderTargetFormats.Elements[3] = '\0';
  local_c8.RenderTargetFormats.Elements[4] = '\0';
  local_c8.RenderTargetFormats.Elements[5] = '\0';
  local_c8.RenderTargetFormats.Elements[6] = '\0';
  local_c8.RenderTargetFormats.Elements[7] = '\0';
  local_c8.RenderTargetFlags.Elements[0] = None;
  local_c8.RenderTargetFlags.Elements[1] = None;
  local_c8.RenderTargetFlags.Elements[2] = None;
  local_c8.RenderTargetFlags.Elements[3] = None;
  local_c8.RenderTargetFlags.Elements[4] = None;
  local_c8.RenderTargetFlags.Elements[5] = None;
  local_c8.RenderTargetFlags.Elements[6] = None;
  local_c8.RenderTargetFlags.Elements[7] = None;
  local_c8.DepthStencilTargetFormat = PF_Unknown;
  local_c8.DepthStencilTargetFlag = None;
  local_c8.DepthTargetLoadAction = ENoAction;
  local_c8.DepthTargetStoreAction = ENoAction;
  local_c8.StencilTargetLoadAction = ENoAction;
  local_c8.StencilTargetStoreAction = ENoAction;
  local_c8.DepthStencilAccess.Value = DepthNop;
  AddRenderTargetInfo(PF_FloatR11G11B10,
                      TargetArraySlicesIndependently|UAV|ShaderResource|RenderTargetable,&local_c8);
  SetupDepthStencilInfo
            (PF_DepthStencil,local_188->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x22,
             &local_c8);
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_4,param_3,&local_178,&local_c8,param_1,EVar3,EVar4,
             *(EPrimitiveType *)&param_5->field0_0x0 & 0x3f,Default,None,'\0',true,
             (int)this->_padding_,param_6);
  return;
}

// CollectPSOInitializersInternal<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_> @ 14565f4f0

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

void __thiscall
FSkyPassMeshProcessor::
CollectPSOInitializersInternal<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
          (FSkyPassMeshProcessor *this,
          TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
          *param_1,FSceneTexturesConfig *param_2,FMaterial *param_3,
          FPSOPrecacheVertexFactoryData *param_4,FPSOPrecacheParams *param_5,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  bool bVar1;
  ERasterizerFillMode EVar2;
  ERasterizerCullMode EVar3;
  Type TVar4;
  longlong lVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  EPrimitiveType EVar9;
  FGraphicsPipelineRenderTargetsInfo *pFVar10;
  undefined1 auStackY_228 [32];
  ESubpassHint EVar11;
  int iVar12;
  EPixelFormat local_1b8 [4];
  ERasterizerCullMode local_1b4;
  ERasterizerFillMode local_1b0;
  Type local_1ac;
  int local_1a8;
  FPSOPrecacheParams *local_1a0;
  FMeshDrawingPolicyOverrideSettings local_198;
  FSceneTexturesConfig *local_190;
  ETextureCreateFlags local_188 [2];
  FMeshPassProcessorRenderState local_178;
  FGraphicsPipelineRenderTargetsInfo local_138;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1a0 = param_5;
  local_190 = param_2;
  local_198 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_5);
  EVar2 = FMeshPassProcessor::ComputeMeshFillMode(param_3,&local_198);
  local_1b0 = EVar2;
  EVar3 = FMeshPassProcessor::ComputeMeshCullMode(param_3,&local_198);
  local_138.RenderTargetFlags.Elements[0] = None;
  local_138.RenderTargetFlags.Elements[1] = None;
  local_138.RenderTargetFlags.Elements[2] = None;
  local_138.RenderTargetFlags.Elements[3] = None;
  local_138.RenderTargetFlags.Elements[4] = None;
  local_138.RenderTargetFlags.Elements[5] = None;
  local_138.RenderTargetsEnabled = 0;
  local_138.RenderTargetFormats.Elements[0] = '\0';
  local_138.RenderTargetFormats.Elements[1] = '\0';
  local_138.RenderTargetFormats.Elements[2] = '\0';
  local_138.RenderTargetFormats.Elements[3] = '\0';
  local_138.RenderTargetFormats.Elements[4] = '\0';
  local_138.RenderTargetFormats.Elements[5] = '\0';
  local_138.RenderTargetFormats.Elements[6] = '\0';
  local_138.RenderTargetFormats.Elements[7] = '\0';
  local_138.DepthStencilTargetFormat = PF_Unknown;
  local_138.DepthStencilTargetFlag = None;
  local_138.DepthTargetLoadAction = ENoAction;
  local_138.DepthTargetStoreAction = ENoAction;
  local_138.StencilTargetLoadAction = ENoAction;
  local_138.StencilTargetStoreAction = ENoAction;
  local_138.DepthStencilAccess.Value = DepthNop;
  local_138.NumSamples = 0;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.RenderTargetFlags.Elements[6] = None;
  local_138.RenderTargetFlags.Elements[7] = None;
  local_1b4 = EVar3;
  SetupGBufferRenderTargetInfo(local_190,&local_138,true,GBL_Default);
  local_1ac = (Type)this->_padding_;
  if ((int)local_1ac < 3) {
    if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
       (FReadOnlyCVARCache::bMobileHDR == false)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    EVar11 = GetSubpassHint((FStaticShaderPlatform)GMaxRHIShaderPlatform,bVar1,
                            1 < local_138.MultiViewCount,local_138._104_4_ & 0xffff);
    pFVar10 = &local_138;
    iVar12 = (int)this->_padding_;
    EVar9 = *(EPrimitiveType *)&local_1a0->field0_0x0 & 0x3f;
  }
  else {
    local_1a8 = (int)this->_padding_;
    EVar9 = *(EPrimitiveType *)&local_1a0->field0_0x0 & 0x3f;
    local_138.RenderTargetsEnabled = 1;
    local_138.RenderTargetFlags.Elements[1] = None;
    local_138.RenderTargetFlags.Elements[2] = None;
    local_138.RenderTargetFlags.Elements[3] = None;
    local_138.RenderTargetFlags.Elements[4] = None;
    local_138.RenderTargetFormats.Elements[5] = '\0';
    local_138.RenderTargetFormats.Elements[6] = '\0';
    local_138.RenderTargetFlags.Elements[5] = None;
    local_138.RenderTargetFlags.Elements[6] = None;
    local_138.RenderTargetFormats.Elements[7] = '\0';
    local_138.RenderTargetFlags.Elements[7] = None;
    local_138.RenderTargetFormats.Elements._0_4_ =
         local_138.RenderTargetFormats.Elements._0_4_ & 0xff;
    local_138.RenderTargetFormats.Elements[4] = '\0';
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_4,param_3,&this->PassDrawRenderState,&local_138,param_1,EVar2,local_1b4,EVar9,
               Default,None,'\0',true,local_1a8,param_6);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      pIVar6 = IConsoleManager::Get();
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6);
      pTVar8 = (TConsoleVariableData<int> *)0x0;
      if (plVar7 != (longlong *)0x0) {
        pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
      }
      `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
      ::__l2::CVar = pTVar8;
      _Init_thread_footer(&`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pTVar8 = `public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
             ::__l2::CVar;
    EVar2 = local_1b0;
    EVar3 = local_1b4;
    if (`public:_static_void___cdecl_FBasePassMeshProcessor::AddBasePassGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(ERHIFeatureLevel::Type,FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
        ::__l2::CVar == (TConsoleVariableData<int> *)0x0) goto LAB_14565f7f2;
    bVar1 = IsInParallelGameThread();
    if ((bVar1) || (bVar1 = IsInGameThread(), bVar1)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    EVar2 = local_1b0;
    EVar3 = local_1b4;
    if (*(int *)((longlong)pTVar8->ShadowedValue + lVar5) < 1) goto LAB_14565f7f2;
    local_c8.RenderTargetFormats.Elements[0] = local_138.RenderTargetFormats.Elements[0];
    local_c8.RenderTargetFormats.Elements[1] = local_138.RenderTargetFormats.Elements[1];
    local_c8.RenderTargetFormats.Elements[2] = local_138.RenderTargetFormats.Elements[2];
    local_c8.RenderTargetFormats.Elements[3] = local_138.RenderTargetFormats.Elements[3];
    local_c8.RenderTargetsEnabled = local_138.RenderTargetsEnabled;
    local_c8._8_8_ =
         CONCAT44(local_138._12_4_,
                  CONCAT13(local_138.RenderTargetFormats.Elements[7],
                           CONCAT21(local_138.RenderTargetFormats.Elements._5_2_,
                                    local_138.RenderTargetFormats.Elements[4])));
    local_c8.RenderTargetFlags.Elements[2] = local_138.RenderTargetFlags.Elements[2];
    local_c8.RenderTargetFlags.Elements[3] = local_138.RenderTargetFlags.Elements[3];
    local_c8.RenderTargetFlags.Elements[0] = local_138.RenderTargetFlags.Elements[0];
    local_c8.RenderTargetFlags.Elements[1] = local_138.RenderTargetFlags.Elements[1];
    local_c8.RenderTargetFlags.Elements[6] = local_138.RenderTargetFlags.Elements[6];
    local_c8.RenderTargetFlags.Elements[7] = local_138.RenderTargetFlags.Elements[7];
    local_c8.RenderTargetFlags.Elements[4] = local_138.RenderTargetFlags.Elements[4];
    local_c8.RenderTargetFlags.Elements[5] = local_138.RenderTargetFlags.Elements[5];
    local_c8._80_8_ = CONCAT71(local_138._81_7_,local_138.DepthStencilTargetFormat);
    local_c8.DepthStencilTargetFlag = local_138.DepthStencilTargetFlag;
    local_c8.DepthTargetLoadAction = local_138.DepthTargetLoadAction;
    local_c8.DepthTargetStoreAction = local_138.DepthTargetStoreAction;
    local_c8.StencilTargetLoadAction = local_138.StencilTargetLoadAction;
    local_c8.StencilTargetStoreAction = local_138.StencilTargetStoreAction;
    local_c8.DepthStencilAccess.Value = local_138.DepthStencilAccess.Value;
    local_c8.NumSamples = local_138.NumSamples;
    local_c8.MultiViewCount = local_138.MultiViewCount;
    local_c8.bHasFragmentDensityAttachment = local_138.bHasFragmentDensityAttachment;
    local_c8._108_2_ = local_138._108_2_;
    local_c8._110_2_ = local_138._110_2_;
    GetSceneColorFormatAndCreateFlags
              (local_1ac,true,None,local_138._104_4_ & 0xffff,false,local_1b8,local_188);
    pFVar10 = &local_c8;
    local_c8.RenderTargetFormats.Elements[0] = local_1b8[0];
    local_c8.RenderTargetFlags.Elements[0] = local_188[0];
    EVar11 = None;
    EVar2 = local_1b0;
    EVar3 = local_1b4;
    iVar12 = local_1a8;
  }
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_4,param_3,&this->PassDrawRenderState,pFVar10,param_1,EVar2,EVar3,EVar9,Default,
             EVar11,'\0',true,iVar12,param_6);
LAB_14565f7f2:
  TVar4 = FScene::GetDefaultBasePassDepthStencilAccess((Type)this->_padding_);
  local_178.DepthStencilAccess = DepthRead_StencilRead;
  local_178.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.StencilRef = 0;
  local_178.BlendState = (FRHIBlendState *)0x0;
  local_178.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_178.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  SetupBasePassState(TVar4 | DepthWrite,false,&local_178);
  local_c8.NumSamples = 1;
  local_c8.MultiViewCount = '\0';
  local_c8.bHasFragmentDensityAttachment = false;
  local_c8.RenderTargetsEnabled = 0;
  local_c8.RenderTargetFormats.Elements[0] = '\0';
  local_c8.RenderTargetFormats.Elements[1] = '\0';
  local_c8.RenderTargetFormats.Elements[2] = '\0';
  local_c8.RenderTargetFormats.Elements[3] = '\0';
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  local_c8.RenderTargetFlags.Elements[0] = None;
  local_c8.RenderTargetFlags.Elements[1] = None;
  local_c8.RenderTargetFlags.Elements[2] = None;
  local_c8.RenderTargetFlags.Elements[3] = None;
  local_c8.RenderTargetFlags.Elements[4] = None;
  local_c8.RenderTargetFlags.Elements[5] = None;
  local_c8.RenderTargetFlags.Elements[6] = None;
  local_c8.RenderTargetFlags.Elements[7] = None;
  local_c8._80_8_ = local_c8._80_8_ & 0xffffffffffffff00;
  local_c8.DepthStencilTargetFlag = None;
  local_c8.DepthTargetLoadAction = ENoAction;
  local_c8.DepthTargetStoreAction = ENoAction;
  local_c8.StencilTargetLoadAction = ENoAction;
  local_c8.StencilTargetStoreAction = ENoAction;
  local_c8.DepthStencilAccess.Value = DepthNop;
  AddRenderTargetInfo(PF_FloatR11G11B10,
                      TargetArraySlicesIndependently|UAV|ShaderResource|RenderTargetable,&local_c8);
  SetupDepthStencilInfo
            (PF_DepthStencil,local_190->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x22,
             &local_c8);
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_4,param_3,&local_178,&local_c8,param_1,EVar2,EVar3,
             *(EPrimitiveType *)&local_1a0->field0_0x0 & 0x3f,Default,None,'\0',true,
             (int)this->_padding_,param_6);
  return;
}

// FSkyPassMeshProcessor @ 1456664c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSkyPassMeshProcessor * __thiscall
FSkyPassMeshProcessor::FSkyPassMeshProcessor
          (FSkyPassMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassProcessorRenderState *param_4,FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,SkyPass,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7FSkyPassMeshProcessor__6B_;
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
  pFVar2 = param_4->NaniteUniformBuffer;
  uVar4 = param_4->StencilRef;
  uVar3 = *(undefined4 *)&param_4->field_0x3c;
  this->SkyPassType = SPT_Default;
  (this->PassDrawRenderState).NaniteUniformBuffer = pFVar2;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  return this;
}

// AddMeshBatch @ 145672490

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

void __thiscall
FSkyPassMeshProcessor::AddMeshBatch
          (FSkyPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FMaterial *pFVar5;
  FMaterialRenderProxy *pFVar6;
  FMeshDrawingPolicyOverrideSettings local_res10;
  
  pFVar6 = param_1->MaterialRenderProxy;
  do {
    if (pFVar6 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar5 = (FMaterial *)(**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,(int)this->_padding_);
    if ((pFVar5 != (FMaterial *)0x0) &&
       (cVar1 = (**(code **)(pFVar5->_padding_ + 0x368))(pFVar5), cVar1 != '\0')) {
      local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
      EVar3 = FMeshPassProcessor::ComputeMeshFillMode(pFVar5,&local_res10);
      EVar4 = FMeshPassProcessor::ComputeMeshCullMode(pFVar5,&local_res10);
      bVar2 = Process(this,param_1,param_2,param_3,param_4,pFVar6,pFVar5,EVar3,EVar4);
      if (bVar2) {
        return;
      }
    }
    pFVar6 = (FMaterialRenderProxy *)
             (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,(int)this->_padding_);
  } while( true );
}

// CollectPSOInitializers @ 1456772f0

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

void __thiscall
FSkyPassMeshProcessor::CollectPSOInitializers
          (FSkyPassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  char cVar2;
  bool bVar3;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_58;
  
  cVar2 = (**(code **)(param_2->_padding_ + 0x368))(param_2);
  if (cVar2 != '\0') {
    TVar1 = (Type)this->_padding_;
    local_58.VertexShader.ShaderContent =
         (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
    local_58.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_58.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_58.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_58.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_58.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    local_58.PixelShader.ShaderContent =
         (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
    local_58.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_58.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_58.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((int)TVar1 < 3) {
      bVar3 = MobileBasePass::GetShaders
                        (LMP_NO_LIGHTMAP,LOCAL_LIGHTS_DISABLED,param_2,param_3->VertexFactoryType,
                         (TShaderRefBase<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                          *)&local_58,
                         (TShaderRefBase<TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                          *)&local_58.PixelShader);
      if (bVar3) {
        SetStateForMobile(this);
        CollectPSOInitializersInternal<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (this,(TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
                         *)&local_58,param_1,param_2,param_3,param_4,param_5);
      }
    }
    else {
      bVar3 = GetBasePassShaders<FUniformLightMapPolicy>
                        (param_2,param_3->VertexFactoryType,(FUniformLightMapPolicy)0x0,TVar1,false,
                         false,false,GBL_Default,&local_58.VertexShader,&local_58.PixelShader,false)
      ;
      if (bVar3) {
        CollectPSOInitializersInternal<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (this,&local_58,param_1,param_2,param_3,param_4,param_5);
      }
    }
  }
  return;
}

// GetCaptureFrameSkyEnvMapTextureDesc @ 145682160

FRDGTextureDesc * __cdecl
FSkyPassMeshProcessor::GetCaptureFrameSkyEnvMapTextureDesc
          (FRDGTextureDesc *__return_storage_ptr__,uint param_1,uint param_2)

{
  code *pcVar1;
  EClearBinding EVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FRDGTextureDesc *pFVar8;
  
  uVar6 = FClearValueBinding::Black.Value.Color[3];
  uVar5 = FClearValueBinding::Black.Value.Color[2];
  uVar4 = FClearValueBinding::Black.Value.Color[1];
  uVar3 = FClearValueBinding::Black.Value.Color[0];
  EVar2 = FClearValueBinding::Black.ColorBinding;
  if ((0x7fffffff < param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= (uint32)TNumericLimits<int32>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                         ,0x2ad,L"Size parameter exceeds valid range"), bVar7)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FRDGTextureDesc *)(*pcVar1)();
    return pFVar8;
  }
  *(EClearBinding *)&__return_storage_ptr__->field_0x8 = EVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = uVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uVar5;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = uVar6;
  *(undefined8 *)__return_storage_ptr__ = 0x1020009;
  *(int *)&__return_storage_ptr__->field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  __return_storage_ptr__->field_0x30 = (char)param_2;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x10001;
  *(undefined4 *)&__return_storage_ptr__->field_0x31 = 0x1a0301;
  __return_storage_ptr__->field_0x35 = 0xff;
  *(ulonglong *)&__return_storage_ptr__->field_0x24 = CONCAT44(param_1,param_1);
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  return __return_storage_ptr__;
}

// Process @ 14568fd40

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

bool __thiscall
FSkyPassMeshProcessor::Process
          (FSkyPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  FVertexFactoryType *pFVar4;
  FMeshDrawCommandSortKey FVar5;
  TMobileBasePassShaderElementData<FUniformLightMapPolicy> local_88;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_68;
  
  local_68.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_68.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  TVar1 = (Type)this->_padding_;
  local_68.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_68.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  pcVar2 = *(code **)(param_1->VertexFactory->_padding_ + 0x30);
  if ((int)TVar1 < 3) {
    pFVar4 = (FVertexFactoryType *)(*pcVar2)();
    bVar3 = MobileBasePass::GetShaders
                      (LMP_NO_LIGHTMAP,LOCAL_LIGHTS_DISABLED,param_6,pFVar4,
                       (TShaderRefBase<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                        *)&local_68,
                       (TShaderRefBase<TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                        *)&local_68.PixelShader);
    if (!bVar3) {
      return false;
    }
    SetStateForMobile(this);
    local_88.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
    local_88._padding_ = 0;
    local_88._padding_ = 0;
    local_88.bCanReceiveCSM = false;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_88,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FVar5 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TMobileBasePassShaderElementData<FUniformLightMapPolicy>_>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
               &this->PassDrawRenderState,
               (TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
                *)&local_68,param_7,param_8,FVar5,Default,&local_88);
  }
  else {
    pFVar4 = (FVertexFactoryType *)(*pcVar2)();
    bVar3 = GetBasePassShaders<FUniformLightMapPolicy>
                      (param_6,pFVar4,(FUniformLightMapPolicy)0x0,TVar1,false,false,false,
                       GBL_Default,&local_68.VertexShader,&local_68.PixelShader,false);
    if (!bVar3) {
      return false;
    }
    local_88.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
    local_88._padding_ = 0;
    local_88._padding_ = 0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_88,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FVar5 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
               &this->PassDrawRenderState,&local_68,param_7,param_8,FVar5,Default,
               (TBasePassShaderElementData<FUniformLightMapPolicy> *)&local_88);
  }
  return true;
}

// SetStateForMobile @ 14569fbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSkyPassMeshProcessor::SetStateForMobile(FSkyPassMeshProcessor *this)

{
  ESkyPassType EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = this->SkyPassType;
  if (EVar1 == SPT_Default) {
    (this->PassDrawRenderState).DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,0,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    (this->PassDrawRenderState).StencilRef = 8;
    return;
  }
  if (EVar1 == SPT_RealTimeCapture_DepthWrite) {
    (this->PassDrawRenderState).DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    (this->PassDrawRenderState).StencilRef = 0;
    return;
  }
  if (EVar1 == SPT_RealTimeCapture_DepthNop) {
    (this->PassDrawRenderState).DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    (this->PassDrawRenderState).StencilRef = 0;
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SkyPassRendering.cpp"
                     ,0xb5,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// TryAddMeshBatch @ 1456a4fe0

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

bool __thiscall
FSkyPassMeshProcessor::TryAddMeshBatch
          (FSkyPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  bool bVar1;
  ERasterizerFillMode EVar2;
  ERasterizerCullMode EVar3;
  FMeshDrawingPolicyOverrideSettings local_28 [2];
  
  local_28[0] = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar2 = FMeshPassProcessor::ComputeMeshFillMode(param_6,local_28);
  EVar3 = FMeshPassProcessor::ComputeMeshCullMode(param_6,local_28);
  bVar1 = Process(this,param_1,param_2,param_3,param_4,param_5,param_6,EVar2,EVar3);
  return bVar1;
}

