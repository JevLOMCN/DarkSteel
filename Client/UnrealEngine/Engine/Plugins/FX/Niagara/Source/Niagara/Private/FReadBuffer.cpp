// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Release @ 1491de7a0

void __thiscall FReadBuffer::Release(FReadBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  this->NumBytes = 0;
  this_00 = (this->Buffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

