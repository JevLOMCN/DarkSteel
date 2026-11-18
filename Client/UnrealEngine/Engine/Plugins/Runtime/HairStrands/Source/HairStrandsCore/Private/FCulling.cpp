// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// ~FCulling @ 14e03e1d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairGroupPublicData::FCulling::~FCulling(FCulling *this)

{
  longlong *plVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  
  pFVar2 = (this->CulledVertexIdBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->CulledVertexIdBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->CulledVertexIdBuffer).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar2 = (this->CulledCurveBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->CulledCurveBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->CulledCurveBuffer).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar2 = (this->DrawIndirectRasterComputeBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->DrawIndirectRasterComputeBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->DrawIndirectRasterComputeBuffer).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar2 = (this->DrawIndirectBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->DrawIndirectBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->DrawIndirectBuffer).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

