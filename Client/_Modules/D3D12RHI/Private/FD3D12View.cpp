// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 8

// GetResource @ 145a1aab0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12Resource * __thiscall FD3D12View::GetResource(FD3D12View *this)

{
  code *pcVar1;
  bool bVar2;
  FD3D12Resource *pFVar3;
  
  if ((this->ResourceInfo).ResourceLocation != (FD3D12ResourceLocation *)0x0) {
    return (this->ResourceInfo).Resource;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsInitialized()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                     ,0xfe,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FD3D12Resource *)(*pcVar1)();
    return pFVar3;
  }
  return (this->ResourceInfo).Resource;
}

// FD3D12View @ 145a908b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12View * __thiscall
FD3D12View::FD3D12View
          (FD3D12View *this,FD3D12Device *param_1,ERHIDescriptorType param_2,
          ERHIDescriptorHeapType param_3,FD3D12View *param_4)

{
  FD3D12OfflineDescriptorManager *this_00;
  FRHIDescriptorHandle FVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12View__6B_;
  (this->ResourceInfo).BaseResource = (FD3D12BaseShaderResource *)0x0;
  (this->ResourceInfo).ResourceLocation = (FD3D12ResourceLocation *)0x0;
  (this->ResourceInfo).Resource = (FD3D12Resource *)0x0;
  (this->ViewSubset).Layout.NumArraySlices = 0;
  *(undefined8 *)&(this->ViewSubset).Layout.NumPlanes = 0;
  (this->ViewSubset).Range.Mip.First = '\0';
  (this->ViewSubset).Range.Mip.Num = '\0';
  this_00 = FD3D12Device::GetOfflineDescriptorManager(param_1,param_3);
  FD3D12OfflineDescriptorManager::AllocateHeapSlot(this_00,&this->OfflineCpuHandle);
  (this->BindlessHandle).Index = 0xffffffff;
  (this->BindlessHandle).Type = Invalid;
  this->HeapType = param_3;
  this->bFirstLinkedObject = param_4 == (FD3D12View *)0x0;
  if (param_2 != Invalid) {
    if (param_4 == (FD3D12View *)0x0) {
      FVar1 = FD3D12BindlessDescriptorAllocator::AllocateDescriptor
                        (param_1->BindlessDescriptorAllocator,0x28);
    }
    else {
      FVar1 = (FRHIDescriptorHandle)&param_4->BindlessHandle;
    }
    this->BindlessHandle = *(FRHIDescriptorHandle *)FVar1;
  }
  return this;
}

// ~FD3D12View @ 145a95350

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12View::~FD3D12View(FD3D12View *this)

{
  FD3D12BaseShaderResource *this_00;
  code *pcVar1;
  bool bVar2;
  FD3D12OfflineDescriptorManager *this_01;
  
  this->_padding_ = (longlong)&___7FD3D12View__6B_;
  this_00 = (this->ResourceInfo).BaseResource;
  if (this_00 != (FD3D12BaseShaderResource *)0x0) {
    FD3D12BaseShaderResource::RemoveRenameListener
              (this_00,(FD3D12ShaderResourceRenameListener *)this);
  }
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
    if (this->bFirstLinkedObject != false) {
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
      FD3D12BindlessDescriptorManager::DeferredFreeFromDestructor
                ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),this->BindlessHandle);
    }
    (this->BindlessHandle).Index = 0xffffffff;
    (this->BindlessHandle).Type = Invalid;
    *(undefined3 *)&(this->BindlessHandle).field_0x5 = 0;
  }
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
  this_01 = FD3D12Device::GetOfflineDescriptorManager
                      ((FD3D12Device *)this->_padding_,this->HeapType);
  FD3D12OfflineDescriptorManager::FreeHeapSlot(this_01,&this->OfflineCpuHandle);
  return;
}

// CreateView @ 145aa07b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12View::CreateView(FD3D12View *this)

{
  code *pcVar1;
  bool bVar2;
  
  UpdateResourceInfo();
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
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
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),this->BindlessHandle,
               this);
    return;
  }
  return;
}

// InitializeBindlessSlot @ 145aaea30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12View::InitializeBindlessSlot(FD3D12View *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
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
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),this->BindlessHandle,
               this);
    return;
  }
  return;
}

