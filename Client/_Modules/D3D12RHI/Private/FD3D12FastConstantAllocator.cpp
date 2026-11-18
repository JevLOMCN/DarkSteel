// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12FastConstantAllocator @ 1459a98a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12FastConstantAllocator * __thiscall
FD3D12FastConstantAllocator::FD3D12FastConstantAllocator
          (FD3D12FastConstantAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FD3D12FastConstantAllocator *pFVar5;
  
  this->_padding_ = (longlong)param_1;
  uVar1 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar1;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12FastConstantAllocator *)(*pcVar2)();
      return pFVar5;
    }
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation(&this->UnderlyingResource,param_1);
  this->Offset = GD3D12FastConstantAllocatorPageSize;
  iVar3 = GD3D12FastConstantAllocatorPageSize;
  this->PageSize = GD3D12FastConstantAllocatorPageSize;
  if ((char)iVar3 != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageSize % ( 256 ) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x97c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12FastConstantAllocator *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// Allocate @ 1459b0ee0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12FastConstantAllocator::Allocate
          (FD3D12FastConstantAllocator *this,uint param_1,FD3D12ResourceLocation *param_2,
          FD3D12ConstantBufferView *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  FD3D12Resource *pFVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  FResourceInfo local_48;
  
  if (this->PageSize < param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bytes <= PageSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x981,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  uVar9 = param_1 + 0xff & 0xffffff00;
  if (this->PageSize < this->Offset + uVar9) {
    this->Offset = 0;
    if (this->_padding_ == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar6)();
        return pvVar8;
      }
    }
    lVar2 = this->_padding_;
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar6)();
        return pvVar8;
      }
    }
    uVar1 = this->PageSize;
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x4f8 + (ulonglong)*(uint *)(lVar2 + 8) * 8)
    ;
    if (uVar1 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x4ab,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar6)();
        return pvVar8;
      }
    }
    if (*(uint *)(lVar2 + 0x21c) < uVar1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSize <= FastConstantPageAllocator.GetMaximumAllocationSizeForPooling()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x4ac,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar6)();
        return pvVar8;
      }
    }
    FD3D12ResourceLocation::Clear(&this->UnderlyingResource);
    bVar7 = FD3D12MultiBuddyAllocator::TryAllocate
                      ((FD3D12MultiBuddyAllocator *)(lVar2 + 0x1e8),uVar1,0x100,
                       &this->UnderlyingResource);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FastConstantPageAllocator.TryAllocate(InSize, InAlignment, ResourceLocation)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x4af,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar6)();
        return pvVar8;
      }
    }
  }
  uVar10 = (ulonglong)this->Offset;
  uVar3 = (this->UnderlyingResource).OffsetFromBaseOfResource;
  pvVar8 = (this->UnderlyingResource).MappedBaseAddress;
  uVar4 = (this->UnderlyingResource).GPUVirtualAddress;
  pFVar5 = (this->UnderlyingResource).UnderlyingResource;
  param_2->Type = eFastAllocation;
  FD3D12ResourceLocation::SetResource(param_2,pFVar5);
  param_2->Size = (ulonglong)uVar9;
  param_2->OffsetFromBaseOfResource = uVar3 + uVar10;
  if (pvVar8 != (void *)0x0) {
    param_2->MappedBaseAddress = (void *)(uVar10 + (longlong)pvVar8);
  }
  param_2->GPUVirtualAddress = uVar10 + uVar4;
  if (param_3 != (FD3D12ConstantBufferView *)0x0) {
    local_48.ResourceLocation = &this->UnderlyingResource;
    local_48.BaseResource = (FD3D12BaseShaderResource *)0x0;
    if (local_48.ResourceLocation == (FD3D12ResourceLocation *)0x0) {
      local_48.Resource = (FD3D12Resource *)0x0;
    }
    else {
      local_48.Resource = (this->UnderlyingResource).UnderlyingResource;
    }
    FD3D12ConstantBufferView::CreateView(param_3,&local_48,this->Offset,uVar9);
  }
  this->Offset = this->Offset + uVar9;
  return param_2->MappedBaseAddress;
}

