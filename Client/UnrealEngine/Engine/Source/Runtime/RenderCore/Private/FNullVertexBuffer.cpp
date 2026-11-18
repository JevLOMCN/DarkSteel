// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// InitRHI @ 145cfcfa0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FNullVertexBuffer::InitRHI(FNullVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  FRHIResource *local_res8;
  undefined1 local_b8 [32];
  undefined8 uStack_98;
  FNameEntryId local_90;
  FName local_88;
  undefined4 uStack_80;
  int iStack_7c;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  wchar_t *local_40;
  FResourceArrayUploadInterface **ppFStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_88.ComparisonIndex.Value = 0xc;
  local_88.Number = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_80 = 0x4101;
  uStack_70 = 0;
  iStack_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_98 = &((FRHIBufferCreateDesc *)local_b8)->_padding_;
  uStack_48 = CONCAT44(iStack_7c,0x4101);
  local_78 = L"FNullVertexBuffer";
  local_68 = 0x78;
  local_50 = 0xc;
  local_b8._24_8_ = &___7FResourceArrayUploadArrayView__6B_;
  ppFStack_38 = &((FRHIBufferCreateDesc *)local_b8)->InitialData;
  uStack_28 = 0;
  uStack_54 = 0;
  local_40 = L"FNullVertexBuffer";
  local_b8._8_8_ = 0;
  local_20 = 0;
  local_30 = 0x200000078;
  local_b8._16_4_ = 0;
  local_90.Value = 0xc;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_b8);
  plVar1 = &this->_padding_;
  if ((FRHIBufferCreateDesc *)plVar1 != (FRHIBufferCreateDesc *)local_b8) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_b8._0_8_;
    local_b8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145cfd09c;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._0_8_);
  }
LAB_145cfd09c:
  uStack_98._0_4_ = None;
  uStack_98._4_4_ = Default;
  local_b8._24_8_ = (FResourceArrayUploadInterface *)0x12500;
  TVar3 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
  pTVar2 = &this->VertexBufferSRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar3.Reference) {
    this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar3.Reference;
    *(undefined8 *)TVar3.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 145cfd110

void __thiscall FNullVertexBuffer::ReleaseRHI(FNullVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// FNullVertexBuffer @ 145d0ab70

FNullVertexBuffer * __thiscall FNullVertexBuffer::FNullVertexBuffer(FNullVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FNullVertexBuffer__6B_;
  (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FNullVertexBuffer @ 145d0c140

void __thiscall FNullVertexBuffer::~FNullVertexBuffer(FNullVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FNullVertexBuffer__6B_;
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

