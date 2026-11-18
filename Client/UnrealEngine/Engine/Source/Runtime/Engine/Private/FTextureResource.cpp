// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// IsTextureRHIPartiallyResident @ 148848140

bool __thiscall FTextureResource::IsTextureRHIPartiallyResident(FTextureResource *this)

{
  uint *puVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    puVar1 = (uint *)(**(code **)(*(longlong *)this->_padding_ + 0x20))();
    if ((*puVar1 >> 0x17 & 1) != 0) {
      return true;
    }
  }
  return false;
}

