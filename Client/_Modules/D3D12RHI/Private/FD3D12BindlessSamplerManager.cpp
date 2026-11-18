// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12BindlessSamplerManager @ 1459a7cc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12BindlessSamplerManager * __thiscall
FD3D12BindlessSamplerManager::FD3D12BindlessSamplerManager
          (FD3D12BindlessSamplerManager *this,FD3D12Device *param_1,
          FD3D12BindlessDescriptorAllocator *param_2)

{
  FD3D12DescriptorHeap *pFVar1;
  
  this->_padding_ = (longlong)param_1;
  pFVar1 = UE::D3D12BindlessDescriptors::CreateGpuHeap
                     (param_1,Sampler,(uint)param_2->SamplerAllocator->_padding_);
  (this->GpuHeap).Reference = pFVar1;
  if (pFVar1 != (FD3D12DescriptorHeap *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  this->Configuration = param_2->BindlessConfiguration;
  return this;
}

// CleanupResources @ 1459b63a0

void __thiscall FD3D12BindlessSamplerManager::CleanupResources(FD3D12BindlessSamplerManager *this)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->GpuHeap).Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    (this->GpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459b63d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// CloseCommandList @ 1459b6e50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessSamplerManager::CloseCommandList
          (FD3D12BindlessSamplerManager *this,FD3D12CommandContext *param_1)

{
  if (1 < (int)this->Configuration) {
    FD3D12StateCache::SetNewBindlessSamplerHeap(&param_1->StateCache,(FD3D12DescriptorHeap *)0x0);
    return;
  }
  return;
}

// GetExplicitHeapForContext @ 1459c2180

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __thiscall
FD3D12BindlessSamplerManager::GetExplicitHeapForContext
          (FD3D12BindlessSamplerManager *this,FD3D12CommandContext *param_1)

{
  return (this->GpuHeap).Reference;
}

// InitializeDescriptor @ 1459c5a70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessSamplerManager::InitializeDescriptor
          (FD3D12BindlessSamplerManager *this,FRHIDescriptorHandle param_1,
          FD3D12SamplerState *param_2)

{
  D3D12_CPU_DESCRIPTOR_HANDLE DVar1;
  FD3D12DescriptorHeap *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1.Type != Sampler) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstHandle.GetType() == ERHIDescriptorType::Sampler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DVar1.ptr = (param_2->OfflineDescriptor)._padding_;
  pFVar2 = (this->GpuHeap).Reference;
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::D3D12Descriptors::CopyDescriptor((FD3D12Device *)this->_padding_,pFVar2,param_1,DVar1);
  return;
}

// OpenCommandList @ 1459c8940

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessSamplerManager::OpenCommandList
          (FD3D12BindlessSamplerManager *this,FD3D12CommandContext *param_1)

{
  if (1 < (int)this->Configuration) {
    FD3D12StateCache::SetNewBindlessSamplerHeap(&param_1->StateCache,(this->GpuHeap).Reference);
    return;
  }
  return;
}

