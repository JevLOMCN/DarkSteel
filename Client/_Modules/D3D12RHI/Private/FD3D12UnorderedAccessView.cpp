// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12UnorderedAccessView @ 145a90020

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12UnorderedAccessView * __thiscall
FD3D12UnorderedAccessView::FD3D12UnorderedAccessView
          (FD3D12UnorderedAccessView *this,FD3D12Device *param_1,FD3D12UnorderedAccessView *param_2,
          ERHIDescriptorType param_3)

{
  code *pcVar1;
  bool bVar2;
  FD3D12UnorderedAccessView *pFVar3;
  FRHIDescriptorHandle FVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12View__6B_;
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
      pFVar3 = (FD3D12UnorderedAccessView *)(*pcVar1)();
      return pFVar3;
    }
  }
  FD3D12OfflineDescriptorManager::AllocateHeapSlot
            ((FD3D12OfflineDescriptorManager *)&param_1->OfflineDescriptorManagers,
             (FD3D12OfflineDescriptor *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 9;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(bool *)&this->_padding_ = param_2 == (FD3D12UnorderedAccessView *)0x0;
  if (param_3 != Invalid) {
    if (param_2 == (FD3D12UnorderedAccessView *)0x0) {
      FVar4 = FD3D12BindlessDescriptorAllocator::AllocateDescriptor
                        (param_1->BindlessDescriptorAllocator,AccelerationStructure);
    }
    else {
      FVar4 = (FRHIDescriptorHandle)&param_2->_padding_;
    }
    this->_padding_ = *(longlong *)FVar4;
  }
  this->_padding_ = (longlong)&___7FD3D12UnorderedAccessView__6B_;
  (this->CounterResource).Reference = (FD3D12Resource *)0x0;
  this->OffsetInBytes = 0;
  this->StrideInBytes = 0;
  return this;
}

// CreateView @ 145aa04c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12UnorderedAccessView::CreateView
          (FD3D12UnorderedAccessView *this,FResourceInfo *param_1,
          D3D12_UNORDERED_ACCESS_VIEW_DESC *param_2,EFlags param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  FD3D12ViewRange local_res8;
  
  UpdateResourceInfo(this,param_1,param_2,param_3);
  uVar2 = (param_2->field2_0x8).Buffer.FirstElement;
  this->_padding_ = *(longlong *)param_2;
  this->_padding_ = uVar2;
  uVar2 = (param_2->field2_0x8).Buffer.CounterOffsetInBytes;
  this->_padding_ = *(longlong *)((longlong)&param_2->field2_0x8 + 8);
  this->_padding_ = uVar2;
  this->_padding_ = *(longlong *)((longlong)&param_2->field2_0x8 + 0x18);
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,param_2);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateResourceInfo((FD3D12View *)this,param_1,0x20);
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FD3D12BindlessDescriptorManager::InitializeDescriptor
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),
               (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)this);
  }
  return;
}

// ResourceRenamed @ 145ab8100

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12UnorderedAccessView::ResourceRenamed
          (FD3D12UnorderedAccessView *this,FD3D12ContextArray *param_1,
          FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ViewRange local_res8;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    this->_padding_ =
         (this->OffsetInBytes + param_3->OffsetFromBaseOfResource) / (ulonglong)this->StrideInBytes;
  }
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
    local_18 = (FD3D12Resource *)0x0;
    local_20 = (FD3D12ResourceLocation *)0x0;
  }
  else {
    local_20 = &param_2->ResourceLocation;
    local_18 = (param_2->ResourceLocation).UnderlyingResource;
  }
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  local_28 = param_2;
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,(D3D12_UNORDERED_ACCESS_VIEW_DESC *)&this->_padding_)
  ;
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateResourceInfo((FD3D12View *)this,&local_28,0x20);
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

// UpdateDescriptor @ 145abb5e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12UnorderedAccessView::UpdateDescriptor(FD3D12UnorderedAccessView *this)

