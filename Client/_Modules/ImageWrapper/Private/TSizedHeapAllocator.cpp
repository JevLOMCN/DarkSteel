// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 2

// ~ForAnyElementType @ 14266a530

void __thiscall
TSizedHeapAllocator<32,FMemory>::ForAnyElementType::~ForAnyElementType(ForAnyElementType *this)

{
  if (this->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(this->Data);
  }
  return;
}

// ~ForAnyElementType @ 14266a550

void __thiscall
TSizedHeapAllocator<64,FMemory>::ForAnyElementType::~ForAnyElementType(ForAnyElementType *this)

{
  if (this->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(this->Data);
  }
  return;
}

