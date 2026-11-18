// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FVoxelizeVolumeMeshProcessor @ 145859830

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

FVoxelizeVolumeMeshProcessor * __thiscall
FVoxelizeVolumeMeshProcessor::FVoxelizeVolumeMeshProcessor
          (FVoxelizeVolumeMeshProcessor *this,FScene *param_1,Type param_2,FViewInfo *param_3,
          FMeshPassDrawListContext *param_4)

{
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,VoxelizeVolumePassName,param_1,param_2,(FSceneView *)param_3
             ,param_4);
  this->_padding_ = (longlong)&___7FVoxelizeVolumeMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  return this;
}

// operator() @ 14585a9f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVoxelizeVolumeMeshProcessor::CollectPSOInitializers'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  bool bVar1;
  TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>
  local_58;
  
  local_58.VertexShader.ShaderContent = (FVoxelizeVolumeVS *)0x0;
  local_58.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.PixelShader.ShaderContent = (FVoxelizeVolumePS *)0x0;
  local_58.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.GeometryShader.ShaderContent = (FVoxelizeVolumeGS *)0x0;
  local_58.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_58.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_58.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_58.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar1 = GetVoxelizeVolumePassShaders
                    (*(FMaterial **)this,(FVertexFactoryType *)**(undefined8 **)((longlong)this + 8)
                     ,*(Type *)(*(longlong *)((longlong)this + 0x10) + 0x20),param_1,
                     &local_58.VertexShader,&local_58.GeometryShader,&local_58.PixelShader);
  if (bVar1) {
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>_>
              (*(FPSOPrecacheVertexFactoryData **)((longlong)this + 8),*(FMaterial **)this,
               (FMeshPassProcessorRenderState *)(*(longlong *)((longlong)this + 0x10) + 0x38),
               *(FGraphicsPipelineRenderTargetsInfo **)((longlong)this + 0x18),&local_58,
               **(ERasterizerFillMode **)((longlong)this + 0x20),
               **(ERasterizerCullMode **)((longlong)this + 0x28),
               **(EPrimitiveType **)((longlong)this + 0x30) & 0x3f,Default,None,'\0',true,
               *(int *)(*(longlong *)((longlong)this + 0x10) + 8),
               *(TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x38));
  }
  return;
}

// AddMeshBatch @ 1458615b0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FVoxelizeVolumeMeshProcessor::AddMeshBatch
          (FVoxelizeVolumeMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4)

