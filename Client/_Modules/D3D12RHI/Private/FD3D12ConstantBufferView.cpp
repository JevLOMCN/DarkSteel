// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// FD3D12ConstantBufferView @ 145a8eab0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ConstantBufferView * __thiscall
FD3D12ConstantBufferView::FD3D12ConstantBufferView
          (FD3D12ConstantBufferView *this,FD3D12Device *param_1,FD3D12ConstantBufferView *param_2)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ConstantBufferView *pFVar3;
  FRHIDescriptorHandle FVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12View__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
  if ((param_1->OfflineDescriptorManagers).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12ConstantBufferView *)(*pcVar1)();
      return pFVar3;
    }
  }
  FD3D12OfflineDescriptorManager::AllocateHeapSlot
            ((FD3D12OfflineDescriptorManager *)&param_1->OfflineDescriptorManagers,
             (FD3D12OfflineDescriptor *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 9;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(bool *)&this->_padding_ = param_2 == (FD3D12ConstantBufferView *)0x0;
  if (param_2 == (FD3D12ConstantBufferView *)0x0) {
    FVar4 = FD3D12BindlessDescriptorAllocator::AllocateDescriptor
                      (param_1->BindlessDescriptorAllocator,AccelerationStructure);
  }
  else {
    FVar4 = (FRHIDescriptorHandle)&param_2->_padding_;
  }
  this->_padding_ = *(longlong *)FVar4;
  this->_padding_ = (longlong)&___7FD3D12ConstantBufferView__6B_;
  return this;
}

// CreateView @ 145aa0400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ConstantBufferView::CreateView
          (FD3D12ConstantBufferView *this,FResourceInfo *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  
  this->Offset = param_2;
  this->_padding_ = (ulonglong)param_2 + param_1->ResourceLocation->GPUVirtualAddress;
  *(uint *)&this->_padding_ = param_3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x100010000010000;
  FD3D12View::UpdateResourceInfo((FD3D12View *)this,param_1,0x30);
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    if (this->_padding_ == 0) {
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
    FD3D12BindlessDescriptorManager::InitializeDescriptor
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),
               (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)this);
    return;
  }
  return;
}

// ResourceRenamed @ 145ab7ec0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ConstantBufferView::ResourceRenamed
          (FD3D12ConstantBufferView *this,FD3D12ContextArray *param_1,
          FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
  code *pcVar1;
  bool bVar2;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
  this->_padding_ = (ulonglong)this->Offset + param_3->GPUVirtualAddress;
  if (((FD3D12BaseShaderResource *)this->_padding_ != param_2) ||
     ((FD3D12ResourceLocation *)this->_padding_ != param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceInfo.BaseResource == InRenamedResource && ResourceInfo.ResourceLocation == InNewResourceLocation"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x146,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (FD3D12BaseShaderResource *)0x0) {
    local_20 = (FD3D12ResourceLocation *)0x0;
    local_18 = (FD3D12Resource *)0x0;
  }
  else {
    local_20 = &param_2->ResourceLocation;
    local_18 = (param_2->ResourceLocation).UnderlyingResource;
  }
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x100010000010000;
  local_28 = param_2;
  FD3D12View::UpdateResourceInfo((FD3D12View *)this,&local_28,0x30);
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    if (this->_padding_ == 0) {
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
    FD3D12BindlessDescriptorManager::UpdateDescriptor
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),param_1,
               (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)this);
  }
  return;
}

// UpdateDescriptor @ 145abb490

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ConstantBufferView::UpdateDescriptor(FD3D12ConstantBufferView *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ID3D12Device *pIVar4;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar4 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,&this->_padding_,this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  return;
}

