// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 47

// ShaderTypeRegistration'' @ 141074c50

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FUpdateDescriptorHandleCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FUpdateDescriptorHandleCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FUpdateDescriptorHandleCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FUpdateDescriptorHandleCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141074ca0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FVisualizeTexturePS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FVisualizeTexturePS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FVisualizeTexturePS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FVisualizeTexturePS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 141074cf0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<0,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'CVarAllowBlinking'' @ 141074db0

void __cdecl _dynamic_initializer_for__CVarAllowBlinking__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowBlinking,L"r.VisualizeTexture.AllowBlinking",local_res8,
             L"Whether to allow blinking when visualizing NaN or inf that can become irritating over time.\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarAllowBlinking__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper111'' @ 141074e00

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper111__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_5>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper111,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'GPrimitiveIdDummy'' @ 141074e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GPrimitiveIdDummy__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GPrimitiveIdDummy);
  GPrimitiveIdDummy._0_8_ = &___7__TGlobalResource_VFPrimitiveIdDummyBuffer___00__6B_;
  GPrimitiveIdDummy._40_8_ = 0;
  if (GPrimitiveIdDummy._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GPrimitiveIdDummy._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GPrimitiveIdDummy._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GPrimitiveIdDummy,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GPrimitiveIdDummy__);
    return;
  }
  BeginInitResource((FRenderResource *)&GPrimitiveIdDummy,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GPrimitiveIdDummy__);
  return;
}

// `dynamic_initializer_for_'GVisualizeTexture'' @ 141074f30

void __cdecl _dynamic_initializer_for__GVisualizeTexture__(void)

{
  TGlobalResource<FVisualizeTexture,1>::TGlobalResource<FVisualizeTexture,1>(&GVisualizeTexture);
  atexit(_dynamic_atexit_destructor_for__GVisualizeTexture__);
  return;
}

// `dynamic_initializer_for_'LogVirtualTexturing'' @ 141074f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVirtualTexturing__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVirtualTexturing,L"LogVirtualTexturing",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVirtualTexturing__);
  return;
}

// `scalar_deleting_destructor' @ 145ec0df0

