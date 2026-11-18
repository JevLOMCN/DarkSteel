// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UEOpenExrRTTI
// Functions: 1

// ~ForElementType<char> @ 14ddb85a0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
~ForElementType<char>(ForElementType<char> *this)

{
  if (this->SecondaryData != (ForElementType<char>)0x0) {
    FMemory::Free((void *)this->SecondaryData);
  }
  return;
}

