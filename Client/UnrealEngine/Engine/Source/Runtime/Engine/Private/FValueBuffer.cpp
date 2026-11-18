// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FValueBuffer @ 147cc5e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FValueBuffer * __thiscall
FGPUSortManager::FValueBuffer::FValueBuffer
          (FValueBuffer *this,FRHICommandListBase *param_1,int param_2,int param_3,
          FSettings *param_4)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  longlong *plVar3;
  FRHIResource *this_00;
  FRHIShaderResourceView *pFVar4;
  FRHIUnorderedAccessView *pFVar5;
  code *pcVar6;
  bool bVar7;
  FValueBuffer *pFVar8;
  TRefCountPtr<FRHIBuffer> TVar9;
  TRefCountPtr<FRHIShaderResourceView> TVar10;
  TRefCountPtr<FRHIUnorderedAccessView> TVar11;
  FRHIResource *local_res8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  longlong lStack_58;
  wchar_t *local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->AllocatedCount = param_2;
  this->UsedCount = param_3;
  this->_padding_ = (longlong)&___7FValueBuffer_FGPUSortManager__6B_;
  pTVar1 = &this->UInt32SRV;
  pTVar1->Reference = (FRHIShaderResourceView *)0x0;
  pTVar2 = &this->UInt32UAV;
  pTVar2->Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Int32SRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->Int32UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  (this->G16R16SRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->G16R16UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  if ((param_3 < 0) || (param_2 < param_3)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InUsedCount >= 0 && InUsedCount <= InAllocatedCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                       ,0x10d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FValueBuffer *)(*pcVar6)();
      return pFVar8;
    }
  }
  local_60 = (ulonglong)(uint)(param_2 * 4);
  lStack_58 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4109);
  local_40 = 0x60;
  lStack_38 = 0;
  local_50 = L"ValueBuffer";
  lStack_48 = 0;
  local_30 = 0;
  TVar9 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  plVar3 = &this->_padding_;
  if ((FRHIBuffer *)plVar3 != TVar9.Reference) {
    this_00 = (FRHIResource *)*plVar3;
    *plVar3 = (TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  lStack_88 = 0;
  local_90 = 0x11c00;
  TVar10 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHIBuffer *)local_c0,(FInitializer *)*plVar3);
  if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
    pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar10.Reference;
    *(undefined8 *)TVar10.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_c0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c0._0_8_);
  }
  TVar11 = FRHICommandListBase::CreateUnorderedAccessView
                     (param_1,(FRHIBuffer *)(local_c0 + 8),(FInitializer *)*plVar3);
  if ((FRHIUnorderedAccessView *)pTVar2 != TVar11.Reference) {
    pFVar5 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar11.Reference;
    *(undefined8 *)TVar11.Reference = 0;
    if (pFVar5 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_c0._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c0._8_8_);
  }
  if ((param_4->AllowedFlags & ValuesAsInt32) != None) {
    lStack_78 = 0;
    local_80 = 0x11d00;
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_b0,(FInitializer *)this->_padding_);
    pTVar1 = &this->Int32SRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_b0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b0._0_8_);
    }
    TVar11 = FRHICommandListBase::CreateUnorderedAccessView
                       (param_1,(FRHIBuffer *)(local_b0 + 8),(FInitializer *)this->_padding_);
    pTVar2 = &this->Int32UAV;
    if ((FRHIUnorderedAccessView *)pTVar2 != TVar11.Reference) {
      pFVar5 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar11.Reference;
      *(undefined8 *)TVar11.Reference = 0;
      if (pFVar5 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_b0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b0._8_8_);
    }
  }
  if ((param_4->AllowedFlags & ValuesAsG16R16F) != None) {
    lStack_68 = 0;
    local_70 = 0x10f00;
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_a0,(FInitializer *)this->_padding_);
    pTVar1 = &this->G16R16SRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_a0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a0._0_8_);
    }
    TVar11 = FRHICommandListBase::CreateUnorderedAccessView
                       (param_1,(FRHIBuffer *)(local_a0 + 8),(FInitializer *)this->_padding_);
    pTVar2 = &this->G16R16UAV;
    if ((FRHIUnorderedAccessView *)pTVar2 != TVar11.Reference) {
      pFVar5 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar11.Reference;
      *(undefined8 *)TVar11.Reference = 0;
      if (pFVar5 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_a0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a0._8_8_);
    }
  }
  return this;
}

// Allocate @ 147cd48c0

void __thiscall
FGPUSortManager::FValueBuffer::Allocate
          (FValueBuffer *this,FAllocationInfo *param_1,int param_2,EGPUSortFlags param_3)

{
  FRHIShaderResourceView *this_00;
  code *pcVar1;
  bool bVar2;
  FRHIShaderResourceView *this_01;
  
  param_1->BufferOffset = this->UsedCount;
  this->UsedCount = this->UsedCount + param_2;
  if (this->AllocatedCount < this->UsedCount) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedCount <= AllocatedCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                       ,0x144,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((char)param_3 < '\0') {
    this_01 = (this->UInt32SRV).Reference;
  }
  else {
    this_01 = (this->G16R16SRV).Reference;
  }
  this_00 = (param_1->BufferSRV).Reference;
  if (this_00 != this_01) {
    (param_1->BufferSRV).Reference = this_01;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// ReleaseRHI @ 147d21470

void __thiscall FGPUSortManager::FValueBuffer::ReleaseRHI(FValueBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  
  pFVar1 = (this->UInt32SRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->UInt32SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->UInt32UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->UInt32UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Int32SRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->Int32SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->Int32UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->Int32UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->G16R16SRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->G16R16SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->G16R16UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->G16R16UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  this->AllocatedCount = 0;
  this->UsedCount = 0;
  return;
}

