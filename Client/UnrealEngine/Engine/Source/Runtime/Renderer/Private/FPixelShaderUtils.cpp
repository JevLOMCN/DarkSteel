// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 167

// AddFullscreenPass<DepthCopy::FCopyDepthPS> @ 1447e3b50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<DepthCopy::FCopyDepthPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<DepthCopy::FCopyDepthPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FCopyDepthPS *pFVar5;
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
  FCopyDepthPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FCopyDepthPS *)0x0) {
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
  pFVar10 = DepthCopy::FCopyDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = DepthCopy::FCopyDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FCopyDepthPS_DepthCopy__V<lambda_1>__1____AddFullscreenPass_VFCopyDepthPS_DepthCopy___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCopyDepthPS_DepthCopy__VFShaderMapPointerTable____PEAV123_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FCopyDepthPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<TOneColorPixelShaderMRT> @ 1447e3e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<TOneColorPixelShaderMRT>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<TOneColorPixelShaderMRT,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  TOneColorPixelShaderMRT *pTVar5;
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
  TOneColorPixelShaderMRT *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (TOneColorPixelShaderMRT *)0x0) {
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
  pFVar10 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar10,param_5);
  local_98[0]._First = (FRDGResource **)0x0;
  local_98[0]._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar10,param_5,local_98);
  pTVar5 = param_4->ShaderContent;
  pFVar6 = param_4->ShaderMap;
  TVar2 = (param_6->field0_0x0)._s_0.Min.field0_0x0;
  TVar3 = (param_6->field0_0x0)._s_0.Max.field0_0x0;
  local_78 = pTVar5;
  pFStack_70 = pFVar6;
  local_68 = TVar2;
  local_60 = TVar3;
  pFVar10 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FOneColorPS__V<lambda_1>__1____AddFullscreenPass_VTOneColorPixelShaderMRT___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VTOneColorPixelShaderMRT__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(TOneColorPixelShaderMRT **)&this[1].FullPathIfDebug.Data.ArrayNum = pTVar5;
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

// DrawFullscreenPixelShader<DepthCopy::FCopyDepthPS> @ 1447ed6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<DepthCopy::FCopyDepthPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<DepthCopy::FCopyDepthPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCopyDepthPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCopyDepthPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<DepthCopy::FCopyDepthPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = DepthCopy::FCopyDepthPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FDitheredTransitionStencilPS> @ 1447ed9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FDitheredTransitionStencilPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FDitheredTransitionStencilPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FDitheredTransitionStencilPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FDitheredTransitionStencilPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FDitheredTransitionStencilPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FDitheredTransitionStencilPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<TOneColorPixelShaderMRT> @ 1447edc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<TOneColorPixelShaderMRT>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<TOneColorPixelShaderMRT,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (TOneColorPixelShaderMRT *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (TOneColorPixelShaderMRT *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TOneColorPixelShaderMRT,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 1447fa370

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<DepthCopy::FCopyDepthPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<DepthCopy::FCopyDepthPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<DepthCopy::FCopyDepthPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1447fa3c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FDitheredTransitionStencilPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FDitheredTransitionStencilPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FDitheredTransitionStencilPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1447fa410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<TOneColorPixelShaderMRT>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<TOneColorPixelShaderMRT>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<TOneColorPixelShaderMRT,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FCopyCubemapToIlluminanceMeterCubemapPS> @ 144ae3010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FCopyCubemapToIlluminanceMeterCubemapPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FCopyCubemapToIlluminanceMeterCubemapPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FCopyCubemapToIlluminanceMeterCubemapPS *pFVar5;
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
  FCopyCubemapToIlluminanceMeterCubemapPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FCopyCubemapToIlluminanceMeterCubemapPS *)0x0) {
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
  pFVar10 = FCopyCubemapToIlluminanceMeterCubemapPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FCopyCubemapToIlluminanceMeterCubemapPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FCopyCubemapToIlluminanceMeterCubemapPS__V<lambda_1>__1____AddFullscreenPass_VFCopyCubemapToIlluminanceMeterCubemapPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCopyCubemapToIlluminanceMeterCubemapPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FCopyCubemapToIlluminanceMeterCubemapPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FPrintIlluminanceMeterPS> @ 144ae32c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FPrintIlluminanceMeterPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FPrintIlluminanceMeterPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FPrintIlluminanceMeterPS *pFVar5;
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
  FPrintIlluminanceMeterPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FPrintIlluminanceMeterPS *)0x0) {
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
  pFVar10 = FPrintIlluminanceMeterPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FPrintIlluminanceMeterPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FPrintIlluminanceMeterPS__V<lambda_1>__1____AddFullscreenPass_VFPrintIlluminanceMeterPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFPrintIlluminanceMeterPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FPrintIlluminanceMeterPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FCopyCubemapToIlluminanceMeterCubemapPS> @ 144af5b30

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
FPixelShaderUtils::DrawFullscreenPixelShader<FCopyCubemapToIlluminanceMeterCubemapPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCopyCubemapToIlluminanceMeterCubemapPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCopyCubemapToIlluminanceMeterCubemapPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCopyCubemapToIlluminanceMeterCubemapPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyCubemapToIlluminanceMeterCubemapPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCopyCubemapToIlluminanceMeterCubemapPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FDownsampleIntegrateCubemapIlluminancePS> @ 144af5e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FDownsampleIntegrateCubemapIlluminancePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FDownsampleIntegrateCubemapIlluminancePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FDownsampleIntegrateCubemapIlluminancePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FDownsampleIntegrateCubemapIlluminancePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FDownsampleIntegrateCubemapIlluminancePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FDownsampleIntegrateCubemapIlluminancePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<IESAtlas::FIESAtlasAddTexturePS> @ 144af6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<IESAtlas::FIESAtlasAddTexturePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<IESAtlas::FIESAtlasAddTexturePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FIESAtlasAddTexturePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FIESAtlasAddTexturePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<IESAtlas::FIESAtlasAddTexturePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = IESAtlas::FIESAtlasAddTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FPrintIlluminanceMeterPS> @ 144af6400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FPrintIlluminanceMeterPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FPrintIlluminanceMeterPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FPrintIlluminanceMeterPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FPrintIlluminanceMeterPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FPrintIlluminanceMeterPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FPrintIlluminanceMeterPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 144afddd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCopyCubemapToIlluminanceMeterCubemapPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCopyCubemapToIlluminanceMeterCubemapPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCopyCubemapToIlluminanceMeterCubemapPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144afde20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FDownsampleIntegrateCubemapIlluminancePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FDownsampleIntegrateCubemapIlluminancePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FDownsampleIntegrateCubemapIlluminancePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144afde70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<IESAtlas::FIESAtlasAddTexturePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<IESAtlas::FIESAtlasAddTexturePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<IESAtlas::FIESAtlasAddTexturePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144afdec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FPrintIlluminanceMeterPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FPrintIlluminanceMeterPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FPrintIlluminanceMeterPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FDebugLightGridPS> @ 144b7c6e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FDebugLightGridPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FDebugLightGridPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FDebugLightGridPS *pFVar5;
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
  FDebugLightGridPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FDebugLightGridPS *)0x0) {
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
  pFVar10 = FDebugLightGridPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FDebugLightGridPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FDebugLightGridPS__V<lambda_1>__1____AddFullscreenPass_VFDebugLightGridPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFDebugLightGridPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FDebugLightGridPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FDebugLightGridPS> @ 144b8e620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FDebugLightGridPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FDebugLightGridPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FDebugLightGridPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FDebugLightGridPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FDebugLightGridPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FDebugLightGridPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 144b9a1a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FDebugLightGridPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FDebugLightGridPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FDebugLightGridPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FLumenFrontLayerTranslucencyClearGBufferPS> @ 144c042d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FLumenFrontLayerTranslucencyClearGBufferPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FLumenFrontLayerTranslucencyClearGBufferPS,FShaderMapPointerTable> *param_4
          ,FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FLumenFrontLayerTranslucencyClearGBufferPS *pFVar5;
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
  FLumenFrontLayerTranslucencyClearGBufferPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FLumenFrontLayerTranslucencyClearGBufferPS *)0x0) {
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
  pFVar10 = FLumenFrontLayerTranslucencyClearGBufferPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FLumenFrontLayerTranslucencyClearGBufferPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FLumenFrontLayerTranslucencyClearGBufferPS__V<lambda_1>__1____AddFullscreenPass_VFLumenFrontLayerTranslucencyClearGBufferPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFLumenFrontLayerTranslucencyClearGBufferPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FLumenFrontLayerTranslucencyClearGBufferPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FMobileLocalFogVolumeTiledRenderHalfResPS> @ 144c04580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FMobileLocalFogVolumeTiledRenderHalfResPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FMobileLocalFogVolumeTiledRenderHalfResPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FMobileLocalFogVolumeTiledRenderHalfResPS *pFVar5;
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
  FMobileLocalFogVolumeTiledRenderHalfResPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FMobileLocalFogVolumeTiledRenderHalfResPS *)0x0) {
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
  pFVar10 = FMobileLocalFogVolumeTiledRenderHalfResPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FMobileLocalFogVolumeTiledRenderHalfResPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FMobileLocalFogVolumeTiledRenderHalfResPS__V<lambda_1>__1____AddFullscreenPass_VFMobileLocalFogVolumeTiledRenderHalfResPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFMobileLocalFogVolumeTiledRenderHalfResPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FMobileLocalFogVolumeTiledRenderHalfResPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FLumenFrontLayerTranslucencyClearGBufferPS> @ 144c1a400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FLumenFrontLayerTranslucencyClearGBufferPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FLumenFrontLayerTranslucencyClearGBufferPS,FShaderMapPointerTable> *param_3
          ,FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FLumenFrontLayerTranslucencyClearGBufferPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FLumenFrontLayerTranslucencyClearGBufferPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FLumenFrontLayerTranslucencyClearGBufferPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FLumenFrontLayerTranslucencyClearGBufferPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FMobileLocalFogVolumeTiledRenderHalfResPS> @ 144c1a6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FMobileLocalFogVolumeTiledRenderHalfResPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FMobileLocalFogVolumeTiledRenderHalfResPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FMobileLocalFogVolumeTiledRenderHalfResPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FMobileLocalFogVolumeTiledRenderHalfResPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMobileLocalFogVolumeTiledRenderHalfResPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FMobileLocalFogVolumeTiledRenderHalfResPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 144c1f480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FLumenFrontLayerTranslucencyClearGBufferPS>'::__l2::<lambda_1>
::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FLumenFrontLayerTranslucencyClearGBufferPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FLumenFrontLayerTranslucencyClearGBufferPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144c1f4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FMobileLocalFogVolumeTiledRenderHalfResPS>'::__l2::<lambda_1>
::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FMobileLocalFogVolumeTiledRenderHalfResPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FMobileLocalFogVolumeTiledRenderHalfResPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddRasterizeToRectsPass<FClearLumenCardCapturePS,FClearLumenCardCaptureParameters> @ 144d2db90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::
AddRasterizeToRectsPass<FClearLumenCardCapturePS,FClearLumenCardCaptureParameters>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FClearLumenCardCapturePS,FShaderMapPointerTable> *param_4,
          FClearLumenCardCaptureParameters *param_5,TIntPoint<int> param_6,FRDGBufferSRV *param_7,
          uint param_8,FRHIBlendState *param_9,FRHIRasterizerState *param_10,
          FRHIDepthStencilState *param_11,uint param_12,TIntPoint<int> param_13,
          FRDGBufferSRV *param_14,uint param_15,ERDGPassFlags param_16,float param_17)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this;
  FShaderParametersMetadata *pFVar7;
  undefined1 local_res20 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  <lambda_1> local_b8;
  FString local_58;
  initializer_list<FRDGResource_*> local_48;
  
  pFVar6 = (FShaderType *)FRasterizeToRectsVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_d8,pFVar6,(uint)(param_14 != (FRDGBufferSRV *)0x0));
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this,&local_58);
    FRasterizeToRectsVS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRasterizeToRectsVS::GetStaticType();
  fVar4 = __real_3f800000;
  (param_5->VS).RectUVBuffer = param_14;
  TVar3._s_0.Y = fVar4 / (float)param_6.field0_0x0._s_0.Y;
  TVar3._s_0.X = fVar4 / (float)param_6.field0_0x0._0_4_;
  (param_5->VS).InvViewSize.field0_0x0 = TVar3;
  TVar2._s_0.Y = fVar4 / (float)param_13.field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar4 / (float)param_13.field0_0x0._s_0.X;
  (param_5->VS).InvTextureSize.field0_0x0 = TVar2;
  (param_5->VS).RectCoordBuffer = param_7;
  (param_5->VS).DownsampleFactor = fVar4 / (float)param_15;
  (param_5->VS).DepthIncrement = param_17;
  pFVar7 = FClearLumenCardCapturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar7,&param_5->PS);
  local_48._First = (FRDGResource **)0x0;
  local_48._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar7,&param_5->PS,&local_48);
  local_b8.PixelShader.ShaderContent = (FLumenCardResamplePS *)param_4->ShaderContent;
  local_b8.PixelShader.ShaderMap = param_4->ShaderMap;
  local_b8.VertexShader.ShaderContent = (FRasterizeToRectsVS *)local_d8.ShaderContent;
  local_b8.VertexShader.ShaderMap = local_d8.ShaderMap;
  local_b8.BlendState = param_9;
  local_b8.RasterizerState = param_10;
  local_b8.DepthStencilState = param_11;
  local_b8.StencilRef = param_12;
  local_b8.bSkipRenderPass = (bool)((byte)(param_16 | Raster) >> 5 & 1);
  local_b8.Parameters = (FLumenCardResampleParameters *)param_5;
  local_b8.NumRects = param_8;
  local_b8.GlobalShaderMap = param_2;
  local_b8.ViewportSize.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)param_6.field0_0x0._s_0
  ;
  FRDGBuilder::
  AddPass<FClearLumenCardCaptureParameters,_FPixelShaderUtils::AddRasterizeToRectsPass<FClearLumenCardCapturePS,FClearLumenCardCaptureParameters>_::__l2::<lambda_1>_>
            (param_1,param_3,param_5,param_16 | Raster,&local_b8);
  return;
}

