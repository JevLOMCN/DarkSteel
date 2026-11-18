// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// operator() @ 145d0ced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FGenerateMips::Execute'::__l5::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIResource *pFVar1;
  undefined8 *puVar2;
  FRHIResource *local_res8;
  
  this_00 = *(FRDGResource **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar1 = this_00->ResourceRHI;
  local_res8 = pFVar1;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) &&
     (param_2->field_0x64 == '\0')) {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar2;
    *(undefined8 **)&param_2->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &TRHILambdaCommand<FRHICommandList,``FGenerateMips::Execute'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[2] = pFVar1;
    puVar2[3] = L"GenerateMips - OpenGL";
    return;
  }
  ``FGenerateMips::Execute'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            (&local_res8,param_2);
  return;
}

// operator() @ 145d0cf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
`FGenerateMips::ExecuteRaster'::__l23::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  TShaderRefBase<FGenerateMipsPS,FShaderMapPointerTable> *this_00;
  int iVar1;
  int iVar2;
  code *pcVar3;
  FShaderMapResource *this_01;
  longlong lVar4;
  FShader *this_02;
  void *pvVar5;
  bool bVar6;
  IRHICommandContext *pIVar7;
  undefined8 *puVar8;
  FRHIPixelShader *pFVar9;
  FShaderParametersMetadata *pFVar10;
  atomic<FRHIShader_*> aVar11;
  undefined1 auStackY_188 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  aVar11 = (atomic<FRHIShader_*>)0x0;
  iVar1 = *(int *)((longlong)this + 0x2c);
  iVar2 = *(int *)((longlong)this + 0x28);
  if ((GRHICommandList.bLatchedBypass) && ((param_2->field_0x29b & 0x20) != 0)) {
    pIVar7 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_2);
    pcVar3 = *(code **)(pIVar7->_padding_ + 0x1a0);
    (*pcVar3)(pIVar7,pcVar3,0,0);
  }
  else {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar8;
    *(undefined8 **)&param_2->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &___7FRHICommandSetViewport__6B_;
    *(float *)((longlong)puVar8 + 0x1c) = (float)iVar2;
    *(float *)(puVar8 + 4) = (float)iVar1;
    puVar8[2] = 0;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  }
  local_138.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_138.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_138.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_138.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_138.PrimitiveType = PT_TriangleStrip;
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
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar11;
  if (*(longlong *)this != 0) {
    this_01 = *(FShaderMapResource **)(*(longlong *)((longlong)this + 8) + 8);
    if ((this_01 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_138.BoundShaderState.VertexShaderRHI =
         *(FRHIVertexShader **)((this_01->RHIShaders).Ptr + *(int *)(*(longlong *)this + 0xd4));
    if ((((atomic<FRHIShader_*>)local_138.BoundShaderState.VertexShaderRHI ==
          (atomic<FRHIShader_*>)0x0) &&
        (local_138.BoundShaderState.VertexShaderRHI =
              (FRHIVertexShader *)
              FShaderMapResource::CreateShaderOrCrash
                        (this_01,*(int *)(*(longlong *)this + 0xd4),true),
        (atomic<FRHIShader_*>)local_138.BoundShaderState.VertexShaderRHI ==
        (atomic<FRHIShader_*>)0x0)) &&
       (local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar11,
       4 < (byte)LogShaders._0_1_)) {
      lVar4 = *(longlong *)((longlong)this + 8);
      this_02 = *(FShader **)this;
      if ((*(longlong *)(lVar4 + 0x18) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FShader::GetType(this_02,*(FShaderMapPointerTable **)(lVar4 + 0x18));
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGenerateMipsVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  this_00 = (TShaderRefBase<FGenerateMipsPS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  local_138.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FGenerateMipsPS,FShaderMapPointerTable>::GetPixelShader(this_00,true);
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_138);
  SetGraphicsPipelineState(param_2,&local_138,0,CheckApply,true);
  pvVar5 = *(void **)((longlong)this + 0x20);
  pFVar9 = TShaderRefBase<FGenerateMipsPS,FShaderMapPointerTable>::GetPixelShader(this_00,true);
  pFVar10 = FGenerateMipsPS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)this_00->ShaderContent;
  local_148.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_148,pFVar10,pvVar5);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar9,(FShaderParameterBindings *)this_00->ShaderContent
             ,pFVar10,pvVar5);
  FRHICommandList::SetStreamSource(param_2,0,(FRHIBuffer *)GScreenRectangleVertexBuffer._32_8_,0);
  FRHICommandList::DrawIndexedPrimitive
            (param_2,(FRHIBuffer *)GScreenRectangleIndexBuffer._32_8_,0,0,3,6,1,1);
  return;
}

// Execute @ 145d23a90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FGenerateMips::Execute
          (FRDGBuilder *param_1,Type param_2,FRDGTexture *param_3,FRHISamplerState *param_4,
          EGenerateMipsPass param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FRDGEventName *pFVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 local_68;
  undefined1 local_67 [7];
  undefined8 *local_60;
  <lambda_1> local_58;
  FRDGTextureAccess local_50;
  FRDGEventName local_38;
  
  puVar9 = (undefined8 *)0x0;
  iVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar4 == 7) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      puVar6[2] = 0;
      *puVar6 = &___7__TObject_VFGenerateMipsRHIImplParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
      puVar9 = puVar6;
    }
    local_60 = puVar9;
    if ((((undefined8 **)param_1->_padding_ <= &local_60) &&
        (&local_60 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_60;
    FRDGTextureAccess::FRDGTextureAccess(&local_50,param_3,CopyDest);
    puVar9[2] = local_50.Texture;
    *(FRDGTextureSubresourceRange *)(puVar9 + 3) = local_50.SubresourceRange;
    puVar9[4] = local_50._16_8_;
    local_58.Texture = param_3;
    pFVar7 = FRDGEventName::FRDGEventName(&local_38,1,L"GenerateMips - OpenGL");
    FRDGBuilder::AddPass<FGenerateMipsRHIImplParameters,_FGenerateMips::Execute_::__l5::<lambda_1>_>
              (param_1,pFVar7,(FGenerateMipsRHIImplParameters *)(puVar9 + 2),Copy,&local_58);
    if (local_38.FormattedEventName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
    return;
  }
  if (param_5 == AutoDetect) {
    if (((GPixelFormats[(byte)(param_3->Desc).field_0x33].Capabilities & TypedUAVStore) == None) ||
       ((*(uint *)&param_3->Desc >> 0x11 & 1) == 0)) {
      uVar8 = *(undefined8 *)&param_3->Desc;
LAB_145d23c8c:
      if (((byte)uVar8 & 9) != 9) {
        `FGenerateMips::Execute'::__l15::<lambda_3>::operator()(local_67);
      }
      ExecuteRaster(param_1,param_2,param_3,param_4);
      return;
    }
    uVar5 = (uint)*(undefined8 *)&param_3->Desc;
  }
  else {
    uVar8 = *(undefined8 *)&param_3->Desc;
    uVar5 = (uint)uVar8;
    if (param_5 != Compute) goto LAB_145d23c8c;
  }
  if ((uVar5 & 0x20008) != 0x20008) {
    `FGenerateMips::Execute'::__l13::<lambda_2>::operator()(&local_68);
  }
  ExecuteCompute(param_1,param_2,param_3,param_4);
  return;
}

// Execute @ 145d23d10

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FGenerateMips::Execute
          (FRDGBuilder *param_1,Type param_2,FRDGTexture *param_3,FGenerateMipsParams *param_4,
          EGenerateMipsPass param_5)

{
  int *piVar1;
  FRHIResource *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FLLMScope local_res18 [5];
  undefined8 *local_68;
  FRHIResource *local_60;
  FMemScope local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  
  if (1 < (byte)(param_3->Desc).field_0x30) {
    puVar6 = (undefined8 *)0x0;
    local_50 = (undefined1)param_4->Filter;
    local_4f = (undefined1)param_4->AddressU;
    local_4e = (undefined1)param_4->AddressV;
    local_4d = (undefined1)param_4->AddressW;
    local_4c = 0;
    local_44 = 0x7f7fffff;
    local_3c = 0;
    local_38 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res18,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (&local_58,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_60,&local_50);
    FMemScope::~FMemScope(&local_58);
    FLLMScope::~FLLMScope(local_res18);
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x10,0x10);
    if (puVar5 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      puVar5[1] = 0;
      *puVar5 = &___7__TObject_V__TRefCountPtr_VFRHISamplerState_____FRDGAllocator__6B_;
      puVar5[1] = local_60;
      local_60 = (FRHIResource *)0x0;
      puVar6 = puVar5;
    }
    local_68 = puVar6;
    if ((((undefined8 **)param_1->_padding_ <= &local_68) &&
        (&local_68 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_68;
    this = (FRHIResource *)puVar6[1];
    if (this != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this);
    }
    if (local_60 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_60);
    }
    Execute(param_1,param_2,param_3,(FRHISamplerState *)this,param_5);
    if (this != (FRHIResource *)0x0) {
      FRHIResource::Release(this);
    }
  }
  return;
}

// ExecuteCompute @ 145d241b0

/* WARNING: Removing unreachable block (ram,0x000145d24892) */
/* WARNING: Removing unreachable block (ram,0x000145d248a2) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FGenerateMips::ExecuteCompute
          (FRDGBuilder *param_1,Type param_2,FRDGTexture *param_3,FRHISamplerState *param_4)

{
  longlong *plVar1;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar2;
  char cVar3;
  byte bVar4;
  EShaderPlatform EVar5;
  FGlobalShaderMap *this;
  longlong lVar6;
  code *pcVar7;
  TVector2<float>_u_0 TVar8;
  float fVar9;
  FRDGTexture *pFVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FGlobalShaderType *pFVar14;
  FGlobalShaderMapSection **ppFVar15;
  FShader *pFVar16;
  FName this_00;
  undefined8 *puVar17;
  FRDGTextureSRV *pFVar18;
  FRDGTextureUAV *pFVar19;
  FRDGEventName *pFVar20;
  FShaderParametersMetadata *pFVar21;
  int iVar22;
  FShaderMapBase *pFVar23;
  undefined8 *puVar24;
  int *piVar25;
  float fVar26;
  float fVar27;
  byte local_res10;
  FRDGTextureSRVDesc local_130;
  FMemStackBase *local_118;
  FRDGTextureUAVDesc local_110;
  int local_f8;
  undefined8 *local_f0;
  uint local_e8;
  int local_e4;
  int local_e0;
  float local_dc;
  float fStack_d8;
  TIntVector3<int>_u_0 local_c8;
  TShaderRefBase<FGenerateMipsCS,FShaderMapPointerTable> local_b8;
  undefined1 local_a8 [8];
  FString local_a0;
  FRDGEventName local_90 [3];
  
  iVar13 = 0;
  if ((param_3 == (FRDGTexture *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Texture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GenerateMips.cpp"
                          ,0xcc,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4 == (FRHISamplerState *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sampler",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GenerateMips.cpp"
                          ,0xcd,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(byte *)&param_3->Desc & 0x10) == 0) {
switchD_145d24281_caseD_1:
  }
  else {
    switch((param_3->Desc).field_0x33) {
    case 1:
    case 9:
    case 10:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x15:
    case 0x16:
    case 0x1a:
      goto switchD_145d24281_caseD_1;
    default:
      iVar13 = 1;
    }
  }
  EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2];
  if ((GGlobalShaderMap[EVar5] == (FGlobalShaderMap *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GGlobalShaderMap[Platform]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                          ,0x21e,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this = GGlobalShaderMap[EVar5];
  pFVar14 = FGenerateMipsCS::GetStaticType();
  ppFVar15 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
             ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                     *)this,(FHashedName *)&pFVar14->field_0x30);
  if (ppFVar15 == (FGlobalShaderMapSection **)0x0) {
    pFVar16 = (FShader *)0x0;
  }
  else {
    pFVar23 = (FShaderMapBase *)*ppFVar15;
    pFVar16 = FShaderMapContent::GetShader
                        ((pFVar23->Content).Object,(FHashedName *)&pFVar14->field_0x28,iVar13);
    if (pFVar16 != (FShader *)0x0) goto LAB_145d2438a;
  }
  pFVar23 = (FShaderMapBase *)0x0;
  this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a8);
  ::FName::ToString((FName *)this_00,&local_a0);
  FGenerateMipsCS::GetStaticType();
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Shader.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                      ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_145d2438a:
  FGenerateMipsCS::GetStaticType();
  fVar9 = __real_3f800000;
  cVar3 = (param_3->Desc).field_0x32;
  local_f8 = 1;
  local_130._padding_._0_1_ = 0;
  local_130._padding_._3_1_ = 0;
  local_130._padding_._6_2_ = 0;
  local_130._padding_._0_1_ = 0;
  local_130._padding_._1_2_ = (ushort)local_130._padding_._1_1_;
  if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
    local_130._padding_._6_2_ = *(undefined2 *)&(param_3->Desc).field_0x2e;
  }
  local_110._padding_._0_1_ = (param_3->Desc).field_0x34;
  local_110._padding_._6_1_ = 0;
  local_110._padding_._0_1_ = 0;
  local_130._padding_._2_1_ = 1;
  if (cVar3 == '\x03') {
    local_f8 = 6;
    local_130._padding_._1_2_ = 0x101;
    local_130._padding_._6_2_ = 1;
    local_110._7_2_ = 0x101;
  }
  local_110._padding_._4_2_ = (ushort)(cVar3 == '\x03');
  bVar4 = (param_3->Desc).field_0x30;
  local_res10 = 1;
  if (1 < bVar4) {
    local_118 = (FMemStackBase *)&param_1->_padding_;
    pTVar2 = &param_1->Views;
    plVar1 = &param_1->_padding_;
    local_130.Texture = param_3;
    local_110.Texture = param_3;
    local_b8.ShaderContent = (FGenerateMipsCS *)pFVar16;
    local_b8.ShaderMap = pFVar23;
    do {
      local_e8 = (uint)local_res10;
      iVar12 = *(int *)&(param_3->Desc).field_0x24 >> (local_res10 & 0x1f);
      iVar22 = *(int *)&(param_3->Desc).field_0x28 >> (local_res10 & 0x1f);
      iVar13 = 1;
      if (1 < iVar12) {
        iVar13 = iVar12;
      }
      local_130._padding_._1_1_ = local_res10 - 1;
      iVar12 = 1;
      if (1 < iVar22) {
        iVar12 = iVar22;
      }
      iVar22 = 0;
      local_e4 = (int)(iVar13 + 7 + (iVar13 + 7 >> 0x1f & 7U)) >> 3;
      local_e0 = (int)(iVar12 + 7 + (iVar12 + 7 >> 0x1f & 7U)) >> 3;
      fVar26 = fVar9 / (float)iVar13;
      fVar27 = fVar9 / (float)iVar12;
      local_110._padding_._1_1_ = local_res10;
      do {
        puVar24 = (undefined8 *)0x0;
        piVar25 = (int *)((longlong)&param_1->_padding_ + 4);
        local_130._padding_._4_2_ = (undefined2)iVar22;
        local_110._padding_._2_2_ = local_130._padding_._4_2_;
        puVar17 = FMemStackBase::Alloc(local_118,0x30,0x10);
        if (puVar17 == (undefined8 *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          puVar17[3] = 0;
          *puVar17 = &___7__TObject_VFParameters_FGenerateMipsCS___FRDGAllocator__6B_;
          puVar17[4] = 0;
          puVar17[5] = 0;
          puVar24 = puVar17;
        }
        local_f0 = puVar24;
        if ((((undefined8 **)*plVar1 <= &local_f0) &&
            (&local_f0 < (undefined8 **)*plVar1 + *piVar25)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = (int)param_1->_padding_;
        if (iVar13 == *piVar25) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)plVar1,piVar25);
        }
        *(int *)&param_1->_padding_ = iVar13 + 1;
        *(undefined8 **)(*plVar1 + (longlong)iVar13 * 8) = local_f0;
        TVar8._s_0.Y = fVar27;
        TVar8._s_0.X = fVar26;
        (((FParameters *)(puVar24 + 2))->TexelSize).field0_0x0 = TVar8;
        local_dc = fVar26;
        fStack_d8 = fVar27;
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_130);
        pFVar10 = local_130.Texture;
        pFVar18 = FMemStackBase::Alloc(local_118,0x48,8);
        lVar6 = pFVar10->_padding_;
        *(byte *)&pFVar18->_padding_ = (byte)pFVar18->_padding_ & 0xfe;
        pFVar18->_padding_ = lVar6;
        pFVar18->_padding_ = 0;
        *(undefined1 *)&pFVar18->_padding_ = 1;
        *(undefined8 *)((longlong)&pFVar18->_padding_ + 4) = 0xffffffffffffffff;
        pFVar18->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
        *(undefined1 *)&(pFVar18->Desc)._padding_ = (undefined1)local_130._padding_;
        *(char *)((longlong)&(pFVar18->Desc)._padding_ + 1) = local_130._padding_._1_1_;
        *(undefined1 *)((longlong)&(pFVar18->Desc)._padding_ + 2) = local_130._padding_._2_1_;
        *(undefined1 *)((longlong)&(pFVar18->Desc)._padding_ + 3) = local_130._padding_._3_1_;
        *(undefined2 *)((longlong)&(pFVar18->Desc)._padding_ + 4) = local_130._padding_._4_2_;
        *(undefined2 *)((longlong)&(pFVar18->Desc)._padding_ + 6) = local_130._padding_._6_2_;
        *(undefined1 *)((longlong)&(pFVar18->Desc)._padding_ + 2) = 0;
        *(undefined1 *)&(pFVar18->Desc)._padding_ = (undefined1)local_130._padding_;
        *(char *)((longlong)&(pFVar18->Desc)._padding_ + 2) = local_130._padding_._2_1_;
        if (local_130._padding_._2_1_ != '\0') {
          *(byte *)((longlong)&(pFVar18->Desc)._padding_ + 1) = local_130._padding_._1_1_;
        }
        (pFVar18->Desc).Texture = local_130.Texture;
        iVar13 = (param_1->Views).Array.ArrayNum;
        if (iVar13 == (param_1->Views).Array.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)pTVar2,
                              &(param_1->Views).Array.ArrayMax);
        }
        (param_1->Views).Array.ArrayNum = iVar13 + 1;
        (pTVar2->Array).AllocatorInstance.Data[iVar13] = (FRDGView *)pFVar18;
        *(int *)((longlong)&pFVar18->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar18);
        puVar24[3] = pFVar18;
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_110);
        pFVar10 = local_110.Texture;
        pFVar19 = FMemStackBase::Alloc(local_118,0x50,8);
        lVar6 = pFVar10->_padding_;
        *(byte *)&pFVar19->_padding_ = (byte)pFVar19->_padding_ & 0xfe;
        pFVar19->_padding_ = lVar6;
        pFVar19->_padding_ = 0;
        *(undefined1 *)&pFVar19->_padding_ = 0;
        *(undefined8 *)((longlong)&pFVar19->_padding_ + 4) = 0xffffffffffffffff;
        *(undefined1 *)&pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
        *(undefined1 *)&(pFVar19->Desc)._padding_ = (undefined1)local_110._padding_;
        *(byte *)((longlong)&(pFVar19->Desc)._padding_ + 1) = local_110._padding_._1_1_;
        *(undefined2 *)((longlong)&(pFVar19->Desc)._padding_ + 2) = local_110._padding_._2_2_;
        *(ushort *)((longlong)&(pFVar19->Desc)._padding_ + 4) = local_110._padding_._4_2_;
        *(undefined1 *)&(pFVar19->Desc)._padding_ = 0;
        *(undefined1 *)((longlong)&(pFVar19->Desc)._padding_ + 6) = local_110._padding_._6_1_;
        *(char *)&(pFVar19->Desc)._padding_ = (char)local_110._padding_;
        if ((char)local_110._padding_ != '\0') {
          *(byte *)((longlong)&(pFVar19->Desc)._padding_ + 7) = local_110._padding_._7_1_;
        }
        (pFVar19->Desc).Texture = local_110.Texture;
        iVar13 = (param_1->Views).Array.ArrayNum;
        if (iVar13 == (param_1->Views).Array.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)pTVar2,
                              &(param_1->Views).Array.ArrayMax);
        }
        (param_1->Views).Array.ArrayNum = iVar13 + 1;
        (pTVar2->Array).AllocatorInstance.Data[iVar13] = (FRDGView *)pFVar19;
        *(int *)((longlong)&pFVar19->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar19);
        puVar24[5] = param_4;
        puVar24[4] = pFVar19;
        pFVar20 = FRDGEventName::FRDGEventName(local_90,L"GenerateMips DestMipLevel=%d Slice=%d");
        pFVar21 = FGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata();
        local_c8._s_0.X = local_e4;
        local_c8._s_0.Y = local_e0;
        local_c8._s_0.Z = 1;
        FComputeShaderUtils::AddPass<FGenerateMipsCS>
                  (param_1,pFVar20,Compute,&local_b8,pFVar21,(FParameters *)(puVar24 + 2),
                   (TIntVector3<int> *)&local_c8._s_0);
        if (local_90[0].FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90[0].FormattedEventName.Data.AllocatorInstance.Data);
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < local_f8);
      local_res10 = local_res10 + 1;
    } while (local_res10 < bVar4);
  }
  return;
}

// ExecuteCompute @ 145d24960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FGenerateMips::ExecuteCompute
          (FRDGBuilder *param_1,Type param_2,FRDGTexture *param_3,FRHISamplerState *param_4,
          FRDGBuffer *param_5,uint param_6)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  FGlobalShaderMap *this;
  longlong lVar7;
  code *pcVar8;
  TVector2<float>_u_0 TVar9;
  float fVar10;
  FRDGTexture *pFVar11;
  undefined4 uVar12;
  FRDGTexture *pFVar13;
  ulonglong uVar14;
  FRDGBuffer *pFVar15;
  bool bVar16;
  int iVar17;
  undefined8 *puVar18;
  FRDGBufferSRV *pFVar19;
  FRDGBufferUAV *pFVar20;
  FGlobalShaderType *pFVar21;
  FGlobalShaderMapSection **ppFVar22;
  FShader *pFVar23;
  FName FVar24;
  FRDGEventName *pFVar25;
  FShaderParametersMetadata *pFVar26;
  FRDGTextureSRV *pFVar27;
  FRDGTextureUAV *pFVar28;
  int iVar29;
  longlong *plVar30;
  int iVar31;
  FShader *pFVar32;
  undefined8 *puVar33;
  int iVar34;
  FShaderMapBase *pFVar35;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar36;
  undefined1 auStackY_248 [32];
  byte local_1f8;
  FRDGTextureSRVDesc local_1e8;
  undefined8 local_1d0;
  FRDGBuilder *local_1c8;
  FRDGTextureUAVDesc local_1c0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  FRDGUserValidation *local_198;
  float local_190;
  float fStack_18c;
  FRDGBuffer *local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  TIntVector3<int>_u_0 local_168;
  FRDGBufferUAVDesc local_158;
  FRDGBufferSRVDesc local_148;
  FRHISamplerState *local_128;
  void *local_120;
  TShaderRefBase<FBuildIndirectDispatchArgsBufferCS,FShaderMapPointerTable> local_118;
  TShaderRefBase<FGenerateMipsIndirectCS,FShaderMapPointerTable> local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FRDGBuffer *local_d0 [2];
  FShaderParametersMetadata *local_c0;
  FRDGEventName local_b8;
  FRDGEventName local_a0;
  undefined1 local_88 [40];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  puVar33 = (undefined8 *)0x0;
  local_1d0 = param_3;
  local_1c8 = param_1;
  local_128 = param_4;
  if ((param_3 == (FRDGTexture *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Texture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GenerateMips.cpp"
                          ,0x112,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_4 == (FRHISamplerState *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sampler",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GenerateMips.cpp"
                          ,0x113,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2];
  if ((GGlobalShaderMap[EVar5] == (FGlobalShaderMap *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("GGlobalShaderMap[Platform]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                          ,0x21e,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this = GGlobalShaderMap[EVar5];
  iVar29 = (byte)(param_3->Desc).field_0x30 - 1;
  uStack_178 = 0x4189;
  local_170 = 0;
  iVar17 = 1;
  if (1 < iVar29) {
    iVar17 = iVar29;
  }
  local_c0 = (FShaderParametersMetadata *)0x0;
  local_180 = (FRDGBuffer *)CONCAT44(iVar17,0xc);
  local_d0[1]._4_4_ = uStack_174;
  local_d0[1]._0_4_ = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_d0[0] = local_180;
  local_188 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)local_d0,L"IndirectDispatchArgsBuffer",None);
  puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar18 == (undefined8 *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    puVar18[4] = 0;
    *puVar18 = &___7__TObject_VFParameters_FBuildIndirectDispatchArgsBufferCS___FRDGAllocator__6B_;
    puVar18[5] = 0;
    puVar33 = puVar18;
  }
  plVar1 = &param_1->_padding_;
  local_1a8 = puVar33;
  if ((((undefined8 **)param_1->_padding_ <= &local_1a8) &&
      (&local_1a8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar17 = (int)param_1->_padding_;
  if (iVar17 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar1,(int *)((longlong)&param_1->_padding_ + 4)
                       );
  }
  *(int *)&param_1->_padding_ = iVar17 + 1;
  local_148._padding_._0_4_ = CONCAT31(local_148._padding_._1_3_,0x1c);
  local_148._padding_._0_4_ = 0xffffffff;
  *(undefined8 **)(*plVar1 + (longlong)iVar17 * 8) = local_1a8;
  (((FParameters *)(puVar33 + 2))->TextureSize).field0_0x0 =
       *(TIntPoint<int>_u_0 *)&(param_3->Desc).field_0x24;
  *(uint *)(puVar33 + 3) = param_6;
  *(uint *)((longlong)puVar33 + 0x1c) = (uint)(byte)(param_3->Desc).field_0x30;
  local_148._padding_._4_4_ = 0;
  local_148._padding_ = 0;
  local_148.Buffer = param_5;
  local_198 = &param_1->UserValidation;
  FRDGUserValidation::ValidateCreateSRV(local_198,&local_148);
  pFVar15 = local_148.Buffer;
  pTVar36 = &param_1->Views;
  pFVar19 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
  lVar7 = pFVar15->_padding_;
  piVar2 = &(param_1->Views).Array.ArrayMax;
  *(byte *)&pFVar19->_padding_ = (byte)pFVar19->_padding_ & 0xfe;
  *(undefined8 *)((longlong)&pFVar19->_padding_ + 4) = 0xffffffffffffffff;
  pFVar19->_padding_ = lVar7;
  pFVar19->_padding_ = 0;
  *(undefined1 *)&pFVar19->_padding_ = 3;
  pFVar19->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
  (pFVar19->Desc)._padding_ = CONCAT44(local_148._padding_._4_4_,(undefined4)local_148._padding_);
  (pFVar19->Desc)._padding_ = CONCAT44(local_148._padding_._4_4_,(undefined4)local_148._padding_);
  (pFVar19->Desc)._padding_ = local_148._padding_;
  (pFVar19->Desc).Buffer = local_148.Buffer;
  iVar17 = (param_1->Views).Array.ArrayNum;
  if (iVar17 == *piVar2) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                       (0x808,(ForElementType<FRDGView_*> *)pTVar36,piVar2);
  }
  (param_1->Views).Array.ArrayNum = iVar17 + 1;
  (pTVar36->Array).AllocatorInstance.Data[iVar17] = (FRDGView *)pFVar19;
  *(int *)((longlong)&pFVar19->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateSRV(local_198,pFVar19);
  local_158.Buffer = local_188;
  puVar33[4] = pFVar19;
  local_158._padding_._0_2_ = 0x1c;
  local_158._padding_._2_1_ = 0;
  pFVar20 = FRDGBuilder::CreateUAV(local_1c8,&local_158,None);
  puVar33[5] = pFVar20;
  pFVar21 = FBuildIndirectDispatchArgsBufferCS::GetStaticType();
  ppFVar22 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
             ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                     *)this,(FHashedName *)&pFVar21->field_0x30);
  pFVar23 = (FShader *)0x0;
  if (ppFVar22 == (FGlobalShaderMapSection **)0x0) {
LAB_145d24d0a:
    FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_f8);
    ::FName::ToString((FName *)FVar24,&local_f0);
    FBuildIndirectDispatchArgsBufferCS::GetStaticType();
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    pFVar32 = (FShader *)0x0;
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    pFVar32 = (FShader *)*ppFVar22;
    pFVar23 = FShaderMapContent::GetShader
                        (*(FShaderMapContent **)
                          &(pFVar32->Bindings).BindlessResourceParameters.ArrayNum,
                         (FHashedName *)&pFVar21->field_0x28,0);
    if (pFVar23 == (FShader *)0x0) goto LAB_145d24d0a;
  }
  FBuildIndirectDispatchArgsBufferCS::GetStaticType();
  pFVar13 = local_1d0;
  bVar3 = (local_1d0->Desc).field_0x30;
  local_118.ShaderContent = (FBuildIndirectDispatchArgsBufferCS *)pFVar23;
  local_118.ShaderMap = (FShaderMapBase *)pFVar32;
  pFVar25 = FRDGEventName::FRDGEventName(&local_b8,L"GenerateMips BuildIndirectArgs(Mips=%d)");
  pFVar26 = FBuildIndirectDispatchArgsBufferCS::FParameters::FTypeInfo::GetStructMetadata();
  local_168._s_0.Y = 1;
  local_168._s_0.X = bVar3 + 6 >> 3;
  local_168._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FBuildIndirectDispatchArgsBufferCS>
            (local_1c8,pFVar25,Compute,&local_118,pFVar26,(FParameters *)(puVar33 + 2),
             (TIntVector3<int> *)&local_168._s_0);
  if (local_b8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  uVar6 = *(uint *)&pFVar13->Desc;
  pFVar21 = FGenerateMipsIndirectCS::GetStaticType();
  ppFVar22 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
             ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                     *)this,(FHashedName *)&pFVar21->field_0x30);
  if (ppFVar22 == (FGlobalShaderMapSection **)0x0) {
    pFVar23 = (FShader *)0x0;
  }
  else {
    pFVar35 = (FShaderMapBase *)*ppFVar22;
    pFVar23 = FShaderMapContent::GetShader
                        ((pFVar35->Content).Object,(FHashedName *)&pFVar21->field_0x28,
                         uVar6 >> 4 & 1);
    if (pFVar23 != (FShader *)0x0) goto LAB_145d24edd;
  }
  pFVar35 = (FShaderMapBase *)0x0;
  FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_120);
  ::FName::ToString((FName *)FVar24,&local_e0);
  FGenerateMipsIndirectCS::GetStaticType();
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("Shader.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                      ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (bVar16) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_145d24edd:
  FGenerateMipsIndirectCS::GetStaticType();
  pFVar13 = local_1d0;
  fVar10 = __real_3f800000;
  local_1f8 = 1;
  bVar3 = (local_1d0->Desc).field_0x30;
  if (1 < bVar3) {
    local_1d0 = (FRDGTexture *)((ulonglong)local_1d0 & 0xffffffff00000000);
    local_108.ShaderContent = (FGenerateMipsIndirectCS *)pFVar23;
    local_108.ShaderMap = pFVar35;
    do {
      puVar33 = (undefined8 *)0x0;
      iVar31 = *(int *)&(pFVar13->Desc).field_0x28 >> (local_1f8 & 0x1f);
      iVar29 = *(int *)&(pFVar13->Desc).field_0x24 >> (local_1f8 & 0x1f);
      iVar17 = 1;
      if (1 < iVar29) {
        iVar17 = iVar29;
      }
      iVar29 = 1;
      if (1 < iVar31) {
        iVar29 = iVar31;
      }
      puVar18 = FMemStackBase::Alloc((FMemStackBase *)&local_1c8->_padding_,0x40,0x10);
      if (puVar18 == (undefined8 *)0x0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        puVar18[3] = 0;
        *puVar18 = &___7__TObject_VFParameters_FGenerateMipsIndirectCS___FRDGAllocator__6B_;
        puVar18[4] = 0;
        puVar18[5] = 0;
        puVar18[6] = 0;
        *(undefined4 *)(puVar18 + 7) = 4;
        puVar33 = puVar18;
      }
      local_1a0 = puVar33;
      if ((((undefined8 **)*plVar1 <= &local_1a0) &&
          (&local_1a0 < (undefined8 **)*plVar1 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar31 = (int)param_1->_padding_;
      if (iVar31 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar1,
                            (int *)((longlong)&param_1->_padding_ + 4));
      }
      *(int *)&param_1->_padding_ = iVar31 + 1;
      iVar34 = local_1f8 - 1;
      *(undefined8 **)(*plVar1 + (longlong)iVar31 * 8) = local_1a0;
      local_190 = fVar10 / (float)iVar17;
      fStack_18c = fVar10 / (float)iVar29;
      TVar9._s_0.Y = fStack_18c;
      TVar9._s_0.X = local_190;
      (((FParameters *)(puVar33 + 2))->TexelSize).field0_0x0 = TVar9;
      if (((iVar34 < -1) || (0x7f < iVar34)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("MipLevel >= -1 && MipLevel <= TNumericLimits<int8>::Max()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                              ,0x302,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1e8._padding_._0_1_ = 0;
      local_1e8._padding_._4_4_ = 0;
      local_1e8._padding_._0_1_ = 0;
      local_1e8._padding_._2_1_ = '\0';
      cVar4 = (pFVar13->Desc).field_0x32;
      local_1e8._padding_._3_1_ = 0;
      local_1e8.Texture = pFVar13;
      if ((cVar4 == '\x01') || (cVar4 == '\x04')) {
        local_1e8._padding_._4_4_ = (uint)*(ushort *)&(pFVar13->Desc).field_0x2e << 0x10;
      }
      local_1e8._padding_._1_1_ = (undefined1)iVar34;
      local_1e8._padding_._2_1_ = 1;
      FRDGUserValidation::ValidateCreateSRV(local_198,&local_1e8);
      pFVar11 = local_1e8.Texture;
      pFVar27 = FMemStackBase::Alloc((FMemStackBase *)&local_1c8->_padding_,0x48,8);
      pFVar27->_padding_ = pFVar11->_padding_;
      *(byte *)&pFVar27->_padding_ = (byte)pFVar27->_padding_ & 0xfe;
      pFVar27->_padding_ = 0;
      pFVar27->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
      *(undefined1 *)&pFVar27->_padding_ = 1;
      *(undefined8 *)((longlong)&pFVar27->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&(pFVar27->Desc)._padding_ = (undefined1)local_1e8._padding_;
      *(undefined1 *)((longlong)&(pFVar27->Desc)._padding_ + 1) = local_1e8._padding_._1_1_;
      *(undefined1 *)((longlong)&(pFVar27->Desc)._padding_ + 2) = local_1e8._padding_._2_1_;
      *(undefined1 *)((longlong)&(pFVar27->Desc)._padding_ + 3) = local_1e8._padding_._3_1_;
      *(undefined2 *)((longlong)&(pFVar27->Desc)._padding_ + 4) = local_1e8._padding_._4_2_;
      *(undefined2 *)((longlong)&(pFVar27->Desc)._padding_ + 6) = local_1e8._padding_._6_2_;
      *(undefined1 *)((longlong)&(pFVar27->Desc)._padding_ + 2) = 0;
      *(undefined1 *)&(pFVar27->Desc)._padding_ = (undefined1)local_1e8._padding_;
      *(char *)((longlong)&(pFVar27->Desc)._padding_ + 2) = local_1e8._padding_._2_1_;
      if (local_1e8._padding_._2_1_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar27->Desc)._padding_ + 1) = local_1e8._padding_._1_1_;
      }
      (pFVar27->Desc).Texture = local_1e8.Texture;
      iVar17 = (param_1->Views).Array.ArrayNum;
      if (iVar17 == (param_1->Views).Array.ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)pTVar36,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar17 + 1;
      (pTVar36->Array).AllocatorInstance.Data[iVar17] = (FRDGView *)pFVar27;
      *(int *)((longlong)&pFVar27->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(local_198,pFVar27);
      puVar33[3] = pFVar27;
      local_1c0._padding_._0_1_ = (pFVar13->Desc).field_0x34;
      local_1c0._padding_._1_1_ = local_1f8;
      local_1c0._padding_._2_4_ = 0;
      local_1c0._padding_._6_1_ = 0;
      local_1c0._padding_._0_1_ = '\0';
      local_1c0.Texture = pFVar13;
      FRDGUserValidation::ValidateCreateUAV(local_198,&local_1c0);
      pFVar11 = local_1c0.Texture;
      pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&local_1c8->_padding_,0x50,8);
      lVar7 = pFVar11->_padding_;
      *(byte *)&pFVar28->_padding_ = (byte)pFVar28->_padding_ & 0xfe;
      pFVar28->_padding_ = lVar7;
      pFVar28->_padding_ = 0;
      *(undefined1 *)&pFVar28->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar28->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&pFVar28->_padding_ = 0;
      pFVar28->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined1 *)&(pFVar28->Desc)._padding_ = (undefined1)local_1c0._padding_;
      *(byte *)((longlong)&(pFVar28->Desc)._padding_ + 1) = local_1c0._padding_._1_1_;
      *(undefined2 *)((longlong)&(pFVar28->Desc)._padding_ + 2) = local_1c0._padding_._2_2_;
      *(undefined2 *)((longlong)&(pFVar28->Desc)._padding_ + 4) = local_1c0._padding_._4_2_;
      *(undefined1 *)&(pFVar28->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar28->Desc)._padding_ + 6) = local_1c0._padding_._6_1_;
      *(char *)&(pFVar28->Desc)._padding_ = (char)local_1c0._padding_;
      if ((char)local_1c0._padding_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar28->Desc)._padding_ + 7) = local_1c0._padding_._7_1_;
      }
      (pFVar28->Desc).Texture = local_1c0.Texture;
      iVar17 = (param_1->Views).Array.ArrayNum;
      if (iVar17 == (param_1->Views).Array.ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)pTVar36,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar17 + 1;
      (pTVar36->Array).AllocatorInstance.Data[iVar17] = (FRDGView *)pFVar28;
      *(int *)((longlong)&pFVar28->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(local_198,pFVar28);
      pFVar15 = local_188;
      uVar14 = (ulonglong)local_1d0;
      local_88._0_8_ = 0;
      local_60 = (longlong *)0x0;
      uVar12 = (undefined4)local_1d0;
      puVar33[4] = pFVar28;
      local_180 = local_188;
      uStack_178 = 4;
      puVar33[5] = local_128;
      local_1d0 = (FRDGTexture *)((ulonglong)local_1d0 | 4);
      puVar33[6] = local_188;
      puVar33[7] = CONCAT44(uStack_174,4);
      pFVar25 = FRDGEventName::FRDGEventName(&local_a0,L"GenerateMips DestMipLevel=%d");
      FComputeShaderUtils::AddPass<FGenerateMipsIndirectCS>
                (local_1c8,pFVar25,Compute,&local_108,(FParameters *)(puVar33 + 2),pFVar15,
                 iVar34 * 0xc,(TFunction<void___cdecl(void)> *)local_88);
      if ((uVar14 & 8) != 0) {
        local_1d0 = (FRDGTexture *)(CONCAT44(local_1d0._4_4_,uVar12) & 0xfffffffffffffff7 | 4);
        if (local_120 != (void *)0x0) {
          FMemory::Free(local_120);
        }
      }
      if (local_a0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_a0.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_88._0_8_ != 0) {
        plVar30 = (longlong *)(local_88 + 0x10);
        if (local_60 != (longlong *)0x0) {
          plVar30 = local_60;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
      local_1f8 = local_1f8 + 1;
    } while (local_1f8 < bVar3);
  }
  return;
}

// ExecuteRaster @ 145d25490

/* WARNING: Removing unreachable block (ram,0x000145d25c86) */
/* WARNING: Removing unreachable block (ram,0x000145d25c96) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FGenerateMips::ExecuteRaster
          (FRDGBuilder *param_1,Type param_2,FRDGTexture *param_3,FRHISamplerState *param_4)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  byte bVar3;
  EShaderPlatform EVar4;
  FGlobalShaderMap *this;
  FGlobalShaderMapSection *pFVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  FRDGTexture *pFVar9;
  longlong *plVar10;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar11;
  bool bVar12;
  ERDGPassFlags EVar13;
  int iVar14;
  FGlobalShaderType *pFVar15;
  FGlobalShaderMapSection **ppFVar16;
  FName FVar17;
  undefined8 *puVar18;
  FRDGTextureSRV *pFVar19;
  FRDGEventName *this_00;
  FShaderParametersMetadata *pFVar20;
  wchar_t *pwVar21;
  FRDGPass *this_01;
  int iVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  byte local_res10;
  FRDGTextureSRVDesc local_1b0;
  uint local_198;
  FMemStackBase *local_190;
  undefined8 *local_188;
  int local_180;
  int local_17c;
  uint local_178;
  float local_174;
  float fStack_170;
  FShader *local_168;
  FGlobalShaderMapSection *local_160;
  FShader *local_158;
  FGlobalShaderMapSection *local_150;
  longlong *local_148;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *local_140;
  FRenderTargetBinding local_138;
  FShader *local_120;
  FGlobalShaderMapSection *pFStack_118;
  FShader *local_110;
  FGlobalShaderMapSection *pFStack_108;
  FScriptContainerElement *local_100;
  int iStack_f8;
  int iStack_f4;
  FRDGParameterStruct local_f0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  FString local_c8;
  FString local_b8;
  FRDGEventName local_a8 [4];
  
  if ((param_3 == (FRDGTexture *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Texture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GenerateMips.cpp"
                          ,0x84,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4 == (FRHISamplerState *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sampler",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GenerateMips.cpp"
                          ,0x85,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar4 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2];
  if ((GGlobalShaderMap[EVar4] == (FGlobalShaderMap *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("GGlobalShaderMap[Platform]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                          ,0x21e,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this = GGlobalShaderMap[EVar4];
  pFVar15 = FGenerateMipsVS::GetStaticType();
  ppFVar16 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
             ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                     *)this,(FHashedName *)&pFVar15->field_0x30);
  if (ppFVar16 == (FGlobalShaderMapSection **)0x0) {
    local_168 = (FShader *)0x0;
LAB_145d255c2:
    local_160 = (FGlobalShaderMapSection *)0x0;
    FVar17 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d8);
    ::FName::ToString((FName *)FVar17,&local_c8);
    FGenerateMipsVS::GetStaticType();
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pFVar5 = *ppFVar16;
    local_168 = FShaderMapContent::GetShader
                          (*(FShaderMapContent **)&pFVar5->field_0x28,
                           (FHashedName *)&pFVar15->field_0x28,0);
    local_160 = pFVar5;
    if (local_168 == (FShader *)0x0) goto LAB_145d255c2;
  }
  FGenerateMipsVS::GetStaticType();
  pFVar15 = FGenerateMipsPS::GetStaticType();
  ppFVar16 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
             ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                     *)this,(FHashedName *)&pFVar15->field_0x30);
  if (ppFVar16 == (FGlobalShaderMapSection **)0x0) {
    local_158 = (FShader *)0x0;
  }
  else {
    pFVar5 = *ppFVar16;
    local_158 = FShaderMapContent::GetShader
                          (*(FShaderMapContent **)&pFVar5->field_0x28,
                           (FHashedName *)&pFVar15->field_0x28,0);
    local_150 = pFVar5;
    if (local_158 != (FShader *)0x0) goto LAB_145d256f9;
  }
  local_150 = (FGlobalShaderMapSection *)0x0;
  FVar17 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d0);
  ::FName::ToString((FName *)FVar17,&local_b8);
  FGenerateMipsPS::GetStaticType();
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Shader.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                      ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_145d256f9:
  FGenerateMipsPS::GetStaticType();
  fVar8 = __real_3f000000;
  cVar2 = (param_3->Desc).field_0x32;
  local_198 = 1;
  local_1b0._padding_._0_1_ = 0;
  local_1b0._padding_._3_1_ = 0;
  local_1b0._padding_._6_2_ = 0;
  local_1b0._padding_._0_1_ = 0;
  local_1b0._padding_._1_2_ = (ushort)local_1b0._padding_._1_1_;
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    local_1b0._padding_._6_2_ = *(undefined2 *)&(param_3->Desc).field_0x2e;
  }
  local_1b0._padding_._2_1_ = 1;
  if (cVar2 == '\x03') {
    local_198 = 6;
    local_1b0._padding_._1_2_ = 0x101;
    local_1b0._padding_._6_2_ = 1;
  }
  bVar3 = (param_3->Desc).field_0x30;
  local_res10 = 1;
  if (1 < bVar3) {
    local_190 = (FMemStackBase *)&param_1->_padding_;
    local_148 = &param_1->_padding_;
    local_140 = &param_1->Views;
    piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
    local_1b0.Texture = param_3;
    do {
      local_178 = (uint)local_res10;
      iVar22 = *(int *)&(param_3->Desc).field_0x28 >> (local_res10 & 0x1f);
      iVar14 = *(int *)&(param_3->Desc).field_0x24 >> (local_res10 & 0x1f);
      local_1b0._padding_._1_1_ = (undefined1)(local_res10 - 1);
      local_180 = 1;
      if (1 < iVar14) {
        local_180 = iVar14;
      }
      local_17c = 1;
      if (1 < iVar22) {
        local_17c = iVar22;
      }
      iVar14 = 0;
      fVar24 = fVar8 / (float)local_180;
      fVar25 = fVar8 / (float)local_17c;
      do {
        pTVar11 = local_140;
        plVar10 = local_148;
        local_1b0._padding_._4_2_ = (short)iVar14;
        puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,0x10);
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          *puVar18 = &___7__TObject_VFParameters_FGenerateMipsPS___FRDGAllocator__6B_;
          puVar18[4] = 0;
          puVar18[5] = 0;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar18 + 6));
        }
        local_188 = puVar18;
        if ((((undefined8 **)*plVar10 <= &local_188) &&
            (&local_188 < (undefined8 **)*plVar10 + *piVar23)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar22 = (int)plVar10[1];
        if (iVar22 == *piVar23) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)plVar10,piVar23);
        }
        pFVar1 = (FScriptContainerElement *)(puVar18 + 2);
        *(int *)(plVar10 + 1) = iVar22 + 1;
        *(undefined8 **)(*plVar10 + (longlong)iVar22 * 8) = local_188;
        *(ulonglong *)pFVar1 = CONCAT44(fVar25,fVar24);
        *(float *)(puVar18 + 3) = (float)(local_res10 - 1);
        local_174 = fVar24;
        fStack_170 = fVar25;
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_1b0);
        pFVar9 = local_1b0.Texture;
        pFVar19 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
        lVar6 = pFVar9->_padding_;
        *(byte *)&pFVar19->_padding_ = (byte)pFVar19->_padding_ & 0xfe;
        pFVar19->_padding_ = lVar6;
        pFVar19->_padding_ = 0;
        *(undefined1 *)&pFVar19->_padding_ = 1;
        *(undefined8 *)((longlong)&pFVar19->_padding_ + 4) = 0xffffffffffffffff;
        pFVar19->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
        *(undefined1 *)&(pFVar19->Desc)._padding_ = (undefined1)local_1b0._padding_;
        *(undefined1 *)((longlong)&(pFVar19->Desc)._padding_ + 1) = local_1b0._padding_._1_1_;
        *(undefined1 *)((longlong)&(pFVar19->Desc)._padding_ + 2) = local_1b0._padding_._2_1_;
        *(undefined1 *)((longlong)&(pFVar19->Desc)._padding_ + 3) = local_1b0._padding_._3_1_;
        *(short *)((longlong)&(pFVar19->Desc)._padding_ + 4) = local_1b0._padding_._4_2_;
        *(undefined2 *)((longlong)&(pFVar19->Desc)._padding_ + 6) = local_1b0._padding_._6_2_;
        *(undefined1 *)((longlong)&(pFVar19->Desc)._padding_ + 2) = 0;
        *(undefined1 *)&(pFVar19->Desc)._padding_ = (undefined1)local_1b0._padding_;
        *(char *)((longlong)&(pFVar19->Desc)._padding_ + 2) = local_1b0._padding_._2_1_;
        if (local_1b0._padding_._2_1_ != '\0') {
          *(byte *)((longlong)&(pFVar19->Desc)._padding_ + 1) = local_1b0._padding_._1_1_;
        }
        (pFVar19->Desc).Texture = local_1b0.Texture;
        iVar22 = (pTVar11->Array).ArrayNum;
        if (iVar22 == (pTVar11->Array).ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)pTVar11,&(pTVar11->Array).ArrayMax
                             );
        }
        (pTVar11->Array).ArrayNum = iVar22 + 1;
        (pTVar11->Array).AllocatorInstance.Data[iVar22] = (FRDGView *)pFVar19;
        *(int *)((longlong)&pFVar19->_padding_ + 4) = (pTVar11->Array).ArrayNum + -1;
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar19);
        puVar18[5] = param_4;
        local_138.MipIndex = local_res10;
        local_138.ArraySlice = -1;
        if (1 < local_198) {
          local_138.ArraySlice = (short)iVar14;
        }
        puVar18[4] = pFVar19;
        local_138.ResolveTexture = (FRDGTexture *)0x0;
        local_138.LoadAction = ELoad;
        local_138.Texture = param_3;
        bVar12 = FRenderTargetBinding::Validate(&local_138);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x216,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_120 = local_168;
        pFStack_118 = local_160;
        local_110 = local_158;
        pFStack_108 = local_150;
        iStack_f8 = local_180;
        puVar18[6] = local_138.Texture;
        puVar18[7] = local_138.ResolveTexture;
        iStack_f4 = local_17c;
        puVar18[8] = CONCAT44(local_138._20_4_,
                              CONCAT22(local_138.ArraySlice,
                                       CONCAT11(local_138.MipIndex,local_138.LoadAction)));
        local_100 = pFVar1;
        this_00 = FRDGEventName::FRDGEventName(local_a8,L"GenerateMips DestMipLevel=%d Slice=%d");
        pFVar20 = FGenerateMipsPS::FParameters::FTypeInfo::GetStructMetadata();
        FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar1,pFVar20,this_00,Raster);
        FRDGBuilder::FlushAccessModeQueue(param_1);
        pwVar21 = FRDGEventName::GetTCHAR(this_00);
        EVar13 = FRDGBuilder::OverridePassFlags(param_1,pwVar21,Raster);
        this_01 = FMemStackBase::Alloc(local_190,0x1b8,8);
        local_f0.Contents = (uchar *)pFVar1;
        if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x17c,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_f0.Layout.Reference = (pFVar20->Layout).Reference;
        if (local_f0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_f0.Layout.Reference);
        }
        local_f0.Metadata = pFVar20;
        FRDGPass::FRDGPass(this_01,this_00,&local_f0,EVar13,Async);
        this_01[1]._padding_ = (longlong)local_120;
        this_01[1].FullPathIfDebug.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)pFStack_118;
        this_01->_padding_ =
             (longlong)
             &TRDGLambdaPass<FGenerateMipsPS::FParameters,`FGenerateMips::ExecuteRaster'::`23'::<lambda_1>_>
              ::_vftable_;
        this_01[1].ParameterStruct.Contents = (uchar *)pFVar1;
        *(FShader **)&this_01[1].FullPathIfDebug.Data.ArrayNum = local_110;
        this_01[1].Name.EventFormat = (wchar_t *)pFStack_108;
        this_01[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_100;
        this_01[1].Name.FormattedEventName.Data.ArrayNum = iStack_f8;
        this_01[1].Name.FormattedEventName.Data.ArrayMax = iStack_f4;
        FRDGBuilder::ClobberPassOutputs(param_1,this_01);
        iVar22 = (param_1->Passes).Array.ArrayNum;
        if (iVar22 == (param_1->Passes).Array.ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                             (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,
                              &(param_1->Passes).Array.ArrayMax);
        }
        (param_1->Passes).Array.ArrayNum = iVar22 + 1;
        (param_1->Passes).Array.AllocatorInstance.Data[iVar22] = this_01;
        (this_01->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
        FRDGBuilder::SetupParameterPass(param_1,this_01);
        if (local_a8[0].FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8[0].FormattedEventName.Data.AllocatorInstance.Data);
        }
        iVar14 = iVar14 + 1;
        piVar23 = (int *)((longlong)local_148 + 0xc);
      } while (iVar14 < (int)local_198);
      piVar23 = (int *)((longlong)local_148 + 0xc);
      local_res10 = local_res10 + 1;
    } while (local_res10 < bVar3);
  }
  return;
}

// WillFormatSupportCompute @ 145d62720

bool __cdecl FGenerateMips::WillFormatSupportCompute(EPixelFormat param_1)

{
  return (bool)((byte)(GPixelFormats[param_1].Capabilities >> 0x16) & 1);
}

// operator() @ 1504dbb40

bool __thiscall `FGenerateMips::Execute'::__l13::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8122045175510859393>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8122045175510859393>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dbbd0

bool __thiscall `FGenerateMips::Execute'::__l15::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8122045175510859386>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8122045175510859386>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

