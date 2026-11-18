// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// FRDGWrapperVertexBuffer @ 14e07ceb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGWrapperVertexBuffer * __thiscall
FRDGWrapperVertexBuffer::FRDGWrapperVertexBuffer
          (FRDGWrapperVertexBuffer *this,FRDGExternalBuffer *param_1)

{
  FRDGPooledBuffer *pFVar1;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  code *pcVar2;
  bool bVar3;
  FRDGWrapperVertexBuffer *pFVar4;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FRDGWrapperVertexBuffer__6B_;
  (this->ExternalBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  pFVar1 = (param_1->Buffer).Reference;
  (this->ExternalBuffer).Buffer.Reference = pFVar1;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  (this->ExternalBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  this_00 = (param_1->SRV).Reference;
  (this->ExternalBuffer).SRV.Reference = this_00;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  (this->ExternalBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  this_01 = (param_1->UAV).Reference;
  (this->ExternalBuffer).UAV.Reference = this_01;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  (this->ExternalBuffer).Format = param_1->Format;
  if ((this->ExternalBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExternalBuffer.Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\HairCardsVertexFactory.h"
                       ,0x19,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGWrapperVertexBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FRDGWrapperVertexBuffer @ 14e07cf70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGWrapperVertexBuffer * __thiscall
FRDGWrapperVertexBuffer::FRDGWrapperVertexBuffer(FRDGWrapperVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FRDGWrapperVertexBuffer__6B_;
  (this->ExternalBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->ExternalBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ExternalBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->ExternalBuffer).Format = PF_Unknown;
  return this;
}

// ~FRDGWrapperVertexBuffer @ 14e07d110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGWrapperVertexBuffer::~FRDGWrapperVertexBuffer(FRDGWrapperVertexBuffer *this)

{
  longlong *plVar1;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  this_00 = (this->ExternalBuffer).UAV.Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ExternalBuffer).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar2 = (this->ExternalBuffer).Buffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 14e07d4c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGWrapperVertexBuffer * __thiscall
FRDGWrapperVertexBuffer::operator=(FRDGWrapperVertexBuffer *this,FRDGWrapperVertexBuffer *param_1)

{
  FRDGExternalBuffer *pFVar1;
  longlong *plVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar5;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar6;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  longlong lVar7;
  FRDGPooledBuffer *pFVar8;
  FRDGExternalBuffer *pFVar9;
  
  FVertexBuffer::operator=((FVertexBuffer *)this,(FVertexBuffer *)param_1);
  pFVar9 = &param_1->ExternalBuffer;
  pFVar1 = &this->ExternalBuffer;
  if (pFVar1 != pFVar9) {
    pFVar8 = (pFVar1->Buffer).Reference;
    (pFVar1->Buffer).Reference = (pFVar9->Buffer).Reference;
    (pFVar9->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar8 != (FRDGPooledBuffer *)0x0) {
      plVar2 = &pFVar8->_padding_;
      LOCK();
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        if (plVar2 == (longlong *)0x0) {
          pFVar8 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar8 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
    }
  }
  pTVar3 = &(param_1->ExternalBuffer).SRV;
  pTVar4 = &(this->ExternalBuffer).SRV;
  if (pTVar4 != pTVar3) {
    this_00 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar5 = &(param_1->ExternalBuffer).UAV;
  pTVar6 = &(this->ExternalBuffer).UAV;
  if (pTVar6 != pTVar5) {
    this_01 = pTVar6->Reference;
    pTVar6->Reference = pTVar5->Reference;
    pTVar5->Reference = (FRHIUnorderedAccessView *)0x0;
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  (this->ExternalBuffer).Format = (param_1->ExternalBuffer).Format;
  return this;
}

// InitRHI @ 14e0a43b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGWrapperVertexBuffer::InitRHI(FRDGWrapperVertexBuffer *this,FRHICommandListBase *param_1)

{
  FRDGPooledBuffer *pFVar1;
  FRHIBuffer *this_00;
  FRHIBuffer *this_01;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->ExternalBuffer).Buffer.Reference;
  if ((pFVar1 == (FRDGPooledBuffer *)0x0) || ((pFVar1->Buffer).Reference == (FRHIBuffer *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExternalBuffer.Buffer && ExternalBuffer.Buffer->GetRHI()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\HairCardsVertexFactory.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FRHIBuffer *)this->_padding_;
  this_01 = (((this->ExternalBuffer).Buffer.Reference)->Buffer).Reference;
  if (this_00 != this_01) {
    this->_padding_ = (longlong)this_01;
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// ReleaseRHI @ 14e0a9be0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGWrapperVertexBuffer::ReleaseRHI(FRDGWrapperVertexBuffer *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