// AddRasterizeToRectsPass<FLumenCardResamplePS,FLumenCardResampleParameters> @ 144d2de10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddRasterizeToRectsPass<FLumenCardResamplePS,FLumenCardResampleParameters>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FLumenCardResamplePS,FShaderMapPointerTable> *param_4,
          FLumenCardResampleParameters *param_5,TIntPoint<int> param_6,FRDGBufferSRV *param_7,
          uint param_8,FRHIBlendState *param_9,FRHIRasterizerState *param_10,
          FRHIDepthStencilState *param_11,uint param_12,TIntPoint<int> param_13,
          FRDGBufferSRV *param_14,uint param_15,ERDGPassFlags param_16,float param_17)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this;
  FShaderParametersMetadata *pFVar7;
  undefined1 local_res20 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  <lambda_1> local_b8;
  FString local_58;
  initializer_list<FRDGResource_*> local_48;
  
  pFVar6 = (FShaderType *)FRasterizeToRectsVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_d8,pFVar6,(uint)(param_14 != (FRDGBufferSRV *)0x0));
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this,&local_58);
    FRasterizeToRectsVS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRasterizeToRectsVS::GetStaticType();
  fVar4 = __real_3f800000;
  (param_5->VS).RectUVBuffer = param_14;
  TVar3._s_0.Y = fVar4 / (float)param_6.field0_0x0._s_0.Y;
  TVar3._s_0.X = fVar4 / (float)param_6.field0_0x0._0_4_;
  (param_5->VS).InvViewSize.field0_0x0 = TVar3;
  TVar2._s_0.Y = fVar4 / (float)param_13.field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar4 / (float)param_13.field0_0x0._s_0.X;
  (param_5->VS).InvTextureSize.field0_0x0 = TVar2;
  (param_5->VS).RectCoordBuffer = param_7;
  (param_5->VS).DownsampleFactor = fVar4 / (float)param_15;
  (param_5->VS).DepthIncrement = param_17;
  pFVar7 = FLumenCardResamplePS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar7,&param_5->PS);
  local_48._First = (FRDGResource **)0x0;
  local_48._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar7,&param_5->PS,&local_48);
  local_b8.PixelShader.ShaderContent = (FClearLumenCardCapturePS *)param_4->ShaderContent;
  local_b8.PixelShader.ShaderMap = param_4->ShaderMap;
  local_b8.VertexShader.ShaderContent = (FRasterizeToRectsVS *)local_d8.ShaderContent;
  local_b8.VertexShader.ShaderMap = local_d8.ShaderMap;
  local_b8.BlendState = param_9;
  local_b8.RasterizerState = param_10;
  local_b8.DepthStencilState = param_11;
  local_b8.StencilRef = param_12;
  local_b8.bSkipRenderPass = (bool)((byte)(param_16 | Raster) >> 5 & 1);
  local_b8.Parameters = (FClearLumenCardCaptureParameters *)param_5;
  local_b8.NumRects = param_8;
  local_b8.GlobalShaderMap = param_2;
  local_b8.ViewportSize.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)param_6.field0_0x0._s_0
  ;
  FRDGBuilder::
  AddPass<FLumenCardResampleParameters,_FPixelShaderUtils::AddRasterizeToRectsPass<FLumenCardResamplePS,FLumenCardResampleParameters>_::__l2::<lambda_1>_>
            (param_1,param_3,param_5,param_16 | Raster,&local_b8);
  return;
}

// operator() @ 144d46ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::
AddRasterizeToRectsPass<FClearLumenCardCapturePS,FClearLumenCardCaptureParameters>'::__l2::
<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FRHIVertexShader *pFVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  undefined1 auStackY_268 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  FGraphicsPipelineStateInitializer local_218;
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_138);
    local_138.ResolveRect.X2 = *(int *)((longlong)this + 0x30);
    local_138.ResolveRect.Y2 = *(int *)((longlong)this + 0x34);
    local_138.ResolveRect.X1 = 0;
    local_138.ResolveRect.Y1 = 0;
    FRHICommandList::BeginRenderPass(param_2,&local_138,L"RasterizeToRects");
    if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
    }
  }
  local_218.RenderTargetsEnabled = 0;
  local_218.RenderTargetFormats.Elements[0] = '\0';
  local_218.RenderTargetFormats.Elements[1] = '\0';
  local_218.RenderTargetFormats.Elements[2] = '\0';
  local_218.RenderTargetFormats.Elements[3] = '\0';
  local_218.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_218.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_218.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_218.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_218.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_218.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_218.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_218.BlendState = (FRHIBlendState *)0x0;
  local_218.RasterizerState = (FRHIRasterizerState *)0x0;
  local_218.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_218.RenderTargetFlags.Elements[0] = None;
  local_218.RenderTargetFlags.Elements[1] = None;
  local_218.RenderTargetFlags.Elements[2] = None;
  local_218.RenderTargetFlags.Elements[3] = None;
  local_218.RenderTargetFlags.Elements[4] = None;
  local_218.RenderTargetFlags.Elements[5] = None;
  local_218.RenderTargetFlags.Elements[6] = None;
  local_218.RenderTargetFlags.Elements[7] = None;
  local_218.RenderTargetFormats.Elements[4] = '\0';
  local_218.RenderTargetFormats.Elements[5] = '\0';
  local_218.RenderTargetFormats.Elements[6] = '\0';
  local_218.RenderTargetFormats.Elements[7] = '\0';
  local_218.DepthStencilTargetFormat = PF_Unknown;
  local_218.DepthStencilTargetFlag = None;
  local_218.DepthTargetLoadAction = ENoAction;
  local_218.DepthTargetStoreAction = ENoAction;
  local_218.StencilTargetLoadAction = ENoAction;
  local_218.StencilTargetStoreAction = ENoAction;
  local_218.DepthStencilAccess.Value = DepthNop;
  local_218.NumSamples = 0;
  local_218.SubpassHint = None;
  local_218.SubpassIndex = '\0';
  local_218.ConservativeRasterization = Disabled;
  local_218.bDepthBounds = false;
  local_218.MultiViewCount = '\0';
  local_218.bHasFragmentDensityAttachment = false;
  local_218.bAllowVariableRateShading = true;
  local_218.ShadingRate = VRSSR_1x1;
  local_218.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_218.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_218);
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(int *)((longlong)this + 0x30),
             (float)*(int *)((longlong)this + 0x34),__real_3f800000);
  local_218.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIBlendState **)((longlong)this + 0x38) != (FRHIBlendState *)0x0) {
    local_218.BlendState = *(FRHIBlendState **)((longlong)this + 0x38);
  }
  local_218.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIRasterizerState **)((longlong)this + 0x40) != (FRHIRasterizerState *)0x0) {
    local_218.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x40);
  }
  local_218.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIDepthStencilState **)((longlong)this + 0x48) != (FRHIDepthStencilState *)0x0) {
    local_218.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x48);
  }
  local_218.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_218.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_218.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
       GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                        *)((longlong)this + 0x10),true);
  local_218.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FClearLumenCardCapturePS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FClearLumenCardCapturePS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x20),true);
  SetGraphicsPipelineState(param_2,&local_218,*(uint *)((longlong)this + 0x50),CheckApply,true);
  pFVar1 = *(FParameters **)this;
  pFVar3 = TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
           GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                            *)((longlong)this + 0x10),true);
  SetShaderParameters<FRHICommandList,FPixelShaderUtils::FRasterizeToRectsVS,FRHIVertexShader>
            (param_2,(TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                      *)((longlong)this + 0x10),pFVar3,pFVar1);
  lVar2 = *(longlong *)this;
  pFVar4 = TShaderRefBase<FClearLumenCardCapturePS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FClearLumenCardCapturePS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  pFVar5 = FClearLumenCardCapturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_228.ShaderContent = *(FShader **)((longlong)this + 0x20);
  local_228.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x28);
  ValidateShaderParameters(&local_228,pFVar5,(void *)(lVar2 + 0x30));
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x20),pFVar5,(void *)(lVar2 + 0x30));
  FRHICommandList::DrawPrimitive
            (param_2,0,2 - (GRHIGlobals.SupportsRectTopology != false),
             *(uint *)((longlong)this + 0x58));
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHICommandList::EndRenderPass(param_2);
  }
  return;
}

// operator() @ 144d47290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddRasterizeToRectsPass<FLumenCardResamplePS,FLumenCardResampleParameters>'::
__l2::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FRHIVertexShader *pFVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  undefined1 auStackY_268 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  FGraphicsPipelineStateInitializer local_218;
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_138);
    local_138.ResolveRect.X2 = *(int *)((longlong)this + 0x30);
    local_138.ResolveRect.Y2 = *(int *)((longlong)this + 0x34);
    local_138.ResolveRect.X1 = 0;
    local_138.ResolveRect.Y1 = 0;
    FRHICommandList::BeginRenderPass(param_2,&local_138,L"RasterizeToRects");
    if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
    }
  }
  local_218.RenderTargetsEnabled = 0;
  local_218.RenderTargetFormats.Elements[0] = '\0';
  local_218.RenderTargetFormats.Elements[1] = '\0';
  local_218.RenderTargetFormats.Elements[2] = '\0';
  local_218.RenderTargetFormats.Elements[3] = '\0';
  local_218.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_218.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_218.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_218.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_218.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_218.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_218.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_218.BlendState = (FRHIBlendState *)0x0;
  local_218.RasterizerState = (FRHIRasterizerState *)0x0;
  local_218.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_218.RenderTargetFlags.Elements[0] = None;
  local_218.RenderTargetFlags.Elements[1] = None;
  local_218.RenderTargetFlags.Elements[2] = None;
  local_218.RenderTargetFlags.Elements[3] = None;
  local_218.RenderTargetFlags.Elements[4] = None;
  local_218.RenderTargetFlags.Elements[5] = None;
  local_218.RenderTargetFlags.Elements[6] = None;
  local_218.RenderTargetFlags.Elements[7] = None;
  local_218.RenderTargetFormats.Elements[4] = '\0';
  local_218.RenderTargetFormats.Elements[5] = '\0';
  local_218.RenderTargetFormats.Elements[6] = '\0';
  local_218.RenderTargetFormats.Elements[7] = '\0';
  local_218.DepthStencilTargetFormat = PF_Unknown;
  local_218.DepthStencilTargetFlag = None;
  local_218.DepthTargetLoadAction = ENoAction;
  local_218.DepthTargetStoreAction = ENoAction;
  local_218.StencilTargetLoadAction = ENoAction;
  local_218.StencilTargetStoreAction = ENoAction;
  local_218.DepthStencilAccess.Value = DepthNop;
  local_218.NumSamples = 0;
  local_218.SubpassHint = None;
  local_218.SubpassIndex = '\0';
  local_218.ConservativeRasterization = Disabled;
  local_218.bDepthBounds = false;
  local_218.MultiViewCount = '\0';
  local_218.bHasFragmentDensityAttachment = false;
  local_218.bAllowVariableRateShading = true;
  local_218.ShadingRate = VRSSR_1x1;
  local_218.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_218.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_218);
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(int *)((longlong)this + 0x30),
             (float)*(int *)((longlong)this + 0x34),__real_3f800000);
  local_218.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIBlendState **)((longlong)this + 0x38) != (FRHIBlendState *)0x0) {
    local_218.BlendState = *(FRHIBlendState **)((longlong)this + 0x38);
  }
  local_218.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIRasterizerState **)((longlong)this + 0x40) != (FRHIRasterizerState *)0x0) {
    local_218.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x40);
  }
  local_218.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIDepthStencilState **)((longlong)this + 0x48) != (FRHIDepthStencilState *)0x0) {
    local_218.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x48);
  }
  local_218.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_218.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_218.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
       GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                        *)((longlong)this + 0x10),true);
  local_218.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FLumenCardResamplePS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FLumenCardResamplePS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x20),true);
  SetGraphicsPipelineState(param_2,&local_218,*(uint *)((longlong)this + 0x50),CheckApply,true);
  pFVar1 = *(FParameters **)this;
  pFVar3 = TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
           GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                            *)((longlong)this + 0x10),true);
  SetShaderParameters<FRHICommandList,FPixelShaderUtils::FRasterizeToRectsVS,FRHIVertexShader>
            (param_2,(TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                      *)((longlong)this + 0x10),pFVar3,pFVar1);
  lVar2 = *(longlong *)this;
  pFVar4 = TShaderRefBase<FLumenCardResamplePS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FLumenCardResamplePS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  pFVar5 = FLumenCardResamplePS::FParameters::FTypeInfo::GetStructMetadata();
  local_228.ShaderContent = *(FShader **)((longlong)this + 0x20);
  local_228.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x28);
  ValidateShaderParameters(&local_228,pFVar5,(void *)(lVar2 + 0x30));
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x20),pFVar5,(void *)(lVar2 + 0x30));
  FRHICommandList::DrawPrimitive
            (param_2,0,2 - (GRHIGlobals.SupportsRectTopology != false),
             *(uint *)((longlong)this + 0x58));
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHICommandList::EndRenderPass(param_2);
  }
  return;
}

