// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 6

// BindBuffer_Impl @ 14d7582a0

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D11TextureTransfer::BindBuffer_Impl
          (FD3D11TextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D11Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpBindToD3D11Device(param_1,this->D3DDevice);
  return DVar1;
}

// CloseDevice_Impl @ 14d758a50

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D11TextureTransfer::CloseDevice_Impl
          (FD3D11TextureTransfer *this)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D11Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpCloseD3D11Device(this->D3DDevice);
  return DVar1;
}

// CreateGPUResource_Impl @ 14d758dd0

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D11TextureTransfer::CreateGPUResource_Impl
          (FD3D11TextureTransfer *this,FRegisterDMATextureArgs *param_1,FTextureInfo *param_2)

{
  DVPStatus DVar1;
  ID3D11Resource *pIVar2;
  
  if ((param_2 != (FTextureInfo *)0x0) && (this->D3DDevice != (ID3D11Device *)0x0)) {
    (param_2->External).Handle = (void *)0x0;
    pIVar2 = (ID3D11Resource *)(**(code **)(param_1->RHITexture->_padding_ + 0x38))();
    DVar1 = dvpCreateGPUD3D11Resource(pIVar2,&param_2->DVPHandle);
    return DVar1;
  }
  return DVP_STATUS_ERROR;
}

// GetConstants_Impl @ 14d759760

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D11TextureTransfer::GetConstants_Impl
          (FD3D11TextureTransfer *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D11Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpGetRequiredConstantsD3D11Device
                    (param_1,param_2,param_3,param_4,param_5,param_6,this->D3DDevice);
  return DVar1;
}

// Init_Impl @ 14d759df0

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D11TextureTransfer::Init_Impl
          (FD3D11TextureTransfer *this,FInitializeDMAArgs *param_1)

{
  ID3D11Device *pIVar1;
  DVPStatus DVar2;
  
  pIVar1 = param_1->RHIDevice;
  this->D3DDevice = pIVar1;
  DVar2 = dvpInitD3D11Device(pIVar1,0);
  return DVar2;
}

// UnbindBuffer_Impl @ 14d75bfa0

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FD3D11TextureTransfer::UnbindBuffer_Impl
          (FD3D11TextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->D3DDevice == (ID3D11Device *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpUnbindFromD3D11Device(param_1,this->D3DDevice);
  return DVar1;
}

