// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 3

// AddFullscreenPass<NFORDenoise::FCopyTexturePS> @ 14e9c2360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<NFORDenoise::FCopyTexturePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<NFORDenoise::FCopyTexturePS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FCopyTexturePS *pFVar5;
  FShaderMapBase *pFVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  FShaderParametersMetadata *pFVar10;
  wchar_t *pwVar11;
  FRDGPass *this;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  FRDGParameterStruct local_b8;
  initializer_list<FRDGResource_*> local_98 [2];
  FCopyTexturePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FCopyTexturePS *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                       ,0xa8,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = NFORDenoise::FCopyTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar10,param_5);
  local_98[0]._First = (FRDGResource **)0x0;
  local_98[0]._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar10,param_5,local_98);
  pFVar5 = param_4->ShaderContent;
  pFVar6 = param_4->ShaderMap;
  TVar2 = (param_6->field0_0x0)._s_0.Min.field0_0x0;
  TVar3 = (param_6->field0_0x0)._s_0.Max.field0_0x0;
  local_78 = pFVar5;
  pFStack_70 = pFVar6;
  local_68 = TVar2;
  local_60 = TVar3;
  pFVar10 = NFORDenoise::FCopyTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_1->UserValidation,param_5,pFVar10,param_3,param_11 | Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar11 = FRDGEventName::GetTCHAR(param_3);
  EVar8 = FRDGBuilder::OverridePassFlags(param_1,pwVar11,param_11 | Raster);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d8,8);
  local_b8.Contents = (uchar *)param_5;
  if ((pFVar10->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_b8.Layout.Reference = (pFVar10->Layout).Reference;
  if (local_b8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_b8.Layout.Reference);
  }
  local_b8.Metadata = pFVar10;
  FRDGPass::FRDGPass(this,param_3,&local_b8,EVar8,Async);
  this->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FCopyTexturePS_NFORDenoise__V<lambda_1>__1____AddFullscreenPass_VFCopyTexturePS_NFORDenoise___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCopyTexturePS_NFORDenoise__VFShaderMapPointerTable____PEAV123_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FCopyTexturePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
  this[1].Name.EventFormat = (wchar_t *)pFVar6;
  this[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)TVar2;
  *(TIntPoint<int>_u_0 *)&this[1].Name.FormattedEventName.Data.ArrayNum = TVar3;
  this[1].ParameterStruct.Contents = (uchar *)param_7;
  this[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_8;
  this[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_9;
  this[1].Flags = (undefined2)param_10;
  this[1].TaskMode = param_10._2_1_;
  this[1].Pipeline = param_10._3_1_;
  *(FParameters **)&this[1].Workload = param_5;
  FRDGBuilder::ClobberPassOutputs(param_1,this);
  iVar9 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar9 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar9] = this;
  (this->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this);
  return;
}

// DrawFullscreenPixelShader<NFORDenoise::FCopyTexturePS> @ 14e9cf4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<NFORDenoise::FCopyTexturePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<NFORDenoise::FCopyTexturePS,FShaderMapPointerTable> *param_3,
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
  if ((param_3->ShaderContent == (FCopyTexturePS *)0x0) &&
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
  if (param_3->ShaderContent != (FCopyTexturePS *)0x0) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FCopyTexturePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = NFORDenoise::FCopyTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_188.ShaderContent = (FShader *)param_3->ShaderContent;
  local_188.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_188,pFVar10,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar9,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar10,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 14e9d8a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<NFORDenoise::FCopyTexturePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<NFORDenoise::FCopyTexturePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<NFORDenoise::FCopyTexturePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