void * __thiscall
FPrimitiveIdDummyBuffer::_scalar_deleting_destructor_(FPrimitiveIdDummyBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ec0e40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FVisualizeTexture::_scalar_deleting_destructor_(FVisualizeTexture *this,uint param_1)

{
  ~FVisualizeTexture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ec0e80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TGlobalResource<FVisualizeTexture,1>::_scalar_deleting_destructor_
          (TGlobalResource<FVisualizeTexture,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVisualizeTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVisualizeTexture::~FVisualizeTexture((FVisualizeTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ec1060

void * __thiscall
TGlobalResource<FPrimitiveIdDummyBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FPrimitiveIdDummyBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFPrimitiveIdDummyBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 145ec10c0

void __cdecl <lambda_5>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FVertexFactoryShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// AddPass<FVisualizeTexturePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>'::__l2::<lambda_1>_> @ 145ec1390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FVisualizeTexturePS::FParameters,_FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  code *pcVar2;
  FShaderMapBase *pFVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  int iVar8;
  FShaderParametersMetadata *pFVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  pFVar9 = FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_2,pFVar9,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar7 = OverridePassFlags(this,pwVar10,param_3);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_2;
  if ((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (pFVar9->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar9;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar7,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FVisualizeTexturePS__V<lambda_1>__1____AddFullscreenPass_VFVisualizeTexturePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFVisualizeTexturePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar11[1]._padding_ = (longlong)param_4->Parameters;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_4->GlobalShaderMap;
  pFVar3 = (param_4->PixelShader).ShaderMap;
  *(FCopyTexturePS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_4->PixelShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->Viewport).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar11[1].Name.FormattedEventName.Data.ArrayNum =
       (param_4->Viewport).field0_0x0._s_0.Max.field0_0x0;
  pFVar11[1].ParameterStruct.Contents = (uchar *)param_4->BlendState;
  pFVar11[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_4->RasterizerState;
  pFVar11[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_4->DepthStencilState;
  uVar4 = *(undefined1 *)((longlong)&param_4->StencilRef + 2);
  uVar5 = *(undefined1 *)((longlong)&param_4->StencilRef + 3);
  pFVar11[1].Flags = *(undefined2 *)&param_4->StencilRef;
  pFVar11[1].TaskMode = uVar4;
  pFVar11[1].Pipeline = uVar5;
  *(FParameters **)&pFVar11[1].Workload = param_2;
  ClobberPassOutputs(this,pFVar11);
  iVar8 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar8 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar8] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<FReadbackTextureParameters,`FVisualizeTexture::CreateContentCapturePass'::__l20::<lambda_1>_> @ 145ec1560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FReadbackTextureParameters,_FVisualizeTexture::CreateContentCapturePass_::__l20::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FReadbackTextureParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  undefined8 uVar3;
  ERangeCompressionMode EVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  code *pcVar10;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar10 = FReadbackTextureParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar10 = (code *)(*pcVar10)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar10 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FReadbackTextureParameters",L"FReadbackTextureParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                 ,0x4de,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FReadbackTextureParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_3);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1c0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar10 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar10)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Inline);
  pFVar9->_padding_ =
       (longlong)
       &TRDGLambdaPass<FReadbackTextureParameters,`FVisualizeTexture::CreateContentCapturePass'::`20'::<lambda_1>_>
        ::_vftable_;
  TVar2 = (param_4->Extent).field0_0x0;
  pFVar9[1]._padding_ = (longlong)param_4->OutputTexture;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)TVar2;
  EVar4 = (param_4->ReadDataFlags).CompressionMode;
  pwVar8 = *(wchar_t **)&(param_4->ReadDataFlags).bLinearToGamma;
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (param_4->ReadDataFlags).CubeFace;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = EVar4;
  pFVar9[1].Name.EventFormat = pwVar8;
  uVar3 = *(undefined8 *)&(param_4->ReadDataFlags).GPUIndex;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)&(param_4->ReadDataFlags).bOutputStencil;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar9[1].ParameterStruct.Contents = (uchar *)param_4->DebugName;
  pFVar9[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_2;
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<FVisualizeTexturePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>'::__l2::<lambda_1>_> @ 145ec1830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FVisualizeTexturePS::FParameters,_FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FShaderMapBase *pFVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  int iVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar7 = OverridePassFlags(this,pwVar9,param_4);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar2)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar7,Async);
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FVisualizeTexturePS__V<lambda_1>__1____AddFullscreenPass_VFVisualizeTexturePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFVisualizeTexturePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar10[1]._padding_ = (longlong)param_5->Parameters;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_5->GlobalShaderMap;
  pFVar3 = (param_5->PixelShader).ShaderMap;
  *(FCopyTexturePS **)&pFVar10[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->PixelShader).ShaderContent;
  pFVar10[1].Name.EventFormat = (wchar_t *)pFVar3;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->Viewport).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar10[1].Name.FormattedEventName.Data.ArrayNum =
       (param_5->Viewport).field0_0x0._s_0.Max.field0_0x0;
  pFVar10[1].ParameterStruct.Contents = (uchar *)param_5->BlendState;
  pFVar10[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_5->RasterizerState;
  pFVar10[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_5->DepthStencilState;
  uVar4 = *(undefined1 *)((longlong)&param_5->StencilRef + 2);
  uVar5 = *(undefined1 *)((longlong)&param_5->StencilRef + 3);
  pFVar10[1].Flags = *(undefined2 *)&param_5->StencilRef;
  pFVar10[1].TaskMode = uVar4;
  pFVar10[1].Pipeline = uVar5;
  *(FParameters **)&pFVar10[1].Workload = param_3;
  ClobberPassOutputs(this,pFVar10);
  iVar8 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar8 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar8] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// BinarySearchBy<TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_>,FHashedName,`FVertexFactoryType::~FVertexFactoryType'::__l12::<lambda_1>,TLess<void>_> @ 145ec2030

int __cdecl
Algo::
BinarySearchBy<TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_>,FHashedName,_FVertexFactoryType::~FVertexFactoryType_::__l12::<lambda_1>,TLess<void>_>
          (TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> *param_1,FHashedName *param_2,
          <lambda_1> param_3,TLess<void> param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FHashedName local_res8;
  
  iVar4 = 0;
  uVar5 = param_1->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar5) {
    do {
      iVar3 = (uVar5 >> 1) + iVar4;
      FHashedName::FHashedName
                (&local_res8,(FHashedName *)(*(longlong *)(pFVar1 + (longlong)iVar3 * 8) + 0x30));
      if (local_res8.Hash < param_2->Hash) {
        iVar4 = iVar3 + (uVar5 & 1);
      }
      uVar2 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar2 != 0);
  }
  if (param_1->ArrayNum <= iVar4) {
    return -1;
  }
  FHashedName::FHashedName
            (&local_res8,
             (FHashedName *)
             (*(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) + 0x30));
  iVar3 = -1;
  if (local_res8.Hash <= param_2->Hash) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// BindForLegacyShaderParameters<FVisualizeTexturePS::FParameters> @ 145ec2100

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FVisualizeTexturePS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<FVisualizeTexturePS> @ 145ec2160

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

void __cdecl
ClearUnusedGraphResources<FVisualizeTexturePS>
          (TShaderRefBase<FVisualizeTexturePS,FShaderMapPointerTable> *param_1,FParameters *param_2,
          initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,pFVar1,param_2);
  local_18.ShaderContent = (FShader *)param_3->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_3->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,pFVar1,param_2,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FVisualizeTexturePS> @ 145ec21e0

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

void __cdecl
ClearUnusedGraphResources<FVisualizeTexturePS>
          (TShaderRefBase<FVisualizeTexturePS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// DestructItems<`FVisualizeTexture::DisplayPoolResourceListToLog'::__l2::FSortedLines,int> @ 145ec2260

void __cdecl
DestructItems<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int>
          (FSortedLines *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Line).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// HeapSortInternal<`FVisualizeTexture::DisplayPoolResourceListToLog'::__l2::FSortedLines,int,FIdentityFunctor,TDereferenceWrapper<`FVisualizeTexture::DisplayPoolResourceListToLog'::__l2::FSortedLines,TLess<void>_>_> @ 145ec2bf0

void __cdecl
AlgoImpl::
HeapSortInternal<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int,FIdentityFunctor,TDereferenceWrapper<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,TLess<void>_>_>
          (FSortedLines *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_void___cdecl_FVisualizeTexture::DisplayPoolResourceListToLog(FVisualizeTexture::ESortBy)_::_2_::FSortedLines,TLess<void>_>
          param_4)

{
  FSortedLines *pFVar1;
  FSortedLines *pFVar2;
  FSortedLines *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  FSortedLines *pFVar21;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<_private:_void___cdecl_FVisualizeTexture::DisplayPoolResourceListToLog(FVisualizeTexture::ESortBy)_::_2_::FSortedLines,TLess<void>_>
              *)&local_res20);
  iVar18 = param_2 + -1;
  lVar19 = (longlong)iVar18;
  if (0 < iVar18) {
    pFVar21 = param_1 + lVar19;
    do {
      iVar20 = (pFVar21->Line).Data.ArrayNum;
      iVar17 = (pFVar21->Line).Data.ArrayMax;
      iVar7 = param_1->SortIndex;
      uVar8 = param_1->PoolIndex;
      pFVar5 = (param_1->Line).Data.AllocatorInstance.Data;
      iVar13 = (param_1->Line).Data.ArrayNum;
      iVar6 = (param_1->Line).Data.ArrayMax;
      (param_1->Line).Data.AllocatorInstance.Data = (pFVar21->Line).Data.AllocatorInstance.Data;
      (param_1->Line).Data.ArrayNum = iVar20;
      (param_1->Line).Data.ArrayMax = iVar17;
      uVar12 = pFVar21->PoolIndex;
      param_1->SortIndex = pFVar21->SortIndex;
      param_1->PoolIndex = uVar12;
      (pFVar21->Line).Data.AllocatorInstance.Data = pFVar5;
      (pFVar21->Line).Data.ArrayNum = iVar13;
      (pFVar21->Line).Data.ArrayMax = iVar6;
      pFVar21->SortIndex = iVar7;
      pFVar21->PoolIndex = uVar8;
      iVar20 = 0;
      if (1 < iVar18) {
        do {
          iVar13 = iVar20 * 2;
          iVar17 = iVar13 + 1;
          if (iVar13 + 2 < iVar18) {
            lVar14 = (longlong)iVar13 + 1;
            pFVar1 = param_1 + (longlong)iVar13 + 2;
            if (pFVar1->SortIndex < param_1[lVar14].SortIndex) {
              uVar12 = 1;
            }
            else if (param_1[lVar14].SortIndex < pFVar1->SortIndex) {
              uVar12 = 0;
            }
            else {
              if (param_1[lVar14].Line.Data.ArrayNum == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = (wchar_t *)param_1[lVar14].Line.Data.AllocatorInstance.Data;
              }
              if ((pFVar1->Line).Data.ArrayNum == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = (wchar_t *)(pFVar1->Line).Data.AllocatorInstance.Data;
              }
              uVar12 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar16);
              uVar12 = uVar12 >> 0x1f;
            }
            if (uVar12 != 0) {
              iVar17 = iVar13;
            }
            iVar17 = iVar17 + 1;
          }
          pFVar1 = param_1 + iVar20;
          if (param_1[iVar17].SortIndex <= pFVar1->SortIndex) {
            if (param_1[iVar17].SortIndex < pFVar1->SortIndex) break;
            if (param_1[iVar17].Line.Data.ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)param_1[iVar17].Line.Data.AllocatorInstance.Data;
            }
            if ((pFVar1->Line).Data.ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(pFVar1->Line).Data.AllocatorInstance.Data;
            }
            iVar13 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar16);
            if (-1 < iVar13) break;
          }
          pFVar1 = param_1 + iVar17;
          iVar13 = (pFVar1->Line).Data.ArrayNum;
          iVar6 = (pFVar1->Line).Data.ArrayMax;
          pFVar2 = param_1 + iVar17;
          pFVar3 = param_1 + iVar20;
          pFVar5 = (pFVar3->Line).Data.AllocatorInstance.Data;
          iVar7 = (pFVar3->Line).Data.ArrayNum;
          iVar9 = (pFVar3->Line).Data.ArrayMax;
          iVar10 = param_1[iVar20].SortIndex;
          uVar8 = param_1[iVar20].PoolIndex;
          pFVar3 = param_1 + iVar20;
          (pFVar3->Line).Data.AllocatorInstance.Data = (pFVar1->Line).Data.AllocatorInstance.Data;
          (pFVar3->Line).Data.ArrayNum = iVar13;
          (pFVar3->Line).Data.ArrayMax = iVar6;
          uVar12 = pFVar2->PoolIndex;
          param_1[iVar20].SortIndex = pFVar2->SortIndex;
          param_1[iVar20].PoolIndex = uVar12;
          (pFVar2->Line).Data.AllocatorInstance.Data = pFVar5;
          (pFVar2->Line).Data.ArrayNum = iVar7;
          (pFVar2->Line).Data.ArrayMax = iVar9;
          pFVar2->SortIndex = iVar10;
          pFVar2->PoolIndex = uVar8;
          iVar20 = iVar17;
        } while (iVar17 * 2 + 1 < iVar18);
      }
      iVar18 = iVar18 + -1;
      lVar19 = lVar19 + -1;
      pFVar21 = pFVar21 + -1;
    } while (0 < lVar19);
  }
  return;
}

// HeapSortInternal<FSetElementId,int,FIdentityFunctor,TDereferenceWrapper<FSetElementId,`FVisualizeTexture::DisplayViewListToLog'::__l2::<lambda_1>_>_> @ 145ec2df0

void __cdecl
AlgoImpl::
HeapSortInternal<FSetElementId,int,FIdentityFunctor,TDereferenceWrapper<FSetElementId,_FVisualizeTexture::DisplayViewListToLog_::__l2::<lambda_1>_>_>
          (FSetElementId *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSetElementId,_private:_void___cdecl_FVisualizeTexture::DisplayViewListToLog(void)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar3 = (param_2 + -2) / 2;
  iVar8 = iVar3 * 2;
  iVar6 = iVar8;
  iVar4 = iVar3;
  do {
    while (param_2 <= iVar8 + 1) {
LAB_145ec2f0e:
      if (iVar4 == 0) {
        iVar8 = param_2 + -1;
        lVar7 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar6 = param_1->Index;
            iVar3 = 0;
            param_1->Index = param_1[lVar7].Index;
            param_1[lVar7].Index = iVar6;
            if (1 < iVar8) {
              iVar6 = 0;
              do {
                iVar4 = iVar6;
                if ((iVar6 + 2 < iVar8) &&
                   (iVar4 = iVar6 + 1,
                   *(int *)((longlong)param_1[(longlong)iVar6 + 2].Index * 0x20 +
                           *(longlong *)&(param_4.Predicate)->ViewDescriptionMap) <
                   *(int *)((longlong)param_1[iVar6 + 1].Index * 0x20 +
                           *(longlong *)&(param_4.Predicate)->ViewDescriptionMap))) {
                  iVar4 = iVar6;
                }
                iVar6 = param_1[iVar3].Index;
                if (*(int *)((longlong)param_1[(longlong)iVar4 + 1].Index * 0x20 +
                            *(longlong *)&(param_4.Predicate)->ViewDescriptionMap) <=
                    *(int *)((longlong)iVar6 * 0x20 +
                            *(longlong *)&(param_4.Predicate)->ViewDescriptionMap)) break;
                param_1[iVar3].Index = param_1[(longlong)iVar4 + 1].Index;
                iVar3 = iVar4 + 1;
                param_1[(longlong)iVar4 + 1].Index = iVar6;
                iVar6 = iVar3 * 2;
              } while (iVar6 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar3 = iVar4 + -1;
      iVar8 = iVar6 + -2;
      iVar6 = iVar8;
      iVar4 = iVar3;
    }
    iVar5 = iVar8;
    if ((iVar8 + 2 < param_2) &&
       (iVar5 = iVar8 + 1,
       *(int *)((longlong)param_1[(longlong)iVar8 + 2].Index * 0x20 +
               *(longlong *)&(param_4.Predicate)->ViewDescriptionMap) <
       *(int *)((longlong)param_1[iVar8 + 1].Index * 0x20 +
               *(longlong *)&(param_4.Predicate)->ViewDescriptionMap))) {
      iVar5 = iVar8;
    }
    iVar8 = param_1[iVar3].Index;
    if (*(int *)((longlong)param_1[(longlong)iVar5 + 1].Index * 0x20 +
                *(longlong *)&(param_4.Predicate)->ViewDescriptionMap) <=
        *(int *)((longlong)iVar8 * 0x20 + *(longlong *)&(param_4.Predicate)->ViewDescriptionMap))
    goto LAB_145ec2f0e;
    param_1[iVar3].Index = param_1[(longlong)iVar5 + 1].Index;
    iVar3 = iVar5 + 1;
    param_1[(longlong)iVar5 + 1].Index = iVar8;
    iVar8 = iVar3 * 2;
  } while( true );
}

// HeapifyInternal<`FVisualizeTexture::DisplayPoolResourceListToLog'::__l2::FSortedLines,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`FVisualizeTexture::DisplayPoolResourceListToLog'::__l2::FSortedLines,TLess<void>_>_>_> @ 145ec3010

void __cdecl
AlgoImpl::
HeapifyInternal<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,TLess<void>_>_>_>
          (FSortedLines *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_private:_void___cdecl_FVisualizeTexture::DisplayPoolResourceListToLog(FVisualizeTexture::ESortBy)_::_2_::FSortedLines,TLess<void>_>_>
          param_4)

{
  FSortedLines *pFVar1;
  FSortedLines *pFVar2;
  FSortedLines *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  int iVar20;
  int iVar21;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar16 = iVar14 * 2 + 1;
  iVar5 = iVar16;
  iVar21 = iVar14;
  do {
    while (param_2 <= iVar16) {
LAB_145ec319c:
      if (iVar21 == 0) {
        return;
      }
      iVar14 = iVar21 + -1;
      iVar16 = iVar5 + -2;
      iVar5 = iVar16;
      iVar21 = iVar14;
    }
    iVar16 = iVar14 * 2;
    iVar20 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      lVar17 = (longlong)iVar16 + 1;
      pFVar1 = param_1 + (longlong)iVar16 + 2;
      if (pFVar1->SortIndex < param_1[lVar17].SortIndex) {
        uVar15 = 1;
      }
      else if (param_1[lVar17].SortIndex < pFVar1->SortIndex) {
        uVar15 = 0;
      }
      else {
        if (param_1[lVar17].Line.Data.ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)param_1[lVar17].Line.Data.AllocatorInstance.Data;
        }
        if ((pFVar1->Line).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar1->Line).Data.AllocatorInstance.Data;
        }
        uVar15 = FGenericPlatformStricmp::Stricmp(pwVar18,pwVar19);
        uVar15 = uVar15 >> 0x1f;
      }
      if (uVar15 != 0) {
        iVar20 = iVar16;
      }
      iVar20 = iVar20 + 1;
    }
    pFVar1 = param_1 + iVar14;
    if (param_1[iVar20].SortIndex <= pFVar1->SortIndex) {
      if (pFVar1->SortIndex <= param_1[iVar20].SortIndex) {
        if (param_1[iVar20].Line.Data.ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)param_1[iVar20].Line.Data.AllocatorInstance.Data;
        }
        if ((pFVar1->Line).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar1->Line).Data.AllocatorInstance.Data;
        }
        iVar16 = FGenericPlatformStricmp::Stricmp(pwVar18,pwVar19);
        if (iVar16 < 0) goto LAB_145ec3155;
      }
      goto LAB_145ec319c;
    }
LAB_145ec3155:
    pFVar1 = param_1 + iVar20;
    iVar7 = (pFVar1->Line).Data.ArrayNum;
    iVar8 = (pFVar1->Line).Data.ArrayMax;
    pFVar2 = param_1 + iVar20;
    pFVar3 = param_1 + iVar14;
    pFVar6 = (pFVar3->Line).Data.AllocatorInstance.Data;
    iVar9 = (pFVar3->Line).Data.ArrayNum;
    iVar10 = (pFVar3->Line).Data.ArrayMax;
    iVar16 = iVar20 * 2 + 1;
    iVar11 = param_1[iVar14].SortIndex;
    uVar12 = param_1[iVar14].PoolIndex;
    pFVar3 = param_1 + iVar14;
    (pFVar3->Line).Data.AllocatorInstance.Data = (pFVar1->Line).Data.AllocatorInstance.Data;
    (pFVar3->Line).Data.ArrayNum = iVar7;
    (pFVar3->Line).Data.ArrayMax = iVar8;
    uVar15 = pFVar2->PoolIndex;
    param_1[iVar14].SortIndex = pFVar2->SortIndex;
    param_1[iVar14].PoolIndex = uVar15;
    (pFVar2->Line).Data.AllocatorInstance.Data = pFVar6;
    (pFVar2->Line).Data.ArrayNum = iVar9;
    (pFVar2->Line).Data.ArrayMax = iVar10;
    pFVar2->SortIndex = iVar11;
    pFVar2->PoolIndex = uVar12;
    iVar14 = iVar20;
  } while( true );
}

// IntroSortInternal<`FVisualizeTexture::DisplayPoolResourceListToLog'::__l2::FSortedLines,int,FIdentityFunctor,TDereferenceWrapper<`FVisualizeTexture::DisplayPoolResourceListToLog'::__l2::FSortedLines,TLess<void>_>_> @ 145ec31e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int,FIdentityFunctor,TDereferenceWrapper<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,TLess<void>_>_>
          (FSortedLines *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_void___cdecl_FVisualizeTexture::DisplayPoolResourceListToLog(FVisualizeTexture::ESortBy)_::_2_::FSortedLines,TLess<void>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  FSortedLines *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  FSortedLines *pFVar18;
  FSortedLines *pFVar19;
  int iVar20;
  FSortedLines **ppFVar21;
  FSortedLines *pFVar22;
  FSortedLines *pFVar23;
  FSortedLines *pFVar24;
  float fVar25;
  undefined1 auStack_388 [48];
  FSortedLines *local_358;
  FSortedLines *local_348;
  FSortedLines *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (param_2 < 2) {
    return;
  }
  local_340 = param_1 + (longlong)param_2 + -1;
  local_348 = param_1;
  fVar25 = logf((float)param_2 * (float)param_2);
  local_338 = (undefined4)(longlong)fVar25;
  memset(local_330,0,0x2e8);
  ppFVar21 = &local_348;
LAB_145ec3280:
  pFVar18 = ppFVar21[1];
  local_358 = ppFVar21[2];
  iVar14 = (int)(((longlong)pFVar18 - (longlong)*ppFVar21) / 0x18);
  pFVar5 = *ppFVar21;
  iVar20 = (int)local_358;
  while (iVar14 = iVar14 + 1, iVar20 != 0) {
    if (iVar14 < 9) goto joined_r0x000145ec3511;
    iVar6 = (pFVar5->Line).Data.ArrayNum;
    iVar7 = (pFVar5->Line).Data.ArrayMax;
    pFVar23 = pFVar18 + 1;
    iVar14 = iVar14 / 2;
    pFVar19 = pFVar5 + iVar14;
    pFVar1 = (pFVar19->Line).Data.AllocatorInstance.Data;
    iVar9 = (pFVar19->Line).Data.ArrayNum;
    iVar10 = (pFVar19->Line).Data.ArrayMax;
    iVar11 = pFVar5[iVar14].SortIndex;
    uVar12 = pFVar5[iVar14].PoolIndex;
    pFVar19 = pFVar5 + iVar14;
    (pFVar19->Line).Data.AllocatorInstance.Data = (pFVar5->Line).Data.AllocatorInstance.Data;
    (pFVar19->Line).Data.ArrayNum = iVar6;
    (pFVar19->Line).Data.ArrayMax = iVar7;
    uVar8 = pFVar5->PoolIndex;
    pFVar5[iVar14].SortIndex = pFVar5->SortIndex;
    pFVar5[iVar14].PoolIndex = uVar8;
    (pFVar5->Line).Data.AllocatorInstance.Data = pFVar1;
    (pFVar5->Line).Data.ArrayNum = iVar9;
    (pFVar5->Line).Data.ArrayMax = iVar10;
    pFVar5->SortIndex = iVar11;
    pFVar5->PoolIndex = uVar12;
    pFVar19 = pFVar5;
LAB_145ec3302:
    do {
      do {
        pFVar22 = pFVar19;
        pFVar19 = pFVar22 + 1;
        if (pFVar18 < pFVar19) goto LAB_145ec3347;
        if (pFVar5->SortIndex < pFVar22[1].SortIndex) goto LAB_145ec3347;
      } while (pFVar22[1].SortIndex < pFVar5->SortIndex);
      if (pFVar22[1].Line.Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar19->Line).Data.AllocatorInstance.Data;
      }
      if ((pFVar5->Line).Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar5->Line).Data.AllocatorInstance.Data;
      }
      iVar14 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar17);
    } while (-1 < iVar14);
LAB_145ec3347:
    do {
      do {
        pFVar24 = pFVar23;
        pFVar23 = pFVar24 + -1;
        if (pFVar23 <= pFVar5) goto LAB_145ec338c;
        if (pFVar24[-1].SortIndex < pFVar5->SortIndex) goto LAB_145ec338c;
      } while (pFVar5->SortIndex < pFVar24[-1].SortIndex);
      if ((pFVar5->Line).Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar5->Line).Data.AllocatorInstance.Data;
      }
      if (pFVar24[-1].Line.Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar23->Line).Data.AllocatorInstance.Data;
      }
      iVar14 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar17);
    } while (-1 < iVar14);
