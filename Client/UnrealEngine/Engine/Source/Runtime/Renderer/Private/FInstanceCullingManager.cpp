// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FInstanceCullingManager @ 144b97940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FInstanceCullingManager * __thiscall
FInstanceCullingManager::FInstanceCullingManager
          (FInstanceCullingManager *this,FRDGBuilder *param_1,FScene *param_2,
          FSceneUniformBuffer *param_3,FRendererViewDataManager *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<FViewInfo_*,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FInstanceCullingGlobalUniforms *pFVar7;
  FRDGBufferSRV *pFVar8;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar9;
  FInstanceCullingManager *pFVar10;
  FScriptContainerElement *pFVar11;
  FRDGBufferSRVDesc local_58;
  FRDGBufferSRVDesc local_38;
  
  this->Scene = param_2;
  (this->ViewPrevHZBs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUScene = &param_2->GPUScene;
  (this->ViewPrevHZBs).ArrayNum = 0;
  (this->ViewPrevHZBs).ArrayMax = 0;
  this->ViewDataManager = param_4;
  this->InstanceOcclusionQueryBuffer = (FRDGBuffer *)0x0;
  this->InstanceOcclusionQueryBufferFormat = PF_Unknown;
  this->DeferredContext = (FInstanceCullingDeferredContext *)0x0;
  this->SceneUniforms = param_3;
  this->bIsEnabled = (param_2->GPUScene).bIsEnabled;
  pFVar7 = FRDGBuilder::AllocParameters<FInstanceCullingGlobalUniforms>(param_1);
  local_38.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_58._padding_._4_4_ = 0;
  local_58._padding_._0_4_ = 0xffffffff;
  local_58._padding_ = 0;
  local_58._padding_._0_1_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_58._padding_._0_1_ = 0x1c;
  }
  local_58.Buffer = local_38.Buffer;
  pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_58);
  pFVar7->InstanceIdsBuffer = pFVar8;
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_1_ = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_38);
  pFVar7->PageInfoBuffer = pFVar8;
  pFVar7->BufferCapacity = 0;
  pTVar9 = FRDGBuilder::CreateUniformBuffer<FInstanceCullingGlobalUniforms>(param_1,pFVar7);
  this->DummyUniformBuffer = pTVar9;
  pTVar3 = this->ViewDataManager->SceneRendererPrimaryViews;
  pFVar11 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<FViewInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if (pFVar11 == pFVar1) break;
    lVar4 = *(longlong *)pFVar11;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x24c8) + 0x8b8) != 0) {
      bVar6 = IsInRenderingThread();
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingManager.cpp"
                           ,0x22,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FInstanceCullingManager *)(*pcVar5)();
          return pFVar10;
        }
      }
      TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TRefCountPtr<IPooledRenderTarget>_const_&>
                (&this->ViewPrevHZBs,
                 (TRefCountPtr<IPooledRenderTarget> *)(*(longlong *)(lVar4 + 0x24c8) + 0x8b8));
    }
    pFVar11 = pFVar11 + 8;
  }
  return this;
}

