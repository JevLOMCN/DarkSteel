// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FHairMaterialProcessor @ 14499e050

/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FHairMaterialProcessor * __thiscall
FHairMaterialProcessor::FHairMaterialProcessor
          (FHairMaterialProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FDynamicPassMeshDrawListContext *param_4,EHairMaterialPassFilter param_5)

{
  TRefCountPtr<FRHIBlendState> TVar1;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,HairMaterialPassName,param_1,param_2,param_3,
             (FMeshPassDrawListContext *)param_4);
  this->_padding_ = (longlong)&___7FHairMaterialProcessor__6B_;
  this->Filter = param_5;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  TVar1 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
          ::StaticResource.StateRHI;
  if (EmissiveOnly < param_5) {
    TVar1 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
  }
  (this->PassDrawRenderState).BlendState = TVar1.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).StencilRef = 0;
  return this;
}

// operator() @ 1449a7600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __thiscall
`FHairMaterialProcessor::CollectPSOInitializers'::__l2::<lambda_1>::operator()
          (void *this,EHairMaterialPassFilter param_1)

{
  longlong lVar1;
  TRefCountPtr<FRHIBlendState> TVar2;
  EPixelFormat EVar3;
  undefined1 auStackY_f8 [32];
  FGraphicsPipelineRenderTargetsInfo local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_88.RenderTargetsEnabled = 0;
  local_88.RenderTargetFormats.Elements[0] = '\0';
  local_88.RenderTargetFormats.Elements[1] = '\0';
  local_88.RenderTargetFormats.Elements[2] = '\0';
  local_88.RenderTargetFormats.Elements[3] = '\0';
  local_88.RenderTargetFormats.Elements[4] = '\0';
  local_88.RenderTargetFormats.Elements[5] = '\0';
  local_88.RenderTargetFormats.Elements[6] = '\0';
  local_88.RenderTargetFormats.Elements[7] = '\0';
  local_88.RenderTargetFlags.Elements[0] = None;
  local_88.RenderTargetFlags.Elements[1] = None;
  local_88.RenderTargetFlags.Elements[2] = None;
  local_88.RenderTargetFlags.Elements[3] = None;
  local_88.RenderTargetFlags.Elements[4] = None;
  local_88.RenderTargetFlags.Elements[5] = None;
  local_88.RenderTargetFlags.Elements[6] = None;
  local_88.RenderTargetFlags.Elements[7] = None;
  local_88.DepthStencilTargetFormat = PF_Unknown;
  local_88.DepthStencilTargetFlag = None;
  local_88.DepthTargetLoadAction = ENoAction;
  local_88.DepthTargetStoreAction = ENoAction;
  local_88.StencilTargetLoadAction = ENoAction;
  local_88.StencilTargetStoreAction = ENoAction;
  local_88.DepthStencilAccess.Value = DepthNop;
  local_88.NumSamples = 0;
  local_88.MultiViewCount = '\0';
  local_88.bHasFragmentDensityAttachment = false;
  if ((param_1 == All) || (param_1 == EmissiveOnly)) {
    local_88.NumSamples = 1;
    local_88.MultiViewCount = '\0';
    local_88.bHasFragmentDensityAttachment = false;
    EVar3 = PF_FloatRGBA;
    if (0 < GHairStrandsLightSampleFormat) {
      EVar3 = PF_FloatRGBA;
      if (ZPULL(GPixelFormats[0x1a],0,1) != 0) {
        EVar3 = PF_FloatR11G11B10;
      }
    }
    AddRenderTargetInfo(EVar3,UAV|ShaderResource|RenderTargetable,&local_88);
  }
  lVar1 = *(longlong *)this;
  TVar2.Reference =
       TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (EmissiveOnly < param_1) {
    TVar2.Reference =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  *(FRHIBlendState **)(lVar1 + 0x38) = TVar2.Reference;
  *(FRHIDepthStencilState **)(lVar1 + 0x40) =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  *(undefined4 *)(lVar1 + 0x70) = 0;
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FHairMaterialVS,FHairMaterialPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (*(FPSOPrecacheVertexFactoryData **)((longlong)this + 8),
             *(FMaterial **)((longlong)this + 0x10),
             (FMeshPassProcessorRenderState *)(*(longlong *)this + 0x38),&local_88,
             *(TMeshProcessorShaders<FHairMaterialVS,FHairMaterialPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
               **)((longlong)this + 0x18),ERasterizerFillMode_NumBits,CM_CCW,
             **(EPrimitiveType **)((longlong)this + 0x20) & 0x3f,Default,None,'\0',true,
             *(int *)(*(longlong *)this + 8),
             *(TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28));
  return;
}

// AddMeshBatch @ 1449bccc0

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
FHairMaterialProcessor::AddMeshBatch
          (FHairMaterialProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,int param_5,int param_6,uint param_7,
          float param_8)

{
  bool bVar1;
  FMaterial *pFVar2;
  FMaterialRenderProxy *pFVar3;
  
  pFVar3 = param_1->MaterialRenderProxy;
  while ((pFVar3 != (FMaterialRenderProxy *)0x0 &&
         ((pFVar2 = (FMaterial *)
                    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,(int)this->_padding_),
          pFVar2 == (FMaterial *)0x0 ||
          (bVar1 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                   param_8,pFVar3,pFVar2), !bVar1))))) {
    pFVar3 = (FMaterialRenderProxy *)
             (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,(int)this->_padding_);
  }
  return;
}

// AddMeshBatch @ 1449bcdc0

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
FHairMaterialProcessor::AddMeshBatch
          (FHairMaterialProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  AddMeshBatch(this,param_1,param_2,param_3,param_4,0,0,0,__real_3f800000);
  return;
}

// CollectPSOInitializers @ 1449c3f00

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

void __thiscall
FHairMaterialProcessor::CollectPSOInitializers
          (FHairMaterialProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  undefined1 auStack_1f8 [32];
  FHairMaterialProcessor *local_1d8;
  FPSOPrecacheVertexFactoryData *local_1d0;
  FMaterial *local_1c8;
  FShader **local_1c0;
  FPSOPrecacheParams *local_1b8;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_1b0;
  FShader *local_1a8;
  FShaderMapBase *pFStack_1a0;
  FShader *local_198;
  FShaderMapBase *pFStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  bVar4 = ShouldRenderHairStrands
                    ((Type)this->_padding_,param_2,param_3->VertexFactoryType,
                     (bool)((byte)(*(uint *)&param_4->field0_0x0 >> 10) & 1));
  if (bVar4) {
    local_1a8 = (FShader *)0x0;
    pFStack_1a0 = (FShaderMapBase *)0x0;
    local_198 = (FShader *)0x0;
    pFStack_190 = (FShaderMapBase *)0x0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_e8.ShaderType[0] = (FShaderType *)0x0;
    local_e8.ShaderType[1] = (FShaderType *)0x0;
    local_e8.ShaderType[2] = (FShaderType *)0x0;
    local_e8.ShaderType[3] = (FShaderType *)0x0;
    local_e8.PipelineType = (FShaderPipelineType *)0x0;
    local_e8.ShaderType[4] = (FShaderType *)0x0;
    local_e8.ShaderType[5] = (FShaderType *)0x0;
    local_e8.ShaderType[6] = (FShaderType *)0x0;
    local_e8.ShaderType[7] = (FShaderType *)0x0;
    local_e8.ShaderType[8] = (FShaderType *)0x0;
    local_e8.ShaderType[9] = (FShaderType *)0x0;
    local_e8.ShaderType[10] = (FShaderType *)0x0;
    local_e8.ShaderType[0xb] = (FShaderType *)0x0;
    local_e8.PermutationId[0] = 0;
    local_e8.PermutationId[1] = 0;
    local_e8.PermutationId[2] = 0;
    local_e8.PermutationId[3] = 0;
    local_e8.PermutationId[4] = 0;
    local_e8.PermutationId[5] = 0;
    local_e8.PermutationId[6] = 0;
    local_e8.PermutationId[7] = 0;
    local_e8.PermutationId[8] = 0;
    local_e8.PermutationId[9] = 0;
    local_e8.PermutationId[10] = 0;
    local_e8.PermutationId[0xb] = 0;
    pFVar5 = (FShaderType *)FHairMaterialVS::GetStaticType();
    bVar1 = (byte)pFVar5->Frequency;
    if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_e8.ShaderType[bVar1] = pFVar5;
    local_e8.PermutationId[bVar1] = 0;
    pFVar5 = (FShaderType *)FHairMaterialPS::GetStaticType();
    bVar1 = (byte)pFVar5->Frequency;
    if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = param_3->VertexFactoryType;
    local_e8.ShaderType[bVar1] = pFVar5;
    local_e8.PermutationId[bVar1] = 0;
    local_158.ShaderMap = (FShaderMapBase *)0x0;
    local_158.Pipeline = (FShaderPipeline *)0x0;
    local_158.Shaders[0] = (FShader *)0x0;
    local_158.Shaders[1] = (FShader *)0x0;
    local_158.Shaders[2] = (FShader *)0x0;
    local_158.Shaders[3] = (FShader *)0x0;
    local_158.Shaders[4] = (FShader *)0x0;
    local_158.Shaders[5] = (FShader *)0x0;
    local_158.Shaders[6] = (FShader *)0x0;
    local_158.Shaders[7] = (FShader *)0x0;
    local_158.Shaders[8] = (FShader *)0x0;
    local_158.Shaders[9] = (FShader *)0x0;
    local_158.Shaders[10] = (FShader *)0x0;
    local_158.Shaders[0xb] = (FShader *)0x0;
    bVar4 = FMaterial::TryGetShaders(param_2,&local_e8,pFVar2,&local_158);
    if (bVar4) {
      if (local_158.Shaders[0] != (FShader *)0x0) {
        local_1a8 = local_158.Shaders[0];
        pFStack_1a0 = local_158.ShaderMap;
      }
      if (local_158.Shaders[3] != (FShader *)0x0) {
        local_198 = local_158.Shaders[3];
        pFStack_190 = local_158.ShaderMap;
      }
      local_1c0 = &local_1a8;
      local_1b0 = param_5;
      local_1b8 = param_4;
      local_1d8 = this;
      local_1d0 = param_3;
      local_1c8 = param_2;
      `FHairMaterialProcessor::CollectPSOInitializers'::__l2::<lambda_1>::operator()(&local_1d8,All)
      ;
      `FHairMaterialProcessor::CollectPSOInitializers'::__l2::<lambda_1>::operator()
                (&local_1d8,EmissiveOnly);
      `FHairMaterialProcessor::CollectPSOInitializers'::__l2::<lambda_1>::operator()
                (&local_1d8,NonEmissiveOnly);
    }
  }
  return;
}