LAB_145ec338c:
    pFVar1 = (pFVar23->Line).Data.AllocatorInstance.Data;
    uVar2 = pFVar24[-1].Line.Data.ArrayNum;
    uVar3 = pFVar24[-1].Line.Data.ArrayMax;
    if (pFVar19 <= pFVar23) {
      pFVar4 = (pFVar19->Line).Data.AllocatorInstance.Data;
      iVar14 = pFVar22[1].Line.Data.ArrayNum;
      iVar6 = pFVar22[1].Line.Data.ArrayMax;
      iVar7 = pFVar22[1].SortIndex;
      uVar12 = pFVar22[1].PoolIndex;
      (pFVar19->Line).Data.AllocatorInstance.Data = pFVar1;
      pFVar22[1].Line.Data.ArrayNum = uVar2;
      pFVar22[1].Line.Data.ArrayMax = uVar3;
      uVar8 = pFVar24[-1].PoolIndex;
      pFVar22[1].SortIndex = pFVar24[-1].SortIndex;
      pFVar22[1].PoolIndex = uVar8;
      (pFVar23->Line).Data.AllocatorInstance.Data = pFVar4;
      pFVar24[-1].Line.Data.ArrayNum = iVar14;
      pFVar24[-1].Line.Data.ArrayMax = iVar6;
      pFVar24[-1].SortIndex = iVar7;
      pFVar24[-1].PoolIndex = uVar12;
      goto LAB_145ec3302;
    }
    pFVar4 = (pFVar5->Line).Data.AllocatorInstance.Data;
    iVar14 = (pFVar5->Line).Data.ArrayNum;
    iVar6 = (pFVar5->Line).Data.ArrayMax;
    iVar7 = pFVar5->SortIndex;
    uVar12 = pFVar5->PoolIndex;
    lVar16 = (longlong)pFVar23 + (-0x18 - (longlong)pFVar5);
    lVar16 = lVar16 / 6 + (lVar16 >> 0x3f);
    (pFVar5->Line).Data.AllocatorInstance.Data = pFVar1;
    (pFVar5->Line).Data.ArrayNum = uVar2;
    (pFVar5->Line).Data.ArrayMax = uVar3;
    uVar8 = pFVar24[-1].PoolIndex;
    pFVar5->SortIndex = pFVar24[-1].SortIndex;
    pFVar5->PoolIndex = uVar8;
    iVar20 = iVar20 + -1;
    (pFVar23->Line).Data.AllocatorInstance.Data = pFVar4;
    pFVar24[-1].Line.Data.ArrayNum = iVar14;
    pFVar24[-1].Line.Data.ArrayMax = iVar6;
    pFVar24[-1].SortIndex = iVar7;
    pFVar24[-1].PoolIndex = uVar12;
    if ((lVar16 >> 2) - (lVar16 >> 0x3f) < ((longlong)pFVar18 - (longlong)pFVar19) / 0x18) {
      if (pFVar19 < pFVar18) {
        *ppFVar21 = pFVar19;
        ppFVar21[1] = pFVar18;
        *(int *)(ppFVar21 + 2) = iVar20;
        ppFVar21 = ppFVar21 + 3;
      }
      if (pFVar23 <= pFVar5 + 1) goto LAB_145ec34b2;
      pFVar18 = pFVar24 + -2;
      pFVar19 = pFVar5;
    }
    else {
      if (pFVar5 + 1 < pFVar23) {
        *ppFVar21 = pFVar5;
        ppFVar21[1] = pFVar24 + -2;
        *(int *)(ppFVar21 + 2) = iVar20;
        ppFVar21 = ppFVar21 + 3;
      }
      if (pFVar18 <= pFVar19) goto LAB_145ec34b2;
    }
    iVar14 = (int)(((longlong)pFVar18 - (longlong)pFVar19) / 0x18);
    pFVar5 = pFVar19;
  }
  HeapSortInternal<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int,FIdentityFunctor,TDereferenceWrapper<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,TLess<void>_>_>
            (pFVar5,iVar14,param_3,param_4);
  goto LAB_145ec34b2;
