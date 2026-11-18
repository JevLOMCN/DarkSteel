// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Release @ 148751ba0

void __thiscall FRWBuffer::Release(FRWBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  
  this->NumBytes = 0;
  this_00 = (this->Buffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->UAV).Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->SRV).Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_02);
  }
  return;
}

