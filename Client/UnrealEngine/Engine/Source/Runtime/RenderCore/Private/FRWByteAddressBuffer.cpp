// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FRWByteAddressBuffer @ 145e81290

FRWByteAddressBuffer * __thiscall
FRWByteAddressBuffer::FRWByteAddressBuffer(FRWByteAddressBuffer *this,FRWByteAddressBuffer *param_1)

{
  FRHIResource *pFVar1;
  FRHIUnorderedAccessView *this_00;
  
  this->_padding_ = 0;
  pFVar1 = (FRHIResource *)param_1->_padding_;
  this->_padding_ = (longlong)pFVar1;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar1);
  }
  this->_padding_ = 0;
  pFVar1 = (FRHIResource *)param_1->_padding_;
  this->_padding_ = (longlong)pFVar1;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar1);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  this_00 = (param_1->UAV).Reference;
  (this->UAV).Reference = this_00;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return this;
}

// operator= @ 145e85f10

FRWByteAddressBuffer * __thiscall
FRWByteAddressBuffer::operator=(FRWByteAddressBuffer *this,FRWByteAddressBuffer *param_1)

{
  FRHIResource *pFVar1;
  FRHIResource *pFVar2;
  FRHIUnorderedAccessView *this_00;
  FRHIUnorderedAccessView *this_01;
  
  pFVar1 = (FRHIResource *)param_1->_padding_;
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != pFVar1) {
    this->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar1);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  pFVar1 = (FRHIResource *)param_1->_padding_;
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != pFVar1) {
    this->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar1);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this_00 = (param_1->UAV).Reference;
  this_01 = (this->UAV).Reference;
  if (this_01 != this_00) {
    (this->UAV).Reference = this_00;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  return this;
}

// Initialize @ 145ea3720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRWByteAddressBuffer::Initialize
          (FRWByteAddressBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,
          EBufferUsageFlags param_4)

{
  longlong *plVar1;
  FRHIResource *pFVar2;
  FRHIUnorderedAccessView *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  TRefCountPtr<FRHIShaderResourceView> TVar6;
  TRefCountPtr<FRHIUnorderedAccessView> TVar7;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar8;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  FRHIResource *local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  *(uint *)&this->_padding_ = param_3;
  if ((param_3 & 3) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x1f9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_58 = CONCAT44(4,(int)this->_padding_);
  uStack_50 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,param_4) | 0x10118;
  local_38 = 0x70;
  lStack_30 = 0;
  lStack_40 = 0;
  local_28 = 0;
  local_48 = param_2;
  TVar5 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&stack0x00000008);
  if ((FRHIBuffer *)this != TVar5.Reference) {
    pFVar2 = (FRHIResource *)this->_padding_;
    this->_padding_ = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  lStack_60 = 0;
  local_68 = 0x40000;
  TVar6 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&stack0x00000018,(FInitializer *)this->_padding_);
  plVar1 = &this->_padding_;
  if ((FRHIShaderResourceView *)plVar1 != TVar6.Reference) {
    pFVar2 = (FRHIResource *)*plVar1;
    *plVar1 = *(longlong *)TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  lStack_70 = 0;
  local_78 = 0x40001;
  TVar7 = FRHICommandListBase::CreateUnorderedAccessView
                    (param_1,(FRHIBuffer *)&stack0xffffffffffffff80,(FInitializer *)this->_padding_)
  ;
  pTVar8 = &this->UAV;
  if ((FRHIUnorderedAccessView *)pTVar8 != TVar7.Reference) {
    this_00 = pTVar8->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar8->Reference = *TVar7.Reference;
    *(undefined8 *)TVar7.Reference = 0;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_80 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_80);
  }
  return;
}