joined_r0x000145ec3511:
  for (; pFVar19 = pFVar5, pFVar23 = pFVar5, pFVar5 < pFVar18; pFVar18 = pFVar18 + -1) {
    while (pFVar22 = pFVar19, pFVar23 = pFVar23 + 1, pFVar23 <= pFVar18) {
      if (pFVar22->SortIndex < pFVar23->SortIndex) {
        bVar13 = 1;
      }
      else if (pFVar23->SortIndex < pFVar22->SortIndex) {
        bVar13 = 0;
      }
      else {
        if ((pFVar23->Line).Data.ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar23->Line).Data.AllocatorInstance.Data;
        }
        if ((pFVar22->Line).Data.ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar22->Line).Data.AllocatorInstance.Data;
        }
        iVar14 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar17);
        bVar13 = (byte)((uint)iVar14 >> 0x1f);
      }
      pFVar19 = pFVar23;
      if (bVar13 == 0) {
        pFVar19 = pFVar22;
      }
    }
    pFVar1 = (pFVar22->Line).Data.AllocatorInstance.Data;
    iVar6 = (pFVar22->Line).Data.ArrayNum;
    iVar7 = (pFVar22->Line).Data.ArrayMax;
    iVar9 = pFVar22->SortIndex;
    uVar12 = pFVar22->PoolIndex;
    iVar14 = (pFVar18->Line).Data.ArrayNum;
    iVar20 = (pFVar18->Line).Data.ArrayMax;
    (pFVar22->Line).Data.AllocatorInstance.Data = (pFVar18->Line).Data.AllocatorInstance.Data;
    (pFVar22->Line).Data.ArrayNum = iVar14;
    (pFVar22->Line).Data.ArrayMax = iVar20;
    uVar8 = pFVar18->PoolIndex;
    pFVar22->SortIndex = pFVar18->SortIndex;
    pFVar22->PoolIndex = uVar8;
    (pFVar18->Line).Data.AllocatorInstance.Data = pFVar1;
    (pFVar18->Line).Data.ArrayNum = iVar6;
    (pFVar18->Line).Data.ArrayMax = iVar7;
    pFVar18->SortIndex = iVar9;
    pFVar18->PoolIndex = uVar12;
  }
