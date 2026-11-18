// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// GetSizeXY @ 146c2d500

TIntPoint<int> __thiscall FRHITexture::GetSizeXY(FRHITexture *this)

{
  undefined4 uVar1;
  longlong lVar2;
  TIntPoint<int>_u_0 in_RDX;
  
  lVar2 = (**(code **)(this->_padding_ + 0x20))();
  uVar1 = *(undefined4 *)(lVar2 + 0x28);
  lVar2 = (**(code **)(this->_padding_ + 0x20))(this);
  *(undefined4 *)((longlong)in_RDX + 4) = uVar1;
  *(undefined4 *)in_RDX = *(undefined4 *)(lVar2 + 0x24);
  return (TIntPoint<int>)in_RDX;
}

