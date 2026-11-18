// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// ~FDynamicReadBuffer @ 145d0beb0

void __thiscall FDynamicReadBuffer::~FDynamicReadBuffer(FDynamicReadBuffer *this)

{
  FRHIResource *pFVar1;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDynamicReadBuffer__6B_;
  pFVar1 = (FRHIResource *)this->_padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)this->_padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
    return;
  }
  return;
}

// Initialize @ 145d419a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicReadBuffer::Initialize
          (FDynamicReadBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,
          uint param_4,EPixelFormat param_5,EBufferUsageFlags param_6)

{
  FRHIResource *pFVar1;
  TRefCountPtr<FRHIBuffer> TVar2;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  longlong *plVar4;
  FRHIResource *local_res8;
  
  plVar4 = &this->_padding_;
  *(uint *)&this->_padding_ = param_3 * param_4;
  TVar2 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  if ((FRHIBuffer *)plVar4 != TVar2.Reference) {
    pFVar1 = (FRHIResource *)*plVar4;
    *plVar4 = (TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar3 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar4);
  plVar4 = &this->_padding_;
  if ((FRHIShaderResourceView *)plVar4 != TVar3.Reference) {
    pFVar1 = (FRHIResource *)*plVar4;
    *plVar4 = *(longlong *)TVar3.Reference;
    *(undefined8 *)TVar3.Reference = 0;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