// AddRasterizeToRectsPass<FCopyCardCaptureLightingToAtlasPS,FCopyCardCaptureLightingToAtlasParameters> @ 144de67d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::
AddRasterizeToRectsPass<FCopyCardCaptureLightingToAtlasPS,FCopyCardCaptureLightingToAtlasParameters>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FCopyCardCaptureLightingToAtlasPS,FShaderMapPointerTable> *param_4,
          FCopyCardCaptureLightingToAtlasParameters *param_5,TIntPoint<int> param_6,
          FRDGBufferSRV *param_7,uint param_8,FRHIBlendState *param_9,FRHIRasterizerState *param_10,
          FRHIDepthStencilState *param_11,uint param_12,TIntPoint<int> param_13,
          FRDGBufferSRV *param_14,uint param_15,ERDGPassFlags param_16,float param_17)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this;
  FShaderParametersMetadata *pFVar7;
  undefined1 local_res20 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  <lambda_1> local_b8;
  FString local_58;
  initializer_list<FRDGResource_*> local_48;
  
  pFVar6 = (FShaderType *)FRasterizeToRectsVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_d8,pFVar6,(uint)(param_14 != (FRDGBufferSRV *)0x0));
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this,&local_58);
    FRasterizeToRectsVS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRasterizeToRectsVS::GetStaticType();
  fVar4 = __real_3f800000;
  (param_5->VS).RectUVBuffer = param_14;
  TVar3._s_0.Y = fVar4 / (float)param_6.field0_0x0._s_0.Y;
  TVar3._s_0.X = fVar4 / (float)param_6.field0_0x0._0_4_;
  (param_5->VS).InvViewSize.field0_0x0 = TVar3;
  TVar2._s_0.Y = fVar4 / (float)param_13.field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar4 / (float)param_13.field0_0x0._s_0.X;
  (param_5->VS).InvTextureSize.field0_0x0 = TVar2;
  (param_5->VS).RectCoordBuffer = param_7;
  (param_5->VS).DownsampleFactor = fVar4 / (float)param_15;
  (param_5->VS).DepthIncrement = param_17;
  pFVar7 = FCopyCardCaptureLightingToAtlasPS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar7,&param_5->PS);
  local_48._First = (FRDGResource **)0x0;
  local_48._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar7,&param_5->PS,&local_48);
  local_b8.PixelShader.ShaderContent = (FLumenCardCopyPS *)param_4->ShaderContent;
  local_b8.PixelShader.ShaderMap = param_4->ShaderMap;
  local_b8.VertexShader.ShaderContent = (FRasterizeToRectsVS *)local_d8.ShaderContent;
  local_b8.VertexShader.ShaderMap = local_d8.ShaderMap;
  local_b8.BlendState = param_9;
  local_b8.RasterizerState = param_10;
  local_b8.DepthStencilState = param_11;
  local_b8.StencilRef = param_12;
  local_b8.bSkipRenderPass = (bool)((byte)(param_16 | Raster) >> 5 & 1);
  local_b8.Parameters = (FLumenCardCopyParameters *)param_5;
  local_b8.NumRects = param_8;
  local_b8.GlobalShaderMap = param_2;
  local_b8.ViewportSize.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)param_6.field0_0x0._s_0
  ;
  FRDGBuilder::
  AddPass<FCopyCardCaptureLightingToAtlasParameters,_FPixelShaderUtils::AddRasterizeToRectsPass<FCopyCardCaptureLightingToAtlasPS,FCopyCardCaptureLightingToAtlasParameters>_::__l2::<lambda_1>_>
            (param_1,param_3,param_5,param_16 | Raster,&local_b8);
  return;
}

// AddRasterizeToRectsPass<FLumenCardCopyPS,FLumenCardCopyParameters> @ 144de6a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddRasterizeToRectsPass<FLumenCardCopyPS,FLumenCardCopyParameters>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FLumenCardCopyPS,FShaderMapPointerTable> *param_4,
          FLumenCardCopyParameters *param_5,TIntPoint<int> param_6,FRDGBufferSRV *param_7,
          uint param_8,FRHIBlendState *param_9,FRHIRasterizerState *param_10,
          FRHIDepthStencilState *param_11,uint param_12,TIntPoint<int> param_13,
          FRDGBufferSRV *param_14,uint param_15,ERDGPassFlags param_16,float param_17)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this;
  FShaderParametersMetadata *pFVar7;
  undefined1 local_res20 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  <lambda_1> local_b8;
  FString local_58;
  initializer_list<FRDGResource_*> local_48;
  
  pFVar6 = (FShaderType *)FRasterizeToRectsVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_d8,pFVar6,(uint)(param_14 != (FRDGBufferSRV *)0x0));
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this,&local_58);
    FRasterizeToRectsVS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRasterizeToRectsVS::GetStaticType();
  fVar4 = __real_3f800000;
  (param_5->VS).RectUVBuffer = param_14;
  TVar3._s_0.Y = fVar4 / (float)param_6.field0_0x0._s_0.Y;
  TVar3._s_0.X = fVar4 / (float)param_6.field0_0x0._0_4_;
  (param_5->VS).InvViewSize.field0_0x0 = TVar3;
  TVar2._s_0.Y = fVar4 / (float)param_13.field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar4 / (float)param_13.field0_0x0._s_0.X;
  (param_5->VS).InvTextureSize.field0_0x0 = TVar2;
  (param_5->VS).RectCoordBuffer = param_7;
  (param_5->VS).DownsampleFactor = fVar4 / (float)param_15;
  (param_5->VS).DepthIncrement = param_17;
  pFVar7 = FLumenCardCopyPS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar7,&param_5->PS);
  local_48._First = (FRDGResource **)0x0;
  local_48._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar7,&param_5->PS,&local_48);
  local_b8.PixelShader.ShaderContent = (FCopyCardCaptureLightingToAtlasPS *)param_4->ShaderContent;
  local_b8.PixelShader.ShaderMap = param_4->ShaderMap;
  local_b8.VertexShader.ShaderContent = (FRasterizeToRectsVS *)local_d8.ShaderContent;
  local_b8.VertexShader.ShaderMap = local_d8.ShaderMap;
  local_b8.BlendState = param_9;
  local_b8.RasterizerState = param_10;
  local_b8.DepthStencilState = param_11;
  local_b8.StencilRef = param_12;
  local_b8.bSkipRenderPass = (bool)((byte)(param_16 | Raster) >> 5 & 1);
  local_b8.Parameters = (FCopyCardCaptureLightingToAtlasParameters *)param_5;
  local_b8.NumRects = param_8;
  local_b8.GlobalShaderMap = param_2;
  local_b8.ViewportSize.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)param_6.field0_0x0._s_0
  ;
  FRDGBuilder::
  AddPass<FLumenCardCopyParameters,_FPixelShaderUtils::AddRasterizeToRectsPass<FLumenCardCopyPS,FLumenCardCopyParameters>_::__l2::<lambda_1>_>
            (param_1,param_3,param_5,param_16 | Raster,&local_b8);
  return;
}

// operator() @ 144df8b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::
AddRasterizeToRectsPass<FCopyCardCaptureLightingToAtlasPS,FCopyCardCaptureLightingToAtlasParameters>'
::__l2::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FRHIVertexShader *pFVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  undefined1 auStackY_268 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  FGraphicsPipelineStateInitializer local_218;
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_138);
    local_138.ResolveRect.X2 = *(int *)((longlong)this + 0x30);
    local_138.ResolveRect.Y2 = *(int *)((longlong)this + 0x34);
    local_138.ResolveRect.X1 = 0;
    local_138.ResolveRect.Y1 = 0;
    FRHICommandList::BeginRenderPass(param_2,&local_138,L"RasterizeToRects");
    if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
    }
  }
  local_218.RenderTargetsEnabled = 0;
  local_218.RenderTargetFormats.Elements[0] = '\0';
  local_218.RenderTargetFormats.Elements[1] = '\0';
  local_218.RenderTargetFormats.Elements[2] = '\0';
  local_218.RenderTargetFormats.Elements[3] = '\0';
  local_218.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_218.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_218.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_218.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_218.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_218.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_218.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_218.BlendState = (FRHIBlendState *)0x0;
  local_218.RasterizerState = (FRHIRasterizerState *)0x0;
  local_218.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_218.RenderTargetFlags.Elements[0] = None;
  local_218.RenderTargetFlags.Elements[1] = None;
  local_218.RenderTargetFlags.Elements[2] = None;
  local_218.RenderTargetFlags.Elements[3] = None;
  local_218.RenderTargetFlags.Elements[4] = None;
  local_218.RenderTargetFlags.Elements[5] = None;
  local_218.RenderTargetFlags.Elements[6] = None;
  local_218.RenderTargetFlags.Elements[7] = None;
  local_218.RenderTargetFormats.Elements[4] = '\0';
  local_218.RenderTargetFormats.Elements[5] = '\0';
  local_218.RenderTargetFormats.Elements[6] = '\0';
  local_218.RenderTargetFormats.Elements[7] = '\0';
  local_218.DepthStencilTargetFormat = PF_Unknown;
  local_218.DepthStencilTargetFlag = None;
  local_218.DepthTargetLoadAction = ENoAction;
  local_218.DepthTargetStoreAction = ENoAction;
  local_218.StencilTargetLoadAction = ENoAction;
  local_218.StencilTargetStoreAction = ENoAction;
  local_218.DepthStencilAccess.Value = DepthNop;
  local_218.NumSamples = 0;
  local_218.SubpassHint = None;
  local_218.SubpassIndex = '\0';
  local_218.ConservativeRasterization = Disabled;
  local_218.bDepthBounds = false;
  local_218.MultiViewCount = '\0';
  local_218.bHasFragmentDensityAttachment = false;
  local_218.bAllowVariableRateShading = true;
  local_218.ShadingRate = VRSSR_1x1;
  local_218.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_218.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_218);
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(int *)((longlong)this + 0x30),
             (float)*(int *)((longlong)this + 0x34),__real_3f800000);
  local_218.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIBlendState **)((longlong)this + 0x38) != (FRHIBlendState *)0x0) {
    local_218.BlendState = *(FRHIBlendState **)((longlong)this + 0x38);
  }
  local_218.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIRasterizerState **)((longlong)this + 0x40) != (FRHIRasterizerState *)0x0) {
    local_218.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x40);
  }
  local_218.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIDepthStencilState **)((longlong)this + 0x48) != (FRHIDepthStencilState *)0x0) {
    local_218.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x48);
  }
  local_218.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_218.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_218.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
       GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                        *)((longlong)this + 0x10),true);
  local_218.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FCopyCardCaptureLightingToAtlasPS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FCopyCardCaptureLightingToAtlasPS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x20),true);
  SetGraphicsPipelineState(param_2,&local_218,*(uint *)((longlong)this + 0x50),CheckApply,true);
  pFVar1 = *(FParameters **)this;
  pFVar3 = TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
           GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                            *)((longlong)this + 0x10),true);
  SetShaderParameters<FRHICommandList,FPixelShaderUtils::FRasterizeToRectsVS,FRHIVertexShader>
            (param_2,(TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                      *)((longlong)this + 0x10),pFVar3,pFVar1);
  lVar2 = *(longlong *)this;
  pFVar4 = TShaderRefBase<FCopyCardCaptureLightingToAtlasPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FCopyCardCaptureLightingToAtlasPS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  pFVar5 = FCopyCardCaptureLightingToAtlasPS::FParameters::FTypeInfo::GetStructMetadata();
  local_228.ShaderContent = *(FShader **)((longlong)this + 0x20);
  local_228.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x28);
  ValidateShaderParameters(&local_228,pFVar5,(void *)(lVar2 + 0x30));
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x20),pFVar5,(void *)(lVar2 + 0x30));
  FRHICommandList::DrawPrimitive
            (param_2,0,2 - (GRHIGlobals.SupportsRectTopology != false),
             *(uint *)((longlong)this + 0x58));
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHICommandList::EndRenderPass(param_2);
  }
  return;
}

