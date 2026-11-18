// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// ResourceRenamed @ 145a7c280

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TD3D12View<FD3D12ShaderResourceView,D3D12_SHADER_RESOURCE_VIEW_DESC>::ResourceRenamed
          (TD3D12View<FD3D12ShaderResourceView,D3D12_SHADER_RESOURCE_VIEW_DESC> *this,
          FD3D12ContextArray *param_1,FD3D12BaseShaderResource *param_2,
          FD3D12ResourceLocation *param_3)

{
  D3D12_SHADER_RESOURCE_VIEW_DESC *pDVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FD3D12ViewRange local_res8;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
  if (((FD3D12BaseShaderResource *)this->_padding_ != param_2) ||
     ((FD3D12ResourceLocation *)this->_padding_ != param_3)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceInfo.BaseResource == InRenamedResource && ResourceInfo.ResourceLocation == InNewResourceLocation"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x146,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (FD3D12BaseShaderResource *)0x0) {
    local_18 = (FD3D12Resource *)0x0;
    local_20 = (FD3D12ResourceLocation *)0x0;
  }
  else {
    local_20 = &param_2->ResourceLocation;
    local_18 = (param_2->ResourceLocation).UnderlyingResource;
  }
  pDVar1 = &this->D3DViewDesc;
  pDVar1->Format = (this->D3DViewDesc).Format;
  pDVar1->ViewDimension = (this->D3DViewDesc).ViewDimension;
  (this->D3DViewDesc).Shader4ComponentMapping = (this->D3DViewDesc).Shader4ComponentMapping;
  *(undefined4 *)&(this->D3DViewDesc).field_0xc = *(undefined4 *)&(this->D3DViewDesc).field_0xc;
  uVar3 = *(undefined8 *)((longlong)&(this->D3DViewDesc).field3_0x10 + 8);
  (this->D3DViewDesc).field3_0x10.Buffer.FirstElement =
       (this->D3DViewDesc).field3_0x10.Buffer.FirstElement;
  *(undefined8 *)((longlong)&(this->D3DViewDesc).field3_0x10 + 8) = uVar3;
  *(undefined8 *)((longlong)&(this->D3DViewDesc).field3_0x10 + 0x10) =
       *(undefined8 *)((longlong)&(this->D3DViewDesc).field3_0x10 + 0x10);
  local_28 = param_2;
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,pDVar1);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateView((FD3D12View *)this,param_1,&local_28,0);
  return;
}

// ResourceRenamed @ 145ab7a50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TD3D12View<FD3D12ConstantBufferView,D3D12_CONSTANT_BUFFER_VIEW_DESC>::ResourceRenamed
          (TD3D12View<FD3D12ConstantBufferView,D3D12_CONSTANT_BUFFER_VIEW_DESC> *this,
          FD3D12ContextArray *param_1,FD3D12BaseShaderResource *param_2,
          FD3D12ResourceLocation *param_3)

{
  code *pcVar1;
  bool bVar2;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
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

// ResourceRenamed @ 145ab7b60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TD3D12View<FD3D12DepthStencilView,D3D12_DEPTH_STENCIL_VIEW_DESC>::ResourceRenamed
          (TD3D12View<FD3D12DepthStencilView,D3D12_DEPTH_STENCIL_VIEW_DESC> *this,
          FD3D12ContextArray *param_1,FD3D12BaseShaderResource *param_2,
          FD3D12ResourceLocation *param_3)

{
  D3D12_DEPTH_STENCIL_VIEW_DESC *pDVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12ViewRange local_res8;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
  if (((FD3D12BaseShaderResource *)this->_padding_ != param_2) ||
     ((FD3D12ResourceLocation *)this->_padding_ != param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceInfo.BaseResource == InRenamedResource && ResourceInfo.ResourceLocation == InNewResourceLocation"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x146,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (FD3D12BaseShaderResource *)0x0) {
    local_18 = (FD3D12Resource *)0x0;
    local_20 = (FD3D12ResourceLocation *)0x0;
  }
  else {
    local_20 = &param_2->ResourceLocation;
    local_18 = (param_2->ResourceLocation).UnderlyingResource;
  }
  pDVar1 = &this->D3DViewDesc;
  pDVar1->Format = (this->D3DViewDesc).Format;
  pDVar1->ViewDimension = (this->D3DViewDesc).ViewDimension;
  *(undefined8 *)&(this->D3DViewDesc).Flags = *(undefined8 *)&(this->D3DViewDesc).Flags;
  *(undefined8 *)((longlong)&(this->D3DViewDesc).field3_0xc + 4) =
       *(undefined8 *)((longlong)&(this->D3DViewDesc).field3_0xc + 4);
  local_28 = param_2;
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,pDVar1);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateResourceInfo((FD3D12View *)this,&local_28,0x40);
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
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
    FD3D12BindlessDescriptorManager::UpdateDescriptor
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),param_1,
               (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)this);
  }
  return;
}

