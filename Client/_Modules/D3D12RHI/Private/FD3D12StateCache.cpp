// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 39

// ~FD3D12StateCache @ 1459acb30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::~FD3D12StateCache(FD3D12StateCache *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FD3D12LocalOnlineHeap *pFVar4;
  FD3D12DescriptorHeap *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  FD3D12ComputePipelineState *this_00;
  FD3D12GraphicsPipelineState *this_01;
  longlong lVar8;
  longlong lVar9;
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *pTVar11;
  
  pFVar4 = (this->DescriptorCache).LocalViewHeap;
  if (pFVar4 != (FD3D12LocalOnlineHeap *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar5 = (this->DescriptorCache).BindlessSamplersHeap.Reference;
  if (pFVar5 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar5 = (this->DescriptorCache).BindlessResourcesHeap.Reference;
  if (pFVar5 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DescriptorCache).LocalSamplerSet.SharedReferenceCount.ReferenceController);
  pFVar6 = (this->DescriptorCache).UniqueTables.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DescriptorCache).SamplerMap.Table.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  (this->DescriptorCache).SubAllocatedViewHeap._padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  puVar7 = (undefined8 *)(this->DescriptorCache).SubAllocatedViewHeap._padding_;
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  FD3D12LocalOnlineHeap::~FD3D12LocalOnlineHeap(&(this->DescriptorCache).LocalSamplerHeap);
  lVar8 = 6;
  pTVar11 = (TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)&this->field_0x33a8;
  lVar9 = 6;
  do {
    pFVar6 = pTVar11[-1].AllocatorInstance.Data;
    pTVar11 = pTVar11 + -1;
    lVar9 = lVar9 + -1;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  } while (lVar9 != 0);
  pTVar10 = (TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
            (this->PipelineState).Common.QueuedBindlessUAVs;
  do {
    pFVar6 = pTVar10[-1].AllocatorInstance.Data;
    pTVar10 = pTVar10 + -1;
    lVar8 = lVar8 + -1;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  } while (lVar8 != 0);
  this_00 = (this->PipelineState).Compute.CurrentPipelineStateObject.Reference;
  if (this_00 != (FD3D12ComputePipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->PipelineState).Graphics.CurrentPipelineStateObject.Reference;
  if (this_01 != (FD3D12GraphicsPipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// QueueBindlessSRV @ 1459c9590

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::QueueBindlessSRV
          (FD3D12StateCache *this,EShaderFrequency param_1,FD3D12ShaderResourceView *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->PipelineState).Common.QueuedBindlessSRVs[param_1].ArrayNum;
  piVar1 = &(this->PipelineState).Common.QueuedBindlessSRVs[param_1].ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->PipelineState).Common.QueuedBindlessSRVs[param_1].
                              AllocatorInstance,piVar1);
  }
  (this->PipelineState).Common.QueuedBindlessSRVs[param_1].ArrayNum = iVar2 + 1;
  *(FD3D12ShaderResourceView **)
   ((this->PipelineState).Common.QueuedBindlessSRVs[param_1].AllocatorInstance.Data +
   (longlong)iVar2 * 8) = param_2;
  return;
}

// FD3D12StateCache @ 145a46490

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12StateCache * __thiscall
FD3D12StateCache::FD3D12StateCache
          (FD3D12StateCache *this,FD3D12CommandContext *param_1,FRHIGPUMask param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12StateCache *pFVar7;
  
  *(undefined8 *)this = *(undefined8 *)&param_1->field_0x8;
  *(uint *)&this->field_0x8 = param_2.GPUMask;
  *(uint *)&this->field_0xc = param_2.GPUMask;
  iVar3 = 0;
  if (param_2.GPUMask != 0) {
    for (; (param_2.GPUMask >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar6 = 0x20;
  if (param_2.GPUMask != 0) {
    iVar6 = iVar3;
  }
  *(int *)&this->field_0x10 = iVar6;
  this->CmdContext = param_1;
  this->bNeedSetVB = true;
  this->bNeedSetRTs = true;
  this->bNeedSetViewports = true;
  this->bNeedSetScissorRects = true;
  this->bNeedSetPrimitiveTopology = true;
  this->bNeedSetBlendFactor = true;
  this->bNeedSetStencilRef = true;
  this->bNeedSetDepthBounds = true;
  this->bNeedSetShadingRate = true;
  this->bNeedSetShadingRateImage = true;
  this->bSRVSCleared = true;
  <unnamed-type-PipelineState>::FGraphicsState::FGraphicsState(&(this->PipelineState).Graphics);
  (this->PipelineState).Compute.CurrentPipelineStateObject.Reference =
       (FD3D12ComputePipelineState *)0x0;
  *(undefined4 *)&(this->PipelineState).Compute.bNeedSetRootSignature = 0;
  (this->PipelineState).Compute.ComputeBudget = EAll_4;
  FD3D12ShaderResourceViewCache::Clear(&(this->PipelineState).Common.SRVCache);
  (this->PipelineState).Common.CBVCache._padding_ = -1;
  *(undefined4 *)&(this->PipelineState).Common.CBVCache._padding_ = 0xffffffff;
  memset((this->PipelineState).Common.CBVCache.CurrentGPUVirtualAddress,0,0x300);
  memset((this->PipelineState).Common.CBVCache.Resources,0,0x300);
  FD3D12UnorderedAccessViewCache::FD3D12UnorderedAccessViewCache
            (&(this->PipelineState).Common.UAVCache);
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  memset((this->PipelineState).Common.SamplerCache.States,0,0x600);
  (this->PipelineState).Common.CurrentPipelineStateObject = (ID3D12PipelineState *)0x0;
  *(undefined8 *)&(this->PipelineState).Common.bNeedSetPSO = 0;
  *(undefined8 *)((longlong)&(this->PipelineState).Common.ShaderRootConstants.field0_0x0 + 4) = 0;
  (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.W = 0;
  (this->PipelineState).Common.CurrentShaderSamplerCounts[0] = 0;
  (this->PipelineState).Common.CurrentShaderSamplerCounts[1] = 0;
  (this->PipelineState).Common.CurrentShaderSamplerCounts[2] = 0;
  (this->PipelineState).Common.CurrentShaderSamplerCounts[3] = 0;
  (this->PipelineState).Common.CurrentShaderSamplerCounts[4] = 0;
  (this->PipelineState).Common.CurrentShaderSamplerCounts[5] = 0;
  (this->PipelineState).Common.CurrentShaderSRVCounts[0] = 0;
  (this->PipelineState).Common.CurrentShaderSRVCounts[1] = 0;
  (this->PipelineState).Common.CurrentShaderSRVCounts[2] = 0;
  (this->PipelineState).Common.CurrentShaderSRVCounts[3] = 0;
  (this->PipelineState).Common.CurrentShaderSRVCounts[4] = 0;
  (this->PipelineState).Common.CurrentShaderSRVCounts[5] = 0;
  (this->PipelineState).Common.CurrentShaderCBCounts[0] = 0;
  (this->PipelineState).Common.CurrentShaderCBCounts[1] = 0;
  (this->PipelineState).Common.CurrentShaderCBCounts[2] = 0;
  (this->PipelineState).Common.CurrentShaderCBCounts[3] = 0;
  (this->PipelineState).Common.CurrentShaderCBCounts[4] = 0;
  (this->PipelineState).Common.CurrentShaderCBCounts[5] = 0;
  (this->PipelineState).Common.CurrentShaderUAVCounts[0] = 0;
  (this->PipelineState).Common.CurrentShaderUAVCounts[1] = 0;
  (this->PipelineState).Common.CurrentShaderUAVCounts[2] = 0;
  (this->PipelineState).Common.CurrentShaderUAVCounts[3] = 0;
  (this->PipelineState).Common.CurrentShaderUAVCounts[4] = 0;
  (this->PipelineState).Common.CurrentShaderUAVCounts[5] = 0;
  *(undefined4 *)&(this->PipelineState).Common.field_0x2b44 = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessSRVs[0].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[0].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessSRVs[1].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[1].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessSRVs[2].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[2].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[3].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[3].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[4].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessSRVs[4].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[4].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[5].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessSRVs[5].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessSRVs[5].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessUAVs[0].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[0].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessUAVs[1].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[1].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessUAVs[2].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[2].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[3].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessUAVs[3].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[3].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[4].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessUAVs[4].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[4].ArrayMax = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[5].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PipelineState).Common.QueuedBindlessUAVs[5].ArrayNum = 0;
  (this->PipelineState).Common.QueuedBindlessUAVs[5].ArrayMax = 0;
  FD3D12DescriptorCache::FD3D12DescriptorCache(&this->DescriptorCache,param_1,param_2);
  lVar2 = *(longlong *)this;
  this->LastComputePipelineType = Compute;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FD3D12StateCache *)(*pcVar4)();
      return pFVar7;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  this->ResourceBindingTier = *(D3D12_RESOURCE_BINDING_TIER *)(lVar2 + 0x214);
  iVar3 = *(int *)(lVar2 + 200);
  uVar1 = *(uint *)(lVar2 + 0xcc);
  if ((iVar3 < GLocalViewHeapSize) && (-1 < iVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GLocalViewHeapSize <= MaximumResourceHeapSize || MaximumResourceHeapSize < 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x81,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FD3D12StateCache *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((iVar3 < GOnlineDescriptorHeapSize) && (-1 < iVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GOnlineDescriptorHeapSize <= MaximumResourceHeapSize || MaximumResourceHeapSize < 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x81,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FD3D12StateCache *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (uVar1 < 0x800) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamplerDescriptors <= MaximumSamplerHeapSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x81,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FD3D12StateCache *)(*pcVar4)();
      return pFVar7;
    }
  }
  FD3D12DescriptorCache::Init(&this->DescriptorCache,GLocalViewHeapSize,0x800);
  ClearState(this);
  return this;
}

// operator= @ 145a48bb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

<unnamed_type_Common> * __thiscall
FD3D12StateCache::<unnamed-type-PipelineState>::<unnamed-type-Common>::operator=
          (<unnamed_type_Common> *this,<unnamed_type_Common> *param_1)

{
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *pTVar6;
  
  memcpy(this,param_1,0x1878);
  memcpy(&this->CBVCache,&param_1->CBVCache,0x610);
  memcpy(&this->UAVCache,&param_1->UAVCache,0x628);
  memcpy(&this->SamplerCache,&param_1->SamplerCache,0x618);
  pTVar1 = param_1->QueuedBindlessSRVs;
  this->CurrentPipelineStateObject = param_1->CurrentPipelineStateObject;
  pTVar2 = this->QueuedBindlessSRVs;
  this->bNeedSetPSO = param_1->bNeedSetPSO;
  this->bNeedSetRootConstants = param_1->bNeedSetRootConstants;
  uVar5 = *(undefined8 *)((longlong)&(param_1->ShaderRootConstants).field0_0x0 + 8);
  *(undefined8 *)&(this->ShaderRootConstants).field0_0x0 =
       *(undefined8 *)&(param_1->ShaderRootConstants).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShaderRootConstants).field0_0x0 + 8) = uVar5;
  this->CurrentShaderSamplerCounts[0] = param_1->CurrentShaderSamplerCounts[0];
  this->CurrentShaderSamplerCounts[1] = param_1->CurrentShaderSamplerCounts[1];
  this->CurrentShaderSamplerCounts[2] = param_1->CurrentShaderSamplerCounts[2];
  this->CurrentShaderSamplerCounts[3] = param_1->CurrentShaderSamplerCounts[3];
  this->CurrentShaderSamplerCounts[4] = param_1->CurrentShaderSamplerCounts[4];
  this->CurrentShaderSamplerCounts[5] = param_1->CurrentShaderSamplerCounts[5];
  this->CurrentShaderSRVCounts[0] = param_1->CurrentShaderSRVCounts[0];
  this->CurrentShaderSRVCounts[1] = param_1->CurrentShaderSRVCounts[1];
  this->CurrentShaderSRVCounts[2] = param_1->CurrentShaderSRVCounts[2];
  this->CurrentShaderSRVCounts[3] = param_1->CurrentShaderSRVCounts[3];
  this->CurrentShaderSRVCounts[4] = param_1->CurrentShaderSRVCounts[4];
  this->CurrentShaderSRVCounts[5] = param_1->CurrentShaderSRVCounts[5];
  this->CurrentShaderCBCounts[0] = param_1->CurrentShaderCBCounts[0];
  this->CurrentShaderCBCounts[1] = param_1->CurrentShaderCBCounts[1];
  this->CurrentShaderCBCounts[2] = param_1->CurrentShaderCBCounts[2];
  this->CurrentShaderCBCounts[3] = param_1->CurrentShaderCBCounts[3];
  this->CurrentShaderCBCounts[4] = param_1->CurrentShaderCBCounts[4];
  this->CurrentShaderCBCounts[5] = param_1->CurrentShaderCBCounts[5];
  this->CurrentShaderUAVCounts[0] = param_1->CurrentShaderUAVCounts[0];
  this->CurrentShaderUAVCounts[1] = param_1->CurrentShaderUAVCounts[1];
  this->CurrentShaderUAVCounts[2] = param_1->CurrentShaderUAVCounts[2];
  this->CurrentShaderUAVCounts[3] = param_1->CurrentShaderUAVCounts[3];
  this->CurrentShaderUAVCounts[4] = param_1->CurrentShaderUAVCounts[4];
  this->CurrentShaderUAVCounts[5] = param_1->CurrentShaderUAVCounts[5];
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessSRVs[0].ArrayNum = param_1->QueuedBindlessSRVs[0].ArrayNum;
    this->QueuedBindlessSRVs[0].ArrayMax = param_1->QueuedBindlessSRVs[0].ArrayMax;
    param_1->QueuedBindlessSRVs[0].ArrayNum = 0;
    param_1->QueuedBindlessSRVs[0].ArrayMax = 0;
  }
  pTVar1 = param_1->QueuedBindlessSRVs + 1;
  pTVar2 = this->QueuedBindlessSRVs + 1;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessSRVs[1].ArrayNum = param_1->QueuedBindlessSRVs[1].ArrayNum;
    this->QueuedBindlessSRVs[1].ArrayMax = param_1->QueuedBindlessSRVs[1].ArrayMax;
    param_1->QueuedBindlessSRVs[1].ArrayNum = 0;
    param_1->QueuedBindlessSRVs[1].ArrayMax = 0;
  }
  pTVar1 = param_1->QueuedBindlessSRVs + 2;
  pTVar2 = this->QueuedBindlessSRVs + 2;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessSRVs[2].ArrayNum = param_1->QueuedBindlessSRVs[2].ArrayNum;
    this->QueuedBindlessSRVs[2].ArrayMax = param_1->QueuedBindlessSRVs[2].ArrayMax;
    param_1->QueuedBindlessSRVs[2].ArrayNum = 0;
    param_1->QueuedBindlessSRVs[2].ArrayMax = 0;
  }
  pTVar1 = param_1->QueuedBindlessSRVs + 3;
  pTVar2 = this->QueuedBindlessSRVs + 3;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessSRVs[3].ArrayNum = param_1->QueuedBindlessSRVs[3].ArrayNum;
    this->QueuedBindlessSRVs[3].ArrayMax = param_1->QueuedBindlessSRVs[3].ArrayMax;
    param_1->QueuedBindlessSRVs[3].ArrayNum = 0;
    param_1->QueuedBindlessSRVs[3].ArrayMax = 0;
  }
  pTVar1 = param_1->QueuedBindlessSRVs + 4;
  pTVar2 = this->QueuedBindlessSRVs + 4;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessSRVs[4].ArrayNum = param_1->QueuedBindlessSRVs[4].ArrayNum;
    this->QueuedBindlessSRVs[4].ArrayMax = param_1->QueuedBindlessSRVs[4].ArrayMax;
    param_1->QueuedBindlessSRVs[4].ArrayNum = 0;
    param_1->QueuedBindlessSRVs[4].ArrayMax = 0;
  }
  pTVar1 = param_1->QueuedBindlessSRVs + 5;
  pTVar2 = this->QueuedBindlessSRVs + 5;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessSRVs[5].ArrayNum = param_1->QueuedBindlessSRVs[5].ArrayNum;
    this->QueuedBindlessSRVs[5].ArrayMax = param_1->QueuedBindlessSRVs[5].ArrayMax;
    param_1->QueuedBindlessSRVs[5].ArrayNum = 0;
    param_1->QueuedBindlessSRVs[5].ArrayMax = 0;
  }
  pTVar3 = param_1->QueuedBindlessUAVs;
  pTVar6 = this->QueuedBindlessUAVs;
  if (pTVar6 != pTVar3) {
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessUAVs[0].ArrayNum = param_1->QueuedBindlessUAVs[0].ArrayNum;
    this->QueuedBindlessUAVs[0].ArrayMax = param_1->QueuedBindlessUAVs[0].ArrayMax;
    param_1->QueuedBindlessUAVs[0].ArrayNum = 0;
    param_1->QueuedBindlessUAVs[0].ArrayMax = 0;
  }
  pTVar3 = param_1->QueuedBindlessUAVs + 1;
  pTVar6 = this->QueuedBindlessUAVs + 1;
  if (pTVar6 != pTVar3) {
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessUAVs[1].ArrayNum = param_1->QueuedBindlessUAVs[1].ArrayNum;
    this->QueuedBindlessUAVs[1].ArrayMax = param_1->QueuedBindlessUAVs[1].ArrayMax;
    param_1->QueuedBindlessUAVs[1].ArrayNum = 0;
    param_1->QueuedBindlessUAVs[1].ArrayMax = 0;
  }
  pTVar3 = param_1->QueuedBindlessUAVs + 2;
  pTVar6 = this->QueuedBindlessUAVs + 2;
  if (pTVar6 != pTVar3) {
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessUAVs[2].ArrayNum = param_1->QueuedBindlessUAVs[2].ArrayNum;
    this->QueuedBindlessUAVs[2].ArrayMax = param_1->QueuedBindlessUAVs[2].ArrayMax;
    param_1->QueuedBindlessUAVs[2].ArrayNum = 0;
    param_1->QueuedBindlessUAVs[2].ArrayMax = 0;
  }
  pTVar3 = param_1->QueuedBindlessUAVs + 3;
  pTVar6 = this->QueuedBindlessUAVs + 3;
  if (pTVar6 != pTVar3) {
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessUAVs[3].ArrayNum = param_1->QueuedBindlessUAVs[3].ArrayNum;
    this->QueuedBindlessUAVs[3].ArrayMax = param_1->QueuedBindlessUAVs[3].ArrayMax;
    param_1->QueuedBindlessUAVs[3].ArrayNum = 0;
    param_1->QueuedBindlessUAVs[3].ArrayMax = 0;
  }
  pTVar3 = param_1->QueuedBindlessUAVs + 4;
  pTVar6 = this->QueuedBindlessUAVs + 4;
  if (pTVar6 != pTVar3) {
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessUAVs[4].ArrayNum = param_1->QueuedBindlessUAVs[4].ArrayNum;
    this->QueuedBindlessUAVs[4].ArrayMax = param_1->QueuedBindlessUAVs[4].ArrayMax;
    param_1->QueuedBindlessUAVs[4].ArrayNum = 0;
    param_1->QueuedBindlessUAVs[4].ArrayMax = 0;
  }
  pTVar6 = param_1->QueuedBindlessUAVs + 5;
  pTVar3 = this->QueuedBindlessUAVs + 5;
  if (pTVar3 != pTVar6) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->QueuedBindlessUAVs[5].ArrayNum = param_1->QueuedBindlessUAVs[5].ArrayNum;
    this->QueuedBindlessUAVs[5].ArrayMax = param_1->QueuedBindlessUAVs[5].ArrayMax;
    param_1->QueuedBindlessUAVs[5].ArrayNum = 0;
    param_1->QueuedBindlessUAVs[5].ArrayMax = 0;
  }
  return this;
}

