// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FRWBufferStructured @ 145e81210

FRWBufferStructured * __thiscall
FRWBufferStructured::FRWBufferStructured(FRWBufferStructured *this,FRWBufferStructured *param_1)

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
  return this;
}

// ~FRWBufferStructured @ 145e844c0

void __thiscall FRWBufferStructured::~FRWBufferStructured(FRWBufferStructured *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  
  this->NumBytes = 0;
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->SRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->SRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// operator= @ 145e85e60

FRWBufferStructured * __thiscall
FRWBufferStructured::operator=(FRWBufferStructured *this,FRWBufferStructured *param_1)

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

