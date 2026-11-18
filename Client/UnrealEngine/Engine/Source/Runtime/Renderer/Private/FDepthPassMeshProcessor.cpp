// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// CollectPSOInitializersInternal<1> @ 1447ec340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDepthPassMeshProcessor::CollectPSOInitializersInternal<1>
          (FDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,bool param_6,EPrimitiveType param_7,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_8)

{
  TConsoleVariableData<int> *pTVar1;
  TRefCountPtr<FRHIDepthStencilState> this_00;
  bool bVar2;
  longlong lVar3;
  undefined1 auStackY_1e8 [32];
  FMeshPassProcessorRenderState local_168;
  FShaderPipelineRef local_128;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_118;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_118.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
  local_118.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_118.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_128.ShaderPipeline = (FShaderPipeline *)0x0;
  local_128.ShaderMap = (FShaderMapBase *)0x0;
  bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_3);
  bVar2 = GetDepthPassShaders<1>
                    (param_3,param_2->VertexFactoryType,(Type)this->_padding_,bVar2,
                     &local_118.VertexShader,&local_118.PixelShader,&local_128);
  this_00 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
  if (bVar2) {
    local_168.BlendState = (this->PassDrawRenderState).BlendState;
    local_168.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_168.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_168._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_168.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_168.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_168.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_168.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_168._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
    if (((this->bDitheredLODFadingOutMaskPass == false) && (this->bShadowProjection == false)) &&
       (param_6)) {
      if (TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::AddRef
                  ((FRHIResource *)
                   TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                   ::StaticResource.StateRHI.Reference);
      }
      local_168.DepthStencilState = this_00.Reference;
      local_168._56_8_ = local_168._56_8_ & 0xffffffff00000000;
      if (this_00.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00.Reference);
      }
    }
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
    local_c8.NumSamples = 1;
    local_c8.MultiViewCount = '\0';
    local_c8.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x22,
               &local_c8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_2,param_3,&local_168,&local_c8,&local_118,param_4,param_5,param_7,PositionOnly,
               None,'\0',true,(int)this->_padding_,param_8);
    pTVar1 = CVarPSOPrecacheProjectedShadows.Ref;
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 4;
    }
    if (0 < *(int *)((longlong)pTVar1->ShadowedValue + lVar3)) {
      local_168.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      local_168._56_8_ = local_168._56_8_ & 0xffffffff00000000;
      AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_c8);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_2,param_3,&local_168,&local_c8,&local_118,param_4,param_5,param_7,
                 PositionOnly,None,'\0',true,(int)this->_padding_,param_8);
    }
  }
  return;
}

// CollectPSOInitializersInternal<0> @ 1447ec600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDepthPassMeshProcessor::CollectPSOInitializersInternal<0>
          (FDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,bool param_6,EPrimitiveType param_7,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_8)

{
  TConsoleVariableData<int> *pTVar1;
  TRefCountPtr<FRHIDepthStencilState> this_00;
  bool bVar2;
  longlong lVar3;
  undefined1 auStackY_1e8 [32];
  FMeshPassProcessorRenderState local_168;
  FShaderPipelineRef local_128;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_118;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_118.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
  local_118.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_118.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_128.ShaderPipeline = (FShaderPipeline *)0x0;
  local_128.ShaderMap = (FShaderMapBase *)0x0;
  bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_3);
  bVar2 = GetDepthPassShaders<0>
                    (param_3,param_2->VertexFactoryType,(Type)this->_padding_,bVar2,
                     &local_118.VertexShader,&local_118.PixelShader,&local_128);
  this_00 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
  if (bVar2) {
    local_168.BlendState = (this->PassDrawRenderState).BlendState;
    local_168.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_168.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_168._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_168.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_168.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_168.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_168.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_168._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
    if (((this->bDitheredLODFadingOutMaskPass == false) && (this->bShadowProjection == false)) &&
       (param_6)) {
      if (TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::AddRef
                  ((FRHIResource *)
                   TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                   ::StaticResource.StateRHI.Reference);
      }
      local_168.DepthStencilState = this_00.Reference;
      local_168._56_8_ = local_168._56_8_ & 0xffffffff00000000;
      if (this_00.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00.Reference);
      }
    }
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
    local_c8.NumSamples = 1;
    local_c8.MultiViewCount = '\0';
    local_c8.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x22,
               &local_c8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_2,param_3,&local_168,&local_c8,&local_118,param_4,param_5,param_7,Default,None,
               '\0',true,(int)this->_padding_,param_8);
    pTVar1 = CVarPSOPrecacheProjectedShadows.Ref;
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 4;
    }
    if (0 < *(int *)((longlong)pTVar1->ShadowedValue + lVar3)) {
      local_168.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      local_168._56_8_ = local_168._56_8_ & 0xffffffff00000000;
      AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_c8);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_2,param_3,&local_168,&local_c8,&local_118,param_4,param_5,param_7,Default,
                 None,'\0',true,(int)this->_padding_,param_8);
    }
  }
  return;
}

