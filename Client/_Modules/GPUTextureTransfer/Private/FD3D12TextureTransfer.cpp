// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 8

// BindBuffer_Impl @ 14d7582d0

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::BindBuffer_Impl
          (FD3D12TextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D12Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpBindToD3D12Device(param_1,this->D3DDevice);
  return DVar1;
}

// CloseDevice_Impl @ 14d758a70

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::CloseDevice_Impl
          (FD3D12TextureTransfer *this)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D12Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpCloseD3D12Device(this->D3DDevice);
  return DVar1;
}

// CreateGPUResource_Impl @ 14d758e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::CreateGPUResource_Impl
          (FD3D12TextureTransfer *this,FRegisterDMATextureArgs *param_1,FTextureInfo *param_2)

{
  int iVar1;
  DVPStatus DVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  <unnamed_type_External> *local_90;
  DVPGpuExternaResourceDescRec local_88;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((param_2 != (FTextureInfo *)0x0) && (this->D3DDevice != (ID3D12Device *)0x0)) &&
     (param_1->Stride != 0)) {
    plVar3 = (longlong *)(**(code **)(param_1->RHITexture->_padding_ + 0x38))();
    (**(code **)(*plVar3 + 0x50))(plVar3,local_68);
    local_98 = 0;
    local_90 = &param_2->External;
    iVar1 = (**(code **)((longlong)*this->D3DDevice + 0xf8))(this->D3DDevice,plVar3,0,0x10000000);
    if (-1 < iVar1) {
      local_88.width = param_1->Width;
      local_88.height = param_1->Height;
      local_88.size = local_88.height * param_1->Stride;
      local_88.handleType = DVP_OPAQUE_WIN32;
      local_88.format = DVP_RGBA_INTEGER;
      if (param_1->PixelFormat == PF_8Bit) {
        local_88.format = DVP_BGRA;
      }
      local_88.type = -(uint)(param_1->PixelFormat != PF_8Bit) & DVP_INT;
      local_88.external = *(<unnamed_type_external> *)&param_2->External;
      DVar2 = dvpCreateGPUExternalResourceD3D12Device(this->D3DDevice,&local_88,&param_2->DVPHandle)
      ;
      return DVar2;
    }
  }
  return DVP_STATUS_ERROR;
}

// GetConstants_Impl @ 14d7597d0

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::GetConstants_Impl
          (FD3D12TextureTransfer *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D12Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpGetRequiredConstantsD3D12Device
                    (param_1,param_2,param_3,param_4,param_5,param_6,this->D3DDevice);
  return DVar1;
}

// Init_Impl @ 14d759e10

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::Init_Impl
          (FD3D12TextureTransfer *this,FInitializeDMAArgs *param_1)

{
  ID3D12Device *pIVar1;
  DVPStatus DVar2;
  
  pIVar1 = param_1->RHIDevice;
  this->D3DDevice = pIVar1;
  this->D3DCommandQueue = param_1->RHICommandQueue;
  DVar2 = dvpInitD3D12Device(pIVar1,0);
  return DVar2;
}

// MapBufferEndAPI_Impl @ 14d75ac30

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::MapBufferEndAPI_Impl
          (FD3D12TextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D12Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpMapBufferEndD3D12(param_1,this->D3DCommandQueue);
  return DVar1;
}

// MapBufferWaitAPI_Impl @ 14d75ad30

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::MapBufferWaitAPI_Impl
          (FD3D12TextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D12Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpMapBufferWaitD3D12(param_1,this->D3DCommandQueue);
  return DVar1;
}

// UnbindBuffer_Impl @ 14d75bfd0

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::UnbindBuffer_Impl
          (FD3D12TextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D12Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpUnbindFromD3D12Device(param_1,this->D3DDevice);
  return DVar1;
}