// ~FInstanceCullingManager @ 144b992c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FInstanceCullingManager::~FInstanceCullingManager(FInstanceCullingManager *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            ((TRefCountPtr<IPooledRenderTarget> *)(this->ViewPrevHZBs).AllocatorInstance.Data,
             (this->ViewPrevHZBs).ArrayNum);
  pFVar1 = (this->ViewPrevHZBs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AllocateViews @ 144baa850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FInstanceCullingManager::AllocateViews(FInstanceCullingManager *this,int param_1)

{
  FRendererViewDataManager::AllocateViews(this->ViewDataManager,param_1);
  return;
}

// AllowBatchedBuildRenderingCommands @ 144baa860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FInstanceCullingManager::AllowBatchedBuildRenderingCommands(FGPUScene *param_1)

{
  bool bVar1;
  
  if ((param_1->bIsEnabled != false) && (GAllowBatchedBuildRenderingCommands != 0)) {
    bVar1 = FRDGBuilder::IsImmediateMode();
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// BeginDeferredCulling @ 144baa900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingManager::BeginDeferredCulling(FInstanceCullingManager *this,FRDGBuilder *param_1)

{
  bool bVar1;
  longlong lVar2;
  FInstanceCullingDeferredContext *pFVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId102,"FInstanceCullingManager::BeginDeferredCulling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingManager.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId102);
  }
  FScene::AddGPUSkinCacheAsyncComputeWait(this->Scene,param_1);
  FRendererViewDataManager::FlushRegisteredViews(this->ViewDataManager,param_1);
  if (((this->GPUScene->bIsEnabled != false) && (GAllowBatchedBuildRenderingCommands != 0)) &&
     (bVar1 = FRDGBuilder::IsImmediateMode(), !bVar1)) {
    lVar2 = 0x290;
    if ((this->GPUScene->InstanceSceneDataAllocator).bGrowOnly == false) {
      lVar2 = 0x28c;
    }
    if ((*(int *)((this->GPUScene->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.
                  InlineData + lVar2 + -0x48) != 0) &&
       (this->ViewDataManager->NumRegisteredViews != (atomic<int>)0x0)) {
      pFVar3 = FInstanceCullingContext::CreateDeferredContext(param_1,this->GPUScene,this);
      this->DeferredContext = pFVar3;
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetBinIndex @ 144bc3890

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FInstanceCullingManager::GetBinIndex
          (FInstanceCullingManager *this,EBatchProcessingMode param_1,
          TRefCountPtr<IPooledRenderTarget> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  if (param_1 == UnCulled) {
    return 0;
  }
  if (param_2->Reference == (IPooledRenderTarget *)0x0) {
    return 1;
  }
  pFVar1 = (this->ViewPrevHZBs).AllocatorInstance.Data;
  pFVar4 = pFVar1;
  while( true ) {
    if (pFVar4 == pFVar1 + (longlong)(this->ViewPrevHZBs).ArrayNum * 8) {
      return -1;
    }
    if (*(IPooledRenderTarget **)pFVar4 == param_2->Reference) break;
    pFVar4 = pFVar4 + 8;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 3);
  iVar2 = iVar3 + 1;
  if (iVar3 == -1) {
    iVar2 = -1;
  }
  return iVar2;
}

// RegisterView @ 144bd6bc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FInstanceCullingManager::RegisterView(FInstanceCullingManager *this,FPackedViewParams *param_1)

{
  int iVar1;
  
  iVar1 = FRendererViewDataManager::RegisterView(this->ViewDataManager,param_1);
  return iVar1;
}

// SetDummyCullingParams @ 144be1310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingManager::SetDummyCullingParams
          (FInstanceCullingManager *this,FRDGBuilder *param_1,FInstanceCullingDrawParams *param_2)

{
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar1;
  FInstanceCullingDeferredContext *pFVar2;
  TRDGUniformBuffer<FBatchedPrimitiveParameters> *pTVar3;
  bool bVar4;
  FStaticShaderPlatform FVar5;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar6;
  FShaderParametersMetadata *pFVar7;
  EUniformBufferBindingFlags EVar8;
  uint uStack_10;
  undefined4 uStack_c;
  
  pTVar6 = FSceneUniformBuffer::GetBuffer(this->SceneUniforms,param_1);
  pFVar7 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar8 = Static;
  if (pFVar7->BindingFlags != StaticAndShader) {
    EVar8 = pFVar7->BindingFlags;
  }
  uStack_10 = CONCAT31(uStack_10._1_3_,EVar8);
  *(TRDGUniformBuffer<FSceneUniformParameters> **)&param_2->Scene = pTVar6;
  *(ulonglong *)&(param_2->Scene).field_0x8 = CONCAT44(uStack_c,uStack_10);
  pTVar1 = this->DummyUniformBuffer;
  pFVar7 = FInstanceCullingGlobalUniforms::GetStructMetadata();
  EVar8 = Static;
  if (pFVar7->BindingFlags != StaticAndShader) {
    EVar8 = pFVar7->BindingFlags;
  }
  uStack_10 = CONCAT31(uStack_10._1_3_,EVar8);
  *(TRDGUniformBuffer<FInstanceCullingGlobalUniforms> **)&param_2->InstanceCulling = pTVar1;
  *(ulonglong *)&(param_2->InstanceCulling).field_0x8 = CONCAT44(uStack_c,uStack_10);
  if (this->DeferredContext != (FInstanceCullingDeferredContext *)0x0) {
    FVar5.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
    bVar4 = IsMobilePlatform(FVar5);
    if (bVar4) {
      pFVar2 = this->DeferredContext;
      *(FRDGBuffer **)&param_2->DrawIndirectArgsBuffer = pFVar2->DrawIndirectArgsBuffer;
      *(ulonglong *)&(param_2->DrawIndirectArgsBuffer).field_0x8 = CONCAT44(uStack_c,4);
      *(FRDGBuffer **)&param_2->InstanceIdOffsetBuffer = pFVar2->InstanceDataBuffer;
      *(ulonglong *)&(param_2->InstanceIdOffsetBuffer).field_0x8 = CONCAT44(uStack_c,8);
      pTVar1 = pFVar2->UniformBuffer;
      pFVar7 = FInstanceCullingGlobalUniforms::GetStructMetadata();
      EVar8 = Static;
      if (pFVar7->BindingFlags != StaticAndShader) {
        EVar8 = pFVar7->BindingFlags;
      }
      uStack_10 = (uint)EVar8;
      *(TRDGUniformBuffer<FInstanceCullingGlobalUniforms> **)&param_2->InstanceCulling = pTVar1;
      *(ulonglong *)&(param_2->InstanceCulling).field_0x8 = CONCAT44(uStack_c,uStack_10);
      pTVar3 = pFVar2->BatchedPrimitive;
      pFVar7 = FBatchedPrimitiveParameters::GetStructMetadata();
      EVar8 = Static;
      if (pFVar7->BindingFlags != StaticAndShader) {
        EVar8 = pFVar7->BindingFlags;
      }
      uStack_10 = (uint)EVar8;
      *(TRDGUniformBuffer<FBatchedPrimitiveParameters> **)&param_2->BatchedPrimitive = pTVar3;
      *(ulonglong *)&(param_2->BatchedPrimitive).field_0x8 = CONCAT44(uStack_c,uStack_10);
    }
  }
  return;
}