LAB_145ec34b2:
  ppFVar21 = ppFVar21 + -3;
  if (ppFVar21 < &local_348) {
    return;
  }
  goto LAB_145ec3280;
}

// IntroSortInternal<FSetElementId,int,FIdentityFunctor,TDereferenceWrapper<FSetElementId,`FVisualizeTexture::DisplayViewListToLog'::__l2::<lambda_1>_>_> @ 145ec35d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSetElementId,int,FIdentityFunctor,TDereferenceWrapper<FSetElementId,_FVisualizeTexture::DisplayViewListToLog_::__l2::<lambda_1>_>_>
          (FSetElementId *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSetElementId,_private:_void___cdecl_FVisualizeTexture::DisplayViewListToLog(void)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  int iVar2;
  FSetElementId *pFVar3;
  FSetElementId *pFVar4;
  FSetElementId *pFVar5;
  FSetElementId *pFVar6;
  FSetElementId *pFVar7;
  FSetElementId *pFVar8;
  FSetElementId **ppFVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  FSetElementId *local_348;
  FSetElementId *local_338;
  FSetElementId *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    ppFVar9 = &local_338;
    do {
      pFVar8 = ppFVar9[1];
      pFVar4 = *ppFVar9;
      pFVar3 = ppFVar9[2];
      iVar2 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
      local_348._0_4_ = (int)pFVar3;
      pFVar7 = pFVar4;
      if ((int)local_348 != 0) {
LAB_145ec3680:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          pFVar6 = pFVar8 + 1;
          iVar1 = pFVar7[iVar2 >> 1].Index;
          pFVar7[iVar2 >> 1].Index = pFVar7->Index;
          pFVar7->Index = iVar1;
          pFVar4 = pFVar7;
LAB_145ec36b0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000145ec36b9;
          goto LAB_145ec36d2;
        }
        if (pFVar7 < pFVar8) {
          do {
            pFVar3 = pFVar7;
            if (pFVar7 + 1 <= pFVar8) {
              pFVar4 = pFVar7 + 1;
              pFVar6 = pFVar7;
              do {
                pFVar3 = pFVar4;
                if (*(int *)((longlong)pFVar4->Index * 0x20 +
                            *(longlong *)&(param_4.Predicate)->ViewDescriptionMap) <=
                    *(int *)((longlong)pFVar6->Index * 0x20 +
                            *(longlong *)&(param_4.Predicate)->ViewDescriptionMap)) {
                  pFVar3 = pFVar6;
                }
                pFVar4 = pFVar4 + 1;
                pFVar6 = pFVar3;
              } while (pFVar4 <= pFVar8);
            }
            iVar2 = pFVar3->Index;
            pFVar4 = pFVar8 + -1;
            pFVar3->Index = pFVar8->Index;
            pFVar8->Index = iVar2;
            pFVar8 = pFVar4;
          } while (pFVar7 < pFVar4);
        }
        goto LAB_145ec379b;
      }
LAB_145ec378a:
      local_348 = pFVar3;
      HeapSortInternal<FSetElementId,int,FIdentityFunctor,TDereferenceWrapper<FSetElementId,_FVisualizeTexture::DisplayViewListToLog_::__l2::<lambda_1>_>_>
                (pFVar4,iVar2,param_3,param_4);
LAB_145ec379b:
      ppFVar9 = ppFVar9 + -3;
    } while (&local_338 <= ppFVar9);
  }
  return;
