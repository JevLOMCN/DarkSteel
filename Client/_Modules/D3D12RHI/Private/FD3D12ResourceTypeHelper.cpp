// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12ResourceTypeHelper @ 145a45260

FD3D12ResourceTypeHelper * __thiscall
FD3D12Resource::FD3D12ResourceTypeHelper::FD3D12ResourceTypeHelper
          (FD3D12ResourceTypeHelper *this,FD3D12ResourceDesc *param_1,D3D12_HEAP_TYPE param_2)

{
  uint uVar1;
  uint uVar2;
  FD3D12ResourceTypeHelper FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FVar3 = *this;
  uVar5 = ~((uint)param_1->_padding_ >> 3);
  this->bSRV = uVar5;
  uVar4 = (uint)param_1->_padding_ & 2;
  uVar1 = -(uint)(uVar4 != 0);
  FVar3 = (FD3D12ResourceTypeHelper)(uVar1 & 2 | uVar5 & 1 | (uint)FVar3 & 0xfffffffc);
  uVar6 = 0;
  this->bDSV = uVar1 >> 1;
  FVar3 = (FD3D12ResourceTypeHelper)(((int)param_1->_padding_ << 2 ^ (uint)FVar3) & 4 ^ (uint)FVar3)
  ;
  *this = FVar3;
  uVar5 = (uint)param_1->_padding_ & 4;
  uVar1 = uVar5 * 2;
  if ((uVar4 != 0) || (uVar4 = uVar6, uVar5 != 0 || FVar3.bRTV != 0)) {
    uVar4 = 0x10;
  }
  uVar5 = uVar6;
  if ((byte)(FVar3.bSRV | (byte)uVar4) == 1) {
    uVar5 = 0x20;
  }
  *this = (FD3D12ResourceTypeHelper)(uVar5 | uVar1 | (uint)FVar3 & 0xffffffc7 | uVar4);
  uVar2 = uVar6;
  if ((int)param_1->_padding_ == 1) {
    uVar2 = 0x40;
  }
  if (param_2 == D3D12_HEAP_TYPE_READBACK) {
    uVar6 = 0x80;
  }
  *this = (FD3D12ResourceTypeHelper)
          (uVar2 | uVar5 | uVar1 | (uint)FVar3 & 0xffffff07 | uVar4 | uVar6);
  return this;
}

