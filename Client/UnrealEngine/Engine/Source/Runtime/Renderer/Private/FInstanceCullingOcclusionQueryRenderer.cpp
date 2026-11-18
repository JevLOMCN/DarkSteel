// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// operator() @ 144b9da90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FInstanceCullingOcclusionQueryRenderer::RenderDebug'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  RenderInstanceOcclusionCullingDebug
            (param_2,*(FViewInfo **)((longlong)this + 0x10),(TIntRect<int> *)((longlong)this + 0x18)
             ,*(FOcclusionInstanceCullingDebugParameters **)this,*(int *)((longlong)this + 8));
  return;
}

// operator() @ 144b9e4e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FInstanceCullingOcclusionQueryRenderer::Render'::__l38::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FInstanceCullingOcclusionQueryCS,FShaderMapPointerTable> *this_00;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  FInstanceCullingOcclusionQueryCS *pFVar5;
  code *pcVar6;
  bool bVar7;
  FShaderParametersMetadata *pFVar8;
  FRHIComputeShader *pFVar9;
  FRHIBatchedShaderUnbinds *pFVar10;
  undefined4 uVar11;
  undefined8 local_58;
  TIntVector3<int>_u_0 local_48;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 1) != '\0') {
    *(undefined4 *)(*(longlong *)this + 0x174) =
         *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x28);
    lVar2 = *(longlong *)((longlong)this + 8);
    local_58 = *(undefined8 *)(lVar2 + 0x30);
    plVar3 = *(longlong **)(lVar2 + 0x20);
    uVar11 = *(uint *)(lVar2 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      if ((*(int *)((longlong)plVar3 + 0xc) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBatchNumItems == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                             ,0xdc,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)(*(longlong *)this + 0x90) = *(undefined4 *)(*plVar3 + 0x10);
      if ((*(int *)((longlong)plVar3 + 0xc) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBatchNumItems == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                             ,0xe2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)(*(longlong *)this + 0x94) = *(undefined4 *)(*plVar3 + 0x20);
      iVar1 = *(int *)(*plVar3 + 0x10);
      if ((iVar1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_48._s_0,iVar1);
      local_58 = local_48._0_8_;
      uVar11 = local_48._s_0.Z;
    }
    pvVar4 = *(void **)this;
    this_00 = (TShaderRefBase<FInstanceCullingOcclusionQueryCS,FShaderMapPointerTable> *)
              ((longlong)this + 0x10);
    pFVar8 = FInstanceCullingOcclusionQueryCS::FParameters::FTypeInfo::GetStructMetadata();
    local_38._0_8_ = local_58;
    local_38._s_0.Z = uVar11;
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
    pFVar9 = TShaderRefBase<FInstanceCullingOcclusionQueryCS,FShaderMapPointerTable>::
             GetComputeShader(this_00);
    SetComputePipelineState(param_2,pFVar9);
    local_28.ShaderContent = (FShader *)this_00->ShaderContent;
    local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
    ValidateShaderParameters(&local_28,pFVar8,pvVar4);
    ::SetShaderParameters
              (param_2,pFVar9,(FShaderParameterBindings *)this_00->ShaderContent,pFVar8,pvVar4);
    FRHIComputeCommandList::DispatchComputeShader(param_2,(uint)local_58,local_58._4_4_,uVar11);
    pFVar9 = TShaderRefBase<FInstanceCullingOcclusionQueryCS,FShaderMapPointerTable>::
             GetComputeShader(this_00);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
      pFVar5 = this_00->ShaderContent;
      if ((*(short *)&pFVar5->field_0x54 != -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UnsetShaderUAVs(pFVar10,(FShaderParameterBindings *)pFVar5);
      FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar9,pFVar10);
    }
  }
  return;
}

// operator() @ 144ba0480

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FInstanceCullingOcclusionQueryRenderer::Render'::__l42::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  if (*(char *)(*(longlong *)((longlong)this + 8) + 1) != '\0') {
    RenderInstanceOcclusionCulling
              (param_2,*(FViewInfo **)((longlong)this + 0x18),
               *(FOcclusionInstanceCullingParameters **)this,*(bool *)((longlong)this + 0x10));
    return;
  }
  return;
}

// EndFrame @ 144bbbeb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingOcclusionQueryRenderer::EndFrame
          (FInstanceCullingOcclusionQueryRenderer *this,FRDGBuilder *param_1)

