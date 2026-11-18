// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// InitRHI @ 1493136d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraEmptyBufferSRV::InitRHI(FNiagaraEmptyBufferSRV *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIBuffer *pFVar2;
  FRHIShaderResourceView *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  TRefCountPtr<FRHIShaderResourceView> TVar6;
  longlong *plVar7;
  TRefCountPtr<FRHIShaderResourceView> *pTVar8;
  undefined1 auStack_138 [32];
  int local_118;
  undefined4 uStack_114;
  FNameEntryId FStack_110;
  uint uStack_10c;
  FName local_108;
  FResourceArrayUploadInterface *pFStack_100;
  ERHIAccess local_f8;
  undefined4 uStack_f4;
  FNameEntryId FStack_f0;
  uint uStack_ec;
  FNameEntryId FStack_e8;
  uint uStack_e4;
  FRHIResource *local_e0;
  undefined1 local_d8 [16];
  wchar_t *local_c8;
  FResourceArrayUploadInterface *pFStack_c0;
  FRHIBufferCreateDesc local_b8;
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  uint *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118 = GPixelFormats[this->PixelFormat].BlockBytes;
  if ((this->DebugName).Data.ArrayNum == 0) {
    local_108 = (FName)0x15060d16c;
  }
  else {
    local_108 = (FName)(this->DebugName).Data.AllocatorInstance.Data;
  }
  uStack_10c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_114 = 0;
  pFStack_100 = (FResourceArrayUploadInterface *)0x0;
  uStack_f4 = 0;
  FStack_f0.Value = 0;
  uStack_ec = 0;
  FStack_e8.Value = 0;
  uStack_e4 = 0;
  FStack_110.Value = 0x4101;
  local_f8 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  local_b8._padding_ = CONCAT44(uStack_114,local_118);
  local_b8._padding_._4_4_ = uStack_10c;
  local_b8._padding_._0_4_ = FStack_110.Value;
  local_b8.ClassName.Number = uStack_ec;
  local_b8.ClassName.ComparisonIndex.Value = FStack_f0.Value;
  local_b8.DebugName = (wchar_t *)local_108;
  local_b8.InitialData = pFStack_100;
  local_b8.OwnerName.Number = uStack_e4;
  local_b8.OwnerName.ComparisonIndex.Value = FStack_e8.Value;
  if (this->PixelFormat == PF_R8G8B8A8) {
    local_b8.InitAction = Initializer;
    local_b8.InitialState = local_f8;
    FRHICommandListBase::CreateBufferInitializer
              (param_1,(FRHIBufferInitializer *)local_78,&local_b8);
    if (local_30 < 4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= GetWritableDataSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBufferInitializer.h"
                         ,0x27,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *local_38 = this->DefaultValue;
    TVar5 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_78);
    pTVar1 = &this->Buffer;
    if ((FRHIBuffer *)pTVar1 != TVar5.Reference) {
      pFVar2 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if (local_e0 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_e0);
    }
    if ((local_48 != (FRHICommandListBase *)0x0) && (local_40 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_78);
    }
    if (local_78._0_8_ != 0) {
      plVar7 = (longlong *)(local_78 + 0x10);
      if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_78._40_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  else {
    local_b8.InitAction = Zeroed;
    local_b8.InitialState = local_f8;
    TVar5 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_d8);
    pTVar1 = &this->Buffer;
    if ((FRHIBuffer *)pTVar1 != TVar5.Reference) {
      pFVar2 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if ((FRHIResource *)local_d8._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_d8._0_8_);
    }
  }
  pFStack_c0 = (FResourceArrayUploadInterface *)0x0;
  local_c8._0_2_ = (ushort)this->PixelFormat << 8;
  local_c8 = (wchar_t *)(ulonglong)CONCAT12(1,(short)local_c8);
  TVar6 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)(local_d8 + 8),(FInitializer *)(this->Buffer).Reference);
  pTVar8 = &this->SRV;
  if ((FRHIShaderResourceView *)pTVar8 != TVar6.Reference) {
    this_00 = pTVar8->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar8->Reference = *TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)local_d8._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_d8._8_8_);
  }
  return;
}

// ReleaseRHI @ 149313930

void __thiscall FNiagaraEmptyBufferSRV::ReleaseRHI(FNiagaraEmptyBufferSRV *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Buffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