// Process<1> @ 1447f07b0

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

bool __thiscall
FDepthPassMeshProcessor::Process<1>
          (FDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  FVertexFactory *pFVar1;
  longlong lVar2;
  TRefCountPtr<FRHIDepthStencilState> this_00;
  bool bVar3;
  bool bVar4;
  FVertexFactoryType *pFVar5;
  FMaterial *pFVar6;
  FMeshDrawCommandSortKey_u_0 FVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  FMaterialShadingModelField local_res8;
  uint6 uStackX_a;
  uint local_res10;
  char local_res14;
  FSceneViewFamily *local_res18;
  FShaderPipelineRef local_e8;
  FMeshMaterialShaderElementData local_d8;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_c8;
  FMeshPassProcessorRenderState local_78;
  
  pFVar1 = param_1->VertexFactory;
  local_c8.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
  local_c8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_c8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_c8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_c8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_c8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderPipeline = (FShaderPipeline *)0x0;
  local_e8.ShaderMap = (FShaderMapBase *)0x0;
  local_res18 = (FSceneViewFamily *)param_2;
  bVar3 = FMaterial::MaterialUsesPixelDepthOffset_RenderThread(param_6);
  lVar2 = this->_padding_;
  pFVar5 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
  bVar4 = GetDepthPassShaders<1>
                    (param_6,pFVar5,(Type)lVar2,bVar3,&local_c8.VertexShader,&local_c8.PixelShader,
                     &local_e8);
  bVar3 = false;
  if (bVar4) {
    local_78.BlendState = (this->PassDrawRenderState).BlendState;
    local_78.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_78.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_78._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_78.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_78.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_78.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_78.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_78.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_78._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    if ((this->bDitheredLODFadingOutMaskPass == false) && (this->bShadowProjection == false)) {
      GetOptionalDitheringFlag
                ((FSceneView *)&local_res10,(FMeshBatch *)this->_padding_,(int)param_1);
      this_00 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                ::StaticResource.StateRHI;
      if ((int)this->_padding_ == 1) {
        pFVar6 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                           (param_1->MaterialRenderProxy,ES3_1);
        (**(code **)(pFVar6->_padding_ + 0x280))(pFVar6,&local_res8);
        if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
           (FReadOnlyCVARCache::bMobileHDR == false)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        local_e8.ShaderPipeline._0_5_ = CONCAT14(local_res14,local_e8.ShaderPipeline._0_4_);
        if (local_res14 != '\0') {
          local_e8.ShaderPipeline =
               (FShaderPipeline *)CONCAT44(local_e8.ShaderPipeline._4_4_,local_res10);
        }
        SetMobileBasePassDepthState
                  (&local_78,param_4,param_6,local_res8,bVar3,(TOptional<unsigned_int>)&local_e8);
      }
      else if (local_res14 != '\0') {
        if (TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
          FRHIResource::AddRef
                    ((FRHIResource *)
                     TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                     ::StaticResource.StateRHI.Reference);
        }
        local_78.DepthStencilState = this_00.Reference;
        if (this_00.Reference != (FRHIDepthStencilState *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00.Reference);
        }
        local_78.StencilRef = local_res10;
      }
    }
    local_d8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_d8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_d8,(FSceneView *)this->_padding_,param_4,param_1,param_3,true);
    bVar3 = IsMaskedBlendMode(param_6);
    uVar9 = 0;
    if (GEarlyZSortMasked == 0) {
      if (local_c8.VertexShader.ShaderContent == (TDepthOnlyVS<1> *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)&(local_c8.VertexShader.ShaderContent)->field_0xd8;
      }
      if (local_c8.PixelShader.ShaderContent != (FDepthOnlyPS *)0x0) {
        uVar9 = *(uint *)&(local_c8.PixelShader.ShaderContent)->field_0xd8;
      }
      FVar7.Generic.PixelShaderHash = uVar9;
      FVar7.Generic.VertexShaderHash = uVar8;
    }
    else {
      if (local_c8.VertexShader.ShaderContent == (TDepthOnlyVS<1> *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)&(local_c8.VertexShader.ShaderContent)->field_0xd8;
      }
      if (local_c8.PixelShader.ShaderContent != (FDepthOnlyPS *)0x0) {
        uVar9 = *(uint *)&(local_c8.PixelShader.ShaderContent)->field_0xd8;
      }
      FVar7.PackedData =
           (ulonglong)uVar9 << 0x10 |
           ((ulonglong)uStackX_a << 0x10 | (ulonglong)uVar10) & 0x100000000ffff |
           (ulonglong)bVar3 << 0x31;
    }
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,(ulong64)local_res18,param_4,param_5,param_6,
               &local_78,&local_c8,param_7,param_8,(FMeshDrawCommandSortKey)FVar7,PositionOnly,
               &local_d8);
    bVar3 = true;
  }
  return bVar3;
}

