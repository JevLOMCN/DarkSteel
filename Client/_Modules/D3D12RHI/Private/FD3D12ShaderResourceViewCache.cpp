// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// Clear @ 145a54600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ShaderResourceViewCache::Clear(FD3D12ShaderResourceViewCache *this)

{
  int *_Dst;
  FD3D12ShaderResourceView **ppFVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = _UNK_15060db28;
  lVar3 = ___xmm_ffffffffffffffffffffffffffffffff;
  this->_padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  this->_padding_ = lVar2;
  memset(this->Resources,0,0xc00);
  _Dst = this->MaxBoundIndex;
  this->BoundMask[0] = 0;
  this->BoundMask[1] = 0;
  lVar2 = 6;
  this->BoundMask[2] = 0;
  this->BoundMask[3] = 0;
  lVar3 = 6;
  if (this + 1 < _Dst) {
    lVar3 = 0;
  }
  this->BoundMask[4] = 0;
  this->BoundMask[5] = 0;
  if (_Dst <= this + 1) {
    memset(_Dst,-1,lVar3 << 2);
  }
  ppFVar1 = this->Views[0] + 1;
  do {
    (*(FD3D12ShaderResourceView *(*) [64])(ppFVar1 + -1))[0] = (FD3D12ShaderResourceView *)0x0;
    *ppFVar1 = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[1] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[2] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[3] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[4] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[5] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[6] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[7] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[8] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[9] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[10] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0xb] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0xc] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0xd] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0xe] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0xf] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x10] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x11] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x12] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x13] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x14] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x15] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x16] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x17] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x18] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x19] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x1a] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x1b] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x1c] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x1d] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x1e] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x1f] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x20] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x21] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x22] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x23] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x24] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x25] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x26] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x27] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x28] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x29] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x2a] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x2b] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x2c] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x2d] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x2e] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x2f] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x30] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x31] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x32] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x33] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x34] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x35] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x36] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x37] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x38] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x39] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x3a] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x3b] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x3c] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x3d] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1[0x3e] = (FD3D12ShaderResourceView *)0x0;
    ppFVar1 = ppFVar1 + 0x40;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

