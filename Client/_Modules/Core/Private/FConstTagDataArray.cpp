// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FConstTagDataArray @ 141677970

FConstTagDataArray * __thiscall
UE::LLMPrivate::FConstTagDataArray::FConstTagDataArray(FConstTagDataArray *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// ~FConstTagDataArray @ 14167b900

void __thiscall UE::LLMPrivate::FConstTagDataArray::~FConstTagDataArray(FConstTagDataArray *this)

{
  if (*(void **)this != (void *)0x0) {
    FLLMAllocator::Free(Allocator,*(void **)this,*(ulong64 *)&this->field_0x8);
    return;
  }
  return;
}

