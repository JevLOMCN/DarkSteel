// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 49

// FD3D12Adapter @ 1459a7630

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Adapter * __thiscall
FD3D12Adapter::FD3D12Adapter(FD3D12Adapter *this,FD3D12AdapterDesc *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FD3D12AdapterDesc *pFVar5;
  bool bVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  FD3D12AdapterDesc *pFVar9;
  uint uVar10;
  FD3D12AdapterDesc *pFVar11;
  uint local_res8 [2];
  
  this->ExceptionHandlerHandle = (void *)0xffffffffffffffff;
  (this->RootDevice).Reference = (ID3D12Device *)0x0;
  this->_padding_ = (longlong)&___7FD3D12Adapter__6B_;
  (this->RootDevice1).Reference = (ID3D12Device1 *)0x0;
  lVar7 = 2;
  (this->RootDevice2).Reference = (ID3D12Device2 *)0x0;
  (this->RootDevice3).Reference = (ID3D12Device3 *)0x0;
  (this->RootDevice4).Reference = (ID3D12Device4 *)0x0;
  (this->RootDevice5).Reference = (ID3D12Device5 *)0x0;
  (this->RootDevice6).Reference = (ID3D12Device6 *)0x0;
  (this->RootDevice7).Reference = (ID3D12Device7 *)0x0;
  (this->RootDevice8).Reference = (ID3D12Device8 *)0x0;
  (this->RootDevice9).Reference = (ID3D12Device9 *)0x0;
  (this->RootDevice10).Reference = (ID3D12Device10 *)0x0;
  (this->RootDevice11).Reference = (ID3D12Device11 *)0x0;
  (this->RootDevice12).Reference = (ID3D12Device12 *)0x0;
  (this->DxgiFactory2).Reference = (IDXGIFactory2 *)0x0;
  (this->DxgiFactory3).Reference = (IDXGIFactory3 *)0x0;
  (this->DxgiFactory4).Reference = (IDXGIFactory4 *)0x0;
  (this->DxgiFactory5).Reference = (IDXGIFactory5 *)0x0;
  (this->DxgiFactory6).Reference = (IDXGIFactory6 *)0x0;
  (this->DxgiFactory7).Reference = (IDXGIFactory7 *)0x0;
  this->DxgiDebugDllHandle = (HINSTANCE__ *)0x0;
  (this->DXGIDebug).Reference = (IDXGIDebug *)0x0;
  this->DxgiDllHandle = (HINSTANCE__ *)0x0;
  this->bDepthBoundsTestSupported = false;
  this->bCopyQueueTimestampQueriesSupported = false;
  this->bHeapNotZeroedSupported = false;
  this->MaxNonSamplerDescriptors = 0;
  this->MaxSamplerDescriptors = 0;
  this->VRSTileSize = 0;
  this->bDebugDevice = false;
  pFVar5 = &this->Desc;
  do {
    pFVar11 = param_1;
    pFVar9 = pFVar5;
    pFVar5 = (FD3D12AdapterDesc *)((pFVar9->Desc).Description + 0x40);
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 4);
    param_1 = (FD3D12AdapterDesc *)((pFVar11->Desc).Description + 0x40);
    *(undefined8 *)(pFVar9->Desc).Description = *(undefined8 *)(pFVar11->Desc).Description;
    *(undefined8 *)((pFVar9->Desc).Description + 4) = uVar4;
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0xc);
    *(undefined8 *)((pFVar9->Desc).Description + 8) =
         *(undefined8 *)((pFVar11->Desc).Description + 8);
    *(undefined8 *)((pFVar9->Desc).Description + 0xc) = uVar4;
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x14);
    *(undefined8 *)((pFVar9->Desc).Description + 0x10) =
         *(undefined8 *)((pFVar11->Desc).Description + 0x10);
    *(undefined8 *)((pFVar9->Desc).Description + 0x14) = uVar4;
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x1c);
    *(undefined8 *)((pFVar9->Desc).Description + 0x18) =
         *(undefined8 *)((pFVar11->Desc).Description + 0x18);
    *(undefined8 *)((pFVar9->Desc).Description + 0x1c) = uVar4;
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x24);
    *(undefined8 *)((pFVar9->Desc).Description + 0x20) =
         *(undefined8 *)((pFVar11->Desc).Description + 0x20);
    *(undefined8 *)((pFVar9->Desc).Description + 0x24) = uVar4;
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x2c);
    *(undefined8 *)((pFVar9->Desc).Description + 0x28) =
         *(undefined8 *)((pFVar11->Desc).Description + 0x28);
    *(undefined8 *)((pFVar9->Desc).Description + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x34);
    *(undefined8 *)((pFVar9->Desc).Description + 0x30) =
         *(undefined8 *)((pFVar11->Desc).Description + 0x30);
    *(undefined8 *)((pFVar9->Desc).Description + 0x34) = uVar4;
    uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x3c);
    *(undefined8 *)((pFVar9->Desc).Description + 0x38) =
         *(undefined8 *)((pFVar11->Desc).Description + 0x38);
    *(undefined8 *)((pFVar9->Desc).Description + 0x3c) = uVar4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x44);
  *(undefined8 *)(pFVar5->Desc).Description = *(undefined8 *)(param_1->Desc).Description;
  *(undefined8 *)((pFVar9->Desc).Description + 0x44) = uVar4;
  uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x4c);
  *(undefined8 *)((pFVar9->Desc).Description + 0x48) =
       *(undefined8 *)((pFVar11->Desc).Description + 0x48);
  *(undefined8 *)((pFVar9->Desc).Description + 0x4c) = uVar4;
  uVar4 = *(undefined8 *)((pFVar11->Desc).Description + 0x54);
  *(undefined8 *)((pFVar9->Desc).Description + 0x50) =
       *(undefined8 *)((pFVar11->Desc).Description + 0x50);
  *(undefined8 *)((pFVar9->Desc).Description + 0x54) = uVar4;
  uVar1 = *(undefined4 *)((pFVar11->Desc).Description + 0x5a);
  uVar2 = *(undefined4 *)((pFVar11->Desc).Description + 0x5c);
  uVar3 = *(undefined4 *)((pFVar11->Desc).Description + 0x5e);
  *(undefined4 *)((pFVar9->Desc).Description + 0x58) =
       *(undefined4 *)((pFVar11->Desc).Description + 0x58);
  *(undefined4 *)((pFVar9->Desc).Description + 0x5a) = uVar1;
  *(undefined4 *)((pFVar9->Desc).Description + 0x5c) = uVar2;
  *(undefined4 *)((pFVar9->Desc).Description + 0x5e) = uVar3;
  uVar1 = *(undefined4 *)((pFVar11->Desc).Description + 0x62);
  uVar2 = *(undefined4 *)((pFVar11->Desc).Description + 100);
  uVar3 = *(undefined4 *)((pFVar11->Desc).Description + 0x66);
  *(undefined4 *)((pFVar9->Desc).Description + 0x60) =
       *(undefined4 *)((pFVar11->Desc).Description + 0x60);
  *(undefined4 *)((pFVar9->Desc).Description + 0x62) = uVar1;
  *(undefined4 *)((pFVar9->Desc).Description + 100) = uVar2;
  *(undefined4 *)((pFVar9->Desc).Description + 0x66) = uVar3;
  *(undefined8 *)((pFVar9->Desc).Description + 0x68) =
       *(undefined8 *)((pFVar11->Desc).Description + 0x68);
  (this->DxgiAdapter).Reference = (IDXGIAdapter *)0x0;
  (this->RootSignatureManager)._padding_ = (longlong)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->RootSignatureManager).CS,4000);
  *(undefined8 *)&(this->RootSignatureManager).RootSignatureMap = 0;
  *(undefined8 *)&(this->RootSignatureManager).RootSignatureMap.field_0x8 = 0;
  *(undefined8 *)&(this->RootSignatureManager).RootSignatureMap.field_0x20 = 0;
  *(undefined4 *)&(this->RootSignatureManager).RootSignatureMap.field_0x28 = 0;
  *(undefined4 *)&(this->RootSignatureManager).RootSignatureMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RootSignatureManager).RootSignatureMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RootSignatureManager).RootSignatureMap.field_0x34 = 0;
  *(undefined8 *)&(this->RootSignatureManager).RootSignatureMap.field_0x40 = 0;
  *(undefined4 *)&(this->RootSignatureManager).RootSignatureMap.field_0x48 = 0;
  FD3D12PipelineStateCache::FD3D12PipelineStateCache(&this->PipelineStateCache,this);
  (this->DrawIndirectCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
  (this->DrawIndexedIndirectCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
  (this->DispatchIndirectGraphicsCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
  (this->DispatchIndirectComputeCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
  (this->DispatchIndirectMeshCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
  (this->DispatchRaysIndirectCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
  (this->Viewports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Viewports).ArrayNum = 0;
  (this->Viewports).ArrayMax = 0;
  (this->FrameFence).Ptr = (FD3D12ManualFence *)0x0;
  FD3D12CommandContextRedirector::FD3D12CommandContextRedirector
            (&this->DefaultContextRedirector,this,Direct,true);
  this->bTrackAllAllocation = false;
  *(undefined8 *)&this->TrackedAllocationData = 0;
  *(undefined8 *)&(this->TrackedAllocationData).field_0x8 = 0;
  *(undefined8 *)&(this->TrackedAllocationData).field_0x20 = 0;
  *(undefined4 *)&(this->TrackedAllocationData).field_0x28 = 0;
  *(undefined4 *)&(this->TrackedAllocationData).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedAllocationData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackedAllocationData).field_0x34 = 0;
  *(undefined8 *)&(this->TrackedAllocationData).field_0x40 = 0;
  *(undefined4 *)&(this->TrackedAllocationData).field_0x48 = 0;
  (this->TrackedHeaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedHeaps).ArrayNum = 0;
  (this->TrackedHeaps).ArrayMax = 0;
  (this->ReleasedAllocationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedAllocationData).ArrayNum = 0;
  (this->ReleasedAllocationData).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TrackedAllocationDataCS,4000);
  (this->MemoryStats).BudgetLocal = 0;
  (this->MemoryStats).BudgetSystem = 0;
  (this->MemoryStats).UsedLocal = 0;
  (this->MemoryStats).UsedSystem = 0;
  (this->MemoryStats).DemotedLocal = 0;
  (this->MemoryStats).DemotedSystem = 0;
  (this->MemoryStats).AvailableLocal = 0;
  (this->MemoryStats).AvailableSystem = 0;
  (this->TransientUniformBufferAllocators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientUniformBufferAllocators).ArrayNum = 0;
  (this->TransientUniformBufferAllocators).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->TransientUniformBufferAllocatorsCS,4000);
  (this->TransientMemoryCache).Ptr = (IRHITransientMemoryCache *)0x0;
  this->DebugFlags = 0;
  (this->BindlessDescriptorAllocator)._padding_ = (longlong)this;
  (this->BindlessDescriptorAllocator).BindlessConfiguration = Disabled;
  (this->BindlessDescriptorAllocator).MaxResourceHeapSize = 0;
  (this->BindlessDescriptorAllocator).MaxSamplerHeapSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->BindlessDescriptorAllocator).ResourceHeapsCS,4000);
  (this->BindlessDescriptorAllocator).ResourceAllocator = (FRHIHeapDescriptorAllocator *)0x0;
  (this->BindlessDescriptorAllocator).SamplerAllocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->UploadHeapAllocator[0] = (FD3D12UploadHeapAllocator *)0x0;
  this->UploadHeapAllocator[1] = (FD3D12UploadHeapAllocator *)0x0;
  local_res8[0] = 1;
  this->UploadHeapAllocator[2] = (FD3D12UploadHeapAllocator *)0x0;
  this->UploadHeapAllocator[3] = (FD3D12UploadHeapAllocator *)0x0;
  this->UploadHeapAllocator[4] = (FD3D12UploadHeapAllocator *)0x0;
  this->UploadHeapAllocator[5] = (FD3D12UploadHeapAllocator *)0x0;
  this->UploadHeapAllocator[6] = (FD3D12UploadHeapAllocator *)0x0;
  this->UploadHeapAllocator[7] = (FD3D12UploadHeapAllocator *)0x0;
  (this->Devices).Elements[0] = (FD3D12Device *)0x0;
  (this->Devices).Elements[1] = (FD3D12Device *)0x0;
  (this->Devices).Elements[2] = (FD3D12Device *)0x0;
  (this->Devices).Elements[3] = (FD3D12Device *)0x0;
  (this->Devices).Elements[4] = (FD3D12Device *)0x0;
  (this->Devices).Elements[5] = (FD3D12Device *)0x0;
  (this->Devices).Elements[6] = (FD3D12Device *)0x0;
  (this->Devices).Elements[7] = (FD3D12Device *)0x0;
  pwVar8 = FCommandLine::Get();
  FParse::Value(pwVar8,L"MaxGPUCount=",local_res8);
  pwVar8 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar8,L"VMGPU");
  if ((bVar6) && (GVirtualMGPU = 1, 4 < (byte)LogD3D12RHI._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  if (GVirtualMGPU == 0) {
    uVar10 = (this->Desc).NumDeviceNodes;
    if (uVar10 < local_res8[0]) {
      local_res8[0] = uVar10;
    }
    uVar10 = 8;
    if (local_res8[0] < 8) {
      uVar10 = local_res8[0];
    }
  }
  else {
    uVar10 = 8;
    if (local_res8[0] < 8) {
      uVar10 = local_res8[0];
    }
  }
  (this->Desc).NumDeviceNodes = uVar10;
  return this;
}

// ~FD3D12Adapter @ 1459ab5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459ab664) */
/* WARNING: Removing unreachable block (ram,0x0001459ab729) */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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

void __thiscall FD3D12Adapter::~FD3D12Adapter(FD3D12Adapter *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FD3D12Device *this_00;
  FD3D12UploadHeapAllocator *pFVar4;
  void *pvVar5;
  FD3D12ManualFence *pFVar6;
  IRHITransientMemoryCache *pIVar7;
  ID3D12CommandSignature *pIVar8;
  IDXGIDebug *pIVar9;
  ID3D12Device *pIVar10;
  FRHIResource *this_01;
  IDXGIAdapter *pIVar11;
  IDXGIFactory7 *pIVar12;
  IDXGIFactory6 *pIVar13;
  IDXGIFactory5 *pIVar14;
  IDXGIFactory4 *pIVar15;
  IDXGIFactory3 *pIVar16;
  IDXGIFactory2 *pIVar17;
  ID3D12Device12 *pIVar18;
  ID3D12Device11 *pIVar19;
  ID3D12Device10 *pIVar20;
  ID3D12Device9 *pIVar21;
  ID3D12Device8 *pIVar22;
  ID3D12Device7 *pIVar23;
  ID3D12Device6 *pIVar24;
  ID3D12Device5 *pIVar25;
  ID3D12Device4 *pIVar26;
  ID3D12Device3 *pIVar27;
  ID3D12Device2 *pIVar28;
  ID3D12Device1 *pIVar29;
  uint uVar30;
  int iVar31;
  ulonglong uVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  undefined1 auStackY_88 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  FString local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  this->_padding_ = (longlong)&___7FD3D12Adapter__6B_;
  pFVar33 = (this->TransientUniformBufferAllocators).AllocatorInstance.Data;
  iVar31 = (this->TransientUniformBufferAllocators).ArrayNum;
  pFVar2 = pFVar33 + (longlong)iVar31 * 8;
  while( true ) {
    if ((this->TransientUniformBufferAllocators).ArrayNum != iVar31) {
      `TCheckedPointerIterator<FTransientUniformBufferAllocator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_48);
    }
    if (pFVar33 == pFVar2) break;
    lVar3 = *(longlong *)pFVar33;
    FD3D12ResourceLocation::Clear((FD3D12ResourceLocation *)(lVar3 + 0x20));
    pFVar33 = pFVar33 + 8;
    *(undefined8 *)(lVar3 + 0xa0) = 0;
  }
  piVar1 = &(this->TransientUniformBufferAllocators).ArrayMax;
  (this->TransientUniformBufferAllocators).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TransientUniformBufferAllocators).AllocatorInstance,0,piVar1);
  }
  uVar34 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar30 = 0;
  if (uVar34 != 0) {
    for (; (uVar34 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
    }
  }
  uVar32 = 0x20;
  if (uVar34 != 0) {
    uVar32 = (ulonglong)uVar30;
  }
  local_58 = (longlong *)((ulonglong)local_58._4_4_ << 0x20);
  if (uVar34 != 0) {
    while( true ) {
      this_00 = (this->Devices).Elements[uVar32];
      if (this_00 != (FD3D12Device *)0x0) {
        FD3D12Device::~FD3D12Device(this_00);
        ::operator_delete(this_00,0x1640,0x40);
      }
      (this->Devices).Elements[uVar32] = (FD3D12Device *)0x0;
      uVar34 = uVar34 & ~(1 << ((byte)uVar32 & 0x1f));
      uVar30 = 0;
      if (uVar34 != 0) {
        for (; (uVar34 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
        }
      }
      if (uVar34 == 0) break;
      uVar32 = (ulonglong)uVar30;
    }
  }
  piVar1 = &(this->Viewports).ArrayMax;
  (this->Viewports).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Viewports).AllocatorInstance,0,piVar1);
  }
  uVar34 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar30 = 0;
  if (uVar34 != 0) {
    for (; (uVar34 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
    }
  }
  uVar32 = 0x20;
  if (uVar34 != 0) {
    uVar32 = (ulonglong)uVar30;
  }
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  if (uVar34 != 0) {
    while( true ) {
      pFVar4 = this->UploadHeapAllocator[uVar32];
      if (pFVar4 != (FD3D12UploadHeapAllocator *)0x0) {
        FD3D12MultiBuddyAllocator::ReleaseAllResources(&pFVar4->SmallBlockAllocator);
        FRHIPoolAllocator::Destroy((FRHIPoolAllocator *)&pFVar4->BigBlockAllocator);
        FD3D12MultiBuddyAllocator::ReleaseAllResources(&pFVar4->FastConstantPageAllocator);
        pFVar4 = this->UploadHeapAllocator[uVar32];
        if (pFVar4 != (FD3D12UploadHeapAllocator *)0x0) {
          FD3D12MultiBuddyAllocator::ReleaseAllResources(&pFVar4->FastConstantPageAllocator);
          pFVar2 = (pFVar4->FastConstantPageAllocator).Allocators.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          DeleteCriticalSection((LPCRITICAL_SECTION)&(pFVar4->FastConstantPageAllocator)._padding_);
          pvVar5 = (void *)(pFVar4->FastConstantPageAllocator)._padding_;
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
          FD3D12PoolAllocator::~FD3D12PoolAllocator(&pFVar4->BigBlockAllocator);
          DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar4->BigBlockCS);
          FD3D12MultiBuddyAllocator::ReleaseAllResources(&pFVar4->SmallBlockAllocator);
          pFVar2 = (pFVar4->SmallBlockAllocator).Allocators.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          DeleteCriticalSection((LPCRITICAL_SECTION)&(pFVar4->SmallBlockAllocator)._padding_);
          pvVar5 = (void *)(pFVar4->SmallBlockAllocator)._padding_;
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
          ::operator_delete(pFVar4,0x288);
        }
        this->UploadHeapAllocator[uVar32] = (FD3D12UploadHeapAllocator *)0x0;
      }
      uVar34 = uVar34 & ~(1 << ((byte)uVar32 & 0x1f));
      uVar30 = 0;
      if (uVar34 != 0) {
        for (; (uVar34 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
        }
      }
      if (uVar34 == 0) break;
      uVar32 = (ulonglong)uVar30;
    }
  }
  pFVar6 = (this->FrameFence).Ptr;
  (this->FrameFence).Ptr = (FD3D12ManualFence *)0x0;
  if (pFVar6 != (FD3D12ManualFence *)0x0) {
    *(undefined4 *)&(pFVar6->Fences).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar6->Fences).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->Fences);
    ::operator_delete(pFVar6,0x70);
  }
  pIVar7 = (this->TransientMemoryCache).Ptr;
  if (pIVar7 != (IRHITransientMemoryCache *)0x0) {
    (this->TransientMemoryCache).Ptr = (IRHITransientMemoryCache *)0x0;
    (**(code **)*pIVar7)(pIVar7,1);
  }
  if ((this->RootDevice).Reference != (ID3D12Device *)0x0) {
    FD3D12PipelineStateCache::Close(&this->PipelineStateCache);
  }
  FD3D12RootSignatureManager::Destroy(&this->RootSignatureManager);
  pIVar8 = (this->DrawIndirectCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (this->DrawIndirectCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DrawIndexedIndirectCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (this->DrawIndexedIndirectCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DispatchIndirectGraphicsCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (this->DispatchIndirectGraphicsCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DispatchIndirectComputeCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (this->DispatchIndirectComputeCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DispatchRaysIndirectCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (this->DispatchRaysIndirectCommandSignature).Reference = (ID3D12CommandSignature *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar9 = (this->DXGIDebug).Reference;
  if (pIVar9 != (IDXGIDebug *)0x0) {
    local_58 = (longlong *)0x490bda80e48ae283;
    local_50 = 0xe943e687;
    local_4c = 0x8dacfa9;
    (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,&local_58,6);
    pIVar9 = (this->DXGIDebug).Reference;
    if (pIVar9 != (IDXGIDebug *)0x0) {
      (this->DXGIDebug).Reference = (IDXGIDebug *)0x0;
      (**(code **)((longlong)*pIVar9 + 0x10))();
    }
    CheckD3DStoredMessages();
    if (GD3D12CallBackCookie != 0) {
      pIVar10 = (this->RootDevice).Reference;
      local_58 = (longlong *)0x0;
      iVar31 = (**(code **)*pIVar10)(pIVar10,&_GUID_2852dd88_b484_4c0c_b6b1_67168500e600,&local_58);
      if (iVar31 < 0) {
        local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40.Data.ArrayNum = 0;
        local_40.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar31,
                   "RootDevice->QueryInterface(__uuidof(ID3D12InfoQueue1), (void**)&pd3dInfoQueue1)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                   ,0x687,(ID3D12Device *)0x0,&local_40);
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x138))(local_58,GD3D12CallBackCookie);
        GD3D12CallBackCookie = 0;
      }
    }
  }
  pIVar10 = (this->RootDevice).Reference;
  if ((pIVar10 != (ID3D12Device *)0x0) && (GRHIGlobals.IsDebugLayerEnabled != false)) {
    local_58 = (longlong *)0x0;
    iVar31 = (**(code **)*pIVar10)(pIVar10,&_GUID_3febd6dd_4973_4787_8194_e45f9e28923e,&local_58);
    if (-1 < iVar31) {
      (**(code **)(*local_58 + 0x28))(local_58,2);
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (this->ExceptionHandlerHandle != (PVOID)0xffffffffffffffff) {
    RemoveVectoredExceptionHandler(this->ExceptionHandlerHandle);
  }
  FWindowsPlatformProcess::FreeDllHandle((HMODULE)this->DxgiDebugDllHandle);
  FWindowsPlatformProcess::FreeDllHandle((HMODULE)this->DxgiDllHandle);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->BindlessDescriptorAllocator).ResourceHeapsCS);
  pIVar7 = (this->TransientMemoryCache).Ptr;
  if (pIVar7 != (IRHITransientMemoryCache *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TransientUniformBufferAllocatorsCS);
  pFVar2 = (this->TransientUniformBufferAllocators).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TrackedAllocationDataCS);
  pFVar2 = (this->ReleasedAllocationData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TrackedHeaps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->TrackedAllocationData).field_0x48 = 0;
  pvVar5 = *(void **)&(this->TrackedAllocationData).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackedAllocationData);
  (this->DefaultContextRedirector)._padding_ = (longlong)&___7IRHICommandContext__6B_;
  this_01 = (FRHIResource *)(this->DefaultContextRedirector)._padding_;
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  (this->DefaultContextRedirector)._padding_ = (longlong)&___7IRHIComputeContext__6B_;
  pFVar6 = (this->FrameFence).Ptr;
  if (pFVar6 != (FD3D12ManualFence *)0x0) {
    *(undefined4 *)&(pFVar6->Fences).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar6->Fences).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->Fences);
    ::operator_delete(pFVar6,0x70);
  }
  pFVar2 = (this->Viewports).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar8 = (this->DispatchRaysIndirectCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DispatchIndirectMeshCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DispatchIndirectComputeCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DispatchIndirectGraphicsCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DrawIndexedIndirectCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar8 = (this->DrawIndirectCommandSignature).Reference;
  if (pIVar8 != (ID3D12CommandSignature *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  FD3D12PipelineStateCache::~FD3D12PipelineStateCache(&this->PipelineStateCache);
  FD3D12RootSignatureManager::~FD3D12RootSignatureManager(&this->RootSignatureManager);
  pIVar11 = (this->DxgiAdapter).Reference;
  if (pIVar11 != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*pIVar11 + 0x10))();
  }
  pIVar9 = (this->DXGIDebug).Reference;
  if (pIVar9 != (IDXGIDebug *)0x0) {
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  pIVar12 = (this->DxgiFactory7).Reference;
  if (pIVar12 != (IDXGIFactory7 *)0x0) {
    (**(code **)((longlong)*pIVar12 + 0x10))();
  }
  pIVar13 = (this->DxgiFactory6).Reference;
  if (pIVar13 != (IDXGIFactory6 *)0x0) {
    (**(code **)((longlong)*pIVar13 + 0x10))();
  }
  pIVar14 = (this->DxgiFactory5).Reference;
  if (pIVar14 != (IDXGIFactory5 *)0x0) {
    (**(code **)((longlong)*pIVar14 + 0x10))();
  }
  pIVar15 = (this->DxgiFactory4).Reference;
  if (pIVar15 != (IDXGIFactory4 *)0x0) {
    (**(code **)((longlong)*pIVar15 + 0x10))();
  }
  pIVar16 = (this->DxgiFactory3).Reference;
  if (pIVar16 != (IDXGIFactory3 *)0x0) {
    (**(code **)((longlong)*pIVar16 + 0x10))();
  }
  pIVar17 = (this->DxgiFactory2).Reference;
  if (pIVar17 != (IDXGIFactory2 *)0x0) {
    (**(code **)((longlong)*pIVar17 + 0x10))();
  }
  pIVar18 = (this->RootDevice12).Reference;
  if (pIVar18 != (ID3D12Device12 *)0x0) {
    (**(code **)((longlong)*pIVar18 + 0x10))();
  }
  pIVar19 = (this->RootDevice11).Reference;
  if (pIVar19 != (ID3D12Device11 *)0x0) {
    (**(code **)((longlong)*pIVar19 + 0x10))();
  }
  pIVar20 = (this->RootDevice10).Reference;
  if (pIVar20 != (ID3D12Device10 *)0x0) {
    (**(code **)((longlong)*pIVar20 + 0x10))();
  }
  pIVar21 = (this->RootDevice9).Reference;
  if (pIVar21 != (ID3D12Device9 *)0x0) {
    (**(code **)((longlong)*pIVar21 + 0x10))();
  }
  pIVar22 = (this->RootDevice8).Reference;
  if (pIVar22 != (ID3D12Device8 *)0x0) {
    (**(code **)((longlong)*pIVar22 + 0x10))();
  }
  pIVar23 = (this->RootDevice7).Reference;
  if (pIVar23 != (ID3D12Device7 *)0x0) {
    (**(code **)((longlong)*pIVar23 + 0x10))();
  }
  pIVar24 = (this->RootDevice6).Reference;
  if (pIVar24 != (ID3D12Device6 *)0x0) {
    (**(code **)((longlong)*pIVar24 + 0x10))();
  }
  pIVar25 = (this->RootDevice5).Reference;
  if (pIVar25 != (ID3D12Device5 *)0x0) {
    (**(code **)((longlong)*pIVar25 + 0x10))();
  }
  pIVar26 = (this->RootDevice4).Reference;
  if (pIVar26 != (ID3D12Device4 *)0x0) {
    (**(code **)((longlong)*pIVar26 + 0x10))();
  }
  pIVar27 = (this->RootDevice3).Reference;
  if (pIVar27 != (ID3D12Device3 *)0x0) {
    (**(code **)((longlong)*pIVar27 + 0x10))();
  }
  pIVar28 = (this->RootDevice2).Reference;
  if (pIVar28 != (ID3D12Device2 *)0x0) {
    (**(code **)((longlong)*pIVar28 + 0x10))();
  }
  pIVar29 = (this->RootDevice1).Reference;
  if (pIVar29 != (ID3D12Device1 *)0x0) {
    (**(code **)((longlong)*pIVar29 + 0x10))();
  }
  pIVar10 = (this->RootDevice).Reference;
  if (pIVar10 != (ID3D12Device *)0x0) {
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  return;
}

// operator() @ 1459ad730

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FTransientUniformBufferAllocator * __thiscall
`FD3D12Adapter::GetTransientUniformBufferAllocator'::__l2::<lambda_1>::operator()(void *this)

{
  FD3D12Adapter *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  FTransientUniformBufferAllocator *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar8;
  FTransientUniformBufferAllocator *local_18 [2];
  
  local_18[0] = ::operator_new(0xa8);
  if (local_18[0] == (FTransientUniformBufferAllocator *)0x0) {
    local_18[0] = (FTransientUniformBufferAllocator *)0x0;
  }
  else {
    pFVar1 = *(FD3D12Adapter **)this;
    FD3D12FastConstantAllocator::FD3D12FastConstantAllocator
              ((FD3D12FastConstantAllocator *)&local_18[0]->_padding_,(pFVar1->Devices).Elements[0],
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    local_18[0]->_padding_ =
         (longlong)&___7__TThreadSingleton_VFTransientUniformBufferAllocator____6B_;
    DVar5 = GetCurrentThreadId();
    *(DWORD *)&local_18[0]->_padding_ = DVar5;
    local_18[0]->_padding_ = (longlong)&FTransientUniformBufferAllocator::_vftable_;
    local_18[0]->Adapter = pFVar1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 2000);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar2 = *(longlong *)this;
    pFVar8 = (ForAnyElementType *)(lVar2 + 0x7c0);
    if ((pFVar8->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar8->Data + (longlong)*(int *)(lVar2 + 0x7cc) * 8))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FTransientUniformBufferAllocator *)(*pcVar3)();
        return pFVar7;
      }
    }
    iVar6 = *(int *)(lVar2 + 0x7c8);
    if (iVar6 == *(int *)(lVar2 + 0x7cc)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar8,(int *)(lVar2 + 0x7cc));
      *(int *)(lVar2 + 0x7c8) = iVar6 + 1;
    }
    else {
      *(int *)(lVar2 + 0x7c8) = iVar6 + 1;
    }
    *(FTransientUniformBufferAllocator **)(pFVar8->Data + (longlong)iVar6 * 8) = local_18[0];
    LeaveCriticalSection(lpCriticalSection);
    return local_18[0];
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AllocateBuffer @ 1459b1910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::AllocateBuffer
          (FD3D12Adapter *this,FD3D12Device *param_1,D3D12_RESOURCE_DESC *param_2,uint param_3,
          EBufferUsageFlags param_4,ED3D12ResourceStateMode param_5,ED3D12Access param_6,
          uint param_7,FD3D12Buffer *param_8,FD3D12ResourceLocation *param_9,
          ID3D12ResourceAllocator *param_10,wchar_t *param_11,FName *param_12)

{
  code *pcVar1;
  bool bVar2;
  FD3D12BaseShaderResource *pFVar3;
  bool bVar4;
  undefined1 auStackY_118 [32];
  FString local_a8;
  undefined8 local_98;
  ulong64 uStack_90;
  ulong64 local_88;
  undefined8 uStack_80;
  DXGI_FORMAT local_78;
  uint uStack_74;
  uint uStack_70;
  D3D12_TEXTURE_LAYOUT DStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId179,"D3D12RHI::AllocateBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
               ,0xb3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId179);
  }
  if (param_3 == 0) {
    ::FName::ToString(param_12,&local_a8);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((param_4 & AnyDynamic) == None) {
    if (param_10 == (ID3D12ResourceAllocator *)0x0) {
      FD3D12DefaultBufferAllocator::AllocDefaultResource
                (&param_1->DefaultBufferAllocator,D3D12_HEAP_TYPE_DEFAULT,param_2,param_4,param_5,
                 param_6,param_9,param_7,param_11);
    }
    else {
      local_88 = param_2->Width;
      uStack_80._0_4_ = param_2->Height;
      uStack_80._4_2_ = param_2->DepthOrArraySize;
      uStack_80._6_2_ = param_2->MipLevels;
      local_98 = *(undefined8 *)param_2;
      uStack_90 = param_2->Alignment;
      local_78 = param_2->Format;
      uStack_74 = (param_2->SampleDesc).Count;
      uStack_70 = (param_2->SampleDesc).Quality;
      DStack_6c = param_2->Layout;
      local_68 = *(undefined8 *)&param_2->Flags;
      uStack_60 = 0;
      (**(code **)*param_10)(param_10,*(undefined4 *)&param_1->field_0x8,1,&local_98);
    }
    pFVar3 = (FD3D12BaseShaderResource *)&param_8->_padding_;
    if (param_8 == (FD3D12Buffer *)0x0) {
      pFVar3 = (FD3D12BaseShaderResource *)0x0;
    }
    param_9->Owner = pFVar3;
    if ((param_9->Size < (ulonglong)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceLocation.GetSize() >= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                           ,0xe5,L""), bVar2)) goto code_r0x0001459b1c44;
  }
  else {
    if ((param_10 != (ID3D12ResourceAllocator *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceAllocator == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                           ,0xc1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_5 == MultiState) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InResourceStateMode != ED3D12ResourceStateMode::MultiState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                           ,0xc2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_6 != GenericRead) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCreateD3D12Access == ED3D12Access::GenericRead",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FD3D12UploadHeapAllocator::AllocUploadResource
              (this->UploadHeapAllocator[*(uint *)&param_1->field_0x8],param_3,param_7,param_9);
    if ((param_9->Size < (ulonglong)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceLocation.GetSize() >= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                           ,0xc5,L""), bVar2)) {
code_r0x0001459b1c44:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BlockUntilIdle @ 1459b3330

/* WARNING: Removing unreachable block (ram,0x0001459b335b) */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::BlockUntilIdle(FD3D12Adapter *this)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar1 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while( true ) {
    if (!bVar4) {
      return;
    }
    if ((GNumExplicitGPUsForRendering <= uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GPUIndex < GNumExplicitGPUsForRendering",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                           ,0x103,L""), bVar4)) break;
    FD3D12Device::BlockUntilIdle((this->Devices).Elements[uVar1]);
    uVar3 = uVar3 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// CleanupResources @ 1459b61c0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::CleanupResources(FD3D12Adapter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IRHITransientMemoryCache *pIVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Viewports).AllocatorInstance.Data;
  iVar2 = (this->Viewports).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Viewports).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FD3D12Viewport_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar5 + 0x58))();
    (**(code **)(**(longlong **)pFVar5 + 0x50))();
    pFVar5 = pFVar5 + 8;
  }
  pIVar3 = (this->TransientMemoryCache).Ptr;
  (this->TransientMemoryCache).Ptr = (IRHITransientMemoryCache *)0x0;
  if (pIVar3 != (IRHITransientMemoryCache *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  uVar6 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar4 = 0;
  bVar7 = uVar6 != 0;
  if (bVar7) {
    for (; (uVar6 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  while (bVar7) {
    FD3D12Device::CleanupResources((this->Devices).Elements[uVar4]);
    uVar6 = uVar6 & ~(1 << ((byte)uVar4 & 0x1f));
    uVar4 = 0;
    bVar7 = uVar6 != 0;
    if (bVar7) {
      for (; (uVar6 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  return;
}

// CollectMemoryStats @ 1459b7a20

/* WARNING: Removing unreachable block (ram,0x0001459b7ad4) */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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

FD3DMemoryStats * __thiscall FD3D12Adapter::CollectMemoryStats(FD3D12Adapter *this)

{
  FD3D12ManualFence *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3DMemoryStats *pFVar6;
  ulong64 uVar7;
  uint uVar8;
  ulong64 uVar9;
  
  pFVar1 = (this->FrameFence).Ptr;
  uVar9 = 0;
  uVar7 = uVar9;
  if (pFVar1 != (FD3D12ManualFence *)0x0) {
    uVar7 = (longlong)((pFVar1->NextFenceValueTOP).Counter + 1);
  }
  pFVar6 = &this->MemoryStats;
  if (this->MemoryStatsUpdateFrame != uVar7) {
    this->MemoryStatsUpdateFrame = uVar7;
    iVar5 = UE::DXGIUtilities::GetD3DMemoryStats((this->DxgiAdapter).Reference,pFVar6);
    if (-1 < iVar5) {
      GRHIGlobals.DemotedLocalMemorySize = (this->MemoryStats).DemotedLocal;
      if (((GEnableResidencyManagement == false) ||
          (GD3D12EvictAllResidentResourcesInBackground == false)) ||
         (bVar4 = FApp::HasFocus(), bVar4)) {
        uVar9 = pFVar6->BudgetLocal;
      }
      uVar8 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      uVar2 = 0;
      bVar4 = uVar8 != 0;
      if (bVar4) {
        for (; (uVar8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      while (bVar4) {
        if ((GNumExplicitGPUsForRendering <= uVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FD3DMemoryStats *)(*pcVar3)();
          return pFVar6;
        }
        uVar8 = uVar8 & ~(1 << ((byte)uVar2 & 0x1f));
        *(ulong64 *)&(this->Devices).Elements[uVar2]->ResidencyManager = uVar9;
        uVar2 = 0;
        bVar4 = uVar8 != 0;
        if (bVar4) {
          for (; (uVar8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
      }
    }
  }
  return pFVar6;
}

// CreateBarriersForContext @ 1459b92d0

TUniquePtr<ID3D12BarriersForContext,TDefaultDelete<ID3D12BarriersForContext>_> __cdecl
FD3D12Adapter::CreateBarriersForContext(void)

{
  FD3D12EnhancedBarriersForContext *this;
  ID3D12BarriersForContext IVar1;
  FD3D12LegacyBarriersForContext *this_00;
  ID3D12BarriersForContext *in_RCX;
  
  if (PreferredBarrierImplType == Enhanced) {
    this = ::operator_new(0x10);
    if (this != (FD3D12EnhancedBarriersForContext *)0x0) {
      IVar1 = (ID3D12BarriersForContext)
              FD3D12EnhancedBarriersForContext::FD3D12EnhancedBarriersForContext(this);
      *in_RCX = IVar1;
      return (TUniquePtr<ID3D12BarriersForContext,TDefaultDelete<ID3D12BarriersForContext>_>)in_RCX;
    }
  }
  else {
    this_00 = ::operator_new(0x10);
    if (this_00 != (FD3D12LegacyBarriersForContext *)0x0) {
      IVar1 = (ID3D12BarriersForContext)
              FD3D12LegacyBarriersForContext::FD3D12LegacyBarriersForContext(this_00);
      *in_RCX = IVar1;
      return (TUniquePtr<ID3D12BarriersForContext,TDefaultDelete<ID3D12BarriersForContext>_>)in_RCX;
    }
  }
  *in_RCX = (ID3D12BarriersForContext)0x0;
  return (TUniquePtr<ID3D12BarriersForContext,TDefaultDelete<ID3D12BarriersForContext>_>)in_RCX;
}

// CreateCommandSignatures @ 1459b9cd0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::CreateCommandSignatures(FD3D12Adapter *this)

{
  TRefCountPtr<ID3D12CommandSignature> *pTVar1;
  ID3D12Device *pIVar2;
  ID3D12CommandSignature *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString local_58;
  FString local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 *local_20;
  int local_18;
  undefined4 local_14;
  
  pIVar2 = (this->RootDevice).Reference;
  local_14 = 0;
  local_18 = 1;
  local_24 = 1;
  if (GVirtualMGPU == 0) {
    local_18 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  }
  pTVar1 = &this->DrawIndirectCommandSignature;
  pIVar3 = pTVar1->Reference;
  local_20 = &local_38;
  local_28 = 0x10;
  local_38 = 0;
  uStack_30 = 0;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x148);
  if (pIVar3 != (ID3D12CommandSignature *)0x0) {
    pTVar1->Reference = (ID3D12CommandSignature *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  iVar6 = (*pcVar4)(pIVar2,&local_28,0,&_GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1,pTVar1);
  if (iVar6 < 0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar6,
               "Device->CreateCommandSignature(&commandSignatureDesc, nullptr, IID_PPV_ARGS(DrawIndirectCommandSignature.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
               ,0x633,(ID3D12Device *)0x0,&local_58);
  }
  local_38 = CONCAT44(local_38._4_4_,1);
  pTVar1 = &this->DrawIndexedIndirectCommandSignature;
  pIVar3 = pTVar1->Reference;
  local_28 = 0x14;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x148);
  if (pIVar3 != (ID3D12CommandSignature *)0x0) {
    pTVar1->Reference = (ID3D12CommandSignature *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  iVar6 = (*pcVar4)(pIVar2,&local_28,0,&_GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1,pTVar1);
  if (iVar6 < 0) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar6,
               "Device->CreateCommandSignature(&commandSignatureDesc, nullptr, IID_PPV_ARGS(DrawIndexedIndirectCommandSignature.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
               ,0x637,(ID3D12Device *)0x0,&local_48);
  }
  if ((this->DispatchIndirectGraphicsCommandSignature).Reference == (ID3D12CommandSignature *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DispatchIndirectGraphicsCommandSignature.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x639,
                       L"Indirect graphics dispatch command signature is expected to be created by platform-specific D3D12 adapter implementation."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->DispatchIndirectComputeCommandSignature).Reference == (ID3D12CommandSignature *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DispatchIndirectComputeCommandSignature.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x63a,
                       L"Indirect compute dispatch command signature is expected to be created by platform-specific D3D12 adapter implementation."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// CreateD3DInfoQueue @ 1459b9fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459ba618) */
/* WARNING: Removing unreachable block (ram,0x0001459ba3fb) */
/* WARNING: Removing unreachable block (ram,0x0001459ba510) */
/* WARNING: Removing unreachable block (ram,0x0001459ba78e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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
/* WARNING: Enum "D3D12_MESSAGE_ID.conflict": Some values do not have unique names */

void __thiscall FD3D12Adapter::CreateD3DInfoQueue(FD3D12Adapter *this)

{
  ID3D12Device *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  ForAnyElementType FVar10;
  undefined4 uVar11;
  ForAnyElementType FVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  ForElementType<D3D12_MESSAGE_ID> FVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStackY_228 [32];
  undefined4 local_1d8 [2];
  longlong *local_1d0;
  longlong *local_1c8;
  undefined4 local_1c0 [2];
  FString local_1b8;
  undefined4 local_1a8 [2];
  FString local_1a0;
  undefined4 local_190 [2];
  FString local_188;
  undefined4 local_178 [2];
  FString local_170;
  undefined4 local_160;
  undefined4 local_15c;
  FString local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 *puStack_100;
  undefined8 local_f8;
  ForElementType<D3D12_MESSAGE_ID> FStack_f0;
  ForElementType<D3D12_MESSAGE_ID> local_e8;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pIVar1 = (this->RootDevice).Reference;
  uVar22 = 0;
  local_1d0 = (longlong *)0x0;
  iVar15 = (**(code **)*pIVar1)(pIVar1,&_GUID_0742a90b_c387_483f_b946_30a7e4e61458,&local_1d0);
  if (iVar15 < 0) {
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar15,
               "RootDevice->QueryInterface(__uuidof(ID3D12InfoQueue), (void**)&pd3dInfoQueue)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
               ,0x32b,(ID3D12Device *)0x0,&local_158);
  }
  pTVar8 = GD3D12DebugCvar.Ref;
  if (local_1d0 == (longlong *)0x0) {
    return;
  }
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puStack_100 = (undefined4 *)0x0;
  local_f8 = 0;
  FStack_f0 = (ForElementType<D3D12_MESSAGE_ID>)0x0;
  bVar14 = IsInParallelGameThread();
  if (bVar14) {
LAB_1459ba0d2:
    uVar18 = uVar22;
  }
  else {
    bVar14 = IsInGameThread();
    uVar18 = 4;
    if (bVar14) goto LAB_1459ba0d2;
  }
  pTVar9 = GD3D12DebugCvar.Ref;
  if (*(int *)((longlong)pTVar8->ShadowedValue + uVar18) == 3) {
LAB_1459ba105:
    uVar23 = 1;
  }
  else {
    bVar14 = IsInParallelGameThread();
    if (bVar14) {
LAB_1459ba0f7:
      uVar18 = uVar22;
    }
    else {
      bVar14 = IsInGameThread();
      uVar18 = 4;
      if (bVar14) goto LAB_1459ba0f7;
    }
    if (1 < *(int *)((longlong)pTVar9->ShadowedValue + uVar18)) goto LAB_1459ba105;
    uVar23 = 0;
  }
  uVar7 = _UNK_151075688;
  uVar6 = ___xmm_000004940000026000000530000000d2;
  uVar5 = _UNK_151075678;
  uVar4 = ___xmm_0000033500000334000000fd000002a7;
  uVar3 = _UNK_151075668;
  uVar13 = ___xmm_000000ca0000039e000003c30000039f;
  local_160 = 3;
  local_15c = 2;
  local_68 = 0x39b;
  local_108 = CONCAT44(local_108._4_4_,(uVar23 ^ 1) + 1);
  puStack_100 = &local_160;
  local_e8.SecondaryData = (ForElementType<D3D12_MESSAGE_ID>)0x0;
  local_a0 = 0xd;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>_>
            (4,4,0xd,0,&local_e8,0xd,&local_9c);
  uVar11 = local_68;
  local_98 = uVar4;
  uStack_90 = uVar5;
  FVar17 = (ForElementType<D3D12_MESSAGE_ID>)&local_e8;
  if (local_e8.SecondaryData != (ForElementType<D3D12_MESSAGE_ID>)0x0) {
    FVar17 = local_e8.SecondaryData;
  }
  local_88 = uVar13;
  uStack_80 = uVar3;
  *(undefined8 *)FVar17 = uVar4;
  *(undefined8 *)((longlong)FVar17 + 8) = uVar5;
  *(undefined8 *)((longlong)FVar17 + 0x10) = uVar13;
  *(undefined8 *)((longlong)FVar17 + 0x18) = uVar3;
  *(undefined8 *)((longlong)FVar17 + 0x20) = uVar6;
  *(undefined8 *)((longlong)FVar17 + 0x28) = uVar7;
  *(undefined4 *)((longlong)FVar17 + 0x30) = uVar11;
  local_78 = uVar6;
  uStack_70 = uVar7;
  bVar14 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,0x47bb);
  if (!bVar14) {
    local_1d8[0] = 0x28d;
    FVar17 = (ForElementType<D3D12_MESSAGE_ID>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<D3D12_MESSAGE_ID>)0x0) {
      FVar17 = local_e8.SecondaryData;
    }
    if ((ulonglong)FVar17 <= local_1d8) {
      FVar17 = (ForElementType<D3D12_MESSAGE_ID>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<D3D12_MESSAGE_ID>)0x0) {
        FVar17 = local_e8.SecondaryData;
      }
      if ((local_1d8 < (undefined4 *)((longlong)FVar17 + (longlong)local_9c * 4)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_a0 == local_9c) {
      local_a0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>_>
                           (0x404,&local_e8,&local_9c);
    }
    lVar19 = (longlong)local_a0;
    FVar17 = (ForElementType<D3D12_MESSAGE_ID>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<D3D12_MESSAGE_ID>)0x0) {
      FVar17 = local_e8.SecondaryData;
    }
    local_a0 = local_a0 + 1;
    *(undefined4 *)((longlong)FVar17 + lVar19 * 4) = local_1d8[0];
  }
  local_1c0[0] = 0x486;
  ::FString::FString(&local_1b8,L"exceeds end of the virtual address range of Heap");
  if (((GIgnoreD3D12MessageArray.AllocatorInstance.Data <= (FScriptContainerElement *)local_1c0) &&
      ((FScriptContainerElement *)local_1c0 <
       GIgnoreD3D12MessageArray.AllocatorInstance.Data +
       (longlong)GIgnoreD3D12MessageArray.ArrayMax * 0x18)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (GIgnoreD3D12MessageArray.ArrayNum == GIgnoreD3D12MessageArray.ArrayMax) {
    GIgnoreD3D12MessageArray.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&GIgnoreD3D12MessageArray.AllocatorInstance,
                    &GIgnoreD3D12MessageArray.ArrayMax);
  }
  FVar12.Data = GIgnoreD3D12MessageArray.AllocatorInstance.Data;
  lVar19 = (longlong)GIgnoreD3D12MessageArray.ArrayNum;
  GIgnoreD3D12MessageArray.ArrayNum = GIgnoreD3D12MessageArray.ArrayNum + 1;
  *(undefined4 *)(GIgnoreD3D12MessageArray.AllocatorInstance.Data + lVar19 * 0x18) = local_1c0[0];
  *(undefined8 *)(FVar12.Data + lVar19 * 0x18 + 8) = 0;
  *(FScriptContainerElement **)(FVar12.Data + lVar19 * 0x18 + 8) =
       local_1b8.Data.AllocatorInstance.Data;
  *(int *)(FVar12.Data + lVar19 * 0x18 + 0x10) = local_1b8.Data.ArrayNum;
  *(int *)(FVar12.Data + lVar19 * 0x18 + 0x14) = local_1b8.Data.ArrayMax;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (GRHIGlobals.SupportsEfficientAsyncCompute != false) {
    local_1a8[0] = 0x20f;
    ::FString::FString(&local_1a0,
                       L"does not match with the state (0x40: D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE) specified in preceding"
                      );
    if (((GIgnoreD3D12MessageArray.AllocatorInstance.Data <= (FScriptContainerElement *)local_1a8)
        && ((FScriptContainerElement *)local_1a8 <
            GIgnoreD3D12MessageArray.AllocatorInstance.Data +
            (longlong)GIgnoreD3D12MessageArray.ArrayMax * 0x18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (GIgnoreD3D12MessageArray.ArrayNum == GIgnoreD3D12MessageArray.ArrayMax) {
      GIgnoreD3D12MessageArray.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&GIgnoreD3D12MessageArray.AllocatorInstance,
                      &GIgnoreD3D12MessageArray.ArrayMax);
    }
    FVar12.Data = GIgnoreD3D12MessageArray.AllocatorInstance.Data;
    lVar19 = (longlong)GIgnoreD3D12MessageArray.ArrayNum;
    GIgnoreD3D12MessageArray.ArrayNum = GIgnoreD3D12MessageArray.ArrayNum + 1;
    *(undefined4 *)(GIgnoreD3D12MessageArray.AllocatorInstance.Data + lVar19 * 0x18) = local_1a8[0];
    *(undefined8 *)(FVar12.Data + lVar19 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(FVar12.Data + lVar19 * 0x18 + 8) =
         local_1a0.Data.AllocatorInstance.Data;
    *(int *)(FVar12.Data + lVar19 * 0x18 + 0x10) = local_1a0.Data.ArrayNum;
    *(int *)(FVar12.Data + lVar19 * 0x18 + 0x14) = local_1a0.Data.ArrayMax;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190[0] = 0x20f;
    ::FString::FString(&local_188,
                       L"does not match with the state (0x8: D3D12_RESOURCE_STATE_UNORDERED_ACCESS) specified in preceding"
                      );
    if (((GIgnoreD3D12MessageArray.AllocatorInstance.Data <= (FScriptContainerElement *)local_190)
        && ((FScriptContainerElement *)local_190 <
            GIgnoreD3D12MessageArray.AllocatorInstance.Data +
            (longlong)GIgnoreD3D12MessageArray.ArrayMax * 0x18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (GIgnoreD3D12MessageArray.ArrayNum == GIgnoreD3D12MessageArray.ArrayMax) {
      GIgnoreD3D12MessageArray.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&GIgnoreD3D12MessageArray.AllocatorInstance,
                      &GIgnoreD3D12MessageArray.ArrayMax);
    }
    FVar12.Data = GIgnoreD3D12MessageArray.AllocatorInstance.Data;
    lVar19 = (longlong)GIgnoreD3D12MessageArray.ArrayNum;
    GIgnoreD3D12MessageArray.ArrayNum = GIgnoreD3D12MessageArray.ArrayNum + 1;
    *(undefined4 *)(GIgnoreD3D12MessageArray.AllocatorInstance.Data + lVar19 * 0x18) = local_190[0];
    *(undefined8 *)(FVar12.Data + lVar19 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(FVar12.Data + lVar19 * 0x18 + 8) =
         local_188.Data.AllocatorInstance.Data;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(FVar12.Data + lVar19 * 0x18 + 0x10) = local_188.Data.ArrayNum;
    *(int *)(FVar12.Data + lVar19 * 0x18 + 0x14) = local_188.Data.ArrayMax;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
  }
  uVar18 = uVar22;
  uVar21 = uVar22;
  FVar12.Data = local_170.Data.AllocatorInstance.Data;
  uVar13 = local_170.Data._8_8_;
  if (0 < local_a0) {
    do {
      local_170.Data._8_8_ = uVar13;
      local_170.Data.AllocatorInstance.Data = FVar12.Data;
      uVar20 = (uint)uVar18;
      uVar16 = 0;
      if ((int)uVar20 < local_a0) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar17 = (ForElementType<D3D12_MESSAGE_ID>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<D3D12_MESSAGE_ID>)0x0) {
        FVar17 = local_e8.SecondaryData;
      }
      local_178[0] = *(undefined4 *)(uVar21 + (longlong)FVar17);
      ::FString::FString(&local_170,L"");
      if (((GIgnoreD3D12MessageArray.AllocatorInstance.Data <= (FScriptContainerElement *)local_178)
          && ((FScriptContainerElement *)local_178 <
              GIgnoreD3D12MessageArray.AllocatorInstance.Data +
              (longlong)GIgnoreD3D12MessageArray.ArrayMax * 0x18)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (GIgnoreD3D12MessageArray.ArrayNum == GIgnoreD3D12MessageArray.ArrayMax) {
        GIgnoreD3D12MessageArray.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&GIgnoreD3D12MessageArray.AllocatorInstance,
                        &GIgnoreD3D12MessageArray.ArrayMax);
      }
      FVar10.Data = GIgnoreD3D12MessageArray.AllocatorInstance.Data;
      lVar19 = (longlong)GIgnoreD3D12MessageArray.ArrayNum;
      GIgnoreD3D12MessageArray.ArrayNum = GIgnoreD3D12MessageArray.ArrayNum + 1;
      *(undefined4 *)(GIgnoreD3D12MessageArray.AllocatorInstance.Data + lVar19 * 0x18) =
           local_178[0];
      *(undefined8 *)(FVar10.Data + lVar19 * 0x18 + 8) = 0;
      *(FScriptContainerElement **)(FVar10.Data + lVar19 * 0x18 + 8) =
           local_170.Data.AllocatorInstance.Data;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar12.Data = local_170.Data.AllocatorInstance.Data;
      *(int *)(FVar10.Data + lVar19 * 0x18 + 0x10) = local_170.Data.ArrayNum;
      *(int *)(FVar10.Data + lVar19 * 0x18 + 0x14) = local_170.Data.ArrayMax;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
      uVar13 = local_170.Data._8_8_;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar18 = (ulonglong)(uVar20 + 1);
      uVar21 = uVar21 + 4;
    } while ((int)(uVar20 + 1) < local_a0);
  }
  local_f8 = CONCAT44(local_f8._4_4_,local_a0);
  FStack_f0 = (ForElementType<D3D12_MESSAGE_ID>)&local_e8;
  if (local_e8.SecondaryData != (ForElementType<D3D12_MESSAGE_ID>)0x0) {
    FStack_f0 = local_e8.SecondaryData;
  }
  (**(code **)(*local_1d0 + 0x88))(local_1d0,&local_148);
  pTVar8 = GD3D12DebugCvar.Ref;
  pcVar2 = *(code **)(*local_1d0 + 0xf8);
  bVar14 = IsInParallelGameThread();
  if (bVar14) {
LAB_1459ba7fc:
    uVar18 = uVar22;
  }
  else {
    bVar14 = IsInGameThread();
    uVar18 = 4;
    if (bVar14) goto LAB_1459ba7fc;
  }
  pTVar9 = GD3D12DebugCvar.Ref;
  if (0 < *(int *)((longlong)pTVar8->ShadowedValue + uVar18)) {
    bVar14 = IsInParallelGameThread();
    if (bVar14) {
LAB_1459ba821:
      uVar18 = uVar22;
    }
    else {
      bVar14 = IsInGameThread();
      uVar18 = 4;
      if (bVar14) goto LAB_1459ba821;
    }
    uVar21 = 1;
    if (*(int *)((longlong)pTVar9->ShadowedValue + uVar18) != 4) goto LAB_1459ba832;
  }
  uVar21 = uVar22;
LAB_1459ba832:
  (*pcVar2)(local_1d0,1,uVar21);
  pTVar8 = GD3D12DebugCvar.Ref;
  if ((char)uVar23 != '\0') {
    pcVar2 = *(code **)(*local_1d0 + 0xf8);
    bVar14 = IsInParallelGameThread();
    if ((bVar14) || (bVar14 = IsInGameThread(), uVar18 = 4, bVar14)) {
      uVar18 = uVar22;
    }
    (*pcVar2)(local_1d0,2,*(int *)((longlong)pTVar8->ShadowedValue + uVar18) == 3);
  }
  pIVar1 = (this->RootDevice).Reference;
  local_1c8 = (longlong *)0x0;
  (**(code **)*pIVar1)(pIVar1,&_GUID_2852dd88_b484_4c0c_b6b1_67168500e600,&local_1c8);
  if (local_1c8 != (longlong *)0x0) {
    (**(code **)(*local_1c8 + 0x130))(local_1c8,D3D12MessageCallBack,1,this);
    (**(code **)(*local_1c8 + 0x120))(local_1c8,1);
    GDebugLayerMinimumSeverity = uVar23 + D3D12_MESSAGE_SEVERITY_ERROR;
    if ((GD3D12CallBackCookie == 0) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    (**(code **)(*local_1c8 + 0x10))();
  }
  (**(code **)(*local_1d0 + 0x10))();
  if (local_e8.SecondaryData != (ForElementType<D3D12_MESSAGE_ID>)0x0) {
    FMemory::Free((void *)local_e8.SecondaryData);
  }
  return;
}

// CreateDXGIFactory @ 1459ba990

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::CreateDXGIFactory(FD3D12Adapter *this,bool param_1)

{
  IDXGIFactory2 *pIVar1;
  IDXGIFactory3 *pIVar2;
  IDXGIFactory4 *pIVar3;
  IDXGIFactory5 *pIVar4;
  IDXGIFactory6 *pIVar5;
  IDXGIFactory7 *pIVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  HINSTANCE__ *pHVar8;
  FARPROC pFVar9;
  INT_PTR IVar10;
  FString local_18;
  
  pHVar8 = FWindowsPlatformProcess::GetDllHandle(L"dxgi.dll");
  this->DxgiDllHandle = pHVar8;
  if (pHVar8 == (HINSTANCE__ *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DxgiDllHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x6c1,L"");
    if (bVar7) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pFVar9 = GetProcAddress((HMODULE)this->DxgiDllHandle,"CreateDXGIFactory2");
  if (pFVar9 == (FARPROC)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CreateDXGIFactory2FnPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x6b3,L"");
    if (bVar7) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pIVar1 = (this->DxgiFactory2).Reference;
  if (pIVar1 != (IDXGIFactory2 *)0x0) {
    (this->DxgiFactory2).Reference = (IDXGIFactory2 *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  IVar10 = (*pFVar9)((ulonglong)param_1,&_GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0,
                     &this->DxgiFactory2);
  if ((int)IVar10 < 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              ((int)IVar10,
               "CreateDXGIFactory2FnPtr(Flags, IID_PPV_ARGS(DxgiFactory2.GetInitReference()))",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
               ,0x6b6,(ID3D12Device *)0x0,&local_18);
  }
  pIVar1 = (this->DxgiFactory2).Reference;
  pIVar2 = (this->DxgiFactory3).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*pIVar1;
  if (pIVar2 != (IDXGIFactory3 *)0x0) {
    (this->DxgiFactory3).Reference = (IDXGIFactory3 *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(pIVar1,&_GUID_25483823_cd46_4c7d_86ca_47aa95b837bd,&this->DxgiFactory3);
  pIVar3 = (this->DxgiFactory4).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*pIVar1;
  if (pIVar3 != (IDXGIFactory4 *)0x0) {
    (this->DxgiFactory4).Reference = (IDXGIFactory4 *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(pIVar1,&_GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a,&this->DxgiFactory4);
  pIVar4 = (this->DxgiFactory5).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*pIVar1;
  if (pIVar4 != (IDXGIFactory5 *)0x0) {
    (this->DxgiFactory5).Reference = (IDXGIFactory5 *)0x0;
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(pIVar1,&_GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d,&this->DxgiFactory5);
  pIVar5 = (this->DxgiFactory6).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*pIVar1;
  if (pIVar5 != (IDXGIFactory6 *)0x0) {
    (this->DxgiFactory6).Reference = (IDXGIFactory6 *)0x0;
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(pIVar1,&_GUID_c1b6694f_ff09_44a9_b03c_77900a0a1d17,&this->DxgiFactory6);
  pIVar6 = (this->DxgiFactory7).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*pIVar1;
  if (pIVar6 != (IDXGIFactory7 *)0x0) {
    (this->DxgiFactory7).Reference = (IDXGIFactory7 *)0x0;
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001459bab9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,&_GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,&this->DxgiFactory7);
  return;
}

// CreateDXGIFactory @ 1459babb0

void __cdecl
FD3D12Adapter::CreateDXGIFactory
          (TRefCountPtr<IDXGIFactory2> *param_1,bool param_2,HINSTANCE__ *param_3)

{
  IDXGIFactory2 *pIVar1;
  code *pcVar2;
  bool bVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  FString local_18;
  
  pFVar4 = GetProcAddress((HMODULE)param_3,"CreateDXGIFactory2");
  if (pFVar4 == (FARPROC)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CreateDXGIFactory2FnPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x6b3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = param_1->Reference;
  if (pIVar1 != (IDXGIFactory2 *)0x0) {
    param_1->Reference = (IDXGIFactory2 *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  IVar5 = (*pFVar4)((ulonglong)param_2,&_GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0,param_1);
  if ((int)IVar5 < 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              ((int)IVar5,
               "CreateDXGIFactory2FnPtr(Flags, IID_PPV_ARGS(DxgiFactory2.GetInitReference()))",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
               ,0x6b6,(ID3D12Device *)0x0,&local_18);
  }
  return;
}

// CreateRHIBuffer @ 1459bb090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FD3D12Buffer * __thiscall
FD3D12Adapter::CreateRHIBuffer
          (FD3D12Adapter *this,D3D12_RESOURCE_DESC *param_1,uint param_2,
          FRHIBufferCreateDesc *param_3,ED3D12ResourceStateMode param_4,ED3D12Access param_5,
          bool param_6,ID3D12ResourceAllocator *param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  LARGE_INTEGER LVar12;
  FD3D12Adapter *pFVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_D3D12CreateBufferTime> FVar16;
  TEventRef<unsigned_int> TVar17;
  FD3D12Buffer *pFVar18;
  FWriteBuffer *pFVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar20;
  FRHIGPUMask FVar21;
  bool bVar22;
  uint local_res18 [4];
  undefined1 auStackY_1b8 [32];
  bool local_158 [4];
  FColor_u_0 local_154;
  FName local_150;
  uint local_148 [2];
  LARGE_INTEGER local_140;
  FD3D12Adapter *local_138;
  FName local_130;
  undefined8 local_128;
  undefined8 local_120;
  FName local_118;
  FName local_108;
  FName local_100;
  FName local_f8;
  FD3D12Adapter *local_f0;
  FD3D12Buffer *local_e8;
  FStatMessage local_e0;
  LARGE_INTEGER local_d0;
  uint *local_c8;
  bool *local_c0;
  uint *local_b8;
  FD3D12Adapter *local_b0;
  D3D12_RESOURCE_DESC *local_a8;
  ED3D12ResourceStateMode *local_a0;
  ED3D12Access *local_98;
  ID3D12ResourceAllocator **local_90;
  FD3D12Buffer **local_88;
  bool *local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_140 = (LARGE_INTEGER)param_3;
  local_138 = (FD3D12Adapter *)param_1;
  local_f0 = this;
  bVar22 = -1 < CpuChannel->Enabled;
  local_res18[0] = param_2;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId248,"D3D12RHI::CreateRHIBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
               ,0xf8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId248);
  }
  FVar16 = StatPtr_STAT_D3D12CreateBufferTime;
  if (StatPtr_STAT_D3D12CreateBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CreateBufferTime>)0x0) {
    pFVar15 = ::FName::FName(&local_78,"STAT_D3D12CreateBufferTime");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3D12CreateBufferTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CreateBufferTime,*pFVar15,
                        L"CreateBuffer time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar9 = false;
  bVar11 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_154.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_154._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_130.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                   ,0xf9);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar10 = true;
      goto LAB_1459bb236;
    }
  }
  bVar10 = false;
  FVar20 = local_118;
LAB_1459bb236:
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_150.ComparisonIndex.Value = 0;
    local_150.Number = 0;
    TVar17 = (TEventRef<unsigned_int>)&local_150;
  }
  else {
    ::FName::FName(&local_108,param_3->DebugName);
    TVar17 = FStringTrace::GetNameRef(&local_70);
  }
  uVar2 = *(undefined8 *)TVar17;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_128 = 0;
    TVar17 = (TEventRef<unsigned_int>)&local_128;
  }
  else {
    local_f8 = param_3->ClassName;
    if (param_3->ClassName == (FName)0x0) {
      FLazyName::Resolve((FLazyName *)
                         &`public:_class_FName___cdecl_FRHIBufferCreateDesc::GetTraceClassName(void)const___ptr64'
                          ::__l2::FRHIBufferName);
      local_f8 = local_100;
    }
    TVar17 = FStringTrace::GetNameRef(&local_68);
  }
  uVar3 = *(undefined8 *)TVar17;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_120 = 0;
    TVar17 = (TEventRef<unsigned_int>)&local_120;
  }
  else {
    TVar17 = FStringTrace::GetNameRef(&local_60);
  }
  uVar4 = *(undefined8 *)TVar17;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_58);
    bVar8 = true;
    *local_58 = (int)uVar2;
    local_58[1] = (int)uVar3;
    local_58[2] = (int)uVar4;
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
  }
  pFVar13 = local_138;
  LVar12 = local_140;
  if ((*(ulonglong *)&local_138->RootDevice1 < (ulonglong)*(uint *)local_140) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDesc.Width >= CreateDesc.Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                          ,0xff,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    pFVar18 = (FD3D12Buffer *)(*pcVar7)();
    return pFVar18;
  }
  FVar21.GPUMask = 1;
  local_158[0] = (*(uint *)(LVar12.QuadPart + 8) & 6) != 0;
  if ((*(uint *)(LVar12.QuadPart + 8) >> 0xb & 1) == 0) {
    FVar21.GPUMask = *(uint *)(LVar12.QuadPart + 0xc);
  }
  uVar6 = 0;
  if (FVar21.GPUMask != 0) {
    for (; (FVar21.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  local_e8 = (FD3D12Buffer *)0x0;
  local_d0.s = LVar12.s;
  local_148[0] = 0x20;
  if (FVar21.GPUMask != 0) {
    local_148[0] = uVar6;
  }
  local_a8 = (D3D12_RESOURCE_DESC *)pFVar13;
  local_a0 = &param_4;
  local_c8 = local_res18;
  local_98 = &param_5;
  local_c0 = local_158;
  local_90 = &param_7;
  local_b8 = local_148;
  local_88 = &local_e8;
  local_80 = &param_6;
  local_b0 = local_f0;
  local_138 = local_f0;
  pFVar18 = FD3D12LinkedAdapterObject<FD3D12Buffer>::
            CreateLinkedObjects<FD3D12Buffer,_FD3D12Adapter::CreateRHIBuffer_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Buffer,_FD3D12Adapter::CreateRHIBuffer_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                      (FVar21,(<lambda_1> *)&local_138,(<lambda_1> *)&local_d0.s);
  if (*(char *)((longlong)&pFVar18->_padding_ + 2) == '\0') {
    D3D12BufferStats::UpdateBufferStats(pFVar18,true);
  }
  if (bVar8) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar19 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar19 - *(int *)&pFVar19->Cursor < 1) {
      pFVar19 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar19->Cursor = '\n';
    pFVar19->Cursor = pFVar19->Cursor + 1;
    pFVar19->Committed = pFVar19->Cursor;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_e0.StatData.Pad = (uchar  [8])(local_140.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_e0);
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
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar18;
}

// CreateRootDevice @ 1459bb5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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

void __thiscall FD3D12Adapter::CreateRootDevice(FD3D12Adapter *this,bool param_1)

{
  DXGI_GPU_PREFERENCE DVar1;
  uint uVar2;
  IDXGIFactory6 *pIVar3;
  IDXGIFactory2 *pIVar4;
  IDXGIAdapter *pIVar5;
  code *pcVar6;
  ID3D12Device *pIVar7;
  IDXGIDebug *pIVar8;
  bool bVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ED3D12DredMode EVar15;
  wchar_t *pwVar16;
  HMODULE pHVar17;
  FARPROC pFVar18;
  INT_PTR IVar19;
  IConsoleManager *pIVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  FEngineVersion *this_00;
  FString *pFVar24;
  FString *pFVar25;
  INTCExtensionContext *pIVar26;
  PVOID pvVar27;
  byte bVar28;
  bool bVar29;
  wchar_t *pwVar30;
  undefined1 auStackY_2e8 [32];
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  ID3D12Device *local_280;
  FString local_278;
  FString local_268;
  TRefCountPtr<ID3D12Device> local_258;
  undefined8 uStack_250;
  FString local_248;
  FString local_238;
  FString local_228;
  wchar_t *local_218;
  FScriptContainerElement *local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  code *local_158 [2];
  undefined **local_148;
  code *local_140;
  undefined8 local_130;
  IDXGIAdapter *local_128;
  GUID local_120;
  D3D_FEATURE_LEVEL local_110;
  INTCExtensionInfo local_108;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pwVar16 = FCommandLine::Get();
  bVar11 = FParse::Param(pwVar16,L"d3d12gpuvalidation");
  if (bVar11) {
LAB_1459bb62b:
    bVar28 = 1;
  }
  else {
    pwVar16 = FCommandLine::Get();
    bVar11 = FParse::Param(pwVar16,L"gpuvalidation");
    if (bVar11) goto LAB_1459bb62b;
    bVar28 = 0;
  }
  bVar11 = false;
  bVar29 = (bool)(param_1 | bVar28);
  if (bVar29 != false) {
    local_2a8 = (longlong *)0x0;
    iVar14 = D3D12GetDebugInterface(&_GUID_344488b7_6846_474b_b989_f027448245e0,&local_2a8);
    if (iVar14 < 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    else {
      (**(code **)(*local_2a8 + 0x18))();
      this->bDebugDevice = true;
      if (bVar28 != 0) {
        local_290 = (longlong *)0x0;
        iVar14 = (**(code **)*local_2a8)
                           (local_2a8,&_GUID_affaa4ca_63fe_4d8e_b8ad_159000af4304,&local_290);
        if (iVar14 < 0) {
          local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_278.Data.ArrayNum = 0;
          local_278.Data.ArrayMax = 0;
          D3D12RHI::VerifyD3D12Result
                    (iVar14,
                     "DebugController->QueryInterface(IID_PPV_ARGS(DebugController1.GetInitReference()))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                     ,0x1ed,(ID3D12Device *)0x0,&local_278);
        }
        (**(code **)(*local_290 + 0x20))(local_290,1);
        SetEmitDrawEvents(true);
        if (local_290 != (longlong *)0x0) {
          (**(code **)(*local_290 + 0x10))();
        }
      }
    }
    if (local_2a8 != (longlong *)0x0) {
      (**(code **)(*local_2a8 + 0x10))();
    }
  }
  pwVar30 = L"true";
  pwVar16 = L"false";
  if (bVar29 != false) {
    pwVar16 = L"true";
  }
  ::FString::FString(&local_1e8,pwVar16);
  ::FString::FString(&local_1f8,L"RHI.D3DDebug");
  FGenericCrashContext::SetEngineData(&local_1f8,&local_1e8);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  bVar12 = IsRHIDeviceNVIDIA();
  if (bVar12) {
    UE::RHICore::Nvidia::Aftermath::InitializeBeforeDeviceCreation(false);
    local_130 = 0;
    local_148 = &___7__TFunction_OwnedObject_P6AXMI_Z_00_0A__Function_Private_Core_UE__6B_;
    local_140 = UE::RHICore::Nvidia::Aftermath::D3D12::CreateShaderAssociations;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(float,unsigned_int),void,float,unsigned_int>::
                   Call;
    UE::RHICore::Nvidia::Aftermath::SetLateShaderAssociateCallback
              ((TUniqueFunction<void___cdecl(float,unsigned_int)> *)local_158);
  }
  bVar13 = false;
  bVar12 = false;
  bVar9 = false;
  pHVar17 = FWindowsPlatformProcess::GetDllHandle(L"d3d12.dll");
  if ((pHVar17 != (HMODULE)0x0) &&
     (pFVar18 = GetProcAddress(pHVar17,"D3D12GetInterface"), pFVar18 != (FARPROC)0x0)) {
    EVar15 = D3D12_GetDredMode();
    if (EVar15 == Full) {
      bVar9 = false;
      local_2a0 = (longlong *)0x0;
      IVar19 = (*pFVar18)(&CLSID_D3D12DeviceRemovedExtendedData,
                          &_GUID_82bc481c_6b9b_4030_aedb_7ee3d1df1e63,&local_2a0);
      if ((int)IVar19 < 0) {
        bVar12 = bVar13;
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      else {
        (**(code **)(*local_2a0 + 0x18))(local_2a0,2);
        (**(code **)(*local_2a0 + 0x20))(local_2a0,2);
        SetEmitDrawEvents(true);
        bVar12 = true;
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      local_288 = (longlong *)0x0;
      IVar19 = (*pFVar18)(&CLSID_D3D12DeviceRemovedExtendedData,
                          &_GUID_dbd5ae51_3317_4f0a_adf9_1d7cedcaae0b,&local_288);
      if (-1 < (int)IVar19) {
        (**(code **)(*local_288 + 0x30))(local_288,2);
        bVar11 = true;
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      plVar21 = local_2a0;
      if (local_288 != (longlong *)0x0) {
        (**(code **)(*local_288 + 0x10))();
        plVar21 = local_2a0;
      }
    }
    else {
      EVar15 = D3D12_GetDredMode();
      if (EVar15 != Lightweight) goto LAB_1459bba15;
      local_2b0 = (longlong *)0x0;
      IVar19 = (*pFVar18)(&CLSID_D3D12DeviceRemovedExtendedData,
                          &_GUID_61552388_01ab_4008_a436_83db189566ea,&local_2b0);
      if ((int)IVar19 < 0) {
        plVar21 = local_2b0;
        bVar12 = bVar13;
        bVar11 = bVar9;
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          plVar21 = local_2b0;
        }
      }
      else {
        (**(code **)(*local_2b0 + 0x30))(local_2b0,2);
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u__DRED__Dred_bre_15106d280,
                     (FLogCategoryBase *)&LogD3D12RHI);
        }
        (**(code **)(*local_2b0 + 0x18))(local_2b0,2);
        (**(code **)(*local_2b0 + 0x20))(local_2b0,2);
        bVar9 = true;
        (**(code **)(*local_2b0 + 0x38))(local_2b0,1);
        SetEmitDrawEvents(true);
        plVar21 = local_2b0;
        bVar12 = bVar13;
        bVar11 = bVar9;
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          plVar21 = local_2b0;
        }
      }
    }
    if (plVar21 != (longlong *)0x0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
LAB_1459bba15:
  pwVar16 = L"false";
  if (bVar12) {
    pwVar16 = L"true";
  }
  ::FString::FString(&local_1c8,pwVar16);
  ::FString::FString(&local_1d8,L"RHI.DRED");
  FGenericCrashContext::SetEngineData(&local_1d8,&local_1c8);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pwVar16 = L"false";
  if (bVar9) {
    pwVar16 = L"true";
  }
  ::FString::FString(&local_1a8,pwVar16);
  ::FString::FString(&local_1b8,L"RHI.DREDMarkersOnly");
  FGenericCrashContext::SetEngineData(&local_1b8,&local_1a8);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if ((!bVar11) || (!bVar12)) {
    pwVar30 = L"false";
  }
  ::FString::FString(&local_188,pwVar30);
  ::FString::FString(&local_198,L"RHI.DREDContext");
  FGenericCrashContext::SetEngineData(&local_198,&local_188);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  SetEmitDrawEvents(true);
  CreateDXGIFactory(this,bVar29);
  pIVar3 = (this->DxgiFactory6).Reference;
  bVar11 = false;
  pIVar4 = (this->DxgiFactory2).Reference;
  iVar14 = (this->Desc).AdapterIndex;
  local_298 = (longlong *)0x0;
  if ((pIVar3 == (IDXGIFactory6 *)0x0) ||
     (DVar1 = (this->Desc).GpuPreference, DVar1 == DXGI_GPU_PREFERENCE_UNSPECIFIED)) {
    (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,iVar14,&local_298);
  }
  else {
    (**(code **)((longlong)*pIVar3 + 0xe8))
              (pIVar3,iVar14,DVar1,&_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0);
  }
  plVar21 = local_298;
  pIVar5 = (this->DxgiAdapter).Reference;
  pcVar6 = *(code **)*local_298;
  if (pIVar5 != (IDXGIAdapter *)0x0) {
    (this->DxgiAdapter).Reference = (IDXGIAdapter *)0x0;
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  iVar14 = (*pcVar6)(plVar21,&_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,&this->DxgiAdapter);
  if (iVar14 < 0) {
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Data.ArrayNum = 0;
    local_268.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar14,"TempAdapter->QueryInterface(IID_PPV_ARGS(DxgiAdapter.GetInitReference()))",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
               ,0x26e,(ID3D12Device *)0x0,&local_268);
  }
  bVar12 = false;
  bVar13 = IsRHIDeviceAMD();
  if ((!bVar13) || (FD3D12DynamicRHI::SingleD3DRHI->AmdAgsContext == (AGSContext *)0x0))
  goto LAB_1459bbdfe;
  pIVar20 = IConsoleManager::Get();
  plVar21 = (longlong *)
            (**(code **)((longlong)*pIVar20 + 0xc0))(pIVar20,L"r.DisableEngineAndAppRegistration",1)
  ;
  lVar22 = 0;
  if (plVar21 != (longlong *)0x0) {
    lVar22 = (**(code **)(*plVar21 + 0x68))(plVar21);
  }
  bVar13 = IsShaderDevelopmentModeEnabled();
  if (bVar13) {
LAB_1459bbcb4:
    bVar13 = true;
LAB_1459bbcb7:
    bVar9 = bVar13;
    bVar11 = true;
  }
  else {
    if (lVar22 != 0) {
      bVar13 = IsInParallelGameThread();
      if (bVar13) {
LAB_1459bbc85:
        lVar23 = 0;
      }
      else {
        bVar13 = IsInGameThread();
        lVar23 = 4;
        if (bVar13) goto LAB_1459bbc85;
      }
      if (*(int *)(lVar22 + lVar23) != 0) goto LAB_1459bbcb4;
    }
    bVar9 = false;
    bVar13 = false;
    if ((GInternalProjectName[0] == L'\0') ||
       (iVar14 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar14 == 0))
    goto LAB_1459bbcb7;
  }
  local_128 = (this->DxgiAdapter).Reference;
  local_110 = (this->Desc).MaxSupportedFeatureLevel;
  local_120 = _GUID_189819f1_1db6_4b57_be54_1821339b85f7;
  local_1fc = 0;
  this_00 = FEngineVersion::Current();
  pFVar24 = FEngineVersion::ToString(this_00,&local_168,Minor);
  pFVar25 = FApp::GetEpicProductIdentifier(&local_178);
  ::FString::ConcatFF(&local_248,pFVar25,pFVar24);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  local_218 = L"";
  if (bVar9) {
    local_210 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_210 = (FScriptContainerElement *)0x15060d16c;
    if (local_248.Data.ArrayNum != 0) {
      local_210 = local_248.Data.AllocatorInstance.Data;
    }
  }
  local_204 = 0xffffad00;
  local_208 = 0xffffad00;
  if (!bVar11) {
    local_218 = GInternalProjectName;
  }
  local_200 = 0;
  local_258.Reference = (ID3D12Device *)0x0;
  uStack_250 = 0;
  iVar14 = agsDriverExtensionsDX12_CreateDevice
                     (FD3D12DynamicRHI::SingleD3DRHI->AmdAgsContext,&local_128,&local_218,&local_258
                     );
  if (iVar14 == 0) {
    pIVar7 = (this->RootDevice).Reference;
    if (pIVar7 != local_258.Reference) {
      (this->RootDevice).Reference = local_258.Reference;
      if (local_258.Reference != (ID3D12Device *)0x0) {
        (**(code **)((longlong)*local_258.Reference + 8))();
      }
      if (pIVar7 != (ID3D12Device *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
    bVar12 = true;
    FD3D12DynamicRHI::SingleD3DRHI->AmdSupportedExtensionFlags = (uint)uStack_250;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
LAB_1459bbdfe:
  bVar11 = IsRHIDeviceIntel();
  if ((bVar11) && (bVar11 = UE::RHICore::AllowVendorDevice(), bVar11)) {
    local_280 = (ID3D12Device *)0x0;
    iVar14 = D3D12CreateDevice((this->DxgiAdapter).Reference,0xb000,
                               &_GUID_189819f1_1db6_4b57_be54_1821339b85f7,&local_280);
    if (iVar14 < 0) {
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Data.ArrayNum = 0;
      local_238.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar14,
                 "D3D12CreateDevice( GetAdapter(), D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&Device) )",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                 ,0x2b5,(ID3D12Device *)0x0,&local_238);
    }
    memset(&local_108,0,0xc0);
    pIVar26 = CreateIntelExtensionsContext(local_280,&local_108,0);
    if (pIVar26 != (INTCExtensionContext *)0x0) {
      EnableIntelAtomic64Support(pIVar26,&local_108);
      DestroyIntelExtensionsContext(pIVar26);
    }
    (**(code **)((longlong)*local_280 + 0x10))();
  }
  if (!bVar12) {
    bVar11 = IsRHIDeviceIntel();
    if ((bVar11) && (bVar11 = UE::RHICore::AllowVendorDevice(), bVar11)) {
      EnableIntelAppDiscovery(GRHIGlobals.GpuInfo.DeviceId);
      UE::RHICore::Intel::GPUCrashDumps::InitializeBeforeDeviceCreation
                (GRHIGlobals.GpuInfo.DeviceId);
    }
    pIVar7 = (this->RootDevice).Reference;
    if (pIVar7 != (ID3D12Device *)0x0) {
      (this->RootDevice).Reference = (ID3D12Device *)0x0;
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    iVar14 = D3D12CreateDevice((this->DxgiAdapter).Reference,(this->Desc).MaxSupportedFeatureLevel,
                               &_GUID_189819f1_1db6_4b57_be54_1821339b85f7,&this->RootDevice);
    if (iVar14 < 0) {
      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Data.ArrayNum = 0;
      local_228.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar14,
                 "D3D12CreateDevice( GetAdapter(), GetFeatureLevel(), IID_PPV_ARGS(RootDevice.GetInitReference()) )"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                 ,0x2d7,(ID3D12Device *)0x0,&local_228);
    }
  }
  pTVar10 = CVarResidencyManagement.Ref;
  bVar11 = IsInParallelGameThread();
  if ((bVar11) || (bVar11 = IsInGameThread(), lVar22 = 4, bVar11)) {
    lVar22 = 0;
  }
  if (*(int *)((longlong)pTVar10->ShadowedValue + lVar22) == 0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    GEnableResidencyManagement = false;
  }
  bVar11 = IsRHIDeviceNVIDIA();
  if (bVar11) {
    UE::RHICore::Nvidia::Aftermath::D3D12::InitializeDevice((this->RootDevice).Reference);
  }
  if (bVar29 != false) {
    pvVar27 = AddVectoredExceptionHandler(1,D3DVectoredExceptionHandler);
    this->ExceptionHandlerHandle = pvVar27;
    pHVar17 = FWindowsPlatformProcess::GetDllHandle(L"dxgidebug.dll");
    this->DxgiDebugDllHandle = (HINSTANCE__ *)pHVar17;
    if ((pHVar17 != (HMODULE)0x0) &&
       (pFVar18 = GetProcAddress(pHVar17,"DXGIGetDebugInterface"), pFVar18 != (FARPROC)0x0)) {
      pIVar8 = (this->DXGIDebug).Reference;
      if (pIVar8 != (IDXGIDebug *)0x0) {
        (this->DXGIDebug).Reference = (IDXGIDebug *)0x0;
        (**(code **)((longlong)*pIVar8 + 0x10))();
      }
      (*pFVar18)(&_GUID_119e7452_de9e_40fe_8806_88f90c12b441,&this->DXGIDebug);
    }
  }
  GNumExplicitGPUsForRendering = 1;
  uVar2 = (this->Desc).NumDeviceNodes;
  if ((1 < uVar2) && (GNumExplicitGPUsForRendering = uVar2, 4 < (byte)LogD3D12RHI._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  pIVar7 = (this->RootDevice).Reference;
  if ((((pIVar7 != (ID3D12Device *)0x0) && (GD3D12RHIStablePowerState == 2)) &&
      (iVar14 = (**(code **)((longlong)*pIVar7 + 0x140))(pIVar7,1), iVar14 < 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bWorked",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                          ,0x321,
                          L"Enabling state power state requires Windows developer mode to be enabled."
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_298 != (longlong *)0x0) {
    (**(code **)(*local_298 + 0x10))();
  }
  return;
}

// CreateTransition @ 1459bc100

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12Adapter::CreateTransition
          (FD3D12Adapter *this,FRHITransition *param_1,FRHITransitionCreateInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (Barriers.Ptr == (ID3D12BarriersForAdapter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Barriers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x89d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001459bc15a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*Barriers.Ptr + 0x20))(Barriers.Ptr,param_1,param_2);
  return;
}

// DumpTrackedAllocationData @ 1459be050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::DumpTrackedAllocationData
          (FD3D12Adapter *this,FOutputDevice *param_1,bool param_2,bool param_3)

{
  FD3D12Resource *pFVar1;
  code *pcVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  ulong64 *puVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FTrackedAllocationData *pFVar9;
  size_t sVar10;
  ulonglong uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FD3D12ResidencyHandle **ppFVar14;
  char *pcVar15;
  FD3D12ResidencyHandle **ppFVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  int iVar19;
  FD3D12ResidencyHandle **ppFVar20;
  FD3D12ResidencyHandle **ppFVar21;
  FTrackedAllocationData *pFVar22;
  undefined1 auStackY_4488 [32];
  undefined1 local_4436;
  FIdentityFunctor local_4435 [5];
  ForAnyElementType local_4430;
  uint local_4428;
  uint local_4424;
  ForAnyElementType local_4420;
  undefined8 local_4418;
  undefined1 local_4410;
  undefined1 local_440f [7];
  FString local_4408;
  TArray<FD3D12Adapter::FTrackedAllocationData,TSizedDefaultAllocator<32>_> local_43f8;
  FString local_43e8;
  LPCRITICAL_SECTION local_43d8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_43d0;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_43c0;
  FName local_43b0;
  FName local_43a8;
  FOutputDevice *local_43a0;
  FString local_4398;
  FString local_4388;
  FString local_4378;
  FString local_4368;
  FString local_4358;
  FString local_4348 [2];
  longlong local_4328;
  longlong lStack_4320;
  longlong local_4318;
  longlong lStack_4310;
  ulonglong local_4308;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_4300;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_42f0;
  FString local_42e0;
  FString local_42d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_42b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4198;
  char local_4078 [16384];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4488;
  local_43d8 = (LPCRITICAL_SECTION)&this->TrackedAllocationDataCS;
  local_43a0 = param_1;
  if (local_43d8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_43d8);
  ppFVar14 = (FD3D12ResidencyHandle **)0x0;
  local_43f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_43f8.ArrayNum = 0;
  local_43f8.ArrayMax = 0;
  TMapBase<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>_>
              *)&this->TrackedAllocationData,&local_43f8);
  AlgoImpl::
  IntroSortInternal<FD3D12Adapter::FTrackedAllocationData,int,FIdentityFunctor,TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,_FD3D12Adapter::DumpTrackedAllocationData_::__l2::<lambda_1>_>_>
            ((FTrackedAllocationData *)local_43f8.AllocatorInstance.Data,local_43f8.ArrayNum,
             local_4435[0],(<lambda_1> *)local_4435);
  iVar19 = local_43f8.ArrayNum;
  uVar11 = (ulonglong)local_43f8.ArrayNum;
  local_4430.Data = (FScriptContainerElement *)0x0;
  pFVar22 = (FTrackedAllocationData *)(local_43f8.AllocatorInstance.Data + uVar11 * 0x108);
  local_4428 = 0;
  local_4424 = 0;
  local_4420.Data = (FScriptContainerElement *)0x0;
  local_4418 = 0;
  local_43c0.DataPtr = (FD3D12ResidencyHandle **)0x0;
  local_43d0.DataPtr = (FD3D12ResidencyHandle **)0x0;
  ppFVar16 = ppFVar14;
  FVar17.Data = local_43f8.AllocatorInstance.Data;
  ppFVar20 = ppFVar14;
  ppFVar21 = ppFVar14;
  while( true ) {
    uVar7 = (uint)ppFVar14;
    iVar8 = (int)ppFVar20;
    if ((int)uVar11 != iVar19) {
      local_4436 = 0;
      `TCheckedPointerIterator<FD3D12Adapter::FTrackedAllocationData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_4436);
      uVar7 = local_4428;
      iVar8 = (int)local_4418;
    }
    if ((FTrackedAllocationData *)FVar17.Data == pFVar22) break;
    pFVar1 = ((FTrackedAllocationData *)FVar17.Data)->ResourceAllocation->UnderlyingResource;
    local_4328 = (pFVar1->Desc)._padding_;
    lStack_4320 = (pFVar1->Desc)._padding_;
    local_4318 = (pFVar1->Desc)._padding_;
    lStack_4310 = (pFVar1->Desc)._padding_;
    local_4308 = (pFVar1->Desc)._padding_;
    if ((int)(pFVar1->Desc)._padding_ == 1) {
      if (((local_4430.Data <= FVar17.Data) &&
          (FVar17.Data <
           (FTrackedAllocationData *)(local_4430.Data + (longlong)(int)local_4424 * 0x108))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar7 = local_4428, bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 == local_4424) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x108,8,&local_4430,(int *)&local_4424);
      }
      local_4428 = uVar7 + 1;
      lVar12 = 2;
      pFVar9 = (FTrackedAllocationData *)FVar17.Data;
      pFVar13 = local_4430.Data + (longlong)(int)uVar7 * 0x108;
      do {
        pFVar4 = pFVar13 + 0x80;
        uVar3 = pFVar9->AllocationSize;
        puVar5 = pFVar9->Stack;
        *(FD3D12ResourceLocation **)&pFVar13->field_0x0 = pFVar9->ResourceAllocation;
        *(ulong64 *)(pFVar13 + 8) = uVar3;
        uVar3 = pFVar9->Stack[0];
        *(undefined8 *)(pFVar13 + 0x10) = *(undefined8 *)&pFVar9->StackDepth;
        *(ulong64 *)(pFVar13 + 0x18) = uVar3;
        uVar3 = pFVar9->Stack[2];
        *(ulong64 *)(pFVar13 + 0x20) = pFVar9->Stack[1];
        *(ulong64 *)(pFVar13 + 0x28) = uVar3;
        uVar3 = pFVar9->Stack[4];
        *(ulong64 *)(pFVar13 + 0x30) = pFVar9->Stack[3];
        *(ulong64 *)(pFVar13 + 0x38) = uVar3;
        uVar3 = pFVar9->Stack[6];
        *(ulong64 *)(pFVar13 + 0x40) = pFVar9->Stack[5];
        *(ulong64 *)(pFVar13 + 0x48) = uVar3;
        uVar3 = pFVar9->Stack[8];
        *(ulong64 *)(pFVar13 + 0x50) = pFVar9->Stack[7];
        *(ulong64 *)(pFVar13 + 0x58) = uVar3;
        uVar3 = pFVar9->Stack[10];
        *(ulong64 *)(pFVar13 + 0x60) = pFVar9->Stack[9];
        *(ulong64 *)(pFVar13 + 0x68) = uVar3;
        uVar3 = pFVar9->Stack[0xc];
        *(ulong64 *)(pFVar13 + 0x70) = pFVar9->Stack[0xb];
        *(ulong64 *)(pFVar13 + 0x78) = uVar3;
        lVar12 = lVar12 + -1;
        pFVar9 = (FTrackedAllocationData *)(puVar5 + 0xd);
        pFVar13 = pFVar4;
      } while (lVar12 != 0);
      *(FD3D12ResourceLocation **)pFVar4 =
           ((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation;
      ppFVar16 = (FD3D12ResidencyHandle **)
                 ((longlong)ppFVar16 + ((FTrackedAllocationData *)FVar17.Data)->AllocationSize);
      pFVar1 = ((FTrackedAllocationData *)FVar17.Data)->ResourceAllocation->UnderlyingResource;
      if ((pFVar1->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
        FD3D12Resource::GetResidencyHandles(pFVar1,&local_43c0);
        if (local_43c0.ArrayNum != 0) {
          for (ppFVar20 = local_43c0.DataPtr; ppFVar20 != local_43c0.DataPtr + local_43c0.ArrayNum;
              ppFVar20 = ppFVar20 + 1) {
            if ((int)(*ppFVar20)->_padding_ == 0) goto LAB_1459be2fb;
          }
          goto LAB_1459be45c;
        }
      }
LAB_1459be2fb:
      ppFVar21 = (FD3D12ResidencyHandle **)
                 ((longlong)ppFVar21 + ((FTrackedAllocationData *)FVar17.Data)->AllocationSize);
    }
    else {
      if ((local_4420.Data <= FVar17.Data) &&
         (FVar17.Data <
          (FTrackedAllocationData *)(local_4420.Data + (longlong)local_4418._4_4_ * 0x108))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = (int)local_4418;
      }
      if (iVar8 == local_4418._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x108,8,&local_4420,(int *)((longlong)&local_4418 + 4));
      }
      local_4418 = CONCAT44(local_4418._4_4_,iVar8 + 1);
      lVar12 = 2;
      pFVar9 = (FTrackedAllocationData *)FVar17.Data;
      pFVar13 = local_4420.Data + (longlong)iVar8 * 0x108;
      do {
        pFVar4 = pFVar13 + 0x80;
        uVar3 = pFVar9->AllocationSize;
        puVar5 = pFVar9->Stack;
        *(FD3D12ResourceLocation **)&pFVar13->field_0x0 = pFVar9->ResourceAllocation;
        *(ulong64 *)(pFVar13 + 8) = uVar3;
        uVar3 = pFVar9->Stack[0];
        *(undefined8 *)(pFVar13 + 0x10) = *(undefined8 *)&pFVar9->StackDepth;
        *(ulong64 *)(pFVar13 + 0x18) = uVar3;
        uVar3 = pFVar9->Stack[2];
        *(ulong64 *)(pFVar13 + 0x20) = pFVar9->Stack[1];
        *(ulong64 *)(pFVar13 + 0x28) = uVar3;
        uVar3 = pFVar9->Stack[4];
        *(ulong64 *)(pFVar13 + 0x30) = pFVar9->Stack[3];
        *(ulong64 *)(pFVar13 + 0x38) = uVar3;
        uVar3 = pFVar9->Stack[6];
        *(ulong64 *)(pFVar13 + 0x40) = pFVar9->Stack[5];
        *(ulong64 *)(pFVar13 + 0x48) = uVar3;
        uVar3 = pFVar9->Stack[8];
        *(ulong64 *)(pFVar13 + 0x50) = pFVar9->Stack[7];
        *(ulong64 *)(pFVar13 + 0x58) = uVar3;
        uVar3 = pFVar9->Stack[10];
        *(ulong64 *)(pFVar13 + 0x60) = pFVar9->Stack[9];
        *(ulong64 *)(pFVar13 + 0x68) = uVar3;
        uVar3 = pFVar9->Stack[0xc];
        *(ulong64 *)(pFVar13 + 0x70) = pFVar9->Stack[0xb];
        *(ulong64 *)(pFVar13 + 0x78) = uVar3;
        lVar12 = lVar12 + -1;
        pFVar9 = (FTrackedAllocationData *)(puVar5 + 0xd);
        pFVar13 = pFVar4;
      } while (lVar12 != 0);
      *(FD3D12ResourceLocation **)pFVar4 =
           ((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation;
      pFVar1 = ((FTrackedAllocationData *)FVar17.Data)->ResourceAllocation->UnderlyingResource;
      if ((pFVar1->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
        FD3D12Resource::GetResidencyHandles(pFVar1,&local_43d0);
        if (local_43d0.ArrayNum != 0) {
          ppFVar20 = local_43d0.DataPtr;
          while ((ppFVar20 != local_43d0.DataPtr + local_43d0.ArrayNum &&
                 ((int)(*ppFVar20)->_padding_ != 0))) {
            ppFVar20 = ppFVar20 + 1;
          }
        }
      }
    }
LAB_1459be45c:
    uVar11 = local_43f8._8_8_ & 0xffffffff;
    FVar17.Data = FVar17.Data + 0x108;
    ppFVar14 = (FD3D12ResidencyHandle **)(ulonglong)local_4428;
    ppFVar20 = (FD3D12ResidencyHandle **)(local_4418 & 0xffffffff);
  }
  local_4408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4408.Data.ArrayNum = 0;
  local_4408.Data.ArrayMax = 0;
  local_43d0.DataPtr = ppFVar21;
  local_43c0.DataPtr = ppFVar16;
  ::FString::PrintfImpl
            (&local_4398,
             L"\n%d Tracked Texture Allocations (Total size: %4.3fMB - Resident: %4.3fMB):\n");
  iVar19 = local_4398.Data.ArrayNum + -1;
  if (local_4398.Data.ArrayNum == 0) {
    iVar19 = 0;
  }
  ::FString::AppendChars(&local_4408,(wchar_t *)local_4398.Data.AllocatorInstance.Data,iVar19);
  if (local_4398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4398.Data.AllocatorInstance.Data);
  }
  iVar19 = (int)local_4418;
  uVar11 = (ulonglong)(int)local_4418;
  pFVar22 = (FTrackedAllocationData *)(local_4420.Data + uVar11 * 0x108);
  FVar17.Data = local_4420.Data;
LAB_1459be564:
  do {
    if ((int)uVar11 != iVar19) {
      `TCheckedPointerIterator<FD3D12Adapter::FTrackedAllocationData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_4410);
    }
    if ((FTrackedAllocationData *)FVar17.Data == pFVar22) break;
    pFVar1 = ((FTrackedAllocationData *)FVar17.Data)->ResourceAllocation->UnderlyingResource;
    local_4308 = (pFVar1->Desc)._padding_;
    if ((pFVar1->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
      FD3D12Resource::GetResidencyHandles(pFVar1,&local_4300);
      if (local_4300.ArrayNum == 0) goto LAB_1459be5f1;
      for (ppFVar16 = local_4300.DataPtr; ppFVar16 != local_4300.DataPtr + local_4300.ArrayNum;
          ppFVar16 = ppFVar16 + 1) {
        if ((int)(*ppFVar16)->_padding_ == 0) goto LAB_1459be5f1;
      }
      if (!param_2) goto LAB_1459be5f1;
    }
    else {
LAB_1459be5f1:
      uVar11 = local_4308;
      local_43e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_43e8.Data.ArrayNum = 0;
      local_43e8.Data.ArrayMax = 0;
      if ((local_4308 & 1) == 0) {
        if ((local_4308 & 2) != 0) {
          pcVar15 = "DS";
          goto LAB_1459be61d;
        }
      }
      else {
        pcVar15 = "RT";
LAB_1459be61d:
        ::FString::AppendChars(&local_43e8,pcVar15,2);
      }
      if ((uVar11 & 4) != 0) {
        pcVar15 = "UAV";
        if ((uVar11 & 3) != 0) {
          pcVar15 = "|UAV";
        }
        sVar10 = strlen(pcVar15);
        ::FString::AppendChars(&local_43e8,pcVar15,(int)sVar10);
      }
      local_43b0 = ((FTrackedAllocationData *)FVar17.Data)->ResourceAllocation->UnderlyingResource->
                   DebugName;
      ::FName::ToString(&local_43b0,&local_42e0);
      ::FString::PrintfImpl
                (&local_4388,
                 L"\tName: %s - Size: %3.3fMB - Width: %llu - Height: %d - DepthOrArraySize: %d - MipLevels: %d - Flags: %s - Resident: %s\n"
                );
      iVar8 = local_4388.Data.ArrayNum + -1;
      if (local_4388.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_4408,(wchar_t *)local_4388.Data.AllocatorInstance.Data,iVar8);
      if (local_4388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4388.Data.AllocatorInstance.Data);
      }
      if (local_42e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_42e0.Data.AllocatorInstance.Data);
      }
      if ((param_3) &&
         (uVar7 = EntriesToSkip, EntriesToSkip < ((FTrackedAllocationData *)FVar17.Data)->StackDepth
         )) {
        do {
          local_4078[0] = '\0';
          FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                    (uVar7,((FTrackedAllocationData *)FVar17.Data)->Stack[uVar7],local_4078,0x4000,
                     (FGenericCrashContext *)0x0);
          local_42b8._padding_ = 0;
          sVar10 = strlen(local_4078);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_42b8,local_4078,(int)sVar10,Yes);
          ::FString::PrintfImpl(&local_4378,L"\t\t%d %s\n");
          iVar8 = local_4378.Data.ArrayNum + -1;
          if (local_4378.Data.ArrayNum == 0) {
            iVar8 = 0;
          }
          ::FString::AppendChars
                    (&local_4408,(wchar_t *)local_4378.Data.AllocatorInstance.Data,iVar8);
          if (local_4378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4378.Data.AllocatorInstance.Data);
          }
          if ((void *)local_42b8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_42b8._padding_);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < ((FTrackedAllocationData *)FVar17.Data)->StackDepth);
      }
      if (local_43e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_43e8.Data.AllocatorInstance.Data);
        uVar11 = local_4418 & 0xffffffff;
        FVar17.Data = FVar17.Data + 0x108;
        goto LAB_1459be564;
      }
    }
    uVar11 = local_4418 & 0xffffffff;
    FVar17.Data = FVar17.Data + 0x108;
  } while( true );
  ::FString::PrintfImpl
            (&local_4368,
             L"\n\n%d Tracked Buffer Allocations (Total size: %4.3fMB - Resident: %4.3fMB):\n");
  iVar19 = local_4368.Data.ArrayNum + -1;
  if (local_4368.Data.ArrayNum == 0) {
    iVar19 = 0;
  }
  ::FString::AppendChars(&local_4408,(wchar_t *)local_4368.Data.AllocatorInstance.Data,iVar19);
  if (local_4368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4368.Data.AllocatorInstance.Data);
  }
  uVar7 = local_4428;
  uVar11 = (ulonglong)(int)local_4428;
  pFVar22 = (FTrackedAllocationData *)(local_4430.Data + uVar11 * 0x108);
  FVar17.Data = local_4430.Data;
  do {
    if ((uint)uVar11 != uVar7) {
      `TCheckedPointerIterator<FD3D12Adapter::FTrackedAllocationData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_440f);
    }
    if ((FTrackedAllocationData *)FVar17.Data == pFVar22) {
      FOutputDevice::Log(local_43a0,&local_4408);
      lpCriticalSection = local_43d8;
      if (local_4408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4408.Data.AllocatorInstance.Data);
      }
      if ((FTrackedAllocationData *)local_4420.Data != (FTrackedAllocationData *)0x0) {
        FMemory::Free(local_4420.Data);
      }
      if ((FTrackedAllocationData *)local_4430.Data != (FTrackedAllocationData *)0x0) {
        FMemory::Free(local_4430.Data);
      }
      if ((FTrackedAllocationData *)local_43f8.AllocatorInstance.Data !=
          (FTrackedAllocationData *)0x0) {
        FMemory::Free(local_43f8.AllocatorInstance.Data);
      }
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    pFVar1 = ((FTrackedAllocationData *)FVar17.Data)->ResourceAllocation->UnderlyingResource;
    local_4308 = (pFVar1->Desc)._padding_;
    if ((pFVar1->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
      FD3D12Resource::GetResidencyHandles(pFVar1,&local_42f0);
      if (local_42f0.ArrayNum == 0) goto LAB_1459be9cf;
      for (ppFVar16 = local_42f0.DataPtr; ppFVar16 != local_42f0.DataPtr + local_42f0.ArrayNum;
          ppFVar16 = ppFVar16 + 1) {
        if ((int)(*ppFVar16)->_padding_ == 0) goto LAB_1459be9cf;
      }
      if (!param_2) goto LAB_1459be9cf;
    }
    else {
LAB_1459be9cf:
      local_43a8 = ((FTrackedAllocationData *)FVar17.Data)->ResourceAllocation->UnderlyingResource->
                   DebugName;
      ::FName::ToString(&local_43a8,&local_42d0);
      ::FString::PrintfImpl
                (&local_4358,L"\tName: %s - Size: %3.3fMB - Width: %llu - UAV: %s - Resident: %s\n")
      ;
      iVar19 = local_4358.Data.ArrayNum + -1;
      if (local_4358.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      ::FString::AppendChars(&local_4408,(wchar_t *)local_4358.Data.AllocatorInstance.Data,iVar19);
      if (local_4358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4358.Data.AllocatorInstance.Data);
      }
      if (local_42d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_42d0.Data.AllocatorInstance.Data);
      }
      if ((param_3) &&
         (uVar18 = EntriesToSkip,
         EntriesToSkip < ((FTrackedAllocationData *)FVar17.Data)->StackDepth)) {
        do {
          local_4078[0] = '\0';
          FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                    (uVar18,((FTrackedAllocationData *)FVar17.Data)->Stack[uVar18],local_4078,0x4000
                     ,(FGenericCrashContext *)0x0);
          local_4198._padding_ = 0;
          sVar10 = strlen(local_4078);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4198,local_4078,(int)sVar10,Yes);
          ::FString::PrintfImpl(local_4348,L"\t\t%d %s\n");
          iVar19 = (int)local_4348[0].Data._8_8_ + -1;
          if ((int)local_4348[0].Data._8_8_ == 0) {
            iVar19 = 0;
          }
          ::FString::AppendChars
                    (&local_4408,(wchar_t *)local_4348[0].Data.AllocatorInstance.Data,iVar19);
          if (local_4348[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4348[0].Data.AllocatorInstance.Data);
          }
          if ((void *)local_4198._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_4198._padding_);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < ((FTrackedAllocationData *)FVar17.Data)->StackDepth);
      }
    }
    uVar11 = (ulonglong)local_4428;
    FVar17.Data = FVar17.Data + 0x108;
  } while( true );
}

// EndFrame @ 1459bee90

/* WARNING: Removing unreachable block (ram,0x0001459beec8) */
/* WARNING: Removing unreachable block (ram,0x0001459bef8e) */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::EndFrame(FD3D12Adapter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FD3D12UploadHeapAllocator *pFVar2;
  IRHITransientMemoryCache *pIVar3;
  FD3D12BindlessResourceManager *this_00;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar5 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  uVar7 = 0x20;
  if (uVar9 != 0) {
    uVar7 = (ulonglong)uVar5;
  }
  uVar8 = 0;
  if (uVar9 != 0) {
    while( true ) {
      pFVar2 = this->UploadHeapAllocator[uVar7];
      FD3D12MultiBuddyAllocator::CleanUpAllocations(&pFVar2->SmallBlockAllocator,0x14);
      EnterCriticalSection((LPCRITICAL_SECTION)&pFVar2->BigBlockCS);
      FD3D12PoolAllocator::CleanUpAllocations(&pFVar2->BigBlockAllocator,0x14,false);
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar2->BigBlockCS);
      FD3D12MultiBuddyAllocator::CleanUpAllocations(&pFVar2->FastConstantPageAllocator,0x14);
      uVar9 = uVar9 & ~(1 << ((byte)uVar7 & 0x1f));
      uVar5 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (uVar9 == 0) break;
      uVar7 = (ulonglong)uVar5;
    }
  }
  pIVar3 = (this->TransientMemoryCache).Ptr;
  if (pIVar3 != (IRHITransientMemoryCache *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))();
  }
  uVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar5 = 0;
  bVar10 = uVar9 != 0;
  if (bVar10) {
    for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  while (bVar10) {
    if ((GNumExplicitGPUsForRendering <= uVar5) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GPUIndex < GNumExplicitGPUsForRendering",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                            ,0x103,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = ((this->Devices).Elements[uVar5]->BindlessDescriptorManager).ResourceManager.Ptr;
    if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
      FD3D12BindlessResourceManager::GarbageCollect(this_00);
    }
    uVar9 = uVar9 & ~(1 << ((byte)uVar5 & 0x1f));
    uVar5 = 0;
    bVar10 = uVar9 != 0;
    if (bVar10) {
      for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  lpCriticalSection = &this->TrackedAllocationDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->FrameFence).Ptr == (FD3D12ManualFence *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("FrameFence",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                          ,0xff,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (((this->FrameFence).Ptr)->NextFenceValueTOP).Counter;
  uVar7 = uVar8;
  if (0 < (this->ReleasedAllocationData).ArrayNum) {
    do {
      uVar9 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar9 < (this->ReleasedAllocationData).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((ulonglong)(longlong)(iVar6 + 1) <
          (ulonglong)
          ((longlong)GTrackedReleasedAllocationFrameRetention +
          *(longlong *)((this->ReleasedAllocationData).AllocatorInstance.Data + uVar8 + 0x50)))
      break;
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 0x60;
      uVar7 = (ulonglong)uVar9;
    } while ((int)uVar9 < (this->ReleasedAllocationData).ArrayNum);
    if (0 < (int)uVar9) {
      uVar5 = 0;
      if ((int)uVar9 <= (this->ReleasedAllocationData).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Dst = (this->ReleasedAllocationData).AllocatorInstance.Data;
      iVar6 = (this->ReleasedAllocationData).ArrayNum - uVar9;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar9 * 0x60,(longlong)iVar6 * 0x60);
      }
      piVar1 = &(this->ReleasedAllocationData).ArrayNum;
      *piVar1 = *piVar1 - uVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001459bf182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EnumAdapters @ 1459bf440

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

undefined4 __thiscall FD3D12Adapter::EnumAdapters(FD3D12Adapter *this,IDXGIAdapter **param_1)

{
  int iVar1;
  DXGI_GPU_PREFERENCE DVar2;
  IDXGIFactory6 *pIVar3;
  IDXGIFactory2 *pIVar4;
  undefined4 uVar5;
  
  pIVar3 = (this->DxgiFactory6).Reference;
  pIVar4 = (this->DxgiFactory2).Reference;
  iVar1 = (this->Desc).AdapterIndex;
  if ((pIVar3 != (IDXGIFactory6 *)0x0) &&
     (DVar2 = (this->Desc).GpuPreference, DVar2 != DXGI_GPU_PREFERENCE_UNSPECIFIED)) {
    uVar5 = (**(code **)((longlong)*pIVar3 + 0xe8))
                      (pIVar3,iVar1,DVar2,&_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,param_1);
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001459bf497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,iVar1,param_1);
  return uVar5;
}

// FindHeapsContainingGPUAddress @ 1459bff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::FindHeapsContainingGPUAddress
          (FD3D12Adapter *this,ulong64 param_1,
          TArray<FD3D12Heap_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88;
  ulong64 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lpCriticalSection = &this->TrackedAllocationDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar7 = (this->TrackedHeaps).AllocatorInstance.Data;
  iVar2 = (this->TrackedHeaps).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->TrackedHeaps).ArrayNum != iVar2) {
      local_98[0] = 0;
      `TCheckedPointerIterator<FD3D12Heap_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if (pFVar7 == pFVar1) break;
    local_90 = *(longlong *)pFVar7;
    local_78 = 1;
    local_68 = 0;
    local_70 = *(longlong *)(local_90 + 0x68);
    local_48 = *(undefined8 *)(local_90 + 0x48);
    uStack_40 = *(undefined8 *)(local_90 + 0x50);
    local_60 = *(longlong *)(local_90 + 0x38) + local_70;
    local_88 = 1;
    local_38 = *(undefined8 *)(local_90 + 0x58);
    uStack_30 = *(undefined8 *)(local_90 + 0x60);
    local_80 = param_1;
    if (((local_70 < (longlong)param_1) || (local_70 <= (longlong)param_1)) &&
       ((longlong)param_1 < local_60)) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_90) &&
         ((FScriptContainerElement *)&local_90 < pFVar3 + (longlong)param_2->ArrayMax * 8)) {
        local_b0 = (longlong)param_2->ArrayNum;
        local_a8 = 8;
        local_c8 = &local_90;
        local_c0 = pFVar3;
        local_b8 = (longlong)param_2->ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_90;
    }
    pFVar7 = pFVar7 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// FindReleasedAllocationData @ 1459c0100

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::FindReleasedAllocationData
          (FD3D12Adapter *this,ulong64 param_1,
          TArray<FD3D12Adapter::FReleasedAllocationData,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->TrackedAllocationDataCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->ReleasedAllocationData).ArrayNum;
    pFVar5 = (this->ReleasedAllocationData).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x60;
    while( true ) {
      if ((this->ReleasedAllocationData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FD3D12Adapter::FReleasedAllocationData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if ((*(ulonglong *)pFVar5 <= param_1) &&
         (param_1 < *(ulonglong *)pFVar5 + *(ulonglong *)(pFVar5 + 8))) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,8,1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        pFVar2 = (param_2->AllocatorInstance).Data;
        memmove(pFVar2 + 0x60,pFVar2,(longlong)iVar4 * 0x60);
        uVar3 = *(ulonglong *)(pFVar5 + 8);
        pFVar2 = (param_2->AllocatorInstance).Data;
        *(ulonglong *)pFVar2 = *(ulonglong *)pFVar5;
        *(ulonglong *)(pFVar2 + 8) = uVar3;
        uVar3 = *(ulonglong *)(pFVar5 + 0x18);
        *(ulonglong *)(pFVar2 + 0x10) = *(ulonglong *)(pFVar5 + 0x10);
        *(ulonglong *)(pFVar2 + 0x18) = uVar3;
        uVar3 = *(ulonglong *)(pFVar5 + 0x28);
        *(ulonglong *)(pFVar2 + 0x20) = *(ulonglong *)(pFVar5 + 0x20);
        *(ulonglong *)(pFVar2 + 0x28) = uVar3;
        uVar3 = *(ulonglong *)(pFVar5 + 0x38);
        *(ulonglong *)(pFVar2 + 0x30) = *(ulonglong *)(pFVar5 + 0x30);
        *(ulonglong *)(pFVar2 + 0x38) = uVar3;
        uVar3 = *(ulonglong *)(pFVar5 + 0x48);
        *(ulonglong *)(pFVar2 + 0x40) = *(ulonglong *)(pFVar5 + 0x40);
        *(ulonglong *)(pFVar2 + 0x48) = uVar3;
        uVar3 = *(ulonglong *)(pFVar5 + 0x58);
        *(ulonglong *)(pFVar2 + 0x50) = *(ulonglong *)(pFVar5 + 0x50);
        *(ulonglong *)(pFVar2 + 0x58) = uVar3;
      }
      pFVar5 = pFVar5 + 0x60;
    }
                    /* WARNING: Could not recover jumptable at 0x0001459c021a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindResourcesNearGPUAddress @ 1459c0230

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::FindResourcesNearGPUAddress
          (FD3D12Adapter *this,ulong64 param_1,ulong64 param_2,
          TArray<FD3D12Adapter::FAllocatedResourceResult,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  long64 lVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar5;
  TEnumAsByte<ERangeBoundTypes::Type> TVar6;
  int iVar7;
  ulonglong uVar8;
  long64 *plVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  TArray<FD3D12Adapter::FTrackedAllocationData,TSizedDefaultAllocator<32>_> local_b8;
  TRange<__int64> local_a8;
  longlong local_88;
  longlong lStack_80;
  LPCRITICAL_SECTION local_78;
  undefined1 local_70;
  ulong64 local_68;
  undefined1 local_60;
  ulong64 local_58;
  TRange<__int64> local_50;
  
  local_78 = (LPCRITICAL_SECTION)&this->TrackedAllocationDataCS;
  if (local_78 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_78);
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  TMapBase<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>_>
              *)&this->TrackedAllocationData,&local_b8);
  iVar3 = local_b8.ArrayNum;
  uVar8 = (ulonglong)local_b8.ArrayNum;
  local_50.LowerBound.Value = param_1 - param_2;
  local_50.UpperBound.Value = param_1 + param_2;
  local_50.LowerBound.Type.Value = '\x01';
  pFVar12 = local_b8.AllocatorInstance.Data + uVar8 * 0x108;
  local_50.UpperBound.Type.Value = '\0';
  FVar11.Data = local_b8.AllocatorInstance.Data;
  do {
    if ((int)uVar8 != iVar3) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FD3D12Adapter::FTrackedAllocationData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar11.Data == pFVar12) {
      AlgoImpl::
      IntroSortInternal<FD3D12Adapter::FAllocatedResourceResult,int,FIdentityFunctor,_FD3D12Adapter::FindResourcesNearGPUAddress_::__l2::<lambda_1>_>
                ((FAllocatedResourceResult *)(param_3->AllocatorInstance).Data,param_3->ArrayNum,
                 local_res8[0],(<lambda_1>)param_1);
      lpCriticalSection = local_78;
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    local_a8.LowerBound.Type.Value = '\x01';
    local_a8.UpperBound.Type.Value = '\0';
    uVar8 = *(ulonglong *)(*(longlong *)(*(longlong *)FVar11.Data + 0x10) + 0x38);
    local_a8.UpperBound.Value = *(longlong *)(FVar11.Data + 8) + uVar8;
    local_a8.LowerBound.Value = uVar8;
    bVar5 = TRange<__int64>::Overlaps(&local_50,&local_a8);
    lVar4 = local_a8.UpperBound.Value;
    if (bVar5) {
      local_70 = 1;
      local_68 = param_1;
      TVar6.Value = local_a8.LowerBound.Type.Value;
      if (local_a8.LowerBound.Type.Value == '\x02') {
        plVar9 = &local_a8.LowerBound.Value;
LAB_1459c035c:
        if (TVar6.Value == local_a8.LowerBound.Type.Value) goto LAB_1459c0360;
LAB_1459c03b4:
        if (param_1 < uVar8) {
          lVar10 = uVar8 - param_1;
        }
        else {
          if (local_a8.UpperBound.Type.Value == '\x02') {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L"");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          lVar10 = param_1 - lVar4;
        }
        if (lVar10 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Distance >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                             ,0x7af,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      else {
        if ((longlong)param_1 <= local_a8.LowerBound.Value) {
          if (((longlong)param_1 < local_a8.LowerBound.Value) ||
             (plVar9 = &local_a8.LowerBound.Value, local_a8.LowerBound.Type.Value != '\x01')) {
            plVar9 = (long64 *)&local_68;
          }
          TVar6.Value = '\x01';
          goto LAB_1459c035c;
        }
        plVar9 = &local_a8.LowerBound.Value;
LAB_1459c0360:
        if ((TVar6.Value != '\x02') && (*plVar9 != local_a8.LowerBound.Value)) goto LAB_1459c03b4;
        local_60 = 1;
        local_58 = param_1;
        TVar6.Value = local_a8.UpperBound.Type.Value;
        if (local_a8.UpperBound.Type.Value == '\x02') {
          plVar9 = &local_a8.UpperBound.Value;
LAB_1459c03a2:
          if (TVar6.Value != local_a8.UpperBound.Type.Value) goto LAB_1459c03b4;
        }
        else {
          if (local_a8.UpperBound.Value <= (longlong)param_1) {
            if ((local_a8.UpperBound.Value < (longlong)param_1) ||
               (plVar9 = &local_a8.UpperBound.Value, local_a8.UpperBound.Type.Value != '\x01')) {
              plVar9 = (long64 *)&local_58;
            }
            TVar6.Value = '\x01';
            goto LAB_1459c03a2;
          }
          plVar9 = &local_a8.UpperBound.Value;
        }
        if ((TVar6.Value != '\x02') && (*plVar9 != local_a8.UpperBound.Value)) goto LAB_1459c03b4;
        lVar10 = 0;
      }
      local_88 = *(longlong *)FVar11.Data;
      pFVar1 = (param_3->AllocatorInstance).Data;
      lStack_80 = lVar10;
      if ((pFVar1 <= (FScriptContainerElement *)&local_88) &&
         ((FScriptContainerElement *)&local_88 < pFVar1 + (longlong)param_3->ArrayMax * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar7 + 1;
      pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(longlong *)pFVar1 = local_88;
      *(longlong *)(pFVar1 + 8) = lStack_80;
    }
    uVar8 = local_b8._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x108;
  } while( true );
}

// GetOrCreateTransientHeapCache @ 1459c2610

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12TransientHeapCache * __thiscall
FD3D12Adapter::GetOrCreateTransientHeapCache(FD3D12Adapter *this)

{
  IRHITransientMemoryCache *pIVar1;
  TUniquePtr<FD3D12TransientHeapCache,TDefaultDelete<FD3D12TransientHeapCache>_> TVar2;
  FRHITransientHeapCache *local_res8;
  
  if ((this->TransientMemoryCache).Ptr == (IRHITransientMemoryCache *)0x0) {
    TVar2 = FD3D12TransientHeapCache::Create((FD3D12Adapter *)&local_res8);
    pIVar1 = (this->TransientMemoryCache).Ptr;
    (this->TransientMemoryCache).Ptr = *(IRHITransientMemoryCache **)TVar2.Ptr;
    *(undefined8 *)TVar2.Ptr = 0;
    if (pIVar1 != (IRHITransientMemoryCache *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    if (local_res8 != (FRHITransientHeapCache *)0x0) {
      FRHITransientHeapCache::~FRHITransientHeapCache(local_res8);
      ::operator_delete(local_res8,200);
    }
    return (FD3D12TransientHeapCache *)(this->TransientMemoryCache).Ptr;
  }
  return (FD3D12TransientHeapCache *)(this->TransientMemoryCache).Ptr;
}

// GetTransientUniformBufferAllocator @ 1459c3640

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12FastConstantAllocator * __thiscall
FD3D12Adapter::GetTransientUniformBufferAllocator(FD3D12Adapter *this)

{
  FTlsAutoCleanup *pFVar1;
  FD3D12Adapter *local_res8 [4];
  code *local_18;
  FD3D12Adapter **local_10;
  
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FD3D12Adapter::GetTransientUniformBufferAllocator'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_10 = local_res8;
  local_res8[0] = this;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FTransientUniformBufferAllocator>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  return (FD3D12FastConstantAllocator *)(pFVar1 + 2);
}

// InitDXGIFactoryVariants @ 1459c4db0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::InitDXGIFactoryVariants(FD3D12Adapter *this,IDXGIFactory2 *param_1)

{
  IDXGIFactory3 *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  IDXGIFactory4 *pIVar2;
  IDXGIFactory5 *pIVar3;
  IDXGIFactory6 *pIVar4;
  IDXGIFactory7 *pIVar5;
  
  pIVar1 = (this->DxgiFactory3).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  if (pIVar1 != (IDXGIFactory3 *)0x0) {
    (this->DxgiFactory3).Reference = (IDXGIFactory3 *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(param_1,&_GUID_25483823_cd46_4c7d_86ca_47aa95b837bd,&this->DxgiFactory3);
  pIVar2 = (this->DxgiFactory4).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  if (pIVar2 != (IDXGIFactory4 *)0x0) {
    (this->DxgiFactory4).Reference = (IDXGIFactory4 *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(param_1,&_GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a,&this->DxgiFactory4);
  pIVar3 = (this->DxgiFactory5).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  if (pIVar3 != (IDXGIFactory5 *)0x0) {
    (this->DxgiFactory5).Reference = (IDXGIFactory5 *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(param_1,&_GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d,&this->DxgiFactory5);
  pIVar4 = (this->DxgiFactory6).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  if (pIVar4 != (IDXGIFactory6 *)0x0) {
    (this->DxgiFactory6).Reference = (IDXGIFactory6 *)0x0;
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  (*UNRECOVERED_JUMPTABLE)(param_1,&_GUID_c1b6694f_ff09_44a9_b03c_77900a0a1d17,&this->DxgiFactory6);
  pIVar5 = (this->DxgiFactory7).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  if (pIVar5 != (IDXGIFactory7 *)0x0) {
    (this->DxgiFactory7).Reference = (IDXGIFactory7 *)0x0;
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001459c4edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,&_GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,&this->DxgiFactory7);
  return;
}

// InitializeDevices @ 1459c5b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459c6d4f) */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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

void __thiscall FD3D12Adapter::InitializeDevices(FD3D12Adapter *this)

{
  TUniquePtr<FD3D12ManualFence,TDefaultDelete<FD3D12ManualFence>_> *pTVar1;
  D3D12_RESOURCE_BINDING_TIER *pDVar2;
  D3D_FEATURE_LEVEL DVar3;
  ID3D12Device1 *pIVar4;
  ID3D12Device2 *pIVar5;
  ID3D12Device3 *pIVar6;
  ID3D12Device4 *pIVar7;
  ID3D12Device5 *pIVar8;
  ID3D12Device6 *pIVar9;
  ID3D12Device7 *pIVar10;
  ID3D12Device8 *pIVar11;
  ID3D12Device9 *pIVar12;
  ID3D12Device10 *pIVar13;
  ID3D12Device11 *pIVar14;
  ID3D12Device12 *pIVar15;
  ID3D12BarriersForAdapter IVar16;
  ID3D12Device *pIVar17;
  FD3D12CommandContext *pFVar18;
  void *pvVar19;
  code *pcVar20;
  TUniquePtr<ID3D12BarriersForAdapter_const_,TDefaultDelete<ID3D12BarriersForAdapter_const_>_>
  TVar21;
  EShaderPlatform EVar22;
  bool bVar23;
  HRESULT HVar24;
  ERHIBindlessConfiguration EVar25;
  int iVar26;
  int iVar27;
  wchar_t *pwVar28;
  TUniquePtr<ID3D12BarriersForAdapter_const_,TDefaultDelete<ID3D12BarriersForAdapter_const_>_>
  TVar29;
  IConsoleManager *pIVar30;
  FD3D12Device *pFVar31;
  FD3D12Device *pFVar32;
  FD3D12ManualFence *this_00;
  FD3D12UploadHeapAllocator *this_01;
  FString *pFVar33;
  FStaticBasicLogRecord *pFVar34;
  ulonglong uVar35;
  char cVar36;
  FRHIGPUMask FVar37;
  uint uVar38;
  FD3D12Device *pFVar39;
  uint uVar40;
  bool bVar41;
  undefined1 auStack_268 [32];
  uint local_248;
  uint local_240;
  char local_238;
  int local_234;
  D3D_ROOT_SIGNATURE_VERSION local_230 [2];
  undefined8 local_228;
  undefined8 local_220;
  FString local_218;
  longlong *local_208;
  uint local_200;
  undefined4 local_1fc;
  uint local_1f8;
  uint local_1f4;
  FName local_1ec;
  FName local_1e4;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  longlong local_168;
  longlong local_160;
  int local_158;
  undefined8 local_150;
  int local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  IID local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_268;
  bVar23 = IsInGameThread();
  if ((!bVar23) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                          ,0x3d7,L""), bVar23)) {
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  FlushRenderingCommands();
  cVar36 = GRHIGlobals.IsDebugLayerEnabled;
  local_238 = GRHIGlobals.IsDebugLayerEnabled;
  if ((this->RootDevice).Reference != (ID3D12Device *)0x0) {
    return;
  }
  (**(code **)(this->_padding_ + 8))(this,GRHIGlobals.IsDebugLayerEnabled);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar28 = FCommandLine::Get();
    bVar23 = FParse::Param(pwVar28,L"d3dcompat");
    if (bVar23) {
LAB_1459c5c24:
      bForceCompatibility = true;
    }
    else {
      pwVar28 = FCommandLine::Get();
      bVar23 = FParse::Param(pwVar28,L"d3d12compat");
      bForceCompatibility = false;
      if (bVar23) goto LAB_1459c5c24;
    }
    _Init_thread_footer(&::_TSS0);
  }
  pFVar39 = (FD3D12Device *)0x0;
  if (bForceCompatibility == false) {
    pIVar17 = (this->RootDevice).Reference;
    pIVar4 = (this->RootDevice1).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar4 != (ID3D12Device1 *)0x0) {
      (this->RootDevice1).Reference = (ID3D12Device1 *)0x0;
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_77acce80_638e_4e65_8895_c1f23386863e,&this->RootDevice1);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar5 = (this->RootDevice2).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar5 != (ID3D12Device2 *)0x0) {
      (this->RootDevice2).Reference = (ID3D12Device2 *)0x0;
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_30baa41e_b15b_475c_a0bb_1af5c5b64328,&this->RootDevice2);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if (((this->RootDevice1).Reference == (ID3D12Device1 *)0x0) ||
       ((this->RootDevice2).Reference == (ID3D12Device2 *)0x0)) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar6 = (this->RootDevice3).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar6 != (ID3D12Device3 *)0x0) {
      (this->RootDevice3).Reference = (ID3D12Device3 *)0x0;
      (**(code **)((longlong)*pIVar6 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_81dadc15_2bad_4392_93c5_101345c4aa98,&this->RootDevice3);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar7 = (this->RootDevice4).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar7 != (ID3D12Device4 *)0x0) {
      (this->RootDevice4).Reference = (ID3D12Device4 *)0x0;
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_e865df17_a9ee_46f9_a463_3098315aa2e5,&this->RootDevice4);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar8 = (this->RootDevice5).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar8 != (ID3D12Device5 *)0x0) {
      (this->RootDevice5).Reference = (ID3D12Device5 *)0x0;
      (**(code **)((longlong)*pIVar8 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_8b4f173b_2fea_4b80_8f58_4307191ab95d,&this->RootDevice5);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar9 = (this->RootDevice6).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar9 != (ID3D12Device6 *)0x0) {
      (this->RootDevice6).Reference = (ID3D12Device6 *)0x0;
      (**(code **)((longlong)*pIVar9 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_c70b221b_40e4_4a17_89af_025a0727a6dc,&this->RootDevice6);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar10 = (this->RootDevice7).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar10 != (ID3D12Device7 *)0x0) {
      (this->RootDevice7).Reference = (ID3D12Device7 *)0x0;
      (**(code **)((longlong)*pIVar10 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_5c014b53_68a1_4b9b_8bd1_dd6046b9358b,&this->RootDevice7);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar11 = (this->RootDevice8).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar11 != (ID3D12Device8 *)0x0) {
      (this->RootDevice8).Reference = (ID3D12Device8 *)0x0;
      (**(code **)((longlong)*pIVar11 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_9218e6bb_f944_4f7e_a75c_b1b2c7b701f3,&this->RootDevice8);
    if (-1 < iVar26) {
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      this->bHeapNotZeroedSupported = true;
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar12 = (this->RootDevice9).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar12 != (ID3D12Device9 *)0x0) {
      (this->RootDevice9).Reference = (ID3D12Device9 *)0x0;
      (**(code **)((longlong)*pIVar12 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_4c80e962_f032_4f60_bc9e_ebc2cfa1d83c,&this->RootDevice9);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar13 = (this->RootDevice10).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar13 != (ID3D12Device10 *)0x0) {
      (this->RootDevice10).Reference = (ID3D12Device10 *)0x0;
      (**(code **)((longlong)*pIVar13 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_517f8718_aa66_49f9_b02b_a7ab89c06031,&this->RootDevice10);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar14 = (this->RootDevice11).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar14 != (ID3D12Device11 *)0x0) {
      (this->RootDevice11).Reference = (ID3D12Device11 *)0x0;
      (**(code **)((longlong)*pIVar14 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_5405c344_d457_444e_b4dd_2366e45aee39,&this->RootDevice11);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    pIVar15 = (this->RootDevice12).Reference;
    pcVar20 = *(code **)*pIVar17;
    if (pIVar15 != (ID3D12Device12 *)0x0) {
      (this->RootDevice12).Reference = (ID3D12Device12 *)0x0;
      (**(code **)((longlong)*pIVar15 + 0x10))();
    }
    iVar26 = (*pcVar20)(pIVar17,&_GUID_5af5c532_4c91_4cd0_b541_15a405395fc5,&this->RootDevice12);
    if ((-1 < iVar26) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    iVar26 = (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x30,&local_a8,0x28);
    if (iVar26 < 0) {
      this->MaxNonSamplerDescriptors = 1000000;
      this->MaxSamplerDescriptors = 0x800;
    }
    else {
      this->MaxNonSamplerDescriptors = (int)local_88;
      this->MaxSamplerDescriptors = uStack_90._4_4_;
    }
    pDVar2 = &(this->Desc).ResourceBindingTier;
    if ((this->Desc).ResourceBindingTier == D3D12_RESOURCE_BINDING_TIER_1) {
      GRHIGlobals.MaxSimultaneousUAVs = 8;
      if (0xb000 < (int)(this->Desc).MaxSupportedFeatureLevel) {
        GRHIGlobals.MaxSimultaneousUAVs = 0x10;
      }
    }
    else {
      GRHIGlobals.MaxSimultaneousUAVs = 0x10;
    }
    pIVar17 = (this->RootDevice).Reference;
    HVar24 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_40);
    if (HVar24 < 0) {
LAB_1459c613b:
      bVar23 = false;
    }
    else {
      local_208 = (longlong *)0x0;
      iVar26 = (**(code **)*pIVar17)(pIVar17,&local_40,&local_208);
      if (iVar26 < 0) {
        if (local_208 != (longlong *)0x0) {
          (**(code **)(*local_208 + 0x10))();
        }
        goto LAB_1459c613b;
      }
      if (local_208 != (longlong *)0x0) {
        (**(code **)(*local_208 + 0x10))();
      }
      bVar23 = true;
    }
    if (((0x65 < (int)(this->Desc).MaxSupportedShaderModel) && (2 < (int)*pDVar2)) &&
       (GRHIGlobals.bSupportsBindless = 3 < (int)GMaxRHIFeatureLevel, 4 < (byte)LogD3D12RHI._0_1_))
    {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    local_80 = 0;
    uStack_78 = 0;
    local_50 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0,&local_80,0x3c);
    GRHIGlobals.SupportsStencilRefFromPixelShader = local_70._4_4_ != 0;
    GRHIGlobals.SupportsRasterOrderViews = uStack_68._4_4_ != 0;
    if ((4 < (byte)LogD3D12RHI._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
       4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,8,&local_118,0x18);
    GRHIGlobals.SupportsWaveOperations = (int)local_118 != 0;
    GRHIGlobals.MinimumWaveSize = local_118._4_4_;
    GRHIGlobals.MaximumWaveSize = (int)uStack_110;
    if (((int)local_118 != 0) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar17 = (this->RootDevice).Reference;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x15,&local_e8,0x14);
    GRHIGlobals.SupportsBarycentricsSemantic = local_d8 != 0;
    pIVar17 = (this->RootDevice).Reference;
    local_150 = 0;
    local_148 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x17,&local_150,0xc);
    GRHIGlobals.SupportsNative16BitOps = local_148 != 0;
    pIVar17 = (this->RootDevice).Reference;
    bVar41 = false;
    local_140 = 0;
    local_138 = 0;
    iVar26 = (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x29,&local_140,0xc);
    if (-1 < iVar26) {
      bVar41 = local_140._4_4_ != 0;
    }
    if (GPreferredBarrierImplementation == 0) {
LAB_1459c6366:
      PreferredBarrierImplType = Invalid;
    }
    else if (GPreferredBarrierImplementation == 1) {
      PreferredBarrierImplType = Legacy;
    }
    else {
      PreferredBarrierImplType = Enhanced;
      if (GPreferredBarrierImplementation != 2) goto LAB_1459c6366;
    }
    if (PreferredBarrierImplType == Invalid) {
      PreferredBarrierImplType = (uint)bVar41;
    }
    if ((((4 < (byte)LogD3D12RHI._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
         4 < (byte)LogD3D12RHI._0_1_)) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
        4 < (byte)LogD3D12RHI._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
       4 < (byte)LogD3D12RHI._0_1_)) {
      if (((PreferredBarrierImplType != Legacy) && (PreferredBarrierImplType != Enhanced)) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                              ,0x77,L""), bVar41)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if ((Barriers.Ptr != (ID3D12BarriersForAdapter *)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Barriers",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                            ,0x4af,L""), bVar41)) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    if (PreferredBarrierImplType == Enhanced) {
      TVar29.Ptr = ::operator_new(8);
      if (TVar29.Ptr == (ID3D12BarriersForAdapter *)0x0) {
LAB_1459c64dc:
        TVar29.Ptr = (ID3D12BarriersForAdapter *)0x0;
      }
      else {
        *TVar29.Ptr = (ID3D12BarriersForAdapter)&___7FD3D12EnhancedBarriersForAdapter__6B_;
      }
    }
    else {
      TVar29.Ptr = ::operator_new(8);
      if (TVar29.Ptr == (ID3D12BarriersForAdapter *)0x0) goto LAB_1459c64dc;
      *TVar29.Ptr = (ID3D12BarriersForAdapter)&___7FD3D12LegacyBarriersForAdapter__6B_;
    }
    TVar21.Ptr = Barriers.Ptr;
    if (Barriers.Ptr != (ID3D12BarriersForAdapter *)0x0) {
      IVar16 = *Barriers.Ptr;
      Barriers.Ptr = TVar29.Ptr;
      (**(code **)IVar16)(TVar21.Ptr,1);
      TVar29.Ptr = Barriers.Ptr;
    }
    Barriers.Ptr = TVar29.Ptr;
    if (Barriers.Ptr == (ID3D12BarriersForAdapter *)0x0) {
      bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Barriers",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                          ,0x4b1,L"");
      if (bVar41) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      if (Barriers.Ptr == (ID3D12BarriersForAdapter *)0x0) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    if (4 < (byte)LogD3D12RHI._0_1_) {
      (**(code **)((longlong)*Barriers.Ptr + 0x48))(Barriers.Ptr);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    GRHITransitionPrivateData_SizeInBytes =
         (**(code **)((longlong)*Barriers.Ptr + 0x10))(Barriers.Ptr);
    GRHITransitionPrivateData_AlignInBytes = (**(code **)((longlong)*Barriers.Ptr + 0x18))();
    (**(code **)((longlong)*Barriers.Ptr + 8))(Barriers.Ptr,(this->RootDevice).Reference,local_238);
    pIVar17 = (this->RootDevice).Reference;
    local_160 = 0;
    local_158 = 0;
    iVar26 = (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x1b,&local_160,0xc);
    EVar22 = GMaxRHIShaderPlatform;
    if (-1 < iVar26) {
      if ((((9 < local_158) && (1 < (int)*pDVar2)) &&
          ((this->RootDevice5).Reference != (ID3D12Device5 *)0x0)) &&
         (bVar41 = FGenericDataDrivenShaderPlatformInfo::GetSupportsRayTracing
                             ((FStaticShaderPlatform)GMaxRHIShaderPlatform), bVar41)) {
        pwVar28 = FCommandLine::Get();
        bVar41 = FParse::Param(pwVar28,L"noraytracing");
        if (!bVar41) {
          if (local_158 < 0xb) {
LAB_1459c67ea:
            if (GRHIGlobals.bSupportsBindless != false) {
              if (4 < (byte)LogD3D12RHI._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
              }
              goto LAB_1459c686a;
            }
          }
          else if (GRHIGlobals.bSupportsBindless != false) {
            if ((this->RootDevice7).Reference == (ID3D12Device7 *)0x0) goto LAB_1459c67ea;
            if (EVar22 != SP_PCD3D_SM6) {
              if (4 < (byte)LogD3D12RHI._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
              }
              goto LAB_1459c686a;
            }
            if (4 < (byte)LogD3D12RHI._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            }
            uVar35 = (ulonglong)GMaxRHIShaderPlatform;
            if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bContainsValidPlatformInfo == 0
                ) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid(Platform)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                          ,0x16c,L""), bVar23)) {
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            GRHIGlobals.RayTracing.Supported =
                 FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bSupportsRayTracing;
            if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bSupportsRayTracing == 0) {
LAB_1459c6722:
              GRHIGlobals.RayTracing.SupportsShaders = false;
            }
            else {
              uVar35 = (ulonglong)GMaxRHIShaderPlatform;
              if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bContainsValidPlatformInfo ==
                   0) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid(Platform)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                              ,0x172,L""), bVar23)) {
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bSupportsRayTracing == 0) ||
                 (GRHIGlobals.RayTracing.SupportsShaders = true,
                 FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bSupportsRayTracingShaders == 0
                 )) goto LAB_1459c6722;
            }
            EVar25 = RHIGetRuntimeBindlessConfiguration(GMaxRHIShaderPlatform);
            GRHIGlobals.RayTracing.SupportsPSOAdditions = true;
            if (GRHIGlobals.RayTracing.Supported != false) {
              uVar35 = (ulonglong)GMaxRHIShaderPlatform;
              if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bContainsValidPlatformInfo ==
                   0) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid(Platform)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                              ,0x178,L""), bVar23)) {
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              if ((((FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bSupportsRayTracing != 0)
                   && (FGenericDataDrivenShaderPlatformInfo::Infos[uVar35].bSupportsInlineRayTracing
                       != 0)) && (3 < (int)GMaxRHIFeatureLevel)) && (EVar25 != Disabled)) {
                GRHIGlobals.RayTracing.SupportsInlineRayTracing = true;
                GRHIGlobals.RayTracing.RequiresInlineRayTracingSBT = true;
                goto LAB_1459c686a;
              }
            }
            GRHIGlobals.RayTracing.SupportsInlineRayTracing = false;
            GRHIGlobals.RayTracing.RequiresInlineRayTracingSBT = false;
            goto LAB_1459c686a;
          }
          if (4 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          goto LAB_1459c686a;
        }
      }
      if ((local_158 == 0) && (bVar23)) {
        pwVar28 = FCommandLine::Get();
        bVar23 = FParse::Param(pwVar28,L"noraytracing");
        if ((!bVar23) && (2 < (byte)LogD3D12RHI._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
    }
LAB_1459c686a:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar30 = IConsoleManager::Get();
      CVarRayTracingAllowCompaction =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar30 + 0xc0))(pIVar30,L"r.D3D12.RayTracing.AllowCompaction",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    iVar26 = (**(code **)(*(longlong *)CVarRayTracingAllowCompaction + 200))();
    GRHIGlobals.RayTracing.AccelerationStructureAlignment = 0x100;
    GRHIGlobals.RayTracing.SupportsAccelerationStructureCompaction = iVar26 != 0;
    GRHIGlobals.RayTracing.ScratchBufferAlignment = 0x100;
    GRHIGlobals.RayTracing.ShaderTableAlignment = 0x40;
    GRHIGlobals.RayTracing.InstanceDescriptorSize = 0x40;
    pIVar17 = (this->RootDevice).Reference;
    local_220 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x20,&local_220,8);
    pIVar17 = (this->RootDevice).Reference;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x25,&local_100,0x18);
    pIVar17 = (this->RootDevice).Reference;
    local_234 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x28,&local_234,4);
    if (3 < (int)GMaxRHIFeatureLevel) {
      GRHIGlobals.SupportsMeshShadersTier0 = 9 < (int)local_220;
      GRHIGlobals.SupportsMeshShadersTier1 = GRHIGlobals.SupportsMeshShadersTier0;
    }
    if ((int)(this->Desc).MaxSupportedShaderModel < 0x60) {
      ::FName::FName(&local_1e4,L"DXBC");
      local_1ec = local_1e4;
    }
    else {
      ::FName::FName(&local_1ec,L"DXIL");
    }
    GRHIGlobals.PreferredPreviewShaderCodeFormat = local_1ec;
    if ((9 < (int)local_220) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if ((int)uStack_f8 != 0) {
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      GRHIGlobals.SupportsAtomicUInt64 = true;
    }
    if ((uStack_f8._4_4_ != 0) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if ((local_234 != 0) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if (((int)uStack_f8 == 0) || (local_234 == 0)) {
      if (GRHIGlobals.SupportsDX12AtomicUInt64 != false) goto LAB_1459c6a97;
      if (4 < (byte)LogD3D12RHI._0_1_) {
        pFVar34 = &::LOG_Static;
        goto LAB_1459c6ab1;
      }
    }
    else {
      GRHIGlobals.SupportsDX12AtomicUInt64 = true;
LAB_1459c6a97:
      if (4 < (byte)LogD3D12RHI._0_1_) {
        pFVar34 = &::LOG_Static;
LAB_1459c6ab1:
        UE::Logging::Private::BasicLog<5>(pFVar34,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    pIVar17 = (this->RootDevice).Reference;
    local_b8 = 0;
    uStack_b0 = 0;
    (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x35,&local_b8,0x10);
    if ((int)local_b8 != 0) {
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      GRHIGlobals.SupportsShaderWorkGraphsTier1 = true;
    }
    GRHIGlobals.SupportsShaderTimestamp = IsRHIDeviceNVIDIA();
    cVar36 = local_238;
  }
  else if (4 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  pwVar28 = FCommandLine::Get();
  bVar23 = FParse::Param(pwVar28,L"DisableAsyncCompute");
  if (bVar23) {
    GRHIGlobals.SupportsEfficientAsyncCompute = false;
  }
  else {
    pwVar28 = FCommandLine::Get();
    bVar23 = FParse::Param(pwVar28,L"ForceAsyncCompute");
    if (!bVar23) {
      if (((GRHIGlobals.SupportsEfficientAsyncCompute != false) || (GAllowAsyncCompute == 0)) ||
         (GRHIGlobals.SupportsParallelRHIExecute == false)) goto LAB_1459c6bdb;
      bVar23 = IsRHIDeviceAMD();
      if ((!bVar23) && ((bVar23 = IsRHIDeviceIntel(), !bVar23 || ((int)GMaxRHIFeatureLevel < 4)))) {
        pIVar17 = (this->RootDevice).Reference;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        iVar26 = (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x1e,&local_d0,0x14);
        bVar23 = IsRHIDeviceNVIDIA();
        if ((!bVar23) || ((iVar26 != 0 || (local_d0._4_4_ == 0)))) goto LAB_1459c6bdb;
      }
    }
    GRHIGlobals.SupportsEfficientAsyncCompute = true;
  }
LAB_1459c6bdb:
  if (cVar36 != '\0') {
    CreateD3DInfoQueue(this);
  }
  if (GRHIGlobals.SupportsEfficientAsyncCompute != false) {
    GRHIGlobals.SupportsAsyncComputeTransientAliasing = true;
  }
  pIVar17 = (this->RootDevice).Reference;
  local_228 = 0;
  iVar26 = (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x12,&local_228,8);
  if (iVar26 < 0) {
    local_228 = 0;
    local_228._0_4_ = 0;
  }
  else {
  }
  pIVar17 = (this->RootDevice).Reference;
  local_230[0] = D3D_ROOT_SIGNATURE_VERSION_1_1;
  this->bDepthBoundsTestSupported = (int)local_228 != 0;
  iVar26 = (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0xc,local_230,4);
  if (iVar26 < 0) {
    local_230[0] = D3D_ROOT_SIGNATURE_VERSION_1;
  }
  pIVar17 = (this->RootDevice).Reference;
  this->RootSignatureVersion = local_230[0];
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  iVar27 = (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,0x15,&local_130,0x14);
  this->bCopyQueueTimestampQueriesSupported = false;
  iVar26 = (int)local_130;
  if (iVar27 < 0) {
    iVar26 = 0;
  }
  local_130 = CONCAT44(local_130._4_4_,iVar26);
  iVar26 = MemAllocChannel->Enabled;
  if ((((GD3D12TrackAllAllocations == false) && (bVar23 = UE::RHI::UseGPUCrashDebugging(), !bVar23))
      && (iVar26 < 0)) || ((this->Desc).ResourceHeapTier != D3D12_RESOURCE_HEAP_TIER_2)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  DVar3 = (this->Desc).MaxSupportedFeatureLevel;
  this->bTrackAllAllocation = bVar23;
  if (((0xbfff < (int)DVar3) && (0x65 < (int)(this->Desc).MaxSupportedShaderModel)) &&
     (2 < (int)(this->Desc).ResourceBindingTier)) {
    FD3D12BindlessDescriptorAllocator::Init(&this->BindlessDescriptorAllocator);
    GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters =
         1 < (int)(this->BindlessDescriptorAllocator).BindlessConfiguration;
  }
  *(int *)((longlong)&(this->DefaultContextRedirector)._padding_ + 4) =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uVar40 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_200 = 0;
  if (uVar40 != 0) {
    for (; (uVar40 >> local_200 & 1) == 0; local_200 = local_200 + 1) {
    }
  }
  uVar35 = 0x20;
  if (uVar40 != 0) {
    uVar35 = (ulonglong)local_200;
  }
  local_1fc = 0;
  if (uVar40 != 0) {
    while( true ) {
      pFVar31 = ::operator_new(0x1640,0x40);
      FVar37.GPUMask = 1 << ((byte)uVar35 & 0x1f);
      pFVar32 = pFVar39;
      if (pFVar31 != (FD3D12Device *)0x0) {
        pFVar32 = FD3D12Device::FD3D12Device(pFVar31,FVar37,this);
      }
      (this->Devices).Elements[uVar35] = pFVar32;
      FD3D12Device::SetupAfterDeviceCreation(pFVar32);
      pFVar18 = (this->Devices).Elements[uVar35]->ImmediateCommandContext;
      if ((pFVar18 == (FD3D12CommandContext *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Context",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x490,L""), bVar23)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      local_1f8 = 0;
      bVar23 = *(int *)&pFVar18->field_0x2f8 != 0;
      if (bVar23) {
        for (; (*(uint *)&pFVar18->field_0x2f8 >> local_1f8 & 1) == 0; local_1f8 = local_1f8 + 1) {
        }
      }
      uVar35 = 0x20;
      if (bVar23) {
        uVar35 = (ulonglong)local_1f8;
      }
      if (((*(uint *)((longlong)&(this->DefaultContextRedirector)._padding_ + 4) >>
            ((uint)uVar35 & 0x1f) & 1) == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("PhysicalGPUMask.Contains(GPUIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x492,L""), bVar23)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      (this->DefaultContextRedirector).PhysicalContexts.Elements[uVar35] = pFVar18;
      uVar40 = uVar40 & ~FVar37.GPUMask;
      local_1f4 = 0;
      if (uVar40 != 0) {
        for (; (uVar40 >> local_1f4 & 1) == 0; local_1f4 = local_1f4 + 1) {
        }
      }
      if (uVar40 == 0) break;
      uVar35 = (ulonglong)local_1f4;
    }
  }
  this_00 = ::operator_new(0x70);
  pFVar32 = pFVar39;
  if (this_00 != (FD3D12ManualFence *)0x0) {
    pFVar32 = (FD3D12Device *)FD3D12ManualFence::FD3D12ManualFence(this_00,this);
  }
  pTVar1 = &this->FrameFence;
  if (pTVar1 == (TUniquePtr<FD3D12ManualFence,TDefaultDelete<FD3D12ManualFence>_> *)&local_168) {
    if (pFVar32 == (FD3D12Device *)0x0) goto LAB_1459c6ed0;
    *(undefined4 *)
     &((TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
        *)&pFVar32->field_0x8)->field_0x48 = 0;
    pvVar19 = *(void **)&((TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
                           *)&pFVar32->field_0x8)->field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar32->field_0x8);
  }
  else {
    pFVar31 = (FD3D12Device *)pTVar1->Ptr;
    pTVar1->Ptr = (FD3D12ManualFence *)pFVar32;
    if (pFVar31 == (FD3D12Device *)0x0) goto LAB_1459c6ed0;
    *(undefined4 *)
     &((TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
        *)&pFVar31->field_0x8)->field_0x48 = 0;
    pvVar19 = *(void **)&((TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
                           *)&pFVar31->field_0x8)->field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar31->field_0x8);
    pFVar32 = pFVar31;
  }
  ::operator_delete(pFVar32,0x70);
LAB_1459c6ed0:
  ::FString::FString(&local_178,L"Upload Buffer Allocator");
  uVar38 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar40 = 0;
  bVar23 = uVar38 != 0;
  if (bVar23) {
    for (; (uVar38 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
    }
  }
  while (bVar23) {
    this_01 = ::operator_new(0x288);
    pFVar32 = pFVar39;
    if (this_01 != (FD3D12UploadHeapAllocator *)0x0) {
      pFVar32 = (FD3D12Device *)
                FD3D12UploadHeapAllocator::FD3D12UploadHeapAllocator
                          (this_01,this,(this->Devices).Elements[uVar40],&local_178);
    }
    this->UploadHeapAllocator[uVar40] = (FD3D12UploadHeapAllocator *)pFVar32;
    uVar38 = uVar38 & ~(1 << ((byte)uVar40 & 0x1f));
    uVar40 = 0;
    bVar23 = uVar38 != 0;
    if (bVar23) {
      for (; (uVar38 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
      }
    }
  }
  local_240 = (this->Desc).Desc.Revision;
  local_248 = (this->Desc).Desc.SubSysId;
  ::FString::PrintfImpl(&local_218,L"V%d_D%d_S%d_R%d.ushaderprecache");
  ::FString::PrintfImpl(&local_1d8,L"D3DGraphics_%s");
  pFVar33 = FPaths::ProjectSavedDir();
  ::operator/(&local_188,pFVar33,&local_1d8);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1c8,L"D3DCompute_%s");
  pFVar33 = FPaths::ProjectSavedDir();
  ::operator/(&local_198,pFVar33,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1b8,L"D3DDriverByteCodeBlob_%s");
  pFVar33 = FPaths::ProjectSavedDir();
  ::operator/(&local_1a8,pFVar33,&local_1b8);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  FD3D12PipelineStateCache::Init(&this->PipelineStateCache,&local_188,&local_198,&local_1a8);
  FD3D12PipelineStateCache::RebuildFromDiskCache(&this->PipelineStateCache);
  (**(code **)(this->_padding_ + 0x18))(this);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return;
}

// InitializeExplicitDescriptorHeap @ 1459c7100

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::InitializeExplicitDescriptorHeap(FD3D12Adapter *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12Device::InitExplicitDescriptorHeap((this->Devices).Elements[uVar1]);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// InitializeRayTracing @ 1459c7170

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::InitializeRayTracing(FD3D12Adapter *this)

{
  uint uVar1;
  ID3D12Device5 *pIVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar1 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar4) {
    pIVar2 = FD3D12Device::GetDevice5((this->Devices).Elements[uVar1]);
    if (pIVar2 != (ID3D12Device5 *)0x0) {
      FD3D12Device::InitRayTracing((this->Devices).Elements[uVar1]);
    }
    uVar3 = uVar3 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// ReleaseTrackedAllocationData @ 1459d4dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::ReleaseTrackedAllocationData
          (FD3D12Adapter *this,FD3D12ResourceLocation *param_1,bool param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FD3D12Adapter::FReleasedAllocationData,TSizedDefaultAllocator<32>_> *pTVar2;
  ulong64 uVar3;
  FD3D12Resource *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  ulong64 *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulong64 local_98;
  ulong64 uStack_90;
  FName local_88;
  FName FStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong local_48;
  undefined1 uStack_40;
  byte bStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lpCriticalSection = &this->TrackedAllocationDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = param_1->GPUVirtualAddress;
  if (uVar3 != 0) {
    uStack_90 = param_1->Size;
    uStack_3d = 0;
    pFVar4 = param_1->UnderlyingResource;
    local_88 = pFVar4->DebugName;
    FStack_80 = (FName)(pFVar4->Desc)._padding_;
    lStack_78 = (pFVar4->Desc)._padding_;
    lStack_70 = (pFVar4->Desc)._padding_;
    lStack_68 = (pFVar4->Desc)._padding_;
    local_60 = (pFVar4->Desc)._padding_;
    lStack_58 = (pFVar4->Desc)._padding_;
    local_50 = (pFVar4->Desc)._padding_;
    local_98 = uVar3;
    if ((this->FrameFence).Ptr == (FD3D12ManualFence *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_48 = (longlong)((((this->FrameFence).Ptr)->NextFenceValueTOP).Counter + 1);
    pTVar2 = &this->ReleasedAllocationData;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    uStack_3e = param_1->bTransient;
    bStack_3f = (param_1->UnderlyingResource->Desc).bBackBuffer;
    uStack_40 = param_2;
    if ((pFVar5 <= (FScriptContainerElement *)&local_98) &&
       (lVar9 = (longlong)(this->ReleasedAllocationData).ArrayMax,
       (FScriptContainerElement *)&local_98 < pFVar5 + lVar9 * 0x60)) {
      local_b0 = (longlong)(this->ReleasedAllocationData).ArrayNum;
      local_a8 = 0x60;
      local_c8 = &local_98;
      local_c0 = pFVar5;
      local_b8 = lVar9;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->ReleasedAllocationData).ArrayNum;
    piVar1 = &(this->ReleasedAllocationData).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ReleasedAllocationData).ArrayNum = iVar8 + 1;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    lVar9 = (longlong)iVar8 * 0x60;
    *(ulong64 *)(pFVar5 + lVar9) = local_98;
    *(ulong64 *)(pFVar5 + lVar9 + 8) = uStack_90;
    *(FName *)(pFVar5 + lVar9 + 0x10) = local_88;
    ((FName *)(pFVar5 + lVar9 + 0x10))[1] = FStack_80;
    *(longlong *)(pFVar5 + lVar9 + 0x20) = lStack_78;
    *(longlong *)(pFVar5 + lVar9 + 0x20 + 8) = lStack_70;
    *(longlong *)(pFVar5 + lVar9 + 0x30) = lStack_68;
    *(longlong *)(pFVar5 + lVar9 + 0x30 + 8) = local_60;
    *(longlong *)(pFVar5 + lVar9 + 0x40) = lStack_58;
    *(longlong *)(pFVar5 + lVar9 + 0x40 + 8) = local_50;
    *(longlong *)(pFVar5 + lVar9 + 0x50) = local_48;
    *(ulonglong *)(pFVar5 + lVar9 + 0x50 + 8) =
         CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT12(uStack_3e,CONCAT11(bStack_3f,uStack_40))));
  }
  iVar8 = TSet<TTuple<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData>,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>,FDefaultSetAllocator>
          ::Remove((TSet<TTuple<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData>,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>,FDefaultSetAllocator>
                    *)&this->TrackedAllocationData,param_1);
  if (iVar8 != 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedAllocationData.Remove(InAllocation) == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x77c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReleaseTrackedHeap @ 1459d5010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::ReleaseTrackedHeap(FD3D12Adapter *this,FD3D12Heap *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FD3D12Adapter::FReleasedAllocationData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FD3D12Heap *pFVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_148 [32];
  FD3D12Heap **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  byte local_f8;
  FD3D12Heap *local_f0;
  int local_e8;
  FD3D12Adapter *local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong64 local_b8;
  undefined8 uStack_b0;
  FD3D12Heap *local_a8;
  ulong64 uStack_a0;
  FName local_98;
  FName FStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  lpCriticalSection = &this->TrackedAllocationDataCS;
  local_f0 = param_1;
  local_e0 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar8 = (FD3D12Heap *)local_f0->GPUVirtualAddress;
  if ((pFVar8 != (FD3D12Heap *)0x0) || (this->bTrackAllAllocation != false)) {
    FStack_90.ComparisonIndex.Value = 0;
    FStack_90.Number = 0;
    uStack_88 = 0;
    local_60 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_50 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_4e = 0;
    local_c8._0_4_ = (local_f0->HeapDesc).Properties.MemoryPoolPreference;
    local_c8._4_4_ = (local_f0->HeapDesc).Properties.CreationNodeMask;
    uStack_c0 = *(undefined8 *)&(local_f0->HeapDesc).Properties.VisibleNodeMask;
    local_b8 = (local_f0->HeapDesc).Alignment;
    uStack_b0 = *(undefined8 *)&(local_f0->HeapDesc).Flags;
    uStack_a0 = (local_f0->HeapDesc).SizeInBytes;
    local_98 = local_f0->HeapName;
    local_a8 = pFVar8;
    if (((this->FrameFence).Ptr == (FD3D12ManualFence *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameFence",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                           ,0xff,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2 = &this->ReleasedAllocationData;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_58 = (longlong)((((this->FrameFence).Ptr)->NextFenceValueTOP).Counter + 1);
    uStack_4d = 1;
    if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
       (lVar7 = (longlong)(this->ReleasedAllocationData).ArrayMax,
       (FScriptContainerElement *)&local_a8 < pFVar3 + lVar7 * 0x60)) {
      local_110 = (longlong)(this->ReleasedAllocationData).ArrayNum;
      local_108 = 0x60;
      local_128 = &local_a8;
      local_120 = pFVar3;
      local_118 = lVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->ReleasedAllocationData).ArrayNum;
    piVar1 = &(this->ReleasedAllocationData).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ReleasedAllocationData).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    lVar7 = (longlong)iVar6 * 0x60;
    *(FD3D12Heap **)(pFVar3 + lVar7) = local_a8;
    *(ulong64 *)(pFVar3 + lVar7 + 8) = uStack_a0;
    *(FName *)(pFVar3 + lVar7 + 0x10) = local_98;
    ((FName *)(pFVar3 + lVar7 + 0x10))[1] = FStack_90;
    *(undefined8 *)(pFVar3 + lVar7 + 0x20) = uStack_88;
    *(undefined8 *)(pFVar3 + lVar7 + 0x20 + 8) = uStack_80;
    *(undefined8 *)(pFVar3 + lVar7 + 0x30) = uStack_78;
    *(undefined8 *)(pFVar3 + lVar7 + 0x30 + 8) = local_70;
    *(undefined8 *)(pFVar3 + lVar7 + 0x40) = uStack_68;
    *(undefined8 *)(pFVar3 + lVar7 + 0x40 + 8) = local_60;
    *(longlong *)(pFVar3 + lVar7 + 0x50) = local_58;
    *(ulonglong *)(pFVar3 + lVar7 + 0x50 + 8) =
         CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT12(uStack_4e,uStack_50)));
  }
  pFVar3 = (this->TrackedHeaps).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_f0) &&
     (lVar7 = (longlong)(this->TrackedHeaps).ArrayMax,
     (FScriptContainerElement *)&local_f0 < pFVar3 + lVar7 * 8)) {
    local_110 = (longlong)(this->TrackedHeaps).ArrayNum;
    local_108 = 8;
    local_128 = &local_f0;
    local_120 = pFVar3;
    local_118 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_e8 = (this->TrackedHeaps).ArrayNum;
  lVar7 = (longlong)local_e8;
  if (local_e8 != 0) {
    pFVar3 = (this->TrackedHeaps).AllocatorInstance.Data;
    iVar11 = 0;
    local_f8 = *(FD3D12Heap **)pFVar3 != local_f0;
    lVar10 = 0;
    pFVar8 = local_f0;
    iVar6 = 0;
    do {
      iVar9 = iVar6;
      do {
        lVar10 = lVar10 + 1;
        iVar9 = iVar9 + 1;
        if (lVar7 <= lVar10) break;
      } while ((bool)local_f8 == (*(FD3D12Heap **)(pFVar3 + lVar10 * 8) != pFVar8));
      if (local_f8 != 0) {
        if (iVar11 != iVar6) {
          memmove(pFVar3 + (longlong)iVar11 * 8,pFVar3 + (longlong)iVar6 * 8,
                  (longlong)(iVar9 - iVar6) << 3);
          pFVar8 = local_f0;
        }
        iVar11 = iVar11 + (iVar9 - iVar6);
      }
      local_f8 = local_f8 ^ 1;
      iVar6 = iVar9;
    } while (lVar10 < lVar7);
    (local_e0->TrackedHeaps).ArrayNum = iVar11;
    if (local_e8 - iVar11 == 1) goto LAB_1459d5379;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("TrackedHeaps.Remove(InHeap) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                     ,0x79b,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1459d5379:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReleaseTransientUniformBufferAllocator @ 1459d53b0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::ReleaseTransientUniformBufferAllocator
          (FD3D12Adapter *this,FTransientUniformBufferAllocator *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FTransientUniformBufferAllocator *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FTransientUniformBufferAllocator *local_res10;
  int local_res18;
  
  lpCriticalSection = &this->TransientUniformBufferAllocatorsCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->TransientUniformBufferAllocators).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->TransientUniformBufferAllocators).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18 = (this->TransientUniformBufferAllocators).ArrayNum;
  lVar4 = (longlong)local_res18;
  if (local_res18 != 0) {
    iVar9 = 0;
    pFVar1 = (this->TransientUniformBufferAllocators).AllocatorInstance.Data;
    bVar3 = *(FTransientUniformBufferAllocator **)pFVar1 != local_res10;
    lVar8 = 0;
    pFVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (lVar4 <= lVar8) break;
      } while (bVar3 == (*(FTransientUniformBufferAllocator **)(pFVar1 + lVar8 * 8) != pFVar5));
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->TransientUniformBufferAllocators).ArrayNum = iVar9;
    if (local_res18 - iVar9 == 1) goto LAB_1459d5579;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("TransientUniformBufferAllocators.Remove(InAllocator) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                     ,0x722,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1459d5579:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReleaseTransition @ 1459d55a0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D12Adapter::ReleaseTransition(FD3D12Adapter *this,FRHITransition *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Barriers.Ptr == (ID3D12BarriersForAdapter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Barriers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                       ,0x8a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001459d55eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*Barriers.Ptr + 0x28))(Barriers.Ptr,param_1);
  return;
}

// SetResidencyPriority @ 1459d9120

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::SetResidencyPriority
          (FD3D12Adapter *this,ID3D12Pageable *param_1,D3D12_RESIDENCY_PRIORITY param_2,uint param_3
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ID3D12Device5 *pIVar4;
  ID3D12Pageable *local_res10;
  D3D12_RESIDENCY_PRIORITY local_res18 [4];
  int local_18;
  D3D12_RESIDENCY_PRIORITY local_14 [3];
  
  local_18 = 4;
  local_14[0] = 0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  iVar3 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&DataGuid,&local_18,local_14);
  if (((iVar3 < 0) || (local_18 != 4)) || (local_14[0] != local_res18[0])) {
    if (GNumExplicitGPUsForRendering <= param_3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUIndex < GNumExplicitGPUsForRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0x103,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pIVar4 = FD3D12Device::GetDevice5((this->Devices).Elements[param_3]);
    (**(code **)((longlong)*pIVar4 + 0x170))(pIVar4,1,&local_res10,local_res18);
    (**(code **)((longlong)*local_res10 + 0x20))(local_res10,&DataGuid,4,local_res18);
  }
  return;
}

// TrackAllocationData @ 1459dbf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Adapter::TrackAllocationData
          (FD3D12Adapter *this,FD3D12ResourceLocation *param_1,ulong64 param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  FTrackedAllocationData *local_138;
  FD3D12ResourceLocation **local_130;
  FD3D12ResourceLocation *local_128;
  ulong64 local_120;
  uint local_118;
  ulong64 local_110 [31];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_148._0_8_ = param_1;
  local_128 = param_1;
  local_120 = param_2;
  if (param_3) {
    local_118 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_110,0x1e,(void *)0x0);
  }
  else {
    local_118 = 0;
  }
  lpCriticalSection = &this->TrackedAllocationDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = ((uint)((ulonglong)local_148._0_8_ >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_148._0_8_ >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->TrackedAllocationData).field_0x8 !=
      *(int *)&(this->TrackedAllocationData).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TrackedAllocationData).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TrackedAllocationData).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TrackedAllocationData).field_0x48 - 1U &
                              (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->TrackedAllocationData).field_0x0;
      do {
        if (*(FD3D12ResourceLocation **)((longlong)iVar4 * 0x118 + lVar1) ==
            (FD3D12ResourceLocation *)local_148._0_8_) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TrackedAllocationData.Contains(InAllocation)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                             ,0x763,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x118 + 0x110 + lVar1);
      } while (iVar4 != -1);
    }
  }
  local_138 = (FTrackedAllocationData *)local_148;
  local_130 = &local_128;
  TSet<TTuple<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData>,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FD3D12ResourceLocation_*_const_&,FD3D12Adapter::FTrackedAllocationData_const_&>_>
            ((TSet<TTuple<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData>,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>,FDefaultSetAllocator>
              *)&this->TrackedAllocationData,
             (TPairInitializer<FD3D12ResourceLocation_*_const_&,FD3D12Adapter::FTrackedAllocationData_const_&>
              *)(local_148 + 8),(bool *)&local_138);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// TrackHeapAllocation @ 1459dc0c0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::TrackHeapAllocation(FD3D12Adapter *this,FD3D12Heap *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FD3D12Heap_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FD3D12Heap *local_res10 [3];
  
  lpCriticalSection = &this->TrackedAllocationDataCS;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar7 = &this->TrackedHeaps;
  pFVar6 = (pTVar7->AllocatorInstance).Data;
  pFVar2 = pFVar6 + (longlong)(this->TrackedHeaps).ArrayNum * 8;
  do {
    if (pFVar6 == pFVar2) {
LAB_1459dc13d:
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar2 + (longlong)(this->TrackedHeaps).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->TrackedHeaps).ArrayNum;
      piVar1 = &(this->TrackedHeaps).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar7->AllocatorInstance,piVar1);
      }
      (this->TrackedHeaps).ArrayNum = iVar5 + 1;
      *(FD3D12Heap **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(FD3D12Heap **)pFVar6 == local_res10[0]) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TrackedHeaps.Contains(InHeap)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp"
                         ,0x785,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1459dc13d;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// CreateBuffer @ 145a5ceb0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

undefined4 __thiscall
FD3D12Adapter::CreateBuffer
          (FD3D12Adapter *this,D3D12_HEAP_PROPERTIES *param_1,FRHIGPUMask param_2,
          ED3D12Access param_3,ED3D12ResourceStateMode param_4,ED3D12Access param_5,ulong64 param_6,
          FD3D12Resource **param_7,wchar_t *param_8,D3D12_RESOURCE_FLAGS param_9)

{
  T_HRESULT TVar1;
  undefined4 uStack_94;
  undefined4 uStack_64;
  FD3D12ResourceDesc local_58;
  
  if (param_7 == (FD3D12Resource **)0x0) {
    return 0x80004003;
  }
  local_58._58_4_ = 0;
  local_58._padding_ = CONCAT44(uStack_94,1);
  local_58._padding_ = 0x1000100000001;
  local_58._padding_ = 0;
  local_58._padding_ = param_6;
  local_58._padding_ = CONCAT44(uStack_64,param_9);
  local_58._padding_ = 0x100000000;
  local_58._padding_ = 0x100000000;
  local_58._62_2_ = 0;
  local_58.PixelFormat = PF_Unknown;
  local_58.UAVPixelFormat = PF_Unknown;
  TVar1 = CreateCommittedResource
                    (this,&local_58,param_2,param_1,param_3,param_4,param_5,(D3D12_CLEAR_VALUE *)0x0
                     ,param_7,param_8,true);
  return TVar1;
}

// CreateBuffer @ 145a5cfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

undefined4 __thiscall
FD3D12Adapter::CreateBuffer
          (FD3D12Adapter *this,D3D12_HEAP_TYPE param_1,FRHIGPUMask param_2,FRHIGPUMask param_3,
          ED3D12Access param_4,ED3D12ResourceStateMode param_5,ED3D12Access param_6,ulong64 param_7,
          FD3D12Resource **param_8,wchar_t *param_9,D3D12_RESOURCE_FLAGS param_10)

{
  undefined4 uVar1;
  undefined1 auStackY_108 [32];
  undefined4 uStack_a4;
  undefined4 uStack_74;
  FD3D12ResourceDesc local_68;
  D3D12_HEAP_PROPERTIES local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_28.CreationNodeMask = param_2.GPUMask;
  local_28.VisibleNodeMask = param_3.GPUMask;
  if (GVirtualMGPU != 0) {
    local_28.VisibleNodeMask = 1;
    local_28.CreationNodeMask = 1;
  }
  local_28.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  local_28.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  if (param_8 == (FD3D12Resource **)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    local_68._58_4_ = 0;
    local_68._62_2_ = 0;
    local_68.PixelFormat = PF_Unknown;
    local_68.UAVPixelFormat = PF_Unknown;
    local_68._padding_ = CONCAT44(uStack_a4,1);
    local_68._padding_ = 0x1000100000001;
    local_68._padding_ = 0;
    local_68._padding_ = param_7;
    local_68._padding_ = CONCAT44(uStack_74,param_10);
    local_68._padding_ = 0x100000000;
    local_68._padding_ = 0x100000000;
    local_28.Type = param_1;
    uVar1 = CreateCommittedResource
                      (this,&local_68,param_2,&local_28,param_4,param_5,param_6,
                       (D3D12_CLEAR_VALUE *)0x0,param_8,param_9,true);
  }
  return uVar1;
}

// CreateBuffer @ 145a5d0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

undefined4 __thiscall
FD3D12Adapter::CreateBuffer
          (FD3D12Adapter *this,D3D12_HEAP_TYPE param_1,FRHIGPUMask param_2,FRHIGPUMask param_3,
          ulong64 param_4,FD3D12Resource **param_5,wchar_t *param_6,D3D12_RESOURCE_FLAGS param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  ED3D12Access EVar4;
  undefined1 auStackY_128 [32];
  undefined4 uStack_c4;
  undefined4 uStack_94;
  FD3D12ResourceDesc local_88;
  D3D12_HEAP_PROPERTIES local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_48.CreationNodeMask = param_2.GPUMask;
  local_48.VisibleNodeMask = param_3.GPUMask;
  if (GVirtualMGPU != 0) {
    local_48.VisibleNodeMask = 1;
    local_48.CreationNodeMask = 1;
  }
  local_48.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  local_48.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  local_48.Type = param_1;
  if (param_1 == D3D12_HEAP_TYPE_DEFAULT || param_1 == D3D12_HEAP_TYPE_UPLOAD) {
    EVar4 = GenericRead;
  }
  else {
    if ((param_1 != D3D12_HEAP_TYPE_READBACK) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_READBACK",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x189,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    EVar4 = CopyDest;
  }
  if (param_5 == (FD3D12Resource **)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    local_88._padding_ = CONCAT44(uStack_c4,1);
    local_88._padding_ = 0x1000100000001;
    local_88._padding_ = 0;
    local_88._padding_ = param_4;
    local_88._padding_ = CONCAT44(uStack_94,param_7);
    local_88._padding_ = 0x100000000;
    local_88._padding_ = 0x100000000;
    local_88._62_2_ = 0;
    local_88.PixelFormat = PF_Unknown;
    local_88.UAVPixelFormat = PF_Unknown;
    local_88._58_4_ = 0;
    uVar3 = CreateCommittedResource
                      (this,&local_88,param_2,&local_48,EVar4,Default,Unknown,
                       (D3D12_CLEAR_VALUE *)0x0,param_5,param_6,true);
  }
  return uVar3;
}

// CreateCommittedResource @ 145a5d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

int __thiscall
FD3D12Adapter::CreateCommittedResource
          (FD3D12Adapter *this,FD3D12ResourceDesc *param_1,FRHIGPUMask param_2,
          D3D12_HEAP_PROPERTIES *param_3,ED3D12Access param_4,ED3D12ResourceStateMode param_5,
          ED3D12Access param_6,D3D12_CLEAR_VALUE *param_7,FD3D12Resource **param_8,wchar_t *param_9,
          bool param_10)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  FD3D12Resource *pFVar6;
  FD3D12Resource *pFVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStackY_138 [32];
  FLLMScope local_d4;
  D3D12_HEAP_PROPERTIES *local_d0;
  D3D12_HEAP_TYPE local_c8;
  D3D12_CLEAR_VALUE *local_c0;
  ID3D12Resource *local_b8;
  ID3D12Resource *local_b0;
  wchar_t *local_a8;
  FString local_a0;
  FD3D12ResourceDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c0 = param_7;
  local_a8 = param_9;
  if (param_8 == (FD3D12Resource **)0x0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    bVar9 = -1 < CpuChannel->Enabled;
    local_d0 = param_3;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId801,"CreateCommittedResource",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                 ,0x321);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId801);
    }
    FLLMScope::FLLMScope(&local_d4,GraphicsPlatform,false,None,Platform,true);
    pFVar7 = (FD3D12Resource *)0x0;
    local_b8 = (ID3D12Resource *)0x0;
    if ((this->bHeapNotZeroedSupported == false) ||
       (pFVar6 = (FD3D12Resource *)0x1000, (param_1->_padding_ & 3) != 0)) {
      pFVar6 = pFVar7;
    }
    local_88._padding_ = param_1->_padding_;
    local_88._padding_ = param_1->_padding_;
    local_88._padding_ = param_1->_padding_;
    local_88._padding_ = param_1->_padding_;
    local_88._padding_._0_4_ = (undefined4)param_1->_padding_;
    local_88._padding_._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_88._padding_._0_4_ = (undefined4)param_1->_padding_;
    local_88._padding_._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_88._padding_._0_4_ = (uint)param_1->_padding_;
    local_88._padding_._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_88.PixelFormat = param_1->PixelFormat;
    local_88.UAVPixelFormat = param_1->UAVPixelFormat;
    local_88._58_2_ = *(undefined2 *)&param_1->field_0x3a;
    local_88._60_4_ = *(undefined4 *)&param_1->field_0x3c;
    if (((param_1->_padding_ & 0x20) != 0) &&
       (pFVar6 = (FD3D12Resource *)(ulonglong)((uint)pFVar6 | 1), (int)param_1->_padding_ == 1)) {
      local_88._padding_._0_4_ = (uint)local_88._padding_ & 0xffffffdf;
    }
    local_88._padding_._0_4_ =
         (uint)local_88._padding_ | -(uint)((param_6 & (BVHWrite|BVHRead)) != Unknown) & 0x104;
    iVar4 = (**(code **)((longlong)*Barriers.Ptr + 0x30))(Barriers.Ptr,this,local_d0,pFVar6);
    local_c0 = (D3D12_CLEAR_VALUE *)CONCAT44(local_c0._4_4_,iVar4);
    if (iVar4 < 0) {
      if (3 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (param_10) {
        local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.Data.ArrayNum = 0;
        local_a0.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar4,"hr",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                   ,0x362,(this->RootDevice).Reference,&local_a0);
      }
    }
    else {
      pFVar6 = ::operator_new(0xb8);
      if (pFVar6 != (FD3D12Resource *)0x0) {
        local_c8 = local_d0->Type;
        uVar1 = 0;
        if (param_2.GPUMask != 0) {
          for (; (param_2.GPUMask >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        local_b0 = local_b8;
        local_d0 = (D3D12_HEAP_PROPERTIES *)CONCAT44(local_d0._4_4_,uVar1);
        uVar8 = 0x20;
        if (param_2.GPUMask != 0) {
          uVar8 = (ulonglong)uVar1;
        }
        if ((GNumExplicitGPUsForRendering <= (uint)uVar8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        pFVar7 = FD3D12Resource::FD3D12Resource
                           (pFVar6,(this->Devices).Elements[uVar8],param_2,local_b0,param_4,param_5,
                            param_6,&local_88,(FD3D12Heap *)0x0,local_c8);
        iVar4 = (int)local_c0;
      }
      *param_8 = pFVar7;
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      SetD3D12ResourceName(*param_8,local_a8);
      FD3D12Resource::StartTrackingForResidency(*param_8);
      TraceMemoryAllocation(this,*param_8);
    }
    if (local_b8 != (ID3D12Resource *)0x0) {
      (**(code **)((longlong)*local_b8 + 0x10))();
    }
    FLLMScope::~FLLMScope(&local_d4);
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return iVar4;
}

// CreatePlacedResource @ 145a5db90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a5dead) */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

int __thiscall
FD3D12Adapter::CreatePlacedResource
          (FD3D12Adapter *this,FD3D12ResourceDesc *param_1,FD3D12Heap *param_2,ulong64 param_3,
          ED3D12Access param_4,ED3D12ResourceStateMode param_5,ED3D12Access param_6,
          D3D12_CLEAR_VALUE *param_7,FD3D12Resource **param_8,wchar_t *param_9,bool param_10)

{
  ID3D12Heap *pIVar1;
  FD3D12Device *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  FD3D12Resource *this_00;
  FD3D12Resource *pFVar7;
  undefined1 auStackY_168 [32];
  FString local_f8;
  ulong64 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong64 local_c8;
  undefined8 uStack_c0;
  undefined1 local_88 [8];
  D3D12_HEAP_TYPE local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_8 == (FD3D12Resource **)0x0) {
    iVar5 = -0x7fffbffd;
  }
  else {
    pFVar7 = (FD3D12Resource *)0x0;
    pIVar1 = (param_2->Heap).Reference;
    iVar5 = (**(code **)((longlong)*Barriers.Ptr + 0x40))(Barriers.Ptr,this,pIVar1,param_3);
    if (iVar5 < 0) {
      if (3 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (param_10) {
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar5,"hr",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                   ,0x40d,(this->RootDevice).Reference,&local_f8);
      }
    }
    else {
      if ((param_2->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      pFVar2 = (FD3D12Device *)param_2->_padding_;
      (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_88);
      this_00 = ::operator_new(0xb8);
      if (this_00 != (FD3D12Resource *)0x0) {
        pFVar7 = FD3D12Resource::FD3D12Resource
                           (this_00,pFVar2,(FRHIGPUMask)*(uint *)&pFVar2->field_0x4,
                            (ID3D12Resource *)0x0,param_4,param_5,param_6,param_1,param_2,local_80);
      }
      *param_8 = pFVar7;
      if (this->bTrackAllAllocation != false) {
        local_e8 = (param_2->HeapDesc).SizeInBytes;
        uStack_e0._0_4_ = (param_2->HeapDesc).Properties.Type;
        uStack_e0._4_4_ = (param_2->HeapDesc).Properties.CPUPageProperty;
        local_d8._0_4_ = (param_2->HeapDesc).Properties.MemoryPoolPreference;
        local_d8._4_4_ = (param_2->HeapDesc).Properties.CreationNodeMask;
        uStack_d0 = *(undefined8 *)&(param_2->HeapDesc).Properties.VisibleNodeMask;
        local_c8 = (param_2->HeapDesc).Alignment;
        uStack_c0 = *(undefined8 *)&(param_2->HeapDesc).Flags;
        if ((param_2->HeapDesc).Properties.Type == D3D12_HEAP_TYPE_DEFAULT) {
          if ((int)param_1->_padding_ == 1) {
            if ((pFVar7->GPUVirtualAddress == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(*ppOutResource)->GetGPUVirtualAddress() != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                   ,0x3f6,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return uVar6;
            }
            if (((*param_8)->GPUVirtualAddress != param_2->GPUVirtualAddress + param_3) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(*ppOutResource)->GetGPUVirtualAddress() == BackingHeap->GetGPUVirtualAddress() + HeapOffset"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                   ,0x3f7,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return uVar6;
            }
          }
          else {
            if ((param_2->GPUVirtualAddress == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("BackingHeap->GetGPUVirtualAddress() != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                   ,0x3f1,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return uVar6;
            }
            (*param_8)->GPUVirtualAddress = param_2->GPUVirtualAddress + param_3;
          }
        }
      }
      if (param_2->bIsTransient == false) {
        TraceMemoryAllocation(this,*param_8);
      }
      SetD3D12ResourceName(*param_8,param_9);
      LOCK();
      *(int *)&(*param_8)->_padding_ = (int)(*param_8)->_padding_ + 1;
      UNLOCK();
    }
  }
  return iVar5;
}

// CreateReservedResource @ 145a5e0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

int __thiscall
FD3D12Adapter::CreateReservedResource
          (FD3D12Adapter *this,FD3D12ResourceDesc *param_1,FRHIGPUMask param_2,ED3D12Access param_3,
          ED3D12ResourceStateMode param_4,ED3D12Access param_5,D3D12_CLEAR_VALUE *param_6,
          FD3D12Resource **param_7,wchar_t *param_8,bool param_9)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  FD3D12Resource *this_00;
  FD3D12Resource *pFVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStackY_118 [32];
  FLLMScope local_c4;
  ID3D12Resource *local_c0;
  uint local_b8;
  ID3D12Resource *local_b0;
  FD3D12Adapter *local_a8;
  wchar_t *local_a0;
  FString local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_a0 = param_8;
  if (param_7 == (FD3D12Resource **)0x0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    bVar7 = -1 < CpuChannel->Enabled;
    local_a8 = this;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId889,"CreateReservedResource",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                 ,0x379);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId889);
    }
    FLLMScope::FLLMScope(&local_c4,GraphicsPlatform,false,None,Platform,true);
    local_88._16_8_ = param_1->_padding_;
    local_88._24_8_ = param_1->_padding_;
    pFVar5 = (FD3D12Resource *)0x0;
    local_88._0_8_ = param_1->_padding_;
    local_88._8_8_ = param_1->_padding_;
    local_c0 = (ID3D12Resource *)0x0;
    local_88._48_8_ = param_1->_padding_;
    local_88[0x38] = param_1->PixelFormat;
    local_88[0x39] = param_1->UAVPixelFormat;
    local_88._58_6_ = *(undefined6 *)&param_1->field_0x3a;
    local_88._32_8_ = param_1->_padding_;
    local_88._40_8_ = param_1->_padding_;
    if ((((uint)local_88._58_6_ & 2) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalDesc.bReservedResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                           ,0x382,
                           L"FD3D12ResourceDesc is expected to be initialized as a reserved resource. See FD3D12DynamicRHI::GetResourceDesc()."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (((local_88._0_4_ - 2 < 3) && (local_88._44_4_ != 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalDesc.Layout == D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                           ,0x38a,
                           L"Reserved textures are expected to have layout %d (64KB_UNDEFINED_SWIZZLE), but have %d. See FD3D12DynamicRHI::GetResourceDesc()."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (((local_88._8_8_ & 0xfffffffffffeffff) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalDesc.Alignment == 0 || LocalDesc.Alignment == 65536",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                           ,0x38f,
                           L"Reserved resources must use either 64KB alignment or 0 (unspecified/default), but have %d. See FD3D12DynamicRHI::GetResourceDesc()."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_88._48_4_ = local_88._48_4_ | -(uint)((param_5 & (BVHWrite|BVHRead)) != Unknown) & 0x104;
    iVar4 = (**(code **)((longlong)*Barriers.Ptr + 0x38))(Barriers.Ptr,this,local_88,param_3);
    if (iVar4 < 0) {
      if (3 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (param_9) {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar4,"hr",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                   ,0x3b6,(this->RootDevice).Reference,&local_98);
      }
    }
    else {
      this_00 = ::operator_new(0xb8);
      if (this_00 != (FD3D12Resource *)0x0) {
        local_b8 = 0;
        if (param_2.GPUMask != 0) {
          for (; (param_2.GPUMask >> local_b8 & 1) == 0; local_b8 = local_b8 + 1) {
          }
        }
        local_b0 = local_c0;
        uVar6 = 0x20;
        if (param_2.GPUMask != 0) {
          uVar6 = (ulonglong)local_b8;
        }
        if ((GNumExplicitGPUsForRendering <= (uint)uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        pFVar5 = FD3D12Resource::FD3D12Resource
                           (this_00,(local_a8->Devices).Elements[uVar6],param_2,local_b0,param_3,
                            param_4,param_5,(FD3D12ResourceDesc *)local_88,(FD3D12Heap *)0x0,
                            D3D12_HEAP_TYPE_DEFAULT);
      }
      *param_7 = pFVar5;
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
      SetD3D12ResourceName(*param_7,local_a0);
    }
    if (local_c0 != (ID3D12Resource *)0x0) {
      (**(code **)((longlong)*local_c0 + 0x10))();
    }
    FLLMScope::~FLLMScope(&local_c4);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return iVar4;
}

// TraceMemoryAllocation @ 145a7f690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Adapter::TraceMemoryAllocation(FD3D12Adapter *this,FD3D12Resource *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStackY_58 [32];
  D3D12_RESOURCE_ALLOCATION_INFO local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (-1 < MemAllocChannel->Enabled) {
    if (param_1->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FD3D12Device::GetResourceAllocationInfo
              ((FD3D12Device *)param_1->_padding_,&local_28,&param_1->Desc);
    if ((this->bTrackAllAllocation != false) && (param_1->GPUVirtualAddress != 0)) {
      MemoryTrace_Alloc(param_1->GPUVirtualAddress,local_28.SizeInBytes,(uint)local_28.Alignment,1,0
                       );
    }
  }
  return;
}

// GetGlobalRayTracingRootSignature @ 145aa9770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetGlobalRayTracingRootSignature
          (FD3D12Adapter *this,FRHIShaderBindingLayout *param_1)

{
  ForAnyElementType FVar1;
  byte bVar2;
  FD3D12RootSignature *pFVar3;
  longlong lVar4;
  FRHIUniformBufferShaderBindingLayout *pFVar5;
  undefined1 auStack_138 [32];
  FD3D12QuantizedBoundShaderState local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.ShaderBindingLayout._5_2_ = 0;
  local_118.ShaderBindingLayout._7_1_ = 0;
  local_118.ShaderBindingLayout.NumUniformBufferEntries = 0;
  local_118.ShaderBindingLayout._padding_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7]._20_4_ = 0;
  local_118.ShaderBindingLayout.Hash = 0;
  local_118.ShaderBindingLayout.Flags = None;
  memset(&local_118.ShaderBindingLayout.UniformBufferEntries,0,0xc0);
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayMax = 0;
  local_118.RegisterCounts.Elements[4].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[4].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[4].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[4].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[5].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[5].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[5].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[5].UnorderedAccessCount = '\0';
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
  local_118.RegisterCounts.Elements[0].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[0].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[0].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[0].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[1].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[1].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[1].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[1].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[2].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[2].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[2].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[2].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[3].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[3].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[3].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[3].UnorderedAccessCount = '\0';
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
  local_118.RootSignatureType = RS_Raster;
  local_118.field3_0xec = (FD3D12QuantizedBoundShaderState_u_236)0x0;
  local_118._237_3_ = 0;
  FRHIShaderBindingLayout::operator=(&local_118.ShaderBindingLayout,param_1);
  local_118.RegisterCounts.Elements[5].SamplerCount = ' ';
  local_118.RegisterCounts.Elements[5].ConstantBufferCount = '\x10';
  local_118.RegisterCounts.Elements[5].ShaderResourceCount = '@';
  local_118.RegisterCounts.Elements[5].UnorderedAccessCount = '\x10';
  bVar2 = 4;
  if ((this->BindlessDescriptorAllocator).ResourceAllocator != (FRHIHeapDescriptorAllocator *)0x0) {
    bVar2 = 0xc;
  }
  local_118.field3_0xec.Flags =
       -((this->BindlessDescriptorAllocator).SamplerAllocator != (FRHIHeapDescriptorAllocator *)0x0)
       & 0x10U | bVar2 | local_118.field3_0xec.Flags & 0xe7;
  local_118.RootSignatureType = RS_RayTracingGlobal;
  pFVar3 = FD3D12RootSignatureManager::GetRootSignature(&this->RootSignatureManager,&local_118);
  pFVar5 = (FRHIUniformBufferShaderBindingLayout *)&local_118.RegisterCounts;
  lVar4 = 8;
  do {
    FVar1.Data = pFVar5[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
  } while (lVar4 != 0);
  return pFVar3;
}

// GetGlobalWorkGraphRootSignature @ 145aa9910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetGlobalWorkGraphRootSignature(FD3D12Adapter *this,FRHIShaderBindingLayout *param_1)

{
  ForAnyElementType FVar1;
  byte bVar2;
  FD3D12RootSignature *pFVar3;
  longlong lVar4;
  FRHIUniformBufferShaderBindingLayout *pFVar5;
  undefined1 auStack_138 [32];
  FD3D12QuantizedBoundShaderState local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.ShaderBindingLayout._5_2_ = 0;
  local_118.ShaderBindingLayout._7_1_ = 0;
  local_118.ShaderBindingLayout.NumUniformBufferEntries = 0;
  local_118.ShaderBindingLayout._padding_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7]._20_4_ = 0;
  local_118.ShaderBindingLayout.Hash = 0;
  local_118.ShaderBindingLayout.Flags = None;
  memset(&local_118.ShaderBindingLayout.UniformBufferEntries,0,0xc0);
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayMax = 0;
  local_118.RegisterCounts.Elements[4].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[4].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[4].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[4].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[5].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[5].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[5].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[5].UnorderedAccessCount = '\0';
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
  local_118.RegisterCounts.Elements[0].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[0].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[0].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[0].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[1].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[1].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[1].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[1].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[2].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[2].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[2].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[2].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[3].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[3].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[3].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[3].UnorderedAccessCount = '\0';
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
  local_118.RootSignatureType = RS_Raster;
  local_118.field3_0xec = (FD3D12QuantizedBoundShaderState_u_236)0x0;
  local_118._237_3_ = 0;
  FRHIShaderBindingLayout::operator=(&local_118.ShaderBindingLayout,param_1);
  local_118.RegisterCounts.Elements[5].SamplerCount = ' ';
  local_118.RegisterCounts.Elements[5].ConstantBufferCount = '\x10';
  local_118.RegisterCounts.Elements[5].ShaderResourceCount = '@';
  local_118.RegisterCounts.Elements[5].UnorderedAccessCount = '\x10';
  bVar2 = 4;
  if ((this->BindlessDescriptorAllocator).ResourceAllocator != (FRHIHeapDescriptorAllocator *)0x0) {
    bVar2 = 0xc;
  }
  local_118.field3_0xec.Flags =
       -((this->BindlessDescriptorAllocator).SamplerAllocator != (FRHIHeapDescriptorAllocator *)0x0)
       & 0x10U | bVar2 | local_118.field3_0xec.Flags & 0xe7;
  local_118.RootSignatureType = RS_WorkGraphGlobal;
  pFVar3 = FD3D12RootSignatureManager::GetRootSignature(&this->RootSignatureManager,&local_118);
  pFVar5 = (FRHIUniformBufferShaderBindingLayout *)&local_118.RegisterCounts;
  lVar4 = 8;
  do {
    FVar1.Data = pFVar5[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
  } while (lVar4 != 0);
  return pFVar3;
}

// GetLocalRootSignature @ 145aa9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetLocalRootSignature(FD3D12Adapter *this,FD3D12RayTracingShader *param_1)

{
  char cVar1;
  ForAnyElementType FVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  longlong *plVar6;
  FD3D12RootSignature *pFVar7;
  FD3D12QuantizedBoundShaderState_u_236 FVar8;
  byte bVar9;
  longlong lVar10;
  FRHIUniformBufferShaderBindingLayout *pFVar11;
  undefined1 auStack_128 [32];
  FD3D12QuantizedBoundShaderState local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108.ShaderBindingLayout._5_2_ = 0;
  local_108.ShaderBindingLayout._7_1_ = 0;
  local_108.ShaderBindingLayout.NumUniformBufferEntries = 0;
  local_108.ShaderBindingLayout._padding_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[0]._20_4_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[1]._20_4_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[2]._20_4_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[3]._20_4_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[4]._20_4_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[5]._20_4_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[6]._20_4_ = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[7]._20_4_ = 0;
  local_108.ShaderBindingLayout.Hash = 0;
  local_108.ShaderBindingLayout.Flags = None;
  memset(&local_108.ShaderBindingLayout.UniformBufferEntries,0,0xc0);
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayNum = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayMax = 0;
  local_108.ShaderBindingLayout.UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
  local_108.RegisterCounts.Elements[4].SamplerCount = '\0';
  local_108.RegisterCounts.Elements[4].ConstantBufferCount = '\0';
  local_108.RegisterCounts.Elements[4].ShaderResourceCount = '\0';
  local_108.RegisterCounts.Elements[4].UnorderedAccessCount = '\0';
  local_108.RegisterCounts.Elements[5].SamplerCount = '\0';
  local_108.RegisterCounts.Elements[5].ConstantBufferCount = '\0';
  local_108.RegisterCounts.Elements[5].ShaderResourceCount = '\0';
  local_108.RegisterCounts.Elements[5].UnorderedAccessCount = '\0';
  local_108.RootSignatureType = RS_Raster;
  local_108.field3_0xec = (FD3D12QuantizedBoundShaderState_u_236)0x0;
  local_108._237_3_ = 0;
  local_108.RegisterCounts.Elements[0].SamplerCount = '\0';
  local_108.RegisterCounts.Elements[0].ConstantBufferCount = '\0';
  local_108.RegisterCounts.Elements[0].ShaderResourceCount = '\0';
  local_108.RegisterCounts.Elements[0].UnorderedAccessCount = '\0';
  local_108.RegisterCounts.Elements[1].SamplerCount = '\0';
  local_108.RegisterCounts.Elements[1].ConstantBufferCount = '\0';
  local_108.RegisterCounts.Elements[1].ShaderResourceCount = '\0';
  local_108.RegisterCounts.Elements[1].UnorderedAccessCount = '\0';
  local_108.RegisterCounts.Elements[2].SamplerCount = '\0';
  local_108.RegisterCounts.Elements[2].ConstantBufferCount = '\0';
  local_108.RegisterCounts.Elements[2].ShaderResourceCount = '\0';
  local_108.RegisterCounts.Elements[2].UnorderedAccessCount = '\0';
  local_108.RegisterCounts.Elements[3].SamplerCount = '\0';
  local_108.RegisterCounts.Elements[3].ConstantBufferCount = '\0';
  local_108.RegisterCounts.Elements[3].ShaderResourceCount = '\0';
  local_108.RegisterCounts.Elements[3].UnorderedAccessCount = '\0';
  if (cVar1 == '\x06') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                       ,0x64f,L"");
    if (bVar4) goto code_r0x000145aaa159;
  }
  else if (((cVar1 == '\a') || (cVar1 == '\b')) || (cVar1 == '\t')) {
    bVar5 = *(byte *)((longlong)&param_1->_padding_ + 1);
    local_108.RootSignatureType = RS_RayTracingLocal;
    local_108.field3_0xec = (FD3D12QuantizedBoundShaderState_u_236)0x0;
    local_108._237_3_ = 0;
    local_108.RegisterCounts.Elements._16_8_ =
         (ulonglong)
         CONCAT31(CONCAT12(*(undefined1 *)((longlong)&param_1->_padding_ + 4),
                           CONCAT11(*(undefined1 *)((longlong)&param_1->_padding_ + 2),
                                    *(undefined1 *)((longlong)&param_1->_padding_ + 3))),bVar5) <<
         0x20;
    if ((0x20 < bVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("QBSSRegisterCounts.SamplerCount <= 32",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                           ,0x660,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12RootSignature *)(*pcVar3)();
      return pFVar7;
    }
    if ((0x40 < local_108.RegisterCounts.Elements[5].ShaderResourceCount) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("QBSSRegisterCounts.ShaderResourceCount <= 64",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                           ,0x661,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12RootSignature *)(*pcVar3)();
      return pFVar7;
    }
    if ((0x10 < local_108.RegisterCounts.Elements[5].ConstantBufferCount) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("QBSSRegisterCounts.ConstantBufferCount <= 16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                           ,0x662,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12RootSignature *)(*pcVar3)();
      return pFVar7;
    }
    if ((0x10 < local_108.RegisterCounts.Elements[5].UnorderedAccessCount) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("QBSSRegisterCounts.UnorderedAccessCount <= 16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                           ,0x663,L""), bVar4)) goto code_r0x000145aaa159;
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                       ,0x668,L"");
    if (bVar4) {
code_r0x000145aaa159:
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12RootSignature *)(*pcVar3)();
      return pFVar7;
    }
  }
  plVar6 = &param_1->_padding_;
  if (param_1 == (FD3D12RayTracingShader *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    bVar9 = (byte)plVar6[2] << 2;
    bVar5 = (bVar9 | local_108.field3_0xec.Flags & 0xfb) & 8 ^
            (((byte)plVar6[2] >> 4 | local_108.field3_0xec.Flags) & 4 |
            local_108.field3_0xec.Flags & 0xf3);
    FVar8.Flags = (bVar5 | bVar9) & 0x10 ^ bVar5 & 0xef;
    local_108.field3_0xec.Flags = FVar8.Flags;
    if (GRHIGlobals.SupportsShaderRootConstants != false) {
      local_108.field3_0xec.Flags = (FVar8.Flags | bVar9) & 0x20 ^ FVar8.Flags & 0xdf;
    }
  }
  pFVar7 = FD3D12RootSignatureManager::GetRootSignature(&this->RootSignatureManager,&local_108);
  pFVar11 = (FRHIUniformBufferShaderBindingLayout *)&local_108.RegisterCounts;
  lVar10 = 8;
  do {
    FVar2.Data = pFVar11[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar11 = pFVar11 + -1;
    lVar10 = lVar10 + -1;
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
  } while (lVar10 != 0);
  return pFVar7;
}

// GetRootSignature @ 145aaa480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetRootSignature(FD3D12Adapter *this,FBoundShaderStateInput *param_1)

{
  undefined8 *puVar1;
  D3D12_RESOURCE_BINDING_TIER DVar2;
  code *pcVar3;
  bool bVar4;
  FD3D12RootSignature *pFVar5;
  FRHIVertexShader *pFVar6;
  longlong lVar7;
  FRHIVertexShader **ppFVar8;
  undefined8 *puVar9;
  FRHIVertexShader *pFVar10;
  undefined1 auStackY_1a8 [32];
  FRHIVertexShader *local_178 [2];
  FRHIMeshShader *local_168;
  FRHIMeshShader *local_160;
  FRHIAmplificationShader *local_158;
  FRHIAmplificationShader *local_150;
  FRHIPixelShader *local_148;
  FRHIPixelShader *local_140;
  FRHIGeometryShader *local_138;
  FRHIGeometryShader *local_130;
  FRHIUniformBufferShaderBindingLayout_u_16 local_128;
  undefined1 local_124;
  undefined2 local_123;
  undefined1 local_121;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_123 = 0;
  pFVar10 = (FRHIVertexShader *)0x0;
  local_121 = 0;
  local_128.Flags = 0;
  local_120 = 0;
  local_104 = 0;
  local_ec = 0;
  local_d4 = 0;
  local_bc = 0;
  local_a4 = 0;
  local_8c = 0;
  local_74 = 0;
  local_5c = 0;
  local_124 = 0;
  memset(&local_118,0,0xc0);
  DVar2 = (this->Desc).ResourceBindingTier;
  local_48 = 0;
  local_40 = (ulonglong)(param_1->VertexDeclarationRHI != (FRHIVertexDeclaration *)0x0) << 0x20;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  pFVar6 = param_1->VertexShaderRHI + 1;
  if (param_1->VertexShaderRHI == (FRHIVertexShader *)0x0) {
    pFVar6 = pFVar10;
  }
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  QuantizeBoundShaderStateCommon
            ((FD3D12QuantizedBoundShaderState *)&local_128._s_0,(FD3D12ShaderData *)pFVar6,DVar2,
             SV_Vertex,true);
  pFVar6 = (FRHIVertexShader *)(param_1->MeshShaderRHI + 1);
  if (param_1->MeshShaderRHI == (FRHIMeshShader *)0x0) {
    pFVar6 = pFVar10;
  }
  QuantizeBoundShaderStateCommon
            ((FD3D12QuantizedBoundShaderState *)&local_128._s_0,(FD3D12ShaderData *)pFVar6,DVar2,
             SV_Mesh,false);
  pFVar6 = (FRHIVertexShader *)(param_1->AmplificationShaderRHI + 1);
  if (param_1->AmplificationShaderRHI == (FRHIAmplificationShader *)0x0) {
    pFVar6 = pFVar10;
  }
  QuantizeBoundShaderStateCommon
            ((FD3D12QuantizedBoundShaderState *)&local_128._s_0,(FD3D12ShaderData *)pFVar6,DVar2,
             SV_Amplification,false);
  pFVar6 = (FRHIVertexShader *)(param_1->PixelShaderRHI + 1);
  if (param_1->PixelShaderRHI == (FRHIPixelShader *)0x0) {
    pFVar6 = pFVar10;
  }
  QuantizeBoundShaderStateCommon
            ((FD3D12QuantizedBoundShaderState *)&local_128._s_0,(FD3D12ShaderData *)pFVar6,DVar2,
             SV_Pixel,true);
  pFVar6 = (FRHIVertexShader *)(param_1->GeometryShaderRHI + 1);
  if (param_1->GeometryShaderRHI == (FRHIGeometryShader *)0x0) {
    pFVar6 = pFVar10;
  }
  QuantizeBoundShaderStateCommon
            ((FD3D12QuantizedBoundShaderState *)&local_128._s_0,(FD3D12ShaderData *)pFVar6,DVar2,
             SV_Geometry,false);
  if (((local_40 & 0x800000000) != 0) || ((local_40 & 0x1000000000) != 0)) {
    local_178[1] = param_1->VertexShaderRHI;
    if (local_178[1] == (FRHIVertexShader *)0x0) {
      local_178[0] = (FRHIVertexShader *)0x0;
    }
    else {
      local_178[0] = local_178[1] + 1;
    }
    local_160 = param_1->MeshShaderRHI;
    if (local_160 == (FRHIMeshShader *)0x0) {
      local_168 = (FRHIMeshShader *)0x0;
    }
    else {
      local_168 = local_160 + 1;
    }
    local_150 = param_1->AmplificationShaderRHI;
    if (local_150 == (FRHIAmplificationShader *)0x0) {
      local_158 = (FRHIAmplificationShader *)0x0;
    }
    else {
      local_158 = local_150 + 1;
    }
    local_140 = param_1->PixelShaderRHI;
    if (local_140 == (FRHIPixelShader *)0x0) {
      local_148 = (FRHIPixelShader *)0x0;
    }
    else {
      local_148 = local_140 + 1;
    }
    local_130 = param_1->GeometryShaderRHI;
    if (local_130 == (FRHIGeometryShader *)0x0) {
      local_138 = (FRHIGeometryShader *)0x0;
    }
    else {
      local_138 = local_130 + 1;
    }
    ppFVar8 = local_178;
    do {
      if (ppFVar8[1] != (FRHIVertexShader *)0x0) {
        if ((local_40 & 0x800000000) != 0) {
          pFVar6 = *ppFVar8;
          if (pFVar6 == (FRHIVertexShader *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1781711167782124326>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                               ,0x4da,"ShaderData");
          }
          else {
            if (((pFVar6->field_0x10 & 2) != 0) ||
               ((uint)(byte)pFVar6->field_0x14 + (uint)(byte)pFVar6->field_0x12 == 0))
            goto LAB_145aaa7c2;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCompatibleWithBindlessResources(ShaderPair.Data)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                               ,0x57f,
                               L"Mismatched dynamic resource usage. %s doesn\'t support binding with stages that use dynamic resources"
                              );
          }
          if (bVar4 != false) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FD3D12RootSignature *)(*pcVar3)();
            return pFVar5;
          }
        }
LAB_145aaa7c2:
        if ((local_40 & 0x1000000000) != 0) {
          pFVar6 = *ppFVar8;
          if (pFVar6 == (FRHIVertexShader *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1781711167782124336>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                               ,0x4d0,"ShaderData");
            if (bVar4) {
code_r0x000145aaa860:
              pcVar3 = (code *)swi(3);
              pFVar5 = (FD3D12RootSignature *)(*pcVar3)();
              return pFVar5;
            }
          }
          else if ((((pFVar6->field_0x10 & 4) == 0) && (pFVar6->field_0x11 != '\0')) &&
                  (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsCompatibleWithBindlessSamplers(ShaderPair.Data)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                                      ,0x583,
                                      L"Mismatched dynamic resource usage. %s doesn\'t support binding with stages that use dynamic samplers"
                                     ), bVar4)) goto code_r0x000145aaa860;
        }
      }
      ppFVar8 = ppFVar8 + 2;
    } while ((FRHIUniformBufferShaderBindingLayout_u_16 *)ppFVar8 != &local_128);
  }
  pFVar5 = FD3D12RootSignatureManager::GetRootSignature
                     (&this->RootSignatureManager,(FD3D12QuantizedBoundShaderState *)&local_128._s_0
                     );
  puVar9 = &local_58;
  lVar7 = 8;
  do {
    puVar1 = puVar9 + -3;
    puVar9 = puVar9 + -3;
    lVar7 = lVar7 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar7 != 0);
  return pFVar5;
}

// GetRootSignature @ 145aaa8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetRootSignature(FD3D12Adapter *this,FD3D12ComputeShader *param_1)

{
  int *piVar1;
  ForAnyElementType FVar2;
  code *pcVar3;
  bool bVar4;
  FD3D12RootSignature *pFVar5;
  byte bVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  FRHIUniformBufferShaderBindingLayout *pFVar10;
  byte bVar11;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  FD3D12QuantizedBoundShaderState local_128;
  ulonglong local_38;
  
  pFVar10 = (FRHIUniformBufferShaderBindingLayout *)&local_128.RegisterCounts;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_1 == (FD3D12ComputeShader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                       ,0x5ae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FD3D12RootSignature *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_128.ShaderBindingLayout._5_2_ = 0;
  local_128.ShaderBindingLayout._7_1_ = 0;
  local_128.ShaderBindingLayout.NumUniformBufferEntries = 0;
  local_128.ShaderBindingLayout._padding_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0]._20_4_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1]._20_4_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2]._20_4_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3]._20_4_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4]._20_4_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5]._20_4_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6]._20_4_ = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7]._20_4_ = 0;
  local_128.ShaderBindingLayout.Hash = 0;
  local_128.ShaderBindingLayout.Flags = None;
  memset(&local_128.ShaderBindingLayout.UniformBufferEntries,0,0xc0);
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
  plVar9 = &param_1->_padding_;
  if (param_1 == (FD3D12ComputeShader *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayNum = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayMax = 0;
  local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
  local_128.RegisterCounts.Elements[4].SamplerCount = '\0';
  local_128.RegisterCounts.Elements[4].ConstantBufferCount = '\0';
  local_128.RegisterCounts.Elements[4].ShaderResourceCount = '\0';
  local_128.RegisterCounts.Elements[4].UnorderedAccessCount = '\0';
  local_128.RegisterCounts.Elements[5].SamplerCount = '\0';
  local_128.RegisterCounts.Elements[5].ConstantBufferCount = '\0';
  local_128.RegisterCounts.Elements[5].ShaderResourceCount = '\0';
  local_128.RegisterCounts.Elements[5].UnorderedAccessCount = '\0';
  local_128.RootSignatureType = RS_Raster;
  local_128.field3_0xec = (FD3D12QuantizedBoundShaderState_u_236)0x0;
  local_128._237_3_ = 0;
  local_128.RegisterCounts.Elements[0].SamplerCount = '\0';
  local_128.RegisterCounts.Elements[0].ConstantBufferCount = '\0';
  local_128.RegisterCounts.Elements[0].ShaderResourceCount = '\0';
  local_128.RegisterCounts.Elements[0].UnorderedAccessCount = '\0';
  local_128.RegisterCounts.Elements[1].SamplerCount = '\0';
  local_128.RegisterCounts.Elements[1].ConstantBufferCount = '\0';
  local_128.RegisterCounts.Elements[1].ShaderResourceCount = '\0';
  local_128.RegisterCounts.Elements[1].UnorderedAccessCount = '\0';
  local_128.RegisterCounts.Elements[2].SamplerCount = '\0';
  local_128.RegisterCounts.Elements[2].ConstantBufferCount = '\0';
  local_128.RegisterCounts.Elements[2].ShaderResourceCount = '\0';
  local_128.RegisterCounts.Elements[2].UnorderedAccessCount = '\0';
  local_128.RegisterCounts.Elements[3].SamplerCount = '\0';
  local_128.RegisterCounts.Elements[3].ConstantBufferCount = '\0';
  local_128.RegisterCounts.Elements[3].ShaderResourceCount = '\0';
  local_128.RegisterCounts.Elements[3].UnorderedAccessCount = '\0';
  if (plVar9 != (longlong *)0x0) {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
              ((this->Desc).ResourceBindingTier,(FShaderCodePackedResourceCounts *)(plVar9 + 2),
               local_128.RegisterCounts.Elements + 5,true);
    lVar8 = plVar9[5];
    piVar7 = (int *)plVar9[4];
    piVar1 = piVar7 + (longlong)(int)lVar8 * 3;
    while( true ) {
      if ((int)plVar9[5] != (int)lVar8) {
        local_138[0] = 0;
        `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_138);
      }
      if (piVar7 == piVar1) {
        bVar6 = 0;
        goto LAB_145aaaa7d;
      }
      if (*piVar7 == 0x1002) break;
      piVar7 = piVar7 + 3;
    }
    bVar6 = 2;
LAB_145aaaa7d:
    bVar11 = (byte)plVar9[2] << 2;
    bVar6 = ((byte)plVar9[2] >> 4 | local_128.field3_0xec.Flags & 0xfd) & 4 ^
            (bVar6 | local_128.field3_0xec.Flags & 2 | local_128.field3_0xec.Flags & 0xf9);
    bVar6 = (bVar6 | bVar11) & 8 ^ bVar6 & 0xf7;
    bVar6 = (bVar6 | bVar11) & 0x10 ^ bVar6 & 0xef;
    if (GRHIGlobals.SupportsShaderRootConstants != false) {
      bVar6 = (bVar6 | bVar11) & 0x20 ^ bVar6 & 0xdf;
    }
    local_128.field3_0xec.Flags = bVar6;
    if ((bVar6 & 1) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("QBSS.bAllowIAInputLayout == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                         ,0x5b7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FD3D12RootSignature *)(*pcVar3)();
        return pFVar5;
      }
    }
  }
  pFVar5 = FD3D12RootSignatureManager::GetRootSignature(&this->RootSignatureManager,&local_128);
  lVar8 = 8;
  do {
    FVar2.Data = pFVar10[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar10 = pFVar10 + -1;
    lVar8 = lVar8 + -1;
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
  } while (lVar8 != 0);
  return pFVar5;
}

// GetRootSignature @ 145aaab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
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

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetRootSignature(FD3D12Adapter *this,FD3D12WorkGraphShader *param_1)

{
  int *piVar1;
  ForAnyElementType FVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined3 uVar5;
  bool bVar6;
  FD3D12RootSignature *pFVar7;
  byte bVar8;
  FD3D12QuantizedBoundShaderState_u_236 FVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  FRHIUniformBufferShaderBindingLayout *pFVar13;
  byte bVar14;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  FShaderCodePackedResourceCounts *local_140;
  FD3D12QuantizedBoundShaderState local_138;
  ulonglong local_48;
  
  pFVar13 = (FRHIUniformBufferShaderBindingLayout *)&local_138.RegisterCounts;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_1 == (FD3D12WorkGraphShader *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkGraphShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                       ,0x5e0,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12RootSignature *)(*pcVar3)();
      return pFVar7;
    }
  }
  local_138.ShaderBindingLayout._5_2_ = 0;
  local_138.ShaderBindingLayout._7_1_ = 0;
  local_138.ShaderBindingLayout.NumUniformBufferEntries = 0;
  local_138.ShaderBindingLayout._padding_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0]._20_4_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1]._20_4_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2]._20_4_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3]._20_4_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4]._20_4_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5]._20_4_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6]._20_4_ = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7]._20_4_ = 0;
  local_138.ShaderBindingLayout.Hash = 0;
  local_138.ShaderBindingLayout.Flags = None;
  memset(&local_138.ShaderBindingLayout.UniformBufferEntries,0,0xc0);
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_138.RegisterCounts.Elements[4].SamplerCount = '\0';
  local_138.RegisterCounts.Elements[4].ConstantBufferCount = '\0';
  local_138.RegisterCounts.Elements[4].ShaderResourceCount = '\0';
  local_138.RegisterCounts.Elements[4].UnorderedAccessCount = '\0';
  local_138.RegisterCounts.Elements[5].SamplerCount = '\0';
  local_138.RegisterCounts.Elements[5].ConstantBufferCount = '\0';
  local_138.RegisterCounts.Elements[5].ShaderResourceCount = '\0';
  local_138.RegisterCounts.Elements[5].UnorderedAccessCount = '\0';
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayMax = 0;
  plVar11 = &param_1->_padding_;
  if (param_1 == (FD3D12WorkGraphShader *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayMax = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_140 = (FShaderCodePackedResourceCounts *)(plVar11 + 2);
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayMax = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayMax = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayMax = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayMax = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayMax = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayNum = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayMax = 0;
  local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
  local_138.RootSignatureType = RS_Raster;
  local_138.field3_0xec = (FD3D12QuantizedBoundShaderState_u_236)0x0;
  local_138._237_3_ = 0;
  uVar4 = local_138._232_8_;
  local_138.RegisterCounts.Elements[0].SamplerCount = '\0';
  local_138.RegisterCounts.Elements[0].ConstantBufferCount = '\0';
  local_138.RegisterCounts.Elements[0].ShaderResourceCount = '\0';
  local_138.RegisterCounts.Elements[0].UnorderedAccessCount = '\0';
  local_138.RegisterCounts.Elements[1].SamplerCount = '\0';
  local_138.RegisterCounts.Elements[1].ConstantBufferCount = '\0';
  local_138.RegisterCounts.Elements[1].ShaderResourceCount = '\0';
  local_138.RegisterCounts.Elements[1].UnorderedAccessCount = '\0';
  local_138.RegisterCounts.Elements[2].SamplerCount = '\0';
  local_138.RegisterCounts.Elements[2].ConstantBufferCount = '\0';
  local_138.RegisterCounts.Elements[2].ShaderResourceCount = '\0';
  local_138.RegisterCounts.Elements[2].UnorderedAccessCount = '\0';
  local_138.RegisterCounts.Elements[3].SamplerCount = '\0';
  local_138.RegisterCounts.Elements[3].ConstantBufferCount = '\0';
  local_138.RegisterCounts.Elements[3].ShaderResourceCount = '\0';
  local_138.RegisterCounts.Elements[3].UnorderedAccessCount = '\0';
  if (plVar11 == (longlong *)0x0) {
    local_138.field3_0xec.Flags = 0;
    FVar9.Flags = local_138.field3_0xec.Flags;
    local_138._232_8_ = uVar4;
  }
  else {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
              ((this->Desc).ResourceBindingTier,local_140,local_138.RegisterCounts.Elements + 5,true
              );
    lVar10 = plVar11[5];
    piVar12 = (int *)plVar11[4];
    piVar1 = piVar12 + (longlong)(int)lVar10 * 3;
    while( true ) {
      if ((int)plVar11[5] != (int)lVar10) {
        local_148[0] = 0;
        `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_148);
      }
      if (piVar12 == piVar1) {
        bVar8 = 0;
        goto LAB_145aaad2d;
      }
      if (*piVar12 == 0x1002) break;
      piVar12 = piVar12 + 3;
    }
    bVar8 = 2;
LAB_145aaad2d:
    bVar14 = local_140->UsageFlags << 2;
    bVar8 = (local_140->UsageFlags >> 4 | local_138.field3_0xec.Flags & 0xfd) & 4 ^
            (bVar8 | local_138.field3_0xec.Flags & 2 | local_138.field3_0xec.Flags & 0xf9);
    bVar8 = (bVar8 | bVar14) & 8 ^ bVar8 & 0xf7;
    FVar9.Flags = (bVar8 | bVar14) & 0x10 ^ bVar8 & 0xef;
    uVar5 = local_138._237_3_;
    local_138._232_8_ = (ulonglong)CONCAT31(local_138._237_3_,FVar9.Flags) << 0x20;
    if (GRHIGlobals.SupportsShaderRootConstants != false) {
      FVar9.Flags = (FVar9.Flags | bVar14) & 0x20 ^ FVar9.Flags & 0xdf;
      local_138._232_8_ = (ulonglong)CONCAT31(uVar5,FVar9.Flags) << 0x20;
    }
  }
  local_138.RootSignatureType =
       (*(char *)((longlong)&param_1->_padding_ + 4) != '\n') + RS_WorkGraphGlobal;
  if ((FVar9.Flags & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("QBSS.bAllowIAInputLayout == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                       ,0x5e6,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12RootSignature *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar7 = FD3D12RootSignatureManager::GetRootSignature(&this->RootSignatureManager,&local_138);
  lVar10 = 8;
  do {
    FVar2.Data = pFVar13[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar13 = pFVar13 + -1;
    lVar10 = lVar10 + -1;
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
  } while (lVar10 != 0);
  return pFVar7;
}

// GetRootSignature @ 145aaae70

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetRootSignature(FD3D12Adapter *this,ERHIShaderBundleMode param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FD3D12RootSignature *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                     ,0x5da,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FD3D12RootSignature *)(*pcVar1)();
    return pFVar3;
  }
  return (FD3D12RootSignature *)0x0;
}

// GetWorkGraphGraphicsRootSignature @ 145aabd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RootSignature * __thiscall
FD3D12Adapter::GetWorkGraphGraphicsRootSignature
          (FD3D12Adapter *this,FBoundShaderStateInput *param_1)

{
  D3D12_RESOURCE_BINDING_TIER DVar1;
  ForAnyElementType FVar2;
  FD3D12RootSignature *pFVar3;
  FRHIWorkGraphShader *pFVar4;
  longlong lVar5;
  FRHIUniformBufferShaderBindingLayout *pFVar6;
  undefined1 auStack_148 [32];
  FD3D12QuantizedBoundShaderState local_118;
  ulonglong local_28;
  
  pFVar6 = (FRHIUniformBufferShaderBindingLayout *)&local_118.RegisterCounts;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_118.ShaderBindingLayout._5_2_ = 0;
  local_118.ShaderBindingLayout._7_1_ = 0;
  local_118.ShaderBindingLayout.NumUniformBufferEntries = 0;
  local_118.ShaderBindingLayout._padding_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6]._20_4_ = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7]._20_4_ = 0;
  local_118.ShaderBindingLayout.Hash = 0;
  local_118.ShaderBindingLayout.Flags = None;
  memset(&local_118.ShaderBindingLayout.UniformBufferEntries,0,0xc0);
  DVar1 = (this->Desc).ResourceBindingTier;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.RegisterCounts.Elements[4].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[4].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[4].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[4].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[5].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[5].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[5].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[5].UnorderedAccessCount = '\0';
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayMax = 0;
  pFVar4 = param_1->WorkGraphMeshShaderRHI + 1;
  if (param_1->WorkGraphMeshShaderRHI == (FRHIWorkGraphShader *)0x0) {
    pFVar4 = (FRHIWorkGraphShader *)0x0;
  }
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayNum = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayMax = 0;
  local_118.ShaderBindingLayout.UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
  local_118.RegisterCounts.Elements[0].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[0].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[0].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[0].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[1].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[1].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[1].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[1].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[2].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[2].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[2].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[2].UnorderedAccessCount = '\0';
  local_118.RegisterCounts.Elements[3].SamplerCount = '\0';
  local_118.RegisterCounts.Elements[3].ConstantBufferCount = '\0';
  local_118.RegisterCounts.Elements[3].ShaderResourceCount = '\0';
  local_118.RegisterCounts.Elements[3].UnorderedAccessCount = '\0';
  local_118.RootSignatureType = RS_Raster;
  local_118.field3_0xec = (FD3D12QuantizedBoundShaderState_u_236)0x0;
  local_118._237_3_ = 0;
  QuantizeBoundShaderStateCommon(&local_118,(FD3D12ShaderData *)pFVar4,DVar1,SV_Mesh,false);
  pFVar4 = (FRHIWorkGraphShader *)(param_1->PixelShaderRHI + 1);
  if (param_1->PixelShaderRHI == (FRHIPixelShader *)0x0) {
    pFVar4 = (FRHIWorkGraphShader *)0x0;
  }
  QuantizeBoundShaderStateCommon(&local_118,(FD3D12ShaderData *)pFVar4,DVar1,SV_Pixel,true);
  local_118.RootSignatureType = RS_WorkGraphLocalRaster;
  pFVar3 = FD3D12RootSignatureManager::GetRootSignature(&this->RootSignatureManager,&local_118);
  lVar5 = 8;
  do {
    FVar2.Data = pFVar6[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar6 = pFVar6 + -1;
    lVar5 = lVar5 + -1;
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
  } while (lVar5 != 0);
  return pFVar3;
}

