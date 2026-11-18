// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// OnNewPipelineStateCreated @ 145cb42d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
FPrecacheGraphicsPipelineCache::OnNewPipelineStateCreated
          (FGraphicsPipelineStateInitializer *param_1,FGraphicsPipelineState *param_2,
          FString *param_3,bool param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  FBaseGraphTask *pFVar5;
  undefined1 auStackY_168 [32];
  FPSOCompilationDebugData local_128;
  FGraphicsPipelineStateInitializer local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  ValidateGraphicsPipelineStateInitializer(param_1);
  pFVar5 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)param_2);
  if ((pFVar5 != (FBaseGraphTask *)0x0) != param_4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(NewGraphicsPipelineState->GetCompletionEvent() != nullptr) == bDoAsyncCompile"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x117b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_108.BoundShaderState.VertexDeclarationRHI = (param_1->BoundShaderState).VertexDeclarationRHI
  ;
  local_108.BoundShaderState.VertexShaderRHI = (param_1->BoundShaderState).VertexShaderRHI;
  local_128.PSOCompilationEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.BoundShaderState.PixelShaderRHI = (param_1->BoundShaderState).PixelShaderRHI;
  local_108.BoundShaderState.MeshShaderRHI = (param_1->BoundShaderState).MeshShaderRHI;
  local_128.PSOCompilationEventName.Data.ArrayNum = 0;
  local_128.PSOCompilationEventName.Data.ArrayMax = 0;
  local_108.BoundShaderState.AmplificationShaderRHI =
       (param_1->BoundShaderState).AmplificationShaderRHI;
  local_108.BoundShaderState.GeometryShaderRHI = (param_1->BoundShaderState).GeometryShaderRHI;
  local_108.BoundShaderState.WorkGraphMeshShaderRHI =
       (param_1->BoundShaderState).WorkGraphMeshShaderRHI;
  local_108.BlendState = param_1->BlendState;
  local_108.RasterizerState = param_1->RasterizerState;
  local_108.DepthStencilState = param_1->DepthStencilState;
  local_108.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0];
  local_108.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1];
  local_108.PrimitiveType = param_1->PrimitiveType;
  local_108.RenderTargetsEnabled = param_1->RenderTargetsEnabled;
  local_108.RenderTargetFormats.Elements = *&(param_1->RenderTargetFormats).Elements;
  local_108.RenderTargetFlags.Elements[0] = (param_1->RenderTargetFlags).Elements[0];
  local_108.RenderTargetFlags.Elements[1] = (param_1->RenderTargetFlags).Elements[1];
  local_108.RenderTargetFlags.Elements[2] = (param_1->RenderTargetFlags).Elements[2];
  local_108.RenderTargetFlags.Elements[3] = (param_1->RenderTargetFlags).Elements[3];
  local_108.RenderTargetFlags.Elements[4] = (param_1->RenderTargetFlags).Elements[4];
  local_108.RenderTargetFlags.Elements[5] = (param_1->RenderTargetFlags).Elements[5];
  local_108.RenderTargetFlags.Elements[6] = (param_1->RenderTargetFlags).Elements[6];
  local_108.RenderTargetFlags.Elements[7] = (param_1->RenderTargetFlags).Elements[7];
  local_108.DepthStencilTargetFormat = param_1->DepthStencilTargetFormat;
  local_108._177_7_ = *(undefined7 *)&param_1->field_0xb1;
  local_108.DepthStencilTargetFlag = param_1->DepthStencilTargetFlag;
  local_108.DepthTargetLoadAction = param_1->DepthTargetLoadAction;
  local_108.DepthTargetStoreAction = param_1->DepthTargetStoreAction;
  local_108.StencilTargetLoadAction = param_1->StencilTargetLoadAction;
  local_108.StencilTargetStoreAction = param_1->StencilTargetStoreAction;
  local_108.DepthStencilAccess.Value = (param_1->DepthStencilAccess).Value;
  local_108.NumSamples = param_1->NumSamples;
  local_108.SubpassHint = param_1->SubpassHint;
  local_108.SubpassIndex = param_1->SubpassIndex;
  local_108.ConservativeRasterization = param_1->ConservativeRasterization;
  local_108.bDepthBounds = param_1->bDepthBounds;
  local_108.MultiViewCount = param_1->MultiViewCount;
  local_108.bHasFragmentDensityAttachment = param_1->bHasFragmentDensityAttachment;
  uVar3._0_1_ = param_1->bAllowVariableRateShading;
  uVar3._1_1_ = param_1->ShadingRate;
  uVar3._2_2_ = param_1->field25_0xd2;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xd4;
  local_108.StatePrecachePSOHash = param_1->StatePrecachePSOHash;
  local_108._208_8_ = uVar3 | 0x8000000;
  local_128.BreadcrumbRoot = (FRHIBreadcrumbNode *)0x0;
  local_128.BreadcrumbNode = (FRHIBreadcrumbNode *)0x0;
  if (&local_128 != (FPSOCompilationDebugData *)param_3) {
    uVar1 = (param_3->Data).ArrayNum;
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_128.PSOCompilationEventName.Data.ArrayMax = 0;
    local_128.PSOCompilationEventName.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_128,uVar1,
                 &local_128.PSOCompilationEventName.Data.ArrayMax);
      memcpy(local_128.PSOCompilationEventName.Data.AllocatorInstance.Data,_Src,
             (longlong)(int)uVar1 * 2);
    }
  }
  InternalCreateGraphicsPipelineState(&local_108,Active,false,param_4,param_2,&local_128,false);
  if (local_128.PSOCompilationEventName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.PSOCompilationEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// PrecacheGraphicsPipelineState @ 145cb4c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPSOPrecacheRequestResult * __thiscall
FPrecacheGraphicsPipelineCache::PrecacheGraphicsPipelineState
          (FPrecacheGraphicsPipelineCache *this,FPSOPrecacheRequestResult *__return_storage_ptr__,
          FGraphicsPipelineStateInitializer *param_1)

{
  FLLMScope local_res20 [2];
  FMemScope local_28;
  FString local_20;
  
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    FLLMScope::FLLMScope(local_res20,PSO,false,None,Default,true);
    FMemScope::FMemScope(&local_28,PSO,true);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        bDoAsyncCompile = FApp::ShouldUseThreadingForPerformance();
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::TryAddNewState((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                      *)this,__return_storage_ptr__,param_1,&local_20,bDoAsyncCompile);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(local_res20);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__.Type = 0;
  __return_storage_ptr__.RequestID = 0;
  (__return_storage_ptr__->AsyncCompileEvent).Reference = (FBaseGraphTask *)0x0;
  return __return_storage_ptr__;
}

