// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FMeshDeformerGeometry @ 1475a4db0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMeshDeformerGeometry * __thiscall
FMeshDeformerGeometry::FMeshDeformerGeometry(FMeshDeformerGeometry *this)

{
  this->PositionUpdatedFrame = 0;
  this->TangentUpdatedFrame = 0;
  this->ColorUpdatedFrame = 0;
  (this->Position).Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevPosition).Reference = (FRDGPooledBuffer *)0x0;
  (this->Tangent).Reference = (FRDGPooledBuffer *)0x0;
  (this->Color).Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PrevPositionSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->TangentSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ColorSRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// Reset @ 1475f68b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FMeshDeformerGeometry::Reset(FMeshDeformerGeometry *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRDGPooledBuffer *pFVar3;
  FRHIShaderResourceView *pFVar4;
  FRHIShaderResourceView *pFVar5;
  longlong lVar6;
  
  this->TangentUpdatedFrame = 0;
  this->ColorUpdatedFrame = 0;
  this->PositionUpdatedFrame = 0;
  pFVar2 = (this->Color).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->Color).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->Color).Reference;
  pFVar3 = (this->Tangent).Reference;
  if (pFVar3 != pFVar2) {
    (this->Tangent).Reference = pFVar2;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  pFVar2 = (this->Tangent).Reference;
  pFVar3 = (this->PrevPosition).Reference;
  if (pFVar3 != pFVar2) {
    (this->PrevPosition).Reference = pFVar2;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  pFVar2 = (this->PrevPosition).Reference;
  pFVar3 = (this->Position).Reference;
  if (pFVar3 != pFVar2) {
    (this->Position).Reference = pFVar2;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  pFVar4 = (this->ColorSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->ColorSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->ColorSRV).Reference;
  pFVar5 = (this->TangentSRV).Reference;
  if (pFVar5 != pFVar4) {
    (this->TangentSRV).Reference = pFVar4;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar4 = (this->TangentSRV).Reference;
  pFVar5 = (this->PrevPositionSRV).Reference;
  if (pFVar5 != pFVar4) {
    (this->PrevPositionSRV).Reference = pFVar4;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar4 = (this->PrevPositionSRV).Reference;
  pFVar5 = (this->PositionSRV).Reference;
  if (pFVar5 != pFVar4) {
    (this->PositionSRV).Reference = pFVar4;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  return;
}

// ~FMeshDeformerGeometry @ 148624f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FMeshDeformerGeometry::~FMeshDeformerGeometry(FMeshDeformerGeometry *this)

{
  longlong *plVar1;
  FRHIShaderResourceView *pFVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->ColorSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->TangentSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PrevPositionSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PositionSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->Color).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->Tangent).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->PrevPosition).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->Position).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

