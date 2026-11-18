// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// InitRHI @ 145ec0c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrimitiveIdDummyBuffer::InitRHI(FPrimitiveIdDummyBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_a8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_a8._padding_ = 4;
  local_a8.OwnerName.Number = 0;
  uStack_70 = 0;
  local_a8.DebugName._0_4_ = 0x4101;
  local_a8.InitialState = None;
  local_a8.InitAction = Default;
  local_a8.DebugName._4_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8.ClassName.Number = 0;
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  uStack_50 = CONCAT44(local_a8.DebugName._4_4_,0x4101);
  local_a8.ClassName.ComparisonIndex.Value = 0x78;
  local_a8.InitialData = (FResourceArrayUploadInterface *)0x1511733f0;
  uStack_6c = 0;
  local_58 = 4;
  uStack_30 = 0;
  local_48 = L"FPrimitiveIdDummyBuffer";
  uStack_40 = 0;
  local_28 = 0;
  local_38 = 0x100000078;
  FRHICommandListBase::CreateBuffer(param_1,&local_a8);
  plVar1 = &this->_padding_;
  if ((FRHIBufferCreateDesc *)plVar1 != &local_a8) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_a8._padding_;
    local_a8._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145ec0d42;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._padding_);
  }
LAB_145ec0d42:
  uStack_60 = 0;
  local_68 = 0x11c00;
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

// ReleaseRHI @ 145ec0db0

void __thiscall FPrimitiveIdDummyBuffer::ReleaseRHI(FPrimitiveIdDummyBuffer *this)

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

