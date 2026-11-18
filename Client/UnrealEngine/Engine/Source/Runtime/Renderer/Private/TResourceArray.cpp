// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~TResourceArray<FSimpleElementVertex,0> @ 1454d6bf0

void __thiscall
TResourceArray<FSimpleElementVertex,0>::~TResourceArray<FSimpleElementVertex,0>
          (TResourceArray<FSimpleElementVertex,0> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