// Process @ 1449f8e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FHairMaterialProcessor::Process
          (FHairMaterialProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,int param_7,int param_8,int param_9,uint param_10,uint param_11,float param_12)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  FShaderType *pFVar9;
  FVertexFactoryType *pFVar10;
  undefined1 auStackY_298 [32];
  FHairMaterialShaderElementData local_218;
  TMeshProcessorShaders<FHairMaterialVS,FHairMaterialPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar2 = param_1->VertexFactory;
  local_1e8.VertexShader.ShaderContent = (FHairMaterialVS *)0x0;
  local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.PixelShader.ShaderContent = (FHairMaterialPS *)0x0;
  local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
  local_e8.ShaderType[4] = (FShaderType *)0x0;
  local_e8.ShaderType[5] = (FShaderType *)0x0;
  local_e8.ShaderType[6] = (FShaderType *)0x0;
  local_e8.ShaderType[7] = (FShaderType *)0x0;
  local_e8.ShaderType[8] = (FShaderType *)0x0;
  local_e8.ShaderType[9] = (FShaderType *)0x0;
  local_e8.ShaderType[10] = (FShaderType *)0x0;
  local_e8.ShaderType[0xb] = (FShaderType *)0x0;
  local_e8.PermutationId[0] = 0;
  local_e8.PermutationId[1] = 0;
  local_e8.PermutationId[2] = 0;
  local_e8.PermutationId[3] = 0;
  local_e8.PermutationId[4] = 0;
  local_e8.PermutationId[5] = 0;
  local_e8.PermutationId[6] = 0;
  local_e8.PermutationId[7] = 0;
  local_e8.PermutationId[8] = 0;
  local_e8.PermutationId[9] = 0;
  local_e8.PermutationId[10] = 0;
  local_e8.PermutationId[0xb] = 0;
  pFVar9 = (FShaderType *)FHairMaterialVS::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FShaderType *)FHairMaterialPS::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = pFVar2->_padding_;
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar10 = (FVertexFactoryType *)(**(code **)(lVar3 + 0x30))(pFVar2);
  local_198.ShaderMap = (FShaderMapBase *)0x0;
  local_198.Pipeline = (FShaderPipeline *)0x0;
  local_198.Shaders[0] = (FShader *)0x0;
  local_198.Shaders[1] = (FShader *)0x0;
  local_198.Shaders[2] = (FShader *)0x0;
  local_198.Shaders[3] = (FShader *)0x0;
  local_198.Shaders[4] = (FShader *)0x0;
  local_198.Shaders[5] = (FShader *)0x0;
  local_198.Shaders[6] = (FShader *)0x0;
  local_198.Shaders[7] = (FShader *)0x0;
  local_198.Shaders[8] = (FShader *)0x0;
  local_198.Shaders[9] = (FShader *)0x0;
  local_198.Shaders[10] = (FShader *)0x0;
  local_198.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar10,&local_198);
  bVar5 = false;
  if (bVar7) {
    if ((FHairMaterialVS *)local_198.Shaders[0] != (FHairMaterialVS *)0x0) {
      local_1e8.VertexShader.ShaderContent = (FHairMaterialVS *)local_198.Shaders[0];
      local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
    }
    if ((FHairMaterialPS *)local_198.Shaders[3] != (FHairMaterialPS *)0x0) {
      local_1e8.PixelShader.ShaderContent = (FHairMaterialPS *)local_198.Shaders[3];
      local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
    }
    local_128.BlendState = (this->PassDrawRenderState).BlendState;
    local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_218.MaterialPass_MacroGroupId = param_7;
    local_218.MaterialPass_MaterialId = param_8;
    local_218.MaterialPass_PrimitiveId = param_9;
    local_218.MaterialPass_LightChannelMask = param_10;
    local_218.MaterialPass_Flags = param_11;
    local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_218.MaterialPass_HairCoverageScale = (uint)(longlong)param_12;
    local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_218._padding_ = 0;
    local_218._padding_ = 0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_218,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    cVar8 = '\0';
    if (this->_padding_ != 0) {
      cVar8 = *(char *)(this->_padding_ + 0x11ed);
    }
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FHairMaterialVS,FHairMaterialPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FHairMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_128,
               &local_1e8,ERasterizerFillMode_NumBits,CM_CCW - (cVar8 != '\0'),
               FMeshDrawCommandSortKey::Default,Default,&local_218);
    bVar5 = true;
  }
  return bVar5;
}

