// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// As<Chaos::Softs::FFleshThreadingProxy::FFleshInputBuffer> @ 143a25720

FFleshInputBuffer * __thiscall
Chaos::Softs::FThreadingProxy::FBuffer::As<Chaos::Softs::FFleshThreadingProxy::FFleshInputBuffer>
          (FBuffer *this)

{
  bool bVar1;
  FFleshInputBuffer *pFVar2;
  FName local_res8 [4];
  
  ::FName::FName(local_res8,"Flesh");
  if ((local_res8[0].ComparisonIndex.Value != (this->TypeName).ComparisonIndex.Value) ||
     (bVar1 = true, local_res8[0].Number != (this->TypeName).Number)) {
    bVar1 = false;
  }
  pFVar2 = (FFleshInputBuffer *)0x0;
  if (bVar1) {
    pFVar2 = (FFleshInputBuffer *)this;
  }
  return pFVar2;
}

// ~FBuffer @ 143a39fc0

void __thiscall Chaos::Softs::FThreadingProxy::FBuffer::~FBuffer(FBuffer *this)

{
  this->_padding_ = (longlong)&___7FBuffer_FThreadingProxy_Softs_Chaos__6B_;
  return;
}

