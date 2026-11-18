// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// FRDGExternalBuffer @ 14e03d920

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGExternalBuffer * __thiscall
FRDGExternalBuffer::FRDGExternalBuffer(FRDGExternalBuffer *this,FRDGExternalBuffer *param_1)

{
  FRDGPooledBuffer *pFVar1;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  
  (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
  pFVar1 = (param_1->Buffer).Reference;
  (this->Buffer).Reference = pFVar1;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
  this_00 = (param_1->SRV).Reference;
  (this->SRV).Reference = this_00;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  this_01 = (param_1->UAV).Reference;
  (this->UAV).Reference = this_01;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  this->Format = param_1->Format;
  return this;
}

// FRDGExternalBuffer @ 14e03d9a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGExternalBuffer * __thiscall FRDGExternalBuffer::FRDGExternalBuffer(FRDGExternalBuffer *this)

{
  (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  this->Format = PF_Unknown;
  return this;
}

// ~FRDGExternalBuffer @ 14e03edd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGExternalBuffer::~FRDGExternalBuffer(FRDGExternalBuffer *this)

{
  longlong *plVar1;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  this_00 = (this->UAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar2 = (this->Buffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014e03ee21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// operator= @ 14e03f250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGExternalBuffer * __thiscall
FRDGExternalBuffer::operator=(FRDGExternalBuffer *this,FRDGExternalBuffer *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar4;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar5;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  longlong lVar6;
  FRDGPooledBuffer *pFVar7;
  
  if (this != param_1) {
    pFVar7 = (this->Buffer).Reference;
    (this->Buffer).Reference = (param_1->Buffer).Reference;
    (param_1->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar7->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar7 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
  }
  pTVar2 = &param_1->SRV;
  pTVar3 = &this->SRV;
  if (pTVar3 != pTVar2) {
    this_00 = pTVar3->Reference;
    pTVar3->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar4 = &param_1->UAV;
  pTVar5 = &this->UAV;
  if (pTVar5 != pTVar4) {
    this_01 = pTVar5->Reference;
    pTVar5->Reference = pTVar4->Reference;
    pTVar4->Reference = (FRHIUnorderedAccessView *)0x0;
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  this->Format = param_1->Format;
  return this;
}

