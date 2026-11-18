// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12DescriptorManager @ 1459ed940

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorManager * __thiscall
FD3D12DescriptorManager::FD3D12DescriptorManager
          (FD3D12DescriptorManager *this,FD3D12Device *param_1,FD3D12DescriptorHeap *param_2,
          TArrayView<TStatId_const_,int> *param_3)

{
  ERHIDescriptorTypeMask EVar1;
  TArrayView<TStatId_const_,int> local_18;
  
  this->_padding_ = (longlong)param_1;
  if (param_2->Type == Standard) {
    EVar1 = CBV|TextureUAV|TextureSRV|TypedBufferUAV|TypedBufferSRV|BufferUAV|BufferSRV;
  }
  else {
    EVar1 = None;
    if (param_2->Type == Sampler) {
      EVar1 = Sampler;
    }
  }
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  FRHIHeapDescriptorAllocator::FRHIHeapDescriptorAllocator
            ((FRHIHeapDescriptorAllocator *)&this->_padding_,EVar1,param_2->NumDescriptors,&local_18
            );
  (this->Heap).Reference = param_2;
  LOCK();
  *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
  UNLOCK();
  return this;
}

// ~FD3D12DescriptorManager @ 1459f73b0

void __thiscall FD3D12DescriptorManager::~FD3D12DescriptorManager(FD3D12DescriptorManager *this)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Heap).Reference;
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
  FRHIDescriptorAllocator::~FRHIDescriptorAllocator((FRHIDescriptorAllocator *)&this->_padding_);
  return;
}

