// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ConvertTextureFormat_RenderThread @ 14eaa2e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl
FWmfMediaHardwareVideoDecodingParameters::ConvertTextureFormat_RenderThread
          (FRHICommandListImmediate *param_1,FWmfMediaHardwareVideoDecodingTextureSample *param_2,
          TRefCountPtr<FRHITexture> param_3)

{
  int iVar1;
  int iVar2;
  FTaggedMemory *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  atomic<unsigned_int> aVar11;
  uint uVar12;
  int iVar13;
  FRHIBreadcrumbAllocator *pFVar14;
  FRHIBreadcrumbNode *pFVar15;
  longlong lVar16;
  int *piVar17;
  IRHICommandContext *pIVar18;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar19;
  FMemMark *pFVar20;
  uchar *puVar21;
  FGlobalShaderMap *pFVar22;
  FShaderType *pFVar23;
  FName FVar24;
  FInitializer *pFVar25;
  FRHIVertexShader *pFVar26;
  FShaderParametersMetadata *pFVar27;
  FRHIPixelShader *pFVar28;
  longlong lVar29;
  uint *puVar30;
  undefined8 *puVar31;
  FRHITexture *pFVar32;
  undefined1 auStackY_9f8 [32];
  undefined1 local_9b8 [24];
  FGlobalShaderMap *local_9a0;
  undefined1 local_998 [24];
  uint uStack_980;
  uint uStack_97c;
  undefined1 local_978 [16];
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  undefined1 local_948 [40];
  IRHICommandContext *pIStack_920;
  FSharedReferencer<1> local_918;
  FRHIParallelRenderPassInfo *local_910;
  uint local_908;
  uint local_904;
  TRefCountPtr<FBaseGraphTask> local_900;
  FRHIBatchedShaderParameters *local_8f8;
  uint local_8f0;
  uint local_8ec;
  ForAnyElementType local_8e8;
  TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable> local_8d8;
  TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable> local_8c8;
  TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable> local_8b8;
  TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable> local_8a8;
  FRHICommandCopyResource local_898;
  undefined1 local_878 [28];
  ClearValueType local_85c;
  undefined1 local_848 [8];
  longlong local_840;
  uchar local_838;
  undefined4 local_834;
  int local_830;
  undefined1 local_82c;
  undefined1 local_820;
  FRHIBreadcrumbScope local_818;
  ForAnyElementType local_808 [2];
  TShaderRefBase<FHardwareVideoDecodingYCoCgPS,FShaderMapPointerTable> local_7f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_7e8;
  FRHITexture *local_7d8;
  undefined8 uStack_7d0;
  FRHIBreadcrumbAllocator *local_7c8;
  FSharedReferencer<1> FStack_7c0;
  TShaderRefBase<FHardwareVideoDecodingYCoCgAlphaPS,FShaderMapPointerTable> local_7b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_7a8;
  undefined1 local_798 [24];
  undefined4 uStack_780;
  undefined4 uStack_77c;
  TGPUStat<TRHIGPUStatNameProvider_MediaTextureConversion> *local_778;
  wchar_t *pwStack_770;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_768;
  FInitializer local_758;
  FRHITexture *local_748;
  undefined8 uStack_740;
  TShaderRefBase<FHardwareVideoDecodingPS,FShaderMapPointerTable> local_738;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_728;
  FRHITexture *local_718;
  FRHIVertexDeclaration *pFStack_710;
  TShaderRefBase<FHardwareVideoDecodingY416PS,FShaderMapPointerTable> local_708;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_6f8;
  FRHITexture *local_6e8;
  FRHIWorkGraphShader *pFStack_6e0;
  FRHITexture *local_6d8;
  undefined1 local_6d0 [8];
  undefined1 local_6c8 [8];
  undefined1 local_6c0 [8];
  undefined1 local_6b8 [8];
  undefined1 local_6b0 [8];
  undefined1 local_6a8 [8];
  undefined1 local_6a0 [8];
  undefined1 local_698 [16];
  FString local_688;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_678;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_668;
  FString local_658;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_648;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_638;
  FString local_628;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_618;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_608;
  FString local_5f8;
  undefined1 local_5e8 [16];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_5d8;
  FString local_5c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_5b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_5a8;
  undefined1 local_598 [16];
  undefined1 local_588 [8];
  undefined1 local_580 [8];
  undefined1 local_578 [8];
  undefined1 local_570 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_568;
  undefined1 local_558 [8];
  undefined1 local_550 [8];
  FGraphicsPipelineStateInitializer local_548;
  undefined1 local_468 [232];
  TRefCountPtr<FRHITexture> local_380;
  EVRSRateCombiner local_378;
  undefined8 local_374;
  undefined2 local_36c;
  ESubpassHint local_36a;
  FHardwareVideoDecodingShaderParams local_368;
  FHardwareVideoDecodingShaderParams local_2e8;
  FHardwareVideoDecodingShaderParams local_268;
  FHardwareVideoDecodingShaderParams local_1e8;
  FHardwareVideoDecodingShaderParams local_168;
  FHardwareVideoDecodingShaderParams local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_9f8;
  local_948._8_8_ = param_3.Reference;
  local_6d8 = param_3.Reference;
  FLLMScope::FLLMScope((FLLMScope *)(local_9b8 + 0x10),MediaStreaming,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_948 + 0x10),MediaStreaming,true);
  if ((param_2 == (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) ||
     ((param_3.Reference)->_padding_ == 0)) {
    FMemScope::~FMemScope((FMemScope *)(local_948 + 0x10));
    FLLMScope::~FLLMScope((FLLMScope *)(local_9b8 + 0x10));
    if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
    }
    bVar7 = false;
  }
  else {
    pFVar3 = (FTaggedMemory *)(param_2->SourceTexture).RawPointer;
    local_9b8._8_8_ = pFVar3;
    if (pFVar3 != (FTaggedMemory *)0x0) {
      (**(code **)&pFVar3->Next->DataSize)(pFVar3);
    }
    local_808[0]._0_1_ = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_798._16_8_ =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaHardwareVideoDecodingRendering.cpp"
      ;
      uStack_780._0_1_ = 0x79;
      uStack_780._1_1_ = ENoAction;
      uStack_780._2_2_ = 0;
      local_778 = &GPUStat_MediaTextureConversion;
      pwStack_770 = L"FWmfMediaHardwareVideoDecodingParameters_Convert";
      ::Desc._padding_._0_4_ = 0x52ffc690;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x79;
      ::Desc._padding_._4_4_ = uStack_77c;
      ::Desc._padding_._0_4_ = 0x54dc4c10;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x52ffc710;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FWmfMediaHardwareVideoDecodingParameters::ConvertTextureFormat_RenderThread'::__l18::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar14 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar15 = FMemStackBase::Alloc(&pFVar14->Inner,0x50,8);
    pFVar15->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar15->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar15->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar15->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar15->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar15->Allocator = pFVar14;
    pFVar15->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar15->TraceCpuSpecId = 0;
    pFVar15->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar10 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar15->ID = uVar10;
    pFVar15->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar15->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar15->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar15[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar7 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar7)) {
      local_8e8.Data = (FScriptContainerElement *)&::Desc.Cs;
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar11 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar11;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      local_8e8.Data = (FScriptContainerElement *)0x0;
    }
    pFVar15->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_818,(FRHIComputeCommandList *)param_1,pFVar15);
    local_808[0]._0_1_ = '\x01';
    local_848._0_4_ = 0xffffffff;
    local_848._4_2_ = 0xffff;
    local_840 = (param_3.Reference)->_padding_;
    local_838 = '\x01';
    local_834 = 0x70;
    local_830 = 0x1000;
    local_82c = 0;
    local_820 = 0;
    local_998._16_8_ = local_848;
    uStack_980 = 1;
    local_698._8_8_ = CONCAT44(uStack_97c,1);
    local_698._0_8_ = local_998._16_8_;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_698,None);
    pFVar32 = (FRHITexture *)(param_3.Reference)->_padding_;
    local_468._0_8_ = (FRHITexture *)0x0;
    local_468._8_8_ = (FRHITexture *)0x0;
    local_468._16_4_ = 0xffffffff;
    local_468[0x14] = '\0';
    local_468[0x15] = DontLoad_DontStore;
    local_468._24_8_ = (FRHITexture *)0x0;
    local_468._32_8_ = (FRHITexture *)0x0;
    local_468._40_4_ = 0xffffffff;
    local_468[0x2c] = '\0';
    local_468[0x2d] = DontLoad_DontStore;
    local_468._48_8_ = (FRHITexture *)0x0;
    local_468._56_8_ = (FRHITexture *)0x0;
    local_468._64_4_ = 0xffffffff;
    local_468[0x44] = '\0';
    local_468[0x45] = DontLoad_DontStore;
    local_468._72_8_ = (FRHITexture *)0x0;
    local_468._80_8_ = (FRHITexture *)0x0;
    local_468._88_4_ = 0xffffffff;
    local_468[0x5c] = '\0';
    local_468[0x5d] = DontLoad_DontStore;
    local_468._96_8_ = (FRHITexture *)0x0;
    local_468._104_8_ = (FRHITexture *)0x0;
    local_468._112_4_ = 0xffffffff;
    local_468[0x74] = '\0';
    local_468[0x75] = DontLoad_DontStore;
    local_468._120_8_ = (FRHITexture *)0x0;
    local_468._128_8_ = (FRHITexture *)0x0;
    local_468._136_4_ = 0xffffffff;
    local_468[0x8c] = '\0';
    local_468[0x8d] = DontLoad_DontStore;
    local_468._144_8_ = (FRHITexture *)0x0;
    local_468._152_8_ = (FRHITexture *)0x0;
    local_468._160_4_ = 0xffffffff;
    local_468[0xa4] = '\0';
    local_468[0xa5] = DontLoad_DontStore;
    local_468._168_8_ = (FRHITexture *)0x0;
    local_468._176_8_ = (FRHITexture *)0x0;
    local_468._184_4_ = 0xffffffff;
    local_468[0xbc] = '\0';
    local_468[0xbd] = DontLoad_DontStore;
    local_468._192_8_ = (FRHITexture *)0x0;
    local_468._200_8_ = (FRHITexture *)0x0;
    local_468[0xd0] = DontLoad_DontStore;
    local_468._212_4_ = DepthNop;
    local_468._216_4_ = -1;
    local_468._220_4_ = -1;
    local_468._224_4_ = 0xffffffff;
    local_468._228_4_ = 0xffffffff;
    local_380.Reference = (FRHITexture *)0x0;
    local_378 = VRSRB_Passthrough;
    local_374._0_4_ = None;
    local_374._4_4_ = 0;
    local_36c._0_1_ = false;
    local_36c._1_1_ = '\0';
    local_36a = None;
    if ((pFVar32 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ColorRT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x14b0,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    local_468._8_8_ = (FRHITexture *)0x0;
    local_468._16_4_ = 0xffffffff;
    local_468[0x14] = '\0';
    local_468[0x15] = DontLoad_Store;
    local_468._0_8_ = pFVar32;
    FRHICommandList::BeginRenderPass
              ((FRHICommandList *)param_1,(FRHIRenderPassInfo *)local_468,L"ConvertTextureFormat");
    lVar16 = (**(code **)(param_2->_padding_ + 8))(param_2,local_6d0);
    iVar13 = *(int *)(lVar16 + 4);
    piVar17 = (int *)(**(code **)(param_2->_padding_ + 8))(param_2,local_6c8);
    iVar1 = *piVar17;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar31 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar31;
      *(undefined8 **)&param_1->field_0x30 = puVar31 + 1;
      puVar31[1] = 0;
      *puVar31 = &___7FRHICommandSetViewport__6B_;
      puVar31[2] = 0;
      *(undefined4 *)(puVar31 + 3) = 0;
      *(float *)((longlong)puVar31 + 0x1c) = (float)iVar1;
      *(float *)(puVar31 + 4) = (float)iVar13;
      *(undefined4 *)((longlong)puVar31 + 0x24) = 0x3f800000;
    }
    else {
      pIVar18 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      pcVar4 = *(code **)(pIVar18->_padding_ + 0x1a0);
      (*pcVar4)(pIVar18,pcVar4,0,0);
    }
    local_548.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    local_548.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    local_548.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_548.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_548.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_548.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_548.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_548.BlendState = (FRHIBlendState *)0x0;
    local_548.RasterizerState = (FRHIRasterizerState *)0x0;
    local_548.DepthStencilState = (FRHIDepthStencilState *)0x0;
    local_548.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_548.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_548._100_8_ = 0;
    local_548.RenderTargetFormats.Elements[4] = '\0';
    local_548.RenderTargetFormats.Elements[5] = '\0';
    local_548.RenderTargetFormats.Elements[6] = '\0';
    local_548.RenderTargetFormats.Elements[7] = '\0';
    local_548.RenderTargetFlags.Elements[0] = None;
    local_548.RenderTargetFlags.Elements[1] = None;
    local_548.RenderTargetFlags.Elements[2] = None;
    local_548.RenderTargetFlags.Elements[3] = None;
    local_548.RenderTargetFlags.Elements[4] = None;
    local_548.RenderTargetFlags.Elements[5] = None;
    local_548.RenderTargetFlags.Elements[6] = None;
    local_548.RenderTargetFlags.Elements[7] = None;
    local_548.DepthStencilTargetFormat = PF_Unknown;
    local_548.DepthStencilTargetFlag = None;
    local_548._192_8_ = 0;
    local_548._200_8_ = 0;
    local_548.bAllowVariableRateShading = true;
    local_548.ShadingRate = VRSSR_1x1;
    local_548.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    local_548.StatePrecachePSOHash = 0;
    FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)param_1,&local_548);
    local_548.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_548.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_548.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_548.PrimitiveType = PT_TriangleList;
    pTVar19 = GetVertexDeclarationFVector4();
    local_548.BoundShaderState.VertexDeclarationRHI = pTVar19->Reference;
    FWmfMediaHardwareVideoDecodingTextureSample::GetOrCreateDestinationTexture
              (param_2,(FRHICommandListBase *)local_9b8);
    if (((char)param_2->_padding_ == '\0') && (pFVar3 != (FTaggedMemory *)0x0)) {
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        pFVar20 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = pFVar20;
        *(uchar ***)&param_1->field_0x30 = &pFVar20->Top;
        pFVar20->Top = (uchar *)0x0;
        pFVar20->Mem = (FMemStackBase *)&___7FRHICommandCopyResource__6B_;
        pFVar20->SavedChunk = pFVar3;
        local_9a0 = (FGlobalShaderMap *)pFVar20;
        (**(code **)&pFVar3->Next->DataSize)(pFVar3);
        *(undefined8 *)&pFVar20->bPopped = local_9b8._0_8_;
        pFVar32 = (FRHITexture *)local_9b8._0_8_;
        if ((FRHITexture *)local_9b8._0_8_ != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_9b8._0_8_);
        }
      }
      else {
        local_898._padding_ = 0;
        local_898._padding_ = (longlong)&___7FRHICommandCopyResource__6B_;
        local_898.SampleTexture.RawPointer = (ID3D11Texture2D *)pFVar3;
        (**(code **)&pFVar3->Next->DataSize)(pFVar3);
        local_898.SampleDestinationTexture.Reference = (FRHITexture *)local_9b8._0_8_;
        if ((FRHITexture *)local_9b8._0_8_ != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_9b8._0_8_);
        }
        FRHICommandCopyResource::Execute(&local_898,(FRHICommandListBase *)param_1);
        if (local_898.SampleDestinationTexture.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_898.SampleDestinationTexture.Reference);
        }
        pFVar32 = (FRHITexture *)local_9b8._0_8_;
        if ((FTaggedMemory *)local_898.SampleTexture.RawPointer != (FTaggedMemory *)0x0) {
          (**(code **)((longlong)*local_898.SampleTexture.RawPointer + 0x10))();
        }
      }
    }
    else {
      puVar21 = (uchar *)(**(code **)param_2->_padding_)(param_2);
      uVar12 = (**(code **)(param_2->_padding_ + 0x38))(param_2);
      lVar16 = (**(code **)(param_2->_padding_ + 8))(param_2,local_6c0);
      uVar10 = *(uint *)(lVar16 + 4);
      puVar30 = (uint *)(**(code **)(param_2->_padding_ + 8))(param_2,local_6b8);
      local_8f0 = *puVar30;
      local_900.Reference = (FBaseGraphTask *)0x0;
      local_8f8 = (FRHIBatchedShaderParameters *)0x0;
      local_8ec = uVar10;
      FRHICommandListBase::UpdateTexture2D
                ((FRHICommandListBase *)param_1,(FRHITexture *)local_9b8._0_8_,0,
                 (FUpdateTextureRegion2D *)&local_900,uVar12,puVar21);
      pFVar32 = (FRHITexture *)local_9b8._0_8_;
    }
    pFVar22 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    local_9a0 = pFVar22;
    iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
    if (iVar13 == 6) {
      TShaderMapRef<FHardwareVideoDecodingVS>::TShaderMapRef<FHardwareVideoDecodingVS>
                ((TShaderMapRef<FHardwareVideoDecodingVS> *)&local_8d8,pFVar22);
      pFVar23 = (FShaderType *)FHardwareVideoDecodingPS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar22,&local_768,pFVar23,0);
      if (local_768.ShaderContent == (FShader *)0x0) {
        FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6b0);
        ::FName::ToString((FName *)FVar24,&local_688);
        FHardwareVideoDecodingPS::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_688.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
      }
      FHardwareVideoDecodingPS::GetStaticType();
      local_738.ShaderContent = (FHardwareVideoDecodingPS *)local_768.ShaderContent;
      local_738.ShaderMap = local_768.ShaderMap;
      local_548.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_8d8,true);
      local_548.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<FHardwareVideoDecodingPS,FShaderMapPointerTable>::GetPixelShader
                     (&local_738,true);
      SetGraphicsPipelineState((FRHICommandList *)param_1,&local_548,0,CheckApply,true);
      local_758._8_8_ = 0;
      local_758._0_8_ = 2;
      pFVar25 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture(&local_758,pFVar32)
      ;
      *(undefined2 *)&pFVar25->field_0x3 = 0x100;
      pFVar25->field_0x1 = 3;
      FRHICommandListBase::CreateShaderResourceView
                ((FRHICommandListBase *)param_1,(FRHITexture *)(local_978 + 8),
                 (FInitializer *)pFVar32);
      uStack_740._0_4_ = 0;
      uStack_740._4_4_ = 0;
      local_748 = (FRHITexture *)&DAT_00000002;
      pFVar25 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                          ((FInitializer *)&local_748,pFVar32);
      *(undefined2 *)&pFVar25->field_0x3 = 0x100;
      pFVar25->field_0x1 = 0x28;
      FRHICommandListBase::CreateShaderResourceView
                ((FRHICommandListBase *)param_1,(FRHITexture *)local_978,(FInitializer *)pFVar32);
      bVar7 = (bool)(**(code **)(param_2->_padding_ + 0x80))(param_2);
      uVar6 = local_978._8_8_;
      uVar5 = local_978._0_8_;
      FWmfMediaHardwareVideoDecodingShader::GetCommonParameters(&local_368,bVar7);
      local_368.TextureY = (FRHIShaderResourceView *)uVar6;
      local_368.TextureUV = (FRHIShaderResourceView *)uVar5;
      local_368.BilinearClampedSamplerUV =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      local_368.BilinearClampedSamplerUVAlpha =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      pFVar26 = TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                          (&local_8d8,true);
      pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
      local_678.ShaderContent = (FShader *)local_8d8.ShaderContent;
      local_678.ShaderMap = local_8d8.ShaderMap;
      ValidateShaderParameters(&local_678,pFVar27,&local_368);
      ::SetShaderParameters
                ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar26,
                 (FShaderParameterBindings *)local_8d8.ShaderContent,pFVar27,&local_368);
      pFVar28 = TShaderRefBase<FHardwareVideoDecodingPS,FShaderMapPointerTable>::GetPixelShader
                          (&local_738,true);
      pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
      local_668.ShaderContent = local_768.ShaderContent;
      local_668.ShaderMap = local_768.ShaderMap;
      ValidateShaderParameters(&local_668,pFVar27,&local_368);
      ::SetShaderParameters
                ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar28,
                 &(local_768.ShaderContent)->Bindings,pFVar27,&local_368);
      if ((IRHIComputeContext *)local_978._0_8_ != (IRHIComputeContext *)0x0) {
        FRHIResource::Release((FRHIResource *)local_978._0_8_);
      }
      if ((FRHIShaderResourceView *)local_978._8_8_ != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_978._8_8_);
      }
    }
    else {
      iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
      if (((iVar13 == 2) ||
          (iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2), iVar13 == 0x14)) ||
         (iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2), iVar13 == 0x15)) {
        TShaderMapRef<FHardwareVideoDecodingVS>::TShaderMapRef<FHardwareVideoDecodingVS>
                  ((TShaderMapRef<FHardwareVideoDecodingVS> *)(local_998 + 0x10),pFVar22);
        pFVar23 = (FShaderType *)FHardwareVideoDecodingPassThroughPS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar22,&local_7a8,pFVar23,0);
        if ((FRHITexture *)local_7a8.ShaderContent == (FRHITexture *)0x0) {
          FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_5e8);
          ::FName::ToString((FName *)FVar24,&local_5c8);
          FHardwareVideoDecodingPassThroughPS::GetStaticType();
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        FHardwareVideoDecodingPassThroughPS::GetStaticType();
        local_948._32_8_ = local_7a8.ShaderContent;
        pIStack_920 = (IRHICommandContext *)local_7a8.ShaderMap;
        local_548.BoundShaderState.VertexShaderRHI =
             TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                       ((TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable> *)
                        (local_998 + 0x10),true);
        local_548.BoundShaderState.PixelShaderRHI =
             TShaderRefBase<FHardwareVideoDecodingPassThroughPS,FShaderMapPointerTable>::
             GetPixelShader((TShaderRefBase<FHardwareVideoDecodingPassThroughPS,FShaderMapPointerTable>
                             *)(local_948 + 0x20),true);
        SetGraphicsPipelineState((FRHICommandList *)param_1,&local_548,0,CheckApply,true);
        iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
        if (iVar13 == 0x14) {
          uVar8 = 5;
        }
        else {
          iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
          uVar8 = 2;
          if (iVar13 == 0x15) {
            uVar8 = 7;
          }
        }
        local_798._8_8_ = (FRHITexture *)0x0;
        local_798._0_8_ = 2;
        pFVar25 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                            ((FInitializer *)local_798,pFVar32);
        pFVar25->field_0x1 = uVar8;
        FRHICommandListBase::CreateShaderResourceView
                  ((FRHICommandListBase *)param_1,(FRHITexture *)local_948,(FInitializer *)pFVar32);
        bVar7 = (bool)(**(code **)(param_2->_padding_ + 0x80))(param_2);
        uVar5 = local_948._0_8_;
        FWmfMediaHardwareVideoDecodingShader::GetCommonParameters(&local_168,bVar7);
        local_168.TextureY = (FRHIShaderResourceView *)uVar5;
        local_168.BilinearClampedSamplerUV =
             TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
        pFVar26 = TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                            ((TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable> *)
                             (local_998 + 0x10),true);
        pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
        uVar5 = local_998._16_8_;
        local_5b8.ShaderMap = (FShaderMapBase *)CONCAT44(uStack_97c,uStack_980);
        local_5b8.ShaderContent = (FShader *)local_998._16_8_;
        ValidateShaderParameters(&local_5b8,pFVar27,&local_168);
        ::SetShaderParameters
                  ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar26,
                   (FShaderParameterBindings *)uVar5,pFVar27,&local_168);
        pFVar28 = TShaderRefBase<FHardwareVideoDecodingPassThroughPS,FShaderMapPointerTable>::
                  GetPixelShader((TShaderRefBase<FHardwareVideoDecodingPassThroughPS,FShaderMapPointerTable>
                                  *)(local_948 + 0x20),true);
        pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
        local_5a8.ShaderContent = local_7a8.ShaderContent;
        local_5a8.ShaderMap = local_7a8.ShaderMap;
        ValidateShaderParameters(&local_5a8,pFVar27,&local_168);
        ::SetShaderParameters
                  ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar28,
                   &(local_7a8.ShaderContent)->Bindings,pFVar27,&local_168);
        if ((FRHIShaderResourceView *)local_948._0_8_ != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_948._0_8_);
        }
      }
      else {
        iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
        if (iVar13 == 0x11) {
          TShaderMapRef<FHardwareVideoDecodingVS>::TShaderMapRef<FHardwareVideoDecodingVS>
                    ((TShaderMapRef<FHardwareVideoDecodingVS> *)&local_8c8,pFVar22);
          pFVar23 = (FShaderType *)FHardwareVideoDecodingY416PS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar22,&local_728,pFVar23,0);
          if ((FRHIVertexShader *)local_728.ShaderContent == (FRHIVertexShader *)0x0) {
            FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6a8);
            ::FName::ToString((FName *)FVar24,&local_658);
            FHardwareVideoDecodingY416PS::GetStaticType();
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Shader.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                               ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_658.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
          }
          FHardwareVideoDecodingY416PS::GetStaticType();
          local_708.ShaderContent = (FHardwareVideoDecodingY416PS *)local_728.ShaderContent;
          local_708.ShaderMap = local_728.ShaderMap;
          local_548.BoundShaderState.VertexShaderRHI =
               TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                         (&local_8c8,true);
          local_548.BoundShaderState.PixelShaderRHI =
               TShaderRefBase<FHardwareVideoDecodingY416PS,FShaderMapPointerTable>::GetPixelShader
                         (&local_708,true);
          SetGraphicsPipelineState((FRHICommandList *)param_1,&local_548,0,CheckApply,true);
          pFStack_710 = (FRHIVertexDeclaration *)0x0;
          local_718 = (FRHITexture *)&DAT_00000002;
          pFVar25 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                              ((FInitializer *)&local_718,pFVar32);
          pFVar25->field_0x1 = 0x13;
          FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHITexture *)local_968,(FInitializer *)pFVar32
                    );
          bVar7 = (bool)(**(code **)(param_2->_padding_ + 0x80))(param_2);
          uVar5 = local_968._0_8_;
          FWmfMediaHardwareVideoDecodingShader::GetCommonParameters(&local_2e8,bVar7);
          local_2e8.TextureY = (FRHIShaderResourceView *)uVar5;
          local_2e8.BilinearClampedSamplerUV =
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
          pFVar26 = TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                              (&local_8c8,true);
          pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
          local_648.ShaderContent = (FShader *)local_8c8.ShaderContent;
          local_648.ShaderMap = local_8c8.ShaderMap;
          ValidateShaderParameters(&local_648,pFVar27,&local_2e8);
          ::SetShaderParameters
                    ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar26,
                     (FShaderParameterBindings *)local_8c8.ShaderContent,pFVar27,&local_2e8);
          pFVar28 = TShaderRefBase<FHardwareVideoDecodingY416PS,FShaderMapPointerTable>::
                    GetPixelShader(&local_708,true);
          pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
          local_638.ShaderContent = local_728.ShaderContent;
          local_638.ShaderMap = local_728.ShaderMap;
          ValidateShaderParameters(&local_638,pFVar27,&local_2e8);
          ::SetShaderParameters
                    ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar28,
                     &(local_728.ShaderContent)->Bindings,pFVar27,&local_2e8);
          if ((FRHIShaderResourceView *)local_968._0_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_968._0_8_);
          }
        }
        else {
          iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
          if (iVar13 == 0x17) {
            TShaderMapRef<FHardwareVideoDecodingVS>::TShaderMapRef<FHardwareVideoDecodingVS>
                      ((TShaderMapRef<FHardwareVideoDecodingVS> *)&local_8b8,pFVar22);
            pFVar23 = (FShaderType *)FHardwareVideoDecodingYCoCgPS::GetStaticType();
            FGlobalShaderMap::GetShader(pFVar22,&local_6f8,pFVar23,0);
            if ((FRHIMeshShader *)local_6f8.ShaderContent == (FRHIMeshShader *)0x0) {
              FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6a0);
              ::FName::ToString((FName *)FVar24,&local_628);
              FHardwareVideoDecodingYCoCgPS::GetStaticType();
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Shader.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                 ,0xc0,L"Failed to find shader type %s in Platform %s");
              if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_628.Data.AllocatorInstance.Data);
              }
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
            }
            FHardwareVideoDecodingYCoCgPS::GetStaticType();
            local_7f8.ShaderContent = (FHardwareVideoDecodingYCoCgPS *)local_6f8.ShaderContent;
            local_7f8.ShaderMap = local_6f8.ShaderMap;
            local_548.BoundShaderState.VertexShaderRHI =
                 TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                           (&local_8b8,true);
            local_548.BoundShaderState.PixelShaderRHI =
                 TShaderRefBase<FHardwareVideoDecodingYCoCgPS,FShaderMapPointerTable>::
                 GetPixelShader(&local_7f8,true);
            SetGraphicsPipelineState((FRHICommandList *)param_1,&local_548,0,CheckApply,true);
            pFStack_6e0 = (FRHIWorkGraphShader *)0x0;
            local_6e8 = (FRHITexture *)&DAT_00000002;
            pFVar25 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                                ((FInitializer *)&local_6e8,pFVar32);
            pFVar25->field_0x1 = 7;
            FRHICommandListBase::CreateShaderResourceView
                      ((FRHICommandListBase *)param_1,(FRHITexture *)(local_968 + 8),
                       (FInitializer *)pFVar32);
            bVar7 = (bool)(**(code **)(param_2->_padding_ + 0x80))(param_2);
            uVar5 = local_968._8_8_;
            FWmfMediaHardwareVideoDecodingShader::GetCommonParameters(&local_268,bVar7);
            local_268.TextureY = (FRHIShaderResourceView *)uVar5;
            local_268.BilinearClampedSamplerUV =
                 TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                 ::StaticResource.StateRHI.Reference;
            pFVar26 = TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::
                      GetVertexShader(&local_8b8,true);
            pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
            local_618.ShaderContent = (FShader *)local_8b8.ShaderContent;
            local_618.ShaderMap = local_8b8.ShaderMap;
            ValidateShaderParameters(&local_618,pFVar27,&local_268);
            ::SetShaderParameters
                      ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar26,
                       (FShaderParameterBindings *)local_8b8.ShaderContent,pFVar27,&local_268);
            pFVar28 = TShaderRefBase<FHardwareVideoDecodingYCoCgPS,FShaderMapPointerTable>::
                      GetPixelShader(&local_7f8,true);
            pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
            local_608.ShaderContent = local_6f8.ShaderContent;
            local_608.ShaderMap = local_6f8.ShaderMap;
            ValidateShaderParameters(&local_608,pFVar27,&local_268);
            ::SetShaderParameters
                      ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar28,
                       &(local_6f8.ShaderContent)->Bindings,pFVar27,&local_268);
            if ((FRHIShaderResourceView *)local_968._8_8_ != (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release((FRHIResource *)local_968._8_8_);
            }
          }
          else {
            iVar13 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
            if (iVar13 == 0x18) {
              FWmfMediaHardwareVideoDecodingTextureSample::GetOrCreateDestinationAlphaTexture
                        (param_2,(FRHICommandListBase *)local_958);
              puVar31 = (undefined8 *)param_2->_padding_;
              pcVar4 = (code *)puVar31[1];
              piVar17 = (int *)(*pcVar4)(param_2,local_550);
              lVar16 = (*pcVar4)(param_2,local_558);
              iVar13 = *(int *)(lVar16 + 4);
              iVar1 = *piVar17;
              lVar16 = (*(code *)*puVar31)(param_2);
              piVar17 = (int *)(**(code **)(param_2->_padding_ + 8))(param_2,local_570);
              iVar2 = *piVar17;
              lVar29 = (**(code **)(param_2->_padding_ + 8))(param_2,local_578);
              uVar10 = *(uint *)(lVar29 + 4);
              puVar30 = (uint *)(**(code **)(param_2->_padding_ + 8))(param_2,local_580);
              local_908 = *puVar30;
              local_918.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              local_910 = (FRHIParallelRenderPassInfo *)0x0;
              local_904 = uVar10;
              FRHICommandListBase::UpdateTexture2D
                        ((FRHICommandListBase *)param_1,(FRHITexture *)local_958._0_8_,0,
                         (FUpdateTextureRegion2D *)&local_918,iVar2 * 2,
                         (uchar *)(lVar16 + iVar13 * iVar1));
              pFVar22 = local_9a0;
              TShaderMapRef<FHardwareVideoDecodingVS>::TShaderMapRef<FHardwareVideoDecodingVS>
                        ((TShaderMapRef<FHardwareVideoDecodingVS> *)&local_8a8,local_9a0);
              pFVar23 = (FShaderType *)FHardwareVideoDecodingYCoCgAlphaPS::GetStaticType();
              FGlobalShaderMap::GetShader(pFVar22,&local_7e8,pFVar23,0);
              if (local_7e8.ShaderContent == (FShader *)0x0) {
                FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_588);
                ::FName::ToString((FName *)FVar24,&local_5f8);
                FHardwareVideoDecodingYCoCgAlphaPS::GetStaticType();
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Shader.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                   ,0xc0,L"Failed to find shader type %s in Platform %s");
                if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
                }
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
              }
              FHardwareVideoDecodingYCoCgAlphaPS::GetStaticType();
              local_7b8.ShaderContent =
                   (FHardwareVideoDecodingYCoCgAlphaPS *)local_7e8.ShaderContent;
              local_7b8.ShaderMap = local_7e8.ShaderMap;
              local_548.BoundShaderState.VertexShaderRHI =
                   TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::GetVertexShader
                             (&local_8a8,true);
              local_548.BoundShaderState.PixelShaderRHI =
                   TShaderRefBase<FHardwareVideoDecodingYCoCgAlphaPS,FShaderMapPointerTable>::
                   GetPixelShader(&local_7b8,true);
              SetGraphicsPipelineState((FRHICommandList *)param_1,&local_548,0,CheckApply,true);
              uStack_7d0._0_4_ = 0;
              uStack_7d0._4_4_ = 0;
              local_7d8 = (FRHITexture *)&DAT_00000002;
              pFVar25 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                                  ((FInitializer *)&local_7d8,pFVar32);
              pFVar25->field_0x1 = 7;
              FRHICommandListBase::CreateShaderResourceView
                        ((FRHICommandListBase *)param_1,(FRHITexture *)local_998,
                         (FInitializer *)pFVar32);
              FStack_7c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              local_7c8 = (FRHIBreadcrumbAllocator *)&DAT_00000002;
              pFVar25 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                                  ((FInitializer *)&local_7c8,(FRHITexture *)local_958._0_8_);
              pFVar25->field_0x1 = 0x27;
              FRHICommandListBase::CreateShaderResourceView
                        ((FRHICommandListBase *)param_1,(FRHITexture *)(local_958 + 8),
                         (FInitializer *)local_958._0_8_);
              bVar7 = (bool)(**(code **)(param_2->_padding_ + 0x80))(param_2);
              uVar5 = local_998._0_8_;
              FWmfMediaHardwareVideoDecodingShader::GetCommonParameters(&local_e8,bVar7);
              local_e8.TextureY = (FRHIShaderResourceView *)uVar5;
              local_e8.BilinearClampedSamplerUV =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
              bVar7 = (bool)(**(code **)(param_2->_padding_ + 0x80))(param_2);
              uVar6 = local_958._8_8_;
              uVar5 = local_998._0_8_;
              FWmfMediaHardwareVideoDecodingShader::GetCommonParameters(&local_1e8,bVar7);
              local_1e8.TextureY = (FRHIShaderResourceView *)uVar5;
              local_1e8.TextureUV = (FRHIShaderResourceView *)uVar6;
              local_1e8.BilinearClampedSamplerUV =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
              local_1e8.BilinearClampedSamplerUVAlpha =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
              pFVar26 = TShaderRefBase<FHardwareVideoDecodingVS,FShaderMapPointerTable>::
                        GetVertexShader(&local_8a8,true);
              pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
              local_568.ShaderContent = (FShader *)local_8a8.ShaderContent;
              local_568.ShaderMap = local_8a8.ShaderMap;
              ValidateShaderParameters(&local_568,pFVar27,&local_e8);
              ::SetShaderParameters
                        ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar26,
                         (FShaderParameterBindings *)local_8a8.ShaderContent,pFVar27,&local_e8);
              pFVar28 = TShaderRefBase<FHardwareVideoDecodingYCoCgAlphaPS,FShaderMapPointerTable>::
                        GetPixelShader(&local_7b8,true);
              pFVar27 = FHardwareVideoDecodingShaderParams::FTypeInfo::GetStructMetadata();
              local_5d8.ShaderContent = local_7e8.ShaderContent;
              local_5d8.ShaderMap = local_7e8.ShaderMap;
              ValidateShaderParameters(&local_5d8,pFVar27,&local_1e8);
              ::SetShaderParameters
                        ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar28,
                         &(local_7e8.ShaderContent)->Bindings,pFVar27,&local_1e8);
              if ((FRHIShaderResourceView *)local_958._8_8_ != (FRHIShaderResourceView *)0x0) {
                FRHIResource::Release((FRHIResource *)local_958._8_8_);
              }
              if ((FRHIShaderResourceView *)local_998._0_8_ != (FRHIShaderResourceView *)0x0) {
                FRHIResource::Release((FRHIResource *)local_998._0_8_);
              }
              param_3.Reference = (FRHITexture *)local_948._8_8_;
              if ((FRHITexture *)local_958._0_8_ != (FRHITexture *)0x0) {
                FRHIResource::Release((FRHIResource *)local_958._0_8_);
                param_3.Reference = (FRHITexture *)local_948._8_8_;
              }
            }
          }
        }
      }
    }
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar31 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar31;
      *(undefined8 **)&param_1->field_0x30 = puVar31 + 1;
      puVar31[1] = 0;
      *puVar31 = &___7FRHICommandDrawPrimitive__6B_;
      *(undefined4 *)(puVar31 + 2) = 0;
      *(undefined4 *)((longlong)puVar31 + 0x14) = 2;
      *(undefined4 *)(puVar31 + 3) = 1;
    }
    else {
      pIVar18 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar18->_padding_ + 0x1e0))(pIVar18,0,2,1);
    }
    if (((param_1->field_0x29b & 2) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInsideRenderPass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x10c5,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    if (((param_1->field_0x29b & 4) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsInsideComputePass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x10c6,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar9 = param_1->field_0x29b;
    if ((bVar9 & 8) != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1);
      bVar9 = param_1->field_0x29b & 0xf7;
      param_1->field_0x29b = bVar9;
    }
    if ((GRHICommandList.bLatchedBypass == false) || ((bVar9 & 0x20) == 0)) {
      puVar31 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar31;
      *(undefined8 **)&param_1->field_0x30 = puVar31 + 1;
      puVar31[1] = 0;
      *puVar31 = &___7FRHICommandEndRenderPass__6B_;
    }
    else {
      pIVar18 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar18->_padding_ + 0x250))(pIVar18);
    }
    param_1->field_0x29b = param_1->field_0x29b & 0xfd;
    *(undefined2 *)&param_1->field_0x298 = 0;
    local_878._0_4_ = -NAN;
    local_878._4_2_ = 0xffff;
    local_878._8_8_ = (param_3.Reference)->_padding_;
    local_878[0x10] = RenderTargetable;
    local_878._20_4_ = 0x1000;
    local_878._24_4_ = 0x70;
    local_85c._0_1_ = 0;
    local_85c._12_1_ = '\0';
    local_948._32_8_ = local_878;
    pIStack_920 = (IRHICommandContext *)CONCAT44(pIStack_920._4_4_,1);
    local_598._8_8_ = pIStack_920;
    local_598._0_8_ = local_948._32_8_;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_598,None);
    if (pFVar32 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar32);
    }
    if (local_380.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_380.Reference);
    }
    if (local_808[0]._0_1_ != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_818);
    }
    if (pFVar3 != (FTaggedMemory *)0x0) {
      (*(code *)pFVar3->Next[1].Next)(pFVar3);
    }
    FMemScope::~FMemScope((FMemScope *)(local_948 + 0x10));
    FLLMScope::~FLLMScope((FLLMScope *)(local_9b8 + 0x10));
    if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
    }
    bVar7 = true;
  }
  return bVar7;
}

