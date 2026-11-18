// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetCurrentMipCount @ 1451d0190

int __thiscall FTextureResource::GetCurrentMipCount(FTextureResource *this)

{
  longlong lVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x20))();
    return (int)*(byte *)(lVar1 + 0x30);
  }
  return 0;
}

