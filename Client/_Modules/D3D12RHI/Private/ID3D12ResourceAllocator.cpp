// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// AllocateTexture @ 145a51a90

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
ID3D12ResourceAllocator::AllocateTexture
          (ID3D12ResourceAllocator *this,uint param_1,D3D12_HEAP_TYPE param_2,
          FD3D12ResourceDesc *param_3,EPixelFormat param_4,ED3D12Access param_5,
          ED3D12ResourceStateMode param_6,ED3D12Access param_7,D3D12_CLEAR_VALUE *param_8,
          wchar_t *param_9,FD3D12ResourceLocation *param_10)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  bool bVar4;
  FD3D12Adapter *pFVar5;
  undefined1 auStackY_118 [32];
  D3D12_TILE_SHAPE local_b8;
  undefined1 local_a8 [64];
  D3D12_RESOURCE_ALLOCATION_INFO local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_a8._0_8_ = param_3->_padding_;
  local_a8._8_8_ = param_3->_padding_;
  local_a8._16_8_ = param_3->_padding_;
  local_a8._24_8_ = param_3->_padding_;
  lVar2 = param_3->_padding_;
  local_a8._40_8_ = param_3->_padding_;
  local_a8._48_8_ = param_3->_padding_;
  local_a8[0x38] = param_3->PixelFormat;
  local_a8[0x39] = param_3->UAVPixelFormat;
  local_a8._58_6_ = *(undefined6 *)&param_3->field_0x3a;
  local_a8._32_8_ = lVar2;
  if ((((((uint)local_a8._58_6_ & 2) == 0) && (param_4 != PF_NV12)) && (param_4 != PF_P010)) &&
     ((((uint)local_a8._48_8_ & 3) == 0 &&
      (local_a8._36_4_ = (undefined4)((ulonglong)lVar2 >> 0x20), local_a8._36_4_ == 1)))) {
    local_a8._32_4_ = (undefined4)lVar2;
    local_b8.WidthInTexels = 0;
    local_b8.HeightInTexels = 0;
    local_b8.DepthInTexels = 0;
    uVar3 = local_a8._32_4_;
    Get4KTileShape(&local_b8,uVar3,param_4,local_a8._0_4_,1);
    bVar4 = ((((ushort)local_a8._28_2_ - 1) + local_b8.DepthInTexels) / local_b8.DepthInTexels) *
            ((local_a8._24_4_ + -1 + local_b8.HeightInTexels) / local_b8.HeightInTexels) *
            ((local_a8._16_4_ + -1 + local_b8.WidthInTexels) / local_b8.WidthInTexels) < 0x11;
  }
  else {
    bVar4 = false;
  }
  local_a8._8_8_ = 0x10000;
  if (bVar4) {
    local_a8._8_8_ = 0x1000;
  }
  pFVar5 = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
  if (GNumExplicitGPUsForRendering <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUIndex < GNumExplicitGPUsForRendering",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0x103,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FD3D12Device::GetResourceAllocationInfo
            ((pFVar5->Devices).Elements[param_1],&local_68,(FD3D12ResourceDesc *)local_a8);
  (**(code **)*this)(this,param_1,param_2,local_a8);
  return;
}

