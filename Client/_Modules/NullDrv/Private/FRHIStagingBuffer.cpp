// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 2

// ~FRHIStagingBuffer @ 1446c46c0

void __thiscall FRHIStagingBuffer::~FRHIStagingBuffer(FRHIStagingBuffer *this)

{
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// GetGPUSizeBytes @ 1446c5e00

ulong64 __thiscall FRHIStagingBuffer::GetGPUSizeBytes(FRHIStagingBuffer *this)

{
  return 0;
}

