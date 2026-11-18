// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// InitRHI @ 145cfcdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullColorVertexBuffer::InitRHI(FNullColorVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  undefined1 auStack_e8 [32];
  FRHIBufferCreateDesc local_c8;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  FRHIResource *local_70;
  longlong local_68;
  longlong lStack_60;
  wchar_t *local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.InitialState = SRVCompute;
  local_c8.InitAction = Default;
  local_c8.ClassName.ComparisonIndex.Value = 0x4101;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  local_c8.ClassName.Number = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_84 = 0;
  uStack_80 = 0;
  local_c8.DebugName = (wchar_t *)&stack0xffffffffffffffd0;
  lStack_60 = CONCAT44(local_c8.ClassName.Number,0x4101);
  local_c8.OwnerName = (FName)0x151130f48;
  local_88 = 0x78;
  local_68 = 0x10;
  local_c8._padding_ = (longlong)&___7FResourceArrayUploadArrayView__6B_;
  plStack_50 = &local_c8._padding_;
  lStack_40 = 0;
  uStack_74 = 0;
  local_58 = L"FNullColorVertexBuffer";
  local_30 = -1;
  local_38 = 0;
  local_48 = 0x200000078;
  local_28 = -1;
  local_c8.InitialData._0_4_ = 0x10;
  FRHICommandListBase::CreateBuffer(param_1,&local_c8);
  plVar1 = &this->_padding_;
  if ((FRHIBufferCreateDesc *)plVar1 != &local_c8) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_c8._padding_;
    local_c8._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145cfcee2;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_c8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c8._padding_);
  }
LAB_145cfcee2:
  local_c8.DebugName = (wchar_t *)0x0;
  local_c8._padding_ = 0x12500;
  TVar3 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&stack0xffffffffffffff90,(FInitializer *)*plVar1);
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
  if (local_70 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_70);
  }
  return;
}

// ReleaseRHI @ 145cfcf60

void __thiscall FNullColorVertexBuffer::ReleaseRHI(FNullColorVertexBuffer *this)

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

// FNullColorVertexBuffer @ 145d0ab40

FNullColorVertexBuffer * __thiscall
FNullColorVertexBuffer::FNullColorVertexBuffer(FNullColorVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FNullColorVertexBuffer__6B_;
  (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FNullColorVertexBuffer @ 145d0c100

void __thiscall FNullColorVertexBuffer::~FNullColorVertexBuffer(FNullColorVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FNullColorVertexBuffer__6B_;
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

