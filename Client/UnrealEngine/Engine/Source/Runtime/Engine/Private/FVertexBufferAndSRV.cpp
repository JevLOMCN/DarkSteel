// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FVertexBufferAndSRV @ 1475a5e40

FVertexBufferAndSRV * __thiscall FVertexBufferAndSRV::FVertexBufferAndSRV(FVertexBufferAndSRV *this)

{
  (this->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->Size = 0;
  return this;
}

// ~FVertexBufferAndSRV @ 1475aa300

void __thiscall FVertexBufferAndSRV::~FVertexBufferAndSRV(FVertexBufferAndSRV *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->VertexBufferRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// FVertexBufferAndSRV @ 147cc61d0

FVertexBufferAndSRV * __thiscall
FVertexBufferAndSRV::FVertexBufferAndSRV(FVertexBufferAndSRV *this,FVertexBufferAndSRV *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIShaderResourceView *this_00;
  
  (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  pTVar1 = &this->VertexBufferSRV;
  (this->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  this->Size = 0;
  if (this != param_1) {
    (this->VertexBufferRHI).Reference = (param_1->VertexBufferRHI).Reference;
    (param_1->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  }
  pTVar2 = &param_1->VertexBufferSRV;
  if (pTVar1 != pTVar2) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  this->Size = param_1->Size;
  return this;
}

// operator= @ 147cca710

FVertexBufferAndSRV * __thiscall
FVertexBufferAndSRV::operator=(FVertexBufferAndSRV *this,FVertexBufferAndSRV *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  if (this != param_1) {
    this_00 = (this->VertexBufferRHI).Reference;
    (this->VertexBufferRHI).Reference = (param_1->VertexBufferRHI).Reference;
    (param_1->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar1 = &param_1->VertexBufferSRV;
  pTVar2 = &this->VertexBufferSRV;
  if (pTVar2 != pTVar1) {
    this_01 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  this->Size = param_1->Size;
  return this;
}