// Process<0> @ 1447f0ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FDepthPassMeshProcessor::Process<0>
          (FDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  FVertexFactory *pFVar1;
  longlong lVar2;
  TRefCountPtr<FRHIDepthStencilState> this_00;
  bool bVar3;
  bool bVar4;
  FVertexFactoryType *pFVar5;
  FMaterial *pFVar6;
  FMeshDrawCommandSortKey_u_0 FVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  FMaterialShadingModelField local_res8;
  uint6 uStackX_a;
  uint local_res10;
  char local_res14;
  FSceneViewFamily *local_res18;
  FShaderPipelineRef local_e8;
  FMeshMaterialShaderElementData local_d8;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_c8;
  FMeshPassProcessorRenderState local_78;
  
  pFVar1 = param_1->VertexFactory;
  local_c8.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
  local_c8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_c8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_c8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_c8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_c8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_c8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderPipeline = (FShaderPipeline *)0x0;
  local_e8.ShaderMap = (FShaderMapBase *)0x0;
  local_res18 = (FSceneViewFamily *)param_2;
  bVar3 = FMaterial::MaterialUsesPixelDepthOffset_RenderThread(param_6);
  lVar2 = this->_padding_;
  pFVar5 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
  bVar4 = GetDepthPassShaders<0>
                    (param_6,pFVar5,(Type)lVar2,bVar3,&local_c8.VertexShader,&local_c8.PixelShader,
                     &local_e8);
  bVar3 = false;
  if (bVar4) {
    local_78.BlendState = (this->PassDrawRenderState).BlendState;
    local_78.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_78.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_78._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_78.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_78.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_78.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_78.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_78.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_78._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    if ((this->bDitheredLODFadingOutMaskPass == false) && (this->bShadowProjection == false)) {
      GetOptionalDitheringFlag
                ((FSceneView *)&local_res10,(FMeshBatch *)this->_padding_,(int)param_1);
      this_00 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                ::StaticResource.StateRHI;
      if ((int)this->_padding_ == 1) {
        pFVar6 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                           (param_1->MaterialRenderProxy,ES3_1);
        (**(code **)(pFVar6->_padding_ + 0x280))(pFVar6,&local_res8);
        if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
           (FReadOnlyCVARCache::bMobileHDR == false)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        local_e8.ShaderPipeline._0_5_ = CONCAT14(local_res14,local_e8.ShaderPipeline._0_4_);
        if (local_res14 != '\0') {
          local_e8.ShaderPipeline =
               (FShaderPipeline *)CONCAT44(local_e8.ShaderPipeline._4_4_,local_res10);
        }
        SetMobileBasePassDepthState
                  (&local_78,param_4,param_6,local_res8,bVar3,(TOptional<unsigned_int>)&local_e8);
      }
      else if (local_res14 != '\0') {
        if (TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
          FRHIResource::AddRef
                    ((FRHIResource *)
                     TStaticStateRHI<TStaticDepthStencilState<1,3,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                     ::StaticResource.StateRHI.Reference);
        }
        local_78.DepthStencilState = this_00.Reference;
        if (this_00.Reference != (FRHIDepthStencilState *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00.Reference);
        }
        local_78.StencilRef = local_res10;
      }
    }
    local_d8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_d8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_d8,(FSceneView *)this->_padding_,param_4,param_1,param_3,true);
    bVar3 = IsMaskedBlendMode(param_6);
    if (GEarlyZSortMasked == 0) {
      if (local_c8.VertexShader.ShaderContent == (TDepthOnlyVS<0> *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)&(local_c8.VertexShader.ShaderContent)->field_0xd8;
      }
      if (local_c8.PixelShader.ShaderContent == (FDepthOnlyPS *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)&(local_c8.PixelShader.ShaderContent)->field_0xd8;
      }
      FVar7.Generic.PixelShaderHash = uVar9;
      FVar7.Generic.VertexShaderHash = uVar8;
    }
    else {
      if (local_c8.VertexShader.ShaderContent == (TDepthOnlyVS<0> *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)&(local_c8.VertexShader.ShaderContent)->field_0xd8;
      }
      if (local_c8.PixelShader.ShaderContent == (FDepthOnlyPS *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(uint *)&(local_c8.PixelShader.ShaderContent)->field_0xd8;
      }
      FVar7.PackedData =
           (ulonglong)uVar11 << 0x10 |
           ((ulonglong)uStackX_a << 0x10 | (ulonglong)uVar10) & 0x100000000ffff |
           (ulonglong)bVar3 << 0x31;
    }
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,(ulong64)local_res18,param_4,param_5,param_6,
               &local_78,&local_c8,param_7,param_8,(FMeshDrawCommandSortKey)FVar7,Default,&local_d8)
    ;
    bVar3 = true;
  }
  return bVar3;
}

