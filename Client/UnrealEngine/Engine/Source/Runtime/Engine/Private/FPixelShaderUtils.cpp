// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DrawFullscreenPixelShader<FSSProfilePreIntegratedPS> @ 148435010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FSSProfilePreIntegratedPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FSSProfilePreIntegratedPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FShaderMapResource *this;
  FShaderMapBase *pFVar5;
  FShader *this_00;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  atomic<FRHIShader_*> aVar9;
  FShaderParametersMetadata *pFVar10;
  atomic<FRHIShader_*> aVar11;
  float fVar12;
  undefined1 auStackY_1e8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_198;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_188;
  FGraphicsPipelineStateInitializer local_178;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((param_3->ShaderContent == (FSSProfilePreIntegratedPS *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = *(int *)((longlong)&param_5->field0_0x0 + 0xc);
  aVar11 = (atomic<FRHIShader_*>)0x0;
  iVar3 = *(int *)((longlong)&param_5->field0_0x0 + 8);
  iVar4 = *(int *)&param_5->field0_0x0;
  fVar12 = (float)*(int *)((longlong)&param_5->field0_0x0 + 4);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar8;
    *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar8 + 2) = (float)iVar4;
    *(float *)((longlong)puVar8 + 0x14) = fVar12;
    *(float *)((longlong)puVar8 + 0x1c) = (float)iVar3;
    *(float *)(puVar8 + 4) = (float)iVar2;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  }
  else {
    bVar1 = param_1->field_0x6a;
    if (((bVar1 == 0) || ((bVar1 & bVar1 - 1) != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSingleRHIPipeline(ActivePipelines)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b0,
                           L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(longlong *)&param_1->field_0x38 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GraphicsContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b1,
                           L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(**(longlong **)&param_1->field_0x38 + 0x1a0))
              (*(longlong **)&param_1->field_0x38,(float)iVar4,fVar12,0);
  }
  local_198.ShaderContent = (FShader *)param_3->ShaderContent;
  local_198.ShaderMap = param_3->ShaderMap;
  local_178.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_178.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_178.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_178.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_178.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_178.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_178.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_178.BlendState = (FRHIBlendState *)0x0;
  local_178.RasterizerState = (FRHIRasterizerState *)0x0;
  local_178.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_178.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_178.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_178.RenderTargetsEnabled = 0;
  local_178.RenderTargetFormats.Elements[0] = '\0';
  local_178.RenderTargetFormats.Elements[1] = '\0';
  local_178.RenderTargetFormats.Elements[2] = '\0';
  local_178.RenderTargetFormats.Elements[3] = '\0';
  local_178.RenderTargetFormats.Elements[4] = '\0';
  local_178.RenderTargetFormats.Elements[5] = '\0';
  local_178.RenderTargetFormats.Elements[6] = '\0';
  local_178.RenderTargetFormats.Elements[7] = '\0';
  local_178.RenderTargetFlags.Elements[0] = None;
  local_178.RenderTargetFlags.Elements[1] = None;
  local_178.RenderTargetFlags.Elements[2] = None;
  local_178.RenderTargetFlags.Elements[3] = None;
  local_178.RenderTargetFlags.Elements[4] = None;
  local_178.RenderTargetFlags.Elements[5] = None;
  local_178.RenderTargetFlags.Elements[6] = None;
  local_178.RenderTargetFlags.Elements[7] = None;
  local_178.DepthStencilTargetFormat = PF_Unknown;
  local_178.DepthStencilTargetFlag = None;
  local_178.DepthTargetLoadAction = ENoAction;
  local_178.DepthTargetStoreAction = ENoAction;
  local_178.StencilTargetLoadAction = ENoAction;
  local_178.StencilTargetStoreAction = ENoAction;
  local_178.DepthStencilAccess.Value = DepthNop;
  local_178.NumSamples = 0;
  local_178.SubpassHint = None;
  local_178.SubpassIndex = '\0';
  local_178.ConservativeRasterization = Disabled;
  local_178.bDepthBounds = false;
  local_178.MultiViewCount = '\0';
  local_178.bHasFragmentDensityAttachment = false;
  local_178.bAllowVariableRateShading = true;
  local_178.ShadingRate = VRSSR_1x1;
  local_178.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_178.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_198,&local_178);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_178.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_178.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_178.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_178,param_9,CheckApply,true);
  aVar9 = aVar11;
  if (param_3->ShaderContent != (FSSProfilePreIntegratedPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar9 = (this->RHIShaders).Ptr[iVar2];
    if (((aVar9 == (atomic<FRHIShader_*>)0x0) &&
        (aVar9 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar2,true),
        aVar9 == (atomic<FRHIShader_*>)0x0)) && (aVar9 = aVar11, 4 < (byte)LogShaders._0_1_)) {
      pFVar5 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar5->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FShader::GetType(this_00,pFVar5->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSSProfilePreIntegratedPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata();
  local_188.ShaderContent = (FShader *)param_3->ShaderContent;
  local_188.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_188,pFVar10,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar9,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar10,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 148449c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FSSProfilePreIntegratedPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FSSProfilePreIntegratedPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FSSProfilePreIntegratedPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