// operator() @ 144df8e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddRasterizeToRectsPass<FLumenCardCopyPS,FLumenCardCopyParameters>'::__l2::
<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FRHIVertexShader *pFVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  undefined1 auStackY_268 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  FGraphicsPipelineStateInitializer local_218;
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_138);
    local_138.ResolveRect.X2 = *(int *)((longlong)this + 0x30);
    local_138.ResolveRect.Y2 = *(int *)((longlong)this + 0x34);
    local_138.ResolveRect.X1 = 0;
    local_138.ResolveRect.Y1 = 0;
    FRHICommandList::BeginRenderPass(param_2,&local_138,L"RasterizeToRects");
    if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
    }
  }
  local_218.RenderTargetsEnabled = 0;
  local_218.RenderTargetFormats.Elements[0] = '\0';
  local_218.RenderTargetFormats.Elements[1] = '\0';
  local_218.RenderTargetFormats.Elements[2] = '\0';
  local_218.RenderTargetFormats.Elements[3] = '\0';
  local_218.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_218.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_218.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_218.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_218.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_218.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_218.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_218.BlendState = (FRHIBlendState *)0x0;
  local_218.RasterizerState = (FRHIRasterizerState *)0x0;
  local_218.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_218.RenderTargetFlags.Elements[0] = None;
  local_218.RenderTargetFlags.Elements[1] = None;
  local_218.RenderTargetFlags.Elements[2] = None;
  local_218.RenderTargetFlags.Elements[3] = None;
  local_218.RenderTargetFlags.Elements[4] = None;
  local_218.RenderTargetFlags.Elements[5] = None;
  local_218.RenderTargetFlags.Elements[6] = None;
  local_218.RenderTargetFlags.Elements[7] = None;
  local_218.RenderTargetFormats.Elements[4] = '\0';
  local_218.RenderTargetFormats.Elements[5] = '\0';
  local_218.RenderTargetFormats.Elements[6] = '\0';
  local_218.RenderTargetFormats.Elements[7] = '\0';
  local_218.DepthStencilTargetFormat = PF_Unknown;
  local_218.DepthStencilTargetFlag = None;
  local_218.DepthTargetLoadAction = ENoAction;
  local_218.DepthTargetStoreAction = ENoAction;
  local_218.StencilTargetLoadAction = ENoAction;
  local_218.StencilTargetStoreAction = ENoAction;
  local_218.DepthStencilAccess.Value = DepthNop;
  local_218.NumSamples = 0;
  local_218.SubpassHint = None;
  local_218.SubpassIndex = '\0';
  local_218.ConservativeRasterization = Disabled;
  local_218.bDepthBounds = false;
  local_218.MultiViewCount = '\0';
  local_218.bHasFragmentDensityAttachment = false;
  local_218.bAllowVariableRateShading = true;
  local_218.ShadingRate = VRSSR_1x1;
  local_218.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_218.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_218);
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(int *)((longlong)this + 0x30),
             (float)*(int *)((longlong)this + 0x34),__real_3f800000);
  local_218.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIBlendState **)((longlong)this + 0x38) != (FRHIBlendState *)0x0) {
    local_218.BlendState = *(FRHIBlendState **)((longlong)this + 0x38);
  }
  local_218.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIRasterizerState **)((longlong)this + 0x40) != (FRHIRasterizerState *)0x0) {
    local_218.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x40);
  }
  local_218.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIDepthStencilState **)((longlong)this + 0x48) != (FRHIDepthStencilState *)0x0) {
    local_218.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x48);
  }
  local_218.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_218.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_218.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
       GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                        *)((longlong)this + 0x10),true);
  local_218.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FLumenCardCopyPS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FLumenCardCopyPS,FShaderMapPointerTable> *)((longlong)this + 0x20)
                  ,true);
  SetGraphicsPipelineState(param_2,&local_218,*(uint *)((longlong)this + 0x50),CheckApply,true);
  pFVar1 = *(FParameters **)this;
  pFVar3 = TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
           GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                            *)((longlong)this + 0x10),true);
  SetShaderParameters<FRHICommandList,FPixelShaderUtils::FRasterizeToRectsVS,FRHIVertexShader>
            (param_2,(TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                      *)((longlong)this + 0x10),pFVar3,pFVar1);
  lVar2 = *(longlong *)this;
  pFVar4 = TShaderRefBase<FLumenCardCopyPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FLumenCardCopyPS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  pFVar5 = FLumenCardCopyPS::FParameters::FTypeInfo::GetStructMetadata();
  local_228.ShaderContent = *(FShader **)((longlong)this + 0x20);
  local_228.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x28);
  ValidateShaderParameters(&local_228,pFVar5,(void *)(lVar2 + 0x30));
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x20),pFVar5,(void *)(lVar2 + 0x30));
  FRHICommandList::DrawPrimitive
            (param_2,0,2 - (GRHIGlobals.SupportsRectTopology != false),
             *(uint *)((longlong)this + 0x58));
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHICommandList::EndRenderPass(param_2);
  }
  return;
}

// AddFullscreenPass<FComposeMeshEdgesPS> @ 144ed42d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FComposeMeshEdgesPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FComposeMeshEdgesPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FComposeMeshEdgesPS *pFVar5;
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
  FComposeMeshEdgesPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FComposeMeshEdgesPS *)0x0) {
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
  pFVar10 = FComposeMeshEdgesPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FComposeMeshEdgesPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FComposeMeshEdgesPS__V<lambda_1>__1____AddFullscreenPass_VFComposeMeshEdgesPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFComposeMeshEdgesPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FComposeMeshEdgesPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FComposeMeshEdgesPS> @ 144ee2ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FComposeMeshEdgesPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FComposeMeshEdgesPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FShaderMapResource *this;
  FShaderMapBase *pFVar4;
  FShader *this_00;
  code *pcVar5;
  bool bVar6;
  IRHICommandContext *pIVar7;
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
  if ((param_3->ShaderContent == (FComposeMeshEdgesPS *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = *(int *)((longlong)&param_5->field0_0x0 + 0xc);
  aVar11 = (atomic<FRHIShader_*>)0x0;
  iVar2 = *(int *)((longlong)&param_5->field0_0x0 + 8);
  iVar3 = *(int *)&param_5->field0_0x0;
  fVar12 = (float)*(int *)((longlong)&param_5->field0_0x0 + 4);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar8;
    *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar8 + 2) = (float)iVar3;
    *(float *)((longlong)puVar8 + 0x14) = fVar12;
    *(float *)((longlong)puVar8 + 0x1c) = (float)iVar2;
    *(float *)(puVar8 + 4) = (float)iVar1;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  }
  else {
    pIVar7 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    pcVar5 = *(code **)(pIVar7->_padding_ + 0x1a0);
    (*pcVar5)(pIVar7,pcVar5,fVar12,0);
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
  if (param_3->ShaderContent != (FComposeMeshEdgesPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar9 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar9 == (atomic<FRHIShader_*>)0x0) &&
        (aVar9 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar9 == (atomic<FRHIShader_*>)0x0)) && (aVar9 = aVar11, 4 < (byte)LogShaders._0_1_)) {
      pFVar4 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar4->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FShader::GetType(this_00,pFVar4->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FComposeMeshEdgesPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = FComposeMeshEdgesPS::FParameters::FTypeInfo::GetStructMetadata();
  local_188.ShaderContent = (FShader *)param_3->ShaderContent;
  local_188.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_188,pFVar10,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar9,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar10,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 144ef2380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FComposeMeshEdgesPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FComposeMeshEdgesPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FComposeMeshEdgesPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FEmitCustomDepthStencilPS> @ 144f4bb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FEmitCustomDepthStencilPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FEmitCustomDepthStencilPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FEmitCustomDepthStencilPS *pFVar5;
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
  FEmitCustomDepthStencilPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FEmitCustomDepthStencilPS *)0x0) {
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
  pFVar10 = FEmitCustomDepthStencilPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FEmitCustomDepthStencilPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FEmitCustomDepthStencilPS__V<lambda_1>__1____AddFullscreenPass_VFEmitCustomDepthStencilPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFEmitCustomDepthStencilPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FEmitCustomDepthStencilPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FEmitSceneDepthPS> @ 144f4be30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FEmitSceneDepthPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FEmitSceneDepthPS *pFVar5;
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
  FEmitSceneDepthPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FEmitSceneDepthPS *)0x0) {
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
  pFVar10 = FEmitSceneDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FEmitSceneDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FEmitSceneDepthPS__V<lambda_1>__1____AddFullscreenPass_VFEmitSceneDepthPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFEmitSceneDepthPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FEmitSceneDepthPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FEmitSceneStencilPS> @ 144f4c0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FEmitSceneStencilPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FEmitSceneStencilPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FEmitSceneStencilPS *pFVar5;
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
  FEmitSceneStencilPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FEmitSceneStencilPS *)0x0) {
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
  pFVar10 = FEmitSceneStencilPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FEmitSceneStencilPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FEmitSceneStencilPS__V<lambda_1>__1____AddFullscreenPass_VFEmitSceneStencilPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFEmitSceneStencilPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FEmitSceneStencilPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FEmitShadowMapPS> @ 144f4c390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FEmitShadowMapPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FEmitShadowMapPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FEmitShadowMapPS *pFVar5;
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
  FEmitShadowMapPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FEmitShadowMapPS *)0x0) {
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
  pFVar10 = FEmitShadowMapPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FEmitShadowMapPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FEmitShadowMapPS__V<lambda_1>__1____AddFullscreenPass_VFEmitShadowMapPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFEmitShadowMapPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FEmitShadowMapPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddRasterizeToRectsPass<FEmitSceneDepthPS,FNaniteEmitDepthRectsParameters> @ 144f57180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddRasterizeToRectsPass<FEmitSceneDepthPS,FNaniteEmitDepthRectsParameters>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *param_4,
          FNaniteEmitDepthRectsParameters *param_5,TIntPoint<int> param_6,FRDGBufferSRV *param_7,
          uint param_8,FRHIBlendState *param_9,FRHIRasterizerState *param_10,
          FRHIDepthStencilState *param_11,uint param_12,TIntPoint<int> param_13,
          FRDGBufferSRV *param_14,uint param_15,ERDGPassFlags param_16,float param_17)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this;
  FShaderParametersMetadata *pFVar7;
  undefined1 local_res20 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  <lambda_1> local_b8;
  FString local_58;
  initializer_list<FRDGResource_*> local_48;
  
  pFVar6 = (FShaderType *)FRasterizeToRectsVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_d8,pFVar6,(uint)(param_14 != (FRDGBufferSRV *)0x0));
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this,&local_58);
    FRasterizeToRectsVS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRasterizeToRectsVS::GetStaticType();
  fVar4 = __real_3f800000;
  (param_5->VS).RectUVBuffer = param_14;
  TVar3._s_0.Y = fVar4 / (float)param_6.field0_0x0._s_0.Y;
  TVar3._s_0.X = fVar4 / (float)param_6.field0_0x0._0_4_;
  (param_5->VS).InvViewSize.field0_0x0 = TVar3;
  TVar2._s_0.Y = fVar4 / (float)param_13.field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar4 / (float)param_13.field0_0x0._s_0.X;
  (param_5->VS).InvTextureSize.field0_0x0 = TVar2;
  (param_5->VS).RectCoordBuffer = param_7;
  (param_5->VS).DownsampleFactor = fVar4 / (float)param_15;
  (param_5->VS).DepthIncrement = param_17;
  pFVar7 = FEmitSceneDepthPS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar7,&param_5->PS);
  local_48._First = (FRDGResource **)0x0;
  local_48._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar7,&param_5->PS,&local_48);
  local_b8.PixelShader.ShaderContent = (FNaniteMarkStencilPS *)param_4->ShaderContent;
  local_b8.PixelShader.ShaderMap = param_4->ShaderMap;
  local_b8.VertexShader.ShaderContent = (FRasterizeToRectsVS *)local_d8.ShaderContent;
  local_b8.VertexShader.ShaderMap = local_d8.ShaderMap;
  local_b8.BlendState = param_9;
  local_b8.RasterizerState = param_10;
  local_b8.DepthStencilState = param_11;
  local_b8.StencilRef = param_12;
  local_b8.bSkipRenderPass = (bool)((byte)(param_16 | Raster) >> 5 & 1);
  local_b8.Parameters = (FNaniteMarkStencilRectsParameters *)param_5;
  local_b8.NumRects = param_8;
  local_b8.GlobalShaderMap = param_2;
  local_b8.ViewportSize.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)param_6.field0_0x0._s_0
  ;
  FRDGBuilder::
  AddPass<FNaniteEmitDepthRectsParameters,_FPixelShaderUtils::AddRasterizeToRectsPass<FEmitSceneDepthPS,FNaniteEmitDepthRectsParameters>_::__l2::<lambda_1>_>
            (param_1,param_3,param_5,param_16 | Raster,&local_b8);
  return;
}

// AddRasterizeToRectsPass<FNaniteMarkStencilPS,FNaniteMarkStencilRectsParameters> @ 144f57400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddRasterizeToRectsPass<FNaniteMarkStencilPS,FNaniteMarkStencilRectsParameters>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FNaniteMarkStencilPS,FShaderMapPointerTable> *param_4,
          FNaniteMarkStencilRectsParameters *param_5,TIntPoint<int> param_6,FRDGBufferSRV *param_7,
          uint param_8,FRHIBlendState *param_9,FRHIRasterizerState *param_10,
          FRHIDepthStencilState *param_11,uint param_12,TIntPoint<int> param_13,
          FRDGBufferSRV *param_14,uint param_15,ERDGPassFlags param_16,float param_17)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  bool bVar5;
  FShaderType *pFVar6;
  FName this;
  FShaderParametersMetadata *pFVar7;
  undefined1 local_res20 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  <lambda_1> local_b8;
  FString local_58;
  initializer_list<FRDGResource_*> local_48;
  
  pFVar6 = (FShaderType *)FRasterizeToRectsVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_d8,pFVar6,(uint)(param_14 != (FRDGBufferSRV *)0x0));
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this,&local_58);
    FRasterizeToRectsVS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRasterizeToRectsVS::GetStaticType();
  fVar4 = __real_3f800000;
  (param_5->VS).RectUVBuffer = param_14;
  TVar3._s_0.Y = fVar4 / (float)param_6.field0_0x0._s_0.Y;
  TVar3._s_0.X = fVar4 / (float)param_6.field0_0x0._0_4_;
  (param_5->VS).InvViewSize.field0_0x0 = TVar3;
  TVar2._s_0.Y = fVar4 / (float)param_13.field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar4 / (float)param_13.field0_0x0._s_0.X;
  (param_5->VS).InvTextureSize.field0_0x0 = TVar2;
  (param_5->VS).RectCoordBuffer = param_7;
  (param_5->VS).DownsampleFactor = fVar4 / (float)param_15;
  (param_5->VS).DepthIncrement = param_17;
  pFVar7 = FNaniteMarkStencilPS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_c8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_c8,pFVar7,&param_5->PS);
  local_48._First = (FRDGResource **)0x0;
  local_48._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar7,&param_5->PS,&local_48);
  local_b8.PixelShader.ShaderContent = (FEmitSceneDepthPS *)param_4->ShaderContent;
  local_b8.PixelShader.ShaderMap = param_4->ShaderMap;
  local_b8.VertexShader.ShaderContent = (FRasterizeToRectsVS *)local_d8.ShaderContent;
  local_b8.VertexShader.ShaderMap = local_d8.ShaderMap;
  local_b8.BlendState = param_9;
  local_b8.RasterizerState = param_10;
  local_b8.DepthStencilState = param_11;
  local_b8.StencilRef = param_12;
  local_b8.bSkipRenderPass = (bool)((byte)(param_16 | Raster) >> 5 & 1);
  local_b8.Parameters = (FNaniteEmitDepthRectsParameters *)param_5;
  local_b8.NumRects = param_8;
  local_b8.GlobalShaderMap = param_2;
  local_b8.ViewportSize.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)param_6.field0_0x0._s_0
  ;
  FRDGBuilder::
  AddPass<FNaniteMarkStencilRectsParameters,_FPixelShaderUtils::AddRasterizeToRectsPass<FNaniteMarkStencilPS,FNaniteMarkStencilRectsParameters>_::__l2::<lambda_1>_>
            (param_1,param_3,param_5,param_16 | Raster,&local_b8);
  return;
}