// FDepthPassMeshProcessor @ 1447f3840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDepthPassMeshProcessor * __thiscall
FDepthPassMeshProcessor::FDepthPassMeshProcessor
          (FDepthPassMeshProcessor *this,Type param_1,FScene *param_2,Type param_3,
          FSceneView *param_4,FMeshPassProcessorRenderState *param_5,bool param_6,
          EDepthDrawingMode param_7,bool param_8,bool param_9,FMeshPassDrawListContext *param_10,
          bool param_11,bool param_12)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_10);
  this->_padding_ = (longlong)&___7FDepthPassMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  this->bRespectUseAsOccluderFlag = param_6;
  this->EarlyZPassMode = param_7;
  this->bEarlyZPassMovable = param_8;
  this->bDitheredLODFadingOutMaskPass = param_9;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  this->bShadowProjection = param_11;
  this->bSecondStageDepthPass = param_12;
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
  return this;
}

// AddMeshBatch @ 144801d60

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FDepthPassMeshProcessor::AddMeshBatch
          (FDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  undefined1 *puVar1;
  double dVar2;
  uchar uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar7;
  FMaterialRenderProxy *pFVar8;
  byte bVar9;
  EShaderPlatform EVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  bVar9 = param_1->bUseForDepthPass;
  if ((((param_1->bUseForDepthPass == 0) || (this->bRespectUseAsOccluderFlag == false)) ||
      (param_1->bUseAsOccluder != 0)) || (2 < (int)this->EarlyZPassMode)) {
    if ((this->EarlyZPassMode == DDM_AllOpaqueNoVelocity) &&
       (param_3 != (FPrimitiveSceneProxy *)0x0)) {
      iVar4 = (int)this->_padding_;
      if (iVar4 == 5) {
        EVar10 = SP_NumPlatforms;
      }
      else {
        EVar10 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar4];
      }
      bVar6 = FOpaqueVelocityMeshProcessor::PrimitiveCanHaveVelocity(EVar10,param_3);
      if (((bVar6) && (this->_padding_ != 0)) &&
         ((bVar6 = FOpaqueVelocityMeshProcessor::PrimitiveHasVelocityForFrame(EVar10,param_3), bVar6
          && (bVar6 = FVelocityMeshProcessor::PrimitiveHasVelocityForView
                                ((FViewInfo *)this->_padding_,param_3), bVar6)))) {
        return;
      }
    }
  }
  else {
    if (param_3 == (FPrimitiveSceneProxy *)0x0) {
      return;
    }
    if ((param_3->bUseAsOccluder == '\0') ||
       (((uVar3 = (param_3->Mobility).Value, uVar3 == '\x02' || (uVar3 == '\x01')) &&
        (this->bEarlyZPassMovable == false)))) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    lVar5 = this->_padding_;
    if (lVar5 != 0) {
      dVar11 = (param_3->Bounds).Origin.field0_0x0._s_0.X - *(double *)(lVar5 + 0xbc8);
      dVar12 = (param_3->Bounds).Origin.field0_0x0._s_0.Y - *(double *)(lVar5 + 0xbd0);
      dVar13 = (param_3->Bounds).Origin.field0_0x0._s_0.Z - *(double *)(lVar5 + 0xbd8);
      if ((bVar9 != 0) &&
         (dVar2 = (param_3->Bounds).SphereRadius,
         (double)((float)((dVar11 * dVar11 + dVar12 * dVar12 + dVar13 * dVar13) *
                         (double)(*(float *)(lVar5 + 0x11c8) * *(float *)(lVar5 + 0x11c8))) *
                 GMinScreenRadiusForDepthPrepass * GMinScreenRadiusForDepthPrepass) < dVar2 * dVar2)
         ) goto LAB_144801edb;
      bVar9 = 0;
    }
  }
  if (bVar9 == 0) {
    return;
  }
