// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 36

// GetQueue @ 1459c2860

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Queue * __thiscall FD3D12Device::GetQueue(FD3D12Device *this,ED3D12QueueType param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FD3D12Queue *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Queues).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12Queue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FD3D12Queue *)((this->Queues).AllocatorInstance.InlineData + (int)param_1);
}

// FD3D12Device @ 1459ed9b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

FD3D12Device * __thiscall
FD3D12Device::FD3D12Device(FD3D12Device *this,FRHIGPUMask param_1,FD3D12Adapter *param_2)

{
  TRefCountPtr<ID3D12Fence> *pTVar1;
  TArray<FD3D12OfflineDescriptorManager,TFixedAllocator<4>_> *pTVar2;
  int *piVar3;
  TArray<FD3D12Queue,TFixedAllocator<3>_> *pTVar4;
  ID3D12CommandQueue *pIVar5;
  ID3D12CommandQueue *pIVar6;
  ID3D12Fence *pIVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TNode *pTVar13;
  TNode *pTVar14;
  FD3D12Device *pFVar15;
  FString local_28;
  
  *(uint *)this = param_1.GPUMask;
  *(uint *)&this->field_0x4 = param_1.GPUMask;
  iVar12 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
    }
  }
  (this->TileMappingFence).NextCompletionValue = 1;
  *(FD3D12Adapter **)&this->field_0x10 = param_2;
  iVar11 = 0x20;
  if (param_1.GPUMask != 0) {
    iVar11 = iVar12;
  }
  pTVar14 = (TNode *)0x0;
  *(int *)&this->field_0x8 = iVar11;
  (this->TileMappingQueue).Reference = (ID3D12CommandQueue *)0x0;
  (this->TileMappingFence).OwnerQueue = (FD3D12Queue *)0x0;
  (this->TileMappingFence).D3DFence.Reference = (ID3D12Fence *)0x0;
  (this->TileMappingFence).LastSignaledValue = (atomic<unsigned___int64>)0x0;
  (this->TileMappingFence).bInterruptAwaited = false;
  FResidencyManager::FResidencyManager(&this->ResidencyManager,this);
  (this->DescriptorHeapManager)._padding_ = (longlong)this;
  (this->DescriptorHeapManager).GlobalHeaps.ArrayNum = 0;
  (this->DescriptorHeapManager).GlobalHeaps.ArrayMax = 2;
  (this->DescriptorHeapManager).PooledHeaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptorHeapManager).PooledHeaps.ArrayNum = 0;
  (this->DescriptorHeapManager).PooledHeaps.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->DescriptorHeapManager).PooledHeapsCS,4000);
  this->BindlessDescriptorAllocator = &param_2->BindlessDescriptorAllocator;
  FD3D12BindlessDescriptorManager::FD3D12BindlessDescriptorManager
            (&this->BindlessDescriptorManager,this,&param_2->BindlessDescriptorAllocator);
  (this->OfflineDescriptorManagers).ArrayNum = 0;
  (this->OfflineDescriptorManagers).ArrayMax = 4;
  FD3D12GlobalOnlineSamplerHeap::FD3D12GlobalOnlineSamplerHeap(&this->GlobalSamplerHeap,this);
  *(FD3D12Device **)&this->OnlineDescriptorManager = this;
  *(undefined8 *)&(this->OnlineDescriptorManager).Heaps = 0;
  *(undefined8 *)&(this->OnlineDescriptorManager).Heaps.field_0x8 = 0;
  pTVar13 = ::operator_new(0x10);
  if (pTVar13 != (TNode *)0x0) {
    pTVar13->NextNode = (TNode *)0x0;
    pTVar13->Item = (FD3D12OnlineDescriptorBlock *)0x0;
    pTVar13->NextNode = (TNode *)0x0;
    pTVar14 = pTVar13;
  }
  (this->OnlineDescriptorManager).FreeBlocks.Tail = pTVar14;
  (this->OnlineDescriptorManager).FreeBlocks.Head = pTVar14;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->OnlineDescriptorManager).CriticalSection,4000);
  (this->DefaultViews).NullSRV.HeapIndex = 0;
  (this->DefaultViews).NullSRV.Version = 0;
  (this->DefaultViews).NullSRV._padding_ = 0;
  (this->DefaultViews).NullRTV.HeapIndex = 0;
  (this->DefaultViews).NullRTV.Version = 0;
  (this->DefaultViews).NullRTV._padding_ = 0;
  (this->DefaultViews).NullUAV.HeapIndex = 0;
  (this->DefaultViews).NullUAV.Version = 0;
  (this->DefaultViews).NullUAV._padding_ = 0;
  (this->DefaultViews).NullCBV.HeapIndex = 0;
  (this->DefaultViews).NullCBV.Version = 0;
  (this->DefaultViews).NullCBV._padding_ = 0;
  (this->DefaultViews).NullDSV.HeapIndex = 0;
  (this->DefaultViews).NullDSV.Version = 0;
  (this->DefaultViews).NullDSV._padding_ = 0;
  (this->DefaultViews).DefaultSampler.Reference = (FD3D12SamplerState *)0x0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[0].field_0x8 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[0].field_0x10 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[0].field_0x18 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[0].field_0x20 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[0].field_0x28 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[0].field_0x30 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[0].field_0x38 = 0;
  *(undefined8 *)(this->QueryHeapPool).Elements = 0;
  *(undefined8 *)(this->QueryHeapPool).Elements = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[1].field_0x8 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[1].field_0x10 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[1].field_0x18 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[1].field_0x20 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[1].field_0x28 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[1].field_0x30 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[1].field_0x38 = 0;
  *(undefined8 *)((this->QueryHeapPool).Elements + 1) = 0;
  *(undefined8 *)((this->QueryHeapPool).Elements + 1) = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[2].field_0x8 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[2].field_0x10 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[2].field_0x18 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[2].field_0x20 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[2].field_0x28 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[2].field_0x30 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[2].field_0x38 = 0;
  *(undefined8 *)((this->QueryHeapPool).Elements + 2) = 0;
  *(undefined8 *)((this->QueryHeapPool).Elements + 2) = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[3].field_0x8 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[3].field_0x10 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[3].field_0x18 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[3].field_0x20 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[3].field_0x28 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[3].field_0x30 = 0;
  *(undefined8 *)&(this->QueryHeapPool).Elements[3].field_0x38 = 0;
  *(undefined8 *)((this->QueryHeapPool).Elements + 3) = 0;
  *(undefined8 *)((this->QueryHeapPool).Elements + 3) = 0;
  this->ImmediateCommandContext = (FD3D12CommandContext *)0x0;
  (this->Queues).ArrayNum = 0;
  (this->Queues).ArrayMax = 3;
  *(undefined8 *)&(this->SamplerCache).LookupSet.Elements = 0;
  *(undefined8 *)&(this->SamplerCache).LookupSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SamplerCache).LookupSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SamplerCache).LookupSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SamplerCache).LookupSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SamplerCache).LookupSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SamplerCache).LookupSet.Elements.field_0x34 = 0;
  (this->SamplerCache).LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SamplerCache).LookupSet.HashSize = 0;
  (this->SamplerCache).LeastRecent = (FCacheEntry *)0x0;
  (this->SamplerCache).MostRecent = (FCacheEntry *)0x0;
  (this->SamplerCache).MaxNumElements = 0x800;
  TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
  ::Empty(&this->SamplerCache,0x800);
  this->SamplerID = 0;
  (this->ResourceAllocationInfoMapMutex).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->ResourceAllocationInfoMap = 0;
  *(undefined8 *)&(this->ResourceAllocationInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ResourceAllocationInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->ResourceAllocationInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ResourceAllocationInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResourceAllocationInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResourceAllocationInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ResourceAllocationInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ResourceAllocationInfoMap).field_0x48 = 0;
  FD3D12DefaultBufferAllocator::FD3D12DefaultBufferAllocator
            (&this->DefaultBufferAllocator,this,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  FD3D12FastAllocator::FD3D12FastAllocator
            (&this->DefaultFastAllocator,this,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),
             D3D12_HEAP_TYPE_UPLOAD,0x400000);
  FD3D12TextureAllocatorPool::FD3D12TextureAllocatorPool
            (&this->TextureAllocator,this,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  this->RayTracingPipelineCache = (FD3D12RayTracingPipelineCache *)0x0;
  this->RayTracingCompactionRequestHandler = (FD3D12RayTracingCompactionRequestHandler *)0x0;
  this->ExplicitDescriptorHeapCache = (FD3D12ExplicitDescriptorHeapCache *)0x0;
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                          ,0x7e,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FD3D12Device *)(*pcVar9)();
    return pFVar15;
  }
  iVar12 = (this->OfflineDescriptorManagers).ArrayNum;
  pTVar2 = &this->OfflineDescriptorManagers;
  piVar3 = &(this->OfflineDescriptorManagers).ArrayMax;
  if (iVar12 == *piVar3) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FD3D12OfflineDescriptorManager>_>
                       (0x870,&pTVar2->AllocatorInstance,piVar3);
  }
  (this->OfflineDescriptorManagers).ArrayNum = iVar12 + 1;
  FD3D12OfflineDescriptorManager::FD3D12OfflineDescriptorManager
            ((FD3D12OfflineDescriptorManager *)((pTVar2->AllocatorInstance).InlineData + iVar12),
             this,Standard);
  iVar12 = (this->OfflineDescriptorManagers).ArrayNum;
  if (iVar12 == *piVar3) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FD3D12OfflineDescriptorManager>_>
                       (0x870,&pTVar2->AllocatorInstance,piVar3);
  }
  (this->OfflineDescriptorManagers).ArrayNum = iVar12 + 1;
  FD3D12OfflineDescriptorManager::FD3D12OfflineDescriptorManager
            ((FD3D12OfflineDescriptorManager *)((pTVar2->AllocatorInstance).InlineData + iVar12),
             this,Sampler);
  iVar12 = (this->OfflineDescriptorManagers).ArrayNum;
  if (iVar12 == *piVar3) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FD3D12OfflineDescriptorManager>_>
                       (0x870,&pTVar2->AllocatorInstance,piVar3);
  }
  (this->OfflineDescriptorManagers).ArrayNum = iVar12 + 1;
  FD3D12OfflineDescriptorManager::FD3D12OfflineDescriptorManager
            ((FD3D12OfflineDescriptorManager *)((pTVar2->AllocatorInstance).InlineData + iVar12),
             this,RenderTarget);
  iVar12 = (this->OfflineDescriptorManagers).ArrayNum;
  if (iVar12 == *piVar3) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FD3D12OfflineDescriptorManager>_>
                       (0x870,&pTVar2->AllocatorInstance,piVar3);
  }
  (this->OfflineDescriptorManagers).ArrayNum = iVar12 + 1;
  FD3D12OfflineDescriptorManager::FD3D12OfflineDescriptorManager
            ((FD3D12OfflineDescriptorManager *)((pTVar2->AllocatorInstance).InlineData + iVar12),
             this,DepthStencil);
  iVar12 = (this->Queues).ArrayNum;
  pTVar4 = &this->Queues;
  piVar3 = &(this->Queues).ArrayMax;
  if (iVar12 == *piVar3) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc<0,TFixedAllocator<3>::ForElementType<FD3D12Queue>_>
                       (0x2c0,0x40,&pTVar4->AllocatorInstance,piVar3);
  }
  (this->Queues).ArrayNum = iVar12 + 1;
  FD3D12Queue::FD3D12Queue
            ((FD3D12Queue *)((pTVar4->AllocatorInstance).InlineData + iVar12),this,Direct,0);
  iVar12 = (this->Queues).ArrayNum;
  if (iVar12 == *piVar3) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc<0,TFixedAllocator<3>::ForElementType<FD3D12Queue>_>
                       (0x2c0,0x40,&pTVar4->AllocatorInstance,piVar3);
  }
  (this->Queues).ArrayNum = iVar12 + 1;
  FD3D12Queue::FD3D12Queue
            ((FD3D12Queue *)((pTVar4->AllocatorInstance).InlineData + iVar12),this,Copy,1);
  iVar12 = (this->Queues).ArrayNum;
  if (iVar12 == *piVar3) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc<0,TFixedAllocator<3>::ForElementType<FD3D12Queue>_>
                       (0x2c0,0x40,&pTVar4->AllocatorInstance,piVar3);
  }
  (this->Queues).ArrayNum = iVar12 + 1;
  FD3D12Queue::FD3D12Queue
            ((FD3D12Queue *)((pTVar4->AllocatorInstance).InlineData + iVar12),this,Async,2);
  if (((this->Queues).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FD3D12Device *)(*pcVar9)();
    return pFVar15;
  }
  pIVar5 = *(ID3D12CommandQueue **)((this->Queues).AllocatorInstance.InlineData[0].Pad + 0x10);
  pIVar6 = (this->TileMappingQueue).Reference;
  if (pIVar6 != pIVar5) {
    (this->TileMappingQueue).Reference = pIVar5;
    if (pIVar5 != (ID3D12CommandQueue *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))();
    }
    if (pIVar6 != (ID3D12CommandQueue *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  if ((*(longlong *)&this->field_0x10 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FD3D12Device *)(*pcVar9)();
    return pFVar15;
  }
  pTVar1 = &(this->TileMappingFence).D3DFence;
  pIVar7 = pTVar1->Reference;
  plVar8 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
  pcVar9 = *(code **)(*plVar8 + 0x120);
  if (pIVar7 != (ID3D12Fence *)0x0) {
    pTVar1->Reference = (ID3D12Fence *)0x0;
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  iVar12 = (*pcVar9)(plVar8,0,0,&_GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,pTVar1);
  if (iVar12 < 0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar12,
               "GetDevice()->CreateFence( 0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(TileMappingFence.D3DFence.GetInitReference()) )"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
               ,0x91,(ID3D12Device *)0x0,&local_28);
  }
  (**(code **)((longlong)*pTVar1->Reference + 0x30))(pTVar1->Reference,L"TileMappingFence");
  return this;
}

// ~FD3D12Device @ 1459f7400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::~FD3D12Device(FD3D12Device *this)

{
  longlong *plVar1;
  FD3D12RayTracingCompactionRequestHandler *pFVar2;
  FD3D12SyncPoint *pFVar3;
  FRHIStagingBuffer *this_00;
  FD3D12Buffer *pFVar4;
  FScriptContainerElement *pFVar5;
  FD3D12ExplicitDescriptorHeapCache *this_01;
  void *pvVar6;
  ForElementType<FSetElementId> FVar7;
  FD3D12SamplerState *this_02;
  TNode *pTVar8;
  ID3D12Fence *pIVar9;
  ID3D12CommandQueue *pIVar10;
  code *pcVar11;
  longlong lVar12;
  bool bVar13;
  BOOLEAN BVar14;
  
  pFVar2 = this->RayTracingCompactionRequestHandler;
  if (pFVar2 != (FD3D12RayTracingCompactionRequestHandler *)0x0) {
    if (((pFVar2->PendingRequests).ArrayNum != 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PendingRequests.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.h"
                            ,0x11f,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar3 = (pFVar2->PostBuildInfoBufferReadbackSyncPoint).Reference;
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    this_00 = (pFVar2->PostBuildInfoStagingBuffer).Reference;
    if (this_00 != (FRHIStagingBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    pFVar4 = (pFVar2->PostBuildInfoBuffer).Reference;
    if (pFVar4 != (FD3D12Buffer *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x10))();
    }
    pFVar5 = (pFVar2->ActiveBLASGPUAddresses).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar2->ActiveRequests).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar2->PendingRequests).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar2->CS);
    ::operator_delete(pFVar2,0x78);
  }
  this_01 = this->ExplicitDescriptorHeapCache;
  this->RayTracingCompactionRequestHandler = (FD3D12RayTracingCompactionRequestHandler *)0x0;
  if (this_01 != (FD3D12ExplicitDescriptorHeapCache *)0x0) {
    FD3D12ExplicitDescriptorHeapCache::~FD3D12ExplicitDescriptorHeapCache(this_01);
    ::operator_delete(this_01,0x48);
  }
  this->ExplicitDescriptorHeapCache = (FD3D12ExplicitDescriptorHeapCache *)0x0;
  FD3D12DefaultBufferAllocator::FreeDefaultBufferPools(&this->DefaultBufferAllocator);
  FD3D12FastAllocator::Destroy(&this->DefaultFastAllocator);
  FD3D12TextureAllocatorPool::CleanUpAllocations(&this->TextureAllocator);
  FD3D12TextureAllocatorPool::Destroy(&this->TextureAllocator);
  TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
  ::Empty(&this->SamplerCache,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->DefaultFastAllocator).CS);
  pFVar5 = (this->DefaultFastAllocator).PagePool.Pool.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->DefaultBufferAllocator).CS);
  pFVar5 = (this->DefaultBufferAllocator).DefaultBufferPools.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->ResourceAllocationInfoMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ResourceAllocationInfoMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResourceAllocationInfoMap);
  BVar14 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ResourceAllocationInfoMapMutex);
  if (BVar14 == '\0') {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ResourceAllocationInfoMapMutex);
  }
  TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
  ::Empty(&this->SamplerCache,0);
  (this->SamplerCache).LookupSet.HashSize = 0;
  FVar7 = (this->SamplerCache).LookupSet.Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SamplerCache);
  DestructItems<FD3D12Queue,int>((FD3D12Queue *)&this->Queues,(this->Queues).ArrayNum);
  TStaticArray<TD3D12ObjectPool<FD3D12QueryHeap>,4,4294967295>::
  ~TStaticArray<TD3D12ObjectPool<FD3D12QueryHeap>,4,4294967295>(&this->QueryHeapPool);
  this_02 = (this->DefaultViews).DefaultSampler.Reference;
  if (this_02 != (FD3D12SamplerState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->OnlineDescriptorManager).CriticalSection);
  pTVar8 = (this->OnlineDescriptorManager).FreeBlocks.Tail;
  while (pTVar8 != (TNode *)0x0) {
    (this->OnlineDescriptorManager).FreeBlocks.Tail = pTVar8->NextNode;
    ::operator_delete(pTVar8,0x10);
    pTVar8 = (this->OnlineDescriptorManager).FreeBlocks.Tail;
  }
  TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295>::
  ~TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295>
            ((TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295> *)
             &(this->OnlineDescriptorManager).Heaps);
  FD3D12GlobalOnlineSamplerHeap::~FD3D12GlobalOnlineSamplerHeap(&this->GlobalSamplerHeap);
  DestructItems<FD3D12OfflineDescriptorManager,int>
            ((FD3D12OfflineDescriptorManager *)&this->OfflineDescriptorManagers,
             (this->OfflineDescriptorManagers).ArrayNum);
  FD3D12BindlessDescriptorManager::~FD3D12BindlessDescriptorManager
            (&this->BindlessDescriptorManager);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->DescriptorHeapManager).PooledHeapsCS);
  DestructItems<FD3D12DescriptorHeapManager::FPooledHeap,int>
            ((FPooledHeap *)(this->DescriptorHeapManager).PooledHeaps.AllocatorInstance.Data,
             (this->DescriptorHeapManager).PooledHeaps.ArrayNum);
  pFVar5 = (this->DescriptorHeapManager).PooledHeaps.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FD3D12DescriptorManager,int>
            ((FD3D12DescriptorManager *)&(this->DescriptorHeapManager).GlobalHeaps,
             (this->DescriptorHeapManager).GlobalHeaps.ArrayNum);
  if (GEnableResidencyManagement != false) {
    D3DX12Residency::Internal::ResidencyManagerInternal::Destroy
              ((ResidencyManagerInternal *)&this->ResidencyManager);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ResidencyManager).field_0x1a0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ResidencyManager).field_0x140);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ResidencyManager).field_0x118);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ResidencyManager).field_0x28);
  pIVar9 = (this->TileMappingFence).D3DFence.Reference;
  if (pIVar9 != (ID3D12Fence *)0x0) {
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  pIVar10 = (this->TileMappingQueue).Reference;
  if (pIVar10 != (ID3D12CommandQueue *)0x0) {
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  return;
}

// BlockUntilIdle @ 145a04dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::BlockUntilIdle(FD3D12Device *this)

{
  longlong *plVar1;
  TRefCountPtr<FD3D12SyncPoint> *pTVar2;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  void *pvVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  atomic<void_*> aVar11;
  TRefCountPtr<FD3D12SyncPoint> TVar12;
  atomic<void_*> aVar13;
  ForAnyElementType *pFVar14;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar15;
  int iVar16;
  atomic<void_*> aVar17;
  undefined1 auStackY_e8 [32];
  TRefCountPtr<FD3D12SyncPoint> local_98;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> local_90;
  undefined1 local_80 [8];
  atomic<void_*> local_78;
  FLLMScope local_70 [2];
  FMemScope local_68;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> local_60;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  aVar17 = (atomic<void_*>)0x0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,&local_90.AllocatorInstance,0,&local_90.ArrayMax);
  pvVar7 = ThreadLocalStoragePointer;
  local_60.SecondaryData = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0;
  local_40 = 0;
  local_3c = 3;
  aVar13 = aVar17;
  do {
    if ((*(int *)(*(longlong *)((longlong)pvVar7 + (ulonglong)_tls_index * 8) + 0x9d4c) <
         `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                      ::__l2::LLMScope_Name103,L"RHIMisc/CreateSyncPoint");
      _Init_thread_footer(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_70,`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                        ::__l2::LLMScope_Name103,false,None,Default,true);
    FMemScope::FMemScope
              (&local_68,
               &`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                ::__l2::LLMScope_Name103,true);
    uVar9 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
    aVar11 = aVar17;
    if (uVar9 != 0) {
      aVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar9 >> 0xe][uVar9 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar9);
    }
    if ((aVar11 == (atomic<void_*>)0x0) &&
       (aVar11 = (atomic<void_*>)FMemory::Malloc(0x38,8), aVar11 == (atomic<void_*>)0x0)) {
      local_98.Reference = (FD3D12SyncPoint *)0x0;
    }
    else {
      local_98.Reference =
           FD3D12SyncPoint::FD3D12SyncPoint
                     ((FD3D12SyncPoint *)aVar11,GPUAndCPU,L"BlockUntilGPUIdle");
      if ((atomic<void_*>)local_98.Reference != (atomic<void_*>)0x0) {
        LOCK();
        *(int *)((longlong)local_98.Reference + 8) = *(int *)((longlong)local_98.Reference + 8) + 1;
        UNLOCK();
      }
    }
    FMemScope::~FMemScope(&local_68);
    FLLMScope::~FLLMScope(local_70);
    aVar11 = (atomic<void_*>)::operator_new(0x360);
    iVar16 = aVar13._0_4_;
    aVar13 = aVar17;
    if (aVar11 != (atomic<void_*>)0x0) {
      if (((this->Queues).ArrayNum <= iVar16) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FD3D12PayloadBase::FD3D12PayloadBase
                ((FD3D12PayloadBase *)aVar11,
                 (FD3D12Queue *)((this->Queues).AllocatorInstance.InlineData + iVar16));
      *(undefined ***)aVar11 = &___7FD3D12Payload__6B_;
      aVar13 = aVar11;
    }
    pFVar14 = (ForAnyElementType *)((longlong)aVar13 + 0x230);
    local_78 = aVar13;
    if (((pFVar14->Data <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         pFVar14->Data + (longlong)*(int *)((longlong)aVar13 + 0x23c) * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = *(int *)((longlong)aVar13 + 0x238);
    if (iVar10 == *(int *)((longlong)aVar13 + 0x23c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar14,(int *)((longlong)aVar13 + 0x23c));
    }
    *(int *)((longlong)aVar13 + 0x238) = iVar10 + 1;
    pFVar4 = pFVar14->Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar10 * 8) = 0;
    *(FD3D12SyncPoint **)(pFVar4 + (longlong)iVar10 * 8) = local_98.Reference;
    if ((atomic<void_*>)local_98.Reference != (atomic<void_*>)0x0) {
      LOCK();
      *(int *)&(local_98.Reference)->_padding_ = (int)(local_98.Reference)->_padding_ + 1;
      UNLOCK();
    }
    *(undefined1 *)((longlong)local_78 + 0x1d8) = 1;
    if (((local_90.AllocatorInstance.Data <= &local_78) &&
        (&local_78 <
         (atomic<void_*> *)(local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 8))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = local_90.ArrayNum;
    if (local_90.ArrayNum == local_90.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_90.AllocatorInstance,&local_90.ArrayMax);
    }
    local_90.ArrayNum = iVar10 + 1;
    *(atomic<void_*> *)(local_90.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_78;
    FVar15 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&local_60;
    if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
      FVar15 = local_60.SecondaryData;
    }
    if ((ulonglong)FVar15 <= &local_98) {
      FVar15 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&local_60;
      if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
        FVar15 = local_60.SecondaryData;
      }
      if ((&local_98 < (TRefCountPtr<FD3D12SyncPoint> *)((longlong)FVar15 + (longlong)local_3c * 8))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_40 == local_3c) {
      local_40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
                           (0x808,&local_60,&local_3c);
    }
    FVar15 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&local_60;
    if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
      FVar15 = local_60.SecondaryData;
    }
    pTVar2 = (TRefCountPtr<FD3D12SyncPoint> *)((longlong)FVar15 + (longlong)local_40 * 8);
    local_40 = local_40 + 1;
    pTVar2->Reference = (FD3D12SyncPoint *)0x0;
    pTVar2->Reference = local_98.Reference;
    if ((atomic<void_*>)local_98.Reference != (atomic<void_*>)0x0) {
      LOCK();
      *(int *)&(local_98.Reference)->_padding_ = (int)(local_98.Reference)->_padding_ + 1;
      UNLOCK();
      if ((atomic<void_*>)local_98.Reference != (atomic<void_*>)0x0) {
        plVar1 = &(local_98.Reference)->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          TVar12.Reference = local_98.Reference;
          if (plVar1 == (longlong *)0x0) {
            TVar12.Reference = (FD3D12SyncPoint *)aVar17;
          }
          if ((atomic<void_*>)TVar12.Reference != (atomic<void_*>)0x0) {
            (*(code *)**(undefined8 **)TVar12.Reference)(TVar12.Reference,1);
          }
        }
      }
    }
    aVar13._0_4_ = iVar16 + 1;
    aVar13._4_4_ = 0;
  } while (aVar13._0_4_ < 3);
  FD3D12DynamicRHI::SubmitPayloads(FD3D12DynamicRHI::SingleD3DRHI,&local_90);
  iVar16 = local_40;
  FVar15 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&local_60;
  if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FVar15 = local_60.SecondaryData;
  }
  FVar3 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)
          ((longlong)FVar15 + (longlong)local_40 * 8);
  while( true ) {
    if (local_40 != iVar16) {
      `TCheckedPointerIterator<TRefCountPtr<FD3D12SyncPoint>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_80);
    }
    if (FVar15 == FVar3) break;
    FD3D12SyncPoint::Wait(*(FD3D12SyncPoint **)FVar15);
    FVar15 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)((longlong)FVar15 + 8);
  }
  FVar15 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&local_60;
  if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FVar15 = local_60.SecondaryData;
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>((TRefCountPtr<FD3D12SyncPoint> *)FVar15,local_40)
  ;
  if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  if ((atomic<void_*> *)local_90.AllocatorInstance.Data != (atomic<void_*> *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return;
}

// CleanupRayTracing @ 145a06890

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::CleanupRayTracing(FD3D12Device *this)

{
  int iVar1;
  FD3D12RayTracingPipelineCache *this_00;
  ID3D10Blob *pIVar2;
  ID3D12RootSignature *pIVar3;
  void *pvVar4;
  undefined8 *puVar5;
  uchar *puVar6;
  undefined1 local_res8 [8];
  
  this_00 = this->RayTracingPipelineCache;
  if (this_00 != (FD3D12RayTracingPipelineCache *)0x0) {
    FD3D12RayTracingPipelineCache::Reset(this_00);
    pIVar2 = (this_00->DefaultLocalRootSignature).RootSignatureBlob.Reference;
    if (pIVar2 != (ID3D10Blob *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar3 = (this_00->DefaultLocalRootSignature).RootSignature.Reference;
    if (pIVar3 != (ID3D12RootSignature *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    *(undefined4 *)&(this_00->Cache).field_0x48 = 0;
    pvVar4 = *(void **)&(this_00->Cache).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->Cache);
    DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->CriticalSection);
    ::operator_delete(this_00,0x140);
  }
  this->RayTracingPipelineCache = (FD3D12RayTracingPipelineCache *)0x0;
  iVar1 = (this->Queues).ArrayNum;
  puVar6 = (this->Queues).AllocatorInstance.InlineData[0].Pad + 0x250;
  while( true ) {
    if ((this->Queues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FD3D12Queue,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((TTypeCompatibleBytes<FD3D12Queue> *)(puVar6 + -0x250) ==
        (this->Queues).AllocatorInstance.InlineData + iVar1) break;
    puVar5 = *(undefined8 **)puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    puVar6 = puVar6 + 0x2c0;
  }
  return;
}

// CleanupResources @ 145a06b10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::CleanupResources(FD3D12Device *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FD3D12RayTracingPipelineCache *this_00;
  ID3D10Blob *pIVar7;
  ID3D12RootSignature *pIVar8;
  void *pvVar9;
  byte bVar10;
  ForElementType<FD3D12Queue> *pFVar11;
  ForElementType<FD3D12Queue> *pFVar12;
  FD3D12Device *pFVar13;
  longlong lVar14;
  byte bVar15;
  TArray<FD3D12Queue,TFixedAllocator<3>_> *pTVar16;
  longlong *plVar17;
  TArray<FD3D12Queue,TFixedAllocator<3>_> *pTVar18;
  uchar *puVar19;
  FD3D12Device *local_res8;
  undefined1 local_res10 [8];
  int *local_res18;
  
  pTVar18 = &this->Queues;
  piVar1 = &(this->Queues).ArrayNum;
  iVar4 = *piVar1;
  pTVar16 = pTVar18;
  local_res8 = this;
  local_res18 = piVar1;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<FD3D12Queue,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pTVar16 ==
        (TArray<FD3D12Queue,TFixedAllocator<3>_> *)((pTVar18->AllocatorInstance).InlineData + iVar4)
       ) break;
    TD3D12ObjectPool<FD3D12ContextCommon>::CleanupResources
              ((TD3D12ObjectPool<FD3D12ContextCommon> *)
               ((pTVar16->AllocatorInstance).InlineData[0].Pad + 0x180));
    TD3D12ObjectPool<FD3D12CommandAllocator>::CleanupResources
              ((TD3D12ObjectPool<FD3D12CommandAllocator> *)
               ((pTVar16->AllocatorInstance).InlineData[0].Pad + 0x1c0));
    TD3D12ObjectPool<FD3D12CommandList>::CleanupResources
              ((TD3D12ObjectPool<FD3D12CommandList> *)
               ((pTVar16->AllocatorInstance).InlineData[0].Pad + 0x200));
    pTVar16 = (TArray<FD3D12Queue,TFixedAllocator<3>_> *)
              ((pTVar16->AllocatorInstance).InlineData + 1);
  }
  iVar4 = (this->OfflineDescriptorManagers).ArrayNum;
  puVar19 = (this->OfflineDescriptorManagers).AllocatorInstance.InlineData[0].Pad + 0x10;
  while( true ) {
    if ((this->OfflineDescriptorManagers).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FD3D12OfflineDescriptorManager,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    pFVar13 = local_res8;
    if ((TTypeCompatibleBytes<FD3D12OfflineDescriptorManager> *)(puVar19 + -0x10) ==
        (this->OfflineDescriptorManagers).AllocatorInstance.InlineData + iVar4) break;
    iVar5 = *(int *)puVar19;
    plVar17 = *(longlong **)(puVar19 + -8);
    plVar2 = plVar17 + (longlong)iVar5 * 5;
    while( true ) {
      if (*(int *)puVar19 != iVar5) {
        `TCheckedPointerIterator<FD3D12OfflineHeapEntry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (plVar17 == plVar2) break;
      puVar6 = (undefined8 *)*plVar17;
      if (puVar6 != (undefined8 *)0x0) {
        *plVar17 = 0;
        piVar1 = (int *)(puVar6 + 1);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      plVar17 = plVar17 + 5;
    }
    puVar19 = puVar19 + 0x70;
  }
  bVar15 = 3;
  do {
    bVar10 = ~bVar15 + 1 & bVar15;
    if ((bVar10 == 1) || (lVar14 = 0x970, bVar10 != 2)) {
      lVar14 = 0x968;
    }
    puVar6 = *(undefined8 **)(&pFVar13->field_0x0 + lVar14);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(&pFVar13->field_0x0 + lVar14) = 0;
      piVar1 = (int *)(puVar6 + 1);
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    bVar15 = bVar15 & ~(~bVar15 + 1);
  } while (bVar15 != 0);
  FD3D12BindlessDescriptorManager::CleanupResources(&pFVar13->BindlessDescriptorManager);
  this_00 = pFVar13->RayTracingPipelineCache;
  if (this_00 != (FD3D12RayTracingPipelineCache *)0x0) {
    FD3D12RayTracingPipelineCache::Reset(this_00);
    pIVar7 = (this_00->DefaultLocalRootSignature).RootSignatureBlob.Reference;
    if (pIVar7 != (ID3D10Blob *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    pIVar8 = (this_00->DefaultLocalRootSignature).RootSignature.Reference;
    if (pIVar8 != (ID3D12RootSignature *)0x0) {
      (**(code **)((longlong)*pIVar8 + 0x10))();
    }
    *(undefined4 *)&(this_00->Cache).field_0x48 = 0;
    pvVar9 = *(void **)&(this_00->Cache).field_0x40;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    TSparseArray<TSparseSetElement<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->Cache);
    DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->CriticalSection);
    ::operator_delete(this_00,0x140);
  }
  piVar1 = local_res18;
  pFVar13->RayTracingPipelineCache = (FD3D12RayTracingPipelineCache *)0x0;
  iVar4 = *local_res18;
  pFVar11 = &pTVar18->AllocatorInstance;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<FD3D12Queue,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pTVar18 == (TArray<FD3D12Queue,TFixedAllocator<3>_> *)(pFVar11->InlineData + iVar4)) break;
    puVar6 = *(undefined8 **)((pTVar18->AllocatorInstance).InlineData[0].Pad + 0x250);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    pFVar12 = &pTVar18->AllocatorInstance;
    pFVar12->InlineData[0].Pad[0x250] = '\0';
    pFVar12->InlineData[0].Pad[0x251] = '\0';
    pFVar12->InlineData[0].Pad[0x252] = '\0';
    pFVar12->InlineData[0].Pad[0x253] = '\0';
    pFVar12->InlineData[0].Pad[0x254] = '\0';
    pFVar12->InlineData[0].Pad[0x255] = '\0';
    pFVar12->InlineData[0].Pad[0x256] = '\0';
    pFVar12->InlineData[0].Pad[599] = '\0';
    pTVar18 = (TArray<FD3D12Queue,TFixedAllocator<3>_> *)
              ((pTVar18->AllocatorInstance).InlineData + 1);
  }
  return;
}

// CreateDefaultViews @ 145a0b0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::CreateDefaultViews(FD3D12Device *this)

{
  TArray<FD3D12OfflineDescriptorManager,TFixedAllocator<4>_> *this_00;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  FD3D12OfflineDescriptor *pFVar10;
  FD3D12SamplerState *this_01;
  FD3D12SamplerState *pFVar11;
  FD3D12SamplerState *this_02;
  FD3D12SamplerState *this_03;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  FSamplerStateInitializerRHI local_138;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined4 local_94;
  FD3D12SamplerState *local_90;
  FD3D12OfflineDescriptor local_88;
  FD3D12OfflineDescriptor local_78;
  FD3D12OfflineDescriptor local_68;
  FD3D12OfflineDescriptor local_58;
  FD3D12OfflineDescriptor local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  iVar1 = (this->OfflineDescriptorManagers).ArrayNum;
  pFVar11 = (FD3D12SamplerState *)0x0;
  this_00 = &this->OfflineDescriptorManagers;
  bVar5 = true;
  bVar9 = false;
  local_118 = 0;
  local_d8 = 0x1688;
  local_cc = 1;
  local_c0 = 0;
  local_e0 = 0x57;
  local_dc = 4;
  local_d0 = 0;
  local_c4 = 0;
  if (iVar1 < 1) {
    local_148 = 0;
    local_140 = (longlong)iVar1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = FD3D12OfflineDescriptorManager::AllocateHeapSlot
                      ((FD3D12OfflineDescriptorManager *)this_00,&local_88);
  uVar6 = pFVar10->HeapIndex;
  uVar7 = pFVar10->Version;
  (this->DefaultViews).NullSRV._padding_ = pFVar10->_padding_;
  (this->DefaultViews).NullSRV.HeapIndex = uVar6;
  (this->DefaultViews).NullSRV.Version = uVar7;
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
  (**(code **)(*plVar2 + 0x90))(plVar2,0,&local_e0,(this->DefaultViews).NullSRV._padding_);
  iVar1 = (this->OfflineDescriptorManagers).ArrayNum;
  local_104 = 0;
  local_fc = 0;
  local_110 = 0x57;
  local_10c = 4;
  if (iVar1 < 3) {
    local_148 = 2;
    local_140 = (longlong)iVar1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = FD3D12OfflineDescriptorManager::AllocateHeapSlot
                      ((FD3D12OfflineDescriptorManager *)
                       ((this->OfflineDescriptorManagers).AllocatorInstance.InlineData + 2),
                       &local_78);
  uVar6 = pFVar10->HeapIndex;
  uVar7 = pFVar10->Version;
  (this->DefaultViews).NullRTV._padding_ = pFVar10->_padding_;
  (this->DefaultViews).NullRTV.HeapIndex = uVar6;
  (this->DefaultViews).NullRTV.Version = uVar7;
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
  (**(code **)(*plVar2 + 0xa0))(plVar2,0,&local_110,(this->DefaultViews).NullRTV._padding_);
  iVar1 = (this->OfflineDescriptorManagers).ArrayNum;
  local_9c = 0;
  local_94 = 0;
  local_b8 = 0x1c;
  local_b4 = 4;
  local_ac = 0;
  uStack_a4 = 0;
  if (iVar1 < 1) {
    local_148 = 0;
    local_140 = (longlong)iVar1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = FD3D12OfflineDescriptorManager::AllocateHeapSlot
                      ((FD3D12OfflineDescriptorManager *)this_00,&local_68);
  uVar6 = pFVar10->HeapIndex;
  uVar7 = pFVar10->Version;
  (this->DefaultViews).NullUAV._padding_ = pFVar10->_padding_;
  (this->DefaultViews).NullUAV.HeapIndex = uVar6;
  (this->DefaultViews).NullUAV.Version = uVar7;
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
  local_148 = (this->DefaultViews).NullUAV._padding_;
  (**(code **)(*plVar2 + 0x98))(plVar2,0,0,&local_b8);
  iVar1 = (this->OfflineDescriptorManagers).ArrayNum;
  local_f4 = 3;
  local_e8 = 0;
  local_f8 = 0x28;
  local_ec = 0;
  if (iVar1 < 4) {
    local_148 = 3;
    local_140 = (longlong)iVar1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = FD3D12OfflineDescriptorManager::AllocateHeapSlot
                      ((FD3D12OfflineDescriptorManager *)
                       ((this->OfflineDescriptorManagers).AllocatorInstance.InlineData + 3),
                       &local_58);
  uVar6 = pFVar10->HeapIndex;
  uVar7 = pFVar10->Version;
  (this->DefaultViews).NullDSV._padding_ = pFVar10->_padding_;
  (this->DefaultViews).NullDSV.HeapIndex = uVar6;
  (this->DefaultViews).NullDSV.Version = uVar7;
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
  (**(code **)(*plVar2 + 0xa8))(plVar2,0,&local_f8,(this->DefaultViews).NullDSV._padding_);
  iVar1 = (this->OfflineDescriptorManagers).ArrayNum;
  local_38 = 0;
  uStack_30 = 0;
  if (iVar1 < 1) {
    local_148 = 0;
    local_140 = (longlong)iVar1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = FD3D12OfflineDescriptorManager::AllocateHeapSlot
                      ((FD3D12OfflineDescriptorManager *)this_00,&local_48);
  uVar6 = pFVar10->HeapIndex;
  uVar7 = pFVar10->Version;
  (this->DefaultViews).NullCBV._padding_ = pFVar10->_padding_;
  (this->DefaultViews).NullCBV.HeapIndex = uVar6;
  (this->DefaultViews).NullCBV.Version = uVar7;
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_38,(this->DefaultViews).NullCBV._padding_);
  local_138.Filter.Value = '\x02';
  local_138.AddressU.Value = '\x01';
  local_138.AddressV.Value = '\x01';
  local_138.AddressW.Value = '\x01';
  local_138.MipBias = 0.0;
  local_138.MinMipLevel = 0.0;
  local_138.MaxMipLevel = 3.4028235e+38;
  local_138.MaxAnisotropy = 0;
  local_138.BorderColor = 0;
  local_138.SamplerComparisonFunction.Value = '\0';
  if (*(int *)&this->field_0x8 == 0) {
    bVar5 = false;
    bVar9 = true;
    this_02 = pFVar11;
    this_03 = local_90;
  }
  else {
    if (*(longlong *)&this->field_0x10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)&this->field_0x10;
    if (GNumExplicitGPUsForRendering == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUIndex < GNumExplicitGPUsForRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0x103,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar11 = *(FD3D12SamplerState **)(*(longlong *)(lVar3 + 0x800) + 0xa10);
    if (pFVar11 != (FD3D12SamplerState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar11);
    }
    this_02 = (FD3D12SamplerState *)CONCAT44(uStack_114,local_118);
    this_03 = pFVar11;
  }
  this_01 = CreateSampler(this,&local_138,pFVar11);
  pFVar11 = (this->DefaultViews).DefaultSampler.Reference;
  if (pFVar11 != this_01) {
    (this->DefaultViews).DefaultSampler.Reference = this_01;
    if (this_01 != (FD3D12SamplerState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (pFVar11 != (FD3D12SamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar11);
    }
  }
  if ((bVar9) && (this_02 != (FD3D12SamplerState *)0x0)) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  if ((bVar5) && (this_03 != (FD3D12SamplerState *)0x0)) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  if (((this->DefaultViews).DefaultSampler.Reference)->ID != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultViews.DefaultSampler->ID == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x211,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// DestroyExplicitDescriptorCache @ 145a116c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::DestroyExplicitDescriptorCache(FD3D12Device *this)

{
  FD3D12ExplicitDescriptorHeapCache *this_00;
  
  this_00 = this->ExplicitDescriptorHeapCache;
  if (this_00 != (FD3D12ExplicitDescriptorHeapCache *)0x0) {
    FD3D12ExplicitDescriptorHeapCache::~FD3D12ExplicitDescriptorHeapCache(this_00);
    ::operator_delete(this_00,0x48);
    this->ExplicitDescriptorHeapCache = (FD3D12ExplicitDescriptorHeapCache *)0x0;
    return;
  }
  this->ExplicitDescriptorHeapCache = (FD3D12ExplicitDescriptorHeapCache *)0x0;
  return;
}

// GetDevice5 @ 145a18670

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ID3D12Device5 * __thiscall FD3D12Device::GetDevice5(FD3D12Device *this)

{
  code *pcVar1;
  bool bVar2;
  ID3D12Device5 *pIVar3;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    return *(ID3D12Device5 **)(*(longlong *)&this->field_0x10 + 0x30);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ParentAdapter != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                     ,0x41,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ID3D12Device5 *)(*pcVar1)();
    return pIVar3;
  }
  return *(ID3D12Device5 **)(*(longlong *)&this->field_0x10 + 0x30);
}

// GetDevice7 @ 145a186d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ID3D12Device7 * __thiscall FD3D12Device::GetDevice7(FD3D12Device *this)

{
  code *pcVar1;
  bool bVar2;
  ID3D12Device7 *pIVar3;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    return *(ID3D12Device7 **)(*(longlong *)&this->field_0x10 + 0x40);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ParentAdapter != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                     ,0x41,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ID3D12Device7 *)(*pcVar1)();
    return pIVar3;
  }
  return *(ID3D12Device7 **)(*(longlong *)&this->field_0x10 + 0x40);
}

// GetDevice9 @ 145a18730

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ID3D12Device9 * __thiscall FD3D12Device::GetDevice9(FD3D12Device *this)

{
  code *pcVar1;
  bool bVar2;
  ID3D12Device9 *pIVar3;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    return *(ID3D12Device9 **)(*(longlong *)&this->field_0x10 + 0x50);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ParentAdapter != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                     ,0x41,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ID3D12Device9 *)(*pcVar1)();
    return pIVar3;
  }
  return *(ID3D12Device9 **)(*(longlong *)&this->field_0x10 + 0x50);
}

// GetDevice @ 145a18790

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ID3D12Device * __thiscall FD3D12Device::GetDevice(FD3D12Device *this)

{
  code *pcVar1;
  bool bVar2;
  ID3D12Device *pIVar3;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    return *(ID3D12Device **)(*(longlong *)&this->field_0x10 + 8);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ParentAdapter != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                     ,0x41,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ID3D12Device *)(*pcVar1)();
    return pIVar3;
  }
  return *(ID3D12Device **)(*(longlong *)&this->field_0x10 + 8);
}

// GetOfflineDescriptorManager @ 145a19c40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12OfflineDescriptorManager * __thiscall
FD3D12Device::GetOfflineDescriptorManager(FD3D12Device *this,ERHIDescriptorHeapType param_1)

{
  code *pcVar1;
  bool bVar2;
  FD3D12OfflineDescriptorManager *pFVar3;
  
  if (DepthStencil < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType < ERHIDescriptorHeapType::Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.h"
                       ,0xf9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12OfflineDescriptorManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->OfflineDescriptorManagers).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12OfflineDescriptorManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FD3D12OfflineDescriptorManager *)
         ((this->OfflineDescriptorManagers).AllocatorInstance.InlineData + param_1);
}

// GetResourceAllocationInfo @ 145a1ab00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

D3D12_RESOURCE_ALLOCATION_INFO * __thiscall
FD3D12Device::GetResourceAllocationInfo
          (FD3D12Device *this,D3D12_RESOURCE_ALLOCATION_INFO *__return_storage_ptr__,
          FD3D12ResourceDesc *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong64 uVar3;
  D3D12_RESOURCE_ALLOCATION_INFO *pDVar4;
  ulong64 local_res20;
  D3D12_RESOURCE_ALLOCATION_INFO local_28;
  
  local_res20 = CityHash64((char *)param_1,0x40);
  AcquireSRWLockShared((PSRWLOCK)&this->ResourceAllocationInfoMapMutex);
  pDVar4 = TMapBase<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>_>
           ::Find((TMapBase<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>_>
                   *)&this->ResourceAllocationInfoMap,local_res20);
  if (pDVar4 == (D3D12_RESOURCE_ALLOCATION_INFO *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&this->ResourceAllocationInfoMapMutex);
    pDVar4 = GetResourceAllocationInfoUncached(this,&local_28,param_1);
    uVar1 = *(undefined4 *)((longlong)&pDVar4->SizeInBytes + 4);
    uVar3 = pDVar4->Alignment;
    uVar2 = *(undefined4 *)((longlong)&pDVar4->Alignment + 4);
    *(int *)&__return_storage_ptr__->SizeInBytes = (int)pDVar4->SizeInBytes;
    *(undefined4 *)((longlong)&__return_storage_ptr__->SizeInBytes + 4) = uVar1;
    *(int *)&__return_storage_ptr__->Alignment = (int)uVar3;
    *(undefined4 *)((longlong)&__return_storage_ptr__->Alignment + 4) = uVar2;
    AcquireSRWLockExclusive((PSRWLOCK)&this->ResourceAllocationInfoMapMutex);
    pDVar4 = TMapBase<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>_>
             ::Find((TMapBase<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>_>
                     *)&this->ResourceAllocationInfoMap,local_res20);
    if (pDVar4 == (D3D12_RESOURCE_ALLOCATION_INFO *)0x0) {
      local_28.SizeInBytes = (ulong64)&local_res20;
      local_28.Alignment = (ulong64)__return_storage_ptr__;
      TSet<TTuple<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO>,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,D3D12_RESOURCE_ALLOCATION_INFO_const_&>_>
                ((TSet<TTuple<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO>,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>,FDefaultSetAllocator>
                  *)&this->ResourceAllocationInfoMap,
                 (TPairInitializer<unsigned___int64_const_&,D3D12_RESOURCE_ALLOCATION_INFO_const_&>
                  *)&stack0x00000008,(bool *)&local_28);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ResourceAllocationInfoMapMutex);
  }
  else {
    uVar1 = *(undefined4 *)((longlong)&pDVar4->SizeInBytes + 4);
    uVar3 = pDVar4->Alignment;
    uVar2 = *(undefined4 *)((longlong)&pDVar4->Alignment + 4);
    *(int *)&__return_storage_ptr__->SizeInBytes = (int)pDVar4->SizeInBytes;
    *(undefined4 *)((longlong)&__return_storage_ptr__->SizeInBytes + 4) = uVar1;
    *(int *)&__return_storage_ptr__->Alignment = (int)uVar3;
    *(undefined4 *)((longlong)&__return_storage_ptr__->Alignment + 4) = uVar2;
    ReleaseSRWLockShared((PSRWLOCK)&this->ResourceAllocationInfoMapMutex);
  }
  return __return_storage_ptr__;
}

// GetResourceAllocationInfoUncached @ 145a1ac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

D3D12_RESOURCE_ALLOCATION_INFO * __thiscall
FD3D12Device::GetResourceAllocationInfoUncached
          (FD3D12Device *this,D3D12_RESOURCE_ALLOCATION_INFO *__return_storage_ptr__,
          FD3D12ResourceDesc *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  ulong64 *puVar5;
  D3D12_RESOURCE_ALLOCATION_INFO *pDVar6;
  undefined1 auStack_178 [32];
  FD3D12ResourceDesc *local_158;
  int *local_150;
  ForElementType<DXGI_FORMAT> *local_148;
  undefined8 local_140;
  int local_138 [2];
  ForElementType<DXGI_FORMAT> local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [16];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_a8;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (((param_1->bRequires64BitAtomicSupport) && (bVar4 = IsRHIDeviceIntel(), bVar4)) &&
     (GDX12INTCAtomicUInt64Emulation != false)) {
    local_88 = param_1->_padding_;
    lStack_80 = param_1->_padding_;
    local_108 = &local_88;
    local_78 = param_1->_padding_;
    lStack_70 = param_1->_padding_;
    local_100 = 0;
    local_68 = (undefined4)param_1->_padding_;
    uStack_64 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    uStack_60 = (undefined4)param_1->_padding_;
    uStack_5c = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_58 = (undefined4)param_1->_padding_;
    uStack_54 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    uStack_50._0_1_ = param_1->PixelFormat;
    uStack_50._1_1_ = param_1->UAVPixelFormat;
    uStack_50._2_2_ = *(undefined2 *)&param_1->field_0x3a;
    uStack_4c = *(undefined4 *)&param_1->field_0x3c;
    local_158 = (FD3D12ResourceDesc *)&local_108;
    local_f8 = 1;
    puVar5 = (ulong64 *)
             INTC_D3D12_GetResourceAllocationInfo
                       (local_118,FD3D12DynamicRHI::SingleD3DRHI->IntelExtensionContext,0,1);
    uVar3 = puVar5[1];
    __return_storage_ptr__->SizeInBytes = *puVar5;
    __return_storage_ptr__->Alignment = uVar3;
    return __return_storage_ptr__;
  }
  if (param_1->UAVPixelFormat == PF_Unknown) {
    if ((*(longlong *)&this->field_0x10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pDVar6 = (D3D12_RESOURCE_ALLOCATION_INFO *)(*pcVar2)();
      return pDVar6;
    }
    plVar1 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
    local_158 = param_1;
    puVar5 = (ulong64 *)(**(code **)(*plVar1 + 200))(plVar1,local_38,0,1);
    uVar3 = puVar5[1];
    __return_storage_ptr__->SizeInBytes = *puVar5;
    __return_storage_ptr__->Alignment = uVar3;
    if (((__return_storage_ptr__->SizeInBytes == 0xffffffffffffffff) &&
        (1 < (byte)LogD3D12RHI._0_1_)) &&
       (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
       1 < (byte)LogD3D12RHI._0_1_)) {
      local_148 = (ForElementType<DXGI_FORMAT> *)
                  CONCAT44(local_148._4_4_,(uint)param_1->PixelFormat);
      local_150 = (int *)CONCAT44(local_150._4_4_,
                                  (uint)*(ushort *)((longlong)&param_1->_padding_ + 6));
      local_158 = (FD3D12ResourceDesc *)
                  CONCAT44(local_158._4_4_,(uint)*(ushort *)((longlong)&param_1->_padding_ + 4));
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else {
    local_e8[0] = (undefined4)param_1->_padding_;
    local_e0 = param_1->_padding_;
    local_d8 = param_1->_padding_;
    local_d0 = (undefined4)param_1->_padding_;
    local_cc = *(undefined2 *)((longlong)&param_1->_padding_ + 4);
    local_ca = *(undefined2 *)((longlong)&param_1->_padding_ + 6);
    local_c8 = (undefined4)param_1->_padding_;
    local_c4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    local_bc = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_b8 = (undefined4)param_1->_padding_;
    local_128 = 0;
    local_b4 = 0;
    local_120 = 0;
    local_ac = 0;
    FD3D12ResourceDesc::GetCastableFormats(param_1,&local_a8);
    local_138[0] = local_a8.ArrayNum;
    local_130 = (ForElementType<DXGI_FORMAT>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      local_130 = local_a8.AllocatorInstance.SecondaryData;
    }
    if ((*(longlong *)&this->field_0x10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pDVar6 = (D3D12_RESOURCE_ALLOCATION_INFO *)(*pcVar2)();
      return pDVar6;
    }
    local_140 = 0;
    local_148 = &local_130;
    local_150 = local_138;
    plVar1 = *(longlong **)(*(longlong *)&this->field_0x10 + 0x68);
    local_158 = (FD3D12ResourceDesc *)local_e8;
    puVar5 = (ulong64 *)(**(code **)(*plVar1 + 0x280))(plVar1,local_48,0,1);
    uVar3 = puVar5[1];
    __return_storage_ptr__->SizeInBytes = *puVar5;
    __return_storage_ptr__->Alignment = uVar3;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// GetTimestampFrequency @ 145a1b640

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ulong64 __thiscall FD3D12Device::GetTimestampFrequency(FD3D12Device *this,ED3D12QueueType param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong64 uVar6;
  ulong64 local_res8;
  FString local_18;
  
  if (param_1 == Copy) {
    if (*(longlong *)&this->field_0x10 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
    }
    if (*(char *)(*(longlong *)&this->field_0x10 + 0xc5) == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueueType != ED3D12QueueType::Copy || GetParentAdapter()->AreCopyQueueTimestampQueriesSupported()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x326,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
    }
  }
  uVar4 = 0;
  if ((int)param_1 < (this->Queues).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
  }
  plVar1 = *(longlong **)((longlong)&this->QueryHeapPool + (longlong)(int)param_1 * 0x2c0 + 0x150);
  iVar5 = (**(code **)(*plVar1 + 0x80))(plVar1,&local_res8);
  if (iVar5 < 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar5,"Queues[(uint32)QueueType].D3DCommandQueue->GetTimestampFrequency(&Frequency)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
               ,0x329,(ID3D12Device *)0x0,&local_18);
  }
  return local_res8;
}

// InitExplicitDescriptorHeap @ 145a1e650

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::InitExplicitDescriptorHeap(FD3D12Device *this)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ExplicitDescriptorHeapCache *pFVar3;
  
  if (this->ExplicitDescriptorHeapCache != (FD3D12ExplicitDescriptorHeapCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExplicitDescriptorHeapCache == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x347,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = ::operator_new(0x48);
  if (pFVar3 != (FD3D12ExplicitDescriptorHeapCache *)0x0) {
    pFVar3->_padding_ = (longlong)this;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar3->CriticalSection,4000);
    (pFVar3->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->FreeList).ArrayNum = 0;
    (pFVar3->FreeList).ArrayMax = 0;
    pFVar3->NumAllocatedEntries = 0;
    this->ExplicitDescriptorHeapCache = pFVar3;
    return;
  }
  this->ExplicitDescriptorHeapCache = (FD3D12ExplicitDescriptorHeapCache *)0x0;
  return;
}

// InitRayTracing @ 145a1ef60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

void __thiscall FD3D12Device::InitRayTracing(FD3D12Device *this)

{
  code *pcVar1;
  bool bVar2;
  FD3D12RayTracingPipelineCache *this_00;
  FD3D12RayTracingPipelineCache *pFVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name3176,L"FD3D12RT");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name3176,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name3176,true);
  if (this->RayTracingPipelineCache != (FD3D12RayTracingPipelineCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RayTracingPipelineCache == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0xc69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = ::operator_new(0x140);
  pFVar3 = (FD3D12RayTracingPipelineCache *)0x0;
  if (this_00 != (FD3D12RayTracingPipelineCache *)0x0) {
    if (*(longlong *)&this->field_0x10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache
                       (this_00,*(FD3D12Adapter **)&this->field_0x10);
  }
  this->RayTracingPipelineCache = pFVar3;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ObtainCommandAllocator @ 145a1ff90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandAllocator * __thiscall
FD3D12Device::ObtainCommandAllocator(FD3D12Device *this,ED3D12QueueType param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FD3D12CommandAllocator *pFVar4;
  atomic<void_*> aVar5;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Queues).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FD3D12CommandAllocator *)(*pcVar1)();
    return pFVar4;
  }
  uVar3 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)
                     ((this->Queues).AllocatorInstance.InlineData[(int)param_1].Pad + 0x1c0));
  aVar5 = (atomic<void_*>)0x0;
  if (uVar3 != 0) {
    aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe][uVar3 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
  }
  if ((aVar5 == (atomic<void_*>)0x0) &&
     (((pFVar4 = ::operator_new(0x18), aVar5 = (atomic<void_*>)0x0,
       pFVar4 == (FD3D12CommandAllocator *)0x0 ||
       (aVar5 = (atomic<void_*>)FD3D12CommandAllocator::FD3D12CommandAllocator(pFVar4,this,param_1),
       aVar5 == (atomic<void_*>)0x0)) &&
      (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("Allocator",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                          ,0x2c5,L""), bVar2)))) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FD3D12CommandAllocator *)(*pcVar1)();
    return pFVar4;
  }
  return (FD3D12CommandAllocator *)aVar5;
}

// ObtainCommandList @ 145a200c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandList * __thiscall
FD3D12Device::ObtainCommandList
          (FD3D12Device *this,FD3D12CommandAllocator *param_1,FD3D12QueryAllocator *param_2,
          FD3D12QueryAllocator *param_3)

{
  ED3D12QueueType EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FD3D12CommandList *pFVar5;
  atomic<void_*> this_00;
  
  if ((param_1->Device != this) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandAllocator->Device == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x2d2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12CommandList *)(*pcVar2)();
    return pFVar5;
  }
  EVar1 = param_1->QueueType;
  uVar4 = 0;
  if ((int)EVar1 < (this->Queues).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12CommandList *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)
                     ((this->Queues).AllocatorInstance.InlineData[(int)EVar1].Pad + 0x200));
  this_00 = (atomic<void_*>)0x0;
  if (uVar4 != 0) {
    this_00 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
  }
  if (this_00 == (atomic<void_*>)0x0) {
    pFVar5 = ::operator_new(0x1d8);
    this_00 = (atomic<void_*>)0x0;
    if (((pFVar5 == (FD3D12CommandList *)0x0) ||
        (this_00 = (atomic<void_*>)
                   FD3D12CommandList::FD3D12CommandList(pFVar5,param_1,param_2,param_3),
        this_00 == (atomic<void_*>)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("List",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                           ,0x2de,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12CommandList *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    FD3D12CommandList::Reset((FD3D12CommandList *)this_00,param_1,param_2,param_3);
  }
  return (FD3D12CommandList *)this_00;
}

// ObtainContext @ 145a20240

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ContextCommon * __thiscall
FD3D12Device::ObtainContext(FD3D12Device *this,ED3D12QueueType param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FD3D12ContextCommon *pFVar4;
  atomic<void_*> aVar5;
  
  aVar5 = (atomic<void_*>)0x0;
  uVar3 = 0;
  if ((int)param_1 < (this->Queues).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FD3D12ContextCommon *)(*pcVar1)();
    return pFVar4;
  }
  uVar3 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)
                     ((this->Queues).AllocatorInstance.InlineData[(int)param_1].Pad + 0x180));
  if (uVar3 != 0) {
    aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe][uVar3 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
  }
  if (aVar5 != (atomic<void_*>)0x0) {
    return (FD3D12ContextCommon *)aVar5;
  }
  if (param_1 != Direct) {
    if (param_1 == Copy) {
      pFVar4 = ::operator_new(0x1c0);
      if (pFVar4 != (FD3D12ContextCommon *)0x0) {
        FD3D12ContextCommon::FD3D12ContextCommon(pFVar4,this,Copy,false);
        pFVar4->_padding_ = (longlong)&___7FD3D12ContextCopy__6B_;
        return pFVar4;
      }
      goto LAB_145a2034f;
    }
    if (param_1 == Async) {
      param_1 = Async;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x2ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FD3D12ContextCommon *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  aVar5 = (atomic<void_*>)
          (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x5b0))
                    (FD3D12DynamicRHI::SingleD3DRHI,this,param_1,0);
  if (aVar5 != (atomic<void_*>)0x0) {
    return (FD3D12ContextCommon *)aVar5;
  }
LAB_145a2034f:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Context",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                     ,0x2b2,L"");
  if (!bVar2) {
    return (FD3D12ContextCommon *)(atomic<void_*>)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FD3D12ContextCommon *)(*pcVar1)();
  return pFVar4;
}

// ObtainQueryHeap @ 145a203e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<FD3D12QueryHeap> __thiscall
FD3D12Device::ObtainQueryHeap(FD3D12Device *this,ED3D12QueueType param_1,D3D12_QUERY_TYPE param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRefCountPtr<FD3D12QueryHeap> TVar4;
  FD3D12QueryHeap *this_00;
  atomic<void_*> aVar5;
  undefined4 in_register_00000014;
  FD3D12QueryHeap *pFVar6;
  D3D12_QUERY_HEAP_TYPE DVar7;
  D3D12_QUERY_TYPE in_R9D;
  
  pFVar6 = (FD3D12QueryHeap *)CONCAT44(in_register_00000014,param_1);
  DVar7 = D3D12_QUERY_HEAP_TYPE_OCCLUSION;
  if (in_R9D != D3D12_QUERY_TYPE_OCCLUSION) {
    if (in_R9D != D3D12_QUERY_TYPE_TIMESTAMP) {
      if (in_R9D == D3D12_QUERY_TYPE_PIPELINE_STATISTICS) {
        if (param_2 == D3D12_QUERY_TYPE_OCCLUSION) {
          DVar7 = D3D12_QUERY_HEAP_TYPE_PIPELINE_STATISTICS;
          goto LAB_145a204a0;
        }
      }
      else {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                           ,0x2ee,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FD3D12QueryHeap *)(*pcVar1)();
          return (TRefCountPtr<FD3D12QueryHeap>)TVar4.Reference;
        }
      }
LAB_145a2043a:
      pFVar6->_padding_ = 0;
      return (TRefCountPtr<FD3D12QueryHeap>)pFVar6;
    }
    if (param_2 == D3D12_QUERY_TYPE_BINARY_OCCLUSION) {
      if ((*(longlong *)&this->field_0x10 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentAdapter != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x41,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4.Reference = (FD3D12QueryHeap *)(*pcVar1)();
        return (TRefCountPtr<FD3D12QueryHeap>)TVar4.Reference;
      }
      if (*(char *)(*(longlong *)&this->field_0x10 + 0xc5) == '\0') goto LAB_145a2043a;
      DVar7 = D3D12_QUERY_HEAP_TYPE_COPY_QUEUE_TIMESTAMP;
    }
    else {
      DVar7 = D3D12_QUERY_HEAP_TYPE_TIMESTAMP;
    }
  }
LAB_145a204a0:
  uVar3 = GetQueryHeapPoolIndex(DVar7);
  uVar3 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)((this->QueryHeapPool).Elements + uVar3))
  ;
  aVar5 = (atomic<void_*>)0x0;
  if (uVar3 != 0) {
    aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe][uVar3 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
  }
  if ((aVar5 == (atomic<void_*>)0x0) &&
     (this_00 = ::operator_new(0x488), aVar5 = (atomic<void_*>)0x0,
     this_00 != (FD3D12QueryHeap *)0x0)) {
    aVar5 = (atomic<void_*>)FD3D12QueryHeap::FD3D12QueryHeap(this_00,this,in_R9D,DVar7);
  }
  if ((*(D3D12_QUERY_TYPE *)((longlong)aVar5 + 0x18) != in_R9D) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueryHeap->QueryType == QueryType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x318,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4.Reference = (FD3D12QueryHeap *)(*pcVar1)();
    return (TRefCountPtr<FD3D12QueryHeap>)TVar4.Reference;
  }
  if ((*(D3D12_QUERY_HEAP_TYPE *)((longlong)aVar5 + 0x1c) != DVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueryHeap->HeapType == HeapType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x319,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4.Reference = (FD3D12QueryHeap *)(*pcVar1)();
    return (TRefCountPtr<FD3D12QueryHeap>)TVar4.Reference;
  }
  pFVar6->_padding_ = (longlong)aVar5;
  LOCK();
  *(int *)((longlong)aVar5 + 0x480) = *(int *)((longlong)aVar5 + 0x480) + 1;
  UNLOCK();
  return (TRefCountPtr<FD3D12QueryHeap>)pFVar6;
}

// ReleaseCommandAllocator @ 145a2aa20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Device::ReleaseCommandAllocator(FD3D12Device *this,FD3D12CommandAllocator *param_1)

{
  ED3D12QueueType EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  
  if (param_1 == (FD3D12CommandAllocator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Allocator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x2cb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FD3D12CommandAllocator::Reset(param_1);
  EVar1 = param_1->QueueType;
  pFVar5 = (FIndexedLockFreeLink *)0x0;
  uVar4 = 0;
  if ((int)EVar1 < (this->Queues).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar4 != 0) {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)
             ((this->Queues).AllocatorInstance.InlineData[(int)EVar1].Pad + 0x1c0),uVar4);
  return;
}

// ReleaseCommandList @ 145a2ab30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::ReleaseCommandList(FD3D12Device *this,FD3D12CommandList *param_1)

{
  ED3D12QueueType EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  
  if (param_1 == (FD3D12CommandList *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommandList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x2e4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = param_1->QueueType;
  pFVar5 = (FIndexedLockFreeLink *)0x0;
  uVar4 = 0;
  if ((int)EVar1 < (this->Queues).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar4 != 0) {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)
             ((this->Queues).AllocatorInstance.InlineData[(int)EVar1].Pad + 0x200),uVar4);
  return;
}

// ReleaseContext @ 145a2ac30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::ReleaseContext(FD3D12Device *this,FD3D12ContextCommon *param_1)

{
  ED3D12QueueType EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  
  if ((param_1 == (FD3D12ContextCommon *)0x0) || (param_1->CommandList != (FD3D12CommandList *)0x0))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context && !Context->IsOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x2b8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = param_1->QueueType;
  pFVar5 = (FIndexedLockFreeLink *)0x0;
  uVar4 = 0;
  if ((int)EVar1 < (this->Queues).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar4 != 0) {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)
             ((this->Queues).AllocatorInstance.InlineData[(int)EVar1].Pad + 0x180),uVar4);
  return;
}

// ReleaseQueryHeap @ 145a2af40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::ReleaseQueryHeap(FD3D12Device *this,FD3D12QueryHeap *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  
  if (param_1 == (FD3D12QueryHeap *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryHeap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,800,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = GetQueryHeapPoolIndex(param_1->HeapType);
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar4 == 0) {
    pFVar5 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)((this->QueryHeapPool).Elements + uVar3),uVar4);
  return;
}

// SetupAfterDeviceCreation @ 145a32280

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
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FD3D12Device::SetupAfterDeviceCreation(FD3D12Device *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ERHIBindlessConfiguration EVar4;
  longlong *plVar5;
  FD3D12DiagnosticBuffer *this_00;
  code *pcVar6;
  ForElementType<FD3D12Queue> *pFVar7;
  FD3D12Device *this_01;
  bool bVar8;
  bool bVar9;
  HRESULT HVar10;
  int iVar11;
  HMODULE hModule;
  FARPROC pFVar12;
  INT_PTR IVar13;
  FD3D12RayTracingCompactionRequestHandler *this_02;
  FD3D12RayTracingCompactionRequestHandler *pFVar14;
  FD3D12Buffer *pFVar15;
  FD3D12CommandContext *pFVar16;
  FD3D12DiagnosticBuffer *pFVar17;
  EPixelFormatCapabilities EVar18;
  EPixelFormatCapabilities EVar19;
  EPixelFormatCapabilities EVar20;
  uint uVar21;
  TArray<FD3D12Queue,TFixedAllocator<3>_> *pTVar22;
  FD3D12Queue *pFVar23;
  uchar *puVar24;
  char cVar25;
  longlong lVar26;
  EPixelFormatCapabilities EVar27;
  EPixelFormatCapabilities *pEVar28;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong *local_1b0;
  uint local_1a8;
  ulonglong local_1a4;
  uint local_198;
  ulonglong local_194;
  longlong *local_188;
  longlong *local_180;
  uint local_178;
  ulonglong local_174;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  FD3D12Device *local_f8;
  uint local_f0;
  undefined8 local_ec;
  uint local_e0;
  undefined8 local_dc;
  undefined8 local_d0;
  FRHIBufferCreateDesc local_c8;
  IID local_90;
  IID local_80;
  D3D12_RESOURCE_DESC local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_f8 = this;
  if ((*(longlong *)&this->field_0x10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pEVar28 = &GPixelFormats[0].Capabilities;
  lVar26 = 0x5e;
  pFVar14 = (FD3D12RayTracingCompactionRequestHandler *)0x0;
  EVar27 = None;
  plVar5 = *(longlong **)(*(longlong *)&this->field_0x10 + 8);
  do {
    uVar2 = pEVar28[1];
    EVar20 = EVar27;
    if (uVar2 != 0) {
      local_174 = 0;
      local_178 = uVar2;
      (**(code **)(*plVar5 + 0x68))(plVar5,3,&local_178,0xc);
      switch(uVar2 - 0x1b) {
      case 0:
        local_1a8 = 0x1c;
        break;
      default:
        if (uVar2 == 0x13) {
          local_1a8 = 0x15;
        }
        else if (uVar2 == 0x27) {
          local_1a8 = 0x29;
        }
        else if (uVar2 == 0x2c) {
          local_1a8 = 0x2e;
        }
        else {
          local_1a8 = 0x38;
          if (uVar2 != 0x35) {
            local_1a8 = uVar2;
          }
        }
        break;
      case 0x2b:
        local_1a8 = 0x47;
        break;
      case 0x2e:
        local_1a8 = 0x4a;
        break;
      case 0x31:
        local_1a8 = 0x4d;
        break;
      case 0x3f:
        local_1a8 = 0x57;
        break;
      case 0x46:
        local_1a8 = 0x62;
      }
      local_1a4 = 0;
      (**(code **)(*plVar5 + 0x68))(plVar5,3,&local_1a8,0xc);
      if (uVar2 == 0x13) {
        local_198 = 0x15;
      }
      else if (uVar2 == 0x1b) {
        local_198 = 0x1c;
      }
      else {
        local_198 = 0x57;
        if (uVar2 != 0x5a) {
          local_198 = uVar2;
        }
      }
      local_194 = 0;
      (**(code **)(*plVar5 + 0x68))(plVar5,3,&local_198,0xc);
      switch(uVar2 - 0x1b) {
      case 0:
        local_f0 = 0x1c;
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2c:
      case 0x2d:
      case 0x2f:
      case 0x30:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      default:
        if (uVar2 == 0x13) {
          local_f0 = 0x15;
        }
        else if (uVar2 == 0x27) {
          local_f0 = 0x29;
        }
        else if (uVar2 == 0x2c) {
          local_f0 = 0x2e;
        }
        else {
          local_f0 = 0x38;
          if (uVar2 != 0x35) {
            local_f0 = uVar2;
          }
        }
        break;
      case 0x2b:
        local_f0 = 0x47;
        break;
      case 0x2e:
        local_f0 = 0x4a;
        break;
      case 0x31:
        local_f0 = 0x4d;
        break;
      case 0x3f:
        local_f0 = 0x57;
        break;
      case 0x46:
        local_f0 = 0x62;
      }
      local_ec = 0;
      (**(code **)(*plVar5 + 0x68))(plVar5,3,&local_f0,0xc);
      if (uVar2 == 0x13) {
        local_e0 = 0x14;
      }
      else if (uVar2 == 0x27) {
        local_e0 = 0x28;
      }
      else if (uVar2 == 0x2c) {
        local_e0 = 0x2d;
      }
      else {
        local_e0 = 0x37;
        if (uVar2 != 0x35) {
          local_e0 = uVar2;
        }
      }
      local_dc = 0;
      (**(code **)(*plVar5 + 0x68))(plVar5,3,&local_e0,0xc);
      EVar18 = (uint)local_174 >> 3 & Texture1D;
      EVar20 = EVar18 | Texture2D;
      if ((local_174 & 0x20) == 0) {
        EVar20 = EVar18;
      }
      EVar18 = EVar20 | Texture3D;
      if ((local_174 & 0x40) == 0) {
        EVar18 = EVar20;
      }
      EVar20 = EVar18 | TextureCube;
      if ((local_174 & 0x80) == 0) {
        EVar20 = EVar18;
      }
      EVar18 = EVar20 | Buffer;
      if ((local_174 & 1) == 0) {
        EVar18 = EVar20;
      }
      EVar20 = EVar18 | VertexBuffer;
      if ((local_174 & 2) == 0) {
        EVar20 = EVar18;
      }
      EVar18 = EVar20 | IndexBuffer;
      if ((local_174 & 4) == 0) {
        EVar18 = EVar20;
      }
      cVar25 = (char)(local_194 >> 0x20);
      if ((EVar18 & AnyTexture) != None) {
        EVar20 = EVar18 | RenderTarget;
        if (((uint)local_174 >> 0xe & 1) == 0) {
          EVar20 = EVar18;
        }
        EVar18 = EVar20 | DepthStencil;
        if (((uint)local_174 >> 0x10 & 1) == 0) {
          EVar18 = EVar20;
        }
        EVar20 = EVar18 | TextureMipmaps;
        if (((uint)local_174 >> 0xc & 1) == 0) {
          EVar20 = EVar18;
        }
        EVar18 = EVar20 | TextureLoad;
        if (((uint)local_1a4 >> 8 & 1) == 0) {
          EVar18 = EVar20;
        }
        EVar20 = EVar18 | (TextureFilterable|TextureSample);
        if (((uint)local_1a4 >> 9 & 1) == 0) {
          EVar20 = EVar18;
        }
        EVar18 = EVar20 | TextureGather;
        if (((uint)local_1a4 >> 0x17 & 1) == 0) {
          EVar18 = EVar20;
        }
        EVar20 = EVar18 | TextureAtomics;
        if ((local_194 & 0x800000000) == 0) {
          EVar20 = EVar18;
        }
        EVar18 = EVar20 | TextureBlendable;
        if (((uint)local_1a4 >> 0xf & 1) == 0) {
          EVar18 = EVar20;
        }
        if (cVar25 < '\0') {
          EVar18 = EVar18 | TextureStore;
        }
      }
      if ((EVar18 >> 0xe & 1) != 0) {
        EVar20 = EVar18 | BufferLoad;
        if ((local_1a4 & 1) == 0) {
          EVar20 = EVar18;
        }
        EVar18 = EVar20 | BufferStore;
        if ((local_194 & 0x8000000000) == 0) {
          EVar18 = EVar20;
        }
        if ((local_194 & 0x800000000) != 0) {
          EVar18 = EVar18 | BufferAtomics;
        }
      }
      EVar19 = EVar18 | UAV;
      if ((local_194 & 0x2000000) == 0) {
        EVar19 = EVar18;
      }
      EVar20 = EVar19 | TypedUAVLoad;
      if ((local_194 & 0x4000000000) == 0) {
        EVar20 = EVar19;
      }
      if (cVar25 < '\0') {
        EVar20 = EVar20 | TypedUAVStore;
      }
    }
    *pEVar28 = EVar20;
    pEVar28 = pEVar28 + 0xc;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  GRHIGlobals.SupportsArrayIndexFromAnyShader = true;
  GRHIGlobals.SupportsStencilRefFromPixelShader = false;
  HVar10 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_90);
  this_01 = local_f8;
  if (-1 < HVar10) {
    local_1b0 = (longlong *)0x0;
    iVar11 = (**(code **)*plVar5)(plVar5,&local_90,&local_1b0);
    if (-1 < iVar11) {
      if (local_1b0 != (longlong *)0x0) {
        (**(code **)(*local_1b0 + 0x10))();
      }
      bVar8 = true;
      goto LAB_145a326fc;
    }
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 0x10))();
    }
  }
  bVar8 = false;
LAB_145a326fc:
  local_188 = (longlong *)0x0;
  iVar11 = (**(code **)*plVar5)(plVar5,&IntelGPAID);
  if (-1 < iVar11) {
    bVar8 = true;
  }
  if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x10))();
  }
  if ((GEmitRgpFrameMarkers != 0) &&
     (FD3D12DynamicRHI::SingleD3DRHI->AmdAgsContext != (AGSContext *)0x0)) {
    bVar8 = true;
  }
  bVar9 = FWindowsPlatformMisc::VerifyWindowsVersion(6,3,0);
  if ((bVar9) && (hModule = LoadLibraryA("dxgi.dll"), hModule != (HMODULE)0x0)) {
    pFVar12 = GetProcAddress(hModule,"DXGIGetDebugInterface1");
    FreeLibrary(hModule);
    if ((pFVar12 != (FARPROC)0x0) &&
       (HVar10 = IIDFromString(L"{9F251514-9D4D-4902-9D60-18988AB7D4B5}",&local_80), -1 < HVar10)) {
      local_180 = (longlong *)0x0;
      IVar13 = (*pFVar12)(0,&local_80,&local_180);
      if (-1 < (int)IVar13) {
        bVar8 = true;
      }
      if (local_180 != (longlong *)0x0) {
        (**(code **)(*local_180 + 0x10))();
      }
    }
  }
  if (bVar8) {
    FDynamicRHI::EnableIdealGPUCaptureOptions(true);
  }
  if ((*(longlong *)&this_01->field_0x10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar11 = *(int *)(*(longlong *)&this_01->field_0x10 + 200);
  if ((*(longlong *)&this_01->field_0x10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = *(int *)(*(longlong *)&this_01->field_0x10 + 0xcc);
  if (((iVar11 < GGlobalResourceDescriptorHeapSize) && (-1 < iVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GGlobalResourceDescriptorHeapSize <= MaximumResourceHeapSize || MaximumResourceHeapSize < 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x174,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar3 < GGlobalSamplerDescriptorHeapSize) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GGlobalSamplerDescriptorHeapSize <= MaximumSamplerHeapSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x175,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar3 < GGlobalSamplerHeapSize) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GGlobalSamplerHeapSize <= MaximumSamplerHeapSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x177,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((GGlobalResourceDescriptorHeapSize < GOnlineDescriptorHeapSize) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GOnlineDescriptorHeapSize <= GGlobalResourceDescriptorHeapSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x179,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FD3D12BindlessDescriptorManager::Init(&this_01->BindlessDescriptorManager);
  EVar4 = (this_01->BindlessDescriptorManager).Configuration;
  EVar18 = GGlobalResourceDescriptorHeapSize;
  EVar20 = GGlobalSamplerDescriptorHeapSize;
  if (EVar4 == All) {
    EVar18 = EVar27;
    EVar20 = EVar27;
  }
  FD3D12DescriptorHeapManager::Init(&this_01->DescriptorHeapManager,EVar18,EVar20);
  uVar21 = GBindlessOnlineDescriptorHeapSize;
  uVar2 = GBindlessOnlineDescriptorHeapBlockSize;
  if (EVar4 != All) {
    FD3D12GlobalOnlineSamplerHeap::Init(&this_01->GlobalSamplerHeap,GGlobalSamplerHeapSize);
    uVar21 = GOnlineDescriptorHeapSize;
    uVar2 = GOnlineDescriptorHeapBlockSize;
  }
  FD3D12OnlineDescriptorManager::Init(&this_01->OnlineDescriptorManager,uVar21,uVar2,EVar4 == All);
  CreateDefaultViews(this_01);
  (this_01->ConstantBufferPageProperties).Type = D3D12_HEAP_TYPE_UPLOAD;
  (this_01->ConstantBufferPageProperties).CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  (this_01->ConstantBufferPageProperties).MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  (this_01->ConstantBufferPageProperties).CreationNodeMask = 1;
  (this_01->ConstantBufferPageProperties).VisibleNodeMask = 1;
  this_01->AvailableMSAAQualities[0] = 0xffffffff;
  this_01->AvailableMSAAQualities[1] = 0xffffffff;
  this_01->AvailableMSAAQualities[2] = 0;
  this_01->AvailableMSAAQualities[3] = 0xffffffff;
  this_01->AvailableMSAAQualities[4] = 0;
  this_01->AvailableMSAAQualities[5] = 0xffffffff;
  this_01->AvailableMSAAQualities[6] = 0xffffffff;
  this_01->AvailableMSAAQualities[7] = 0xffffffff;
  this_01->AvailableMSAAQualities[8] = 0;
  if ((this_01->RayTracingCompactionRequestHandler !=
       (FD3D12RayTracingCompactionRequestHandler *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingCompactionRequestHandler == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x19a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_02 = ::operator_new(0x78);
  if (this_02 != (FD3D12RayTracingCompactionRequestHandler *)0x0) {
    pFVar14 = FD3D12RayTracingCompactionRequestHandler::FD3D12RayTracingCompactionRequestHandler
                        (this_02,this_01);
  }
  pTVar22 = &this_01->Queues;
  this_01->RayTracingCompactionRequestHandler = pFVar14;
  piVar1 = &(this_01->Queues).ArrayNum;
  iVar11 = *piVar1;
  pFVar7 = &pTVar22->AllocatorInstance;
  while( true ) {
    if (*piVar1 != iVar11) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FD3D12Queue,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1b8);
    }
    if (pTVar22 == (TArray<FD3D12Queue,TFixedAllocator<3>_> *)(pFVar7->InlineData + iVar11)) break;
    uStack_114 = 0x10001;
    uStack_110 = 0;
    local_158 = L"DispatchRaysDescBuffer";
    uStack_15c = *(undefined4 *)this_01;
    uStack_13c = 0;
    uStack_138 = 0;
    local_130 = 1;
    uStack_128 = 0;
    local_70._4_4_ = uStack_12c;
    local_70.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    local_120 = 0x68;
    uStack_118 = 1;
    local_70.Height = 1;
    local_70.DepthOrArraySize = 1;
    local_70.MipLevels = 1;
    uStack_10c = 1;
    uStack_108 = 0;
    local_70.Alignment = 0;
    uStack_104 = 1;
    local_70.Format = DXGI_FORMAT_UNKNOWN;
    local_70.SampleDesc.Count = 1;
    local_70.SampleDesc.Quality = 0;
    local_70.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    local_100 = 4;
    local_70.Width = 0x68;
    local_168 = 0x68;
    local_70._52_4_ = uStack_fc;
    local_70.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
    uStack_160 = 0x80;
    local_c8._padding_ = CONCAT44(uStack_15c,0x80);
    uStack_150 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    local_c8._padding_ = 0x68;
    local_148 = 4;
    local_c8.InitialState = IndirectArgs;
    local_c8.InitAction = Default;
    local_c8.ClassName.ComparisonIndex.Value = 0;
    local_c8.ClassName.Number = 0;
    uStack_134 = 0;
    local_c8.DebugName = L"DispatchRaysDescBuffer";
    local_c8.InitialData = (FResourceArrayUploadInterface *)0x0;
    local_c8.OwnerName.ComparisonIndex.Value = 0;
    local_c8.OwnerName.Number = 0;
    if ((*(longlong *)&this_01->field_0x10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar15 = FD3D12Adapter::CreateRHIBuffer
                        (*(FD3D12Adapter **)&this_01->field_0x10,&local_70,0x100,&local_c8,
                         MultiState,IndirectArgs,false,(ID3D12ResourceAllocator *)0x0);
    *(FD3D12Buffer **)((pTVar22->AllocatorInstance).InlineData[0].Pad + 0x250) = pFVar15;
    pTVar22 = (TArray<FD3D12Queue,TFixedAllocator<3>_> *)
              ((pTVar22->AllocatorInstance).InlineData + 1);
  }
  pFVar23 = (FD3D12Queue *)&this_01->Queues;
  if ((this_01->ImmediateCommandContext != (FD3D12CommandContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ImmediateCommandContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x1af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (FD3D12CommandContext *)
            (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x5b0))
                      (FD3D12DynamicRHI::SingleD3DRHI,this_01,0,1);
  this_01->ImmediateCommandContext = pFVar16;
  puVar24 = (this_01->Queues).AllocatorInstance.InlineData[0].Pad + 0x248;
  iVar11 = *piVar1;
  pFVar7 = &((TArray<FD3D12Queue,TFixedAllocator<3>_> *)pFVar23)->AllocatorInstance;
  do {
    if (*piVar1 != iVar11) {
      `TCheckedPointerIterator<FD3D12Queue,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b7);
    }
    if (pFVar23 == (FD3D12Queue *)(pFVar7->InlineData + iVar11)) {
      return;
    }
    pFVar17 = ::operator_new(0x20);
    if (pFVar17 == (FD3D12DiagnosticBuffer *)0x0) {
      pFVar17 = (FD3D12DiagnosticBuffer *)0x0;
    }
    else {
      pFVar17 = FD3D12DiagnosticBuffer::FD3D12DiagnosticBuffer(pFVar17,pFVar23);
    }
    if (puVar24 == (uchar *)&local_d0) {
      if (pFVar17 != (FD3D12DiagnosticBuffer *)0x0) {
        FD3D12DiagnosticBuffer::~FD3D12DiagnosticBuffer(pFVar17);
        goto LAB_145a32c8d;
      }
    }
    else {
      this_00 = *(FD3D12DiagnosticBuffer **)puVar24;
      *(FD3D12DiagnosticBuffer **)puVar24 = pFVar17;
      if (this_00 != (FD3D12DiagnosticBuffer *)0x0) {
        FD3D12DiagnosticBuffer::~FD3D12DiagnosticBuffer(this_00);
        pFVar17 = this_00;
LAB_145a32c8d:
        ::operator_delete(pFVar17,0x20);
      }
    }
    pFVar23 = pFVar23 + 1;
    puVar24 = puVar24 + 0x2c0;
  } while( true );
}

// UpdateConstantBufferPageProperties @ 145a36f20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::UpdateConstantBufferPageProperties(FD3D12Device *this)

{
  (this->ConstantBufferPageProperties).Type = D3D12_HEAP_TYPE_UPLOAD;
  (this->ConstantBufferPageProperties).CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  (this->ConstantBufferPageProperties).MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  (this->ConstantBufferPageProperties).CreationNodeMask = 1;
  (this->ConstantBufferPageProperties).VisibleNodeMask = 1;
  return;
}

// UpdateMSAASettings @ 145a36f50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Device::UpdateMSAASettings(FD3D12Device *this)

{
  this->AvailableMSAAQualities[0] = 0xffffffff;
  this->AvailableMSAAQualities[1] = 0xffffffff;
  this->AvailableMSAAQualities[2] = 0;
  this->AvailableMSAAQualities[4] = 0;
  this->AvailableMSAAQualities[8] = 0;
  this->AvailableMSAAQualities[3] = 0xffffffff;
  this->AvailableMSAAQualities[5] = 0xffffffff;
  this->AvailableMSAAQualities[6] = 0xffffffff;
  this->AvailableMSAAQualities[7] = 0xffffffff;
  return;
}

// CreateSampler @ 145a5e8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SamplerState * __thiscall
FD3D12Device::CreateSampler
          (FD3D12Device *this,FSamplerStateInitializerRHI *param_1,FD3D12SamplerState *param_2)

{
  int *piVar1;
  TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
  *this_00;
  uchar uVar2;
  uchar uVar3;
  longlong lVar4;
  FCacheEntry *pFVar5;
  FName FVar6;
  code *pcVar7;
  D3D12_FILTER DVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_class_FD3D12SamplerState_*___cdecl_FD3D12Device::CreateSampler(FSamplerStateInitializerRHI_const_&,FD3D12SamplerState_*)_::_2_::FStat_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate>
  FVar13;
  FD3D12SamplerState *pFVar14;
  longlong *plVar15;
  longlong *plVar16;
  FName FVar17;
  FThreadSafeStaticStat<FStat_STAT_UniqueSamplers> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  IConsoleManager *pIVar21;
  TConsoleVariableData<int> *pTVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  TConsoleVariableData<int> *pTVar25;
  longlong *plVar26;
  FName FVar27;
  TConsoleVariableData<int> *pTVar28;
  uint uVar29;
  FNameEntryId FVar30;
  undefined1 auStackY_188 [32];
  FName local_128;
  FColor_u_0 local_120 [2];
  FName local_118;
  FName local_110;
  FD3D12SamplerState *local_100;
  FName local_f8;
  LARGE_INTEGER local_f0;
  FStatMessage local_e8;
  FStatMessage local_d8;
  D3D12_SAMPLER_DESC local_c8;
  FName local_90;
  FName local_88;
  FName local_80;
  D3D12_SAMPLER_DESC local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar2 = (param_1->AddressU).Value;
  pTVar28 = (TConsoleVariableData<int> *)0x0;
  local_78.Filter = D3D12_FILTER_MIN_MAG_MIP_POINT;
  local_78.AddressW = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
  if (uVar2 == '\x01') {
    local_78.AddressU = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
  }
  else if (uVar2 == '\x02') {
    local_78.AddressU = D3D12_TEXTURE_ADDRESS_MODE_MIRROR;
  }
  else if (uVar2 == '\x03') {
    local_78.AddressU = D3D12_TEXTURE_ADDRESS_MODE_BORDER;
  }
  else {
    local_78.AddressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
  }
  uVar2 = (param_1->AddressV).Value;
  if (uVar2 == '\x01') {
    local_78.AddressV = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
  }
  else if (uVar2 == '\x02') {
    local_78.AddressV = D3D12_TEXTURE_ADDRESS_MODE_MIRROR;
  }
  else if (uVar2 == '\x03') {
    local_78.AddressV = D3D12_TEXTURE_ADDRESS_MODE_BORDER;
  }
  else {
    local_78.AddressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
  }
  uVar2 = (param_1->AddressW).Value;
  if (uVar2 != '\x01') {
    if (uVar2 == '\x02') {
      local_78.AddressW = D3D12_TEXTURE_ADDRESS_MODE_MIRROR;
    }
    else if (uVar2 == '\x03') {
      local_78.AddressW = D3D12_TEXTURE_ADDRESS_MODE_BORDER;
    }
    else {
      local_78.AddressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
    }
  }
  local_78.MipLODBias = param_1->MipBias;
  uVar29 = param_1->MaxAnisotropy;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_100 = param_2;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                           _thread_safe_static_guard_0__),
     `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar21 = IConsoleManager::Get();
    plVar23 = (longlong *)(**(code **)((longlong)*pIVar21 + 0xc0))(pIVar21,L"r.MaxAnisotropy",1);
    pTVar22 = pTVar28;
    if (plVar23 != (longlong *)0x0) {
      pTVar22 = (TConsoleVariableData<int> *)(**(code **)(*plVar23 + 0x68))(plVar23);
    }
    `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar = pTVar22;
    _Init_thread_footer(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  pTVar22 = `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar;
  bVar9 = IsInParallelGameThread();
  if ((bVar9) ||
     (bVar9 = IsInGameThread(), pTVar25 = (TConsoleVariableData<int> *)&DAT_00000004, bVar9)) {
    pTVar25 = pTVar28;
  }
  local_78.MinLOD = param_1->MinMipLevel;
  uVar2 = (param_1->SamplerComparisonFunction).Value;
  uVar10 = *(uint *)((longlong)pTVar25->ShadowedValue + (longlong)pTVar22->ShadowedValue);
  if (0 < (int)uVar29) {
    uVar10 = uVar29;
  }
  local_78.MaxLOD = param_1->MaxMipLevel;
  uVar29 = 0x10;
  if ((int)uVar10 < 0x10) {
    uVar29 = uVar10;
  }
  local_78.MaxAnisotropy = 1;
  if (1 < (int)uVar29) {
    local_78.MaxAnisotropy = uVar29;
  }
  uVar3 = (param_1->Filter).Value;
  if (uVar3 == '\0') {
    local_78.Filter = -(uint)(uVar2 != '\0') & D3D12_FILTER_COMPARISON_MIN_MAG_MIP_POINT;
  }
  else if (uVar3 == '\x01') {
    local_78.Filter = D3D12_FILTER_MIN_MAG_LINEAR_MIP_POINT;
    if (uVar2 != '\0') {
      local_78.Filter = D3D12_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT;
    }
  }
  else if (uVar3 == '\x02') {
LAB_145a5ea4f:
    local_78.Filter = D3D12_FILTER_MIN_MAG_MIP_LINEAR;
    if (uVar2 != '\0') {
      local_78.Filter = D3D12_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR;
    }
  }
  else if ((uVar3 == '\x03') || (uVar3 == '\x04')) {
    if (local_78.MaxAnisotropy == 1) goto LAB_145a5ea4f;
    local_78.Filter = D3D12_FILTER_ANISOTROPIC;
    if (uVar2 != '\0') {
      local_78.Filter = D3D12_FILTER_COMPARISON_ANISOTROPIC;
    }
  }
  uVar29 = param_1->BorderColor;
  local_78.BorderColor[0] = FLinearColor::sRGBToLinearTable[uVar29 >> 0x10 & 0xff];
  local_78.BorderColor[1] = FLinearColor::sRGBToLinearTable[uVar29 >> 8 & 0xff];
  local_78.BorderColor[2] = FLinearColor::sRGBToLinearTable[uVar29 & 0xff];
  local_78.BorderColor[3] = (float)(uVar29 >> 0x18) * __real_3b808081;
  if ((uVar2 == '\0') || (local_78.ComparisonFunc = D3D12_COMPARISON_FUNC_LESS, uVar2 != '\x01')) {
    local_78.ComparisonFunc = D3D12_COMPARISON_FUNC_NEVER;
  }
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate ==
        (FThreadSafeStaticStat<_public:_class_FD3D12SamplerState_*___cdecl_FD3D12Device::CreateSampler(FSamplerStateInitializerRHI_const_&,FD3D12SamplerState_*)_::_2_::FStat_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate>
         )0x0) {
      pFVar12 = ::FName::FName(&local_90,"FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate,*pFVar12,
                 L"FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate;
  if (StatPtr_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate ==
      (FThreadSafeStaticStat<_public:_class_FD3D12SamplerState_*___cdecl_FD3D12Device::CreateSampler(FSamplerStateInitializerRHI_const_&,FD3D12SamplerState_*)_::_2_::FStat_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate>
       )0x0) {
    pFVar12 = ::FName::FName(&local_88,"FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate");
    FVar13 = (FThreadSafeStaticStat<_public:_class_FD3D12SamplerState_*___cdecl_FD3D12Device::CreateSampler(FSamplerStateInitializerRHI_const_&,FD3D12SamplerState_*)_::_2_::FStat_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate,*pFVar12,
                          L"FD3D12DynamicRHI_RHICreateSamplerState_LockAndCreate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  plVar23 = (longlong *)0x0;
  FVar17 = *(FName *)FVar13;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar27 = local_110, FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      pTVar28 = (TConsoleVariableData<int> *)&DAT_00000001;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_118.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12State.cpp"
                   ,0x125);
        pTVar28 = (TConsoleVariableData<int> *)&DAT_00000003;
      }
    }
    FVar27 = local_110;
    if (FThreadStats::bPrimaryEnable != false) {
      local_128 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      pTVar28 = (TConsoleVariableData<int> *)(ulonglong)(byte)((byte)pTVar28 | 4);
      FVar27 = FVar17;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GD3D12SamplerStateCacheLock);
  this_00 = &this->SamplerCache;
  iVar11 = TSet<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*,TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FKeyFuncs,FDefaultSetAllocator>
           ::FindIndexByHash<D3D12_SAMPLER_DESC>(&this_00->LookupSet,local_78.Filter,&local_78);
  if ((iVar11 != -1) &&
     (plVar26 = (longlong *)((longlong)iVar11 * 0x10 + *(longlong *)&(this_00->LookupSet).Elements),
     plVar26 != (longlong *)0x0)) {
    TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
    ::MarkAsRecent(this_00,(FCacheEntry *)*plVar26);
    if ((FName *)(*plVar26 + 0x48) != (FName *)0x0) {
      FVar17 = *(FName *)(*plVar26 + 0x48);
      goto LAB_145a5f0c8;
    }
  }
  if ((0xfffe < this->SamplerID) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SamplerID < 0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12State.cpp"
                         ,0x132,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FD3D12SamplerState *)(*pcVar7)();
    return pFVar14;
  }
  if (0x7ff < *(int *)&(this->SamplerCache).LookupSet.Elements.field_0x8 -
              *(int *)&(this->SamplerCache).LookupSet.Elements.field_0x34) {
    if (2 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_New_SamplerStat_15108d528,
                 (FLogCategoryBase *)&LogD3D12RHI);
    }
    if (((this->SamplerCache).LeastRecent == (FCacheEntry *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LeastRecent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                           ,0x26e,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar14 = (FD3D12SamplerState *)(*pcVar7)();
      return pFVar14;
    }
    pFVar5 = (this->SamplerCache).LeastRecent;
    local_c8.Filter = (pFVar5->Key).Filter;
    local_c8.AddressU = (pFVar5->Key).AddressU;
    local_c8.AddressV = (pFVar5->Key).AddressV;
    local_c8.AddressW = (pFVar5->Key).AddressW;
    local_c8.MipLODBias = (pFVar5->Key).MipLODBias;
    local_c8.MaxAnisotropy = (pFVar5->Key).MaxAnisotropy;
    local_c8.ComparisonFunc = (pFVar5->Key).ComparisonFunc;
    local_c8.BorderColor[0] = (pFVar5->Key).BorderColor[0];
    local_c8.BorderColor._4_8_ = *(undefined8 *)((pFVar5->Key).BorderColor + 1);
    local_c8._40_8_ = *(undefined8 *)((pFVar5->Key).BorderColor + 3);
    local_c8.MaxLOD = (pFVar5->Key).MaxLOD;
    plVar26 = plVar23;
    while( true ) {
      DVar8 = local_c8.Filter;
      iVar11 = TSet<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*,TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FKeyFuncs,FDefaultSetAllocator>
               ::FindIndexByHash<D3D12_SAMPLER_DESC>(&this_00->LookupSet,local_c8.Filter,&local_c8);
      plVar16 = plVar23;
      if ((iVar11 != -1) &&
         (plVar15 = (longlong *)
                    ((longlong)iVar11 * 0x10 + *(longlong *)&(this_00->LookupSet).Elements),
         plVar15 != (longlong *)0x0)) {
        plVar16 = (longlong *)(*plVar15 + 0x48);
      }
      if ((*(uint *)(*plVar16 + 8) & 0x3fffffff) < 2) break;
      iVar11 = TSet<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*,TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FKeyFuncs,FDefaultSetAllocator>
               ::FindIndexByHash<D3D12_SAMPLER_DESC>(&this_00->LookupSet,DVar8,&local_c8);
      if ((iVar11 != -1) &&
         (puVar24 = (undefined8 *)
                    ((longlong)iVar11 * 0x10 + *(longlong *)&(this_00->LookupSet).Elements),
         puVar24 != (undefined8 *)0x0)) {
        TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
        ::MarkAsRecent(this_00,(FCacheEntry *)*puVar24);
      }
      if (((this->SamplerCache).LeastRecent == (FCacheEntry *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("LeastRecent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                             ,0x26e,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FD3D12SamplerState *)(*pcVar7)();
        return pFVar14;
      }
      pFVar5 = (this->SamplerCache).LeastRecent;
      uVar29 = (int)plVar26 + 1;
      plVar26 = (longlong *)(ulonglong)uVar29;
      local_c8.Filter = (pFVar5->Key).Filter;
      local_c8.AddressU = (pFVar5->Key).AddressU;
      local_c8.AddressV = (pFVar5->Key).AddressV;
      local_c8.AddressW = (pFVar5->Key).AddressW;
      local_c8.MipLODBias = (pFVar5->Key).MipLODBias;
      local_c8.MaxAnisotropy = (pFVar5->Key).MaxAnisotropy;
      local_c8.ComparisonFunc = (pFVar5->Key).ComparisonFunc;
      local_c8.BorderColor[0] = (pFVar5->Key).BorderColor[0];
      local_c8.BorderColor._4_8_ = *(undefined8 *)((pFVar5->Key).BorderColor + 1);
      local_c8._40_8_ = *(undefined8 *)((pFVar5->Key).BorderColor + 3);
      local_c8.MaxLOD = (pFVar5->Key).MaxLOD;
      if ((0x7ff < (int)uVar29) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntriesTouched < ( 2048 )",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12State.cpp"
                             ,0x147,
                             L"Attempted to create new SamplerState when cache is full, and no unreferenced entries are available for replacement."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FD3D12SamplerState *)(*pcVar7)();
        return pFVar14;
      }
    }
    iVar11 = TSet<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*,TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FKeyFuncs,FDefaultSetAllocator>
             ::FindIndexByHash<D3D12_SAMPLER_DESC>(&this_00->LookupSet,DVar8,&local_c8);
    if ((iVar11 != -1) &&
       (plVar26 = (longlong *)
                  ((longlong)iVar11 * 0x10 + *(longlong *)&(this_00->LookupSet).Elements),
       plVar26 != (longlong *)0x0)) {
      plVar23 = (longlong *)(*plVar26 + 0x48);
    }
    FD3D12SamplerState::FreeDescriptor((FD3D12SamplerState *)*plVar23);
    iVar11 = TSet<TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FCacheEntry_*,TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>::FKeyFuncs,FDefaultSetAllocator>
             ::FindIndexByHash<D3D12_SAMPLER_DESC>(&this_00->LookupSet,DVar8,&local_c8);
    if ((iVar11 != -1) &&
       (puVar24 = (undefined8 *)
                  ((longlong)iVar11 * 0x10 + *(longlong *)&(this_00->LookupSet).Elements),
       puVar24 != (undefined8 *)0x0)) {
      TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
      ::Remove(this_00,(FCacheEntry *)*puVar24);
    }
  }
  pFVar14 = ::operator_new(0x88);
  if (pFVar14 == (FD3D12SamplerState *)0x0) {
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
LAB_145a5ef79:
    FVar17 = local_128;
    TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
    ::Add(this_00,&local_78,(TRefCountPtr<FD3D12SamplerState> *)&local_128);
  }
  else {
    FVar17 = (FName)FD3D12SamplerState::FD3D12SamplerState
                              (pFVar14,this,&local_78,(ushort)this->SamplerID,local_100);
    local_128 = FVar17;
    if (FVar17 == (FName)0x0) goto LAB_145a5ef79;
    FRHIResource::AddRef((FRHIResource *)FVar17);
    TLruCache<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,DefaultKeyComparer<D3D12_SAMPLER_DESC>_>
    ::Add(this_00,&local_78,(TRefCountPtr<FD3D12SamplerState> *)&local_128);
    FRHIResource::Release((FRHIResource *)FVar17);
  }
  this->SamplerID = this->SamplerID + 1;
  FVar18 = StatPtr_STAT_UniqueSamplers;
  if (StatPtr_STAT_UniqueSamplers == (FThreadSafeStaticStat<FStat_STAT_UniqueSamplers>)0x0) {
    pFVar12 = ::FName::FName(&local_80,"STAT_UniqueSamplers");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_UniqueSamplers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniqueSamplers,*pFVar12,
                        L"Unique Samplers","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                        L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar6 = *(FName *)FVar18;
  FVar30 = FVar6.ComparisonIndex.Value;
  uVar29 = FVar6.Number;
  local_118.ComparisonIndex.Value = FVar30.Value;
  local_118.Number = uVar29;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    local_e8.NameAndInfo.Number = uVar29 & 0xffffafff | 0xa000;
    local_e8.StatData.Pad[0] = '\x01';
    local_e8.StatData.Pad[1] = '\0';
    local_e8.StatData.Pad[2] = '\0';
    local_e8.StatData.Pad[3] = '\0';
    local_e8.StatData.Pad[4] = '\0';
    local_e8.StatData.Pad[5] = '\0';
    local_e8.StatData.Pad[6] = '\0';
    local_e8.StatData.Pad[7] = '\0';
    local_f8 = FVar6;
    local_e8.NameAndInfo.Index.Value = FVar30.Value;
    FThreadStats::AddStatMessage(pFVar19,&local_e8);
    FStatsTrace::Add(&local_f8,1);
    if (pFVar19->ScopeCount == 0) {
      FThreadStats::Flush(pFVar19,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar19,false,false);
    }
  }
LAB_145a5f0c8:
  LeaveCriticalSection((LPCRITICAL_SECTION)&GD3D12SamplerStateCacheLock);
  if (((ulonglong)pTVar28 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((ulonglong)pTVar28 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((ulonglong)pTVar28 & 4) != 0) && (FVar27 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f0);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_d8);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return (FD3D12SamplerState *)FVar17;
}

// CopyDescriptors @ 145a9e150

void __cdecl
FD3D12Device::CopyDescriptors
          (ID3D12Device *param_1,D3D12_CPU_DESCRIPTOR_HANDLE param_2,
          D3D12_CPU_DESCRIPTOR_HANDLE *param_3,uint param_4,D3D12_DESCRIPTOR_HEAP_TYPE param_5)

{
  ulong64 local_res10 [2];
  uint local_res20 [2];
  
  local_res10[0] = param_2.ptr;
  local_res20[0] = param_4;
  (**(code **)((longlong)*param_1 + 0xb8))
            (param_1,1,local_res10,local_res20,param_4,param_3,0,param_5);
  return;
}

// CreateCommandList @ 145a9ea00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

undefined4 __thiscall
FD3D12Device::CreateCommandList
          (FD3D12Device *this,uint param_1,D3D12_COMMAND_LIST_TYPE param_2,
          ID3D12CommandAllocator *param_3,ID3D12PipelineState *param_4,_GUID *param_5,void **param_6
          )

{
  undefined4 uVar1;
  ID3D12Device *pIVar2;
  
  pIVar2 = GetDevice(this);
                    /* WARNING: Could not recover jumptable at 0x000145a9ea3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,param_1,param_2,param_3);
  return uVar1;
}

// CreateSamplerInternal @ 145aa0270

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Device::CreateSamplerInternal
          (FD3D12Device *this,D3D12_SAMPLER_DESC *param_1,D3D12_CPU_DESCRIPTOR_HANDLE param_2)

{
  ID3D12Device *pIVar1;
  
  pIVar1 = GetDevice(this);
                    /* WARNING: Could not recover jumptable at 0x000145aa02a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0xb0))
            (pIVar1,param_1,param_2.ptr,*(code **)((longlong)*pIVar1 + 0xb0));
  return;
}

// DeserializeRayTracingStateObject @ 145aa0af0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<ID3D12StateObject> __thiscall
FD3D12Device::DeserializeRayTracingStateObject
          (FD3D12Device *this,D3D12_SHADER_BYTECODE *param_1,ID3D12RootSignature *param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<ID3D12StateObject> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                     ,0x79d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (ID3D12StateObject *)(*pcVar1)();
    return (TRefCountPtr<ID3D12StateObject>)TVar3.Reference;
  }
  param_1->pShaderBytecode = (void *)0x0;
  return (TRefCountPtr<ID3D12StateObject>)(ID3D12StateObject *)param_1;
}

// GetRayTracingPipelineInfo @ 145aaa300

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall
FD3D12Device::GetRayTracingPipelineInfo
          (FD3D12Device *this,ID3D12StateObject *param_1,FD3D12RayTracingPipelineInfo *param_2)

{
  param_2->PerformanceGroup = 0;
  param_2->NumVGPR = 0;
  param_2->NumSGPR = 0;
  param_2->StackSize = 0;
  param_2->ScratchSize = 0;
  return false;
}

// GetRaytracingAccelerationStructurePrebuildInfo @ 145aaa320

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Device::GetRaytracingAccelerationStructurePrebuildInfo
          (FD3D12Device *this,D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS *param_1,
          D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO *param_2)

{
  ID3D12Device5 *pIVar1;
  
  pIVar1 = GetDevice5(this);
                    /* WARNING: Could not recover jumptable at 0x000145aaa352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x1f8))
            (pIVar1,param_1,param_2,*(code **)((longlong)*pIVar1 + 0x1f8));
  return;
}

