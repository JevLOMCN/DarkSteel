// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FRWBufferStructured @ 1493350a0

FRWBufferStructured * __thiscall FRWBufferStructured::FRWBufferStructured(FRWBufferStructured *this)

{
  (this->Buffer).Reference = (FRHIBuffer *)0x0;
  (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
  this->NumBytes = 0;
  return this;
}

