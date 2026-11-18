// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 6

// AddFullscreenPass<FCrosshairOverlayPS> @ 14d680a20

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
FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FCrosshairOverlayPS *pFVar5;
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
  FCrosshairOverlayPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FCrosshairOverlayPS *)0x0) {
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
  pFVar10 = FCrosshairOverlayPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FCrosshairOverlayPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FCrosshairOverlayPS__V<lambda_1>__1____AddFullscreenPass_VFCrosshairOverlayPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCrosshairOverlayPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FCrosshairOverlayPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// AddFullscreenPass<FDisplacementMapBlendPS> @ 14d680cd0

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
FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,TIntRect<int> *param_6,FRHIBlendState *param_7,
          FRHIRasterizerState *param_8,FRHIDepthStencilState *param_9,uint param_10,
          ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FDisplacementMapBlendPS *pFVar5;
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
  FDisplacementMapBlendPS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FDisplacementMapBlendPS *)0x0) {
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
  pFVar10 = FDisplacementMapBlendPS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FDisplacementMapBlendPS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FDisplacementMapBlendPS__V<lambda_1>__1____AddFullscreenPass_VFDisplacementMapBlendPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFDisplacementMapBlendPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FDisplacementMapBlendPS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FCrosshairOverlayPS> @ 14d695280

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
FPixelShaderUtils::DrawFullscreenPixelShader<FCrosshairOverlayPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable> *param_3,FParameters *param_4,
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
  if ((param_3->ShaderContent == (FCrosshairOverlayPS *)0x0) &&
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
  if (param_3->ShaderContent != (FCrosshairOverlayPS *)0x0) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FCrosshairOverlayPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// DrawFullscreenPixelShader<FDisplacementMapBlendPS> @ 14d695570

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
FPixelShaderUtils::DrawFullscreenPixelShader<FDisplacementMapBlendPS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable> *param_3,
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
  if ((param_3->ShaderContent == (FDisplacementMapBlendPS *)0x0) &&
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
  if (param_3->ShaderContent != (FDisplacementMapBlendPS *)0x0) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FDisplacementMapBlendPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 14d6ad8d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FCrosshairOverlayPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 14d6ad920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FDisplacementMapBlendPS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable> *)
             ((longlong)this + 0x10),*(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