// UpdateBindlessSlot @ 145abb410

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12View::UpdateBindlessSlot(FD3D12View *this,FD3D12ContextArray *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
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
               this->BindlessHandle,this);
  }
  return;
}

// UpdateResourceInfo @ 145abb9a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12View::UpdateResourceInfo(FD3D12View *this,undefined8 *param_1,int param_3)

{
  uint *puVar1;
  ERHIDescriptorHeapType EVar2;
  FD3D12BaseShaderResource *this_00;
  FD3D12Resource *pFVar3;
  FD3D12Device *this_01;
  code *pcVar4;
  FD3D12ResourceLocation *pFVar5;
  bool bVar6;
  DXGI_FORMAT DVar7;
  ID3D12Device *pIVar8;
  undefined4 uVar9;
  FD3D12ResourceLayout local_res8;
  
  this_00 = (this->ResourceInfo).BaseResource;
  if (this_00 != (FD3D12BaseShaderResource *)*param_1) {
    if (this_00 != (FD3D12BaseShaderResource *)0x0) {
      FD3D12BaseShaderResource::RemoveRenameListener
                (this_00,(FD3D12ShaderResourceRenameListener *)this);
    }
    if ((FD3D12BaseShaderResource *)*param_1 != (FD3D12BaseShaderResource *)0x0) {
      FD3D12BaseShaderResource::AddRenameListener
                ((FD3D12BaseShaderResource *)*param_1,(FD3D12ShaderResourceRenameListener *)this);
    }
  }
  pFVar5 = (FD3D12ResourceLocation *)param_1[1];
  (this->ResourceInfo).BaseResource = (FD3D12BaseShaderResource *)*param_1;
  (this->ResourceInfo).ResourceLocation = pFVar5;
  (this->ResourceInfo).Resource = (FD3D12Resource *)param_1[2];
  pFVar3 = (this->ResourceInfo).Resource;
  if (pFVar3 != (FD3D12Resource *)0x0) {
    local_res8.NumArraySlices = *(undefined2 *)((longlong)&(pFVar3->Desc)._padding_ + 4);
    DVar7 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat
                      ((DXGI_FORMAT)(pFVar3->Desc)._padding_);
    if ((DVar7 == DXGI_FORMAT_R32G8X24_TYPELESS) ||
       (local_res8.NumPlanes = 1, DVar7 == DXGI_FORMAT_R24G8_TYPELESS)) {
      local_res8.NumPlanes = 2;
    }
    local_res8.NumMips = *(uchar *)((longlong)&(pFVar3->Desc)._padding_ + 6);
    (this->ViewSubset).Layout = local_res8;
                    /* WARNING: Could not recover jumptable at 0x000145abba32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this);
    return;
  }
  uVar9 = 0;
  (this->ViewSubset).Layout.NumArraySlices = 0;
  (this->ViewSubset).Layout.NumPlanes = '\0';
  (this->ViewSubset).Layout.NumMips = '\0';
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_01 = (FD3D12Device *)this->_padding_;
  pIVar8 = FD3D12Device::GetDevice(this_01);
  EVar2 = this->HeapType;
  pcVar4 = *(code **)((longlong)*pIVar8 + 0xc0);
  if (EVar2 != Standard) {
    if (EVar2 == Sampler) {
      uVar9 = 1;
    }
    else if (EVar2 == RenderTarget) {
      uVar9 = 2;
    }
    else if (EVar2 == DepthStencil) {
      uVar9 = 3;
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.h"
                         ,0x17,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  (*pcVar4)(pIVar8,1,(this->OfflineCpuHandle)._padding_,
            *(undefined8 *)
             ((longlong)
              &(((FD3D12DefaultViews *)(&this_01->OnlineDescriptorManager + 1))->NullSRV)._padding_
             + (longlong)param_3),uVar9);
  puVar1 = &(this->OfflineCpuHandle).Version;
  *puVar1 = *puVar1 + 1;
  return;
}

// UpdateView @ 145abc170

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12View::UpdateView
          (FD3D12View *this,FD3D12ContextArray *param_1,undefined8 param_2,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  
  UpdateResourceInfo(this,param_2,param_4);
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
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
               this->BindlessHandle,this);
  }
  return;
}