LAB_144801edb:
  pFVar8 = param_1->MaterialRenderProxy;
  while ((pFVar8 != (FMaterialRenderProxy *)0x0 &&
         (((this_00 = (FMaterial *)
                      (**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,(int)this->_padding_),
           this_00 == (FMaterial *)0x0 ||
           (pFVar7 = FMaterial::GetRenderingThreadShaderMap(this_00),
           pFVar7 == (FMaterialShaderMap *)0x0)) ||
          (bVar6 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar8,this_00), !bVar6)))))
  {
    pFVar8 = (FMaterialRenderProxy *)
             (**(code **)(pFVar8->_padding_ + 0x38))(pFVar8,(int)this->_padding_);
  }
  return;
}

// CollectDefaultMaterialPSOInitializers @ 144804000

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
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */

void __thiscall
FDepthPassMeshProcessor::CollectDefaultMaterialPSOInitializers
          (FDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_4)

{
  CollectPSOInitializersInternal<1>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,false,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<0>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,false,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<1>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,true,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<0>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,true,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<1>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,false,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<0>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,false,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<1>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,true,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<0>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,true,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<1>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,false,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<0>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,false,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<1>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,true,PT_TriangleList,
             param_4);
  CollectPSOInitializersInternal<0>
            (this,param_1,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,true,PT_TriangleList,
             param_4);
  return;
}