// operator() @ 145a49ad0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall `FD3D12StateCache::ApplySamplerTables'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  
  *(undefined4 *)(*(longlong *)this + 0x18) = 0;
  uVar6 = **(uint **)((longlong)this + 8);
  if (uVar6 < **(uint **)((longlong)this + 0x10)) {
    do {
      if ((1 < uVar6 - 1) || (GRHIGlobals.SupportsMeshShadersTier0 != false)) {
        uVar5 = (ulonglong)uVar6;
        *(uint *)(*(longlong *)((longlong)this + 0x20) + uVar5 * 4) =
             (int)(1L << ((byte)*(undefined4 *)
                                 (*(longlong *)((longlong)this + 0x18) + 0x3284 + uVar5 * 4) & 0x3f)
                  ) - 1U & *(uint *)(*(longlong *)((longlong)this + 0x28) + uVar5 * 4);
        if (*(int *)(*(longlong *)((longlong)this + 0x20) + uVar5 * 4) != 0) {
          if (*(int *)(*(longlong *)((longlong)this + 0x18) + 0x2c) == 1) {
            lVar2 = **(longlong **)((longlong)this + 0x30);
            if ((uVar6 == 0xc) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ShaderStage != SF_NumFrequencies",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                   ,0xd8,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(uint *)(*(longlong *)this + uVar5 * 4) = (uint)*(byte *)(lVar2 + 0x2c + uVar5 * 8);
          }
          else {
            *(undefined4 *)(*(longlong *)this + uVar5 * 4) =
                 *(undefined4 *)(*(longlong *)((longlong)this + 0x18) + 0x3284 + uVar5 * 4);
          }
          if ((0x1f < *(int *)(*(longlong *)this + uVar5 * 4) - 1U) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSamplers[Stage] > 0 && NumSamplers[Stage] <= 32",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                                 ,0x3c8,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          piVar1 = (int *)(*(longlong *)this + 0x18);
          *piVar1 = *piVar1 + *(int *)(*(longlong *)this + uVar5 * 4);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < **(uint **)((longlong)this + 0x10));
  }
  return;
}

// ApplyBindlessResources @ 145a51d50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::ApplyBindlessResources
          (FD3D12StateCache *this,FD3D12RootSignature *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  FD3D12UnorderedAccessView **ppFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<FD3D12UnorderedAccessView_*_const,int> local_48;
  TArrayView<FD3D12ShaderResourceView_*_const,int> local_38;
  
  if (param_2 < param_3) {
    uVar9 = (ulonglong)param_2;
    piVar7 = &(this->PipelineState).Common.QueuedBindlessSRVs[uVar9].ArrayNum;
    do {
      ppFVar3 = *(FD3D12UnorderedAccessView ***)(piVar7 + 0x16);
      iVar1 = piVar7[0x18];
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
               AllocatorInstance).Data;
      iVar2 = *piVar7;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = iVar1;
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = iVar2;
      local_48.DataPtr = ppFVar3;
      local_38.DataPtr = (FD3D12ShaderResourceView **)pFVar4;
      FD3D12DescriptorCache::PrepareBindlessViews
                (&this->DescriptorCache,(EShaderFrequency)uVar9,&local_38,&local_48);
      *piVar7 = 0;
      if (piVar7[1] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar7 + -2),0,piVar7 + 1);
      }
      piVar7[0x18] = 0;
      if (piVar7[0x19] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar7 + 0x16),0,piVar7 + 0x19);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      piVar7 = piVar7 + 4;
    } while (uVar8 < param_3);
  }
  return;
}

// ApplyConstants @ 145a51ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::ApplyConstants
          (FD3D12StateCache *this,FD3D12RootSignature *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  uint *puVar4;
  undefined1 auStackY_78 [32];
  ushort local_48 [8];
  ulonglong local_38;
  
  if (param_2 < param_3) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_78;
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    uVar2 = (ulonglong)param_2;
    local_48[4] = 0;
    local_48[5] = 0;
    puVar3 = local_48 + uVar2;
    puVar4 = (this->PipelineState).Common.CurrentShaderCBCounts + uVar2;
    do {
      if ((1 < param_2 - 1) || (GRHIGlobals.SupportsMeshShadersTier0)) {
        *puVar3 = *(ushort *)((longlong)this + (0x2018 - (longlong)local_48) + (longlong)puVar3) &
                  (1 << ((byte)*puVar4 & 0x1f)) - 1U;
      }
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (param_2 < param_3);
    puVar3 = local_48 + uVar2;
    do {
      if (*puVar3 != 0) {
        FD3D12DescriptorCache::SetRootConstantBuffers
                  (&this->DescriptorCache,(EShaderFrequency)uVar2,param_1,
                   &(this->PipelineState).Common.CBVCache,*puVar3,this);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      puVar3 = puVar3 + 1;
    } while (uVar1 < param_3);
  }
  return;
}

// ApplyResourceTables @ 145a51ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::ApplyResourceTables
          (FD3D12StateCache *this,FD3D12RootSignature *param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  FD3D12UnorderedAccessViewCache *pFVar2;
  <unnamed_type_Common> *p<Var3;
  undefined1 uVar4;
  EShaderFrequency EVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  FD3D12ShaderResourceViewCache *pFVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  ushort uVar18;
  ulonglong uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateSetUAVTime> FVar21;
  uint uVar22;
  FD3D12StateCache *pFVar23;
  longlong lVar24;
  uint uVar25;
  FName FVar26;
  EShaderFrequency *pEVar27;
  byte *pbVar28;
  longlong *plVar29;
  EShaderFrequency *pEVar30;
  uint *puVar31;
  longlong lVar32;
  uint uVar33;
  undefined1 auStackY_1b8 [32];
  undefined4 in_stack_fffffffffffffe7c;
  EShaderFrequency local_156 [2];
  undefined2 local_154 [2];
  uint local_150;
  FName local_148;
  uint local_140;
  uint local_13c;
  FD3D12ShaderResourceViewCache *local_138;
  uint local_130;
  uint local_12c;
  FColor_u_0 local_128 [2];
  FD3D12StateCache *local_120;
  EShaderFrequency *local_118;
  int iStack_110;
  EShaderFrequency *local_108;
  FName local_100;
  longlong local_f0;
  longlong local_e8;
  D3D12_GPU_DESCRIPTOR_HANDLE local_e0;
  D3D12_GPU_DESCRIPTOR_HANDLE local_d8 [2];
  EShaderFrequency *local_c8;
  undefined4 uStack_c0;
  EShaderFrequency *local_b8;
  undefined4 uStack_b0;
  FName local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88 [6];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar22 = 0;
  local_58 = 0;
  local_50 = 0;
  local_140 = 0;
  local_90 = 0;
  local_156[0] = SF_Compute;
  local_154[0] = 0x300;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if (param_2 == 5) {
    local_c8 = local_156;
    uStack_c0 = 1;
    iStack_110 = 1;
    local_118 = local_c8;
  }
  else {
    local_b8 = (EShaderFrequency *)local_154;
    uStack_b0 = 2;
    iStack_110 = 2;
    local_118 = local_b8;
  }
  local_130 = 0;
  local_150 = param_3;
  local_13c = param_2;
  local_138 = (FD3D12ShaderResourceViewCache *)param_1;
  local_120 = this;
  local_108 = local_118;
  do {
    pFVar13 = local_138;
    uVar33 = 0;
    uVar6 = local_140;
    if (param_1->bHasUAVs != 0) {
      pEVar27 = local_118 + iStack_110;
      uVar33 = 0;
      for (pEVar30 = local_118; pEVar30 != pEVar27; pEVar30 = pEVar30 + 1) {
        EVar5 = *pEVar30;
        uVar19 = (ulonglong)EVar5;
        uVar6 = (this->PipelineState).Common.CurrentShaderUAVCounts[uVar19];
        uVar18 = (1 << ((byte)uVar6 & 0x1f)) - 1U &
                 *(ushort *)
                  ((longlong)((this->PipelineState).Common.UAVCache.Views + -1) + 0x70 + uVar19 * 2)
        ;
        *(ushort *)((longlong)&local_58 + uVar19 * 2) = uVar18;
        if (uVar18 != 0) {
          uVar22 = uVar6;
          if ((int)this->ResourceBindingTier < 3) {
            if (EVar5 == SF_NumFrequencies) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ShaderStage != SF_NumFrequencies",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                  ,0xdb,L"");
              if (bVar16) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            uVar22 = (uint)*(byte *)((longlong)(pFVar13->Views + -1) + 0x1fd + uVar19 * 8);
          }
          if (0xf < uVar22 - 1) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumUAVs > 0 && NumUAVs <= 16",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                                ,699,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar33 = uVar33 + uVar22;
        }
        param_2 = local_13c;
        uVar6 = uVar22;
      }
    }
    local_140 = uVar6;
    uVar6 = local_150;
    if (param_2 < local_150) {
      lVar24 = (longlong)this - (longlong)local_138;
      puVar31 = (uint *)((longlong)&local_a0 + (ulonglong)param_2 * 4);
      pbVar28 = (byte *)((longlong)(local_138->Views + -1) + 0x1fb + (ulonglong)param_2 * 8);
      lVar32 = (longlong)local_88 - (longlong)local_138;
      uVar25 = param_2;
      local_f0 = lVar24;
      local_e8 = lVar32;
      do {
        if (((1 < uVar25 - 1) || (GRHIGlobals.SupportsMeshShadersTier0 != false)) &&
           (param_1->bHasSRVs != '\0')) {
          uVar22 = *(uint *)((longlong)this + (0x329c - (longlong)&local_a0) + (longlong)puVar31);
          uVar19 = ((ulonglong)(uVar22 < 0x40) << ((byte)uVar22 & 0x3f)) - 1 &
                   *(ulonglong *)(pbVar28 + lVar24 + 0x775);
          *(ulonglong *)(pbVar28 + lVar32 + -0x2b) = uVar19;
          if (uVar19 != 0) {
            if (this->ResourceBindingTier == D3D12_RESOURCE_BINDING_TIER_1) {
              if (uVar25 == 0xc) {
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ShaderStage != SF_NumFrequencies",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                    ,0xd9,L"");
                if (bVar16) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              uVar22 = (uint)*pbVar28;
            }
            *puVar31 = uVar22;
            if (0x3f < uVar22 - 1) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumSRVs[Stage] > 0 && NumSRVs[Stage] <= 64",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                                  ,0x2d9,L"");
              if (bVar16) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            uVar33 = uVar33 + *puVar31;
            lVar24 = local_f0;
            lVar32 = local_e8;
          }
        }
        uVar25 = uVar25 + 1;
        pbVar28 = pbVar28 + 8;
        puVar31 = puVar31 + 1;
        param_2 = local_13c;
        uVar22 = local_140;
      } while (uVar25 < uVar6);
    }
    bVar16 = FD3D12OnlineHeap::CanReserveSlots((this->DescriptorCache).CurrentViewHeap,uVar33);
    if (bVar16) break;
    cVar17 = (**(code **)(((this->DescriptorCache).CurrentViewHeap)->_padding_ + 8))();
    if (cVar17 == '\0') break;
    uVar33 = 0;
    local_130 = local_130 + 1;
  } while (local_130 < 2);
  local_12c = FD3D12OnlineHeap::ReserveSlots((this->DescriptorCache).CurrentViewHeap,uVar33);
  FVar21 = StatPtr_STAT_D3D12ApplyStateSetUAVTime;
  if (StatPtr_STAT_D3D12ApplyStateSetUAVTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateSetUAVTime>)0x0) {
    pFVar20 = ::FName::FName(&local_a8,"STAT_D3D12ApplyStateSetUAVTime");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateSetUAVTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateSetUAVTime,
                        *pFVar20,L"ApplyState: Set UAV time","STATGROUP_D3D12RHI","STATCAT_Advanced"
                        ,L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar16 = false;
  bVar9 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) ||
     (bVar8 = bVar16, bVar10 = bVar9, FVar26.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar16 = false;
      bVar9 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148 = FVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                   ,0x30b);
        bVar16 = true;
        bVar9 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    bVar8 = bVar16;
    bVar10 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar14 = true;
      goto LAB_145a52471;
    }
  }
  bVar9 = bVar15;
  bVar16 = bVar14;
  bVar14 = false;
  local_148 = local_100;
  FVar26 = local_100;