code_r0x000145ec36b9:
  if (*(int *)((longlong)pFVar4->Index * 0x20 +
              *(longlong *)&(param_4.Predicate)->ViewDescriptionMap) <=
      *(int *)((longlong)pFVar7->Index * 0x20 +
              *(longlong *)&(param_4.Predicate)->ViewDescriptionMap)) goto LAB_145ec36b0;
LAB_145ec36d2:
  do {
    pFVar5 = pFVar6;
    pFVar6 = pFVar5 + -1;
    if (pFVar6 <= pFVar7) break;
  } while (*(int *)((longlong)pFVar7->Index * 0x20 +
                   *(longlong *)&(param_4.Predicate)->ViewDescriptionMap) <=
           *(int *)((longlong)pFVar6->Index * 0x20 +
                   *(longlong *)&(param_4.Predicate)->ViewDescriptionMap));
  if (pFVar4 <= pFVar6) {
    iVar2 = pFVar4->Index;
    pFVar4->Index = pFVar6->Index;
    pFVar6->Index = iVar2;
    goto LAB_145ec36b0;
  }
  iVar2 = pFVar7->Index;
  local_348._0_4_ = (int)local_348 + -1;
  pFVar7->Index = pFVar6->Index;
  pFVar6->Index = iVar2;
  if ((longlong)((longlong)pFVar6 + (-4 - (longlong)pFVar7) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffffcU)) {
    if (pFVar4 < pFVar8) {
      *ppFVar9 = pFVar4;
      ppFVar9[1] = pFVar8;
      *(int *)(ppFVar9 + 2) = (int)local_348;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar6 <= pFVar7 + 1) goto LAB_145ec379b;
    pFVar8 = pFVar5 + -2;
    pFVar4 = pFVar7;
  }
  else {
    if (pFVar7 + 1 < pFVar6) {
      *ppFVar9 = pFVar7;
      ppFVar9[1] = pFVar5 + -2;
      *(int *)(ppFVar9 + 2) = (int)local_348;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_145ec379b;
  }
  iVar2 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
  pFVar7 = pFVar4;
  if ((int)local_348 == 0) goto LAB_145ec378a;
  goto LAB_145ec3680;
}

