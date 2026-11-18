// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12UnorderedAccessViewCache @ 145a46870

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12UnorderedAccessViewCache * __thiscall
FD3D12UnorderedAccessViewCache::FD3D12UnorderedAccessViewCache(FD3D12UnorderedAccessViewCache *this)

{
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  memset(this->Views,0,0x300);
  memset(this->Resources,0,0x300);
  if (this->StartSlot <= this + 1) {
    memset(this->StartSlot,-1,0x18);
  }
  return this;
}