LAB_145a52471:
  pFVar23 = local_120;
  pFVar13 = local_138;
  pEVar27 = local_118 + iStack_110;
  pEVar30 = local_118;
  while (pEVar30 != pEVar27) {
    EVar5 = *pEVar30;
    if (*(short *)((longlong)&local_58 + (longlong)(ulonglong)EVar5 * 2) != 0) {
      pFVar2 = &(pFVar23->PipelineState).Common.UAVCache;
      FD3D12DescriptorCache::BuildUAVTable
                (&pFVar23->DescriptorCache,(EShaderFrequency)&local_e0,
                 (FD3D12RootSignature *)(ulonglong)EVar5,(FD3D12UnorderedAccessViewCache *)pFVar13,
                 (ushort *)pFVar2,(int)&local_58 + (uint)EVar5 * 2,
                 (uint *)CONCAT44(in_stack_fffffffffffffe7c,uVar22));
      FD3D12DescriptorCache::SetUAVTable
                (&pFVar23->DescriptorCache,EVar5,(FD3D12RootSignature *)pFVar13,pFVar2,uVar22,
                 &local_e0);
    }
    local_108 = local_108 + 1;
    FVar26 = local_148;
    bVar8 = bVar16;
    bVar10 = bVar9;
    pEVar30 = local_108;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  if (param_1->bHasSRVs != '\0') {
    uVar19 = (ulonglong)local_13c;
    p<Var3 = &(local_120->PipelineState).Common;
    if (local_13c < local_150) {
      puVar31 = (uint *)((longlong)&local_a0 + uVar19 * 4);
      plVar29 = local_88 + uVar19;
      pFVar23 = local_120;
      uVar22 = local_150;
      do {
        if (*plVar29 != 0) {
          uVar22 = *puVar31;
          FD3D12DescriptorCache::BuildSRVTable
                    (&pFVar23->DescriptorCache,(EShaderFrequency)local_d8,
                     (FD3D12RootSignature *)(uVar19 & 0xff),local_138,(ulong64 *)p<Var3,
                     (uint)plVar29,(uint *)CONCAT44(in_stack_fffffffffffffe7c,uVar22));
          FD3D12DescriptorCache::SetSRVTable
                    (&pFVar23->DescriptorCache,(EShaderFrequency)uVar19,
                     (FD3D12RootSignature *)local_138,&p<Var3->SRVCache,uVar22,local_d8);
          pFVar23 = local_120;
          uVar22 = local_150;
        }
        uVar33 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar33;
        plVar29 = plVar29 + 1;
        puVar31 = puVar31 + 1;
      } while (uVar33 < uVar22);
    }
  }
  return;
}

// ApplySamplerTables @ 145a52620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::ApplySamplerTables
          (FD3D12StateCache *this,FD3D12RootSignature *param_1,uint param_2,uint param_3)

