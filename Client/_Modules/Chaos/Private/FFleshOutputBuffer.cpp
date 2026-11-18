// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ~FFleshOutputBuffer @ 143a3aa40

void __thiscall
Chaos::Softs::FFleshThreadingProxy::FFleshOutputBuffer::~FFleshOutputBuffer
          (FFleshOutputBuffer *this)

{
  this->_padding_ = (longlong)&___7FFleshOutputBuffer_FFleshThreadingProxy_Softs_Chaos__6B_;
  FManagedArrayCollection::~FManagedArrayCollection(&this->Dynamic);
  this->_padding_ = (longlong)&___7FBuffer_FThreadingProxy_Softs_Chaos__6B_;
  return;
}