// SetupDrawRenderState @ 1449fe870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHairMaterialProcessor::SetupDrawRenderState
          (FHairMaterialProcessor *this,EHairMaterialPassFilter param_1)

{
  TRefCountPtr<FRHIBlendState> TVar1;
  
  TVar1.Reference =
       TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (EmissiveOnly < param_1) {
    TVar1.Reference =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  (this->PassDrawRenderState).BlendState = TVar1.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).StencilRef = 0;
  return;
}

// TryAddMeshBatch @ 144a07fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FHairMaterialProcessor::TryAddMeshBatch
          (FHairMaterialProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,uint param_5,uint param_6,uint param_7,
          float param_8,FMaterialRenderProxy *param_9,FMaterial *param_10)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FVertexFactoryType *pFVar7;
  ForElementType<FMeshBatchElement> FVar8;
  uint uVar9;
  FPrimitiveSceneInfo *pFVar10;
  FPrimitiveSceneInfo *pFVar11;
  uint uVar12;
  undefined1 auStackY_1d8 [32];
  FMeshDrawCommandPrimitiveIdInfo local_138;
  FMeshBatch local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 == (FPrimitiveSceneProxy *)0x0) {
    if (0 < (param_1->Elements).ArrayNum) {
LAB_144a082d2:
      bVar3 = true;
      goto LAB_144a08041;
    }
  }
  else if (param_3->bRenderInMainPass != '\0') goto LAB_144a082d2;
  bVar3 = false;
