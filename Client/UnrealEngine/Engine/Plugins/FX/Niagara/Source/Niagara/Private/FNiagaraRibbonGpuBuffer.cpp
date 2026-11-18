// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FNiagaraRibbonGpuBuffer @ 1493369f0

void __thiscall FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(FNiagaraRibbonGpuBuffer *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  
  this->NumBytes = 0;
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->SRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->SRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// Allocate @ 14933bff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FNiagaraRibbonGpuBuffer::Allocate
          (FNiagaraRibbonGpuBuffer *this,FRHICommandListBase *param_1,uint param_2,uint param_3,
          ERHIAccess param_4,bool param_5,EBufferUsageFlags param_6)

{
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar1;
  TRefCountPtr<FRHIBuffer> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  FRHIBuffer *pFVar4;
  FRHIUnorderedAccessView *pFVar5;
  FRHIShaderResourceView *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  EBufferUsageFlags EVar11;
  TRefCountPtr<FRHIBuffer> TVar12;
  TRefCountPtr<FRHIShaderResourceView> TVar13;
  TRefCountPtr<FRHIUnorderedAccessView> TVar14;
  FRHIResource *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  EBufferUsageFlags EStack_b8;
  uint uStack_b4;
  wchar_t *local_b0;
  undefined8 uStack_a8;
  ERHIAccess local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  FRHIResource *local_78;
  short local_70;
  longlong lStack_68;
  FName local_60;
  FName FStack_58;
  wchar_t *local_50;
  longlong lStack_48;
  ulonglong local_40;
  longlong lStack_38;
  longlong local_30;
  
  if (param_2 == 0) {
    this->NumBytes = 0;
    pFVar4 = (this->Buffer).Reference;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      (this->Buffer).Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = (this->UAV).Reference;
    if (pFVar5 != (FRHIUnorderedAccessView *)0x0) {
      (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
    pFVar6 = (this->SRV).Reference;
    if (pFVar6 != (FRHIShaderResourceView *)0x0) {
      (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
    bVar8 = false;
  }
  else {
    if ((param_3 < param_2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements <= MaxElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                           ,0x1d0,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pTVar1 = &this->UAV;
    if (param_5) {
      bVar8 = pTVar1->Reference != (FRHIUnorderedAccessView *)0x0;
    }
    else {
      bVar8 = pTVar1->Reference == (FRHIUnorderedAccessView *)0x0;
    }
    if (((bVar8) || (uVar10 = this->NumBytes / this->ElementBytes, uVar10 < param_2)) ||
       ((uint)-((int)ROUND(__real_bf000000 - (float)param_2 * __real_4019999a) >> 1) < uVar10)) {
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_bc = 0;
      uStack_a8 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_8c = 0;
      local_c0 = (int)ROUND((float)param_2 * __real_400ccccd + __real_3f000000) >> 1;
      if (param_3 < local_c0) {
        local_c0 = param_3;
      }
      local_c0 = local_c0 * this->ElementBytes;
      this->NumBytes = local_c0;
      uStack_b4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_b0 = this->DebugName;
      EVar11 = VertexBuffer|ShaderResource|Volatile;
      if (!param_5) {
        EVar11 = VertexBuffer|ShaderResource|UnorderedAccess|Static;
      }
      EStack_b8 = EVar11 | param_6;
      local_60.Number = 0;
      local_60.ComparisonIndex.Value = local_c0;
      FStack_58.Number = uStack_b4;
      FStack_58.ComparisonIndex.Value = EStack_b8;
      local_a0 = param_4;
      local_40 = (ulonglong)param_4;
      lStack_38 = 0;
      lStack_48 = 0;
      local_30 = 0;
      local_50 = local_b0;
      TVar12 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_88);
      pTVar2 = &this->Buffer;
      if ((FRHIBuffer *)pTVar2 != TVar12.Reference) {
        pFVar4 = pTVar2->Reference;
        pTVar2->Reference = (FRHIBuffer *)(TVar12.Reference)->_padding_;
        (TVar12.Reference)->_padding_ = 0;
        if (pFVar4 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar4);
        }
      }
      if ((FRHIResource *)local_88._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_88._0_8_);
      }
      lStack_68 = 0;
      local_70 = (ushort)this->PixelFormat << 8;
      _local_70 = (FResourceArrayUploadInterface *)(ulonglong)CONCAT12(1,local_70);
      TVar13 = FRHICommandListBase::CreateShaderResourceView
                         (param_1,(FRHIBuffer *)(local_88 + 8),(FInitializer *)pTVar2->Reference);
      pTVar3 = &this->SRV;
      if ((FRHIShaderResourceView *)pTVar3 != TVar13.Reference) {
        pFVar6 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar3->Reference = *TVar13.Reference;
        *(undefined8 *)TVar13.Reference = 0;
        if (pFVar6 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
      if ((FRHIResource *)local_88._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_88._8_8_);
      }
      bVar8 = !param_5;
      if (bVar8) {
        uStack_c8 = 0;
        local_d0._0_2_ = CONCAT11(this->PixelFormat,1);
        local_d0 = (ulonglong)CONCAT12(1,(undefined2)local_d0);
        TVar14 = FRHICommandListBase::CreateUnorderedAccessView
                           (param_1,(FRHIBuffer *)&stack0xffffffffffffff88,
                            (FInitializer *)pTVar2->Reference);
      }
      else {
        local_d8 = (FRHIResource *)0x0;
        TVar14.Reference = (FRHIUnorderedAccessView *)&local_d8;
      }
      if ((FRHIUnorderedAccessView *)pTVar1 != TVar14.Reference) {
        pFVar5 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar1->Reference = *TVar14.Reference;
        *(undefined8 *)TVar14.Reference = 0;
        if (pFVar5 != (FRHIUnorderedAccessView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
      if ((bVar8) && (local_78 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_78);
      }
      if ((!bVar8) && (local_d8 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_d8);
      }
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
  }
  return bVar8;
}

// Release @ 1493652e0

void __thiscall FNiagaraRibbonGpuBuffer::Release(FNiagaraRibbonGpuBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  
  this->NumBytes = 0;
  this_00 = (this->Buffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->UAV).Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->SRV).Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_02);
  }
  return;
}