{
  int *piVar1;
  FRDGBuffer *pFVar2;
  
  pFVar2 = this->CurrentInstanceOcclusionQueryBuffer;
  if (pFVar2 != (FRDGBuffer *)0x0) {
    FRDGBuilder::QueueBufferExtraction(param_1,pFVar2,&this->InstanceOcclusionQueryBuffer);
    FRDGUserValidation::ValidateSetAccessFinal
              (&param_1->UserValidation,(FRDGViewableResource *)pFVar2,SRVMask);
    *(undefined4 *)&pFVar2->_padding_ = 0x70;
    this->CurrentInstanceOcclusionQueryBuffer = (FRDGBuffer *)0x0;
    this->AllocatedNumInstances = 0;
  }
  piVar1 = &(this->CurrentRenderedViewIDs).ArrayMax;
  (this->CurrentRenderedViewIDs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurrentRenderedViewIDs).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindOrAddViewSlot @ 144bc27b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __thiscall
FInstanceCullingOcclusionQueryRenderer::FindOrAddViewSlot
          (FInstanceCullingOcclusionQueryRenderer *this,FViewInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint local_res8 [8];
  
  local_res8[0] = FSceneView::GetViewKey((FSceneView *)param_1);
  if (((uint)(this->CurrentRenderedViewIDs).ArrayNum < 8) && (local_res8[0] != 0)) {
    uVar3 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                      (&this->CurrentRenderedViewIDs,local_res8);
    if (((int)uVar3 < 0) || (7 < uVar3)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < MaxViews",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                         ,799,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return 1 << ((byte)uVar3 & 0x1f);
  }
  return 0;
}

// IsCompatibleWithView @ 144bd23f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FInstanceCullingOcclusionQueryRenderer::IsCompatibleWithView
          (FInstanceCullingOcclusionQueryRenderer *this,FViewInfo *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  FSceneTextures *pFVar7;
  byte *pbVar8;
  byte bVar9;
  byte local_18 [16];
  
  local_18[0] = 0x39;
  local_18[1] = 0x1c;
  pbVar8 = local_18;
  do {
    bVar9 = *pbVar8;
    if ((GPixelFormats[bVar9].Capabilities & (TypedUAVStore|TypedUAVLoad)) ==
        (TypedUAVStore|TypedUAVLoad)) goto LAB_144bd244c;
    pbVar8 = pbVar8 + 1;
  } while (pbVar8 != local_18 + 2);
  bVar9 = 0;
LAB_144bd244c:
  EVar5 = FSceneView::GetShaderPlatform((FSceneView *)param_1);
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar5].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,700,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((((FGenericDataDrivenShaderPlatformInfo::Infos[EVar5].bSupportsVertexShaderSRVs != 0) &&
       (uVar6 = FSceneView::GetViewKey((FSceneView *)param_1), uVar6 != 0)) &&
      (pFVar7 = FViewInfo::GetSceneTextures(param_1), pFVar7->_padding_ != 0)) &&
     ((bVar3 = IsHZBValid(param_1,FurthestHZB,false),
      pTVar2 = CVarInstanceCullingOcclusionQueries.Ref, bVar3 && (bVar9 != 0)))) {
    bVar3 = IsInParallelRenderingThread();
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (pTVar2->ShadowedValue[1] != 0) {
      return true;
    }
  }
  return false;
}

// MarkInstancesVisible @ 144bd3930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingOcclusionQueryRenderer::MarkInstancesVisible
          (FInstanceCullingOcclusionQueryRenderer *this,FRDGBuilder *param_1,
          TArrayView<FGPUSceneInstanceRange_const_,int> *param_2)

{
  FGPUSceneInstanceRange *pFVar1;
  FRDGBufferUAV *pFVar2;
  FGPUSceneInstanceRange *pFVar3;
  undefined1 auStack_78 [32];
  FRDGBufferUAVDesc local_58;
  undefined8 local_48;
  FMemsetResourceParams local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((this->InstanceOcclusionQueryBuffer).Reference != (FRDGPooledBuffer *)0x0) {
    local_58._padding_._0_1_ = ::`anonymous_namespace'::GetPreferredVisibilityMaskFormat();
    local_58._padding_._1_2_ = 0;
    local_58.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&this->InstanceOcclusionQueryBuffer,None);
    pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_58,SkipBarrier);
    pFVar3 = param_2->DataPtr;
    pFVar1 = pFVar3 + param_2->ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      local_38.Count = pFVar3->NumInstanceSceneDataEntries;
      local_48._0_4_ = pFVar3->Primitive;
      local_48._4_4_ = pFVar3->InstanceSceneDataOffset;
      local_38.Value = 0xffffffff;
      local_38.DstOffset = local_48._4_4_;
      MemsetResource(param_1,pFVar2,&local_38);
    }
  }
  return;
}

// Render @ 144bd7410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

uint __thiscall
FInstanceCullingOcclusionQueryRenderer::Render
          (FInstanceCullingOcclusionQueryRenderer *this,FRDGBuilder *param_1,FGPUScene *param_2,
          FViewInfo *param_3)

{
  int *piVar1;
  FInstanceCullingOcclusionQueryDeferredContext *pFVar2;
  int iVar3;
  uint uVar4;
  FParallelMeshDrawCommandPass *pFVar5;
  FGlobalShaderMap *this_00;
  code *pcVar6;
  FShaderMapBase *pFVar7;
  bool bVar8;
  bool bVar9;
  EPixelFormat EVar10;
  ERDGPassFlags EVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  FSceneTextures *pFVar16;
  FRDGBufferUAV *pFVar17;
  FRDGBuffer *pFVar18;
  FRDGBuffer *pFVar19;
  FRDGBufferUAV *pFVar20;
  FParameters *pFVar21;
  FRDGBufferSRV *pFVar22;
  FShaderParametersMetadata *pFVar23;
  FHZBParameters *pFVar24;
  FShaderType *pFVar25;
  FName this_01;
  FRDGEventName *pFVar26;
  wchar_t *pwVar27;
  FRDGPass *this_02;
  FOcclusionInstanceCullingParameters *pFVar28;
  undefined ***pppuVar29;
  EUniformBufferBindingFlags EVar30;
  undefined1 auStackY_668 [32];
  FInstanceCullingContext *local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  ulonglong local_5d8;
  uint uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 *local_5b0;
  FGPUScene *local_5a8;
  FShader *local_598;
  FDepthStencilBinding local_588;
  FRDGBufferUAVDesc local_570;
  FRDGBufferUAVDesc local_560;
  FRDGBufferUAVDesc local_550;
  FRDGBufferUAVDesc local_540;
  FRDGBufferSRV *local_530;
  FRDGTexture *local_528;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_518;
  FRDGBufferSRVDesc local_508;
  FRDGBufferSRVDesc local_4e8;
  FRDGBufferSRVDesc local_4c8;
  FRDGBufferSRVDesc local_4a8;
  FRDGParameterStruct local_488;
  <lambda_2> local_470;
  FGPUSceneResourceParameters local_448;
  FRDGBufferDesc local_3f8;
  FRDGBufferDesc local_3e0;
  FRDGBufferDesc local_3c8;
  FRDGBufferDesc local_3b0;
  initializer_list<FRDGResource_*> local_398;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_388;
  FString local_378;
  undefined1 local_368 [8];
  FRDGEventName local_360;
  FRDGEventName local_348;
  FHZBParameters local_328;
  FHZBParameters local_258;
  code *local_188 [2];
  undefined **local_178;
  FInstanceCullingOcclusionQueryDeferredContext *local_170;
  undefined ***local_160;
  code *local_158 [2];
  undefined **local_148;
  FInstanceCullingOcclusionQueryDeferredContext *local_140;
  undefined ***local_130;
  code *local_128 [2];
  undefined **local_118;
  FInstanceCullingOcclusionQueryDeferredContext *local_110;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  FInstanceCullingOcclusionQueryDeferredContext *local_e0;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  FInstanceCullingOcclusionQueryDeferredContext *local_b0;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  FInstanceCullingOcclusionQueryDeferredContext *local_80;
  undefined ***local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_668;
  local_5a8 = param_2;
  bVar8 = IsCompatibleWithView(this,param_3);
  if ((bVar8) && (uVar12 = FindOrAddViewSlot(this,param_3), uVar12 != 0)) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId568,"FInstanceCullingOcclusionQueryRenderer::Render",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                 ,0x238);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId568);
    }
    iVar3 = (this->CurrentRenderedViewIDs).ArrayNum;
    lVar14 = 0x290;
    if ((param_2->InstanceSceneDataAllocator).bGrowOnly == false) {
      lVar14 = 0x28c;
    }
    uVar4 = *(uint *)((param_2->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData
                     + lVar14 + -0x48);
    pFVar5 = (param_3->ParallelMeshDrawCommandPasses).Elements[2];
    local_608 = (FInstanceCullingContext *)0x0;
    if ((pFVar5 != (FParallelMeshDrawCommandPass *)0x0) && (0 < GInstanceCullingUseLoadBalancer)) {
      local_608 = &(pFVar5->TaskContext).InstanceCullingContext;
    }
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x58,0x10);
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return uVar12;
      }
    }
    else {
      *(undefined2 *)(puVar15 + 1) = 0;
      puVar15[5] = 0;
      *puVar15 = &___7__TObject_UFInstanceCullingOcclusionQueryDeferredContext___FRDGAllocator__6B_;
      puVar15[6] = 0;
      puVar15[2] = param_3;
      *(uint *)(puVar15 + 3) = uVar4;
      *(undefined1 *)((longlong)puVar15 + 0x1c) = 2;
      puVar15[4] = local_608;
      puVar15[7] = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      *(int *)(puVar15 + 8) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      puVar15[9] = 0;
      puVar15[10] = 0;
    }
    local_5b0 = puVar15;
    if ((((undefined8 **)param_1->_padding_ <= &local_5b0) &&
        (&local_5b0 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    iVar13 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    pFVar2 = (FInstanceCullingOcclusionQueryDeferredContext *)(puVar15 + 1);
    *(int *)&param_1->_padding_ = iVar13 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar13 * 8) = local_5b0;
    pFVar16 = FViewInfo::GetSceneTextures(param_3);
    local_528 = (FRDGTexture *)pFVar16->_padding_;
    if (((local_528 == (FRDGTexture *)0x0) ||
        (bVar9 = IsHZBValid(param_3,FurthestHZB,false), !bVar9)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("DepthTexture && IsHZBValid(View, EHZBType::FurthestHZB)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                           ,0x24c,
                           L"Occlusion query instance culling pass requires scene depth texture and HZB. See FInstanceCullingOcclusionQueryRenderer::IsCompatibleWithView()"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    FGPUScene::GetShaderParameters(local_5a8,&local_448,param_1);
    EVar10 = ::`anonymous_namespace'::GetPreferredVisibilityMaskFormat();
    if (this->CurrentInstanceOcclusionQueryBuffer == (FRDGBuffer *)0x0) {
      local_3f8.Metadata = (FShaderParametersMetadata *)0x0;
      local_5d8 = CONCAT44(uVar4 + 0x3f + ((int)(uVar4 + 0x3f) >> 0x1f & 0x3fU),
                           GPixelFormats[EVar10].BlockBytes) & 0xffffffc0ffffffff;
      local_3f8._12_4_ = uStack_5cc;
      local_3f8.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
      local_3f8.BytesPerElement = (undefined4)local_5d8;
      local_3f8.NumElements = local_5d8._4_4_;
      local_570.Buffer =
           FRDGBuilder::CreateBuffer
                     (param_1,&local_3f8,
                      L"FInstanceCullingOcclusionQueryRenderer_VisibleInstanceMask",None);
      this->CurrentInstanceOcclusionQueryBuffer = local_570.Buffer;
      this->InstanceOcclusionQueryBufferFormat = EVar10;
      this->AllocatedNumInstances = uVar4;
      local_570._padding_._0_2_ = 0x30;
      local_570._padding_._2_1_ = 0;
      pFVar17 = FRDGBuilder::CreateUAV(param_1,&local_570,None);
      AddClearUAVPass(param_1,pFVar17,0xffffffff,Compute);
    }
    if ((uVar4 != this->AllocatedNumInstances) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("uint32(NumGPUSceneInstances) == AllocatedNumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                           ,0x269,
                           L"Number of instances in GPUScene is not expected change to during the frame"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    local_560.Buffer = this->CurrentInstanceOcclusionQueryBuffer;
    local_560._padding_._1_2_ = 0;
    local_560._padding_._0_1_ = EVar10;
    local_5a8 = (FGPUScene *)FRDGBuilder::CreateUAV(param_1,&local_560,None);
    local_3e0._12_4_ = uStack_5cc;
    local_3e0.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_3e0.BytesPerElement = 0x14;
    local_3e0.NumElements = 1;
    local_3e0.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar18 = FRDGBuilder::CreateBuffer
                        (param_1,&local_3e0,
                         L"FInstanceCullingOcclusionQueryRenderer_IndirectArgsBuffer",None);
    local_550._padding_._0_2_ = 0x1c;
    local_550._padding_._2_1_ = 0;
    local_550.Buffer = pFVar18;
    pFVar17 = FRDGBuilder::CreateUAV(param_1,&local_550,None);
    if (local_608 == (FInstanceCullingContext *)0x0) {
      local_178 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredNumInstanceIdData_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6AIXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_3c8._12_4_ = uStack_5fc;
      local_3c8.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
      local_188[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredNumInstanceIdData'::__l2::<lambda_1>,unsigned_int>
                     ::Call;
      local_3c8.BytesPerElement = 4;
      local_3c8.NumElements = 1;
      local_160 = (undefined ***)0x0;
      local_3c8.Metadata = (FShaderParametersMetadata *)0x0;
      local_170 = pFVar2;
      pFVar19 = FRDGBuilder::CreateBuffer
                          (param_1,&local_3c8,
                           L"FInstanceCullingOcclusionQueryRenderer_SetupInstanceIdBuffer",
                           (TFunction<unsigned_int___cdecl(void)> *)local_188,None);
      if (local_188[0] != (code *)0x0) {
        pppuVar29 = &local_178;
        if (local_160 != (undefined ***)0x0) {
          pppuVar29 = local_160;
        }
        (*(code *)(*pppuVar29)[2])();
      }
      local_100 = (undefined ***)0x0;
      local_118 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredInstanceIdDataSize_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6A_KXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_130 = (undefined ***)0x0;
      local_128[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdDataSize'::__l2::<lambda_1>,unsigned___int64>
                     ::Call;
      local_148 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredInstanceIdData_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6APEBXXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_158[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdData'::__l2::<lambda_1>,void_const_*>
                     ::Call;
      local_140 = pFVar2;
      local_110 = pFVar2;
      FRDGBuilder::QueueBufferUpload
                (param_1,pFVar19,(TFunction<void_const_*___cdecl(void)> *)local_158,
                 (TFunction<unsigned___int64___cdecl(void)> *)local_128);
      if (local_158[0] != (code *)0x0) {
        pppuVar29 = &local_148;
        if (local_130 != (undefined ***)0x0) {
          pppuVar29 = local_130;
        }
        (*(code *)(*pppuVar29)[2])();
      }
      if (local_128[0] != (code *)0x0) {
        pppuVar29 = &local_118;
        if (local_100 != (undefined ***)0x0) {
          pppuVar29 = local_100;
        }
        (*(code *)(*pppuVar29)[2])();
      }
    }
    else {
      pFVar19 = FSystemTextures::GetDefaultBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
    }
    local_4a8._padding_._0_1_ = 0x1c;
    local_4a8._padding_._4_4_ = 0;
    local_4a8._padding_ = 0;
    local_4a8._padding_._0_4_ = 0xffffffff;
    local_4a8.Buffer = pFVar19;
    local_598 = (FShader *)FRDGBuilder::CreateSRV(param_1,&local_4a8);
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredAlignedNumInstancesOutputCulling_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6AIXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_70 = (undefined ***)0x0;
    local_3b0._12_4_ = uStack_5fc;
    local_3b0.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredAlignedNumInstancesOutputCulling'::__l2::<lambda_1>,unsigned_int>
                  ::Call;
    local_3b0.BytesPerElement = 4;
    local_3b0.NumElements = 1;
    local_3b0.Metadata = (FShaderParametersMetadata *)0x0;
    local_80 = pFVar2;
    pFVar19 = FRDGBuilder::CreateBuffer
                        (param_1,&local_3b0,
                         L"FInstanceCullingOcclusionQueryRenderer_InstanceIdBuffer",
                         (TFunction<unsigned_int___cdecl(void)> *)local_98,None);
    if (local_98[0] != (code *)0x0) {
      pppuVar29 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar29 = local_70;
      }
      (*(code *)(*pppuVar29)[2])();
    }
    local_540._padding_._0_2_ = 0x1c;
    local_540._padding_._2_1_ = 0;
    local_540.Buffer = pFVar19;
    pFVar20 = FRDGBuilder::CreateUAV(param_1,&local_540,None);
    local_4c8._padding_._0_1_ = 0x1c;
    local_4c8._padding_._4_4_ = 0;
    local_4c8._padding_ = 0;
    local_4c8._padding_._0_4_ = 0xffffffff;
    local_4c8.Buffer = pFVar19;
    local_530 = FRDGBuilder::CreateSRV(param_1,&local_4c8);
    AddClearUAVPass(param_1,pFVar17,0,Compute);
    pFVar21 = FRDGAllocator::Alloc<FInstanceCullingOcclusionQueryCS::FParameters>
                        ((FRDGAllocator *)&param_1->_padding_);
    iVar13 = 0;
    if (local_608 != (FInstanceCullingContext *)0x0) {
      local_e8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::`2'::<lambda_1>,0,0>::
                  _vftable_;
      local_f8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_1>,TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>
                    ::Call;
      local_d0 = (undefined ***)0x0;
      local_e0 = pFVar2;
      local_4e8.Buffer =
           CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>
                     (param_1,L"InstanceCullingLoadBalancer.Batches",
                      (TFunction<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&___cdecl(void)>
                       *)local_f8);
      if (local_f8[0] != (code *)0x0) {
        pppuVar29 = &local_e8;
        if (local_d0 != (undefined ***)0x0) {
          pppuVar29 = local_d0;
        }
        (*(code *)(*pppuVar29)[2])();
      }
      local_4e8._padding_._4_4_ = 0;
      local_4e8._padding_._0_4_ = 0xffffffff;
      local_4e8._padding_ = 0;
      local_4e8._padding_._0_1_ = 0;
      if ((((local_4e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_4e8._padding_._0_1_ = 0x1c;
      }
      pFVar22 = FRDGBuilder::CreateSRV(param_1,&local_4e8);
      (pFVar21->LoadBalancerParameters).BatchBuffer = pFVar22;
      local_a0 = (undefined ***)0x0;
      local_b8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::`2'::<lambda_2>,0,0>::
                  _vftable_;
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_2>,TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>
                    ::Call;
      local_b0 = pFVar2;
      local_508.Buffer =
           CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>
                     (param_1,L"InstanceCullingLoadBalancer.Items",
                      (TFunction<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&___cdecl(void)>
                       *)local_c8);
      if (local_c8[0] != (code *)0x0) {
        pppuVar29 = &local_b8;
        if (local_a0 != (undefined ***)0x0) {
          pppuVar29 = local_a0;
        }
        (*(code *)(*pppuVar29)[2])();
      }
      local_508._padding_._4_4_ = 0;
      local_508._padding_._0_4_ = 0xffffffff;
      local_508._padding_ = 0;
      local_508._padding_._0_1_ = 0;
      if ((((local_508.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_508._padding_._0_1_ = 0x1c;
      }
      pFVar22 = FRDGBuilder::CreateSRV(param_1,&local_508);
      (pFVar21->LoadBalancerParameters).ItemBuffer = pFVar22;
      iVar13 = 1;
    }
    pFVar21->OutIndirectArgsBuffer = pFVar17;
    pFVar21->OutInstanceIdBuffer = pFVar20;
    pFVar21->RWVisibilityMask = (FRDGBufferUAV *)local_5a8;
    pFVar23 = FViewUniformShaderParameters::GetStructMetadata();
    EVar30 = Static;
    if (pFVar23->BindingFlags != StaticAndShader) {
      EVar30 = pFVar23->BindingFlags;
    }
    uStack_600 = CONCAT31(0x41,EVar30);
    *(longlong *)&pFVar21->View = param_3->_padding_;
    *(ulonglong *)&(pFVar21->View).field_0x8 = CONCAT44(uStack_5fc,uStack_600);
    pFVar24 = GetHZBParameters(&local_258,param_1,param_3,FurthestHZB);
    FHZBParameters::operator=(&pFVar21->HZBParameters,pFVar24);
    pFVar21->OcclusionSlop = 1.0;
    (pFVar21->GPUSceneParameters).CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
         local_448.CommonParameters.GPUSceneInstanceDataTileSizeLog2;
    (pFVar21->GPUSceneParameters).CommonParameters.GPUSceneInstanceDataTileSizeMask =
         local_448.CommonParameters.GPUSceneInstanceDataTileSizeMask;
    (pFVar21->GPUSceneParameters).CommonParameters.GPUSceneInstanceDataTileStride =
         local_448.CommonParameters.GPUSceneInstanceDataTileStride;
    (pFVar21->GPUSceneParameters).CommonParameters.GPUSceneFrameNumber =
         local_448.CommonParameters.GPUSceneFrameNumber;
    (pFVar21->GPUSceneParameters).CommonParameters.GPUSceneMaxAllocatedInstanceId =
         local_448.CommonParameters.GPUSceneMaxAllocatedInstanceId;
    (pFVar21->GPUSceneParameters).CommonParameters.GPUSceneMaxPersistentPrimitiveIndex =
         local_448.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex;
    (pFVar21->GPUSceneParameters).CommonParameters.GPUSceneNumLightmapDataItems =
         local_448.CommonParameters.GPUSceneNumLightmapDataItems;
    *(undefined4 *)&(pFVar21->GPUSceneParameters).CommonParameters.field_0x1c =
         local_448.CommonParameters._28_4_;
    (pFVar21->GPUSceneParameters).GPUSceneInstanceSceneData = local_448.GPUSceneInstanceSceneData;
    (pFVar21->GPUSceneParameters).GPUSceneInstancePayloadData =
         local_448.GPUSceneInstancePayloadData;
    (pFVar21->GPUSceneParameters).GPUScenePrimitiveSceneData = local_448.GPUScenePrimitiveSceneData;
    (pFVar21->GPUSceneParameters).GPUSceneLightmapData = local_448.GPUSceneLightmapData;
    pFVar21->InstanceIdBuffer = (FRDGBufferSRV *)local_598;
    pFVar21->ViewMask = uVar12;
    (pFVar21->GPUSceneParameters).GPUSceneLightData = local_448.GPUSceneLightData;
    *(undefined8 *)&(pFVar21->GPUSceneParameters).field_0x48 = local_448._72_8_;
    pFVar21->NumInstances = 0;
    this_00 = param_3->ShaderMap;
    pFVar25 = (FShaderType *)FInstanceCullingOcclusionQueryCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_518,pFVar25,(uint)(1 < iVar3) + iVar13 * 2);
    if (local_518.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_368);
      ::FName::ToString((FName *)this_01,&local_378);
      FInstanceCullingOcclusionQueryCS::GetStaticType();
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return uVar12;
      }
    }
    FInstanceCullingOcclusionQueryCS::GetStaticType();
    pFVar7 = local_518.ShaderMap;
    pFVar23 = FInstanceCullingOcclusionQueryCS::FParameters::FTypeInfo::GetStructMetadata();
    local_388.ShaderContent = local_518.ShaderContent;
    local_388.ShaderMap = local_518.ShaderMap;
    ValidateShaderParameters(&local_388,pFVar23,pFVar21);
    local_598 = local_518.ShaderContent;
    local_398._First = (FRDGResource **)0x0;
    local_398._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_518.ShaderContent)->Bindings,pFVar23,pFVar21,&local_398);
    pFVar26 = FRDGEventName::FRDGEventName
                        (&local_360,1,L"InstanceCullingOcclusionQueryRenderer_Setup");
    pFVar23 = FInstanceCullingOcclusionQueryCS::FParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar21,pFVar23,pFVar26,Compute);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
    EVar11 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Compute);
    this_02 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a8,8);
    local_488.Contents = (uchar *)pFVar21;
    if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    local_488.Layout.Reference = (pFVar23->Layout).Reference;
    if (local_488.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_488.Layout.Reference);
    }
    local_488.Metadata = pFVar23;
    FRDGPass::FRDGPass(this_02,pFVar26,&local_488,EVar11,Async);
    this_02->_padding_ =
         (longlong)
         &TRDGLambdaPass<FInstanceCullingOcclusionQueryCS::FParameters,`FInstanceCullingOcclusionQueryRenderer::Render'::`38'::<lambda_1>_>
          ::_vftable_;
    this_02[1]._padding_ = (longlong)pFVar21;
    this_02[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar2;
    *(FShader **)&this_02[1].FullPathIfDebug.Data.ArrayNum = local_598;
    this_02[1].Name.EventFormat = (wchar_t *)pFVar7;
    this_02[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)pFVar21;
    FRDGBuilder::ClobberPassOutputs(param_1,this_02);
    iVar13 = (param_1->Passes).Array.ArrayNum;
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar13 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar13] = this_02;
    (this_02->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(param_1,this_02);
    if (local_360.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_360.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar28 = FRDGAllocator::Alloc<FOcclusionInstanceCullingParameters>
                        ((FRDGAllocator *)&param_1->_padding_);
    *(FRDGBuffer **)&(pFVar28->VS).IndirectDrawArgsBuffer = pFVar18;
    *(ulonglong *)&(pFVar28->VS).IndirectDrawArgsBuffer.field_0x8 = CONCAT44(uStack_5cc,4);
    pFVar23 = FViewUniformShaderParameters::GetStructMetadata();
    EVar30 = Static;
    if (pFVar23->BindingFlags != StaticAndShader) {
      EVar30 = pFVar23->BindingFlags;
    }
    uStack_5d0 = (uint)EVar30;
    *(longlong *)&(pFVar28->VS).View = param_3->_padding_;
    *(ulonglong *)&(pFVar28->VS).View.field_0x8 = CONCAT44(uStack_5cc,uStack_5d0);
    pFVar24 = GetHZBParameters(&local_328,param_1,param_3,FurthestHZB);
    FHZBParameters::operator=(&(pFVar28->VS).HZBParameters,pFVar24);
    (pFVar28->VS).OcclusionSlop = 1.0;
    (pFVar28->VS).GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
         local_448.CommonParameters.GPUSceneInstanceDataTileSizeLog2;
    (pFVar28->VS).GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileSizeMask =
         local_448.CommonParameters.GPUSceneInstanceDataTileSizeMask;
    (pFVar28->VS).GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileStride =
         local_448.CommonParameters.GPUSceneInstanceDataTileStride;
    (pFVar28->VS).GPUSceneParameters.CommonParameters.GPUSceneFrameNumber =
         local_448.CommonParameters.GPUSceneFrameNumber;
    local_588.ResolveTexture = (FRDGTexture *)0x0;
    (pFVar28->VS).GPUSceneParameters.CommonParameters.GPUSceneMaxAllocatedInstanceId =
         local_448.CommonParameters.GPUSceneMaxAllocatedInstanceId;
    (pFVar28->VS).GPUSceneParameters.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex =
         local_448.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex;
    (pFVar28->VS).GPUSceneParameters.CommonParameters.GPUSceneNumLightmapDataItems =
         local_448.CommonParameters.GPUSceneNumLightmapDataItems;
    *(undefined4 *)&(pFVar28->VS).GPUSceneParameters.CommonParameters.field_0x1c =
         local_448.CommonParameters._28_4_;
    local_588.DepthLoadAction = ELoad;
    local_588.StencilLoadAction = ENoAction;
    (pFVar28->VS).GPUSceneParameters.GPUSceneInstanceSceneData = local_448.GPUSceneInstanceSceneData
    ;
    (pFVar28->VS).GPUSceneParameters.GPUSceneInstancePayloadData =
         local_448.GPUSceneInstancePayloadData;
    local_588.DepthStencilAccess.Value = DepthRead;
    (pFVar28->VS).GPUSceneParameters.GPUScenePrimitiveSceneData =
         local_448.GPUScenePrimitiveSceneData;
    (pFVar28->VS).GPUSceneParameters.GPUSceneLightmapData = local_448.GPUSceneLightmapData;
    (pFVar28->VS).InstanceIdBuffer = local_530;
    (pFVar28->VS).RWVisibilityMask = (FRDGBufferUAV *)local_5a8;
    (pFVar28->PS).RWVisibilityMask = (FRDGBufferUAV *)local_5a8;
    local_588.Texture = local_528;
    (pFVar28->VS).GPUSceneParameters.GPUSceneLightData = local_448.GPUSceneLightData;
    *(undefined8 *)&(pFVar28->VS).GPUSceneParameters.field_0x48 = local_448._72_8_;
    (pFVar28->VS).ViewMask = uVar12;
    bVar9 = FDepthStencilBinding::Validate(&local_588);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x289,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    (pFVar28->RenderTargets).DepthStencil.Texture = local_588.Texture;
    (pFVar28->RenderTargets).DepthStencil.ResolveTexture = local_588.ResolveTexture;
    (pFVar28->RenderTargets).DepthStencil.DepthLoadAction = local_588.DepthLoadAction;
    (pFVar28->RenderTargets).DepthStencil.StencilLoadAction = local_588.StencilLoadAction;
    *(undefined2 *)&(pFVar28->RenderTargets).DepthStencil.field_0x12 = local_588._18_2_;
    (pFVar28->RenderTargets).DepthStencil.DepthStencilAccess =
         (FExclusiveDepthStencil)local_588.DepthStencilAccess.Value;
    local_470.PassParameters = pFVar28;
    local_470.DeferredContext = pFVar2;
    local_470.bMultiView = 1 < iVar3;
    local_470.View = param_3;
    pFVar26 = FRDGEventName::FRDGEventName
                        (&local_348,1,L"InstanceCullingOcclusionQueryRenderer_Draw");
    FRDGBuilder::
    AddPass<FOcclusionInstanceCullingParameters,_FInstanceCullingOcclusionQueryRenderer::Render_::__l42::<lambda_2>_>
              (param_1,pFVar26,pFVar28,NeverCull|Raster,&local_470);
    if (local_348.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_348.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}

// RenderDebug @ 144bd87d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingOcclusionQueryRenderer::RenderDebug
          (FInstanceCullingOcclusionQueryRenderer *this,FRDGBuilder *param_1,FGPUScene *param_2,
          FViewInfo *param_3,TIntRect<int> *param_4,FRDGTexture *param_5,FRDGTexture *param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGBuffer *pFVar5;
  FSceneTextures *pFVar6;
  longlong lVar7;
  FOcclusionInstanceCullingDebugParameters *pFVar8;
  FShaderParametersMetadata *pFVar9;
  FRDGBufferSRV *pFVar10;
  FHZBParameters *pFVar11;
  FRDGEventName *pFVar12;
  EUniformBufferBindingFlags EVar13;
  FRenderTargetBinding local_1e8;
  FDepthStencilBinding local_1c8;
  FRDGBufferSRVDesc local_1b0;
  <lambda_1> local_190;
  FRDGEventName local_168;
  FGPUSceneResourceParameters local_148;
  FHZBParameters local_f8;
  
  bVar3 = IsCompatibleWithView(this,param_3);
  if (!bVar3) {
    return;
  }
  if ((this->InstanceOcclusionQueryBuffer).Reference == (FRDGPooledBuffer *)0x0) {
    return;
  }
  if ((param_5 == (FRDGTexture *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneColor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                         ,0x39a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = FindOrAddViewSlot(this,param_3);
  pFVar5 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->InstanceOcclusionQueryBuffer,None);
  pFVar6 = FViewInfo::GetSceneTextures(param_3);
  if (((pFVar6->_padding_ == 0) || (bVar3 = IsHZBValid(param_3,FurthestHZB,false), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DepthTexture && IsHZBValid(View, EHZBType::FurthestHZB)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                         ,0x3a3,
                         L"Occlusion query instance culling requires scene depth texture and HZB. See FInstanceCullingOcclusionQueryRenderer::IsCompatibleWithView()"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar7 = 0x290;
  if ((param_2->InstanceSceneDataAllocator).bGrowOnly == false) {
    lVar7 = 0x28c;
  }
  iVar1 = *(int *)((param_2->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                  lVar7 + -0x48);
  FGPUScene::GetShaderParameters(param_2,&local_148,param_1);
  pFVar8 = FRDGAllocator::Alloc<FOcclusionInstanceCullingDebugParameters>
                     ((FRDGAllocator *)&param_1->_padding_);
  (pFVar8->VS).OcclusionSlop = 1.0;
  pFVar9 = FViewUniformShaderParameters::GetStructMetadata();
  local_1b0._padding_._0_4_ = 0xffffffff;
  EVar13 = Static;
  if (pFVar9->BindingFlags != StaticAndShader) {
    EVar13 = pFVar9->BindingFlags;
  }
  local_1e8.Texture = (FRDGTexture *)param_3->_padding_;
  local_1e8.ResolveTexture = (FRDGTexture *)CONCAT71(local_1e8.ResolveTexture._1_7_,EVar13);
  *(FRDGTexture **)&(pFVar8->VS).View = local_1e8.Texture;
  *(FRDGTexture **)&(pFVar8->VS).View.field_0x8 = local_1e8.ResolveTexture;
  (pFVar8->VS).GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
       local_148.CommonParameters.GPUSceneInstanceDataTileSizeLog2;
  (pFVar8->VS).GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileSizeMask =
       local_148.CommonParameters.GPUSceneInstanceDataTileSizeMask;
  (pFVar8->VS).GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileStride =
       local_148.CommonParameters.GPUSceneInstanceDataTileStride;
  (pFVar8->VS).GPUSceneParameters.CommonParameters.GPUSceneFrameNumber =
       local_148.CommonParameters.GPUSceneFrameNumber;
  (pFVar8->VS).GPUSceneParameters.CommonParameters.GPUSceneMaxAllocatedInstanceId =
       local_148.CommonParameters.GPUSceneMaxAllocatedInstanceId;
  (pFVar8->VS).GPUSceneParameters.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex =
       local_148.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex;
  (pFVar8->VS).GPUSceneParameters.CommonParameters.GPUSceneNumLightmapDataItems =
       local_148.CommonParameters.GPUSceneNumLightmapDataItems;
  *(undefined4 *)&(pFVar8->VS).GPUSceneParameters.CommonParameters.field_0x1c =
       local_148.CommonParameters._28_4_;
  (pFVar8->VS).GPUSceneParameters.GPUSceneInstanceSceneData = local_148.GPUSceneInstanceSceneData;
  (pFVar8->VS).GPUSceneParameters.GPUSceneInstancePayloadData =
       local_148.GPUSceneInstancePayloadData;
  (pFVar8->VS).GPUSceneParameters.GPUScenePrimitiveSceneData = local_148.GPUScenePrimitiveSceneData;
  (pFVar8->VS).GPUSceneParameters.GPUSceneLightmapData = local_148.GPUSceneLightmapData;
  (pFVar8->VS).GPUSceneParameters.GPUSceneLightData = local_148.GPUSceneLightData;
  *(undefined8 *)&(pFVar8->VS).GPUSceneParameters.field_0x48 = local_148._72_8_;
  local_1b0._padding_._0_1_ = this->InstanceOcclusionQueryBufferFormat;
  local_1b0._padding_._4_4_ = 0;
  local_1b0._padding_ = 0;
  local_1b0.Buffer = pFVar5;
  pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_1b0);
  (pFVar8->VS).InstanceOcclusionQueryBuffer = pFVar10;
  pFVar11 = GetHZBParameters(&local_f8,param_1,param_3,FurthestHZB);
  FHZBParameters::operator=(&(pFVar8->VS).HZBParameters,pFVar11);
  (pFVar8->VS).ViewMask = uVar4;
  local_1e8.Texture = param_5;
  local_1e8.ResolveTexture = (FRDGTexture *)0x0;
  local_1e8.LoadAction = ELoad;
  local_1e8.MipIndex = '\0';
  local_1e8.ArraySlice = -1;
  bVar3 = FRenderTargetBinding::Validate(&local_1e8);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pFVar8->RenderTargets).Output.Elements[0].Texture = local_1e8.Texture;
  (pFVar8->RenderTargets).Output.Elements[0].ResolveTexture = local_1e8.ResolveTexture;
  (pFVar8->RenderTargets).Output.Elements[0].LoadAction = local_1e8.LoadAction;
  (pFVar8->RenderTargets).Output.Elements[0].MipIndex = local_1e8.MipIndex;
  (pFVar8->RenderTargets).Output.Elements[0].ArraySlice = local_1e8.ArraySlice;
  *(undefined4 *)&(pFVar8->RenderTargets).Output.Elements[0].field_0x14 = local_1e8._20_4_;
  if (param_6 != (FRDGTexture *)0x0) {
    local_1c8.Texture = param_6;
    local_1c8.ResolveTexture = (FRDGTexture *)0x0;
    local_1c8.DepthLoadAction = ELoad;
    local_1c8.StencilLoadAction = ENoAction;
    local_1c8.DepthStencilAccess.Value = DepthWrite;
    bVar3 = FDepthStencilBinding::Validate(&local_1c8);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x289,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pFVar8->RenderTargets).DepthStencil.Texture = local_1c8.Texture;
    (pFVar8->RenderTargets).DepthStencil.ResolveTexture = local_1c8.ResolveTexture;
    (pFVar8->RenderTargets).DepthStencil.DepthLoadAction = local_1c8.DepthLoadAction;
    (pFVar8->RenderTargets).DepthStencil.StencilLoadAction = local_1c8.StencilLoadAction;
    *(undefined2 *)&(pFVar8->RenderTargets).DepthStencil.field_0x12 = local_1c8._18_2_;
    (pFVar8->RenderTargets).DepthStencil.DepthStencilAccess =
         (FExclusiveDepthStencil)local_1c8.DepthStencilAccess.Value;
  }
  local_190.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(param_4->field0_0x0)._s_0.Min.field0_0x0;
  local_190.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(param_4->field0_0x0)._s_0.Max.field0_0x0;
  local_190.PassParameters = pFVar8;
  local_190.NumInstances = iVar1;
  local_190.View = param_3;
  pFVar12 = FRDGEventName::FRDGEventName(&local_168,1,L"InstanceCullingOcclusionQueryRenderer_Draw")
  ;
  FRDGBuilder::
  AddPass<FOcclusionInstanceCullingDebugParameters,_FInstanceCullingOcclusionQueryRenderer::RenderDebug_::__l2::<lambda_1>_>
            (param_1,pFVar12,pFVar8,NeverCull|Raster,&local_190);
  if (local_168.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