// CollectPSOInitializers @ 144804280

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
FDepthPassMeshProcessor::CollectPSOInitializers
          (FDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  EVertexFactoryFlags EVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  FPSOPrecacheParams *pFVar5;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ERasterizerFillMode EVar10;
  ERasterizerCullMode EVar11;
  longlong lVar12;
  FCachedSystemScalabilityCVars *pFVar13;
  UMaterial *pUVar14;
  FMaterial *pFVar15;
  EVertexFactoryFlags EVar16;
  bool local_38 [8];
  FMeshDrawingPolicyOverrideSettings local_30;
  
  pFVar5 = param_4;
  pTVar4 = CVarPSOPrecacheDitheredLODFadingOutMaskPass.Ref;
  if ((*(byte *)&param_4->field0_0x0 & 0x40) != 0) {
    param_4 = (FPSOPrecacheParams *)param_5;
    CollectDefaultMaterialPSOInitializers(this,param_1,param_2,param_3,param_5);
    return;
  }
  if ((char)this->_padding_ == '\x1e') {
    bVar7 = IsInParallelGameThread();
    if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
      lVar12 = 0;
    }
    else {
      lVar12 = 4;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar12) == 0) {
      return;
    }
  }
  bVar7 = IsTranslucentBlendMode(param_2);
  if ((((!bVar7) && ((*(uint *)&pFVar5->field0_0x0 >> 0xb & 1) != 0)) &&
      (iVar9 = (**(code **)(param_2->_padding_ + 0x40))(param_2), iVar9 != 3)) &&
     (bVar7 = ShouldIncludeMaterialInDefaultOpaquePass(param_2), bVar7)) {
    local_38[0] = false;
    EVar2 = param_3->VertexFactoryType->Flags;
    param_4 = (FPSOPrecacheParams *)((ulonglong)param_4 & 0xffffffffffffff00);
    EVar16 = EVar2 & SupportsPositionOnly;
    bVar7 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2);
    bVar7 = ShouldRender(this,param_2,bVar7,EVar16 != None,(bool)(~(byte)(EVar2 >> 0xf) & 1),
                         (bool *)&param_4,local_38);
    if (bVar7) {
      if ((((char)param_4 == '\0') || (EVar16 != None)) ||
         (param_3->CustomDefaultVertexDeclaration == (FRHIVertexDeclaration *)0x0)) {
        pFVar15 = param_2;
        if ((char)param_4 != '\0') {
          return;
        }
      }
      else {
        pFVar13 = GetCachedScalabilityCVars();
        TVar1 = pFVar13->MaterialQualityLevel;
        pUVar14 = UMaterial::GetDefaultMaterial(MD_Surface);
        pFVar15 = (FMaterial *)
                  (**(code **)(pUVar14->_padding_ + 0x390))(pUVar14,param_1->ShaderPlatform,TVar1);
      }
      if ((local_38[0] != false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bPositionOnly",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DepthRendering.cpp"
                             ,0x485,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_30 = FMeshPassProcessor::ComputeMeshOverrideSettings(pFVar5);
      EVar10 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_30);
      EVar11 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_30);
      param_4 = (FPSOPrecacheParams *)CONCAT44(param_4._4_4_,EVar11);
      if ((((ulonglong)(*(uint *)&pFVar5->field0_0x0 & 0x1e00000) - 0x200000 & 0xffffffffffdfffff)
           == 0) || (cVar8 = (**(code **)(param_2->_padding_ + 0x58))(param_2), cVar8 == '\0')) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pTVar6 = param_5;
      CollectPSOInitializersInternal<0>
                (this,param_1,param_3,pFVar15,EVar10,(ERasterizerCullMode)param_4,false,
                 *(EPrimitiveType *)&pFVar5->field0_0x0 & 0x3f,param_5);
      if (bVar7) {
        CollectPSOInitializersInternal<0>
                  (this,param_1,param_3,pFVar15,EVar10,(ERasterizerCullMode)param_4,true,
                   *(EPrimitiveType *)&pFVar5->field0_0x0 & 0x3f,pTVar6);
      }
    }
  }
  return;
}

