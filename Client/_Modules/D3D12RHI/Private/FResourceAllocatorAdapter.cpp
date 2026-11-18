// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// AllocateResource @ 145a9c770

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
FD3D12TransientResourceHeapAllocator::FResourceAllocatorAdapter::AllocateResource
          (FResourceAllocatorAdapter *this,uint param_1,D3D12_HEAP_TYPE param_2,
          FD3D12ResourceDesc *param_3,ulong64 param_4,uint param_5,ED3D12Access param_6,
          ED3D12ResourceStateMode param_7,ED3D12Access param_8,D3D12_CLEAR_VALUE *param_9,
          wchar_t *param_10,FD3D12ResourceLocation *param_11)

{
  undefined2 uVar1;
  undefined2 uVar2;
  FD3D12Adapter *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3D12Resource *local_res8;
  FString local_a8;
  undefined8 local_98;
  ulong64 uStack_90;
  undefined1 local_88 [16];
  DXGI_FORMAT local_78;
  uint uStack_74;
  uint uStack_70;
  D3D12_TEXTURE_LAYOUT DStack_6c;
  undefined8 local_68;
  longlong local_60;
  ulong64 uStack_58;
  undefined1 local_50 [16];
  DXGI_FORMAT local_40;
  uint uStack_3c;
  uint uStack_38;
  D3D12_TEXTURE_LAYOUT DStack_34;
  longlong local_30;
  
  local_30 = param_3->_padding_;
  local_60 = param_3->_padding_;
  uStack_58 = param_3->_padding_;
  local_88._0_8_ = (this->Desc).Width;
  local_88._8_4_ = (this->Desc).Height;
  uVar1 = (this->Desc).DepthOrArraySize;
  uVar2 = (this->Desc).MipLevels;
  local_88._12_4_ = CONCAT22(uVar2,uVar1);
  local_78 = (this->Desc).Format;
  uStack_74 = (this->Desc).SampleDesc.Count;
  uStack_70 = (this->Desc).SampleDesc.Quality;
  DStack_6c = (this->Desc).Layout;
  local_50._0_8_ = param_3->_padding_;
  local_50._8_8_ = param_3->_padding_;
  local_40 = (DXGI_FORMAT)param_3->_padding_;
  uStack_3c = *(uint *)((longlong)&param_3->_padding_ + 4);
  uStack_38 = (uint)param_3->_padding_;
  DStack_34 = *(D3D12_TEXTURE_LAYOUT *)((longlong)&param_3->_padding_ + 4);
  local_98 = *(undefined8 *)&this->Desc;
  uStack_90 = (this->Desc).Alignment;
  local_68 = *(undefined8 *)&(this->Desc).Flags;
  if (((((((int)local_60 != (int)local_98) || (uStack_58 != uStack_90)) ||
        (local_50._0_8_ != local_88._0_8_)) ||
       (((int)local_50._8_8_ != local_88._8_4_ ||
        ((short)((ulonglong)local_50._8_8_ >> 0x20) != uVar1)))) ||
      (((uint)((ulonglong)local_50._8_8_ >> 0x30) != (uint)local_88._12_4_ >> 0x10 ||
       ((local_40 != local_78 || (uStack_3c != uStack_74)))))) ||
     ((uStack_38 != uStack_70 || ((DStack_34 != DStack_6c || ((int)local_30 != (int)local_68)))))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CreatedDesc == DerivedDesc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TransientResourceAllocator.cpp"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8 = (FD3D12Resource *)0x0;
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (FD3D12Adapter *)this->_padding_;
  iVar5 = FD3D12Adapter::CreatePlacedResource
                    (this_00,param_3,*(FD3D12Heap **)((&this->Heap->_padding_)[param_1] + 0x198),
                     this->Allocation->Offset,param_6,param_7,param_8,param_9,&local_res8,param_10,
                     true);
  if (iVar5 < 0) {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar5,
               "Adapter->CreatePlacedResource( InDesc, Heap.GetLinkedObject(GPUIndex)->Get(), Allocation.Offset, InInitialD3D12Access, InResourceStateMode, InDefaultD3D12Access, InClearValue, &NewResource, InName)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TransientResourceAllocator.cpp"
               ,200,(ID3D12Device *)0x0,&local_a8);
  }
  if (param_11->Type != eUndefined) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceLocation.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TransientResourceAllocator.cpp"
                       ,0xca,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FD3D12ResourceLocation::AsHeapAliased(param_11,local_res8);
  param_11->Size = param_4;
  param_11->bTransient = true;
  this->GpuVirtualAddress = local_res8->GPUVirtualAddress;
  if (this_00->bTrackAllAllocation != false) {
    FD3D12Adapter::TrackAllocationData(this_00,param_11,this->Allocation->Size,false);
  }
  return;
}