{
  longlong lVar1;
  ERasterizerFillMode EVar2;
  int iVar3;
  FMaterial *pFVar4;
  FVertexFactoryType *pFVar5;
  FMaterialRenderProxy *pFVar6;
  FMeshDrawCommandSortKey FVar7;
  int iVar8;
  bool bVar9;
  FMeshDrawingPolicyOverrideSettings local_a8;
  FVoxelizeVolumeShaderElementData local_a0;
  TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar6 = param_1->MaterialRenderProxy;
  do {
    if (pFVar6 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar4 = (FMaterial *)(**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,(int)this->_padding_);
    if (pFVar4 != (FMaterial *)0x0) {
      local_a8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
      EVar2 = FMeshPassProcessor::ComputeMeshFillMode(pFVar4,&local_a8);
      bVar9 = (FQuadMeshVertexFactory *)param_1->VertexFactory != GQuadMeshVertexFactory;
      lVar1 = this->_padding_;
      local_88.VertexShader.ShaderContent = (FVoxelizeVolumeVS *)0x0;
      local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.PixelShader.ShaderContent = (FVoxelizeVolumePS *)0x0;
      local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.GeometryShader.ShaderContent = (FVoxelizeVolumeGS *)0x0;
      local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      pFVar5 = (FVertexFactoryType *)(**(code **)(*(longlong *)param_1->VertexFactory + 0x30))();
      bVar9 = GetVoxelizeVolumePassShaders
                        (pFVar4,pFVar5,(Type)lVar1,bVar9,&local_88.VertexShader,
                         &local_88.GeometryShader,&local_88.PixelShader);
      if (bVar9) {
        FVar7 = CalculateMeshStaticSortKey
                          ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                           (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
        iVar8 = 0;
        iVar3 = GVolumetricFogVoxelizationShowOnlyPassIndex;
        if (param_3 < 1) {
          return;
        }
        do {
          if ((iVar3 < 0) || (iVar3 == iVar8)) {
            local_a0._padding_ = 0;
            local_a0._padding_ = 0;
            local_a0.VoxelizationPassIndex = iVar8;
            FMeshMaterialShaderElementData::InitializeMeshMaterialData
                      ((FMeshMaterialShaderElementData *)&local_a0,(FSceneView *)this->_padding_,
                       param_4,param_1,-1,true);
            FMeshPassProcessor::
            BuildMeshDrawCommands<TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>,FVoxelizeVolumeShaderElementData>
                      ((FMeshPassProcessor *)this,param_1,param_2,param_4,pFVar6,pFVar4,
                       &this->PassDrawRenderState,&local_88,EVar2,CM_None,FVar7,Default,&local_a0);
            iVar3 = GVolumetricFogVoxelizationShowOnlyPassIndex;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_3);
        return;
      }
    }
    pFVar6 = (FMaterialRenderProxy *)
             (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,(int)this->_padding_);
  } while( true );
}

// AddMeshBatch @ 1458617f0

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
FVoxelizeVolumeMeshProcessor::AddMeshBatch
          (FVoxelizeVolumeMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricFogVoxelization.cpp"
                     ,0x187,
                     L"Default AddMeshBatch can\'t be used as rendering requires extra parameters per pass."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CollectPSOInitializers @ 145862080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVoxelizeVolumeMeshProcessor::CollectPSOInitializers
          (FVoxelizeVolumeMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  IConsoleManager *pIVar2;
  undefined1 auStack_168 [32];
  ERasterizerFillMode local_148 [2];
  TIntVector3<int>_u_0 local_140;
  FMeshDrawingPolicyOverrideSettings local_130;
  FMaterial *local_128;
  FPSOPrecacheVertexFactoryData *local_120;
  FVoxelizeVolumeMeshProcessor *local_118;
  FGraphicsPipelineRenderTargetsInfo *local_110;
  ERasterizerFillMode *local_108;
  ERasterizerFillMode *local_100;
  FPSOPrecacheParams *local_f8;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_f0;
  FGraphicsPipelineRenderTargetsInfo local_e8;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  iVar1 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (iVar1 == 3) {
    local_130 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    local_148[0] = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_130);
    local_148[1] = 0;
    local_140._0_8_ = 0;
    local_140._s_0.Z = 0;
    GetVolumetricFogRDGTextureDesc((FRDGTextureDesc *)local_78,(TIntVector3<int> *)&local_140._s_0);
    local_e8.RenderTargetsEnabled = 0;
    local_e8.RenderTargetFormats.Elements[0] = '\0';
    local_e8.RenderTargetFormats.Elements[1] = '\0';
    local_e8.RenderTargetFormats.Elements[2] = '\0';
    local_e8.RenderTargetFormats.Elements[3] = '\0';
    local_e8.RenderTargetFormats.Elements[4] = '\0';
    local_e8.RenderTargetFormats.Elements[5] = '\0';
    local_e8.RenderTargetFormats.Elements[6] = '\0';
    local_e8.RenderTargetFormats.Elements[7] = '\0';
    local_e8.DepthStencilTargetFormat = PF_Unknown;
    local_e8.DepthStencilTargetFlag = None;
    local_e8.DepthTargetLoadAction = ENoAction;
    local_e8.DepthTargetStoreAction = ENoAction;
    local_e8.StencilTargetLoadAction = ENoAction;
    local_e8.StencilTargetStoreAction = ENoAction;
    local_e8.DepthStencilAccess.Value = DepthNop;
    local_e8.RenderTargetFlags.Elements[0] = None;
    local_e8.RenderTargetFlags.Elements[1] = None;
    local_e8.RenderTargetFlags.Elements[2] = None;
    local_e8.RenderTargetFlags.Elements[3] = None;
    local_e8.RenderTargetFlags.Elements[4] = None;
    local_e8.RenderTargetFlags.Elements[5] = None;
    local_e8.RenderTargetFlags.Elements[6] = None;
    local_e8.RenderTargetFlags.Elements[7] = None;
    local_e8.NumSamples = 1;
    local_e8.MultiViewCount = '\0';
    local_e8.bHasFragmentDensityAttachment = false;
    AddRenderTargetInfo(local_78[0x33],local_78._0_8_,&local_e8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar2 = IConsoleManager::Get();
      CVarVolumetrixFogEmissive =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.VolumetricFog.Emissive",1);
      _Init_thread_footer(&::_TSS0);
    }
    if ((CVarVolumetrixFogEmissive == (IConsoleVariable *)0x0) ||
       (iVar1 = (**(code **)(*(longlong *)CVarVolumetrixFogEmissive + 200))(), 0 < iVar1)) {
      AddRenderTargetInfo(local_78[0x33],local_78._0_8_,&local_e8);
    }
    local_110 = &local_e8;
    local_108 = local_148;
    local_100 = local_148 + 1;
    local_f0 = param_5;
    local_f8 = param_4;
    local_128 = param_2;
    local_120 = param_3;
    local_118 = this;
    `FVoxelizeVolumeMeshProcessor::CollectPSOInitializers'::__l2::<lambda_1>::operator()
              (&local_128,true);
    `FVoxelizeVolumeMeshProcessor::CollectPSOInitializers'::__l2::<lambda_1>::operator()
              (&local_128,false);
    if ((void *)local_78._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._64_8_);
    }
    return;
  }
  return;
}

// Process @ 14587fdc0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FVoxelizeVolumeMeshProcessor::Process
          (FVoxelizeVolumeMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,int param_6
          ,ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  longlong lVar1;
  int iVar2;
  FVertexFactoryType *pFVar3;
  FMeshDrawCommandSortKey FVar4;
  int iVar5;
  bool bVar6;
  FVoxelizeVolumeShaderElementData local_98;
  TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  bVar6 = (FQuadMeshVertexFactory *)param_1->VertexFactory != GQuadMeshVertexFactory;
  local_78.VertexShader.ShaderContent = (FVoxelizeVolumeVS *)0x0;
  local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  lVar1 = this->_padding_;
  local_78.PixelShader.ShaderContent = (FVoxelizeVolumePS *)0x0;
  local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.GeometryShader.ShaderContent = (FVoxelizeVolumeGS *)0x0;
  local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar3 = (FVertexFactoryType *)(**(code **)(*(longlong *)param_1->VertexFactory + 0x30))();
  bVar6 = GetVoxelizeVolumePassShaders
                    (param_5,pFVar3,(Type)lVar1,bVar6,&local_78.VertexShader,
                     &local_78.GeometryShader,&local_78.PixelShader);
  if (bVar6) {
    FVar4 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
    iVar5 = 0;
    iVar2 = GVolumetricFogVoxelizationShowOnlyPassIndex;
    if (0 < param_6) {
      do {
        if ((iVar2 < 0) || (iVar2 == iVar5)) {
          local_98._padding_ = 0;
          local_98._padding_ = 0;
          local_98.VoxelizationPassIndex = iVar5;
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    ((FMeshMaterialShaderElementData *)&local_98,(FSceneView *)this->_padding_,
                     param_3,param_1,-1,true);
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>,FVoxelizeVolumeShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
                     &this->PassDrawRenderState,&local_78,param_7,param_8,FVar4,Default,&local_98);
          iVar2 = GVolumetricFogVoxelizationShowOnlyPassIndex;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_6);
    }
    return true;
  }
  return false;
}

// TryAddMeshBatch @ 14588ecd0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FVoxelizeVolumeMeshProcessor::TryAddMeshBatch
          (FVoxelizeVolumeMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,int param_6
          )

{
  longlong lVar1;
  ERasterizerFillMode EVar2;
  int iVar3;
  FVertexFactoryType *pFVar4;
  FMeshDrawCommandSortKey FVar5;
  int iVar6;
  bool bVar7;
  FMeshDrawingPolicyOverrideSettings local_res10;
  ulong64 local_res18;
  FVoxelizeVolumeShaderElementData local_a8;
  TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  local_res18 = param_2;
  local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar2 = FMeshPassProcessor::ComputeMeshFillMode(param_5,&local_res10);
  bVar7 = (FQuadMeshVertexFactory *)param_1->VertexFactory != GQuadMeshVertexFactory;
  lVar1 = this->_padding_;
  local_88.VertexShader.ShaderContent = (FVoxelizeVolumeVS *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent = (FVoxelizeVolumePS *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FVoxelizeVolumeGS *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar4 = (FVertexFactoryType *)(**(code **)(*(longlong *)param_1->VertexFactory + 0x30))();
  bVar7 = GetVoxelizeVolumePassShaders
                    (param_5,pFVar4,(Type)lVar1,bVar7,&local_88.VertexShader,
                     &local_88.GeometryShader,&local_88.PixelShader);
  if (bVar7) {
    FVar5 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
    iVar6 = 0;
    iVar3 = GVolumetricFogVoxelizationShowOnlyPassIndex;
    if (0 < param_6) {
      do {
        if ((iVar3 < 0) || (iVar3 == iVar6)) {
          local_a8._padding_ = 0;
          local_a8._padding_ = 0;
          local_a8.VoxelizationPassIndex = iVar6;
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    ((FMeshMaterialShaderElementData *)&local_a8,(FSceneView *)this->_padding_,
                     param_3,param_1,-1,true);
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FVoxelizeVolumeVS,FVoxelizeVolumePS,FVoxelizeVolumeGS,FMeshMaterialShader,FMeshMaterialShader>,FVoxelizeVolumeShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,local_res18,param_3,param_4,param_5,
                     &this->PassDrawRenderState,&local_88,EVar2,CM_None,FVar5,Default,&local_a8);
          iVar3 = GVolumetricFogVoxelizationShowOnlyPassIndex;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_6);
    }
    return true;
  }
  return false;
}

