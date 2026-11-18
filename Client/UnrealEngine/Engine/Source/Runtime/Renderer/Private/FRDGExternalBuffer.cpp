// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Release @ 1449f9630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGExternalBuffer::Release(FRDGExternalBuffer *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  longlong lVar3;
  
  pFVar2 = (this->Buffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->UAV).Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