{
  int *piVar1;
  undefined8 uVar2;
  FD3D12Resource *pFVar3;
  code *pcVar4;
  bool bVar5;
  ID3D12Device *pIVar6;
  ID3D12Resource *pIVar7;
  
  uVar2 = *(undefined8 *)(this->_padding_ + 0x20);
  pFVar3 = (this->CounterResource).Reference;
  if (pFVar3 == (FD3D12Resource *)0x0) {
    pIVar7 = (ID3D12Resource *)0x0;
  }
  else {
    pIVar7 = (pFVar3->Resource).Reference;
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar6 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  (**(code **)((longlong)*pIVar6 + 0x98))(pIVar6,uVar2,pIVar7,&this->_padding_,this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  return;
}

// UpdateResourceInfo @ 145abb680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12UnorderedAccessView::UpdateResourceInfo
          (FD3D12UnorderedAccessView *this,FResourceInfo *param_1,
          D3D12_UNORDERED_ACCESS_VIEW_DESC *param_2,EFlags param_3)

{
  longlong *plVar1;
  FRHIGPUMask FVar2;
  uint *puVar3;
  FD3D12Adapter *this_00;
  FD3D12Resource *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  TRefCountPtr<FD3D12Resource> *pTVar9;
  uint uVar10;
  undefined1 auStackY_88 [32];
  D3D12_HEAP_PROPERTIES local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  this->OffsetInBytes = 0;
  uVar10 = 0;
  this->StrideInBytes = 0;
  if (param_2->ViewDimension == D3D12_UAV_DIMENSION_BUFFER) {
    if (param_2->Format == DXGI_FORMAT_UNKNOWN) {
      uVar10 = (param_2->field2_0x8).Buffer.StructureByteStride;
    }
    else {
      switch(param_2->Format) {
      case DXGI_FORMAT_R32G32B32A32_TYPELESS:
      case DXGI_FORMAT_R32G32B32A32_FLOAT:
      case DXGI_FORMAT_R32G32B32A32_UINT:
      case DXGI_FORMAT_R32G32B32A32_SINT:
      case DXGI_FORMAT_BC2_TYPELESS:
      case DXGI_FORMAT_BC2_UNORM:
      case DXGI_FORMAT_BC2_UNORM_SRGB:
      case DXGI_FORMAT_BC3_TYPELESS:
      case DXGI_FORMAT_BC3_UNORM:
      case DXGI_FORMAT_BC3_UNORM_SRGB:
      case DXGI_FORMAT_BC5_TYPELESS:
      case DXGI_FORMAT_BC5_UNORM:
      case DXGI_FORMAT_BC5_SNORM:
      case DXGI_FORMAT_BC6H_TYPELESS:
      case DXGI_FORMAT_BC6H_UF16:
      case DXGI_FORMAT_BC6H_SF16:
      case DXGI_FORMAT_BC7_TYPELESS:
      case DXGI_FORMAT_BC7_UNORM:
      case DXGI_FORMAT_BC7_UNORM_SRGB:
        uVar10 = 0x10;
        break;
      case DXGI_FORMAT_R32G32B32_TYPELESS:
      case DXGI_FORMAT_R32G32B32_FLOAT:
      case DXGI_FORMAT_R32G32B32_UINT:
      case DXGI_FORMAT_R32G32B32_SINT:
        uVar10 = 0xc;
        break;
      case DXGI_FORMAT_R16G16B16A16_TYPELESS:
      case DXGI_FORMAT_R16G16B16A16_FLOAT:
      case DXGI_FORMAT_R16G16B16A16_UNORM:
      case DXGI_FORMAT_R16G16B16A16_UINT:
      case DXGI_FORMAT_R16G16B16A16_SNORM:
      case DXGI_FORMAT_R16G16B16A16_SINT:
      case DXGI_FORMAT_R32G32_TYPELESS:
      case DXGI_FORMAT_R32G32_FLOAT:
      case DXGI_FORMAT_R32G32_UINT:
      case DXGI_FORMAT_R32G32_SINT:
      case DXGI_FORMAT_R32G8X24_TYPELESS:
      case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
      case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
      case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
      case DXGI_FORMAT_BC1_TYPELESS:
      case DXGI_FORMAT_BC1_UNORM:
      case DXGI_FORMAT_BC1_UNORM_SRGB:
      case DXGI_FORMAT_BC4_TYPELESS:
      case DXGI_FORMAT_BC4_UNORM:
      case DXGI_FORMAT_BC4_SNORM:
      case DXGI_FORMAT_Y416:
      case DXGI_FORMAT_Y210:
      case DXGI_FORMAT_Y216:
        uVar10 = 8;
        break;
      case DXGI_FORMAT_R10G10B10A2_TYPELESS:
      case DXGI_FORMAT_R10G10B10A2_UNORM:
      case DXGI_FORMAT_R10G10B10A2_UINT:
      case DXGI_FORMAT_R11G11B10_FLOAT:
      case DXGI_FORMAT_R8G8B8A8_TYPELESS:
      case DXGI_FORMAT_R8G8B8A8_UNORM:
      case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
      case DXGI_FORMAT_R8G8B8A8_UINT:
      case DXGI_FORMAT_R8G8B8A8_SNORM:
      case DXGI_FORMAT_R8G8B8A8_SINT:
      case DXGI_FORMAT_R16G16_TYPELESS:
      case DXGI_FORMAT_R16G16_FLOAT:
      case DXGI_FORMAT_R16G16_UNORM:
      case DXGI_FORMAT_R16G16_UINT:
      case DXGI_FORMAT_R16G16_SNORM:
      case DXGI_FORMAT_R16G16_SINT:
      case DXGI_FORMAT_R32_TYPELESS:
      case DXGI_FORMAT_D32_FLOAT:
      case DXGI_FORMAT_R32_FLOAT:
      case DXGI_FORMAT_R32_UINT:
      case DXGI_FORMAT_R32_SINT:
      case DXGI_FORMAT_R24G8_TYPELESS:
      case DXGI_FORMAT_D24_UNORM_S8_UINT:
      case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
      case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
      case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
      case DXGI_FORMAT_R8G8_B8G8_UNORM:
      case DXGI_FORMAT_G8R8_G8B8_UNORM:
      case DXGI_FORMAT_B8G8R8A8_UNORM:
      case DXGI_FORMAT_B8G8R8X8_UNORM:
      case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
      case DXGI_FORMAT_B8G8R8A8_TYPELESS:
      case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
      case DXGI_FORMAT_B8G8R8X8_TYPELESS:
      case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
      case DXGI_FORMAT_AYUV:
      case DXGI_FORMAT_Y410:
      case DXGI_FORMAT_P010:
      case DXGI_FORMAT_P016:
      case DXGI_FORMAT_YUY2:
        uVar10 = 4;
        break;
      case DXGI_FORMAT_R8G8_TYPELESS:
      case DXGI_FORMAT_R8G8_UNORM:
      case DXGI_FORMAT_R8G8_UINT:
      case DXGI_FORMAT_R8G8_SNORM:
      case DXGI_FORMAT_R8G8_SINT:
      case DXGI_FORMAT_R16_TYPELESS:
      case DXGI_FORMAT_R16_FLOAT:
      case DXGI_FORMAT_D16_UNORM:
      case DXGI_FORMAT_R16_UNORM:
      case DXGI_FORMAT_R16_UINT:
      case DXGI_FORMAT_R16_SNORM:
      case DXGI_FORMAT_R16_SINT:
      case DXGI_FORMAT_B5G6R5_UNORM:
      case DXGI_FORMAT_B5G5R5A1_UNORM:
      case DXGI_FORMAT_NV12:
      case DXGI_FORMAT_NV11:
      case DXGI_FORMAT_B4G4R4A4_UNORM:
        uVar10 = 2;
        break;
      case DXGI_FORMAT_R8_TYPELESS:
      case DXGI_FORMAT_R8_UNORM:
      case DXGI_FORMAT_R8_UINT:
      case DXGI_FORMAT_R8_SNORM:
      case DXGI_FORMAT_R8_SINT:
      case DXGI_FORMAT_A8_UNORM:
        uVar10 = 1;
        break;
      default:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\DXGIUtilities.h"
                           ,0x159,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      case DXGI_FORMAT_R1_UNORM:
      }
    }
    this->StrideInBytes = uVar10;
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StrideInBytes > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                           ,0x1c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = (ulonglong)this->StrideInBytes * (param_2->field2_0x8).Buffer.FirstElement -
            param_1->ResourceLocation->OffsetFromBaseOfResource;
    this->OffsetInBytes = uVar8;
    if ((uVar8 % (ulonglong)this->StrideInBytes != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OffsetInBytes % StrideInBytes) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                           ,0x1f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_3 & NeedsCounter) != None) {
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar3 = (uint *)this->_padding_;
    FVar2.GPUMask = *puVar3;
    if ((*(longlong *)(puVar3 + 4) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = *(FD3D12Adapter **)(puVar3 + 4);
    pTVar9 = &this->CounterResource;
    pFVar4 = pTVar9->Reference;
    if (pFVar4 != (FD3D12Resource *)0x0) {
      pTVar9->Reference = (FD3D12Resource *)0x0;
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    local_38.CreationNodeMask = FVar2.GPUMask;
    if (GVirtualMGPU != 0) {
      local_38.CreationNodeMask = 1;
    }
    local_38.Type = D3D12_HEAP_TYPE_DEFAULT;
    local_38.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    local_38.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    local_38.VisibleNodeMask = local_38.CreationNodeMask;
    FD3D12Adapter::CreateBuffer
              (this_00,&local_38,FVar2,UAVMask,MultiState,UAVMask,4,&pTVar9->Reference,L"Counter",
               D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS);
  }
  return;
}

// UpdateView @ 145abbec0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12UnorderedAccessView::UpdateView
          (FD3D12UnorderedAccessView *this,FD3D12ContextArray *param_1,FResourceInfo *param_2,
          D3D12_UNORDERED_ACCESS_VIEW_DESC *param_3,EFlags param_4)

{
  ulong64 uVar1;
  FD3D12ViewRange local_res8;
  
  UpdateResourceInfo(this,param_2,param_3,param_4);
  uVar1 = (param_3->field2_0x8).Buffer.FirstElement;
  this->_padding_ = *(longlong *)param_3;
  this->_padding_ = uVar1;
  uVar1 = (param_3->field2_0x8).Buffer.CounterOffsetInBytes;
  this->_padding_ = *(longlong *)((longlong)&param_3->field2_0x8 + 8);
  this->_padding_ = uVar1;
  this->_padding_ = *(longlong *)((longlong)&param_3->field2_0x8 + 0x18);
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,param_3);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateView((FD3D12View *)this,param_1,param_2,0x20);
  return;
}