LAB_144a08041:
  pFVar7 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar3 = ShouldRenderHairStrands((Type)this->_padding_,param_10,pFVar7,bVar3);
  if (bVar3) {
    FMeshBatch::FMeshBatch(&local_128,param_1);
    uVar1 = (param_1->Elements).ArrayNum;
    pFVar11 = (FPrimitiveSceneInfo *)0x0;
    uVar12 = 0;
    pFVar10 = pFVar11;
    if (uVar1 != 0) {
      do {
        uVar9 = (uint)pFVar10;
        uVar5 = uVar12;
        if ((int)uVar9 < local_128.Elements.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar8 = (ForElementType<FMeshBatchElement>)&local_128;
        if (local_128.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar8 = local_128.Elements.AllocatorInstance.SecondaryData;
        }
        *(undefined4 *)((longlong)(int)uVar9 * 0x98 + 0x58 + (longlong)FVar8) = 0;
        uVar5 = uVar12;
        if ((int)uVar9 < local_128.Elements.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar8 = (ForElementType<FMeshBatchElement>)&local_128;
        if (local_128.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar8 = local_128.Elements.AllocatorInstance.SecondaryData;
        }
        *(undefined4 *)((longlong)(int)uVar9 * 0x98 + 0x5c + (longlong)FVar8) = 1;
        uVar6 = 0;
        uVar5 = uVar6;
        if ((int)uVar9 < local_128.Elements.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar8 = (ForElementType<FMeshBatchElement>)&local_128;
        if (local_128.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar8 = local_128.Elements.AllocatorInstance.SecondaryData;
        }
        *(undefined4 *)((longlong)(int)uVar9 * 0x98 + 0x60 + (longlong)FVar8) = 1;
        uVar5 = uVar6;
        if ((int)uVar9 < local_128.Elements.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar8 = (ForElementType<FMeshBatchElement>)&local_128;
        if (local_128.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar8 = local_128.Elements.AllocatorInstance.SecondaryData;
        }
        *(undefined8 *)((longlong)(int)uVar9 * 0x98 + 0x48 + (longlong)FVar8) = 0;
        if ((int)uVar9 < local_128.Elements.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar8 = (ForElementType<FMeshBatchElement>)&local_128;
        if (local_128.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar8 = local_128.Elements.AllocatorInstance.SecondaryData;
        }
        *(undefined4 *)((longlong)(int)uVar9 * 0x98 + 0x50 + (longlong)FVar8) = 0;
        pFVar10 = (FPrimitiveSceneInfo *)(ulonglong)(uVar9 + 1);
      } while (uVar9 + 1 < uVar1);
    }
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
      pFVar11 = param_3->PrimitiveSceneInfo;
    }
    if (((param_1->Elements).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar8 = (param_1->Elements).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FMeshBatchElement>)0x0) {
      param_1 = (FMeshBatch *)FVar8;
    }
    FMeshPassProcessor::GetDrawCommandPrimitiveId
              ((FMeshPassProcessor *)this,&local_138,pFVar11,(FMeshBatchElement *)param_1);
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
      uVar12 = (uint)param_3->LightingChannelMask;
    }
    bVar3 = Process(this,&local_128,param_2,param_3,param_4,param_9,param_10,param_5,param_6,
                    local_138.DrawPrimitiveId,uVar12,param_7,param_8);
    FVar8 = (ForElementType<FMeshBatchElement>)&local_128;
    if (local_128.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0
       ) {
      FVar8 = local_128.Elements.AllocatorInstance.SecondaryData;
    }
    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar8,local_128.Elements.ArrayNum);
    if (local_128.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0
       ) {
      FMemory::Free((void *)local_128.Elements.AllocatorInstance.SecondaryData);
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