// DrawFullscreenPixelShader<FEmitCustomDepthStencilPS> @ 144f606e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FEmitCustomDepthStencilPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FEmitCustomDepthStencilPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FEmitCustomDepthStencilPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FEmitCustomDepthStencilPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FEmitCustomDepthStencilPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FEmitCustomDepthStencilPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FEmitSceneDepthPS> @ 144f609d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FEmitSceneDepthPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  code *pcVar1;
  bool bVar2;
  FRHIPixelShader *pFVar3;
  undefined1 auStackY_198 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_150;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_3->ShaderContent == (FEmitSceneDepthPS *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
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
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.StatePrecachePSOHash = 0;
  local_150.ShaderContent = (FShader *)param_3->ShaderContent;
  local_150.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_138.RenderTargetFlags.Elements[0] = None;
  local_138.RenderTargetFlags.Elements[1] = None;
  local_138.RenderTargetFlags.Elements[2] = None;
  local_138.RenderTargetFlags.Elements[3] = None;
  local_138.RenderTargetFlags.Elements[4] = None;
  local_138.RenderTargetFlags.Elements[5] = None;
  local_138.RenderTargetFlags.Elements[6] = None;
  local_138.RenderTargetFlags.Elements[7] = None;
  InitFullscreenPipelineState(param_1,param_2,&local_150,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  pFVar3 = TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable>::GetPixelShader(param_3,true);
  SetShaderParameters<FRHICommandList,FEmitSceneDepthPS,FRHIPixelShader>
            (param_1,param_3,pFVar3,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FEmitSceneStencilPS> @ 144f60bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FEmitSceneStencilPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FEmitSceneStencilPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FEmitSceneStencilPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FEmitSceneStencilPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FEmitSceneStencilPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FEmitSceneStencilPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FEmitShadowMapPS> @ 144f60ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FEmitShadowMapPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FEmitShadowMapPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FEmitShadowMapPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FEmitShadowMapPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FEmitShadowMapPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FEmitShadowMapPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FMobileCubeDownsamplePS> @ 144f61190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FMobileCubeDownsamplePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FMobileCubeDownsamplePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FMobileCubeDownsamplePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FMobileCubeDownsamplePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMobileCubeDownsamplePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FMobileCubeDownsamplePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 144f6e050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FEmitCustomDepthStencilPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FEmitCustomDepthStencilPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FEmitCustomDepthStencilPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144f6e0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FEmitSceneDepthPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FEmitSceneDepthPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144f6e0f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FEmitSceneStencilPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FEmitSceneStencilPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FEmitSceneStencilPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144f6e140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FEmitShadowMapPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FEmitShadowMapPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FEmitShadowMapPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144f6e190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FMobileCubeDownsamplePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FMobileCubeDownsamplePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FMobileCubeDownsamplePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 144f701e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddRasterizeToRectsPass<FEmitSceneDepthPS,FNaniteEmitDepthRectsParameters>'::
__l2::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FRHIVertexShader *pFVar3;
  FRHIPixelShader *pFVar4;
  undefined1 auStackY_258 [32];
  FGraphicsPipelineStateInitializer local_218;
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_138);
    local_138.ResolveRect.X2 = *(int *)((longlong)this + 0x30);
    local_138.ResolveRect.Y2 = *(int *)((longlong)this + 0x34);
    local_138.ResolveRect.X1 = 0;
    local_138.ResolveRect.Y1 = 0;
    FRHICommandList::BeginRenderPass(param_2,&local_138,L"RasterizeToRects");
    if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
    }
  }
  local_218.RenderTargetsEnabled = 0;
  local_218.RenderTargetFormats.Elements[0] = '\0';
  local_218.RenderTargetFormats.Elements[1] = '\0';
  local_218.RenderTargetFormats.Elements[2] = '\0';
  local_218.RenderTargetFormats.Elements[3] = '\0';
  local_218.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_218.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_218.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_218.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_218.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_218.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_218.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_218.BlendState = (FRHIBlendState *)0x0;
  local_218.RasterizerState = (FRHIRasterizerState *)0x0;
  local_218.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_218.RenderTargetFlags.Elements[0] = None;
  local_218.RenderTargetFlags.Elements[1] = None;
  local_218.RenderTargetFlags.Elements[2] = None;
  local_218.RenderTargetFlags.Elements[3] = None;
  local_218.RenderTargetFlags.Elements[4] = None;
  local_218.RenderTargetFlags.Elements[5] = None;
  local_218.RenderTargetFlags.Elements[6] = None;
  local_218.RenderTargetFlags.Elements[7] = None;
  local_218.RenderTargetFormats.Elements[4] = '\0';
  local_218.RenderTargetFormats.Elements[5] = '\0';
  local_218.RenderTargetFormats.Elements[6] = '\0';
  local_218.RenderTargetFormats.Elements[7] = '\0';
  local_218.DepthStencilTargetFormat = PF_Unknown;
  local_218.DepthStencilTargetFlag = None;
  local_218.DepthTargetLoadAction = ENoAction;
  local_218.DepthTargetStoreAction = ENoAction;
  local_218.StencilTargetLoadAction = ENoAction;
  local_218.StencilTargetStoreAction = ENoAction;
  local_218.DepthStencilAccess.Value = DepthNop;
  local_218.NumSamples = 0;
  local_218.SubpassHint = None;
  local_218.SubpassIndex = '\0';
  local_218.ConservativeRasterization = Disabled;
  local_218.bDepthBounds = false;
  local_218.MultiViewCount = '\0';
  local_218.bHasFragmentDensityAttachment = false;
  local_218.bAllowVariableRateShading = true;
  local_218.ShadingRate = VRSSR_1x1;
  local_218.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_218.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_218);
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(int *)((longlong)this + 0x30),
             (float)*(int *)((longlong)this + 0x34),__real_3f800000);
  local_218.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIBlendState **)((longlong)this + 0x38) != (FRHIBlendState *)0x0) {
    local_218.BlendState = *(FRHIBlendState **)((longlong)this + 0x38);
  }
  local_218.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIRasterizerState **)((longlong)this + 0x40) != (FRHIRasterizerState *)0x0) {
    local_218.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x40);
  }
  local_218.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIDepthStencilState **)((longlong)this + 0x48) != (FRHIDepthStencilState *)0x0) {
    local_218.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x48);
  }
  local_218.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_218.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_218.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
       GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                        *)((longlong)this + 0x10),true);
  local_218.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x20),true);
  SetGraphicsPipelineState(param_2,&local_218,*(uint *)((longlong)this + 0x50),CheckApply,true);
  pFVar1 = *(FParameters **)this;
  pFVar3 = TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
           GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                            *)((longlong)this + 0x10),true);
  SetShaderParameters<FRHICommandList,FPixelShaderUtils::FRasterizeToRectsVS,FRHIVertexShader>
            (param_2,(TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                      *)((longlong)this + 0x10),pFVar3,pFVar1);
  lVar2 = *(longlong *)this;
  pFVar4 = TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  SetShaderParameters<FRHICommandList,FEmitSceneDepthPS,FRHIPixelShader>
            (param_2,(TShaderRefBase<FEmitSceneDepthPS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x20),pFVar4,(FParameters *)(lVar2 + 0x30));
  FRHICommandList::DrawPrimitive
            (param_2,0,2 - (GRHIGlobals.SupportsRectTopology != false),
             *(uint *)((longlong)this + 0x58));
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHICommandList::EndRenderPass(param_2);
  }
  return;
}

// operator() @ 144f70440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddRasterizeToRectsPass<FNaniteMarkStencilPS,FNaniteMarkStencilRectsParameters>'
::__l2::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FRHIVertexShader *pFVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  undefined1 auStackY_268 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  FGraphicsPipelineStateInitializer local_218;
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_138);
    local_138.ResolveRect.X2 = *(int *)((longlong)this + 0x30);
    local_138.ResolveRect.Y2 = *(int *)((longlong)this + 0x34);
    local_138.ResolveRect.X1 = 0;
    local_138.ResolveRect.Y1 = 0;
    FRHICommandList::BeginRenderPass(param_2,&local_138,L"RasterizeToRects");
    if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
    }
  }
  local_218.RenderTargetsEnabled = 0;
  local_218.RenderTargetFormats.Elements[0] = '\0';
  local_218.RenderTargetFormats.Elements[1] = '\0';
  local_218.RenderTargetFormats.Elements[2] = '\0';
  local_218.RenderTargetFormats.Elements[3] = '\0';
  local_218.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_218.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_218.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_218.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_218.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_218.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_218.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_218.BlendState = (FRHIBlendState *)0x0;
  local_218.RasterizerState = (FRHIRasterizerState *)0x0;
  local_218.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_218.RenderTargetFlags.Elements[0] = None;
  local_218.RenderTargetFlags.Elements[1] = None;
  local_218.RenderTargetFlags.Elements[2] = None;
  local_218.RenderTargetFlags.Elements[3] = None;
  local_218.RenderTargetFlags.Elements[4] = None;
  local_218.RenderTargetFlags.Elements[5] = None;
  local_218.RenderTargetFlags.Elements[6] = None;
  local_218.RenderTargetFlags.Elements[7] = None;
  local_218.RenderTargetFormats.Elements[4] = '\0';
  local_218.RenderTargetFormats.Elements[5] = '\0';
  local_218.RenderTargetFormats.Elements[6] = '\0';
  local_218.RenderTargetFormats.Elements[7] = '\0';
  local_218.DepthStencilTargetFormat = PF_Unknown;
  local_218.DepthStencilTargetFlag = None;
  local_218.DepthTargetLoadAction = ENoAction;
  local_218.DepthTargetStoreAction = ENoAction;
  local_218.StencilTargetLoadAction = ENoAction;
  local_218.StencilTargetStoreAction = ENoAction;
  local_218.DepthStencilAccess.Value = DepthNop;
  local_218.NumSamples = 0;
  local_218.SubpassHint = None;
  local_218.SubpassIndex = '\0';
  local_218.ConservativeRasterization = Disabled;
  local_218.bDepthBounds = false;
  local_218.MultiViewCount = '\0';
  local_218.bHasFragmentDensityAttachment = false;
  local_218.bAllowVariableRateShading = true;
  local_218.ShadingRate = VRSSR_1x1;
  local_218.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_218.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_218);
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(int *)((longlong)this + 0x30),
             (float)*(int *)((longlong)this + 0x34),__real_3f800000);
  local_218.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIBlendState **)((longlong)this + 0x38) != (FRHIBlendState *)0x0) {
    local_218.BlendState = *(FRHIBlendState **)((longlong)this + 0x38);
  }
  local_218.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIRasterizerState **)((longlong)this + 0x40) != (FRHIRasterizerState *)0x0) {
    local_218.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x40);
  }
  local_218.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIDepthStencilState **)((longlong)this + 0x48) != (FRHIDepthStencilState *)0x0) {
    local_218.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x48);
  }
  local_218.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_218.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_218.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
       GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                        *)((longlong)this + 0x10),true);
  local_218.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FNaniteMarkStencilPS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FNaniteMarkStencilPS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x20),true);
  SetGraphicsPipelineState(param_2,&local_218,*(uint *)((longlong)this + 0x50),CheckApply,true);
  pFVar1 = *(FParameters **)this;
  pFVar3 = TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
           GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                            *)((longlong)this + 0x10),true);
  SetShaderParameters<FRHICommandList,FPixelShaderUtils::FRasterizeToRectsVS,FRHIVertexShader>
            (param_2,(TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                      *)((longlong)this + 0x10),pFVar3,pFVar1);
  lVar2 = *(longlong *)this;
  pFVar4 = TShaderRefBase<FNaniteMarkStencilPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FNaniteMarkStencilPS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  pFVar5 = FNaniteMarkStencilPS::FParameters::FTypeInfo::GetStructMetadata();
  local_228.ShaderContent = *(FShader **)((longlong)this + 0x20);
  local_228.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x28);
  ValidateShaderParameters(&local_228,pFVar5,(void *)(lVar2 + 0x30));
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x20),pFVar5,(void *)(lVar2 + 0x30));
  FRHICommandList::DrawPrimitive
            (param_2,0,2 - (GRHIGlobals.SupportsRectTopology != false),
             *(uint *)((longlong)this + 0x58));
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHICommandList::EndRenderPass(param_2);
  }
  return;
}

