// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 11

// DrawFullscreenQuad @ 145d1d890

void __cdecl FPixelShaderUtils::DrawFullscreenQuad(FRHICommandList *param_1,uint param_2)

{
  FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)GScreenRectangleVertexBuffer._32_8_,0);
  FRHICommandList::DrawIndexedPrimitive
            (param_1,(FRHIBuffer *)GScreenRectangleIndexBuffer._32_8_,0,0,4,0,2,param_2);
  return;
}

// DrawFullscreenTriangle @ 145d1d900

void __cdecl FPixelShaderUtils::DrawFullscreenTriangle(FRHICommandList *param_1,uint param_2)

{
  FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)GScreenRectangleVertexBuffer._32_8_,0);
  FRHICommandList::DrawIndexedPrimitive
            (param_1,(FRHIBuffer *)GScreenRectangleIndexBuffer._32_8_,0,0,3,6,1,param_2);
  return;
}

// InitFullscreenMultiviewportPipelineState @ 145d41270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
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

void __cdecl
FPixelShaderUtils::InitFullscreenMultiviewportPipelineState
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FShader,FShaderMapPointerTable> *param_3,
          FGraphicsPipelineStateInitializer *param_4)

{
  FShaderMapResource *this;
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FGlobalShaderMapSection **ppFVar4;
  FShader *this_00;
  FName this_01;
  atomic<FRHIShader_*> aVar5;
  FRHIPixelShader *pFVar6;
  FGlobalShaderMapSection *pFVar7;
  undefined1 local_res10 [8];
  FString local_38;
  
  pFVar3 = FInstancedScreenVertexShaderVS::GetStaticType();
  ppFVar4 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)param_2,(FHashedName *)&pFVar3->field_0x30);
  if (ppFVar4 == (FGlobalShaderMapSection **)0x0) {
    this_00 = (FShader *)0x0;
  }
  else {
    pFVar7 = *ppFVar4;
    this_00 = FShaderMapContent::GetShader
                        (*(FShaderMapContent **)&pFVar7->field_0x28,
                         (FHashedName *)&pFVar3->field_0x28,0);
    if (this_00 != (FShader *)0x0) goto LAB_145d41352;
  }
  pFVar7 = (FGlobalShaderMapSection *)0x0;
  this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
  ::FName::ToString((FName *)this_01,&local_38);
  FInstancedScreenVertexShaderVS::GetStaticType();
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Shader.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                     ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145d41352:
  aVar5 = (atomic<FRHIShader_*>)0x0;
  FInstancedScreenVertexShaderVS::GetStaticType();
  FRHICommandList::ApplyCachedRenderTargets(param_1,param_4);
  param_4->BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  param_4->RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  param_4->DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  (param_4->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  if (this_00 != (FShader *)0x0) {
    this = *(FShaderMapResource **)&pFVar7->field_0x8;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    aVar5 = (this->RHIShaders).Ptr[this_00->ResourceIndex];
    if ((aVar5 == (atomic<FRHIShader_*>)0x0) &&
       (aVar5 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash(this,this_00->ResourceIndex,true),
       aVar5 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((*(longlong *)&pFVar7->field_0x18 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FShader::GetType(this_00,*(FShaderMapPointerTable **)&pFVar7->field_0x18);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FInstancedScreenVertexShaderVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar5 = (atomic<FRHIShader_*>)0x0;
    }
  }
  (param_4->BoundShaderState).VertexShaderRHI = (FRHIVertexShader *)aVar5;
  pFVar6 = TShaderRefBase<FShader,FShaderMapPointerTable>::GetPixelShader(param_3,true);
  (param_4->BoundShaderState).PixelShaderRHI = pFVar6;
  param_4->PrimitiveType = PT_TriangleList;
  return;
}

// InitFullscreenPipelineState @ 145d41490

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::InitFullscreenPipelineState
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FShader,FShaderMapPointerTable> *param_3,
          FGraphicsPipelineStateInitializer *param_4)

{
  FShaderMapResource *this;
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FGlobalShaderMapSection **ppFVar4;
  FShader *this_00;
  FName this_01;
  atomic<FRHIShader_*> aVar5;
  FRHIPixelShader *pFVar6;
  FGlobalShaderMapSection *pFVar7;
  undefined1 local_res10 [8];
  FString local_38;
  
  pFVar3 = FScreenVertexShaderVS::GetStaticType();
  ppFVar4 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)param_2,(FHashedName *)&pFVar3->field_0x30);
  if (ppFVar4 == (FGlobalShaderMapSection **)0x0) {
    this_00 = (FShader *)0x0;
  }
  else {
    pFVar7 = *ppFVar4;
    this_00 = FShaderMapContent::GetShader
                        (*(FShaderMapContent **)&pFVar7->field_0x28,
                         (FHashedName *)&pFVar3->field_0x28,0);
    if (this_00 != (FShader *)0x0) goto LAB_145d41572;
  }
  pFVar7 = (FGlobalShaderMapSection *)0x0;
  this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
  ::FName::ToString((FName *)this_01,&local_38);
  FScreenVertexShaderVS::GetStaticType();
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Shader.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                     ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145d41572:
  aVar5 = (atomic<FRHIShader_*>)0x0;
  FScreenVertexShaderVS::GetStaticType();
  FRHICommandList::ApplyCachedRenderTargets(param_1,param_4);
  param_4->BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  param_4->RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  param_4->DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  (param_4->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  if (this_00 != (FShader *)0x0) {
    this = *(FShaderMapResource **)&pFVar7->field_0x8;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    aVar5 = (this->RHIShaders).Ptr[this_00->ResourceIndex];
    if ((aVar5 == (atomic<FRHIShader_*>)0x0) &&
       (aVar5 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash(this,this_00->ResourceIndex,true),
       aVar5 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((*(longlong *)&pFVar7->field_0x18 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FShader::GetType(this_00,*(FShaderMapPointerTable **)&pFVar7->field_0x18);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVertexShaderVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar5 = (atomic<FRHIShader_*>)0x0;
    }
  }
  (param_4->BoundShaderState).VertexShaderRHI = (FRHIVertexShader *)aVar5;
  pFVar6 = TShaderRefBase<FShader,FShaderMapPointerTable>::GetPixelShader(param_3,true);
  (param_4->BoundShaderState).PixelShaderRHI = pFVar6;
  param_4->PrimitiveType = PT_TriangleList;
  return;
}

// AddRasterizeToRectsPass<FClearUAVRectsPS,FClearUAVRectsParameters> @ 145d77b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
FPixelShaderUtils::AddRasterizeToRectsPass<FClearUAVRectsPS,FClearUAVRectsParameters>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FClearUAVRectsPS,FShaderMapPointerTable> *param_4,
          FClearUAVRectsParameters *param_5,TIntPoint<int> param_6,FRDGBufferSRV *param_7,
          uint param_8,FRHIBlendState *param_9,FRHIRasterizerState *param_10,
          FRHIDepthStencilState *param_11,uint param_12,TIntPoint<int> param_13,
          FRDGBufferSRV *param_14,uint param_15,ERDGPassFlags param_16,float param_17)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  float fVar3;
  bool bVar4;
  FShaderType *pFVar5;
  FName this;
  FShaderParametersMetadata *pFVar6;
  code *pcVar7;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  <lambda_1> local_c8;
  undefined1 local_68 [8];
  FString local_60;
  initializer_list<FRDGResource_*> local_48;
  
  pFVar5 = (FShaderType *)FRasterizeToRectsVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_e8,pFVar5,(uint)(param_14 != (FRDGBufferSRV *)0x0));
  if (local_e8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_68);
    ::FName::ToString((FName *)this,&local_60);
    FRasterizeToRectsVS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FRasterizeToRectsVS::GetStaticType();
  fVar3 = __real_3f800000;
  (param_5->VS).RectUVBuffer = param_14;
  TVar2._s_0.Y = fVar3 / (float)param_6.field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar3 / (float)param_6.field0_0x0._0_4_;
  (param_5->VS).InvViewSize.field0_0x0 = TVar2;
  TVar1._s_0.Y = fVar3 / (float)param_13.field0_0x0._s_0.Y;
  TVar1._s_0.X = fVar3 / (float)param_13.field0_0x0._s_0.X;
  (param_5->VS).InvTextureSize.field0_0x0 = TVar1;
  (param_5->VS).RectCoordBuffer = param_7;
  (param_5->VS).DownsampleFactor = fVar3 / (float)param_15;
  (param_5->VS).DepthIncrement = param_17;
  pFVar6 = FClearUAVRectsPS::FParameters::FTypeInfo::GetStructMetadata();
  local_d8.ShaderContent = (FShader *)param_4->ShaderContent;
  local_d8.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_d8,pFVar6,&param_5->PS);
  local_48._First = (FRDGResource **)0x0;
  local_48._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,pFVar6,&param_5->PS,&local_48);
  local_c8.PixelShader.ShaderContent = param_4->ShaderContent;
  local_c8.PixelShader.ShaderMap = param_4->ShaderMap;
  local_c8.VertexShader.ShaderContent = (FRasterizeToRectsVS *)local_e8.ShaderContent;
  local_c8.VertexShader.ShaderMap = local_e8.ShaderMap;
  local_c8.BlendState = param_9;
  local_c8.RasterizerState = param_10;
  local_c8.DepthStencilState = param_11;
  local_c8.StencilRef = param_12;
  local_c8.bSkipRenderPass = (bool)((byte)param_16 >> 5 & 1);
  local_c8.Parameters = param_5;
  local_c8.NumRects = param_8;
  local_c8.GlobalShaderMap = param_2;
  local_c8.ViewportSize.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)param_6.field0_0x0._s_0
  ;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearUAVRectsParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearUAVRectsParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearUAVRectsParameters::FTypeInfo::GetStructMetadata(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pcVar7 = FClearUAVRectsParameters::zzAppendMemberGetPrev;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    do {
      pcVar7 = (code *)(*pcVar7)((byte)param_16,&local_f8);
    } while (pcVar7 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearUAVRectsParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
               L"FClearUAVRectsParameters",L"FClearUAVRectsParameters",(wchar_t *)0x0,(wchar_t *)0x0
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphUtils.cpp"
               ,0x237,0x150,&local_f8,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_f8.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    atexit(`FClearUAVRectsParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearUAVRectsParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FRDGBuilder::
  AddPassInternal<FClearUAVRectsParameters,_FPixelShaderUtils::AddRasterizeToRectsPass<FClearUAVRectsPS,FClearUAVRectsParameters>_::__l2::<lambda_1>_>
            (param_1,param_3,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearUAVRectsParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_5,param_16 | Raster,&local_c8);
  return;
}

// DrawFullscreenPixelShader<FDrawTexturePS> @ 145d7cb20

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
FPixelShaderUtils::DrawFullscreenPixelShader<FDrawTexturePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FDrawTexturePS,FShaderMapPointerTable> *param_3,FParameters *param_4,
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
  if ((param_3->ShaderContent == (FDrawTexturePS *)0x0) &&
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
  if (param_3->ShaderContent != (FDrawTexturePS *)0x0) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FDrawTexturePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar6 = FDrawTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)param_3->ShaderContent;
  local_148.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_148,pFVar6,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)aVar5,(FShaderParameterBindings *)param_3->ShaderContent,
             pFVar6,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145d92430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FDrawTexturePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FDrawTexturePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FDrawTexturePS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

// operator() @ 145d92550

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddRasterizeToRectsPass<FClearUAVRectsPS,FClearUAVRectsParameters>'::__l2::
<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  FRHIVertexShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIPixelShader *pFVar6;
  IRHICommandContext *pIVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStackY_278 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_238;
  FGraphicsPipelineStateInitializer local_228;
  FRHIRenderPassInfo local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (*(char *)((longlong)this + 0x54) != '\0') {
    TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>::
    TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>(&local_148.ColorRenderTargets);
    local_148.ResolveRect.X2 = *(int *)((longlong)this + 0x30);
    local_148.ResolveRect.Y2 = *(int *)((longlong)this + 0x34);
    local_148.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
    local_148.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
    local_148.DepthStencilRenderTarget.Action = DontLoad_DontStore;
    local_148.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
    local_148.ResolveRect.X1 = 0;
    local_148.ShadingRateTexture.Reference = (FRHITexture *)0x0;
    local_148.ShadingRateTextureCombiner = VRSRB_Passthrough;
    local_148.NopAccess = None;
    local_148.NumOcclusionQueries = 0;
    local_148.bOcclusionQueries = false;
    local_148.MultiViewCount = '\0';
    local_148.SubpassHint = None;
    local_148.ResolveRect.Y1 = 0;
    FRHICommandList::BeginRenderPass(param_2,&local_148,L"RasterizeToRects");
    if (local_148.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148.ShadingRateTexture.Reference);
    }
  }
  local_228.RenderTargetsEnabled = 0;
  local_228.RenderTargetFormats.Elements[0] = '\0';
  local_228.RenderTargetFormats.Elements[1] = '\0';
  local_228.RenderTargetFormats.Elements[2] = '\0';
  local_228.RenderTargetFormats.Elements[3] = '\0';
  local_228.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_228.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_228.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_228.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_228.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_228.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_228.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_228.BlendState = (FRHIBlendState *)0x0;
  local_228.RasterizerState = (FRHIRasterizerState *)0x0;
  local_228.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_228.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_228.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_228.RenderTargetFlags.Elements[0] = None;
  local_228.RenderTargetFlags.Elements[1] = None;
  local_228.RenderTargetFlags.Elements[2] = None;
  local_228.RenderTargetFlags.Elements[3] = None;
  local_228.RenderTargetFlags.Elements[4] = None;
  local_228.RenderTargetFlags.Elements[5] = None;
  local_228.RenderTargetFlags.Elements[6] = None;
  local_228.RenderTargetFlags.Elements[7] = None;
  local_228.RenderTargetFormats.Elements[4] = '\0';
  local_228.RenderTargetFormats.Elements[5] = '\0';
  local_228.RenderTargetFormats.Elements[6] = '\0';
  local_228.RenderTargetFormats.Elements[7] = '\0';
  local_228.DepthStencilTargetFormat = PF_Unknown;
  local_228.DepthStencilTargetFlag = None;
  local_228.DepthTargetLoadAction = ENoAction;
  local_228.DepthTargetStoreAction = ENoAction;
  local_228.StencilTargetLoadAction = ENoAction;
  local_228.StencilTargetStoreAction = ENoAction;
  local_228.DepthStencilAccess.Value = DepthNop;
  local_228.NumSamples = 0;
  local_228.SubpassHint = None;
  local_228.SubpassIndex = '\0';
  local_228.ConservativeRasterization = Disabled;
  local_228.bDepthBounds = false;
  local_228.MultiViewCount = '\0';
  local_228.bHasFragmentDensityAttachment = false;
  local_228.bAllowVariableRateShading = true;
  local_228.ShadingRate = VRSSR_1x1;
  local_228.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_228.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_228);
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(int *)((longlong)this + 0x30),
             (float)*(int *)((longlong)this + 0x34),__real_3f800000);
  local_228.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIBlendState **)((longlong)this + 0x38) != (FRHIBlendState *)0x0) {
    local_228.BlendState = *(FRHIBlendState **)((longlong)this + 0x38);
  }
  local_228.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIRasterizerState **)((longlong)this + 0x40) != (FRHIRasterizerState *)0x0) {
    local_228.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x40);
  }
  local_228.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(FRHIDepthStencilState **)((longlong)this + 0x48) != (FRHIDepthStencilState *)0x0) {
    local_228.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x48);
  }
  local_228.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_228.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_228.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
       GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                        *)((longlong)this + 0x10),true);
  local_228.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FClearUAVRectsPS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FClearUAVRectsPS,FShaderMapPointerTable> *)((longlong)this + 0x20)
                  ,true);
  SetGraphicsPipelineState(param_2,&local_228,*(uint *)((longlong)this + 0x50),CheckApply,true);
  pvVar2 = *(void **)this;
  pFVar4 = TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>::
           GetVertexShader((TShaderRefBase<FPixelShaderUtils::FRasterizeToRectsVS,FShaderMapPointerTable>
                            *)((longlong)this + 0x10),true);
  pFVar5 = FPixelShaderUtils::FRasterizeToRectsVS::FParameters::FTypeInfo::GetStructMetadata();
  local_238.ShaderContent = *(FShader **)((longlong)this + 0x10);
  local_238.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_238,pFVar5,pvVar2);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x10),pFVar5,pvVar2);
  lVar3 = *(longlong *)this;
  pFVar6 = TShaderRefBase<FClearUAVRectsPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FClearUAVRectsPS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  pFVar5 = FClearUAVRectsPS::FParameters::FTypeInfo::GetStructMetadata();
  local_238.ShaderContent = *(FShader **)((longlong)this + 0x20);
  local_238.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x28);
  ValidateShaderParameters(&local_238,pFVar5,(void *)(lVar3 + 0x30));
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar6,
             *(FShaderParameterBindings **)((longlong)this + 0x20),pFVar5,(void *)(lVar3 + 0x30));
  uVar1 = *(undefined4 *)((longlong)this + 0x58);
  iVar9 = 2 - (uint)(GRHIGlobals.SupportsRectTopology != false);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar8;
    *(undefined8 **)&param_2->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &___7FRHICommandDrawPrimitive__6B_;
    *(undefined4 *)(puVar8 + 2) = 0;
    *(int *)((longlong)puVar8 + 0x14) = iVar9;
    *(undefined4 *)(puVar8 + 3) = uVar1;
  }
  else {
    pIVar7 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar7->_padding_ + 0x1e0))(pIVar7,0,iVar9,uVar1);
  }
  if (*(char *)((longlong)this + 0x54) != '\0') {
    FRHICommandList::EndRenderPass(param_2);
  }
  return;
}

// AddFullscreenPass<FVisualizeTexturePS> @ 145ec10e0

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
FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGEventName *param_3,
          TShaderRefBase<FVisualizeTexturePS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          TIntRect<int> *param_6,FRHIBlendState *param_7,FRHIRasterizerState *param_8,
          FRHIDepthStencilState *param_9,uint param_10,ERDGPassFlags param_11)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  FVisualizeTexturePS *pFVar5;
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
  FVisualizeTexturePS *local_78;
  FShaderMapBase *pFStack_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  
  if (param_4->ShaderContent == (FVisualizeTexturePS *)0x0) {
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
  pFVar10 = FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar10 = FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FVisualizeTexturePS__V<lambda_1>__1____AddFullscreenPass_VFVisualizeTexturePS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFVisualizeTexturePS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  this[1]._padding_ = (longlong)param_5;
  this[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  *(FVisualizeTexturePS **)&this[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
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

// DrawFullscreenPixelShader<FVisualizeTexturePS> @ 145ec22a0

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
FPixelShaderUtils::DrawFullscreenPixelShader<FVisualizeTexturePS>
          (FRHICommandList *param_1,FGlobalShaderMap *param_2,
          TShaderRefBase<FVisualizeTexturePS,FShaderMapPointerTable> *param_3,FParameters *param_4,
          TIntRect<int> *param_5,FRHIBlendState *param_6,FRHIRasterizerState *param_7,
          FRHIDepthStencilState *param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  IRHICommandContext *pIVar6;
  undefined8 *puVar7;
  FRHIShader *pFVar8;
  FShaderParametersMetadata *pFVar9;
  float fVar10;
  undefined1 auStackY_1e8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_190;
  FGraphicsPipelineStateInitializer local_178;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (param_3->ShaderContent == (FVisualizeTexturePS *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                       ,0x60,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)&param_5->field0_0x0 + 0xc);
  iVar2 = *(int *)((longlong)&param_5->field0_0x0 + 8);
  iVar3 = *(int *)&param_5->field0_0x0;
  fVar10 = (float)*(int *)((longlong)&param_5->field0_0x0 + 4);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar7;
    *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar7 + 2) = (float)iVar3;
    *(float *)((longlong)puVar7 + 0x14) = fVar10;
    *(float *)((longlong)puVar7 + 0x1c) = (float)iVar2;
    *(float *)(puVar7 + 4) = (float)iVar1;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
  }
  else {
    pIVar6 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    pcVar4 = *(code **)(pIVar6->_padding_ + 0x1a0);
    (*pcVar4)(pIVar6,pcVar4,fVar10,0);
  }
  local_1a0.ShaderContent = (FShader *)param_3->ShaderContent;
  local_1a0.ShaderMap = param_3->ShaderMap;
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
  InitFullscreenPipelineState(param_1,param_2,&local_1a0,&local_178);
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
  pFVar8 = TShaderRefBase<FVisualizeTexturePS,FShaderMapPointerTable>::GetRHIShaderBase
                     (param_3,SF_Pixel,true);
  pFVar9 = FVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_190.ShaderContent = (FShader *)param_3->ShaderContent;
  local_190.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_190,pFVar9,param_4);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar8,(FShaderParameterBindings *)param_3->ShaderContent
             ,pFVar9,param_4);
  DrawFullscreenTriangle(param_1,1);
  return;
}

// operator() @ 145ec4d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FPixelShaderUtils::DrawFullscreenPixelShader<FVisualizeTexturePS>
            (param_2,*(FGlobalShaderMap **)((longlong)this + 8),
             (TShaderRefBase<FVisualizeTexturePS,FShaderMapPointerTable> *)((longlong)this + 0x10),
             *(FParameters **)this,(TIntRect<int> *)((longlong)this + 0x20),
             *(FRHIBlendState **)((longlong)this + 0x30),
             *(FRHIRasterizerState **)((longlong)this + 0x38),
             *(FRHIDepthStencilState **)((longlong)this + 0x40),*(uint *)((longlong)this + 0x48));
  return;
}

