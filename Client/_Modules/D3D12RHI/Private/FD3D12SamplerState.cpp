// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// FD3D12SamplerState @ 145a460e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SamplerState * __thiscall
FD3D12SamplerState::FD3D12SamplerState
          (FD3D12SamplerState *this,FD3D12Device *param_1,D3D12_SAMPLER_DESC *param_2,ushort param_3
          ,FD3D12SamplerState *param_4)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FD3D12SamplerState *pFVar6;
  FD3D12OfflineDescriptor *pFVar7;
  FRHIDescriptorHandle FVar8;
  undefined1 local_res8 [8];
  FD3D12OfflineDescriptor local_18;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_SamplerState);
  this->_padding_ = (longlong)param_1;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12SamplerState__6B_;
  (this->OfflineDescriptor).HeapIndex = 0;
  (this->OfflineDescriptor).Version = 0;
  (this->OfflineDescriptor)._padding_ = 0;
  (this->BindlessHandle).Index = 0xffffffff;
  (this->BindlessHandle).Type = Invalid;
  this->ID = param_3;
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12SamplerState *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar1 = this->_padding_;
  if (*(int *)(lVar1 + 0x918) < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12SamplerState *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar7 = FD3D12OfflineDescriptorManager::AllocateHeapSlot
                     ((FD3D12OfflineDescriptorManager *)(lVar1 + 0x7c8),&local_18);
  uVar3 = pFVar7->HeapIndex;
  uVar4 = pFVar7->Version;
  (this->OfflineDescriptor)._padding_ = pFVar7->_padding_;
  (this->OfflineDescriptor).HeapIndex = uVar3;
  (this->OfflineDescriptor).Version = uVar4;
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12SamplerState *)(*pcVar2)();
      return pFVar6;
    }
  }
  FD3D12Device::CreateSamplerInternal
            ((FD3D12Device *)this->_padding_,param_2,
             (D3D12_CPU_DESCRIPTOR_HANDLE)(this->OfflineDescriptor)._padding_);
  if (param_1->BindlessDescriptorAllocator->BindlessConfiguration != Disabled) {
    if (param_4 == (FD3D12SamplerState *)0x0) {
      FVar8 = FD3D12BindlessDescriptorAllocator::AllocateDescriptor
                        (param_1->BindlessDescriptorAllocator,(ERHIDescriptorType)local_res8);
    }
    else {
      FVar8 = (FRHIDescriptorHandle)&param_4->BindlessHandle;
    }
    FVar8 = *(FRHIDescriptorHandle *)FVar8;
    this->BindlessHandle = FVar8;
    FD3D12BindlessDescriptorManager::InitializeDescriptor
              (&param_1->BindlessDescriptorManager,FVar8,this);
  }
  return this;
}

// ~FD3D12SamplerState @ 145a488d0

void __thiscall FD3D12SamplerState::~FD3D12SamplerState(FD3D12SamplerState *this)

{
  this->_padding_ = (longlong)&___7FD3D12SamplerState__6B_;
  FreeDescriptor(this);
  FD3D12LinkedAdapterObject<FD3D12SamplerState>::~FD3D12LinkedAdapterObject<FD3D12SamplerState>
            ((FD3D12LinkedAdapterObject<FD3D12SamplerState> *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// FreeDescriptor @ 145a683f0

void __thiscall FD3D12SamplerState::FreeDescriptor(FD3D12SamplerState *this)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  
  if ((this->OfflineDescriptor)._padding_ != 0) {
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
    lVar1 = this->_padding_;
    if (*(int *)(lVar1 + 0x918) < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FD3D12OfflineDescriptorManager::FreeHeapSlot
              ((FD3D12OfflineDescriptorManager *)(lVar1 + 0x7c8),&this->OfflineDescriptor);
    if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
      uVar2 = 0;
      bVar4 = (int)this->_padding_ != 0;
      if (bVar4) {
        for (; ((uint)this->_padding_ >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar5 = 0x20;
      if (bVar4) {
        uVar5 = (ulonglong)uVar2;
      }
      puVar6 = (undefined1 *)((&this->_padding_)[uVar5] + 0x20);
      if ((&this->_padding_)[uVar5] == 0) {
        puVar6 = (undefined1 *)0x0;
      }
      if ((longlong *)puVar6 == &this->_padding_) {
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
        FD3D12BindlessDescriptorManager::ImmediateFree
                  ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),this->BindlessHandle
                  );
      }
    }
  }
  return;
}

// GetBindlessHandle @ 145a68cc0

FRHIDescriptorHandle __thiscall FD3D12SamplerState::GetBindlessHandle(FD3D12SamplerState *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(FRHIDescriptorHandle *)in_RDX = this->BindlessHandle;
  return in_RDX;
}