// ShouldRender @ 144833bb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDepthPassMeshProcessor::ShouldRender
          (FDepthPassMeshProcessor *this,FMaterial *param_1,bool param_2,bool param_3,bool param_4,
          bool *param_5,bool *param_6)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  
  *param_5 = false;
  *param_6 = false;
  if (((int)this->_padding_ == 1) && (this->EarlyZPassMode == DDM_None)) {
    bVar3 = false;
  }
  else {
    bVar1 = IsOpaqueBlendMode(param_1);
    if ((!bVar1) ||
       ((((this->EarlyZPassMode == DDM_MaskedOnly || (!param_3)) || (param_2)) ||
        (bVar1 = FMaterial::WritesEveryPixel(param_1,false,param_4), !bVar1)))) {
      bVar1 = FMaterial::WritesEveryPixel(param_1,false,param_4);
      if ((bVar1) && (cVar2 = (**(code **)(param_1->_padding_ + 0x60))(param_1), cVar2 == '\0')) {
        bVar1 = false;
        if (this->EarlyZPassMode == DDM_MaskedOnly) {
          return false;
        }
      }
      else {
        bVar1 = true;
        if (this->EarlyZPassMode == DDM_NonMaskedOnly) {
          return false;
        }
      }
      bVar3 = true;
      if ((!bVar1) && (!param_2)) {
        *param_5 = true;
        *param_6 = false;
      }
    }
    else {
      bVar3 = true;
      *param_5 = true;
      *param_6 = true;
    }
  }
  return bVar3;
}

// TryAddMeshBatch @ 144836ee0

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
FDepthPassMeshProcessor::TryAddMeshBatch
          (FDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  longlong lVar9;
  UMaterial *pUVar10;
  FMaterial *pFVar11;
  bool local_res20 [8];
  bool local_38 [8];
  FMeshDrawingPolicyOverrideSettings local_30;
  
  bVar3 = IsTranslucentBlendMode(param_6);
  if ((param_3 == (FPrimitiveSceneProxy *)0x0) ||
     (param_3->bRenderInDepthPass != '\0' || param_3->bRenderInMainPass != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((((!bVar3) && (bVar4)) &&
      (iVar6 = (**(code **)(param_6->_padding_ + 0x40))(param_6), iVar6 != 3)) &&
     (bVar3 = ShouldIncludeMaterialInDefaultOpaquePass(param_6), bVar3)) {
    bVar3 = (bool)(**(code **)(param_1->VertexFactory->_padding_ + 0x38))();
    lVar9 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    uVar1 = *(uint *)(lVar9 + 0x38);
    bVar4 = DoMaterialAndPrimitiveModifyMeshPosition(param_6,param_3);
    local_38[0] = false;
    local_res20[0] = false;
    bVar3 = ShouldRender(this,param_6,bVar4,bVar3,(uVar1 >> 0xf & 1) == 0,local_res20,local_38);
    if (bVar3) {
      pFVar11 = param_6;
      if (local_res20[0] != false) {
        pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_5 = (FMaterialRenderProxy *)(**(code **)(pUVar10->_padding_ + 0x310))(pUVar10);
        pFVar11 = (FMaterial *)
                  (**(code **)(param_5->_padding_ + 0x30))(param_5,(int)this->_padding_);
        if ((pFVar11 == (FMaterial *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EffectiveMaterial",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DepthRendering.cpp"
                               ,0x3f7,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      local_30 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
      EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_30);
      EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_30);
      if (local_38[0] == false) {
        bVar3 = Process<0>(this,param_1,param_2,param_4,param_3,param_5,pFVar11,EVar7,EVar8);
      }
      else {
        bVar3 = Process<1>(this,param_1,param_2,param_4,param_3,param_5,pFVar11,EVar7,EVar8);
      }
    }
    else {
      bVar3 = true;
    }
    return bVar3;
  }
  return true;
}