// operator<< @ 145ec4cd0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FVertexFactoryType **param_2)

{
  FName *pFVar1;
  FVertexFactoryType *pFVar2;
  FName local_res8;
  FName local_res18 [2];
  
  if ((param_1->field_0x28 & 4) != 0) {
    if (*param_2 == (FVertexFactoryType *)0x0) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      pFVar1 = &local_res8;
    }
    else {
      pFVar1 = FName::FName(local_res18,(*param_2)->Name);
    }
    local_res8 = *pFVar1;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    return param_1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    FHashedName::FHashedName((FHashedName *)local_res18,&local_res8);
    pFVar2 = FindVertexFactoryType((FHashedName *)local_res18);
    *param_2 = pFVar2;
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 145ec5090

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FVisualizeTexturePS::FParameters>::_scalar_deleting_destructor_
          (TObject<FVisualizeTexturePS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ec50c0

void * __thiscall
TRDGLambdaPass<FVisualizeTexturePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ec5120

void * __thiscall
TRDGLambdaPass<FReadbackTextureParameters,`FVisualizeTexture::CreateContentCapturePass'::__l20::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ec5180

void * __thiscall FVertexFactory::_scalar_deleting_destructor_(FVertexFactory *this,uint param_1)

{
  FRHIResource *pFVar1;
  ForElementType<FVertexFactory::FVertexStream> FVar2;
  
  this->_padding_ = (longlong)&___7FVertexFactory__6B_;
  pFVar1 = (FRHIResource *)(this->PositionAndNormalDeclaration).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->PositionDeclaration).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->Declaration).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  FVar2 = (this->PositionAndNormalStream).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->PositionStream).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->Streams).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ec5230

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FVertexFactoryType::_scalar_deleting_destructor_(FVertexFactoryType *this,uint param_1)

{
  ~FVertexFactoryType(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// FindVertexFactoryType @ 145ec8c20

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __cdecl FindVertexFactoryType(FHashedName *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  TMap<FHashedName,FVertexFactoryType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>_>
  *pTVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  
  pTVar4 = GetVFTypeMap();
  uVar2 = param_1->Hash;
  if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
    puVar6 = *(undefined1 **)&pTVar4->field_0x40;
    if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &pTVar4->field_0x38;
    }
    iVar3 = *(int *)(puVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                              (ulonglong)(*(int *)&pTVar4->field_0x48 - 1)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)pTVar4 + (longlong)iVar3 * 0x18;
        if (*(ulonglong *)(*(longlong *)pTVar4 + (longlong)iVar3 * 0x18) == uVar2) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 == (undefined8 *)0x0) {
            return (FVertexFactoryType *)0x0;
          }
          return (FVertexFactoryType *)*puVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FVertexFactoryType *)0x0;
}

// GetSortedMaterialVertexFactoryTypes @ 145ec8e60

TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> * __cdecl
GetSortedMaterialVertexFactoryTypes(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetSortedMaterialVertexFactoryTypes'::__l2::_dynamic_atexit_destructor_for__Types__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &Types;
}

// GetVFTypeMap @ 145eca230

TMap<FHashedName,FVertexFactoryType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>_>
* __cdecl GetVFTypeMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetVFTypeMap'::__l2::_dynamic_atexit_destructor_for__VTTypeMap__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &VTTypeMap;
}

// ShaderTypeRegistration'' @ 1503d3c50

void __cdecl
`dynamic_atexit_destructor_for_'FUpdateDescriptorHandleCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503d3c60

void __cdecl `dynamic_atexit_destructor_for_'FVisualizeTexturePS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 1503d3c70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowBlinking'' @ 1503d3cf0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowBlinking__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowBlinking);
  return;
}

// `dynamic_atexit_destructor_for_'GPrimitiveIdDummy'' @ 1503d3d10

void __cdecl _dynamic_atexit_destructor_for__GPrimitiveIdDummy__(void)

{
  GPrimitiveIdDummy._0_8_ = &___7__TGlobalResource_VFPrimitiveIdDummyBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GPrimitiveIdDummy);
  if (GPrimitiveIdDummy._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GPrimitiveIdDummy._40_8_);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GPrimitiveIdDummy);
  return;
}