// AddFullscreenPass<FExportDebugViewPS> @ 14501e620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FExportDebugViewPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FExportDebugViewPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FExportDebugViewPS *pFVar5;
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
  FExportDebugViewPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FExportDebugViewPS *)0x0) {
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
  pFVar10 = FExportDebugViewPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FExportDebugViewPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FExportDebugViewPS__V<lambda_1>__1____AddFullscreenPass_VFExportDebugViewPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFExportDebugViewPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FExportDebugViewPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FExportDebugViewPS> @ 14502ec60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FExportDebugViewPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FExportDebugViewPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FExportDebugViewPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FExportDebugViewPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FExportDebugViewPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FExportDebugViewPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 1450395e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FExportDebugViewPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FExportDebugViewPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FExportDebugViewPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FCompositePostProcessPrimitivesPS> @ 14511a050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FCompositePostProcessPrimitivesPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FCompositePostProcessPrimitivesPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FCompositePostProcessPrimitivesPS *pFVar5;
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
  FCompositePostProcessPrimitivesPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FCompositePostProcessPrimitivesPS *)0x0) {
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
  pFVar10 = FCompositePostProcessPrimitivesPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FCompositePostProcessPrimitivesPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FCompositePostProcessPrimitivesPS__V<lambda_1>__1____AddFullscreenPass_VFCompositePostProcessPrimitivesPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCompositePostProcessPrimitivesPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FCompositePostProcessPrimitivesPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FFXAAPS> @ 14511a300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FFXAAPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FFXAAPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FFXAAPS *pFVar5;
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
  FFXAAPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FFXAAPS *)0x0) {
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
  pFVar10 = FFXAAPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FFXAAPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FFXAAPS__V<lambda_1>__1____AddFullscreenPass_VFFXAAPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFFXAAPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FFXAAPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FPopulateCompositeDepthPS> @ 14511a5b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FPopulateCompositeDepthPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FPopulateCompositeDepthPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FPopulateCompositeDepthPS *pFVar5;
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
  FPopulateCompositeDepthPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FPopulateCompositeDepthPS *)0x0) {
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
  pFVar10 = FPopulateCompositeDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FPopulateCompositeDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FPopulateCompositeDepthPS__V<lambda_1>__1____AddFullscreenPass_VFPopulateCompositeDepthPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFPopulateCompositeDepthPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FPopulateCompositeDepthPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FTemporalUpsampleDepthPS> @ 14511a860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FTemporalUpsampleDepthPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FTemporalUpsampleDepthPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FTemporalUpsampleDepthPS *pFVar5;
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
  FTemporalUpsampleDepthPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FTemporalUpsampleDepthPS *)0x0) {
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
  pFVar10 = FTemporalUpsampleDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FTemporalUpsampleDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FTemporalUpsampleDepthPS__V<lambda_1>__1____AddFullscreenPass_VFTemporalUpsampleDepthPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFTemporalUpsampleDepthPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FTemporalUpsampleDepthPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FCompositePostProcessPrimitivesPS> @ 145124550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FCompositePostProcessPrimitivesPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCompositePostProcessPrimitivesPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCompositePostProcessPrimitivesPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCompositePostProcessPrimitivesPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCompositePostProcessPrimitivesPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCompositePostProcessPrimitivesPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FFXAAPS> @ 145124840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FFXAAPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FFXAAPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FFXAAPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FFXAAPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FFXAAPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FFXAAPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FPopulateCompositeDepthPS> @ 145124b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FPopulateCompositeDepthPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FPopulateCompositeDepthPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FPopulateCompositeDepthPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FPopulateCompositeDepthPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FPopulateCompositeDepthPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FPopulateCompositeDepthPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FTemporalUpsampleDepthPS> @ 145124e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FTemporalUpsampleDepthPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FTemporalUpsampleDepthPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FTemporalUpsampleDepthPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FTemporalUpsampleDepthPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FTemporalUpsampleDepthPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FTemporalUpsampleDepthPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145127b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<`anonymous_namespace'::FBloomSetupPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<_anonymous_namespace_::FBloomSetupPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<_anonymous_namespace_::FBloomSetupPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145127be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCompositePostProcessPrimitivesPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCompositePostProcessPrimitivesPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCompositePostProcessPrimitivesPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145127c30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FFXAAPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FFXAAPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FFXAAPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145127c80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FPopulateCompositeDepthPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FPopulateCompositeDepthPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FPopulateCompositeDepthPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145127cd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FTemporalUpsampleDepthPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FTemporalUpsampleDepthPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FTemporalUpsampleDepthPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145196e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<`anonymous_namespace'::FDownsamplePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<_anonymous_namespace_::FDownsamplePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<_anonymous_namespace_::FDownsamplePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145196e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<`anonymous_namespace'::FLensFlareCopyBloomPS>'::__l2::
<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<_anonymous_namespace_::FLensFlareCopyBloomPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<_anonymous_namespace_::FLensFlareCopyBloomPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FMotionBlurVisualizePS> @ 1451fba70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FMotionBlurVisualizePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FMotionBlurVisualizePS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FMotionBlurVisualizePS *pFVar5;
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
  FMotionBlurVisualizePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FMotionBlurVisualizePS *)0x0) {
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
  pFVar10 = FMotionBlurVisualizePS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FMotionBlurVisualizePS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FMotionBlurVisualizePS__V<lambda_1>__1____AddFullscreenPass_VFMotionBlurVisualizePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFMotionBlurVisualizePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FMotionBlurVisualizePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FMotionBlurVisualizePS> @ 14520db60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FMotionBlurVisualizePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FMotionBlurVisualizePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FMotionBlurVisualizePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FMotionBlurVisualizePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMotionBlurVisualizePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FMotionBlurVisualizePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145212090

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FMotionBlurVisualizePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FMotionBlurVisualizePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FMotionBlurVisualizePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FVisualizeMotionVectorsPS> @ 145289e90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FVisualizeMotionVectorsPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FVisualizeMotionVectorsPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FVisualizeMotionVectorsPS *pFVar5;
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
  FVisualizeMotionVectorsPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FVisualizeMotionVectorsPS *)0x0) {
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
  pFVar10 = FVisualizeMotionVectorsPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FVisualizeMotionVectorsPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FVisualizeMotionVectorsPS__V<lambda_1>__1____AddFullscreenPass_VFVisualizeMotionVectorsPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFVisualizeMotionVectorsPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FVisualizeMotionVectorsPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FVisualizeMotionVectorsPS> @ 1452903b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FVisualizeMotionVectorsPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FVisualizeMotionVectorsPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FVisualizeMotionVectorsPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FVisualizeMotionVectorsPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FVisualizeMotionVectorsPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FVisualizeMotionVectorsPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 1452973c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<`anonymous_namespace'::FFilterPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<_anonymous_namespace_::FFilterPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<_anonymous_namespace_::FFilterPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145297410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<`anonymous_namespace'::FTemporalAAPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<_anonymous_namespace_::FTemporalAAPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<_anonymous_namespace_::FTemporalAAPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145297460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FVisualizeMotionVectorsPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FVisualizeMotionVectorsPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FVisualizeMotionVectorsPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FRayTracingDebugBlendInstanceOverlapPS> @ 1452f19b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FRayTracingDebugBlendInstanceOverlapPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FRayTracingDebugBlendInstanceOverlapPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FRayTracingDebugBlendInstanceOverlapPS *pFVar5;
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
  FRayTracingDebugBlendInstanceOverlapPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FRayTracingDebugBlendInstanceOverlapPS *)0x0) {
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
  pFVar10 = FRayTracingDebugBlendInstanceOverlapPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FRayTracingDebugBlendInstanceOverlapPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FRayTracingDebugBlendInstanceOverlapPS__V<lambda_1>__1____AddFullscreenPass_VFRayTracingDebugBlendInstanceOverlapPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFRayTracingDebugBlendInstanceOverlapPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FRayTracingDebugBlendInstanceOverlapPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FRayTracingDebugConvertToDeviceDepthPS> @ 1452f1c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FRayTracingDebugConvertToDeviceDepthPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FRayTracingDebugConvertToDeviceDepthPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FRayTracingDebugConvertToDeviceDepthPS *pFVar5;
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
  FRayTracingDebugConvertToDeviceDepthPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FRayTracingDebugConvertToDeviceDepthPS *)0x0) {
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
  pFVar10 = FRayTracingDebugConvertToDeviceDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FRayTracingDebugConvertToDeviceDepthPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FRayTracingDebugConvertToDeviceDepthPS__V<lambda_1>__1____AddFullscreenPass_VFRayTracingDebugConvertToDeviceDepthPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFRayTracingDebugConvertToDeviceDepthPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FRayTracingDebugConvertToDeviceDepthPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FRayTracingDebugBlendInstanceOverlapPS> @ 1452f86d0

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
FPixelShaderUtils::DrawFullscreenPixelShader<FRayTracingDebugBlendInstanceOverlapPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FRayTracingDebugBlendInstanceOverlapPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FRayTracingDebugBlendInstanceOverlapPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FRayTracingDebugBlendInstanceOverlapPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRayTracingDebugBlendInstanceOverlapPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FRayTracingDebugBlendInstanceOverlapPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FRayTracingDebugConvertToDeviceDepthPS> @ 1452f89c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FRayTracingDebugConvertToDeviceDepthPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FRayTracingDebugConvertToDeviceDepthPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FRayTracingDebugConvertToDeviceDepthPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FRayTracingDebugConvertToDeviceDepthPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRayTracingDebugConvertToDeviceDepthPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FRayTracingDebugConvertToDeviceDepthPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145300140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FRayTracingDebugBlendInstanceOverlapPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FRayTracingDebugBlendInstanceOverlapPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FRayTracingDebugBlendInstanceOverlapPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145300190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FRayTracingDebugConvertToDeviceDepthPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FRayTracingDebugConvertToDeviceDepthPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FRayTracingDebugConvertToDeviceDepthPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FComputeBrightnessPS> @ 145350ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FComputeBrightnessPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FComputeBrightnessPS,FShaderMapPointerTable> *param_4,
          FCubeFinalGatherPS *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FComputeBrightnessPS *pFVar5;
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
  FComputeBrightnessPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FComputeBrightnessPS *)0x0) {
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
  pFVar10 = FCubeFinalGatherPS::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FCubeFinalGatherPS::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFCubeFinalGatherPS__V<lambda_1>__1____AddFullscreenPass_VFComputeBrightnessPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFComputeBrightnessPS__VFShaderMapPointerTable____PEAV1_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FComputeBrightnessPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
  this[1].Name.EventFormat = (wchar_t *)pFVar6;
  this[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)TVar2;
  *(TIntPoint<int>_u_0 *)&this[1].Name.FormattedEventName.Data.ArrayNum = TVar3;
  this[1].ParameterStruct.Contents = (uchar *)param_7;
  this[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_8;
  this[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_9;
  this[1].Flags = (undefined2)param_10;
  this[1].TaskMode = param_10._2_1_;
  this[1].Pipeline = param_10._3_1_;
  *(FCubeFinalGatherPS **)&this[1].Workload = param_5;
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

// AddFullscreenPass<FComputeCubeMaxLuminancePS> @ 1453512a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FComputeCubeMaxLuminancePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FComputeCubeMaxLuminancePS,FShaderMapPointerTable> *param_4,
          FCubeFinalGatherPS *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FComputeCubeMaxLuminancePS *pFVar5;
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
  FComputeCubeMaxLuminancePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FComputeCubeMaxLuminancePS *)0x0) {
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
  pFVar10 = FCubeFinalGatherPS::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FCubeFinalGatherPS::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFCubeFinalGatherPS__V<lambda_1>__1____AddFullscreenPass_VFComputeCubeMaxLuminancePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFComputeCubeMaxLuminancePS__VFShaderMapPointerTable____PEAV1_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FComputeCubeMaxLuminancePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
  this[1].Name.EventFormat = (wchar_t *)pFVar6;
  this[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)TVar2;
  *(TIntPoint<int>_u_0 *)&this[1].Name.FormattedEventName.Data.ArrayNum = TVar3;
  this[1].ParameterStruct.Contents = (uchar *)param_7;
  this[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_8;
  this[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_9;
  this[1].Flags = (undefined2)param_10;
  this[1].TaskMode = param_10._2_1_;
  this[1].Pipeline = param_10._3_1_;
  *(FCubeFinalGatherPS **)&this[1].Workload = param_5;
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

// DrawFullscreenPixelShader<FComputeBrightnessPS> @ 14535aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FComputeBrightnessPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FComputeBrightnessPS,FShaderMapPointerTable> *param_3,
          FCubeFinalGatherPS *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FComputeBrightnessPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FComputeBrightnessPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FComputeBrightnessPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCubeFinalGatherPS::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FComputeCubeMaxLuminancePS> @ 14535ad60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FComputeCubeMaxLuminancePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FComputeCubeMaxLuminancePS,FShaderMapPointerTable> *param_3,
          FCubeFinalGatherPS *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FComputeCubeMaxLuminancePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FComputeCubeMaxLuminancePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FComputeCubeMaxLuminancePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCubeFinalGatherPS::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FCopyCubemapToCubeFacePS> @ 14535b050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FCopyCubemapToCubeFacePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCopyCubemapToCubeFacePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCopyCubemapToCubeFacePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCopyCubemapToCubeFacePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyCubemapToCubeFacePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCopyCubemapToCubeFacePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FCubeDownsampleMaxPS> @ 14535b340

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
FPixelShaderUtils::DrawFullscreenPixelShader<FCubeDownsampleMaxPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCubeDownsampleMaxPS,FShaderMapPointerTable> *param_3,
          FCubeShaderParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCubeDownsampleMaxPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCubeDownsampleMaxPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCubeDownsampleMaxPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCubeShaderParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FCubeDownsamplePS> @ 14535b630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FCubeDownsamplePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCubeDownsamplePS,FShaderMapPointerTable> *param_3,
          FCubeShaderParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCubeDownsamplePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCubeDownsamplePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCubeDownsamplePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCubeShaderParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FCubeFilterPS> @ 14535b920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FCubeFilterPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCubeFilterPS,FShaderMapPointerTable> *param_3,
          FCubeShaderParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCubeFilterPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCubeFilterPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCubeFilterPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCubeShaderParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FOneColorPS> @ 14535bc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FOneColorPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FOneColorPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FOneColorPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FOneColorPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FOneColorPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145364510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FComputeBrightnessPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FComputeBrightnessPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FComputeBrightnessPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FCubeFinalGatherPS **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145364560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FComputeCubeMaxLuminancePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FComputeCubeMaxLuminancePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FComputeCubeMaxLuminancePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FCubeFinalGatherPS **)this,
             (TIntRect<int> *)((longlong)this + 0x20),*(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1453645b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCopyCubemapToCubeFacePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCopyCubemapToCubeFacePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCopyCubemapToCubeFacePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145364600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCubeDownsampleMaxPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCubeDownsampleMaxPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCubeDownsampleMaxPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FCubeShaderParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145364650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCubeDownsamplePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCubeDownsamplePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCubeDownsamplePS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FCubeShaderParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1453646a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCubeFilterPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCubeFilterPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCubeFilterPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FCubeShaderParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1453646f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FOneColorPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FOneColorPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FOneColorPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// DrawFullscreenPixelShader<FAccumulateCubeFacesPS> @ 1453d7a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FAccumulateCubeFacesPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FAccumulateCubeFacesPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FAccumulateCubeFacesPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FAccumulateCubeFacesPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FAccumulateCubeFacesPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FAccumulateCubeFacesPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FAccumulateDiffuseIrradiancePS> @ 1453d7cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FAccumulateDiffuseIrradiancePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FAccumulateDiffuseIrradiancePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FAccumulateDiffuseIrradiancePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FAccumulateDiffuseIrradiancePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FAccumulateDiffuseIrradiancePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FAccumulateDiffuseIrradiancePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FCopyDiffuseIrradiancePS> @ 1453d7fe0

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
FPixelShaderUtils::DrawFullscreenPixelShader<FCopyDiffuseIrradiancePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCopyDiffuseIrradiancePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCopyDiffuseIrradiancePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCopyDiffuseIrradiancePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyDiffuseIrradiancePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCopyDiffuseIrradiancePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145409b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FAccumulateCubeFacesPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FAccumulateCubeFacesPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FAccumulateCubeFacesPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145409b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FAccumulateDiffuseIrradiancePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FAccumulateDiffuseIrradiancePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FAccumulateDiffuseIrradiancePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145409ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCopyDiffuseIrradiancePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCopyDiffuseIrradiancePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCopyDiffuseIrradiancePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FHZBTestPS> @ 14546bf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FHZBTestPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FHZBTestPS *pFVar5;
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
  FHZBTestPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FHZBTestPS *)0x0) {
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
  pFVar10 = FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FHZBTestPS__V<lambda_1>__1____AddFullscreenPass_VFHZBTestPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFHZBTestPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FHZBTestPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FHZBTestPS> @ 1454713e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FHZBTestPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FHZBTestPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FHZBTestPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FHZBTestPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FHZBTestPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 14547d0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FHZBTestPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FHZBTestPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FHZBBuildPS> @ 1454c6f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FHZBBuildPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FHZBBuildPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FHZBBuildPS *pFVar5;
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
  FHZBBuildPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FHZBBuildPS *)0x0) {
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
  pFVar10 = FHZBBuildPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FHZBBuildPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FHZBBuildPS__V<lambda_1>__1____AddFullscreenPass_VFHZBBuildPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFHZBBuildPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FHZBBuildPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FHZBBuildPS> @ 1454ca940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FHZBBuildPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FHZBBuildPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FHZBBuildPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FHZBBuildPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FHZBBuildPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FHZBBuildPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 1454d8080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FHZBBuildPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FHZBBuildPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FHZBBuildPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FShadingFurnaceTestPassPS> @ 14555fe40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FShadingFurnaceTestPassPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FShadingFurnaceTestPassPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FShadingFurnaceTestPassPS *pFVar5;
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
  FShadingFurnaceTestPassPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FShadingFurnaceTestPassPS *)0x0) {
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
  pFVar10 = FShadingFurnaceTestPassPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FShadingFurnaceTestPassPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FShadingFurnaceTestPassPS__V<lambda_1>__1____AddFullscreenPass_VFShadingFurnaceTestPassPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFShadingFurnaceTestPassPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FShadingFurnaceTestPassPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FShadingFurnaceTestPassPS> @ 14556e700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FShadingFurnaceTestPassPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FShadingFurnaceTestPassPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FShadingFurnaceTestPassPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FShadingFurnaceTestPassPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FShadingFurnaceTestPassPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FShadingFurnaceTestPassPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145577a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FShadingFurnaceTestPassPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FShadingFurnaceTestPassPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FShadingFurnaceTestPassPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FFirstPersonSelfShadowBlurPS> @ 1455fa990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowBlurPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FFirstPersonSelfShadowBlurPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FFirstPersonSelfShadowBlurPS *pFVar5;
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
  FFirstPersonSelfShadowBlurPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FFirstPersonSelfShadowBlurPS *)0x0) {
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
  pFVar10 = FFirstPersonSelfShadowBlurPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FFirstPersonSelfShadowBlurPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FFirstPersonSelfShadowBlurPS__V<lambda_1>__1____AddFullscreenPass_VFFirstPersonSelfShadowBlurPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFFirstPersonSelfShadowBlurPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FFirstPersonSelfShadowBlurPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FFirstPersonSelfShadowInputsDownsamplePS> @ 1455fac40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowInputsDownsamplePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FFirstPersonSelfShadowInputsDownsamplePS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FFirstPersonSelfShadowInputsDownsamplePS *pFVar5;
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
  FFirstPersonSelfShadowInputsDownsamplePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FFirstPersonSelfShadowInputsDownsamplePS *)0x0) {
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
  pFVar10 = FFirstPersonSelfShadowInputsDownsamplePS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FFirstPersonSelfShadowInputsDownsamplePS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FFirstPersonSelfShadowInputsDownsamplePS__V<lambda_1>__1____AddFullscreenPass_VFFirstPersonSelfShadowInputsDownsamplePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFFirstPersonSelfShadowInputsDownsamplePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FFirstPersonSelfShadowInputsDownsamplePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FFirstPersonSelfShadowTracingPS> @ 1455faef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowTracingPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FFirstPersonSelfShadowTracingPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FFirstPersonSelfShadowTracingPS *pFVar5;
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
  FFirstPersonSelfShadowTracingPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FFirstPersonSelfShadowTracingPS *)0x0) {
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
  pFVar10 = FFirstPersonSelfShadowTracingPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FFirstPersonSelfShadowTracingPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FFirstPersonSelfShadowTracingPS__V<lambda_1>__1____AddFullscreenPass_VFFirstPersonSelfShadowTracingPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFFirstPersonSelfShadowTracingPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FFirstPersonSelfShadowTracingPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FFirstPersonSelfShadowUpsamplePS> @ 1455fb1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowUpsamplePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FFirstPersonSelfShadowUpsamplePS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FFirstPersonSelfShadowUpsamplePS *pFVar5;
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
  FFirstPersonSelfShadowUpsamplePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FFirstPersonSelfShadowUpsamplePS *)0x0) {
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
  pFVar10 = FFirstPersonSelfShadowUpsamplePS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FFirstPersonSelfShadowUpsamplePS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FFirstPersonSelfShadowUpsamplePS__V<lambda_1>__1____AddFullscreenPass_VFFirstPersonSelfShadowUpsamplePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFFirstPersonSelfShadowUpsamplePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FFirstPersonSelfShadowUpsamplePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FFirstPersonSelfShadowBlurPS> @ 1455ffd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowBlurPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FFirstPersonSelfShadowBlurPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FFirstPersonSelfShadowBlurPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FFirstPersonSelfShadowBlurPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FFirstPersonSelfShadowBlurPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FFirstPersonSelfShadowBlurPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FFirstPersonSelfShadowInputsDownsamplePS> @ 145600040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowInputsDownsamplePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FFirstPersonSelfShadowInputsDownsamplePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FFirstPersonSelfShadowInputsDownsamplePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FFirstPersonSelfShadowInputsDownsamplePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FFirstPersonSelfShadowInputsDownsamplePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FFirstPersonSelfShadowInputsDownsamplePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FFirstPersonSelfShadowTracingPS> @ 145600330

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
FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowTracingPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FFirstPersonSelfShadowTracingPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FFirstPersonSelfShadowTracingPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FFirstPersonSelfShadowTracingPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FFirstPersonSelfShadowTracingPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FFirstPersonSelfShadowTracingPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FFirstPersonSelfShadowUpsamplePS> @ 145600620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowUpsamplePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FFirstPersonSelfShadowUpsamplePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FFirstPersonSelfShadowUpsamplePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FFirstPersonSelfShadowUpsamplePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FFirstPersonSelfShadowUpsamplePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FFirstPersonSelfShadowUpsamplePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 14560bf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowBlurPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowBlurPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FFirstPersonSelfShadowBlurPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 14560bfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowInputsDownsamplePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowInputsDownsamplePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FFirstPersonSelfShadowInputsDownsamplePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 14560c000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowTracingPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowTracingPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FFirstPersonSelfShadowTracingPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 14560c050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FFirstPersonSelfShadowUpsamplePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FFirstPersonSelfShadowUpsamplePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FFirstPersonSelfShadowUpsamplePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FSingleLayerWaterRefractionCullingPS> @ 145653310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FSingleLayerWaterRefractionCullingPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FSingleLayerWaterRefractionCullingPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FSingleLayerWaterRefractionCullingPS *pFVar5;
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
  FSingleLayerWaterRefractionCullingPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FSingleLayerWaterRefractionCullingPS *)0x0) {
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
  pFVar10 = FSingleLayerWaterRefractionCullingPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FSingleLayerWaterRefractionCullingPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FSingleLayerWaterRefractionCullingPS__V<lambda_1>__1____AddFullscreenPass_VFSingleLayerWaterRefractionCullingPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFSingleLayerWaterRefractionCullingPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FSingleLayerWaterRefractionCullingPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FSingleLayerWaterRefractionMaskPS> @ 1456535c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FSingleLayerWaterRefractionMaskPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FSingleLayerWaterRefractionMaskPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FSingleLayerWaterRefractionMaskPS *pFVar5;
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
  FSingleLayerWaterRefractionMaskPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FSingleLayerWaterRefractionMaskPS *)0x0) {
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
  pFVar10 = FSingleLayerWaterRefractionMaskPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FSingleLayerWaterRefractionMaskPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FSingleLayerWaterRefractionMaskPS__V<lambda_1>__1____AddFullscreenPass_VFSingleLayerWaterRefractionMaskPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFSingleLayerWaterRefractionMaskPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FSingleLayerWaterRefractionMaskPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FSingleLayerWaterRefractionCullingPS> @ 14565fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FSingleLayerWaterRefractionCullingPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FSingleLayerWaterRefractionCullingPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FSingleLayerWaterRefractionCullingPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FSingleLayerWaterRefractionCullingPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSingleLayerWaterRefractionCullingPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FSingleLayerWaterRefractionCullingPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FSingleLayerWaterRefractionMaskPS> @ 145660120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FSingleLayerWaterRefractionMaskPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FSingleLayerWaterRefractionMaskPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FSingleLayerWaterRefractionMaskPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FSingleLayerWaterRefractionMaskPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSingleLayerWaterRefractionMaskPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FSingleLayerWaterRefractionMaskPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FWaterRefractionCopyPS> @ 145660410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FWaterRefractionCopyPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FWaterRefractionCopyPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  code *pcVar1;
  bool bVar2;
  FRHIPixelShader *pFVar3;
  undefined1 auStackY_198 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_150;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_3->ShaderContent == (FWaterRefractionCopyPS *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
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
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.StatePrecachePSOHash = 0;
  local_150.ShaderContent = (FShader *)param_3->ShaderContent;
  local_150.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_138.RenderTargetFlags.Elements[0] = None;
  local_138.RenderTargetFlags.Elements[1] = None;
  local_138.RenderTargetFlags.Elements[2] = None;
  local_138.RenderTargetFlags.Elements[3] = None;
  local_138.RenderTargetFlags.Elements[4] = None;
  local_138.RenderTargetFlags.Elements[5] = None;
  local_138.RenderTargetFlags.Elements[6] = None;
  local_138.RenderTargetFlags.Elements[7] = None;
  InitFullscreenPipelineState(param_1,param_2,&local_150,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  pFVar3 = TShaderRefBase<FWaterRefractionCopyPS,FShaderMapPointerTable>::GetPixelShader
                     (param_3,true);
  SetShaderParameters<FRHICommandList,FWaterRefractionCopyPS,FRHIPixelShader>
            (param_1,param_3,pFVar3,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145667840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FSingleLayerWaterRefractionCullingPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FSingleLayerWaterRefractionCullingPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FSingleLayerWaterRefractionCullingPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145667890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FSingleLayerWaterRefractionMaskPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FSingleLayerWaterRefractionMaskPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FSingleLayerWaterRefractionMaskPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1456678e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FWaterRefractionCopyPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FWaterRefractionCopyPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FWaterRefractionCopyPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<Substrate::FMaterialDebugSubstrateTreePS> @ 1456bef10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<Substrate::FMaterialDebugSubstrateTreePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<Substrate::FMaterialDebugSubstrateTreePS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FMaterialDebugSubstrateTreePS *pFVar5;
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
  FMaterialDebugSubstrateTreePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FMaterialDebugSubstrateTreePS *)0x0) {
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
  pFVar10 = Substrate::FMaterialDebugSubstrateTreePS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = Substrate::FMaterialDebugSubstrateTreePS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FMaterialDebugSubstrateTreePS_Substrate__V<lambda_1>__1____AddFullscreenPass_VFMaterialDebugSubstrateTreePS_Substrate___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFMaterialDebugSubstrateTreePS_Substrate__VFShaderMapPointerTable____PEAV123_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FMaterialDebugSubstrateTreePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<Substrate::FVisualizeMaterialCountPS> @ 1456bf1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<Substrate::FVisualizeMaterialCountPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<Substrate::FVisualizeMaterialCountPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FVisualizeMaterialCountPS *pFVar5;
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
  FVisualizeMaterialCountPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FVisualizeMaterialCountPS *)0x0) {
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
  pFVar10 = Substrate::FVisualizeMaterialCountPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = Substrate::FVisualizeMaterialCountPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FVisualizeMaterialCountPS_Substrate__V<lambda_1>__1____AddFullscreenPass_VFVisualizeMaterialCountPS_Substrate___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFVisualizeMaterialCountPS_Substrate__VFShaderMapPointerTable____PEAV123_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FVisualizeMaterialCountPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<Substrate::FMaterialDebugSubstrateTreePS> @ 1456ca060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<Substrate::FMaterialDebugSubstrateTreePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<Substrate::FMaterialDebugSubstrateTreePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FMaterialDebugSubstrateTreePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FMaterialDebugSubstrateTreePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<Substrate::FMaterialDebugSubstrateTreePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = Substrate::FMaterialDebugSubstrateTreePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<Substrate::FVisualizeMaterialCountPS> @ 1456ca350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<Substrate::FVisualizeMaterialCountPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<Substrate::FVisualizeMaterialCountPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FVisualizeMaterialCountPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FVisualizeMaterialCountPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<Substrate::FVisualizeMaterialCountPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = Substrate::FVisualizeMaterialCountPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 1456df690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<Substrate::FMaterialDebugSubstrateTreePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<Substrate::FMaterialDebugSubstrateTreePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<Substrate::FMaterialDebugSubstrateTreePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1456df6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<Substrate::FVisualizeMaterialCountPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<Substrate::FVisualizeMaterialCountPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<Substrate::FVisualizeMaterialCountPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FComposeSeparateTranslucencyPS> @ 145738900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FComposeSeparateTranslucencyPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FComposeSeparateTranslucencyPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FComposeSeparateTranslucencyPS *pFVar5;
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
  FComposeSeparateTranslucencyPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FComposeSeparateTranslucencyPS *)0x0) {
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
  pFVar10 = FComposeSeparateTranslucencyPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FComposeSeparateTranslucencyPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FComposeSeparateTranslucencyPS__V<lambda_1>__1____AddFullscreenPass_VFComposeSeparateTranslucencyPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFComposeSeparateTranslucencyPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FComposeSeparateTranslucencyPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FCopyBackgroundVisibilityPS> @ 145738bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FCopyBackgroundVisibilityPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FCopyBackgroundVisibilityPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FCopyBackgroundVisibilityPS *pFVar5;
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
  FCopyBackgroundVisibilityPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FCopyBackgroundVisibilityPS *)0x0) {
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
  pFVar10 = FCopyBackgroundVisibilityPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FCopyBackgroundVisibilityPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FCopyBackgroundVisibilityPS__V<lambda_1>__1____AddFullscreenPass_VFCopyBackgroundVisibilityPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCopyBackgroundVisibilityPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FCopyBackgroundVisibilityPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FComposeSeparateTranslucencyPS> @ 14574a770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FComposeSeparateTranslucencyPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FComposeSeparateTranslucencyPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FComposeSeparateTranslucencyPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FComposeSeparateTranslucencyPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FComposeSeparateTranslucencyPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FComposeSeparateTranslucencyPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FCopyBackgroundVisibilityPS> @ 14574aa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FCopyBackgroundVisibilityPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCopyBackgroundVisibilityPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FCopyBackgroundVisibilityPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FCopyBackgroundVisibilityPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyBackgroundVisibilityPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCopyBackgroundVisibilityPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 1457508d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FComposeSeparateTranslucencyPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FComposeSeparateTranslucencyPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FComposeSeparateTranslucencyPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145750920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCopyBackgroundVisibilityPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCopyBackgroundVisibilityPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCopyBackgroundVisibilityPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FVirtualShadowMapProjectionCompositeFromMaskBitsPS> @ 1457a6a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FVirtualShadowMapProjectionCompositeFromMaskBitsPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FVirtualShadowMapProjectionCompositeFromMaskBitsPS,FShaderMapPointerTable>
          *param_4,FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FVirtualShadowMapProjectionCompositeFromMaskBitsPS *pFVar5;
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
  FVirtualShadowMapProjectionCompositeFromMaskBitsPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FVirtualShadowMapProjectionCompositeFromMaskBitsPS *)0x0) {
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
  pFVar10 = FVirtualShadowMapProjectionCompositeFromMaskBitsPS::FParameters::FTypeInfo::
            GetStructMetadata();
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
  pFVar10 = FVirtualShadowMapProjectionCompositeFromMaskBitsPS::FParameters::FTypeInfo::
            GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FVirtualShadowMapProjectionCompositeFromMaskBitsPS__V<lambda_1>__1____AddFullscreenPass_VFVirtualShadowMapProjectionCompositeFromMaskBitsPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFVirtualShadowMapProjectionCompositeFromMaskBitsPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FVirtualShadowMapProjectionCompositeFromMaskBitsPS **)&this[1].FullPathIfDebug.Data.ArrayNum =
       pFVar5;
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

