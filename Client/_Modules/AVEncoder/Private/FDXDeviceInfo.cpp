// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 2

// ~FDXDeviceInfo @ 148d01200

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::FDXDeviceInfo::~FDXDeviceInfo(FDXDeviceInfo *this)

{
  ID3D12Device *pIVar1;
  ID3D11Device *pIVar2;
  IMFDXGIDeviceManager *pIVar3;
  ID3D11DeviceContext *pIVar4;
  
  Reset(this);
  pIVar1 = (this->DxMainAppDevice12).Reference;
  if (pIVar1 != (ID3D12Device *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar2 = (this->DxMainAppDevice11).Reference;
  if (pIVar2 != (ID3D11Device *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->DxDeviceManager).Reference;
  if (pIVar3 != (IMFDXGIDeviceManager *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->DxDeviceContext).Reference;
  if (pIVar4 != (ID3D11DeviceContext *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar2 = (this->DxDevice).Reference;
  if (pIVar2 != (ID3D11Device *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0125b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

// Reset @ 148d11f10

void __thiscall AVEncoder::FVideoDecoderH264_WindowsImpl::FDXDeviceInfo::Reset(FDXDeviceInfo *this)

{
  ID3D11Device *pIVar1;
  ID3D11DeviceContext *pIVar2;
  IMFDXGIDeviceManager *pIVar3;
  ID3D12Device *pIVar4;
  
  pIVar1 = (this->DxDevice).Reference;
  if (pIVar1 != (ID3D11Device *)0x0) {
    (this->DxDevice).Reference = (ID3D11Device *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar2 = (this->DxDeviceContext).Reference;
  if (pIVar2 != (ID3D11DeviceContext *)0x0) {
    (this->DxDeviceContext).Reference = (ID3D11DeviceContext *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->DxDeviceManager).Reference;
  if (pIVar3 != (IMFDXGIDeviceManager *)0x0) {
    (this->DxDeviceManager).Reference = (IMFDXGIDeviceManager *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  this->DxVersion = VersionUnknown;
  pIVar1 = (this->DxMainAppDevice11).Reference;
  if (pIVar1 != (ID3D11Device *)0x0) {
    (this->DxMainAppDevice11).Reference = (ID3D11Device *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar4 = (this->DxMainAppDevice12).Reference;
  if (pIVar4 != (ID3D12Device *)0x0) {
    (this->DxMainAppDevice12).Reference = (ID3D12Device *)0x0;
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  return;
}

