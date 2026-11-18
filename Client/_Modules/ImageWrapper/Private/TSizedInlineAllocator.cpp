// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 2

// ~ForElementType<UE::Tasks::Private::FTaskBase_*> @ 1426663e0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Tasks::Private::FTaskBase_*>::~ForElementType<UE::Tasks::Private::FTaskBase_*>
          (ForElementType<UE::Tasks::Private::FTaskBase_*> *this)

{
  if (this->SecondaryData != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free((void *)this->SecondaryData);
  }
  return;
}

// ~ForElementType<wchar_t> @ 142666400

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
~ForElementType<wchar_t>(ForElementType<wchar_t> *this)

{
  if (this->SecondaryData != (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)this->SecondaryData);
  }
  return;
}

