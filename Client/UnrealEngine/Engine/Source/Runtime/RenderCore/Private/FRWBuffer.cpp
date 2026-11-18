// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRWBuffer @ 145e81190

FRWBuffer * __thiscall FRWBuffer::FRWBuffer(FRWBuffer *this,FRWBuffer *param_1)

{
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  
  (this->Buffer).Reference = (FRHIBuffer *)0x0;
  this_00 = (param_1->Buffer).Reference;
  (this->Buffer).Reference = this_00;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  this_01 = (param_1->UAV).Reference;
  (this->UAV).Reference = this_01;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
  this_02 = (param_1->SRV).Reference;
  (this->SRV).Reference = this_02;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_02);
  }
  this->NumBytes = param_1->NumBytes;
  (this->ClassName).ComparisonIndex = 0;
  (this->ClassName).Number = 0;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  return this;
}

// operator= @ 145e85db0

FRWBuffer * __thiscall FRWBuffer::operator=(FRWBuffer *this,FRWBuffer *param_1)

{
  FRHIBuffer *this_00;
  FRHIBuffer *this_01;
  FRHIUnorderedAccessView *this_02;
  FRHIUnorderedAccessView *this_03;
  FRHIShaderResourceView *this_04;
  FRHIShaderResourceView *this_05;
  
  this_00 = (param_1->Buffer).Reference;
  this_01 = (this->Buffer).Reference;
  if (this_01 != this_00) {
    (this->Buffer).Reference = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  this_02 = (param_1->UAV).Reference;
  this_03 = (this->UAV).Reference;
  if (this_03 != this_02) {
    (this->UAV).Reference = this_02;
    if (this_02 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_02);
    }
    if (this_03 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_03);
    }
  }
  this_04 = (param_1->SRV).Reference;
  this_05 = (this->SRV).Reference;
  if (this_05 != this_04) {
    (this->SRV).Reference = this_04;
    if (this_04 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_04);
    }
    if (this_05 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_05);
    }
  }
  this->NumBytes = param_1->NumBytes;
  return this;
}

