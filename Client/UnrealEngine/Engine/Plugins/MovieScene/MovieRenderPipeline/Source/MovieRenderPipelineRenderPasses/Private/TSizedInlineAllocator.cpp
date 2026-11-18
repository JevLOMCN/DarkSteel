// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~ForElementType<unsigned_int> @ 14ddc8e20

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
~ForElementType<unsigned_int>(ForElementType<unsigned_int> *this)

{
  if (this->SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)this->SecondaryData);
  }
  return;
}

