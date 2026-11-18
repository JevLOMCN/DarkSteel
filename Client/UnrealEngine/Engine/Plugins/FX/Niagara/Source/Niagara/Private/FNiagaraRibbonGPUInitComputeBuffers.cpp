// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FNiagaraRibbonGPUInitComputeBuffers @ 1493368d0

void __thiscall
FNiagaraRibbonGPUInitComputeBuffers::~FNiagaraRibbonGPUInitComputeBuffers
          (FNiagaraRibbonGPUInitComputeBuffers *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  
  this->TransientAccumulation[1].NumBytes = 0;
  pFVar1 = this->TransientAccumulation[1].Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    this->TransientAccumulation[1].Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = this->TransientAccumulation[1].UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    this->TransientAccumulation[1].UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = this->TransientAccumulation[1].SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    this->TransientAccumulation[1].SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->TransientAccumulation[1].SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = this->TransientAccumulation[1].UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = this->TransientAccumulation[1].Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this->TransientAccumulation[0].NumBytes = 0;
  pFVar1 = this->TransientAccumulation[0].Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    this->TransientAccumulation[0].Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = this->TransientAccumulation[0].UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    this->TransientAccumulation[0].UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = this->TransientAccumulation[0].SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    this->TransientAccumulation[0].SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->TransientAccumulation[0].SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = this->TransientAccumulation[0].UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = this->TransientAccumulation[0].Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRWBuffer::~FRWBuffer(&this->TransientTessellationStats);
  FRWBuffer::~FRWBuffer(&this->SortBuffer);
  return;
}