// ResourceRenamed @ 145ab7c80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TD3D12View<FD3D12RenderTargetView,D3D12_RENDER_TARGET_VIEW_DESC>::ResourceRenamed
          (TD3D12View<FD3D12RenderTargetView,D3D12_RENDER_TARGET_VIEW_DESC> *this,
          FD3D12ContextArray *param_1,FD3D12BaseShaderResource *param_2,
          FD3D12ResourceLocation *param_3)

{
  D3D12_RENDER_TARGET_VIEW_DESC *pDVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  FD3D12ViewRange local_res8;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
  if (((FD3D12BaseShaderResource *)this->_padding_ != param_2) ||
     ((FD3D12ResourceLocation *)this->_padding_ != param_3)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceInfo.BaseResource == InRenamedResource && ResourceInfo.ResourceLocation == InNewResourceLocation"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x146,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (FD3D12BaseShaderResource *)0x0) {
    local_18 = (FD3D12Resource *)0x0;
    local_20 = (FD3D12ResourceLocation *)0x0;
  }
  else {
    local_20 = &param_2->ResourceLocation;
    local_18 = (param_2->ResourceLocation).UnderlyingResource;
  }
  uVar3 = (this->D3DViewDesc).field2_0x8.Buffer.FirstElement;
  pDVar1 = &this->D3DViewDesc;
  pDVar1->Format = (this->D3DViewDesc).Format;
  pDVar1->ViewDimension = (this->D3DViewDesc).ViewDimension;
  (this->D3DViewDesc).field2_0x8.Buffer.FirstElement = uVar3;
  *(undefined8 *)((longlong)&(this->D3DViewDesc).field2_0x8 + 8) =
       *(undefined8 *)((longlong)&(this->D3DViewDesc).field2_0x8 + 8);
  local_28 = param_2;
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,pDVar1);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateResourceInfo((FD3D12View *)this,&local_28,0x10);
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FD3D12BindlessDescriptorManager::UpdateDescriptor
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),param_1,
               (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)this);
  }
  return;
}

// ResourceRenamed @ 145ab7da0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TD3D12View<FD3D12UnorderedAccessView,D3D12_UNORDERED_ACCESS_VIEW_DESC>::ResourceRenamed
          (TD3D12View<FD3D12UnorderedAccessView,D3D12_UNORDERED_ACCESS_VIEW_DESC> *this,
          FD3D12ContextArray *param_1,FD3D12BaseShaderResource *param_2,
          FD3D12ResourceLocation *param_3)

{
  D3D12_UNORDERED_ACCESS_VIEW_DESC *pDVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  FD3D12ViewRange local_res8;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
  if (((FD3D12BaseShaderResource *)this->_padding_ != param_2) ||
     ((FD3D12ResourceLocation *)this->_padding_ != param_3)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceInfo.BaseResource == InRenamedResource && ResourceInfo.ResourceLocation == InNewResourceLocation"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x146,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (FD3D12BaseShaderResource *)0x0) {
    local_18 = (FD3D12Resource *)0x0;
    local_20 = (FD3D12ResourceLocation *)0x0;
  }
  else {
    local_20 = &param_2->ResourceLocation;
    local_18 = (param_2->ResourceLocation).UnderlyingResource;
  }
  uVar3 = (this->D3DViewDesc).field2_0x8.Buffer.FirstElement;
  pDVar1 = &this->D3DViewDesc;
  pDVar1->Format = (this->D3DViewDesc).Format;
  pDVar1->ViewDimension = (this->D3DViewDesc).ViewDimension;
  (this->D3DViewDesc).field2_0x8.Buffer.FirstElement = uVar3;
  uVar3 = (this->D3DViewDesc).field2_0x8.Buffer.CounterOffsetInBytes;
  *(undefined8 *)((longlong)&(this->D3DViewDesc).field2_0x8 + 8) =
       *(undefined8 *)((longlong)&(this->D3DViewDesc).field2_0x8 + 8);
  (this->D3DViewDesc).field2_0x8.Buffer.CounterOffsetInBytes = uVar3;
  *(undefined8 *)((longlong)&(this->D3DViewDesc).field2_0x8 + 0x18) =
       *(undefined8 *)((longlong)&(this->D3DViewDesc).field2_0x8 + 0x18);
  local_28 = param_2;
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,pDVar1);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateResourceInfo((FD3D12View *)this,&local_28,0x20);
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FD3D12BindlessDescriptorManager::UpdateDescriptor
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),param_1,
               (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)this);
  }
  return;
}