{
  FD3D12SamplerStateCache *pFVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *pTVar5;
  FD3D12SamplerState *pFVar6;
  ForElementType<FSetElementId> FVar7;
  FD3D12OnlineHeap *this_00;
  ID3D12DescriptorHeap *pIVar8;
  FD3D12CommandContext *pFVar9;
  longlong *plVar10;
  FName FVar11;
  code *pcVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_NumReusedSamplerOnlineDescriptors> FVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<FSetElementId> FVar21;
  ulonglong uVar22;
  longlong lVar23;
  uchar auVar24 [8];
  ushort uVar25;
  uint uVar26;
  uint local_res20 [2];
  undefined1 auStackY_2b8 [32];
  undefined4 in_stack_fffffffffffffd7c;
  uint local_258 [2];
  uint local_250;
  FD3D12SamplerStateCache *local_248;
  FName local_240;
  D3D12_GPU_DESCRIPTOR_HANDLE local_238;
  FStatMessage local_230;
  uint *local_220;
  uint *local_218;
  uint *local_210;
  FD3D12StateCache *local_208;
  int *local_200;
  FD3D12SamplerStateCache *local_1f8;
  FD3D12SamplerStateCache **local_1f0;
  FName local_1e8 [2];
  FD3D12SamplerArrayDesc local_1d8;
  undefined1 local_190 [256];
  undefined8 local_90;
  uint local_88 [8];
  int local_68 [6];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_68[4] = 0;
  local_68[5] = 0;
  pFVar1 = &(this->PipelineState).Common.SamplerCache;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_220 = local_88;
  local_218 = local_258;
  local_210 = local_res20;
  local_200 = local_68;
  local_1f0 = &local_248;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_res20[0] = param_3;
  local_258[0] = param_2;
  local_248 = (FD3D12SamplerStateCache *)param_1;
  local_208 = this;
  local_1f8 = pFVar1;
  `FD3D12StateCache::ApplySamplerTables'::__l2::<lambda_1>::operator()(&local_220);
  if ((FD3D12LocalOnlineHeap *)(this->DescriptorCache).CurrentSamplerHeap ==
      &(this->DescriptorCache).LocalSamplerHeap) {
LAB_145a52838:
    this_00 = (this->DescriptorCache).CurrentSamplerHeap;
    if (((FD3D12LocalOnlineHeap *)this_00 != &(this->DescriptorCache).LocalSamplerHeap) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("DescriptorCache.UsingGlobalSamplerHeap() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                            ,0x41c,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((*(longlong *)this == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((this_00 == (FD3D12OnlineHeap *)(*(longlong *)this + 0x920)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("SamplerHeap != &GetParentDevice()->GetGlobalSamplerHeap()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                            ,0x41d,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pIVar8 = (((this_00->Heap).Reference)->Heap).Reference;
    if (((pIVar8 != (this->DescriptorCache).LastSetViewHeap) &&
        (pIVar8 != (this->DescriptorCache).LastSetSamplerHeap)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("DescriptorCache.IsHeapSet(SamplerHeap->GetHeap())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                            ,0x41e,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((*(longlong *)this == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pIVar8 = *(ID3D12DescriptorHeap **)(*(longlong *)(*(longlong *)this + 0x930) + 0x18);
    if (((pIVar8 == (this->DescriptorCache).LastSetViewHeap) ||
        (pIVar8 == (this->DescriptorCache).LastSetSamplerHeap)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!DescriptorCache.IsHeapSet(GetParentDevice()->GetGlobalSamplerHeap().GetHeap())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                            ,0x41f,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    bVar13 = FD3D12OnlineHeap::CanReserveSlots(this_00,local_88[6]);
    if ((!bVar13) && (cVar14 = (**(code **)(this_00->_padding_ + 8))(this_00), cVar14 != '\0')) {
      `FD3D12StateCache::ApplySamplerTables'::__l2::<lambda_1>::operator()(&local_220);
    }
    local_250 = FD3D12OnlineHeap::ReserveSlots(this_00,local_88[6]);
    uVar26 = local_res20[0];
    uVar15 = local_258[0];
    if (local_258[0] < local_res20[0]) {
      do {
        if (local_68[uVar15] != 0) {
          FD3D12DescriptorCache::BuildSamplerTable
                    (&this->DescriptorCache,(EShaderFrequency)&local_238,
                     (FD3D12RootSignature *)(ulonglong)(uVar15 & 0xff),local_248,(uint *)pFVar1,
                     (uint)(local_68 + uVar15),
                     (uint *)CONCAT44(in_stack_fffffffffffffd7c,local_88[uVar15]));
          FD3D12DescriptorCache::SetSamplerTable
                    (&this->DescriptorCache,(EShaderFrequency)uVar15,
                     (FD3D12RootSignature *)local_248,pFVar1,local_88[uVar15],&local_238);
          uVar26 = local_res20[0];
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar26);
    }
    FD3D12OnlineHeap::SetNextSlot(this_00,local_250);
  }
  else {
    pTVar5 = (this->DescriptorCache).LocalSamplerSet.Object;
    uVar26 = local_258[0];
    uVar15 = local_res20[0];
    if (local_258[0] < local_res20[0]) {
      do {
        if ((((1 < uVar26 - 1) || (GRHIGlobals.SupportsMeshShadersTier0 != false)) &&
            (uVar22 = (ulonglong)uVar26, local_68[uVar22] != 0)) &&
           (uVar4 = local_88[uVar22], uVar4 != 0)) {
          puVar3 = (uint *)((longlong)(pFVar1->States + -1) + 0xe8 + uVar22 * 4);
          local_1d8.SamplerID[0] = 0;
          local_1d8.SamplerID[1] = 0;
          local_1d8.SamplerID[2] = 0;
          local_1d8.SamplerID[3] = 0;
          local_1d8.SamplerID[4] = 0;
          local_1d8.SamplerID[5] = 0;
          local_1d8.SamplerID[6] = 0;
          local_1d8.SamplerID[7] = 0;
          local_1d8.SamplerID[8] = 0;
          local_1d8.SamplerID[9] = 0;
          local_1d8.SamplerID[10] = 0;
          local_1d8.SamplerID[0xb] = 0;
          local_1d8.SamplerID[0xc] = 0;
          local_1d8.SamplerID[0xd] = 0;
          local_1d8.SamplerID[0xe] = 0;
          local_1d8.SamplerID[0xf] = 0;
          local_1d8.SamplerID[0x10] = 0;
          local_1d8.SamplerID[0x11] = 0;
          local_1d8.SamplerID[0x12] = 0;
          local_1d8.SamplerID[0x13] = 0;
          local_1d8.SamplerID[0x14] = 0;
          local_1d8.SamplerID[0x15] = 0;
          local_1d8.SamplerID[0x16] = 0;
          local_1d8.SamplerID[0x17] = 0;
          local_1d8.SamplerID[0x18] = 0;
          local_1d8.SamplerID[0x19] = 0;
          local_1d8.SamplerID[0x1a] = 0;
          local_1d8.SamplerID[0x1b] = 0;
          local_1d8.SamplerID[0x1c] = 0;
          local_1d8.SamplerID[0x1d] = 0;
          local_1d8.SamplerID[0x1e] = 0;
          local_1d8.SamplerID[0x1f] = 0;
          memset(local_190,0,0x100);
          uVar20 = 0;
          local_90 = 0;
          if (uVar4 != 0) {
            uVar15 = *puVar3;
            do {
              pFVar6 = pFVar1->States[uVar22][uVar20];
              if (pFVar6 == (FD3D12SamplerState *)0x0) {
                uVar25 = 0;
              }
              else {
                uVar25 = pFVar6->ID;
              }
              uVar15 = uVar15 & ~(1 << ((uint)uVar20 & 0x1f));
              local_1d8.SamplerID[uVar20] = uVar25;
              uVar19 = (uint)uVar20 + 1;
              uVar20 = (ulonglong)uVar19;
              *puVar3 = uVar15;
            } while (uVar19 < uVar4);
          }
          local_1d8.Count = uVar4;
          uVar15 = ::GetTypeHash(&local_1d8);
          if (*(int *)&(pTVar5->Elements).field_0x8 != *(int *)&(pTVar5->Elements).field_0x34) {
            FVar7 = (pTVar5->Hash).SecondaryData;
            FVar21 = (ForElementType<FSetElementId>)&pTVar5->Hash;
            if (FVar7 != (ForElementType<FSetElementId>)0x0) {
              FVar21 = FVar7;
            }
            iVar16 = *(int *)((longlong)FVar21 + (ulonglong)(pTVar5->HashSize - 1U & uVar15) * 4);
            if (iVar16 != -1) {
              while( true ) {
                lVar23 = (longlong)iVar16 * 0x158;
                bVar13 = FD3D12SamplerArrayDesc::operator==
                                   ((FD3D12SamplerArrayDesc *)
                                    (*(longlong *)&pTVar5->Elements + lVar23),&local_1d8);
                if (bVar13) break;
                iVar16 = *(int *)(lVar23 + 0x150 + *(longlong *)&pTVar5->Elements);
                if (iVar16 == -1) goto LAB_145a5281f;
              }
              lVar23 = *(longlong *)&pTVar5->Elements + lVar23;
              if (lVar23 != 0) {
                if ((*(longlong *)this == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Parent != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                        ,0x59,L""), bVar13)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pIVar8 = *(ID3D12DescriptorHeap **)(*(longlong *)(*(longlong *)this + 0x930) + 0x18)
                ;
                if (((pIVar8 != (this->DescriptorCache).LastSetViewHeap) &&
                    (pIVar8 != (this->DescriptorCache).LastSetSamplerHeap)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("DescriptorCache.IsHeapSet(GetParentDevice()->GetGlobalSamplerHeap().GetHeap())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                                        ,0x3ed,L""), bVar13)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((*(longlong *)(lVar23 + 0x148) == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CachedTable->GPUHandle.ptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                                        ,0x3ee,L""), bVar13)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar15 = FD3D12RootSignature::SamplerRDTBindSlot
                                   ((FD3D12RootSignature *)local_248,(EShaderFrequency)uVar26);
                pFVar9 = this->CmdContext;
                if (uVar26 == 5) {
                  if (*(longlong *)&pFVar9->field_0x188 == 0) {
                    (**(code **)(*(longlong *)pFVar9 + 8))(pFVar9);
                  }
                  plVar10 = *(longlong **)(*(longlong *)&pFVar9->field_0x188 + 0x28);
                  piVar2 = (int *)(*(longlong *)&pFVar9->field_0x188 + 0x168);
                  *piVar2 = *piVar2 + 1;
                  (**(code **)(*plVar10 + 0xf8))(plVar10,uVar15);
                }
                else {
                  if (*(longlong *)&pFVar9->field_0x188 == 0) {
                    (**(code **)(*(longlong *)pFVar9 + 8))(pFVar9);
                  }
                  plVar10 = *(longlong **)(*(longlong *)&pFVar9->field_0x188 + 0x28);
                  piVar2 = (int *)(*(longlong *)&pFVar9->field_0x188 + 0x168);
                  *piVar2 = *piVar2 + 1;
                  (**(code **)(*plVar10 + 0x100))(plVar10,uVar15);
                }
                puVar3 = (uint *)((longlong)(pFVar1->States + -1) + 0xe8 +
                                 (ulonglong)(uVar26 & 0xff) * 4);
                *puVar3 = *puVar3 | -(int)(1L << ((byte)local_1d8.Count & 0x3f));
                uVar15 = local_res20[0];
                goto LAB_145a52be8;
              }
            }
          }
LAB_145a5281f:
          bVar13 = FD3D12DescriptorCache::SwitchToContextLocalSamplerHeap(&this->DescriptorCache);
          if (bVar13) {
            `FD3D12StateCache::ApplySamplerTables'::__l2::<lambda_1>::operator()(&local_220);
          }
          goto LAB_145a52838;
        }
LAB_145a52be8:
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar15);
    }
    auVar24[4] = '\0';
    auVar24[5] = '\0';
    auVar24[6] = '\0';
    auVar24[7] = '\0';
    auVar24[0] = (undefined1)local_88[6];
    auVar24[1] = local_88[6]._1_1_;
    auVar24[2] = local_88[6]._2_1_;
    auVar24[3] = local_88[6]._3_1_;
    if ((auVar24 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar18 = StatPtr_STAT_NumReusedSamplerOnlineDescriptors;
      if (StatPtr_STAT_NumReusedSamplerOnlineDescriptors ==
          (FThreadSafeStaticStat<FStat_STAT_NumReusedSamplerOnlineDescriptors>)0x0) {
        pFVar17 = ::FName::FName(local_1e8,"STAT_NumReusedSamplerOnlineDescriptors");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_NumReusedSamplerOnlineDescriptors>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_NumReusedSamplerOnlineDescriptors,*pFVar17,
                            L"Sampler: Num reused descriptors","STATGROUP_D3D12DescriptorHeap",
                            "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,
                            ST_int64,false,false,MCR_Invalid);
      }
      FVar11 = *(FName *)FVar18;
      if (((FVar11 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_240 = FVar11;
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_230.NameAndInfo.Number = FVar11.Number & 0xffffafff | 0xa000;
        local_240 = FVar11;
        local_230.StatData.Pad = auVar24;
        local_230.NameAndInfo.Index.Value = FVar11.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_230);
        FStatsTrace::Add(&local_240,(long64)auVar24);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
  }
  return;
}

// ApplyState @ 145a52d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::ApplyState(FD3D12StateCache *this,ERHIPipeline param_1,ED3D12PipelineType param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  EVRSShadingRate EVar4;
  char cVar5;
  int iVar6;
  FD3D12CommandContext *pFVar7;
  FD3D12ComputePipelineState *pFVar8;
  FD3D12GraphicsPipelineState *pFVar9;
  FD3D12Device *pFVar10;
  longlong *plVar11;
  FD3D12DepthStencilView *pFVar12;
  FD3D12Resource *pFVar13;
  FD3D12UnorderedAccessView **ppFVar14;
  FScriptContainerElement *pFVar15;
  FD3D12RootSignature *pFVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  char *pcVar22;
  undefined7 in_register_00000011;
  byte bVar23;
  int *piVar24;
  ushort *puVar25;
  uint uVar26;
  ulonglong uVar28;
  uint *puVar29;
  longlong *plVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStackY_208 [32];
  undefined4 uStack_1ac;
  undefined4 uStack_19c;
  TArrayView<FD3D12UnorderedAccessView_*_const,int> local_198;
  TArrayView<FD3D12ShaderResourceView_*_const,int> local_188;
  FD3D12ExplicitDescriptorCache local_178;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  ushort local_58 [8];
  ulonglong local_48;
  ulonglong uVar27;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar7 = this->CmdContext;
  if (*(longlong *)&pFVar7->field_0x188 == 0) {
    (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7,CONCAT71(in_register_00000011,param_1));
  }
  if (param_2 == Compute) {
    pFVar8 = (this->PipelineState).Compute.CurrentPipelineStateObject.Reference;
    plVar30 = &pFVar8->_padding_;
    if (pFVar8 == (FD3D12ComputePipelineState *)0x0) {
      plVar30 = (longlong *)0x0;
    }
  }
  else {
    if (param_2 != Graphics) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                          ,0x1cf,L"Unexpected pipeline type: %d");
      if (!bVar20) {
        return;
      }
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar9 = (this->PipelineState).Graphics.CurrentPipelineStateObject.Reference;
    plVar30 = &pFVar9->_padding_;
    if (pFVar9 == (FD3D12GraphicsPipelineState *)0x0) {
      plVar30 = (longlong *)0x0;
    }
  }
  bVar3 = *(byte *)(*plVar30 + 0xbd);
  bVar23 = bVar3 & 3;
  if (((bVar3 & 0x20) != 0) || (bVar20 = true, bVar23 == 0)) {
    bVar20 = false;
  }
  uVar26 = 0;
  if ((*(longlong *)this == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar18)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  if (((bVar3 & 0x20) == 0) || (*(int *)(*(longlong *)this + 0x750) != 1)) {
    iVar21 = *(int *)(*(longlong *)this + 0x750);
    if (iVar21 == 3) {
      if ((((bVar3 & 0x20) == 0) && (bVar23 != 0)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("bShaderUsesBindlessResources || !bShaderUsesBindfulResources",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                              ,0x1f6,L""), bVar18)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      if (((bVar3 & 0x50) == 0x10) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("bShaderUsesBindlessSamplers || !bShaderUsesBindfulSamplers",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                              ,0x1f7,L""), bVar18)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar26 = 1;
    }
    else if (iVar21 < 2) {
      if (((bVar3 & 0x20) != 0) || ((bVar3 & 0x40) != 0)) {
        iVar21 = 0x206;
        pcVar22 = "!bShaderUsesBindlessResources && !bShaderUsesBindlessSamplers";
        goto LAB_145a5310d;
      }
    }
    else {
      bVar18 = (bVar3 & 0x60) != 0;
      uVar26 = (uint)bVar18;
      if ((bVar23 == 0) && ((bVar3 & 0x10) == 0)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if ((bVar18 == bVar19) && (bVar19 != false)) {
        iVar21 = 0x200;
        pcVar22 = "bAnyBindless != bAnyBindful || !bAnyBindful";
LAB_145a5310d:
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           (pcVar22,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                            ,iVar21,L"");
        if (bVar18) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
    }
    bVar18 = FD3D12DescriptorCache::SetDescriptorHeaps(&this->DescriptorCache,uVar26 * 2);
    if (!bVar18) {
      bVar18 = false;
      goto LAB_145a52ff1;
    }
  }
  else {
    if (((bVar3 & 0x40) == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("bShaderUsesBindlessSamplers",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                            ,0x1e7,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    if ((bVar23 != 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bShaderUsesBindfulResources",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                            ,0x1ea,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    if ((*(longlong *)this == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar10 = *(FD3D12Device **)this;
    local_178._padding_ = (longlong)pFVar10;
    FD3D12ExplicitDescriptorHeap::FD3D12ExplicitDescriptorHeap(&local_178.ViewHeap,pFVar10);
    FD3D12ExplicitDescriptorHeap::FD3D12ExplicitDescriptorHeap(&local_178.SamplerHeap,pFVar10);
    local_178.BindlessConfiguration = Disabled;
    local_178.bBindless = false;
    local_178.WorkerData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.WorkerData.ArrayNum = 0;
    local_178.WorkerData.ArrayMax = 0;
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x80,0x40,1,&local_178.WorkerData.AllocatorInstance,
                        &local_178.WorkerData.ArrayNum,&local_178.WorkerData.ArrayMax);
    DefaultConstructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
              (local_178.WorkerData.AllocatorInstance.Data + (longlong)iVar21 * 0x80,1);
    FD3D12ExplicitDescriptorCache::Init(&local_178,0,0,0,RayTracing);
    FD3D12DescriptorCache::SetExplicitDescriptorCache(&this->DescriptorCache,&local_178);
    DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
              ((FWorkerThreadData *)local_178.WorkerData.AllocatorInstance.Data,
               local_178.WorkerData.ArrayNum);
    if ((FWorkerThreadData *)local_178.WorkerData.AllocatorInstance.Data != (FWorkerThreadData *)0x0
       ) {
      FMemory::Free(local_178.WorkerData.AllocatorInstance.Data);
    }
    FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_178.SamplerHeap);
    FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_178.ViewHeap);
  }
  bVar18 = true;
LAB_145a52ff1:
  bVar18 = InternalSetRootSignature(this,param_2,(FD3D12RootSignature *)*plVar30,bVar18);
  InternalSetPipelineState(this,(FD3D12PipelineState *)plVar30[1]);
  if (bVar18) {
    FD3D12ContextCommon::BindDiagnosticBuffer
              ((FD3D12ContextCommon *)this->CmdContext,(FD3D12RootSignature *)*plVar30,param_2);
  }
  if (param_2 == Compute) {
    pFVar7 = this->CmdContext;
    if (*(int *)&pFVar7->field_0x10 == 2) {
      (**(code **)(*(longlong *)pFVar7 + 0x40))(pFVar7,(this->PipelineState).Compute.ComputeBudget);
    }
  }
  else if (param_2 == Graphics) {
    if (this->bNeedSetVB != false) {
      this->bNeedSetVB = false;
      FD3D12DescriptorCache::SetVertexBuffers
                (&this->DescriptorCache,&(this->PipelineState).Graphics.VBCache);
    }
    if (this->bNeedSetViewports != false) {
      pFVar7 = this->CmdContext;
      this->bNeedSetViewports = false;
      if (*(longlong *)&pFVar7->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
      }
      plVar11 = *(longlong **)(*(longlong *)&pFVar7->field_0x188 + 0x28);
      piVar24 = (int *)(*(longlong *)&pFVar7->field_0x188 + 0x168);
      *piVar24 = *piVar24 + 1;
      (**(code **)(*plVar11 + 0xa8))
                (plVar11,(this->PipelineState).Graphics.CurrentNumberOfViewports,
                 (this->PipelineState).Graphics.CurrentViewport);
    }
    if (this->bNeedSetScissorRects != false) {
      pFVar7 = this->CmdContext;
      this->bNeedSetScissorRects = false;
      if (*(longlong *)&pFVar7->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
      }
      plVar11 = *(longlong **)(*(longlong *)&pFVar7->field_0x188 + 0x28);
      piVar24 = (int *)(*(longlong *)&pFVar7->field_0x188 + 0x168);
      *piVar24 = *piVar24 + 1;
      (**(code **)(*plVar11 + 0xb0))
                (plVar11,(this->PipelineState).Graphics.CurrentNumberOfScissorRects,
                 (this->PipelineState).Graphics.CurrentScissorRects);
    }
    if (this->bNeedSetPrimitiveTopology != false) {
      pFVar7 = this->CmdContext;
      this->bNeedSetPrimitiveTopology = false;
      if (*(longlong *)&pFVar7->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
      }
      plVar11 = *(longlong **)(*(longlong *)&pFVar7->field_0x188 + 0x28);
      piVar24 = (int *)(*(longlong *)&pFVar7->field_0x188 + 0x168);
      *piVar24 = *piVar24 + 1;
      (**(code **)(*plVar11 + 0xa0))
                (plVar11,(this->PipelineState).Graphics.CurrentPrimitiveTopology);
    }
    if (this->bNeedSetBlendFactor != false) {
      pFVar7 = this->CmdContext;
      this->bNeedSetBlendFactor = false;
      if (*(longlong *)&pFVar7->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
      }
      plVar11 = *(longlong **)(*(longlong *)&pFVar7->field_0x188 + 0x28);
      piVar24 = (int *)(*(longlong *)&pFVar7->field_0x188 + 0x168);
      *piVar24 = *piVar24 + 1;
      (**(code **)(*plVar11 + 0xb8))(plVar11,(this->PipelineState).Graphics.CurrentBlendFactor);
    }
    if (this->bNeedSetStencilRef != false) {
      pFVar7 = this->CmdContext;
      this->bNeedSetStencilRef = false;
      if (*(longlong *)&pFVar7->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
      }
      plVar11 = *(longlong **)(*(longlong *)&pFVar7->field_0x188 + 0x28);
      piVar24 = (int *)(*(longlong *)&pFVar7->field_0x188 + 0x168);
      *piVar24 = *piVar24 + 1;
      (**(code **)(*plVar11 + 0xc0))(plVar11,(this->PipelineState).Graphics.CurrentReferenceStencil)
      ;
    }
    if (this->bNeedSetRTs != false) {
      pFVar12 = (this->PipelineState).Graphics.CurrentDepthStencilTarget;
      uVar26 = (this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
      this->bNeedSetRTs = false;
      FD3D12DescriptorCache::SetRenderTargets
                (&this->DescriptorCache,(this->PipelineState).Graphics.RenderTargetArray,uVar26,
                 pFVar12);
    }
    if (this->bNeedSetDepthBounds != false) {
      fVar1 = (this->PipelineState).Graphics.MaxDepth;
      fVar2 = (this->PipelineState).Graphics.MinDepth;
      this->bNeedSetDepthBounds = false;
      (**(code **)(*(longlong *)this->CmdContext + 0x30))(this->CmdContext,fVar2,fVar1);
    }
    if ((this->bNeedSetShadingRate != false) || (this->bNeedSetShadingRateImage != false)) {
      pFVar13 = (this->PipelineState).Graphics.ShadingRateImage;
      EVar4 = (this->PipelineState).Graphics.DrawShadingRate;
      this->bNeedSetShadingRate = false;
      this->bNeedSetShadingRateImage = false;
      (**(code **)(*(longlong *)this->CmdContext + 0x38))
                (this->CmdContext,EVar4,pFVar13,&(this->PipelineState).Graphics.Combiners);
    }
  }
  uVar26 = -(uint)(param_2 != Graphics) & 5;
  uVar27 = (ulonglong)uVar26;
  uVar31 = (param_2 != Graphics) + 5;
  if ((bVar3 & 0x50) == 0x10) {
    ApplySamplerTables(this,(FD3D12RootSignature *)*plVar30,uVar26,uVar31);
  }
  if (bVar20) {
    ApplyResourceTables(this,(FD3D12RootSignature *)*plVar30,uVar26,uVar31);
  }
  else if (((bVar3 & 0x20) != 0) && (uVar26 < uVar31)) {
    piVar24 = &(this->PipelineState).Common.QueuedBindlessSRVs[uVar27].ArrayNum;
    uVar28 = uVar27;
    do {
      ppFVar14 = *(FD3D12UnorderedAccessView ***)(piVar24 + 0x16);
      iVar21 = piVar24[0x18];
      if ((iVar21 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar15 = (((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)(piVar24 + -2))
                ->AllocatorInstance).Data;
      iVar6 = *piVar24;
      if ((iVar6 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      local_198._12_4_ = uStack_1ac;
      local_198.ArrayNum = iVar21;
      local_188._12_4_ = uStack_19c;
      local_188.ArrayNum = iVar6;
      local_198.DataPtr = ppFVar14;
      local_188.DataPtr = (FD3D12ShaderResourceView **)pFVar15;
      FD3D12DescriptorCache::PrepareBindlessViews
                (&this->DescriptorCache,(EShaderFrequency)uVar28,&local_188,&local_198);
      *piVar24 = 0;
      if (piVar24[1] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar24 + -2),0,piVar24 + 1);
      }
      piVar24[0x18] = 0;
      if (piVar24[0x19] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar24 + 0x16),0,piVar24 + 0x19);
      }
      uVar32 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar32;
      piVar24 = piVar24 + 4;
    } while (uVar32 < uVar31);
  }
  pFVar16 = (FD3D12RootSignature *)*plVar30;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  if (uVar26 < uVar31) {
    puVar25 = local_58 + uVar27;
    puVar29 = (this->PipelineState).Common.CurrentShaderCBCounts + uVar27;
    uVar28 = uVar27;
    do {
      if ((1 < (int)uVar28 - 1U) || (GRHIGlobals.SupportsMeshShadersTier0 != false)) {
        *puVar25 = *(ushort *)((longlong)puVar25 + (longlong)this + (0x2018 - (longlong)local_58)) &
                   (1 << ((byte)*puVar29 & 0x1f)) - 1U;
      }
      uVar26 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar26;
      puVar29 = puVar29 + 1;
      puVar25 = puVar25 + 1;
    } while (uVar26 < uVar31);
    puVar25 = local_58 + uVar27;
    do {
      if (*puVar25 != 0) {
        FD3D12DescriptorCache::SetRootConstantBuffers
                  (&this->DescriptorCache,(EShaderFrequency)uVar27,pFVar16,
                   &(this->PipelineState).Common.CBVCache,*puVar25,this);
      }
      uVar26 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar26;
      puVar25 = puVar25 + 1;
    } while (uVar26 < uVar31);
  }
  cVar5 = *(char *)(*plVar30 + 0xb9);
  if (((this->PipelineState).Common.bNeedSetRootConstants != false) && (-1 < cVar5)) {
    local_68 = (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.X;
    local_64 = (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.Y;
    local_60 = (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.Z;
    local_5c = (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.W;
    (this->PipelineState).Common.bNeedSetRootConstants = false;
    if (param_2 == Compute) {
      pFVar7 = this->CmdContext;
      if (*(longlong *)&pFVar7->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
      }
      plVar30 = *(longlong **)(*(longlong *)&pFVar7->field_0x188 + 0x28);
      piVar24 = (int *)(*(longlong *)&pFVar7->field_0x188 + 0x168);
      *piVar24 = *piVar24 + 1;
      (**(code **)(*plVar30 + 0x118))(plVar30,(int)cVar5,4,&local_68);
    }
    else if (param_2 == Graphics) {
      pFVar7 = this->CmdContext;
      if (*(longlong *)&pFVar7->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
      }
      plVar30 = *(longlong **)(*(longlong *)&pFVar7->field_0x188 + 0x28);
      piVar24 = (int *)(*(longlong *)&pFVar7->field_0x188 + 0x168);
      *piVar24 = *piVar24 + 1;
      (**(code **)(*plVar30 + 0x120))(plVar30,(int)cVar5,4,&local_68);
    }
    else {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                          ,0x281,L"");
      if (bVar20) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
  }
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this->CmdContext);
  return;
}

// ClearResourceViewCaches @ 145a54840

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::ClearResourceViewCaches
          (FD3D12StateCache *this,EShaderFrequency param_1,FD3D12ResourceLocation **param_2,
          EShaderParameterTypeMask param_3)

{
  FD3D12ShaderResourceView *pFVar1;
  FD3D12UnorderedAccessView *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FD3D12UnorderedAccessView *(*papFVar7) [16];
  FD3D12ShaderResourceView *(*papFVar8) [64];
  
  uVar5 = 0;
  if (((param_3 & SRVMask) != 0) &&
     (-1 < (this->PipelineState).Common.SRVCache.MaxBoundIndex[param_1])) {
    papFVar8 = (this->PipelineState).Common.SRVCache.Views + param_1;
    uVar6 = uVar5;
    do {
      pFVar1 = (*papFVar8)[0];
      if (pFVar1 != (FD3D12ShaderResourceView *)0x0) {
        if ((pFVar1->_padding_ == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x100,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((FD3D12ResourceLocation *)pFVar1->_padding_ == *param_2) {
          SetShaderResourceView(this,param_1,(FD3D12ShaderResourceView *)0x0,uVar6);
        }
      }
      uVar6 = uVar6 + 1;
      papFVar8 = (FD3D12ShaderResourceView *(*) [64])(*papFVar8 + 1);
    } while ((int)uVar6 <= (this->PipelineState).Common.SRVCache.MaxBoundIndex[param_1]);
  }
  if ((param_3 & UAVMask) != 0) {
    papFVar7 = (this->PipelineState).Common.UAVCache.Views + param_1;
    do {
      pFVar2 = (*papFVar7)[0];
      if (pFVar2 != (FD3D12UnorderedAccessView *)0x0) {
        if ((pFVar2->_padding_ == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x100,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((FD3D12ResourceLocation *)pFVar2->_padding_ == *param_2) {
          SetUAV(this,param_1,uVar5,(FD3D12UnorderedAccessView *)0x0,0xffffffff);
        }
      }
      uVar5 = uVar5 + 1;
      papFVar7 = (FD3D12UnorderedAccessView *(*) [16])(*papFVar7 + 1);
    } while ((int)uVar5 < 0x11);
  }
  return;
}

// ClearSRVs @ 145a549a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::ClearSRVs(FD3D12StateCache *this)

{
  if (this->bSRVSCleared == false) {
    FD3D12ShaderResourceViewCache::Clear(&(this->PipelineState).Common.SRVCache);
    this->bSRVSCleared = true;
  }
  return;
}

// ClearState @ 145a549d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::ClearState(FD3D12StateCache *this)

{
  <unnamed_type_Compute> *p<Var1;
  FD3D12ComputePipelineState *this_00;
  undefined1 auStack_33c8 [32];
  FGraphicsState local_33a8;
  TRefCountPtr<FD3D12ComputePipelineState> local_2c48;
  undefined4 local_2c40;
  EAsyncComputeBudget local_2c3c;
  <unnamed_type_Common> local_2c38;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x145a549f0;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_33c8;
  <unnamed-type-PipelineState>::FGraphicsState::FGraphicsState(&local_33a8);
  local_2c3c = EAll_4;
  local_2c40 = 0;
  local_2c48.Reference = (FD3D12ComputePipelineState *)0x0;
  FD3D12ShaderResourceViewCache::Clear(&local_2c38.SRVCache);
  local_2c38.CBVCache._padding_ = -1;
  local_2c38.CBVCache._padding_._0_4_ = 0xffffffff;
  memset(local_2c38.CBVCache.CurrentGPUVirtualAddress,0,0x300);
  memset(local_2c38.CBVCache.Resources,0,0x300);
  local_2c38.UAVCache._padding_ = -1;
  local_2c38.UAVCache._padding_._0_4_ = 0xffffffff;
  memset(local_2c38.UAVCache.Views,0,0x300);
  memset(local_2c38.UAVCache.Resources,0,0x300);
  local_2c38.UAVCache.StartSlot[4] = ___xmm_ffffffffffffffffffffffffffffffff;
  local_2c38.UAVCache.StartSlot[5] = _UNK_15060db24;
  local_2c38.SamplerCache._padding_ = -1;
  local_2c38.UAVCache.StartSlot[0] = ___xmm_ffffffffffffffffffffffffffffffff;
  local_2c38.UAVCache.StartSlot[1] = _UNK_15060db24;
  local_2c38.UAVCache.StartSlot[2] = _UNK_15060db28;
  local_2c38.UAVCache.StartSlot[3] = _UNK_15060db2c;
  local_2c38.SamplerCache._padding_ = -1;
  local_2c38.SamplerCache._padding_ = -1;
  memset(local_2c38.SamplerCache.States,0,0x600);
  local_2c38.CurrentPipelineStateObject = (ID3D12PipelineState *)0x0;
  local_2c38._10960_8_ = 0;
  local_2c38.CurrentShaderSamplerCounts[4] = 0;
  local_2c38.CurrentShaderSamplerCounts[5] = 0;
  local_2c38.CurrentShaderSamplerCounts[0] = 0;
  local_2c38.CurrentShaderSamplerCounts[1] = 0;
  local_2c38.CurrentShaderSamplerCounts[2] = 0;
  local_2c38.CurrentShaderSamplerCounts[3] = 0;
  local_2c38.CurrentShaderSRVCounts[4] = 0;
  local_2c38.CurrentShaderSRVCounts[5] = 0;
  local_2c38.CurrentShaderSRVCounts[0] = 0;
  local_2c38.CurrentShaderSRVCounts[1] = 0;
  local_2c38.CurrentShaderSRVCounts[2] = 0;
  local_2c38.CurrentShaderSRVCounts[3] = 0;
  local_2c38.CurrentShaderCBCounts[4] = 0;
  local_2c38.CurrentShaderCBCounts[5] = 0;
  local_2c38.CurrentShaderCBCounts[0] = 0;
  local_2c38.CurrentShaderCBCounts[1] = 0;
  local_2c38.CurrentShaderCBCounts[2] = 0;
  local_2c38.CurrentShaderCBCounts[3] = 0;
  local_2c38.CurrentShaderUAVCounts[4] = 0;
  local_2c38.CurrentShaderUAVCounts[5] = 0;
  local_2c38.CurrentShaderUAVCounts[0] = 0;
  local_2c38.CurrentShaderUAVCounts[1] = 0;
  local_2c38.CurrentShaderUAVCounts[2] = 0;
  local_2c38.CurrentShaderUAVCounts[3] = 0;
  local_2c38._11076_4_ = 0;
  local_2c38.ShaderRootConstants.field0_0x0._4_8_ = 0;
  local_2c38.ShaderRootConstants.field0_0x0._s_0.W = 0;
  local_2c38.QueuedBindlessSRVs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessSRVs[0].ArrayNum = 0;
  local_2c38.QueuedBindlessSRVs[0].ArrayMax = 0;
  local_2c38.QueuedBindlessSRVs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessSRVs[1].ArrayNum = 0;
  local_2c38.QueuedBindlessSRVs[1].ArrayMax = 0;
  local_2c38.QueuedBindlessSRVs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessSRVs[2].ArrayNum = 0;
  local_2c38.QueuedBindlessSRVs[2].ArrayMax = 0;
  local_2c38.QueuedBindlessSRVs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessSRVs[3].ArrayNum = 0;
  local_2c38.QueuedBindlessSRVs[3].ArrayMax = 0;
  local_2c38.QueuedBindlessSRVs[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessSRVs[4].ArrayNum = 0;
  local_2c38.QueuedBindlessSRVs[4].ArrayMax = 0;
  local_2c38.QueuedBindlessSRVs[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessSRVs[5].ArrayNum = 0;
  local_2c38.QueuedBindlessSRVs[5].ArrayMax = 0;
  local_2c38.QueuedBindlessUAVs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessUAVs[0].ArrayNum = 0;
  local_2c38.QueuedBindlessUAVs[0].ArrayMax = 0;
  local_2c38.QueuedBindlessUAVs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessUAVs[1].ArrayNum = 0;
  local_2c38.QueuedBindlessUAVs[1].ArrayMax = 0;
  local_2c38.QueuedBindlessUAVs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessUAVs[2].ArrayNum = 0;
  local_2c38.QueuedBindlessUAVs[2].ArrayMax = 0;
  local_2c38.QueuedBindlessUAVs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessUAVs[3].ArrayNum = 0;
  local_2c38.QueuedBindlessUAVs[3].ArrayMax = 0;
  local_2c38.QueuedBindlessUAVs[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessUAVs[4].ArrayNum = 0;
  local_2c38.QueuedBindlessUAVs[4].ArrayMax = 0;
  local_2c38.QueuedBindlessUAVs[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c38.QueuedBindlessUAVs[5].ArrayNum = 0;
  local_2c38.QueuedBindlessUAVs[5].ArrayMax = 0;
  <unnamed-type-PipelineState>::FGraphicsState::operator=
            (&(this->PipelineState).Graphics,&local_33a8);
  p<Var1 = &(this->PipelineState).Compute;
  if (p<Var1 != (<unnamed_type_Compute> *)&local_2c48) {
    this_00 = (p<Var1->CurrentPipelineStateObject).Reference;
    (p<Var1->CurrentPipelineStateObject).Reference = local_2c48.Reference;
    local_2c48.Reference = (FD3D12ComputePipelineState *)0x0;
    if (this_00 != (FD3D12ComputePipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  (this->PipelineState).Compute.bNeedSetRootSignature = local_2c40._0_1_;
  (this->PipelineState).Compute.ComputeBudget = local_2c3c;
  <unnamed-type-PipelineState>::<unnamed-type-Common>::operator=
            (&(this->PipelineState).Common,&local_2c38);
  <unnamed-type-PipelineState>::<unnamed-type-Common>::~<unnamed_type_Common>(&local_2c38);
  if (local_2c48.Reference != (FD3D12ComputePipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2c48.Reference);
  }
  if (local_33a8.CurrentPipelineStateObject.Reference != (FD3D12GraphicsPipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)local_33a8.CurrentPipelineStateObject.Reference);
  }
  DirtyState(this);
  return;
}

// ClearUAVs @ 145a54cd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FD3D12StateCache::ClearUAVs(FD3D12StateCache *this,EShaderFrequency param_1)

{
  longlong lVar1;
  ushort *puVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  lVar1 = uVar3 * 2;
  if ((this->PipelineState).Common.UAVCache.Views[uVar3][0] != (FD3D12UnorderedAccessView *)0x0) {
    *(ushort *)((longlong)((this->PipelineState).Common.UAVCache.Views + -1) + 0x70 + lVar1) =
         *(ushort *)((longlong)((this->PipelineState).Common.UAVCache.Views + -1) + 0x70 + lVar1) |
         1;
  }
  puVar2 = (ushort *)((longlong)((this->PipelineState).Common.UAVCache.Views + -1) + 0x70 + lVar1);
  (this->PipelineState).Common.UAVCache.Views[uVar3][0] = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [1] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 2;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][1]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [2] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 4;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][2]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [3] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 8;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][3]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [4] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x10;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][4]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [5] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x20;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][5]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [6] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x40;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][6]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [7] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x80;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][7]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [8] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x100;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][8]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [9] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x200;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][9]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [10] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x400;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3][10]
       = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [0xb] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x800;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
  [0xb] = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [0xc] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x1000;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
  [0xc] = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [0xd] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x2000;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
  [0xd] = (FD3D12UnorderedAccessView *)0x0;
  if (((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
      [0xe] != (FD3D12UnorderedAccessView *)0x0) {
    *puVar2 = *puVar2 | 0x4000;
  }
  ((FD3D12UnorderedAccessViewCache *)(&(this->PipelineState).Common.CBVCache + 1))->Views[uVar3]
  [0xe] = (FD3D12UnorderedAccessView *)0x0;
  if ((this->PipelineState).Common.UAVCache.Views[uVar3][0xf] != (FD3D12UnorderedAccessView *)0x0) {
    *(ushort *)((longlong)((this->PipelineState).Common.UAVCache.Views + -1) + 0x70 + uVar3 * 2) =
         *puVar2 | 0x8000;
  }
  (this->PipelineState).Common.UAVCache.Views[uVar3][0xf] = (FD3D12UnorderedAccessView *)0x0;
  return;
}

// DirtySamplerDescriptorTables @ 145a63670

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::DirtySamplerDescriptorTables(FD3D12StateCache *this)

{
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  return;
}

// DirtyState @ 145a636a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FD3D12StateCache::DirtyState(FD3D12StateCache *this)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = _UNK_15060db28;
  lVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  (this->PipelineState).Common.bNeedSetPSO = true;
  (this->PipelineState).Common.bNeedSetRootConstants = true;
  (this->PipelineState).Compute.bNeedSetRootSignature = true;
  (this->PipelineState).Graphics.bNeedSetRootSignature = true;
  this->bNeedSetVB = true;
  this->bNeedSetRTs = true;
  this->bNeedSetViewports = true;
  this->bNeedSetScissorRects = true;
  this->bNeedSetPrimitiveTopology = true;
  this->bNeedSetBlendFactor = true;
  this->bNeedSetStencilRef = true;
  this->bNeedSetDepthBounds = GRHIGlobals.SupportsDepthBoundsTest;
  this->bNeedSetShadingRate = GRHIGlobals.VariableRateShading.SupportsPipeline;
  this->bNeedSetShadingRateImage = GRHIGlobals.VariableRateShading.SupportsAttachment;
  (this->PipelineState).Common.SRVCache._padding_ = lVar1;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.SRVCache._padding_ = lVar1;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.SRVCache._padding_ = lVar1;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.UAVCache._padding_ = -1;
  *(undefined4 *)&(this->PipelineState).Common.UAVCache._padding_ = 0xffffffff;
  (this->PipelineState).Common.CBVCache._padding_ = -1;
  *(undefined4 *)&(this->PipelineState).Common.CBVCache._padding_ = 0xffffffff;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  return;
}

// DirtyStateForNewCommandList @ 145a63760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FD3D12StateCache::DirtyStateForNewCommandList(FD3D12StateCache *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  uVar1 = (this->PipelineState).Graphics.VBCache.BoundVBMask;
  (this->PipelineState).Common.bNeedSetPSO = true;
  (this->PipelineState).Common.bNeedSetRootConstants = true;
  (this->PipelineState).Compute.bNeedSetRootSignature = true;
  (this->PipelineState).Graphics.bNeedSetRootSignature = true;
  this->bNeedSetPrimitiveTopology = true;
  if (uVar1 != 0) {
    this->bNeedSetVB = true;
  }
  (this->PipelineState).Graphics.IBCache.CurrentIndexBufferView.BufferLocation = 0;
  (this->PipelineState).Graphics.IBCache.CurrentIndexBufferView.SizeInBytes = 0;
  (this->PipelineState).Graphics.IBCache.CurrentIndexBufferView.Format = DXGI_FORMAT_UNKNOWN;
  if (((this->PipelineState).Graphics.CurrentNumberOfRenderTargets != 0) ||
     ((this->PipelineState).Graphics.CurrentDepthStencilTarget != (FD3D12DepthStencilView *)0x0)) {
    this->bNeedSetRTs = true;
  }
  if ((this->PipelineState).Graphics.CurrentNumberOfViewports != 0) {
    this->bNeedSetViewports = true;
  }
  if ((this->PipelineState).Graphics.CurrentNumberOfScissorRects != 0) {
    this->bNeedSetScissorRects = true;
  }
  fVar4 = __real_3f800000;
  if ((((__real_3f800000 != (this->PipelineState).Graphics.CurrentBlendFactor[0]) ||
       (__real_3f800000 != (this->PipelineState).Graphics.CurrentBlendFactor[1])) ||
      (__real_3f800000 != (this->PipelineState).Graphics.CurrentBlendFactor[2])) ||
     (__real_3f800000 != (this->PipelineState).Graphics.CurrentBlendFactor[3])) {
    this->bNeedSetBlendFactor = true;
  }
  if ((this->PipelineState).Graphics.CurrentReferenceStencil != 0) {
    this->bNeedSetStencilRef = true;
  }
  if (((this->PipelineState).Graphics.MinDepth != 0.0) ||
     (fVar4 != (this->PipelineState).Graphics.MaxDepth)) {
    this->bNeedSetDepthBounds = GRHIGlobals.SupportsDepthBoundsTest;
  }
  lVar3 = _UNK_15060db28;
  lVar2 = ___xmm_ffffffffffffffffffffffffffffffff;
  this->bNeedSetShadingRate = GRHIGlobals.VariableRateShading.SupportsPipeline;
  this->bNeedSetShadingRateImage = GRHIGlobals.VariableRateShading.SupportsAttachment;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.SRVCache._padding_ = lVar3;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.SRVCache._padding_ = lVar3;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.SRVCache._padding_ = lVar3;
  (this->PipelineState).Common.UAVCache._padding_ = -1;
  *(undefined4 *)&(this->PipelineState).Common.UAVCache._padding_ = 0xffffffff;
  (this->PipelineState).Common.CBVCache._padding_ = -1;
  *(undefined4 *)&(this->PipelineState).Common.CBVCache._padding_ = 0xffffffff;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  (this->PipelineState).Common.SamplerCache._padding_ = -1;
  return;
}

// DirtyViewDescriptorTables @ 145a63890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::DirtyViewDescriptorTables(FD3D12StateCache *this)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = _UNK_15060db28;
  lVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  (this->PipelineState).Common.SRVCache._padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.SRVCache._padding_ = lVar1;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.SRVCache._padding_ = lVar1;
  (this->PipelineState).Common.SRVCache._padding_ = lVar2;
  (this->PipelineState).Common.UAVCache._padding_ = -1;
  *(undefined4 *)&(this->PipelineState).Common.UAVCache._padding_ = 0xffffffff;
  return;
}

// FlushComputeShaderCache @ 145a68080

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::FlushComputeShaderCache(FD3D12StateCache *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_D3D12UAVBarriers> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res18 [2];
  FStatMessage local_18;
  
  if ((param_1) &&
     (FD3D12ContextCommon::AddGlobalBarrier
                ((FD3D12ContextCommon *)this->CmdContext,UAVCompute,UAVCompute),
     FThreadStats::bPrimaryEnable != false)) {
    FVar3 = StatPtr_STAT_D3D12UAVBarriers;
    if (StatPtr_STAT_D3D12UAVBarriers == (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBarriers>)0x0) {
      pFVar2 = ::FName::FName(local_res18,"STAT_D3D12UAVBarriers");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBarriers>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVBarriers,*pFVar2,
                         L"UAV Barriers","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
                         true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res18[0] = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_18.StatData.Pad[0] = '\x01';
      local_18.StatData.Pad[1] = '\0';
      local_18.StatData.Pad[2] = '\0';
      local_18.StatData.Pad[3] = '\0';
      local_18.StatData.Pad[4] = '\0';
      local_18.StatData.Pad[5] = '\0';
      local_18.StatData.Pad[6] = '\0';
      local_18.StatData.Pad[7] = '\0';
      local_res18[0] = FVar1;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(local_res18,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InternalSetDescriptorHeaps @ 145a6c760

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12StateCache::InternalSetDescriptorHeaps(FD3D12StateCache *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = FD3D12DescriptorCache::SetDescriptorHeaps(&this->DescriptorCache,(uint)param_1 * 2);
  return bVar1;
}

// InternalSetIndexBuffer @ 145a6c780

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::InternalSetIndexBuffer(FD3D12StateCache *this,FD3D12Resource *param_1)

{
  int *piVar1;
  FD3D12CommandContext *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar2 = this->CmdContext;
  if (param_1 == (FD3D12Resource *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&pFVar2->field_0x188 == 0) {
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&pFVar2->field_0x188,param_1);
  pFVar2 = this->CmdContext;
  if (*(longlong *)&pFVar2->field_0x188 == 0) {
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2);
  }
  plVar3 = *(longlong **)(*(longlong *)&pFVar2->field_0x188 + 0x28);
  piVar1 = (int *)(*(longlong *)&pFVar2->field_0x188 + 0x168);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*plVar3 + 0x158))(plVar3,&(this->PipelineState).Graphics.IBCache);
  if ((param_1->bRequiresResourceStateTracking) && (param_1->SubresourceCount != 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource->GetSubresourceCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x5e9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InternalSetPipelineState @ 145a6c870

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::InternalSetPipelineState(FD3D12StateCache *this,FD3D12PipelineState *param_1)

{
  int *piVar1;
  ID3D12PipelineState *pIVar2;
  FD3D12CommandContext *pFVar3;
  longlong *plVar4;
  ID3D12PipelineState *pIVar5;
  
  pIVar2 = (this->PipelineState).Common.CurrentPipelineStateObject;
  if (param_1->InitState == Initialized) {
    pIVar5 = (param_1->PipelineState).Reference;
  }
  else {
    pIVar5 = FD3D12PipelineState::InternalGetPipelineState(param_1);
  }
  if ((((this->PipelineState).Common.bNeedSetPSO != false) || (pIVar2 == (ID3D12PipelineState *)0x0)
      ) || (pIVar2 != pIVar5)) {
    pFVar3 = this->CmdContext;
    (this->PipelineState).Common.CurrentPipelineStateObject = pIVar5;
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    plVar4 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar4 + 200))(plVar4,pIVar5);
    (this->PipelineState).Common.bNeedSetPSO = false;
  }
  return;
}

// InternalSetRootSignature @ 145a6c910

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall
FD3D12StateCache::InternalSetRootSignature
          (FD3D12StateCache *this,ED3D12PipelineType param_1,FD3D12RootSignature *param_2,
          bool param_3)

{
  int *piVar1;
  FD3D12CommandContext *pFVar2;
  longlong *plVar3;
  
  if (param_1 == Compute) {
    if (((this->PipelineState).Compute.bNeedSetRootSignature != false) || (param_3)) {
      pFVar2 = this->CmdContext;
      if (*(longlong *)&pFVar2->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2);
      }
      plVar3 = *(longlong **)(*(longlong *)&pFVar2->field_0x188 + 0x28);
      piVar1 = (int *)(*(longlong *)&pFVar2->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      (**(code **)(*plVar3 + 0xe8))(plVar3,(param_2->RootSignature).Reference);
      (this->PipelineState).Compute.bNeedSetRootSignature = false;
      (this->PipelineState).Common.SRVCache._padding_ = -1;
      *(undefined2 *)((longlong)&(this->PipelineState).Common.UAVCache._padding_ + 2) = 0xffff;
      *(undefined4 *)((longlong)&(this->PipelineState).Common.SamplerCache._padding_ + 4) =
           0xffffffff;
      *(undefined2 *)((longlong)&(this->PipelineState).Common.CBVCache._padding_ + 2) = 0xffff;
      (this->PipelineState).Common.bNeedSetRootConstants = true;
      return true;
    }
  }
  else if ((param_1 == Graphics) &&
          (((this->PipelineState).Graphics.bNeedSetRootSignature != false || (param_3)))) {
    pFVar2 = this->CmdContext;
    if (*(longlong *)&pFVar2->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2);
    }
    plVar3 = *(longlong **)(*(longlong *)&pFVar2->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar2->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar3 + 0xf0))(plVar3,(param_2->RootSignature).Reference);
    (this->PipelineState).Graphics.bNeedSetRootSignature = false;
    (this->PipelineState).Common.SRVCache._padding_ = -1;
    (this->PipelineState).Common.SRVCache._padding_ = -1;
    (this->PipelineState).Common.SRVCache._padding_ = -1;
    (this->PipelineState).Common.SRVCache._padding_ = -1;
    (this->PipelineState).Common.SRVCache._padding_ = -1;
    *(undefined2 *)&(this->PipelineState).Common.UAVCache._padding_ = 0xffff;
    (this->PipelineState).Common.UAVCache._padding_ = -1;
    (this->PipelineState).Common.SamplerCache._padding_ = -1;
    (this->PipelineState).Common.SamplerCache._padding_ = -1;
    *(undefined4 *)&(this->PipelineState).Common.SamplerCache._padding_ = 0xffffffff;
    *(undefined2 *)&(this->PipelineState).Common.CBVCache._padding_ = 0xffff;
    (this->PipelineState).Common.CBVCache._padding_ = -1;
    (this->PipelineState).Common.bNeedSetRootConstants = true;
    return true;
  }
  return false;
}

// InternalSetStreamSource @ 145a6cac0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::InternalSetStreamSource
          (FD3D12StateCache *this,FD3D12ResourceLocation *param_1,uint param_2,uint param_3,
          uint param_4)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong64 local_38;
  int iStack_30;
  
  uVar3 = (ulonglong)param_2;
  if ((param_1 != (FD3D12ResourceLocation *)0x0) &&
     (param_1->UnderlyingResource == (FD3D12Resource *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBufferLocation == nullptr || VertexBufferLocation->GetResource()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x5f0,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0x1f < param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamIndex < (sizeof(*RtlpNumberOf(PipelineState.Graphics.VBCache.CurrentVertexBufferResources)))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x5f2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 == (FD3D12ResourceLocation *)0x0) {
    local_38 = 0;
    iStack_30 = 0;
  }
  else {
    local_38 = (ulonglong)param_4 + param_1->GPUVirtualAddress;
    iStack_30 = (int)param_1->Size - param_4;
  }
  if (((local_38 !=
        (this->PipelineState).Graphics.VBCache.CurrentVertexBufferViews[uVar3].BufferLocation) ||
      (param_3 !=
       *(uint *)((longlong)((this->PipelineState).Graphics.CurrentViewport + 0x10) +
                uVar3 * 0x10 + 0x10))) ||
     (iStack_30 !=
      *(int *)((longlong)((this->PipelineState).Graphics.CurrentViewport + 0x10) +
              uVar3 * 0x10 + 0xc))) {
    this->bNeedSetVB = true;
    (this->PipelineState).Graphics.VBCache.CurrentVertexBufferResources[uVar3] = param_1;
    if (param_1 == (FD3D12ResourceLocation *)0x0) {
      (this->PipelineState).Graphics.VBCache.CurrentVertexBufferViews[uVar3].BufferLocation = 0;
      *(undefined8 *)
       ((longlong)((this->PipelineState).Graphics.CurrentViewport + 0x10) + uVar3 * 0x10 + 0xc) = 0;
      (this->PipelineState).Graphics.VBCache.CurrentVertexBufferResources[uVar3] =
           (FD3D12ResourceLocation *)0x0;
      (this->PipelineState).Graphics.VBCache.Resources[uVar3] = (FD3D12Resource *)0x0;
      uVar5 = (this->PipelineState).Graphics.VBCache.BoundVBMask & ~(1 << (param_2 & 0x1f));
    }
    else {
      (this->PipelineState).Graphics.VBCache.Resources[uVar3] = param_1->UnderlyingResource;
      (this->PipelineState).Graphics.VBCache.CurrentVertexBufferViews[uVar3].BufferLocation =
           local_38;
      *(ulonglong *)
       ((longlong)((this->PipelineState).Graphics.CurrentViewport + 0x10) + uVar3 * 0x10 + 0xc) =
           CONCAT44(param_3,iStack_30);
      uVar5 = (this->PipelineState).Graphics.VBCache.BoundVBMask | 1 << (param_2 & 0x1f);
    }
    (this->PipelineState).Graphics.VBCache.BoundVBMask = uVar5;
    if (uVar5 != 0) {
      iVar1 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar6 = 0;
      if (uVar5 != 0) {
        iVar6 = iVar1;
      }
      (this->PipelineState).Graphics.VBCache.MaxBoundVertexBufferIndex = iVar6;
      return;
    }
    (this->PipelineState).Graphics.VBCache.MaxBoundVertexBufferIndex = -1;
  }
  return;
}

// SetBlendFactor @ 145a7cba0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::SetBlendFactor(FD3D12StateCache *this,float *param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(this->PipelineState).Graphics.CurrentBlendFactor != *(longlong *)param_1) ||
     (*(longlong *)((this->PipelineState).Graphics.CurrentBlendFactor + 2) !=
      *(longlong *)(param_1 + 2))) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(this->PipelineState).Graphics.CurrentBlendFactor = *(undefined8 *)param_1;
    *(undefined8 *)((this->PipelineState).Graphics.CurrentBlendFactor + 2) = uVar1;
    this->bNeedSetBlendFactor = true;
  }
  return;
}

// SetComputePipelineState @ 145a7cea0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetComputePipelineState
          (FD3D12StateCache *this,FD3D12ComputePipelineState *param_1)

{
  int *piVar1;
  FD3D12ComputePipelineState *pFVar2;
  FD3D12PipelineState *this_00;
  ID3D12PipelineState *pIVar3;
  FD3D12CommandContext *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  ID3D12PipelineState *pIVar8;
  uint uVar9;
  longlong lVar10;
  <unnamed_type_Compute> *p<Var11;
  
  if ((param_1 == (FD3D12ComputePipelineState *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputePipelineState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                         ,0x585,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->PipelineState).Compute.CurrentPipelineStateObject.Reference;
  if (pFVar2 == (FD3D12ComputePipelineState *)0x0) {
LAB_145a7cefd:
    (this->PipelineState).Compute.bNeedSetRootSignature = true;
    if (pFVar2 != (FD3D12ComputePipelineState *)0x0) goto LAB_145a7cf09;
  }
  else {
    if (pFVar2 == param_1) {
      return;
    }
    if (pFVar2->_padding_ != param_1->_padding_) goto LAB_145a7cefd;
LAB_145a7cf09:
    if (pFVar2->_padding_ == param_1->_padding_) goto LAB_145a7cf7c;
  }
  uVar9 = 0;
  lVar10 = param_1->_padding_ + 0x110;
  if (param_1->_padding_ == 0) {
    lVar10 = 0;
  }
  if (lVar10 == 0) {
    (this->PipelineState).Common.CurrentShaderSamplerCounts[5] = 0;
    (this->PipelineState).Common.CurrentShaderSRVCounts[5] = 0;
    (this->PipelineState).Common.CurrentShaderCBCounts[5] = 0;
  }
  else {
    (this->PipelineState).Common.CurrentShaderSamplerCounts[5] = (uint)*(byte *)(lVar10 + 0x11);
    (this->PipelineState).Common.CurrentShaderSRVCounts[5] = (uint)*(byte *)(lVar10 + 0x12);
    (this->PipelineState).Common.CurrentShaderCBCounts[5] = (uint)*(byte *)(lVar10 + 0x13);
    uVar9 = (uint)*(byte *)(lVar10 + 0x14);
  }
  (this->PipelineState).Common.CurrentShaderUAVCounts[5] = uVar9;
  this->CmdContext->DirtyUniformBuffers[5] = 0xffff;
LAB_145a7cf7c:
  p<Var11 = &(this->PipelineState).Compute;
  (this->PipelineState).Common.bNeedSetPSO = true;
  pFVar2 = (p<Var11->CurrentPipelineStateObject).Reference;
  if (pFVar2 != param_1) {
    (p<Var11->CurrentPipelineStateObject).Reference = param_1;
    FRHIResource::AddRef((FRHIResource *)param_1);
    if (pFVar2 != (FD3D12ComputePipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  this_00 = (FD3D12PipelineState *)param_1->_padding_;
  pIVar3 = (this->PipelineState).Common.CurrentPipelineStateObject;
  if (this_00->InitState == Initialized) {
    pIVar8 = (this_00->PipelineState).Reference;
  }
  else {
    pIVar8 = FD3D12PipelineState::InternalGetPipelineState(this_00);
  }
  if ((((this->PipelineState).Common.bNeedSetPSO != false) || (pIVar3 == (ID3D12PipelineState *)0x0)
      ) || (pIVar3 != pIVar8)) {
    pFVar4 = this->CmdContext;
    (this->PipelineState).Common.CurrentPipelineStateObject = pIVar8;
    if (*(longlong *)&pFVar4->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4);
    }
    plVar5 = *(longlong **)(*(longlong *)&pFVar4->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar4->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar5 + 200))(plVar5,pIVar8);
    (this->PipelineState).Common.bNeedSetPSO = false;
  }
  return;
}

// SetGraphicsPipelineState @ 145a7d070

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetGraphicsPipelineState
          (FD3D12StateCache *this,FD3D12GraphicsPipelineState *param_1)

{
  int *piVar1;
  byte bVar2;
  EPrimitiveType EVar3;
  FD3D12GraphicsPipelineState *pFVar4;
  FRHIMeshShader *pFVar5;
  FRHIAmplificationShader *pFVar6;
  FRHIPixelShader *pFVar7;
  FRHIGeometryShader *pFVar8;
  FD3D12PipelineState *this_00;
  ID3D12PipelineState *pIVar9;
  FD3D12CommandContext *pFVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined8 uVar13;
  bool bVar14;
  ID3D12PipelineState *pIVar15;
  uint uVar16;
  FRHIVertexShader *pFVar17;
  FRHIVertexShader *pFVar18;
  uint uVar19;
  FRHIVertexShader *pFVar20;
  
  if ((param_1 == (FD3D12GraphicsPipelineState *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("GraphicsPipelineState",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                          ,0x5a1,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = (this->PipelineState).Graphics.CurrentPipelineStateObject.Reference;
  pFVar20 = (FRHIVertexShader *)0x0;
  uVar16 = 0;
  uVar19 = 0;
  if (pFVar4 == (FD3D12GraphicsPipelineState *)0x0) {
LAB_145a7d0de:
    pFVar18 = (param_1->PipelineStateInitializer).BoundShaderState.VertexShaderRHI;
    pFVar17 = pFVar18 + 1;
    if (pFVar18 == (FRHIVertexShader *)0x0) {
      pFVar17 = pFVar20;
    }
    if (pFVar17 == (FRHIVertexShader *)0x0) {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[0] = 0;
      (this->PipelineState).Common.CurrentShaderSRVCounts[0] = 0;
      (this->PipelineState).Common.CurrentShaderCBCounts[0] = 0;
    }
    else {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[0] = (uint)(byte)pFVar17->field_0x11;
      (this->PipelineState).Common.CurrentShaderSRVCounts[0] = (uint)(byte)pFVar17->field_0x12;
      (this->PipelineState).Common.CurrentShaderCBCounts[0] = (uint)(byte)pFVar17->field_0x13;
      uVar16 = (uint)(byte)pFVar17->field_0x14;
    }
    (this->PipelineState).Common.CurrentShaderUAVCounts[0] = uVar16;
    this->CmdContext->DirtyUniformBuffers[0] = 0xffff;
    if (pFVar4 != (FD3D12GraphicsPipelineState *)0x0) goto LAB_145a7d143;
LAB_145a7d157:
    pFVar5 = (param_1->PipelineStateInitializer).BoundShaderState.MeshShaderRHI;
    pFVar18 = (FRHIVertexShader *)(pFVar5 + 1);
    if (pFVar5 == (FRHIMeshShader *)0x0) {
      pFVar18 = pFVar20;
    }
    if (pFVar18 == (FRHIVertexShader *)0x0) {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[1] = 0;
      (this->PipelineState).Common.CurrentShaderSRVCounts[1] = 0;
      (this->PipelineState).Common.CurrentShaderCBCounts[1] = 0;
      uVar16 = uVar19;
    }
    else {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[1] = (uint)(byte)pFVar18->field_0x11;
      (this->PipelineState).Common.CurrentShaderSRVCounts[1] = (uint)(byte)pFVar18->field_0x12;
      (this->PipelineState).Common.CurrentShaderCBCounts[1] = (uint)(byte)pFVar18->field_0x13;
      uVar16 = (uint)(byte)pFVar18->field_0x14;
    }
    (this->PipelineState).Common.CurrentShaderUAVCounts[1] = uVar16;
    this->CmdContext->DirtyUniformBuffers[1] = 0xffff;
    if (pFVar4 != (FD3D12GraphicsPipelineState *)0x0) goto LAB_145a7d1bc;
LAB_145a7d1d0:
    pFVar6 = (param_1->PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI;
    pFVar18 = (FRHIVertexShader *)(pFVar6 + 1);
    if (pFVar6 == (FRHIAmplificationShader *)0x0) {
      pFVar18 = pFVar20;
    }
    if (pFVar18 == (FRHIVertexShader *)0x0) {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[2] = 0;
      (this->PipelineState).Common.CurrentShaderSRVCounts[2] = 0;
      (this->PipelineState).Common.CurrentShaderCBCounts[2] = 0;
      uVar16 = uVar19;
    }
    else {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[2] = (uint)(byte)pFVar18->field_0x11;
      (this->PipelineState).Common.CurrentShaderSRVCounts[2] = (uint)(byte)pFVar18->field_0x12;
      (this->PipelineState).Common.CurrentShaderCBCounts[2] = (uint)(byte)pFVar18->field_0x13;
      uVar16 = (uint)(byte)pFVar18->field_0x14;
    }
    (this->PipelineState).Common.CurrentShaderUAVCounts[2] = uVar16;
    this->CmdContext->DirtyUniformBuffers[2] = 0xffff;
    if (pFVar4 != (FD3D12GraphicsPipelineState *)0x0) goto LAB_145a7d235;
LAB_145a7d249:
    pFVar7 = (param_1->PipelineStateInitializer).BoundShaderState.PixelShaderRHI;
    pFVar18 = (FRHIVertexShader *)(pFVar7 + 1);
    if (pFVar7 == (FRHIPixelShader *)0x0) {
      pFVar18 = pFVar20;
    }
    if (pFVar18 == (FRHIVertexShader *)0x0) {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[3] = 0;
      (this->PipelineState).Common.CurrentShaderSRVCounts[3] = 0;
      (this->PipelineState).Common.CurrentShaderCBCounts[3] = 0;
      uVar16 = uVar19;
    }
    else {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[3] = (uint)(byte)pFVar18->field_0x11;
      (this->PipelineState).Common.CurrentShaderSRVCounts[3] = (uint)(byte)pFVar18->field_0x12;
      (this->PipelineState).Common.CurrentShaderCBCounts[3] = (uint)(byte)pFVar18->field_0x13;
      uVar16 = (uint)(byte)pFVar18->field_0x14;
    }
    (this->PipelineState).Common.CurrentShaderUAVCounts[3] = uVar16;
    this->CmdContext->DirtyUniformBuffers[3] = 0xffff;
    if (pFVar4 != (FD3D12GraphicsPipelineState *)0x0) goto LAB_145a7d2ae;
LAB_145a7d2c2:
    pFVar8 = (param_1->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI;
    pFVar18 = (FRHIVertexShader *)(pFVar8 + 1);
    if (pFVar8 == (FRHIGeometryShader *)0x0) {
      pFVar18 = pFVar20;
    }
    if (pFVar18 == (FRHIVertexShader *)0x0) {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[4] = 0;
      (this->PipelineState).Common.CurrentShaderSRVCounts[4] = 0;
      (this->PipelineState).Common.CurrentShaderCBCounts[4] = 0;
      uVar16 = uVar19;
    }
    else {
      (this->PipelineState).Common.CurrentShaderSamplerCounts[4] = (uint)(byte)pFVar18->field_0x11;
      (this->PipelineState).Common.CurrentShaderSRVCounts[4] = (uint)(byte)pFVar18->field_0x12;
      (this->PipelineState).Common.CurrentShaderCBCounts[4] = (uint)(byte)pFVar18->field_0x13;
      uVar16 = (uint)(byte)pFVar18->field_0x14;
    }
    (this->PipelineState).Common.CurrentShaderUAVCounts[4] = uVar16;
    this->CmdContext->DirtyUniformBuffers[4] = 0xffff;
    if (pFVar4 != (FD3D12GraphicsPipelineState *)0x0) goto LAB_145a7d327;
  }
  else {
    if (pFVar4 == param_1) {
      return;
    }
    if ((pFVar4->PipelineStateInitializer).BoundShaderState.VertexShaderRHI !=
        (param_1->PipelineStateInitializer).BoundShaderState.VertexShaderRHI) goto LAB_145a7d0de;
LAB_145a7d143:
    if ((pFVar4->PipelineStateInitializer).BoundShaderState.MeshShaderRHI !=
        (param_1->PipelineStateInitializer).BoundShaderState.MeshShaderRHI) goto LAB_145a7d157;
LAB_145a7d1bc:
    if ((pFVar4->PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI !=
        (param_1->PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI)
    goto LAB_145a7d1d0;
LAB_145a7d235:
    if ((pFVar4->PipelineStateInitializer).BoundShaderState.PixelShaderRHI !=
        (param_1->PipelineStateInitializer).BoundShaderState.PixelShaderRHI) goto LAB_145a7d249;
LAB_145a7d2ae:
    if ((pFVar4->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI !=
        (param_1->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI) goto LAB_145a7d2c2;
LAB_145a7d327:
    if (pFVar4->_padding_ == param_1->_padding_) goto LAB_145a7d335;
  }
  (this->PipelineState).Graphics.bNeedSetRootSignature = true;
LAB_145a7d335:
  uVar13 = *(undefined8 *)((param_1->StreamStrides).Elements + 4);
  *(undefined8 *)(this->PipelineState).Graphics.StreamStrides.Elements =
       *(undefined8 *)(param_1->StreamStrides).Elements;
  *(undefined8 *)((this->PipelineState).Graphics.StreamStrides.Elements + 4) = uVar13;
  uVar13 = *(undefined8 *)((param_1->StreamStrides).Elements + 0xc);
  *(undefined8 *)((this->PipelineState).Graphics.StreamStrides.Elements + 8) =
       *(undefined8 *)((param_1->StreamStrides).Elements + 8);
  *(undefined8 *)((this->PipelineState).Graphics.StreamStrides.Elements + 0xc) = uVar13;
  (this->PipelineState).Graphics.StreamStrides.Elements[0x10] =
       (param_1->StreamStrides).Elements[0x10];
  (this->PipelineState).Common.bNeedSetPSO = true;
  pFVar4 = (this->PipelineState).Graphics.CurrentPipelineStateObject.Reference;
  if (pFVar4 != param_1) {
    (this->PipelineState).Graphics.CurrentPipelineStateObject.Reference = param_1;
    FRHIResource::AddRef((FRHIResource *)param_1);
    if (pFVar4 != (FD3D12GraphicsPipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  EVar3 = (param_1->PipelineStateInitializer).PrimitiveType;
  if ((this->PipelineState).Graphics.CurrentPrimitiveType != EVar3) {
    (this->PipelineState).Graphics.CurrentPrimitiveType = EVar3;
    bVar2 = (&DAT_1510880ec)[EVar3];
    if ((bVar2 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("D3DType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                            ,0x124,L"Unknown primitive type: %u"), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (this->PipelineState).Graphics.CurrentPrimitiveTopology = (uint)bVar2;
    this->bNeedSetPrimitiveTopology = true;
    if (EVar3 == PT_TriangleList) {
      uVar16 = 3;
    }
    else {
      uVar16 = 2;
      if ((EVar3 != PT_LineList) && (uVar16 = 1, EVar3 == PT_RectList)) {
        uVar16 = 3;
      }
    }
    (this->PipelineState).Graphics.PrimitiveTypeFactor = uVar16;
    if (EVar3 == PT_TriangleStrip) {
      uVar19 = 2;
    }
    (this->PipelineState).Graphics.PrimitiveTypeOffset = uVar19;
  }
  this_00 = (FD3D12PipelineState *)param_1->_padding_;
  pIVar9 = (this->PipelineState).Common.CurrentPipelineStateObject;
  if (this_00->InitState == Initialized) {
    pIVar15 = (this_00->PipelineState).Reference;
  }
  else {
    pIVar15 = FD3D12PipelineState::InternalGetPipelineState(this_00);
  }
  if ((((this->PipelineState).Common.bNeedSetPSO != false) || (pIVar9 == (ID3D12PipelineState *)0x0)
      ) || (pIVar9 != pIVar15)) {
    pFVar10 = this->CmdContext;
    (this->PipelineState).Common.CurrentPipelineStateObject = pIVar15;
    if (*(longlong *)&pFVar10->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar10 + 8))(pFVar10);
    }
    plVar11 = *(longlong **)(*(longlong *)&pFVar10->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar10->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar11 + 200))(plVar11,pIVar15);
    (this->PipelineState).Common.bNeedSetPSO = false;
  }
  return;
}

// SetNewBindlessResourcesHeap @ 145a7d820

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetNewBindlessResourcesHeap(FD3D12StateCache *this,FD3D12DescriptorHeap *param_1)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->DescriptorCache).BindlessResourcesHeap.Reference;
  if (pFVar2 != param_1) {
    (this->DescriptorCache).BindlessResourcesHeap.Reference = param_1;
    if (param_1 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  (this->PipelineState).Compute.bNeedSetRootSignature = true;
  (this->PipelineState).Graphics.bNeedSetRootSignature = true;
  return;
}

// SetNewBindlessSamplerHeap @ 145a7d890

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetNewBindlessSamplerHeap(FD3D12StateCache *this,FD3D12DescriptorHeap *param_1)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->DescriptorCache).BindlessSamplersHeap.Reference;
  if (pFVar2 != param_1) {
    (this->DescriptorCache).BindlessSamplersHeap.Reference = param_1;
    if (param_1 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  (this->PipelineState).Compute.bNeedSetRootSignature = true;
  (this->PipelineState).Graphics.bNeedSetRootSignature = true;
  return;
}

// SetNewShaderData @ 145a7d900

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetNewShaderData
          (FD3D12StateCache *this,EShaderFrequency param_1,FD3D12ShaderData *param_2)

{
  uint uVar1;
  
  if (param_2 == (FD3D12ShaderData *)0x0) {
    uVar1 = 0;
    (this->PipelineState).Common.CurrentShaderSamplerCounts[param_1] = 0;
    (this->PipelineState).Common.CurrentShaderSRVCounts[param_1] = 0;
    (this->PipelineState).Common.CurrentShaderCBCounts[param_1] = 0;
  }
  else {
    (this->PipelineState).Common.CurrentShaderSamplerCounts[param_1] =
         (uint)(param_2->ResourceCounts).NumSamplers;
    (this->PipelineState).Common.CurrentShaderSRVCounts[param_1] =
         (uint)(param_2->ResourceCounts).NumSRVs;
    (this->PipelineState).Common.CurrentShaderCBCounts[param_1] =
         (uint)(param_2->ResourceCounts).NumCBs;
    uVar1 = (uint)(param_2->ResourceCounts).NumUAVs;
  }
  (this->PipelineState).Common.CurrentShaderUAVCounts[param_1] = uVar1;
  this->CmdContext->DirtyUniformBuffers[param_1] = 0xffff;
  return;
}

// SetRenderTargets @ 145a7dab0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetRenderTargets
          (FD3D12StateCache *this,uint param_1,FD3D12RenderTargetView **param_2,
          FD3D12DepthStencilView *param_3)

{
  uint *puVar1;
  FD3D12RenderTargetView *pFVar2;
  FD3D12RenderTargetView *pFVar3;
  
  if ((this->PipelineState).Graphics.CurrentDepthStencilTarget != param_3) {
    (this->PipelineState).Graphics.CurrentDepthStencilTarget = param_3;
    this->bNeedSetRTs = true;
  }
  pFVar3 = (FD3D12RenderTargetView *)0x0;
  (this->PipelineState).Graphics.CurrentNumberOfRenderTargets = 0;
  pFVar2 = pFVar3;
  if ((param_1 != 0) && (pFVar2 = *param_2, pFVar2 != (FD3D12RenderTargetView *)0x0)) {
    (this->PipelineState).Graphics.CurrentNumberOfRenderTargets = 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[0] != pFVar2) {
    (this->PipelineState).Graphics.RenderTargetArray[0] = pFVar2;
    this->bNeedSetRTs = true;
  }
  pFVar2 = pFVar3;
  if ((1 < param_1) && (pFVar2 = param_2[1], pFVar2 != (FD3D12RenderTargetView *)0x0)) {
    puVar1 = &(this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
    *puVar1 = *puVar1 + 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[1] != pFVar2) {
    (this->PipelineState).Graphics.RenderTargetArray[1] = pFVar2;
    this->bNeedSetRTs = true;
  }
  pFVar2 = pFVar3;
  if ((2 < param_1) && (pFVar2 = param_2[2], pFVar2 != (FD3D12RenderTargetView *)0x0)) {
    puVar1 = &(this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
    *puVar1 = *puVar1 + 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[2] != pFVar2) {
    (this->PipelineState).Graphics.RenderTargetArray[2] = pFVar2;
    this->bNeedSetRTs = true;
  }
  pFVar2 = pFVar3;
  if ((3 < param_1) && (pFVar2 = param_2[3], pFVar2 != (FD3D12RenderTargetView *)0x0)) {
    puVar1 = &(this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
    *puVar1 = *puVar1 + 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[3] != pFVar2) {
    (this->PipelineState).Graphics.RenderTargetArray[3] = pFVar2;
    this->bNeedSetRTs = true;
  }
  pFVar2 = pFVar3;
  if ((4 < param_1) && (pFVar2 = param_2[4], pFVar2 != (FD3D12RenderTargetView *)0x0)) {
    puVar1 = &(this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
    *puVar1 = *puVar1 + 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[4] != pFVar2) {
    (this->PipelineState).Graphics.RenderTargetArray[4] = pFVar2;
    this->bNeedSetRTs = true;
  }
  pFVar2 = pFVar3;
  if ((5 < param_1) && (pFVar2 = param_2[5], pFVar2 != (FD3D12RenderTargetView *)0x0)) {
    puVar1 = &(this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
    *puVar1 = *puVar1 + 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[5] != pFVar2) {
    (this->PipelineState).Graphics.RenderTargetArray[5] = pFVar2;
    this->bNeedSetRTs = true;
  }
  pFVar2 = pFVar3;
  if ((6 < param_1) && (pFVar2 = param_2[6], pFVar2 != (FD3D12RenderTargetView *)0x0)) {
    puVar1 = &(this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
    *puVar1 = *puVar1 + 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[6] != pFVar2) {
    (this->PipelineState).Graphics.RenderTargetArray[6] = pFVar2;
    this->bNeedSetRTs = true;
  }
  if ((7 < param_1) && (pFVar3 = param_2[7], pFVar3 != (FD3D12RenderTargetView *)0x0)) {
    puVar1 = &(this->PipelineState).Graphics.CurrentNumberOfRenderTargets;
    *puVar1 = *puVar1 + 1;
  }
  if ((this->PipelineState).Graphics.RenderTargetArray[7] != pFVar3) {
    (this->PipelineState).Graphics.RenderTargetArray[7] = pFVar3;
    this->bNeedSetRTs = true;
  }
  return;
}

// SetRootConstants @ 145a7dcd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetRootConstants(FD3D12StateCache *this,TIntVector4<unsigned_int> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((((param_1->field0_0x0)._s_0.X !=
         (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.X) ||
       ((param_1->field0_0x0)._s_0.Y !=
        (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.Y)) ||
      ((param_1->field0_0x0)._s_0.Z !=
       (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.Z)) ||
     ((param_1->field0_0x0)._s_0.W !=
      (this->PipelineState).Common.ShaderRootConstants.field0_0x0._s_0.W)) {
    uVar1 = *(undefined8 *)&param_1->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    (this->PipelineState).Common.bNeedSetRootConstants = true;
    *(undefined8 *)&(this->PipelineState).Common.ShaderRootConstants.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->PipelineState).Common.ShaderRootConstants.field0_0x0 + 8) =
         uVar2;
  }
  return;
}

// SetScissorRect @ 145a7df60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::SetScissorRect(FD3D12StateCache *this,tagRECT *param_1)

{
  tagRECT *ptVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  tagRECT *local_18;
  D3D12_VIEWPORT *local_10;
  
  fVar2 = (this->PipelineState).Graphics.CurrentViewport[0].TopLeftX;
  local_10 = (this->PipelineState).Graphics.CurrentViewport;
  if ((int)fVar2 <= param_1->left) {
    iVar10 = (int)(this->PipelineState).Graphics.CurrentViewport[0].TopLeftY;
    if ((((iVar10 <= param_1->top) &&
         (param_1->right <=
          (int)(this->PipelineState).Graphics.CurrentViewport[0].Width + (int)fVar2)) &&
        (param_1->bottom <= (int)(this->PipelineState).Graphics.CurrentViewport[0].Height + iVar10))
       && ((param_1->left <= param_1->right && (param_1->top <= param_1->bottom))))
    goto LAB_145a7dfd5;
  }
  local_18 = param_1;
  `ValidateScissorRect'::__l2::<lambda_1>::operator()(&local_18);
LAB_145a7dfd5:
  ptVar1 = (this->PipelineState).Graphics.CurrentScissorRects;
  if ((((this->PipelineState).Graphics.CurrentNumberOfScissorRects != 1) ||
      (lVar3._0_4_ = ptVar1->left, lVar3._4_4_ = ptVar1->top, lVar4._0_4_ = param_1->left,
      lVar4._4_4_ = param_1->top, lVar3 != lVar4)) ||
     (lVar5._0_4_ = (this->PipelineState).Graphics.CurrentScissorRects[0].right,
     lVar5._4_4_ = (this->PipelineState).Graphics.CurrentScissorRects[0].bottom,
     lVar6._0_4_ = param_1->right, lVar6._4_4_ = param_1->bottom, lVar5 != lVar6)) {
    lVar7 = param_1->top;
    lVar8 = param_1->right;
    lVar9 = param_1->bottom;
    ptVar1->left = param_1->left;
    ptVar1->top = lVar7;
    (this->PipelineState).Graphics.CurrentScissorRects[0].right = lVar8;
    (this->PipelineState).Graphics.CurrentScissorRects[0].bottom = lVar9;
    (this->PipelineState).Graphics.CurrentNumberOfScissorRects = 1;
    this->bNeedSetScissorRects = true;
  }
  return;
}

// SetScissorRects @ 145a7e020

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetScissorRects(FD3D12StateCache *this,uint param_1,tagRECT *param_2)

{
  tagRECT *_Buf1;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  size_t _Size;
  ulonglong uVar5;
  long *plVar6;
  tagRECT *local_38;
  D3D12_VIEWPORT *local_30;
  
  if (param_1 < 0x10) {
    if (param_1 == 0) goto LAB_145a7e110;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count < (sizeof(UEArrayCountHelper(PipelineState.Graphics.CurrentScissorRects)) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x153,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pfVar4 = &(this->PipelineState).Graphics.CurrentViewport[0].TopLeftY;
  plVar6 = &param_2->bottom;
  uVar5 = (ulonglong)param_1;
  do {
    if (((tagRECT *)(plVar6 + -3))->left < (int)((D3D12_VIEWPORT *)(pfVar4 + -1))->TopLeftX) {
LAB_145a7e0da:
      local_38 = (tagRECT *)(plVar6 + -3);
      local_30 = (D3D12_VIEWPORT *)(pfVar4 + -1);
      `ValidateScissorRect'::__l2::<lambda_1>::operator()(&local_38);
    }
    else if ((((plVar6[-2] < (int)*pfVar4) ||
              ((int)pfVar4[1] + (int)((D3D12_VIEWPORT *)(pfVar4 + -1))->TopLeftX < plVar6[-1])) ||
             ((int)pfVar4[2] + (int)*pfVar4 < *plVar6)) ||
            ((plVar6[-1] < ((tagRECT *)(plVar6 + -3))->left || (*plVar6 < plVar6[-2]))))
    goto LAB_145a7e0da;
    plVar6 = plVar6 + 4;
    pfVar4 = pfVar4 + 6;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
LAB_145a7e110:
  _Size = (ulonglong)param_1 << 4;
  _Buf1 = (this->PipelineState).Graphics.CurrentScissorRects;
  if (((this->PipelineState).Graphics.CurrentNumberOfScissorRects != param_1) ||
     (iVar3 = memcmp(_Buf1,param_2,_Size), iVar3 != 0)) {
    memcpy(_Buf1,param_2,_Size);
    (this->PipelineState).Graphics.CurrentNumberOfScissorRects = param_1;
    this->bNeedSetScissorRects = true;
  }
  return;
}

// SetShaderResourceView @ 145a7e170

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetShaderResourceView
          (FD3D12StateCache *this,EShaderFrequency param_1,FD3D12ShaderResourceView *param_2,
          uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  FD3D12Resource *pFVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_3;
  uVar8 = (ulonglong)param_1;
  if (0x3f < param_3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceIndex < 64",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                       ,0x621,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->PipelineState).Common.SRVCache.Views[uVar8][uVar4] != param_2) {
    pFVar6 = (FD3D12Resource *)0x0;
    if (param_2 == (FD3D12ShaderResourceView *)0x0) {
      (this->PipelineState).Common.SRVCache.BoundMask[uVar8] =
           (this->PipelineState).Common.SRVCache.BoundMask[uVar8] & ~(1L << (uVar4 & 0x3f));
    }
    else {
      this->bSRVSCleared = false;
      (this->PipelineState).Common.SRVCache.BoundMask[uVar8] =
           (this->PipelineState).Common.SRVCache.BoundMask[uVar8] | 1L << (uVar4 & 0x3f);
      if (param_2->_padding_ == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar6 = (FD3D12Resource *)param_2->_padding_;
    }
    (this->PipelineState).Common.SRVCache.Resources[uVar8][uVar4] = pFVar6;
    uVar1 = (this->PipelineState).Common.SRVCache.BoundMask[uVar8];
    if (uVar1 == 0) {
      iVar7 = -1;
    }
    else {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 0;
      if (uVar1 != 0) {
        iVar7 = (int)lVar2;
      }
    }
    (this->PipelineState).Common.SRVCache.MaxBoundIndex[uVar8] = iVar7;
    (this->PipelineState).Common.SRVCache.Views[uVar8][uVar4] = param_2;
    *(ulonglong *)((longlong)((this->PipelineState).Common.SRVCache.Views + -1) + 0x1d0 + uVar8 * 8)
         = *(ulonglong *)
            ((longlong)((this->PipelineState).Common.SRVCache.Views + -1) + 0x1d0 + uVar8 * 8) |
           1L << (uVar4 & 0x3f);
  }
  return;
}

// SetStencilRef @ 145a7e2c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::SetStencilRef(FD3D12StateCache *this,uint param_1)

{
  if ((this->PipelineState).Graphics.CurrentReferenceStencil != param_1) {
    (this->PipelineState).Graphics.CurrentReferenceStencil = param_1;
    this->bNeedSetStencilRef = true;
  }
  return;
}

// SetUAV @ 145a7e2e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetUAV
          (FD3D12StateCache *this,EShaderFrequency param_1,uint param_2,
          FD3D12UnorderedAccessView *param_3,uint param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12SetUnorderedAccessViewTime> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  ulonglong uVar12;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  uVar12 = (ulonglong)param_1;
  FVar8 = StatPtr_STAT_D3D12SetUnorderedAccessViewTime;
  if (StatPtr_STAT_D3D12SetUnorderedAccessViewTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetUnorderedAccessViewTime>)0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_D3D12SetUnorderedAccessViewTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12SetUnorderedAccessViewTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12SetUnorderedAccessViewTime,
                       *pFVar7,L"Set UAV time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar10.Value;
        local_res8.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                   ,0x52b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_145a7e44b;
    }
  }
  bVar4 = false;
  FVar11 = local_60;
LAB_145a7e44b:
  if ((this->PipelineState).Common.UAVCache.Views[uVar12][param_2] != param_3) {
    uVar9 = 0;
    if ((param_1 == SF_Compute) &&
       (uVar9 = (this->PipelineState).Common.UAVCache.StartSlot[5], param_2 < uVar9)) {
      uVar9 = param_2;
    }
    (this->PipelineState).Common.UAVCache.StartSlot[uVar12] = uVar9;
    (this->PipelineState).Common.UAVCache.Views[uVar12][param_2] = param_3;
    *(ushort *)((longlong)((this->PipelineState).Common.UAVCache.Views + -1) + 0x70 + uVar12 * 2) =
         *(ushort *)
          ((longlong)((this->PipelineState).Common.UAVCache.Views + -1) + 0x70 + uVar12 * 2) |
         (ushort)(1 << (param_2 & 0x1f));
    if (param_3 == (FD3D12UnorderedAccessView *)0x0) {
      (this->PipelineState).Common.UAVCache.Resources[uVar12][param_2] = (FD3D12Resource *)0x0;
    }
    else {
      if ((param_3->_padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xfe,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->PipelineState).Common.UAVCache.Resources[uVar12][param_2] =
           (FD3D12Resource *)param_3->_padding_;
      if (((param_3->CounterResource).Reference != (FD3D12Resource *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                             ,0x541,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetViewport @ 145a7e6e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12StateCache::SetViewport(FD3D12StateCache *this,D3D12_VIEWPORT *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (((((this->PipelineState).Graphics.CurrentNumberOfViewports != 1) ||
       (lVar1._0_4_ = (this->PipelineState).Graphics.CurrentViewport[0].TopLeftX,
       lVar1._4_4_ = (this->PipelineState).Graphics.CurrentViewport[0].TopLeftY,
       lVar2._0_4_ = param_1->TopLeftX, lVar2._4_4_ = param_1->TopLeftY, lVar1 != lVar2)) ||
      (lVar3._0_4_ = (this->PipelineState).Graphics.CurrentViewport[0].Width,
      lVar3._4_4_ = (this->PipelineState).Graphics.CurrentViewport[0].Height,
      lVar4._0_4_ = param_1->Width, lVar4._4_4_ = param_1->Height, lVar3 != lVar4)) ||
     (lVar5._0_4_ = (this->PipelineState).Graphics.CurrentViewport[0].MinDepth,
     lVar5._4_4_ = (this->PipelineState).Graphics.CurrentViewport[0].MaxDepth,
     lVar6._0_4_ = param_1->MinDepth, lVar6._4_4_ = param_1->MaxDepth, lVar5 != lVar6)) {
    fVar7 = param_1->TopLeftY;
    fVar8 = param_1->Width;
    fVar9 = param_1->Height;
    (this->PipelineState).Graphics.CurrentViewport[0].TopLeftX = param_1->TopLeftX;
    (this->PipelineState).Graphics.CurrentViewport[0].TopLeftY = fVar7;
    (this->PipelineState).Graphics.CurrentViewport[0].Width = fVar8;
    (this->PipelineState).Graphics.CurrentViewport[0].Height = fVar9;
    fVar7 = param_1->MaxDepth;
    (this->PipelineState).Graphics.CurrentViewport[0].MinDepth = param_1->MinDepth;
    (this->PipelineState).Graphics.CurrentViewport[0].MaxDepth = fVar7;
    (this->PipelineState).Graphics.CurrentNumberOfViewports = 1;
    this->bNeedSetViewports = true;
  }
  return;
}

// SetViewports @ 145a7e730

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12StateCache::SetViewports(FD3D12StateCache *this,uint param_1,D3D12_VIEWPORT *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((0xf < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count < (sizeof(UEArrayCountHelper(PipelineState.Graphics.CurrentViewport)) - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                         ,0x127,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->PipelineState).Graphics.CurrentNumberOfViewports == param_1) &&
     (iVar3 = memcmp((this->PipelineState).Graphics.CurrentViewport,param_2,
                     (ulonglong)param_1 * 0x18), iVar3 == 0)) {
    return;
  }
  memcpy((this->PipelineState).Graphics.CurrentViewport,param_2,(ulonglong)param_1 * 0x18);
  (this->PipelineState).Graphics.CurrentNumberOfViewports = param_1;
  this->bNeedSetViewports = true;
  return;
}