// AddFullscreenPass<FVirtualShadowMapProjectionCompositePS> @ 1457a6d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
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
FPixelShaderUtils::AddFullscreenPass<FVirtualShadowMapProjectionCompositePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FVirtualShadowMapProjectionCompositePS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FVirtualShadowMapProjectionCompositePS *pFVar5;
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
  FVirtualShadowMapProjectionCompositePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FVirtualShadowMapProjectionCompositePS *)0x0) {
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
  pFVar10 = FVirtualShadowMapProjectionCompositePS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FVirtualShadowMapProjectionCompositePS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FVirtualShadowMapProjectionCompositePS__V<lambda_1>__1____AddFullscreenPass_VFVirtualShadowMapProjectionCompositePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFVirtualShadowMapProjectionCompositePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FVirtualShadowMapProjectionCompositePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FVirtualShadowMapProjectionCompositeFromMaskBitsPS> @ 1457bdb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FVirtualShadowMapProjectionCompositeFromMaskBitsPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FVirtualShadowMapProjectionCompositeFromMaskBitsPS,FShaderMapPointerTable>
          *param_3,FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FVirtualShadowMapProjectionCompositeFromMaskBitsPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FVirtualShadowMapProjectionCompositeFromMaskBitsPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FVirtualShadowMapProjectionCompositeFromMaskBitsPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FVirtualShadowMapProjectionCompositeFromMaskBitsPS::FParameters::FTypeInfo::
           GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FVirtualShadowMapProjectionCompositePS> @ 1457bde80

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
FPixelShaderUtils::DrawFullscreenPixelShader<FVirtualShadowMapProjectionCompositePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FVirtualShadowMapProjectionCompositePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  code *pcVar1;
  bool bVar2;
  FRHIPixelShader *pFVar3;
  undefined1 auStackY_198 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_150;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_3->ShaderContent == (FVirtualShadowMapProjectionCompositePS *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
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
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.StatePrecachePSOHash = 0;
  local_150.ShaderContent = (FShader *)param_3->ShaderContent;
  local_150.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_138.RenderTargetFlags.Elements[0] = None;
  local_138.RenderTargetFlags.Elements[1] = None;
  local_138.RenderTargetFlags.Elements[2] = None;
  local_138.RenderTargetFlags.Elements[3] = None;
  local_138.RenderTargetFlags.Elements[4] = None;
  local_138.RenderTargetFlags.Elements[5] = None;
  local_138.RenderTargetFlags.Elements[6] = None;
  local_138.RenderTargetFlags.Elements[7] = None;
  InitFullscreenPipelineState(param_1,param_2,&local_150,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  pFVar3 = TShaderRefBase<FVirtualShadowMapProjectionCompositePS,FShaderMapPointerTable>::
           GetPixelShader(param_3,true);
  SetShaderParameters<FRHICommandList,FVirtualShadowMapProjectionCompositePS,FRHIPixelShader>
            (param_1,param_3,pFVar3,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 1457c47d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FVirtualShadowMapProjectionCompositeFromMaskBitsPS>'::__l2::
<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FVirtualShadowMapProjectionCompositeFromMaskBitsPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FVirtualShadowMapProjectionCompositeFromMaskBitsPS,FShaderMapPointerTable>
              *)((longlong)this + 0x10),*(FParameters **)this,
             (TIntRect<int> *)((longlong)this + 0x20),*(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 1457c4820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FVirtualShadowMapProjectionCompositePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FVirtualShadowMapProjectionCompositePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FVirtualShadowMapProjectionCompositePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// AddFullscreenPass<FComposeVolumetricRTOverScenePS> @ 145838b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddFullscreenPass<FComposeVolumetricRTOverScenePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FComposeVolumetricRTOverScenePS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FComposeVolumetricRTOverScenePS *pFVar5;
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
  FComposeVolumetricRTOverScenePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FComposeVolumetricRTOverScenePS *)0x0) {
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
  pFVar10 = FComposeVolumetricRTOverScenePS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FComposeVolumetricRTOverScenePS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FComposeVolumetricRTOverScenePS__V<lambda_1>__1____AddFullscreenPass_VFComposeVolumetricRTOverScenePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFComposeVolumetricRTOverScenePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FComposeVolumetricRTOverScenePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FReconstructVolumetricRenderTargetPS> @ 145838dd0

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
FPixelShaderUtils::AddFullscreenPass<FReconstructVolumetricRenderTargetPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FReconstructVolumetricRenderTargetPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FReconstructVolumetricRenderTargetPS *pFVar5;
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
  FReconstructVolumetricRenderTargetPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FReconstructVolumetricRenderTargetPS *)0x0) {
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
  pFVar10 = FReconstructVolumetricRenderTargetPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FReconstructVolumetricRenderTargetPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FReconstructVolumetricRenderTargetPS__V<lambda_1>__1____AddFullscreenPass_VFReconstructVolumetricRenderTargetPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFReconstructVolumetricRenderTargetPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FReconstructVolumetricRenderTargetPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FComposeVolumetricRTOverScenePS> @ 145853250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::DrawFullscreenPixelShader<FComposeVolumetricRTOverScenePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FComposeVolumetricRTOverScenePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FComposeVolumetricRTOverScenePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FComposeVolumetricRTOverScenePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FComposeVolumetricRTOverScenePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FComposeVolumetricRTOverScenePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FReconstructVolumetricRenderTargetPS> @ 145853540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FReconstructVolumetricRenderTargetPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FReconstructVolumetricRenderTargetPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FReconstructVolumetricRenderTargetPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FReconstructVolumetricRenderTargetPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FReconstructVolumetricRenderTargetPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FReconstructVolumetricRenderTargetPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 14585a0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FComposeVolumetricRTOverScenePS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FComposeVolumetricRTOverScenePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FComposeVolumetricRTOverScenePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 14585a130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FReconstructVolumetricRenderTargetPS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FReconstructVolumetricRenderTargetPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FReconstructVolumetricRenderTargetPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// DrawFullscreenPixelShader<FWaterInfoTextureBlurPS> @ 14592f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FPixelShaderUtils::DrawFullscreenPixelShader<FWaterInfoTextureBlurPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FWaterInfoTextureBlurPS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FWaterInfoTextureBlurPS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FWaterInfoTextureBlurPS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FWaterInfoTextureBlurPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FWaterInfoTextureBlurPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FWaterInfoTextureMergePS> @ 14592f850

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
FPixelShaderUtils::DrawFullscreenPixelShader<FWaterInfoTextureMergePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FWaterInfoTextureMergePS,FShaderMapPointerTable> *param_3,
          FParameters *param_4,TIntRect<int> *param_5,FRHIBlendState *param_6,
          FRHIRasterizerState *param_7,FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FShader *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<FRHIShader_*> aVar5;
  FShaderParametersMetadata *pFVar6;
  atomic<FRHIShader_*> aVar7;
  undefined1 auStackY_1a8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_3->ShaderContent == (FWaterInfoTextureMergePS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&param_5->field0_0x0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&param_5->field0_0x0 + 8),
             (float)*(int *)((longlong)&param_5->field0_0x0 + 0xc),__real_3f800000);
  local_158.ShaderContent = (FShader *)param_3->ShaderContent;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_158.ShaderMap = param_3->ShaderMap;
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.BlendState = (FRHIBlendState *)0x0;
  local_138.RasterizerState = (FRHIRasterizerState *)0x0;
  local_138.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
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
  local_138.NumSamples = 0;
  local_138.SubpassHint = None;
  local_138.SubpassIndex = '\0';
  local_138.ConservativeRasterization = Disabled;
  local_138.bDepthBounds = false;
  local_138.MultiViewCount = '\0';
  local_138.bHasFragmentDensityAttachment = false;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  InitFullscreenPipelineState(param_1,param_2,&local_158,&local_138);
  if (param_6 != (FRHIBlendState *)0x0) {
    local_138.BlendState = param_6;
  }
  if (param_7 != (FRHIRasterizerState *)0x0) {
    local_138.RasterizerState = param_7;
  }
  if (param_8 != (FRHIDepthStencilState *)0x0) {
    local_138.DepthStencilState = param_8;
  }
  SetGraphicsPipelineState(param_1,&local_138,param_9,CheckApply,true);
  aVar5 = aVar7;
  if (param_3->ShaderContent != (FWaterInfoTextureMergePS *)0x0) {
    this = (param_3->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_3->ShaderContent->field_0xd4;
    aVar5 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar7, 4 < (byte)LogShaders._0_1_)) {
      pFVar2 = param_3->ShaderMap;
      this_00 = (FShader *)param_3->ShaderContent;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_00,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FWaterInfoTextureMergePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FWaterInfoTextureMergePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145934110

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FWaterInfoTextureBlurPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FWaterInfoTextureBlurPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FWaterInfoTextureBlurPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145934160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FWaterInfoTextureMergePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FWaterInfoTextureMergePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FWaterInfoTextureMergePS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