// `dynamic_atexit_destructor_for_'GVisualizeTexture'' @ 1503d3d60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GVisualizeTexture__(void)

{
  GVisualizeTexture._0_8_ = &___7__TGlobalResource_VFVisualizeTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GVisualizeTexture);
  FVisualizeTexture::~FVisualizeTexture((FVisualizeTexture *)&GVisualizeTexture);
  return;
}

// `dynamic_atexit_destructor_for_'LogVirtualTexturing'' @ 1503d3da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVirtualTexturing__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVirtualTexturing);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d3dc0

void __cdecl
`FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3de0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FUpdateDescriptorHandleCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3e00

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FVisualizeTexturePS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'Types'' @ 1503d3e20

void __cdecl
`GetSortedMaterialVertexFactoryTypes'::__l2::_dynamic_atexit_destructor_for__Types__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Types.AllocatorInstance.Data;
  if (Types.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'VTTypeMap'' @ 1503d3e40

void __cdecl `GetVFTypeMap'::__l2::_dynamic_atexit_destructor_for__VTTypeMap__(void)

{
  VTTypeMap._72_4_ = 0;
  if (VTTypeMap._64_8_ != 0) {
    FMemory::Free((void *)VTTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FHashedName,FVertexFactoryType_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FHashedName,FVertexFactoryType_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FHashedName,FVertexFactoryType_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&VTTypeMap);
  return;
}

